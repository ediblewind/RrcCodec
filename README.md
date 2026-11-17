# RrcCodec

3GPP TS 38.331 v18.10.0（`NR-RRC-Definitions`）RRC 消息 UPER 编解码库，
按 `docs/RRC编解码库简化方案.md`（v0.5）实现：

- **一种表示**：53 个实际消息各对应一个顶层 C 结构体；其余 IE 直接映射为 C 结构体/枚举；
  不生成信道容器结构体；`OCTET STRING (CONTAINING Y)` 自动解析为内层结构体指针。
- **一套接口**：纯 C99 ABI，公开函数 8 个：
  `EncodeMessage` / `FreeEncodedMessage` / `DecodeMessage` / `FreeMessage` /
  `GetLastErrorInfo` / `SetErrorHandler` / `GetVersionString` / `GetAsn1VersionString`。
- **一条生成链路**：ASN.1 → C 类型头 + 专用编解码函数 → 手写 PER 原语。

## 快速开始

```c
#include <rrc_codec/rrc_codec.h>

MIB mib = {0};
/* 填字段…… */
EncodedMessage encoded = {0};
ErrorCode rc = EncodeMessage(MessageKind_MIB, &mib, &encoded);
if (rc == ErrorCode_Ok) {
    MIB decoded = {0};
    rc = DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB,
                       encoded.data, encoded.size, &decoded);
    FreeMessage(MessageKind_MIB, &decoded);
}
FreeEncodedMessage(&encoded);
```

## 构建

```powershell
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build
ctest --test-dir build --output-on-failure
cmake --install build --prefix install
```

要求：CMake ≥ 3.20、C++17 编译器（GCC/Clang/MSVC/MinGW）。库本身用 C++17 构建，
公共头为 C99；C 消费方无需 C++ 源文件。

## 文档

- `docs/RRC编解码库简化方案.md` — 方案（v0.5）
- `docs/实现契约.md` — 生成器/核心/测试接口契约
- `docs/接口规范.md` — 公共 API 详细说明（待补）
- `docs/测试报告.md` — 验收记录（待补）

## 许可

见 `LICENSE`。
