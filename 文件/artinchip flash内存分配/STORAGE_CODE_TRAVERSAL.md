# 存储空间分配 - 代码遍历和实现分析

## 一、文件系统组织结构

### 工程目录结构
```
d:\A457\
├── image_cfg.json                  ← Flash 分区配置定义
│
├── bsp/                            ← 板级支持包
│   ├── common/
│   │   ├── partition/              ← 分区解析模块
│   │   │   ├── partition.c        ← 分区配置解析代码
│   │   │   └── disk_part.c        ← 磁盘分区管理
│   │   │
│   │   └── private_param/          ← 私有参数管理
│   │       └── private_param.c    ← 参数存储接口
│   │
│   └── peripheral/
│       └── nftl/                   ← NFTL 驱动实现
│           ├── nftl_api/          ← NFTL 接口
│           ├── nftl_port/         ← NFTL 适配层
│           └── Kconfig            ← NFTL 配置选项
│
├── packages/
│   ├── artinchip/
│   │   ├── aic-dm-apps/
│   │   │   └── xnapp/
│   │   │       ├── gui/           ← GUI 应用
│   │   │       └── misc/
│   │   │           ├── app_config.c   ← ★ config.json 管理 ★
│   │   │           ├── app_config.h
│   │   │           └── [其他模块]
│   │   │
│   │   └── lvgl-ui/
│   │       └── aic_demo/
│   │           └── niu_player/
│   │               └── lvgl_src/
│   │                   ├── config.json     ← GUI 配置示例
│   │                   ├── xnapp.mo        ← .mo 格式的本地化（翻译）二进制文件
│   │                   └── [其他资源]
│   │
│   └── third-party/
│       ├── cJSON-1.7.16/           ← JSON 解析库
│       └── cherryusb/              ← USB 驱动（MTP 支持）
│
└── target/
    ├── d21x/
    │   └── demo128-nand/
    │       └── pack/
    │           └── image_cfg.json  ← ★ 分区镜像配置 ★
    │
    └── [其他平台配置]
```

---

## 二、核心模块代码详解

### 1. 分区配置（image_cfg.json）

#### 位置：`d:\A457\target\d21x\demo128-nand\pack\image_cfg.json`

#### JSON 结构解析

```json
{
  "spi-nand": {
    "size": "128m",              // 总容量 128MB
    "partitions": {
      "spl": {"size": "1m"},                    // 1MB - Bootloader
      "env": {"size": "256k"},                  // 256KB - 环变主
      "env_r": {"size": "256k"},                // 256KB - 环变备
      "os": {"size": "15m"},                    // 15MB - OS 主
      "os_r": {"size": "15m"},                  // 15MB - OS 备
      "rodata": {"size": "35m"},                // 35MB - 资源
      "data": {                                 // 50MB - 应用数据
        "size": "50m",
        "nftl": {                // ← 启用 NFTL 层！
          "data": {
            "size": "-"          // "-" 表示占用全部剩余
          }
        }
      }
    }
  },

  "image": {
    "info": {
      "platform": "d21x",
      "product": "demo128_nand",
      "version": "1.0.0",
      "media": {
        "type": "spi-nand",
        "device_id": 0,
        "array_organization": [
          {
            "page": "2k",       // 页大小 2KB
            "block": "128k",    // 块大小 128KB
            "oob": "64"         // OOB 大小 64 字节
          }
        ]
      }
    },

    "target": {                         // 最终烧写目标
      "spl": {
        "file": "bootloader.aic",
        "attr": ["mtd", "required"],
        "part": ["spl"]
      },
      "env": {
        "file": "env.bin",
        "attr": ["mtd", "optional"],
        "part": ["env", "env_r"]  // ← 同时烧写两个分区（冗余）
      },
      "os": {
        "file": "d21x_os.itb",
        "attr": ["mtd", "required"],
        "part": ["os"]
      },
      "rodata": {
        "file": "rodata.fatfs",
        "attr": ["mtd", "optional"],
        "part": ["rodata"]
      },
      "data": {
        "file": "data.fatfs",
        "attr": ["block", "optional"],  // ← 块设备（支持 NFTL）
        "part": ["data"]
      }
    }
  },

  "temporary": {                        // 临时构建配置
    "aicboot": {
      "usbupg-ddr-init.aic": {
        "head_ver": "0x00010001",
        "resource": {
          "private": "ddr_init.bin",
          "pbp": "d21x.pbp"
        }
      }
    },
    "uboot_env": {
      "env.bin": {
        "file": "env.txt",
        "size": "4096",         // 有效数据 4KB
        "redundant": "enable"   // ← 冗余使能！
      }
    },
    "itb": {
      "d21x_os.itb": {
        "its": "d21x_os.its"
      }
    }
  }
}
```

#### 关键参数分析

| 参数 | 值 | 含义 | 影响 |
|------|-----|------|------|
| `type` | "spi-nand" | Flash 类型 | 驱动选择 |
| `page` | "2k" | 页大小 | 读写单位 |
| `block` | "128k" | 块大小 | 擦除单位 |
| `oob` | "64" | OOB 字节 | ECC/坏块表空间 |
| `attr` (env) | "mtd" | 驱动类型 | 原始 MTD 驱动 |
| `attr` (data) | "block" | 驱动类型 | 块设备（支持 FS） |

---

### 2. 分区解析代码（partition.c）

#### 位置：`d:\A457\bsp\common\partition\partition.c`

```c
/*
 * 分区解析：将配置字符串转换为分区链表
 * 输入示例："1m(spl),256k(env),256k(env_r),15m(os),..."
 * 输出：链表结构体数组
 */

#include <aic_partition.h>

// 分区结构体定义
struct aic_partition {
    u32 start;              // 起始地址
    u32 size;               // 大小
    char name[MAX_PARTITION_NAME];  // 分区名
    struct aic_partition *next;      // 链表指针
};

/**
 * aic_part_parse - 递归解析单个分区
 * @parts: 配置字符串（如 "1m(spl)"）
 * @start: 当前分区起始地址
 * 
 * 返回：分区结构体指针
 */
static struct aic_partition *aic_part_parse(char *parts, u32 start)
{
    struct aic_partition *part;
    int cnt = 0;
    char *p;

    // 1. 分配内存
    part = malloc(sizeof(struct aic_partition));
    if (!part)
        return NULL;

    memset(part, 0, sizeof(struct aic_partition));

    // 2. 设置起始地址
    part->start = start;
    p = parts;

    // 3. 解析大小字段
    if (*p == '-') {
        /* "-" 表示使用全部剩余空间 */
        part->size = 0;
        p++;
    } else {
        // 将字符串转为数字
        part->size = strtoull(p, &p, 0);

        // 处理单位后缀
        if ((*p == 'k') || (*p == 'K')) {
            part->size *= 1024;
            p++;
        } else if ((*p == 'm') || (*p == 'M')) {
            part->size *= (1024 * 1024);
            p++;
        } else if ((*p == 'g') || (*p == 'G')) {
            part->size *= (1024 * 1024 * 1024);
            p++;
        }
    }

    // 4. 解析地址覆盖（可选的 @address）
    if (*p == '@') {
        p++;
        /* 不关心覆盖地址，直接跳过 */
        part->start = strtoull(p, &p, 0);
    }

    // 5. 验证分区名称开始标记
    if (*p != '(') {
        printf("%s: Partition name should be next of size.\n", __FUNCTION__);
        printf("%s\n", p);
        goto err;
    }
    p++;

    // 6. 提取分区名称（括号内）
    cnt = 0;
    while (*p != ')') {
        if (cnt >= MAX_PARTITION_NAME)
            break;
        part->name[cnt++] = *p++;  // 如 "spl", "env", "data"
    }
    p++;

    // 7. 跳过分隔符
    /* 跳过字符直到 '\0'、','、';' */
    while ((*p != '\0') && (*p != ';') && (*p != ','))
        p++;

    // 8. 递归处理下一个分区
    if (*p == ',') {
        p++;
        part->next = aic_part_parse(p, part->start + part->size);
    }

    return part;

err:
    if (part)
        free(part);
    return NULL;
}

/**
 * aic_part_mtd_parse - 主入口：解析完整的 MTD 字符串
 * @parts: 完整配置字符串（如 "device:1m(spl),256k(env),..."）
 * 
 * 返回：分区链表头
 */
struct aic_partition *aic_part_mtd_parse(char *parts)
{
    char *p;

    p = parts;

    // 跳过设备标识（冒号前）
    while ((*p != '\0') && (*p != ':'))
        p++;

    if (*p != ':') {
        printf("%s: parts is invalid: %s\n", __FUNCTION__, parts);
        return NULL;
    }
    p++;

    // 开始解析分区
    return aic_part_parse(p, 0);
}

/*
 * 使用示例（系统启动时）：
 * 
 * const char *parts_str = "mtd:1m(spl),256k(env),256k(env_r),...";
 * struct aic_partition *parts = aic_part_mtd_parse(parts_str);
 * 
 * 结果：
 * parts -> ├─ name="spl",   start=0x0,       size=0x100000
 *         ├─ name="env",   start=0x100000,  size=0x40000
 *         ├─ name="env_r", start=0x140000,  size=0x40000
 *         ├─ name="os",    start=0x180000,  size=0xF00000
 *         └─ ...
 */
```

#### 解析流程示意

```
输入字符串：
"1m(spl),256k(env),256k(env_r),15m(os),15m(os_r),35m(rodata),50m(data)"
         │
         ├─ 提取 "1m(spl)"
         │  ├─ 大小：1 × 1024 × 1024 = 0x100000
         │  ├─ 名称："spl"
         │  ├─ 起址：0x0
         │  └─ 下一个地址：0x0 + 0x100000 = 0x100000
         │
         ├─ 递归处理 "256k(env)"
         │  ├─ 大小：256 × 1024 = 0x40000
         │  ├─ 名称："env"
         │  ├─ 起址：0x100000
         │  └─ 下一个地址：0x100000 + 0x40000 = 0x140000
         │
         └─ 递归处理 "256k(env_r)"...

最终链表：
part[0]: { name="spl",      start=0x0,       size=0x100000, next=... }
part[1]: { name="env",      start=0x100000,  size=0x40000,  next=... }
part[2]: { name="env_r",    start=0x140000,  size=0x40000,  next=... }
part[3]: { name="os",       start=0x180000,  size=0xF00000, next=... }
...
```

---

### 3. JSON 配置管理（app_config.c）

#### 位置：`d:\A457\packages\artinchip\aic-dm-apps\xnapp\misc\app_config.c`

#### 完整代码分析

```c
#include <rtthread.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <dfs_posix.h>
#include <cJSON.h>
#include "app_config.h"

/* ==================== 配置常量 ==================== */
#define JSON_FILE_PATH "/data/config.json"  // ★ 存储位置 ★
#define SAVE_INTERVAL  30000                 // ★ 30秒保存周期 ★
#define READ_BUFFER_SIZE 512                 // 分次读缓冲

/* ==================== 全局状态 ==================== */
static rt_mutex_t g_json_mutex = RT_NULL;      // 互斥锁（线程安全）
static cJSON *g_json_root = RT_NULL;           // JSON 树根节点（内存）
static rt_thread_t g_tid = RT_NULL;            // 后台保存线程 ID


/* ==================== 阶段1：文件加载 ==================== */

/**
 * 读取 JSON 文件并解析为树状结构
 * 
 * 特点：分次读取，防止大文件导致内存溢出
 * 流程：打开 → 循环读取(512B/次) → 拼接 → 解析 → 关闭
 */
static cJSON *json_load_file(const char *filename)
{
    int bytes_to_read = 0;
    int fd = open(filename, O_RDONLY);
    
    if (fd < 0)
    {
        rt_kprintf("Failed to open file: %s\n", filename);
        return NULL;
    }

    // 计算文件大小（使用 lseek）
    int file_size = lseek(fd, 0, SEEK_END);
    lseek(fd, 0, SEEK_SET);  // 返回文件开头
    
    if (file_size <= 0)
    {
        rt_kprintf("Failed to get file size: %s\n", filename);
        close(fd);
        return NULL;
    }

    // 分配缓冲区
    char *buffer = rt_malloc(file_size + 1);
    if (!buffer)
    {
        rt_kprintf("Failed to allocate buffer\n");
        close(fd);
        return NULL;
    }

    // 分次读取（防止一次性读取导致栈溢出）
    int total_bytes = 0;
    int bytes = 0;
    
    while (total_bytes < file_size)
    {
        bytes_to_read = (file_size - total_bytes > READ_BUFFER_SIZE) ?
                        READ_BUFFER_SIZE : (file_size - total_bytes);
        
        bytes = read(fd, buffer + total_bytes, bytes_to_read);
        
        if (bytes <= 0)
            break;
        
        total_bytes += bytes;
    }

    close(fd);

    // 保证以 '\0' 结尾
    buffer[total_bytes] = '\0';

    // 解析 JSON
    cJSON *json = cJSON_Parse(buffer);
    
    if (!json)
    {
        rt_kprintf("Failed to parse JSON file: %s\n", filename);
    }

    rt_free(buffer);  // 释放临时缓冲
    return json;
}


/* ==================== 阶段2：文件保存 ==================== */

/**
 * 将内存中的 JSON 树序列化并写入文件
 * 
 * 流程：序列化 → 打开文件 → 写入 → 关闭 → 落盘
 * 特点：使用互斥锁，保护并发访问
 */
static void json_save_file(const char *filename)
{
    if (g_json_root == RT_NULL) 
        return;

    // 获取互斥锁（等待直到可用）
    rt_mutex_take(g_json_mutex, RT_WAITING_FOREVER);

    // 序列化 JSON 树为字符串
    char *json_str = cJSON_Print(g_json_root);
    
    if (!json_str)
    {
        rt_kprintf("Failed to generate JSON string\n");
        rt_mutex_release(g_json_mutex);
        return;
    }

    // 打开文件（创建或覆盖）
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0666);
    
    if (fd >= 0)
    {
        // 写入序列化后的 JSON 字符串
        write(fd, json_str, rt_strlen(json_str));
        
        // 关闭文件（确保数据落盘）
        close(fd);
    }
    else
    {
        rt_kprintf("Failed to write file: %s\n", filename);
    }

    // 释放互斥锁
    rt_mutex_release(g_json_mutex);
    
    // 释放临时字符串
    rt_free(json_str);
}


/* ==================== 阶段3：数据访问接口 ==================== */

/**
 * 获取字符串值（线程安全）
 * 
 * 使用场景：
 *   const char *path = json_get_strvalue("skinpng_path");
 */
const char *json_get_strvalue(const char *key)
{
    if (g_json_root == RT_NULL) 
        return NULL;

    // 获取互斥锁
    rt_mutex_take(g_json_mutex, RT_WAITING_FOREVER);
    
    // 查找键对应的对象
    cJSON *item = cJSON_GetObjectItem(g_json_root, key);
    
    // 安全地获取字符串值
    const char *value = (item) ? item->valuestring : NULL;
    
    // 释放互斥锁
    rt_mutex_release(g_json_mutex);

    return value;
}

/**
 * 设置字符串值（线程安全）
 * 
 * 使用场景：
 *   json_set_strvalue("skinpng_path", "/rodata/skin.png");
 */
void json_set_strvalue(const char *key, const char *value)
{
    if (g_json_root == RT_NULL) 
        return;

    // 获取互斥锁
    rt_mutex_take(g_json_mutex, RT_WAITING_FOREVER);
    
    // 查找已存在的键
    cJSON *item = cJSON_GetObjectItem(g_json_root, key);
    
    if (item)
    {
        // 更新现有值
        cJSON_SetValuestring(item, value);
    }
    else
    {
        // 添加新键值对
        cJSON_AddStringToObject(g_json_root, key, value);
    }

    // 释放互斥锁
    rt_mutex_release(g_json_mutex);
}

/**
 * 获取整数值（线程安全）
 */
const int json_get_intvalue(const char *key)
{
    if (g_json_root == RT_NULL) 
        return -1;

    rt_mutex_take(g_json_mutex, RT_WAITING_FOREVER);
    cJSON *item = cJSON_GetObjectItem(g_json_root, key);
    const int value = (item && cJSON_IsNumber(item)) ? item->valueint : 0;
    rt_mutex_release(g_json_mutex);

    return value;
}

/**
 * 设置整数值（线程安全）
 */
void json_set_intvalue(const char *key, int value)
{
    if (g_json_root == RT_NULL) 
        return;

    rt_mutex_take(g_json_mutex, RT_WAITING_FOREVER);
    cJSON *item = cJSON_GetObjectItem(g_json_root, key);
    
    if (item)
        cJSON_SetIntValue(item, value);
    else
        cJSON_AddNumberToObject(g_json_root, key, value);
    
    rt_mutex_release(g_json_mutex);
}

/**
 * 立即保存（不等待定时器）
 * 
 * 使用场景：关键数据需要立即持久化
 */
void save_file_realtime(void)
{
    json_save_file(JSON_FILE_PATH);
}


/* ==================== 阶段4：后台定时保存 ==================== */

/**
 * 后台保存线程入口
 * 
 * 流程：无限循环 → 等待30秒 → 保存 JSON → 循环
 * 特点：低优先级，不阻塞主线程
 */
static void save_task(void *parameter)
{
    while (1)
    {
        // 每 30 秒执行一次
        rt_thread_mdelay(SAVE_INTERVAL);
        
        // 调用保存函数
        json_save_file(JSON_FILE_PATH);
    }
}


/* ==================== 阶段5：初始化 ==================== */

/**
 * 初始化 JSON 管理模块
 * 
 * 步骤：
 * 1. 创建互斥锁（线程安全）
 * 2. 从文件加载 JSON（或创建默认）
 * 3. 启动后台保存线程
 * 
 * 调用时机：系统启动时，文件系统准备就绪后
 */
void json_manager_init(void)
{
    // 步骤 1：创建互斥锁
    if (g_json_mutex == RT_NULL)
    {
        g_json_mutex = rt_mutex_create("g_json_mutex", RT_IPC_FLAG_PRIO);
        if (!g_json_mutex)
        {
            rt_kprintf("Failed to create mutex\n");
            return;
        }
    }

    // 步骤 2：从文件加载 JSON
    if (g_json_root == RT_NULL)
    {
        // 尝试读取现有配置
        g_json_root = json_load_file(JSON_FILE_PATH);
        
        if (!g_json_root)
        {
            // 文件不存在或解析失败，创建默认配置
            rt_kprintf("Creating default JSON configuration\n");
            
            g_json_root = cJSON_CreateObject();
            if (g_json_root)
            {
                // 添加默认字段（与 config.json 一致）
                cJSON_AddStringToObject(g_json_root, "skinpng_path", "");
                cJSON_AddNumberToObject(g_json_root, "skin_circle_id", 0);
                cJSON_AddNumberToObject(g_json_root, "current_page", 0);
                cJSON_AddNumberToObject(g_json_root, "device_connect", 0);
                cJSON_AddNumberToObject(g_json_root, "pre_screen", 0);
                
                // 立即保存
                json_save_file(JSON_FILE_PATH);
            }
        }
    }

    // 步骤 3：启动后台保存线程
    if (g_tid == RT_NULL)
    {
        g_tid = rt_thread_create(
            "save_task",           // 线程名
            save_task,             // 线程入口函数
            NULL,                  // 参数
            2048,                  // 栈大小
            20,                    // 优先级（数字越大优先级越低）
            10                     // 时间片
        );
        
        if (g_tid)
        {
            rt_thread_startup(g_tid);
            rt_kprintf("Background save thread started\n");
        }
        else
        {
            rt_kprintf("Failed to create save thread\n");
        }
    }
}
```

#### 关键流程分析

```
初始化流程（系统启动）：

json_manager_init()
    │
    ├─ Step 1: 创建互斥锁
    │  └─ g_json_mutex = rt_mutex_create("g_json_mutex", ...)
    │
    ├─ Step 2: 加载 JSON 配置
    │  ├─ 尝试打开 /data/config.json
    │  │  ├─ 存在 → 读取并解析
    │  │  └─ 不存在 → 创建默认
    │  └─ g_json_root = cJSON_Parse(buffer)
    │
    └─ Step 3: 启动后台线程
       ├─ rt_thread_create("save_task", save_task, ...)
       └─ rt_thread_startup(g_tid)
       
       后台线程运行：
       while (1) {
           rt_thread_mdelay(30000);      // 等待 30 秒
           json_save_file(...);          // 保存到 Flash
       }


运行时流程（应用使用）：

应用代码：
    json_set_intvalue("current_page", 2);
    
时间线：
T=0s:   
    → json_set_intvalue()
    → rt_mutex_take()           (获取锁)
    → cJSON_SetIntValue()       (修改内存，< 1ms)
    → rt_mutex_release()        (释放锁)
    ✓ 完成（无需等待）
    
T=0s~30s:
    → 应用继续运行
    → 内存中 JSON 树持续更新
    → 此期间所有数据仅在 RAM 中
    ⚠ 掉电风险！
    
T=30s:
    [后台线程定时器到期]
    → save_task() 被唤醒
    → rt_mutex_take()           (获取锁)
    → char *json_str = cJSON_Print(g_json_root)
    → fd = open(/data/config.json, O_WRONLY | O_CREAT | O_TRUNC)
    → write(fd, json_str, strlen(json_str))
    → close(fd)                 (落盘！)
    → rt_mutex_release()        (释放锁)
    ✓ 数据已保存到 NAND Flash
    
T=30s~60s:
    → 后台线程再次休眠 30s
    → 应用继续运行
    
T=60s:
    [再次触发保存]
    → (重复上述流程)
```

---

### 4. NFTL 驱动配置（Kconfig）

#### 位置：`d:\A457\bsp\peripheral\nftl\Kconfig`

```kconfig
config AIC_NFTL_SUPPORT
    bool "Aic NFTL support"
    help
        Enable NFTL (NAND Flash Translation Layer) support
        for bad block management and wear leveling

config AIC_NFTL_USE_LIB
    depends on AIC_NFTL_SUPPORT
    bool "Aic NFTL use lib"
    help
        Use precompiled NFTL library instead of source code

config AIC_NFLT_TEST
    depends on AIC_NFTL_SUPPORT
    bool "Enable NFTL test command"
    help
        Enable NFTL test commands for debugging
```

#### 编译条件
```
# 默认配置
AIC_NFTL_SUPPORT = y          # 启用 NFTL
AIC_NFTL_USE_LIB = y          # 使用库文件
AIC_NFLT_TEST = y             # 启用测试

# 编译时自动链接
libnftl_lib_d21x.a            # 预编译库
```

---

## 三、存储访问流程总结

### 完整调用链

```
应用程序调用
    ↓
json_set_intvalue("current_page", 2)
    ├─ 获取互斥锁 rt_mutex_take()
    ├─ 修改 cJSON 树
    └─ 释放互斥锁 rt_mutex_release()
    
    [内存中立即更新，无需等待]
    
    ↓
[30秒定时器触发]
    ↓
save_task() 后台线程
    ├─ 获取互斥锁
    ├─ 序列化：cJSON_Print()
    ├─ 写入文件：open()/write()/close()
    └─ 释放互斥锁
    
    ↓
FATFS 文件系统
    ├─ 查找 /data 目录
    ├─ 创建/更新 config.json 目录项
    ├─ 分配簇链
    ├─ 写入 FAT 表
    └─ 提交到下一层
    
    ↓
NFTL 翻译层
    ├─ 逻辑块地址 (LBA) 映射到物理块地址 (PBA)
    ├─ 磨损平衡算法（选择擦次最少的块）
    ├─ 坏块检查（跳过坏块）
    └─ 转向到选定的物理块
    
    ↓
MTD/NAND 驱动
    ├─ 编程操作（物理写入）
    ├─ ECC 计算与验证
    └─ 掉电保护完成
    
    ↓
[数据持久化到 NAND Flash]
```

---

## 四、.mo 文件处理

### 位置
```
d:\A457\packages\artinchip\lvgl-ui\aic_demo\niu_player\lvgl_src\xnapp.mo
```

### 处理流程
```
xnapp.mo (ELF 格式)
    ↓
打包到 rodata.fatfs (35MB)
    ↓
系统启动时加载到 data 分区
    ↓
应用运行时通过 gettext 库访问
    ↓
国际化语言支持
```

### 国际化调用示例
```c
#include <libintl.h>

// 初始化本地化
bindtextdomain("xnapp", "/rodata/locale");
textdomain("xnapp");

// 获取翻译字符串
const char *hello = gettext("Hello");      // 根据系统语言返回译文
const char *goodbye = gettext("Goodbye");  // 从 .mo 文件查询
```

---

## 总结：数据流向

```
app_config.c (JSON 管理层)
  ↓
[内存中的快速读写] ← 30秒定时保存
  ↓
文件系统 (/data/config.json)
  ↓
FATFS (FAT 文件系统)
  ↓
NFTL (磨损平衡、坏块管理)
  ↓
MTD/NAND 驱动
  ↓
SPI-NAND Flash (物理存储) ← 掉电安全
```

关键点：
- ✓ 内存中快速读写
- ✓ 后台自动保存（30秒）
- ✓ NFTL 智能管理
- ✓ NAND Flash 掉电安全
- ✓ 支持 .mo 国际化文件
