/* ============================================================================
 * message_dispatch.inc — dispatch.cpp 的消息清单（X-macro，自动生成）
 *
 * 自动生成，请勿手工修改；生成源为 data/38.331 的 10 个 Uu 口包装层。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 *
 * 每个 X(suffix) 同时用作：
 *   - MessageKind 枚举名的一部分：MessageKind_##suffix
 *   - 生成结构体类型名：suffix（与 MessageKind 后缀完全一致）
 *   - 生成入口函数名的一部分：EncodeMessage_##suffix 等
 * ========================================================================== */
#define RRC_CODEC_MESSAGE_TYPE_LIST(X) \
  X(MIB) \
  X(SystemInformation) \
  X(SIB1) \
  X(RRCReject) \
  X(RRCSetup) \
  X(RRCReconfiguration) \
  X(RRCResume) \
  X(RRCRelease) \
  X(RRCReestablishment) \
  X(SecurityModeCommand) \
  X(DLInformationTransfer) \
  X(UECapabilityEnquiry) \
  X(CounterCheck) \
  X(MobilityFromNRCommand) \
  X(DLDedicatedMessageSegment_r16) \
  X(UEInformationRequest_r16) \
  X(DLInformationTransferMRDC_r16) \
  X(LoggedMeasurementConfiguration_r16) \
  X(MBSBroadcastConfiguration_r17) \
  X(MBSMulticastConfiguration_r18) \
  X(Paging) \
  X(RRCSetupRequest) \
  X(RRCResumeRequest) \
  X(RRCReestablishmentRequest) \
  X(RRCSystemInfoRequest) \
  X(RRCResumeRequest1) \
  X(MeasurementReport) \
  X(RRCReconfigurationComplete) \
  X(RRCSetupComplete) \
  X(RRCReestablishmentComplete) \
  X(RRCResumeComplete) \
  X(SecurityModeComplete) \
  X(SecurityModeFailure) \
  X(ULInformationTransfer) \
  X(LocationMeasurementIndication) \
  X(UECapabilityInformation) \
  X(CounterCheckResponse) \
  X(UEAssistanceInformation) \
  X(FailureInformation) \
  X(ULInformationTransferMRDC) \
  X(SCGFailureInformation) \
  X(SCGFailureInformationEUTRA) \
  X(ULDedicatedMessageSegment_r16) \
  X(DedicatedSIBRequest_r16) \
  X(MCGFailureInformation_r16) \
  X(UEInformationResponse_r16) \
  X(SidelinkUEInformationNR_r16) \
  X(ULInformationTransferIRAT_r16) \
  X(IABOtherInformation_r16) \
  X(MBSInterestIndication_r17) \
  X(UEPositioningAssistanceInfo_r17) \
  X(MeasurementReportAppLayer_r17) \
  X(IndirectPathFailureInformation_r18)
