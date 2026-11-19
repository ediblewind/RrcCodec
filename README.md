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

## 重新生成与 ASN.1 迁移

如果只需要使用本库，不需要关心本节。如果你需要修改或升级 ASN.1（例如裁剪不需要
的消息、增加私有扩展、升级 38.331 版本），则必须重新生成库的 C 类型与编解码代码。

### 为什么需要重新生成

库的协议定义只来自 ASN.1 文件（`data/38.331_v*.asn`）。所有结构体、枚举和编解码
函数都由生成器 `tools/rrcgen` 从该文件一次性生成，并**作为普通源码随仓库入库**：
这样使用库时只需 C/C++ 编译器，不需要 Python 或 ASN.1 工具链。

因此：

- 不修改 ASN.1，只是使用库或改自己的业务代码：**不需要重新生成**；
- 修改/替换了 `data/38.331_v*.asn`（升级版本、裁剪消息、加私有扩展等）：
  **必须重新生成**，否则生成物与协议输入不一致；
- 生成物必须与输入一致。`--check` 会逐字节校验，拦截“改了 ASN.1 却忘记重新
  生成”和“手改生成物”两类错误。

### 修改 ASN.1 之后需要做哪些事

前置条件：Python 3.8+。默认使用一键迁移工具完成重新生成；它会处理输入与元数据
更新、生成物重写和一致性校验，不需要手工改 `data/` 或单独运行生成器。

1. **运行一键迁移（默认方式）**

   ```powershell
   # 要求 git 工作区干净；版本号可从文件名推断
   python tools/update_asn.py path/to/38.331_v19.0.0.asn

   # 同时升库语义版本（否则保持当前版本）
   python tools/update_asn.py new.asn --library-version 3.0.0
   ```

   脚本会自动：
   - 把新输入落盘为 `data/38.331_v<版本>.asn`，并删除旧输入；
   - 更新 `data/asn-input.sha256`、`data/asn-version.txt`
     （及可选的 `data/version.txt`）；
   - 以 `--update-baseline` 重新生成全部生成物；
   - 运行一次 `--check`；
   - 输出迁移报告 `generated/MIGRATION_NOTES.md`。

   生成失败时脚本自动回滚 `data/`。

2. **按迁移报告处理受影响的手写代码/测试**（以编译错误和报告为准）：
   - `tests/golden/` 的 MIB 黄金向量与字段断言（MIB 变化时需用参考实现重算）；
   - `examples/`、`tests/install/` 的 MIB 构造与断言；
   - `tests/messages/` 中针对具体消息/字段的用例；
   - `tools/rrcgen/tests/` 的硬编码预期（包装路径、统计数字、命名示例）；
   - README/文档中的版本号、消息数与统计数字。

   迁移报告会列出：消息集增删/序号漂移、消息结构（`SchemaHash`）/信道/包装位
   变化、统计变化、生成物变更清单、自动检索到的受影响手写文件，以及仍需人工
   处理的 checklist 和回滚命令。

3. **决定并更新版本**
   - ASN.1 升级视为 ABI 破坏：决定 `data/version.txt` 是否升主版本；
   - 更新 `CHANGELOG.md` 与对外说明。
4. **全量验证**
   - 构建 + `ctest`，或直接运行 `ci/ci-windows.ps1` / `ci/ci-linux.sh`；
   - 确认 `--check` 通过。
5. **保存或提交**
   - 若在仓库内维护：生成物、`data/` 输入与元数据、手写修改一起提交；
   - 仅本地实验：至少保证生成物与 `data/` 输入一致，便于下次重建。

### 重新生成的影响与生成产物

生成器会整体重写以下文件，**请勿手工修改**：

| 位置 | 内容 |
|---|---|
| `include/rrc_codec/types/rrc_types*.h` | 全部结构体/枚举/别名与类型注释 |
| `include/rrc_codec/messages/rrc_messages.h` | `MessageKind`、消息数量宏、信道映射 |
| `include/rrc_codec/rrc_version.h` | 库版本 / ASN.1 版本宏（来自 `data/` 单一来源） |
| `src/generated/codec_internal.h`、`codec_partNNN.cpp` | 全部编解码函数 |
| `generated/` | `Sources.cmake`、统计、消息索引、`rrc_manifest.json`、dispatch 清单 |
| `tests/generated/` | 消息样例构造器与测试用消息清单 |

影响：

- 生成头文件变化会让包含它们的代码与测试重新编译；
- 公共结构体/枚举随 ASN.1 变化时属于 **ABI 变化**，使用本库的程序需要重新编译；
  ASN.1 版本升级按版本策略视为 ABI 破坏；
- 消息集/字段变化可能使自带示例、测试或黄金向量编译失败或断言失配，需要按上面
  第 2 步人工同步；
- 若 ASN.1 未变化，重新生成应得到逐字节相同的结果（幂等）。

手写部分（`src/core/`、手写公共头、CMake、手写测试/示例）不会被生成器修改。
版本号、ASN.1 版本、消息集基线等输入统一放在 `data/`（`version.txt`、
`asn-version.txt`、`message-set.txt`、`asn-input.sha256`），由一键迁移工具维护，
生成器与 CMake 都从这里读取，避免多处手写。

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

