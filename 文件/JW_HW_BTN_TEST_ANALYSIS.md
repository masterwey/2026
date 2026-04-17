# jw_hw_btn_test 测试按键系统 - 完整分析

## 🎯 核心概述

`jw_hw_btn_test` 是一个**命令行测试框架**，用于模拟按键事件和系统状态变化。它采用**回调函数注册机制**，允许应用层通过 shell 命令动态测试各种硬件功能。

---

## 📊 整体架构

```
用户在 Shell 中输入命令
        ↓
命令行解析器 (msh)
        ↓
MSH_CMD_EXPORT_ALIAS → jw_hw_btn_test(argc, argv)
        ↓
调用全局回调函数 g_unit_test_func
        ↓
实际执行函数：单元测试中的 jw_hw_btn_test()
        ↓
根据参数执行对应的测试操作
        ↓
修改内部状态/数据库 (NDB/NEMCU)
        ↓
系统响应（UI 更新、功能触发等）
```

---

## 🔗 回调函数注册机制详解

### 1️⃣ 函数类型定义

**位置**：`gui_guider.h` (第 804 行)

```c
// 定义函数指针类型
typedef void (*gauge_param_func)(int argc, char **argv);
//                               ↑                  ↑
//                            参数个数         命令行参数数组
```

### 2️⃣ 全局变量声明

**位置**：`bsp_hw_init.c`

```c
gauge_param_func g_unit_test_func;           // 全局函数指针
gauge_param_func g_dtype_func = NULL;        // 数据类型参数函数指针
gauge_func g_close_wdt_func = NULL;          // 关闭看门狗函数指针
```

### 3️⃣ 注册函数实现

**位置**：`bsp_hw_init.c` (第 26-30 行)

```c
/**
 * 注册回调函数到全局指针
 * @param fun: 要注册的函数
 */
void on_unit_test_callback_register(gauge_param_func fun)
{
    g_unit_test_func = fun;              // 将函数指针赋给全局变量
}
RTM_EXPORT(on_unit_test_callback_register);  // 导出为 RT-Thread 命令
```

### 4️⃣ Shell 命令入口

**位置**：`bsp_hw_init.c` (第 54-58 行)

```c
/**
 * Shell 命令包装函数
 * 当用户输入 "mybtn" 命令时调用
 */
int jw_hw_btn_test(int argc, char **argv)
{
    g_unit_test_func(argc, argv);            // 调用已注册的回调函数
    return 0;
}

// 导出为 Shell 命令：mybtn
MSH_CMD_EXPORT_ALIAS(jw_hw_btn_test, mybtn, my btn test demo);
//                   └─ 实现函数      └─ 命令名  └─ 帮助文字
```

### 5️⃣ 初始化注册

**位置**：`unit_test.c` (第 167-169 行)

```c
/**
 * 系统启动时初始化单元测试
 * 调用此函数将真实的测试函数注册到全局指针
 */
void unit_test_init(void)
{
    // 注册硬件按键测试函数
    on_unit_test_callback_register(jw_hw_btn_test);
    
    // 注册参数测试函数
    on_dtype_func_callback_register(jw_param_test);
    
    return;
}
```

---

## 📋 完整的执行流程

### 调用链路

```
┌──────────────────────────────────────────────────────────────┐
│ 1. Shell 用户输入                                             │
│    $ mybtn 1                                                  │
│    $ mybtn s                                                  │
│    $ mybtn 3 100 50 200 60                                    │
└────────────┬─────────────────────────────────────────────────┘
             │
             ↓
┌──────────────────────────────────────────────────────────────┐
│ 2. MSH (Finsh Shell) 命令解析                                 │
│    ├─ 识别 "mybtn" 命令                                       │
│    ├─ 解析参数为 argc, argv                                  │
│    └─ 调用关联的 C 函数                                       │
└────────────┬─────────────────────────────────────────────────┘
             │
             ↓
┌──────────────────────────────────────────────────────────────┐
│ 3. bsp_hw_init.c 中的包装函数被调用                          │
│    int jw_hw_btn_test(int argc, char **argv)                │
│    {                                                          │
│        g_unit_test_func(argc, argv);  // 调用全局指针        │
│    }                                                          │
└────────────┬─────────────────────────────────────────────────┘
             │
             ↓
┌──────────────────────────────────────────────────────────────┐
│ 4. unit_test.c 中的实际测试函数被调用                        │
│    static void jw_hw_btn_test(...)                           │
│    {                                                          │
│        // 真实的测试逻辑                                      │
│    }                                                          │
└────────────┬─────────────────────────────────────────────────┘
             │
             ↓
┌──────────────────────────────────────────────────────────────┐
│ 5. 根据 argv[1][0] 进行 switch 分发                          │
│    ├─ case '1': periodic_cb(0, 3)                           │
│    ├─ case '2': periodic_cb(1, 3)                           │
│    ├─ case 's': NDB(db_speed) += 10                         │
│    └─ ...                                                     │
└────────────┬─────────────────────────────────────────────────┘
             │
             ↓
┌──────────────────────────────────────────────────────────────┐
│ 6. 修改系统状态或数据库                                       │
│    ├─ NDB() 宏：内部数据库访问                               │
│    ├─ NEMCU() 宏：MCU 寄存器访问                             │
│    └─ 函数调用：如 periodic_cb()                            │
└────────────┬─────────────────────────────────────────────────┘
             │
             ↓
┌──────────────────────────────────────────────────────────────┐
│ 7. 系统响应                                                   │
│    ├─ UI 更新（LVGL 触发事件）                               │
│    ├─ 数据传输到 MCU                                         │
│    └─ 状态变化生效                                           │
└──────────────────────────────────────────────────────────────┘
```

---

## 🎮 按键测试命令详解

### 命令格式

```bash
mybtn <command> [args...]
```

其中 `<command>` 是 `argv[1][0]`，即第一个参数的第一个字符。

### 所有支持的测试命令

| 命令 | 参数 | 功能说明 | 对应代码 |
|------|------|---------|---------|
| `1` | - | 周期性回调测试（低） | `periodic_cb(0, 3)` |
| `2` | - | 周期性回调测试（高） | `periodic_cb(1, 3)` |
| `3` | 压力前/温度前/压力后/温度后 | 设置轮胎参数 | `NEMCU(emcu_*_wheel_*)` |
| `4` | - | 前轮故障标志置位 | `emcu_front_wheel_status \|= 0x0004` |
| `5` | - | 前轮故障标志清除 | `emcu_front_wheel_status &= ~0x4` |
| `c` | - | 发送 0x7C 命令 | `NDB(db_dbcmd) = 0x7C` |
| `d` | - | 发送 0x7D 命令 | `NDB(db_dbcmd) = 0x7D` |
| `e` | - | 发送 0x7E 命令 | `NDB(db_dbcmd) = 0x7E` |
| `8` | - | 发送 0x8D 命令 | `NDB(db_dbcmd) = 0x8D` |
| `a` | - | 发送 0xA1 命令 | `NDB(db_dbcmd) = 0xA1` |
| `f` | - | 发送 0x7F 命令 | `NDB(db_dbcmd) = 0x7F` |
| `s` | - | 增加速度（+10，循环到0） | `NDB(db_speed) += 10` |
| `h` | - | 进入关机流程 | `NDB(db_status3) \|= 0x0040` |
| `j` | - | 取消关机 | `NDB(db_status3) &= ~0x0040` |
| `g` | - | 电源倒计时减一 | `NDB(db_poweroff_countdown)--` |
| `l` | - | 进入来电状态 | `NDB(db_status4) \|= 0x0100` |
| `7` | - | 来电挂断 | `NDB(db_status4) &= ~0x0100` |
| `9` | - | 进入通话状态 | `memcpy(..., "com.btphone.calling")` |
| `m` | - | 生产夹具测试（需编译选项） | `TEST_TOOLS` 模式 |

---

## 💻 实现细节详解

### 1️⃣ 参数解析与调试输出

```c
static void jw_hw_btn_test(int argc, char **argv)
{
    uint8_t i = 0;
    
    // 打印所有参数用于调试
    for (i = 0; i < argc; i++)
    {
        printf("btn: %d, %s\r\n", i, argv[i]);
        // 输出：
        // btn: 0, mybtn
        // btn: 1, 1
        // 或
        // btn: 0, mybtn
        // btn: 1, 3
        // btn: 2, 100
        // btn: 3, 50
        // 等等...
    }

    // 获取第一个参数的第一个字符
    switch (argv[1][0])
    {
        // ...
    }
}
```

### 2️⃣ 轮胎参数设置示例

```c
case '3':
    // 命令：mybtn 3 100 50 200 60
    // argv[2] = "100" (前轮压力)
    // argv[3] = "50"  (前轮温度)
    // argv[4] = "200" (后轮压力)
    // argv[5] = "60"  (后轮温度)
    
    NEMCU(emcu_front_wheel_pressure) = atoi(argv[2]);      // 100
    NEMCU(emcu_front_wheel_temperature) = atoi(argv[3]);   // 50
    NEMCU(emcu_back_wheel_pressure) = atoi(argv[4]);       // 200
    NEMCU(emcu_back_wheel_temperature) = atoi(argv[5]);    // 60
    break;
```

### 3️⃣ 位操作与状态控制

```c
// 置位操作（按位或）：设置标志位为 1
case '4':
    NEMCU(emcu_front_wheel_status) |= 0x0004;
    // 二进制：原值 | 0000 0100 = 新值
    // 效果：第2位变为1，其他位不变
    break;

// 清除操作（按位与反）：设置标志位为 0
case '5':
    NEMCU(emcu_front_wheel_status) &= ~(0x4);
    // 二进制：原值 & 1111 1011 = 新值
    // 效果：第2位变为0，其他位不变
    break;
```

### 4️⃣ 数据库（NDB）操作

```c
case 'c':
    NDB(db_dbcmd) = 0x7C;     // 设置命令代码
    // NDB 宏可能代表：
    // - Network Database 网络数据库
    // - 内部参数数据库
    // 可能通过 CAN/LIN 发送给 MCU
    break;

case 's':
    NDB(db_speed) = NDB(db_speed) + 10;
    if(NDB(db_speed) > 100)
        NDB(db_speed) = 0;      // 循环：0~100
    printf("speed:%d\r\n", NDB(db_speed));
    break;
```

### 5️⃣ 字符串操作示例

```c
case '7':
    printf("into  com.btphone.callend\r\n");
    NDB(db_status4) &= ~0x0100;  // 清除来电标志
    
    // 复制字符串到消息缓冲区
    memcpy(opt_call.message.txt,
           "com.btphone.callend",
           strlen("com.btphone.callend"));
    break;

case '9':
    printf("into  calling\r\n");
    
    // 复制通话中的事件消息
    memcpy(opt_call.message.txt,
           "com.btphone.calling",
           strlen("com.btphone.calling"));
    break;
```

### 6️⃣ 条件编译与测试模式

```c
case 'm':
    #ifdef TEST_TOOLS
        // 只在定义了 TEST_TOOLS 时编译
        printf("into tool test");
        into_test_tool_mode = 1;
        
        uint8_t data2[5];
        data2[0] = 0x89;
        data2[1] = 0x00;
        
        // 发送给 MCU 以测试回复
        guage_write_to_MCU_from_knob(data2, 2);
    #endif
    break;
```

---

## 🔧 参数测试函数

```c
static void jw_param_test(int argc, char **argv)
{
    // 用法1：设置参数
    // mybtn_param 1  → 将 device_connect 设置为 1，立即保存到 Flash
    if (argc == 2)
    {
        json_set_intvalue("device_connect", atoi(argv[1]));
        save_file_realtime();
        printf("set param device_connect:%d ok!\n", atoi(argv[1]));
    }
    
    // 用法2：获取参数
    // mybtn_param get device_connect  → 读取参数值
    else if (argc == 3)
    {
        if (strcmp(argv[1], "get") == 0)
        {
            printf("%s:%d\n", argv[2], json_get_intvalue(argv[2]));
        }
    }
}
```

---

## 📝 使用示例

### 场景1：测试轮胎压力

```bash
# 设置轮胎参数
msh /> mybtn 3 100 50 200 60

# 输出：
# btn: 0, mybtn
# btn: 1, 3
# btn: 2, 100
# btn: 3, 50
# btn: 4, 200
# btn: 5, 60

# 内部效果：
# emcu_front_wheel_pressure = 100
# emcu_front_wheel_temperature = 50
# emcu_back_wheel_pressure = 200
# emcu_back_wheel_temperature = 60
```

### 场景2：模拟前轮故障

```bash
msh /> mybtn 4
# 效果：设置前轮故障标志位

msh /> mybtn 5
# 效果：清除前轮故障标志位
```

### 场景3：模拟来电

```bash
msh /> mybtn l
# 效果：设置来电状态（db_status4 的第 8-11 位设为 1）

msh /> mybtn 9
# 效果：发送 "com.btphone.calling" 事件

msh /> mybtn 7
# 效果：挂断电话并发送 "com.btphone.callend" 事件
```

### 场景4：测试关机流程

```bash
msh /> mybtn h
# 效果：进入关机流程（设置关机标志）

msh /> mybtn g
# 效果：倒计时减一

msh /> mybtn j
# 效果：取消关机
```

### 场景5：参数测试

```bash
# 设置参数
msh /> mybtn_param 1
# 输出：set param device_connect:1 ok!

# 读取参数
msh /> mybtn_param get device_connect
# 输出：device_connect:1

# 读取其他参数
msh /> mybtn_param get current_page
# 输出：current_page:0
```

---

## 🏗️ 数据流向

```
Shell 命令
    ↓
参数转为 argc/argv
    ↓
switch 语句分发
    ↓
┌─────────────────────────────────────────┐
│ 修改内部数据库                           │
├─────────────────────────────────────────┤
│ ├─ NDB() 宏：内部数据库（CAN/LIN 参数）│
│ ├─ NEMCU() 宏：MCU 寄存器（硬件接口）  │
│ ├─ opt_call：消息队列                   │
│ └─ JSON：配置文件（Flash 存储）         │
└─────────────────────────────────────────┘
    ↓
├─ 事件系统捕获（如果订阅了）
├─ UI 更新
├─ MCU 通信
└─ 日志输出
```

---

## 🎯 关键数据结构

### NDB 宏（内部数据库）

```c
#define NDB(field) g_ndb.field

// 字段说明：
NDB(db_speed)           // 当前速度 0-100
NDB(db_dbcmd)           // 数据库命令码 0x7C/0x7D/0x7E 等
NDB(db_status3)         // 状态字3（关机等）
NDB(db_status4)         // 状态字4（来电等）
NDB(db_poweroff_countdown) // 关机倒计时
```

### NEMCU 宏（MCU 寄存器）

```c
#define NEMCU(field) g_nemcu.field

// 字段说明：
NEMCU(emcu_front_wheel_pressure)     // 前轮压力
NEMCU(emcu_front_wheel_temperature)  // 前轮温度
NEMCU(emcu_back_wheel_pressure)      // 后轮压力
NEMCU(emcu_back_wheel_temperature)   // 后轮温度
NEMCU(emcu_front_wheel_status)       // 前轮状态（故障标志）
```

---

## ✅ 总结

### 架构特点

1. **回调函数注册机制**
   - 解耦应用层和驱动层
   - 灵活可扩展
   - 支持动态注册和替换

2. **Shell 命令框架**
   - 易于测试和调试
   - 实时反馈
   - 参数灵活

3. **多层数据修改**
   - NDB：CAN/LIN 总线数据
   - NEMCU：MCU 硬件寄存器
   - JSON：持久化配置
   - 消息队列：事件通知

### 工作流程

```
用户 Shell 命令 → MSH 解析 → 全局回调调用 → 测试函数执行
                                  ↓
                      修改 NDB/NEMCU/JSON
                                  ↓
                      系统自动响应（UI/MCU/Event）
```

### 扩展方式

如果要添加新的测试命令，只需在 `jw_hw_btn_test()` 的 switch 语句中添加新的 case 即可：

```c
case 'x':
    // 你的新测试逻辑
    printf("My custom test\n");
    break;
```

然后在 Shell 中调用：
```bash
msh /> mybtn x [args...]
```

---

**总结：这是一个精心设计的硬件测试框架，通过回调函数注册机制实现了松耦合的系统，允许开发者通过简单的 Shell 命令进行复杂的硬件功能测试。** ✅
