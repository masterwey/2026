# 存储空间分配 - 快速参考卡片

## 🎯 30 秒快速了解

```
128MB SPI-NAND Flash
├─ SPL(1MB)       → Bootloader
├─ ENV(512KB)     → 环变(冗余)
├─ OS(30MB)       → 系统(冗余)
├─ RODATA(35MB)   → 资源(.mo 文件)
└─ DATA(50MB)     → config.json + NFTL
   ├─ 存储位置：/data/config.json
   ├─ 保存周期：30秒
   ├─ 掉电安全：✓ NAND Flash 属性 + NFTL 保护
   └─ 最多丢失：30秒内的修改
```

---

## 📍 地址速查 (十六进制)

```
SPL:    0x0000000 - 0x0100000   (1MB)
ENV:    0x0100000 - 0x0140000   (256KB)
ENV_R:  0x0140000 - 0x0180000   (256KB)
OS:     0x0180000 - 0x0F80000   (15MB)
OS_R:   0x0F80000 - 0x1D80000   (15MB)
RODATA: 0x1D80000 - 0x3880000   (35MB)
DATA:   0x3880000 - 0x6280000   (50MB)
预留:   0x6280000 - 0x8000000   (11.5MB)
```

---

## ⏱️ 时间速查

| 操作 | 耗时 |
|------|------|
| 内存 JSON 访问 | < 1ms |
| JSON 序列化 | < 1ms |
| 文件系统 I/O | 1-5ms |
| NFTL 地址映射 | < 5ms |
| NAND 页读取 | 50-100μs |
| NAND 页写入 | 500-1000μs |
| 完整保存 | 50-150ms |
| 系统启动 | ~1s |

---

## 💾 容量速查

| 项目 | 大小 |
|------|------|
| config.json(实际) | ~120B |
| config.json(分配) | 4KB |
| FAT 表大小 | ~50KB |
| NFTL 映射表 | ~11KB |
| 坏块预留 | ~11.5MB |
| 可用数据空间 | ~50MB |

---

## 📝 config.json 生命周期

```
T=0s    应用修改 JSON          ⚠ RAM 中（掉电丢失）
        ↓
T=30s   定时器触发
        ↓
        序列化 JSON
        ↓
        写入文件系统
        ↓
        NFTL 映射
        ↓
        NAND 编程            ✓ 持久化完成
        ↓
T=60s   再次触发（周期重复）

风险区：T=0s~T=30s (最多丢失30s修改)
安全区：T=30s~T=60s (前30s已保存)
```

---

## 🔧 关键代码片段

### 修改保存周期

```c
// 文件：app_config.c (第9行)
#define SAVE_INTERVAL  30000  // 毫秒

// 改为 5 秒更新
#define SAVE_INTERVAL  5000
```

### JSON 访问示例

```c
// 获取值
int page = json_get_intvalue("current_page");
const char *path = json_get_strvalue("skinpng_path");

// 设置值
json_set_intvalue("current_page", 2);
json_set_strvalue("device_connect", "ok");

// 立即保存
save_file_realtime();
```

### 初始化

```c
// 系统启动时调用一次
json_manager_init();

// 自动启动后台保存线程
// 不需要手动操作
```

---

## ⚠️ 掉电保护

### 保护机制

```
Layer 1: 硬件     NAND Flash 无电源依赖 ........... 最强
Layer 2: 驱动     NFTL 磨损平衡 + 坏块管理 ...... 强
Layer 3: 文件系统 FATFS 双写 FAT 表 ............. 中
Layer 4: 应用     定时保存 30 秒一次 ........... 可改进
```

### 掉电场景

| 场景 | 结果 | 恢复 |
|------|------|------|
| T=5s 掉电 | 修改全丢 | 重启后用上次保存的 |
| T=35s 掉电 | 已保存 | NFTL 自动恢复 |
| NAND 坏块 | 数据可能丢 | NFTL 垃圾回收 |

---

## 🚀 启动流程

```
1. DDR 初始化           (50ms)
2. 读取 SPL (1MB)      (100ms)
3. SPL 执行            (50ms)
4. 加载 ENV (256KB)    (30ms)
5. 加载 OS (15MB)      (300ms)
6. 内核启动            (200ms)
7. 挂载文件系统        (250ms)
8. 初始化 JSON         (10ms)

总计: ~1s 启动时间
```

---

## 🔄 NFTL 磨损平衡

```
问题：NAND Flash 单块寿命 ~100万次擦写

无 NFTL:
  常用块：擦写次数 100万+ → 损坏
  冷数据：擦写次数 <10万   → 浪费
  结果：寿命 50% 缩短

有 NFTL:
  所有块：擦写次数 均衡分布 (~10万/块)
  结果：寿命 ~10 倍提升

验证：NFTL 智能选择擦次最少的块进行写入
```

---

## 📊 故障恢复表

| 故障 | 位置 | 恢复方式 | 数据丢失 |
|------|------|---------|---------|
| SPL 损坏 | 1MB | 无法恢复 | 全部 |
| ENV 损坏 | 512KB | 用 ENV_R | 无 |
| OS 损坏 | 30MB | 用 OS_R | 无 |
| config.json 损坏(已保存) | data | NFTL 恢复 | 无 |
| config.json 损坏(未保存) | data | 重建默认 | 最后修改 |
| 坏块产生 | 任意 | NFTL 自动 | 无 |

---

## 🎯 性能优化建议

### 如果掉电频繁

```c
// 改为 10 秒保存一次
#define SAVE_INTERVAL  10000

// 或者关键时刻立即保存
json_set_intvalue("critical_data", value);
save_file_realtime();  // 立即写入 Flash
```

### 如果系统繁忙

```c
// 改为 60 秒保存一次（减少 I/O）
#define SAVE_INTERVAL  60000

// 增加线程栈大小（如果 JSON 很大）
g_tid = rt_thread_create("save_task", save_task, NULL, 
                         4096, 20, 10);  // 4KB → 8KB
```

### 如果 data 分区快满了

```
1. 定期清理过期文件
2. 检查是否有大日志文件
3. 考虑扩大 data 分区(重新镜像)
4. 启用垃圾回收优化
```

---

## 🔍 调试技巧

### 查看 JSON 内容

```bash
# 读取 config.json
cat /data/config.json

# 查看分区信息
cat /proc/mtd
# 或
df -h
```

### 查看保存日志

```c
// 在 save_task 中添加日志
rt_kprintf("[SAVE] Saving config.json at %ds\n", 
           rt_tick_get() / 1000);
```

### 测试掉电恢复

```c
// 修改数据
json_set_intvalue("test_value", 12345);

// 立即保存
save_file_realtime();

// 模拟掉电：拔插电源或系统重启

// 重启后检查
int val = json_get_intvalue("test_value");
rt_kprintf("Recovered value: %d\n", val);
```

---

## 💡 常见问题

### Q: 如何确保数据不丢失？
**A:** 关键数据保存后立即调用 `save_file_realtime()`

### Q: config.json 有大小限制吗？
**A:** 理论上无，但建议 < 1MB（为了加载速度）

### Q: 能否改变存储位置？
**A:** 可以，修改 `app_config.c` 中的 `JSON_FILE_PATH`

### Q: .mo 文件能否更新？
**A:** 需要重新烧写固件（无法运行时更新）

### Q: 如何查看 NFTL 映射？
**A:** 通过调试接口，依赖具体驱动实现

---

## 📌 重要提示

⚠️ **掉电风险**
- config.json 最多 30 秒未保存
- 关键数据应立即保存
- 不要假设内存内容持久存在

⚠️ **NAND 特性**
- 无法单字节修改（最小单位 2KB 页）
- 无法多次编程（必须先擦除整块）
- 写入前一定要验证

⚠️ **文件系统限制**
- FATFS 创建文件时自动分配簇
- 删除文件不立即释放空间
- 定期进行碎片整理

⚠️ **NFTL 磨损**
- 不同闪存芯片擦写周期不同
- 运行时坏块会逐渐增加
- 需预留足够坏块空间

---

## 📚 相关文档

- **详细分析** → STORAGE_ANALYSIS.md
- **可视化图表** → STORAGE_VISUALIZATION.md
- **代码实现** → STORAGE_CODE_TRAVERSAL.md
- **参数对照** → STORAGE_PARAMETERS_TABLE.md
- **索引导航** → README_STORAGE.md

---

## ✅ 检查清单

部署前检查：

- [ ] config.json 路径正确 (`/data/config.json`)
- [ ] SAVE_INTERVAL 设置合理 (默认 30s)
- [ ] 后台保存线程正常启动
- [ ] 互斥锁初始化成功
- [ ] 文件系统挂载成功
- [ ] NFTL 驱动加载正常
- [ ] 测试掉电恢复

生产环境：

- [ ] 定期备份 config.json
- [ ] 监控 data 分区使用率
- [ ] 记录异常掉电事件
- [ ] 定期测试恢复流程
- [ ] 保留 NAND 固件备份

---

**快速参考卡片完成！** 🎉

需要详细内容？参考完整文档集合。
