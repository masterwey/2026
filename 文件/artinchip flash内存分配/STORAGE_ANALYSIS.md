# Demo128-NAND Flash 存储空间分配详细分析

## 一、总体存储架构

### 1. 物理介质规格
- **Flash 类型**：SPI-NAND
- **总容量**：128MB
- **页大小**：2KB
- **块大小**：128KB
- **OOB（校验数据）**：64 字节/页

---

## 二、分区表（Partition Table）

### 完整分区分配方案

| 序号 | 分区名称 | 大小 | 地址范围 | 用途 | 属性 | 文件格式 |
|------|---------|------|---------|------|------|---------|
| 1 | **spl** | 1MB | 0x0 - 0x100000 | 一级引导程序（SPL/Bootloader） | MTD (必需) | .aic |
| 2 | **env** | 256KB | 0x100000 - 0x140000 | 环境变量存储 | MTD (可选) | env.bin |
| 3 | **env_r** | 256KB | 0x140000 - 0x180000 | 环保变量冗余备份 | MTD (可选) | (同上) |
| 4 | **os** | 15MB | 0x180000 - 0xF80000 | 操作系统镜像 | MTD (必需) | d21x_os.itb |
| 5 | **os_r** | 15MB | 0xF80000 - 0x1D80000 | OS 冗余备份 | MTD (可选) | (同上) |
| 6 | **rodata** | 35MB | 0x1D80000 - 0x3880000 | 只读数据（资源文件） | MTD (可选) | rodata.fatfs |
| 7 | **data** | 50MB | 0x3880000 - 0x6280000 | 可读写数据分区 | Block (可选) | data.fatfs |

### 分区大小计算验证
```
1M + 256K + 256K + 15M + 15M + 35M + 50M = 116.5MB < 128MB
剩余空间约 11.5MB（用于坏块预留和管理信息）
```

---

## 三、数据存储机制详解

### 1. **环境变量存储（env / env_r）**

#### 文件信息
```json
"env": {
  "file": "env.bin",
  "attr": ["mtd", "optional"],
  "part": ["env", "env_r"]  // 同时存储在两个分区
}

"temporary": {
  "uboot_env": {
    "env.bin": {
      "file": "env.txt",
      "size": "4096",         // 4KB 大小
      "redundant": "enable"   // 冗余使能
    }
  }
}
```

#### 特点
- **冗余存储**：同时映射到 `env` 和 `env_r` 两个分区
- **掉电保护**：NAND Flash 掉电后内容不丢失
- **文件大小**：4096 字节
- **可恢复性**：若 env 分区损坏，可从 env_r 恢复

---

### 2. **配置文件存储（config.json）**

#### 存储路径和机制
```c
#define JSON_FILE_PATH "/data/config.json"  // 存储在 data 分区
#define SAVE_INTERVAL  30000                 // 每30秒定时保存
#define READ_BUFFER_SIZE 512                // 分次读取缓冲区

// 初始化时从文件系统读取
static cJSON *json_load_file(const char *filename) {
    // 分次读取大文件（512字节/次）
    // 防止一次性加载导致内存溢出
}

// 定时写入线程
static void save_task(void *parameter) {
    while (1) {
        rt_thread_mdelay(SAVE_INTERVAL);  // 每30秒
        json_save_file(JSON_FILE_PATH);   // 写入到 /data/config.json
    }
}
```

#### 特点
- **存储位置**：`/data/config.json` （位于 data 分区，NFTL 管理）
- **保存周期**：30秒自动保存一次
- **掉电保护**：NAND Flash 属性保证掉电安全
- **互斥保护**：使用 RT-Thread 互斥锁保护并发访问
- **线程模型**：后台线程定时保存

#### JSON 访问接口（线程安全）
```c
// 获取字符串值
const char *json_get_strvalue(const char *key) {
    rt_mutex_take(g_json_mutex, RT_WAITING_FOREVER);
    cJSON *item = cJSON_GetObjectItem(g_json_root, key);
    const char *value = (item) ? item->valuestring : NULL;
    rt_mutex_release(g_json_mutex);
    return value;
}

// 设置字符串值
void json_set_strvalue(const char *key, const char *value) {
    rt_mutex_take(g_json_mutex, RT_WAITING_FOREVER);
    cJSON *item = cJSON_GetObjectItem(g_json_root, key);
    if (item)
        cJSON_SetValuestring(item, value);
    else
        cJSON_AddStringToObject(g_json_root, key, value);
    rt_mutex_release(g_json_mutex);
}

// 实时保存
void save_file_realtime(void) {
    json_save_file(JSON_FILE_PATH);  // 立即保存
}
```

---

### 3. **.mo 文件存储**

#### 位置和用途
```
d:\A457\packages\artinchip\lvgl-ui\aic_demo\niu_player\lvgl_src\xnapp.mo
```

#### 特点
- **.mo** 是编译后的 gettext 本地化文件
- **用途**：多语言支持（国际化 i18n）
- **存储位置**：通常在 `rodata` 分区（只读资源）
- **加载方式**：应用启动时加载到内存（RAM）

---

## 四、NFTL（NAND Flash Translation Layer）机制

### 1. NFTL 作用

NFTL 是 NAND Flash 翻译层，在 `data` 分区实现：

```json
"data": {
  "size": "50m",
  "nftl": {              // 启用 NFTL 层
    "data": {
      "size": "-"        // "-" 表示占用分区的全部剩余空间
    }
  }
}
```

### 2. NFTL 功能

| 功能 | 说明 |
|------|------|
| **磨损平衡** | 分散写入操作，延长 Flash 寿命 |
| **坏块管理** | 自动跳过坏块，透明管理 |
| **垃圾回收** | 后台自动清理无效数据块 |
| **地址映射** | 逻辑地址↔物理地址转换 |
| **文件系统支持** | 支持 FATFS 或其他文件系统 |

### 3. 文件系统支持

```
data 分区
├─ 类型：Block Device (blockdevice)
├─ 文件系统：FATFS
├─ 挂载点：/data
├─ 特点：
│  ├─ 支持 config.json 等配置文件
│  ├─ 支持用户数据存储
│  ├─ 通过 NFTL 实现掉电安全
│  └─ 自动磨损平衡
```

---

## 五、数据掉电保护分析

### 1. **硬件级保护**
```
NAND Flash 本身属性
├─ 无电源依赖：断电后数据仍保存
├─ 存储密度：128MB 容量
└─ 可靠性：支持百万级擦写周期
```

### 2. **软件级保护**

#### config.json 路径
```
应用层 (config.json)
  ↓
文件系统层 (FATFS)
  ↓
NFTL 层 (磨损平衡、坏块管理)
  ↓
MTD/NAND 驱动层
  ↓
硬件 NAND Flash (data 分区)
```

#### 保护机制
```c
// 方式1：定时自动保存（后台线程）
void save_task(void *parameter) {
    while (1) {
        rt_thread_mdelay(30000);      // 每30秒
        json_save_file(JSON_FILE_PATH); // 自动保存
    }
}

// 方式2：实时手动保存
void save_file_realtime(void) {
    json_save_file(JSON_FILE_PATH);   // 立即保存到Flash
}

// 实现
static void json_save_file(const char *filename) {
    char *json_str = cJSON_Print(g_json_root);
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0666);
    write(fd, json_str, rt_strlen(json_str));  // 写入
    close(fd);                                 // 关闭（确保数据落盘）
}
```

### 3. **data 分区存储结构**

```
data 分区 (50MB)
├─ 文件系统元数据
│  ├─ FAT 表
│  ├─ 目录项
│  └─ 长文件名支持
├─ config.json (应用配置)
│  ├─ 大小：通常 < 1MB
│  ├─ 更新频率：30秒/次
│  ├─ 备份：通过 NFTL 隐含备份
│  └─ 恢复：损坏时通过 NFTL 垃圾回收恢复
├─ 用户数据 (可选)
│  ├─ 日志文件
│  ├─ 缓存文件
│  └─ 其他持久化数据
└─ NFTL 管理信息
   ├─ 坏块表 (BBT)
   ├─ 对映表
   └─ 垃圾回收标记
```

---

## 六、存储空间分配流程图

```
启动流程：
┌─────────────────────────────────────┐
│ 系统启动（DDR 初始化）              │
└──────────────┬──────────────────────┘
               ↓
┌─────────────────────────────────────┐
│ 读取 SPL/Bootloader (spl 分区)      │
│ ↳ 大小：1MB                         │
└──────────────┬──────────────────────┘
               ↓
┌─────────────────────────────────────┐
│ 加载环境变量 (env/env_r 分区)       │
│ ↳ 大小：256KB × 2                   │
└──────────────┬──────────────────────┘
               ↓
┌─────────────────────────────────────┐
│ 加载 OS 镜像 (os 分区)              │
│ ↳ 大小：15MB (必需)                 │
│ ↳ 格式：d21x_os.itb                 │
└──────────────┬──────────────────────┘
               ↓
┌─────────────────────────────────────┐
│ 挂载 rodata (FAT, 只读)             │
│ ↳ 大小：35MB                        │
│ ↳ 包含：.mo 文件（国际化资源）      │
└──────────────┬──────────────────────┘
               ↓
┌─────────────────────────────────────┐
│ 挂载 data (FAT, 读写)               │
│ ↳ 大小：50MB                        │
│ ↳ 路径：/data                       │
├─ 初始化 JSON 管理模块              │
│  ├─ 加载 /data/config.json          │
│  ├─ 创建互斥锁                      │
│  └─ 启动定时保存线程                │
└──────────────┬──────────────────────┘
               ↓
         系统运行中...
         
运行时流程（config.json 处理）：
┌──────────────────────────────────────┐
│ 应用程序                              │
├─ 调用 json_get_strvalue()             │
├─ 调用 json_set_strvalue()             │
└──────────────┬───────────────────────┘
               ↓
┌──────────────────────────────────────┐
│ JSON 管理模块 (内存中的 cJSON 树)    │
├─ 快速读写（内存操作）                │
└──────────────┬───────────────────────┘
               ↓
     ┌────────────────┐
     │ 30秒定时器     │
     │ 触发保存任务   │
     └────────┬───────┘
              ↓
┌──────────────────────────────────────┐
│ 后台保存线程 (save_task)             │
├─ 调用 json_save_file()                │
│  ├─ 序列化 cJSON 树为字符串          │
│  ├─ 打开文件 /data/config.json       │
│  ├─ 写入数据到 Flash                 │
│  └─ 关闭文件（数据落盘）            │
└──────────────┬───────────────────────┘
               ↓
┌──────────────────────────────────────┐
│ FATFS 文件系统                       │
├─ 分配簇链                            │
├─ 更新 FAT 表                         │
└──────────────┬───────────────────────┘
               ↓
┌──────────────────────────────────────┐
│ NFTL 层                              │
├─ 逻辑地址 → 物理地址映射             │
├─ 磨损平衡算法                        │
├─ 坏块跳过                            │
├─ 垃圾回收                            │
└──────────────┬───────────────────────┘
               ↓
┌──────────────────────────────────────┐
│ NAND Flash 物理存储 (data 分区)     │
├─ 所有数据持久化                      │
├─ 掉电安全保证                        │
└──────────────────────────────────────┘
```

---

## 七、关键代码实现分析

### 1. 分区解析（partition.c）

```c
struct aic_partition *aic_part_parse(char *parts, u32 start) {
    struct aic_partition *part = malloc(sizeof(struct aic_partition));
    
    part->start = start;
    
    // 解析大小
    if (*p == '-') {
        part->size = 0;  // 表示用完分区
    } else {
        part->size = strtoull(p, &p, 0);
        // 单位转换：k/K -> ×1024, m/M -> ×1MB, g/G -> ×1GB
        if ((*p == 'k') || (*p == 'K')) 
            part->size *= 1024;
        else if ((*p == 'm') || (*p == 'M'))
            part->size *= (1024 * 1024);
        else if ((*p == 'g') || (*p == 'G'))
            part->size *= (1024 * 1024 * 1024);
    }
    
    // 解析分区名称（括号内）
    while (*p != ')') {
        part->name[cnt++] = *p++;
    }
    
    // 递归解析后续分区
    if (*p == ',') {
        part->next = aic_part_parse(p + 1, part->start + part->size);
    }
    
    return part;
}
```

### 2. JSON 配置管理（app_config.c）

```c
// 全局状态
static rt_mutex_t g_json_mutex = RT_NULL;
static cJSON *g_json_root = RT_NULL;
static rt_thread_t g_tid = RT_NULL;

// 初始化
void json_manager_init(void) {
    // 创建互斥锁
    g_json_mutex = rt_mutex_create("g_json_mutex", RT_IPC_FLAG_PRIO);
    
    // 从文件系统读取 JSON
    g_json_root = json_load_file(JSON_FILE_PATH);
    if (!g_json_root) {
        // 创建默认配置
        g_json_root = cJSON_CreateObject();
        cJSON_AddStringToObject(g_json_root, "name", "default");
    }
    
    // 启动定时保存线程
    g_tid = rt_thread_create("save_task", save_task, NULL, 
                             2048, 20, 10);
    rt_thread_startup(g_tid);
}

// 定时保存（后台线程）
static void save_task(void *parameter) {
    while (1) {
        rt_thread_mdelay(SAVE_INTERVAL);  // 30秒
        json_save_file(JSON_FILE_PATH);
    }
}

// 文件 I/O（分次读取避免内存溢出）
static cJSON *json_load_file(const char *filename) {
    int fd = open(filename, O_RDONLY);
    char *buffer = rt_malloc(10240);  // 10KB 缓冲
    
    // 分次读取
    int total_bytes = 0;
    int bytes = read(fd, buffer + total_bytes, READ_BUFFER_SIZE);
    while (bytes > 0) {
        total_bytes += bytes;
        bytes = read(fd, buffer + total_bytes, READ_BUFFER_SIZE);
    }
    
    close(fd);
    
    // 解析 JSON
    cJSON *json = cJSON_Parse(buffer);
    rt_free(buffer);
    
    return json;
}

// 文件保存（带互斥保护）
static void json_save_file(const char *filename) {
    rt_mutex_take(g_json_mutex, RT_WAITING_FOREVER);
    
    char *json_str = cJSON_Print(g_json_root);
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0666);
    
    if (fd >= 0) {
        write(fd, json_str, rt_strlen(json_str));
        close(fd);  // 确保数据落盘
    }
    
    rt_free(json_str);
    rt_mutex_release(g_json_mutex);
}
```

---

## 八、.mo 文件处理

### 文件位置
```
packages/artinchip/lvgl-ui/aic_demo/niu_player/lvgl_src/xnapp.mo
```

### 特点
- **格式**：ELF 格式编译输出（.mo 是机器对象文件）
- **用途**：gettext 国际化库的编译输出
- **存储**：通常打包到 rodata.fatfs (35MB)
- **加载**：应用启动时通过 gettext 加载到 RAM

### 部分内容查看
```
$ file xnapp.mo
xnapp.mo: ELF 64-bit LSB shared object, x86-64...

$ readelf -h xnapp.mo
ELF Header:
  Magic:   7f 45 4c 46
  ...
```

---

## 九、存储空间总结表

| 分区 | 大小 | 类型 | 冗余 | 掉电保护 | 文件系统 | 用途 |
|------|------|------|------|---------|---------|------|
| spl | 1MB | MTD | - | ✓ | 裸数据 | 引导 |
| env | 256K | MTD | ✓ (env_r) | ✓ | 裸数据 | 环变 |
| env_r | 256K | MTD | ✓ (env) | ✓ | 裸数据 | 备份 |
| os | 15MB | MTD | ✓ (os_r) | ✓ | 裸数据 | 系统 |
| os_r | 15MB | MTD | ✓ (os) | ✓ | 裸数据 | 备份 |
| rodata | 35MB | MTD | - | ✓ | FATFS | 资源 |
| **data** | 50MB | Block | NFTL | ✓ | FATFS+NFTL | **config.json & 用户数据** |

---

## 十、总结

### 存储分配的关键设计

1. **config.json 掉电保护**
   - 存储位置：`/data/config.json` (NAND Flash data 分区)
   - 保护机制：后台线程每30秒自动保存
   - 硬件保障：NAND Flash 本身掉电安全
   - 软件保障：NFTL 提供磨损平衡和坏块管理

2. **.mo 国际化文件**
   - 存储位置：rodata 分区 (35MB FAT 文件系统)
   - 加载方式：应用启动时加载到 RAM
   - 特点：只读资源，提高访问速度

3. **NFTL 层的作用**
   - 透明的地址映射
   - 自动磨损平衡（延长 Flash 寿命）
   - 自动坏块管理和垃圾回收
   - 支持文件系统和块设备接口

4. **冗余设计**
   - env/env_r：双备份环境变量
   - os/os_r：双备份系统镜像
   - NFTL：隐含备份和恢复能力

此架构确保了系统的**可靠性**、**掉电安全**和**长期稳定运行**。
