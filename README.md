# RrcCodec

RrcCodec 是 3GPP TS 38.331（`NR-RRC-Definitions`，v18.10.0）RRC 消息的 UPER
编解码库，提供纯 C99 ABI。调用方按消息类型填写普通 C 结构体，即可完成
“结构体 → UPER 比特流”编码与“比特流 → 结构体”解码；覆盖 10 个 Uu 口信道入口、
53 个实际消息与全部 IE，`OCTET STRING (CONTAINING Y)` 自动解析为内层结构体指针，
动态内存由库统一释放。库以 C++17 实现、仅导出 8 个 C 函数，C 与 C++ 消费方均
不需要感知 C++ 运行时。

设计要点：

- **一种表示**：53 个实际消息各对应一个顶层 C 结构体；其余 IE 直接映射为
  C 结构体/枚举；不生成信道容器结构体；`OCTET STRING (CONTAINING Y)` 自动解析为
  内层结构体指针。
- **一套接口**：纯 C99 ABI，公开函数 8 个：
  `EncodeMessage` / `FreeEncodedMessage` / `DecodeMessage` / `FreeMessage` /
  `GetLastErrorInfo` / `SetErrorHandler` / `GetVersionString` / `GetAsn1VersionString`。
- **一条生成链路**：ASN.1 → C 类型头 + 专用编解码函数 → 手写 PER 原语。

## 快速开始（C99）

```c
#include <rrc_codec/rrc_codec.h>

MIB mib = {0};
static uint8_t sfn = 0xA8;          /* 前 6 bit = 101010 */
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

EncodedMessage encoded = {0};
if (EncodeMessage(MessageKind_MIB, &mib, &encoded) != ErrorCode_Ok) {
    /* GetLastErrorInfo(&info) 取错误码/比特偏移 */
}
MIB decoded = {0};
DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB,
              encoded.data, encoded.size, &decoded);
FreeMessage(MessageKind_MIB, &decoded);
FreeEncodedMessage(&encoded);
```

### 使用要点（所有权与释放）

- **编码输入由调用方持有**：`EncodeMessage` 只读结构体，不接管任何指针。结构体里
  你自己 `malloc` 的 `BitString.bytes` / `OctetString.bytes` / `SEQUENCE OF.items` /
  `CONTAINING` 内层对象，需要你自己释放；示例使用静态缓冲，因此无需释放。
- **编码结果由库分配**：`encoded.data` 是库 `malloc` 的，使用完必须调用
  `FreeEncodedMessage(&encoded)`，不能直接 `free(encoded.data)`。
- **解码结果由库分配**：`DecodeMessage` 成功后，输出结构体中的 `SEQUENCE OF` 数组、
  `BIT/OCTET STRING` 字节、`CONTAINING` 内层结构体都由库分配，必须调用
  `FreeMessage(kind, &decoded)` 递归释放。解码失败时库已释放并清零输出，不需要
  再调用 `FreeMessage`。
- **释放函数不可混用**：`FreeMessage` 只用于解码结果（对调用方自建的结构体调用会
  释放非法指针）；`FreeEncodedMessage` 只用于库返回的 `EncodedMessage`。
- **信道必须匹配**：`DecodeMessage` 的 `channel` 必须等于
  `ChannelOfMessageKind(kind)`，否则返回 `ChannelMismatch`；编码时信道由 `kind`
  自动确定。
- **编码前填好必填字段**：位串要给 `bytes` + `bitLength`，`SEQUENCE OF` 要给
  `items` + `count`，`CHOICE` 要给 `tag` 与实际选中的 union 成员；解码前输出结构体
  建议先清零（库内部也会清零）。
- **错误处理**：返回非 `ErrorCode_Ok` 时用 `GetLastErrorInfo` 取
  `code` / `channel` / `bitOffset`；失败时 `encoded` 已被清零。
- **不要浅拷贝含指针的结构体**：直接赋值会造成同一指针被释放两次；需要复制时请
  自行深拷贝，或只移动所有权。
- **线程模型**：库无全局可变状态，错误信息按线程保存（thread-local），不同线程可
  并发处理各自的消息；同一结构体不得被并发读写。
- **输入上限**：解码输入不超过 `RRC_CODEC_MAX_INPUT_BYTES`（默认 16 MiB），
  `CONTAINING` 嵌套不超过 `RRC_CODEC_MAX_CONTAINING_DEPTH`（默认 16）；
  可在 CMake 配置阶段覆盖。

## 构建

```powershell
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel 8
ctest --test-dir build --output-on-failure
cmake --install build --prefix install
```

或使用预设：

```powershell
cmake --preset mingw-debug
cmake --build --preset mingw-debug
ctest --preset mingw-debug
```

要求：CMake ≥ 3.20、C++17 编译器（GCC/Clang/MSVC/MinGW）。库本身用 C++17 构建，
公共头为 C99；C 消费方无需 C++ 源文件。

## 重新生成与 ASN.1 迁移

### 为什么需要重新生成

协议的唯一来源是 ASN.1 文件（`data/38.331_v*.asn`）。所有结构体、枚举和编解码
函数都由生成器 `tools/rrcgen` 从它产出，并**作为生成物随仓库入库**——这样消费
方只需 C/C++ 编译器即可构建，不必安装 Python 或 ASN.1 工具链。

代价是：**ASN.1 一旦变化，生成物必须重新生成**，否则仓库里的代码与协议输入不
一致。生成物同时在 CI 中用 `--check` 逐字节校验，用于拦截两类错误：

- 改了 ASN.1 却忘记重新生成；
- 直接手改生成物（下次生成会被覆盖，且 `--check` 会失败）。

### 重新生成会修改什么

以下内容全部由生成器整体重写，**请勿手工修改**：

| 位置 | 内容 |
|---|---|
| `include/rrc_codec/types/rrc_types*.h` | 全部结构体/枚举/别名与类型注释 |
| `include/rrc_codec/messages/rrc_messages.h` | `MessageKind`、消息数量宏、信道映射 |
| `include/rrc_codec/rrc_version.h` | 库版本 / ASN.1 版本宏（来自 `data/` 单一来源） |
| `src/generated/codec_internal.h`、`codec_partNNN.cpp` | 全部编解码函数 |
| `generated/` | `Sources.cmake`、统计、消息索引、`rrc_manifest.json`、dispatch 清单 |
| `tests/generated/` | 消息样例构造器与测试用消息清单 |

手写部分（`src/core/`、手写公共头、CMake、手写测试/示例）不会被生成器修改；
若生成物导致手写代码编译失败或断言失配，需要人工同步。

版本号、ASN.1 版本、消息集基线等输入统一放在 `data/`（`version.txt`、
`asn-version.txt`、`message-set.txt`、`asn-input.sha256`），生成器与 CMake
都从这里读取，避免多处手写。

### 日常重新生成

```powershell
# 方式一：CMake 目标
cmake -S . -B build -DRRC_CODEC_REGENERATE=ON
cmake --build build --target rrc_codec_regenerate

# 方式二：直接调用生成器（开发期，需要 Python 3.8+；--input 支持版本通配）
cd tools/rrcgen
python -m rrcgen --input ../../data/38.331_v*.asn `
    --check-input-sha256 ../../data/asn-input.sha256 --repo-root ../..
python -m rrcgen --input ../../data/38.331_v*.asn ... --check  # CI：校验生成物一致
```

仅当消息集本身变化、需要重新确认基线时，才使用：

```powershell
python -m rrcgen --input ../../data/38.331_v*.asn ... --update-baseline
```

### ASN.1 迁移（一键）

换 38.331 版本不只是重新生成：还要更新输入文件、SHA-256、ASN.1 版本、消息集
基线，并判断哪些生成物/手写代码受影响。`tools/update_asn.py` 把这些步骤串成一条
命令，并在最后输出一份迁移报告：

```powershell
# 要求 git 工作区干净；版本号可从文件名推断
python tools/update_asn.py path/to/38.331_v19.0.0.asn

# 同时升库语义版本（否则保持当前版本）
python tools/update_asn.py new.asn --library-version 3.0.0
```

脚本自动完成：

1. 新输入落盘为 `data/38.331_v<版本>.asn`，删除旧 38.331 输入；
2. 更新 `data/asn-input.sha256`、`data/asn-version.txt`（及可选的 `data/version.txt`）；
3. 以 `--update-baseline` 重新生成全部生成物；
4. 比对新旧 `generated/rrc_manifest.json`，写出 `generated/MIGRATION_NOTES.md`；
5. 运行一次 `--check` 并把结果写入报告。

`MIGRATION_NOTES.md` 会列出：消息集增删/序号漂移、消息结构（`SchemaHash`）/
信道/包装位变化、统计变化、生成物变更清单、自动检索到的受影响手写文件，以及
仍需人工处理的 checklist（版本号、CHANGELOG、MIB 黄金向量、文档统计等）和回滚
命令。生成失败时脚本自动回滚 `data/`。

迁移完成后按报告第 6 节人工 review，再跑全量 CI 并提交生成物与数据文件。

## 安装后消费

```cmake
find_package(RrcCodec 2 CONFIG REQUIRED)
target_link_libraries(app PRIVATE RrcCodec::rrc_codec)
```

```sh
cc app.c $(pkg-config --cflags --libs rrc_codec) -o app
```

## 生成物与索引

- `generated/rrc_message_index.md` — 53 个消息的 MessageKind/结构体/信道/包装位索引
- `generated/rrc_stats.json` — 生成统计
- `generated/rrc_manifest.json` — 机器可读清单（版本/消息/包装位/统计）

## 目录

```
include/rrc_codec/   公共头（手写 4 个 + 生成 3 类：版本/类型/消息；类型头按 IDE 友好大小分块）
src/core/            PER 运行时、错误、C ABI、分派（手写）
src/generated/       生成的编解码函数（32 个分块 + 内部头）
tools/rrcgen/        ASN.1 前端 + C 发射器（开发期，不安装）
tests/               单元 / 黄金向量 / 消息级 / 安装消费
examples/            C99 与 C++17 示例
data/                ASN.1 输入与 SHA-256
ci/                  CI 脚本与基线
```

## 许可

MIT License，见 [`LICENSE`](LICENSE)。

