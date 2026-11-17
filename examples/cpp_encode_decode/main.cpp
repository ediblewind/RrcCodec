/* ============================================================================
 * examples/cpp_encode_decode/main.cpp — C++17 示例：编码并解码 MIB（BCCH-BCH）
 *
 * 与 examples/c_encode_decode/main.c 功能完全相同：
 *   C++ 直接包含同一套 C ABI 头（rrc_codec.h），无需单独的 C++ API。
 *   结构体是普通聚合类型，可直接用 C++ 初始化/赋值。
 *
 * 构建：cmake --build build --target rrc_codec_example_cpp
 * ========================================================================== */
#include <rrc_codec/rrc_codec.h>

#include <cstdint>
#include <cstdio>
#include <cstring>

namespace {

void PrintHex(const EncodedMessage& encoded) {
  std::printf("encoded: %zu bytes, %zu bits\n", encoded.size, encoded.bitLength);
  std::printf("hex    : ");
  for (std::size_t i = 0; i < encoded.size; ++i) {
    std::printf("%02x", static_cast<unsigned>(encoded.data[i]));
  }
  std::printf("\n");
}

}  // namespace

int main() {
  // 1) 构造消息：顶层结构体就是 MIB 本身，没有信道容器层。
  static std::uint8_t sfn = 0xA8;  // systemFrameNumber: 前 6 bit = 101010
  static std::uint8_t spare = 0x00;

  MIB mib{};
  mib.systemFrameNumber.bytes = &sfn;
  mib.systemFrameNumber.bitLength = 6;

  mib.subCarrierSpacingCommon = MIB_SubCarrierSpacingCommon_scs15or60;
  mib.ssb_SubcarrierOffset = 7;
  mib.dmrs_TypeA_Position = MIB_Dmrs_TypeA_Position_pos2;
  mib.pdcch_ConfigSIB1.controlResourceSetZero = 3;
  mib.pdcch_ConfigSIB1.searchSpaceZero = 5;
  mib.cellBarred = MIB_CellBarred_notBarred;
  mib.intraFreqReselection = MIB_IntraFreqReselection_allowed;

  mib.spare.bytes = &spare;
  mib.spare.bitLength = 1;

  // 2) 编码：显式传消息类型；输出缓冲由库 malloc，需 FreeEncodedMessage。
  EncodedMessage encoded{};
  ErrorCode rc = EncodeMessage(MessageKind_MIB, &mib, &encoded);
  if (rc != ErrorCode_Ok) {
    ErrorInfo info{};
    (void)GetLastErrorInfo(&info);
    std::fprintf(stderr, "encode failed: %d, bit=%llu\n",
                 static_cast<int>(info.code),
                 static_cast<unsigned long long>(info.bitOffset));
    FreeEncodedMessage(&encoded);
    return 1;
  }
  PrintHex(encoded);

  // 3) 解码：channel 与 MessageKind 必须一致，否则返回 ChannelMismatch。
  MIB decoded{};
  rc = DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, encoded.data,
                     encoded.size, &decoded);
  if (rc != ErrorCode_Ok) {
    ErrorInfo info{};
    (void)GetLastErrorInfo(&info);
    std::fprintf(stderr, "decode failed: %d, bit=%llu\n",
                 static_cast<int>(info.code),
                 static_cast<unsigned long long>(info.bitOffset));
    FreeEncodedMessage(&encoded);
    return 1;
  }

  std::printf("decoded: sfn bitLength = %u, cellBarred = %d\n",
              static_cast<unsigned>(decoded.systemFrameNumber.bitLength),
              static_cast<int>(decoded.cellBarred));

  // 4) 释放顺序：先 FreeMessage（解码输出），再 FreeEncodedMessage（编码输出）。
  FreeMessage(MessageKind_MIB, &decoded);
  FreeEncodedMessage(&encoded);
  return 0;
}
