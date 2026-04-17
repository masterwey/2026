# RT-Thread 线程分析（A457 项目）

本文档详细分析项目中所有线程的创建、分类与特性，并解答为什么 LVGL 线程可能不在 `list_thread` 中显示。

## 一、为什么 LVGL 线程不在 list_thread 中显示

### 关键发现
查看 `lv_rt_thread_port.c` 中的 `lvgl_thread_init` 函数：

```c
int lvgl_thread_init(void)
{
    rt_err_t err;

    printf("LVGL thread init %d----------------------\n",LPKG_LVGL_THREAD_PRIO);
    //比create 多了 线程控制块指针和栈起始地址
    err = rt_thread_init(&lvgl_thread, "LVGL", lvgl_thread_entry, RT_NULL,
                        //线程控制块指针、名字、入口、入口参数
           &lvgl_thread_stack[0], sizeof(lvgl_thread_stack), LPKG_LVGL_THREAD_PRIO, 0);
           //栈起始地址、栈大小、优先级、时间片
    if(err != RT_EOK)
    {
        LOG_E("Failed to create LVGL thread");
        return -1;
    }
    rt_thread_startup(&lvgl_thread);

    return 0;
}
//INIT_ENV_EXPORT(lvgl_thread_init);  // <--- 注意：这一行被注释掉了！
```

### 根本原因分析

**LVGL 线程使用了静态线程控制块（Static TCB）：**
资源受限、实时性要求高的嵌入式系统中，优先考虑静态线程
1. **静态 vs 动态线程的区别**：
   TCB是Thread Control Block（线程控制块） 
   - `rt_thread_create()` - 动态创建，从堆分配 TCB 和栈，线程会被自动注册到系统线程链表
   - `rt_thread_init()` - 静态初始化，使用用户提供的 TCB 和栈空间

2. **LVGL 线程的特殊性**：
   ```c
   static struct rt_thread lvgl_thread;  // 静态 TCB
   static ALIGN(8) rt_uint8_t lvgl_thread_stack[LPKG_LVGL_THREAD_STACK_SIZE];  // 静态栈
   ```
   - 使用了静态分配的 `lvgl_thread` 结构体和栈空间
   - 通过 `rt_thread_init()` 初始化（而非 `rt_thread_create()`）

3. **调用时机问题**：
   - `INIT_ENV_EXPORT(lvgl_thread_init);` 被注释掉了
   - 改为在 `main.c` 中手动调用 `lvgl_thread_init();`
   - 这意味着 LVGL 线程在应用层初始化，而非系统初始化阶段

4. **list_thread 可见性**：
   - `list_thread` 命令遍历的是 RT-Thread 的线程对象链表
   - 使用 `rt_thread_init()` 初始化的线程**会**被加入系统线程链表（在 `rt_thread_startup()` 时）
   - **但是**：如果线程在 `list_thread` 执行时尚未启动或已经退出，就不会显示
   - 另一个可能：线程名称显示为 "LVGL"，检查时是否遗漏

### 验证方法

在 shell 中执行以下命令验证：

```bash
list_thread          # 查看所有线程，寻找名为 "LVGL" 的线程
ps                   # 如果系统支持，也可以用 ps 命令
```

如果确实看不到，可能的原因：
1. 线程未成功启动（检查 `lvgl_thread_init()` 的返回值和日志）
2. 线程优先级设置问题导致调度异常
3. 线程栈溢出导致崩溃

## 二、项目所有线程分类与统计

### 线程分类标准

按照来源和功能，将线程分为以下几类：

1. **系统核心线程**（RT-Thread 内核自动创建）
2. **LVGL/GUI 线程**（图形界面相关）
3. **应用业务线程**（应用层创建的功能线程）
4. **网络协议线程**（LwIP 等网络栈）
5. **外设驱动线程**（设备驱动创建）
6. **第三方库线程**（中间件/库创建）

### 详细线程清单

#### 1. 系统核心线程（RT-Thread 内核）

| 线程名 | 创建位置 | 优先级 | 栈大小 | 说明 |
|--------|----------|--------|--------|------|
| main | `components.c:225` | 动态 | 动态 | 主线程，执行 main() 函数 |
| tidle / tidle0 | `idle.c:314` | 最低 (31) | 动态 | 空闲线程，CPU 空闲时运行 |
| timer | `timer.c:861` | 4 | 512 | 软件定时器线程 |

**创建方式**：使用 `rt_thread_init()` + 静态 TCB
**特点**：系统启动时自动创建，不可删除

#### 2. LVGL/GUI 线程

| 线程名 | 创建位置 | 优先级 | 栈大小 | 说明 |
|--------|----------|--------|--------|------|
| LVGL | `lv_rt_thread_port.c:104` | RT_THREAD_PRIORITY_MAX*2/3 | 4096*2 | LVGL 主任务处理线程 |

**创建方式**：
```c
rt_thread_init(&lvgl_thread, "LVGL", lvgl_thread_entry, RT_NULL,
               &lvgl_thread_stack[0], sizeof(lvgl_thread_stack), 
               LPKG_LVGL_THREAD_PRIO, 0);
rt_thread_startup(&lvgl_thread);
```

**调用链**：
``` c
main() 
  -> lvgl_thread_init() 
    -> rt_thread_init(&lvgl_thread, ...)
    -> rt_thread_startup(&lvgl_thread)
      -> lvgl_thread_entry()
        -> lv_init()
        -> lv_port_disp_init()
        -> lv_port_indev_init()
        -> lv_user_gui_init()  // 初始化所有屏幕
        -> while(1) { lv_task_handler(); rt_thread_mdelay(1); }
```

**特点**：
- 使用静态 TCB 和栈（编译期分配）
- 在 `main.c` 中手动启动
- 周期 1ms 调用 `lv_task_handler()` 处理 LVGL 任务
- 集成了电源管理（PM）支持

#### 3. 应用业务线程

| 线程名 | 创建位置 | 优先级 | 栈大小 | 说明 |
|--------|----------|--------|--------|------|
| msg_center | `message.c:128` | 13 | 2048*10 | 消息中心线程，处理应用消息分发 |
| mcu-uart5 | `app_uart5_thread.c:410` | 16 | 2048*15 | UART5 通信线程（MCU 通信） |
| mcu-uart3 | `app_uart3_thread.c:451` | 15 | 1024*6 | UART3 通信线程（MCU 通信） |

**创建方式**：`rt_thread_create()` 动态创建

**启动顺序**（在 main.c 中）：
```c
int main(int argc, char *argv[])
{
    gui_callback_init();        // 注册所有屏幕回调
    unit_test_init(); // 初始化单元测试模块 
    wdt_start();// 启动看门狗定时器
    msg_center_thread_start();  // 1. 消息中心线程
    parammanager_init();// 初始化参数管理模块
    json_manager_init();// 初始化 JSON 配置管理模块
    app_uart5_thread_start();   // 2. UART5 线程
    app_uart3_thread_start();   // 3. UART3 线程
    lvgl_thread_init();         // 4. LVGL 线程
    return RT_DLMODULE_DEAMON;
}
```

#### 4. 网络协议线程

| 线程名 | 创建位置 | 优先级 | 栈大小 | 说明 |
|--------|----------|--------|--------|------|
| erx | `ethernetif.c:808` | 12 | 1024 | 以太网接收线程 |
| etx | `ethernetif.c:824` | 12 | 1024 | 以太网发送线程 |
| tcpip | lwip 内部创建 | 动态 | 动态 | LwIP TCP/IP 协议栈线程 |
| ping | `ping.c:461` (INIT_DEVICE_EXPORT) | 动态 | 动态 | Ping 工具线程 |

**创建方式**：
- `erx/etx` 使用 `rt_thread_init()` + 静态 TCB
- `tcpip` 由 LwIP 通过 `sys_thread_new()` 创建
- `ping` 通过自动初始化机制创建

#### 5. 外设驱动线程

这些线程通过 `INIT_DEVICE_EXPORT` 宏在设备初始化阶段自动创建：

| 驱动模块 | 可能的线程 | 说明 |
|----------|-----------|------|
| USB (CherryUSB) | usbd_* 系列 | USB 设备相关线程 |
| - cdc_acm | aicupg_uart_recv | CDC ACM 升级接收线程 |
| - audio_v2 | usb-audio-test | USB 音频测试线程 |
| - msc | usbd_msc_detection | USB 大容量存储检测线程 |
| - mtp | usbd_mtp_detection | MTP 检测线程 |
| Wi-Fi (atbm603x) | 动态创建 | 蓝牙/Wi-Fi 协议线程 |

**特点**：
- 按需创建（设备存在时才创建）
- 使用 `rt_thread_create()` 动态分配
- 由驱动模块管理生命周期

#### 6. 第三方库/中间件线程

| 线程名/模块 | 创建位置 | 说明 |
|-------------|----------|------|
| beep | `beep.c:165/171` | 蜂鸣器控制线程 |
| usage | `cpu_usage_cmd.c:38` | CPU 使用率统计线程（命令触发） |
| vbusout/vbusin | `vbus.c:1191/1197` | 虚拟总线输入输出线程 |
| RTT_AUTO_EXE | `cmd_auto_excute.c:82` | 自动执行命令线程 |
| awtk-ui | `tk_run.c:25` | AWTK UI 线程（如果启用） |
| awtk-touch | `touch_thread.c:188` | AWTK 触摸输入线程 |

**特点**：
- 可选功能，根据配置编译
- 多数使用 `rt_thread_create()` 动态创建
- 部分支持 `rt_thread_init()` 静态创建

## 三、线程创建方式对比

### rt_thread_create() vs rt_thread_init()

| 特性 | rt_thread_create() | rt_thread_init() |
|------|-------------------|------------------|
| TCB 分配 | 从堆动态分配 | 用户提供静态 TCB |
| 栈分配 | 从堆动态分配 | 用户提供静态栈 |
| 返回值 | 线程句柄指针 | 错误码 |
| 线程删除 | `rt_thread_delete()` | `rt_thread_detach()` |
| 内存开销 | 运行时分配 | 编译期确定 |
| 适用场景 | 动态创建/销毁 | 固定常驻线程 |
| list_thread 可见 | 是（启动后） | 是（启动后） |

### 静态线程示例（LVGL）

```c
// 1. 定义静态 TCB 和栈
static struct rt_thread lvgl_thread;
static ALIGN(8) rt_uint8_t lvgl_thread_stack[LPKG_LVGL_THREAD_STACK_SIZE];

// 2. 初始化线程
rt_thread_init(&lvgl_thread, "LVGL", lvgl_thread_entry, RT_NULL,
               &lvgl_thread_stack[0], sizeof(lvgl_thread_stack), 
               LPKG_LVGL_THREAD_PRIO, 0);

// 3. 启动线程
rt_thread_startup(&lvgl_thread);
```

### 动态线程示例（应用线程）

```c
rt_thread_t thread = rt_thread_create("msg_center", 
                                      msg_center_thread, 
                                      RT_NULL, 
                                      2048 * 10,  // 栈大小
                                      13,         // 优先级
                                      10);        // 时间片
if (thread != RT_NULL) {
    rt_thread_startup(thread);
}
```

## 四、线程统计总结

### 按类别统计

| 类别 | 数量 | 创建方式 | 备注 |
|------|------|----------|------|
| 系统核心 | 3 | 静态 (init) | main, idle, timer |
| LVGL/GUI | 1 | 静态 (init) | LVGL |
| 应用业务 | 3 | 动态 (create) | msg_center, mcu-uart5, mcu-uart3 |
| 网络协议 | 3+ | 混合 | erx, etx, tcpip, ping 等 |
| 外设驱动 | 动态 | 动态 (create) | 按配置和硬件存在性创建 |
| 第三方库 | 可选 | 混合 | 根据配置编译 |

### 按优先级分布（已知部分）

| 优先级 | 线程 | 说明 |
|--------|------|------|
| 4 | timer | 软件定时器 |
| 12 | erx, etx | 以太网收发 |
| 13 | msg_center | 消息中心 |
| 15 | mcu-uart3 | UART3 通信 |
| 16 | mcu-uart5 | UART5 通信 |
| ~21 | LVGL | GUI 任务（RT_THREAD_PRIORITY_MAX*2/3） |
| 31 | idle | 空闲线程 |

**注**：RT-Thread 优先级数值越小，优先级越高。

## 五、排查 LVGL 线程不可见的步骤

### 1. 检查线程是否成功创建

在 `lvgl_thread_init()` 中添加调试信息：

```c
int lvgl_thread_init(void)
{
    rt_err_t err;
    
    printf("LVGL thread init %d----------------------\n",LPKG_LVGL_THREAD_PRIO);
    err = rt_thread_init(&lvgl_thread, "LVGL", lvgl_thread_entry, RT_NULL,
           &lvgl_thread_stack[0], sizeof(lvgl_thread_stack), LPKG_LVGL_THREAD_PRIO, 0);
    if(err != RT_EOK)
    {
        LOG_E("Failed to create LVGL thread");
        return -1;
    }
    
    // 添加调试
    printf("LVGL thread TCB: %p, stack: %p, size: %d\n", 
           &lvgl_thread, lvgl_thread_stack, sizeof(lvgl_thread_stack));
    
    err = rt_thread_startup(&lvgl_thread);
    if(err != RT_EOK)
    {
        printf("LVGL thread startup failed: %d\n", err);
        return -1;
    }
    
    printf("LVGL thread started successfully\n");
    return 0;
}
```

### 2. 在 shell 中验证

```bash
# 查看所有线程
list_thread

# 查看线程详情（如果支持）
ps

# 查看 LVGL 线程对象（如果知道地址）
list_obj thread
```

### 3. 检查线程状态

在 `lvgl_thread_entry` 开头添加标记：

```c
static void lvgl_thread_entry(void *parameter)
{
    rt_kprintf("LVGL thread entry started!\n");
    
    lv_init();
    rt_kprintf("LVGL lv_init() done\n");
    
    lv_port_disp_init();
    rt_kprintf("LVGL display init done\n");
    
    // ... 其余初始化
    
    while(1) {
        lv_task_handler();
        rt_thread_mdelay(SLEEP_PERIOD);
    }
}
```

### 4. 可能的问题原因

1. **栈溢出**：
   - 当前栈大小：`4096 * 2 = 8192` 字节
   - 如果 LVGL 初始化或运行时栈溢出，线程会崩溃
   - 解决：增加 `LPKG_LVGL_THREAD_STACK_SIZE`

2. **优先级冲突**：
   - 如果与其他线程优先级冲突或设置不当
   - 检查 `LPKG_LVGL_THREAD_PRIO` 的值

3. **启动失败**：
   - `rt_thread_startup()` 返回错误
   - 检查返回值并打印错误信息

4. **线程名称问题**：
   - 名称可能被截断或显示异常
   - 在 `list_thread` 输出中仔细查找 "LVGL" 或类似名称

## 六、建议

1. **统一线程管理**：
   - 为所有应用线程建立统一的创建/销毁接口
   - 记录线程创建日志，便于调试

2. **资源监控**：
   - 定期检查线程栈使用率（`list_thread` 可显示）
   - 监控线程 CPU 使用率

3. **优先级规划**：
   - 建立线程优先级分配表
   - 避免优先级倒置和饥饿问题

4. **调试支持**：
   - 启用 RT-Thread 的 thread hook 功能
   - 添加线程创建/删除/切换的跟踪日志

---

**文档位置**：`docs/thread_analysis.md`

如需进一步分析特定线程或添加运行时监控，可以基于此文档继续扩展。
