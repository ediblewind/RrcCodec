# RrcCodec

RrcCodec 是 3GPP TS 38.331（`NR-RRC-Definitions`，v18.10.0）RRC 消息的 UPER
编解码库，提供纯 C99 ABI。调用方按消息类型填写普通 C 结构体，即可完成
“结构体 → UPER 比特流”编码与“比特流 → 结构体”解码；覆盖 10 个 Uu 口信道入口、
53 个实际消息与全部 IE，`OCTET STRING (CONTAINING Y)` 自动解析为内层结构体指针，
动态内存由库统一释放。库仅导出 8 个 C 函数，C 与 C++ 消费方均不需要感知
C++ 运行时。

主要特性：

- **一种表示**：53 个实际消息各对应一个顶层 C 结构体；其余 IE 直接映射为
  C 结构体/枚举；不生成信道容器结构体；`OCTET STRING (CONTAINING Y)` 自动解析为
  内层结构体指针。
- **一套接口**：纯 C99 ABI，公开函数 8 个：
  `EncodeMessage` / `FreeEncodedMessage` / `DecodeMessage` / `FreeMessage` /
  `GetLastErrorInfo` / `SetErrorHandler` / `GetVersionString` / `GetAsn1VersionString`。

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
cmake --install build --prefix install
```

要求：CMake ≥ 3.20、C++17 编译器（GCC/Clang/MSVC/MinGW）。库本身用 C++17 构建，
公共头为 C99；C 消费方无需 C++ 源文件。

## 安装后消费

```cmake
find_package(RrcCodec 2 CONFIG REQUIRED)
target_link_libraries(app PRIVATE RrcCodec::rrc_codec)
```

```sh
cc app.c $(pkg-config --cflags --libs rrc_codec) -o app
```

## 许可

MIT License，见 [`LICENSE`](LICENSE)。

