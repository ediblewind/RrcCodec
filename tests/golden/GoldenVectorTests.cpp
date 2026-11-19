/**
 * @file GoldenVectorTests.cpp
 * @brief 黄金比特向量（方案 9.1）：BCCH-BCH / MIB。
 *
 * 手工复算（MSB-first、无对齐）：
 *   0 | 101010 | 0 | 0111 | 0 | 0011 0101 | 1 | 0 | 0
 *   = 010101000111000110101100 (24 bit) = 0x54 0x71 0xAC
 */
#include <rrc_codec/rrc_codec.h>

#include <cstdio>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <string>

namespace {

int g_failures = 0;

void Check(bool condition, const char* what, int line) {
  if (!condition) {
    std::fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, line, what);
    ++g_failures;
  }
}

#define CHECK(condition) Check((condition), #condition, __LINE__)

std::string ToHex(const std::uint8_t* data, std::size_t size) {
  static const char* kDigits = "0123456789abcdef";
  std::string result;
  result.reserve(size * 2);
  for (std::size_t i = 0; i < size; ++i) {
    result.push_back(kDigits[data[i] >> 4]);
    result.push_back(kDigits[data[i] & 0x0F]);
  }
  return result;
}

bool BuildGoldenMib(MIB& mib) {
  std::memset(&mib, 0, sizeof(mib));
  static std::uint8_t sfn = 0xA8; /* 前 6 bit = 101010 */
  mib.systemFrameNumber.bytes = &sfn;
  mib.systemFrameNumber.bitLength = 6;
  mib.subCarrierSpacingCommon = MIB_SubCarrierSpacingCommon_scs15or60;
  mib.ssb_SubcarrierOffset = 7;
  mib.dmrs_TypeA_Position = MIB_Dmrs_TypeA_Position_pos2;
  mib.pdcch_ConfigSIB1.controlResourceSetZero = 3;
  mib.pdcch_ConfigSIB1.searchSpaceZero = 5;
  mib.cellBarred = MIB_CellBarred_notBarred;
  mib.intraFreqReselection = MIB_IntraFreqReselection_allowed;
  static std::uint8_t spare = 0;
  mib.spare.bytes = &spare;
  mib.spare.bitLength = 1;
  return true;
}

void TestVersionAndNullSafety() {
  /* 期望值来自生成头的版本宏（单一来源：data/version.txt + data/asn-version.txt）。 */
  CHECK(std::strcmp(GetVersionString(), RRC_CODEC_VERSION_STRING) == 0);
  CHECK(std::strcmp(GetAsn1VersionString(), RRC_CODEC_ASN1_VERSION_STRING) == 0);
  FreeEncodedMessage(nullptr); /* 空操作 */
  FreeMessage(MessageKind_MIB, nullptr);
  SetErrorHandler(nullptr, nullptr); /* 接口预留：只保存，不触发 */
  SetErrorHandler(nullptr, nullptr);
}

void TestGoldenEncode() {
  MIB mib;
  CHECK(BuildGoldenMib(mib));
  EncodedMessage encoded = {nullptr, 0, 0};
  const ErrorCode rc = EncodeMessage(MessageKind_MIB, &mib, &encoded);
  CHECK(rc == ErrorCode_Ok);
  CHECK(encoded.data != nullptr);
  CHECK(encoded.bitLength == 24);
  CHECK(encoded.size == 3);
  const std::string actual = ToHex(encoded.data, encoded.size);
  if (actual != "5471ac") {
    std::fprintf(stderr, "golden encoded = %s (bits=%zu)\n", actual.c_str(),
                 encoded.bitLength);
  }
  CHECK(actual == "5471ac");
  FreeEncodedMessage(&encoded);
  CHECK(encoded.data == nullptr && encoded.size == 0 && encoded.bitLength == 0);
}

void TestGoldenDecodeRoundTrip() {
  MIB mib;
  BuildGoldenMib(mib);
  EncodedMessage encoded = {nullptr, 0, 0};
  CHECK(EncodeMessage(MessageKind_MIB, &mib, &encoded) == ErrorCode_Ok);

  MIB decoded;
  std::memset(&decoded, 0, sizeof(decoded));
  const ErrorCode rc = DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB,
                                     encoded.data, encoded.size, &decoded);
  CHECK(rc == ErrorCode_Ok);
  CHECK(decoded.systemFrameNumber.bitLength == 6);
  CHECK(decoded.systemFrameNumber.bytes != nullptr);
  CHECK(decoded.ssb_SubcarrierOffset == 7);
  CHECK(decoded.pdcch_ConfigSIB1.controlResourceSetZero == 3);
  CHECK(decoded.pdcch_ConfigSIB1.searchSpaceZero == 5);
  CHECK(decoded.cellBarred == MIB_CellBarred_notBarred);

  EncodedMessage reencoded = {nullptr, 0, 0};
  CHECK(EncodeMessage(MessageKind_MIB, &decoded, &reencoded) == ErrorCode_Ok);
  CHECK(ToHex(reencoded.data, reencoded.size) ==
        ToHex(encoded.data, encoded.size));
  CHECK(reencoded.bitLength == encoded.bitLength);

  FreeMessage(MessageKind_MIB, &decoded);
  FreeEncodedMessage(&reencoded);
  FreeEncodedMessage(&encoded);
}

void TestTrailingBitsIgnored() {
  MIB mib;
  BuildGoldenMib(mib);
  EncodedMessage encoded = {nullptr, 0, 0};
  CHECK(EncodeMessage(MessageKind_MIB, &mib, &encoded) == ErrorCode_Ok);

  std::uint8_t buffer[4];
  std::memcpy(buffer, encoded.data, encoded.size);
  buffer[encoded.size] = 0xFF;
  MIB decoded;
  std::memset(&decoded, 0, sizeof(decoded));
  CHECK(DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, buffer,
                      encoded.size + 1, &decoded) == ErrorCode_Ok);
  FreeMessage(MessageKind_MIB, &decoded);
  FreeEncodedMessage(&encoded);
}

void TestChannelMismatch() {
  MIB mib;
  BuildGoldenMib(mib);
  EncodedMessage encoded = {nullptr, 0, 0};
  CHECK(EncodeMessage(MessageKind_MIB, &mib, &encoded) == ErrorCode_Ok);

  MIB decoded;
  CHECK(DecodeMessage(ChannelType_DL_DCCH, MessageKind_MIB, encoded.data,
                      encoded.size, &decoded) == ErrorCode_ChannelMismatch);
  ErrorInfo info;
  CHECK(GetLastErrorInfo(&info) == ErrorCode_ChannelMismatch);
  CHECK(info.channel == ChannelType_DL_DCCH);
  CHECK(info.fieldPath == nullptr && info.message == nullptr);
  FreeEncodedMessage(&encoded);
}

void TestInvalidArguments() {
  MIB mib;
  BuildGoldenMib(mib);
  EncodedMessage encoded = {nullptr, 0, 0};
  CHECK(EncodeMessage(MessageKind_MIB, nullptr, &encoded) ==
        ErrorCode_InvalidArgument);
  CHECK(EncodeMessage(static_cast<MessageKind>(999), &mib, &encoded) ==
        ErrorCode_InvalidArgument);
  CHECK(EncodeMessage(MessageKind_MIB, &mib, nullptr) ==
        ErrorCode_InvalidArgument);
  CHECK(DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, nullptr, 3,
                      &mib) == ErrorCode_InvalidArgument);
  CHECK(DecodeMessage(static_cast<ChannelType>(0), MessageKind_MIB,
                      encoded.data, encoded.size, &mib) ==
        ErrorCode_UnsupportedChannel);
}

void TestTruncatedInput() {
  MIB mib;
  BuildGoldenMib(mib);
  EncodedMessage encoded = {nullptr, 0, 0};
  CHECK(EncodeMessage(MessageKind_MIB, &mib, &encoded) == ErrorCode_Ok);
  MIB decoded;
  std::memset(&decoded, 0, sizeof(decoded));
  CHECK(DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, encoded.data,
                      encoded.size - 1, &decoded) == ErrorCode_TruncatedInput);
  FreeEncodedMessage(&encoded);
}

}  // namespace

int main() {
  TestVersionAndNullSafety();
  TestGoldenEncode();
  TestGoldenDecodeRoundTrip();
  TestTrailingBitsIgnored();
  TestChannelMismatch();
  TestInvalidArguments();
  TestTruncatedInput();
  if (g_failures == 0) {
    std::printf("golden: all tests passed\n");
    return 0;
  }
  std::fprintf(stderr, "golden: %d failure(s)\n", g_failures);
  return 1;
}
