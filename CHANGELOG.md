# Changelog

## 2.0.0（2026-11-17）

按 `docs/RRC编解码库简化方案.md`（v0.5）从零实现 v2 库：

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
- 文档：`docs/接口规范.md`、`docs/实现决策记录.md`、`docs/测试报告.md`、
  `docs/实现契约.md`。

### 说明

- 与 v1 不共享实现；v1 目录/代码保持不动。
- 直接扩展添加项按标准 PER 逐项编码（见 ADR-004，方案 3.5.7 的澄清）。
- 未实现（方案 1.4 非目标）：动态值树、Schema 内省、JSON、字段路径、句柄、
  流式/部分解码、aligned PER/BER、Phase 2 ASN.1 模块。
