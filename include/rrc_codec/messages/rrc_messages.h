/* ============================================================================
 * messages/rrc_messages.h — 实际 RRC 消息类型与信道映射（公开头）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_MESSAGES_RRC_MESSAGES_H
#define RRC_CODEC_MESSAGES_RRC_MESSAGES_H

#include "../rrc_channel.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 实际 RRC 消息类型（53 个；不含 spare/扩展占位分支）。
 *
 * 每个值对应一个顶层结构体（见 types/rrc_types.h）与一个所属信道。
 * 消息类型由 EncodeMessage / DecodeMessage / FreeMessage 的 kind 参数显式传入。
 *
 * @note 数值稳定：1–53，按方案附录 A 顺序分配；新增消息只追加。
 */
typedef enum MessageKind {
    MessageKind_MIB = 1, /**< MIB（ChannelType_BCCH_BCH）；结构体 MIB */
    MessageKind_SystemInformation = 2, /**< SystemInformation（ChannelType_BCCH_DL_SCH）；结构体 SystemInformation */
    MessageKind_SIB1 = 3, /**< SIB1（ChannelType_BCCH_DL_SCH）；结构体 SIB1 */
    MessageKind_RRCReject = 4, /**< RRCReject（ChannelType_DL_CCCH）；结构体 RRCReject */
    MessageKind_RRCSetup = 5, /**< RRCSetup（ChannelType_DL_CCCH）；结构体 RRCSetup */
    MessageKind_RRCReconfiguration = 6, /**< RRCReconfiguration（ChannelType_DL_DCCH）；结构体 RRCReconfiguration */
    MessageKind_RRCResume = 7, /**< RRCResume（ChannelType_DL_DCCH）；结构体 RRCResume */
    MessageKind_RRCRelease = 8, /**< RRCRelease（ChannelType_DL_DCCH）；结构体 RRCRelease */
    MessageKind_RRCReestablishment = 9, /**< RRCReestablishment（ChannelType_DL_DCCH）；结构体 RRCReestablishment */
    MessageKind_SecurityModeCommand = 10, /**< SecurityModeCommand（ChannelType_DL_DCCH）；结构体 SecurityModeCommand */
    MessageKind_DLInformationTransfer = 11, /**< DLInformationTransfer（ChannelType_DL_DCCH）；结构体 DLInformationTransfer */
    MessageKind_UECapabilityEnquiry = 12, /**< UECapabilityEnquiry（ChannelType_DL_DCCH）；结构体 UECapabilityEnquiry */
    MessageKind_CounterCheck = 13, /**< CounterCheck（ChannelType_DL_DCCH）；结构体 CounterCheck */
    MessageKind_MobilityFromNRCommand = 14, /**< MobilityFromNRCommand（ChannelType_DL_DCCH）；结构体 MobilityFromNRCommand */
    MessageKind_DLDedicatedMessageSegment_r16 = 15, /**< DLDedicatedMessageSegment-r16（ChannelType_DL_DCCH）；结构体 DLDedicatedMessageSegment_r16 */
    MessageKind_UEInformationRequest_r16 = 16, /**< UEInformationRequest-r16（ChannelType_DL_DCCH）；结构体 UEInformationRequest_r16 */
    MessageKind_DLInformationTransferMRDC_r16 = 17, /**< DLInformationTransferMRDC-r16（ChannelType_DL_DCCH）；结构体 DLInformationTransferMRDC_r16 */
    MessageKind_LoggedMeasurementConfiguration_r16 = 18, /**< LoggedMeasurementConfiguration-r16（ChannelType_DL_DCCH）；结构体 LoggedMeasurementConfiguration_r16 */
    MessageKind_MBSBroadcastConfiguration_r17 = 19, /**< MBSBroadcastConfiguration-r17（ChannelType_MCCH_r17）；结构体 MBSBroadcastConfiguration_r17 */
    MessageKind_MBSMulticastConfiguration_r18 = 20, /**< MBSMulticastConfiguration-r18（ChannelType_MulticastMCCH_r18）；结构体 MBSMulticastConfiguration_r18 */
    MessageKind_Paging = 21, /**< Paging（ChannelType_PCCH）；结构体 Paging */
    MessageKind_RRCSetupRequest = 22, /**< RRCSetupRequest（ChannelType_UL_CCCH）；结构体 RRCSetupRequest */
    MessageKind_RRCResumeRequest = 23, /**< RRCResumeRequest（ChannelType_UL_CCCH）；结构体 RRCResumeRequest */
    MessageKind_RRCReestablishmentRequest = 24, /**< RRCReestablishmentRequest（ChannelType_UL_CCCH）；结构体 RRCReestablishmentRequest */
    MessageKind_RRCSystemInfoRequest = 25, /**< RRCSystemInfoRequest（ChannelType_UL_CCCH）；结构体 RRCSystemInfoRequest */
    MessageKind_RRCResumeRequest1 = 26, /**< RRCResumeRequest1（ChannelType_UL_CCCH1）；结构体 RRCResumeRequest1 */
    MessageKind_MeasurementReport = 27, /**< MeasurementReport（ChannelType_UL_DCCH）；结构体 MeasurementReport */
    MessageKind_RRCReconfigurationComplete = 28, /**< RRCReconfigurationComplete（ChannelType_UL_DCCH）；结构体 RRCReconfigurationComplete */
    MessageKind_RRCSetupComplete = 29, /**< RRCSetupComplete（ChannelType_UL_DCCH）；结构体 RRCSetupComplete */
    MessageKind_RRCReestablishmentComplete = 30, /**< RRCReestablishmentComplete（ChannelType_UL_DCCH）；结构体 RRCReestablishmentComplete */
    MessageKind_RRCResumeComplete = 31, /**< RRCResumeComplete（ChannelType_UL_DCCH）；结构体 RRCResumeComplete */
    MessageKind_SecurityModeComplete = 32, /**< SecurityModeComplete（ChannelType_UL_DCCH）；结构体 SecurityModeComplete */
    MessageKind_SecurityModeFailure = 33, /**< SecurityModeFailure（ChannelType_UL_DCCH）；结构体 SecurityModeFailure */
    MessageKind_ULInformationTransfer = 34, /**< ULInformationTransfer（ChannelType_UL_DCCH）；结构体 ULInformationTransfer */
    MessageKind_LocationMeasurementIndication = 35, /**< LocationMeasurementIndication（ChannelType_UL_DCCH）；结构体 LocationMeasurementIndication */
    MessageKind_UECapabilityInformation = 36, /**< UECapabilityInformation（ChannelType_UL_DCCH）；结构体 UECapabilityInformation */
    MessageKind_CounterCheckResponse = 37, /**< CounterCheckResponse（ChannelType_UL_DCCH）；结构体 CounterCheckResponse */
    MessageKind_UEAssistanceInformation = 38, /**< UEAssistanceInformation（ChannelType_UL_DCCH）；结构体 UEAssistanceInformation */
    MessageKind_FailureInformation = 39, /**< FailureInformation（ChannelType_UL_DCCH）；结构体 FailureInformation */
    MessageKind_ULInformationTransferMRDC = 40, /**< ULInformationTransferMRDC（ChannelType_UL_DCCH）；结构体 ULInformationTransferMRDC */
    MessageKind_SCGFailureInformation = 41, /**< SCGFailureInformation（ChannelType_UL_DCCH）；结构体 SCGFailureInformation */
    MessageKind_SCGFailureInformationEUTRA = 42, /**< SCGFailureInformationEUTRA（ChannelType_UL_DCCH）；结构体 SCGFailureInformationEUTRA */
    MessageKind_ULDedicatedMessageSegment_r16 = 43, /**< ULDedicatedMessageSegment-r16（ChannelType_UL_DCCH）；结构体 ULDedicatedMessageSegment_r16 */
    MessageKind_DedicatedSIBRequest_r16 = 44, /**< DedicatedSIBRequest-r16（ChannelType_UL_DCCH）；结构体 DedicatedSIBRequest_r16 */
    MessageKind_MCGFailureInformation_r16 = 45, /**< MCGFailureInformation-r16（ChannelType_UL_DCCH）；结构体 MCGFailureInformation_r16 */
    MessageKind_UEInformationResponse_r16 = 46, /**< UEInformationResponse-r16（ChannelType_UL_DCCH）；结构体 UEInformationResponse_r16 */
    MessageKind_SidelinkUEInformationNR_r16 = 47, /**< SidelinkUEInformationNR-r16（ChannelType_UL_DCCH）；结构体 SidelinkUEInformationNR_r16 */
    MessageKind_ULInformationTransferIRAT_r16 = 48, /**< ULInformationTransferIRAT-r16（ChannelType_UL_DCCH）；结构体 ULInformationTransferIRAT_r16 */
    MessageKind_IABOtherInformation_r16 = 49, /**< IABOtherInformation-r16（ChannelType_UL_DCCH）；结构体 IABOtherInformation_r16 */
    MessageKind_MBSInterestIndication_r17 = 50, /**< MBSInterestIndication-r17（ChannelType_UL_DCCH）；结构体 MBSInterestIndication_r17 */
    MessageKind_UEPositioningAssistanceInfo_r17 = 51, /**< UEPositioningAssistanceInfo-r17（ChannelType_UL_DCCH）；结构体 UEPositioningAssistanceInfo_r17 */
    MessageKind_MeasurementReportAppLayer_r17 = 52, /**< MeasurementReportAppLayer-r17（ChannelType_UL_DCCH）；结构体 MeasurementReportAppLayer_r17 */
    MessageKind_IndirectPathFailureInformation_r18 = 53, /**< IndirectPathFailureInformation-r18（ChannelType_UL_DCCH）；结构体 IndirectPathFailureInformation_r18 */
} MessageKind;

/**
 * @brief 返回消息类型所属信道。
 *
 * @param[in] kind 实际消息类型。
 * @return 对应信道；kind 不在 1–53 范围内时返回 (ChannelType)0。
 * @note 纯头文件实现（C99 static inline），不新增导出符号。
 */
static inline ChannelType ChannelOfMessageKind(MessageKind kind)
{
    switch (kind) {
    case MessageKind_MIB: return ChannelType_BCCH_BCH;
    case MessageKind_SystemInformation: return ChannelType_BCCH_DL_SCH;
    case MessageKind_SIB1: return ChannelType_BCCH_DL_SCH;
    case MessageKind_RRCReject: return ChannelType_DL_CCCH;
    case MessageKind_RRCSetup: return ChannelType_DL_CCCH;
    case MessageKind_RRCReconfiguration: return ChannelType_DL_DCCH;
    case MessageKind_RRCResume: return ChannelType_DL_DCCH;
    case MessageKind_RRCRelease: return ChannelType_DL_DCCH;
    case MessageKind_RRCReestablishment: return ChannelType_DL_DCCH;
    case MessageKind_SecurityModeCommand: return ChannelType_DL_DCCH;
    case MessageKind_DLInformationTransfer: return ChannelType_DL_DCCH;
    case MessageKind_UECapabilityEnquiry: return ChannelType_DL_DCCH;
    case MessageKind_CounterCheck: return ChannelType_DL_DCCH;
    case MessageKind_MobilityFromNRCommand: return ChannelType_DL_DCCH;
    case MessageKind_DLDedicatedMessageSegment_r16: return ChannelType_DL_DCCH;
    case MessageKind_UEInformationRequest_r16: return ChannelType_DL_DCCH;
    case MessageKind_DLInformationTransferMRDC_r16: return ChannelType_DL_DCCH;
    case MessageKind_LoggedMeasurementConfiguration_r16: return ChannelType_DL_DCCH;
    case MessageKind_MBSBroadcastConfiguration_r17: return ChannelType_MCCH_r17;
    case MessageKind_MBSMulticastConfiguration_r18: return ChannelType_MulticastMCCH_r18;
    case MessageKind_Paging: return ChannelType_PCCH;
    case MessageKind_RRCSetupRequest: return ChannelType_UL_CCCH;
    case MessageKind_RRCResumeRequest: return ChannelType_UL_CCCH;
    case MessageKind_RRCReestablishmentRequest: return ChannelType_UL_CCCH;
    case MessageKind_RRCSystemInfoRequest: return ChannelType_UL_CCCH;
    case MessageKind_RRCResumeRequest1: return ChannelType_UL_CCCH1;
    case MessageKind_MeasurementReport: return ChannelType_UL_DCCH;
    case MessageKind_RRCReconfigurationComplete: return ChannelType_UL_DCCH;
    case MessageKind_RRCSetupComplete: return ChannelType_UL_DCCH;
    case MessageKind_RRCReestablishmentComplete: return ChannelType_UL_DCCH;
    case MessageKind_RRCResumeComplete: return ChannelType_UL_DCCH;
    case MessageKind_SecurityModeComplete: return ChannelType_UL_DCCH;
    case MessageKind_SecurityModeFailure: return ChannelType_UL_DCCH;
    case MessageKind_ULInformationTransfer: return ChannelType_UL_DCCH;
    case MessageKind_LocationMeasurementIndication: return ChannelType_UL_DCCH;
    case MessageKind_UECapabilityInformation: return ChannelType_UL_DCCH;
    case MessageKind_CounterCheckResponse: return ChannelType_UL_DCCH;
    case MessageKind_UEAssistanceInformation: return ChannelType_UL_DCCH;
    case MessageKind_FailureInformation: return ChannelType_UL_DCCH;
    case MessageKind_ULInformationTransferMRDC: return ChannelType_UL_DCCH;
    case MessageKind_SCGFailureInformation: return ChannelType_UL_DCCH;
    case MessageKind_SCGFailureInformationEUTRA: return ChannelType_UL_DCCH;
    case MessageKind_ULDedicatedMessageSegment_r16: return ChannelType_UL_DCCH;
    case MessageKind_DedicatedSIBRequest_r16: return ChannelType_UL_DCCH;
    case MessageKind_MCGFailureInformation_r16: return ChannelType_UL_DCCH;
    case MessageKind_UEInformationResponse_r16: return ChannelType_UL_DCCH;
    case MessageKind_SidelinkUEInformationNR_r16: return ChannelType_UL_DCCH;
    case MessageKind_ULInformationTransferIRAT_r16: return ChannelType_UL_DCCH;
    case MessageKind_IABOtherInformation_r16: return ChannelType_UL_DCCH;
    case MessageKind_MBSInterestIndication_r17: return ChannelType_UL_DCCH;
    case MessageKind_UEPositioningAssistanceInfo_r17: return ChannelType_UL_DCCH;
    case MessageKind_MeasurementReportAppLayer_r17: return ChannelType_UL_DCCH;
    case MessageKind_IndirectPathFailureInformation_r18: return ChannelType_UL_DCCH;
    default: break;
    }
    return (ChannelType)0;
}

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_MESSAGES_RRC_MESSAGES_H */
