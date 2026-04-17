# 芯片分区详细索引与代码调用关系

## 1. 分区表与用途

| 分区名   | 典型大小   | 用途说明                         |
|----------|------------|----------------------------------|
| spl      | 1MB        | Bootloader，负责芯片上电启动和加载主系统镜像。|
| env      | 256KB      | 存储系统环境变量（如启动参数、配置信息），支持掉电保存。|
| env_r    | 256KB      | 环境变量备份区，主区损坏时可恢复。|
| os       | 15MB       | 主操作系统镜像，系统启动后运行的主固件。|
| os_r     | 15MB       | 操作系统镜像备份，主固件损坏时可切换。|
| rodata   | 35MB       | 只读数据区，存放静态资源（如UI、字库、固件等）。|
| data     | 60MB       | 用户数据区，存储应用运行时产生的数据。|

## 2. 代码调用关系

### 2.1 分区解析与初始化
- 头文件 `partition_table.h` 定义分区字符串。
- `aic_part_mtd_parse` 解析分区字符串，生成链表结构。
- `aic_part_gpt_parse` 支持GPT分区表解析。
- `aic_part_dump` 可打印所有分区信息，便于调试。

### 2.2 分区查找与访问
- `aic_part_get_byname(struct aic_partition *head, char *name)`
  - 通过分区名查找对应分区结构体。
  - 典型用法：
    ```c
    struct aic_partition *os_part = aic_part_get_byname(head, "os");
    ```
- 读写分区数据：
  - 通过分区的 `start` 和 `size` 字段，结合底层 Flash/MTD/GPT 驱动进行数据操作。
  - 相关代码如 `disk_part.c`、`fal_partition.c` 等，负责分区校验、读写、擦除等。

### 2.3 主备机制
- `env`/`env_r`、`os`/`os_r` 通过主备分区机制提升可靠性。
- 启动时可检测主分区有效性，若损坏则自动切换到备份分区。

### 2.4 Luban SDK 结合
- SDK 统一接口管理分区，应用层无需关心底层实现。
- 分区表可通过编译参数或配置文件灵活调整。
- 支持分区校验、备份恢复、动态扩展等高级功能。

## 3. 典型调用流程示意

```c
// 1. 解析分区表
struct aic_partition *head = aic_part_mtd_parse(IMAGE_CFG_JSON_PARTS_MTD);

// 2. 查找分区
struct aic_partition *os_part = aic_part_get_byname(head, "os");

// 3. 读写分区数据
flash_read(os_part->start, buf, os_part->size);

// 4. 释放分区链表
aic_part_free(head);
```

---

## 详细分区内容举例

### 1. spl 分区
- 主要存放 bootloader 相关的二进制文件和启动脚本。
- 典型路径：`output/d21x_demo128-nand_yyzlt_baremetal_bootloader/application/baremetal/bootloader/`
- 结构示例：`cmd/`、`lib/`、`main.o`（启动相关代码和库）

### 2. env/env_r 分区
- 存放系统环境变量，掉电保存，主备机制。
- 典型文件：`target/d21x/demo128-nand/pack/env.txt`
- 内容示例：启动分区标志、升级状态、启动计数等。

### 3. os/os_r 分区
- 存放主系统固件和应用程序二进制。
- 典型路径：`output/d21x_demo128-nand_yyzlt_baremetal_bootloader/kernel/`、`output/.../application/`
- 内容：系统内核、驱动、主应用程序等。

### 4. rodata 分区
- 存放静态只读资源，防止被意外修改。
- 典型路径：
  - `packages/artinchip/lvgl-ui/aic_demo/niu_player/lvgl_src/lvgl_data/`（如`pet/`、`skin/`等）
  - `rdata/lvgl_data/`（如`font/`、`icon/`、`gear/`等）
- 内容：UI图片、字体、只读配置、固件资源等。

### 5. data 分区
- 存放所有可变、需掉电保存的用户数据和应用配置。
- 典型文件/文件夹：
  - `packages/artinchip/lvgl-ui/aic_demo/niu_player/lvgl_src/config.json`（UI配置、状态）
  - `niu_player/lvgl_src/lvgl_data/pet/`（用户交互数据、动画等）
  - `niu_player/rdata/lvgl_data/`（运行时生成的内容、缓存等）
- 内容：用户配置、运行时状态、用户生成内容、应用缓存等。

---

## 设计建议

- **spl、os、os_r、rodata**：一般只读，升级或烧录时才会写入。
- **env、env_r**：仅存储关键环境变量，建议定期备份。
- **data**：所有需掉电保存的用户/应用配置、运行数据、缓存等，均应存储于此，结构可根据应用需求自定义。

2.1 SPL 分区（Secondary Program Loader）
        作用：启动链中最前的 Boot 阶段。
        SPL 里通常包含：
                初始化 CPU、时钟、DDR（内存）的代码
                加载下一阶段 bootloader 所需的基础代码
                非常小的 bin 文件（几十 KB～几百 KB）
            你可以把 SPL 理解成：
            👉 让芯片能“点亮自己”进入下一阶段的引导程序
            类似于 U-Boot 的前置加载器（FSBL）。
    2.2 ENV 分区（Environment）
        作用：存放 Bootloader 环境变量。
        常见内容包括：
            bootcmd（启动命令）
            bootargs（传给 Linux 内核的参数，比如 root=/dev/mmcblk0p2）
            系统分区路径
            调试模式参数（console=ttyS0）
            分区布局、升级参数
        特点       
    2.3 OS 分区（Operating System）
        作用：装载真正的操作系统镜像。
            根据产品不同，这里可能放：
            Linux kernel（Image/zImage/uImage）
            DTB（设备树）
            rootfs（ext4/squashfs/ubi 等）
            或者 AICRTOS / LiteOS 等 RTOS 镜像（如果是非 Linux）
        通俗讲：
            👉 OS 分区 = 你设备运行的系统本体。
            如果是双分区方案，可能有 osA / osB 用于 A/B 双系统升级。
    2.4 RODATA 分区（Read-Only Data）
        作用：只读资源数据区
            常见存放内容：
            UI 资源（图片、字体、图标）
            多媒体资源
            不需要经常更新的静态文件
            固定应用数据、脚本
        特点
            只读（或逻辑上只读，如 squashfs）
            升级 OS 时通常不会变
            不随用户操作变化
            你可以把它理解为：
            👉 装应用资源的光盘，系统能读但不能改。
    2.5 5. DATA 分区（User Data / App Data）
        作用：可读写数据区（最常变化）。
            典型内容：
            App 运行产生的缓存文件
            配置文件（用户设置）
            日志（log）
            可更新的资源
            可写数据库（SQLite 等）
        特点
            可写可改
            升级系统时一般不会清空（除非特别指定）
            系统运行期间最常使用的分区
            通俗讲：
            👉 用户数据 + 程序缓存区
    