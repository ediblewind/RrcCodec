# Changelog

## 未发布

### 变更

- **许可证**：由 Apache-2.0 改为 MIT（见 `LICENSE`）。
- **单一来源元数据**：新增 `data/version.txt`（库版本 + C API 版本）、
  `data/asn-version.txt`、`data/message-set.txt`；CMake 从数据文件读取
  `project(VERSION)`，`RRC_CODEC_REGENERATE` 输入改为 `data/38.331_v*.asn` 通配。
- **生成物扩展**：`include/rrc_codec/rrc_version.h` 改为生成物；
  `rrc_messages.h` 新增 `RRC_CODEC_MESSAGE_KIND_COUNT`；新增
  `generated/message_dispatch.inc`（dispatch 的 X-macro 清单）、
  `generated/rrc_manifest.json`（机器可读清单）、
  `tests/generated/message_manifest.{h,cpp}`（测试用消息清单）。
- **测试去硬编码**：`dispatch.cpp` 不再手写消息清单；`tests/messages` 使用生成的
  数量/名称表（测试更名为 `messages.roundtrip_all`）；黄金向量的版本断言改用
  `RRC_CODEC_VERSION_STRING` / `RRC_CODEC_ASN1_VERSION_STRING` 宏。
- **生成器**：消息提取改为结构遍历（`data/message-set.txt` 仅作基线校验），
  新增 `--update-baseline` 自动维护消息集基线；`--input` 支持版本通配。
- **一键迁移**：新增 `tools/update_asn.py`，自动更新 `data/` 单一来源
  （SHA、ASN.1 版本、可选库版本）、重生成、比对新旧 manifest 并输出
  `generated/MIGRATION_NOTES.md`（消息/结构/统计变化、受影响手写文件、人工清单、
  回滚命令）；失败自动回滚 `data/`。`rrc_manifest.json` 每条消息新增 `SchemaHash`。

### 说明

- 生成物仍入库并逐字节可复现（`python -m rrcgen --check` 覆盖所有新增产物）；
  公开 C ABI 仍为 8 个函数，运行时行为不变。

## 2.0.0（2026-11-17）

从零实现 v2 库：

### 新增

- **生成器**（`tools/rrcgen`）：复用 ASN.1 前端，新增 C 发射器
  `cnames.py` / `cmodel.py` / `emitters/c_{types,messages,codec,samples}.py`；
  生成类型头、消息表、内部函数声明、32 个编解码分块、统计与消息索引，
  生成物逐字节可复现（`python -m rrcgen --check`）。
- **公开 C ABI**（8 个函数）：`EncodeMessage`、`DecodeMessage`、`FreeMessage`、
  `FreeEncodedMessage`、`GetLastErrorInfo`、`SetErrorHandler`、
  `GetVersionString`、`GetAsn1VersionString`。
- **53 个实际消息的 C 结构体**与全部 IE 映射；不含信道容器结构体。
- **`OCTET STRING (CONTAINING Y)` 自动解析**为内层结构体指针（`Y*`），
  编解码自动加/去开放类型包装，深度上限 `RRC_CODEC_MAX_CONTAINING_DEPTH`。
- **PER 运行时**：BitWriter/BitReader/Encoder/Decoder，覆盖约束整数/长度、
  长度确定量与 16K 分片、normally small、BIT/OCTET STRING 定长/约束/半约束、
  开放类型、错误粘滞。
- **CMake 构建/安装**：静态库（默认）与共享库、CMake package
  （`find_package(RrcCodec 2 CONFIG REQUIRED)`）、可重定位 pkg-config、
  Runtime/Development 安装布局；C99 与 C++17 示例。
- **测试**：PER 原语单元测试、MIB 黄金向量 `5471ac`、53 消息 round-trip、
  信道校验、CONTAINING 解析与深度上限、公共头 C99/C++17 检查、安装消费测试。

### 说明

- 与 v1 不共享实现；v1 目录/代码保持不动。
- 直接扩展添加项按标准 PER 逐项编码（对直接扩展添加项的澄清）。
- 未实现（非目标）：动态值树、Schema 内省、JSON、字段路径、句柄、
  流式/部分解码、aligned PER/BER、Phase 2 ASN.1 模块。
