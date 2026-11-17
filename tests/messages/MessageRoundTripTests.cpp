/**
 * @file MessageRoundTripTests.cpp
 * @brief 53 个消息的“构造 → 编码 → 解码 → 再编码”比特一致性测试（方案 9.1）。
 *
 * 样例由生成器产出（tests/generated/message_samples.cpp）：必填字段填入约束
 * 范围内的最小值，必填 CONTAINING 指针递归构造内层对象，OPTIONAL 留空
 * （depth==0 的 optional CONTAINING 填一个样例以覆盖开放类型）。
 */
#include "message_samples.h"

#include <rrc_codec/rrc_codec.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <new>
#include <string>
#include <vector>

namespace {

int g_failures = 0;

void Check(bool condition, const char* what, const char* kind, int line) {
  if (!condition) {
    std::fprintf(stderr, "FAIL %s:%d [%s]: %s\n", __FILE__, line, kind, what);
    ++g_failures;
  }
}

#define CHECK_KIND(condition, kind) Check((condition), #condition, (kind), __LINE__)

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

struct AlignedBuffer {
  void* data = nullptr;
  std::size_t alignment = 0;

  AlignedBuffer(std::size_t size, std::size_t align)
      : data(size == 0 ? nullptr : ::operator new(size, std::align_val_t(align))),
        alignment(align) {
    if (data != nullptr) {
      std::memset(data, 0, size);
    }
  }
  ~AlignedBuffer() {
    if (data != nullptr) {
      ::operator delete(data, std::align_val_t(alignment));
    }
  }
  AlignedBuffer(const AlignedBuffer&) = delete;
  AlignedBuffer& operator=(const AlignedBuffer&) = delete;
};

const char* KindName(MessageKind kind) {
  switch (kind) {
    case MessageKind_MIB: return "MIB";
    case MessageKind_SystemInformation: return "SystemInformation";
    case MessageKind_SIB1: return "SIB1";
    case MessageKind_RRCReject: return "RRCReject";
    case MessageKind_RRCSetup: return "RRCSetup";
    case MessageKind_RRCReconfiguration: return "RRCReconfiguration";
    case MessageKind_RRCResume: return "RRCResume";
    case MessageKind_RRCRelease: return "RRCRelease";
    case MessageKind_RRCReestablishment: return "RRCReestablishment";
    case MessageKind_SecurityModeCommand: return "SecurityModeCommand";
    case MessageKind_DLInformationTransfer: return "DLInformationTransfer";
    case MessageKind_UECapabilityEnquiry: return "UECapabilityEnquiry";
    case MessageKind_CounterCheck: return "CounterCheck";
    case MessageKind_MobilityFromNRCommand: return "MobilityFromNRCommand";
    case MessageKind_DLDedicatedMessageSegment_r16: return "DLDedicatedMessageSegment-r16";
    case MessageKind_UEInformationRequest_r16: return "UEInformationRequest-r16";
    case MessageKind_DLInformationTransferMRDC_r16: return "DLInformationTransferMRDC-r16";
    case MessageKind_LoggedMeasurementConfiguration_r16: return "LoggedMeasurementConfiguration-r16";
    case MessageKind_MBSBroadcastConfiguration_r17: return "MBSBroadcastConfiguration-r17";
    case MessageKind_MBSMulticastConfiguration_r18: return "MBSMulticastConfiguration-r18";
    case MessageKind_Paging: return "Paging";
    case MessageKind_RRCSetupRequest: return "RRCSetupRequest";
    case MessageKind_RRCResumeRequest: return "RRCResumeRequest";
    case MessageKind_RRCReestablishmentRequest: return "RRCReestablishmentRequest";
    case MessageKind_RRCSystemInfoRequest: return "RRCSystemInfoRequest";
    case MessageKind_RRCResumeRequest1: return "RRCResumeRequest1";
    case MessageKind_MeasurementReport: return "MeasurementReport";
    case MessageKind_RRCReconfigurationComplete: return "RRCReconfigurationComplete";
    case MessageKind_RRCSetupComplete: return "RRCSetupComplete";
    case MessageKind_RRCReestablishmentComplete: return "RRCReestablishmentComplete";
    case MessageKind_RRCResumeComplete: return "RRCResumeComplete";
    case MessageKind_SecurityModeComplete: return "SecurityModeComplete";
    case MessageKind_SecurityModeFailure: return "SecurityModeFailure";
    case MessageKind_ULInformationTransfer: return "ULInformationTransfer";
    case MessageKind_LocationMeasurementIndication: return "LocationMeasurementIndication";
    case MessageKind_UECapabilityInformation: return "UECapabilityInformation";
    case MessageKind_CounterCheckResponse: return "CounterCheckResponse";
    case MessageKind_UEAssistanceInformation: return "UEAssistanceInformation";
    case MessageKind_FailureInformation: return "FailureInformation";
    case MessageKind_ULInformationTransferMRDC: return "ULInformationTransferMRDC";
    case MessageKind_SCGFailureInformation: return "SCGFailureInformation";
    case MessageKind_SCGFailureInformationEUTRA: return "SCGFailureInformationEUTRA";
    case MessageKind_ULDedicatedMessageSegment_r16: return "ULDedicatedMessageSegment-r16";
    case MessageKind_DedicatedSIBRequest_r16: return "DedicatedSIBRequest-r16";
    case MessageKind_MCGFailureInformation_r16: return "MCGFailureInformation-r16";
    case MessageKind_UEInformationResponse_r16: return "UEInformationResponse-r16";
    case MessageKind_SidelinkUEInformationNR_r16: return "SidelinkUEInformationNR-r16";
    case MessageKind_ULInformationTransferIRAT_r16: return "ULInformationTransferIRAT-r16";
    case MessageKind_IABOtherInformation_r16: return "IABOtherInformation-r16";
    case MessageKind_MBSInterestIndication_r17: return "MBSInterestIndication-r17";
    case MessageKind_UEPositioningAssistanceInfo_r17: return "UEPositioningAssistanceInfo-r17";
    case MessageKind_MeasurementReportAppLayer_r17: return "MeasurementReportAppLayer-r17";
    case MessageKind_IndirectPathFailureInformation_r18: return "IndirectPathFailureInformation-r18";
    default: return "?";
  }
}

void TestAllMessagesRoundTrip() {
  for (int value = 1; value <= 53; ++value) {
    const MessageKind kind = static_cast<MessageKind>(value);
    const char* name = KindName(kind);
    const std::size_t size = rrc::v1810::test::MessageStructSize(kind);
    const std::size_t alignment =
        rrc::v1810::test::MessageStructAlignment(kind);
    CHECK_KIND(size > 0 && alignment > 0, name);

    AlignedBuffer sample(size, alignment);
    CHECK_KIND(rrc::v1810::test::BuildSampleByKind(kind, sample.data), name);

    EncodedMessage encoded = {nullptr, 0, 0};
    ErrorCode rc = EncodeMessage(kind, sample.data, &encoded);
    if (rc != ErrorCode_Ok) {
      ErrorInfo info;
      GetLastErrorInfo(&info);
      std::fprintf(stderr,
                   "  %s: encode failed rc=%d bitOffset=%llu\n", name,
                   static_cast<int>(rc),
                   static_cast<unsigned long long>(info.bitOffset));
    }
    CHECK_KIND(rc == ErrorCode_Ok, name);
    if (rc != ErrorCode_Ok) {
      continue;
    }
    CHECK_KIND(encoded.data != nullptr && encoded.size > 0, name);

    AlignedBuffer decoded(size, alignment);
    const ChannelType channel = ChannelOfMessageKind(kind);
    CHECK_KIND(channel != static_cast<ChannelType>(0), name);
    rc = DecodeMessage(channel, kind, encoded.data, encoded.size,
                       decoded.data);
    CHECK_KIND(rc == ErrorCode_Ok, name);
    if (rc != ErrorCode_Ok) {
      FreeEncodedMessage(&encoded);
      continue;
    }

    EncodedMessage reencoded = {nullptr, 0, 0};
    rc = EncodeMessage(kind, decoded.data, &reencoded);
    CHECK_KIND(rc == ErrorCode_Ok, name);
    if (rc == ErrorCode_Ok) {
      CHECK_KIND(reencoded.size == encoded.size, name);
      CHECK_KIND(reencoded.bitLength == encoded.bitLength, name);
      const bool same = reencoded.size == encoded.size &&
                        std::memcmp(reencoded.data, encoded.data,
                                    encoded.size) == 0;
      if (!same) {
        std::fprintf(stderr,
                     "  %s: encoded=%s reencoded=%s (bits %zu/%zu)\n", name,
                     ToHex(encoded.data, encoded.size).c_str(),
                     ToHex(reencoded.data, reencoded.size).c_str(),
                     encoded.bitLength, reencoded.bitLength);
      }
      CHECK_KIND(same, name);
    }

    FreeEncodedMessage(&reencoded);
    FreeMessage(kind, decoded.data);
    FreeEncodedMessage(&encoded);
    rrc::v1810::test::FreeSampleByKind(kind, sample.data);
  }
}

void TestChannelMismatch() {
  /* 53 个消息的信道映射必须自洽：取一个非所属信道做负向测试。 */
  const std::size_t size = rrc::v1810::test::MessageStructSize(MessageKind_MIB);
  const std::size_t alignment =
      rrc::v1810::test::MessageStructAlignment(MessageKind_MIB);
  AlignedBuffer sample(size, alignment);
  rrc::v1810::test::BuildSampleByKind(MessageKind_MIB, sample.data);
  EncodedMessage encoded = {nullptr, 0, 0};
  CHECK_KIND(EncodeMessage(MessageKind_MIB, sample.data, &encoded) ==
                 ErrorCode_Ok,
             "MIB");
  AlignedBuffer decoded(size, alignment);
  CHECK_KIND(DecodeMessage(ChannelType_DL_DCCH, MessageKind_MIB, encoded.data,
                           encoded.size, decoded.data) ==
                 ErrorCode_ChannelMismatch,
             "MIB");
  FreeEncodedMessage(&encoded);
  rrc::v1810::test::FreeSampleByKind(MessageKind_MIB, sample.data);
}

void TestUnsupportedSpareBranch() {
  /* BCCH-BCH 包装：message CHOICE 的 bit1 = messageClassExtension（占位分支）。 */
  const std::uint8_t bits = 0x80;
  std::uint8_t buffer[1] = {bits};
  const std::size_t size = rrc::v1810::test::MessageStructSize(MessageKind_MIB);
  const std::size_t alignment =
      rrc::v1810::test::MessageStructAlignment(MessageKind_MIB);
  AlignedBuffer decoded(size, alignment);
  CHECK_KIND(DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, buffer, 1,
                           decoded.data) == ErrorCode_UnsupportedMessage,
             "MIB");
}

void TestTruncatedMessage() {
  const std::size_t size =
      rrc::v1810::test::MessageStructSize(MessageKind_RRCReconfiguration);
  const std::size_t alignment =
      rrc::v1810::test::MessageStructAlignment(MessageKind_RRCReconfiguration);
  AlignedBuffer sample(size, alignment);
  rrc::v1810::test::BuildSampleByKind(MessageKind_RRCReconfiguration,
                                      sample.data);
  EncodedMessage encoded = {nullptr, 0, 0};
  CHECK_KIND(EncodeMessage(MessageKind_RRCReconfiguration, sample.data,
                           &encoded) == ErrorCode_Ok,
             "RRCReconfiguration");
  AlignedBuffer decoded(size, alignment);
  if (encoded.size > 1) {
    CHECK_KIND(DecodeMessage(ChannelType_DL_DCCH, MessageKind_RRCReconfiguration,
                             encoded.data, encoded.size / 2, decoded.data) !=
                   ErrorCode_Ok,
               "RRCReconfiguration");
  }
  FreeEncodedMessage(&encoded);
  rrc::v1810::test::FreeSampleByKind(MessageKind_RRCReconfiguration,
                                     sample.data);
}

void TestContainingRoundTrip() {
  /* RRCReconfiguration.secondaryCellGroup 为 CONTAINING CellGroupConfig：
     解码后应直接得到可读的 CellGroupConfig 指针，重编码比特一致。 */
  const std::size_t size =
      rrc::v1810::test::MessageStructSize(MessageKind_RRCReconfiguration);
  const std::size_t alignment =
      rrc::v1810::test::MessageStructAlignment(MessageKind_RRCReconfiguration);
  AlignedBuffer sample(size, alignment);
  auto* message = static_cast<RRCReconfiguration*>(sample.data);
  rrc::v1810::test::BuildSample_RRCReconfiguration(*message, 0);
  CHECK_KIND(message->criticalExtensions.tag ==
                 RRCReconfiguration_CriticalExtensions_Tag_rrcReconfiguration,
             "RRCReconfiguration");
  RRCReconfiguration_IEs& ies =
      message->criticalExtensions.u.rrcReconfiguration;
  /* 手动构造 CONTAINING 内层对象，验证解码后自动解析出 CellGroupConfig。 */
  ies.secondaryCellGroup =
      static_cast<CellGroupConfig*>(std::malloc(sizeof(CellGroupConfig)));
  CHECK_KIND(ies.secondaryCellGroup != nullptr, "secondaryCellGroup");
  if (ies.secondaryCellGroup == nullptr) {
    return;
  }
  rrc::v1810::test::BuildSample_CellGroupConfig(*ies.secondaryCellGroup, 0);
  ies.secondaryCellGroup->cellGroupId = 1;

  EncodedMessage encoded = {nullptr, 0, 0};
  CHECK_KIND(EncodeMessage(MessageKind_RRCReconfiguration, message, &encoded) ==
                 ErrorCode_Ok,
             "RRCReconfiguration");
  AlignedBuffer decoded(size, alignment);
  CHECK_KIND(DecodeMessage(ChannelType_DL_DCCH, MessageKind_RRCReconfiguration,
                           encoded.data, encoded.size, decoded.data) ==
                 ErrorCode_Ok,
             "RRCReconfiguration");
  auto* decoded_message = static_cast<RRCReconfiguration*>(decoded.data);
  CHECK_KIND(decoded_message->criticalExtensions.tag ==
                 RRCReconfiguration_CriticalExtensions_Tag_rrcReconfiguration,
             "RRCReconfiguration");
  CHECK_KIND(decoded_message->criticalExtensions.u.rrcReconfiguration
                     .secondaryCellGroup != nullptr,
             "secondaryCellGroup");
  if (decoded_message->criticalExtensions.u.rrcReconfiguration
          .secondaryCellGroup != nullptr) {
    CHECK_KIND(decoded_message->criticalExtensions.u.rrcReconfiguration
                       .secondaryCellGroup->cellGroupId == 1,
               "cellGroupId");
  }

  EncodedMessage reencoded = {nullptr, 0, 0};
  CHECK_KIND(EncodeMessage(MessageKind_RRCReconfiguration, decoded_message,
                           &reencoded) == ErrorCode_Ok,
             "RRCReconfiguration");
  CHECK_KIND(reencoded.size == encoded.size &&
                 std::memcmp(reencoded.data, encoded.data, encoded.size) == 0,
             "RRCReconfiguration");

  FreeEncodedMessage(&reencoded);
  FreeMessage(MessageKind_RRCReconfiguration, decoded.data);
  FreeEncodedMessage(&encoded);
  rrc::v1810::test::FreeSampleByKind(MessageKind_RRCReconfiguration,
                                     sample.data);
}

}  // namespace

int main() {
  TestAllMessagesRoundTrip();
  TestChannelMismatch();
  TestUnsupportedSpareBranch();
  TestTruncatedMessage();
  TestContainingRoundTrip();
  if (g_failures == 0) {
    std::printf("messages: 53 round-trip + channel/containing tests passed\n");
    return 0;
  }
  std::fprintf(stderr, "messages: %d failure(s)\n", g_failures);
  return 1;
}
