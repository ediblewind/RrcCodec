# RRC 编解码库简化方案（评审稿）

> - 版本：v0.5（2026-11-17）
> - 状态：**评审稿，未实现**。本文只描述方案，不修改任何源码；评审通过后再进入实现。
> - 修订记录：
>   - v0.1：初稿（按信道生成 10 个入口结构体，统一 `Rrc_` 前缀）。
>   - v0.2：按评审意见调整——**顶层结构体直接是实际消息（MIB、SIB1、RRCReconfiguration 等），不再生成信道容器结构体**；**类型名直接使用 ASN.1 原名，不加 `Rrc_` 前缀**；编码不传信道类型，解码传信道类型；编解码只保留通用接口。
>   - v0.3：编码也显式传消息类型——`EncodeMessage(kind, message, bitstream)`；解码 `DecodeMessage(channel, kind, bitstream, message)`。**取消 C11 `_Generic`/C++ 模板类型推断糖**，回归纯 C99 ABI，接口与生成器进一步简化。
>   - v0.4：**取消公开的位流对象与初始化接口**——编码直接输出库分配的 `EncodedMessage`（字节 + 有效位数），解码直接接收 `data/size` 字节缓冲；位流读写降为内部实现，公开 ABI 从 10 个函数减到 8 个。
>   - v0.5：**补齐 `OCTET STRING (CONTAINING Y)` 的解码**——字段/备选表示为 `Y*`（可选时 NULL 表示未出现），解码时自动读取开放类型并解析内层结构体，编码时自动编码内层并包成开放类型；顶层类型全部获得 C 名（`SEQUENCE OF` 生成包装结构体、基本类型生成 typedef），并增加 `CONTAINING` 深度上限以处理 2 处循环类型。
> - 输入基线：`data/38.331_v18.10.0.asn`（3GPP TS 38.331 v18.10.0，`NR-RRC-Definitions` 模块）
> - 关联文档：`docs/RRC编解码库设计方案.md`（现行方案）、`docs/接口规范.md`、`docs/实现决策记录.md`
> - 结论摘要见第 0 章；待评审问题见第 15 章；与现行方案逐项对照见第 16 章。

---

## 0. 结论摘要（TL;DR）

本方案把编解码库收敛为**一种表示、一套接口、一条生成链路**：

1. **一种表示**：每个实际 RRC 消息（MIB、SIB1、RRCReconfiguration、RRCSetup 等，共 53 个）
   对应一个顶层 C 结构体；其余 IE 也直接映射为 C 结构体/枚举。
   **不生成 `BCCH-BCH-Message`/`DL-DCCH-Message` 这类信道容器结构体，也不生成信道枚举参数
   对应的结构体层级**——消息类型本身唯一确定了它所属的信道。
   **`OCTET STRING (CONTAINING Y)` 不再退化为原始字节**：字段/备选表示为 `Y*`，
   解码时自动解析内层结构体（如 `masterCellGroup` 解出 `CellGroupConfig`），
   编码时自动编码内层并包成开放类型；2 处循环类型通过指针 + 深度上限处理。
2. **一套接口**：只导出 C ABI，公开函数共 8 个。用户侧核心接口只有四个：
   `EncodeMessage(kind, message, &encoded)`（**编码传消息类型，不传信道，直接输出字节缓冲**）、
   `FreeEncodedMessage(&encoded)`（释放编码结果）、
   `DecodeMessage(channel, kind, data, size, message)`（**解码传信道 + 消息类型，
   直接接收字节缓冲**）、`FreeMessage(kind, message)`（释放解码内存）。
   **不为 53 个消息分别定义编解码函数**，也**不做类型推断宏/模板**，也**不暴露位流对象**：
   消息类型就是一个普通 `MessageKind` 枚举参数，C99 即可直接调用。
3. **一条生成链路**：复用现有 Python ASN.1 前端，替换发射器：
   生成 C 结构体头 + 每个消息/IE 的编解码函数；不再生成 Schema、描述符、转换器、注册表。
   每个消息的编码器负责写入其信道包装层的固定选择位（CHOICE 索引等），对用户透明。
4. **错误只留接口**：所有函数返回 `ErrorCode`；保留 `ErrorInfo` 与
   `GetLastErrorInfo`/`SetErrorHandler` 接口，首版只填错误码、信道与位偏移，
   不实现日志框架、字段路径与错误详情。
5. **构建安装完整**：CMake 构建库/测试/示例，`install` 支持 CMake package
   （`find_package(RrcCodec)`）、pkg-config、Runtime/Development 组件，并提供安装后消费测试。

相对现行方案，预计减少约 **80% 的生成代码量**、**70% 的公共接口面**，把“实现复杂度”
从“通用反射式编解码框架”降到“ASN.1 结构体的直译 + 固定 PER 规则”。代价是放弃动态编程、
Schema 内省与任意 IE 编解码能力（见 1.4 与第 15 章）。

---

## 1. 背景与目标

### 1.1 背景

现行 v1 已按 `docs/RRC编解码库设计方案.md` 实现并入库，功能覆盖 10 个 Uu 口消息入口，
但实现复杂度显著超出实际使用所需：

- 同时维护 **typed 模型**（生成的 C++ struct/class）、**动态值树**（`RrcValue`/`RrcMessage`）
  与 **Schema 描述符**（`TypeDescriptor`/`FieldDescriptor`）三套表示，并通过转换器互转；
- 生成物包含 10,680 个描述符、6,224 个 typed C++ 类型、约 33.7 MB 生成源码
  （转换器约 18 MB、注册表 6.7 MB、Schema 约 8 MB）与约 11 MB 生成头（类型头约 4.8 MB）；
  Windows/MinGW 下全量构建时间明显超出预算（ADR-017）；
- 公共 API 包含 C++ `Codec`、C 句柄、字段路径、选项、Schema 内省、JSON 等大量能力，
  而多数使用场景只需要“填结构体、编码、解码、读字段”。

评审意见进一步明确：**消息结构体不需要附带信道层级**（MIB 本身就是 BCCH-BCH 的消息，
SIB1 本身就是 BCCH-DL-SCH 的消息，消息类型已唯一确定信道）；**命名不加 `Rrc_` 前缀**；
**不要为每条消息生成独立编解码接口**。v0.3 进一步确认：**编码也可以直接传消息类型**，
因此取消类型推断糖，接口统一为“`EncodeMessage(kind, …)` + `DecodeMessage(channel, kind, …)`”，
纯 C99 即可使用。本方案按此调整。

### 1.2 现行方案的复杂度来源

| # | 复杂度来源 | 具体表现 | 本方案处理 |
|---:|---|---|---|
| 1 | 三套数据表示 | typed 结构体 / `RrcValue` 动态树 / Schema 描述符，需要转换器与一致性维护 | 只保留 C 结构体 |
| 2 | 通用描述符引擎 | 为支持动态 API，引擎按描述符解释执行；10,680 个描述符 + 6.7 MB 注册表 | 改为按类型生成的专用编解码函数，无描述符 |
| 3 | 接口面过宽 | C++ `Codec`、C 句柄、路径字符串、选项、内省、JSON、分配器、统计 | 只保留 8 个 C ABI 函数 |
| 4 | 生成物规模 | 生成源码约 33.7 MB + 生成头约 11 MB，编译慢、内存高 | 结构体头约 3–4 MB + codec 约 6–9 MB，分块编译 |
| 5 | 使用门槛 | 句柄生命周期、字段路径、错误字符串、typed/dynamic 两套用法 | 直接读写结构体字段 |
| 6 | 生成器职责 | 同时发射类型、描述符、转换器、注册表、Schema、常量、文档 | 只发射结构体、codec、消息类型表 |
| 7 | 信道层级冗余 | 10 个信道容器结构体只是把消息包进 CHOICE/SEQUENCE | 删除；消息结构体直接作为顶层 |

### 1.3 本方案目标

| 编号 | 目标 | 验收口径 |
|---|---|---|
| G1 | C++17 实现，稳定 C ABI | 公共头可被 C99 编译器包含；无宏/模板糖，纯 C ABI 调用；只导出 C 符号 |
| G2 | 命名自解释、无 `Rrc_` 前缀 | 类型直接使用 ASN.1 原名（仅 `-`→`_`）；函数用动词/名词组合，如 `EncodeMessage`（第 3 章） |
| G3 | 每个消息一个完整结构体 | 53 个实际消息各一个顶层结构体，字段完整可直接读写；不生成信道容器结构体 |
| G4 | 编解码接口最小化 | 编码：`EncodeMessage(kind, message, &encoded)`；解码：`DecodeMessage(channel, kind, data, size, message)`；不给每条消息定义独立函数，不暴露位流对象 |
| G5 | 错误只留接口 | 返回码 + 最小 `ErrorInfo`；无日志框架、无字段路径、无详情文本 |
| G6 | CMake 安装可用 | `install` 后 `find_package`/pkg-config/subdirectory 三种消费方式均通过 CI |
| G7 | 简化且可验证 | 删除三套表示中的两套与信道容器层；黄金向量、53 消息 round-trip、差分对拍通过 |
| G8 | 可生成、可复现 | ASN.1 输入 + 生成器版本固定 → 生成物逐字节可复现，CI 校验 |

### 1.4 非目标（明确不做）

- 不生成 `BCCH-BCH-Message`、`DL-DCCH-Message` 等 10 个信道容器结构体；
- 不为 `messageClassExtension`、`spare`、`messageClassExtensionFuture` 等非实际消息生成结构体；
  码流中出现这些分支时返回“不支持/消息类型不匹配”；
- 不做动态值树、字段路径、JSON、Schema 内省、消息句柄、选项结构体；
- 不暴露 `BitStream`/读写初始化接口；位流读写是内部实现细节；
- 不做流式编解码/部分解码；一次调用只处理一条完整消息；
- 不为 53 个消息分别提供 `EncodeMIB`/`DecodeMIB` 之类的独立接口；
- 不做任意 IE 的独立编解码；`CONTAINING` 在字段/备选层自动解析内层类型，但不提供
  “按类型 ID 编解码任意 IE”的入口（见 Q-06）；
- 不支持 `CONTAINING` 目标为 ENUMERATED 的模块（v1 无此情况；生成器遇到即报错）；
- 不实现完整错误日志/错误回调触发/回溯/字段路径；
- 不实现 aligned PER、BER、流式编解码、部分解码；
- 不实现 Phase 2 模块（PC5-RRC、NR-InterNode、Sidelink 等 5 个 ASN.1 模块）；
- 不改造现有 v1 代码，不删除任何现有文件（本次仅新增/修订本文档）。

### 1.5 约束与假设

| 项 | 取值/假设 |
|---|---|
| 语言 | 库实现 C++17；公共头 C99；不依赖 C11 `_Generic`、C++ 模板或编译器扩展 |
| 编解码形态 | 一次调用处理一条完整消息；编码由库分配输出缓冲，解码借用调用方输入缓冲 |
| ABI | 仅导出 `extern "C"` 符号；结构体按平台自然布局，不承诺跨字长/跨编译器共享 |
| ASN.1 | 仅 `NR-RRC-Definitions`（v18.10.0）；其余模块 Phase 2 |
| 生成器 | 复用 `tools/rrcgen` 现有前端（Python，开发期工具，不随库安装） |
| 构建 | CMake ≥ 3.20；GCC/Clang/MSVC/MinGW；无第三方运行时依赖 |
| 平台 | Windows 优先（当前开发环境），Linux/macOS 纳入 CI |
| 本次范围 | **只修订方案，不编码**；不构建、不修改头文件与源码 |
| 版本关系 | 新方案作为 v2 候选；与 v1 并存或替换由评审决定（Q-07） |

---

## 2. 总体方案

### 2.1 架构

```
┌──────────────────────────────────────────────────────────────────────┐
│ 调用方：C99 / C++17（同一套 C ABI 头 rrc_codec.h）                    │
│   编码：EncodeMessage(MessageKind_MIB, &mib, &encoded)                │
│         → encoded.data / encoded.size / encoded.bitLength             │
│   解码：DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB,          │
│                       data, size, &mib)              ← 信道 + 消息类型 │
│   释放：FreeEncodedMessage(&encoded) / FreeMessage(kind, &mib)        │
└───────────────────────────────┬──────────────────────────────────────┘
                                │ 直接 C ABI 调用（无宏/模板糖）
┌───────────────────────────────▼──────────────────────────────────────┐
│ 公共 API 层（手写，约 300 行 C++）                                    │
│   EncodeMessage / FreeEncodedMessage / DecodeMessage / FreeMessage    │
│   GetLastErrorInfo / 版本函数                                         │
│   职责：参数校验、channel 一致性校验、按 MessageKind 分派、异常兜底、  │
│         编码输出缓冲分配、解码输入缓冲包装                            │
└───────────────────────────────┬──────────────────────────────────────┘
                                │ 内部调用（隐藏符号）
┌───────────────────────────────▼──────────────────────────────────────┐
│ 生成的编解码代码（每个消息/类型一组函数，内部可见）                    │
│   EncodeMessage_<Kind> / DecodeMessage_<Kind>                         │
│   Encode_<Type> / Decode_<Type> / Free_<Type>                         │
│   职责：消息入口先写/读信道包装层的固定 CHOICE 位，再按 ASN.1 字段     │
│         顺序调用 PER 原语；无描述符、无反射                            │
└───────────────────────────────┬──────────────────────────────────────┘
                                │
┌───────────────────────────────▼──────────────────────────────────────┐
│ PER 运行时原语（手写，约 2,500 行 C++）                               │
│   BitWriter/BitReader、长度行列式、受限整数、枚举索引、位图、         │
│   开放类型（长度前缀）、扩展添加项                                    │
└──────────────────────────────────────────────────────────────────────┘
```

与现行方案相比：**没有动态值树、没有描述符、没有注册表、没有转换器、没有 Schema 内省、
没有信道容器结构体**。从 ASN.1 定义到可执行编解码只有一条路径：
`ASN.1 → C 结构体（实际消息/IE）+ 专用编解码函数 → PER 原语`。

### 2.2 数据流

**编码（消息结构体 → 字节缓冲，传消息类型、不传信道）**

1. 调用方填充消息结构体，例如 `MIB mib = {0};…`（OPTIONAL 字段先置 `has_xxx = true`）；
2. `EncodeMessage(MessageKind_MIB, &mib, &encoded)`：按 `kind` 分派到
   `EncodeMessage_MIB`，由生成代码写入 BCCH-BCH 包装层的 CHOICE 索引（`mib` 分支），
   再写 MIB 字段（`CONTAINING` 指针字段会递归编码内层并包成开放类型），
   最后补零到字节边界；
3. 成功后库分配 `encoded.data` 并填 `encoded.size`（字节数）/`encoded.bitLength`（有效位数）；
4. 调用方使用/复制数据后，`FreeEncodedMessage(&encoded)` 释放并清零。

**解码（字节缓冲 → 消息结构体，传信道 + 消息类型）**

1. 调用方准备 `data` + `size`（字节数，借用，不复制）；
2. `DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, data, size, &mib)`：
   先校验 `ChannelOfMessageKind(MessageKind_MIB) == channel`，再分派到 `DecodeMessage_MIB`；
3. 内部按 `size * 8` 位读取，生成代码读取包装层 CHOICE 位，校验确实为 `mib` 分支，
   然后解析 MIB 字段；`CONTAINING` 字段会递归读取开放类型并解析内层结构体
   （如 `masterCellGroup` 解出 `CellGroupConfig`）；消息末尾之后的补零位忽略；
4. 成功后结构体字段可直接读取；
5. `FreeMessage(MessageKind_MIB, &mib)` 释放解码分配的内存并清零结构体。

### 2.3 保留 / 删除清单

| 保留 | 说明 |
|---|---|
| ASN.1 前端（lexer/parser/resolver/IR） | 已实现且统计正确，直接复用，降低生成器风险 |
| UPER 编解码规则 | 位序、长度行列式、约束整数、位图、开放类型等规则不变 |
| 38.331 输入基线与校验和 | `data/38.331_v18.10.0.asn` + `data/asn-input.sha256` |
| 测试资产 | 黄金向量、round-trip 语料、pycrate 对拍思路、安装消费测试思路 |
| CI 构建矩阵思路 | 可简化，但“构建 + 测试 + 安装消费”保留 |

| 删除 | 原因 |
|---|---|
| 10 个信道容器结构体（`BCCH_BCH_Message` 等） | 消息类型已确定信道；容器只增加一层无意义嵌套 |
| `RrcValue`/`RrcMessage` 动态树、`RrcOpenType` | 用户直接使用结构体；动态能力不是目标 |
| `TypeDescriptor`/`FieldDescriptor`/`Registry`/Schema 查询 | 编解码改为专用函数，不再需要运行时类型元数据 |
| typed ↔ dynamic 转换器（约 18 MB 源码） | 三套表示归一后不再需要 |
| 字段路径、JSON、选项、统计、分配器配置 | 降低接口面与实现量 |
| 公开的 `BitStream` 对象与 `BitStreamInitWriter/Reader/Free` | 位流改为内部实现；编码直接产出字节缓冲，解码直接接收字节缓冲 |
| C++ `Codec` 类与句柄体系 | 只保留 C ABI |
| 逐消息的 `EncodeXxx`/`DecodeXxx` 接口 | 只保留一对通用接口，按 `MessageKind` 分派 |
| CLI、模糊测试目标、性能基准 | 首版不要求；可后续按需追加 |

### 2.4 关键取舍：为什么生成专用编解码代码

| 方案 | 描述 | 优点 | 缺点 | 结论 |
|---|---|---|---|---|
| A. 描述符 + 通用引擎（现行） | 运行时按描述符解释执行 | 一份引擎覆盖所有类型；易做动态 API/内省 | 描述符与转换器巨大；三套表示；调试链长 | 不采用 |
| B. 每类型生成编解码函数（本方案） | 生成器为每个类型/消息发射编解码函数，直接调用 PER 原语 | 概念最少；生成代码可读可调试；无运行时元数据；无反射 | 生成源码体积较大；ASN.1 升级需重新生成（可接受） | **采用** |
| C. 全手写 | 人工实现 53 个消息与全部 IE | 无生成器 | 10,983 个字段不可能手写维护 | 不采用 |

**理由**：用户痛点在于“实现复杂”，而复杂度的根源是通用性与动态能力。方案 B 用“代码体积”
换“实现简单”：每个函数的逻辑与 ASN.1 文本一一对应，评审、定位、单步调试都直接；
PER 规则集中在少量手写原语中，正确性只需验证一次。生成物由 CI 校验可复现，不构成维护负担。

### 2.5 与现行方案量化对比（估算）

| 指标 | 现行 v1 | 本方案 | 说明 |
|---|---:|---:|---|
| 数据表示 | 3 套 | 1 套（C 结构体） | 删除动态树/描述符/转换器 |
| 顶层入口结构 | 10 个信道容器 + typed 模型 | 53 个实际消息结构体 | 无信道容器层 |
| 公共头文件 | C++ 10+ 个 + C 1 个 | 7 个（含 2 个生成头） | 见 4.1 |
| 公开函数 | C API 约 60+ | 8 | 见 4.2 |
| 生成类型定义 | 6,224 个 C++ 类型 | 约 7,150 个 C 结构体/枚举/typedef | 6,831 + 357 个顶层 SEQUENCE OF 包装结构体，扣除信道容器 |
| 生成描述符 | 10,680 | 0 | 不再需要 |
| 生成源码/头体积 | 源码约 33.7 MB + 头约 11 MB | 头约 3–4 MB + 源约 6–9 MB | 待 P1 实测校准 |
| 手写核心代码 | `src/` 约 9.2k 行 + 公共头，约 0.5 MB | 约 4–6 千行 | 大幅下降 |
| 全量构建时间（8 核） | 明显超预算（ADR-017） | 目标 ≤ 5 min | P1 实测后定验收值 |
| 使用方式 | 句柄 + 路径字符串 + 选项 | 直接填/读结构体 | 见 4.7 |
| 动态/内省能力 | 有 | 无（明确取舍） | 见 1.4、Q-01 |

> 体积与时间为设计估算；P1 阶段用真实生成物实测后更新本章，并作为验收基线。

---

## 3. 命名与结构体映射规范

本章是生成器与用户共同依赖的“契约”。所有规则必须机械、唯一、可复现；生成器实现与测试
以本章为准。**命名原则：直接使用 ASN.1 原名，不做缩写、不加 `Rrc_` 前缀、不做风格改写，
只做必要转义；不生成信道容器类型。**

### 3.1 命名总则

| 规则 | 说明 |
|---|---|
| N1 类型 | 顶层类型直接使用 ASN.1 原名，`-` 替换为 `_`，其余字符与大小写不变；**无前缀** |
| N2 匿名类型 | 用“父类型名 + 字段/备选名（首字母大写）”合成唯一类型名；**无前缀** |
| N3 字段 | 字段名保留 ASN.1 原拼写，只把 `-` 换成 `_`（如 `ssb-SubcarrierOffset` → `ssb_SubcarrierOffset`） |
| N4 枚举常量 | `<枚举类型名>_<ASN.1 值名>`，如 `MIB_SubCarrierSpacingCommon_scs15or60` |
| N5 函数 | 动词/名词组合的 CamelCase，**无前缀**：`EncodeMessage`、`DecodeMessage`、`FreeMessage`、`FreeEncodedMessage`、`GetLastErrorInfo` |
| N6 结构体 | `typedef struct MIB { … } MIB;`；结构体标签与 typedef 同名，便于 C/C++ 使用 |
| N7 冲突 | 生成的 C 标识符冲突时按源文件出现顺序追加 `_2`、`_3`…，并在注释中保留原名 |
| N8 关键字 | 与 C99/C++17 关键字或常用宏冲突时，标识符追加 `_` 后缀（如 `short` → `short_`） |
| N9 跨库稳定 | 已发布的公开名称在 2.x 内不改；改名视为 ABI 破坏，必须升主版本 |
| N10 宏 | 编译配置/导出宏保留 `RRC_CODEC_` 前缀（如 `RRC_CODEC_API`、`RRC_CODEC_MAX_INPUT_BYTES`），避免污染用户宏空间 |

> **不生成的信道类型**：`BCCH_BCH_Message`、`DL_DCCH_Message` 等 10 个信道容器结构体
> 不属于本方案产物。消息类型本身决定信道（映射见 4.3 与附录 A）。

### 3.2 类型命名

| ASN.1 | 生成的 C 类型 | 规则 |
|---|---|---|
| `MIB` | `MIB` | 实际消息，顶层结构体 |
| `SIB1` | `SIB1` | 实际消息，顶层结构体 |
| `RRCReconfiguration` | `RRCReconfiguration` | 实际消息，顶层结构体 |
| `SystemInformation` | `SystemInformation` | 实际消息，顶层结构体 |
| `SI-SchedulingInfo` | `SI_SchedulingInfo` | 顶层 IE 类型，N1 |
| `RRCReconfiguration` 的字段 `criticalExtensions` 匿名 CHOICE | `RRCReconfiguration_CriticalExtensions` | N2：父类型 + 字段名首字母大写 |
| `RRCReconfiguration_CriticalExtensions` 的备选 `criticalExtensionsFuture` 匿名空 SEQUENCE | `RRCReconfiguration_CriticalExtensionsFuture` | N2：父 CHOICE + 备选名 |
| `MIB` 的匿名 `ENUMERATED` 字段 `subCarrierSpacingCommon` | `MIB_SubCarrierSpacingCommon` | N2，枚举类型 |
| `SetupRelease { SDT-Config-r17 }` | `SetupRelease_SDT_Config_r17` | 参数化类型按实参实例化 |
| 顶层别名 `X ::= Y`（3 处） | `typedef Y X;` | 保留独立名字，不引入新结构 |
| 顶层 `SEQUENCE OF`（如 `PagingRecordList`） | `typedef struct PagingRecordList { PagingRecord* items; uint32_t count; } PagingRecordList;` | 顶层类型拥有命名结构体；字段引用时使用该类型 |
| 顶层 `INTEGER` / `BOOLEAN` / `BIT STRING` / `OCTET STRING` | `typedef int64_t <Name>;` / `bool` / `BitString` / `OctetString` | 顶层基本类型也有 C 名 |
| `X ::= OCTET STRING (CONTAINING Y)` | `typedef Y X;`；字段/备选使用时为 `X*` | CONTAINING 别名；编解码自动加/去开放类型包装 |

补充：

- 匿名类型的“父类型名”可以是顶层类型或另一个匿名类型，形成唯一路径；例如
  `SIB1_UAC_BarringInfo_UAC_AccessCategory1_SelectionAssistanceInfo`。
- 参数化类型 `SetupRelease` 本身不生成泛型类型；对 247 个不同实参各生成一个具体 CHOICE
  结构体，避免 C 语言层面的泛型复杂度。
- 同一实参只生成一份实例（去重），不同实参按首次引用顺序编号，生成结果稳定。
- 53 个实际消息的完整清单、`MessageKind` 枚举值与所属信道见附录 A。

### 3.3 字段、备选与枚举值命名

| 位置 | 规则 | 示例 |
|---|---|---|
| SEQUENCE 字段 | ASN.1 原名，`-`→`_` | `rrc-TransactionIdentifier` → `rrc_TransactionIdentifier` |
| OPTIONAL 字段 | 值字段前增加 `bool has_<字段名>` | `q-RxLevMinOffset` → `has_q_RxLevMinOffset` + `q_RxLevMinOffset` |
| OPTIONAL `CONTAINING` 字段 | 不加 `has_`；指针为 NULL 表示未出现 | `CellGroupConfig* secondaryCellGroup;` |
| DEFAULT 字段 | 只生成值字段；注释标注默认值；根位图仍占 1 bit | `Q-OffsetRange DEFAULT dB0`（38.331 共 19 处） |
| CHOICE 类型 | 生成 `<Choice>_Tag` 枚举 + `union u` | 见 3.5 |
| CHOICE 备选 | 枚举常量 `<Choice>_Tag_<备选名>`；union 成员名用备选名 | `criticalExtensionsFuture` |
| 非扩展 ENUMERATED | C 枚举类型 `<Enum>`，常量 `<Enum>_<值名>` | `MIB_CellBarred_notBarred` |
| 可扩展 ENUMERATED（19 处） | `typedef int32_t <Enum>;` + `#define <Enum>_<值名> <序号>` | 未知值原样保留（Q-04） |
| C 关键字枚举值 | 追加 `_` 后缀 | ASN.1 `short`/`long` → `short_`/`long_` |
| `true`/`false` | 输入文件已改名；注释标注原始名 | `trueVal`（原始 38.331 为 `true`） |
| 重名值 | 按源顺序追加 `_2`、`_3`，注释保留原名 | `dB-3` 与 `dB3` 等 48 组 |

> **关键字转义说明**：38.331 中确有 `ENUMERATED {short, long}`（如
> `interFreqDynamicPowerSharingDAPS-r16`），`short`/`long` 是 C/C++ 关键字，必须转义。
> 转义只改变 C 标识符，不改变 ASN.1 语义与编码。

### 3.4 ASN.1 → C 映射总表

| ASN.1 构造 | C 表示 | 编码/所有权说明 |
|---|---|---|
| 实际消息（53 个） | `typedef struct MIB/… { … } MIB;` 等 | 顶层结构体即消息体；信道包装位由编码器写入 |
| `SEQUENCE` | `typedef struct <Name> { … } <Name>;` | 按声明顺序写入；按值嵌套 |
| `CHOICE` | `<Name>_Tag tag; union { … } u;` | tag 决定编码备选；扩展备选见 3.5 |
| `ENUMERATED`（不可扩展） | C `enum` | 按枚举序号编码 |
| `ENUMERATED`（可扩展） | `int32_t` 别名 + 常量宏 | 未知扩展值原样保留/编码 |
| `INTEGER` | `int64_t`；顶层命名类型生成 `typedef int64_t <Name>;` | 38.331 全部带约束；最大位宽 39 bit |
| `BOOLEAN` | `bool`（`<stdbool.h>`）；顶层命名类型生成 `typedef bool <Name>;` | 1 bit |
| `BIT STRING` | `BitString { uint8_t* bytes; uint32_t bitLength; }`；顶层命名类型用 `typedef BitString <Name>;` | MSB first；解码由库分配 |
| `OCTET STRING` | `OctetString { uint8_t* bytes; uint32_t length; }`；顶层命名类型用 `typedef OctetString <Name>;` | 解码由库分配 |
| `OCTET STRING (CONTAINING Y)` | `Y*`（指针；OPTIONAL 时 NULL 表示未出现） | 解码自动读取开放类型并解析 Y；编码自动编码 Y 并包成开放类型；Y 由库 malloc |
| `SEQUENCE OF` / `SET OF`（顶层命名类型） | `typedef struct <Name> { <T>* items; uint32_t count; } <Name>;` | 全部带 SIZE；解码由库分配 |
| `SEQUENCE OF`（匿名内联字段） | `<T>* items; uint32_t count;` | 同上 |
| `NULL` | `Null { uint8_t _dummy; }` | 0 bit |
| 空 `SEQUENCE {}` | 结构体，仅含 `uint8_t _dummy;` | 0 bit；保持独立类型身份 |
| `OPTIONAL`（普通字段） | `bool has_<字段>` + 值字段 | 编码按存在位图；解码置标志 |
| `OPTIONAL`（`CONTAINING` 字段） | 只有指针字段；`NULL` 表示未出现 | 编码按指针是否为 NULL 决定存在位；解码缺失时置 NULL |
| `DEFAULT` | 值字段（无标志） | 根位图仍占 1 bit；等于默认值时位=0、不编码值，解码缺省填默认值 |
| 扩展添加项 `...` / 组 `[[ ]]` | 生成 `<Type>_ExtAdditions` / `_ExtGroupN` 子结构 + `bool has_…` | 每个组是一个开放类型，见 3.5 |
| 类型别名 `X ::= Y` | `typedef Y X;` | 独立名字，同一 C 类型 |

> **前置规则**：每个**顶层**类型都必须有 C 名字（struct/enum/typedef）；这是
> `CONTAINING` 字段能用 `Y*` 表示、以及前向声明能成立的前提。匿名内联类型仍按
> “父类型 + 字段名”命名，只生成其被引用所需的结构体/枚举。
>
> `CONTAINING` 类型在**任何位置**（SEQUENCE 字段、CHOICE 备选、SEQUENCE OF 元素）
> 统一表示为 `Y*`；由外层容器负责逐项编码/解码开放类型。

### 3.5 结构体布局规则

1. **顶层结构体 = 实际消息体**：`MIB`、`SIB1`、`RRCReconfiguration` 等的字段直接对应
   ASN.1 消息体/IE 定义；**不包含** `BCCH-BCH-Message` 这类信道包装层的字段或 tag。
2. **信道包装位由编解码器处理**：每个消息的生成编码器按附录 A 的固定路径写入外层
   `*-Message` 的 CHOICE 位、`c1`/`c2` 索引等；解码器执行反向校验。用户无感知。
3. **字段顺序**严格等于 ASN.1 声明顺序（根字段 → 直接扩展添加项 → 各扩展组）。
4. **OPTIONAL**：`bool has_<field>` 紧邻值字段之前；编码时 `has_` 决定位图位；
   解码时先读位图再决定是否读值。
5. **DEFAULT**：不生成 `has_` 标志；DEFAULT 字段在根位图中仍占 1 bit，
   值等于默认值时写位 0、不编码值；不等于默认值时写位 1 并编码值；解码时位 0 填默认值。
6. **CHOICE**：`tag` 必须与 `u` 中实际成员一致；编码时校验 tag，解码时按索引设置 tag。
   可扩展 CHOICE 的 tag 枚举包含扩展备选，编码时先写扩展位；根备选按索引编码，
   扩展备选按 normally small 索引 + 开放类型（内层编码后加长度前缀）编码。
7. **扩展添加项**：
   - `...` 之后不属于任何 `[[ ]]` 的添加项合并为一个 `<Type>_ExtAdditions` 子结构，
     整体对应一个开放类型（open type）；
   - 每个 `[[ … ]]` 扩展添加组生成一个 `<Type>_ExtGroupN` 子结构，整体对应一个开放类型；
   - 顶层结构体中为每个组生成 `bool has_extGroupN`（或 `has_extAdditions`）；
     组内成员各自的 OPTIONAL 标志仍独立存在；
   - 编码时先写扩展添加项个数 `n`（normally small length），再写 `n` bit 存在位图，
     然后按顺序写每个存在项的开放类型；
   - 38.331 统计：572 个可扩展 SEQUENCE、535 个扩展组、1,961 个组成员、63 个直接添加项，
     这是生成器与 PER 引擎必须覆盖的固定规则。
8. **`CONTAINING` 字段（开放类型）**：
   - 字段/CHOICE 备选表示为 `Y*`（Y 为内层顶层类型的 C 名）；OPTIONAL 时 NULL 表示未出现，
     必填字段编码时必须非 NULL；
   - 解码：读取开放类型的长度行列式与字节，创建子位流，按 Y 的生成解码函数递归解析，
     成功后 `malloc` 出 Y 并挂到指针；深度超过 `RRC_CODEC_MAX_CONTAINING_DEPTH`
     返回 `ContainingDepthExceeded`；
   - 编码：先把 Y 编码到临时位流并补齐到字节边界，再写长度行列式 + 字节；
     用户构造的循环指针图会在达到深度上限时返回错误；
   - 每次解码的 Y 由库 `malloc`，`FreeMessage` 递归释放。
9. **递归与循环**：类型环仅 2 个且都经过 `CONTAINING`（如
   `RRCReconfiguration → … → nr-SCG (CONTAINING RRCReconfiguration)`），
   通过 `Y*` 指针打破；除 `CONTAINING` 指针外不存在按值递归，其余结构体仍可按值嵌套。
   解码与编码都用 `RRC_CODEC_MAX_CONTAINING_DEPTH` 限制嵌套层数。
10. **不做位域、不做 `#pragma pack`**；只使用固定宽度整数、`bool`、指针、`uint32_t` 长度。
    ABI 布局由平台自然对齐决定（与 1.5 约束一致）。
11. **变长数据统一用“指针 + 长度”**：`BIT STRING` 用 bit 长度，`OCTET STRING` 用字节长度，
    `SEQUENCE OF` 用元素个数；编码方负责提供内存，解码方使用库分配的 `malloc` 内存。
12. **消息类型标识不在结构体内**：顶层结构体不含“信道/消息类型”字段；
    消息类型由 `EncodeMessage` / `DecodeMessage` / `FreeMessage` 的 `MessageKind` 参数显式提供。
13. **前向声明**：生成头在所有结构体定义之前输出
    `typedef struct <Name> <Name>;` 前向声明（以及顶层基本类型 typedef / `SEQUENCE OF`
    包装结构体），使 `CONTAINING` 指针可以引用尚未定义的类型并支持类型环；
    用户看到的类型名不变。

### 3.6 结构体与注释示例

#### 3.6.1 `MIB`（实际消息，含匿名枚举、定长 BIT STRING）

```c
/**
 * @brief MIB（3GPP TS 38.331 v18.10.0，NR-RRC-Definitions，源文件第 761 行）
 *
 * ASN.1 定义：
 * @code
 * MIB ::= SEQUENCE {
 *     systemFrameNumber        BIT STRING (SIZE (6)),
 *     subCarrierSpacingCommon  ENUMERATED {scs15or60, scs30or120},
 *     ssb-SubcarrierOffset     INTEGER (0..15),
 *     dmrs-TypeA-Position      ENUMERATED {pos2, pos3},
 *     pdcch-ConfigSIB1         PDCCH-ConfigSIB1,
 *     cellBarred               ENUMERATED {barred, notBarred},
 *     intraFreqReselection     ENUMERATED {allowed, notAllowed},
 *     spare                    BIT STRING (SIZE (1))
 * }
 * @endcode
 *
 * 所属信道：ChannelType_BCCH_BCH；MessageKind：MessageKind_MIB。
 * 编码规则：UPER；无 OPTIONAL、无扩展项；编码顺序同字段声明顺序。
 * @note 编码时由生成的 EncodeMessage_MIB 先写入 BCCH-BCH 包装层选择位。
 */
typedef struct MIB {
    /** @brief BIT STRING (SIZE(6))：6 bit，高位先写（bit5..bit0）。*/
    BitString systemFrameNumber;

    /** @brief ENUMERATED {scs15or60, scs30or120}：序号 0/1，各 1 bit。*/
    MIB_SubCarrierSpacingCommon subCarrierSpacingCommon;

    /** @brief INTEGER (0..15)：4 bit 无符号偏移量。*/
    int64_t ssb_SubcarrierOffset;

    /** @brief ENUMERATED {pos2, pos3}：序号 0/1，1 bit。*/
    MIB_Dmrs_TypeA_Position dmrs_TypeA_Position;

    /** @brief PDCCH-ConfigSIB1：嵌套结构体，见该类型定义。*/
    PDCCH_ConfigSIB1 pdcch_ConfigSIB1;

    /** @brief ENUMERATED {barred, notBarred}：1 bit。*/
    MIB_CellBarred cellBarred;

    /** @brief ENUMERATED {allowed, notAllowed}：1 bit。*/
    MIB_IntraFreqReselection intraFreqReselection;

    /** @brief BIT STRING (SIZE(1))：1 bit 保留位，编码时填 0。*/
    BitString spare;
} MIB;
```

#### 3.6.2 实际消息中的 CHOICE（`RRCReconfiguration` 节选）

```c
/** @brief RRCReconfiguration 的 criticalExtensions 备选标签；值即编码索引。*/
typedef enum RRCReconfiguration_CriticalExtensions_Tag {
    RRCReconfiguration_CriticalExtensions_Tag_rrcReconfiguration = 0, /**< rrcReconfiguration */
    RRCReconfiguration_CriticalExtensions_Tag_criticalExtensionsFuture = 1 /**< 空 SEQUENCE */
} RRCReconfiguration_CriticalExtensions_Tag;

/** @brief 空 SEQUENCE {}：编码 0 bit，仅用于表达“扩展类”备选。*/
typedef struct RRCReconfiguration_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位字段，C 不允许空结构体；不参与编码。 */
} RRCReconfiguration_CriticalExtensionsFuture;

/** @brief criticalExtensions 的 CHOICE；使用前必须正确设置 tag 与对应 union 成员。*/
typedef struct RRCReconfiguration_CriticalExtensions {
    RRCReconfiguration_CriticalExtensions_Tag tag;
    union {
        RRCReconfiguration_IEs rrcReconfiguration;                                     /**< rrcReconfiguration 备选 */
        RRCReconfiguration_CriticalExtensionsFuture criticalExtensionsFuture;          /**< future 备选 */
    } u;
} RRCReconfiguration_CriticalExtensions;

/** @brief RRCReconfiguration（实际消息，节选；完整字段见生成头）。*/
typedef struct RRCReconfiguration {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< 必填 */
    RRCReconfiguration_CriticalExtensions criticalExtensions; /**< 必填 CHOICE */
} RRCReconfiguration;
```

> 说明：`RRCReconfiguration` 在 DL-DCCH 信道中；编码时生成的
> `EncodeMessage_RRCReconfiguration` 先写 DL-DCCH 包装层选择位，再写上述字段。

#### 3.6.3 `CONTAINING` 字段（`RRCReconfiguration` 中的 `masterCellGroup` 等）

```c
/** @brief RRCReconfiguration-IEs（节选）：CONTAINING 字段直接表示为内层结构体指针。*/
typedef struct RRCReconfiguration_IEs {
    /** @brief OPTIONAL；OCTET STRING (CONTAINING RadioBearerConfig)；NULL = 未出现。*/
    RadioBearerConfig* radioBearerConfig;

    /** @brief OPTIONAL；OCTET STRING (CONTAINING CellGroupConfig)；解码后可直接读字段。*/
    CellGroupConfig* secondaryCellGroup;

    /** @brief OPTIONAL 普通字段；仍使用 has_ + 值。*/
    bool has_measConfig;
    MeasConfig measConfig;

    /** @brief OPTIONAL 普通 OCTET STRING，不进入开放类型解析。*/
    bool has_lateNonCriticalExtension;
    OctetString lateNonCriticalExtension;
    /* … */
} RRCReconfiguration_IEs;

/** @brief RRCReconfiguration-v1530-IEs（节选）。*/
typedef struct RRCReconfiguration_v1530_IEs {
    /** @brief OPTIONAL；OCTET STRING (CONTAINING CellGroupConfig)；NULL = 未出现。*/
    CellGroupConfig* masterCellGroup;
    /* … */
} RRCReconfiguration_v1530_IEs;
```

> **使用方式**：解码成功后 `msg.criticalExtensions.u.rrcReconfiguration.u.masterCellGroup`
> 已指向库分配的 `CellGroupConfig`，可直接读取 `cellGroupId`、`spCellConfig` 等字段；
> `FreeMessage` 会递归释放。编码时把指针指向调用方构造的 `CellGroupConfig` 即可，
> 库自动编码内层并写入开放类型长度前缀。
>
> 注意：`RRCReconfiguration` 与 `MRDC-SecondaryCellGroupConfig` 之间存在
> `CONTAINING RRCReconfiguration` 的循环，因此这类字段必须用指针表示；
> 编码/解码深度超过 `RRC_CODEC_MAX_CONTAINING_DEPTH` 时返回
> `ErrorCode_ContainingDepthExceeded`。

#### 3.6.4 扩展添加组（`SuspendConfig`，节选）

```c
/** @brief SuspendConfig 的第一组扩展添加项 [[ ... ]]（对应一个开放类型）。*/
typedef struct SuspendConfig_ExtGroup1 {
    bool has_sl_UEIdentityRemote_r17;                       /**< OPTIONAL -- Cond L2RemoteUE */
    RNTI_Value sl_UEIdentityRemote_r17;

    bool has_sdt_Config_r17;                                /**< OPTIONAL -- Need M */
    SetupRelease_SDT_Config_r17 sdt_Config_r17;
    /* …其余组成员… */
} SuspendConfig_ExtGroup1;

typedef struct SuspendConfig {
    I_RNTI_Value fullI_RNTI;                                /**< 必填 */
    ShortI_RNTI_Value shortI_RNTI;                          /**< 必填 */
    PagingCycle ran_PagingCycle;                            /**< 必填 */

    bool has_ran_NotificationAreaInfo;                      /**< OPTIONAL -- Need M */
    RAN_NotificationAreaInfo ran_NotificationAreaInfo;

    bool has_t380;                                          /**< OPTIONAL -- Need R */
    PeriodicRNAU_TimerValue t380;

    NextHopChainingCount nextHopChainingCount;              /**< 必填 */
    /* 根字段结束；以下为扩展部分 */

    bool has_extGroup1;                                     /**< 第一组是否出现 */
    SuspendConfig_ExtGroup1 extGroup1;

    bool has_extGroup2;                                     /**< 第二组是否出现 */
    SuspendConfig_ExtGroup2 extGroup2;

    bool has_extGroup3;                                     /**< 第三组是否出现 */
    SuspendConfig_ExtGroup3 extGroup3;
} SuspendConfig;
```

#### 3.6.5 扩展组/开放类型的编码模型（与上例对应）

- 根部分：扩展位（1 bit）+ 根 OPTIONAL/DEFAULT 位图 + 根字段；
- 若扩展位为 1：先写扩展添加项个数 `n`（normally small length），再写 `n` bit 存在位图
  （按“直接添加项池 + 各扩展组”的顺序），然后按顺序写每个存在项的开放类型
  （长度行列式 + 字节）；
- 每个扩展组内部按“组内 SEQUENCE 的 OPTIONAL 位图 + 组内字段”编码，作为一个开放类型写出；
- 解码对称：先读 `n` 与位图定位存在的组，再按开放类型长度读取并解析组内内容。

> 该模型与 38.331 的 535 个扩展组一一对应；正确性用 pycrate 与现行 v1 动态实现做差分验证（9.2）。

### 3.7 注释规范（“每个接口注释详尽”的落地）

| 对象 | 必须包含 |
|---|---|
| 公开函数 | 功能、参数含义与取值范围、返回值/错误码、所有权、线程安全、失败后状态、C 示例（复杂接口） |
| 公开结构体/字段 | ASN.1 原文片段、TS 版本与源文件行号、约束（SIZE/范围）、是否 OPTIONAL/DEFAULT、`Need` 码、编码规则、归属（是否由库分配） |
| 消息结构体 | 所属 `ChannelType` 与对应 `MessageKind`、方向、对应 ASN.1 顶层消息体、典型用法 |
| 枚举类型/常量 | ASN.1 原名、序号、是否可扩展、关键字转义说明 |
| 生成文件头 | “自动生成，勿手工修改”、生成器版本、ASN.1 输入 SHA-256、重生成命令 |
| 生成函数 | 对应 ASN.1 类型、是否内部链接、是否可能分配内存、（消息入口）写入哪些包装位 |

注释语言为中文，标识符与 ASN.1 原文保留英文；采用 Doxygen 标签
（`@brief/@param/@return/@retval/@note/@warning/@code`）。

---

## 4. 公共 API 设计（C ABI）

### 4.1 头文件与总体约定

```
include/rrc_codec/
├── rrc_codec.h          伞头：一处包含即可使用全部能力（推荐入口）
├── rrc_export.h         RRC_CODEC_API 导出宏 / 静态库宏
├── rrc_version.h        库版本、C API 版本、ASN.1 版本
├── rrc_channel.h        ChannelType（10 个信道，仅用于解码校验/说明）
├── rrc_error.h          ErrorCode、ErrorInfo、错误接口
├── types/rrc_types.h    全部消息/IE 结构体与枚举（生成，约 3–4 MB）
└── messages/rrc_messages.h  MessageKind（53 个实际消息）+ 信道映射表（纯数据，无宏/模板）
```

约定：

- **AB1** C99 基线：不包含任何 C++ 头，不使用 C++ 类型；C++ 调用方通过 `extern "C"` 直接包含。
- **AB2** 纯 C99 接口：不做类型推断宏、不做 C++ 模板糖；`EncodeMessage`/`DecodeMessage`/`FreeMessage`
  的 `MessageKind` 参数由调用方显式传入，任何 C99 编译器可直接使用。
- **AB3** 只导出 C 符号：导出清单只有 4.2 的 8 个函数；生成函数与内部 C++ 符号一律 hidden。位流读写（BitWriter/BitReader）为内部实现，不导出。
- **AB4** 不跨 ABI 抛异常：实现内部 `try/catch(...)` 兜底，异常转为 `ErrorCode_InternalError`。
- **AB5** 所有可失败函数返回错误码；`0` 表示成功。错误详情通过线程局部接口查询。
- **AB6** 所有权在每个接口注释中声明；编码输入与解码输入归调用方；编码输出 `EncodedMessage.data`
  与解码输出中的变长数据归库分配，分别用 `FreeEncodedMessage`/`FreeMessage` 释放。
- **AB7** 结构体按平台自然布局；不承诺跨编译器/跨字长/跨 ASN.1 版本二进制兼容。
- **AB8** 线程安全：函数无共享可变状态；`GetLastErrorInfo` 为线程局部；
  同一编码结果/消息对象不得并发读写。

### 4.2 公共头文件草案（逐接口详细注释）

> 以下为设计稿，最终以实现头文件为准。为便于阅读，这里把内容合并展示；
> 实际拆分时 `MessageKind` 与 `ChannelOfMessageKind` 映射定义在 `messages/rrc_messages.h`，
> 该头文件只含枚举与静态数据，不含宏/模板糖。

```c
/* ============================================================================
 * rrc_codec.h — RRC 编解码库公共头（C99 基线）
 *
 * 3GPP TS 38.331 v18.10.0（NR-RRC-Definitions）UPER 编解码。
 *
 * 基本用法：
 *   编码（传消息类型）：填消息结构体
 *                       → EncodeMessage(kind, message, &encoded)
 *                       → 使用 encoded.data / encoded.size
 *                       → FreeEncodedMessage(&encoded)
 *   解码（传信道 + 消息类型）：DecodeMessage(channel, kind, data, size, &message)
 *                       → 使用 message 字段
 *                       → FreeMessage(kind, &message)
 *
 * 位流读写为内部实现，不对外暴露。
 * 字段名含 bitLength/bitOffset 的单位为比特；size/length 为字节；count 为元素个数。
 * ========================================================================== */
#ifndef RRC_CODEC_H
#define RRC_CODEC_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rrc_export.h"
#include "rrc_version.h"
#include "rrc_channel.h"
#include "rrc_error.h"
#include "types/rrc_types.h"
#include "messages/rrc_messages.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * 1. 信道（仅解码时使用）
 * ------------------------------------------------------------------------- */

/**
 * @brief RRC 消息信道（38.331 的 10 个 Uu 口消息入口）。
 *
 * 本方案不生成信道容器结构体；该枚举只用于解码时校验“期望消息”与信道是否一致，
 * 以及文档/错误信息。消息类型与信道的固定映射见附录 A。
 *
 * @note 数值稳定：1–10；新增信道只追加数值。
 */
typedef enum ChannelType {
    ChannelType_BCCH_BCH = 1,            /**< BCCH-BCH（MIB） */
    ChannelType_BCCH_DL_SCH = 2,         /**< BCCH-DL-SCH（SystemInformation/SIB1） */
    ChannelType_DL_CCCH = 3,             /**< DL-CCCH（RRCReject/RRCSetup） */
    ChannelType_DL_DCCH = 4,             /**< DL-DCCH（13 个消息） */
    ChannelType_MCCH_r17 = 5,            /**< MCCH-r17（MBS 广播） */
    ChannelType_MulticastMCCH_r18 = 6,   /**< MulticastMCCH-r18（MBS 多播） */
    ChannelType_PCCH = 7,                /**< PCCH（Paging） */
    ChannelType_UL_CCCH = 8,             /**< UL-CCCH（4 个消息） */
    ChannelType_UL_CCCH1 = 9,            /**< UL-CCCH1（RRCResumeRequest1） */
    ChannelType_UL_DCCH = 10             /**< UL-DCCH（27 个消息） */
} ChannelType;

/* ----------------------------------------------------------------------------
 * 2. 消息类型（53 个实际消息；不包含 spare/扩展占位分支）
 * ------------------------------------------------------------------------- */

/**
 * @brief 实际 RRC 消息类型。
 *
 * 每个值对应一个顶层结构体、一个所属信道（见附录 A）。
 * 消息类型由 EncodeMessage / DecodeMessage / FreeMessage 的 kind 参数显式传入。
 *
 * @note 数值稳定：1–53，按附录 A 顺序分配，新增消息只追加。
 *       不映射 `messageClassExtension`、`spare` 等非实际消息分支。
 */
typedef enum MessageKind {
    MessageKind_MIB = 1,                              /**< MIB（BCCH-BCH） */
    MessageKind_SystemInformation = 2,                /**< SystemInformation（BCCH-DL-SCH） */
    MessageKind_SIB1 = 3,                             /**< SIB1（BCCH-DL-SCH） */
    MessageKind_RRCReject = 4,                        /**< RRCReject（DL-CCCH） */
    MessageKind_RRCSetup = 5,                         /**< RRCSetup（DL-CCCH） */
    MessageKind_RRCReconfiguration = 6,               /**< RRCReconfiguration（DL-DCCH） */
    MessageKind_RRCResume = 7,                        /**< RRCResume（DL-DCCH） */
    MessageKind_RRCRelease = 8,                       /**< RRCRelease（DL-DCCH） */
    MessageKind_RRCReestablishment = 9,               /**< RRCReestablishment（DL-DCCH） */
    MessageKind_SecurityModeCommand = 10,             /**< SecurityModeCommand（DL-DCCH） */
    MessageKind_DLInformationTransfer = 11,           /**< DLInformationTransfer（DL-DCCH） */
    MessageKind_UECapabilityEnquiry = 12,             /**< UECapabilityEnquiry（DL-DCCH） */
    MessageKind_CounterCheck = 13,                    /**< CounterCheck（DL-DCCH） */
    MessageKind_MobilityFromNRCommand = 14,           /**< MobilityFromNRCommand（DL-DCCH） */
    MessageKind_DLDedicatedMessageSegment_r16 = 15,   /**< DLDedicatedMessageSegment-r16（DL-DCCH） */
    MessageKind_UEInformationRequest_r16 = 16,        /**< UEInformationRequest-r16（DL-DCCH） */
    MessageKind_DLInformationTransferMRDC_r16 = 17,   /**< DLInformationTransferMRDC-r16（DL-DCCH） */
    MessageKind_LoggedMeasurementConfiguration_r16 = 18, /**< LoggedMeasurementConfiguration-r16（DL-DCCH） */
    MessageKind_MBSBroadcastConfiguration_r17 = 19,   /**< MBSBroadcastConfiguration-r17（MCCH-r17） */
    MessageKind_MBSMulticastConfiguration_r18 = 20,   /**< MBSMulticastConfiguration-r18（MulticastMCCH-r18） */
    MessageKind_Paging = 21,                          /**< Paging（PCCH） */
    MessageKind_RRCSetupRequest = 22,                 /**< RRCSetupRequest（UL-CCCH） */
    MessageKind_RRCResumeRequest = 23,                /**< RRCResumeRequest（UL-CCCH） */
    MessageKind_RRCReestablishmentRequest = 24,       /**< RRCReestablishmentRequest（UL-CCCH） */
    MessageKind_RRCSystemInfoRequest = 25,            /**< RRCSystemInfoRequest（UL-CCCH） */
    MessageKind_RRCResumeRequest1 = 26,               /**< RRCResumeRequest1（UL-CCCH1） */
    MessageKind_MeasurementReport = 27,               /**< MeasurementReport（UL-DCCH） */
    MessageKind_RRCReconfigurationComplete = 28,      /**< RRCReconfigurationComplete（UL-DCCH） */
    MessageKind_RRCSetupComplete = 29,                /**< RRCSetupComplete（UL-DCCH） */
    MessageKind_RRCReestablishmentComplete = 30,      /**< RRCReestablishmentComplete（UL-DCCH） */
    MessageKind_RRCResumeComplete = 31,               /**< RRCResumeComplete（UL-DCCH） */
    MessageKind_SecurityModeComplete = 32,            /**< SecurityModeComplete（UL-DCCH） */
    MessageKind_SecurityModeFailure = 33,             /**< SecurityModeFailure（UL-DCCH） */
    MessageKind_ULInformationTransfer = 34,           /**< ULInformationTransfer（UL-DCCH） */
    MessageKind_LocationMeasurementIndication = 35,   /**< LocationMeasurementIndication（UL-DCCH） */
    MessageKind_UECapabilityInformation = 36,         /**< UECapabilityInformation（UL-DCCH） */
    MessageKind_CounterCheckResponse = 37,            /**< CounterCheckResponse（UL-DCCH） */
    MessageKind_UEAssistanceInformation = 38,         /**< UEAssistanceInformation（UL-DCCH） */
    MessageKind_FailureInformation = 39,              /**< FailureInformation（UL-DCCH） */
    MessageKind_ULInformationTransferMRDC = 40,       /**< ULInformationTransferMRDC（UL-DCCH） */
    MessageKind_SCGFailureInformation = 41,           /**< SCGFailureInformation（UL-DCCH） */
    MessageKind_SCGFailureInformationEUTRA = 42,      /**< SCGFailureInformationEUTRA（UL-DCCH） */
    MessageKind_ULDedicatedMessageSegment_r16 = 43,   /**< ULDedicatedMessageSegment-r16（UL-DCCH） */
    MessageKind_DedicatedSIBRequest_r16 = 44,         /**< DedicatedSIBRequest-r16（UL-DCCH） */
    MessageKind_MCGFailureInformation_r16 = 45,       /**< MCGFailureInformation-r16（UL-DCCH） */
    MessageKind_UEInformationResponse_r16 = 46,       /**< UEInformationResponse-r16（UL-DCCH） */
    MessageKind_SidelinkUEInformationNR_r16 = 47,     /**< SidelinkUEInformationNR-r16（UL-DCCH） */
    MessageKind_ULInformationTransferIRAT_r16 = 48,   /**< ULInformationTransferIRAT-r16（UL-DCCH） */
    MessageKind_IABOtherInformation_r16 = 49,         /**< IABOtherInformation-r16（UL-DCCH） */
    MessageKind_MBSInterestIndication_r17 = 50,       /**< MBSInterestIndication-r17（UL-DCCH） */
    MessageKind_UEPositioningAssistanceInfo_r17 = 51, /**< UEPositioningAssistanceInfo-r17（UL-DCCH） */
    MessageKind_MeasurementReportAppLayer_r17 = 52,   /**< MeasurementReportAppLayer-r17（UL-DCCH） */
    MessageKind_IndirectPathFailureInformation_r18 = 53 /**< IndirectPathFailureInformation-r18（UL-DCCH） */
} MessageKind;

/* ----------------------------------------------------------------------------
 * 3. 错误（只保留接口，首版不实现完整错误日志）
 * ------------------------------------------------------------------------- */

/**
 * @brief 错误码。0 为成功，其余为失败原因。
 * @note 数值在 2.x 内稳定；新增错误码只追加，不复用。
 */
typedef enum ErrorCode {
    ErrorCode_Ok = 0,                       /**< 成功 */

    /* 参数与状态错误 */
    ErrorCode_InvalidArgument = 1001,       /**< 空指针、非法枚举值、非法大小等 */
    ErrorCode_UnsupportedChannel = 1002,    /**< channel 不在 1–10 范围内 */
    ErrorCode_OutOfMemory = 1003,           /**< 内存分配失败 */
    ErrorCode_NotImplemented = 1004,        /**< 预留接口在首版未实现 */

    /* 编码错误（输入结构体不合法） */
    ErrorCode_ValueOutOfRange = 2001,       /**< INTEGER 超出 ASN.1 约束范围 */
    ErrorCode_InvalidBitString = 2002,      /**< BIT STRING 长度/指针非法 */
    ErrorCode_InvalidOctetString = 2003,    /**< OCTET STRING 长度/指针非法 */
    ErrorCode_InvalidEnumValue = 2004,      /**< 枚举值不在允许集合 */
    ErrorCode_InvalidChoiceTag = 2005,      /**< CHOICE tag 与 ASN.1 不匹配 */
    ErrorCode_MissingMandatoryField = 2006, /**< 必填字段缺失（如 SEQUENCE OF 指针为空）*/

    /* 解码错误（输入码流不合法或不支持） */
    ErrorCode_TruncatedInput = 3001,        /**< 码流不足 */
    ErrorCode_InvalidLength = 3002,         /**< 长度行列式非法 */
    ErrorCode_LengthOutOfRange = 3003,      /**< 长度超出 ASN.1 约束 */
    ErrorCode_IntegerOutOfRange = 3004,     /**< 整数编码超出约束 */
    ErrorCode_InvalidEnumeratedIndex = 3005,/**< 枚举索引非法 */
    ErrorCode_InvalidChoiceIndex = 3006,    /**< CHOICE 索引非法 */
    ErrorCode_InvalidOptionalBitmap = 3007, /**< OPTIONAL 位图越界 */
    ErrorCode_InvalidExtensionBitmap = 3008,/**< 扩展位图非法 */
    ErrorCode_UnsupportedExtension = 3009,  /**< 出现 v18.10.0 之外的扩展内容 */
    ErrorCode_OpenTypeOverrun = 3010,       /**< 开放类型长度越界 */
    ErrorCode_ChannelMismatch = 3011,       /**< 解码 channel 与消息类型所属信道不一致 */
    ErrorCode_MessageKindMismatch = 3012,   /**< 码流中的包装选择位与期望消息类型不一致 */
    ErrorCode_UnsupportedMessage = 3013,    /**< 码流为 spare/扩展占位等未映射分支 */
    ErrorCode_ContainingDepthExceeded = 3014, /**< CONTAINING/开放类型嵌套超过深度上限 */

    ErrorCode_InternalError = 9001          /**< 内部错误（兜底） */
} ErrorCode;

/**
 * @brief 最近一次错误的摘要信息。
 *
 * 首版只填 code/channel/bitOffset；fieldPath 与 message 恒为 NULL（接口预留，
 * 见 4.4）。结构体按值返回，不使用版本化布局；新增字段只在主版本升级时进行。
 */
typedef struct ErrorInfo {
    ErrorCode code;        /**< 错误码；与函数返回值一致 */
    ChannelType channel;   /**< 出错时的 channel；未涉及信道时为 0 */
    uint64_t bitOffset;    /**< 出错位置（相对于本次编解码起点的比特偏移） */
    const char* fieldPath; /**< 预留：首版恒为 NULL */
    const char* message;   /**< 预留：首版恒为 NULL */
} ErrorInfo;

/**
 * @brief 错误回调类型（接口预留）。
 * @param info 错误摘要（库内部临时对象，回调返回后失效）。
 * @param userData 调用方在 SetErrorHandler 注册的上下文指针。
 * @note 首版只保存回调，不会调用；未来版本启用。不得在回调中重入编解码函数。
 */
typedef void (*ErrorHandler)(const ErrorInfo* info, void* userData);

/**
 * @brief 返回当前线程最近一次失败的错误摘要。
 *
 * @param[out] info 输出结构体；不能为 NULL。
 * @return 最近一次错误码；无错误时返回 ErrorCode_Ok。
 *
 * @note 线程安全：每个线程独立保存；上一次调用成功不会清空已记录的错误。
 * @note 首版仅保证 code/channel/bitOffset 有效，fieldPath/message 为 NULL。
 */
RRC_CODEC_API ErrorCode GetLastErrorInfo(ErrorInfo* info);

/**
 * @brief 注册错误回调（接口预留）。
 *
 * @param handler 回调函数；传 NULL 表示注销。
 * @param userData 回调上下文指针，库不接管所有权。
 *
 * @note 首版只保存参数、不会触发回调；保留接口以便未来版本二进制兼容地启用日志。
 */
RRC_CODEC_API void SetErrorHandler(ErrorHandler handler, void* userData);

/* ----------------------------------------------------------------------------
 * 4. 编码输出缓冲
 * ------------------------------------------------------------------------- */

/**
 * @brief 编码结果（库分配）。
 *
 * 编码成功后：
 *   - data 指向库 malloc 分配的字节缓冲，按 MSB first 排列；
 *   - size 为有效字节数（补零到字节边界后的字节数）；
 *   - bitLength 为补零前的有效比特数，通常等于 size*8。
 * 调用方使用（或复制）数据后必须调用 FreeEncodedMessage 释放，不得直接 free。
 */
typedef struct EncodedMessage {
    uint8_t* data;      /**< 库分配；成功时非 NULL，失败时为 NULL。 */
    size_t size;        /**< 字节数（含末尾补零字节）。 */
    size_t bitLength;   /**< 有效比特数（补零前）。 */
} EncodedMessage;

/**
 * @brief 释放编码结果缓冲并清零结构体。
 *
 * @param[in,out] encoded 编码结果；可为 NULL（空操作）。
 *
 * @note 只释放 data（库分配），不释放调用方传入的 message。
 * @note 重复调用安全；编码失败后也可安全调用。
 */
RRC_CODEC_API void FreeEncodedMessage(EncodedMessage* encoded);

/* ----------------------------------------------------------------------------
 * 5. 编解码入口（只有一对通用接口；消息类型由 kind 参数显式确定）
 * ------------------------------------------------------------------------- */

/**
 * @brief 按消息类型编码为 UPER 字节缓冲。
 *
 * @param[in]  kind    实际消息类型（如 MessageKind_MIB），见附录 A。
 * @param[in]  message 消息结构体指针，类型必须与 kind 对应；不能为 NULL。
 *                     编码只读取结构体，不接管任何指针的所有权。
 * @param[out] encoded 输出编码结果；不能为 NULL。成功后由库分配 data，
 *                     调用方必须用 FreeEncodedMessage 释放。
 * @return 成功返回 ErrorCode_Ok；失败返回具体编码错误。
 *
 * 编码规则：
 *  - 先写入该消息所属信道的包装层固定选择位（如 BCCH-BCH 的 `mib` 分支、
 *    DL-DCCH 的 `c1` + 备选索引），再按 ASN.1 声明顺序写消息体；
 *  - OPTIONAL 由 has_ 标志决定位图；DEFAULT 字段写位图位，等于默认值时位为 0
 *    且不编码值；所有整数/枚举/长度在写入前做约束校验；
 *  - 采用 UPER，位序 MSB first；完成后补 0 到字节边界；
 *  - `CONTAINING` 字段：先编码内层类型，再按开放类型（长度行列式 + 字节）写入；
 *  - 成功时 encoded->size 为字节数，encoded->bitLength 为有效比特数；
 *  - 失败时 encoded 被清零（data = NULL, size = bitLength = 0），无内存泄漏。
 *
 * @note 所有权：message 中的指针全部由调用方持有，库不释放、不复制；
 *                encoded->data 由库分配，必须 FreeEncodedMessage。
 * @note 线程安全：不同 encoded/message 可并发；同一对象不得并发。
 * @warning 编码完成后不得对同一个 message 调用 FreeMessage——该函数只用于
 *          释放解码产生的内存，对调用方自建消息调用会导致 free 非法指针。
 */
RRC_CODEC_API ErrorCode
EncodeMessage(MessageKind kind, const void* message, EncodedMessage* encoded);

/**
 * @brief 按消息类型与信道解码 UPER 字节缓冲。
 *
 * @param[in]  channel 信道类型，用于校验消息类型与信道一致（映射见附录 A）。
 * @param[in]  kind    期望的实际消息类型（如 MessageKind_MIB）。
 * @param[in]  data    输入字节缓冲；size 非 0 时不能为 NULL。库只读、不接管所有权。
 * @param[in]  size    输入字节数；库按 size*8 位读取，末尾补零位忽略。
 * @param[out] message 输出消息结构体指针，类型必须与 kind 对应；
 *                     不能为 NULL。库会先清零再填充；失败时保证结构体全零。
 * @return 成功返回 ErrorCode_Ok；失败返回具体解码错误。
 *
 * 解码规则：
 *  - 先校验 ChannelOfMessageKind(kind) == channel，否则返回 ChannelMismatch；
 *  - 读取包装层选择位并校验与 kind 一致；若码流是 spare/扩展占位分支，
 *    返回 UnsupportedMessage；若是另一条实际消息，返回 MessageKindMismatch；
 *  - 消息体按 ASN.1 规则解码，所有长度/索引/位图做边界校验；
 *  - `CONTAINING` 字段：读开放类型长度后递归解码内层类型，`malloc` 内层结构体并挂到指针；
 *    嵌套深度超过 `RRC_CODEC_MAX_CONTAINING_DEPTH` 返回 `ContainingDepthExceeded`；
 *  - 变长数据（SEQUENCE OF、BIT/OCTET STRING）通过 malloc 分配；
 *  - 解码失败时内部释放已分配内存并把输出结构体清零，无内存泄漏；
 *  - 不要求输入字节数恰好等于消息实际长度，消息末尾之后的位被忽略。
 *
 * @note 所有权：成功时输出结构体中的指针归库分配，必须调用 FreeMessage。
 * @note 线程安全：不同 data/message 可并发。
 */
RRC_CODEC_API ErrorCode
DecodeMessage(ChannelType channel, MessageKind kind,
              const uint8_t* data, size_t size, void* message);

/**
 * @brief 释放解码得到的消息结构体所持有的动态内存。
 *
 * @param[in] kind 解码时使用的消息类型，用于确定结构体类型。
 * @param[in,out] message 解码输出结构体；可为 NULL（空操作）。
 *
 * 释放规则：递归释放所有由解码分配的 SEQUENCE OF 数组、BIT/OCTET STRING 缓冲区、
 * `CONTAINING` 内层结构体及其内部数据，最后清零整个结构体。重复调用安全。
 *
 * @warning 只能用于 DecodeMessage 成功返回的 message；
 *          不得用于调用方为编码自行构造的消息（其中的指针可能指向栈或静态内存）。
 * @note 线程安全：同一消息不得与解码/读取并发。
 */
RRC_CODEC_API void FreeMessage(MessageKind kind, void* message);

/* ----------------------------------------------------------------------------
 * 6. 版本
 * ------------------------------------------------------------------------- */

/**
 * @brief 返回库版本字符串（语义版本，如 "2.0.0"）。
 * @return 静态字符串，生命周期为进程，调用方不得释放。
 * @note 线程安全。
 */
RRC_CODEC_API const char* GetVersionString(void);

/**
 * @brief 返回生成代码所绑定的 ASN.1 版本字符串（如 "18.10.0"）。
 * @return 静态字符串，生命周期为进程，调用方不得释放。
 * @note 线程安全。
 */
RRC_CODEC_API const char* GetAsn1VersionString(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_H */
```

`messages/rrc_messages.h` 只生成 `MessageKind` 枚举与 `ChannelOfMessageKind` 映射表；
不生成类型推断宏或 C++ 模板。调用方直接显式传 `MessageKind`，C99 编译器即可使用。

### 4.3 编解码语义补充

| 项 | 约定 |
|---|---|
| 编码参数 | `kind` + `message` + `encoded`；不传 channel，channel 由消息类型隐式确定；不暴露位流对象 |
| 解码参数 | `channel` + `kind` + `data` + `size` + `message`；channel 用于与消息类型所属信道校验 |
| 消息类型识别 | **不做码流自动识别**：调用方通过显式 `MessageKind` 指定期望消息 |
| 包装层 | 每个消息的生成编解码器负责该消息在外层 `*-Message` CHOICE 中的固定路径（附录 A） |
| 包装层不匹配 | 码流为另一实际消息 → `MessageKindMismatch`；为 spare/扩展占位 → `UnsupportedMessage` |
| 信道不匹配 | `ChannelOfMessageKind(kind) != channel` → `ChannelMismatch` |
| 位序 | UPER，MSB first；每字节 bit7 最先写出/读入 |
| 字节对齐 | 编码完成后补 0 至字节边界；`encoded.bitLength` 记录补零前的有效位数 |
| 输入范围 | 解码按 `data/size` 的 `size*8` 位读取，无流位置/重入概念；一次调用只解一条消息 |
| 尾随位 | 解码不要求输入位数恰好用完；消息末尾之后的多余位忽略 |
| 整数 | 全部为带约束整数；编码先校验范围，解码校验编码值是否落在约束内 |
| 空结构体 | `SEQUENCE {}` 与 `NULL` 编码 0 bit；解码不消耗位 |
| `CONTAINING` 字段 | 解码自动读取开放类型并解析内层 Y（挂到 `Y*`）；编码自动编码 Y 并包成开放类型；嵌套深度受 `RRC_CODEC_MAX_CONTAINING_DEPTH` 限制 |
| 失败状态 | 编码失败后 `encoded` 清零；解码失败后输出结构体清零、内部内存已释放 |
| 异常 | 内部异常不跨越 C ABI；转为 `ErrorCode_InternalError` |

> **为什么编码参数用 `MessageKind` 而不是 `ChannelType`**：BCCH-DL-SCH、DL-CCCH、DL-DCCH、
> UL-CCCH、UL-DCCH 等信道各含多条实际消息，仅凭 channel 无法在 C ABI 中确定 `message`
> 指针实际指向哪个结构体；而 `MessageKind` 与消息结构体一一对应，并能唯一推出所属信道
> （解码时用 channel 做一致性校验）。因此编码传消息类型是可行的最简方案，同时不需要
> C11 `_Generic`/C++ 模板推断结构体类型，生成器与公共头也随之简化。

**消息类型 ↔ 信道固定映射**（完整 53 条见附录 A）：

| 信道 | 实际消息（`MessageKind`） |
|---|---|
| `ChannelType_BCCH_BCH` | `MessageKind_MIB` |
| `ChannelType_BCCH_DL_SCH` | `MessageKind_SystemInformation`、`MessageKind_SIB1` |
| `ChannelType_DL_CCCH` | `MessageKind_RRCReject`、`MessageKind_RRCSetup` |
| `ChannelType_DL_DCCH` | 13 个 `MessageKind_*`（RRCReconfiguration … LoggedMeasurementConfiguration_r16） |
| `ChannelType_MCCH_r17` | `MessageKind_MBSBroadcastConfiguration_r17` |
| `ChannelType_MulticastMCCH_r18` | `MessageKind_MBSMulticastConfiguration_r18` |
| `ChannelType_PCCH` | `MessageKind_Paging` |
| `ChannelType_UL_CCCH` | 4 个上行公共消息 |
| `ChannelType_UL_CCCH1` | `MessageKind_RRCResumeRequest1` |
| `ChannelType_UL_DCCH` | 27 个上行专用消息（含 `c2` 扩展组的 11 个） |

### 4.4 错误处理（只保留接口的实现范围）

| 能力 | 首版状态 | 说明 |
|---|---|---|
| 返回错误码 | **实现** | 每个可失败函数返回具体错误码 |
| 线程局部 last error | **实现（最小）** | `GetLastErrorInfo` 填 code/channel/bitOffset |
| 字段路径 `fieldPath` | 接口预留 | 恒为 NULL；后续版本填充（需要生成字段名元数据） |
| 错误详情 `message` | 接口预留 | 恒为 NULL；不实现日志/回溯/分级日志 |
| 错误回调 | 接口预留 | `SetErrorHandler` 只保存，不触发 |
| 日志文件/控制台输出 | 不实现 | 库不做任何 I/O |

错误码与触发场景见 4.2 头文件草案。编码/解码内部通过“上下文错误标志 + 提前返回”传播错误，
只在最外层写一次 last error；不分配错误字符串，不引入 `<iostream>`。

### 4.5 内存、所有权与安全限制

| 对象 | 分配方 | 释放方 | 备注 |
|---|---|---|---|
| 编码输入结构体及其指针 | 调用方 | 调用方 | 库只读，不持有 |
| 编码输出 `encoded.data` | 库（malloc） | `FreeEncodedMessage` | 成功时分配；失败时为 NULL |
| 解码输入 `data` 字节缓冲 | 调用方 | 调用方 | 库只读、不复制、不接管 |
| 解码输入的数组/字符串 | 库（malloc） | `FreeMessage` | 递归释放 |
| 解码 `CONTAINING` 内层结构体 | 库（malloc） | `FreeMessage` | 递归释放指针指向的 Y 及 Y 内部数据 |
| 解码输出结构体本身 | 调用方 | 调用方 | 栈/堆均可；Free 只清内容 |

固定安全限制（编译期常量，可在 CMake 配置阶段覆盖）：

| 常量 | 默认值 | 用途 |
|---|---:|---|
| `RRC_CODEC_MAX_INPUT_BYTES` | 16 MiB | 单次解码输入上限（防超长开放类型/无界字符串） |
| `RRC_CODEC_MAX_OPEN_TYPE_BYTES` | 8 MiB | 单个开放类型长度上限 |
| `RRC_CODEC_MAX_SEQUENCE_OF_COUNT` | 65,536 | 与 ASN.1 最大 SIZE 上界一致 |
| `RRC_CODEC_MAX_BITSTRING_BITS` | 65,536 | 与 ASN.1 最大 SIZE 上界一致 |
| `RRC_CODEC_MAX_CONTAINING_DEPTH` | 16 | `CONTAINING`/开放类型最大嵌套层数（编码与解码共用） |

- 38.331 无 `SET`/`SET OF`/`ANY`/无约束 INTEGER；所有 `SEQUENCE OF` 都带 `SIZE`，
  因此解码元素数天然有界；
- 无界 `OCTET STRING`（139 处）由长度行列式的分片规则与上述上限共同限制；
- `CONTAINING` 内层类型解析受 `RRC_CODEC_MAX_CONTAINING_DEPTH` 限制，防止循环类型无限递归；
- 不实现自定义分配器；如后续需要，追加 `SetAllocator` 接口即可（不影响现有 ABI）。

### 4.6 线程安全

| 对象/接口 | 并发规则 |
|---|---|
| `EncodeMessage` / `DecodeMessage` | 无全局状态；不同 encoded/data/message 可并发 |
| 同一个 `EncodedMessage` / 消息对象 | 不得并发读写；不得在解码时被 `FreeMessage` |
| `GetLastErrorInfo` | 线程局部，天然线程安全 |
| `SetErrorHandler` | 全局设置；建议初始化阶段单线程调用 |
| 版本函数 | 只读静态字符串，线程安全 |

每个线程使用独立的编码结果、输入缓冲与消息结构体即可获得完整并发能力；库不创建线程、不加锁。

### 4.7 使用示例

#### 4.7.1 C（C99）：编码并解码 MIB（BCCH-BCH）

```c
#include <rrc_codec/rrc_codec.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    /* 1) 构造消息：顶层结构体就是 MIB 本身，没有信道容器层。 */
    MIB mib;
    memset(&mib, 0, sizeof mib);

    static uint8_t sfn = 0x2A;              /* 6 bit：101010 */
    mib.systemFrameNumber.bytes = &sfn;
    mib.systemFrameNumber.bitLength = 6;

    mib.subCarrierSpacingCommon = MIB_SubCarrierSpacingCommon_scs15or60;
    mib.ssb_SubcarrierOffset = 0;
    mib.dmrs_TypeA_Position = MIB_Dmrs_TypeA_Position_pos2;
    mib.pdcch_ConfigSIB1.controlResourceSetZero = 0;
    mib.pdcch_ConfigSIB1.searchSpaceZero = 0;
    mib.cellBarred = MIB_CellBarred_notBarred;
    mib.intraFreqReselection = MIB_IntraFreqReselection_allowed;

    static uint8_t spare = 0;
    mib.spare.bytes = &spare;
    mib.spare.bitLength = 1;

    /* 2) 编码：显式传消息类型，不传信道；输出由库分配。 */
    EncodedMessage encoded = {0};
    ErrorCode rc = EncodeMessage(MessageKind_MIB, &mib, &encoded);
    if (rc != ErrorCode_Ok) {
        ErrorInfo info;
        GetLastErrorInfo(&info);
        fprintf(stderr, "encode failed: %d, bit=%llu\n",
                (int)info.code, (unsigned long long)info.bitOffset);
        FreeEncodedMessage(&encoded);   /* 失败时为零操作，安全 */
        return 1;
    }
    printf("encoded: %zu bytes, %zu bits\n", encoded.size, encoded.bitLength);

    /* 3) 解码：传信道 + 消息类型 + 输入字节缓冲；channel 用于一致性校验。 */
    MIB decoded;
    rc = DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB,
                       encoded.data, encoded.size, &decoded);
    if (rc == ErrorCode_Ok) {
        printf("sfn bits = %u\n", decoded.systemFrameNumber.bitLength);
        FreeMessage(MessageKind_MIB, &decoded);
    }

    FreeEncodedMessage(&encoded);
    return (int)rc;
}
```

#### 4.7.2 C++ 使用说明

- 不需要单独的 C++ API：直接 `#include <rrc_codec/rrc_codec.h>`；
- C++17 下调用形式与 C 完全相同：
  `EncodeMessage(MessageKind_MIB, &mib, &encoded)`、
  `DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, encoded.data, encoded.size, &decoded)`、
  `FreeMessage(MessageKind_MIB, &decoded)`、`FreeEncodedMessage(&encoded)`；
- 结构体是普通聚合类型，可用 C++ 初始化/赋值；
- 库只要求 C++17 用于**构建库本身**，C 消费方只用 C99 即可。

#### 4.7.3 `CONTAINING` 字段示例（`masterCellGroup`）

```c
/* 解码后：secondaryCellGroup 已自动解析为 CellGroupConfig，可直接读字段。 */
if (msg.criticalExtensions.u.rrcReconfiguration.secondaryCellGroup != NULL) {
    CellGroupConfig* scg = msg.criticalExtensions.u.rrcReconfiguration.secondaryCellGroup;
    printf("secondary cellGroupId = %lld\n", (long long)scg->cellGroupId);
}

/* 编码：指向调用方构造的内层结构体；库自动编码并包成开放类型。 */
CellGroupConfig localScg;
memset(&localScg, 0, sizeof localScg);
localScg.cellGroupId = 1;
msg.criticalExtensions.u.rrcReconfiguration.secondaryCellGroup = &localScg;
```

> 指针只在编码调用期间被读取；编码完成后调用方仍拥有 `localScg`。
> 解码产生的 `CellGroupConfig` 由 `FreeMessage` 递归释放，调用方不要自行 `free`。
> 实际字段路径以生成结构体为准；示例仅说明 `CONTAINING` 的指针使用方式。


---

## 5. 生成器设计

### 5.1 复用现有前端

| 组件 | 处理方式 |
|---|---|
| `tools/rrcgen/rrcgen/{lexer,parser,normalize,resolver,ir,names}.py` | **复用**（已对 v18.10.0 全量解析，统计与源文件一致） |
| `tools/rrcgen/rrcgen/emitters/{types,schema,converters,registry}.py` | 不复用；替换为新的 C 发射器 |
| `tools/rrcgen/rrcgen/emitters/common.py` | 参考命名/分块工具，按新规则重写 |
| 输入校验 | 保留 SHA-256 校验；生成产物头注释记录生成器版本与输入哈希 |

生成器是**开发期工具**，不随库安装；用户与 CI 只依赖入库的生成产物，无需 Python 环境。

### 5.2 生成产物清单

| 文件 | 内容 | 入库 | 安装 | 规模估算 |
|---|---|---|---:|---:|---|
| `include/rrc_codec/types/rrc_types.h` | 53 个消息结构体 + 全部 IE 的 struct/enum/union/typedef 定义与注释 | 是 | 是 | 3–4 MB |
| `include/rrc_codec/messages/rrc_messages.h` | `MessageKind` 枚举、`ChannelOfMessageKind` 映射表、消息入口包装位常量（纯数据，无宏/模板） | 是 | 是 | 约 10–20 KB |
| `src/generated/codec_partNNN.cpp` | 每类型 `Encode_*`/`Decode_*`/`Free_*`，以及每个消息的 `EncodeMessage_*`/`DecodeMessage_*` | 是 | 否（编译进库） | 6–9 MB，约 30–40 个文件 |
| `src/generated/codec_internal.h` | 内部函数声明、内部类型、消息入口包装位常量 | 是 | 否 | 约 300 KB |
| `generated/rrc_stats.json` | 生成统计（类型/字段/扩展/消息映射/命名冲突） | 是 | 否 | 小 |
| `generated/rrc_message_index.md` | 53 个消息 → `MessageKind`/结构体/信道/包装位索引 | 是 | 否 | 小 |

命名空间/目录约定：生成代码放在 `namespace rrc::v1810`（内部），符号隐藏；公共 C ABI 不泄漏
任何 C++ 名称。

### 5.3 发射器职责

| 发射器 | 职责 |
|---|---|
| `emit_c_types` | IR → C 结构体/枚举/别名；匿名类型合成命名；注释（ASN.1 原文、源行号、约束、presence）；顶层类型统一命名（`SEQUENCE OF` 包装结构体、基本类型 typedef）；`CONTAINING` 字段生成 `Y*` 与前向声明；按依赖拓扑排序输出；**不为信道容器、spare、扩展占位生成结构体** |
| `emit_c_messages` | 从 10 个 `*-Message` 入口提取 53 个实际消息，生成 `MessageKind` 枚举、`ChannelOfMessageKind` 映射、消息入口包装位常量（纯数据，无宏/模板） |
| `emit_c_codec` | 每类型三函数（Encode/Decode/Free）+ 每消息入口两函数（写/读包装位）；扩展组/开放类型/`CONTAINING` 逻辑；深度计数；按块拆分、生成内部声明 |
| `emit_c_stats` | 统计 JSON 与消息索引，供评审/回归对比 |

生成算法要点：

1. 从 IR 构建类型依赖图；`CONTAINING` 边按“指针边”处理（不要求目标先完整定义）。
   输出顺序：顶层基本类型 `typedef` / 顶层 `SEQUENCE OF` 包装结构体 / 所有结构体前向声明
   → 枚举定义 → 结构体定义（忽略 `CONTAINING` 边的拓扑序）→ 别名与 CONTAINING 别名。
2. 匿名类型在解析阶段即分配确定性名字（父类型路径 + 字段/备选名），发射时不再改名。
3. 从每个信道 `*-Message` 的 CHOICE 树提取实际消息及固定选择位路径；跳过 `NULL` spare
   与 `SEQUENCE {}` 扩展占位分支；生成 `MessageKind` → `(channel, wrapper path)` 表。
4. 所有 C 标识符先转义、再查重；冲突按源顺序加后缀并写日志，不静默覆盖。
5. 每个定义输出完整 ASN.1 注释（含源文件行号），字段注释包含约束与 `Need` 码；
   `CONTAINING` 字段注释额外标注内层类型、指针所有权与 NULL 语义。
6. 发射结果不含时间戳、随机数、绝对路径；相同输入与生成器版本 → 逐字节相同。

### 5.4 生成的编解码函数

内部函数签名（C++17，非导出）：

```cpp
// 类型级三件套；基本标量由 PER 原语直接处理，不单独生成。
ErrorCode Encode_<Type>(Encoder& enc, const <Type>& value);
ErrorCode Decode_<Type>(Decoder& dec, <Type>& value);   // 失败时内部已清理
void      Free_<Type>(<Type>& value);                   // 递归释放解码分配

// CONTAINING 关系：内层 Y 的编解码（开放类型长度前缀 + 深度计数）
ErrorCode EncodeContained_<Target>(Encoder& enc, const <Target>& value);
ErrorCode DecodeContained_<Target>(Decoder& dec, <Target>*& out); // 分配并挂指针

// 消息入口：先写/读所属信道的固定包装位，再调用消息体的类型级函数。
ErrorCode EncodeMessage_<Kind>(Encoder& enc, const <MessageType>& value);
ErrorCode DecodeMessage_<Kind>(Decoder& dec, <MessageType>& value);
```

设计要点：

- **编码**：消息入口先写外层 `*-Message` 的 CHOICE 索引，必要时再写 `c1`/`c2` 索引
  （索引常量由附录 A 的路径生成），随后按字段顺序调用 PER 原语；先做约束校验再写位；
  不做内存分配（除内部位流缓冲扩容）。
- **解码**：消息入口先读/校验包装位，确认其与 `MessageKind` 一致；进入消息体后
  按字段解码。任一错误立即 `Free_<Type>` 清理并返回错误码；
  变长数组/字符串按“先校验长度上限，再 malloc，再读取”的顺序。
- **Free**：按 CHOICE tag / OPTIONAL 标志 / 扩展组标志 / `CONTAINING` 指针递归释放；
  最后清零；重复调用安全。
- **错误传播**：返回 `ErrorCode`；最外层 API 统一记录 bit offset 与 channel，
  生成的中间层不构造错误字符串。
- **开放类型/扩展组**：先用临时写位流生成内容，再写长度行列式 + 内容；解码时先读长度，
  创建受限子位流，解析后校验是否恰好用完（多余字节视为 `OpenTypeOverrun`）。
- **`CONTAINING` 字段**：编码调用内层 `Encode_Y` 生成临时位流并补齐字节，再写长度行列式
  + 字节；解码读长度、建立受限子位流、调用 `Decode_Y`、校验尾部补零位后 `malloc` 内层
  结构体挂到指针。Encoder/Decoder 各自维护 `containingDepth`，超限返回
  `ContainingDepthExceeded`；失败时释放已分配内层内存。
- **单值 INTEGER / 单值 ENUMERATED / 单备选 CHOICE**：生成空操作或常量赋值，编码不写位。
- 不生成模板、不生成类型推断宏（仅关键字转义必需的宏除外），保证可读性与调试体验。

### 5.5 分块与符号可见性

- `codec_partNNN.cpp` 按类型拓扑序每 ~200 个类型定义分一块，块数由生成器计算并写入
  `rrc_stats.json`；每块包含一个内部头并编译为独立 TU，便于并行构建与增量编译。
- 所有生成函数使用 C++ 名字修饰、默认 hidden 可见性；Windows 共享库只导出
  `RRC_CODEC_API` 标注的 8 个函数，无需 `.def` 文件。
- 生成代码编译选项：`-O0/-g0`（生成代码正确性优先、控制编译时间与体积）；
  PER 运行时与公共 API 使用常规优化（见 7.2）。

### 5.6 确定性与回归

- 生成物入库；`cmake --build build --target rrc_codec_regenerate` 可重生成（需 Python 3.11）；
- CI 增加“重生成后 `git diff --exit-code`”检查，防止手工修改生成物；
- 生成器版本、输入 SHA-256、ASN.1 版本写入每个生成文件头；
- 生成器自身测试（命名、匿名类型、关键字转义、消息提取、统计）保留在 `tools/rrcgen/tests`；
- 重点回归：53 个消息的包装位路径表必须与附录 A 完全一致，否则解码必然错位。

---

## 6. PER 运行时（简版）

### 6.1 范围（以 38.331 实际使用为准）

| 特性 | 38.331 v18.10.0 用量 | 本方案支持 |
|---|---:|---|
| INTEGER（全部带约束） | 2,145 | 是（含 39 bit 最大位宽） |
| ENUMERATED（含扩展） | 3,324（可扩展 19） | 是 |
| BOOLEAN | 154 | 是 |
| BIT STRING | 378（定长 341） | 是 |
| OCTET STRING | 191（CONTAINING 33） | 是（CONTAINING 自动解析内层类型） |
| SEQUENCE（含扩展） | 2,247（可扩展 572） | 是 |
| CHOICE（含扩展） | 407（可扩展 61） | 是 |
| SEQUENCE OF | 1,256（全部带 SIZE） | 是 |
| NULL / 空 SEQUENCE | 83 / 110 | 是（占位分支不映射消息） |
| 扩展添加组 | 535 组 / 1,961 成员 / 63 直接添加项 | 是 |
| 实际消息 / 信道 | 53 / 10 | 是 |
| SET / SET OF / ANY / 无约束 INTEGER | 0 | 不需要 |
| 对齐方式 | UPER（unaligned PER） | 是 |

### 6.2 引擎组成

| 组件 | 职责 |
|---|---|
| `BitWriter` | 追加写位、按字节扩容、补零对齐、溢出自检；输出内部字节缓冲 |
| `BitReader` | 在 `[0, bitLength)` 内读位，越界返回 `TruncatedInput` |
| `Encoder` | 持有 BitWriter、起始 bit 偏移、错误码；提供写约束整数/长度/位图/开放类型等原语 |
| `Decoder` | 持有 BitReader、起始偏移、错误码；提供对称读原语与长度上限校验 |
| 分派器 | 手写 `switch(kind)`，53 个消息入口；解码前校验 channel 映射 |

引擎代码规模目标约 2,500 行 C++17，不依赖第三方库。

### 6.3 基本类型编码规则（UPER）

| ASN.1 | 规则 | 备注 |
|---|---|---|
| BOOLEAN | 1 bit | 0=false, 1=true |
| INTEGER（约束 lb..ub） | 单值（range=1）：0 bit；否则固定 `ceil(log2(range))` bit，UPER 下无论 range 是否大于 64K 都不加长度前导 | 38.331 最大位宽 39 bit；半约束/无约束形态本模块不存在，引擎仍保留实现 |
| ENUMERATED（不可扩展） | 索引按 `0..n-1` 的约束整数编码（单值枚举 0 bit） | — |
| ENUMERATED（可扩展） | 1 bit 扩展位 + 根内约束索引；根外写 normally small 索引 | 未知扩展值原样保留（Q-04） |
| BIT STRING（定长） | 固定 n bit，MSB first；不写长度 | 无对齐填充 |
| BIT STRING（变长 SIZE lb..ub） | ub<64K：约束整数 `(n-lb)`（位宽 `ceil(log2(ub-lb+1))`）+ n bit；ub≥64K：半约束长度 + n bit | 38.331 有 5 处 ub=65,536，按“视为无上界”处理 |
| OCTET STRING（定长） | 直接写 n 字节，不写长度 | — |
| OCTET STRING（变长 SIZE lb..ub） | ub<64K：约束整数 `(n-lb)` + n 字节；否则半约束长度 + n 字节 | 38.331 的定长 14 处、有 SIZE 19 处 |
| OCTET STRING（无界） | 半约束长度（8/16 bit/分片格式）+ 字节 | 139 处无 SIZE |
| NULL / 空 SEQUENCE | 0 bit | — |
| SEQUENCE OF（SIZE lb..ub） | 定长：不写长度；ub<64K：约束整数 `(count-lb)` + 元素；ub≥64K 或无上界：半约束长度 + 元素 | 50 处 ub=65,536，按“视为无上界”处理 |

### 6.4 构造类型与消息入口规则

| 构造 | 编码 |
|---|---|
| SEQUENCE | 扩展位（若可扩展）+ 根 OPTIONAL/DEFAULT 位图（按声明顺序）+ 按顺序编码存在字段 |
| CHOICE | 扩展位（若可扩展）+ 根备选索引（单备选 0 bit）；扩展备选：扩展位=1 + normally small 索引 + 开放类型 |
| 扩展添加项 | 扩展位=1 时：先写个数 `n`（normally small length）+ `n` bit 存在位图，再逐个写存在项的开放类型 |
| 扩展组（`[[ ]]`） | 组内容按“组内 SEQUENCE”编码后整体包成开放类型（长度行列式 + 字节） |
| 开放类型（`CONTAINING`） | 长度行列式 + 内层类型编码字节；解码自动解析内层并挂到 `Y*`（受深度限制） |
| DEFAULT | 根位图中占 1 bit；等于默认值写 0 且不编码值；不等写 1 并编码值 |

**消息入口包装位**（编码器写入 / 解码器校验；索引均为 UPER 固定位）：

| 信道 | 包装路径 | 入口位数 | 说明 |
|---|---|---:|---|
| BCCH-BCH | `message` CHOICE → `mib`=0 | 1 | 只有 MIB |
| BCCH-DL-SCH | `message`→`c1`=0；`c1`→`systemInformation`=0 / `SIB1`=1 | 2 | 2 个消息 |
| DL-CCCH | `message`→`c1`=0；`c1`→RRCReject=0 / RRCSetup=1 | 3 | 另 2 个 spare NULL |
| DL-DCCH | `message`→`c1`=0；`c1` 索引 0..12（4 bit） | 5 | 13 个消息 |
| MCCH-r17 | `message`→`c1`=0；`c1`→MBSBroadcastConfiguration-r17=0 | 2 | spare1 |
| MulticastMCCH-r18 | `message`→`c1`=0；`c1`→MBSMulticastConfiguration-r18=0 | 2 | spare1 |
| PCCH | `message`→`c1`=0；`c1`→Paging=0 | 2 | spare1 |
| UL-CCCH | `message`→`c1`=0；`c1` 索引 0..3（2 bit） | 3 | 4 个消息 |
| UL-CCCH1 | `message`→`c1`=0；`c1`→RRCResumeRequest1=0 | 3 | spare3/2/1 |
| UL-DCCH（c1） | `message`→`c1`=0；`c1` 索引 0..15（4 bit） | 5 | 16 个消息 |
| UL-DCCH（c2） | `message`→`messageClassExtension`=1；内层→`c2`=0；`c2` 索引 0..15（4 bit） | 6 | 11 个消息 + 5 spare |

> 表中“入口位数”是消息体之前的固定位数；生成的 `EncodeMessage_<Kind>` 按此写入，
> `DecodeMessage_<Kind>` 按此校验。若码流命中 spare/扩展占位分支，返回
> `UnsupportedMessage`；若命中另一实际消息，返回 `MessageKindMismatch`。

### 6.5 安全与拒绝策略

- 所有读取先检查剩余位数；长度行列式按 X.691 上限（16K/64K 分片）解析，超限拒绝；
- 长度/元素数/比特串长度在分配前校验 ASN.1 约束与固定上限（4.5）；
- 开放类型：读长度 → 校验 ≤ 剩余输入 → 受限子流 → 递归解码内层 → 校验尾部仅补零位；
- `CONTAINING` 递归深度受 `RRC_CODEC_MAX_CONTAINING_DEPTH` 限制，超限返回
  `ContainingDepthExceeded`；编码侧对用户构造的循环指针图同样按深度拒绝；
- 解码失败释放已分配内存（生成的 `Free_*`，含已分配的 `CONTAINING` 内层结构体），结构体清零；
- 变长部分不做“解码后再校验”，避免攻击者用超长输入触发大分配；
- 扩展添加项个数 `n` 从码流读取后，先校验 `n` 与剩余位数、已知上限的关系，再读位图。

### 6.6 正确性策略

1. 用 X.691 附录 A 的样例验证 PER 原语（沿用现有单元测试思路）；
2. MIB/BCCH-BCH 黄金向量（现有测试中的 `5471ac`）作为第一个端到端验收点；
3. 与现行 v1 动态实现做差分：同一码流分别解码 → 用新实现重编码 → 比特级比较；
4. 与 pycrate 参考实现做交叉验证（沿用 `tests/interop` 思路）；
5. **53 个消息逐一**准备样例，覆盖 10 个信道、`c1`/`c2` 两条路径、扩展组与 `CONTAINING`；
   额外覆盖 `masterCellGroup`/`secondaryCellGroup`（CellGroupConfig）、嵌套
   `RRCReconfiguration` 循环与深度上限。

---

## 7. 构建与安装（CMake）

### 7.1 目标与选项

| 目标/选项 | 说明 |
|---|---|
| `rrc_codec` | 库目标；`RRC_CODEC_BUILD_SHARED` 控制动态/静态（默认静态） |
| `RrcCodec::rrc_codec` | CMake 别名，供 `target_link_libraries` 使用 |
| `RRC_CODEC_BUILD_TESTS` | 构建 CTest 测试（默认：顶层项目 ON） |
| `RRC_CODEC_BUILD_EXAMPLES` | 构建 C/C++ 示例（默认：顶层项目 ON） |
| `RRC_CODEC_REGENERATE` | 重生成目标（需 Python；开发期） |
| `RRC_CODEC_WARNINGS_AS_ERRORS` | 警告即错误（CI 默认 ON） |
| `RRC_CODEC_ENABLE_SANITIZERS` | ASan/UBSan（CI 可选） |
| `RRC_CODEC_BUILD_SHARED` | 构建共享库（默认 OFF，即静态库） |

### 7.2 CMakeLists 设计要点

```cmake
cmake_minimum_required(VERSION 3.20)
project(RrcCodec VERSION 2.0.0 LANGUAGES C CXX)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

option(RRC_CODEC_BUILD_TESTS    "Build tests"    ${PROJECT_IS_TOP_LEVEL})
option(RRC_CODEC_BUILD_EXAMPLES "Build examples" ${PROJECT_IS_TOP_LEVEL})
option(RRC_CODEC_BUILD_SHARED   "Build shared library" OFF)

# 生成源（入库；按生成器统计固定列出或 CONFIGURE_DEPENDS glob）
file(GLOB RRC_CODEC_GENERATED_SOURCES CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/*.cpp")

if(RRC_CODEC_BUILD_SHARED)
  add_library(rrc_codec SHARED)
  target_compile_definitions(rrc_codec PRIVATE RRC_CODEC_BUILDING_LIBRARY)
else()
  add_library(rrc_codec STATIC)
  target_compile_definitions(rrc_codec PUBLIC RRC_CODEC_STATIC)
endif()
add_library(RrcCodec::rrc_codec ALIAS rrc_codec)

target_sources(rrc_codec PRIVATE
  src/core/bitstream.cpp
  src/core/error.cpp
  src/core/codec_api.cpp
  src/core/dispatch.cpp
  ${RRC_CODEC_GENERATED_SOURCES})

target_compile_features(rrc_codec PRIVATE cxx_std_17)
target_include_directories(rrc_codec PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>")

set_target_properties(rrc_codec PROPERTIES
  OUTPUT_NAME             rrc_codec
  VERSION                 ${PROJECT_VERSION}
  SOVERSION               ${PROJECT_VERSION_MAJOR}
  CXX_VISIBILITY_PRESET   hidden
  VISIBILITY_INLINES_HIDDEN ON
  POSITION_INDEPENDENT_CODE ON)

# 安装：库 + 头文件
install(TARGETS rrc_codec EXPORT RrcCodecTargets
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(DIRECTORY include/rrc_codec
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  FILES_MATCHING PATTERN "*.h")

# 安装：CMake 包
set(RRC_CODEC_CMAKE_DIR "${CMAKE_INSTALL_LIBDIR}/cmake/RrcCodec")
install(EXPORT RrcCodecTargets
  FILE RrcCodecTargets.cmake
  NAMESPACE RrcCodec::
  DESTINATION ${RRC_CODEC_CMAKE_DIR})
configure_package_config_file(
  cmake/RrcCodecConfig.cmake.in
  "${CMAKE_CURRENT_BINARY_DIR}/RrcCodecConfig.cmake"
  INSTALL_DESTINATION ${RRC_CODEC_CMAKE_DIR})
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/RrcCodecConfigVersion.cmake"
  VERSION ${PROJECT_VERSION} COMPATIBILITY SameMajorVersion)
install(FILES
  "${CMAKE_CURRENT_BINARY_DIR}/RrcCodecConfig.cmake"
  "${CMAKE_CURRENT_BINARY_DIR}/RrcCodecConfigVersion.cmake"
  DESTINATION ${RRC_CODEC_CMAKE_DIR})

# 安装：pkg-config
configure_file(cmake/rrc_codec.pc.in
  "${CMAKE_CURRENT_BINARY_DIR}/rrc_codec.pc" @ONLY)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/rrc_codec.pc"
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig")

# 安装：许可证/说明（可选）
install(FILES LICENSE README.md
  DESTINATION "${CMAKE_INSTALL_DATAROOTDIR}/doc/rrc_codec")
```

设计说明：

- 生成源分块较多，使用 `CONFIGURE_DEPENDS` glob 或由生成器同时输出 `cmake/Sources.cmake` 列表；
  推荐后者（显式、可审查），本方案默认生成器输出源列表；
- 生成代码单独设置 `COMPILE_OPTIONS "-O0;-g0"`（GCC/Clang），控制编译时间与体积；
- 公共头通过 `install(DIRECTORY ... FILES_MATCHING PATTERN "*.h")` 安装，兼容 CMake 3.20；
- 不安装生成器、不安装测试、不安装内部头。

### 7.3 安装布局

```
<prefix>/
├── include/rrc_codec/
│   ├── rrc_codec.h
│   ├── rrc_export.h
│   ├── rrc_version.h
│   ├── rrc_channel.h
│   ├── rrc_error.h
│   ├── types/rrc_types.h
│   └── messages/rrc_messages.h
├── lib/
│   ├── librrc_codec.so.2           (或 rrc_codec.lib / librrc_codec.a)
│   ├── librrc_codec.so -> …
│   ├── cmake/RrcCodec/
│   │   ├── RrcCodecConfig.cmake
│   │   ├── RrcCodecConfigVersion.cmake
│   │   └── RrcCodecTargets.cmake
│   └── pkgconfig/rrc_codec.pc
└── share/doc/rrc_codec/{LICENSE,README.md}
```

### 7.4 版本、ABI 与 SOVERSION

| 项 | 策略 |
|---|---|
| 库版本 | `2.0.0`（若评审决定替换 v1；见 Q-12） |
| SOVERSION | `2`；ASN.1 版本升级（字段/类型变化）必须升主版本 |
| C API 版本 | `rrc_version.h`：`RRC_CODEC_VERSION_*`、`RRC_CODEC_ASN1_VERSION` |
| 结构体 ABI | 与 ASN.1 v18.10.0 绑定；升级 ASN.1 版本视为 ABI 破坏 |
| 符号稳定性 | 2.x 内已有函数签名不变；新增消息只追加 `MessageKind` 数值 |
| 版本查询 | `GetVersionString` / `GetAsn1VersionString` |

### 7.5 pkg-config

`cmake/rrc_codec.pc.in` 内容（静态库时补充 C++ 运行时依赖）：

```pc
prefix=@RRC_CODEC_PC_PREFIX@
exec_prefix=${prefix}
libdir=${prefix}/@CMAKE_INSTALL_LIBDIR@
includedir=${prefix}/@CMAKE_INSTALL_INCLUDEDIR@

Name: rrc_codec
Description: 3GPP TS 38.331 v18.10.0 RRC UPER codec (C ABI)
Version: @PROJECT_VERSION@
Cflags: -I${includedir}
Libs: -L${libdir} -lrrc_codec
Libs.private: @RRC_CODEC_PC_LIBS_PRIVATE@
```

- 可重定位：CMake 用 `pcfiledir` 反推并填入 `@RRC_CODEC_PC_PREFIX@`（沿用现行 CMake 做法）；
- 静态库：`Libs.private` 增加 `-lstdc++`（GCC/Clang）或 MSVC 运行库说明，并在文档中说明；
- 动态库：C 调用方无需显式链接 C++ 运行库（由库自身携带依赖）。

### 7.6 三种消费方式（均纳入 CI）

```cmake
# 1) find_package
find_package(RrcCodec 2 CONFIG REQUIRED)
target_link_libraries(app PRIVATE RrcCodec::rrc_codec)
```

```sh
# 2) pkg-config
cc app.c $(pkg-config --cflags --libs rrc_codec) -o app
```

```cmake
# 3) add_subdirectory（源码内嵌）
add_subdirectory(third_party/RrcCodec)
target_link_libraries(app PRIVATE RrcCodec::rrc_codec)
```

### 7.7 跨平台

| 平台 | 处理 |
|---|---|
| Windows / MSVC | `RRC_CODEC_API` 为 `__declspec(dllexport/dllimport)`；静态库定义 `RRC_CODEC_STATIC`；生成代码按 C++17 编译 |
| Windows / MinGW | 同上 + `-fvisibility=hidden`；注意生成代码编译时间 |
| Linux / macOS | `__attribute__((visibility("default")))`；共享库只导出 8 个 ABI 函数 |
| C 消费方 | 动态库无需 C++ 运行时配置；静态库需链接 C++ 运行库（文档给出 `-lstdc++`/MSVC 说明） |
| 头文件检查 | CI 用 `cc -std=c99 -pedantic-errors -fsyntax-only` 编译公共头；C++17 同样检查 |
| 符号冲突 | 公开标识符按评审要求**无 `Rrc_` 前缀**，属于通用名（`MIB`、`ErrorCode` 等）；如与用户工程冲突，见 Q-01 |

### 7.8 CI 任务

1. Linux GCC/Clang、Windows MSVC/MinGW：配置 + 构建 + `ctest`；
2. 安装消费：`cmake --install` 到临时前缀，分别用 find_package、pkg-config 构建示例并运行；
3. 生成物一致性：重生成后 `git diff --exit-code`；
4. 静态检查：`-Wall -Wextra -Werror`、ASan/UBSan（可选）；
5. 头文件纯 C 检查（C99 与 C++17 两种包含方式）；
6. 构建时间与库体积记录（作为验收门禁数据）。

---

## 8. 目录结构

```
RrcEncodeDecode/
├── CMakeLists.txt
├── CMakePresets.json
├── cmake/
│   ├── RrcCodecConfig.cmake.in
│   ├── RrcCodecCompilerOptions.cmake
│   └── rrc_codec.pc.in
├── include/rrc_codec/            手写公共头 + 生成头（见 4.1）
├── src/
│   ├── core/                     bitstream/error/api/dispatch（手写）
│   └── generated/                生成编解码函数（入库，勿手改）
├── generated/                    统计、消息索引、生成源列表
├── tools/rrcgen/                 现有 Python 前端 + 新 C 发射器（开发期）
├── tests/
│   ├── unit/                     位流、PER 原语
│   ├── messages/                 53 个消息编解码/信道校验/round-trip
│   ├── golden/                   黄金向量
│   ├── interop/                  pycrate/现行 v1 差分
│   └── install/                  安装消费测试
├── examples/
│   ├── c_encode_decode/main.c
│   └── cpp_encode_decode/main.cpp
├── docs/                         方案、接口规范、测试计划、变更记录
├── data/                         ASN.1 输入与 SHA-256
└── ci/                           构建/安装/检查流水线
```

> 说明：以上是评审通过后的目标结构；本次不改动现有目录与文件。

---

## 9. 测试与验收

### 9.1 测试分层

| 层级 | 内容 | 门禁 |
|---|---|---|
| 单元 | BitWriter/BitReader、长度行列式、约束整数、枚举、扩展位图 | 全通过 |
| 黄金向量 | MIB/BCCH-BCH `5471ac`；现有向量迁移 | 解码 + 重编码比特一致 |
| 消息级 | **53 个消息**各至少 1 个样例：编码→解码→重编码比特一致 | 53/53 |
| CONTAINING | `masterCellGroup`/`secondaryCellGroup` 解码后可直接读 `CellGroupConfig`；重编码一致；嵌套 `RRCReconfiguration` 与深度边界 | 通过 |
| 信道校验 | 正确 channel 通过；错误 channel → `ChannelMismatch`；包装位错配 → `MessageKindMismatch`；spare/扩展 → `UnsupportedMessage` | 覆盖全部 10 信道 |
| 差分 | 与现行 v1 动态实现、pycrate 对比（随机/真实语料） | 不一致即失败 |
| 接口 | C99 直接调用 ABI 函数；无宏/模板分支 | CI 通过 |
| 安装消费 | find_package（C/C++）、pkg-config、add_subdirectory | CI 全通过 |
| 生成一致性 | 重生成 diff 为空 | CI 通过 |
| 健壮性 | 截断/超长/非法长度/非法索引用例；ASan/UBSan | 无崩溃、错误码正确 |
| 可选 | fuzz（复用现有语料）、性能基准 | 不阻塞 v2.0 |

### 9.2 黄金向量与差分对拍

- 复用 `tests/vectors`、`tests/interop` 中的 MIB 向量与 pycrate 对比思路；
- 差分流程：同一输入码流分别走“v1 动态实现”和“v2 新实现”，
  比较解码后的关键字段与重编码字节；差异定位到具体消息、类型与 bit 偏移；
- 扩展组/开放类型样例必须覆盖：`SuspendConfig`、`RRCReconfiguration`、
  `masterCellGroup`/`secondaryCellGroup`（自动解析出 `CellGroupConfig`）、
  嵌套 `RRCReconfiguration` 循环与 `ContainingDepthExceeded` 深度边界；
- 重点校验 53 个消息的包装位路径（6.4），任何一条路径错位都会导致整条消息解码失败。

### 9.3 安装消费测试

`tests/install/` 提供：
- CMake consumer（C 与 C++ 各一）通过 `find_package(RrcCodec 2 CONFIG REQUIRED)` 构建；
- pkg-config consumer 用 `pkg-config --cflags --libs rrc_codec` 编译；
- 源码内嵌 consumer 用 `add_subdirectory`；
- 每个 consumer 实际编码/解码一个 MIB 并断言结果，确保安装包可用；
- 额外编译一个纯 C99 consumer（直接调用 `EncodeMessage`/`DecodeMessage`）验证头文件无 C11 依赖；

### 9.4 质量门禁

- 编译零警告（`-Wall -Wextra -Werror`，MSVC `/W4 /WX`）；
- 公共头纯 C99 与 C++17 均可单独包含；
- 生成物可复现（diff 为空）；
- 构建时间目标：8 核全量构建 ≤ 5 min（P1 实测后校准）；
- 共享库体积目标：≤ 10 MB（stripped，P3 实测后校准）；
- 所有公开接口注释齐全（Doxygen 无 warning）。

---

## 10. 风险与缓解

| 编号 | 风险 | 影响 | 缓解 |
|---|---|---|---|
| R1 | 扩展组/开放类型语义复杂，生成代码易错 | 解码失败/比特不一致 | 固定规则 + 535 组逐一生成；pycrate/v1 差分；重点样例覆盖 |
| R2 | 生成物体积与编译时间仍偏大 | 构建体验差 | 分块、`-O0/-g0`、P1 实测；必要时拆分类型头 |
| R3 | 匿名类型/关键字/重名转义出错 | 编译失败或语义错 | 生成器内建检查 + 单元测试；C99 语法检查 |
| R4 | 53 个消息的包装位路径映射错误 | 指定消息全部解码失败 | 路径表（6.4）由生成器统一产出并逐条测试；与 v1/pycrate 差分 |
| R5 | `CONTAINING` 内层自动解析引入递归、额外分配与循环风险 | 栈/内存膨胀或死循环 | `Y*` + `RRC_CODEC_MAX_CONTAINING_DEPTH` 限制；解码先校验长度；编码/解码均做深度检查；专项测试 |
| R6 | 新版 38.331 扩展项导致解码失败 | 前向兼容性弱 | 明确只支持 18.10.0；遇到未知扩展返回 `UnsupportedExtension`（Q-05） |
| R7 | 公开标识符无前缀导致与用户工程/系统头冲突 | 编译冲突 | 评审接受（Q-01）；可在构建选项提供 `RRC_CODEC_NAMESPACE` 宏别名方案 |
| R8 | 调用方 `kind` 与 `message` 结构体类型不匹配 | 编码结果错误或解码写坏内存 | 接口文档强约束；解码侧 channel 校验可发现部分错误；后续可加调试期类型标签（不改变 ABI） |
| R9 | 解码不做消息自动识别 | 调用方必须知道期望消息 | 明确语义；channel 校验降低误用；见 Q-03 |
| R10 | 解码大量小对象 malloc 碎片 | 性能/内存 | 首版可接受；后续可加 arena（不改变 API 语义） |
| R11 | 单头文件 3–4 MB 影响 IDE | 开发体验 | 可拆分类型头；Q-10 |
| R12 | 输入 `trueVal/falseVal` 与 38.331 原文差异 | 认知成本 | 注释标注原始名；Q-14 |

---

## 11. 实施计划（评审通过后）

### 11.1 阶段与交付

| 阶段 | 内容 | 交付物 | 验收 |
|---|---|---|---|
| P0 | 方案评审与冻结（本文） | 评审结论、命名/映射/API 定稿 | 关键问题（第 15 章）有结论 |
| P1 | 生成器 C 发射器 + 类型头 + 消息表 | `rrc_types.h`、`rrc_messages.h`、stats | C99 编译通过；结构体/消息表抽样评审通过 |
| P2 | PER 原语 + MIB 端到端 | 手写 core + MIB 编解码 | `5471ac` 黄金向量通过 |
| P3 | 全量类型/53 消息 + 差分 | 生成 codec、消息分派 | 53/53 round-trip；`CONTAINING` 递归与深度边界通过；与 v1/pycrate 一致 |
| P4 | C ABI + CMake install + 示例 | 公共 API、安装包、示例 | 三种消费方式 + C99 调用 CI 通过 |
| P5 | 测试补齐、文档、验收 | 测试报告、接口规范、README | 9.4 门禁全部满足 |

### 11.2 工作量估算（参考）

| 阶段 | 人日 |
|---|---:|
| P0 | 2 |
| P1 | 6 |
| P2 | 4 |
| P3 | 7 |
| P4 | 4 |
| P5 | 4 |
| **合计** | **约 27 人日** |

> 估算不含 38.331 Phase 2 模块、性能优化专项与 fuzz 长期运行。

---

## 12. 附录 A：53 个实际消息与信道/包装位映射

> 全部为 38.331 v18.10.0 `NR-RRC-Definitions` 中 10 个 `*-Message` 入口下的实际消息；
> `spare`、`messageClassExtension`、`messageClassExtensionFuture` 等占位分支不映射、
> 不生成结构体。结构体名 = ASN.1 原名（`-`→`_`），`MessageKind` 值稳定。

| # | `MessageKind` | ASN.1 消息 | 结构体 | 信道 | 备注 |
|---:|---|---|---|---|---|
| 1 | `MessageKind_MIB` | `MIB` | `MIB` | BCCH-BCH | 广播主信息块 |
| 2 | `MessageKind_SystemInformation` | `SystemInformation` | `SystemInformation` | BCCH-DL-SCH | 多个 SIB 容器 |
| 3 | `MessageKind_SIB1` | `SIB1` | `SIB1` | BCCH-DL-SCH | 小区接入信息 |
| 4 | `MessageKind_RRCReject` | `RRCReject` | `RRCReject` | DL-CCCH | — |
| 5 | `MessageKind_RRCSetup` | `RRCSetup` | `RRCSetup` | DL-CCCH | — |
| 6 | `MessageKind_RRCReconfiguration` | `RRCReconfiguration` | `RRCReconfiguration` | DL-DCCH | — |
| 7 | `MessageKind_RRCResume` | `RRCResume` | `RRCResume` | DL-DCCH | — |
| 8 | `MessageKind_RRCRelease` | `RRCRelease` | `RRCRelease` | DL-DCCH | — |
| 9 | `MessageKind_RRCReestablishment` | `RRCReestablishment` | `RRCReestablishment` | DL-DCCH | — |
| 10 | `MessageKind_SecurityModeCommand` | `SecurityModeCommand` | `SecurityModeCommand` | DL-DCCH | — |
| 11 | `MessageKind_DLInformationTransfer` | `DLInformationTransfer` | `DLInformationTransfer` | DL-DCCH | — |
| 12 | `MessageKind_UECapabilityEnquiry` | `UECapabilityEnquiry` | `UECapabilityEnquiry` | DL-DCCH | — |
| 13 | `MessageKind_CounterCheck` | `CounterCheck` | `CounterCheck` | DL-DCCH | — |
| 14 | `MessageKind_MobilityFromNRCommand` | `MobilityFromNRCommand` | `MobilityFromNRCommand` | DL-DCCH | — |
| 15 | `MessageKind_DLDedicatedMessageSegment_r16` | `DLDedicatedMessageSegment-r16` | `DLDedicatedMessageSegment_r16` | DL-DCCH | — |
| 16 | `MessageKind_UEInformationRequest_r16` | `UEInformationRequest-r16` | `UEInformationRequest_r16` | DL-DCCH | — |
| 17 | `MessageKind_DLInformationTransferMRDC_r16` | `DLInformationTransferMRDC-r16` | `DLInformationTransferMRDC_r16` | DL-DCCH | — |
| 18 | `MessageKind_LoggedMeasurementConfiguration_r16` | `LoggedMeasurementConfiguration-r16` | `LoggedMeasurementConfiguration_r16` | DL-DCCH | — |
| 19 | `MessageKind_MBSBroadcastConfiguration_r17` | `MBSBroadcastConfiguration-r17` | `MBSBroadcastConfiguration_r17` | MCCH-r17 | MBS 广播 |
| 20 | `MessageKind_MBSMulticastConfiguration_r18` | `MBSMulticastConfiguration-r18` | `MBSMulticastConfiguration_r18` | MulticastMCCH-r18 | MBS 多播 |
| 21 | `MessageKind_Paging` | `Paging` | `Paging` | PCCH | — |
| 22 | `MessageKind_RRCSetupRequest` | `RRCSetupRequest` | `RRCSetupRequest` | UL-CCCH | — |
| 23 | `MessageKind_RRCResumeRequest` | `RRCResumeRequest` | `RRCResumeRequest` | UL-CCCH | — |
| 24 | `MessageKind_RRCReestablishmentRequest` | `RRCReestablishmentRequest` | `RRCReestablishmentRequest` | UL-CCCH | — |
| 25 | `MessageKind_RRCSystemInfoRequest` | `RRCSystemInfoRequest` | `RRCSystemInfoRequest` | UL-CCCH | — |
| 26 | `MessageKind_RRCResumeRequest1` | `RRCResumeRequest1` | `RRCResumeRequest1` | UL-CCCH1 | Rel-16 |
| 27 | `MessageKind_MeasurementReport` | `MeasurementReport` | `MeasurementReport` | UL-DCCH | c1 |
| 28 | `MessageKind_RRCReconfigurationComplete` | `RRCReconfigurationComplete` | `RRCReconfigurationComplete` | UL-DCCH | c1 |
| 29 | `MessageKind_RRCSetupComplete` | `RRCSetupComplete` | `RRCSetupComplete` | UL-DCCH | c1 |
| 30 | `MessageKind_RRCReestablishmentComplete` | `RRCReestablishmentComplete` | `RRCReestablishmentComplete` | UL-DCCH | c1 |
| 31 | `MessageKind_RRCResumeComplete` | `RRCResumeComplete` | `RRCResumeComplete` | UL-DCCH | c1 |
| 32 | `MessageKind_SecurityModeComplete` | `SecurityModeComplete` | `SecurityModeComplete` | UL-DCCH | c1 |
| 33 | `MessageKind_SecurityModeFailure` | `SecurityModeFailure` | `SecurityModeFailure` | UL-DCCH | c1 |
| 34 | `MessageKind_ULInformationTransfer` | `ULInformationTransfer` | `ULInformationTransfer` | UL-DCCH | c1 |
| 35 | `MessageKind_LocationMeasurementIndication` | `LocationMeasurementIndication` | `LocationMeasurementIndication` | UL-DCCH | c1 |
| 36 | `MessageKind_UECapabilityInformation` | `UECapabilityInformation` | `UECapabilityInformation` | UL-DCCH | c1 |
| 37 | `MessageKind_CounterCheckResponse` | `CounterCheckResponse` | `CounterCheckResponse` | UL-DCCH | c1 |
| 38 | `MessageKind_UEAssistanceInformation` | `UEAssistanceInformation` | `UEAssistanceInformation` | UL-DCCH | c1 |
| 39 | `MessageKind_FailureInformation` | `FailureInformation` | `FailureInformation` | UL-DCCH | c1 |
| 40 | `MessageKind_ULInformationTransferMRDC` | `ULInformationTransferMRDC` | `ULInformationTransferMRDC` | UL-DCCH | c1 |
| 41 | `MessageKind_SCGFailureInformation` | `SCGFailureInformation` | `SCGFailureInformation` | UL-DCCH | c1 |
| 42 | `MessageKind_SCGFailureInformationEUTRA` | `SCGFailureInformationEUTRA` | `SCGFailureInformationEUTRA` | UL-DCCH | c1 |
| 43 | `MessageKind_ULDedicatedMessageSegment_r16` | `ULDedicatedMessageSegment-r16` | `ULDedicatedMessageSegment_r16` | UL-DCCH | c2 |
| 44 | `MessageKind_DedicatedSIBRequest_r16` | `DedicatedSIBRequest-r16` | `DedicatedSIBRequest_r16` | UL-DCCH | c2 |
| 45 | `MessageKind_MCGFailureInformation_r16` | `MCGFailureInformation-r16` | `MCGFailureInformation_r16` | UL-DCCH | c2 |
| 46 | `MessageKind_UEInformationResponse_r16` | `UEInformationResponse-r16` | `UEInformationResponse_r16` | UL-DCCH | c2 |
| 47 | `MessageKind_SidelinkUEInformationNR_r16` | `SidelinkUEInformationNR-r16` | `SidelinkUEInformationNR_r16` | UL-DCCH | c2 |
| 48 | `MessageKind_ULInformationTransferIRAT_r16` | `ULInformationTransferIRAT-r16` | `ULInformationTransferIRAT_r16` | UL-DCCH | c2 |
| 49 | `MessageKind_IABOtherInformation_r16` | `IABOtherInformation-r16` | `IABOtherInformation_r16` | UL-DCCH | c2 |
| 50 | `MessageKind_MBSInterestIndication_r17` | `MBSInterestIndication-r17` | `MBSInterestIndication_r17` | UL-DCCH | c2 |
| 51 | `MessageKind_UEPositioningAssistanceInfo_r17` | `UEPositioningAssistanceInfo-r17` | `UEPositioningAssistanceInfo_r17` | UL-DCCH | c2 |
| 52 | `MessageKind_MeasurementReportAppLayer_r17` | `MeasurementReportAppLayer-r17` | `MeasurementReportAppLayer_r17` | UL-DCCH | c2 |
| 53 | `MessageKind_IndirectPathFailureInformation_r18` | `IndirectPathFailureInformation-r18` | `IndirectPathFailureInformation_r18` | UL-DCCH | c2 |

---

## 13. 附录 B：ASN.1 统计（生成规模依据）

来源：`tools/build/rrc.stats.json`（生成器 1.0.0，输入 `38.331_v18.10.0.asn`，
SHA-256 `c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c`）。

| 指标 | 值 |
|---|---:|
| 顶层类型定义（NR-RRC-Definitions 模块） | 2,297 |
| 其中 SEQUENCE / CHOICE / ENUMERATED / INTEGER / SEQ OF / BIT STRING / OCTET STRING / BOOLEAN / 别名 | 1,519 / 91 / 80 / 217 / 357 / 18 / 10 / 1 / 3 |
| 匿名类型（SEQUENCE/CHOICE/ENUMERATED） | 728 / 315 / 3,244 |
| 生成类型定义（顶层 + 匿名 + SetupRelease 实例 + 顶层 SEQUENCE OF 包装结构体） | 2,297 + 4,287 + 247 + 357 ≈ 7,188；扣除信道容器/占位类型后约 7,150（精确值以生成器统计为准） |
| 字段/组件总数 | 10,983 |
| OPTIONAL 组件 | 6,675 |
| DEFAULT 组件 | 19 |
| 类型节点总数（含内联 primitive） | 10,680 |
| SEQUENCE 节点 / 可扩展 SEQUENCE | 2,247 / 572 |
| CHOICE 节点 / 可扩展 CHOICE | 407 / 61 |
| ENUMERATED 节点 / 枚举值 / 可扩展 ENUMERATED | 3,324 / 11,678 / 19 |
| SEQUENCE OF 节点 | 1,256（全部带 SIZE） |
| BIT STRING 节点 / OCTET STRING 节点 | 378 / 191 |
| CONTAINING 开放类型 | 33 |
| CONTAINING 目标类型（去重） | 16 个 SEQUENCE + 1 个 SEQUENCE OF（`CondReconfigExecCondSCG-r17`） |
| 扩展组 / 组成员 / 直接添加项 | 535 / 1,961 / 63 |
| 最大 SIZE 上界 | 65,536 |
| 最大 INTEGER 位宽 | 39 bit |
| 类型环 | 2 个（均经 CONTAINING，通过 `Y*` 指针 + 深度上限处理） |
| SET / SET OF / ANY / 无约束 INTEGER | 0 |
| **实际消息 / 信道** | **53 / 10** |

结论：结构体总量约 7,150 个定义、约 11,000 个字段、53 个实际消息，非常适合
“直译 + 生成编解码函数”；同时确认除 `CONTAINING` 指针环外不需要处理按值递归、SET、无约束整数等复杂情况。

---

## 14. 附录 C：命名映射示例

| ASN.1 | C 名称 |
|---|---|
| `MIB` | `MIB` |
| `SIB1` | `SIB1` |
| `RRCReconfiguration` | `RRCReconfiguration` |
| `BCCH-DL-SCH-Message` | 不生成结构体（消息类型已确定信道） |
| `SI-SchedulingInfo` | `SI_SchedulingInfo` |
| `Q-RxLevMin` | `Q_RxLevMin` |
| 字段 `q-RxLevMinOffset` | `q_RxLevMinOffset` |
| 字段 `lateNonCriticalExtension`（OPTIONAL，普通 OCTET STRING） | `bool has_lateNonCriticalExtension; OctetString lateNonCriticalExtension;` |
| 字段 `masterCellGroup`：`OCTET STRING (CONTAINING CellGroupConfig)` | `CellGroupConfig* masterCellGroup;`（NULL = 未出现） |
| 顶层 `SEQUENCE OF`（如 `PagingRecordList`） | `PagingRecordList` 包装结构体（`items` + `count`） |
| `MIB` 内联枚举 `subCarrierSpacingCommon` | 类型 `MIB_SubCarrierSpacingCommon`；常量 `MIB_SubCarrierSpacingCommon_scs15or60` |
| `ENUMERATED {short, long}` | `<Enum>_short_`、`<Enum>_long_` |
| `SetupRelease { BAP-Config-r16 }` | `SetupRelease_BAP_Config_r16` |
| CHOICE 备选 `criticalExtensionsFuture`（匿名空 SEQUENCE） | 类型 `RRCReconfiguration_CriticalExtensionsFuture` |
| `NULL`（spare 备选） | `Null`（仅出现在非消息 IE 的 CHOICE 中） |
| 消息类型枚举 | `MessageKind_MIB`、`MessageKind_SIB1` 等 |
| 信道枚举 | `ChannelType_BCCH_BCH` 等 |
| 编码结果 | `EncodedMessage`（`data` + `size` + `bitLength`） |

---

## 15. 待评审问题清单（需要拍板）

> v0.5 已落实：顶层结构体为实际消息、无信道容器层、类型名无 `Rrc_` 前缀；
> 编码显式传 `MessageKind`、解码传 `ChannelType` + `MessageKind`；不做类型推断宏/模板；
> 不提供逐消息接口；不暴露公开位流对象；`CONTAINING` 自动解析为内层结构体指针。
> 以下为剩余待确认项。

| 编号 | 问题 | 选项 | 建议 | 影响 |
|---|---|---|---|---|
| Q-01 | 公开标识符完全无前缀（`MIB`、`ErrorCode`、`EncodeMessage` 等）是否接受？与用户工程/系统头冲突时如何处理？ | A 接受（本方案）；B 函数/基础类型加小写 `rrc_` 前缀；C 仅类型无前缀 | **A**（按评审意见） | 影响所有公开名称与全局符号空间 |
| Q-02 | 编码接口改为显式传消息类型：`EncodeMessage(kind, message, &encoded)`，解码 `DecodeMessage(channel, kind, data, size, message)`；不做 C11/C++ 类型推断糖。是否接受？ | A 接受（纯 C99 ABI，最简）；B 希望保留类型推断糖；C 希望编码按信道传参 | **A**（当前方案） | 影响 API 形式与工具链门槛；C 无法区分多消息信道，不可行 |
| Q-03 | 解码的 `channel` 仅用于一致性校验；实际消息由显式 `kind` 指定，不做码流自动识别。是否接受？ | A 接受；B 需要解码自动识别消息（需重新引入信道容器/联合体） | **A** | 决定 API 语义；B 会回退到被否决的信道层级 |
| Q-04 | 可扩展 ENUMERATED 的未知值：`int32_t` 原值保留还是解码报错？ | A 保留；B 报错 | **A**（前向兼容、编码可回传） | 19 个可扩展枚举；影响未知值处理 |
| Q-05 | 解码遇到 v18.10.0 之外的扩展添加项/扩展位图如何处理？ | A 返回 `UnsupportedExtension`；B 尽力跳过 | **A**（可预期、无静默错译） | 决定版本兼容策略 |
| Q-06 | `CONTAINING` 字段自动解析内层类型，并统一表示为 `Y*`（可选 NULL 表示未出现、必填需非 NULL），嵌套深度上限默认 16。是否接受？ | A 接受（本方案）；B 仅非循环字段用值、循环边用指针；C 只保留原始字节 + 辅助解析 API | **A**（规则统一、可直接读字段） | 影响字段表示、内存所有权与循环处理；C 无法满足 `masterCellGroup` 直接解码 |
| Q-07 | v1 现有实现如何处置？ | A 新方案另立目录/分支，评审通过后替换；B 立即删除 v1；C 长期并存 | **A**（本次不动 v1，降低风险） | 影响仓库结构、命名冲突与迁移 |
| Q-08 | 编码输出 `EncodedMessage` 与解码内存均由库 `malloc` 分配、配套 `FreeEncodedMessage`/`FreeMessage` 释放；是否接受？ | A 本方案；B 调用方传入缓冲区/arena；C 编码输出由调用方提供固定缓冲 | **A**（接口最简）；后续可加 B/C 而不改语义 | 影响 API 形态、内存所有权与性能 |
| Q-09 | 53 个实际消息的覆盖范围是否认可？`spare`/扩展占位分支不映射（解码报 `UnsupportedMessage`）是否接受？ | A 接受；B 需要为占位分支生成可表示结构 | **A** | 决定消息表与错误行为 |
| Q-10 | 生成类型头是单文件还是分块？ | A 单文件；B 分块 | **A**（简单）；若 IDE/编译实测不佳再拆 | 影响编译时间与开发体验 |
| Q-11 | 是否提供 C++ RAII 薄封装（`rrc_codec.hpp`）？ | A 不提供；B 提供 | **A**（C 头在 C++ 可直接用；避免第二套接口） | 接口面与维护成本 |
| Q-12 | 库版本/安装名是否为 `RrcCodec 2.0.0`、头目录 `rrc_codec/`、SOVERSION 2？ | A 是；B 另起新库名 | **A**（与 v1 区分清晰） | 影响安装布局与包名 |
| Q-13 | 构建时间（8 核 ≤ 5 min）与共享库体积（≤ 10 MB）是否作为验收门禁？ | A 是；B 仅记录 | **A**（P1/P3 实测后校准） | 影响生成分块与编译选项 |
| Q-14 | 输入文件的 `trueVal`/`falseVal` 改名是否保留？ | A 保留并注释；B 恢复 `true/false` 并做代码映射 | **A**（避免 C/C++ 关键字冲突） | 影响枚举常量命名与文档 |
| Q-15 | 编码输出是否保留 `bitLength`（有效位数）字段，还是只保留字节 `size`？ | A 保留（本方案）；B 只保留 size | **A**（便于调试与位级校验） | 仅结构体字段，无实现成本 |

---

## 16. 附录 D：与现行方案逐项对照

| 现行 v1 能力/头文件 | 本方案 | 说明 |
|---|---|---|
| `Codec` 类、`CodecOptions` | 删除 | 改为无状态函数 |
| `RrcCodecHandle` / `RrcMessageHandle` / `RrcValueHandle` | 删除 | 无句柄，直接结构体 |
| `RrcValue`/`RrcMessage` 动态树、字段路径、JSON | 删除 | 非目标 |
| `RrcOpenType` / `DecodeAs<T>` / `EncodeContained<T>` | 删除 | `CONTAINING` 字段自动解码为内层结构体指针（`Y*`），无需手工二次解码 |
| `Schema` 内省、`TypeId`、`Registry` | 删除 | 编解码改为专用函数 |
| typed ↔ dynamic 转换器 | 删除 | 一种表示 |
| `Result<T>` / C++ `Error` 对象 | 删除 | 只保留 C 错误码 + 最小错误信息 |
| 10 个 `MessageType` 动态消息入口（句柄 + 路径访问） | 删除 | 改为 53 个实际消息结构体 + `MessageKind` |
| C `RrcDecodeMessage`/`RrcEncodeMessage`（消息句柄） | 改为 `DecodeMessage`/`EncodeMessage`（结构体 + 显式 `MessageKind`） | 命名与语义重定义 |
| `RrcEncodeValue`/`RrcDecodeValue`（任意类型） | 删除 | 不在目标内 |
| `RrcBuffer`/`RrcBufferRelease` | 改为 `EncodedMessage`/`FreeEncodedMessage` | 编码输出统一由库分配与释放 |
| `BitStream*` + `BitStreamInitWriter/Reader/Free` | 删除（位流降为内部实现） | 编码输出 `EncodedMessage`，解码输入 `data/size` |
| `Export.h` / `Version.hpp` | 改为 `rrc_export.h` / `rrc_version.h` | 保留能力、调整命名 |
| `RrcCodecGetLastError` | 改为 `GetLastErrorInfo` | 最小实现 |
| CLI、JSON、fuzz、性能基准 | 不随 v2 交付 | 可按需追加 |

**保留复用**：ASN.1 输入与校验和、解析器前端、PER 规则与测试向量思路、CMake 安装理念、
CI 思想、38.331 特例处理经验。

---

*（本文为评审稿 v0.2；待第 15 章问题确认后更新为定稿并进入实现阶段。）*


