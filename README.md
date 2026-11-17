# RrcCodec

3GPP TS 38.331 v18.10.0（`NR-RRC-Definitions`）RRC 消息 UPER 编解码库，
按 `docs/RRC编解码库简化方案.md`（v0.5）实现 v2：

- **一种表示**：53 个实际消息各对应一个顶层 C 结构体；其余 IE 直接映射为
  C 结构体/枚举；不生成信道容器结构体；`OCTET STRING (CONTAINING Y)` 自动解析为
  内层结构体指针。
- **一套接口**：纯 C99 ABI，公开函数 8 个：
  `EncodeMessage` / `FreeEncodedMessage` / `DecodeMessage` / `FreeMessage` /
  `GetLastErrorInfo` / `SetErrorHandler` / `GetVersionString` / `GetAsn1VersionString`。
- **一条生成链路**：ASN.1 → C 类型头 + 专用编解码函数 → 手写 PER 原语。

## 状态

| 项 | 结果 |
|---|---|
| 53 个消息 round-trip | 53/53 通过 |
| MIB/BCCH-BCH 黄金向量 `5471ac` | 通过 |
| CONTAINING 自动解析 + 深度上限 | 通过 |
| 安装消费（find_package / pkg-config / add_subdirectory） | 通过（本机 pkg-config 缺失时自动跳过该项） |
| 公共头 C99 / C++17 | 通过 |
| 生成物可复现 | 通过 |
| 全量构建（8 并发，Release，含测试/示例） | ≈ 9 s |
| 静态库 / 共享库（Release，MinGW） | 8.34 MiB / 5.24 MiB |

详见 `docs/测试报告.md`。

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

## 重新生成

```powershell
cmake -S . -B build -DRRC_CODEC_REGENERATE=ON
cmake --build build --target rrc_codec_regenerate
# 或（开发期，需要 Python 3.8+）
cd tools/rrcgen
python -m rrcgen --input ../../data/38.331_v18.10.0.asn `
    --check-input-sha256 ../../data/asn-input.sha256 --repo-root ../..
python -m rrcgen ... --check     # CI：校验生成物与仓库一致
```

## 安装后消费

```cmake
find_package(RrcCodec 2 CONFIG REQUIRED)
target_link_libraries(app PRIVATE RrcCodec::rrc_codec)
```

```sh
cc app.c $(pkg-config --cflags --libs rrc_codec) -o app
```

## 文档

- `docs/RRC编解码库简化方案.md` — 方案（v0.5）
- `docs/接口规范.md` — 公共 API 规范
- `docs/实现契约.md` — 生成器 / 手写核心 / 测试的接口契约
- `docs/实现决策记录.md` — 实现决策与方案澄清（ADR）
- `docs/测试报告.md` — 测试与验收记录
- `generated/rrc_message_index.md` — 53 个消息的 MessageKind/结构体/信道/包装位索引
- `generated/rrc_stats.json` — 生成统计

## 目录

```
include/rrc_codec/   公共头（手写 5 个 + 生成 2 个）
src/core/            PER 运行时、错误、C ABI、分派（手写）
src/generated/       生成的编解码函数（32 个分块 + 内部头）
tools/rrcgen/        ASN.1 前端 + C 发射器（开发期，不安装）
tests/               单元 / 黄金向量 / 消息级 / 安装消费
examples/            C99 与 C++17 示例
data/                ASN.1 输入与 SHA-256
ci/                  CI 脚本与基线
```

## 许可

见 `LICENSE`。

