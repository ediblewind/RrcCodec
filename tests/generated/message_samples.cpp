/* ============================================================================
 * tests/generated/message_samples.cpp — 测试样例构造器（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#include "message_samples.h"

#include "codec_internal.h"

#include <cstdlib>
#include <cstring>
#include <new>

namespace rrc {
namespace v1810 {
namespace test {

void BuildSample_DRB_CountMSB_InfoList(DRB_CountMSB_InfoList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (DRB_CountMSB_Info*)std::malloc((std::size_t)value.count * sizeof(DRB_CountMSB_Info));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(DRB_CountMSB_Info));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_DRB_CountMSB_Info(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CounterCheck_IEs_NonCriticalExtension(CounterCheck_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_CounterCheck_IEs(CounterCheck_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DRB_CountMSB_InfoList(value.drb_CountMSB_InfoList, depth + 1);
}

void BuildSample_CounterCheck_CriticalExtensionsFuture(CounterCheck_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_CounterCheck_CriticalExtensions(CounterCheck_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CounterCheck_CriticalExtensions_Tag_counterCheck;
    BuildSample_CounterCheck_IEs(value.u.counterCheck, depth + 1);
}

void BuildSample_CounterCheck(CounterCheck& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_CounterCheck_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_DRB_CountMSB_Info(DRB_CountMSB_Info& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drb_Identity = 1;
    value.countMSB_Uplink = 0;
    value.countMSB_Downlink = 0;
}

void BuildSample_DRB_CountInfoList(DRB_CountInfoList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 0u;
}

void BuildSample_CounterCheckResponse_IEs_NonCriticalExtension(CounterCheckResponse_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_CounterCheckResponse_IEs(CounterCheckResponse_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DRB_CountInfoList(value.drb_CountInfoList, depth + 1);
}

void BuildSample_CounterCheckResponse_CriticalExtensionsFuture(CounterCheckResponse_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_CounterCheckResponse_CriticalExtensions(CounterCheckResponse_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CounterCheckResponse_CriticalExtensions_Tag_counterCheckResponse;
    BuildSample_CounterCheckResponse_IEs(value.u.counterCheckResponse, depth + 1);
}

void BuildSample_CounterCheckResponse(CounterCheckResponse& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_CounterCheckResponse_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_DRB_CountInfo(DRB_CountInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drb_Identity = 1;
    value.count_Uplink = 0;
    value.count_Downlink = 0;
}

void BuildSample_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16(DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DedicatedSIBRequest_r16_IEs_NonCriticalExtension(DedicatedSIBRequest_r16_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_DedicatedSIBRequest_r16_IEs(DedicatedSIBRequest_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DedicatedSIBRequest_r16_CriticalExtensionsFuture(DedicatedSIBRequest_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_DedicatedSIBRequest_r16_CriticalExtensions(DedicatedSIBRequest_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DedicatedSIBRequest_r16_CriticalExtensions_Tag_dedicatedSIBRequest_r16;
    BuildSample_DedicatedSIBRequest_r16_IEs(value.u.dedicatedSIBRequest_r16, depth + 1);
}

void BuildSample_DedicatedSIBRequest_r16(DedicatedSIBRequest_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DedicatedSIBRequest_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_GNSS_ID_r16(GNSS_ID_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.gnss_id_r16 = GNSS_ID_r16_Gnss_id_r16_gps;
}

void BuildSample_SBAS_ID_r16(SBAS_ID_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sbas_id_r16 = SBAS_ID_r16_Sbas_id_r16_waas;
}

void BuildSample_PosSIB_ReqInfo_r16(PosSIB_ReqInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.posSibType_r16 = PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_1;
}

void BuildSample_DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension(DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_DLDedicatedMessageSegment_r16_IEs(DLDedicatedMessageSegment_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.segmentNumber_r16 = 0;
    value.rrc_MessageSegmentContainer_r16.length = 0u;
    value.rrc_MessageSegmentType_r16 = DLDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16_notLastSegment;
}

void BuildSample_DLDedicatedMessageSegment_r16_CriticalExtensionsFuture(DLDedicatedMessageSegment_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_DLDedicatedMessageSegment_r16_CriticalExtensions(DLDedicatedMessageSegment_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DLDedicatedMessageSegment_r16_CriticalExtensions_Tag_dlDedicatedMessageSegment_r16;
    BuildSample_DLDedicatedMessageSegment_r16_IEs(value.u.dlDedicatedMessageSegment_r16, depth + 1);
}

void BuildSample_DLDedicatedMessageSegment_r16(DLDedicatedMessageSegment_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DLDedicatedMessageSegment_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_ClockQualityMetrics_r18_ClockAccuracy_r18(ClockQualityMetrics_r18_ClockAccuracy_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ClockQualityMetrics_r18_ClockAccuracy_r18_Tag_value;
    value.u.value = 1;
}

void BuildSample_ClockQualityMetrics_r18(ClockQualityMetrics_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18(DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag_clockQualityMetrics_r18;
    BuildSample_ClockQualityMetrics_r18(value.u.clockQualityMetrics_r18, depth + 1);
}

void BuildSample_DLInformationTransfer_v1800_IEs_NonCriticalExtension(DLInformationTransfer_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_DLInformationTransfer_v1800_IEs(DLInformationTransfer_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RxTxTimeDiff_r17(RxTxTimeDiff_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DLInformationTransfer_v1700_IEs(DLInformationTransfer_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ReferenceTime_r16(ReferenceTime_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.refDays_r16 = 0;
    value.refSeconds_r16 = 0;
    value.refMilliSeconds_r16 = 0;
    value.refTenNanoSeconds_r16 = 0;
}

void BuildSample_ReferenceTimeInfo_r16(ReferenceTimeInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ReferenceTime_r16(value.time_r16, depth + 1);
}

void BuildSample_DLInformationTransfer_v1610_IEs(DLInformationTransfer_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DLInformationTransfer_IEs(DLInformationTransfer_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DLInformationTransfer_CriticalExtensionsFuture(DLInformationTransfer_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_DLInformationTransfer_CriticalExtensions(DLInformationTransfer_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DLInformationTransfer_CriticalExtensions_Tag_dlInformationTransfer;
    BuildSample_DLInformationTransfer_IEs(value.u.dlInformationTransfer, depth + 1);
}

void BuildSample_DLInformationTransfer(DLInformationTransfer& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_DLInformationTransfer_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_DLInformationTransferMRDC_r16_IEs_NonCriticalExtension(DLInformationTransferMRDC_r16_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_DLInformationTransferMRDC_r16_IEs(DLInformationTransferMRDC_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DLInformationTransferMRDC_r16_CriticalExtensions_C1(DLInformationTransferMRDC_r16_CriticalExtensions_C1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_dlInformationTransferMRDC_r16;
    BuildSample_DLInformationTransferMRDC_r16_IEs(value.u.dlInformationTransferMRDC_r16, depth + 1);
}

void BuildSample_DLInformationTransferMRDC_r16_CriticalExtensionsFuture(DLInformationTransferMRDC_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_DLInformationTransferMRDC_r16_CriticalExtensions(DLInformationTransferMRDC_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DLInformationTransferMRDC_r16_CriticalExtensions_Tag_c1;
    BuildSample_DLInformationTransferMRDC_r16_CriticalExtensions_C1(value.u.c1, depth + 1);
}

void BuildSample_DLInformationTransferMRDC_r16(DLInformationTransferMRDC_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DLInformationTransferMRDC_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_FailureInfoRLC_Bearer(FailureInfoRLC_Bearer& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellGroupId = 0;
    value.logicalChannelIdentity = 1;
    value.failureType = FailureInfoRLC_Bearer_FailureType_rlc_failure;
}

void BuildSample_FailureInfoDAPS_r16(FailureInfoDAPS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.failureType_r16 = FailureInfoDAPS_r16_FailureType_r16_daps_failure;
}

void BuildSample_FailureInformation_v1610_IEs_NonCriticalExtension(FailureInformation_v1610_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_FailureInformation_v1610_IEs(FailureInformation_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FailureInformation_IEs(FailureInformation_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FailureInformation_CriticalExtensionsFuture(FailureInformation_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_FailureInformation_CriticalExtensions(FailureInformation_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = FailureInformation_CriticalExtensions_Tag_failureInformation;
    BuildSample_FailureInformation_IEs(value.u.failureInformation, depth + 1);
}

void BuildSample_FailureInformation(FailureInformation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_FailureInformation_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_IAB_IP_AddressNumReq_r16(IAB_IP_AddressNumReq_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IAB_IP_AddressPrefixReq_r16(IAB_IP_AddressPrefixReq_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16(IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag_iab_IPv6_AddressNumReq_r16;
    BuildSample_IAB_IP_AddressNumReq_r16(value.u.iab_IPv6_AddressNumReq_r16, depth + 1);
}

void BuildSample_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16(IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IAB_IP_AddressAndTraffic_r16(IAB_IP_AddressAndTraffic_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IAB_IP_Address_r16(IAB_IP_Address_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = IAB_IP_Address_r16_Tag_iPv4_Address_r16;
    value.u.iPv4_Address_r16.bitLength = 32u;
    value.u.iPv4_Address_r16.bytes = (std::uint8_t*)std::malloc(4u);
    if (value.u.iPv4_Address_r16.bytes != nullptr) {
        std::memset(value.u.iPv4_Address_r16.bytes, 0, 4u);
    }
}

void BuildSample_IAB_IP_PrefixAndTraffic_r16(IAB_IP_PrefixAndTraffic_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16(IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag_iab_IPv6_AddressReport_r16;
    BuildSample_IAB_IP_AddressAndTraffic_r16(value.u.iab_IPv6_AddressReport_r16, depth + 1);
}

void BuildSample_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16(IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IABOtherInformation_r16_IEs_Ip_InfoType_r16(IABOtherInformation_r16_IEs_Ip_InfoType_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag_iab_IP_Request_r16;
    BuildSample_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16(value.u.iab_IP_Request_r16, depth + 1);
}

void BuildSample_IABOtherInformation_r16_IEs_NonCriticalExtension(IABOtherInformation_r16_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_IABOtherInformation_r16_IEs(IABOtherInformation_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_IABOtherInformation_r16_IEs_Ip_InfoType_r16(value.ip_InfoType_r16, depth + 1);
}

void BuildSample_IABOtherInformation_r16_CriticalExtensionsFuture(IABOtherInformation_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_IABOtherInformation_r16_CriticalExtensions(IABOtherInformation_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = IABOtherInformation_r16_CriticalExtensions_Tag_iabOtherInformation_r16;
    BuildSample_IABOtherInformation_r16_IEs(value.u.iabOtherInformation_r16, depth + 1);
}

void BuildSample_IABOtherInformation_r16(IABOtherInformation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_IABOtherInformation_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_FailureReportIndirectPath_r18(FailureReportIndirectPath_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IndirectPathFailureInformation_r18_IEs_NonCriticalExtension(IndirectPathFailureInformation_r18_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_IndirectPathFailureInformation_r18_IEs(IndirectPathFailureInformation_r18_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IndirectPathFailureInformation_r18_CriticalExtensionsFuture(IndirectPathFailureInformation_r18_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_IndirectPathFailureInformation_r18_CriticalExtensions(IndirectPathFailureInformation_r18_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = IndirectPathFailureInformation_r18_CriticalExtensions_Tag_indirectPathFailureInformation_r18;
    BuildSample_IndirectPathFailureInformation_r18_IEs(value.u.indirectPathFailureInformation_r18, depth + 1);
}

void BuildSample_IndirectPathFailureInformation_r18(IndirectPathFailureInformation_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_IndirectPathFailureInformation_r18_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_EUTRA_RSTD_InfoList(EUTRA_RSTD_InfoList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (EUTRA_RSTD_Info*)std::malloc((std::size_t)value.count * sizeof(EUTRA_RSTD_Info));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_RSTD_Info));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_EUTRA_RSTD_Info(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NR_PRS_MeasurementInfoList_r16(NR_PRS_MeasurementInfoList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NR_PRS_MeasurementInfo_r16*)std::malloc((std::size_t)value.count * sizeof(NR_PRS_MeasurementInfo_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_PRS_MeasurementInfo_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NR_PRS_MeasurementInfo_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_LocationMeasurementInfo(LocationMeasurementInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = LocationMeasurementInfo_Tag_eutra_RSTD;
    BuildSample_EUTRA_RSTD_InfoList(value.u.eutra_RSTD, depth + 1);
}

void BuildSample_SetupRelease_LocationMeasurementInfo(SetupRelease_LocationMeasurementInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_LocationMeasurementInfo_Tag_release;
}

void BuildSample_LocationMeasurementIndication_IEs_NonCriticalExtension(LocationMeasurementIndication_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_LocationMeasurementIndication_IEs(LocationMeasurementIndication_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SetupRelease_LocationMeasurementInfo(value.measurementIndication, depth + 1);
}

void BuildSample_LocationMeasurementIndication_CriticalExtensionsFuture(LocationMeasurementIndication_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_LocationMeasurementIndication_CriticalExtensions(LocationMeasurementIndication_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = LocationMeasurementIndication_CriticalExtensions_Tag_locationMeasurementIndication;
    BuildSample_LocationMeasurementIndication_IEs(value.u.locationMeasurementIndication, depth + 1);
}

void BuildSample_LocationMeasurementIndication(LocationMeasurementIndication& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_LocationMeasurementIndication_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_CAG_ConfigList_r18(CAG_ConfigList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CAG_Config_r18*)std::malloc((std::size_t)value.count * sizeof(CAG_Config_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CAG_Config_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CAG_Config_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SNPN_ConfigCellIdList_r18(SNPN_ConfigCellIdList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SNPN_ConfigCellId_r18*)std::malloc((std::size_t)value.count * sizeof(SNPN_ConfigCellId_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SNPN_ConfigCellId_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SNPN_ConfigCellId_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SNPN_ConfigTAIList_r18(SNPN_ConfigTAIList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SNPN_ConfigTAI_r18*)std::malloc((std::size_t)value.count * sizeof(SNPN_ConfigTAI_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SNPN_ConfigTAI_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SNPN_ConfigTAI_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SNPN_ConfigIDList_r18(SNPN_ConfigIDList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SNPN_ConfigID_r18*)std::malloc((std::size_t)value.count * sizeof(SNPN_ConfigID_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SNPN_ConfigID_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SNPN_ConfigID_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SNPN_ConfigList_r18(SNPN_ConfigList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SNPN_ConfigList_r18_Tag_snpn_ConfigCellIdList_r18;
    BuildSample_SNPN_ConfigCellIdList_r18(value.u.snpn_ConfigCellIdList_r18, depth + 1);
}

void BuildSample_AreaConfiguration_v1800(AreaConfiguration_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension(LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_LoggedMeasurementConfiguration_v1800_IEs(LoggedMeasurementConfiguration_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CellGlobalIdList_r16(CellGlobalIdList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CGI_Info_Logging_r16*)std::malloc((std::size_t)value.count * sizeof(CGI_Info_Logging_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CGI_Info_Logging_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CGI_Info_Logging_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_TrackingAreaCodeList_r16(TrackingAreaCodeList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (TrackingAreaCode*)std::malloc((std::size_t)value.count * sizeof(TrackingAreaCode));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(TrackingAreaCode));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i].bitLength = 24u;
            value.items[i].bytes = (std::uint8_t*)std::malloc(3u);
            if (value.items[i].bytes != nullptr) {
                std::memset(value.items[i].bytes, 0, 3u);
            }
        }
    }
}

void BuildSample_TrackingAreaIdentityList_r16(TrackingAreaIdentityList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (TrackingAreaIdentity_r16*)std::malloc((std::size_t)value.count * sizeof(TrackingAreaIdentity_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(TrackingAreaIdentity_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_TrackingAreaIdentity_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_AreaConfig_r16(AreaConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = AreaConfig_r16_Tag_cellGlobalIdList_r16;
    BuildSample_CellGlobalIdList_r16(value.u.cellGlobalIdList_r16, depth + 1);
}

void BuildSample_AreaConfiguration_r17(AreaConfiguration_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_LoggedMeasurementConfiguration_v1700_IEs(LoggedMeasurementConfiguration_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PLMN_IdentityList2_r16(PLMN_IdentityList2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PLMN_Identity*)std::malloc((std::size_t)value.count * sizeof(PLMN_Identity));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_Identity));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PLMN_Identity(value.items[i], depth + 1);
        }
    }
}

void BuildSample_AreaConfiguration_r16(AreaConfiguration_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_AreaConfig_r16(value.areaConfig_r16, depth + 1);
}

void BuildSample_MCC(MCC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 3u;
    value.items = (MCC_MNC_Digit*)std::malloc((std::size_t)value.count * sizeof(MCC_MNC_Digit));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MCC_MNC_Digit));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_MNC(MNC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 2u;
    value.items = (MCC_MNC_Digit*)std::malloc((std::size_t)value.count * sizeof(MCC_MNC_Digit));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MCC_MNC_Digit));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PLMN_Identity(PLMN_Identity& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MNC(value.mnc, depth + 1);
}

void BuildSample_TraceReference_r16(TraceReference_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_Identity(value.plmn_Identity_r16, depth + 1);
    value.traceId_r16.length = 3u;
    value.traceId_r16.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.traceId_r16.bytes != nullptr) {
        std::memset(value.traceId_r16.bytes, 0, 3u);
    }
}

void BuildSample_BT_NameList_r16(BT_NameList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BT_Name_r16*)std::malloc((std::size_t)value.count * sizeof(BT_Name_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BT_Name_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i].length = 1u;
            value.items[i].bytes = (std::uint8_t*)std::malloc(1u);
            if (value.items[i].bytes != nullptr) {
                std::memset(value.items[i].bytes, 0, 1u);
            }
        }
    }
}

void BuildSample_SetupRelease_BT_NameList_r16(SetupRelease_BT_NameList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_BT_NameList_r16_Tag_release;
}

void BuildSample_WLAN_NameList_r16(WLAN_NameList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (WLAN_Name_r16*)std::malloc((std::size_t)value.count * sizeof(WLAN_Name_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(WLAN_Name_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i].length = 1u;
            value.items[i].bytes = (std::uint8_t*)std::malloc(1u);
            if (value.items[i].bytes != nullptr) {
                std::memset(value.items[i].bytes, 0, 1u);
            }
        }
    }
}

void BuildSample_SetupRelease_WLAN_NameList_r16(SetupRelease_WLAN_NameList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_WLAN_NameList_r16_Tag_release;
}

void BuildSample_Sensor_NameList_r16(Sensor_NameList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_Sensor_NameList_r16(SetupRelease_Sensor_NameList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_Sensor_NameList_r16_Tag_release;
}

void BuildSample_LoggedPeriodicalReportConfig_r16(LoggedPeriodicalReportConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.loggingInterval_r16 = LoggingInterval_r16_ms320;
}

void BuildSample_MeasTriggerQuantity(MeasTriggerQuantity& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasTriggerQuantity_Tag_rsrp;
    value.u.rsrp = 0;
}

void BuildSample_EventType_r16_EventL1(EventType_r16_EventL1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.l1_Threshold, depth + 1);
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
}

void BuildSample_EventType_r16(EventType_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = EventType_r16_Tag_outOfCoverage;
}

void BuildSample_LoggedEventTriggerConfig_r16(LoggedEventTriggerConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_EventType_r16(value.eventType_r16, depth + 1);
    value.loggingInterval_r16 = LoggingInterval_r16_ms320;
}

void BuildSample_LoggedMeasurementConfiguration_r16_IEs_ReportType(LoggedMeasurementConfiguration_r16_IEs_ReportType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag_periodical;
    BuildSample_LoggedPeriodicalReportConfig_r16(value.u.periodical, depth + 1);
}

void BuildSample_LoggedMeasurementConfiguration_r16_IEs(LoggedMeasurementConfiguration_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_TraceReference_r16(value.traceReference_r16, depth + 1);
    value.traceRecordingSessionRef_r16.length = 2u;
    value.traceRecordingSessionRef_r16.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.traceRecordingSessionRef_r16.bytes != nullptr) {
        std::memset(value.traceRecordingSessionRef_r16.bytes, 0, 2u);
    }
    value.tce_Id_r16.length = 1u;
    value.tce_Id_r16.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.tce_Id_r16.bytes != nullptr) {
        std::memset(value.tce_Id_r16.bytes, 0, 1u);
    }
    value.absoluteTimeInfo_r16.bitLength = 48u;
    value.absoluteTimeInfo_r16.bytes = (std::uint8_t*)std::malloc(6u);
    if (value.absoluteTimeInfo_r16.bytes != nullptr) {
        std::memset(value.absoluteTimeInfo_r16.bytes, 0, 6u);
    }
    value.loggingDuration_r16 = LoggingDuration_r16_min10;
    BuildSample_LoggedMeasurementConfiguration_r16_IEs_ReportType(value.reportType, depth + 1);
}

void BuildSample_LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture(LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_LoggedMeasurementConfiguration_r16_CriticalExtensions(LoggedMeasurementConfiguration_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag_loggedMeasurementConfiguration_r16;
    BuildSample_LoggedMeasurementConfiguration_r16_IEs(value.u.loggedMeasurementConfiguration_r16, depth + 1);
}

void BuildSample_LoggedMeasurementConfiguration_r16(LoggedMeasurementConfiguration_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_LoggedMeasurementConfiguration_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_MBS_NeighbourCellList_r17(MBS_NeighbourCellList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 0u;
}

void BuildSample_MBS_SessionInfoList_r17(MBS_SessionInfoList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MBS_SessionInfo_r17*)std::malloc((std::size_t)value.count * sizeof(MBS_SessionInfo_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_SessionInfo_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MBS_SessionInfo_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MTCH_SSB_MappingWindowList_r17(MTCH_SSB_MappingWindowList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MTCH_SSB_MappingWindowCycleOffset_r17*)std::malloc((std::size_t)value.count * sizeof(MTCH_SSB_MappingWindowCycleOffset_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MTCH_SSB_MappingWindowCycleOffset_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MTCH_SSB_MappingWindowCycleOffset_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PDSCH_TimeDomainResourceAllocationList_r16(PDSCH_TimeDomainResourceAllocationList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PDSCH_TimeDomainResourceAllocation_r16*)std::malloc((std::size_t)value.count * sizeof(PDSCH_TimeDomainResourceAllocation_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PDSCH_TimeDomainResourceAllocation_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PDSCH_TimeDomainResourceAllocation_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_EUTRA_MBSFN_SubframeConfigList(EUTRA_MBSFN_SubframeConfigList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (EUTRA_MBSFN_SubframeConfig*)std::malloc((std::size_t)value.count * sizeof(EUTRA_MBSFN_SubframeConfig));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_MBSFN_SubframeConfig));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_EUTRA_MBSFN_SubframeConfig(value.items[i], depth + 1);
        }
    }
}

void BuildSample_RateMatchPatternLTE_CRS(RateMatchPatternLTE_CRS& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreqDL = 0;
    value.carrierBandwidthDL = RateMatchPatternLTE_CRS_CarrierBandwidthDL_n6;
    value.nrofCRS_Ports = RateMatchPatternLTE_CRS_NrofCRS_Ports_n1;
    value.v_Shift = RateMatchPatternLTE_CRS_V_Shift_n0;
}

void BuildSample_PDSCH_ConfigBroadcast_r17(PDSCH_ConfigBroadcast_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdschConfigList_r17_count = 0u;
}

void BuildSample_MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension(MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MBSBroadcastConfiguration_r17_IEs(MBSBroadcastConfiguration_r17_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MBSBroadcastConfiguration_r17_CriticalExtensionsFuture(MBSBroadcastConfiguration_r17_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MBSBroadcastConfiguration_r17_CriticalExtensions(MBSBroadcastConfiguration_r17_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MBSBroadcastConfiguration_r17_CriticalExtensions_Tag_mbsBroadcastConfiguration_r17;
    BuildSample_MBSBroadcastConfiguration_r17_IEs(value.u.mbsBroadcastConfiguration_r17, depth + 1);
}

void BuildSample_MBSBroadcastConfiguration_r17(MBSBroadcastConfiguration_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MBSBroadcastConfiguration_r17_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_MBS_NonServingInfoList_r18(MBS_NonServingInfoList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NonServingInfo_r18*)std::malloc((std::size_t)value.count * sizeof(NonServingInfo_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NonServingInfo_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NonServingInfo_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MBSInterestIndication_v1800_NonCriticalExtension(MBSInterestIndication_v1800_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MBSInterestIndication_v1800(MBSInterestIndication_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CarrierFreqListMBS_r17(CarrierFreqListMBS_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ARFCN_ValueNR*)std::malloc((std::size_t)value.count * sizeof(ARFCN_ValueNR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ARFCN_ValueNR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_MBS_ServiceList_r17(MBS_ServiceList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MBS_ServiceInfo_r17*)std::malloc((std::size_t)value.count * sizeof(MBS_ServiceInfo_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_ServiceInfo_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MBS_ServiceInfo_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MBSInterestIndication_r17_IEs(MBSInterestIndication_r17_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MBSInterestIndication_r17_CriticalExtensionsFuture(MBSInterestIndication_r17_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MBSInterestIndication_r17_CriticalExtensions(MBSInterestIndication_r17_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MBSInterestIndication_r17_CriticalExtensions_Tag_mbsInterestIndication_r17;
    BuildSample_MBSInterestIndication_r17_IEs(value.u.mbsInterestIndication_r17, depth + 1);
}

void BuildSample_MBSInterestIndication_r17(MBSInterestIndication_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MBSInterestIndication_r17_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_MBS_SessionInfoListMulticast_r18(MBS_SessionInfoListMulticast_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MBS_SessionInfoMulticast_r18*)std::malloc((std::size_t)value.count * sizeof(MBS_SessionInfoMulticast_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_SessionInfoMulticast_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MBS_SessionInfoMulticast_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MBSMulticastConfiguration_r18_IEs_NonCriticalExtension(MBSMulticastConfiguration_r18_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MBSMulticastConfiguration_r18_IEs(MBSMulticastConfiguration_r18_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MBSMulticastConfiguration_r18_CriticalExtensionsFuture(MBSMulticastConfiguration_r18_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MBSMulticastConfiguration_r18_CriticalExtensions(MBSMulticastConfiguration_r18_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MBSMulticastConfiguration_r18_CriticalExtensions_Tag_mbsMulticastConfiguration_r18;
    BuildSample_MBSMulticastConfiguration_r18_IEs(value.u.mbsMulticastConfiguration_r18, depth + 1);
}

void BuildSample_MBSMulticastConfiguration_r18(MBSMulticastConfiguration_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MBSMulticastConfiguration_r18_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_ThresholdMBS_r18(ThresholdMBS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultList2UTRA(MeasResultList2UTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResult2UTRA_FDD_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResult2UTRA_FDD_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2UTRA_FDD_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResult2UTRA_FDD_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultList2EUTRA(MeasResultList2EUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResult2EUTRA_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResult2EUTRA_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2EUTRA_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResult2EUTRA_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultList2NR(MeasResultList2NR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResult2NR*)std::malloc((std::size_t)value.count * sizeof(MeasResult2NR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2NR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResult2NR(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FailureReportMCG_r16(FailureReportMCG_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.measResultSCG_r16 = (MeasResultSCG_Failure*)std::malloc(sizeof(MeasResultSCG_Failure));
        if (value.measResultSCG_r16 != nullptr) {
            BuildSample_MeasResultSCG_Failure(*value.measResultSCG_r16, depth + 1);
        }
    }
}

void BuildSample_MCGFailureInformation_r16_IEs_NonCriticalExtension(MCGFailureInformation_r16_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MCGFailureInformation_r16_IEs(MCGFailureInformation_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MCGFailureInformation_r16_CriticalExtensionsFuture(MCGFailureInformation_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MCGFailureInformation_r16_CriticalExtensions(MCGFailureInformation_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MCGFailureInformation_r16_CriticalExtensions_Tag_mcgFailureInformation_r16;
    BuildSample_MCGFailureInformation_r16_IEs(value.u.mcgFailureInformation_r16, depth + 1);
}

void BuildSample_MCGFailureInformation_r16(MCGFailureInformation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MCGFailureInformation_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_MeasResultListUTRA_FDD_r16(MeasResultListUTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultUTRA_FDD_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResultUTRA_FDD_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultUTRA_FDD_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultUTRA_FDD_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResult2UTRA_FDD_r16(MeasResult2UTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq_r16 = 0;
    BuildSample_MeasResultListUTRA_FDD_r16(value.measResultNeighCellList_r16, depth + 1);
}

void BuildSample_MeasResultCellSFTD_NR(MeasResultCellSFTD_NR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId = 0;
    value.sfn_OffsetResult = 0;
    value.frameBoundaryOffsetResult = -30720;
}

void BuildSample_MeasResultSFTD_EUTRA(MeasResultSFTD_EUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.eutra_PhysCellId = 0;
    value.sfn_OffsetResult = 0;
    value.frameBoundaryOffsetResult = -30720;
}

void BuildSample_MeasResultServFreqListEUTRA_SCG(MeasResultServFreqListEUTRA_SCG& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResult2EUTRA*)std::malloc((std::size_t)value.count * sizeof(MeasResult2EUTRA));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2EUTRA));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResult2EUTRA(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultServFreqListNR_SCG(MeasResultServFreqListNR_SCG& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResult2NR*)std::malloc((std::size_t)value.count * sizeof(MeasResult2NR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2NR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResult2NR(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultCellListSFTD_NR(MeasResultCellListSFTD_NR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultCellSFTD_NR*)std::malloc((std::size_t)value.count * sizeof(MeasResultCellSFTD_NR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultCellSFTD_NR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultCellSFTD_NR(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CommonLocationInfo_r16(CommonLocationInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Sensor_LocationInfo_r16(Sensor_LocationInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_LogMeasResultListBT_r16(LogMeasResultListBT_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (LogMeasResultBT_r16*)std::malloc((std::size_t)value.count * sizeof(LogMeasResultBT_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(LogMeasResultBT_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_LogMeasResultBT_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_LogMeasResultListWLAN_r16(LogMeasResultListWLAN_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (LogMeasResultWLAN_r16*)std::malloc((std::size_t)value.count * sizeof(LogMeasResultWLAN_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(LogMeasResultWLAN_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_LogMeasResultWLAN_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_LocationInfo_r16(LocationInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultForRSSI_r16(MeasResultForRSSI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rssi_Result_r16 = 0;
    value.channelOccupancy_r16 = 0;
}

void BuildSample_MeasResultListSRS_RSRP_r16(MeasResultListSRS_RSRP_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultSRS_RSRP_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResultSRS_RSRP_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultSRS_RSRP_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultSRS_RSRP_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultListCLI_RSSI_r16(MeasResultListCLI_RSSI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultCLI_RSSI_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResultCLI_RSSI_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultCLI_RSSI_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultCLI_RSSI_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultCLI_r16(MeasResultCLI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UL_PDCP_DelayValueResultList_r16(UL_PDCP_DelayValueResultList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UL_PDCP_DelayValueResult_r16*)std::malloc((std::size_t)value.count * sizeof(UL_PDCP_DelayValueResult_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UL_PDCP_DelayValueResult_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UL_PDCP_DelayValueResult_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultNR_SL_r16(MeasResultNR_SL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measResultListCBR_NR_r16_count = 0u;
}

void BuildSample_MeasResultsSL_r16_MeasResultsListSL_r16(MeasResultsSL_r16_MeasResultsListSL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasResultsSL_r16_MeasResultsListSL_r16_Tag_measResultNR_SL_r16;
    BuildSample_MeasResultNR_SL_r16(value.u.measResultNR_SL_r16, depth + 1);
}

void BuildSample_MeasResultsSL_r16(MeasResultsSL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultsSL_r16_MeasResultsListSL_r16(value.measResultsListSL_r16, depth + 1);
}

void BuildSample_UL_PDCP_ExcessDelayResultList_r17(UL_PDCP_ExcessDelayResultList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UL_PDCP_ExcessDelayResult_r17*)std::malloc((std::size_t)value.count * sizeof(UL_PDCP_ExcessDelayResult_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UL_PDCP_ExcessDelayResult_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UL_PDCP_ExcessDelayResult_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultRxTxTimeDiff_r17(MeasResultRxTxTimeDiff_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultServMOList(MeasResultServMOList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultServMO*)std::malloc((std::size_t)value.count * sizeof(MeasResultServMO));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultServMO));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultServMO(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultListNR(MeasResultListNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultNR*)std::malloc((std::size_t)value.count * sizeof(MeasResultNR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultNR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultNR(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultListEUTRA(MeasResultListEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultEUTRA*)std::malloc((std::size_t)value.count * sizeof(MeasResultEUTRA));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultEUTRA));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultEUTRA(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResults_MeasResultNeighCells(MeasResults_MeasResultNeighCells& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasResults_MeasResultNeighCells_Tag_measResultListNR;
    BuildSample_MeasResultListNR(value.u.measResultListNR, depth + 1);
}

void BuildSample_MeasResults(MeasResults& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measId = 1;
    BuildSample_MeasResultServMOList(value.measResultServingMOList, depth + 1);
}

void BuildSample_MeasurementReport_IEs_NonCriticalExtension(MeasurementReport_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MeasurementReport_IEs(MeasurementReport_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResults(value.measResults, depth + 1);
}

void BuildSample_MeasurementReport_CriticalExtensionsFuture(MeasurementReport_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MeasurementReport_CriticalExtensions(MeasurementReport_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasurementReport_CriticalExtensions_Tag_measurementReport;
    BuildSample_MeasurementReport_IEs(value.u.measurementReport, depth + 1);
}

void BuildSample_MeasurementReport(MeasurementReport& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasurementReport_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_MeasurementReportAppLayerList_v1800(MeasurementReportAppLayerList_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasReportAppLayer_v1800*)std::malloc((std::size_t)value.count * sizeof(MeasReportAppLayer_v1800));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasReportAppLayer_v1800));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasReportAppLayer_v1800(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension(MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MeasurementReportAppLayer_v1800_IEs(MeasurementReportAppLayer_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasurementReportAppLayerList_r17(MeasurementReportAppLayerList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasReportAppLayer_r17*)std::malloc((std::size_t)value.count * sizeof(MeasReportAppLayer_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasReportAppLayer_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasReportAppLayer_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasurementReportAppLayer_r17_IEs(MeasurementReportAppLayer_r17_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasurementReportAppLayerList_r17(value.measurementReportAppLayerList_r17, depth + 1);
}

void BuildSample_MeasurementReportAppLayer_r17_CriticalExtensionsFuture(MeasurementReportAppLayer_r17_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MeasurementReportAppLayer_r17_CriticalExtensions(MeasurementReportAppLayer_r17_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasurementReportAppLayer_r17_CriticalExtensions_Tag_measurementReportAppLayer_r17;
    BuildSample_MeasurementReportAppLayer_r17_IEs(value.u.measurementReportAppLayer_r17, depth + 1);
}

void BuildSample_MeasurementReportAppLayer_r17(MeasurementReportAppLayer_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasurementReportAppLayer_r17_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_RAN_VisibleMeasurements_r17(RAN_VisibleMeasurements_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasReportAppLayer_r17(MeasReportAppLayer_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measConfigAppLayerId_r17 = 0;
}

void BuildSample_Qoe_AreaScope_r18(Qoe_AreaScope_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = Qoe_AreaScope_r18_Tag_cellGlobalIdList;
    BuildSample_CellGlobalIdList_r16(value.u.cellGlobalIdList, depth + 1);
}

void BuildSample_AvailableRAN_VisibleMetrics_r18(AvailableRAN_VisibleMetrics_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_AppLayerIdleInactiveConfig_r18(AppLayerIdleInactiveConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measConfigAppLayerId_r18 = 0;
}

void BuildSample_MeasReportAppLayer_v1800(MeasReportAppLayer_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_QFI_List_r18(QFI_List_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (QFI*)std::malloc((std::size_t)value.count * sizeof(QFI));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(QFI));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigSIB1(PDCCH_ConfigSIB1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.controlResourceSetZero = 0;
    value.searchSpaceZero = 0;
}

void BuildSample_MIB(MIB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.systemFrameNumber.bitLength = 6u;
    value.systemFrameNumber.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.systemFrameNumber.bytes != nullptr) {
        std::memset(value.systemFrameNumber.bytes, 0, 1u);
    }
    value.subCarrierSpacingCommon = MIB_SubCarrierSpacingCommon_scs15or60;
    value.ssb_SubcarrierOffset = 0;
    value.dmrs_TypeA_Position = MIB_Dmrs_TypeA_Position_pos2;
    BuildSample_PDCCH_ConfigSIB1(value.pdcch_ConfigSIB1, depth + 1);
    value.cellBarred = MIB_CellBarred_barred;
    value.intraFreqReselection = MIB_IntraFreqReselection_allowed;
    value.spare.bitLength = 1u;
    value.spare.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.spare.bytes != nullptr) {
        std::memset(value.spare.bytes, 0, 1u);
    }
}

void BuildSample_SuccessHO_Config_r17(SuccessHO_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SuccessHO_Config_r17(SetupRelease_SuccessHO_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SuccessHO_Config_r17_Tag_release;
}

void BuildSample_MobilityFromNRCommand_v1800_IEs_NonCriticalExtension(MobilityFromNRCommand_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MobilityFromNRCommand_v1800_IEs(MobilityFromNRCommand_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MobilityFromNRCommand_v1610_IEs(MobilityFromNRCommand_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MobilityFromNRCommand_IEs(MobilityFromNRCommand_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.targetRAT_Type = MobilityFromNRCommand_IEs_TargetRAT_Type_eutra;
    value.targetRAT_MessageContainer.length = 0u;
}

void BuildSample_MobilityFromNRCommand_CriticalExtensionsFuture(MobilityFromNRCommand_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_MobilityFromNRCommand_CriticalExtensions(MobilityFromNRCommand_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MobilityFromNRCommand_CriticalExtensions_Tag_mobilityFromNRCommand;
    BuildSample_MobilityFromNRCommand_IEs(value.u.mobilityFromNRCommand, depth + 1);
}

void BuildSample_MobilityFromNRCommand(MobilityFromNRCommand& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_MobilityFromNRCommand_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_PagingRecordList_v1800(PagingRecordList_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PagingRecord_v1800*)std::malloc((std::size_t)value.count * sizeof(PagingRecord_v1800));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PagingRecord_v1800));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PagingRecord_v1800(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PagingGroupList_v1800(PagingGroupList_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (GroupPaging_r18*)std::malloc((std::size_t)value.count * sizeof(GroupPaging_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(GroupPaging_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_GroupPaging_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_Paging_v1800_IEs_NonCriticalExtension(Paging_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_Paging_v1800_IEs(Paging_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PagingRecordList_v1700(PagingRecordList_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PagingRecord_v1700*)std::malloc((std::size_t)value.count * sizeof(PagingRecord_v1700));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PagingRecord_v1700));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PagingRecord_v1700(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PagingGroupList_r17(PagingGroupList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (TMGI_r17*)std::malloc((std::size_t)value.count * sizeof(TMGI_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(TMGI_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_TMGI_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_Paging_v1700_IEs(Paging_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PagingRecordList(PagingRecordList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PagingRecord*)std::malloc((std::size_t)value.count * sizeof(PagingRecord));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PagingRecord));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PagingRecord(value.items[i], depth + 1);
        }
    }
}

void BuildSample_Paging(Paging& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PagingUE_Identity(PagingUE_Identity& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PagingUE_Identity_Tag_ng_5G_S_TMSI;
    value.u.ng_5G_S_TMSI.bitLength = 48u;
    value.u.ng_5G_S_TMSI.bytes = (std::uint8_t*)std::malloc(6u);
    if (value.u.ng_5G_S_TMSI.bytes != nullptr) {
        std::memset(value.u.ng_5G_S_TMSI.bytes, 0, 6u);
    }
}

void BuildSample_PagingRecord(PagingRecord& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PagingUE_Identity(value.ue_Identity, depth + 1);
}

void BuildSample_PagingRecord_v1700(PagingRecord_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PagingRecord_v1800(PagingRecord_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_GroupPaging_r18(GroupPaging_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_SRAP_Config_r17(SL_SRAP_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_L2RemoteUE_Config_r17(SL_L2RemoteUE_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_L2RemoteUE_Config_r17(SetupRelease_SL_L2RemoteUE_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_L2RemoteUE_Config_r17_Tag_release;
}

void BuildSample_RRCReestablishment_v1700_IEs_NonCriticalExtension(RRCReestablishment_v1700_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCReestablishment_v1700_IEs(RRCReestablishment_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReestablishment_IEs(RRCReestablishment_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nextHopChainingCount = 0;
}

void BuildSample_RRCReestablishment_CriticalExtensionsFuture(RRCReestablishment_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCReestablishment_CriticalExtensions(RRCReestablishment_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCReestablishment_CriticalExtensions_Tag_rrcReestablishment;
    BuildSample_RRCReestablishment_IEs(value.u.rrcReestablishment, depth + 1);
}

void BuildSample_RRCReestablishment(RRCReestablishment& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_RRCReestablishment_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension(RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCReestablishmentComplete_v1800_IEs(RRCReestablishmentComplete_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MeasurementsAvailable_r16(UE_MeasurementsAvailable_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReestablishmentComplete_v1610_IEs(RRCReestablishmentComplete_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReestablishmentComplete_IEs(RRCReestablishmentComplete_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReestablishmentComplete_CriticalExtensionsFuture(RRCReestablishmentComplete_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCReestablishmentComplete_CriticalExtensions(RRCReestablishmentComplete_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCReestablishmentComplete_CriticalExtensions_Tag_rrcReestablishmentComplete;
    BuildSample_RRCReestablishmentComplete_IEs(value.u.rrcReestablishmentComplete, depth + 1);
}

void BuildSample_RRCReestablishmentComplete(RRCReestablishmentComplete& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_RRCReestablishmentComplete_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_ReestabUE_Identity(ReestabUE_Identity& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.c_RNTI = 0;
    value.physCellId = 0;
    value.shortMAC_I.bitLength = 16u;
    value.shortMAC_I.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.shortMAC_I.bytes != nullptr) {
        std::memset(value.shortMAC_I.bytes, 0, 2u);
    }
}

void BuildSample_RRCReestablishmentRequest_IEs(RRCReestablishmentRequest_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ReestabUE_Identity(value.ue_Identity, depth + 1);
    value.reestablishmentCause = ReestablishmentCause_reconfigurationFailure;
    value.spare.bitLength = 1u;
    value.spare.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.spare.bytes != nullptr) {
        std::memset(value.spare.bytes, 0, 1u);
    }
}

void BuildSample_RRCReestablishmentRequest(RRCReestablishmentRequest& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RRCReestablishmentRequest_IEs(value.rrcReestablishmentRequest, depth + 1);
}

void BuildSample_CandidateServingFreqRangeListNR_r18(CandidateServingFreqRangeListNR_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CandidateServingFreqRangeNR_r18*)std::malloc((std::size_t)value.count * sizeof(CandidateServingFreqRangeNR_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CandidateServingFreqRangeNR_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CandidateServingFreqRangeNR_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_IDC_FDM_AssistanceConfig_r18(IDC_FDM_AssistanceConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_IDC_FDM_AssistanceConfig_r18(SetupRelease_IDC_FDM_AssistanceConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag_release;
}

void BuildSample_IDC_AssistanceConfig_v1800(IDC_AssistanceConfig_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_IDC_AssistanceConfig_v1800(SetupRelease_IDC_AssistanceConfig_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_IDC_AssistanceConfig_v1800_Tag_release;
}

void BuildSample_MultiRx_PreferenceReportingConfigFR2_r18(MultiRx_PreferenceReportingConfigFR2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.multiRx_PreferenceReportingConfigFR2ProhibitTimer_r18 = MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s0;
}

void BuildSample_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18(SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag_release;
}

void BuildSample_UL_TrafficInfoReportingConfig_r18(UL_TrafficInfoReportingConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdu_SessionsToReportUL_TrafficInfoList_r18_count = 0u;
    value.ul_TrafficInfoProhibitTimer_r18 = UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s0;
}

void BuildSample_SetupRelease_UL_TrafficInfoReportingConfig_r18(SetupRelease_UL_TrafficInfoReportingConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag_release;
}

void BuildSample_SuccessPSCell_Config_r18(SuccessPSCell_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SuccessPSCell_Config_r18(SetupRelease_SuccessPSCell_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SuccessPSCell_Config_r18_Tag_release;
}

void BuildSample_MUSIM_CandidateBandList_r18(MUSIM_CandidateBandList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (FreqBandIndicatorNR*)std::malloc((std::size_t)value.count * sizeof(FreqBandIndicatorNR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqBandIndicatorNR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_MUSIM_CapabilityRestrictionConfig_r18(MUSIM_CapabilityRestrictionConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.musim_WaitTimer_r18 = MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18_ms10;
    value.musim_ProhibitTimer_r18 = MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18_ms0;
}

void BuildSample_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18(SetupRelease_MUSIM_CapabilityRestrictionConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag_release;
}

void BuildSample_OtherConfig_v1800(OtherConfig_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_FlightPathUpdateDistanceThr_r18(SetupRelease_FlightPathUpdateDistanceThr_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_FlightPathUpdateDistanceThr_r18_Tag_release;
}

void BuildSample_SetupRelease_FlightPathUpdateTimeThr_r18(SetupRelease_FlightPathUpdateTimeThr_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_FlightPathUpdateTimeThr_r18_Tag_release;
}

void BuildSample_Aerial_Config_r18_FlightPathUpdateThrConfig_r18(Aerial_Config_r18_FlightPathUpdateThrConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Aerial_Config_r18(Aerial_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_Aerial_Config_r18(SetupRelease_Aerial_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_Aerial_Config_r18_Tag_release;
}

void BuildSample_SL_IndirectPathAddChange_r18(SL_IndirectPathAddChange_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_IndirectPathRelayUE_Identity_r18.bitLength = 24u;
    value.sl_IndirectPathRelayUE_Identity_r18.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_IndirectPathRelayUE_Identity_r18.bytes != nullptr) {
        std::memset(value.sl_IndirectPathRelayUE_Identity_r18.bytes, 0, 3u);
    }
    value.sl_IndirectPathCellIdentity_r18.bitLength = 36u;
    value.sl_IndirectPathCellIdentity_r18.bytes = (std::uint8_t*)std::malloc(5u);
    if (value.sl_IndirectPathCellIdentity_r18.bytes != nullptr) {
        std::memset(value.sl_IndirectPathCellIdentity_r18.bytes, 0, 5u);
    }
}

void BuildSample_SetupRelease_SL_IndirectPathAddChange_r18(SetupRelease_SL_IndirectPathAddChange_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_IndirectPathAddChange_r18_Tag_release;
}

void BuildSample_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18(N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_Identity(value.n3c_PLMN_Id_r18, depth + 1);
    value.n3c_CellIdentity_r18.bitLength = 36u;
    value.n3c_CellIdentity_r18.bytes = (std::uint8_t*)std::malloc(5u);
    if (value.n3c_CellIdentity_r18.bytes != nullptr) {
        std::memset(value.n3c_CellIdentity_r18.bytes, 0, 5u);
    }
}

void BuildSample_N3C_RelayUE_Info_r18(N3C_RelayUE_Info_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18(value.n3c_CellGlobalId_r18, depth + 1);
    value.n3c_C_RNTI_r18 = 0;
}

void BuildSample_N3C_IndirectPathAddChange_r18(N3C_IndirectPathAddChange_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_N3C_RelayUE_Info_r18(value.n3c_RelayIdentification_r18, depth + 1);
}

void BuildSample_SetupRelease_N3C_IndirectPathAddChange_r18(SetupRelease_N3C_IndirectPathAddChange_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_N3C_IndirectPathAddChange_r18_Tag_release;
}

void BuildSample_N3C_IndirectPathConfigRelay_r18(N3C_IndirectPathConfigRelay_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_N3C_IndirectPathConfigRelay_r18(SetupRelease_N3C_IndirectPathConfigRelay_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag_release;
}

void BuildSample_SRS_PosResourceSetLinkedForAggBWList_r18(SRS_PosResourceSetLinkedForAggBWList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SRS_PosResourceSetLinkedForAggBW_r18*)std::malloc((std::size_t)value.count * sizeof(SRS_PosResourceSetLinkedForAggBW_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRS_PosResourceSetLinkedForAggBW_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SRS_PosResourceSetLinkedForAggBW_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18(SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag_release;
}

void BuildSample_SetupRelease_ReferenceConfiguration_r18(SetupRelease_ReferenceConfiguration_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_ReferenceConfiguration_r18_Tag_release;
}

void BuildSample_LTM_Config_r18(LTM_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_LTM_Config_r18(SetupRelease_LTM_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_LTM_Config_r18_Tag_release;
}

void BuildSample_RRCReconfiguration_v1800_IEs_NonCriticalExtension(RRCReconfiguration_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCReconfiguration_v1800_IEs(RRCReconfiguration_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_AppLayerMeasConfig_r17(AppLayerMeasConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MUSIM_GapAssistanceConfig_r17(MUSIM_GapAssistanceConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.musim_GapProhibitTimer_r17 = MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s0;
}

void BuildSample_SetupRelease_MUSIM_GapAssistanceConfig_r17(SetupRelease_MUSIM_GapAssistanceConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag_release;
}

void BuildSample_MUSIM_LeaveAssistanceConfig_r17(MUSIM_LeaveAssistanceConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.musim_LeaveWithoutResponseTimer_r17 = MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17_ms10;
}

void BuildSample_SetupRelease_MUSIM_LeaveAssistanceConfig_r17(SetupRelease_MUSIM_LeaveAssistanceConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag_release;
}

void BuildSample_RLM_RelaxationReportingConfig_r17(RLM_RelaxationReportingConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rlm_RelaxtionReportingProhibitTimer = RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s0;
}

void BuildSample_SetupRelease_RLM_RelaxationReportingConfig_r17(SetupRelease_RLM_RelaxationReportingConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RLM_RelaxationReportingConfig_r17_Tag_release;
}

void BuildSample_BFD_RelaxationReportingConfig_r17(BFD_RelaxationReportingConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bfd_RelaxtionReportingProhibitTimer = BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s0;
}

void BuildSample_SetupRelease_BFD_RelaxationReportingConfig_r17(SetupRelease_BFD_RelaxationReportingConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_BFD_RelaxationReportingConfig_r17_Tag_release;
}

void BuildSample_SCG_DeactivationPreferenceConfig_r17(SCG_DeactivationPreferenceConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.scg_DeactivationPreferenceProhibitTimer_r17 = SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s0;
}

void BuildSample_SetupRelease_SCG_DeactivationPreferenceConfig_r17(SetupRelease_SCG_DeactivationPreferenceConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag_release;
}

void BuildSample_RRM_MeasRelaxationReportingConfig_r17(RRM_MeasRelaxationReportingConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.s_SearchDeltaP_Stationary_r17 = RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17_dB2;
    value.t_SearchDeltaP_Stationary_r17 = RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_s5;
}

void BuildSample_SetupRelease_RRM_MeasRelaxationReportingConfig_r17(SetupRelease_RRM_MeasRelaxationReportingConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag_release;
}

void BuildSample_PropDelayDiffReportConfig_r17(PropDelayDiffReportConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PropDelayDiffReportConfig_r17(SetupRelease_PropDelayDiffReportConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PropDelayDiffReportConfig_r17_Tag_release;
}

void BuildSample_OtherConfig_v1700(OtherConfig_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_L2RelayUE_Config_r17(SL_L2RelayUE_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_L2RelayUE_Config_r17(SetupRelease_SL_L2RelayUE_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_L2RelayUE_Config_r17_Tag_release;
}

void BuildSample_NeedForGapNCSG_ConfigNR_r17(NeedForGapNCSG_ConfigNR_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_NeedForGapNCSG_ConfigNR_r17(SetupRelease_NeedForGapNCSG_ConfigNR_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag_release;
}

void BuildSample_NeedForGapNCSG_ConfigEUTRA_r17(NeedForGapNCSG_ConfigEUTRA_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag_release;
}

void BuildSample_MUSIM_Starting_SFN_AndSubframe_r17(MUSIM_Starting_SFN_AndSubframe_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.starting_SFN_r17 = 0;
    value.startingSubframe_r17 = 0;
}

void BuildSample_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17(MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms20_r17;
    value.u.ms20_r17 = 0;
}

void BuildSample_MUSIM_GapInfo_r17(MUSIM_GapInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MUSIM_GapConfig_r17(MUSIM_GapConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_MUSIM_GapConfig_r17(SetupRelease_MUSIM_GapConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MUSIM_GapConfig_r17_Tag_release;
}

void BuildSample_UL_GapFR2_Config_r17(UL_GapFR2_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.gapOffset_r17 = 0;
    value.ugl_r17 = UL_GapFR2_Config_r17_Ugl_r17_ms0dot125;
    value.ugrp_r17 = UL_GapFR2_Config_r17_Ugrp_r17_ms5;
}

void BuildSample_SetupRelease_UL_GapFR2_Config_r17(SetupRelease_UL_GapFR2_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UL_GapFR2_Config_r17_Tag_release;
}

void BuildSample_UE_TxTEG_RequestUL_TDOA_Config_r17(UE_TxTEG_RequestUL_TDOA_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_oneShot_r17;
}

void BuildSample_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17(SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_release;
}

void BuildSample_RRCReconfiguration_v1700_IEs(RRCReconfiguration_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.dedicatedPagingDelivery_r17 = (Paging*)std::malloc(sizeof(Paging));
        if (value.dedicatedPagingDelivery_r17 != nullptr) {
            BuildSample_Paging(*value.dedicatedPagingDelivery_r17, depth + 1);
        }
    }
}

void BuildSample_IAB_IP_AddressConfigurationList_r16(IAB_IP_AddressConfigurationList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CondReconfigToAddModList_r16(CondReconfigToAddModList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CondReconfigToAddMod_r16*)std::malloc((std::size_t)value.count * sizeof(CondReconfigToAddMod_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CondReconfigToAddMod_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CondReconfigToAddMod_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SK_CounterConfiguration_r18(SK_CounterConfiguration_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CondReconfigToRemoveList_r16(CondReconfigToRemoveList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CondReconfigId_r16*)std::malloc((std::size_t)value.count * sizeof(CondReconfigId_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CondReconfigId_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_ConditionalReconfiguration_r16(ConditionalReconfiguration_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SSB_MTC_PeriodicityAndOffset(SSB_MTC_PeriodicityAndOffset& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SSB_MTC_PeriodicityAndOffset_Tag_sf5;
    value.u.sf5 = 0;
}

void BuildSample_SSB_MTC(SSB_MTC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SSB_MTC_PeriodicityAndOffset(value.periodicityAndOffset, depth + 1);
    value.duration = SSB_MTC_Duration_sf1;
}

void BuildSample_CandidateServingFreqListNR_r16(CandidateServingFreqListNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ARFCN_ValueNR*)std::malloc((std::size_t)value.count * sizeof(ARFCN_ValueNR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ARFCN_ValueNR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_IDC_AssistanceConfig_r16(IDC_AssistanceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_IDC_AssistanceConfig_r16(SetupRelease_IDC_AssistanceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_IDC_AssistanceConfig_r16_Tag_release;
}

void BuildSample_DRX_PreferenceConfig_r16(DRX_PreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drx_PreferenceProhibitTimer_r16 = DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s0;
}

void BuildSample_SetupRelease_DRX_PreferenceConfig_r16(SetupRelease_DRX_PreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DRX_PreferenceConfig_r16_Tag_release;
}

void BuildSample_MaxBW_PreferenceConfig_r16(MaxBW_PreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxBW_PreferenceProhibitTimer_r16 = MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s0;
}

void BuildSample_SetupRelease_MaxBW_PreferenceConfig_r16(SetupRelease_MaxBW_PreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MaxBW_PreferenceConfig_r16_Tag_release;
}

void BuildSample_MaxCC_PreferenceConfig_r16(MaxCC_PreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxCC_PreferenceProhibitTimer_r16 = MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s0;
}

void BuildSample_SetupRelease_MaxCC_PreferenceConfig_r16(SetupRelease_MaxCC_PreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MaxCC_PreferenceConfig_r16_Tag_release;
}

void BuildSample_MaxMIMO_LayerPreferenceConfig_r16(MaxMIMO_LayerPreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxMIMO_LayerPreferenceProhibitTimer_r16 = MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s0;
}

void BuildSample_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16(SetupRelease_MaxMIMO_LayerPreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag_release;
}

void BuildSample_MinSchedulingOffsetPreferenceConfig_r16(MinSchedulingOffsetPreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.minSchedulingOffsetPreferenceProhibitTimer_r16 = MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s0;
}

void BuildSample_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16(SetupRelease_MinSchedulingOffsetPreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag_release;
}

void BuildSample_ReleasePreferenceConfig_r16(ReleasePreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.releasePreferenceProhibitTimer_r16 = ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s0;
}

void BuildSample_SetupRelease_ReleasePreferenceConfig_r16(SetupRelease_ReleasePreferenceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_ReleasePreferenceConfig_r16_Tag_release;
}

void BuildSample_OtherConfig_v1610(OtherConfig_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BAP_RoutingID_r16(BAP_RoutingID_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bap_Address_r16.bitLength = 10u;
    value.bap_Address_r16.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.bap_Address_r16.bytes != nullptr) {
        std::memset(value.bap_Address_r16.bytes, 0, 2u);
    }
    value.bap_PathId_r16.bitLength = 10u;
    value.bap_PathId_r16.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.bap_PathId_r16.bytes != nullptr) {
        std::memset(value.bap_PathId_r16.bytes, 0, 2u);
    }
}

void BuildSample_BAP_Config_r16(BAP_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_BAP_Config_r16(SetupRelease_BAP_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_BAP_Config_r16_Tag_release;
}

void BuildSample_SetupRelease_T316_r16(SetupRelease_T316_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_T316_r16_Tag_release;
}

void BuildSample_NeedForGapsConfigNR_r16(NeedForGapsConfigNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_NeedForGapsConfigNR_r16(SetupRelease_NeedForGapsConfigNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_NeedForGapsConfigNR_r16_Tag_release;
}

void BuildSample_OnDemandSIB_Request_r16(OnDemandSIB_Request_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.onDemandSIB_RequestProhibitTimer_r16 = OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16_s0;
}

void BuildSample_SetupRelease_OnDemandSIB_Request_r16(SetupRelease_OnDemandSIB_Request_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_OnDemandSIB_Request_r16_Tag_release;
}

void BuildSample_SetupRelease_SchedulingRequestId(SetupRelease_SchedulingRequestId& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SchedulingRequestId_Tag_release;
}

void BuildSample_SL_SCCH_CarrierSetConfigList_r18(SL_SCCH_CarrierSetConfigList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_SCCH_CarrierSetConfig_r18*)std::malloc((std::size_t)value.count * sizeof(SL_SCCH_CarrierSetConfig_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_SCCH_CarrierSetConfig_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_SCCH_CarrierSetConfig_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_SL_SCCH_CarrierSetConfigList_r18(SetupRelease_SL_SCCH_CarrierSetConfigList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag_release;
}

void BuildSample_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17(SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag_subMilliSeconds;
    value.u.subMilliSeconds = 1;
}

void BuildSample_SL_DRX_GC_BC_QoS_r17(SL_DRX_GC_BC_QoS_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17(value.sl_DRX_GC_BC_OnDurationTimer_r17, depth + 1);
    value.sl_DRX_GC_InactivityTimer_r17 = SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms0;
    value.sl_DRX_GC_BC_Cycle_r17 = SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms10;
}

void BuildSample_SL_DRX_GC_Generic_r17(SL_DRX_GC_Generic_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_DRX_GC_RetransmissionTimer_r17 = SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl0;
}

void BuildSample_SL_DRX_ConfigGC_BC_r17(SL_DRX_ConfigGC_BC_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_DRX_Config_r17(SL_DRX_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PHY_MAC_RLC_Config_v1700(SL_PHY_MAC_RLC_Config_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_PHY_MAC_RLC_Config_v1700(SetupRelease_SL_PHY_MAC_RLC_Config_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag_release;
}

void BuildSample_SL_RelayUE_Config_r17(SL_RelayUE_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_RelayUE_Config_r17(SetupRelease_SL_RelayUE_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_RelayUE_Config_r17_Tag_release;
}

void BuildSample_SL_ReselectionConfig_r17(SL_ReselectionConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_RemoteUE_Config_r17(SL_RemoteUE_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_RemoteUE_Config_r17(SetupRelease_SL_RemoteUE_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_RemoteUE_Config_r17_Tag_release;
}

void BuildSample_SL_DiscConfig_r17(SL_DiscConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_DiscConfig_r17(SetupRelease_SL_DiscConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_DiscConfig_r17_Tag_release;
}

void BuildSample_SL_RelayUE_ConfigU2U_r18(SL_RelayUE_ConfigU2U_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_RelayUE_ConfigU2U_r18(SetupRelease_SL_RelayUE_ConfigU2U_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag_release;
}

void BuildSample_SL_RemoteUE_ConfigU2U_r18(SL_RemoteUE_ConfigU2U_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_RemoteUE_ConfigU2U_r18(SetupRelease_SL_RemoteUE_ConfigU2U_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag_release;
}

void BuildSample_SL_DiscConfig_v1800(SL_DiscConfig_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18(SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BSR_Config(BSR_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.periodicBSR_Timer = BSR_Config_PeriodicBSR_Timer_sf1;
    value.retxBSR_Timer = BSR_Config_RetxBSR_Timer_sf10;
}

void BuildSample_MAC_MainConfigSL_r16(MAC_MainConfigSL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_ConfiguredGrantConfigList_r16(SL_ConfiguredGrantConfigList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_ScheduledConfig_r16(SL_ScheduledConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_RNTI_r16 = 0;
}

void BuildSample_SetupRelease_SL_ScheduledConfig_r16(SetupRelease_SL_ScheduledConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_ScheduledConfig_r16_Tag_release;
}

void BuildSample_SL_CBR_CommonTxConfigList_r16(SL_CBR_CommonTxConfigList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PSSCH_TxConfigList_r16(SL_PSSCH_TxConfigList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_PSSCH_TxConfig_r16*)std::malloc((std::size_t)value.count * sizeof(SL_PSSCH_TxConfig_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_PSSCH_TxConfig_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_PSSCH_TxConfig_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_UE_SelectedConfig_r16(SL_UE_SelectedConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_UE_SelectedConfig_r16(SetupRelease_SL_UE_SelectedConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_UE_SelectedConfig_r16_Tag_release;
}

void BuildSample_SL_PHY_MAC_RLC_Config_r16(SL_PHY_MAC_RLC_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_ConfigDedicatedNR_r16(SL_ConfigDedicatedNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_ConfigDedicatedNR_r16(SetupRelease_SL_ConfigDedicatedNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_ConfigDedicatedNR_r16_Tag_release;
}

void BuildSample_SL_ConfigDedicatedEUTRA_Info_r16(SL_ConfigDedicatedEUTRA_Info_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16(SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag_release;
}

void BuildSample_RRCReconfiguration_v1610_IEs(RRCReconfiguration_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.dedicatedPosSysInfoDelivery_r16 = (PosSystemInformation_r16_IEs*)std::malloc(sizeof(PosSystemInformation_r16_IEs));
        if (value.dedicatedPosSysInfoDelivery_r16 != nullptr) {
            BuildSample_PosSystemInformation_r16_IEs(*value.dedicatedPosSysInfoDelivery_r16, depth + 1);
        }
    }
}

void BuildSample_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup(MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag_nr_SCG;
    value.u.nr_SCG = (RRCReconfiguration*)std::malloc(sizeof(RRCReconfiguration));
    if (value.u.nr_SCG != nullptr) {
        BuildSample_RRCReconfiguration(*value.u.nr_SCG, depth + 1);
    }
}

void BuildSample_MRDC_SecondaryCellGroupConfig(MRDC_SecondaryCellGroupConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup(value.mrdc_SecondaryCellGroup, depth + 1);
}

void BuildSample_SetupRelease_MRDC_SecondaryCellGroupConfig(SetupRelease_MRDC_SecondaryCellGroupConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MRDC_SecondaryCellGroupConfig_Tag_release;
}

void BuildSample_RRCReconfiguration_v1560_IEs(RRCReconfiguration_v1560_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.radioBearerConfig2 = (RadioBearerConfig*)std::malloc(sizeof(RadioBearerConfig));
        if (value.radioBearerConfig2 != nullptr) {
            BuildSample_RadioBearerConfig(*value.radioBearerConfig2, depth + 1);
        }
    }
}

void BuildSample_OverheatingAssistanceConfig(OverheatingAssistanceConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.overheatingIndicationProhibitTimer = OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s0;
}

void BuildSample_SetupRelease_OverheatingAssistanceConfig(SetupRelease_OverheatingAssistanceConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_OverheatingAssistanceConfig_Tag_release;
}

void BuildSample_OtherConfig_v1540(OtherConfig_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReconfiguration_v1540_IEs(RRCReconfiguration_v1540_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MasterKeyUpdate(MasterKeyUpdate& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.keySetChangeIndicator = true;
    value.nextHopChainingCount = 0;
}

void BuildSample_OtherConfig_DelayBudgetReportingConfig_Setup(OtherConfig_DelayBudgetReportingConfig_Setup& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.delayBudgetReportingProhibitTimer = OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer_s0;
}

void BuildSample_OtherConfig_DelayBudgetReportingConfig(OtherConfig_DelayBudgetReportingConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = OtherConfig_DelayBudgetReportingConfig_Tag_release;
}

void BuildSample_OtherConfig(OtherConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReconfiguration_v1530_IEs(RRCReconfiguration_v1530_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.masterCellGroup = (CellGroupConfig*)std::malloc(sizeof(CellGroupConfig));
        if (value.masterCellGroup != nullptr) {
            BuildSample_CellGroupConfig(*value.masterCellGroup, depth + 1);
        }
    }
    if (depth < 2) {
        value.dedicatedSIB1_Delivery = (SIB1*)std::malloc(sizeof(SIB1));
        if (value.dedicatedSIB1_Delivery != nullptr) {
            BuildSample_SIB1(*value.dedicatedSIB1_Delivery, depth + 1);
        }
    }
    if (depth < 2) {
        value.dedicatedSystemInformationDelivery = (SystemInformation*)std::malloc(sizeof(SystemInformation));
        if (value.dedicatedSystemInformationDelivery != nullptr) {
            BuildSample_SystemInformation(*value.dedicatedSystemInformationDelivery, depth + 1);
        }
    }
}

void BuildSample_MeasWindowConfig_r18_WindowOffsetPeriodicity(MeasWindowConfig_r18_WindowOffsetPeriodicity& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag_periodicityMs40;
    value.u.periodicityMs40 = 0;
}

void BuildSample_MeasWindowConfig_r18(MeasWindowConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasWindowConfig_r18_WindowOffsetPeriodicity(value.windowOffsetPeriodicity, depth + 1);
    value.windowDuration = MeasWindowConfig_r18_WindowDuration_ms2;
}

void BuildSample_SetupRelease_MeasWindowConfig_r18(SetupRelease_MeasWindowConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MeasWindowConfig_r18_Tag_release;
}

void BuildSample_MeasObjectToRemoveList(MeasObjectToRemoveList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasObjectId*)std::malloc((std::size_t)value.count * sizeof(MeasObjectId));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasObjectId));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_MeasIdToRemoveList(MeasIdToRemoveList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasId*)std::malloc((std::size_t)value.count * sizeof(MeasId));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasId));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_ReportConfigToRemoveList(ReportConfigToRemoveList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ReportConfigId*)std::malloc((std::size_t)value.count * sizeof(ReportConfigId));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ReportConfigId));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_PosMeasGapPreConfigToAddModList_r17(PosMeasGapPreConfigToAddModList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PosGapConfig_r17*)std::malloc((std::size_t)value.count * sizeof(PosGapConfig_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PosGapConfig_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PosGapConfig_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PosMeasGapPreConfigToReleaseList_r17(PosMeasGapPreConfigToReleaseList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasPosPreConfigGapId_r17*)std::malloc((std::size_t)value.count * sizeof(MeasPosPreConfigGapId_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasPosPreConfigGapId_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_GapConfig(GapConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.gapOffset = 0;
    value.mgl = GapConfig_Mgl_ms1dot5;
    value.mgrp = GapConfig_Mgrp_ms20;
    value.mgta = GapConfig_Mgta_ms0;
}

void BuildSample_SetupRelease_GapConfig(SetupRelease_GapConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_GapConfig_Tag_release;
}

void BuildSample_MeasGapConfig(MeasGapConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_MeasGapSharingScheme(SetupRelease_MeasGapSharingScheme& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MeasGapSharingScheme_Tag_release;
}

void BuildSample_MeasGapSharingConfig(MeasGapSharingConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasIdToAddModList(MeasIdToAddModList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasIdToAddMod*)std::malloc((std::size_t)value.count * sizeof(MeasIdToAddMod));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasIdToAddMod));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasIdToAddMod(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasObjectToAddModList(MeasObjectToAddModList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasObjectToAddMod*)std::malloc((std::size_t)value.count * sizeof(MeasObjectToAddMod));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasObjectToAddMod));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasObjectToAddMod(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FilterConfig(FilterConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.filterCoefficientRSRP = FilterCoefficient_fc4;
    value.filterCoefficientRSRQ = FilterCoefficient_fc4;
    value.filterCoefficientRS_SINR = FilterCoefficient_fc4;
}

void BuildSample_FilterConfigCLI_r16(FilterConfigCLI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.filterCoefficientSRS_RSRP_r16 = FilterCoefficient_fc4;
    value.filterCoefficientCLI_RSSI_r16 = FilterCoefficient_fc4;
}

void BuildSample_QuantityConfigUTRA_FDD_r16(QuantityConfigUTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.filterCoefficientRSCP_r16 = FilterCoefficient_fc4;
    value.filterCoefficientEcNO_r16 = FilterCoefficient_fc4;
}

void BuildSample_QuantityConfig(QuantityConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ReportConfigToAddModList(ReportConfigToAddModList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ReportConfigToAddMod*)std::malloc((std::size_t)value.count * sizeof(ReportConfigToAddMod));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ReportConfigToAddMod));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_ReportConfigToAddMod(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasConfig_S_MeasureConfig(MeasConfig_S_MeasureConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasConfig_S_MeasureConfig_Tag_ssb_RSRP;
    value.u.ssb_RSRP = 0;
}

void BuildSample_MeasConfig(MeasConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_DiscardTimerExt_r16(SetupRelease_DiscardTimerExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DiscardTimerExt_r16_Tag_release;
}

void BuildSample_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16(PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_EthernetHeaderCompression_r16_Ehc_Common_r16(EthernetHeaderCompression_r16_Ehc_Common_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ehc_CID_Length_r16 = EthernetHeaderCompression_r16_Ehc_Common_r16_Ehc_CID_Length_r16_bits7;
}

void BuildSample_EthernetHeaderCompression_r16_Ehc_Downlink_r16(EthernetHeaderCompression_r16_Ehc_Downlink_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_EthernetHeaderCompression_r16_Ehc_Uplink_r16(EthernetHeaderCompression_r16_Ehc_Uplink_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxCID_EHC_UL_r16 = 1;
}

void BuildSample_EthernetHeaderCompression_r16(EthernetHeaderCompression_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_EthernetHeaderCompression_r16_Ehc_Common_r16(value.ehc_Common_r16, depth + 1);
}

void BuildSample_SetupRelease_EthernetHeaderCompression_r16(SetupRelease_EthernetHeaderCompression_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_EthernetHeaderCompression_r16_Tag_release;
}

void BuildSample_UplinkDataCompression_r17_NewSetup(UplinkDataCompression_r17_NewSetup& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bufferSize_r17 = UplinkDataCompression_r17_NewSetup_BufferSize_r17_kbyte2;
}

void BuildSample_UplinkDataCompression_r17(UplinkDataCompression_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UplinkDataCompression_r17_Tag_newSetup;
    BuildSample_UplinkDataCompression_r17_NewSetup(value.u.newSetup, depth + 1);
}

void BuildSample_SetupRelease_UplinkDataCompression_r17(SetupRelease_UplinkDataCompression_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UplinkDataCompression_r17_Tag_release;
}

void BuildSample_SetupRelease_DiscardTimerExt2_r17(SetupRelease_DiscardTimerExt2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DiscardTimerExt2_r17_Tag_release;
}

void BuildSample_SetupRelease_DiscardTimerForLowImportance_r18(SetupRelease_DiscardTimerForLowImportance_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DiscardTimerForLowImportance_r18_Tag_release;
}

void BuildSample_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles(PDCP_Config_Drb_HeaderCompression_Rohc_Profiles& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.profile0x0001 = true;
    value.profile0x0002 = true;
    value.profile0x0003 = true;
    value.profile0x0004 = true;
    value.profile0x0006 = true;
    value.profile0x0101 = true;
    value.profile0x0102 = true;
    value.profile0x0103 = true;
    value.profile0x0104 = true;
}

void BuildSample_PDCP_Config_Drb_HeaderCompression_Rohc(PDCP_Config_Drb_HeaderCompression_Rohc& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxCID = 15;
    BuildSample_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles(value.profiles, depth + 1);
}

void BuildSample_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles(PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.profile0x0006 = true;
}

void BuildSample_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC(PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxCID = 15;
    BuildSample_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles(value.profiles, depth + 1);
}

void BuildSample_PDCP_Config_Drb_HeaderCompression(PDCP_Config_Drb_HeaderCompression& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PDCP_Config_Drb_HeaderCompression_Tag_notUsed;
}

void BuildSample_PDCP_Config_Drb(PDCP_Config_Drb& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PDCP_Config_Drb_HeaderCompression(value.headerCompression, depth + 1);
}

void BuildSample_PDCP_Config_MoreThanOneRLC_PrimaryPath(PDCP_Config_MoreThanOneRLC_PrimaryPath& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCP_Config_MoreThanOneRLC(PDCP_Config_MoreThanOneRLC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PDCP_Config_MoreThanOneRLC_PrimaryPath(value.primaryPath, depth + 1);
}

void BuildSample_PDCP_Config(PDCP_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRB_ToAddMod(SRB_ToAddMod& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srb_Identity = 1;
}

void BuildSample_MRB_ToAddModList_r17(MRB_ToAddModList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MRB_ToAddMod_r17*)std::malloc((std::size_t)value.count * sizeof(MRB_ToAddMod_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MRB_ToAddMod_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MRB_ToAddMod_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MRB_ToReleaseList_r17(MRB_ToReleaseList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MRB_Identity_r17*)std::malloc((std::size_t)value.count * sizeof(MRB_Identity_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MRB_Identity_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SRB_ToAddModList(SRB_ToAddModList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SRB_ToAddMod*)std::malloc((std::size_t)value.count * sizeof(SRB_ToAddMod));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRB_ToAddMod));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SRB_ToAddMod(value.items[i], depth + 1);
        }
    }
}

void BuildSample_DRB_ToAddModList(DRB_ToAddModList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (DRB_ToAddMod*)std::malloc((std::size_t)value.count * sizeof(DRB_ToAddMod));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(DRB_ToAddMod));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_DRB_ToAddMod(value.items[i], depth + 1);
        }
    }
}

void BuildSample_DRB_ToReleaseList(DRB_ToReleaseList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (DRB_Identity*)std::malloc((std::size_t)value.count * sizeof(DRB_Identity));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(DRB_Identity));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SecurityAlgorithmConfig(SecurityAlgorithmConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cipheringAlgorithm = CipheringAlgorithm_nea0;
}

void BuildSample_SecurityConfig(SecurityConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RadioBearerConfig(RadioBearerConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReconfiguration_IEs(RRCReconfiguration_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.secondaryCellGroup = (CellGroupConfig*)std::malloc(sizeof(CellGroupConfig));
        if (value.secondaryCellGroup != nullptr) {
            BuildSample_CellGroupConfig(*value.secondaryCellGroup, depth + 1);
        }
    }
}

void BuildSample_RRCReconfiguration_CriticalExtensionsFuture(RRCReconfiguration_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCReconfiguration_CriticalExtensions(RRCReconfiguration_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCReconfiguration_CriticalExtensions_Tag_rrcReconfiguration;
    BuildSample_RRCReconfiguration_IEs(value.u.rrcReconfiguration, depth + 1);
}

void BuildSample_RRCReconfiguration(RRCReconfiguration& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_RRCReconfiguration_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_IAB_IP_AddressConfiguration_r16(IAB_IP_AddressConfiguration_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.iab_IP_AddressIndex_r16 = 1;
}

void BuildSample_NeedForInterruptionIntraFreqList_r18(NeedForInterruptionIntraFreqList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NeedForInterruptionNR_r18*)std::malloc((std::size_t)value.count * sizeof(NeedForInterruptionNR_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForInterruptionNR_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NeedForInterruptionNR_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NeedForInterruptionBandListNR_r18(NeedForInterruptionBandListNR_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NeedForInterruptionNR_r18*)std::malloc((std::size_t)value.count * sizeof(NeedForInterruptionNR_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForInterruptionNR_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NeedForInterruptionNR_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NeedForInterruptionInfoNR_r18(NeedForInterruptionInfoNR_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_NeedForInterruptionIntraFreqList_r18(value.intraFreq_needForInterruption_r18, depth + 1);
    BuildSample_NeedForInterruptionBandListNR_r18(value.interFreq_needForInterruption_r18, depth + 1);
}

void BuildSample_SelectedPSCellForCHO_WithSCG_r18(SelectedPSCellForCHO_WithSCG_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssbFrequency_r18 = 0;
    value.physCellId_r18 = 0;
}

void BuildSample_RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension(RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCReconfigurationComplete_v1800_IEs(RRCReconfigurationComplete_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UplinkTxDirectCurrentMoreCarrierList_r17(UplinkTxDirectCurrentMoreCarrierList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CC_Group_r17*)std::malloc((std::size_t)value.count * sizeof(CC_Group_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CC_Group_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CC_Group_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_RRCReconfigurationComplete_v1720_IEs(RRCReconfigurationComplete_v1720_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NeedForGapNCSG_InfoEUTRA_r17(NeedForGapNCSG_InfoEUTRA_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.needForNCSG_EUTRA_r17_count = 0u;
}

void BuildSample_NeedForNCSG_IntraFreqList_r17(NeedForNCSG_IntraFreqList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NeedForNCSG_IntraFreq_r17*)std::malloc((std::size_t)value.count * sizeof(NeedForNCSG_IntraFreq_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForNCSG_IntraFreq_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NeedForNCSG_IntraFreq_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NeedForNCSG_BandListNR_r17(NeedForNCSG_BandListNR_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NeedForNCSG_NR_r17*)std::malloc((std::size_t)value.count * sizeof(NeedForNCSG_NR_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForNCSG_NR_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NeedForNCSG_NR_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NeedForGapNCSG_InfoNR_r17(NeedForGapNCSG_InfoNR_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_NeedForNCSG_IntraFreqList_r17(value.intraFreq_needForNCSG_r17, depth + 1);
    BuildSample_NeedForNCSG_BandListNR_r17(value.interFreq_needForNCSG_r17, depth + 1);
}

void BuildSample_RRCReconfigurationComplete_v1700_IEs(RRCReconfigurationComplete_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UplinkTxDirectCurrentTwoCarrierList_r16(UplinkTxDirectCurrentTwoCarrierList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UplinkTxDirectCurrentTwoCarrier_r16*)std::malloc((std::size_t)value.count * sizeof(UplinkTxDirectCurrentTwoCarrier_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UplinkTxDirectCurrentTwoCarrier_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UplinkTxDirectCurrentTwoCarrier_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_RRCReconfigurationComplete_v1640_IEs(RRCReconfigurationComplete_v1640_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NeedForGapsIntraFreqList_r16(NeedForGapsIntraFreqList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NeedForGapsIntraFreq_r16*)std::malloc((std::size_t)value.count * sizeof(NeedForGapsIntraFreq_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForGapsIntraFreq_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NeedForGapsIntraFreq_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NeedForGapsBandListNR_r16(NeedForGapsBandListNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NeedForGapsNR_r16*)std::malloc((std::size_t)value.count * sizeof(NeedForGapsNR_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForGapsNR_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NeedForGapsNR_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NeedForGapsInfoNR_r16(NeedForGapsInfoNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_NeedForGapsIntraFreqList_r16(value.intraFreq_needForGap_r16, depth + 1);
    BuildSample_NeedForGapsBandListNR_r16(value.interFreq_needForGap_r16, depth + 1);
}

void BuildSample_RRCReconfigurationComplete_v1610_IEs(RRCReconfigurationComplete_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReconfigurationComplete_v1560_IEs_Scg_Response(RRCReconfigurationComplete_v1560_IEs_Scg_Response& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag_nr_SCG_Response;
    value.u.nr_SCG_Response = (RRCReconfigurationComplete*)std::malloc(sizeof(RRCReconfigurationComplete));
    if (value.u.nr_SCG_Response != nullptr) {
        BuildSample_RRCReconfigurationComplete(*value.u.nr_SCG_Response, depth + 1);
    }
}

void BuildSample_RRCReconfigurationComplete_v1560_IEs(RRCReconfigurationComplete_v1560_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UplinkTxDirectCurrentList(UplinkTxDirectCurrentList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UplinkTxDirectCurrentCell*)std::malloc((std::size_t)value.count * sizeof(UplinkTxDirectCurrentCell));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UplinkTxDirectCurrentCell));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UplinkTxDirectCurrentCell(value.items[i], depth + 1);
        }
    }
}

void BuildSample_RRCReconfigurationComplete_v1530_IEs(RRCReconfigurationComplete_v1530_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReconfigurationComplete_IEs(RRCReconfigurationComplete_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReconfigurationComplete_CriticalExtensionsFuture(RRCReconfigurationComplete_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCReconfigurationComplete_CriticalExtensions(RRCReconfigurationComplete_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCReconfigurationComplete_CriticalExtensions_Tag_rrcReconfigurationComplete;
    BuildSample_RRCReconfigurationComplete_IEs(value.u.rrcReconfigurationComplete, depth + 1);
}

void BuildSample_RRCReconfigurationComplete(RRCReconfigurationComplete& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_RRCReconfigurationComplete_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_RRCReject_IEs_NonCriticalExtension(RRCReject_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCReject_IEs(RRCReject_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCReject_CriticalExtensionsFuture(RRCReject_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCReject_CriticalExtensions(RRCReject_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCReject_CriticalExtensions_Tag_rrcReject;
    BuildSample_RRCReject_IEs(value.u.rrcReject, depth + 1);
}

void BuildSample_RRCReject(RRCReject& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RRCReject_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_RRCRelease_v1710_IEs_NonCriticalExtension(RRCRelease_v1710_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCRelease_v1710_IEs(RRCRelease_v1710_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCRelease_v1650_IEs(RRCRelease_v1650_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ValidityAreaList_r16(ValidityAreaList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ValidityArea_r16*)std::malloc((std::size_t)value.count * sizeof(ValidityArea_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ValidityArea_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_ValidityArea_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasIdleConfigDedicated_r16(MeasIdleConfigDedicated_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measIdleDuration_r16 = MeasIdleConfigDedicated_r16_MeasIdleDuration_r16_sec10;
}

void BuildSample_SetupRelease_MeasIdleConfigDedicated_r16(SetupRelease_MeasIdleConfigDedicated_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MeasIdleConfigDedicated_r16_Tag_release;
}

void BuildSample_RRCRelease_v1610_IEs(RRCRelease_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCRelease_v1540_IEs(RRCRelease_v1540_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RedirectedCarrierInfo_EUTRA(RedirectedCarrierInfo_EUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.eutraFrequency = 0;
}

void BuildSample_CarrierInfoNR(CarrierInfoNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq = 0;
    value.ssbSubcarrierSpacing = SubcarrierSpacing_kHz15;
}

void BuildSample_RedirectedCarrierInfo(RedirectedCarrierInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RedirectedCarrierInfo_Tag_nr;
    BuildSample_CarrierInfoNR(value.u.nr, depth + 1);
}

void BuildSample_SetupRelease_SDT_CG_Config_r17(SetupRelease_SDT_CG_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SDT_CG_Config_r17_Tag_release;
}

void BuildSample_SDT_Config_r17(SDT_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SDT_Config_r17(SetupRelease_SDT_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SDT_Config_r17_Tag_release;
}

void BuildSample_SetupRelease_SRS_PosRRC_Inactive_r17(SetupRelease_SRS_PosRRC_Inactive_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_PosRRC_Inactive_r17_Tag_release;
}

void BuildSample_NonCellDefiningSSB_r17(NonCellDefiningSSB_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.absoluteFrequencySSB_r17 = 0;
}

void BuildSample_SetupRelease_NonCellDefiningSSB_r17(SetupRelease_NonCellDefiningSSB_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_NonCellDefiningSSB_r17_Tag_release;
}

void BuildSample_ExtendedPagingCycleConfig_r18(ExtendedPagingCycleConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.extendedPagingCycle_r18 = ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf2;
    value.pagingPTWLength_r18 = ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms1280;
}

void BuildSample_SRS_PosRRC_AggBW_InactiveConfigList_r18(SRS_PosRRC_AggBW_InactiveConfigList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SRS_PosResourceSetLinkedForAggBW_r18*)std::malloc((std::size_t)value.count * sizeof(SRS_PosResourceSetLinkedForAggBW_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRS_PosResourceSetLinkedForAggBW_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SRS_PosResourceSetLinkedForAggBW_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18(SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag_release;
}

void BuildSample_SRS_PosConfig_r17(SRS_PosConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BWP(BWP& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.locationAndBandwidth = 0;
    value.subcarrierSpacing = SubcarrierSpacing_kHz15;
}

void BuildSample_SRS_PeriodicityAndOffset_r16(SRS_PeriodicityAndOffset_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_PeriodicityAndOffset_r16_Tag_sl1;
}

void BuildSample_SRS_PeriodicityAndOffsetExt_r16(SRS_PeriodicityAndOffsetExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_PeriodicityAndOffsetExt_r16_Tag_sl128;
    value.u.sl128 = 0;
}

void BuildSample_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18(SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag_periodicityAndOffset_r18;
    BuildSample_SRS_PeriodicityAndOffset_r16(value.u.periodicityAndOffset_r18, depth + 1);
}

void BuildSample_SRS_PosUplinkTransmissionWindowConfig_r18(SRS_PosUplinkTransmissionWindowConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.startSFN_r18 = 0;
    BuildSample_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18(value.windowPeriodicityAndOffset_r18, depth + 1);
    value.duration_r18 = SRS_PosUplinkTransmissionWindowConfig_r18_Duration_r18_s1;
}

void BuildSample_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18(SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag_release;
}

void BuildSample_SRS_PosTx_Hopping_r18(SRS_PosTx_Hopping_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_PosConfig_r17(value.srs_PosConfig_r18, depth + 1);
}

void BuildSample_SetupRelease_SRS_PosTx_Hopping_r18(SetupRelease_SRS_PosTx_Hopping_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_PosTx_Hopping_r18_Tag_release;
}

void BuildSample_SRS_PosRRC_Inactive_v1800(SRS_PosRRC_Inactive_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SRS_PosRRC_Inactive_v1800(SetupRelease_SRS_PosRRC_Inactive_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_PosRRC_Inactive_v1800_Tag_release;
}

void BuildSample_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(SRS_PosRRC_InactiveValidityAreaPreConfigList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SRS_PosRRC_InactiveValidityAreaConfig_r18*)std::malloc((std::size_t)value.count * sizeof(SRS_PosRRC_InactiveValidityAreaConfig_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRS_PosRRC_InactiveValidityAreaConfig_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SRS_PosRRC_InactiveValidityAreaConfig_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag_release;
}

void BuildSample_AreaValidityTA_Config_r18(AreaValidityTA_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.inactivePosSRS_ValidityAreaTAT_r18 = AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18_ms1280;
}

void BuildSample_SRS_PosRRC_InactiveValidityAreaConfig_r18(SRS_PosRRC_InactiveValidityAreaConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_PosConfigValidityArea_r18_count = 0u;
}

void BuildSample_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18(SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag_release;
}

void BuildSample_MulticastConfigInactive_r18(MulticastConfigInactive_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.inactivePTM_Config_r18 = (MBSMulticastConfiguration_r18*)std::malloc(sizeof(MBSMulticastConfiguration_r18));
        if (value.inactivePTM_Config_r18 != nullptr) {
            BuildSample_MBSMulticastConfiguration_r18(*value.inactivePTM_Config_r18, depth + 1);
        }
    }
    if (depth < 2) {
        value.inactiveMCCH_Config_r18 = (SystemInformation*)std::malloc(sizeof(SystemInformation));
        if (value.inactiveMCCH_Config_r18 != nullptr) {
            BuildSample_SystemInformation(*value.inactiveMCCH_Config_r18, depth + 1);
        }
    }
}

void BuildSample_SetupRelease_MulticastConfigInactive_r18(SetupRelease_MulticastConfigInactive_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MulticastConfigInactive_r18_Tag_release;
}

void BuildSample_PLMN_RAN_AreaCellList(PLMN_RAN_AreaCellList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PLMN_RAN_AreaCell*)std::malloc((std::size_t)value.count * sizeof(PLMN_RAN_AreaCell));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_RAN_AreaCell));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PLMN_RAN_AreaCell(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PLMN_RAN_AreaConfigList(PLMN_RAN_AreaConfigList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PLMN_RAN_AreaConfig*)std::malloc((std::size_t)value.count * sizeof(PLMN_RAN_AreaConfig));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_RAN_AreaConfig));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PLMN_RAN_AreaConfig(value.items[i], depth + 1);
        }
    }
}

void BuildSample_RAN_NotificationAreaInfo(RAN_NotificationAreaInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RAN_NotificationAreaInfo_Tag_cellList;
    BuildSample_PLMN_RAN_AreaCellList(value.u.cellList, depth + 1);
}

void BuildSample_SuspendConfig(SuspendConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.fullI_RNTI.bitLength = 40u;
    value.fullI_RNTI.bytes = (std::uint8_t*)std::malloc(5u);
    if (value.fullI_RNTI.bytes != nullptr) {
        std::memset(value.fullI_RNTI.bytes, 0, 5u);
    }
    value.shortI_RNTI.bitLength = 24u;
    value.shortI_RNTI.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.shortI_RNTI.bytes != nullptr) {
        std::memset(value.shortI_RNTI.bytes, 0, 3u);
    }
    value.ran_PagingCycle = PagingCycle_rf32;
    value.nextHopChainingCount = 0;
}

void BuildSample_FreqPriorityListDedicatedSlicing_r17(FreqPriorityListDedicatedSlicing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (FreqPriorityDedicatedSlicing_r17*)std::malloc((std::size_t)value.count * sizeof(FreqPriorityDedicatedSlicing_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqPriorityDedicatedSlicing_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_FreqPriorityDedicatedSlicing_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FreqPriorityListEUTRA(FreqPriorityListEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (FreqPriorityEUTRA*)std::malloc((std::size_t)value.count * sizeof(FreqPriorityEUTRA));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqPriorityEUTRA));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_FreqPriorityEUTRA(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FreqPriorityListNR(FreqPriorityListNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (FreqPriorityNR*)std::malloc((std::size_t)value.count * sizeof(FreqPriorityNR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqPriorityNR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_FreqPriorityNR(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CellReselectionPriorities(CellReselectionPriorities& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCRelease_IEs_DeprioritisationReq(RRCRelease_IEs_DeprioritisationReq& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.deprioritisationType = RRCRelease_IEs_DeprioritisationReq_DeprioritisationType_frequency;
    value.deprioritisationTimer = RRCRelease_IEs_DeprioritisationReq_DeprioritisationTimer_min5;
}

void BuildSample_RRCRelease_IEs(RRCRelease_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCRelease_CriticalExtensionsFuture(RRCRelease_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCRelease_CriticalExtensions(RRCRelease_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCRelease_CriticalExtensions_Tag_rrcRelease;
    BuildSample_RRCRelease_IEs(value.u.rrcRelease, depth + 1);
}

void BuildSample_RRCRelease(RRCRelease& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_RRCRelease_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_FreqPriorityEUTRA(FreqPriorityEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq = 0;
    value.cellReselectionPriority = 0;
}

void BuildSample_FreqPriorityNR(FreqPriorityNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq = 0;
    value.cellReselectionPriority = 0;
}

void BuildSample_PLMN_RAN_AreaCell(PLMN_RAN_AreaCell& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ran_AreaCells_count = 0u;
}

void BuildSample_PLMN_RAN_AreaConfig(PLMN_RAN_AreaConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ran_Area_count = 0u;
}

void BuildSample_RAN_AreaConfig(RAN_AreaConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.trackingAreaCode.bitLength = 24u;
    value.trackingAreaCode.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.trackingAreaCode.bytes != nullptr) {
        std::memset(value.trackingAreaCode.bytes, 0, 3u);
    }
}

void BuildSample_SearchSpaceSwitchConfig_r16(SearchSpaceSwitchConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UplinkCancellation_r16(UplinkCancellation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ci_RNTI_r16 = 0;
    value.dci_PayloadSizeForCI_r16 = 0;
    value.ci_ConfigurationPerServingCell_r16_count = 0u;
}

void BuildSample_SetupRelease_UplinkCancellation_r16(SetupRelease_UplinkCancellation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UplinkCancellation_r16_Tag_release;
}

void BuildSample_SearchSpaceSwitchConfig_r17(SearchSpaceSwitchConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DownlinkPreemption(DownlinkPreemption& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.int_RNTI = 0;
    value.timeFrequencySet = DownlinkPreemption_TimeFrequencySet_set0;
    value.dci_PayloadSize = 0;
    value.int_ConfigurationPerServingCell_count = 0u;
}

void BuildSample_SetupRelease_DownlinkPreemption(SetupRelease_DownlinkPreemption& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DownlinkPreemption_Tag_release;
}

void BuildSample_PUSCH_TPC_CommandConfig(PUSCH_TPC_CommandConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PUSCH_TPC_CommandConfig(SetupRelease_PUSCH_TPC_CommandConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUSCH_TPC_CommandConfig_Tag_release;
}

void BuildSample_PUCCH_TPC_CommandConfig(PUCCH_TPC_CommandConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PUCCH_TPC_CommandConfig(SetupRelease_PUCCH_TPC_CommandConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUCCH_TPC_CommandConfig_Tag_release;
}

void BuildSample_SRS_TPC_CommandConfig(SRS_TPC_CommandConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SRS_TPC_CommandConfig(SetupRelease_SRS_TPC_CommandConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_TPC_CommandConfig_Tag_release;
}

void BuildSample_PDCCH_Config(PDCCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PDCCH_Config(SetupRelease_PDCCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDCCH_Config_Tag_release;
}

void BuildSample_RateMatchPatternGroup(RateMatchPatternGroup& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (RateMatchPatternGroup_Item*)std::malloc((std::size_t)value.count * sizeof(RateMatchPatternGroup_Item));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(RateMatchPatternGroup_Item));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_RateMatchPatternGroup_Item(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PTRS_DownlinkConfig(PTRS_DownlinkConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PTRS_DownlinkConfig(SetupRelease_PTRS_DownlinkConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PTRS_DownlinkConfig_Tag_release;
}

void BuildSample_DMRS_DownlinkConfig(DMRS_DownlinkConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_DMRS_DownlinkConfig(SetupRelease_DMRS_DownlinkConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DMRS_DownlinkConfig_Tag_release;
}

void BuildSample_SetupRelease_MaxMIMO_LayersDL_r16(SetupRelease_MaxMIMO_LayersDL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MaxMIMO_LayersDL_r16_Tag_release;
}

void BuildSample_MinSchedulingOffsetK0_Values_r16(MinSchedulingOffsetK0_Values_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_MinSchedulingOffsetK0_Values_r16(SetupRelease_MinSchedulingOffsetK0_Values_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag_release;
}

void BuildSample_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag_release;
}

void BuildSample_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16(PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16(PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16(PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag_staticBundling_r16;
    BuildSample_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16(value.u.staticBundling_r16, depth + 1);
}

void BuildSample_FDM_TDM_r16(FDM_TDM_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.repetitionScheme_r16 = FDM_TDM_r16_RepetitionScheme_r16_fdmSchemeA;
}

void BuildSample_SetupRelease_FDM_TDM_r16(SetupRelease_FDM_TDM_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_FDM_TDM_r16_Tag_release;
}

void BuildSample_SlotBased_r16(SlotBased_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tciMapping_r16 = SlotBased_r16_TciMapping_r16_cyclicMapping;
    value.sequenceOffsetForRV_r16 = 1;
}

void BuildSample_SetupRelease_SlotBased_r16(SetupRelease_SlotBased_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SlotBased_r16_Tag_release;
}

void BuildSample_RepetitionSchemeConfig_r16(RepetitionSchemeConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RepetitionSchemeConfig_r16_Tag_fdm_TDM_r16;
    BuildSample_SetupRelease_FDM_TDM_r16(value.u.fdm_TDM_r16, depth + 1);
}

void BuildSample_SetupRelease_RepetitionSchemeConfig_r16(SetupRelease_RepetitionSchemeConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RepetitionSchemeConfig_r16_Tag_release;
}

void BuildSample_SlotBased_v1630(SlotBased_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tciMapping_r16 = SlotBased_v1630_TciMapping_r16_cyclicMapping;
    value.sequenceOffsetForRV_r16 = 0;
}

void BuildSample_SetupRelease_SlotBased_v1630(SetupRelease_SlotBased_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SlotBased_v1630_Tag_release;
}

void BuildSample_RepetitionSchemeConfig_v1630(RepetitionSchemeConfig_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SetupRelease_SlotBased_v1630(value.slotBased_v1630, depth + 1);
}

void BuildSample_SetupRelease_RepetitionSchemeConfig_v1630(SetupRelease_RepetitionSchemeConfig_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RepetitionSchemeConfig_v1630_Tag_release;
}

void BuildSample_ServingCellAndBWP_Id_r17(ServingCellAndBWP_Id_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servingcell_r17 = 0;
    value.bwp_r17 = 0;
}

void BuildSample_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist(PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17(PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag_explicitlist;
    BuildSample_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist(value.u.explicitlist, depth + 1);
}

void BuildSample_Dummy_TDRA_List(Dummy_TDRA_List& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MultiPDSCH_TDRA_r17*)std::malloc((std::size_t)value.count * sizeof(MultiPDSCH_TDRA_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MultiPDSCH_TDRA_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MultiPDSCH_TDRA_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_Dummy_TDRA_List(SetupRelease_Dummy_TDRA_List& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_Dummy_TDRA_List_Tag_release;
}

void BuildSample_MinSchedulingOffsetK0_Values_r17(MinSchedulingOffsetK0_Values_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_MinSchedulingOffsetK0_Values_r17(SetupRelease_MinSchedulingOffsetK0_Values_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag_release;
}

void BuildSample_MultiPDSCH_TDRA_List_r17(MultiPDSCH_TDRA_List_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MultiPDSCH_TDRA_r17*)std::malloc((std::size_t)value.count * sizeof(MultiPDSCH_TDRA_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MultiPDSCH_TDRA_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MultiPDSCH_TDRA_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_MultiPDSCH_TDRA_List_r17(SetupRelease_MultiPDSCH_TDRA_List_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MultiPDSCH_TDRA_List_r17_Tag_release;
}

void BuildSample_AdvancedReceiver_MU_MIMO_r18(AdvancedReceiver_MU_MIMO_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_AdvancedReceiver_MU_MIMO_r18(SetupRelease_AdvancedReceiver_MU_MIMO_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag_release;
}

void BuildSample_PDSCH_ConfigDCI_1_3_r18(PDSCH_ConfigDCI_1_3_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PDSCH_ConfigDCI_1_3_r18(SetupRelease_PDSCH_ConfigDCI_1_3_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag_release;
}

void BuildSample_PDSCH_TimeDomainResourceAllocationList(PDSCH_TimeDomainResourceAllocationList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PDSCH_TimeDomainResourceAllocation*)std::malloc((std::size_t)value.count * sizeof(PDSCH_TimeDomainResourceAllocation));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PDSCH_TimeDomainResourceAllocation));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PDSCH_TimeDomainResourceAllocation(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_PDSCH_TimeDomainResourceAllocationList(SetupRelease_PDSCH_TimeDomainResourceAllocationList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag_release;
}

void BuildSample_PDSCH_Config_Prb_BundlingType_StaticBundling(PDSCH_Config_Prb_BundlingType_StaticBundling& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDSCH_Config_Prb_BundlingType_DynamicBundling(PDSCH_Config_Prb_BundlingType_DynamicBundling& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDSCH_Config_Prb_BundlingType(PDSCH_Config_Prb_BundlingType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PDSCH_Config_Prb_BundlingType_Tag_staticBundling;
    BuildSample_PDSCH_Config_Prb_BundlingType_StaticBundling(value.u.staticBundling, depth + 1);
}

void BuildSample_ZP_CSI_RS_ResourceSet(ZP_CSI_RS_ResourceSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.zp_CSI_RS_ResourceSetId = 0;
    value.zp_CSI_RS_ResourceIdList_count = 0u;
}

void BuildSample_SetupRelease_ZP_CSI_RS_ResourceSet(SetupRelease_ZP_CSI_RS_ResourceSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_ZP_CSI_RS_ResourceSet_Tag_release;
}

void BuildSample_PDSCH_Config(PDSCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resourceAllocation = PDSCH_Config_ResourceAllocation_resourceAllocationType0;
    value.rbg_Size = PDSCH_Config_Rbg_Size_config1;
    BuildSample_PDSCH_Config_Prb_BundlingType(value.prb_BundlingType, depth + 1);
}

void BuildSample_SetupRelease_PDSCH_Config(SetupRelease_PDSCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDSCH_Config_Tag_release;
}

void BuildSample_BWP_DownlinkDedicatedSDT_r17(BWP_DownlinkDedicatedSDT_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ConfiguredGrantConfigToAddModList_r16(ConfiguredGrantConfigToAddModList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ConfiguredGrantConfig*)std::malloc((std::size_t)value.count * sizeof(ConfiguredGrantConfig));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ConfiguredGrantConfig));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_ConfiguredGrantConfig(value.items[i], depth + 1);
        }
    }
}

void BuildSample_ConfiguredGrantConfigToReleaseList_r16(ConfiguredGrantConfigToReleaseList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ConfiguredGrantConfigIndex_r16*)std::malloc((std::size_t)value.count * sizeof(ConfiguredGrantConfigIndex_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ConfiguredGrantConfigIndex_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SDM_Scheme_r18(SDM_Scheme_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SFN_Scheme_r18(SFN_Scheme_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookTypeUL_r18(CodebookTypeUL_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookTypeUL_r18_Tag_codebook1_r18;
    value.u.codebook1_r18 = CodebookTypeUL_r18_Codebook1_r18_ng1n4n1;
}

void BuildSample_SetupRelease_CodebookTypeUL_r18(SetupRelease_CodebookTypeUL_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CodebookTypeUL_r18_Tag_release;
}

void BuildSample_UCI_OnPUSCH_ListDCI_0_1_r16(UCI_OnPUSCH_ListDCI_0_1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UCI_OnPUSCH*)std::malloc((std::size_t)value.count * sizeof(UCI_OnPUSCH));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UCI_OnPUSCH));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UCI_OnPUSCH(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag_release;
}

void BuildSample_PUSCH_ConfigDCI_0_3_r18(PUSCH_ConfigDCI_0_3_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PUSCH_ConfigDCI_0_3_r18(SetupRelease_PUSCH_ConfigDCI_0_3_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag_release;
}

void BuildSample_InvalidSymbolPattern_r16_Symbols_r16(InvalidSymbolPattern_r16_Symbols_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = InvalidSymbolPattern_r16_Symbols_r16_Tag_oneSlot;
    value.u.oneSlot.bitLength = 14u;
    value.u.oneSlot.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.u.oneSlot.bytes != nullptr) {
        std::memset(value.u.oneSlot.bytes, 0, 2u);
    }
}

void BuildSample_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16(InvalidSymbolPattern_r16_PeriodicityAndPattern_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n2;
    value.u.n2.bitLength = 2u;
    value.u.n2.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.n2.bytes != nullptr) {
        std::memset(value.u.n2.bytes, 0, 1u);
    }
}

void BuildSample_InvalidSymbolPattern_r16(InvalidSymbolPattern_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_InvalidSymbolPattern_r16_Symbols_r16(value.symbols_r16, depth + 1);
}

void BuildSample_PTRS_UplinkConfig_TransformPrecoderDisabled(PTRS_UplinkConfig_TransformPrecoderDisabled& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNrofPorts = PTRS_UplinkConfig_TransformPrecoderDisabled_MaxNrofPorts_n1;
    value.ptrs_Power = PTRS_UplinkConfig_TransformPrecoderDisabled_Ptrs_Power_p00;
}

void BuildSample_PTRS_UplinkConfig_TransformPrecoderEnabled(PTRS_UplinkConfig_TransformPrecoderEnabled& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sampleDensity_count = 0u;
}

void BuildSample_PTRS_UplinkConfig(PTRS_UplinkConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PTRS_UplinkConfig(SetupRelease_PTRS_UplinkConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PTRS_UplinkConfig_Tag_release;
}

void BuildSample_DMRS_UplinkConfig_TransformPrecodingDisabled(DMRS_UplinkConfig_TransformPrecodingDisabled& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DMRS_UplinkTransformPrecoding_r16(DMRS_UplinkTransformPrecoding_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_DMRS_UplinkTransformPrecoding_r16(SetupRelease_DMRS_UplinkTransformPrecoding_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag_release;
}

void BuildSample_DMRS_UplinkConfig_TransformPrecodingEnabled(DMRS_UplinkConfig_TransformPrecodingEnabled& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DMRS_UplinkConfig(DMRS_UplinkConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_DMRS_UplinkConfig(SetupRelease_DMRS_UplinkConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DMRS_UplinkConfig_Tag_release;
}

void BuildSample_MinSchedulingOffsetK2_Values_r16(MinSchedulingOffsetK2_Values_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_MinSchedulingOffsetK2_Values_r16(SetupRelease_MinSchedulingOffsetK2_Values_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag_release;
}

void BuildSample_UL_AccessConfigListDCI_0_1_r16(UL_AccessConfigListDCI_0_1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_UL_AccessConfigListDCI_0_1_r16(SetupRelease_UL_AccessConfigListDCI_0_1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag_release;
}

void BuildSample_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16(PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag_pusch_RepTypeA;
    value.u.pusch_RepTypeA = PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeA_intraSlot;
}

void BuildSample_FrequencyHoppingOffsetListsDCI_0_2_r16(FrequencyHoppingOffsetListsDCI_0_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16(SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag_release;
}

void BuildSample_UCI_OnPUSCH_ListDCI_0_2_r16(UCI_OnPUSCH_ListDCI_0_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UCI_OnPUSCH_DCI_0_2_r16*)std::malloc((std::size_t)value.count * sizeof(UCI_OnPUSCH_DCI_0_2_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UCI_OnPUSCH_DCI_0_2_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UCI_OnPUSCH_DCI_0_2_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16(SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag_release;
}

void BuildSample_PUSCH_TimeDomainResourceAllocationList_r16(PUSCH_TimeDomainResourceAllocationList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PUSCH_TimeDomainResourceAllocation_r16*)std::malloc((std::size_t)value.count * sizeof(PUSCH_TimeDomainResourceAllocation_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PUSCH_TimeDomainResourceAllocation_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PUSCH_TimeDomainResourceAllocation_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag_release;
}

void BuildSample_PUSCH_PowerControl_v1610_Olpc_ParameterSet(PUSCH_PowerControl_v1610_Olpc_ParameterSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PUSCH_PowerControl_v1610(PUSCH_PowerControl_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PUSCH_PowerControl_v1610(SetupRelease_PUSCH_PowerControl_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUSCH_PowerControl_v1610_Tag_release;
}

void BuildSample_UL_AccessConfigListDCI_0_2_r17(UL_AccessConfigListDCI_0_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_UL_AccessConfigListDCI_0_2_r17(SetupRelease_UL_AccessConfigListDCI_0_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag_release;
}

void BuildSample_BetaOffsetsCrossPri_r17(BetaOffsetsCrossPri_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 3u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_BetaOffsetsCrossPriSel_r17_Dynamic_r17(BetaOffsetsCrossPriSel_r17_Dynamic_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 4u;
    value.items = (BetaOffsetsCrossPri_r17*)std::malloc((std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BetaOffsetsCrossPri_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BetaOffsetsCrossPriSel_r17(BetaOffsetsCrossPriSel_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BetaOffsetsCrossPriSel_r17_Tag_dynamic_r17;
    BuildSample_BetaOffsetsCrossPriSel_r17_Dynamic_r17(value.u.dynamic_r17, depth + 1);
}

void BuildSample_SetupRelease_BetaOffsetsCrossPriSel_r17(SetupRelease_BetaOffsetsCrossPriSel_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_BetaOffsetsCrossPriSel_r17_Tag_release;
}

void BuildSample_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17(BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 2u;
    value.items = (BetaOffsetsCrossPri_r17*)std::malloc((std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BetaOffsetsCrossPri_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17(BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 4u;
    value.items = (BetaOffsetsCrossPri_r17*)std::malloc((std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BetaOffsetsCrossPri_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17(BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag_oneBit_r17;
    BuildSample_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17(value.u.oneBit_r17, depth + 1);
}

void BuildSample_BetaOffsetsCrossPriSelDCI_0_2_r17(BetaOffsetsCrossPriSelDCI_0_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_dynamicDCI_0_2_r17;
    BuildSample_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17(value.u.dynamicDCI_0_2_r17, depth + 1);
}

void BuildSample_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_release;
}

void BuildSample_UL_AccessConfigListDCI_0_1_r17(UL_AccessConfigListDCI_0_1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_UL_AccessConfigListDCI_0_1_r17(SetupRelease_UL_AccessConfigListDCI_0_1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag_release;
}

void BuildSample_MinSchedulingOffsetK2_Values_r17(MinSchedulingOffsetK2_Values_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_MinSchedulingOffsetK2_Values_r17(SetupRelease_MinSchedulingOffsetK2_Values_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag_release;
}

void BuildSample_DMRS_BundlingPUSCH_Config_r17(DMRS_BundlingPUSCH_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_DMRS_BundlingPUSCH_Config_r17(SetupRelease_DMRS_BundlingPUSCH_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag_release;
}

void BuildSample_PUSCH_PowerControl(PUSCH_PowerControl& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PUSCH_TimeDomainResourceAllocationList(PUSCH_TimeDomainResourceAllocationList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PUSCH_TimeDomainResourceAllocation*)std::malloc((std::size_t)value.count * sizeof(PUSCH_TimeDomainResourceAllocation));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PUSCH_TimeDomainResourceAllocation));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PUSCH_TimeDomainResourceAllocation(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_PUSCH_TimeDomainResourceAllocationList(SetupRelease_PUSCH_TimeDomainResourceAllocationList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag_release;
}

void BuildSample_BetaOffsets(BetaOffsets& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UCI_OnPUSCH_BetaOffsets_Dynamic(UCI_OnPUSCH_BetaOffsets_Dynamic& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 4u;
    value.items = (BetaOffsets*)std::malloc((std::size_t)value.count * sizeof(BetaOffsets));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsets));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BetaOffsets(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UCI_OnPUSCH_BetaOffsets(UCI_OnPUSCH_BetaOffsets& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UCI_OnPUSCH_BetaOffsets_Tag_dynamic;
    BuildSample_UCI_OnPUSCH_BetaOffsets_Dynamic(value.u.dynamic, depth + 1);
}

void BuildSample_UCI_OnPUSCH(UCI_OnPUSCH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.scaling = UCI_OnPUSCH_Scaling_f0p5;
}

void BuildSample_SetupRelease_UCI_OnPUSCH(SetupRelease_UCI_OnPUSCH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UCI_OnPUSCH_Tag_release;
}

void BuildSample_PUSCH_Config(PUSCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resourceAllocation = PUSCH_Config_ResourceAllocation_resourceAllocationType0;
}

void BuildSample_SetupRelease_PUSCH_Config(SetupRelease_PUSCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUSCH_Config_Tag_release;
}

void BuildSample_BWP_UplinkDedicatedSDT_r17(BWP_UplinkDedicatedSDT_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_BWP_UplinkDedicatedSDT_r17(SetupRelease_BWP_UplinkDedicatedSDT_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag_release;
}

void BuildSample_CG_SDT_TA_ValidationConfig_r17(CG_SDT_TA_ValidationConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cg_SDT_RSRP_ChangeThreshold_r17 = CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB2;
}

void BuildSample_SetupRelease_CG_SDT_TA_ValidationConfig_r17(SetupRelease_CG_SDT_TA_ValidationConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag_release;
}

void BuildSample_SDT_MAC_PHY_CG_Config_r17(SDT_MAC_PHY_CG_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CG_SDT_ConfigLCH_Restriction_r17(CG_SDT_ConfigLCH_Restriction_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.logicalChannelIdentity_r17 = 1;
}

void BuildSample_CG_SDT_ConfigLCH_Restriction_v1800(CG_SDT_ConfigLCH_Restriction_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_PosRRC_InactiveConfig_r17(SRS_PosRRC_InactiveConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCResume_v1800_IEs_NonCriticalExtension(RRCResume_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCResume_v1800_IEs(RRCResume_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCResume_v1700_IEs(RRCResume_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16(RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag_nr_SCG_r16;
    value.u.nr_SCG_r16 = (RRCReconfiguration*)std::malloc(sizeof(RRCReconfiguration));
    if (value.u.nr_SCG_r16 != nullptr) {
        BuildSample_RRCReconfiguration(*value.u.nr_SCG_r16, depth + 1);
    }
}

void BuildSample_RRCResume_v1610_IEs(RRCResume_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCResume_v1560_IEs(RRCResume_v1560_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.radioBearerConfig2 = (RadioBearerConfig*)std::malloc(sizeof(RadioBearerConfig));
        if (value.radioBearerConfig2 != nullptr) {
            BuildSample_RadioBearerConfig(*value.radioBearerConfig2, depth + 1);
        }
    }
}

void BuildSample_RRCResume_IEs(RRCResume_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.masterCellGroup = (CellGroupConfig*)std::malloc(sizeof(CellGroupConfig));
        if (value.masterCellGroup != nullptr) {
            BuildSample_CellGroupConfig(*value.masterCellGroup, depth + 1);
        }
    }
}

void BuildSample_RRCResume_CriticalExtensionsFuture(RRCResume_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCResume_CriticalExtensions(RRCResume_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCResume_CriticalExtensions_Tag_rrcResume;
    BuildSample_RRCResume_IEs(value.u.rrcResume, depth + 1);
}

void BuildSample_RRCResume(RRCResume& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_RRCResume_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_ResultsPerSSB_IndexList_r16(ResultsPerSSB_IndexList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ResultsPerSSB_IndexIdle_r16*)std::malloc((std::size_t)value.count * sizeof(ResultsPerSSB_IndexIdle_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ResultsPerSSB_IndexIdle_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_ResultsPerSSB_IndexIdle_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultIdleNR_r16_MeasResultServingCell_r16(MeasResultIdleNR_r16_MeasResultServingCell_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultIdleNR_r16(MeasResultIdleNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultIdleNR_r16_MeasResultServingCell_r16(value.measResultServingCell_r16, depth + 1);
}

void BuildSample_RRCResumeComplete_v1800_IEs_NonCriticalExtension(RRCResumeComplete_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCResumeComplete_v1800_IEs(RRCResumeComplete_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCResumeComplete_v1720_IEs(RRCResumeComplete_v1720_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCResumeComplete_v1700_IEs(RRCResumeComplete_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCResumeComplete_v1640_IEs(RRCResumeComplete_v1640_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultIdleEUTRA_r16(MeasResultIdleEUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measResultsPerCarrierListIdleEUTRA_r16_count = 0u;
}

void BuildSample_RRCResumeComplete_v1610_IEs_Scg_Response_r16(RRCResumeComplete_v1610_IEs_Scg_Response_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag_nr_SCG_Response;
    value.u.nr_SCG_Response = (RRCReconfigurationComplete*)std::malloc(sizeof(RRCReconfigurationComplete));
    if (value.u.nr_SCG_Response != nullptr) {
        BuildSample_RRCReconfigurationComplete(*value.u.nr_SCG_Response, depth + 1);
    }
}

void BuildSample_RRCResumeComplete_v1610_IEs(RRCResumeComplete_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCResumeComplete_IEs(RRCResumeComplete_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCResumeComplete_CriticalExtensionsFuture(RRCResumeComplete_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCResumeComplete_CriticalExtensions(RRCResumeComplete_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCResumeComplete_CriticalExtensions_Tag_rrcResumeComplete;
    BuildSample_RRCResumeComplete_IEs(value.u.rrcResumeComplete, depth + 1);
}

void BuildSample_RRCResumeComplete(RRCResumeComplete& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_RRCResumeComplete_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_RRCResumeRequest_IEs(RRCResumeRequest_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resumeIdentity.bitLength = 24u;
    value.resumeIdentity.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.resumeIdentity.bytes != nullptr) {
        std::memset(value.resumeIdentity.bytes, 0, 3u);
    }
    value.resumeMAC_I.bitLength = 16u;
    value.resumeMAC_I.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.resumeMAC_I.bytes != nullptr) {
        std::memset(value.resumeMAC_I.bytes, 0, 2u);
    }
    value.resumeCause = ResumeCause_emergency;
    value.spare.bitLength = 1u;
    value.spare.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.spare.bytes != nullptr) {
        std::memset(value.spare.bytes, 0, 1u);
    }
}

void BuildSample_RRCResumeRequest(RRCResumeRequest& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RRCResumeRequest_IEs(value.rrcResumeRequest, depth + 1);
}

void BuildSample_RRCResumeRequest1_IEs(RRCResumeRequest1_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resumeIdentity.bitLength = 40u;
    value.resumeIdentity.bytes = (std::uint8_t*)std::malloc(5u);
    if (value.resumeIdentity.bytes != nullptr) {
        std::memset(value.resumeIdentity.bytes, 0, 5u);
    }
    value.resumeMAC_I.bitLength = 16u;
    value.resumeMAC_I.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.resumeMAC_I.bytes != nullptr) {
        std::memset(value.resumeMAC_I.bytes, 0, 2u);
    }
    value.resumeCause = ResumeCause_emergency;
    value.spare.bitLength = 1u;
    value.spare.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.spare.bytes != nullptr) {
        std::memset(value.spare.bytes, 0, 1u);
    }
}

void BuildSample_RRCResumeRequest1(RRCResumeRequest1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RRCResumeRequest1_IEs(value.rrcResumeRequest1, depth + 1);
}

void BuildSample_RRCSetup_v1700_IEs_NonCriticalExtension(RRCSetup_v1700_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCSetup_v1700_IEs(RRCSetup_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCSetup_IEs(RRCSetup_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RadioBearerConfig(value.radioBearerConfig, depth + 1);
    value.masterCellGroup = (CellGroupConfig*)std::malloc(sizeof(CellGroupConfig));
    if (value.masterCellGroup != nullptr) {
        BuildSample_CellGroupConfig(*value.masterCellGroup, depth + 1);
    }
}

void BuildSample_RRCSetup_CriticalExtensionsFuture(RRCSetup_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCSetup_CriticalExtensions(RRCSetup_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCSetup_CriticalExtensions_Tag_rrcSetup;
    BuildSample_RRCSetup_IEs(value.u.rrcSetup, depth + 1);
}

void BuildSample_RRCSetup(RRCSetup& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_RRCSetup_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_RRCSetupComplete_v1800_IEs_NonCriticalExtension(RRCSetupComplete_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCSetupComplete_v1800_IEs(RRCSetupComplete_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCSetupComplete_v1700_IEs(RRCSetupComplete_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCSetupComplete_v1690_IEs(RRCSetupComplete_v1690_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RRCSetupComplete_v1610_IEs(RRCSetupComplete_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RegisteredAMF(RegisteredAMF& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.amf_Identifier.bitLength = 24u;
    value.amf_Identifier.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.amf_Identifier.bytes != nullptr) {
        std::memset(value.amf_Identifier.bytes, 0, 3u);
    }
}

void BuildSample_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value(RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag_ng_5G_S_TMSI;
    value.u.ng_5G_S_TMSI.bitLength = 48u;
    value.u.ng_5G_S_TMSI.bytes = (std::uint8_t*)std::malloc(6u);
    if (value.u.ng_5G_S_TMSI.bytes != nullptr) {
        std::memset(value.u.ng_5G_S_TMSI.bytes, 0, 6u);
    }
}

void BuildSample_RRCSetupComplete_IEs(RRCSetupComplete_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.selectedPLMN_Identity = 1;
    value.dedicatedNAS_Message.length = 0u;
}

void BuildSample_RRCSetupComplete_CriticalExtensionsFuture(RRCSetupComplete_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCSetupComplete_CriticalExtensions(RRCSetupComplete_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCSetupComplete_CriticalExtensions_Tag_rrcSetupComplete;
    BuildSample_RRCSetupComplete_IEs(value.u.rrcSetupComplete, depth + 1);
}

void BuildSample_RRCSetupComplete(RRCSetupComplete& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_RRCSetupComplete_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_InitialUE_Identity(InitialUE_Identity& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = InitialUE_Identity_Tag_ng_5G_S_TMSI_Part1;
    value.u.ng_5G_S_TMSI_Part1.bitLength = 39u;
    value.u.ng_5G_S_TMSI_Part1.bytes = (std::uint8_t*)std::malloc(5u);
    if (value.u.ng_5G_S_TMSI_Part1.bytes != nullptr) {
        std::memset(value.u.ng_5G_S_TMSI_Part1.bytes, 0, 5u);
    }
}

void BuildSample_RRCSetupRequest_IEs(RRCSetupRequest_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_InitialUE_Identity(value.ue_Identity, depth + 1);
    value.establishmentCause = EstablishmentCause_emergency;
    value.spare.bitLength = 1u;
    value.spare.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.spare.bytes != nullptr) {
        std::memset(value.spare.bytes, 0, 1u);
    }
}

void BuildSample_RRCSetupRequest(RRCSetupRequest& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RRCSetupRequest_IEs(value.rrcSetupRequest, depth + 1);
}

void BuildSample_RRCSystemInfoRequest_IEs(RRCSystemInfoRequest_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.requested_SI_List.bitLength = 32u;
    value.requested_SI_List.bytes = (std::uint8_t*)std::malloc(4u);
    if (value.requested_SI_List.bytes != nullptr) {
        std::memset(value.requested_SI_List.bytes, 0, 4u);
    }
    value.spare.bitLength = 12u;
    value.spare.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.spare.bytes != nullptr) {
        std::memset(value.spare.bytes, 0, 2u);
    }
}

void BuildSample_RRC_PosSystemInfoRequest_r16_IEs(RRC_PosSystemInfoRequest_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.requestedPosSI_List.bitLength = 32u;
    value.requestedPosSI_List.bytes = (std::uint8_t*)std::malloc(4u);
    if (value.requestedPosSI_List.bytes != nullptr) {
        std::memset(value.requestedPosSI_List.bytes, 0, 4u);
    }
    value.spare.bitLength = 11u;
    value.spare.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.spare.bytes != nullptr) {
        std::memset(value.spare.bytes, 0, 2u);
    }
}

void BuildSample_RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_RRCSystemInfoRequest_CriticalExtensionsFuture_r16(RRCSystemInfoRequest_CriticalExtensionsFuture_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag_rrcPosSystemInfoRequest_r16;
    BuildSample_RRC_PosSystemInfoRequest_r16_IEs(value.u.rrcPosSystemInfoRequest_r16, depth + 1);
}

void BuildSample_RRCSystemInfoRequest_CriticalExtensions(RRCSystemInfoRequest_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RRCSystemInfoRequest_CriticalExtensions_Tag_rrcSystemInfoRequest;
    BuildSample_RRCSystemInfoRequest_IEs(value.u.rrcSystemInfoRequest, depth + 1);
}

void BuildSample_RRCSystemInfoRequest(RRCSystemInfoRequest& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RRCSystemInfoRequest_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_SCGFailureInformation_v1590_IEs_NonCriticalExtension(SCGFailureInformation_v1590_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SCGFailureInformation_v1590_IEs(SCGFailureInformation_v1590_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PerRAInfoList_r16(PerRAInfoList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PerRAInfo_r16*)std::malloc((std::size_t)value.count * sizeof(PerRAInfo_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PerRAInfo_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PerRAInfo_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17(FailureReportSCG_ExtGroup2_PreviousPSCellId_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r17 = 0;
    value.carrierFreq_r17 = 0;
}

void BuildSample_FailureReportSCG_ExtGroup2_FailedPSCellId_r17(FailureReportSCG_ExtGroup2_FailedPSCellId_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r17 = 0;
    value.carrierFreq_r17 = 0;
}

void BuildSample_MeasResultFreqList(MeasResultFreqList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResult2NR*)std::malloc((std::size_t)value.count * sizeof(MeasResult2NR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2NR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResult2NR(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FailureReportSCG(FailureReportSCG& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.failureType = FailureReportSCG_FailureType_t310_Expiry;
    if (depth < 2) {
        value.measResultSCG_Failure = (MeasResultSCG_Failure*)std::malloc(sizeof(MeasResultSCG_Failure));
        if (value.measResultSCG_Failure != nullptr) {
            BuildSample_MeasResultSCG_Failure(*value.measResultSCG_Failure, depth + 1);
        }
    }
}

void BuildSample_SCGFailureInformation_IEs(SCGFailureInformation_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SCGFailureInformation_CriticalExtensionsFuture(SCGFailureInformation_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SCGFailureInformation_CriticalExtensions(SCGFailureInformation_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SCGFailureInformation_CriticalExtensions_Tag_scgFailureInformation;
    BuildSample_SCGFailureInformation_IEs(value.u.scgFailureInformation, depth + 1);
}

void BuildSample_SCGFailureInformation(SCGFailureInformation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SCGFailureInformation_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension(SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SCGFailureInformationEUTRA_v1590_IEs(SCGFailureInformationEUTRA_v1590_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultFreqListFailMRDC(MeasResultFreqListFailMRDC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResult2EUTRA*)std::malloc((std::size_t)value.count * sizeof(MeasResult2EUTRA));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2EUTRA));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResult2EUTRA(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FailureReportSCG_EUTRA(FailureReportSCG_EUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.failureType = FailureReportSCG_EUTRA_FailureType_t313_Expiry;
}

void BuildSample_SCGFailureInformationEUTRA_IEs(SCGFailureInformationEUTRA_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SCGFailureInformationEUTRA_CriticalExtensionsFuture(SCGFailureInformationEUTRA_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SCGFailureInformationEUTRA_CriticalExtensions(SCGFailureInformationEUTRA_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SCGFailureInformationEUTRA_CriticalExtensions_Tag_scgFailureInformationEUTRA;
    BuildSample_SCGFailureInformationEUTRA_IEs(value.u.scgFailureInformationEUTRA, depth + 1);
}

void BuildSample_SCGFailureInformationEUTRA(SCGFailureInformationEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SCGFailureInformationEUTRA_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_SecurityConfigSMC(SecurityConfigSMC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SecurityAlgorithmConfig(value.securityAlgorithmConfig, depth + 1);
}

void BuildSample_SecurityModeCommand_IEs_NonCriticalExtension(SecurityModeCommand_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SecurityModeCommand_IEs(SecurityModeCommand_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SecurityConfigSMC(value.securityConfigSMC, depth + 1);
}

void BuildSample_SecurityModeCommand_CriticalExtensionsFuture(SecurityModeCommand_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SecurityModeCommand_CriticalExtensions(SecurityModeCommand_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SecurityModeCommand_CriticalExtensions_Tag_securityModeCommand;
    BuildSample_SecurityModeCommand_IEs(value.u.securityModeCommand, depth + 1);
}

void BuildSample_SecurityModeCommand(SecurityModeCommand& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_SecurityModeCommand_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_SecurityModeComplete_IEs_NonCriticalExtension(SecurityModeComplete_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SecurityModeComplete_IEs(SecurityModeComplete_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SecurityModeComplete_CriticalExtensionsFuture(SecurityModeComplete_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SecurityModeComplete_CriticalExtensions(SecurityModeComplete_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SecurityModeComplete_CriticalExtensions_Tag_securityModeComplete;
    BuildSample_SecurityModeComplete_IEs(value.u.securityModeComplete, depth + 1);
}

void BuildSample_SecurityModeComplete(SecurityModeComplete& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_SecurityModeComplete_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_SecurityModeFailure_IEs_NonCriticalExtension(SecurityModeFailure_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SecurityModeFailure_IEs(SecurityModeFailure_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SecurityModeFailure_CriticalExtensionsFuture(SecurityModeFailure_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SecurityModeFailure_CriticalExtensions(SecurityModeFailure_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SecurityModeFailure_CriticalExtensions_Tag_securityModeFailure;
    BuildSample_SecurityModeFailure_IEs(value.u.securityModeFailure, depth + 1);
}

void BuildSample_SecurityModeFailure(SecurityModeFailure& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_SecurityModeFailure_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18(ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellBarredeRedCap1Rx_r18 = ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap1Rx_r18_barred;
    value.cellBarredeRedCap2Rx_r18 = ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap2Rx_r18_barred;
}

void BuildSample_ERedCap_ConfigCommonSIB_r18(ERedCap_ConfigCommonSIB_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18(value.cellBarredeRedCap_r18, depth + 1);
}

void BuildSample_MT_SDT_ConfigCommonSIB_r18(MT_SDT_ConfigCommonSIB_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RACH_ConfigGeneric(RACH_ConfigGeneric& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.prach_ConfigurationIndex = 0;
    value.msg1_FDM = RACH_ConfigGeneric_Msg1_FDM_one;
    value.msg1_FrequencyStart = 0;
    value.zeroCorrelationZoneConfig = 0;
    value.preambleReceivedTargetPower = -202;
    value.preambleTransMax = RACH_ConfigGeneric_PreambleTransMax_n3;
    value.powerRampingStep = RACH_ConfigGeneric_PowerRampingStep_dB0;
    value.ra_ResponseWindow = RACH_ConfigGeneric_Ra_ResponseWindow_sl1;
}

void BuildSample_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18(SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RACH_ConfigGeneric(value.rach_ConfigSI_r18, depth + 1);
    value.ssb_perRACH_Occasion_r18 = SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18_oneEighth;
}

void BuildSample_SI_RequestConfigRepetition_r18(SI_RequestConfigRepetition_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SI_SchedulingInfo_v1800(SI_SchedulingInfo_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB1_v1800_IEs_FeaturePriorities_v1800(SIB1_v1800_IEs_FeaturePriorities_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB1_v1800_IEs_NonCriticalExtension(SIB1_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SIB1_v1800_IEs(SIB1_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SI_RequestConfig_Rach_OccasionsSI(SI_RequestConfig_Rach_OccasionsSI& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RACH_ConfigGeneric(value.rach_ConfigSI, depth + 1);
    value.ssb_perRACH_Occasion = SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion_oneEighth;
}

void BuildSample_SI_RequestConfig(SI_RequestConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.si_RequestResources_count = 0u;
}

void BuildSample_SI_SchedulingInfo_v1740(SI_SchedulingInfo_v1740& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB1_v1740_IEs(SIB1_v1740_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SDT_ConfigCommonSIB_r17(SDT_ConfigCommonSIB_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sdt_DataVolumeThreshold_r17 = SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte32;
    value.t319a_r17 = SDT_ConfigCommonSIB_r17_T319a_r17_ms100;
}

void BuildSample_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17(RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellBarredRedCap1Rx_r17 = RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap1Rx_r17_barred;
    value.cellBarredRedCap2Rx_r17 = RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap2Rx_r17_barred;
}

void BuildSample_RedCap_ConfigCommonSIB_r17(RedCap_ConfigCommonSIB_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SI_SchedulingInfo_v1700(SI_SchedulingInfo_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.schedulingInfoList2_r17_count = 0u;
}

void BuildSample_UAC_BarringInfoSetList_v1700(UAC_BarringInfoSetList_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UAC_BarringInfoSet_v1700*)std::malloc((std::size_t)value.count * sizeof(UAC_BarringInfoSet_v1700));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_BarringInfoSet_v1700));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UAC_BarringInfoSet_v1700(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SIB1_v1700_IEs_Uac_BarringInfo_v1700(SIB1_v1700_IEs_Uac_BarringInfo_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_UAC_BarringInfoSetList_v1700(value.uac_BarringInfoSetList_v1700, depth + 1);
}

void BuildSample_SIB1_v1700_IEs_FeaturePriorities_r17(SIB1_v1700_IEs_FeaturePriorities_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB1_v1700_IEs(SIB1_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB1_v1630_IEs_Uac_BarringInfo_v1630(SIB1_v1630_IEs_Uac_BarringInfo_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.uac_AC1_SelectAssistInfo_r16_count = 0u;
}

void BuildSample_SIB1_v1630_IEs(SIB1_v1630_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PosSI_SchedulingInfo_r16(PosSI_SchedulingInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.posSchedulingInfoList_r16_count = 0u;
}

void BuildSample_SIB1_v1610_IEs(SIB1_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NPN_IdentityInfoList_r16(NPN_IdentityInfoList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NPN_IdentityInfo_r16*)std::malloc((std::size_t)value.count * sizeof(NPN_IdentityInfo_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NPN_IdentityInfo_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NPN_IdentityInfo_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PLMN_IdentityInfoList(PLMN_IdentityInfoList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PLMN_IdentityInfo*)std::malloc((std::size_t)value.count * sizeof(PLMN_IdentityInfo));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_IdentityInfo));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PLMN_IdentityInfo(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CellAccessRelatedInfo(CellAccessRelatedInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_IdentityInfoList(value.plmn_IdentityInfoList, depth + 1);
}

void BuildSample_ConnEstFailureControl(ConnEstFailureControl& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.connEstFailCount = ConnEstFailureControl_ConnEstFailCount_n1;
    value.connEstFailOffsetValidity = ConnEstFailureControl_ConnEstFailOffsetValidity_s30;
}

void BuildSample_ControlResourceSet_Cce_REG_MappingType_Interleaved(ControlResourceSet_Cce_REG_MappingType_Interleaved& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reg_BundleSize = ControlResourceSet_Cce_REG_MappingType_Interleaved_Reg_BundleSize_n2;
    value.interleaverSize = ControlResourceSet_Cce_REG_MappingType_Interleaved_InterleaverSize_n2;
}

void BuildSample_ControlResourceSet_Cce_REG_MappingType(ControlResourceSet_Cce_REG_MappingType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ControlResourceSet_Cce_REG_MappingType_Tag_interleaved;
    BuildSample_ControlResourceSet_Cce_REG_MappingType_Interleaved(value.u.interleaved, depth + 1);
}

void BuildSample_ControlResourceSet(ControlResourceSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.controlResourceSetId = 0;
    value.frequencyDomainResources.bitLength = 45u;
    value.frequencyDomainResources.bytes = (std::uint8_t*)std::malloc(6u);
    if (value.frequencyDomainResources.bytes != nullptr) {
        std::memset(value.frequencyDomainResources.bytes, 0, 6u);
    }
    value.duration = 1;
    BuildSample_ControlResourceSet_Cce_REG_MappingType(value.cce_REG_MappingType, depth + 1);
    value.precoderGranularity = ControlResourceSet_PrecoderGranularity_sameAsREG_bundle;
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS15KHZoneT;
    BuildSample_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(value.u.sCS15KHZoneT, depth + 1);
}

void BuildSample_SearchSpace_MonitoringSlotPeriodicityAndOffset(SearchSpace_MonitoringSlotPeriodicityAndOffset& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl1;
}

void BuildSample_SearchSpace_NrofCandidates(SearchSpace_NrofCandidates& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.aggregationLevel1 = SearchSpace_NrofCandidates_AggregationLevel1_n0;
    value.aggregationLevel2 = SearchSpace_NrofCandidates_AggregationLevel2_n0;
    value.aggregationLevel4 = SearchSpace_NrofCandidates_AggregationLevel4_n0;
    value.aggregationLevel8 = SearchSpace_NrofCandidates_AggregationLevel8_n0;
    value.aggregationLevel16 = SearchSpace_NrofCandidates_AggregationLevel16_n0;
}

void BuildSample_SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0(SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI(SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SearchSpaceType_Common_Dci_Format2_0(SearchSpaceType_Common_Dci_Format2_0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI(value.nrofCandidates_SFI, depth + 1);
}

void BuildSample_SearchSpaceType_Common_Dci_Format2_1(SearchSpaceType_Common_Dci_Format2_1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SearchSpaceType_Common_Dci_Format2_2(SearchSpaceType_Common_Dci_Format2_2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SearchSpaceType_Common_Dci_Format2_3(SearchSpaceType_Common_Dci_Format2_3& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dummy2 = SearchSpaceType_Common_Dci_Format2_3_Dummy2_n1;
}

void BuildSample_SearchSpaceType_Common(SearchSpaceType_Common& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SearchSpaceType_Ue_Specific(SearchSpaceType_Ue_Specific& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dci_Formats = SearchSpaceType_Ue_Specific_Dci_Formats_formats0_0_And_1_0;
}

void BuildSample_SearchSpaceType(SearchSpaceType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SearchSpaceType_Tag_common;
    BuildSample_SearchSpaceType_Common(value.u.common, depth + 1);
}

void BuildSample_SearchSpace(SearchSpace& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.searchSpaceId = 0;
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17(PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag_newSearchSpace;
    BuildSample_SearchSpace(value.u.newSearchSpace, depth + 1);
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710(PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneEighthT;
    BuildSample_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(value.u.sCS480KHZoneEighthT, depth + 1);
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS15KHZoneT;
    BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT(value.u.sCS15KHZoneT, depth + 1);
}

void BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pei_SearchSpace_r17 = 0;
    BuildSample_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17(value.firstPDCCH_MonitoringOccasionOfPEI_O_r17, depth + 1);
}

void BuildSample_PDCCH_ConfigCommon(PDCCH_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PDCCH_ConfigCommon(SetupRelease_PDCCH_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDCCH_ConfigCommon_Tag_release;
}

void BuildSample_PDSCH_ConfigCommon(PDSCH_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PDSCH_ConfigCommon(SetupRelease_PDSCH_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDSCH_ConfigCommon_Tag_release;
}

void BuildSample_BWP_DownlinkCommon(BWP_DownlinkCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_BWP(value.genericParameters, depth + 1);
}

void BuildSample_SubgroupConfig_r17(SubgroupConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.subgroupsNumPerPO_r17 = 1;
}

void BuildSample_PEI_Config_r17(PEI_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.po_NumPerPEI_r17 = PEI_Config_r17_Po_NumPerPEI_r17_po1;
    value.payloadSizeDCI_2_7_r17 = 1;
    value.pei_FrameOffset_r17 = 0;
    BuildSample_SubgroupConfig_r17(value.subgroupConfig_r17, depth + 1);
}

void BuildSample_MultiFrequencyBandListNR_Aerial_SIB_r18(MultiFrequencyBandListNR_Aerial_SIB_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NR_MultiBandInfoAerial_r18*)std::malloc((std::size_t)value.count * sizeof(NR_MultiBandInfoAerial_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_MultiBandInfoAerial_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NR_MultiBandInfoAerial_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FrequencyInfoDL_SIB_v1800(FrequencyInfoDL_SIB_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MultiFrequencyBandListNR_Aerial_SIB_r18(value.frequencyBandListAerial_r18, depth + 1);
}

void BuildSample_BCCH_Config(BCCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.modificationPeriodCoeff = BCCH_Config_ModificationPeriodCoeff_n2;
}

void BuildSample_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710(PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneEighthT;
    BuildSample_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(value.u.sCS480KHZoneEighthT, depth + 1);
}

void BuildSample_PCCH_Config_NAndPagingFrameOffset(PCCH_Config_NAndPagingFrameOffset& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PCCH_Config_NAndPagingFrameOffset_Tag_oneT;
}

void BuildSample_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS15KHZoneT;
    BuildSample_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(value.u.sCS15KHZoneT, depth + 1);
}

void BuildSample_PCCH_Config(PCCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.defaultPagingCycle = PagingCycle_rf32;
    BuildSample_PCCH_Config_NAndPagingFrameOffset(value.nAndPagingFrameOffset, depth + 1);
    value.ns = PCCH_Config_Ns_four;
}

void BuildSample_MultiFrequencyBandListNR_SIB(MultiFrequencyBandListNR_SIB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NR_MultiBandInfo*)std::malloc((std::size_t)value.count * sizeof(NR_MultiBandInfo));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_MultiBandInfo));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NR_MultiBandInfo(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FrequencyInfoDL_SIB(FrequencyInfoDL_SIB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MultiFrequencyBandListNR_SIB(value.frequencyBandList, depth + 1);
    value.offsetToPointA = 0;
    value.scs_SpecificCarrierList_count = 0u;
}

void BuildSample_DownlinkConfigCommonSIB(DownlinkConfigCommonSIB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_FrequencyInfoDL_SIB(value.frequencyInfoDL, depth + 1);
    BuildSample_BWP_DownlinkCommon(value.initialDownlinkBWP, depth + 1);
    BuildSample_BCCH_Config(value.bcch_Config, depth + 1);
    BuildSample_PCCH_Config(value.pcch_Config, depth + 1);
}

void BuildSample_HighSpeedConfig_r16(HighSpeedConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SemiStaticChannelAccessConfig_r16(SemiStaticChannelAccessConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.period_r16 = SemiStaticChannelAccessConfig_r16_Period_r16_ms1;
}

void BuildSample_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16(ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag_dynamic;
}

void BuildSample_HighSpeedConfigFR2_r17(HighSpeedConfigFR2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RA_Prioritization(RA_Prioritization& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.powerRampingStepHighPriority = RA_Prioritization_PowerRampingStepHighPriority_dB0;
}

void BuildSample_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16(RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RA_Prioritization(value.ra_Prioritization_r16, depth + 1);
    value.ra_PrioritizationForAI_r16.bitLength = 2u;
    value.ra_PrioritizationForAI_r16.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.ra_PrioritizationForAI_r16.bytes != nullptr) {
        std::memset(value.ra_PrioritizationForAI_r16.bytes, 0, 1u);
    }
}

void BuildSample_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16(RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag_l571;
    value.u.l571 = 0;
}

void BuildSample_RA_PrioritizationSliceInfoList_r17(RA_PrioritizationSliceInfoList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (RA_PrioritizationSliceInfo_r17*)std::malloc((std::size_t)value.count * sizeof(RA_PrioritizationSliceInfo_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(RA_PrioritizationSliceInfo_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_RA_PrioritizationSliceInfo_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_RA_PrioritizationForSlicing_r17(RA_PrioritizationForSlicing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RA_PrioritizationSliceInfoList_r17(value.ra_PrioritizationSliceInfoList_r17, depth + 1);
}

void BuildSample_RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB(RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneEighth;
    value.u.oneEighth = RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n4;
}

void BuildSample_RACH_ConfigCommon_GroupBconfigured(RACH_ConfigCommon_GroupBconfigured& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ra_Msg3SizeGroupA = RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b56;
    value.messagePowerOffsetGroupB = RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB_minusinfinity;
    value.numberOfRA_PreamblesGroupA = 1;
}

void BuildSample_RACH_ConfigCommon_Prach_RootSequenceIndex(RACH_ConfigCommon_Prach_RootSequenceIndex& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RACH_ConfigCommon_Prach_RootSequenceIndex_Tag_l839;
    value.u.l839 = 0;
}

void BuildSample_RACH_ConfigCommon(RACH_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RACH_ConfigGeneric(value.rach_ConfigGeneric, depth + 1);
    value.ra_ContentionResolutionTimer = RACH_ConfigCommon_Ra_ContentionResolutionTimer_sf8;
    BuildSample_RACH_ConfigCommon_Prach_RootSequenceIndex(value.prach_RootSequenceIndex, depth + 1);
    value.restrictedSetConfig = RACH_ConfigCommon_RestrictedSetConfig_unrestrictedSet;
}

void BuildSample_SetupRelease_RACH_ConfigCommon(SetupRelease_RACH_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RACH_ConfigCommon_Tag_release;
}

void BuildSample_MsgA_DMRS_Config_r16(MsgA_DMRS_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MsgA_PUSCH_Resource_r16(MsgA_PUSCH_Resource_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.msgA_MCS_r16 = 0;
    value.nrofSlotsMsgA_PUSCH_r16 = 1;
    value.nrofMsgA_PO_PerSlot_r16 = MsgA_PUSCH_Resource_r16_NrofMsgA_PO_PerSlot_r16_one;
    value.msgA_PUSCH_TimeDomainOffset_r16 = 1;
    value.guardBandMsgA_PUSCH_r16 = 0;
    value.frequencyStartMsgA_PUSCH_r16 = 0;
    value.nrofPRBs_PerMsgA_PO_r16 = 1;
    value.nrofMsgA_PO_FDM_r16 = MsgA_PUSCH_Resource_r16_NrofMsgA_PO_FDM_r16_one;
    BuildSample_MsgA_DMRS_Config_r16(value.msgA_DMRS_Config_r16, depth + 1);
    value.nrofDMRS_Sequences_r16 = 1;
}

void BuildSample_MsgA_PUSCH_Config_r16(MsgA_PUSCH_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_GroupB_ConfiguredTwoStepRA_r16(GroupB_ConfiguredTwoStepRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ra_MsgA_SizeGroupA_r16 = GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b56;
    value.messagePowerOffsetGroupB_r16 = GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16_minusinfinity;
    value.numberOfRA_PreamblesGroupA_r16 = 1;
}

void BuildSample_RACH_ConfigGenericTwoStepRA_r16(RACH_ConfigGenericTwoStepRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16(RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneEighth;
    value.u.oneEighth = RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n4;
}

void BuildSample_RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16(RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l839;
    value.u.l839 = 0;
}

void BuildSample_RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16(RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RA_Prioritization(value.ra_Prioritization_r16, depth + 1);
    value.ra_PrioritizationForAI_r16.bitLength = 2u;
    value.ra_PrioritizationForAI_r16.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.ra_PrioritizationForAI_r16.bytes != nullptr) {
        std::memset(value.ra_PrioritizationForAI_r16.bytes, 0, 1u);
    }
}

void BuildSample_RACH_ConfigCommonTwoStepRA_r16(RACH_ConfigCommonTwoStepRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RACH_ConfigGenericTwoStepRA_r16(value.rach_ConfigGenericTwoStepRA_r16, depth + 1);
}

void BuildSample_MsgA_ConfigCommon_r16(MsgA_ConfigCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RACH_ConfigCommonTwoStepRA_r16(value.rach_ConfigCommonTwoStepRA_r16, depth + 1);
}

void BuildSample_SetupRelease_MsgA_ConfigCommon_r16(SetupRelease_MsgA_ConfigCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MsgA_ConfigCommon_r16_Tag_release;
}

void BuildSample_AdditionalRACH_ConfigList_r17(AdditionalRACH_ConfigList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (AdditionalRACH_Config_r17*)std::malloc((std::size_t)value.count * sizeof(AdditionalRACH_Config_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(AdditionalRACH_Config_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_AdditionalRACH_Config_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_AdditionalRACH_ConfigList_r17(SetupRelease_AdditionalRACH_ConfigList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_AdditionalRACH_ConfigList_r17_Tag_release;
}

void BuildSample_PUSCH_ConfigCommon(PUSCH_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PUSCH_ConfigCommon(SetupRelease_PUSCH_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUSCH_ConfigCommon_Tag_release;
}

void BuildSample_PUCCH_ConfigCommon(PUCCH_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_GroupHopping = PUCCH_ConfigCommon_Pucch_GroupHopping_neither;
}

void BuildSample_SetupRelease_PUCCH_ConfigCommon(SetupRelease_PUCCH_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUCCH_ConfigCommon_Tag_release;
}

void BuildSample_BWP_UplinkCommon(BWP_UplinkCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_BWP(value.genericParameters, depth + 1);
}

void BuildSample_UplinkConfigCommonSIB_v1700(UplinkConfigCommonSIB_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MultiFrequencyBandListNR_SIB_v1760(MultiFrequencyBandListNR_SIB_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NR_MultiBandInfo_v1760*)std::malloc((std::size_t)value.count * sizeof(NR_MultiBandInfo_v1760));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_MultiBandInfo_v1760));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NR_MultiBandInfo_v1760(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FrequencyInfoDL_SIB_v1760(FrequencyInfoDL_SIB_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MultiFrequencyBandListNR_SIB_v1760(value.frequencyBandList_v1760, depth + 1);
}

void BuildSample_DownlinkConfigCommonSIB_v1760(DownlinkConfigCommonSIB_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_FrequencyInfoDL_SIB_v1760(value.frequencyInfoDL_v1760, depth + 1);
}

void BuildSample_FrequencyInfoUL_SIB_v1760(FrequencyInfoUL_SIB_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MultiFrequencyBandListNR_SIB_v1760(value.frequencyBandList_v1760, depth + 1);
}

void BuildSample_UplinkConfigCommonSIB_v1760(UplinkConfigCommonSIB_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_FrequencyInfoUL_SIB_v1760(value.frequencyInfoUL_v1760, depth + 1);
}

void BuildSample_TDD_UL_DL_Pattern(TDD_UL_DL_Pattern& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dl_UL_TransmissionPeriodicity = TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity_ms0p5;
    value.nrofDownlinkSlots = 0;
    value.nrofDownlinkSymbols = 0;
    value.nrofUplinkSlots = 0;
    value.nrofUplinkSymbols = 0;
}

void BuildSample_TDD_UL_DL_ConfigCommon(TDD_UL_DL_ConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.referenceSubcarrierSpacing = SubcarrierSpacing_kHz15;
    BuildSample_TDD_UL_DL_Pattern(value.pattern1, depth + 1);
}

void BuildSample_FrequencyInfoUL_SIB(FrequencyInfoUL_SIB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.scs_SpecificCarrierList_count = 0u;
}

void BuildSample_UplinkConfigCommonSIB(UplinkConfigCommonSIB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_FrequencyInfoUL_SIB(value.frequencyInfoUL, depth + 1);
    BuildSample_BWP_UplinkCommon(value.initialUplinkBWP, depth + 1);
    value.timeAlignmentTimerCommon = TimeAlignmentTimer_ms500;
}

void BuildSample_ServingCellConfigCommonSIB_Ssb_PositionsInBurst(ServingCellConfigCommonSIB_Ssb_PositionsInBurst& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.inOneGroup.bitLength = 8u;
    value.inOneGroup.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.inOneGroup.bytes != nullptr) {
        std::memset(value.inOneGroup.bytes, 0, 1u);
    }
}

void BuildSample_ServingCellConfigCommonSIB(ServingCellConfigCommonSIB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DownlinkConfigCommonSIB(value.downlinkConfigCommon, depth + 1);
    BuildSample_ServingCellConfigCommonSIB_Ssb_PositionsInBurst(value.ssb_PositionsInBurst, depth + 1);
    value.ssb_PeriodicityServingCell = ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell_ms5;
    value.ss_PBCH_BlockPower = -60;
}

void BuildSample_SI_SchedulingInfo(SI_SchedulingInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.schedulingInfoList_count = 0u;
    value.si_WindowLength = SI_SchedulingInfo_Si_WindowLength_s5;
}

void BuildSample_UE_TimersAndConstants(UE_TimersAndConstants& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.t300 = UE_TimersAndConstants_T300_ms100;
    value.t301 = UE_TimersAndConstants_T301_ms100;
    value.t310 = UE_TimersAndConstants_T310_ms0;
    value.n310 = UE_TimersAndConstants_N310_n1;
    value.t311 = UE_TimersAndConstants_T311_ms1000;
    value.n311 = UE_TimersAndConstants_N311_n1;
    value.t319 = UE_TimersAndConstants_T319_ms100;
}

void BuildSample_SIB1_CellSelectionInfo(SIB1_CellSelectionInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.q_RxLevMin = -70;
}

void BuildSample_UAC_BarringInfoSetList(UAC_BarringInfoSetList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UAC_BarringInfoSet*)std::malloc((std::size_t)value.count * sizeof(UAC_BarringInfoSet));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_BarringInfoSet));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UAC_BarringInfoSet(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UAC_BarringPerCatList(UAC_BarringPerCatList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UAC_BarringPerCat*)std::malloc((std::size_t)value.count * sizeof(UAC_BarringPerCat));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_BarringPerCat));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UAC_BarringPerCat(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UAC_BarringPerPLMN_List(UAC_BarringPerPLMN_List& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UAC_BarringPerPLMN*)std::malloc((std::size_t)value.count * sizeof(UAC_BarringPerPLMN));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_BarringPerPLMN));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UAC_BarringPerPLMN(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList(SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 2u;
    value.items = (UAC_AccessCategory1_SelectionAssistanceInfo*)std::malloc((std::size_t)value.count * sizeof(UAC_AccessCategory1_SelectionAssistanceInfo));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_AccessCategory1_SelectionAssistanceInfo));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = UAC_AccessCategory1_SelectionAssistanceInfo_a;
        }
    }
}

void BuildSample_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo(SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag_plmnCommon;
    value.u.plmnCommon = UAC_AccessCategory1_SelectionAssistanceInfo_a;
}

void BuildSample_SIB1_Uac_BarringInfo(SIB1_Uac_BarringInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_UAC_BarringInfoSetList(value.uac_BarringInfoSetList, depth + 1);
}

void BuildSample_SIB1(SIB1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CellAccessRelatedInfo(value.cellAccessRelatedInfo, depth + 1);
}

void BuildSample_SL_InterestedFreqList_r16(SL_InterestedFreqList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SL_PosTxResourceReqList_r18(SL_PosTxResourceReqList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_PosTxResourceReq_r18*)std::malloc((std::size_t)value.count * sizeof(SL_PosTxResourceReq_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_PosTxResourceReq_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_PosTxResourceReq_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_CarrierFailureList_r18(SL_CarrierFailureList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_CarrierFailure_r18*)std::malloc((std::size_t)value.count * sizeof(SL_CarrierFailure_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_CarrierFailure_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_CarrierFailure_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension(SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SidelinkUEInformationNR_v1800_IEs(SidelinkUEInformationNR_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_TxResourceReqList_v1700(SL_TxResourceReqList_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_TxResourceReq_v1700*)std::malloc((std::size_t)value.count * sizeof(SL_TxResourceReq_v1700));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TxResourceReq_v1700));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_TxResourceReq_v1700(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_RxDRX_ReportList_v1700(SL_RxDRX_ReportList_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_RxDRX_Report_v1700*)std::malloc((std::size_t)value.count * sizeof(SL_RxDRX_Report_v1700));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_RxDRX_Report_v1700));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_RxDRX_Report_v1700(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_RxInterestedGC_BC_DestList_r17(SL_RxInterestedGC_BC_DestList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_RxInterestedGC_BC_Dest_r17*)std::malloc((std::size_t)value.count * sizeof(SL_RxInterestedGC_BC_Dest_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_RxInterestedGC_BC_Dest_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_RxInterestedGC_BC_Dest_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_TxResourceReqListDisc_r17(SL_TxResourceReqListDisc_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_TxResourceReqDisc_r17*)std::malloc((std::size_t)value.count * sizeof(SL_TxResourceReqDisc_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TxResourceReqDisc_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_TxResourceReqDisc_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_TxResourceReqListCommRelay_r17(SL_TxResourceReqListCommRelay_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_TxResourceReqCommRelayInfo_r17*)std::malloc((std::size_t)value.count * sizeof(SL_TxResourceReqCommRelayInfo_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TxResourceReqCommRelayInfo_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_TxResourceReqCommRelayInfo_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SidelinkUEInformationNR_v1700_IEs(SidelinkUEInformationNR_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_TxResourceReqList_r16(SL_TxResourceReqList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_TxResourceReq_r16*)std::malloc((std::size_t)value.count * sizeof(SL_TxResourceReq_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TxResourceReq_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_TxResourceReq_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_FailureList_r16(SL_FailureList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_Failure_r16*)std::malloc((std::size_t)value.count * sizeof(SL_Failure_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_Failure_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_Failure_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SidelinkUEInformationNR_r16_IEs(SidelinkUEInformationNR_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SidelinkUEInformationNR_r16_CriticalExtensionsFuture(SidelinkUEInformationNR_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SidelinkUEInformationNR_r16_CriticalExtensions(SidelinkUEInformationNR_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SidelinkUEInformationNR_r16_CriticalExtensions_Tag_sidelinkUEInformationNR_r16;
    BuildSample_SidelinkUEInformationNR_r16_IEs(value.u.sidelinkUEInformationNR_r16, depth + 1);
}

void BuildSample_SidelinkUEInformationNR_r16(SidelinkUEInformationNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SidelinkUEInformationNR_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_SL_TxInterestedFreqList_r16(SL_TxInterestedFreqList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SL_TxResourceReq_r16(SL_TxResourceReq_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_DestinationIdentity_r16.bitLength = 24u;
    value.sl_DestinationIdentity_r16.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_DestinationIdentity_r16.bytes != nullptr) {
        std::memset(value.sl_DestinationIdentity_r16.bytes, 0, 3u);
    }
    value.sl_CastType_r16 = SL_TxResourceReq_r16_Sl_CastType_r16_broadcast;
}

void BuildSample_SL_TxResourceReq_v1700(SL_TxResourceReq_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17(SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag_subMilliSeconds;
    value.u.subMilliSeconds = 1;
}

void BuildSample_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17(SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10;
    value.u.ms10 = 0;
}

void BuildSample_SL_DRX_ConfigUC_SemiStatic_r17(SL_DRX_ConfigUC_SemiStatic_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17(value.sl_drx_onDurationTimer_r17, depth + 1);
    BuildSample_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17(value.sl_drx_CycleStartOffset_r17, depth + 1);
    value.sl_drx_SlotOffset_r17 = 0;
}

void BuildSample_SL_RxDRX_Report_v1700(SL_RxDRX_Report_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_DRX_ConfigUC_SemiStatic_r17(value.sl_DRX_ConfigFromTx_r17, depth + 1);
}

void BuildSample_SL_RxInterestedGC_BC_Dest_r17(SL_RxInterestedGC_BC_Dest_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_RxInterestedQoS_InfoList_r17_count = 0u;
    value.sl_DestinationIdentity_r16.bitLength = 24u;
    value.sl_DestinationIdentity_r16.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_DestinationIdentity_r16.bytes != nullptr) {
        std::memset(value.sl_DestinationIdentity_r16.bytes, 0, 3u);
    }
}

void BuildSample_SL_TxResourceReqDisc_r17(SL_TxResourceReqDisc_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_DestinationIdentityDisc_r17.bitLength = 24u;
    value.sl_DestinationIdentityDisc_r17.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_DestinationIdentityDisc_r17.bytes != nullptr) {
        std::memset(value.sl_DestinationIdentityDisc_r17.bytes, 0, 3u);
    }
    value.sl_CastTypeDisc_r17 = SL_TxResourceReqDisc_r17_Sl_CastTypeDisc_r17_broadcast;
    BuildSample_SL_TxInterestedFreqList_r16(value.sl_TxInterestedFreqListDisc_r17, depth + 1);
    value.sl_TypeTxSyncListDisc_r17_count = 0u;
    value.sl_DiscoveryType_r17 = SL_TxResourceReqDisc_r17_Sl_DiscoveryType_r17_relay;
}

void BuildSample_SL_PagingIdentityRemoteUE_r17(SL_PagingIdentityRemoteUE_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ng_5G_S_TMSI_r17.bitLength = 48u;
    value.ng_5G_S_TMSI_r17.bytes = (std::uint8_t*)std::malloc(6u);
    if (value.ng_5G_S_TMSI_r17.bytes != nullptr) {
        std::memset(value.ng_5G_S_TMSI_r17.bytes, 0, 6u);
    }
}

void BuildSample_SL_TxResourceReqL2U2N_Relay_r17(SL_TxResourceReqL2U2N_Relay_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_TxInterestedFreqList_r16(value.sl_TxInterestedFreqListL2U2N_r17, depth + 1);
    value.sl_TypeTxSyncListL2U2N_r17_count = 0u;
}

void BuildSample_SL_TxResourceReqCommRelay_r17(SL_TxResourceReqCommRelay_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_TxResourceReqCommRelay_r17_Tag_sl_TxResourceReqL2U2N_Relay_r17;
    BuildSample_SL_TxResourceReqL2U2N_Relay_r17(value.u.sl_TxResourceReqL2U2N_Relay_r17, depth + 1);
}

void BuildSample_SL_TxResourceReqCommRelayInfo_r17(SL_TxResourceReqCommRelayInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_TxResourceReqCommRelay_r17(value.sl_TxResourceReqCommRelay_r17, depth + 1);
}

void BuildSample_SL_TxResourceReqL2_U2U_r18(SL_TxResourceReqL2_U2U_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_TxInterestedFreqList_r16(value.sl_TxInterestedFreqListL2_U2U_r18, depth + 1);
    value.sl_TypeTxSyncListL2_U2U_r18_count = 0u;
}

void BuildSample_SL_U2U_Info_r18_Sl_U2U_Identity_r18(SL_U2U_Info_r18_Sl_U2U_Identity_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag_sl_TargetUE_Identity_r18;
    value.u.sl_TargetUE_Identity_r18.bitLength = 24u;
    value.u.sl_TargetUE_Identity_r18.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.u.sl_TargetUE_Identity_r18.bytes != nullptr) {
        std::memset(value.u.sl_TargetUE_Identity_r18.bytes, 0, 3u);
    }
}

void BuildSample_SL_U2U_Info_r18(SL_U2U_Info_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_U2U_Info_r18_Sl_U2U_Identity_r18(value.sl_U2U_Identity_r18, depth + 1);
}

void BuildSample_SL_PosTxResourceReq_r18(SL_PosTxResourceReq_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_PosDestinationIdentity_r18.bitLength = 24u;
    value.sl_PosDestinationIdentity_r18.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_PosDestinationIdentity_r18.bytes != nullptr) {
        std::memset(value.sl_PosDestinationIdentity_r18.bytes, 0, 3u);
    }
    value.sl_PosCastType_r18 = SL_PosTxResourceReq_r18_Sl_PosCastType_r18_broadcast;
}

void BuildSample_SL_PQI_r16_Sl_Non_StandardizedPQI_r16(SL_PQI_r16_Sl_Non_StandardizedPQI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PQI_r16(SL_PQI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_PQI_r16_Tag_sl_StandardizedPQI_r16;
    value.u.sl_StandardizedPQI_r16 = 0;
}

void BuildSample_SL_QoS_Profile_r16(SL_QoS_Profile_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_QoS_Info_r16(SL_QoS_Info_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_QoS_FlowIdentity_r16 = 1;
}

void BuildSample_SL_QoS_Info_v1800(SL_QoS_Info_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_TxInterestedFreqList_r16(value.sl_TxInterestedFreqList_r18, depth + 1);
}

void BuildSample_SL_RLC_ModeIndication_r16_Sl_Mode_r16(SL_RLC_ModeIndication_r16_Sl_Mode_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag_sl_AM_Mode_r16;
}

void BuildSample_SL_RLC_ModeIndication_r16(SL_RLC_ModeIndication_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_RLC_ModeIndication_r16_Sl_Mode_r16(value.sl_Mode_r16, depth + 1);
    value.sl_QoS_InfoList_r16_count = 0u;
}

void BuildSample_SL_Failure_r16(SL_Failure_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_DestinationIdentity_r16.bitLength = 24u;
    value.sl_DestinationIdentity_r16.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_DestinationIdentity_r16.bytes != nullptr) {
        std::memset(value.sl_DestinationIdentity_r16.bytes, 0, 3u);
    }
    value.sl_Failure_r16 = SL_Failure_r16_Sl_Failure_r16_rlf;
}

void BuildSample_SL_CarrierFailure_r18(SL_CarrierFailure_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_DestinationIdentity_r18.bitLength = 24u;
    value.sl_DestinationIdentity_r18.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_DestinationIdentity_r18.bytes != nullptr) {
        std::memset(value.sl_DestinationIdentity_r18.bytes, 0, 3u);
    }
    value.sl_CarrierFailure_r18_count = 0u;
}

void BuildSample_SL_SplitQoS_Info_r18(SL_SplitQoS_Info_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_QoS_FlowIdentity_r18 = 1;
}

void BuildSample_SL_PerSLRB_QoS_Info_r18(SL_PerSLRB_QoS_Info_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_RemoteUE_SLRB_Identity_r18 = 1;
}

void BuildSample_SL_PRS_QoS_Info_r18(SL_PRS_QoS_Info_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SystemInformation_IEs_NonCriticalExtension(SystemInformation_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SystemInformation_IEs(SystemInformation_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sib_TypeAndInfo_count = 0u;
}

void BuildSample_PosSystemInformation_r16_IEs_NonCriticalExtension(PosSystemInformation_r16_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_PosSystemInformation_r16_IEs(PosSystemInformation_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.posSIB_TypeAndInfo_r16_count = 0u;
}

void BuildSample_SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SystemInformation_CriticalExtensionsFuture_r16(SystemInformation_CriticalExtensionsFuture_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SystemInformation_CriticalExtensionsFuture_r16_Tag_posSystemInformation_r16;
    BuildSample_PosSystemInformation_r16_IEs(value.u.posSystemInformation_r16, depth + 1);
}

void BuildSample_SystemInformation_CriticalExtensions(SystemInformation_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SystemInformation_CriticalExtensions_Tag_systemInformation;
    BuildSample_SystemInformation_IEs(value.u.systemInformation, depth + 1);
}

void BuildSample_SystemInformation(SystemInformation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SystemInformation_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_DelayBudgetReport(DelayBudgetReport& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DelayBudgetReport_Tag_type1;
    value.u.type1 = DelayBudgetReport_Type1_msMinus1280;
}

void BuildSample_ReducedMaxBW_FRx_r16(ReducedMaxBW_FRx_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reducedBW_DL_r16 = ReducedAggregatedBandwidth_mhz0;
    value.reducedBW_UL_r16 = ReducedAggregatedBandwidth_mhz0;
}

void BuildSample_ReducedMaxCCs_r16(ReducedMaxCCs_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reducedCCsDL_r16 = 0;
    value.reducedCCsUL_r16 = 0;
}

void BuildSample_OverheatingAssistance_ReducedMaxMIMO_LayersFR1(OverheatingAssistance_ReducedMaxMIMO_LayersFR1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reducedMIMO_LayersFR1_DL = MIMO_LayersDL_twoLayers;
    value.reducedMIMO_LayersFR1_UL = MIMO_LayersUL_oneLayer;
}

void BuildSample_OverheatingAssistance_ReducedMaxMIMO_LayersFR2(OverheatingAssistance_ReducedMaxMIMO_LayersFR2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reducedMIMO_LayersFR2_DL = MIMO_LayersDL_twoLayers;
    value.reducedMIMO_LayersFR2_UL = MIMO_LayersUL_oneLayer;
}

void BuildSample_OverheatingAssistance(OverheatingAssistance& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17(OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reducedBW_FR2_2_DL_r17 = ReducedAggregatedBandwidth_r17_mhz0;
    value.reducedBW_FR2_2_UL_r17 = ReducedAggregatedBandwidth_r17_mhz0;
}

void BuildSample_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2(OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reducedMIMO_LayersFR2_2_DL = MIMO_LayersDL_twoLayers;
    value.reducedMIMO_LayersFR2_2_UL = MIMO_LayersUL_oneLayer;
}

void BuildSample_OverheatingAssistance_r17(OverheatingAssistance_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MUSIM_GapPriorityPreferenceList_r18(MUSIM_GapPriorityPreferenceList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (GapPriority_r17*)std::malloc((std::size_t)value.count * sizeof(GapPriority_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(GapPriority_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_MUSIM_CellToRelease_r18(MUSIM_CellToRelease_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SCellIndex*)std::malloc((std::size_t)value.count * sizeof(SCellIndex));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SCellIndex));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_MUSIM_Cell_SCG_ToRelease_r18(MUSIM_Cell_SCG_ToRelease_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MUSIM_CellToAffectList_r18(MUSIM_CellToAffectList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MUSIM_CellToAffect_r18*)std::malloc((std::size_t)value.count * sizeof(MUSIM_CellToAffect_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_CellToAffect_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MUSIM_CellToAffect_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MUSIM_AffectedBandsList_r18(MUSIM_AffectedBandsList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MUSIM_AffectedBands_r18*)std::malloc((std::size_t)value.count * sizeof(MUSIM_AffectedBands_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_AffectedBands_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MUSIM_AffectedBands_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MUSIM_AvoidedBandsList_r18(MUSIM_AvoidedBandsList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MUSIM_AvoidedBands_r18*)std::malloc((std::size_t)value.count * sizeof(MUSIM_AvoidedBands_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_AvoidedBands_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MUSIM_AvoidedBands_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MUSIM_MaxCC_r18(MUSIM_MaxCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MUSIM_CapRestriction_r18(MUSIM_CapRestriction_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MUSIM_Assistance_v1800(MUSIM_Assistance_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_AffectedCarrierFreqRangeList_r18(AffectedCarrierFreqRangeList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (AffectedCarrierFreqRange_r18*)std::malloc((std::size_t)value.count * sizeof(AffectedCarrierFreqRange_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(AffectedCarrierFreqRange_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_AffectedCarrierFreqRange_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_AffectedCarrierFreqRangeCombList_r18(AffectedCarrierFreqRangeCombList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (AffectedCarrierFreqRangeComb_r18*)std::malloc((std::size_t)value.count * sizeof(AffectedCarrierFreqRangeComb_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(AffectedCarrierFreqRangeComb_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_AffectedCarrierFreqRangeComb_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_IDC_FDM_Assistance_r18(IDC_FDM_Assistance_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IDC_TDM_Assistance_r18_ActiveDuration_r18(IDC_TDM_Assistance_r18_ActiveDuration_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag_subMilliSeconds;
    value.u.subMilliSeconds = 1;
}

void BuildSample_IDC_TDM_Assistance_r18(IDC_TDM_Assistance_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cycleLength_r18 = IDC_TDM_Assistance_r18_CycleLength_r18_ms2;
    value.startOffset_r18 = 0;
    value.slotOffset_r18 = 0;
    BuildSample_IDC_TDM_Assistance_r18_ActiveDuration_r18(value.activeDuration_r18, depth + 1);
}

void BuildSample_UL_TrafficInfo_r18(UL_TrafficInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PDU_SessionUL_TrafficInfo_r18*)std::malloc((std::size_t)value.count * sizeof(PDU_SessionUL_TrafficInfo_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PDU_SessionUL_TrafficInfo_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PDU_SessionUL_TrafficInfo_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_PRS_UE_AssistanceInformationNR_r18(SL_PRS_UE_AssistanceInformationNR_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_PRS_TxInfo_r18*)std::malloc((std::size_t)value.count * sizeof(SL_PRS_TxInfo_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_PRS_TxInfo_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_PRS_TxInfo_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UEAssistanceInformation_v1800_IEs_NonCriticalExtension(UEAssistanceInformation_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UEAssistanceInformation_v1800_IEs(UEAssistanceInformation_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17(MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MaxBW_PreferenceFR2_2_r17(MaxBW_PreferenceFR2_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17(MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reducedMIMO_LayersFR2_2_DL_r17 = 1;
    value.reducedMIMO_LayersFR2_2_UL_r17 = 1;
}

void BuildSample_MaxMIMO_LayerPreferenceFR2_2_r17(MaxMIMO_LayerPreferenceFR2_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17(MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17(MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MinSchedulingOffsetPreferenceExt_r17(MinSchedulingOffsetPreferenceExt_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MUSIM_GapPreferenceList_r17(MUSIM_GapPreferenceList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MUSIM_GapInfo_r17*)std::malloc((std::size_t)value.count * sizeof(MUSIM_GapInfo_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_GapInfo_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MUSIM_GapInfo_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MUSIM_Assistance_r17(MUSIM_Assistance_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UL_GapFR2_Preference_r17(UL_GapFR2_Preference_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PropagationDelayDifference_r17(PropagationDelayDifference_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = -270;
        }
    }
}

void BuildSample_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17(UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UEAssistanceInformation_v1700_IEs(UEAssistanceInformation_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_AffectedCarrierFreqList_r16(AffectedCarrierFreqList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (AffectedCarrierFreq_r16*)std::malloc((std::size_t)value.count * sizeof(AffectedCarrierFreq_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(AffectedCarrierFreq_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_AffectedCarrierFreq_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_AffectedCarrierFreqCombList_r16(AffectedCarrierFreqCombList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (AffectedCarrierFreqComb_r16*)std::malloc((std::size_t)value.count * sizeof(AffectedCarrierFreqComb_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(AffectedCarrierFreqComb_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_AffectedCarrierFreqComb_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_IDC_Assistance_r16(IDC_Assistance_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DRX_Preference_r16(DRX_Preference_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MaxBW_Preference_r16(MaxBW_Preference_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MaxCC_Preference_r16(MaxCC_Preference_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16(MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reducedMIMO_LayersFR1_DL_r16 = 1;
    value.reducedMIMO_LayersFR1_UL_r16 = 1;
}

void BuildSample_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16(MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reducedMIMO_LayersFR2_DL_r16 = 1;
    value.reducedMIMO_LayersFR2_UL_r16 = 1;
}

void BuildSample_MaxMIMO_LayerPreference_r16(MaxMIMO_LayerPreference_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MinSchedulingOffsetPreference_r16_PreferredK0_r16(MinSchedulingOffsetPreference_r16_PreferredK0_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MinSchedulingOffsetPreference_r16_PreferredK2_r16(MinSchedulingOffsetPreference_r16_PreferredK2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MinSchedulingOffsetPreference_r16(MinSchedulingOffsetPreference_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ReleasePreference_r16(ReleasePreference_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.preferredRRC_State_r16 = ReleasePreference_r16_PreferredRRC_State_r16_idle;
}

void BuildSample_SL_UE_AssistanceInformationNR_r16(SL_UE_AssistanceInformationNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_TrafficPatternInfo_r16*)std::malloc((std::size_t)value.count * sizeof(SL_TrafficPatternInfo_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TrafficPatternInfo_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_TrafficPatternInfo_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UEAssistanceInformation_v1610_IEs(UEAssistanceInformation_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UEAssistanceInformation_v1540_IEs(UEAssistanceInformation_v1540_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UEAssistanceInformation_IEs(UEAssistanceInformation_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UEAssistanceInformation_CriticalExtensionsFuture(UEAssistanceInformation_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UEAssistanceInformation_CriticalExtensions(UEAssistanceInformation_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UEAssistanceInformation_CriticalExtensions_Tag_ueAssistanceInformation;
    BuildSample_UEAssistanceInformation_IEs(value.u.ueAssistanceInformation, depth + 1);
}

void BuildSample_UEAssistanceInformation(UEAssistanceInformation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_UEAssistanceInformation_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_AffectedCarrierFreq_r16(AffectedCarrierFreq_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq_r16 = 0;
    value.interferenceDirection_r16 = AffectedCarrierFreq_r16_InterferenceDirection_r16_nr;
}

void BuildSample_VictimSystemType_r16(VictimSystemType_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_AffectedCarrierFreqComb_r16(AffectedCarrierFreqComb_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_VictimSystemType_r16(value.victimSystemType_r16, depth + 1);
}

void BuildSample_SupportedBandwidth(SupportedBandwidth& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SupportedBandwidth_Tag_fr1;
    value.u.fr1 = SupportedBandwidth_Fr1_mhz5;
}

void BuildSample_MUSIM_CellToAffect_r18(MUSIM_CellToAffect_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.musim_ServCellIndex_r18 = 0;
}

void BuildSample_MUSIM_AffectedBands_r18(MUSIM_AffectedBands_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MUSIM_CapabilityRestrictedBandParameters_r18*)std::malloc((std::size_t)value.count * sizeof(MUSIM_CapabilityRestrictedBandParameters_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_CapabilityRestrictedBandParameters_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MUSIM_CapabilityRestrictedBandParameters_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18(MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MUSIM_CapabilityRestrictedBandParameters_r18(MUSIM_CapabilityRestrictedBandParameters_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.musim_bandEntryIndex_r18 = 1;
    BuildSample_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18(value.musim_CapabilityRestricted_r18, depth + 1);
}

void BuildSample_MUSIM_AvoidedBands_r18(MUSIM_AvoidedBands_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MUSIM_BandEntryIndex_r18*)std::malloc((std::size_t)value.count * sizeof(MUSIM_BandEntryIndex_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_BandEntryIndex_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SL_TrafficPatternInfo_r16(SL_TrafficPatternInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.trafficPeriodicity_r16 = SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms20;
    value.timingOffset_r16 = 0;
    value.messageSize_r16.bitLength = 8u;
    value.messageSize_r16.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.messageSize_r16.bytes != nullptr) {
        std::memset(value.messageSize_r16.bytes, 0, 1u);
    }
    value.sl_QoS_FlowIdentity_r16 = 1;
}

void BuildSample_AffectedFreqRange_r18(AffectedFreqRange_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.centerFreq_r18 = 0;
    value.affectedBandwidth_r18 = AffectedFreqRange_r18_AffectedBandwidth_r18_khz200;
}

void BuildSample_AffectedCarrierFreqRange_r18(AffectedCarrierFreqRange_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_AffectedFreqRange_r18(value.affectedFreqRange_r18, depth + 1);
    value.interferenceDirection_r18 = AffectedCarrierFreqRange_r18_InterferenceDirection_r18_nr;
}

void BuildSample_AffectedCarrierFreqRangeComb_r18(AffectedCarrierFreqRangeComb_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.affectedCarrierFreqRangeComb_r18_count = 0u;
    value.interferenceDirection_r18 = AffectedCarrierFreqRangeComb_r18_InterferenceDirection_r18_nr;
}

void BuildSample_PDU_SessionUL_TrafficInfo_r18(PDU_SessionUL_TrafficInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdu_SessionID_r18 = 0;
    value.qos_FlowUL_TrafficInfoList_r18_count = 0u;
}

void BuildSample_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18(QOS_FlowUL_TrafficInfo_r18_JitterRange_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.lowerBound_r18 = JitterBound_r18_ms0;
    value.upperBound_r18 = JitterBound_r18_ms0;
}

void BuildSample_ReferenceSFN_AndSlot_r18(ReferenceSFN_AndSlot_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.referenceSFN_r18 = 0;
    value.referenceSlot_r18 = 0;
}

void BuildSample_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18(QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag_referenceTime;
    BuildSample_ReferenceTime_r16(value.u.referenceTime, depth + 1);
}

void BuildSample_QOS_FlowUL_TrafficInfo_r18(QOS_FlowUL_TrafficInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.qfi_r18 = 0;
}

void BuildSample_SL_PRS_TxInfo_r18(SL_PRS_TxInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_PRS_Periodicity_r18 = SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms100;
}

void BuildSample_UE_CapabilityRAT_RequestList(UE_CapabilityRAT_RequestList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UE_CapabilityRAT_Request*)std::malloc((std::size_t)value.count * sizeof(UE_CapabilityRAT_Request));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UE_CapabilityRAT_Request));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UE_CapabilityRAT_Request(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UECapabilityEnquiry_IEs(UECapabilityEnquiry_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_UE_CapabilityRAT_RequestList(value.ue_CapabilityRAT_RequestList, depth + 1);
    if (depth < 2) {
        value.ue_CapabilityEnquiryExt = (UECapabilityEnquiry_v1560_IEs*)std::malloc(sizeof(UECapabilityEnquiry_v1560_IEs));
        if (value.ue_CapabilityEnquiryExt != nullptr) {
            BuildSample_UECapabilityEnquiry_v1560_IEs(*value.ue_CapabilityEnquiryExt, depth + 1);
        }
    }
}

void BuildSample_UECapabilityEnquiry_CriticalExtensionsFuture(UECapabilityEnquiry_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UECapabilityEnquiry_CriticalExtensions(UECapabilityEnquiry_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UECapabilityEnquiry_CriticalExtensions_Tag_ueCapabilityEnquiry;
    BuildSample_UECapabilityEnquiry_IEs(value.u.ueCapabilityEnquiry, depth + 1);
}

void BuildSample_UECapabilityEnquiry(UECapabilityEnquiry& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_UECapabilityEnquiry_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_UECapabilityEnquiry_v1610_IEs_NonCriticalExtension(UECapabilityEnquiry_v1610_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UECapabilityEnquiry_v1610_IEs(UECapabilityEnquiry_v1610_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16(UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18(UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_CapabilityRequestFilterCommon_Mrdc_Request(UE_CapabilityRequestFilterCommon_Mrdc_Request& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_CapabilityRequestFilterCommon(UE_CapabilityRequestFilterCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UECapabilityEnquiry_v1560_IEs(UECapabilityEnquiry_v1560_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_CapabilityRAT_ContainerList(UE_CapabilityRAT_ContainerList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 0u;
}

void BuildSample_UECapabilityInformation_IEs_NonCriticalExtension(UECapabilityInformation_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UECapabilityInformation_IEs(UECapabilityInformation_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UECapabilityInformation_CriticalExtensionsFuture(UECapabilityInformation_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UECapabilityInformation_CriticalExtensions(UECapabilityInformation_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UECapabilityInformation_CriticalExtensions_Tag_ueCapabilityInformation;
    BuildSample_UECapabilityInformation_IEs(value.u.ueCapabilityInformation, depth + 1);
}

void BuildSample_UECapabilityInformation(UECapabilityInformation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_UECapabilityInformation_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_FlightPathInfoReportConfig_r18(FlightPathInfoReportConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxWayPointNumber_r18 = 1;
}

void BuildSample_UEInformationRequest_v1800_IEs_NonCriticalExtension(UEInformationRequest_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UEInformationRequest_v1800_IEs(UEInformationRequest_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UEInformationRequest_v1700_IEs(UEInformationRequest_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UEInformationRequest_r16_IEs(UEInformationRequest_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UEInformationRequest_r16_CriticalExtensionsFuture(UEInformationRequest_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UEInformationRequest_r16_CriticalExtensions(UEInformationRequest_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UEInformationRequest_r16_CriticalExtensions_Tag_ueInformationRequest_r16;
    BuildSample_UEInformationRequest_r16_IEs(value.u.ueInformationRequest_r16, depth + 1);
}

void BuildSample_UEInformationRequest_r16(UEInformationRequest_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_UEInformationRequest_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_FlightPathInfoReport_r18(FlightPathInfoReport_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 0u;
}

void BuildSample_PerRAInfoList_v1660(PerRAInfoList_v1660& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PerRACSI_RSInfo_v1660*)std::malloc((std::size_t)value.count * sizeof(PerRACSI_RSInfo_v1660));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PerRACSI_RSInfo_v1660));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PerRACSI_RSInfo_v1660(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NSAG_List_r17(NSAG_List_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NSAG_ID_r17*)std::malloc((std::size_t)value.count * sizeof(NSAG_ID_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NSAG_ID_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i].bitLength = 8u;
            value.items[i].bytes = (std::uint8_t*)std::malloc(1u);
            if (value.items[i].bytes != nullptr) {
                std::memset(value.items[i].bytes, 0, 1u);
            }
        }
    }
}

void BuildSample_ReportedFeatureCombination_r18(ReportedFeatureCombination_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PerRAInfoList_v1800(PerRAInfoList_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PerRAInfo_v1800*)std::malloc((std::size_t)value.count * sizeof(PerRAInfo_v1800));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PerRAInfo_v1800));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PerRAInfo_v1800(value.items[i], depth + 1);
        }
    }
}

void BuildSample_RA_InformationCommon_r16(RA_InformationCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.absoluteFrequencyPointA_r16 = 0;
    value.locationAndBandwidth_r16 = 0;
    value.subcarrierSpacing_r16 = SubcarrierSpacing_kHz15;
    BuildSample_PerRAInfoList_r16(value.perRAInfoList_r16, depth + 1);
}

void BuildSample_SPR_Cause_r18(SPR_Cause_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CGI_Info_Logging_r16(CGI_Info_Logging_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_Identity(value.plmn_Identity_r16, depth + 1);
    value.cellIdentity_r16.bitLength = 36u;
    value.cellIdentity_r16.bytes = (std::uint8_t*)std::malloc(5u);
    if (value.cellIdentity_r16.bytes != nullptr) {
        std::memset(value.cellIdentity_r16.bytes, 0, 5u);
    }
}

void BuildSample_MeasQuantityResults(MeasQuantityResults& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17(MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ResultsPerSSB_IndexList(ResultsPerSSB_IndexList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ResultsPerSSB_Index*)std::malloc((std::size_t)value.count * sizeof(ResultsPerSSB_Index));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ResultsPerSSB_Index));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_ResultsPerSSB_Index(value.items[i], depth + 1);
        }
    }
}

void BuildSample_ResultsPerCSI_RS_IndexList(ResultsPerCSI_RS_IndexList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ResultsPerCSI_RS_Index*)std::malloc((std::size_t)value.count * sizeof(ResultsPerCSI_RS_Index));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ResultsPerCSI_RS_Index));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_ResultsPerCSI_RS_Index(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17(MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultSuccessHONR_r17_MeasResult_r17(MeasResultSuccessHONR_r17_MeasResult_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17(value.cellResults_r17, depth + 1);
    BuildSample_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17(value.rsIndexResults_r17, depth + 1);
}

void BuildSample_MeasResultSuccessHONR_r17(MeasResultSuccessHONR_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultSuccessHONR_r17_MeasResult_r17(value.measResult_r17, depth + 1);
}

void BuildSample_PCI_ARFCN_EUTRA_r16(PCI_ARFCN_EUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r16 = 0;
    value.carrierFreq_r16 = 0;
}

void BuildSample_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18(SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag_cellGlobalId_r18;
    BuildSample_CGI_Info_Logging_r16(value.u.cellGlobalId_r18, depth + 1);
}

void BuildSample_SuccessPSCell_Report_r18_SourcePSCellInfo_r18(SuccessPSCell_Report_r18_SourcePSCellInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18(value.sourcePSCellId_r18, depth + 1);
}

void BuildSample_PCI_ARFCN_NR_r16(PCI_ARFCN_NR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r16 = 0;
    value.carrierFreq_r16 = 0;
}

void BuildSample_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18(SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag_cellGlobalId_r18;
    BuildSample_CGI_Info_Logging_r16(value.u.cellGlobalId_r18, depth + 1);
}

void BuildSample_SuccessPSCell_Report_r18_TargetPSCellInfo_r18(SuccessPSCell_Report_r18_TargetPSCellInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18(value.targetPSCellId_r18, depth + 1);
}

void BuildSample_MeasResultList2NR_r16(MeasResultList2NR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResult2NR_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResult2NR_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2NR_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResult2NR_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultList2EUTRA_r16(MeasResultList2EUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResult2EUTRA_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResult2EUTRA_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2EUTRA_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResult2EUTRA_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SuccessPSCell_Report_r18_MeasResultNeighCells_r18(SuccessPSCell_Report_r18_MeasResultNeighCells_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SuccessPSCell_Report_r18(SuccessPSCell_Report_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CGI_Info_Logging_r16(value.pCellId_r18, depth + 1);
    BuildSample_SuccessPSCell_Report_r18_TargetPSCellInfo_r18(value.targetPSCellInfo_r18, depth + 1);
}

void BuildSample_UEInformationResponse_v1800_IEs_NonCriticalExtension(UEInformationResponse_v1800_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UEInformationResponse_v1800_IEs(UEInformationResponse_v1800_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ConnEstFailReportList_r17(ConnEstFailReportList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ConnEstFailReport_r16*)std::malloc((std::size_t)value.count * sizeof(ConnEstFailReport_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ConnEstFailReport_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_ConnEstFailReport_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultNeighFreqList_RSSI_r18(MeasResultNeighFreqList_RSSI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultNeighFreq_RSSI_r18*)std::malloc((std::size_t)value.count * sizeof(MeasResultNeighFreq_RSSI_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultNeighFreq_RSSI_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultNeighFreq_RSSI_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasQuantityResultsEUTRA(MeasQuantityResultsEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18(SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag_cellGlobalId_r18;
    BuildSample_CGI_Info_Logging_r16(value.u.cellGlobalId_r18, depth + 1);
}

void BuildSample_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18(SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18(value.targetPCellId_r18, depth + 1);
}

void BuildSample_SHR_Cause_r17(SHR_Cause_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SuccessHO_Report_r17_SourceCellInfo_r17(SuccessHO_Report_r17_SourceCellInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CGI_Info_Logging_r16(value.sourcePCellId_r17, depth + 1);
}

void BuildSample_SuccessHO_Report_r17_TargetCellInfo_r17(SuccessHO_Report_r17_TargetCellInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CGI_Info_Logging_r16(value.targetPCellId_r17, depth + 1);
}

void BuildSample_SuccessHO_Report_r17_MeasResultNeighCells_r17(SuccessHO_Report_r17_MeasResultNeighCells_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SuccessHO_Report_r17(SuccessHO_Report_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SuccessHO_Report_r17_SourceCellInfo_r17(value.sourceCellInfo_r17, depth + 1);
    BuildSample_SuccessHO_Report_r17_TargetCellInfo_r17(value.targetCellInfo_r17, depth + 1);
}

void BuildSample_UEInformationResponse_v1700_IEs(UEInformationResponse_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_LogMeasInfoList_r16(LogMeasInfoList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (LogMeasInfo_r16*)std::malloc((std::size_t)value.count * sizeof(LogMeasInfo_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(LogMeasInfo_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_LogMeasInfo_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_LogMeasReport_r16(LogMeasReport_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.absoluteTimeStamp_r16.bitLength = 48u;
    value.absoluteTimeStamp_r16.bytes = (std::uint8_t*)std::malloc(6u);
    if (value.absoluteTimeStamp_r16.bytes != nullptr) {
        std::memset(value.absoluteTimeStamp_r16.bytes, 0, 6u);
    }
    BuildSample_TraceReference_r16(value.traceReference_r16, depth + 1);
    value.traceRecordingSessionRef_r16.length = 2u;
    value.traceRecordingSessionRef_r16.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.traceRecordingSessionRef_r16.bytes != nullptr) {
        std::memset(value.traceRecordingSessionRef_r16.bytes, 0, 2u);
    }
    value.tce_Id_r16.length = 1u;
    value.tce_Id_r16.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.tce_Id_r16.bytes != nullptr) {
        std::memset(value.tce_Id_r16.bytes, 0, 1u);
    }
    BuildSample_LogMeasInfoList_r16(value.logMeasInfoList_r16, depth + 1);
}

void BuildSample_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16(MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasQuantityResults(value.resultsSSB_Cell_r16, depth + 1);
}

void BuildSample_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16(MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ResultsPerSSB_IndexList(value.resultsSSB_Indexes_r16, depth + 1);
}

void BuildSample_MeasResultFailedCell_r16_MeasResult_r16(MeasResultFailedCell_r16_MeasResult_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16(value.cellResults_r16, depth + 1);
    BuildSample_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16(value.rsIndexResults_r16, depth + 1);
}

void BuildSample_MeasResultFailedCell_r16(MeasResultFailedCell_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CGI_Info_Logging_r16(value.cgi_Info, depth + 1);
    BuildSample_MeasResultFailedCell_r16_MeasResult_r16(value.measResult_r16, depth + 1);
}

void BuildSample_ConnEstFailReport_r16_MeasResultNeighCells_r16(ConnEstFailReport_r16_MeasResultNeighCells_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ConnEstFailReport_r16(ConnEstFailReport_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultFailedCell_r16(value.measResultFailedCell_r16, depth + 1);
    BuildSample_ConnEstFailReport_r16_MeasResultNeighCells_r16(value.measResultNeighCells_r16, depth + 1);
    value.numberOfConnFail_r16 = 1;
    BuildSample_PerRAInfoList_r16(value.perRAInfoList_r16, depth + 1);
    value.timeSinceFailure_r16 = 0;
}

void BuildSample_RA_ReportList_r16(RA_ReportList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (RA_Report_r16*)std::malloc((std::size_t)value.count * sizeof(RA_Report_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(RA_Report_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_RA_Report_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16(MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16(MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultRLFNR_r16_MeasResult_r16(MeasResultRLFNR_r16_MeasResult_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16(value.cellResults_r16, depth + 1);
}

void BuildSample_MeasResultRLFNR_r16(MeasResultRLFNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultRLFNR_r16_MeasResult_r16(value.measResult_r16, depth + 1);
}

void BuildSample_ChoCandidateCellList_r17(ChoCandidateCellList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ChoCandidateCell_r17*)std::malloc((std::size_t)value.count * sizeof(ChoCandidateCell_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ChoCandidateCell_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_ChoCandidateCell_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17(RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag_cellGlobalId_r17;
    BuildSample_CGI_Info_Logging_r16(value.u.cellGlobalId_r17, depth + 1);
}

void BuildSample_AttemptedBWP_Info_r18(AttemptedBWP_Info_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.locationAndBandwidth_r18 = 0;
    value.subcarrierSpacing_r18 = SubcarrierSpacing_kHz15;
}

void BuildSample_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18(RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag_cellGlobalId_r18;
    BuildSample_CGI_Info_Logging_r16(value.u.cellGlobalId_r18, depth + 1);
}

void BuildSample_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16(RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CGI_InfoEUTRALogging(CGI_InfoEUTRALogging& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16(RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag_nrPreviousCell_r16;
    BuildSample_CGI_Info_Logging_r16(value.u.nrPreviousCell_r16, depth + 1);
}

void BuildSample_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16(RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag_cellGlobalId_r16;
    BuildSample_CGI_Info_Logging_r16(value.u.cellGlobalId_r16, depth + 1);
}

void BuildSample_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16(RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag_cellGlobalId_r16;
    BuildSample_CGI_InfoEUTRALogging(value.u.cellGlobalId_r16, depth + 1);
}

void BuildSample_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16(RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag_nrFailedPCellId_r16;
    BuildSample_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16(value.u.nrFailedPCellId_r16, depth + 1);
}

void BuildSample_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16(RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag_nrReconnectCellId_r16;
    BuildSample_CGI_Info_Logging_r16(value.u.nrReconnectCellId_r16, depth + 1);
}

void BuildSample_RLF_Report_r16_Nr_RLF_Report_r16(RLF_Report_r16_Nr_RLF_Report_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultRLFNR_r16(value.measResultLastServCell_r16, depth + 1);
    value.c_RNTI_r16 = 0;
    BuildSample_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16(value.failedPCellId_r16, depth + 1);
    value.timeSinceFailure_r16 = 0;
    value.connectionFailureType_r16 = RLF_Report_r16_Nr_RLF_Report_r16_ConnectionFailureType_r16_rlf;
    value.rlf_Cause_r16 = RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16_t310_Expiry;
}

void BuildSample_RLF_Report_r16_Eutra_RLF_Report_r16(RLF_Report_r16_Eutra_RLF_Report_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CGI_InfoEUTRALogging(value.failedPCellId_EUTRA, depth + 1);
    value.measResult_RLF_Report_EUTRA_r16.length = 0u;
}

void BuildSample_RLF_Report_r16(RLF_Report_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RLF_Report_r16_Tag_nr_RLF_Report_r16;
    BuildSample_RLF_Report_r16_Nr_RLF_Report_r16(value.u.nr_RLF_Report_r16, depth + 1);
}

void BuildSample_VisitedCellInfoList_r16(VisitedCellInfoList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (VisitedCellInfo_r16*)std::malloc((std::size_t)value.count * sizeof(VisitedCellInfo_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(VisitedCellInfo_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_VisitedCellInfo_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UEInformationResponse_r16_IEs(UEInformationResponse_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UEInformationResponse_r16_CriticalExtensionsFuture(UEInformationResponse_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UEInformationResponse_r16_CriticalExtensions(UEInformationResponse_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UEInformationResponse_r16_CriticalExtensions_Tag_ueInformationResponse_r16;
    BuildSample_UEInformationResponse_r16_IEs(value.u.ueInformationResponse_r16, depth + 1);
}

void BuildSample_UEInformationResponse_r16(UEInformationResponse_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rrc_TransactionIdentifier = 0;
    BuildSample_UEInformationResponse_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_WayPoint_r18(WayPoint_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.wayPointLocation_r18.length = 0u;
}

void BuildSample_MeasResultServingCell_r16_ResultsSSB(MeasResultServingCell_r16_ResultsSSB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.best_ssb_Index = 0;
    BuildSample_MeasQuantityResults(value.best_ssb_Results, depth + 1);
    value.numberOfGoodSSB = 1;
}

void BuildSample_MeasResultServingCell_r16(MeasResultServingCell_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasQuantityResults(value.resultsSSB_Cell, depth + 1);
}

void BuildSample_MeasResultListLogging2NR_r16(MeasResultListLogging2NR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultLogging2NR_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResultLogging2NR_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultLogging2NR_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultLogging2NR_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_LogMeasInfo_r16_MeasResultNeighCells_r16(LogMeasInfo_r16_MeasResultNeighCells_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_LogMeasInfo_r16(LogMeasInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.relativeTimeStamp_r16 = 0;
    BuildSample_LogMeasInfo_r16_MeasResultNeighCells_r16(value.measResultNeighCells_r16, depth + 1);
}

void BuildSample_RA_Report_r16_CellId_r16(RA_Report_r16_CellId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RA_Report_r16_CellId_r16_Tag_cellGlobalId_r16;
    BuildSample_CGI_Info_Logging_r16(value.u.cellGlobalId_r16, depth + 1);
}

void BuildSample_RA_Report_r16(RA_Report_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RA_Report_r16_CellId_r16(value.cellId_r16, depth + 1);
    value.raPurpose_r16 = RA_Report_r16_RaPurpose_r16_accessRelated;
}

void BuildSample_PerRAAttemptInfoList_r16(PerRAAttemptInfoList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PerRAAttemptInfo_r16*)std::malloc((std::size_t)value.count * sizeof(PerRAAttemptInfo_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PerRAAttemptInfo_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PerRAAttemptInfo_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PerRASSBInfo_r16(PerRASSBInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb_Index_r16 = 0;
    value.numberOfPreamblesSentOnSSB_r16 = 1;
    BuildSample_PerRAAttemptInfoList_r16(value.perRAAttemptInfoList_r16, depth + 1);
}

void BuildSample_PerRACSI_RSInfo_r16(PerRACSI_RSInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csi_RS_Index_r16 = 0;
    value.numberOfPreamblesSentOnCSI_RS_r16 = 1;
}

void BuildSample_PerRAInfo_r16(PerRAInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PerRAInfo_r16_Tag_perRASSBInfoList_r16;
    BuildSample_PerRASSBInfo_r16(value.u.perRASSBInfoList_r16, depth + 1);
}

void BuildSample_PerRASSBInfo_v1800(PerRASSBInfo_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PerRACSI_RSInfo_v1800(PerRACSI_RSInfo_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PerRAInfo_v1800(PerRAInfo_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PerRAInfo_v1800_Tag_perRASSBInfoList_v1800;
    BuildSample_PerRASSBInfo_v1800(value.u.perRASSBInfoList_v1800, depth + 1);
}

void BuildSample_PerRACSI_RSInfo_v1660(PerRACSI_RSInfo_v1660& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PerRAAttemptInfo_r16(PerRAAttemptInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultNeighFreq_RSSI_r18(MeasResultNeighFreq_RSSI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResult2NR_r16(MeasResult2NR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultListNR(value.measResultList_r16, depth + 1);
}

void BuildSample_MeasResultListLoggingNR_r16(MeasResultListLoggingNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultLoggingNR_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResultLoggingNR_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultLoggingNR_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultLoggingNR_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultLogging2NR_r16(MeasResultLogging2NR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq_r16 = 0;
    BuildSample_MeasResultListLoggingNR_r16(value.measResultListLoggingNR_r16, depth + 1);
}

void BuildSample_MeasResultLoggingNR_r16(MeasResultLoggingNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r16 = 0;
    BuildSample_MeasQuantityResults(value.resultsSSB_Cell_r16, depth + 1);
}

void BuildSample_MeasResult2EUTRA_r16(MeasResult2EUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq_r16 = 0;
    BuildSample_MeasResultListEUTRA(value.measResultList_r16, depth + 1);
}

void BuildSample_ChoCandidateCell_r17(ChoCandidateCell_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ChoCandidateCell_r17_Tag_cellGlobalId_r17;
    BuildSample_CGI_Info_Logging_r16(value.u.cellGlobalId_r17, depth + 1);
}

void BuildSample_UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension(UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UEPositioningAssistanceInfo_v1720_IEs(UEPositioningAssistanceInfo_v1720_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_TxTEG_AssociationList_r17(UE_TxTEG_AssociationList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UE_TxTEG_Association_r17*)std::malloc((std::size_t)value.count * sizeof(UE_TxTEG_Association_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UE_TxTEG_Association_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UE_TxTEG_Association_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UEPositioningAssistanceInfo_r17_IEs(UEPositioningAssistanceInfo_r17_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture(UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UEPositioningAssistanceInfo_r17_CriticalExtensions(UEPositioningAssistanceInfo_r17_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag_uePositioningAssistanceInfo_r17;
    BuildSample_UEPositioningAssistanceInfo_r17_IEs(value.u.uePositioningAssistanceInfo_r17, depth + 1);
}

void BuildSample_UEPositioningAssistanceInfo_r17(UEPositioningAssistanceInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_UEPositioningAssistanceInfo_r17_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_NR_TimeStamp_r17_Nr_Slot_r17(NR_TimeStamp_r17_Nr_Slot_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs15_r17;
    value.u.scs15_r17 = 0;
}

void BuildSample_NR_TimeStamp_r17(NR_TimeStamp_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nr_SFN_r17 = 0;
    BuildSample_NR_TimeStamp_r17_Nr_Slot_r17(value.nr_Slot_r17, depth + 1);
}

void BuildSample_UE_TxTEG_Association_r17(UE_TxTEG_Association_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ue_TxTEG_ID_r17 = 0;
    BuildSample_NR_TimeStamp_r17(value.nr_TimeStamp_r17, depth + 1);
    value.associatedSRS_PosResourceIdList_r17_count = 0u;
}

void BuildSample_ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension(ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_ULDedicatedMessageSegment_r16_IEs(ULDedicatedMessageSegment_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.segmentNumber_r16 = 0;
    value.rrc_MessageSegmentContainer_r16.length = 0u;
    value.rrc_MessageSegmentType_r16 = ULDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16_notLastSegment;
}

void BuildSample_ULDedicatedMessageSegment_r16_CriticalExtensionsFuture(ULDedicatedMessageSegment_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_ULDedicatedMessageSegment_r16_CriticalExtensions(ULDedicatedMessageSegment_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ULDedicatedMessageSegment_r16_CriticalExtensions_Tag_ulDedicatedMessageSegment_r16;
    BuildSample_ULDedicatedMessageSegment_r16_IEs(value.u.ulDedicatedMessageSegment_r16, depth + 1);
}

void BuildSample_ULDedicatedMessageSegment_r16(ULDedicatedMessageSegment_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ULDedicatedMessageSegment_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_ULInformationTransfer_v1700_IEs_NonCriticalExtension(ULInformationTransfer_v1700_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_ULInformationTransfer_v1700_IEs(ULInformationTransfer_v1700_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ULInformationTransfer_IEs(ULInformationTransfer_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ULInformationTransfer_CriticalExtensionsFuture(ULInformationTransfer_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_ULInformationTransfer_CriticalExtensions(ULInformationTransfer_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ULInformationTransfer_CriticalExtensions_Tag_ulInformationTransfer;
    BuildSample_ULInformationTransfer_IEs(value.u.ulInformationTransfer, depth + 1);
}

void BuildSample_ULInformationTransfer(ULInformationTransfer& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ULInformationTransfer_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_ULInformationTransferIRAT_r16_IEs_NonCriticalExtension(ULInformationTransferIRAT_r16_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_ULInformationTransferIRAT_r16_IEs(ULInformationTransferIRAT_r16_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ULInformationTransferIRAT_r16_CriticalExtensions_C1(ULInformationTransferIRAT_r16_CriticalExtensions_C1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_ulInformationTransferIRAT_r16;
    BuildSample_ULInformationTransferIRAT_r16_IEs(value.u.ulInformationTransferIRAT_r16, depth + 1);
}

void BuildSample_ULInformationTransferIRAT_r16_CriticalExtensionsFuture(ULInformationTransferIRAT_r16_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_ULInformationTransferIRAT_r16_CriticalExtensions(ULInformationTransferIRAT_r16_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ULInformationTransferIRAT_r16_CriticalExtensions_Tag_c1;
    BuildSample_ULInformationTransferIRAT_r16_CriticalExtensions_C1(value.u.c1, depth + 1);
}

void BuildSample_ULInformationTransferIRAT_r16(ULInformationTransferIRAT_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ULInformationTransferIRAT_r16_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_ULInformationTransferMRDC_IEs_NonCriticalExtension(ULInformationTransferMRDC_IEs_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_ULInformationTransferMRDC_IEs(ULInformationTransferMRDC_IEs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ULInformationTransferMRDC_CriticalExtensions_C1(ULInformationTransferMRDC_CriticalExtensions_C1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ULInformationTransferMRDC_CriticalExtensions_C1_Tag_ulInformationTransferMRDC;
    BuildSample_ULInformationTransferMRDC_IEs(value.u.ulInformationTransferMRDC, depth + 1);
}

void BuildSample_ULInformationTransferMRDC_CriticalExtensionsFuture(ULInformationTransferMRDC_CriticalExtensionsFuture& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_ULInformationTransferMRDC_CriticalExtensions(ULInformationTransferMRDC_CriticalExtensions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ULInformationTransferMRDC_CriticalExtensions_Tag_c1;
    BuildSample_ULInformationTransferMRDC_CriticalExtensions_C1(value.u.c1, depth + 1);
}

void BuildSample_ULInformationTransferMRDC(ULInformationTransferMRDC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ULInformationTransferMRDC_CriticalExtensions(value.criticalExtensions, depth + 1);
}

void BuildSample_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16(SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.s_SearchDeltaP_r16 = SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16_dB3;
    value.t_SearchDeltaP_r16 = SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_s5;
}

void BuildSample_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16(SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.s_SearchThresholdP_r16 = 0;
}

void BuildSample_SIB2_ExtGroup1_RelaxedMeasurement_r16(SIB2_ExtGroup1_RelaxedMeasurement_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17(SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.s_SearchDeltaP_Stationary_r17 = SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17_dB2;
    value.t_SearchDeltaP_Stationary_r17 = SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_s5;
}

void BuildSample_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17(SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.s_SearchThresholdP2_r17 = 0;
}

void BuildSample_SIB2_ExtGroup2_RelaxedMeasurement_r17(SIB2_ExtGroup2_RelaxedMeasurement_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17(value.stationaryMobilityEvaluation_r17, depth + 1);
}

void BuildSample_ThresholdNR(ThresholdNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MobilityStateParameters(MobilityStateParameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.t_Evaluation = MobilityStateParameters_T_Evaluation_s30;
    value.t_HystNormal = MobilityStateParameters_T_HystNormal_s30;
    value.n_CellChangeMedium = 1;
    value.n_CellChangeHigh = 1;
}

void BuildSample_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF(SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sf_Medium = SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_Medium_dB_6;
    value.sf_High = SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_High_dB_6;
}

void BuildSample_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars(SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MobilityStateParameters(value.mobilityStateParameters, depth + 1);
    BuildSample_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF(value.q_HystSF, depth + 1);
}

void BuildSample_SIB2_CellReselectionInfoCommon(SIB2_CellReselectionInfoCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.q_Hyst = SIB2_CellReselectionInfoCommon_Q_Hyst_dB0;
}

void BuildSample_SIB2_CellReselectionServingFreqInfo(SIB2_CellReselectionServingFreqInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.threshServingLowP = 0;
    value.cellReselectionPriority = 0;
}

void BuildSample_SSB_ToMeasure(SSB_ToMeasure& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SSB_ToMeasure_Tag_shortBitmap;
    value.u.shortBitmap.bitLength = 4u;
    value.u.shortBitmap.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.shortBitmap.bytes != nullptr) {
        std::memset(value.u.shortBitmap.bytes, 0, 1u);
    }
}

void BuildSample_SS_RSSI_Measurement(SS_RSSI_Measurement& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measurementSlots.bitLength = 1u;
    value.measurementSlots.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.measurementSlots.bytes != nullptr) {
        std::memset(value.measurementSlots.bytes, 0, 1u);
    }
    value.endSymbol = 0;
}

void BuildSample_SpeedStateScaleFactors(SpeedStateScaleFactors& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sf_Medium = SpeedStateScaleFactors_Sf_Medium_oDot25;
    value.sf_High = SpeedStateScaleFactors_Sf_High_oDot25;
}

void BuildSample_SSB_MTC2_LP_r16(SSB_MTC2_LP_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.periodicity = SSB_MTC2_LP_r16_Periodicity_sf10;
}

void BuildSample_SSB_MTC4List_r17(SSB_MTC4List_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SSB_MTC4_r17*)std::malloc((std::size_t)value.count * sizeof(SSB_MTC4_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SSB_MTC4_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SSB_MTC4_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SIB2_IntraFreqCellReselectionInfo(SIB2_IntraFreqCellReselectionInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.q_RxLevMin = -70;
    value.s_IntraSearchP = 0;
    value.t_ReselectionNR = 0;
    value.deriveSSB_IndexFromCell = true;
}

void BuildSample_SIB2(SIB2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SIB2_CellReselectionInfoCommon(value.cellReselectionInfoCommon, depth + 1);
    BuildSample_SIB2_CellReselectionServingFreqInfo(value.cellReselectionServingFreqInfo, depth + 1);
    BuildSample_SIB2_IntraFreqCellReselectionInfo(value.intraFreqCellReselectionInfo, depth + 1);
}

void BuildSample_IntraFreqNeighCellList_v1610(IntraFreqNeighCellList_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (IntraFreqNeighCellInfo_v1610*)std::malloc((std::size_t)value.count * sizeof(IntraFreqNeighCellInfo_v1610));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(IntraFreqNeighCellInfo_v1610));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_IntraFreqNeighCellInfo_v1610(value.items[i], depth + 1);
        }
    }
}

void BuildSample_IntraFreqAllowedCellList_r16(IntraFreqAllowedCellList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PCI_Range(value.items[i], depth + 1);
        }
    }
}

void BuildSample_IntraFreqNeighCellList_v1710(IntraFreqNeighCellList_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (IntraFreqNeighCellInfo_v1710*)std::malloc((std::size_t)value.count * sizeof(IntraFreqNeighCellInfo_v1710));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(IntraFreqNeighCellInfo_v1710));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_IntraFreqNeighCellInfo_v1710(value.items[i], depth + 1);
        }
    }
}

void BuildSample_IntraFreqNeighHSDN_CellList_r17(IntraFreqNeighHSDN_CellList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PCI_Range(value.items[i], depth + 1);
        }
    }
}

void BuildSample_IntraFreqNeighCellList(IntraFreqNeighCellList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (IntraFreqNeighCellInfo*)std::malloc((std::size_t)value.count * sizeof(IntraFreqNeighCellInfo));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(IntraFreqNeighCellInfo));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_IntraFreqNeighCellInfo(value.items[i], depth + 1);
        }
    }
}

void BuildSample_IntraFreqExcludedCellList(IntraFreqExcludedCellList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PCI_Range(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SIB3(SIB3& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IntraFreqNeighCellInfo(IntraFreqNeighCellInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId = 0;
    value.q_OffsetCell = Q_OffsetRange_dB_24;
}

void BuildSample_IntraFreqNeighCellInfo_v1610(IntraFreqNeighCellInfo_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IntraFreqNeighCellInfo_v1710(IntraFreqNeighCellInfo_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IntraFreqCAG_CellListPerPLMN_r16(IntraFreqCAG_CellListPerPLMN_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.plmn_IdentityIndex_r16 = 1;
    value.cag_CellList_r16_count = 0u;
}

void BuildSample_InterFreqCarrierFreqList_v1610(InterFreqCarrierFreqList_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (InterFreqCarrierFreqInfo_v1610*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1610));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1610));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_InterFreqCarrierFreqInfo_v1610(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqCarrierFreqList_v1700(InterFreqCarrierFreqList_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (InterFreqCarrierFreqInfo_v1700*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1700));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1700));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_InterFreqCarrierFreqInfo_v1700(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqCarrierFreqList_v1720(InterFreqCarrierFreqList_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (InterFreqCarrierFreqInfo_v1720*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1720));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1720));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_InterFreqCarrierFreqInfo_v1720(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqCarrierFreqList_v1730(InterFreqCarrierFreqList_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (InterFreqCarrierFreqInfo_v1730*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1730));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1730));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_InterFreqCarrierFreqInfo_v1730(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqCarrierFreqList_v1760(InterFreqCarrierFreqList_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (InterFreqCarrierFreqInfo_v1760*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1760));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1760));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_InterFreqCarrierFreqInfo_v1760(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqCarrierFreqList_v1800(InterFreqCarrierFreqList_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (InterFreqCarrierFreqInfo_v1800*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1800));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1800));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_InterFreqCarrierFreqInfo_v1800(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqCarrierFreqList(InterFreqCarrierFreqList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (InterFreqCarrierFreqInfo*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_InterFreqCarrierFreqInfo(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SIB4(SIB4& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_InterFreqCarrierFreqList(value.interFreqCarrierFreqList, depth + 1);
}

void BuildSample_InterFreqNeighCellList(InterFreqNeighCellList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (InterFreqNeighCellInfo*)std::malloc((std::size_t)value.count * sizeof(InterFreqNeighCellInfo));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqNeighCellInfo));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_InterFreqNeighCellInfo(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqExcludedCellList(InterFreqExcludedCellList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PCI_Range(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqCarrierFreqInfo_ThreshX_Q(InterFreqCarrierFreqInfo_ThreshX_Q& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.threshX_HighQ = 0;
    value.threshX_LowQ = 0;
}

void BuildSample_InterFreqCarrierFreqInfo(InterFreqCarrierFreqInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dl_CarrierFreq = 0;
    value.ssbSubcarrierSpacing = SubcarrierSpacing_kHz15;
    value.deriveSSB_IndexFromCell = true;
    value.q_RxLevMin = -70;
    value.t_ReselectionNR = 0;
    value.threshX_HighP = 0;
    value.threshX_LowP = 0;
    value.q_OffsetFreq = Q_OffsetRange_dB0;
}

void BuildSample_InterFreqNeighCellList_v1610(InterFreqNeighCellList_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (InterFreqNeighCellInfo_v1610*)std::malloc((std::size_t)value.count * sizeof(InterFreqNeighCellInfo_v1610));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqNeighCellInfo_v1610));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_InterFreqNeighCellInfo_v1610(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqAllowedCellList_r16(InterFreqAllowedCellList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PCI_Range(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqCarrierFreqInfo_v1610(InterFreqCarrierFreqInfo_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_InterFreqNeighHSDN_CellList_r17(InterFreqNeighHSDN_CellList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PCI_Range(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqNeighCellList_v1710(InterFreqNeighCellList_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (InterFreqNeighCellInfo_v1710*)std::malloc((std::size_t)value.count * sizeof(InterFreqNeighCellInfo_v1710));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqNeighCellInfo_v1710));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_InterFreqNeighCellInfo_v1710(value.items[i], depth + 1);
        }
    }
}

void BuildSample_InterFreqCarrierFreqInfo_v1700(InterFreqCarrierFreqInfo_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_InterFreqCarrierFreqInfo_v1720(InterFreqCarrierFreqInfo_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_InterFreqCarrierFreqInfo_v1730(InterFreqCarrierFreqInfo_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_InterFreqCarrierFreqInfo_v1760(InterFreqCarrierFreqInfo_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PCI_Range(PCI_Range& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.start = 0;
}

void BuildSample_InterFreqCarrierFreqInfo_v1800(InterFreqCarrierFreqInfo_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_InterFreqNeighCellInfo(InterFreqNeighCellInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId = 0;
    value.q_OffsetCell = Q_OffsetRange_dB_24;
}

void BuildSample_InterFreqNeighCellInfo_v1610(InterFreqNeighCellInfo_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_InterFreqNeighCellInfo_v1710(InterFreqNeighCellInfo_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_InterFreqCAG_CellListPerPLMN_r16(InterFreqCAG_CellListPerPLMN_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.plmn_IdentityIndex_r16 = 1;
    value.cag_CellList_r16_count = 0u;
}

void BuildSample_CarrierFreqListEUTRA_v1610(CarrierFreqListEUTRA_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CarrierFreqEUTRA_v1610*)std::malloc((std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1610));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1610));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CarrierFreqEUTRA_v1610(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CarrierFreqListEUTRA_v1700(CarrierFreqListEUTRA_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CarrierFreqEUTRA_v1700*)std::malloc((std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1700));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1700));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CarrierFreqEUTRA_v1700(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CarrierFreqListEUTRA_v1800(CarrierFreqListEUTRA_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CarrierFreqEUTRA_v1800*)std::malloc((std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1800));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1800));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CarrierFreqEUTRA_v1800(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CarrierFreqListEUTRA(CarrierFreqListEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CarrierFreqEUTRA*)std::malloc((std::size_t)value.count * sizeof(CarrierFreqEUTRA));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CarrierFreqEUTRA));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CarrierFreqEUTRA(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SIB5(SIB5& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.t_ReselectionEUTRA = 0;
}

void BuildSample_EUTRA_FreqExcludedCellList(EUTRA_FreqExcludedCellList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (EUTRA_PhysCellIdRange*)std::malloc((std::size_t)value.count * sizeof(EUTRA_PhysCellIdRange));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_PhysCellIdRange));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_EUTRA_PhysCellIdRange(value.items[i], depth + 1);
        }
    }
}

void BuildSample_EUTRA_FreqNeighCellList(EUTRA_FreqNeighCellList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (EUTRA_FreqNeighCellInfo*)std::malloc((std::size_t)value.count * sizeof(EUTRA_FreqNeighCellInfo));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_FreqNeighCellInfo));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_EUTRA_FreqNeighCellInfo(value.items[i], depth + 1);
        }
    }
}

void BuildSample_EUTRA_MultiBandInfoList(EUTRA_MultiBandInfoList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (EUTRA_MultiBandInfo*)std::malloc((std::size_t)value.count * sizeof(EUTRA_MultiBandInfo));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_MultiBandInfo));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_EUTRA_MultiBandInfo(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CarrierFreqEUTRA_ThreshX_Q(CarrierFreqEUTRA_ThreshX_Q& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.threshX_HighQ = 0;
    value.threshX_LowQ = 0;
}

void BuildSample_CarrierFreqEUTRA(CarrierFreqEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq = 0;
    value.allowedMeasBandwidth = EUTRA_AllowedMeasBandwidth_mbw6;
    value.presenceAntennaPort1 = true;
    value.threshX_High = 0;
    value.threshX_Low = 0;
    value.q_RxLevMin = -70;
    value.q_QualMin = -34;
    value.p_MaxEUTRA = -30;
}

void BuildSample_CarrierFreqEUTRA_v1610(CarrierFreqEUTRA_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_EUTRA_FreqNeighHSDN_CellList_r17(EUTRA_FreqNeighHSDN_CellList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (EUTRA_PhysCellIdRange*)std::malloc((std::size_t)value.count * sizeof(EUTRA_PhysCellIdRange));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_PhysCellIdRange));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_EUTRA_PhysCellIdRange(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CarrierFreqEUTRA_v1700(CarrierFreqEUTRA_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_EUTRA_MultiBandInfoListAerial_r18(EUTRA_MultiBandInfoListAerial_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (EUTRA_MultiBandInfoAerial_r18*)std::malloc((std::size_t)value.count * sizeof(EUTRA_MultiBandInfoAerial_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_MultiBandInfoAerial_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_EUTRA_MultiBandInfoAerial_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CarrierFreqEUTRA_v1800(CarrierFreqEUTRA_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_EUTRA_FreqNeighCellInfo(EUTRA_FreqNeighCellInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId = 0;
    value.dummy = EUTRA_Q_OffsetRange_dB_24;
}

void BuildSample_SIB6(SIB6& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.messageIdentifier.bitLength = 16u;
    value.messageIdentifier.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.messageIdentifier.bytes != nullptr) {
        std::memset(value.messageIdentifier.bytes, 0, 2u);
    }
    value.serialNumber.bitLength = 16u;
    value.serialNumber.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.serialNumber.bytes != nullptr) {
        std::memset(value.serialNumber.bytes, 0, 2u);
    }
    value.warningType.length = 2u;
    value.warningType.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.warningType.bytes != nullptr) {
        std::memset(value.warningType.bytes, 0, 2u);
    }
}

void BuildSample_SIB7(SIB7& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.messageIdentifier.bitLength = 16u;
    value.messageIdentifier.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.messageIdentifier.bytes != nullptr) {
        std::memset(value.messageIdentifier.bytes, 0, 2u);
    }
    value.serialNumber.bitLength = 16u;
    value.serialNumber.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.serialNumber.bytes != nullptr) {
        std::memset(value.serialNumber.bytes, 0, 2u);
    }
    value.warningMessageSegmentType = SIB7_WarningMessageSegmentType_notLastSegment;
    value.warningMessageSegmentNumber = 0;
    value.warningMessageSegment.length = 0u;
}

void BuildSample_SIB8(SIB8& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.messageIdentifier.bitLength = 16u;
    value.messageIdentifier.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.messageIdentifier.bytes != nullptr) {
        std::memset(value.messageIdentifier.bytes, 0, 2u);
    }
    value.serialNumber.bitLength = 16u;
    value.serialNumber.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.serialNumber.bytes != nullptr) {
        std::memset(value.serialNumber.bytes, 0, 2u);
    }
    value.warningMessageSegmentType = SIB8_WarningMessageSegmentType_notLastSegment;
    value.warningMessageSegmentNumber = 0;
    value.warningMessageSegment.length = 0u;
}

void BuildSample_SIB9_TimeInfo(SIB9_TimeInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.timeInfoUTC = 0;
}

void BuildSample_SIB9(SIB9& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_HRNN_List_r16(HRNN_List_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (HRNN_r16*)std::malloc((std::size_t)value.count * sizeof(HRNN_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(HRNN_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_HRNN_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SIB10_r16(SIB10_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_HRNN_r16(HRNN_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasIdleConfigSIB_r16(MeasIdleConfigSIB_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB11_r16(SIB11_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB12_r16(SIB12_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.segmentNumber_r16 = 0;
    value.segmentType_r16 = SIB12_r16_SegmentType_r16_notLastSegment;
    value.segmentContainer_r16.length = 0u;
}

void BuildSample_SL_DiscConfigCommon_r17(SL_DiscConfigCommon_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_RelayUE_Config_r17(value.sl_RelayUE_ConfigCommon_r17, depth + 1);
    BuildSample_SL_RemoteUE_Config_r17(value.sl_RemoteUE_ConfigCommon_r17, depth + 1);
}

void BuildSample_UE_TimersAndConstantsRemoteUE_r17(UE_TimersAndConstantsRemoteUE_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_DiscConfigCommon_v1800(SL_DiscConfigCommon_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_RelayUE_ConfigU2U_r18(value.sl_RelayUE_ConfigCommonU2U_r18, depth + 1);
    BuildSample_SL_RemoteUE_ConfigU2U_r18(value.sl_RemoteUE_ConfigCommonU2U_r18, depth + 1);
}

void BuildSample_SL_NR_AnchorCarrierFreqList_r16(SL_NR_AnchorCarrierFreqList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ARFCN_ValueNR*)std::malloc((std::size_t)value.count * sizeof(ARFCN_ValueNR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ARFCN_ValueNR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SL_EUTRA_AnchorCarrierFreqList_r16(SL_EUTRA_AnchorCarrierFreqList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ARFCN_ValueEUTRA*)std::malloc((std::size_t)value.count * sizeof(ARFCN_ValueEUTRA));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ARFCN_ValueEUTRA));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SL_MeasIdList_r16(SL_MeasIdList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_MeasIdInfo_r16*)std::malloc((std::size_t)value.count * sizeof(SL_MeasIdInfo_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_MeasIdInfo_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_MeasIdInfo_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_MeasObjectList_r16(SL_MeasObjectList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_MeasObjectInfo_r16*)std::malloc((std::size_t)value.count * sizeof(SL_MeasObjectInfo_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_MeasObjectInfo_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_MeasObjectInfo_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_QuantityConfig_r16(SL_QuantityConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_FilterCoefficientDMRS_r16 = FilterCoefficient_fc4;
}

void BuildSample_SL_ReportConfigList_r16(SL_ReportConfigList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_ReportConfigInfo_r16*)std::malloc((std::size_t)value.count * sizeof(SL_ReportConfigInfo_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_ReportConfigInfo_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_ReportConfigInfo_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_MeasConfigCommon_r16(SL_MeasConfigCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_ConfigCommonNR_r16(SL_ConfigCommonNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB12_IEs_r16(SIB12_IEs_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_ConfigCommonNR_r16(value.sl_ConfigCommonNR_r16, depth + 1);
}

void BuildSample_SIB13_r16(SIB13_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_V2X_ConfigCommon_r16.length = 0u;
    value.dummy.length = 0u;
    value.tdd_Config_r16.length = 0u;
}

void BuildSample_SIB14_r16(SIB14_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_V2X_ConfigCommonExt_r16.length = 0u;
}

void BuildSample_SIB15_r17(SIB15_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17(ApplicableDisasterInfo_r17_DedicatedPLMNs_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PLMN_Identity*)std::malloc((std::size_t)value.count * sizeof(PLMN_Identity));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_Identity));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PLMN_Identity(value.items[i], depth + 1);
        }
    }
}

void BuildSample_ApplicableDisasterInfo_r17(ApplicableDisasterInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ApplicableDisasterInfo_r17_Tag_noDisasterRoaming_r17;
}

void BuildSample_FreqPriorityListSlicing_r17(FreqPriorityListSlicing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (FreqPrioritySlicing_r17*)std::malloc((std::size_t)value.count * sizeof(FreqPrioritySlicing_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqPrioritySlicing_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_FreqPrioritySlicing_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SIB16_r17(SIB16_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB17_r17(SIB17_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.segmentNumber_r17 = 0;
    value.segmentType_r17 = SIB17_r17_SegmentType_r17_notLastSegment;
    value.segmentContainer_r17.length = 0u;
}

void BuildSample_SIB17_IEs_r17(SIB17_IEs_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.trs_ResourceSetConfig_r17_count = 0u;
}

void BuildSample_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17(TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 2u;
    value.items = (ScramblingId*)std::malloc((std::size_t)value.count * sizeof(ScramblingId));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ScramblingId));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17(TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 4u;
    value.items = (ScramblingId*)std::malloc((std::size_t)value.count * sizeof(ScramblingId));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ScramblingId));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_TRS_ResourceSet_r17_ScramblingID_Info_r17(TRS_ResourceSet_r17_ScramblingID_Info_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDforCommon_r17;
    value.u.scramblingIDforCommon_r17 = 0;
}

void BuildSample_TRS_ResourceSet_r17_PeriodicityAndOffset_r17(TRS_ResourceSet_r17_PeriodicityAndOffset_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots10;
    value.u.slots10 = 0;
}

void BuildSample_TRS_ResourceSet_r17(TRS_ResourceSet_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.powerControlOffsetSS_r17 = TRS_ResourceSet_r17_PowerControlOffsetSS_r17_db_3;
    BuildSample_TRS_ResourceSet_r17_ScramblingID_Info_r17(value.scramblingID_Info_r17, depth + 1);
    value.firstOFDMSymbolInTimeDomain_r17 = 0;
    value.startingRB_r17 = 0;
    value.nrofRBs_r17 = 24;
    value.ssb_Index_r17 = 0;
    BuildSample_TRS_ResourceSet_r17_PeriodicityAndOffset_r17(value.periodicityAndOffset_r17, depth + 1);
    value.frequencyDomainAllocation_r17.bitLength = 4u;
    value.frequencyDomainAllocation_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.frequencyDomainAllocation_r17.bytes != nullptr) {
        std::memset(value.frequencyDomainAllocation_r17.bytes, 0, 1u);
    }
    value.indBitID_r17 = 0;
    value.nrofResources_r17 = TRS_ResourceSet_r17_NrofResources_r17_n2;
}

void BuildSample_SIB18_r17(SIB18_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_GIN_Element_r17(GIN_Element_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_Identity(value.plmn_Identity_r17, depth + 1);
    value.nid_List_r17_count = 0u;
}

void BuildSample_GINs_PerSNPN_r17(GINs_PerSNPN_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NTN_NeighCellConfigList_r17(NTN_NeighCellConfigList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NTN_NeighCellConfig_r17*)std::malloc((std::size_t)value.count * sizeof(NTN_NeighCellConfig_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NTN_NeighCellConfig_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NTN_NeighCellConfig_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NTN_CovEnh_r18(NTN_CovEnh_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PositionVelocity_r17(PositionVelocity_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.positionX_r17 = -33554432;
    value.positionY_r17 = -33554432;
    value.positionZ_r17 = -33554432;
    value.velocityVX_r17 = -131072;
    value.velocityVY_r17 = -131072;
    value.velocityVZ_r17 = -131072;
}

void BuildSample_Orbital_r17(Orbital_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.semiMajorAxis_r17 = 0;
    value.eccentricity_r17 = 0;
    value.periapsis_r17 = 0;
    value.longitude_r17 = 0;
    value.inclination_r17 = -67108864;
    value.meanAnomaly_r17 = 0;
}

void BuildSample_EphemerisInfo_r17(EphemerisInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = EphemerisInfo_r17_Tag_positionVelocity_r17;
    BuildSample_PositionVelocity_r17(value.u.positionVelocity_r17, depth + 1);
}

void BuildSample_EpochTime_r17(EpochTime_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sfn_r17 = 0;
    value.subFrameNR_r17 = 0;
}

void BuildSample_TA_Info_r17(TA_Info_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ta_Common_r17 = 0;
}

void BuildSample_NTN_Config_r17(NTN_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SatSwitchWithReSync_r18(SatSwitchWithReSync_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_NTN_Config_r17(value.ntn_Config_r18, depth + 1);
}

void BuildSample_SIB19_r17(SIB19_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NTN_NeighCellConfig_r17(NTN_NeighCellConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MCCH_RepetitionPeriodAndOffset_r17(MCCH_RepetitionPeriodAndOffset_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MCCH_RepetitionPeriodAndOffset_r17_Tag_rf1_r17;
    value.u.rf1_r17 = 0;
}

void BuildSample_MCCH_Config_r17(MCCH_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MCCH_RepetitionPeriodAndOffset_r17(value.mcch_RepetitionPeriodAndOffset_r17, depth + 1);
    value.mcch_WindowStartSlot_r17 = 0;
    value.mcch_ModificationPeriod_r17 = MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf2;
}

void BuildSample_LocationAndBandwidthBroadcast_r17(LocationAndBandwidthBroadcast_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = LocationAndBandwidthBroadcast_r17_Tag_sameAsSib1ConfiguredLocationAndBW;
}

void BuildSample_CFR_ConfigMCCH_MTCH_r17(CFR_ConfigMCCH_MTCH_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB20_r17(SIB20_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MCCH_Config_r17(value.mcch_Config_r17, depth + 1);
}

void BuildSample_MBS_FSAI_List_r17(MBS_FSAI_List_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MBS_FSAI_r17*)std::malloc((std::size_t)value.count * sizeof(MBS_FSAI_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_FSAI_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i].length = 3u;
            value.items[i].bytes = (std::uint8_t*)std::malloc(3u);
            if (value.items[i].bytes != nullptr) {
                std::memset(value.items[i].bytes, 0, 3u);
            }
        }
    }
}

void BuildSample_MBS_FSAI_InterFreqList_r17(MBS_FSAI_InterFreqList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MBS_FSAI_InterFreq_r17*)std::malloc((std::size_t)value.count * sizeof(MBS_FSAI_InterFreq_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_FSAI_InterFreq_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MBS_FSAI_InterFreq_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SIB21_r17(SIB21_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MBS_FSAI_InterFreq_r17(MBS_FSAI_InterFreq_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dl_CarrierFreq_r17 = 0;
    BuildSample_MBS_FSAI_List_r17(value.mbs_FSAI_List_r17, depth + 1);
}

void BuildSample_ATG_NeighCellConfigList_r18(ATG_NeighCellConfigList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ATG_NeighCellConfig_r18*)std::malloc((std::size_t)value.count * sizeof(ATG_NeighCellConfig_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ATG_NeighCellConfig_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_ATG_NeighCellConfig_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_ATG_Config_r18(ATG_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB22_r18(SIB22_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ATG_NeighCellConfig_r18(ATG_NeighCellConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB23_r18(SIB23_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.segmentNumber_r18 = 0;
    value.segmentType_r18 = SIB23_r18_SegmentType_r18_notLastSegment;
    value.segmentContainer_r18.length = 0u;
}

void BuildSample_SL_PosConfigCommonNR_r18(SL_PosConfigCommonNR_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SIB23_IEs_r18(SIB23_IEs_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_PosConfigCommonNR_r18(value.sl_PosConfigCommonNR_r18, depth + 1);
}

void BuildSample_SIB24_r18(SIB24_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CoverageAreaInfoList_r18(CoverageAreaInfoList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CoverageAreaInfo_r18*)std::malloc((std::size_t)value.count * sizeof(CoverageAreaInfo_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CoverageAreaInfo_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CoverageAreaInfo_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SIB25_r18(SIB25_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CoverageAreaInfo_r18(CoverageAreaInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tn_AreaId_r18 = 1;
    value.tn_ReferenceLocation_r18.length = 0u;
    value.tn_DistanceRadius_r18 = 0;
}

void BuildSample_PosSIB_MappingInfo_r16(PosSIB_MappingInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PosSIB_Type_r16*)std::malloc((std::size_t)value.count * sizeof(PosSIB_Type_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PosSIB_Type_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PosSIB_Type_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PosSchedulingInfo_r16(PosSchedulingInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.posSI_Periodicity_r16 = PosSchedulingInfo_r16_PosSI_Periodicity_r16_rf8;
    value.posSI_BroadcastStatus_r16 = PosSchedulingInfo_r16_PosSI_BroadcastStatus_r16_broadcasting;
    BuildSample_PosSIB_MappingInfo_r16(value.posSIB_MappingInfo_r16, depth + 1);
}

void BuildSample_PosSIB_Type_r16(PosSIB_Type_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.posSibType_r16 = PosSIB_Type_r16_PosSibType_r16_posSibType1_1;
}

void BuildSample_SIBpos_r16(SIBpos_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.assistanceDataSIB_Element_r16.length = 0u;
}

void BuildSample_AvailabilityCombinationsPerCell_r16(AvailabilityCombinationsPerCell_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.availabilityCombinationsPerCellIndex_r16 = 0;
    value.iab_DU_CellIdentity_r16.bitLength = 36u;
    value.iab_DU_CellIdentity_r16.bytes = (std::uint8_t*)std::malloc(5u);
    if (value.iab_DU_CellIdentity_r16.bytes != nullptr) {
        std::memset(value.iab_DU_CellIdentity_r16.bytes, 0, 5u);
    }
    value.availabilityCombinations_r16_count = 0u;
}

void BuildSample_AvailabilityCombination_r16(AvailabilityCombination_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.availabilityCombinationId_r16 = 0;
    value.resourceAvailability_r16_count = 0u;
}

void BuildSample_AvailabilityCombinationRB_Groups_r17(AvailabilityCombinationRB_Groups_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.availabilityCombinationId_r17 = 0;
}

void BuildSample_RB_SetGroup_r17(RB_SetGroup_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_AvailabilityIndicator_r16(AvailabilityIndicator_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ai_RNTI_r16 = 0;
    value.dci_PayloadSizeAI_r16 = 1;
}

void BuildSample_CandidateBeamRSListExt_r16(CandidateBeamRSListExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PRACH_ResourceDedicatedBFR*)std::malloc((std::size_t)value.count * sizeof(PRACH_ResourceDedicatedBFR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PRACH_ResourceDedicatedBFR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PRACH_ResourceDedicatedBFR(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_CandidateBeamRSListExt_r16(SetupRelease_CandidateBeamRSListExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CandidateBeamRSListExt_r16_Tag_release;
}

void BuildSample_BeamFailureRecoveryConfig(BeamFailureRecoveryConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BFR_SSB_Resource(BFR_SSB_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb = 0;
    value.ra_PreambleIndex = 0;
}

void BuildSample_BFR_CSIRS_Resource(BFR_CSIRS_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csi_RS = 0;
}

void BuildSample_PRACH_ResourceDedicatedBFR(PRACH_ResourceDedicatedBFR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PRACH_ResourceDedicatedBFR_Tag_ssb;
    BuildSample_BFR_SSB_Resource(value.u.ssb, depth + 1);
}

void BuildSample_BeamFailureRecoveryRSConfig_r16(BeamFailureRecoveryRSConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BH_LogicalChannelIdentity_r16(BH_LogicalChannelIdentity_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BH_LogicalChannelIdentity_r16_Tag_bh_LogicalChannelIdentity_r16;
    value.u.bh_LogicalChannelIdentity_r16 = 1;
}

void BuildSample_LogicalChannelConfig_Ul_SpecificParameters(LogicalChannelConfig_Ul_SpecificParameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.priority = 1;
    value.prioritisedBitRate = LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps0;
    value.bucketSizeDuration = LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_ms5;
    value.logicalChannelSR_Mask = true;
    value.logicalChannelSR_DelayTimerApplied = true;
}

void BuildSample_LogicalChannelConfig(LogicalChannelConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UL_AM_RLC(UL_AM_RLC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.t_PollRetransmit = T_PollRetransmit_ms5;
    value.pollPDU = PollPDU_p4;
    value.pollByte = PollByte_kB1;
    value.maxRetxThreshold = UL_AM_RLC_MaxRetxThreshold_t1;
}

void BuildSample_DL_AM_RLC(DL_AM_RLC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.t_Reassembly = T_Reassembly_ms0;
    value.t_StatusProhibit = T_StatusProhibit_ms0;
}

void BuildSample_RLC_Config_Am(RLC_Config_Am& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_UL_AM_RLC(value.ul_AM_RLC, depth + 1);
    BuildSample_DL_AM_RLC(value.dl_AM_RLC, depth + 1);
}

void BuildSample_UL_UM_RLC(UL_UM_RLC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DL_UM_RLC(DL_UM_RLC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.t_Reassembly = T_Reassembly_ms0;
}

void BuildSample_RLC_Config_Um_Bi_Directional(RLC_Config_Um_Bi_Directional& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_UL_UM_RLC(value.ul_UM_RLC, depth + 1);
    BuildSample_DL_UM_RLC(value.dl_UM_RLC, depth + 1);
}

void BuildSample_RLC_Config_Um_Uni_Directional_UL(RLC_Config_Um_Uni_Directional_UL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_UL_UM_RLC(value.ul_UM_RLC, depth + 1);
}

void BuildSample_RLC_Config_Um_Uni_Directional_DL(RLC_Config_Um_Uni_Directional_DL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DL_UM_RLC(value.dl_UM_RLC, depth + 1);
}

void BuildSample_RLC_Config(RLC_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RLC_Config_Tag_am;
    BuildSample_RLC_Config_Am(value.u.am, depth + 1);
}

void BuildSample_BH_RLC_ChannelConfig_r16(BH_RLC_ChannelConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bh_RLC_ChannelID_r16.bitLength = 16u;
    value.bh_RLC_ChannelID_r16.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.bh_RLC_ChannelID_r16.bytes != nullptr) {
        std::memset(value.bh_RLC_ChannelID_r16.bytes, 0, 2u);
    }
}

void BuildSample_SPS_ConfigToAddModList_r16(SPS_ConfigToAddModList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SPS_Config*)std::malloc((std::size_t)value.count * sizeof(SPS_Config));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_Config));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SPS_Config(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SPS_ConfigToReleaseList_r16(SPS_ConfigToReleaseList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SPS_ConfigIndex_r16*)std::malloc((std::size_t)value.count * sizeof(SPS_ConfigIndex_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_ConfigIndex_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SPS_ConfigDeactivationStateList_r16(SPS_ConfigDeactivationStateList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SPS_ConfigDeactivationState_r16*)std::malloc((std::size_t)value.count * sizeof(SPS_ConfigDeactivationState_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_ConfigDeactivationState_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SPS_ConfigDeactivationState_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_BeamFailureRecoveryRSConfig_r16(SetupRelease_BeamFailureRecoveryRSConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag_release;
}

void BuildSample_DL_PPW_PreConfigToAddModList_r17(DL_PPW_PreConfigToAddModList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (DL_PPW_PreConfig_r17*)std::malloc((std::size_t)value.count * sizeof(DL_PPW_PreConfig_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(DL_PPW_PreConfig_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_DL_PPW_PreConfig_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_DL_PPW_PreConfigToReleaseList_r17(DL_PPW_PreConfigToReleaseList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (DL_PPW_ID_r17*)std::malloc((std::size_t)value.count * sizeof(DL_PPW_ID_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(DL_PPW_ID_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SPS_ConfigMulticastToAddModList_r17(SPS_ConfigMulticastToAddModList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SPS_Config*)std::malloc((std::size_t)value.count * sizeof(SPS_Config));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_Config));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SPS_Config(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SPS_ConfigMulticastToReleaseList_r17(SPS_ConfigMulticastToReleaseList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SPS_ConfigIndex_r16*)std::malloc((std::size_t)value.count * sizeof(SPS_ConfigIndex_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_ConfigIndex_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_CFR_ConfigMulticast_r17(CFR_ConfigMulticast_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_CFR_ConfigMulticast_r17(SetupRelease_CFR_ConfigMulticast_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CFR_ConfigMulticast_r17_Tag_release;
}

void BuildSample_TCI_inDCI_r18(TCI_inDCI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_TCI_inDCI_r18(SetupRelease_TCI_inDCI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_TCI_inDCI_r18_Tag_release;
}

void BuildSample_SPS_Config(SPS_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.periodicity = SPS_Config_Periodicity_ms10;
    value.nrofHARQ_Processes = 1;
}

void BuildSample_SetupRelease_SPS_Config(SetupRelease_SPS_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SPS_Config_Tag_release;
}

void BuildSample_BeamFailureDetectionSet_r17(BeamFailureDetectionSet_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BeamFailureDetection_r17(BeamFailureDetection_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RadioLinkMonitoringConfig(RadioLinkMonitoringConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_RadioLinkMonitoringConfig(SetupRelease_RadioLinkMonitoringConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RadioLinkMonitoringConfig_Tag_release;
}

void BuildSample_BWP_DownlinkDedicated(BWP_DownlinkDedicated& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BWP_Downlink(BWP_Downlink& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bwp_Id = 0;
}

void BuildSample_SPS_ConfigDeactivationState_r16(SPS_ConfigDeactivationState_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SPS_ConfigIndex_r16*)std::malloc((std::size_t)value.count * sizeof(SPS_ConfigIndex_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_ConfigIndex_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_ConfiguredGrantConfigType2DeactivationStateList_r16(ConfiguredGrantConfigType2DeactivationStateList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ConfiguredGrantConfigType2DeactivationState_r16*)std::malloc((std::size_t)value.count * sizeof(ConfiguredGrantConfigType2DeactivationState_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ConfiguredGrantConfigType2DeactivationState_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_ConfiguredGrantConfigType2DeactivationState_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_DL_DataToUL_ACK_r16(DL_DataToUL_ACK_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = -1;
        }
    }
}

void BuildSample_SetupRelease_DL_DataToUL_ACK_r16(SetupRelease_DL_DataToUL_ACK_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DL_DataToUL_ACK_r16_Tag_release;
}

void BuildSample_UL_AccessConfigListDCI_1_1_r16(UL_AccessConfigListDCI_1_1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_UL_AccessConfigListDCI_1_1_r16(SetupRelease_UL_AccessConfigListDCI_1_1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag_release;
}

void BuildSample_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16(PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag_normalCP_r16;
    value.u.normalCP_r16 = PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_NormalCP_r16_n2;
}

void BuildSample_DL_DataToUL_ACK_DCI_1_2_r16(DL_DataToUL_ACK_DCI_1_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16(SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag_release;
}

void BuildSample_SPS_PUCCH_AN_List_r16(SPS_PUCCH_AN_List_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SPS_PUCCH_AN_r16*)std::malloc((std::size_t)value.count * sizeof(SPS_PUCCH_AN_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_PUCCH_AN_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SPS_PUCCH_AN_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_SPS_PUCCH_AN_List_r16(SetupRelease_SPS_PUCCH_AN_List_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SPS_PUCCH_AN_List_r16_Tag_release;
}

void BuildSample_PUCCH_FormatConfig(PUCCH_FormatConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PUCCH_FormatConfig(SetupRelease_PUCCH_FormatConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUCCH_FormatConfig_Tag_release;
}

void BuildSample_PUCCH_FormatConfigExt_r17(PUCCH_FormatConfigExt_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PUCCH_FormatConfigExt_r17(SetupRelease_PUCCH_FormatConfigExt_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUCCH_FormatConfigExt_r17_Tag_release;
}

void BuildSample_UL_AccessConfigListDCI_1_2_r17(UL_AccessConfigListDCI_1_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_UL_AccessConfigListDCI_1_2_r17(SetupRelease_UL_AccessConfigListDCI_1_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag_release;
}

void BuildSample_DL_DataToUL_ACK_r17(DL_DataToUL_ACK_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = -1;
        }
    }
}

void BuildSample_SetupRelease_DL_DataToUL_ACK_r17(SetupRelease_DL_DataToUL_ACK_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DL_DataToUL_ACK_r17_Tag_release;
}

void BuildSample_DL_DataToUL_ACK_DCI_1_2_r17(DL_DataToUL_ACK_DCI_1_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17(SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag_release;
}

void BuildSample_UL_AccessConfigListDCI_1_1_r17(UL_AccessConfigListDCI_1_1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_UL_AccessConfigListDCI_1_1_r17(SetupRelease_UL_AccessConfigListDCI_1_1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag_release;
}

void BuildSample_DMRS_BundlingPUCCH_Config_r17(DMRS_BundlingPUCCH_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_DMRS_BundlingPUCCH_Config_r17(SetupRelease_DMRS_BundlingPUCCH_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag_release;
}

void BuildSample_DL_DataToUL_ACK_v1700(DL_DataToUL_ACK_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 16;
        }
    }
}

void BuildSample_SetupRelease_DL_DataToUL_ACK_v1700(SetupRelease_DL_DataToUL_ACK_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DL_DataToUL_ACK_v1700_Tag_release;
}

void BuildSample_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(DL_DataToUL_ACK_MulticastDCI_Format4_1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag_release;
}

void BuildSample_PathlossReferenceRSs_v1610(PathlossReferenceRSs_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PUCCH_PathlossReferenceRS_r16*)std::malloc((std::size_t)value.count * sizeof(PUCCH_PathlossReferenceRS_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PUCCH_PathlossReferenceRS_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PUCCH_PathlossReferenceRS_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_PathlossReferenceRSs_v1610(SetupRelease_PathlossReferenceRSs_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PathlossReferenceRSs_v1610_Tag_release;
}

void BuildSample_PUCCH_PowerControl(PUCCH_PowerControl& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PUCCH_Config(PUCCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PUCCH_Config(SetupRelease_PUCCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUCCH_Config_Tag_release;
}

void BuildSample_PUCCH_ConfigurationList_r16(PUCCH_ConfigurationList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PUCCH_Config*)std::malloc((std::size_t)value.count * sizeof(PUCCH_Config));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PUCCH_Config));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PUCCH_Config(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_PUCCH_ConfigurationList_r16(SetupRelease_PUCCH_ConfigurationList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUCCH_ConfigurationList_r16_Tag_release;
}

void BuildSample_LBT_FailureRecoveryConfig_r16(LBT_FailureRecoveryConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.lbt_FailureInstanceMaxCount_r16 = LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16_n4;
    value.lbt_FailureDetectionTimer_r16 = LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16_ms10;
}

void BuildSample_SetupRelease_LBT_FailureRecoveryConfig_r16(SetupRelease_LBT_FailureRecoveryConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_LBT_FailureRecoveryConfig_r16_Tag_release;
}

void BuildSample_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist(BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17(BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag_explicitlist;
    BuildSample_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist(value.u.explicitlist, depth + 1);
}

void BuildSample_CG_StartingOffsets_r16(CG_StartingOffsets_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17(BetaOffsetsCrossPriSelCG_r17_Dynamic_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BetaOffsetsCrossPri_r17*)std::malloc((std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BetaOffsetsCrossPri_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BetaOffsetsCrossPriSelCG_r17(BetaOffsetsCrossPriSelCG_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BetaOffsetsCrossPriSelCG_r17_Tag_dynamic_r17;
    BuildSample_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17(value.u.dynamic_r17, depth + 1);
}

void BuildSample_SetupRelease_BetaOffsetsCrossPriSelCG_r17(SetupRelease_BetaOffsetsCrossPriSelCG_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag_release;
}

void BuildSample_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18(ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nrofBitsInUTO_UCI_r18 = 3;
    value.betaOffsetUTO_UCI_r18 = 0;
}

void BuildSample_CG_UCI_OnPUSCH_Dynamic(CG_UCI_OnPUSCH_Dynamic& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BetaOffsets*)std::malloc((std::size_t)value.count * sizeof(BetaOffsets));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsets));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BetaOffsets(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CG_UCI_OnPUSCH(CG_UCI_OnPUSCH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CG_UCI_OnPUSCH_Tag_dynamic;
    BuildSample_CG_UCI_OnPUSCH_Dynamic(value.u.dynamic, depth + 1);
}

void BuildSample_SetupRelease_CG_UCI_OnPUSCH(SetupRelease_CG_UCI_OnPUSCH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CG_UCI_OnPUSCH_Tag_release;
}

void BuildSample_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17(CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_shortBitmap_r17;
    value.u.shortBitmap_r17.bitLength = 4u;
    value.u.shortBitmap_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.shortBitmap_r17.bytes != nullptr) {
        std::memset(value.u.shortBitmap_r17.bytes, 0, 1u);
    }
}

void BuildSample_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17(CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag_dmrsType1_r17;
    value.u.dmrsType1_r17.bitLength = 8u;
    value.u.dmrsType1_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.dmrsType1_r17.bytes != nullptr) {
        std::memset(value.u.dmrsType1_r17.bytes, 0, 1u);
    }
}

void BuildSample_CG_SDT_Configuration_r17(CG_SDT_Configuration_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18(CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_shortBitmap_r18;
    value.u.shortBitmap_r18.bitLength = 4u;
    value.u.shortBitmap_r18.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.shortBitmap_r18.bytes != nullptr) {
        std::memset(value.u.shortBitmap_r18.bytes, 0, 1u);
    }
}

void BuildSample_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18(CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag_dmrsType1_r18;
    value.u.dmrsType1_r18.bitLength = 8u;
    value.u.dmrsType1_r18.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.dmrsType1_r18.bytes != nullptr) {
        std::memset(value.u.dmrsType1_r18.bytes, 0, 1u);
    }
}

void BuildSample_CG_RRC_Configuration_r18(CG_RRC_Configuration_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant(ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.timeDomainOffset = 0;
    value.timeDomainAllocation = 0;
    value.frequencyDomainAllocation.bitLength = 18u;
    value.frequencyDomainAllocation.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.frequencyDomainAllocation.bytes != nullptr) {
        std::memset(value.frequencyDomainAllocation.bytes, 0, 3u);
    }
    value.antennaPort = 0;
    value.precodingAndNumberOfLayers = 0;
    value.mcsAndTBS = 0;
    value.pathlossReferenceIndex = 0;
}

void BuildSample_ConfiguredGrantConfig(ConfiguredGrantConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DMRS_UplinkConfig(value.cg_DMRS_Configuration, depth + 1);
    value.resourceAllocation = ConfiguredGrantConfig_ResourceAllocation_resourceAllocationType0;
    value.powerControlLoopToUse = ConfiguredGrantConfig_PowerControlLoopToUse_n0;
    value.p0_PUSCH_Alpha = 0;
    value.nrofHARQ_Processes = 1;
    value.repK = ConfiguredGrantConfig_RepK_n1;
    value.periodicity = ConfiguredGrantConfig_Periodicity_sym2;
}

void BuildSample_SetupRelease_ConfiguredGrantConfig(SetupRelease_ConfiguredGrantConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_ConfiguredGrantConfig_Tag_release;
}

void BuildSample_SRS_Config(SRS_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SRS_Config(SetupRelease_SRS_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_Config_Tag_release;
}

void BuildSample_SetupRelease_BeamFailureRecoveryConfig(SetupRelease_BeamFailureRecoveryConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_BeamFailureRecoveryConfig_Tag_release;
}

void BuildSample_BWP_UplinkDedicated(BWP_UplinkDedicated& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BWP_Uplink(BWP_Uplink& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bwp_Id = 0;
}

void BuildSample_AdditionalRACH_Config_r17(AdditionalRACH_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ConfiguredGrantConfigType2DeactivationState_r16(ConfiguredGrantConfigType2DeactivationState_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ConfiguredGrantConfigIndex_r16*)std::malloc((std::size_t)value.count * sizeof(ConfiguredGrantConfigIndex_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ConfiguredGrantConfigIndex_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_CandidateBeamRS_r16_CandidateBeamConfig_r16(CandidateBeamRS_r16_CandidateBeamConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag_ssb_r16;
    value.u.ssb_r16 = 0;
}

void BuildSample_CandidateBeamRS_r16(CandidateBeamRS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CandidateBeamRS_r16_CandidateBeamConfig_r16(value.candidateBeamConfig_r16, depth + 1);
}

void BuildSample_LTM_QCL_Info_r18_ReferenceSignal_r18(LTM_QCL_Info_r18_ReferenceSignal_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = LTM_QCL_Info_r18_ReferenceSignal_r18_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_LTM_QCL_Info_r18(LTM_QCL_Info_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_LTM_QCL_Info_r18_ReferenceSignal_r18(value.referenceSignal_r18, depth + 1);
    value.qcl_Type_r18 = LTM_QCL_Info_r18_Qcl_Type_r18_typeA;
}

void BuildSample_CandidateTCI_State_r18(CandidateTCI_State_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tci_StateId_r18 = 0;
    BuildSample_LTM_QCL_Info_r18(value.qcl_Type1_r18, depth + 1);
}

void BuildSample_CandidateTCI_UL_State_r18_ReferenceSignal_r18(CandidateTCI_UL_State_r18_ReferenceSignal_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_CandidateTCI_UL_State_r18(CandidateTCI_UL_State_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tci_UL_StateId_r18 = 0;
    BuildSample_CandidateTCI_UL_State_r18_ReferenceSignal_r18(value.referenceSignal_r18, depth + 1);
}

void BuildSample_SNPN_AccessInfo_r17(SNPN_AccessInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PLMN_IdentityList_EUTRA_5GC(PLMN_IdentityList_EUTRA_5GC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PLMN_Identity_EUTRA_5GC*)std::malloc((std::size_t)value.count * sizeof(PLMN_Identity_EUTRA_5GC));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_Identity_EUTRA_5GC));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PLMN_Identity_EUTRA_5GC(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CellIdentity_EUTRA_5GC(CellIdentity_EUTRA_5GC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CellIdentity_EUTRA_5GC_Tag_cellIdentity_EUTRA;
    value.u.cellIdentity_EUTRA.bitLength = 28u;
    value.u.cellIdentity_EUTRA.bytes = (std::uint8_t*)std::malloc(4u);
    if (value.u.cellIdentity_EUTRA.bytes != nullptr) {
        std::memset(value.u.cellIdentity_EUTRA.bytes, 0, 4u);
    }
}

void BuildSample_CellAccessRelatedInfo_EUTRA_5GC(CellAccessRelatedInfo_EUTRA_5GC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_IdentityList_EUTRA_5GC(value.plmn_IdentityList_eutra_5gc, depth + 1);
    value.trackingAreaCode_eutra_5gc.bitLength = 24u;
    value.trackingAreaCode_eutra_5gc.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.trackingAreaCode_eutra_5gc.bytes != nullptr) {
        std::memset(value.trackingAreaCode_eutra_5gc.bytes, 0, 3u);
    }
    BuildSample_CellIdentity_EUTRA_5GC(value.cellIdentity_eutra_5gc, depth + 1);
}

void BuildSample_PLMN_Identity_EUTRA_5GC(PLMN_Identity_EUTRA_5GC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PLMN_Identity_EUTRA_5GC_Tag_plmn_Identity_EUTRA_5GC;
    BuildSample_PLMN_Identity(value.u.plmn_Identity_EUTRA_5GC, depth + 1);
}

void BuildSample_PLMN_IdentityList_EUTRA_EPC(PLMN_IdentityList_EUTRA_EPC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PLMN_Identity*)std::malloc((std::size_t)value.count * sizeof(PLMN_Identity));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_Identity));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PLMN_Identity(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CellAccessRelatedInfo_EUTRA_EPC(CellAccessRelatedInfo_EUTRA_EPC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_IdentityList_EUTRA_EPC(value.plmn_IdentityList_eutra_epc, depth + 1);
    value.trackingAreaCode_eutra_epc.bitLength = 16u;
    value.trackingAreaCode_eutra_epc.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.trackingAreaCode_eutra_epc.bytes != nullptr) {
        std::memset(value.trackingAreaCode_eutra_epc.bytes, 0, 2u);
    }
    value.cellIdentity_eutra_epc.bitLength = 28u;
    value.cellIdentity_eutra_epc.bytes = (std::uint8_t*)std::malloc(4u);
    if (value.cellIdentity_eutra_epc.bytes != nullptr) {
        std::memset(value.cellIdentity_eutra_epc.bytes, 0, 4u);
    }
}

void BuildSample_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18(CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag_subMilliSeconds;
    value.u.subMilliSeconds = 1;
}

void BuildSample_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18(CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms10;
    value.u.ms10 = 0;
}

void BuildSample_CellDTXDRX_Config_r18(CellDTXDRX_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18(value.cellDTXDRX_onDurationTimer_r18, depth + 1);
    BuildSample_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18(value.cellDTXDRX_CycleStartOffset_r18, depth + 1);
    value.cellDTXDRX_SlotOffset_r18 = 0;
    value.cellDTXDRXconfigType_r18 = CellDTXDRX_Config_r18_CellDTXDRXconfigType_r18_dtx;
}

void BuildSample_ReportUplinkTxDirectCurrentMoreCarrier_r17(ReportUplinkTxDirectCurrentMoreCarrier_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (IntraBandCC_CombinationReqList_r17*)std::malloc((std::size_t)value.count * sizeof(IntraBandCC_CombinationReqList_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(IntraBandCC_CombinationReqList_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_IntraBandCC_CombinationReqList_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NCR_AperiodicFwdConfig_r18(NCR_AperiodicFwdConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_NCR_AperiodicFwdConfig_r18(SetupRelease_NCR_AperiodicFwdConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_NCR_AperiodicFwdConfig_r18_Tag_release;
}

void BuildSample_NCR_FwdConfig_r18(NCR_FwdConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_NCR_FwdConfig_r18(SetupRelease_NCR_FwdConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_NCR_FwdConfig_r18_Tag_release;
}

void BuildSample_AutonomousDenialParameters_r18(AutonomousDenialParameters_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.autonomousDenialSlots_r18 = AutonomousDenialParameters_r18_AutonomousDenialSlots_r18_n2;
    value.autonomousDenialValidity_r18 = AutonomousDenialParameters_r18_AutonomousDenialValidity_r18_n200;
}

void BuildSample_SetupRelease_AutonomousDenialParameters_r18(SetupRelease_AutonomousDenialParameters_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_AutonomousDenialParameters_r18_Tag_release;
}

void BuildSample_UplinkTxSwitchingBandPairList_r18(UplinkTxSwitchingBandPairList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UplinkTxSwitchingBandPairConfig_r18*)std::malloc((std::size_t)value.count * sizeof(UplinkTxSwitchingBandPairConfig_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UplinkTxSwitchingBandPairConfig_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_UplinkTxSwitchingBandPairConfig_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UplinkTxSwitchingAssociatedBandDualUL_List_r18(UplinkTxSwitchingAssociatedBandDualUL_List_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 0u;
}

void BuildSample_UplinkTxSwitchingMoreBands_r18(UplinkTxSwitchingMoreBands_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_UplinkTxSwitchingMoreBands_r18(SetupRelease_UplinkTxSwitchingMoreBands_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag_release;
}

void BuildSample_GoodServingCellEvaluation_r17(GoodServingCellEvaluation_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17(SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.s_SearchDeltaP_Connected_r17 = SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17_dB3;
    value.t_SearchDeltaP_Connected_r17 = SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_s5;
}

void BuildSample_DeactivatedSCG_Config_r17(DeactivatedSCG_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bfd_and_RLM_r17 = true;
}

void BuildSample_SetupRelease_DeactivatedSCG_Config_r17(SetupRelease_DeactivatedSCG_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DeactivatedSCG_Config_r17_Tag_release;
}

void BuildSample_DAPS_UplinkPowerConfig_r16(DAPS_UplinkPowerConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.p_DAPS_Source_r16 = -30;
    value.p_DAPS_Target_r16 = -30;
    value.uplinkPowerSharingDAPS_Mode_r16 = DAPS_UplinkPowerConfig_r16_UplinkPowerSharingDAPS_Mode_r16_semi_static_mode1;
}

void BuildSample_SL_PathSwitchConfig_r17(SL_PathSwitchConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.targetRelayUE_Identity_r17.bitLength = 24u;
    value.targetRelayUE_Identity_r17.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.targetRelayUE_Identity_r17.bytes != nullptr) {
        std::memset(value.targetRelayUE_Identity_r17.bytes, 0, 3u);
    }
    value.t420_r17 = SL_PathSwitchConfig_r17_T420_r17_ms50;
}

void BuildSample_RACH_LessHO_r18_BeamIndication_r18(RACH_LessHO_r18_BeamIndication_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RACH_LessHO_r18_BeamIndication_r18_Tag_tci_StateID_r18;
    value.u.tci_StateID_r18 = 0;
}

void BuildSample_RACH_LessHO_r18(RACH_LessHO_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MultiFrequencyBandListNR(MultiFrequencyBandListNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (FreqBandIndicatorNR*)std::malloc((std::size_t)value.count * sizeof(FreqBandIndicatorNR));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqBandIndicatorNR));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_FrequencyInfoDL(FrequencyInfoDL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MultiFrequencyBandListNR(value.frequencyBandList, depth + 1);
    value.absoluteFrequencyPointA = 0;
    value.scs_SpecificCarrierList_count = 0u;
}

void BuildSample_DownlinkConfigCommon(DownlinkConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16(ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag_dynamic;
}

void BuildSample_HighSpeedConfig_v1700(HighSpeedConfig_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UplinkConfigCommon_v1700(UplinkConfigCommon_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17(ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800(ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FrequencyInfoUL(FrequencyInfoUL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.scs_SpecificCarrierList_count = 0u;
}

void BuildSample_UplinkConfigCommon(UplinkConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dummy = TimeAlignmentTimer_ms500;
}

void BuildSample_SetupRelease_RateMatchPatternLTE_CRS(SetupRelease_RateMatchPatternLTE_CRS& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RateMatchPatternLTE_CRS_Tag_release;
}

void BuildSample_ServingCellConfigCommon_Ssb_PositionsInBurst(ServingCellConfigCommon_Ssb_PositionsInBurst& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_shortBitmap;
    value.u.shortBitmap.bitLength = 4u;
    value.u.shortBitmap.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.shortBitmap.bytes != nullptr) {
        std::memset(value.u.shortBitmap.bytes, 0, 1u);
    }
}

void BuildSample_ServingCellConfigCommon(ServingCellConfigCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dmrs_TypeA_Position = ServingCellConfigCommon_Dmrs_TypeA_Position_pos2;
    value.ss_PBCH_BlockPower = -60;
}

void BuildSample_CFRA_TwoStep_r16_OccasionsTwoStepRA_r16(CFRA_TwoStep_r16_OccasionsTwoStepRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RACH_ConfigGenericTwoStepRA_r16(value.rach_ConfigGenericTwoStepRA_r16, depth + 1);
    value.ssb_PerRACH_OccasionTwoStepRA_r16 = CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16_oneEighth;
}

void BuildSample_CFRA_TwoStep_r16_ResourcesTwoStep_r16(CFRA_TwoStep_r16_ResourcesTwoStep_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb_ResourceList_count = 0u;
    value.ra_ssb_OccasionMaskIndex = 0;
}

void BuildSample_CFRA_TwoStep_r16(CFRA_TwoStep_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MsgA_PUSCH_Resource_r16(value.msgA_CFRA_PUSCH_r16, depth + 1);
    BuildSample_CFRA_TwoStep_r16_ResourcesTwoStep_r16(value.resourcesTwoStep_r16, depth + 1);
}

void BuildSample_CFRA_Occasions(CFRA_Occasions& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RACH_ConfigGeneric(value.rach_ConfigGeneric, depth + 1);
}

void BuildSample_CFRA_Resources_Ssb(CFRA_Resources_Ssb& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb_ResourceList_count = 0u;
    value.ra_ssb_OccasionMaskIndex = 0;
}

void BuildSample_CFRA_Resources_Csirs(CFRA_Resources_Csirs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csirs_ResourceList_count = 0u;
    value.rsrp_ThresholdCSI_RS = 0;
}

void BuildSample_CFRA_Resources(CFRA_Resources& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CFRA_Resources_Tag_ssb;
    BuildSample_CFRA_Resources_Ssb(value.u.ssb, depth + 1);
}

void BuildSample_CFRA(CFRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CFRA_Resources(value.resources, depth + 1);
}

void BuildSample_RACH_ConfigDedicated(RACH_ConfigDedicated& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ReconfigurationWithSync_Rach_ConfigDedicated(ReconfigurationWithSync_Rach_ConfigDedicated& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ReconfigurationWithSync_Rach_ConfigDedicated_Tag_uplink;
    BuildSample_RACH_ConfigDedicated(value.u.uplink, depth + 1);
}

void BuildSample_ReconfigurationWithSync(ReconfigurationWithSync& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.newUE_Identity = 0;
    value.t304 = ReconfigurationWithSync_T304_ms50;
}

void BuildSample_CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16(CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierIndicatorSizeDCI_1_2_r16 = 0;
    value.carrierIndicatorSizeDCI_0_2_r16 = 0;
}

void BuildSample_CrossCarrierSchedulingConfig_SchedulingCellInfo_Own(CrossCarrierSchedulingConfig_SchedulingCellInfo_Own& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cif_Presence = true;
}

void BuildSample_CrossCarrierSchedulingConfig_SchedulingCellInfo_Other(CrossCarrierSchedulingConfig_SchedulingCellInfo_Other& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.schedulingCellId = 0;
    value.cif_InSchedulingCell = 1;
}

void BuildSample_CrossCarrierSchedulingConfig_SchedulingCellInfo(CrossCarrierSchedulingConfig_SchedulingCellInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag_own;
    BuildSample_CrossCarrierSchedulingConfig_SchedulingCellInfo_Own(value.u.own, depth + 1);
}

void BuildSample_CrossCarrierSchedulingConfig(CrossCarrierSchedulingConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CrossCarrierSchedulingConfig_SchedulingCellInfo(value.schedulingCellInfo, depth + 1);
}

void BuildSample_TDD_UL_DL_ConfigDedicated_IAB_MT_r16(TDD_UL_DL_ConfigDedicated_IAB_MT_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_WithinActiveTimeConfig_r16(WithinActiveTimeConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_WithinActiveTimeConfig_r16(SetupRelease_WithinActiveTimeConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_WithinActiveTimeConfig_r16_Tag_release;
}

void BuildSample_OutsideActiveTimeConfig_r16(OutsideActiveTimeConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_OutsideActiveTimeConfig_r16(SetupRelease_OutsideActiveTimeConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_OutsideActiveTimeConfig_r16_Tag_release;
}

void BuildSample_DormantBWP_Config_r16(DormantBWP_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_DormantBWP_Config_r16(SetupRelease_DormantBWP_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DormantBWP_Config_r16_Tag_release;
}

void BuildSample_ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16(ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS15kHz;
    value.u.refSCS15kHz = -2;
}

void BuildSample_DummyJ(DummyJ& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxEnergyDetectionThreshold_r16 = -85;
    value.energyDetectionThresholdOffset_r16 = -20;
}

void BuildSample_SetupRelease_DummyJ(SetupRelease_DummyJ& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DummyJ_Tag_release;
}

void BuildSample_LTE_CRS_PatternList_r16(LTE_CRS_PatternList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (RateMatchPatternLTE_CRS*)std::malloc((std::size_t)value.count * sizeof(RateMatchPatternLTE_CRS));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(RateMatchPatternLTE_CRS));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_RateMatchPatternLTE_CRS(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_LTE_CRS_PatternList_r16(SetupRelease_LTE_CRS_PatternList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_LTE_CRS_PatternList_r16_Tag_release;
}

void BuildSample_ChannelAccessConfig_r16_EnergyDetectionConfig_r16(ChannelAccessConfig_r16_EnergyDetectionConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag_maxEnergyDetectionThreshold_r16;
    value.u.maxEnergyDetectionThreshold_r16 = -85;
}

void BuildSample_ChannelAccessConfig_r16(ChannelAccessConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_ChannelAccessConfig_r16(SetupRelease_ChannelAccessConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_ChannelAccessConfig_r16_Tag_release;
}

void BuildSample_TCI_ActivatedConfig_r17(TCI_ActivatedConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_TCI_r17_count = 0u;
    value.pdsch_TCI_r17.bitLength = 1u;
    value.pdsch_TCI_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.pdsch_TCI_r17.bytes != nullptr) {
        std::memset(value.pdsch_TCI_r17.bytes, 0, 1u);
    }
}

void BuildSample_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17(NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n4_r17;
    value.u.n4_r17 = 0;
}

void BuildSample_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17(NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n8_r17;
    value.u.n8_r17 = 0;
}

void BuildSample_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17(NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n16_r17;
    value.u.n16_r17 = 0;
}

void BuildSample_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17(NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n32_r17;
    value.u.n32_r17 = 0;
}

void BuildSample_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17(NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs15_r17;
    BuildSample_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17(value.u.scs15_r17, depth + 1);
}

void BuildSample_RepFactorAndTimeGap_r17(RepFactorAndTimeGap_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.repetitionFactor_r17 = RepFactorAndTimeGap_r17_RepetitionFactor_r17_n2;
    value.timeGap_r17 = RepFactorAndTimeGap_r17_TimeGap_r17_s1;
}

void BuildSample_NR_DL_PRS_PDC_ResourceSet_r17(NR_DL_PRS_PDC_ResourceSet_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17(value.periodicityAndOffset_r17, depth + 1);
    value.numSymbols_r17 = NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17_n2;
    value.dl_PRS_ResourceBandwidth_r17 = 1;
    value.dl_PRS_StartPRB_r17 = 0;
    value.resourceList_r17_count = 0u;
}

void BuildSample_NR_DL_PRS_PDC_Info_r17(NR_DL_PRS_PDC_Info_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_NR_DL_PRS_PDC_Info_r17(SetupRelease_NR_DL_PRS_PDC_Info_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag_release;
}

void BuildSample_SemiStaticChannelAccessConfigUE_r17(SemiStaticChannelAccessConfigUE_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.periodUE_r17 = SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17_ms1;
    value.offsetUE_r17 = 0;
}

void BuildSample_SetupRelease_SemiStaticChannelAccessConfigUE_r17(SetupRelease_SemiStaticChannelAccessConfigUE_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag_release;
}

void BuildSample_MIMOParam_r17(MIMOParam_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_MIMOParam_r17(SetupRelease_MIMOParam_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MIMOParam_r17_Tag_release;
}

void BuildSample_LTE_NeighCellsCRS_AssistInfoList_r17(LTE_NeighCellsCRS_AssistInfoList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (LTE_NeighCellsCRS_AssistInfo_r17*)std::malloc((std::size_t)value.count * sizeof(LTE_NeighCellsCRS_AssistInfo_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(LTE_NeighCellsCRS_AssistInfo_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_LTE_NeighCellsCRS_AssistInfo_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17(SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag_release;
}

void BuildSample_ServingCellConfig_ExtGroup8_Tag2_r18(ServingCellConfig_ExtGroup8_Tag2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag2_Id_r18 = 0;
    value.tag2_flag_r18 = true;
}

void BuildSample_SetupRelease_CellDTXDRX_Config_r18(SetupRelease_CellDTXDRX_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CellDTXDRX_Config_r18_Tag_release;
}

void BuildSample_UplinkTxSwitching_r16(UplinkTxSwitching_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.uplinkTxSwitchingPeriodLocation_r16 = true;
    value.uplinkTxSwitchingCarrier_r16 = UplinkTxSwitching_r16_UplinkTxSwitchingCarrier_r16_carrier1;
}

void BuildSample_SetupRelease_UplinkTxSwitching_r16(SetupRelease_UplinkTxSwitching_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UplinkTxSwitching_r16_Tag_release;
}

void BuildSample_SetupRelease_MaxMIMO_LayersDCI_0_2_r16(SetupRelease_MaxMIMO_LayersDCI_0_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag_release;
}

void BuildSample_SetupRelease_UplinkHARQ_mode_r17(SetupRelease_UplinkHARQ_mode_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UplinkHARQ_mode_r17_Tag_release;
}

void BuildSample_PUSCH_CodeBlockGroupTransmission(PUSCH_CodeBlockGroupTransmission& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxCodeBlockGroupsPerTransportBlock = PUSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock_n2;
}

void BuildSample_SetupRelease_PUSCH_CodeBlockGroupTransmission(SetupRelease_PUSCH_CodeBlockGroupTransmission& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag_release;
}

void BuildSample_PUSCH_ServingCellConfig(PUSCH_ServingCellConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PUSCH_ServingCellConfig(SetupRelease_PUSCH_ServingCellConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PUSCH_ServingCellConfig_Tag_release;
}

void BuildSample_SRS_TPC_PDCCH_Config(SRS_TPC_PDCCH_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA(SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SRS_TPC_PDCCH_Config*)std::malloc((std::size_t)value.count * sizeof(SRS_TPC_PDCCH_Config));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRS_TPC_PDCCH_Config));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SRS_TPC_PDCCH_Config(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group(SRS_CarrierSwitching_Srs_TPC_PDCCH_Group& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag_typeA;
    BuildSample_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA(value.u.typeA, depth + 1);
}

void BuildSample_SRS_CarrierSwitching(SRS_CarrierSwitching& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_SwitchFromCarrier = SRS_CarrierSwitching_Srs_SwitchFromCarrier_sUL;
}

void BuildSample_SetupRelease_SRS_CarrierSwitching(SetupRelease_SRS_CarrierSwitching& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_CarrierSwitching_Tag_release;
}

void BuildSample_UplinkConfig(UplinkConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_TDD_UL_DL_ConfigDedicated(TDD_UL_DL_ConfigDedicated& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_AvailabilityIndicator_r16(SetupRelease_AvailabilityIndicator_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_AvailabilityIndicator_r16_Tag_release;
}

void BuildSample_SlotFormatIndicator(SlotFormatIndicator& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sfi_RNTI = 0;
    value.dci_PayloadSize = 1;
}

void BuildSample_SetupRelease_SlotFormatIndicator(SetupRelease_SlotFormatIndicator& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SlotFormatIndicator_Tag_release;
}

void BuildSample_PDCCH_ServingCellConfig(PDCCH_ServingCellConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PDCCH_ServingCellConfig(SetupRelease_PDCCH_ServingCellConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDCCH_ServingCellConfig_Tag_release;
}

void BuildSample_PDSCH_CodeBlockGroupTransmissionList_r16(PDSCH_CodeBlockGroupTransmissionList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PDSCH_CodeBlockGroupTransmission*)std::malloc((std::size_t)value.count * sizeof(PDSCH_CodeBlockGroupTransmission));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PDSCH_CodeBlockGroupTransmission));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PDSCH_CodeBlockGroupTransmission(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16(SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag_release;
}

void BuildSample_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17(SetupRelease_DownlinkHARQ_FeedbackDisabled_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag_release;
}

void BuildSample_PDSCH_CodeBlockGroupTransmission(PDSCH_CodeBlockGroupTransmission& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxCodeBlockGroupsPerTransportBlock = PDSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock_n2;
    value.codeBlockGroupFlushIndicator = true;
}

void BuildSample_SetupRelease_PDSCH_CodeBlockGroupTransmission(SetupRelease_PDSCH_CodeBlockGroupTransmission& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag_release;
}

void BuildSample_PDSCH_ServingCellConfig(PDSCH_ServingCellConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_PDSCH_ServingCellConfig(SetupRelease_PDSCH_ServingCellConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDSCH_ServingCellConfig_Tag_release;
}

void BuildSample_CSI_AperiodicTriggerStateList(CSI_AperiodicTriggerStateList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CSI_AperiodicTriggerState*)std::malloc((std::size_t)value.count * sizeof(CSI_AperiodicTriggerState));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_AperiodicTriggerState));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CSI_AperiodicTriggerState(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_CSI_AperiodicTriggerStateList(SetupRelease_CSI_AperiodicTriggerStateList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CSI_AperiodicTriggerStateList_Tag_release;
}

void BuildSample_CSI_SemiPersistentOnPUSCH_TriggerStateList(CSI_SemiPersistentOnPUSCH_TriggerStateList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CSI_SemiPersistentOnPUSCH_TriggerState*)std::malloc((std::size_t)value.count * sizeof(CSI_SemiPersistentOnPUSCH_TriggerState));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_SemiPersistentOnPUSCH_TriggerState));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CSI_SemiPersistentOnPUSCH_TriggerState(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList(SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag_release;
}

void BuildSample_CSI_MeasConfig(CSI_MeasConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_CSI_MeasConfig(SetupRelease_CSI_MeasConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CSI_MeasConfig_Tag_release;
}

void BuildSample_ServingCellConfig(ServingCellConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag_Id = 0;
}

void BuildSample_RLF_TimersAndConstants(RLF_TimersAndConstants& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.t310 = RLF_TimersAndConstants_T310_ms0;
    value.n310 = RLF_TimersAndConstants_N310_n1;
    value.n311 = RLF_TimersAndConstants_N311_n1;
}

void BuildSample_SetupRelease_RLF_TimersAndConstants(SetupRelease_RLF_TimersAndConstants& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RLF_TimersAndConstants_Tag_release;
}

void BuildSample_SpCellConfig(SpCellConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_DataInactivityTimer(SetupRelease_DataInactivityTimer& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DataInactivityTimer_Tag_release;
}

void BuildSample_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16(DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag_subMilliSeconds;
    value.u.subMilliSeconds = 1;
}

void BuildSample_DRX_ConfigSecondaryGroup_r16(DRX_ConfigSecondaryGroup_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16(value.drx_onDurationTimer_r16, depth + 1);
    value.drx_InactivityTimer_r16 = DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms0;
}

void BuildSample_SetupRelease_DRX_ConfigSecondaryGroup_r16(SetupRelease_DRX_ConfigSecondaryGroup_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag_release;
}

void BuildSample_SchedulingRequestConfig_v1700(SchedulingRequestConfig_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DRX_ConfigSL_r17(DRX_ConfigSL_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drx_HARQ_RTT_TimerSL_r17 = 0;
    value.drx_RetransmissionTimerSL_r17 = DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl0;
}

void BuildSample_SetupRelease_DRX_ConfigSL_r17(SetupRelease_DRX_ConfigSL_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DRX_ConfigSL_r17_Tag_release;
}

void BuildSample_DRX_ConfigExt_v1700(DRX_ConfigExt_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drx_HARQ_RTT_TimerDL_r17 = 0;
    value.drx_HARQ_RTT_TimerUL_r17 = 0;
}

void BuildSample_SetupRelease_DRX_ConfigExt_v1700(SetupRelease_DRX_ConfigExt_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DRX_ConfigExt_v1700_Tag_release;
}

void BuildSample_TAR_Config_r17(TAR_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_TAR_Config_r17(SetupRelease_TAR_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_TAR_Config_r17_Tag_release;
}

void BuildSample_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18(DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over240;
    value.u.ms1001over240 = 0;
}

void BuildSample_DRX_ConfigExt2_v1800_ShortDRX_r18(DRX_ConfigExt2_v1800_ShortDRX_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drx_NonIntegerShortCycle_r18 = DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms1001over240;
    value.drx_ShortCycleTimer_r18 = 1;
}

void BuildSample_DRX_ConfigExt2_v1800(DRX_ConfigExt2_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18(value.drx_NonIntegerLongCycleStartOffset_r18, depth + 1);
}

void BuildSample_SetupRelease_DRX_ConfigExt2_v1800(SetupRelease_DRX_ConfigExt2_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DRX_ConfigExt2_v1800_Tag_release;
}

void BuildSample_TAR_Config_r18(TAR_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_TAR_Config_r18(SetupRelease_TAR_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_TAR_Config_r18_Tag_release;
}

void BuildSample_SchedulingRequestConfig(SchedulingRequestConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_TAG_Config(TAG_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DRX_Config_Drx_onDurationTimer(DRX_Config_Drx_onDurationTimer& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DRX_Config_Drx_onDurationTimer_Tag_subMilliSeconds;
    value.u.subMilliSeconds = 1;
}

void BuildSample_DRX_Config_Drx_LongCycleStartOffset(DRX_Config_Drx_LongCycleStartOffset& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DRX_Config_Drx_LongCycleStartOffset_Tag_ms10;
    value.u.ms10 = 0;
}

void BuildSample_DRX_Config_ShortDRX(DRX_Config_ShortDRX& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drx_ShortCycle = DRX_Config_ShortDRX_Drx_ShortCycle_ms2;
    value.drx_ShortCycleTimer = 1;
}

void BuildSample_DRX_Config(DRX_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DRX_Config_Drx_onDurationTimer(value.drx_onDurationTimer, depth + 1);
    value.drx_InactivityTimer = DRX_Config_Drx_InactivityTimer_ms0;
    value.drx_HARQ_RTT_TimerDL = 0;
    value.drx_HARQ_RTT_TimerUL = 0;
    value.drx_RetransmissionTimerDL = DRX_Config_Drx_RetransmissionTimerDL_sl0;
    value.drx_RetransmissionTimerUL = DRX_Config_Drx_RetransmissionTimerUL_sl0;
    BuildSample_DRX_Config_Drx_LongCycleStartOffset(value.drx_LongCycleStartOffset, depth + 1);
    value.drx_SlotOffset = 0;
}

void BuildSample_SetupRelease_DRX_Config(SetupRelease_DRX_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DRX_Config_Tag_release;
}

void BuildSample_MPE_Config_FR2_r16(MPE_Config_FR2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mpe_ProhibitTimer_r16 = MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16_sf0;
    value.mpe_Threshold_r16 = MPE_Config_FR2_r16_Mpe_Threshold_r16_dB3;
}

void BuildSample_SetupRelease_MPE_Config_FR2_r16(SetupRelease_MPE_Config_FR2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MPE_Config_FR2_r16_Tag_release;
}

void BuildSample_MPE_Config_FR2_r17(MPE_Config_FR2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mpe_ProhibitTimer_r17 = MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17_sf0;
    value.mpe_Threshold_r17 = MPE_Config_FR2_r17_Mpe_Threshold_r17_dB3;
    value.numberOfN_r17 = 1;
}

void BuildSample_SetupRelease_MPE_Config_FR2_r17(SetupRelease_MPE_Config_FR2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MPE_Config_FR2_r17_Tag_release;
}

void BuildSample_PHR_Config(PHR_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.phr_PeriodicTimer = PHR_Config_Phr_PeriodicTimer_sf10;
    value.phr_ProhibitTimer = PHR_Config_Phr_ProhibitTimer_sf0;
    value.phr_Tx_PowerFactorChange = PHR_Config_Phr_Tx_PowerFactorChange_dB1;
    value.multiplePHR = true;
    value.dummy = true;
    value.phr_Type2OtherCell = true;
    value.phr_ModeOtherCG = PHR_Config_Phr_ModeOtherCG_real;
}

void BuildSample_SetupRelease_PHR_Config(SetupRelease_PHR_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PHR_Config_Tag_release;
}

void BuildSample_MAC_CellGroupConfig(MAC_CellGroupConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.skipUplinkTxDynamic = true;
}

void BuildSample_SetupRelease_PDCCH_BlindDetection(SetupRelease_PDCCH_BlindDetection& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDCCH_BlindDetection_Tag_release;
}

void BuildSample_DCP_Config_r16(DCP_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ps_RNTI_r16 = 0;
    value.ps_Offset_r16 = 1;
    value.sizeDCI_2_6_r16 = 1;
    value.ps_PositionDCI_2_6_r16 = 0;
}

void BuildSample_SetupRelease_DCP_Config_r16(SetupRelease_DCP_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DCP_Config_r16_Tag_release;
}

void BuildSample_PDSCH_HARQ_ACK_CodebookList_r16(PDSCH_HARQ_ACK_CodebookList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PDSCH_HARQ_ACK_CodebookList_r16_Item*)std::malloc((std::size_t)value.count * sizeof(PDSCH_HARQ_ACK_CodebookList_r16_Item));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PDSCH_HARQ_ACK_CodebookList_r16_Item));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = PDSCH_HARQ_ACK_CodebookList_r16_Item_semiStatic;
        }
    }
}

void BuildSample_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag_release;
}

void BuildSample_PDCCH_BlindDetectionCA_CombIndicator_r16(PDCCH_BlindDetectionCA_CombIndicator_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionCA1_r16 = 1;
    value.pdcch_BlindDetectionCA2_r16 = 1;
}

void BuildSample_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16(SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag_release;
}

void BuildSample_SetupRelease_PDCCH_BlindDetection2_r16(SetupRelease_PDCCH_BlindDetection2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDCCH_BlindDetection2_r16_Tag_release;
}

void BuildSample_SetupRelease_PDCCH_BlindDetection3_r16(SetupRelease_PDCCH_BlindDetection3_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDCCH_BlindDetection3_r16_Tag_release;
}

void BuildSample_MulticastConfig_r17(MulticastConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_MulticastConfig_r17(SetupRelease_MulticastConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_MulticastConfig_r17_Tag_release;
}

void BuildSample_PDCCH_BlindDetectionCA_CombIndicator_r17(PDCCH_BlindDetectionCA_CombIndicator_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionCA3_r17 = 1;
}

void BuildSample_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17(SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag_release;
}

void BuildSample_SetupRelease_PDCCH_BlindDetection4_r17(SetupRelease_PDCCH_BlindDetection4_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PDCCH_BlindDetection4_r17_Tag_release;
}

void BuildSample_CellDTRX_DCI_config_r18(CellDTRX_DCI_config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellDTRX_RNTI_r18 = 0;
    value.sizeDCI_2_9_r18 = 1;
}

void BuildSample_SetupRelease_CellDTRX_DCI_config_r18(SetupRelease_CellDTRX_DCI_config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CellDTRX_DCI_config_r18_Tag_release;
}

void BuildSample_SetupRelease_RNTI_Value(SetupRelease_RNTI_Value& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RNTI_Value_Tag_release;
}

void BuildSample_PhysicalCellGroupConfig(PhysicalCellGroupConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdsch_HARQ_ACK_Codebook = PhysicalCellGroupConfig_Pdsch_HARQ_ACK_Codebook_semiStatic;
}

void BuildSample_CellGroupConfig(CellGroupConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellGroupId = 0;
}

void BuildSample_SetupRelease_SCellSIB20_r17(SetupRelease_SCellSIB20_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SCellSIB20_r17_Tag_release;
}

void BuildSample_SetupRelease_PLMN_IdentityInfoList(SetupRelease_PLMN_IdentityInfoList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PLMN_IdentityInfoList_Tag_release;
}

void BuildSample_SetupRelease_NPN_IdentityInfoList_r16(SetupRelease_NPN_IdentityInfoList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_NPN_IdentityInfoList_r16_Tag_release;
}

void BuildSample_SCellConfig(SCellConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sCellIndex = 1;
}

void BuildSample_IAB_ResourceConfig_r17(IAB_ResourceConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.iab_ResourceConfigID_r17 = 0;
}

void BuildSample_IntraBandCC_CombinationReqList_r17(IntraBandCC_CombinationReqList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servCellIndexList_r17_count = 0u;
    value.cc_CombinationList_r17_count = 0u;
}

void BuildSample_IntraBandCC_Combination_r17(IntraBandCC_Combination_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CC_State_r17*)std::malloc((std::size_t)value.count * sizeof(CC_State_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CC_State_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CC_State_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CarrierState_r17(CarrierState_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CarrierState_r17_Tag_deActivated_r17;
}

void BuildSample_CC_State_r17(CC_State_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UplinkTxSwitchingBandPairConfig_r18(UplinkTxSwitchingBandPairConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandInfoUL1_r18 = 1;
    value.bandInfoUL2_r18 = 1;
    value.switchingOptionConfigForBandPair_r18 = UplinkTxSwitchingBandPairConfig_r18_SwitchingOptionConfigForBandPair_r18_switchedUL;
}

void BuildSample_UplinkTxSwitchingAssociatedBandDualUL_r18(UplinkTxSwitchingAssociatedBandDualUL_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.transmitBand_r18 = 1;
    value.associatedBand_r18 = 1;
}

void BuildSample_MultiBandInfoListEUTRA(MultiBandInfoListEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (FreqBandIndicatorEUTRA*)std::malloc((std::size_t)value.count * sizeof(FreqBandIndicatorEUTRA));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqBandIndicatorEUTRA));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_CGI_InfoEUTRA_Cgi_info_EPC(CGI_InfoEUTRA_Cgi_info_EPC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CellAccessRelatedInfo_EUTRA_EPC(value.cgi_info_EPC_legacy, depth + 1);
}

void BuildSample_CGI_InfoEUTRA(CGI_InfoEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.freqBandIndicator = 1;
}

void BuildSample_CGI_InfoNR_NoSIB1(CGI_InfoNR_NoSIB1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb_SubcarrierOffset = 0;
    BuildSample_PDCCH_ConfigSIB1(value.pdcch_ConfigSIB1, depth + 1);
}

void BuildSample_CGI_InfoNR(CGI_InfoNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two(CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.twoTX_CodebookSubsetRestriction.bitLength = 6u;
    value.twoTX_CodebookSubsetRestriction.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.twoTX_CodebookSubsetRestriction.bytes != nullptr) {
        std::memset(value.twoTX_CodebookSubsetRestriction.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2(CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction;
    value.u.two_one_TypeI_SinglePanel_Restriction.bitLength = 8u;
    value.u.two_one_TypeI_SinglePanel_Restriction.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.two_one_TypeI_SinglePanel_Restriction.bytes != nullptr) {
        std::memset(value.u.two_one_TypeI_SinglePanel_Restriction.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo(CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2(value.n1_n2, depth + 1);
}

void BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts(CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag_two;
    BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two(value.u.two, depth + 1);
}

void BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel(CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts(value.nrOfAntennaPorts, depth + 1);
    value.typeI_SinglePanel_ri_Restriction.bitLength = 8u;
    value.typeI_SinglePanel_ri_Restriction.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.typeI_SinglePanel_ri_Restriction.bytes != nullptr) {
        std::memset(value.typeI_SinglePanel_ri_Restriction.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2(CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_two_one_TypeI_MultiPanel_Restriction;
    value.u.two_two_one_TypeI_MultiPanel_Restriction.bitLength = 8u;
    value.u.two_two_one_TypeI_MultiPanel_Restriction.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.two_two_one_TypeI_MultiPanel_Restriction.bytes != nullptr) {
        std::memset(value.u.two_two_one_TypeI_MultiPanel_Restriction.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel(CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2(value.ng_n1_n2, depth + 1);
    value.ri_Restriction.bitLength = 4u;
    value.ri_Restriction.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.ri_Restriction.bytes != nullptr) {
        std::memset(value.ri_Restriction.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_CodebookType_Type1_SubType(CodebookConfig_CodebookType_Type1_SubType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_CodebookType_Type1_SubType_Tag_typeI_SinglePanel;
    BuildSample_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel(value.u.typeI_SinglePanel, depth + 1);
}

void BuildSample_CodebookConfig_CodebookType_Type1(CodebookConfig_CodebookType_Type1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_CodebookType_Type1_SubType(value.subType, depth + 1);
    value.codebookMode = 1;
}

void BuildSample_CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction(CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_two_one;
    value.u.two_one.bitLength = 16u;
    value.u.two_one.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.u.two_one.bytes != nullptr) {
        std::memset(value.u.two_one.bytes, 0, 2u);
    }
}

void BuildSample_CodebookConfig_CodebookType_Type2_SubType_TypeII(CodebookConfig_CodebookType_Type2_SubType_TypeII& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction(value.n1_n2_codebookSubsetRestriction, depth + 1);
    value.typeII_RI_Restriction.bitLength = 2u;
    value.typeII_RI_Restriction.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.typeII_RI_Restriction.bytes != nullptr) {
        std::memset(value.typeII_RI_Restriction.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection(CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.typeII_PortSelectionRI_Restriction.bitLength = 2u;
    value.typeII_PortSelectionRI_Restriction.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.typeII_PortSelectionRI_Restriction.bytes != nullptr) {
        std::memset(value.typeII_PortSelectionRI_Restriction.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_CodebookType_Type2_SubType(CodebookConfig_CodebookType_Type2_SubType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_CodebookType_Type2_SubType_Tag_typeII;
    BuildSample_CodebookConfig_CodebookType_Type2_SubType_TypeII(value.u.typeII, depth + 1);
}

void BuildSample_CodebookConfig_CodebookType_Type2(CodebookConfig_CodebookType_Type2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_CodebookType_Type2_SubType(value.subType, depth + 1);
    value.phaseAlphabetSize = CodebookConfig_CodebookType_Type2_PhaseAlphabetSize_n4;
    value.subbandAmplitude = true;
    value.numberOfBeams = CodebookConfig_CodebookType_Type2_NumberOfBeams_two;
}

void BuildSample_CodebookConfig_CodebookType(CodebookConfig_CodebookType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_CodebookType_Tag_type1;
    BuildSample_CodebookConfig_CodebookType_Type1(value.u.type1, depth + 1);
}

void BuildSample_CodebookConfig(CodebookConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_CodebookType(value.codebookType, depth + 1);
}

void BuildSample_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16(CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_two_one;
    value.u.two_one.bitLength = 16u;
    value.u.two_one.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.u.two_one.bytes != nullptr) {
        std::memset(value.u.two_one.bytes, 0, 2u);
    }
}

void BuildSample_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16(CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16(value.n1_n2_codebookSubsetRestriction_r16, depth + 1);
    value.typeII_RI_Restriction_r16.bitLength = 4u;
    value.typeII_RI_Restriction_r16.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.typeII_RI_Restriction_r16.bytes != nullptr) {
        std::memset(value.typeII_RI_Restriction_r16.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16(CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.portSelectionSamplingSize_r16 = CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16_PortSelectionSamplingSize_r16_n1;
    value.typeII_PortSelectionRI_Restriction_r16.bitLength = 4u;
    value.typeII_PortSelectionRI_Restriction_r16.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.typeII_PortSelectionRI_Restriction_r16.bytes != nullptr) {
        std::memset(value.typeII_PortSelectionRI_Restriction_r16.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_r16_CodebookType_Type2_SubType(CodebookConfig_r16_CodebookType_Type2_SubType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_r16_CodebookType_Type2_SubType_Tag_typeII_r16;
    BuildSample_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16(value.u.typeII_r16, depth + 1);
}

void BuildSample_CodebookConfig_r16_CodebookType_Type2(CodebookConfig_r16_CodebookType_Type2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_r16_CodebookType_Type2_SubType(value.subType, depth + 1);
    value.numberOfPMI_SubbandsPerCQI_Subband_r16 = 1;
    value.paramCombination_r16 = 1;
}

void BuildSample_CodebookConfig_r16_CodebookType(CodebookConfig_r16_CodebookType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_r16_CodebookType_Tag_type2;
    BuildSample_CodebookConfig_r16_CodebookType_Type2(value.u.type2, depth + 1);
}

void BuildSample_CodebookConfig_r16(CodebookConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_r16_CodebookType(value.codebookType, depth + 1);
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.twoTX_CodebookSubsetRestriction1_r17.bitLength = 6u;
    value.twoTX_CodebookSubsetRestriction1_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.twoTX_CodebookSubsetRestriction1_r17.bytes != nullptr) {
        std::memset(value.twoTX_CodebookSubsetRestriction1_r17.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction1_r17;
    value.u.two_one_TypeI_SinglePanel_Restriction1_r17.bitLength = 8u;
    value.u.two_one_TypeI_SinglePanel_Restriction1_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.two_one_TypeI_SinglePanel_Restriction1_r17.bytes != nullptr) {
        std::memset(value.u.two_one_TypeI_SinglePanel_Restriction1_r17.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(value.n1_n2, depth + 1);
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag_two;
    BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two(value.u.two, depth + 1);
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts(value.nrOfAntennaPorts, depth + 1);
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.twoTX_CodebookSubsetRestriction2_r17.bitLength = 6u;
    value.twoTX_CodebookSubsetRestriction2_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.twoTX_CodebookSubsetRestriction2_r17.bytes != nullptr) {
        std::memset(value.twoTX_CodebookSubsetRestriction2_r17.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction2_r17;
    value.u.two_one_TypeI_SinglePanel_Restriction2_r17.bitLength = 8u;
    value.u.two_one_TypeI_SinglePanel_Restriction2_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.two_one_TypeI_SinglePanel_Restriction2_r17.bytes != nullptr) {
        std::memset(value.u.two_one_TypeI_SinglePanel_Restriction2_r17.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(value.n1_n2, depth + 1);
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag_two;
    BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two(value.u.two, depth + 1);
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts(value.nrOfAntennaPorts, depth + 1);
}

void BuildSample_CodebookConfig_r17_CodebookType_Type1(CodebookConfig_r17_CodebookType_Type1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17(CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.paramCombination_r17 = 1;
    value.typeII_PortSelectionRI_Restriction_r17.bitLength = 4u;
    value.typeII_PortSelectionRI_Restriction_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.typeII_PortSelectionRI_Restriction_r17.bytes != nullptr) {
        std::memset(value.typeII_PortSelectionRI_Restriction_r17.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_r17_CodebookType_Type2(CodebookConfig_r17_CodebookType_Type2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17(value.typeII_PortSelection_r17, depth + 1);
}

void BuildSample_CodebookConfig_r17_CodebookType(CodebookConfig_r17_CodebookType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_r17_CodebookType_Tag_type1;
    BuildSample_CodebookConfig_r17_CodebookType_Type1(value.u.type1, depth + 1);
}

void BuildSample_CodebookConfig_r17(CodebookConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_r17_CodebookType(value.codebookType, depth + 1);
}

void BuildSample_CodebookConfig_v1730_CodebookType_Type1(CodebookConfig_v1730_CodebookType_Type1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookConfig_v1730_CodebookType(CodebookConfig_v1730_CodebookType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_v1730_CodebookType_Tag_type1;
    BuildSample_CodebookConfig_v1730_CodebookType_Type1(value.u.type1, depth + 1);
}

void BuildSample_CodebookConfig_v1730(CodebookConfig_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_v1730_CodebookType(value.codebookType, depth + 1);
}

void BuildSample_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18(CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.n1_n2_codebookSubsetRestrictionList_r18_count = 0u;
    value.paramCombination_CJT_r18 = 1;
    value.paramCombination_CJT_L_r18_count = 0u;
    value.restrictedCMR_Selection_r18 = CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_RestrictedCMR_Selection_r18_enable;
    value.numberOfPMI_SubbandsPerCQI_Subband_r18 = 1;
    value.typeII_RI_Restriction_r18.bitLength = 4u;
    value.typeII_RI_Restriction_r18.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.typeII_RI_Restriction_r18.bytes != nullptr) {
        std::memset(value.typeII_RI_Restriction_r18.bytes, 0, 1u);
    }
    value.codebookMode_r18 = 1;
}

void BuildSample_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18(CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.paramCombination_CJT_PS_r18 = 1;
    value.paramCombination_CJT_PS_alpha_r18_count = 0u;
    value.restrictedCMR_Selection_r18 = CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_RestrictedCMR_Selection_r18_enable;
    value.numberOfPMI_SubbandsPerCQI_Subband_r18 = 1;
    value.typeII_PortSelectionRI_Restriction_r18.bitLength = 4u;
    value.typeII_PortSelectionRI_Restriction_r18.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.typeII_PortSelectionRI_Restriction_r18.bytes != nullptr) {
        std::memset(value.typeII_PortSelectionRI_Restriction_r18.bytes, 0, 1u);
    }
    value.codebookMode_r18 = 1;
}

void BuildSample_CBSR_r18(CBSR_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CBSR_r18_Tag_two_one;
    value.u.two_one.bitLength = 8u;
    value.u.two_one.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.two_one.bytes != nullptr) {
        std::memset(value.u.two_one.bytes, 0, 1u);
    }
}

void BuildSample_TD_DD_Config_r18(TD_DD_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.vectorLengthDD_r18 = TD_DD_Config_r18_VectorLengthDD_r18_n1;
}

void BuildSample_CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18(CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CBSR_r18(value.n1_n2_codebookSubsetRestriction_r18, depth + 1);
    value.paramCombination_Doppler_r18 = 1;
    BuildSample_TD_DD_Config_r18(value.td_dd_config_r18, depth + 1);
    value.numberOfPMI_SubbandsPerCQI_Subband_r18 = 1;
    value.predictionDelay_r18 = CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18_PredictionDelay_r18_m0;
    value.typeII_RI_Restriction_r18.bitLength = 4u;
    value.typeII_RI_Restriction_r18.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.typeII_RI_Restriction_r18.bytes != nullptr) {
        std::memset(value.typeII_RI_Restriction_r18.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18(CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.paramCombinationDoppler_PS_r18 = 1;
    BuildSample_TD_DD_Config_r18(value.td_dd_config_r18, depth + 1);
    value.numberOfPMI_SubbandsPerCQI_Subband_r18 = 1;
    value.predictionDelay_r18 = CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_PredictionDelay_r18_m0;
    value.typeII_PortSelectionRI_Restriction_r18.bitLength = 4u;
    value.typeII_PortSelectionRI_Restriction_r18.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.typeII_PortSelectionRI_Restriction_r18.bytes != nullptr) {
        std::memset(value.typeII_PortSelectionRI_Restriction_r18.bytes, 0, 1u);
    }
}

void BuildSample_CodebookConfig_r18_CodebookType_Type2(CodebookConfig_r18_CodebookType_Type2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_r18_CodebookType_Type2_Tag_typeII_CJT_r18;
    BuildSample_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18(value.u.typeII_CJT_r18, depth + 1);
}

void BuildSample_CodebookConfig_r18_CodebookType(CodebookConfig_r18_CodebookType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CodebookConfig_r18_CodebookType_Tag_type2;
    BuildSample_CodebookConfig_r18_CodebookType_Type2(value.u.type2, depth + 1);
}

void BuildSample_CodebookConfig_r18(CodebookConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookConfig_r18_CodebookType(value.codebookType, depth + 1);
}

void BuildSample_CondExecutionCondToAddModList_r18(CondExecutionCondToAddModList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CondExecutionCondToAddMod_r18*)std::malloc((std::size_t)value.count * sizeof(CondExecutionCondToAddMod_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CondExecutionCondToAddMod_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CondExecutionCondToAddMod_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CondExecutionCondToReleaseList_r18(CondExecutionCondToReleaseList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CondReconfigId_r16*)std::malloc((std::size_t)value.count * sizeof(CondReconfigId_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CondReconfigId_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SubsequentCondReconfig_r18(SubsequentCondReconfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CondReconfigToAddMod_r16(CondReconfigToAddMod_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.condReconfigId_r16 = 1;
    if (depth < 2) {
        value.condRRCReconfig_r16 = (RRCReconfiguration*)std::malloc(sizeof(RRCReconfiguration));
        if (value.condRRCReconfig_r16 != nullptr) {
            BuildSample_RRCReconfiguration(*value.condRRCReconfig_r16, depth + 1);
        }
    }
}

void BuildSample_CondReconfigExecCondSCG_r17(CondReconfigExecCondSCG_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasId*)std::malloc((std::size_t)value.count * sizeof(MeasId));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasId));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_CondExecutionCondToAddMod_r18(CondExecutionCondToAddMod_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.subsequentCondReconfigId_r18 = 1;
    if (depth < 2) {
        value.subsequentCondExecutionCondSCG_r18 = (CondReconfigExecCondSCG_r17*)std::malloc(sizeof(CondReconfigExecCondSCG_r17));
        if (value.subsequentCondExecutionCondSCG_r18 != nullptr) {
            BuildSample_CondReconfigExecCondSCG_r17(*value.subsequentCondExecutionCondSCG_r18, depth + 1);
        }
    }
}

void BuildSample_SK_CounterConfig_r18(SK_CounterConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.securityCellSetId_r18 = 1;
    value.sk_CounterList_r18_count = 0u;
}

void BuildSample_CG_COT_Sharing_r16_Cot_Sharing_r16(CG_COT_Sharing_r16_Cot_Sharing_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.duration_r16 = 1;
    value.offset_r16 = 1;
    value.channelAccessPriority_r16 = 1;
}

void BuildSample_CG_COT_Sharing_r16(CG_COT_Sharing_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CG_COT_Sharing_r16_Tag_noCOT_Sharing_r16;
}

void BuildSample_CG_COT_Sharing_r17_Cot_Sharing_r17(CG_COT_Sharing_r17_Cot_Sharing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.duration_r17 = 1;
    value.offset_r17 = 1;
}

void BuildSample_CG_COT_Sharing_r17(CG_COT_Sharing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CG_COT_Sharing_r17_Tag_noCOT_Sharing_r17;
}

void BuildSample_CSI_AperiodicTriggerState(CSI_AperiodicTriggerState& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.associatedReportConfigInfoList_count = 0u;
}

void BuildSample_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17(CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resourceSet2_r17 = 1;
}

void BuildSample_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17(CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag_nzp_CSI_RS2_r17;
    BuildSample_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17(value.u.nzp_CSI_RS2_r17, depth + 1);
}

void BuildSample_CSI_ReportSubConfigTriggerList_r18(CSI_ReportSubConfigTriggerList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CSI_ReportSubConfigId_r18*)std::malloc((std::size_t)value.count * sizeof(CSI_ReportSubConfigId_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_ReportSubConfigId_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18(CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resourceSet2TDCP_r18 = 1;
}

void BuildSample_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item*)std::malloc((std::size_t)value.count * sizeof(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item_first;
        }
    }
}

void BuildSample_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag_perSet_r18;
    value.u.perSet_r18 = CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerSet_r18_first;
}

void BuildSample_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item*)std::malloc((std::size_t)value.count * sizeof(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item_first;
        }
    }
}

void BuildSample_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag_perSet_r18;
    value.u.perSet_r18 = CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerSet_r18_first;
}

void BuildSample_CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS(CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resourceSet = 1;
}

void BuildSample_CSI_AssociatedReportConfigInfo_ResourcesForChannel(CSI_AssociatedReportConfigInfo_ResourcesForChannel& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag_nzp_CSI_RS;
    BuildSample_CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS(value.u.nzp_CSI_RS, depth + 1);
}

void BuildSample_CSI_AssociatedReportConfigInfo(CSI_AssociatedReportConfigInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportConfigId = 0;
    BuildSample_CSI_AssociatedReportConfigInfo_ResourcesForChannel(value.resourcesForChannel, depth + 1);
}

void BuildSample_CSI_FrequencyOccupation(CSI_FrequencyOccupation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.startingRB = 0;
    value.nrofRBs = 24;
}

void BuildSample_CSI_ResourcePeriodicityAndOffset(CSI_ResourcePeriodicityAndOffset& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ResourcePeriodicityAndOffset_Tag_slots4;
    value.u.slots4 = 0;
}

void BuildSample_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0(CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.subcarrierLocation_p0 = CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0_s0;
    value.symbolLocation_p0 = 0;
}

void BuildSample_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1(CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.subcarrierLocation_p1 = CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1_SubcarrierLocation_p1_s0;
    value.symbolLocation_p1 = 0;
}

void BuildSample_CSI_IM_Resource_Csi_IM_ResourceElementPattern(CSI_IM_Resource_Csi_IM_ResourceElementPattern& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag_pattern0;
    BuildSample_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0(value.u.pattern0, depth + 1);
}

void BuildSample_CSI_IM_Resource(CSI_IM_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csi_IM_ResourceId = 0;
}

void BuildSample_CSI_IM_ResourceSet(CSI_IM_ResourceSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csi_IM_ResourceSetId = 0;
    value.csi_IM_Resources_count = 0u;
}

void BuildSample_CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530(CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportSlotConfig_v1530 = CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530_ReportSlotConfig_v1530_sl4;
}

void BuildSample_CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610(CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CSI_ReportConfig_ExtGroup2_Aperiodic_v1610(CSI_ReportConfig_ExtGroup2_Aperiodic_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CSI_ReportConfig_ExtGroup2_ReportQuantity_r16(CSI_ReportConfig_ExtGroup2_ReportQuantity_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag_cri_SINR_r16;
}

void BuildSample_CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710(CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nrofReportedGroups_r17 = CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710_NrofReportedGroups_r17_n1;
}

void BuildSample_CSI_ReportConfig_ExtGroup3_ReportQuantity_r17(CSI_ReportConfig_ExtGroup3_ReportQuantity_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_cri_RSRP_Index_r17;
}

void BuildSample_CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720(CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CSI_ReportConfig_ExtGroup4_Aperiodic_v1720(CSI_ReportConfig_ExtGroup4_Aperiodic_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_TDCP_r18(TDCP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.delayDSetofLengthY_r18_count = 0u;
}

void BuildSample_CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800(CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportingMode_r18 = CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800_ReportingMode_r18_jointULDL;
}

void BuildSample_CSI_ReportPeriodicityAndOffset(CSI_ReportPeriodicityAndOffset& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ReportPeriodicityAndOffset_Tag_slots4;
    value.u.slots4 = 0;
}

void BuildSample_CSI_ReportConfigType_Periodic(CSI_ReportConfigType_Periodic& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CSI_ReportPeriodicityAndOffset(value.reportSlotConfig, depth + 1);
    value.pucch_CSI_ResourceList_count = 0u;
}

void BuildSample_CSI_ReportConfigType_SemiPersistentOnPUCCH(CSI_ReportConfigType_SemiPersistentOnPUCCH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CSI_ReportPeriodicityAndOffset(value.reportSlotConfig, depth + 1);
    value.pucch_CSI_ResourceList_count = 0u;
}

void BuildSample_CSI_ReportConfigType_SemiPersistentOnPUSCH(CSI_ReportConfigType_SemiPersistentOnPUSCH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportSlotConfig = CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig_sl5;
    value.reportSlotOffsetList_count = 0u;
    value.p0alpha = 0;
}

void BuildSample_CSI_ReportConfigType_Aperiodic(CSI_ReportConfigType_Aperiodic& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportSlotOffsetList_count = 0u;
}

void BuildSample_CSI_ReportConfigType(CSI_ReportConfigType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ReportConfigType_Tag_periodic;
    BuildSample_CSI_ReportConfigType_Periodic(value.u.periodic, depth + 1);
}

void BuildSample_CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI(CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CSI_ReportConfig_ReportQuantity(CSI_ReportConfig_ReportQuantity& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ReportConfig_ReportQuantity_Tag_none;
}

void BuildSample_CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand(CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands3;
    value.u.subbands3.bitLength = 3u;
    value.u.subbands3.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.subbands3.bytes != nullptr) {
        std::memset(value.u.subbands3.bytes, 0, 1u);
    }
}

void BuildSample_CSI_ReportConfig_ReportFreqConfiguration(CSI_ReportConfig_ReportFreqConfiguration& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CSI_ReportConfig_GroupBasedBeamReporting_Disabled(CSI_ReportConfig_GroupBasedBeamReporting_Disabled& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CSI_ReportConfig_GroupBasedBeamReporting(CSI_ReportConfig_GroupBasedBeamReporting& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ReportConfig_GroupBasedBeamReporting_Tag_enabled;
}

void BuildSample_CSI_ReportConfig(CSI_ReportConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportConfigId = 0;
    value.resourcesForChannelMeasurement = 0;
    BuildSample_CSI_ReportConfigType(value.reportConfigType, depth + 1);
    BuildSample_CSI_ReportConfig_ReportQuantity(value.reportQuantity, depth + 1);
    value.timeRestrictionForChannelMeasurements = CSI_ReportConfig_TimeRestrictionForChannelMeasurements_configured;
    value.timeRestrictionForInterferenceMeasurements = CSI_ReportConfig_TimeRestrictionForInterferenceMeasurements_configured;
    BuildSample_CSI_ReportConfig_GroupBasedBeamReporting(value.groupBasedBeamReporting, depth + 1);
    value.subbandSize = CSI_ReportConfig_SubbandSize_value1;
}

void BuildSample_PortIndexFor8Ranks_PortIndex8(PortIndexFor8Ranks_PortIndex8& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PortIndexFor8Ranks_PortIndex4(PortIndexFor8Ranks_PortIndex4& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PortIndexFor8Ranks_PortIndex2(PortIndexFor8Ranks_PortIndex2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PortIndexFor8Ranks(PortIndexFor8Ranks& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PortIndexFor8Ranks_Tag_portIndex8;
    BuildSample_PortIndexFor8Ranks_PortIndex8(value.u.portIndex8, depth + 1);
}

void BuildSample_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18(CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p2;
    value.u.p2.bitLength = 2u;
    value.u.p2.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.p2.bytes != nullptr) {
        std::memset(value.u.p2.bytes, 0, 1u);
    }
}

void BuildSample_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters(CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters(CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nzp_CSI_RS_ResourceList_r18_count = 0u;
}

void BuildSample_CSI_ReportSubConfig_r18_ReportSubConfigParams(CSI_ReportSubConfig_r18_ReportSubConfigParams& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag_a1_parameters;
    BuildSample_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters(value.u.a1_parameters, depth + 1);
}

void BuildSample_CSI_ReportSubConfig_r18(CSI_ReportSubConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportSubConfigId_r18 = 0;
}

void BuildSample_CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB(CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList(CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CSI_IM_ResourceSetId*)std::malloc((std::size_t)value.count * sizeof(CSI_IM_ResourceSetId));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_IM_ResourceSetId));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_CSI_ResourceConfig_Csi_RS_ResourceSetList(CSI_ResourceConfig_Csi_RS_ResourceSetList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag_nzp_CSI_RS_SSB;
    BuildSample_CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB(value.u.nzp_CSI_RS_SSB, depth + 1);
}

void BuildSample_CSI_ResourceConfig(CSI_ResourceConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csi_ResourceConfigId = 0;
    BuildSample_CSI_ResourceConfig_Csi_RS_ResourceSetList(value.csi_RS_ResourceSetList, depth + 1);
    value.bwp_Id = 0;
    value.resourceType = CSI_ResourceConfig_ResourceType_aperiodic;
}

void BuildSample_CSI_RS_ResourceConfigMobility(CSI_RS_ResourceConfigMobility& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.subcarrierSpacing = SubcarrierSpacing_kHz15;
    value.csi_RS_CellList_Mobility_count = 0u;
}

void BuildSample_CSI_RS_CellMobility_Csi_rs_MeasurementBW(CSI_RS_CellMobility_Csi_rs_MeasurementBW& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nrofPRBs = CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs_size24;
    value.startPRB = 0;
}

void BuildSample_CSI_RS_CellMobility(CSI_RS_CellMobility& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellId = 0;
    BuildSample_CSI_RS_CellMobility_Csi_rs_MeasurementBW(value.csi_rs_MeasurementBW, depth + 1);
    value.csi_rs_ResourceList_Mobility_count = 0u;
}

void BuildSample_CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17(CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms4;
    value.u.ms4 = 0;
}

void BuildSample_CSI_RS_Resource_Mobility_SlotConfig(CSI_RS_Resource_Mobility_SlotConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_RS_Resource_Mobility_SlotConfig_Tag_ms4;
    value.u.ms4 = 0;
}

void BuildSample_CSI_RS_Resource_Mobility_AssociatedSSB(CSI_RS_Resource_Mobility_AssociatedSSB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb_Index = 0;
    value.isQuasiColocated = true;
}

void BuildSample_CSI_RS_Resource_Mobility_FrequencyDomainAllocation(CSI_RS_Resource_Mobility_FrequencyDomainAllocation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag_row1;
    value.u.row1.bitLength = 4u;
    value.u.row1.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.row1.bytes != nullptr) {
        std::memset(value.u.row1.bytes, 0, 1u);
    }
}

void BuildSample_CSI_RS_Resource_Mobility(CSI_RS_Resource_Mobility& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csi_RS_Index = 0;
    BuildSample_CSI_RS_Resource_Mobility_SlotConfig(value.slotConfig, depth + 1);
    BuildSample_CSI_RS_Resource_Mobility_FrequencyDomainAllocation(value.frequencyDomainAllocation, depth + 1);
    value.firstOFDMSymbolInTimeDomain = 0;
    value.sequenceGenerationConfig = 0;
}

void BuildSample_CSI_RS_ResourceMapping_FrequencyDomainAllocation(CSI_RS_ResourceMapping_FrequencyDomainAllocation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row1;
    value.u.row1.bitLength = 4u;
    value.u.row1.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.row1.bytes != nullptr) {
        std::memset(value.u.row1.bytes, 0, 1u);
    }
}

void BuildSample_CSI_RS_ResourceMapping_Density(CSI_RS_ResourceMapping_Density& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CSI_RS_ResourceMapping_Density_Tag_dot5;
    value.u.dot5 = CSI_RS_ResourceMapping_Density_Dot5_evenPRBs;
}

void BuildSample_CSI_RS_ResourceMapping(CSI_RS_ResourceMapping& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CSI_RS_ResourceMapping_FrequencyDomainAllocation(value.frequencyDomainAllocation, depth + 1);
    value.nrofPorts = CSI_RS_ResourceMapping_NrofPorts_p1;
    value.firstOFDMSymbolInTimeDomain = 0;
    value.cdm_Type = CSI_RS_ResourceMapping_Cdm_Type_noCDM;
    BuildSample_CSI_RS_ResourceMapping_Density(value.density, depth + 1);
    BuildSample_CSI_FrequencyOccupation(value.freqBand, depth + 1);
}

void BuildSample_CSI_SemiPersistentOnPUSCH_TriggerState(CSI_SemiPersistentOnPUSCH_TriggerState& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.associatedReportConfigInfo = 0;
}

void BuildSample_CSI_SSB_ResourceSet(CSI_SSB_ResourceSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csi_SSB_ResourceSetId = 0;
    value.csi_SSB_ResourceList_count = 0u;
}

void BuildSample_DL_PPW_PeriodicityAndStartSlot_r17_Scs15(DL_PPW_PeriodicityAndStartSlot_r17_Scs15& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n4;
    value.u.n4 = 0;
}

void BuildSample_DL_PPW_PeriodicityAndStartSlot_r17_Scs30(DL_PPW_PeriodicityAndStartSlot_r17_Scs30& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n8;
    value.u.n8 = 0;
}

void BuildSample_DL_PPW_PeriodicityAndStartSlot_r17_Scs60(DL_PPW_PeriodicityAndStartSlot_r17_Scs60& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n16;
    value.u.n16 = 0;
}

void BuildSample_DL_PPW_PeriodicityAndStartSlot_r17_Scs120(DL_PPW_PeriodicityAndStartSlot_r17_Scs120& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n32;
    value.u.n32 = 0;
}

void BuildSample_DL_PPW_PeriodicityAndStartSlot_r17(DL_PPW_PeriodicityAndStartSlot_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs15;
    BuildSample_DL_PPW_PeriodicityAndStartSlot_r17_Scs15(value.u.scs15, depth + 1);
}

void BuildSample_DL_PPW_PreConfig_r17(DL_PPW_PreConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dl_PPW_ID_r17 = 0;
    BuildSample_DL_PPW_PeriodicityAndStartSlot_r17(value.dl_PPW_PeriodicityAndStartSlot_r17, depth + 1);
    value.length_r17 = 1;
}

void BuildSample_INT_ConfigurationPerServingCell(INT_ConfigurationPerServingCell& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servingCellId = 0;
    value.positionInDCI = 0;
}

void BuildSample_EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18(EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag_l839;
    value.u.l839 = 0;
}

void BuildSample_EarlyUL_SyncConfig_r18(EarlyUL_SyncConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_FrequencyInfoUL(value.frequencyInfoUL_r18, depth + 1);
    BuildSample_RACH_ConfigGeneric(value.rach_ConfigGeneric_r18, depth + 1);
    BuildSample_BWP(value.bwp_GenericParameters_r18, depth + 1);
}

void BuildSample_FeatureCombination_r17(FeatureCombination_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureCombinationPreambles_r17_GroupBconfigured_r17(FeatureCombinationPreambles_r17_GroupBconfigured_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ra_SizeGroupA_r17 = FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b56;
    value.messagePowerOffsetGroupB_r17 = FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17_minusinfinity;
    value.numberOfRA_PreamblesGroupA_r17 = 1;
}

void BuildSample_FeatureCombinationPreambles_r17(FeatureCombinationPreambles_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_FeatureCombination_r17(value.featureCombination_r17, depth + 1);
    value.startPreambleForThisPartition_r17 = 0;
    value.numberOfPreamblesPerSSB_ForThisPartition_r17 = 1;
}

void BuildSample_SliceInfoListDedicated_r17(SliceInfoListDedicated_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SliceInfoDedicated_r17*)std::malloc((std::size_t)value.count * sizeof(SliceInfoDedicated_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SliceInfoDedicated_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SliceInfoDedicated_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FreqPriorityDedicatedSlicing_r17(FreqPriorityDedicatedSlicing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dl_ExplicitCarrierFreq_r17 = 0;
}

void BuildSample_NSAG_IdentityInfo_r17(NSAG_IdentityInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nsag_ID_r17.bitLength = 8u;
    value.nsag_ID_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.nsag_ID_r17.bytes != nullptr) {
        std::memset(value.nsag_ID_r17.bytes, 0, 1u);
    }
}

void BuildSample_SliceInfoDedicated_r17(SliceInfoDedicated_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_NSAG_IdentityInfo_r17(value.nsag_IdentityInfo_r17, depth + 1);
}

void BuildSample_SliceInfoList_r17(SliceInfoList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SliceInfo_r17*)std::malloc((std::size_t)value.count * sizeof(SliceInfo_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SliceInfo_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SliceInfo_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FreqPrioritySlicing_r17(FreqPrioritySlicing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dl_ImplicitCarrierFreq_r17 = 0;
}

void BuildSample_SliceCellListNR_r17(SliceCellListNR_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PCI_Range(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SliceInfo_r17_SliceCellListNR_r17(SliceInfo_r17_SliceCellListNR_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SliceInfo_r17_SliceCellListNR_r17_Tag_sliceAllowedCellListNR_r17;
    BuildSample_SliceCellListNR_r17(value.u.sliceAllowedCellListNR_r17, depth + 1);
}

void BuildSample_SliceInfo_r17(SliceInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_NSAG_IdentityInfo_r17(value.nsag_IdentityInfo_r17, depth + 1);
}

void BuildSample_EUTRA_RSTD_Info(EUTRA_RSTD_Info& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq = 0;
    value.measPRS_Offset = 0;
}

void BuildSample_NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16(NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms20_r16;
    value.u.ms20_r16 = 0;
}

void BuildSample_NR_PRS_MeasurementInfo_r16(NR_PRS_MeasurementInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dl_PRS_PointA_r16 = 0;
    BuildSample_NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16(value.nr_MeasPRS_RepetitionAndOffset_r16, depth + 1);
    value.nr_MeasPRS_length_r16 = NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16_ms1dot5;
}

void BuildSample_LTE_NeighCellsCRS_AssistInfo_r17(LTE_NeighCellsCRS_AssistInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18(LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_shortBitmap;
    value.u.shortBitmap.bitLength = 4u;
    value.u.shortBitmap.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.shortBitmap.bytes != nullptr) {
        std::memset(value.u.shortBitmap.bytes, 0, 1u);
    }
}

void BuildSample_LTM_SSB_Config_r18(LTM_SSB_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb_Frequency_r18 = 0;
    value.subcarrierSpacing_r18 = SubcarrierSpacing_kHz15;
}

void BuildSample_LTM_TCI_Info_r18(LTM_TCI_Info_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_LTM_Candidate_r18(LTM_Candidate_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ltm_CandidateId_r18 = 1;
    if (depth < 2) {
        value.ltm_CandidateConfig_r18 = (RRCReconfiguration*)std::malloc(sizeof(RRCReconfiguration));
        if (value.ltm_CandidateConfig_r18 != nullptr) {
            BuildSample_RRCReconfiguration(*value.ltm_CandidateConfig_r18, depth + 1);
        }
    }
    if (depth < 2) {
        value.ltm_EarlyUL_SyncConfig_r18 = (EarlyUL_SyncConfig_r18*)std::malloc(sizeof(EarlyUL_SyncConfig_r18));
        if (value.ltm_EarlyUL_SyncConfig_r18 != nullptr) {
            BuildSample_EarlyUL_SyncConfig_r18(*value.ltm_EarlyUL_SyncConfig_r18, depth + 1);
        }
    }
    if (depth < 2) {
        value.ltm_EarlyUL_SyncConfigSUL_r18 = (EarlyUL_SyncConfig_r18*)std::malloc(sizeof(EarlyUL_SyncConfig_r18));
        if (value.ltm_EarlyUL_SyncConfigSUL_r18 != nullptr) {
            BuildSample_EarlyUL_SyncConfig_r18(*value.ltm_EarlyUL_SyncConfigSUL_r18, depth + 1);
        }
    }
}

void BuildSample_LTM_ReportContent_r18(LTM_ReportContent_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nrOfReportedCells_r18 = LTM_ReportContent_r18_NrOfReportedCells_r18_n1;
    value.nrOfReportedRS_PerCell_r18 = LTM_ReportContent_r18_NrOfReportedRS_PerCell_r18_n1;
}

void BuildSample_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18(LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CSI_ReportPeriodicityAndOffset(value.reportSlotConfig_r18, depth + 1);
    value.pucch_CSI_ResourceList_r18_count = 0u;
}

void BuildSample_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18(LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CSI_ReportPeriodicityAndOffset(value.reportSlotConfig_r18, depth + 1);
    value.pucch_CSI_ResourceList_r18_count = 0u;
}

void BuildSample_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18(LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CSI_ReportPeriodicityAndOffset(value.reportSlotConfig_r18, depth + 1);
    value.reportSlotOffsetList_r18_count = 0u;
    value.reportSlotOffsetListDCI_0_2_r18_count = 0u;
    value.reportSlotOffsetListDCI_0_1_r18_count = 0u;
    value.p0alpha = 0;
}

void BuildSample_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18(LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportSlotOffsetList_r18_count = 0u;
    value.reportSlotOffsetListDCI_0_2_r18_count = 0u;
    value.reportSlotOffsetListDCI_0_1_r18_count = 0u;
}

void BuildSample_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18(LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_periodic_r18;
    BuildSample_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18(value.u.periodic_r18, depth + 1);
}

void BuildSample_LTM_CSI_ReportConfig_r18(LTM_CSI_ReportConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ltm_CSI_ReportConfigId_r18 = 0;
    value.ltm_ResourcesForChannelMeasurement_r18 = 0;
    BuildSample_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18(value.ltm_ReportConfigType_r18, depth + 1);
    BuildSample_LTM_ReportContent_r18(value.ltm_ReportContent_r18, depth + 1);
}

void BuildSample_LTM_CSI_SSB_ResourceSet_r18(LTM_CSI_SSB_ResourceSet_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ltm_CSI_SSB_ResourceList_r18_count = 0u;
    value.ltm_CandidateIdList_r18_count = 0u;
}

void BuildSample_LTM_CSI_ResourceConfig_r18(LTM_CSI_ResourceConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ltm_CSI_ResourceConfigId_r18 = 0;
    BuildSample_LTM_CSI_SSB_ResourceSet_r18(value.ltm_CSI_SSB_ResourceSet_r18, depth + 1);
}

void BuildSample_MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17(MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag_g_RNTI;
    value.u.g_RNTI = 0;
}

void BuildSample_DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17(DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag_subMilliSeconds;
    value.u.subMilliSeconds = 1;
}

void BuildSample_DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17(DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms10;
    value.u.ms10 = 0;
}

void BuildSample_DRX_ConfigPTM_r17(DRX_ConfigPTM_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17(value.drx_onDurationTimerPTM_r17, depth + 1);
    value.drx_InactivityTimerPTM_r17 = DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms0;
    BuildSample_DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17(value.drx_LongCycleStartOffsetPTM_r17, depth + 1);
    value.drx_SlotOffsetPTM_r17 = 0;
}

void BuildSample_SetupRelease_DRX_ConfigPTM_r17(SetupRelease_DRX_ConfigPTM_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_DRX_ConfigPTM_r17_Tag_release;
}

void BuildSample_MBS_RNTI_SpecificConfig_r17(MBS_RNTI_SpecificConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mbs_RNTI_SpecificConfigId_r17 = 0;
    BuildSample_MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17(value.groupCommon_RNTI_r17, depth + 1);
}

void BuildSample_LCG_DSR_Config_r18(LCG_DSR_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.lcg_Id_r18 = 0;
    value.remainingTimeThreshold_r18 = 1;
}

void BuildSample_GapConfig_r17(GapConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measGapId_r17 = 1;
    value.gapType_r17 = GapConfig_r17_GapType_r17_perUE;
    value.gapOffset_r17 = 0;
    value.mgl_r17 = GapConfig_r17_Mgl_r17_ms1;
    value.mgrp_r17 = GapConfig_r17_Mgrp_r17_ms20;
    value.mgta_r17 = GapConfig_r17_Mgta_r17_ms0;
}

void BuildSample_PosGapConfig_r17(PosGapConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measPosPreConfigGapId_r17 = 1;
    value.gapOffset_r17 = 0;
    value.mgl_r17 = PosGapConfig_r17_Mgl_r17_ms1dot5;
    value.mgrp_r17 = PosGapConfig_r17_Mgrp_r17_ms20;
    value.mgta_r17 = PosGapConfig_r17_Mgta_r17_ms0;
    value.gapType_r17 = PosGapConfig_r17_GapType_r17_perUE;
}

void BuildSample_ValidityCellList(ValidityCellList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PCI_Range(value.items[i], depth + 1);
        }
    }
}

void BuildSample_ValidityArea_r16(ValidityArea_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq_r16 = 0;
}

void BuildSample_CellListNR_r16(CellListNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PCI_Range(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BeamMeasConfigIdle_NR_r16(BeamMeasConfigIdle_NR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportQuantityRS_Indexes_r16 = BeamMeasConfigIdle_NR_r16_ReportQuantityRS_Indexes_r16_rsrp;
    value.maxNrofRS_IndexesToReport_r16 = 1;
    value.includeBeamMeasurements_r16 = true;
}

void BuildSample_MeasIdleCarrierNR_r16_QualityThreshold_r16(MeasIdleCarrierNR_r16_QualityThreshold_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16(MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.deriveSSB_IndexFromCell_r16 = true;
}

void BuildSample_MeasIdleCarrierNR_r16(MeasIdleCarrierNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq_r16 = 0;
    value.ssbSubcarrierSpacing_r16 = SubcarrierSpacing_kHz15;
    value.reportQuantities_r16 = MeasIdleCarrierNR_r16_ReportQuantities_r16_rsrp;
}

void BuildSample_CellListEUTRA_r16(CellListEUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (EUTRA_PhysCellIdRange*)std::malloc((std::size_t)value.count * sizeof(EUTRA_PhysCellIdRange));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_PhysCellIdRange));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_EUTRA_PhysCellIdRange(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16(MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasIdleCarrierEUTRA_r16(MeasIdleCarrierEUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreqEUTRA_r16 = 0;
    value.allowedMeasBandwidth_r16 = EUTRA_AllowedMeasBandwidth_mbw6;
    value.reportQuantitiesEUTRA_r16 = MeasIdleCarrierEUTRA_r16_ReportQuantitiesEUTRA_r16_rsrp;
}

void BuildSample_MeasReselectionCarrierNR_r18(MeasReselectionCarrierNR_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq_r18 = 0;
}

void BuildSample_MeasIdToAddMod(MeasIdToAddMod& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measId = 1;
    value.measObjectId = 1;
    value.reportConfigId = 1;
}

void BuildSample_SRS_ResourceListConfigCLI_r16(SRS_ResourceListConfigCLI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SRS_ResourceConfigCLI_r16*)std::malloc((std::size_t)value.count * sizeof(SRS_ResourceConfigCLI_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRS_ResourceConfigCLI_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SRS_ResourceConfigCLI_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_SRS_ResourceListConfigCLI_r16(SetupRelease_SRS_ResourceListConfigCLI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SRS_ResourceListConfigCLI_r16_Tag_release;
}

void BuildSample_RSSI_ResourceListConfigCLI_r16(RSSI_ResourceListConfigCLI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (RSSI_ResourceConfigCLI_r16*)std::malloc((std::size_t)value.count * sizeof(RSSI_ResourceConfigCLI_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(RSSI_ResourceConfigCLI_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_RSSI_ResourceConfigCLI_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_RSSI_ResourceListConfigCLI_r16(SetupRelease_RSSI_ResourceListConfigCLI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag_release;
}

void BuildSample_CLI_ResourceConfig_r16(CLI_ResourceConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasObjectCLI_r16(MeasObjectCLI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CLI_ResourceConfig_r16(value.cli_ResourceConfig_r16, depth + 1);
}

void BuildSample_SRS_Resource_ExtGroup1_ResourceMapping_r16(SRS_Resource_ExtGroup1_ResourceMapping_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.startPosition_r16 = 0;
    value.nrofSymbols_r16 = SRS_Resource_ExtGroup1_ResourceMapping_r16_NrofSymbols_r16_n1;
    value.repetitionFactor_r16 = SRS_Resource_ExtGroup1_ResourceMapping_r16_RepetitionFactor_r16_n1;
}

void BuildSample_SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs(SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resourceId = 0;
    value.uplinkBWP = 0;
}

void BuildSample_SpatialRelationInfo_PDC_r17_ReferenceSignal(SpatialRelationInfo_PDC_r17_ReferenceSignal& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_SpatialRelationInfo_PDC_r17(SpatialRelationInfo_PDC_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SpatialRelationInfo_PDC_r17_ReferenceSignal(value.referenceSignal, depth + 1);
}

void BuildSample_SetupRelease_SpatialRelationInfo_PDC_r17(SetupRelease_SpatialRelationInfo_PDC_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SpatialRelationInfo_PDC_r17_Tag_release;
}

void BuildSample_SRS_Resource_ExtGroup2_ResourceMapping_r17(SRS_Resource_ExtGroup2_ResourceMapping_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.startPosition_r17 = 0;
    value.nrofSymbols_r17 = SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17_n1;
    value.repetitionFactor_r17 = SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n1;
}

void BuildSample_SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17(SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag_startRBIndexAndFreqScalingFactor2_r17;
    value.u.startRBIndexAndFreqScalingFactor2_r17 = 0;
}

void BuildSample_SRS_Resource_ExtGroup2_PartialFreqSounding_r17(SRS_Resource_ExtGroup2_PartialFreqSounding_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17(value.startRBIndexFScaling_r17, depth + 1);
}

void BuildSample_SRS_Resource_ExtGroup2_TransmissionComb_n8_r17(SRS_Resource_ExtGroup2_TransmissionComb_n8_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.combOffset_n8_r17 = 0;
    value.cyclicShift_n8_r17 = 0;
}

void BuildSample_SRS_Resource_ExtGroup2_Srs_TCI_State_r17(SRS_Resource_ExtGroup2_Srs_TCI_State_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag_srs_UL_TCI_State;
    value.u.srs_UL_TCI_State = 0;
}

void BuildSample_SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730(SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ServingCellAndBWP_Id_r17(value.cellAndBWP_r17, depth + 1);
}

void BuildSample_SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18(SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n4;
    value.u.transmissionComb_n4.bitLength = 4u;
    value.u.transmissionComb_n4.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.transmissionComb_n4.bytes != nullptr) {
        std::memset(value.u.transmissionComb_n4.bytes, 0, 1u);
    }
}

void BuildSample_SRS_Resource_ExtGroup4_CombOffsetHopping_r18(SRS_Resource_ExtGroup4_CombOffsetHopping_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18(SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n2;
    value.u.transmissionComb_n2.bitLength = 8u;
    value.u.transmissionComb_n2.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.transmissionComb_n2.bytes != nullptr) {
        std::memset(value.u.transmissionComb_n2.bytes, 0, 1u);
    }
}

void BuildSample_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18(SRS_Resource_ExtGroup4_CyclicShiftHopping_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_SpatialRelationInfo_ReferenceSignal_Srs(SRS_SpatialRelationInfo_ReferenceSignal_Srs& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resourceId = 0;
    value.uplinkBWP = 0;
}

void BuildSample_SRS_SpatialRelationInfo_ReferenceSignal(SRS_SpatialRelationInfo_ReferenceSignal& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_SpatialRelationInfo_ReferenceSignal_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_SRS_SpatialRelationInfo(SRS_SpatialRelationInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_SpatialRelationInfo_ReferenceSignal(value.referenceSignal, depth + 1);
}

void BuildSample_SRS_Resource_TransmissionComb_N2(SRS_Resource_TransmissionComb_N2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.combOffset_n2 = 0;
    value.cyclicShift_n2 = 0;
}

void BuildSample_SRS_Resource_TransmissionComb_N4(SRS_Resource_TransmissionComb_N4& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.combOffset_n4 = 0;
    value.cyclicShift_n4 = 0;
}

void BuildSample_SRS_Resource_TransmissionComb(SRS_Resource_TransmissionComb& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_Resource_TransmissionComb_Tag_n2;
    BuildSample_SRS_Resource_TransmissionComb_N2(value.u.n2, depth + 1);
}

void BuildSample_SRS_ResourceMapping(SRS_ResourceMapping& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.startPosition = 0;
    value.nrofSymbols = SRS_ResourceMapping_NrofSymbols_n1;
    value.repetitionFactor = SRS_ResourceMapping_RepetitionFactor_n1;
}

void BuildSample_SRS_Resource_FreqHopping(SRS_Resource_FreqHopping& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.c_SRS = 0;
    value.b_SRS = 0;
    value.b_hop = 0;
}

void BuildSample_SRS_ResourceType_Aperiodic(SRS_ResourceType_Aperiodic& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SRS_PeriodicityAndOffset(SRS_PeriodicityAndOffset& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_PeriodicityAndOffset_Tag_sl1;
}

void BuildSample_SRS_ResourceType_Semi_persistent(SRS_ResourceType_Semi_persistent& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_PeriodicityAndOffset(value.periodicityAndOffset_sp, depth + 1);
}

void BuildSample_SRS_ResourceType_Periodic(SRS_ResourceType_Periodic& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_PeriodicityAndOffset(value.periodicityAndOffset_p, depth + 1);
}

void BuildSample_SRS_ResourceType(SRS_ResourceType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_ResourceType_Tag_aperiodic;
    BuildSample_SRS_ResourceType_Aperiodic(value.u.aperiodic, depth + 1);
}

void BuildSample_SRS_Resource(SRS_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_ResourceId = 0;
    value.nrofSRS_Ports = SRS_Resource_NrofSRS_Ports_port1;
    BuildSample_SRS_Resource_TransmissionComb(value.transmissionComb, depth + 1);
    BuildSample_SRS_ResourceMapping(value.resourceMapping, depth + 1);
    value.freqDomainPosition = 0;
    value.freqDomainShift = 0;
    BuildSample_SRS_Resource_FreqHopping(value.freqHopping, depth + 1);
    value.groupOrSequenceHopping = SRS_Resource_GroupOrSequenceHopping_neither;
    BuildSample_SRS_ResourceType(value.resourceType, depth + 1);
    value.sequenceId = 0;
}

void BuildSample_SRS_ResourceConfigCLI_r16(SRS_ResourceConfigCLI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_Resource(value.srs_Resource_r16, depth + 1);
    value.srs_SCS_r16 = SubcarrierSpacing_kHz15;
    value.refBWP_r16 = 0;
}

void BuildSample_RSSI_PeriodicityAndOffset_r16(RSSI_PeriodicityAndOffset_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RSSI_PeriodicityAndOffset_r16_Tag_sl10;
    value.u.sl10 = 0;
}

void BuildSample_RSSI_ResourceConfigCLI_r16(RSSI_ResourceConfigCLI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rssi_ResourceId_r16 = 0;
    value.rssi_SCS_r16 = SubcarrierSpacing_kHz15;
    value.startPRB_r16 = 0;
    value.nrofPRBs_r16 = 4;
    value.startPosition_r16 = 0;
    value.nrofSymbols_r16 = 1;
    BuildSample_RSSI_PeriodicityAndOffset_r16(value.rssi_PeriodicityAndOffset_r16, depth + 1);
}

void BuildSample_EUTRA_CellIndexList(EUTRA_CellIndexList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (EUTRA_CellIndex*)std::malloc((std::size_t)value.count * sizeof(EUTRA_CellIndex));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_CellIndex));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_MeasObjectEUTRA(MeasObjectEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq = 0;
    value.allowedMeasBandwidth = EUTRA_AllowedMeasBandwidth_mbw6;
    value.eutra_PresenceAntennaPort1 = true;
    value.widebandRSRQ_Meas = true;
}

void BuildSample_EUTRA_Cell(EUTRA_Cell& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellIndexEUTRA = 1;
    value.physCellId = 0;
    value.cellIndividualOffset = EUTRA_Q_OffsetRange_dB_24;
}

void BuildSample_EUTRA_PhysCellIdRange(EUTRA_PhysCellIdRange& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.start = 0;
}

void BuildSample_EUTRA_ExcludedCell(EUTRA_ExcludedCell& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellIndexEUTRA = 1;
    BuildSample_EUTRA_PhysCellIdRange(value.physCellIdRange, depth + 1);
}

void BuildSample_CellsToAddModListExt_v1800(CellsToAddModListExt_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CellsToAddModExt_v1800*)std::malloc((std::size_t)value.count * sizeof(CellsToAddModExt_v1800));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CellsToAddModExt_v1800));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CellsToAddModExt_v1800(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SSB_MTC3List_r16(SSB_MTC3List_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SSB_MTC3_r16*)std::malloc((std::size_t)value.count * sizeof(SSB_MTC3_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SSB_MTC3_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SSB_MTC3_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17(RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tci_StateId_r17 = 0;
}

void BuildSample_RMTC_Config_r16(RMTC_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rmtc_Periodicity_r16 = RMTC_Config_r16_Rmtc_Periodicity_r16_ms40;
    value.measDurationSymbols_r16 = RMTC_Config_r16_MeasDurationSymbols_r16_sym1;
    value.rmtc_Frequency_r16 = 0;
    value.ref_SCS_CP_r16 = RMTC_Config_r16_Ref_SCS_CP_r16_kHz15;
}

void BuildSample_SetupRelease_RMTC_Config_r16(SetupRelease_RMTC_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RMTC_Config_r16_Tag_release;
}

void BuildSample_SetupRelease_T312_r16(SetupRelease_T312_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_T312_r16_Tag_release;
}

void BuildSample_CellsToAddModListExt_v1710(CellsToAddModListExt_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CellsToAddModExt_v1710*)std::malloc((std::size_t)value.count * sizeof(CellsToAddModExt_v1710));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CellsToAddModExt_v1710));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CellsToAddModExt_v1710(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SSB_PositionQCL_CellsToAddModList_r16(SSB_PositionQCL_CellsToAddModList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SSB_PositionQCL_CellsToAddMod_r16*)std::malloc((std::size_t)value.count * sizeof(SSB_PositionQCL_CellsToAddMod_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SSB_PositionQCL_CellsToAddMod_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SSB_PositionQCL_CellsToAddMod_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PCI_List(PCI_List& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PhysCellId*)std::malloc((std::size_t)value.count * sizeof(PhysCellId));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PhysCellId));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SSB_PositionQCL_CellList_r17(SSB_PositionQCL_CellList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SSB_PositionQCL_Cell_r17*)std::malloc((std::size_t)value.count * sizeof(SSB_PositionQCL_Cell_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SSB_PositionQCL_Cell_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SSB_PositionQCL_Cell_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_SSB_PositionQCL_CellList_r17(SetupRelease_SSB_PositionQCL_CellList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SSB_PositionQCL_CellList_r17_Tag_release;
}

void BuildSample_SSB_ToMeasureAltitudeBasedList_r18(SSB_ToMeasureAltitudeBasedList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SSB_ToMeasureAltitudeBased_r18*)std::malloc((std::size_t)value.count * sizeof(SSB_ToMeasureAltitudeBased_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SSB_ToMeasureAltitudeBased_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SSB_ToMeasureAltitudeBased_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18(SetupRelease_SSB_ToMeasureAltitudeBasedList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag_release;
}

void BuildSample_SetupRelease_SSB_ToMeasure(SetupRelease_SSB_ToMeasure& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SSB_ToMeasure_Tag_release;
}

void BuildSample_SSB_ConfigMobility(SSB_ConfigMobility& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.deriveSSB_IndexFromCell = true;
}

void BuildSample_SetupRelease_CSI_RS_ResourceConfigMobility(SetupRelease_CSI_RS_ResourceConfigMobility& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_CSI_RS_ResourceConfigMobility_Tag_release;
}

void BuildSample_ReferenceSignalConfig(ReferenceSignalConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Q_OffsetRangeList(Q_OffsetRangeList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rsrpOffsetSSB = Q_OffsetRange_dB0;
    value.rsrqOffsetSSB = Q_OffsetRange_dB0;
    value.sinrOffsetSSB = Q_OffsetRange_dB0;
    value.rsrpOffsetCSI_RS = Q_OffsetRange_dB0;
    value.rsrqOffsetCSI_RS = Q_OffsetRange_dB0;
    value.sinrOffsetCSI_RS = Q_OffsetRange_dB0;
}

void BuildSample_CellsToAddModList(CellsToAddModList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CellsToAddMod*)std::malloc((std::size_t)value.count * sizeof(CellsToAddMod));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CellsToAddMod));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CellsToAddMod(value.items[i], depth + 1);
        }
    }
}

void BuildSample_PCI_RangeIndexList(PCI_RangeIndexList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PCI_RangeIndex*)std::malloc((std::size_t)value.count * sizeof(PCI_RangeIndex));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_RangeIndex));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SSB_MTC2(SSB_MTC2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.periodicity = SSB_MTC2_Periodicity_sf5;
}

void BuildSample_MeasObjectNR(MeasObjectNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ReferenceSignalConfig(value.referenceSignalConfig, depth + 1);
    value.quantityConfigIndex = 1;
    BuildSample_Q_OffsetRangeList(value.offsetMO, depth + 1);
}

void BuildSample_CellsToAddMod(CellsToAddMod& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId = 0;
    BuildSample_Q_OffsetRangeList(value.cellIndividualOffset, depth + 1);
}

void BuildSample_CellsToAddModExt_v1710(CellsToAddModExt_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NTN_NeighbourCellInfo_r18(NTN_NeighbourCellInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_EpochTime_r17(value.epochTime_r18, depth + 1);
    BuildSample_EphemerisInfo_r17(value.ephemerisInfo_r18, depth + 1);
}

void BuildSample_CellsToAddModExt_v1800(CellsToAddModExt_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SSB_PositionQCL_CellsToAddMod_r16(SSB_PositionQCL_CellsToAddMod_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r16 = 0;
    value.ssb_PositionQCL_r16 = SSB_PositionQCL_Relation_r16_n1;
}

void BuildSample_SSB_PositionQCL_Cell_r17(SSB_PositionQCL_Cell_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r17 = 0;
    value.ssb_PositionQCL_r17 = SSB_PositionQCL_Relation_r17_n32;
}

void BuildSample_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18(SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SSB_ToMeasureAltitudeBased_r18(SSB_ToMeasureAltitudeBased_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18(value.altitudeRange_r18, depth + 1);
}

void BuildSample_Tx_PoolMeasList_r16(Tx_PoolMeasList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_ResourcePoolID_r16*)std::malloc((std::size_t)value.count * sizeof(SL_ResourcePoolID_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_ResourcePoolID_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_MeasObjectNR_SL_r16(MeasObjectNR_SL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasObjectNR_SL_r18(MeasObjectNR_SL_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_Frequency_r18 = 1;
}

void BuildSample_MeasObjectRxTxDiff_r17_Dl_Ref_r17(MeasObjectRxTxDiff_r17_Dl_Ref_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag_prs_Ref_r17;
}

void BuildSample_MeasObjectRxTxDiff_r17(MeasObjectRxTxDiff_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CellsToAddModListUTRA_FDD_r16(CellsToAddModListUTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (CellsToAddModUTRA_FDD_r16*)std::malloc((std::size_t)value.count * sizeof(CellsToAddModUTRA_FDD_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(CellsToAddModUTRA_FDD_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_CellsToAddModUTRA_FDD_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UTRA_FDD_CellIndexList_r16(UTRA_FDD_CellIndexList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (UTRA_FDD_CellIndex_r16*)std::malloc((std::size_t)value.count * sizeof(UTRA_FDD_CellIndex_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UTRA_FDD_CellIndex_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_MeasObjectUTRA_FDD_r16(MeasObjectUTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq_r16 = 0;
}

void BuildSample_SL_MeasObject_r16(SL_MeasObject_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.frequencyInfoSL_r16 = 0;
}

void BuildSample_MeasObjectToAddMod_MeasObject(MeasObjectToAddMod_MeasObject& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasObjectToAddMod_MeasObject_Tag_measObjectNR;
    BuildSample_MeasObjectNR(value.u.measObjectNR, depth + 1);
}

void BuildSample_MeasObjectToAddMod(MeasObjectToAddMod& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measObjectId = 1;
    BuildSample_MeasObjectToAddMod_MeasObject(value.measObject, depth + 1);
}

void BuildSample_CellsToAddModUTRA_FDD_r16(CellsToAddModUTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellIndexUTRA_FDD_r16 = 1;
    value.physCellId_r16 = 0;
}

void BuildSample_MeasResultCellListSFTD_EUTRA(MeasResultCellListSFTD_EUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MeasResultSFTD_EUTRA*)std::malloc((std::size_t)value.count * sizeof(MeasResultSFTD_EUTRA));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultSFTD_EUTRA));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MeasResultSFTD_EUTRA(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MeasResultNR_ExtGroup2_TriggeredEvent_r17(MeasResultNR_ExtGroup2_TriggeredEvent_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultNR_MeasResult_CellResults(MeasResultNR_MeasResult_CellResults& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultNR_MeasResult_RsIndexResults(MeasResultNR_MeasResult_RsIndexResults& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultNR_MeasResult(MeasResultNR_MeasResult& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultNR_MeasResult_CellResults(value.cellResults, depth + 1);
}

void BuildSample_MeasResultNR(MeasResultNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultNR_MeasResult(value.measResult, depth + 1);
}

void BuildSample_MeasResultServMO(MeasResultServMO& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servCellId = 0;
    BuildSample_MeasResultNR(value.measResultServingCell, depth + 1);
}

void BuildSample_MeasResultEUTRA(MeasResultEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.eutra_PhysCellId = 0;
    BuildSample_MeasQuantityResultsEUTRA(value.measResult, depth + 1);
}

void BuildSample_ResultsPerSSB_Index(ResultsPerSSB_Index& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb_Index = 0;
}

void BuildSample_ResultsPerCSI_RS_Index(ResultsPerCSI_RS_Index& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csi_RS_Index = 0;
}

void BuildSample_MeasResultUTRA_FDD_r16_MeasResult_r16(MeasResultUTRA_FDD_r16_MeasResult_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultUTRA_FDD_r16(MeasResultUTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r16 = 0;
    BuildSample_MeasResultUTRA_FDD_r16_MeasResult_r16(value.measResult_r16, depth + 1);
}

void BuildSample_MeasResultSRS_RSRP_r16(MeasResultSRS_RSRP_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_ResourceId_r16 = 0;
    value.srs_RSRP_Result_r16 = 0;
}

void BuildSample_MeasResultCLI_RSSI_r16(MeasResultCLI_RSSI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rssi_ResourceId_r16 = 0;
    value.cli_RSSI_Result_r16 = 0;
}

void BuildSample_UL_PDCP_DelayValueResult_r16(UL_PDCP_DelayValueResult_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drb_Id_r16 = 1;
    value.averageDelay_r16 = 0;
}

void BuildSample_UL_PDCP_ExcessDelayResult_r17(UL_PDCP_ExcessDelayResult_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drb_Id_r17 = 1;
    value.excessDelay_r17 = 0;
}

void BuildSample_MeasResult2EUTRA(MeasResult2EUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq = 0;
}

void BuildSample_MeasResult2NR(MeasResult2NR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultsPerCarrierIdleEUTRA_r16(MeasResultsPerCarrierIdleEUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreqEUTRA_r16 = 0;
    value.measResultsPerCellListIdleEUTRA_r16_count = 0u;
}

void BuildSample_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16(MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultsPerCellIdleEUTRA_r16(MeasResultsPerCellIdleEUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.eutra_PhysCellId_r16 = 0;
    BuildSample_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16(value.measIdleResultEUTRA_r16, depth + 1);
}

void BuildSample_MeasResultsPerCarrierIdleNR_r16(MeasResultsPerCarrierIdleNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreq_r16 = 0;
    value.measResultsPerCellListIdleNR_r16_count = 0u;
}

void BuildSample_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16(MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasResultsPerCellIdleNR_r16(MeasResultsPerCellIdleNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r16 = 0;
    BuildSample_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16(value.measIdleResultNR_r16, depth + 1);
}

void BuildSample_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16(ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ResultsPerSSB_IndexIdle_r16(ResultsPerSSB_IndexIdle_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb_Index_r16 = 0;
}

void BuildSample_MeasResultSCG_Failure(MeasResultSCG_Failure& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasResultList2NR(value.measResultPerMOList, depth + 1);
}

void BuildSample_MeasResultCBR_NR_r16(MeasResultCBR_NR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_poolReportIdentity_r16 = 1;
    value.sl_CBR_ResultsNR_r16 = 0;
}

void BuildSample_MeasTriggerQuantityEUTRA(MeasTriggerQuantityEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasTriggerQuantityEUTRA_Tag_rsrp;
    value.u.rsrp = 0;
}

void BuildSample_NR_NS_PmaxList(NR_NS_PmaxList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NR_NS_PmaxValue*)std::malloc((std::size_t)value.count * sizeof(NR_NS_PmaxValue));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_NS_PmaxValue));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NR_NS_PmaxValue(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NR_MultiBandInfo(NR_MultiBandInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NR_NS_PmaxList_v1760(NR_NS_PmaxList_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NR_NS_PmaxValue_v1760*)std::malloc((std::size_t)value.count * sizeof(NR_NS_PmaxValue_v1760));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_NS_PmaxValue_v1760));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NR_NS_PmaxValue_v1760(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NR_MultiBandInfo_v1760(NR_MultiBandInfo_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NR_NS_PmaxListAerial_r18(NR_NS_PmaxListAerial_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (NR_NS_PmaxValueAerial_r18*)std::malloc((std::size_t)value.count * sizeof(NR_NS_PmaxValueAerial_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_NS_PmaxValueAerial_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_NR_NS_PmaxValueAerial_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_NR_MultiBandInfoAerial_r18(NR_MultiBandInfoAerial_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MUSIM_Gap_r17(MUSIM_Gap_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.musim_GapId_r17 = 0;
    BuildSample_MUSIM_GapInfo_r17(value.musim_GapInfo_r17, depth + 1);
}

void BuildSample_SL_RemoteUE_RB_Identity_r17(SL_RemoteUE_RB_Identity_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_RemoteUE_RB_Identity_r17_Tag_srb_Identity_r17;
    value.u.srb_Identity_r17 = 0;
}

void BuildSample_N3C_MappingConfig_r18(N3C_MappingConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_RemoteUE_RB_Identity_r17(value.n3c_RemoteUE_RB_Identity_r18, depth + 1);
    value.n3c_RLC_ChannelUu_r18 = 1;
}

void BuildSample_NCR_AperiodicFwdTimeResource_r18(NCR_AperiodicFwdTimeResource_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.aperiodicFwdTimeRsrcId_r18 = 0;
    value.slotOffsetAperiodic_r18 = 0;
    value.symbolOffset_r18 = 0;
    value.durationInSymbols_r18 = 1;
}

void BuildSample_NCR_SlotPeriodicityAndSlotOffset_r18(NCR_SlotPeriodicityAndSlotOffset_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1;
}

void BuildSample_NCR_MsPeriodicityAndSlotOffset_r18(NCR_MsPeriodicityAndSlotOffset_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1;
    value.u.ms1 = 0;
}

void BuildSample_NCR_PeriodicityAndOffset_r18(NCR_PeriodicityAndOffset_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NCR_PeriodicityAndOffset_r18_Tag_slot;
    BuildSample_NCR_SlotPeriodicityAndSlotOffset_r18(value.u.slot, depth + 1);
}

void BuildSample_NCR_PeriodicFwdResourceSet_r18(NCR_PeriodicFwdResourceSet_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.periodicFwdRsrcSetId_r18 = 0;
}

void BuildSample_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18(NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_NCR_PeriodicityAndOffset_r18(value.periodicityAndOffset_r18, depth + 1);
    value.symbolOffset_r18 = 0;
    value.durationInSymbols_r18 = 1;
}

void BuildSample_NCR_PeriodicFwdResource_r18(NCR_PeriodicFwdResource_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.periodicFwdRsrcId_r18 = 0;
    value.beamIndex_r18 = 0;
    BuildSample_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18(value.periodicTimeRsrc_r18, depth + 1);
}

void BuildSample_NCR_SemiPersistentFwdResourceSet_r18(NCR_SemiPersistentFwdResourceSet_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.semiPersistentFwdRsrcSetId_r18 = 0;
}

void BuildSample_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18(NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_NCR_PeriodicityAndOffset_r18(value.periodicityAndOffset_r18, depth + 1);
    value.symbolOffset_r18 = 0;
    value.durationInSymbols_r18 = 1;
}

void BuildSample_NCR_SemiPersistentFwdResource_r18(NCR_SemiPersistentFwdResource_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.semiPersistentFwdRsrcId_r18 = 0;
    value.beamIndex_r18 = 0;
    BuildSample_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18(value.semiPersistentTimeRsrc_r18, depth + 1);
}

void BuildSample_NeedForGapsIntraFreq_r16(NeedForGapsIntraFreq_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servCellId_r16 = 0;
    value.gapIndicationIntra_r16 = NeedForGapsIntraFreq_r16_GapIndicationIntra_r16_gap;
}

void BuildSample_NeedForGapsNR_r16(NeedForGapsNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandNR_r16 = 1;
    value.gapIndication_r16 = NeedForGapsNR_r16_GapIndication_r16_gap;
}

void BuildSample_NeedForNCSG_EUTRA_r17(NeedForNCSG_EUTRA_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandEUTRA_r17 = 1;
    value.gapIndication_r17 = NeedForNCSG_EUTRA_r17_GapIndication_r17_gap;
}

void BuildSample_NeedForNCSG_IntraFreq_r17(NeedForNCSG_IntraFreq_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servCellId_r17 = 0;
    value.gapIndicationIntra_r17 = NeedForNCSG_IntraFreq_r17_GapIndicationIntra_r17_gap;
}

void BuildSample_NeedForNCSG_NR_r17(NeedForNCSG_NR_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandNR_r17 = 1;
    value.gapIndication_r17 = NeedForNCSG_NR_r17_GapIndication_r17_gap;
}

void BuildSample_NeedForInterruptionNR_r18(NeedForInterruptionNR_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NPN_Identity_r16_Pni_npn_r16(NPN_Identity_r16_Pni_npn_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_Identity(value.plmn_Identity_r16, depth + 1);
    value.cag_IdentityList_r16_count = 0u;
}

void BuildSample_NPN_Identity_r16_Snpn_r16(NPN_Identity_r16_Snpn_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_Identity(value.plmn_Identity_r16, depth + 1);
    value.nid_List_r16_count = 0u;
}

void BuildSample_NPN_Identity_r16(NPN_Identity_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NPN_Identity_r16_Tag_pni_npn_r16;
    BuildSample_NPN_Identity_r16_Pni_npn_r16(value.u.pni_npn_r16, depth + 1);
}

void BuildSample_CAG_IdentityInfo_r16(CAG_IdentityInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cag_Identity_r16.bitLength = 32u;
    value.cag_Identity_r16.bytes = (std::uint8_t*)std::malloc(4u);
    if (value.cag_Identity_r16.bytes != nullptr) {
        std::memset(value.cag_Identity_r16.bytes, 0, 4u);
    }
}

void BuildSample_NPN_IdentityInfo_r16(NPN_IdentityInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.npn_IdentityList_r16_count = 0u;
    value.trackingAreaCode_r16.bitLength = 24u;
    value.trackingAreaCode_r16.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.trackingAreaCode_r16.bytes != nullptr) {
        std::memset(value.trackingAreaCode_r16.bytes, 0, 3u);
    }
    value.cellIdentity_r16.bitLength = 36u;
    value.cellIdentity_r16.bytes = (std::uint8_t*)std::malloc(5u);
    if (value.cellIdentity_r16.bytes != nullptr) {
        std::memset(value.cellIdentity_r16.bytes, 0, 5u);
    }
    value.cellReservedForOperatorUse_r16 = NPN_IdentityInfo_r16_CellReservedForOperatorUse_r16_reserved;
}

void BuildSample_DL_PRS_QCL_Info_r17_Ssb_r17(DL_PRS_QCL_Info_r17_Ssb_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb_Index_r17 = 0;
    value.rs_Type_r17 = DL_PRS_QCL_Info_r17_Ssb_r17_Rs_Type_r17_typeC;
}

void BuildSample_DL_PRS_QCL_Info_r17_Dl_PRS_r17(DL_PRS_QCL_Info_r17_Dl_PRS_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.qcl_DL_PRS_ResourceID_r17 = 0;
}

void BuildSample_DL_PRS_QCL_Info_r17(DL_PRS_QCL_Info_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DL_PRS_QCL_Info_r17_Tag_ssb_r17;
    BuildSample_DL_PRS_QCL_Info_r17_Ssb_r17(value.u.ssb_r17, depth + 1);
}

void BuildSample_NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17(NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n2_r17;
    value.u.n2_r17 = 0;
}

void BuildSample_NR_DL_PRS_Resource_r17(NR_DL_PRS_Resource_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nr_DL_PRS_ResourceID_r17 = 0;
    value.dl_PRS_SequenceID_r17 = 0;
    BuildSample_NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17(value.dl_PRS_CombSizeN_AndReOffset_r17, depth + 1);
    value.dl_PRS_ResourceSlotOffset_r17 = 0;
    value.dl_PRS_ResourceSymbolOffset_r17 = 0;
}

void BuildSample_NR_NS_PmaxValue(NR_NS_PmaxValue& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.additionalSpectrumEmission = 0;
}

void BuildSample_NR_NS_PmaxValue_v1760(NR_NS_PmaxValue_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NR_NS_PmaxValueAerial_r18(NR_NS_PmaxValueAerial_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.additionalSpectrumEmission_r18 = 0;
}

void BuildSample_NZP_CSI_RS_Resource(NZP_CSI_RS_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nzp_CSI_RS_ResourceId = 0;
    BuildSample_CSI_RS_ResourceMapping(value.resourceMapping, depth + 1);
    value.powerControlOffset = -8;
    value.scramblingID = 0;
}

void BuildSample_NZP_CSI_RS_Pairing_r17(NZP_CSI_RS_Pairing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nzp_CSI_RS_ResourceId1_r17 = 1;
    value.nzp_CSI_RS_ResourceId2_r17 = 1;
}

void BuildSample_CMRGroupingAndPairing_r17(CMRGroupingAndPairing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nrofResourcesGroup1_r17 = 1;
}

void BuildSample_NZP_CSI_RS_ResourceSet(NZP_CSI_RS_ResourceSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nzp_CSI_ResourceSetId = 0;
    value.nzp_CSI_RS_Resources_count = 0u;
}

void BuildSample_PathlossReferenceRS_r17_ReferenceSignal_r17(PathlossReferenceRS_r17_ReferenceSignal_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PathlossReferenceRS_r17_ReferenceSignal_r17_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_PathlossReferenceRS_r17(PathlossReferenceRS_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pathlossReferenceRS_Id_r17 = 0;
    BuildSample_PathlossReferenceRS_r17_ReferenceSignal_r17(value.referenceSignal_r17, depth + 1);
}

void BuildSample_PCI_RangeElement(PCI_RangeElement& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pci_RangeIndex = 1;
    BuildSample_PCI_Range(value.pci_Range, depth + 1);
}

void BuildSample_CellGroupForSwitch_r16(CellGroupForSwitch_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (ServCellIndex*)std::malloc((std::size_t)value.count * sizeof(ServCellIndex));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(ServCellIndex));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDSCH_TimeDomainResourceAllocation(PDSCH_TimeDomainResourceAllocation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mappingType = PDSCH_TimeDomainResourceAllocation_MappingType_typeA;
    value.startSymbolAndLength = 0;
}

void BuildSample_PDSCH_TimeDomainResourceAllocation_r16(PDSCH_TimeDomainResourceAllocation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mappingType_r16 = PDSCH_TimeDomainResourceAllocation_r16_MappingType_r16_typeA;
    value.startSymbolAndLength_r16 = 0;
}

void BuildSample_MultiPDSCH_TDRA_r17(MultiPDSCH_TDRA_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdsch_TDRA_List_r17_count = 0u;
}

void BuildSample_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC(PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ(PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BitString*)std::malloc((std::size_t)value.count * sizeof(BitString));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BitString));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i].bitLength = 16u;
            value.items[i].bytes = (std::uint8_t*)std::malloc(2u);
            if (value.items[i].bytes != nullptr) {
                std::memset(value.items[i].bytes, 0, 2u);
            }
        }
    }
}

void BuildSample_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17(PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag_perCC;
    BuildSample_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC(value.u.perCC, depth + 1);
}

void BuildSample_PDSCH_HARQ_ACK_EnhType3_r17(PDSCH_HARQ_ACK_EnhType3_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdsch_HARQ_ACK_EnhType3Index_r17 = 0;
    BuildSample_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17(value.applicable_r17, depth + 1);
}

void BuildSample_PLMN_IdentityInfo(PLMN_IdentityInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.plmn_IdentityList_count = 0u;
    value.cellIdentity.bitLength = 36u;
    value.cellIdentity.bytes = (std::uint8_t*)std::malloc(5u);
    if (value.cellIdentity.bytes != nullptr) {
        std::memset(value.cellIdentity.bytes, 0, 5u);
    }
    value.cellReservedForOperatorUse = PLMN_IdentityInfo_CellReservedForOperatorUse_reserved;
}

void BuildSample_PUCCH_ResourceSet(PUCCH_ResourceSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_ResourceSetId = 0;
    value.resourceList_count = 0u;
}

void BuildSample_PUCCH_format0(PUCCH_format0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.initialCyclicShift = 0;
    value.nrofSymbols = 1;
    value.startingSymbolIndex = 0;
}

void BuildSample_PUCCH_format1(PUCCH_format1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.initialCyclicShift = 0;
    value.nrofSymbols = 4;
    value.startingSymbolIndex = 0;
    value.timeDomainOCC = 0;
}

void BuildSample_PUCCH_format2(PUCCH_format2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nrofPRBs = 1;
    value.nrofSymbols = 1;
    value.startingSymbolIndex = 0;
}

void BuildSample_PUCCH_format3(PUCCH_format3& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nrofPRBs = 1;
    value.nrofSymbols = 4;
    value.startingSymbolIndex = 0;
}

void BuildSample_PUCCH_format4(PUCCH_format4& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nrofSymbols = 4;
    value.occ_Length = PUCCH_format4_Occ_Length_n2;
    value.occ_Index = PUCCH_format4_Occ_Index_n0;
    value.startingSymbolIndex = 0;
}

void BuildSample_PUCCH_Resource_Format(PUCCH_Resource_Format& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PUCCH_Resource_Format_Tag_format0;
    BuildSample_PUCCH_format0(value.u.format0, depth + 1);
}

void BuildSample_PUCCH_Resource(PUCCH_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_ResourceId = 0;
    value.startingPRB = 0;
    BuildSample_PUCCH_Resource_Format(value.format, depth + 1);
}

void BuildSample_PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700(PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nrofPRBs_r17 = 1;
}

void BuildSample_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16(PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag_scs15;
    value.u.scs15 = 0;
}

void BuildSample_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16(PUCCH_ResourceExt_v1610_InterlaceAllocation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rb_SetIndex_r16 = 0;
    BuildSample_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16(value.interlace0_r16, depth + 1);
}

void BuildSample_PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610(PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PUCCH_ResourceExt_v1610_Format_v1610(PUCCH_ResourceExt_v1610_Format_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PUCCH_ResourceExt_v1610_Format_v1610_Tag_interlace1_v1610;
    value.u.interlace1_v1610 = 0;
}

void BuildSample_PUCCH_ResourceExt_v1610(PUCCH_ResourceExt_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PUCCH_ResourceGroup_r16(PUCCH_ResourceGroup_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_ResourceGroupId_r16 = 0;
    value.resourcePerGroupList_r16_count = 0u;
}

void BuildSample_PUCCH_CSI_Resource(PUCCH_CSI_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.uplinkBandwidthPartId = 0;
    value.pucch_Resource = 0;
}

void BuildSample_P0_PUCCH(P0_PUCCH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.p0_PUCCH_Id = 1;
    value.p0_PUCCH_Value = -16;
}

void BuildSample_PUCCH_PathlossReferenceRS_ReferenceSignal(PUCCH_PathlossReferenceRS_ReferenceSignal& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PUCCH_PathlossReferenceRS_ReferenceSignal_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_PUCCH_PathlossReferenceRS(PUCCH_PathlossReferenceRS& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_PathlossReferenceRS_Id = 0;
    BuildSample_PUCCH_PathlossReferenceRS_ReferenceSignal(value.referenceSignal, depth + 1);
}

void BuildSample_PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16(PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_ssb_Index_r16;
    value.u.ssb_Index_r16 = 0;
}

void BuildSample_PUCCH_PathlossReferenceRS_r16(PUCCH_PathlossReferenceRS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_PathlossReferenceRS_Id_r16 = 4;
    BuildSample_PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16(value.referenceSignal_r16, depth + 1);
}

void BuildSample_PUCCH_PowerControlSetInfo_r17(PUCCH_PowerControlSetInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_PowerControlSetInfoId_r17 = 1;
    value.p0_PUCCH_Id_r17 = 1;
    value.pucch_ClosedLoopIndex_r17 = PUCCH_PowerControlSetInfo_r17_Pucch_ClosedLoopIndex_r17_i0;
    value.pucch_PathlossReferenceRS_Id_r17 = 0;
}

void BuildSample_PUCCH_SRS(PUCCH_SRS& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resource = 0;
    value.uplinkBWP = 0;
}

void BuildSample_PUCCH_SpatialRelationInfo_ReferenceSignal(PUCCH_SpatialRelationInfo_ReferenceSignal& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_PUCCH_SpatialRelationInfo(PUCCH_SpatialRelationInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_SpatialRelationInfoId = 1;
    BuildSample_PUCCH_SpatialRelationInfo_ReferenceSignal(value.referenceSignal, depth + 1);
    value.pucch_PathlossReferenceRS_Id = 0;
    value.p0_PUCCH_Id = 1;
    value.closedLoopIndex = PUCCH_SpatialRelationInfo_ClosedLoopIndex_i0;
}

void BuildSample_PUCCH_SpatialRelationInfoExt_r16(PUCCH_SpatialRelationInfoExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16(UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 2u;
    value.items = (BetaOffsets*)std::malloc((std::size_t)value.count * sizeof(BetaOffsets));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsets));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BetaOffsets(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16(UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 4u;
    value.items = (BetaOffsets*)std::malloc((std::size_t)value.count * sizeof(BetaOffsets));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsets));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BetaOffsets(value.items[i], depth + 1);
        }
    }
}

void BuildSample_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16(UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag_oneBit_r16;
    BuildSample_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16(value.u.oneBit_r16, depth + 1);
}

void BuildSample_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16(UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag_dynamicDCI_0_2_r16;
    BuildSample_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16(value.u.dynamicDCI_0_2_r16, depth + 1);
}

void BuildSample_UCI_OnPUSCH_DCI_0_2_r16(UCI_OnPUSCH_DCI_0_2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.scalingDCI_0_2_r16 = UCI_OnPUSCH_DCI_0_2_r16_ScalingDCI_0_2_r16_f0p5;
}

void BuildSample_MPE_Resource_r17_Mpe_ReferenceSignal_r17(MPE_Resource_r17_Mpe_ReferenceSignal_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag_csi_RS_Resource_r17;
    value.u.csi_RS_Resource_r17 = 0;
}

void BuildSample_MPE_Resource_r17(MPE_Resource_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mpe_ResourceId_r17 = 1;
    BuildSample_MPE_Resource_r17_Mpe_ReferenceSignal_r17(value.mpe_ReferenceSignal_r17, depth + 1);
}

void BuildSample_P0_PUSCH_AlphaSet(P0_PUSCH_AlphaSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.p0_PUSCH_AlphaSetId = 0;
}

void BuildSample_PUSCH_PathlossReferenceRS_ReferenceSignal(PUSCH_PathlossReferenceRS_ReferenceSignal& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PUSCH_PathlossReferenceRS_ReferenceSignal_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_PUSCH_PathlossReferenceRS(PUSCH_PathlossReferenceRS& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pusch_PathlossReferenceRS_Id = 0;
    BuildSample_PUSCH_PathlossReferenceRS_ReferenceSignal(value.referenceSignal, depth + 1);
}

void BuildSample_PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16(PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_ssb_Index_r16;
    value.u.ssb_Index_r16 = 0;
}

void BuildSample_PUSCH_PathlossReferenceRS_r16(PUSCH_PathlossReferenceRS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pusch_PathlossReferenceRS_Id_r16 = 4;
    BuildSample_PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16(value.referenceSignal_r16, depth + 1);
}

void BuildSample_DummyPathlossReferenceRS_v1710(DummyPathlossReferenceRS_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pusch_PathlossReferenceRS_Id_r17 = 0;
}

void BuildSample_SRI_PUSCH_PowerControl(SRI_PUSCH_PowerControl& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sri_PUSCH_PowerControlId = 0;
    value.sri_PUSCH_PathlossReferenceRS_Id = 0;
    value.sri_P0_PUSCH_AlphaSetId = 0;
    value.sri_PUSCH_ClosedLoopIndex = SRI_PUSCH_PowerControl_Sri_PUSCH_ClosedLoopIndex_i0;
}

void BuildSample_P0_PUSCH_Set_r16(P0_PUSCH_Set_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.p0_PUSCH_SetId_r16 = 0;
}

void BuildSample_PUSCH_TimeDomainResourceAllocation(PUSCH_TimeDomainResourceAllocation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mappingType = PUSCH_TimeDomainResourceAllocation_MappingType_typeA;
    value.startSymbolAndLength = 0;
}

void BuildSample_PUSCH_TimeDomainResourceAllocation_r16(PUSCH_TimeDomainResourceAllocation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.puschAllocationList_r16_count = 0u;
}

void BuildSample_PUSCH_Allocation_r16(PUSCH_Allocation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_QuantityConfigRS(QuantityConfigRS& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_FilterConfig(value.ssb_FilterConfig, depth + 1);
    BuildSample_FilterConfig(value.csi_RS_FilterConfig, depth + 1);
}

void BuildSample_QuantityConfigNR(QuantityConfigNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_QuantityConfigRS(value.quantityConfigCell, depth + 1);
}

void BuildSample_CFRA_SSB_Resource(CFRA_SSB_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb = 0;
    value.ra_PreambleIndex = 0;
}

void BuildSample_CFRA_CSIRS_Resource(CFRA_CSIRS_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csi_RS = 0;
    value.ra_OccasionList_count = 0u;
    value.ra_PreambleIndex = 0;
}

void BuildSample_RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18(RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag_l839;
    value.u.l839 = 0;
}

void BuildSample_RACH_ConfigTwoTA_r18(RACH_ConfigTwoTA_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rach_ConfigTwoTAIndex_r18 = 1;
    BuildSample_RACH_ConfigGeneric(value.rach_ConfigGeneric_r18, depth + 1);
    BuildSample_RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18(value.prach_RootSequenceIndex_r18, depth + 1);
}

void BuildSample_RA_PrioritizationSliceInfo_r17(RA_PrioritizationSliceInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.nsag_ID_List_r17_count = 0u;
    BuildSample_RA_Prioritization(value.ra_Prioritization_r17, depth + 1);
}

void BuildSample_SDAP_Config(SDAP_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdu_Session = 0;
    value.sdap_HeaderDL = SDAP_Config_Sdap_HeaderDL_present;
    value.sdap_HeaderUL = SDAP_Config_Sdap_HeaderUL_present;
    value.defaultDRB = true;
}

void BuildSample_DRB_ToAddMod_CnAssociation(DRB_ToAddMod_CnAssociation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DRB_ToAddMod_CnAssociation_Tag_eps_BearerIdentity;
    value.u.eps_BearerIdentity = 0;
}

void BuildSample_DRB_ToAddMod(DRB_ToAddMod& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drb_Identity = 1;
}

void BuildSample_TMGI_r17_Plmn_Id_r17(TMGI_r17_Plmn_Id_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = TMGI_r17_Plmn_Id_r17_Tag_plmn_Index;
    value.u.plmn_Index = 1;
}

void BuildSample_TMGI_r17(TMGI_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_TMGI_r17_Plmn_Id_r17(value.plmn_Id_r17, depth + 1);
    value.serviceId_r17.length = 3u;
    value.serviceId_r17.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.serviceId_r17.bytes != nullptr) {
        std::memset(value.serviceId_r17.bytes, 0, 3u);
    }
}

void BuildSample_MRB_ToAddMod_r17(MRB_ToAddMod_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mrb_Identity_r17 = 1;
}

void BuildSample_RadioLinkMonitoringRS_DetectionResource(RadioLinkMonitoringRS_DetectionResource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RadioLinkMonitoringRS_DetectionResource_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_RadioLinkMonitoringRS(RadioLinkMonitoringRS& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.radioLinkMonitoringRS_Id = 0;
    value.purpose = RadioLinkMonitoringRS_Purpose_beamFailure;
    BuildSample_RadioLinkMonitoringRS_DetectionResource(value.detectionResource, depth + 1);
}

void BuildSample_BeamLinkMonitoringRS_r17_DetectionResource_r17(BeamLinkMonitoringRS_r17_DetectionResource_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_BeamLinkMonitoringRS_r17(BeamLinkMonitoringRS_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.beamLinkMonitoringRS_Id_r17 = 0;
    BuildSample_BeamLinkMonitoringRS_r17_DetectionResource_r17(value.detectionResource_r17, depth + 1);
}

void BuildSample_RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock(RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag_oneSlot;
    value.u.oneSlot.bitLength = 14u;
    value.u.oneSlot.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.u.oneSlot.bytes != nullptr) {
        std::memset(value.u.oneSlot.bytes, 0, 2u);
    }
}

void BuildSample_RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern(RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n2;
    value.u.n2.bitLength = 2u;
    value.u.n2.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.n2.bytes != nullptr) {
        std::memset(value.u.n2.bytes, 0, 1u);
    }
}

void BuildSample_RateMatchPattern_PatternType_Bitmaps(RateMatchPattern_PatternType_Bitmaps& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.resourceBlocks.bitLength = 275u;
    value.resourceBlocks.bytes = (std::uint8_t*)std::malloc(35u);
    if (value.resourceBlocks.bytes != nullptr) {
        std::memset(value.resourceBlocks.bytes, 0, 35u);
    }
    BuildSample_RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock(value.symbolsInResourceBlock, depth + 1);
}

void BuildSample_RateMatchPattern_PatternType(RateMatchPattern_PatternType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RateMatchPattern_PatternType_Tag_bitmaps;
    BuildSample_RateMatchPattern_PatternType_Bitmaps(value.u.bitmaps, depth + 1);
}

void BuildSample_RateMatchPattern(RateMatchPattern& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rateMatchPatternId = 0;
    BuildSample_RateMatchPattern_PatternType(value.patternType, depth + 1);
    value.dummy = RateMatchPattern_Dummy_dynamic;
}

void BuildSample_ReportCGI_EUTRA(ReportCGI_EUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellForWhichToReportCGI = 0;
}

void BuildSample_ReportSFTD_EUTRA(ReportSFTD_EUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportSFTD_Meas = true;
    value.reportRSRP = true;
}

void BuildSample_MeasReportQuantityUTRA_FDD_r16(MeasReportQuantityUTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cpich_RSCP = true;
    value.cpich_EcN0 = true;
}

void BuildSample_SL_MeasReportQuantity_r16(SL_MeasReportQuantity_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_MeasReportQuantity_r16_Tag_sl_RSRP_r16;
    value.u.sl_RSRP_r16 = true;
}

void BuildSample_MeasReportQuantity(MeasReportQuantity& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rsrp = true;
    value.rsrq = true;
    value.sinr = true;
}

void BuildSample_EventTriggerConfigInterRAT_EventId_EventB1(EventTriggerConfigInterRAT_EventId_EventB1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantityEUTRA(value.b1_ThresholdEUTRA, depth + 1);
    value.reportOnLeave = true;
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfigInterRAT_EventId_EventB2(EventTriggerConfigInterRAT_EventId_EventB2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.b2_Threshold1, depth + 1);
    BuildSample_MeasTriggerQuantityEUTRA(value.b2_Threshold2EUTRA, depth + 1);
    value.reportOnLeave = true;
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
}

void BuildSample_MeasTriggerQuantityUTRA_FDD_r16(MeasTriggerQuantityUTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasTriggerQuantityUTRA_FDD_r16_Tag_utra_FDD_RSCP_r16;
    value.u.utra_FDD_RSCP_r16 = -5;
}

void BuildSample_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16(EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantityUTRA_FDD_r16(value.b1_ThresholdUTRA_FDD_r16, depth + 1);
    value.reportOnLeave_r16 = true;
    value.hysteresis_r16 = 0;
    value.timeToTrigger_r16 = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16(EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.b2_Threshold1_r16, depth + 1);
    BuildSample_MeasTriggerQuantityUTRA_FDD_r16(value.b2_Threshold2UTRA_FDD_r16, depth + 1);
    value.reportOnLeave_r16 = true;
    value.hysteresis_r16 = 0;
    value.timeToTrigger_r16 = TimeToTrigger_ms0;
}

void BuildSample_SL_MeasTriggerQuantity_r16(SL_MeasTriggerQuantity_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_MeasTriggerQuantity_r16_Tag_sl_RSRP_r16;
    value.u.sl_RSRP_r16 = 0;
}

void BuildSample_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17(EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.y1_Threshold1_r17, depth + 1);
    BuildSample_SL_MeasTriggerQuantity_r16(value.y1_Threshold2_Relay_r17, depth + 1);
    value.reportOnLeave_r17 = true;
    value.hysteresis_r17 = 0;
    value.timeToTrigger_r17 = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17(EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_MeasTriggerQuantity_r16(value.y2_Threshold_Relay_r17, depth + 1);
    value.reportOnLeave_r17 = true;
    value.hysteresis_r17 = 0;
    value.timeToTrigger_r17 = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18(EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_MeasTriggerQuantity_r16(value.sl_RSRP_r18, depth + 1);
}

void BuildSample_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18(EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18(value.z1_Threshold1_Relay_r18, depth + 1);
    BuildSample_SL_MeasTriggerQuantity_r16(value.z1_Threshold2_Relay_r18, depth + 1);
    value.reportOnLeave_r18 = true;
    value.hysteresis_r18 = 0;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfigInterRAT_EventId(EventTriggerConfigInterRAT_EventId& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = EventTriggerConfigInterRAT_EventId_Tag_eventB1;
    BuildSample_EventTriggerConfigInterRAT_EventId_EventB1(value.u.eventB1, depth + 1);
}

void BuildSample_EventTriggerConfigInterRAT(EventTriggerConfigInterRAT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_EventTriggerConfigInterRAT_EventId(value.eventId, depth + 1);
    value.rsType = NR_RS_Type_ssb;
    value.reportInterval = ReportInterval_ms120;
    value.reportAmount = EventTriggerConfigInterRAT_ReportAmount_r1;
    BuildSample_MeasReportQuantity(value.reportQuantity, depth + 1);
    value.maxReportCells = 1;
}

void BuildSample_PeriodicalReportConfigInterRAT(PeriodicalReportConfigInterRAT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportInterval = ReportInterval_ms120;
    value.reportAmount = PeriodicalReportConfigInterRAT_ReportAmount_r1;
    BuildSample_MeasReportQuantity(value.reportQuantity, depth + 1);
    value.maxReportCells = 1;
}

void BuildSample_ReportConfigInterRAT_ReportType(ReportConfigInterRAT_ReportType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ReportConfigInterRAT_ReportType_Tag_periodical;
    BuildSample_PeriodicalReportConfigInterRAT(value.u.periodical, depth + 1);
}

void BuildSample_ReportConfigInterRAT(ReportConfigInterRAT& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ReportConfigInterRAT_ReportType(value.reportType, depth + 1);
}

void BuildSample_CellIndividualOffsetList_EUTRA_r18(CellIndividualOffsetList_EUTRA_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r18 = 0;
    value.cellIndividualOffset_r18 = EUTRA_Q_OffsetRange_dB_24;
}

void BuildSample_ReportCGI(ReportCGI& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cellForWhichToReportCGI = 0;
}

void BuildSample_ReportSFTD_NR(ReportSFTD_NR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportSFTD_Meas = true;
    value.reportRSRP = true;
}

void BuildSample_MeasTriggerQuantityOffset(MeasTriggerQuantityOffset& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasTriggerQuantityOffset_Tag_rsrp;
    value.u.rsrp = -30;
}

void BuildSample_CondTriggerConfig_r16_CondEventId_CondEventA3(CondTriggerConfig_r16_CondEventId_CondEventA3& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantityOffset(value.a3_Offset, depth + 1);
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
}

void BuildSample_CondTriggerConfig_r16_CondEventId_CondEventA5(CondTriggerConfig_r16_CondEventId_CondEventA5& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.a5_Threshold1, depth + 1);
    BuildSample_MeasTriggerQuantity(value.a5_Threshold2, depth + 1);
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
}

void BuildSample_CondTriggerConfig_r16_CondEventId_CondEventA4_r17(CondTriggerConfig_r16_CondEventId_CondEventA4_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.a4_Threshold_r17, depth + 1);
    value.hysteresis_r17 = 0;
    value.timeToTrigger_r17 = TimeToTrigger_ms0;
}

void BuildSample_CondTriggerConfig_r16_CondEventId_CondEventD1_r17(CondTriggerConfig_r16_CondEventId_CondEventD1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.distanceThreshFromReference1_r17 = 0;
    value.distanceThreshFromReference2_r17 = 0;
    value.referenceLocation1_r17.length = 0u;
    value.referenceLocation2_r17.length = 0u;
    value.hysteresisLocation_r17 = 0;
    value.timeToTrigger_r17 = TimeToTrigger_ms0;
}

void BuildSample_CondTriggerConfig_r16_CondEventId_CondEventT1_r17(CondTriggerConfig_r16_CondEventId_CondEventT1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.t1_Threshold_r17 = 0;
    value.duration_r17 = 1;
}

void BuildSample_CondTriggerConfig_r16_CondEventId_CondEventD2_r18(CondTriggerConfig_r16_CondEventId_CondEventD2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.distanceThreshFromReference1_r18 = 0;
    value.distanceThreshFromReference2_r18 = 0;
    value.referenceLocation2_r18.length = 0u;
    value.hysteresisLocation_r18 = 0;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
}

void BuildSample_CondTriggerConfig_r16_CondEventId(CondTriggerConfig_r16_CondEventId& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CondTriggerConfig_r16_CondEventId_Tag_condEventA3;
    BuildSample_CondTriggerConfig_r16_CondEventId_CondEventA3(value.u.condEventA3, depth + 1);
}

void BuildSample_CondTriggerConfig_r16(CondTriggerConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CondTriggerConfig_r16_CondEventId(value.condEventId, depth + 1);
    value.rsType_r16 = NR_RS_Type_ssb;
}

void BuildSample_MeasRSSI_ReportConfig_r16(MeasRSSI_ReportConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_EventTriggerConfig_EventId_EventA1(EventTriggerConfig_EventId_EventA1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.a1_Threshold, depth + 1);
    value.reportOnLeave = true;
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfig_EventId_EventA2(EventTriggerConfig_EventId_EventA2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.a2_Threshold, depth + 1);
    value.reportOnLeave = true;
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfig_EventId_EventA3(EventTriggerConfig_EventId_EventA3& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantityOffset(value.a3_Offset, depth + 1);
    value.reportOnLeave = true;
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
    value.useAllowedCellList = true;
}

void BuildSample_EventTriggerConfig_EventId_EventA4(EventTriggerConfig_EventId_EventA4& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.a4_Threshold, depth + 1);
    value.reportOnLeave = true;
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
    value.useAllowedCellList = true;
}

void BuildSample_EventTriggerConfig_EventId_EventA5(EventTriggerConfig_EventId_EventA5& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.a5_Threshold1, depth + 1);
    BuildSample_MeasTriggerQuantity(value.a5_Threshold2, depth + 1);
    value.reportOnLeave = true;
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
    value.useAllowedCellList = true;
}

void BuildSample_EventTriggerConfig_EventId_EventA6(EventTriggerConfig_EventId_EventA6& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantityOffset(value.a6_Offset, depth + 1);
    value.reportOnLeave = true;
    value.hysteresis = 0;
    value.timeToTrigger = TimeToTrigger_ms0;
    value.useAllowedCellList = true;
}

void BuildSample_EventTriggerConfig_EventId_EventX1_r17(EventTriggerConfig_EventId_EventX1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_MeasTriggerQuantity_r16(value.x1_Threshold1_Relay_r17, depth + 1);
    BuildSample_MeasTriggerQuantity(value.x1_Threshold2_r17, depth + 1);
    value.reportOnLeave_r17 = true;
    value.hysteresis_r17 = 0;
    value.timeToTrigger_r17 = TimeToTrigger_ms0;
    value.useAllowedCellList_r17 = true;
}

void BuildSample_EventTriggerConfig_EventId_EventX2_r17(EventTriggerConfig_EventId_EventX2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_MeasTriggerQuantity_r16(value.x2_Threshold_Relay_r17, depth + 1);
    value.reportOnLeave_r17 = true;
    value.hysteresis_r17 = 0;
    value.timeToTrigger_r17 = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfig_EventId_EventD1_r17(EventTriggerConfig_EventId_EventD1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.distanceThreshFromReference1_r17 = 1;
    value.distanceThreshFromReference2_r17 = 1;
    value.referenceLocation1_r17.length = 0u;
    value.referenceLocation2_r17.length = 0u;
    value.reportOnLeave_r17 = true;
    value.hysteresisLocation_r17 = 0;
    value.timeToTrigger_r17 = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfig_EventId_EventH1_r18(EventTriggerConfig_EventId_EventH1_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.h1_Threshold_r18 = -420;
    value.h1_Hysteresis_r18 = 0;
    value.reportOnLeave_r18 = true;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
    value.includeAltitudeUE_r18 = true;
    value.simulMultiTriggerSingleMeasReport_r18 = true;
}

void BuildSample_EventTriggerConfig_EventId_EventH2_r18(EventTriggerConfig_EventId_EventH2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.h2_Threshold_r18 = -420;
    value.h2_Hysteresis_r18 = 0;
    value.reportOnLeave_r18 = true;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
    value.includeAltitudeUE_r18 = true;
    value.simulMultiTriggerSingleMeasReport_r18 = true;
}

void BuildSample_EventTriggerConfig_EventId_EventA3H1_r18(EventTriggerConfig_EventId_EventA3H1_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantityOffset(value.a3_Offset_r18, depth + 1);
    value.reportOnLeave_r18 = true;
    value.a3_Hysteresis_r18 = 0;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
    value.useAllowedCellList_r18 = true;
    value.h1_Threshold_r18 = -420;
    value.h1_Hysteresis_r18 = 0;
    value.includeAltitudeUE_r18 = true;
    value.simulMultiTriggerSingleMeasReport_r18 = true;
}

void BuildSample_EventTriggerConfig_EventId_EventA3H2_r18(EventTriggerConfig_EventId_EventA3H2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantityOffset(value.a3_Offset_r18, depth + 1);
    value.reportOnLeave_r18 = true;
    value.a3_Hysteresis_r18 = 0;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
    value.useAllowedCellList_r18 = true;
    value.h2_Threshold_r18 = -420;
    value.h2_Hysteresis_r18 = 0;
    value.includeAltitudeUE_r18 = true;
    value.simulMultiTriggerSingleMeasReport_r18 = true;
}

void BuildSample_EventTriggerConfig_EventId_EventA4H1_r18(EventTriggerConfig_EventId_EventA4H1_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.a4_Threshold_r18, depth + 1);
    value.reportOnLeave_r18 = true;
    value.a4_Hysteresis_r18 = 0;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
    value.useAllowedCellList_r18 = true;
    value.h1_Threshold_r18 = -420;
    value.h1_Hysteresis_r18 = 0;
    value.includeAltitudeUE_r18 = true;
    value.simulMultiTriggerSingleMeasReport_r18 = true;
}

void BuildSample_EventTriggerConfig_EventId_EventA4H2_r18(EventTriggerConfig_EventId_EventA4H2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.a4_Threshold_r18, depth + 1);
    value.reportOnLeave_r18 = true;
    value.a4_Hysteresis_r18 = 0;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
    value.useAllowedCellList_r18 = true;
    value.h2_Threshold_r18 = -420;
    value.h2_Hysteresis_r18 = 0;
    value.includeAltitudeUE_r18 = true;
    value.simulMultiTriggerSingleMeasReport_r18 = true;
}

void BuildSample_EventTriggerConfig_EventId_EventA5H1_r18(EventTriggerConfig_EventId_EventA5H1_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.a5_Threshold1_r18, depth + 1);
    BuildSample_MeasTriggerQuantity(value.a5_Threshold2_r18, depth + 1);
    value.reportOnLeave_r18 = true;
    value.a5_Hysteresis_r18 = 0;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
    value.useAllowedCellList_r18 = true;
    value.h1_Threshold_r18 = -420;
    value.h1_Hysteresis_r18 = 0;
    value.includeAltitudeUE_r18 = true;
    value.simulMultiTriggerSingleMeasReport_r18 = true;
}

void BuildSample_EventTriggerConfig_EventId_EventA5H2_r18(EventTriggerConfig_EventId_EventA5H2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantity(value.a5_Threshold1_r18, depth + 1);
    BuildSample_MeasTriggerQuantity(value.a5_Threshold2_r18, depth + 1);
    value.reportOnLeave_r18 = true;
    value.a5_Hysteresis_r18 = 0;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
    value.useAllowedCellList_r18 = true;
    value.h2_Threshold_r18 = -420;
    value.h2_Hysteresis_r18 = 0;
    value.includeAltitudeUE_r18 = true;
    value.simulMultiTriggerSingleMeasReport_r18 = true;
}

void BuildSample_EventTriggerConfig_EventId_EventD2_r18(EventTriggerConfig_EventId_EventD2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.distanceThreshFromReference1_r18 = 1;
    value.distanceThreshFromReference2_r18 = 1;
    value.referenceLocation2_r18.length = 0u;
    value.reportOnLeave_r18 = true;
    value.hysteresisLocation_r18 = 0;
    value.timeToTrigger_r18 = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfig_EventId(EventTriggerConfig_EventId& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = EventTriggerConfig_EventId_Tag_eventA1;
    BuildSample_EventTriggerConfig_EventId_EventA1(value.u.eventA1, depth + 1);
}

void BuildSample_EventTriggerConfig(EventTriggerConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_EventTriggerConfig_EventId(value.eventId, depth + 1);
    value.rsType = NR_RS_Type_ssb;
    value.reportInterval = ReportInterval_ms120;
    value.reportAmount = EventTriggerConfig_ReportAmount_r1;
    BuildSample_MeasReportQuantity(value.reportQuantityCell, depth + 1);
    value.maxReportCells = 1;
    value.includeBeamMeasurements = true;
}

void BuildSample_UL_DelayValueConfig_r16(UL_DelayValueConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.delay_DRBlist_r16_count = 0u;
}

void BuildSample_SetupRelease_UL_DelayValueConfig_r16(SetupRelease_UL_DelayValueConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UL_DelayValueConfig_r16_Tag_release;
}

void BuildSample_UL_ExcessDelayConfig_r17(UL_ExcessDelayConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.excessDelay_DRBlist_r17_count = 0u;
}

void BuildSample_SetupRelease_UL_ExcessDelayConfig_r17(SetupRelease_UL_ExcessDelayConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_UL_ExcessDelayConfig_r17_Tag_release;
}

void BuildSample_PeriodicalReportConfig(PeriodicalReportConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rsType = NR_RS_Type_ssb;
    value.reportInterval = ReportInterval_ms120;
    value.reportAmount = PeriodicalReportConfig_ReportAmount_r1;
    BuildSample_MeasReportQuantity(value.reportQuantityCell, depth + 1);
    value.maxReportCells = 1;
    value.includeBeamMeasurements = true;
    value.useAllowedCellList = true;
}

void BuildSample_MeasTriggerQuantityCLI_r16(MeasTriggerQuantityCLI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasTriggerQuantityCLI_r16_Tag_srs_RSRP_r16;
    value.u.srs_RSRP_r16 = 0;
}

void BuildSample_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16(CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasTriggerQuantityCLI_r16(value.i1_Threshold_r16, depth + 1);
    value.reportOnLeave_r16 = true;
    value.hysteresis_r16 = 0;
    value.timeToTrigger_r16 = TimeToTrigger_ms0;
}

void BuildSample_CLI_EventTriggerConfig_r16_EventId_r16(CLI_EventTriggerConfig_r16_EventId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CLI_EventTriggerConfig_r16_EventId_r16_Tag_eventI1_r16;
    BuildSample_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16(value.u.eventI1_r16, depth + 1);
}

void BuildSample_CLI_EventTriggerConfig_r16(CLI_EventTriggerConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CLI_EventTriggerConfig_r16_EventId_r16(value.eventId_r16, depth + 1);
    value.reportInterval_r16 = ReportInterval_ms120;
    value.reportAmount_r16 = CLI_EventTriggerConfig_r16_ReportAmount_r16_r1;
    value.maxReportCLI_r16 = 1;
}

void BuildSample_CLI_PeriodicalReportConfig_r16(CLI_PeriodicalReportConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportInterval_r16 = ReportInterval_ms120;
    value.reportAmount_r16 = CLI_PeriodicalReportConfig_r16_ReportAmount_r16_r1;
    value.reportQuantityCLI_r16 = MeasReportQuantityCLI_r16_srs_rsrp;
    value.maxReportCLI_r16 = 1;
}

void BuildSample_RxTxPeriodical_r17(RxTxPeriodical_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportAmount_r17 = RxTxPeriodical_r17_ReportAmount_r17_r1;
}

void BuildSample_ReportOnScellActivation_r18(ReportOnScellActivation_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rsType = NR_RS_Type_ssb;
    BuildSample_MeasReportQuantity(value.reportQuantityRS_Indexes, depth + 1);
    value.maxNrofRS_IndexesToReport = 1;
    value.includeBeamMeasurements = true;
}

void BuildSample_ReportConfigNR_ReportType(ReportConfigNR_ReportType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ReportConfigNR_ReportType_Tag_periodical;
    BuildSample_PeriodicalReportConfig(value.u.periodical, depth + 1);
}

void BuildSample_ReportConfigNR(ReportConfigNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ReportConfigNR_ReportType(value.reportType, depth + 1);
}

void BuildSample_CellIndividualOffsetList_r18(CellIndividualOffsetList_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r18 = 0;
    BuildSample_Q_OffsetRangeList(value.cellIndividualOffset_r18, depth + 1);
}

void BuildSample_MeasReportQuantity_r16(MeasReportQuantity_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cbr_r16 = true;
}

void BuildSample_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1(EventTriggerConfigNR_SL_r16_EventId_r16_EventC1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.c1_Threshold_r16 = 0;
    value.hysteresis_r16 = 0;
    value.timeToTrigger_r16 = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16(EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.c2_Threshold_r16 = 0;
    value.hysteresis_r16 = 0;
    value.timeToTrigger_r16 = TimeToTrigger_ms0;
}

void BuildSample_EventTriggerConfigNR_SL_r16_EventId_r16(EventTriggerConfigNR_SL_r16_EventId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = EventTriggerConfigNR_SL_r16_EventId_r16_Tag_eventC1;
    BuildSample_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1(value.u.eventC1, depth + 1);
}

void BuildSample_EventTriggerConfigNR_SL_r16(EventTriggerConfigNR_SL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_EventTriggerConfigNR_SL_r16_EventId_r16(value.eventId_r16, depth + 1);
    value.reportInterval_r16 = ReportInterval_ms120;
    value.reportAmount_r16 = EventTriggerConfigNR_SL_r16_ReportAmount_r16_r1;
    BuildSample_MeasReportQuantity_r16(value.reportQuantity_r16, depth + 1);
}

void BuildSample_PeriodicalReportConfigNR_SL_r16(PeriodicalReportConfigNR_SL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportInterval_r16 = ReportInterval_ms120;
    value.reportAmount_r16 = PeriodicalReportConfigNR_SL_r16_ReportAmount_r16_r1;
    BuildSample_MeasReportQuantity_r16(value.reportQuantity_r16, depth + 1);
}

void BuildSample_ReportConfigNR_SL_r16_ReportType_r16(ReportConfigNR_SL_r16_ReportType_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ReportConfigNR_SL_r16_ReportType_r16_Tag_periodical_r16;
    BuildSample_PeriodicalReportConfigNR_SL_r16(value.u.periodical_r16, depth + 1);
}

void BuildSample_ReportConfigNR_SL_r16(ReportConfigNR_SL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_ReportConfigNR_SL_r16_ReportType_r16(value.reportType_r16, depth + 1);
}

void BuildSample_ReportConfigToAddMod_ReportConfig(ReportConfigToAddMod_ReportConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = ReportConfigToAddMod_ReportConfig_Tag_reportConfigNR;
    BuildSample_ReportConfigNR(value.u.reportConfigNR, depth + 1);
}

void BuildSample_ReportConfigToAddMod(ReportConfigToAddMod& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reportConfigId = 1;
    BuildSample_ReportConfigToAddMod_ReportConfig(value.reportConfig, depth + 1);
}

void BuildSample_DL_AM_RLC_v1610(DL_AM_RLC_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RLC_Config_v1610(RLC_Config_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DL_AM_RLC_v1610(value.dl_AM_RLC_v1610, depth + 1);
}

void BuildSample_MulticastRLC_BearerConfig_r17(MulticastRLC_BearerConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servedMBS_RadioBearer_r17 = 1;
}

void BuildSample_DL_AM_RLC_v1700(DL_AM_RLC_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DL_UM_RLC_v1700(DL_UM_RLC_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RLC_Config_v1700(RLC_Config_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_DL_AM_RLC_v1700(value.dl_AM_RLC_v1700, depth + 1);
    BuildSample_DL_UM_RLC_v1700(value.dl_UM_RLC_v1700, depth + 1);
}

void BuildSample_RLC_BearerConfig_ServedRadioBearer(RLC_BearerConfig_ServedRadioBearer& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RLC_BearerConfig_ServedRadioBearer_Tag_srb_Identity;
    value.u.srb_Identity = 1;
}

void BuildSample_RLC_BearerConfig(RLC_BearerConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.logicalChannelIdentity = 1;
}

void BuildSample_SCellActivationRS_Config_r17(SCellActivationRS_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.scellActivationRS_Id_r17 = 1;
    value.resourceSet_r17 = 0;
    value.qcl_Info_r17 = 0;
}

void BuildSample_SchedulingRequestToAddMod(SchedulingRequestToAddMod& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.schedulingRequestId = 0;
    value.sr_TransMax = SchedulingRequestToAddMod_Sr_TransMax_n4;
}

void BuildSample_SchedulingRequestToAddModExt_v1700(SchedulingRequestToAddModExt_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SchedulingRequestResourceConfig_PeriodicityAndOffset(SchedulingRequestResourceConfig_PeriodicityAndOffset& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sym2;
}

void BuildSample_SchedulingRequestResourceConfig(SchedulingRequestResourceConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.schedulingRequestResourceId = 1;
    value.schedulingRequestID = 0;
}

void BuildSample_SchedulingRequestResourceConfigExt_v1610(SchedulingRequestResourceConfigExt_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17(SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl1280;
    value.u.sl1280 = 0;
}

void BuildSample_SchedulingRequestResourceConfigExt_v1700(SchedulingRequestResourceConfigExt_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SCS_SpecificCarrier(SCS_SpecificCarrier& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.offsetToCarrier = 0;
    value.subcarrierSpacing = SubcarrierSpacing_kHz15;
    value.carrierBandwidth = 1;
}

void BuildSample_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16(value.nrofCandidates_CI_r16, depth + 1);
}

void BuildSample_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16(value.nrofCandidates_IAB_r16, depth + 1);
}

void BuildSample_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SearchSpaceExt_r16_SearchSpaceType_r16(SearchSpaceExt_r16_SearchSpaceType_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16(value.common_r16, depth + 1);
}

void BuildSample_SearchSpaceExt_r16(SearchSpaceExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710(SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl32;
    value.u.sl32 = 0;
}

void BuildSample_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17(SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag_slotGroupLength4_r17;
    value.u.slotGroupLength4_r17.bitLength = 4u;
    value.u.slotGroupLength4_r17.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.slotGroupLength4_r17.bytes != nullptr) {
        std::memset(value.u.slotGroupLength4_r17.bytes, 0, 1u);
    }
}

void BuildSample_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17(value.nrofCandidates_PEI_r17, depth + 1);
}

void BuildSample_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SearchSpaceExt_v1700_SearchSpaceType_r17(SearchSpaceExt_v1700_SearchSpaceType_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17(value.common_r17, depth + 1);
}

void BuildSample_SearchSpaceExt_v1700(SearchSpaceExt_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18(SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18(SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SearchSpaceExt_v1800_SearchSpaceType_r18(SearchSpaceExt_v1800_SearchSpaceType_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18(value.common_r18, depth + 1);
}

void BuildSample_SearchSpaceExt_v1800(SearchSpaceExt_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IntraCellGuardBandsPerSCS_r16(IntraCellGuardBandsPerSCS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.guardBandSCS_r16 = SubcarrierSpacing_kHz15;
    value.intraCellGuardBands_r16_count = 0u;
}

void BuildSample_GuardBand_r16(GuardBand_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.startCRB_r16 = 0;
    value.nrofCRBs_r16 = 0;
}

void BuildSample_MC_DCI_SetOfCells_r18(MC_DCI_SetOfCells_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.setOfCellsId_r18 = 0;
    value.nCI_Value_r18 = 0;
}

void BuildSample_ScheduledCellCombo_r18(ScheduledCellCombo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_RateMatchDCI_1_3_r18(RateMatchDCI_1_3_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BitString*)std::malloc((std::size_t)value.count * sizeof(BitString));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BitString));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i].bitLength = 1u;
            value.items[i].bytes = (std::uint8_t*)std::malloc(1u);
            if (value.items[i].bytes != nullptr) {
                std::memset(value.items[i].bytes, 0, 1u);
            }
        }
    }
}

void BuildSample_ZP_CSI_DCI_1_3_r18(ZP_CSI_DCI_1_3_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BitString*)std::malloc((std::size_t)value.count * sizeof(BitString));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BitString));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i].bitLength = 1u;
            value.items[i].bytes = (std::uint8_t*)std::malloc(1u);
            if (value.items[i].bytes != nullptr) {
                std::memset(value.items[i].bytes, 0, 1u);
            }
        }
    }
}

void BuildSample_TCI_DCI_1_3_r18(TCI_DCI_1_3_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 2u;
    value.items = (BitString*)std::malloc((std::size_t)value.count * sizeof(BitString));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BitString));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i].bitLength = 3u;
            value.items[i].bytes = (std::uint8_t*)std::malloc(1u);
            if (value.items[i].bytes != nullptr) {
                std::memset(value.items[i].bytes, 0, 1u);
            }
        }
    }
}

void BuildSample_SRS_RequestCombo_r18(SRS_RequestCombo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BitString*)std::malloc((std::size_t)value.count * sizeof(BitString));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BitString));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i].bitLength = 2u;
            value.items[i].bytes = (std::uint8_t*)std::malloc(1u);
            if (value.items[i].bytes != nullptr) {
                std::memset(value.items[i].bytes, 0, 1u);
            }
        }
    }
}

void BuildSample_SRS_OffsetCombo_r18(SRS_OffsetCombo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_TDRA_FieldIndexDCI_1_3_r18(TDRA_FieldIndexDCI_1_3_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 2u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_TDRA_FieldIndexDCI_0_3_r18(TDRA_FieldIndexDCI_0_3_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 2u;
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SI_RequestResources(SI_RequestResources& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ra_PreambleStartIndex = 0;
}

void BuildSample_SI_RequestResourcesRepetition_r18(SI_RequestResourcesRepetition_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ra_PreambleStartIndex_r18 = 0;
}

void BuildSample_SIB_Mapping(SIB_Mapping& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SIB_TypeInfo*)std::malloc((std::size_t)value.count * sizeof(SIB_TypeInfo));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SIB_TypeInfo));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SIB_TypeInfo(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SchedulingInfo(SchedulingInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.si_BroadcastStatus = SchedulingInfo_Si_BroadcastStatus_broadcasting;
    value.si_Periodicity = SchedulingInfo_Si_Periodicity_rf8;
    BuildSample_SIB_Mapping(value.sib_MappingInfo, depth + 1);
}

void BuildSample_SIB_Mapping_v1700(SIB_Mapping_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SIB_TypeInfo_v1700*)std::malloc((std::size_t)value.count * sizeof(SIB_TypeInfo_v1700));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SIB_TypeInfo_v1700));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SIB_TypeInfo_v1700(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SchedulingInfo2_r17(SchedulingInfo2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.si_BroadcastStatus_r17 = SchedulingInfo2_r17_Si_BroadcastStatus_r17_broadcasting;
    value.si_WindowPosition_r17 = 1;
    value.si_Periodicity_r17 = SchedulingInfo2_r17_Si_Periodicity_r17_rf8;
    BuildSample_SIB_Mapping_v1700(value.sib_MappingInfo_r17, depth + 1);
}

void BuildSample_SIB_TypeInfo(SIB_TypeInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.type = SIB_TypeInfo_Type_sibType2;
}

void BuildSample_SIB_TypeInfo_v1700_SibType_r17_Type2_r17(SIB_TypeInfo_v1700_SibType_r17_Type2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.posSibType_r17 = SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType1_9;
}

void BuildSample_SIB_TypeInfo_v1700_SibType_r17(SIB_TypeInfo_v1700_SibType_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SIB_TypeInfo_v1700_SibType_r17_Tag_type1_r17;
    value.u.type1_r17 = SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType15;
}

void BuildSample_SIB_TypeInfo_v1700(SIB_TypeInfo_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SIB_TypeInfo_v1700_SibType_r17(value.sibType_r17, depth + 1);
}

void BuildSample_SlotFormatCombinationsPerCell(SlotFormatCombinationsPerCell& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servingCellId = 0;
    value.subcarrierSpacing = SubcarrierSpacing_kHz15;
}

void BuildSample_SlotFormatCombination(SlotFormatCombination& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.slotFormatCombinationId = 0;
    value.slotFormats_count = 0u;
}

void BuildSample_CO_DurationsPerCell_r16(CO_DurationsPerCell_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servingCellId_r16 = 0;
    value.positionInDCI_r16 = 0;
    value.subcarrierSpacing_r16 = SubcarrierSpacing_kHz15;
    value.co_DurationList_r16_count = 0u;
}

void BuildSample_CO_DurationsPerCell_r17(CO_DurationsPerCell_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servingCellId_r17 = 0;
    value.positionInDCI_r17 = 0;
    value.subcarrierSpacing_r17 = SubcarrierSpacing_kHz15;
    value.co_DurationList_r17_count = 0u;
}

void BuildSample_AvailableRB_SetsPerCell_r16(AvailableRB_SetsPerCell_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servingCellId_r16 = 0;
    value.positionInDCI_r16 = 0;
}

void BuildSample_SearchSpaceSwitchTrigger_r16(SearchSpaceSwitchTrigger_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servingCellId_r16 = 0;
    value.positionInDCI_r16 = 0;
}

void BuildSample_S_NSSAI(S_NSSAI& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = S_NSSAI_Tag_sst;
    value.u.sst.bitLength = 8u;
    value.u.sst.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.sst.bytes != nullptr) {
        std::memset(value.u.sst.bytes, 0, 1u);
    }
}

void BuildSample_SPS_PUCCH_AN_r16(SPS_PUCCH_AN_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sps_PUCCH_AN_ResourceID_r16 = 0;
}

void BuildSample_SRS_CC_SetIndex(SRS_CC_SetIndex& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PathlossReferenceRSList_r16(PathlossReferenceRSList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (PathlossReferenceRS_r16*)std::malloc((std::size_t)value.count * sizeof(PathlossReferenceRS_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(PathlossReferenceRS_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_PathlossReferenceRS_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_PathlossReferenceRSList_r16(SetupRelease_PathlossReferenceRSList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_PathlossReferenceRSList_r16_Tag_release;
}

void BuildSample_PathlossReferenceRS_Config(PathlossReferenceRS_Config& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PathlossReferenceRS_Config_Tag_ssb_Index;
    value.u.ssb_Index = 0;
}

void BuildSample_SRS_ResourceSet_ResourceType_Aperiodic(SRS_ResourceSet_ResourceType_Aperiodic& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.aperiodicSRS_ResourceTrigger = 1;
}

void BuildSample_SRS_ResourceSet_ResourceType_Semi_persistent(SRS_ResourceSet_ResourceType_Semi_persistent& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_ResourceSet_ResourceType_Periodic(SRS_ResourceSet_ResourceType_Periodic& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_ResourceSet_ResourceType(SRS_ResourceSet_ResourceType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_ResourceSet_ResourceType_Tag_aperiodic;
    BuildSample_SRS_ResourceSet_ResourceType_Aperiodic(value.u.aperiodic, depth + 1);
}

void BuildSample_SRS_ResourceSet(SRS_ResourceSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_ResourceSetId = 0;
    BuildSample_SRS_ResourceSet_ResourceType(value.resourceType, depth + 1);
    value.usage = SRS_ResourceSet_Usage_beamManagement;
}

void BuildSample_PathlossReferenceRS_r16(PathlossReferenceRS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_PathlossReferenceRS_Id_r16 = 0;
    BuildSample_PathlossReferenceRS_Config(value.pathlossReferenceRS_r16, depth + 1);
}

void BuildSample_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16(SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16(SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16(SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_SRS_PosResourceSet_r16_ResourceType_r16(SRS_PosResourceSet_r16_ResourceType_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_PosResourceSet_r16_ResourceType_r16_Tag_aperiodic_r16;
    BuildSample_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16(value.u.aperiodic_r16, depth + 1);
}

void BuildSample_SSB_Configuration_r16_Sfn0_Offset_r16(SSB_Configuration_r16_Sfn0_Offset_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sfn_Offset_r16 = 0;
}

void BuildSample_SSB_Configuration_r16(SSB_Configuration_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ssb_Freq_r16 = 0;
    value.halfFrameIndex_r16 = SSB_Configuration_r16_HalfFrameIndex_r16_zero;
    value.ssbSubcarrierSpacing_r16 = SubcarrierSpacing_kHz15;
    value.sfn_SSB_Offset_r16 = 0;
}

void BuildSample_SSB_InfoNcell_r16(SSB_InfoNcell_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physicalCellId_r16 = 0;
}

void BuildSample_DL_PRS_Info_r16(DL_PRS_Info_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dl_PRS_ID_r16 = 0;
    value.dl_PRS_ResourceSetId_r16 = 0;
}

void BuildSample_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16(SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_ssb_IndexServing_r16;
    value.u.ssb_IndexServing_r16 = 0;
}

void BuildSample_SRS_PosResourceSet_r16(SRS_PosResourceSet_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_PosResourceSetId_r16 = 0;
    BuildSample_SRS_PosResourceSet_r16_ResourceType_r16(value.resourceType_r16, depth + 1);
}

void BuildSample_TxHoppingConfig_r18(TxHoppingConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.overlapValue_r18 = TxHoppingConfig_r18_OverlapValue_r18_zeroRB;
    value.numberOfHops_r18 = 2;
    value.slotOffsetForRemainingHopsList_r18_count = 0u;
}

void BuildSample_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16(SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag_srs_ResourceId_r16;
    value.u.srs_ResourceId_r16 = 0;
}

void BuildSample_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16(SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16(value.resourceSelection_r16, depth + 1);
    value.uplinkBWP_r16 = 0;
}

void BuildSample_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16(SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_ssb_IndexServing_r16;
    value.u.ssb_IndexServing_r16 = 0;
}

void BuildSample_SRS_SpatialRelationInfoPos_r16_ServingRS_r16(SRS_SpatialRelationInfoPos_r16_ServingRS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16(value.referenceSignal_r16, depth + 1);
}

void BuildSample_SRS_SpatialRelationInfoPos_r16(SRS_SpatialRelationInfoPos_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_SpatialRelationInfoPos_r16_Tag_servingRS_r16;
    BuildSample_SRS_SpatialRelationInfoPos_r16_ServingRS_r16(value.u.servingRS_r16, depth + 1);
}

void BuildSample_SRS_PosResource_r16_TransmissionComb_r16_N2_r16(SRS_PosResource_r16_TransmissionComb_r16_N2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.combOffset_n2_r16 = 0;
    value.cyclicShift_n2_r16 = 0;
}

void BuildSample_SRS_PosResource_r16_TransmissionComb_r16_N4_r16(SRS_PosResource_r16_TransmissionComb_r16_N4_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.combOffset_n4_r16 = 0;
    value.cyclicShift_n4_r16 = 0;
}

void BuildSample_SRS_PosResource_r16_TransmissionComb_r16_N8_r16(SRS_PosResource_r16_TransmissionComb_r16_N8_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.combOffset_n8_r16 = 0;
    value.cyclicShift_n8_r16 = 0;
}

void BuildSample_SRS_PosResource_r16_TransmissionComb_r16(SRS_PosResource_r16_TransmissionComb_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_PosResource_r16_TransmissionComb_r16_Tag_n2_r16;
    BuildSample_SRS_PosResource_r16_TransmissionComb_r16_N2_r16(value.u.n2_r16, depth + 1);
}

void BuildSample_SRS_PosResource_r16_ResourceMapping_r16(SRS_PosResource_r16_ResourceMapping_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.startPosition_r16 = 0;
    value.nrofSymbols_r16 = SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16_n1;
}

void BuildSample_SRS_PosResource_r16_FreqHopping_r16(SRS_PosResource_r16_FreqHopping_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.c_SRS_r16 = 0;
}

void BuildSample_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16(SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16(SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_PeriodicityAndOffset_r16(value.periodicityAndOffset_sp_r16, depth + 1);
}

void BuildSample_SRS_PosResource_r16_ResourceType_r16_Periodic_r16(SRS_PosResource_r16_ResourceType_r16_Periodic_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_PeriodicityAndOffset_r16(value.periodicityAndOffset_p_r16, depth + 1);
}

void BuildSample_SRS_PosResource_r16_ResourceType_r16(SRS_PosResource_r16_ResourceType_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SRS_PosResource_r16_ResourceType_r16_Tag_aperiodic_r16;
    BuildSample_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16(value.u.aperiodic_r16, depth + 1);
}

void BuildSample_SRS_PosResource_r16(SRS_PosResource_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_PosResourceId_r16 = 0;
    BuildSample_SRS_PosResource_r16_TransmissionComb_r16(value.transmissionComb_r16, depth + 1);
    BuildSample_SRS_PosResource_r16_ResourceMapping_r16(value.resourceMapping_r16, depth + 1);
    value.freqDomainShift_r16 = 0;
    BuildSample_SRS_PosResource_r16_FreqHopping_r16(value.freqHopping_r16, depth + 1);
    value.groupOrSequenceHopping_r16 = SRS_PosResource_r16_GroupOrSequenceHopping_r16_neither;
    BuildSample_SRS_PosResource_r16_ResourceType_r16(value.resourceType_r16, depth + 1);
    value.sequenceId_r16 = 0;
}

void BuildSample_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18(SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18(SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18(SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18(SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_aperiodic_r18;
    BuildSample_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18(value.u.aperiodic_r18, depth + 1);
}

void BuildSample_SlotOffsetForRemainingHops_r18(SlotOffsetForRemainingHops_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18(value.slotOffsetRemainingHops_r18, depth + 1);
}

void BuildSample_SRS_PosResourceSetLinkedForAggBW_r18(SRS_PosResourceSetLinkedForAggBW_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_PosResourceSetLinked_r18 = 0;
}

void BuildSample_SSB_MTC3_r16_PeriodicityAndOffset_r16(SSB_MTC3_r16_PeriodicityAndOffset_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf5_r16;
    value.u.sf5_r16 = 0;
}

void BuildSample_SSB_MTC3_r16(SSB_MTC3_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SSB_MTC3_r16_PeriodicityAndOffset_r16(value.periodicityAndOffset_r16, depth + 1);
    value.duration_r16 = SSB_MTC3_r16_Duration_r16_sf1;
}

void BuildSample_SSB_MTC4_r17(SSB_MTC4_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.offset_r17 = 0;
}

void BuildSample_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17(SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_shortBitmap;
    value.u.shortBitmap.bitLength = 4u;
    value.u.shortBitmap.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.shortBitmap.bytes != nullptr) {
        std::memset(value.u.shortBitmap.bytes, 0, 1u);
    }
}

void BuildSample_SSB_MTC_AdditionalPCI_r17(SSB_MTC_AdditionalPCI_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.additionalPCIIndex_r17 = 1;
    value.additionalPCI_r17 = 0;
    value.periodicity_r17 = SSB_MTC_AdditionalPCI_r17_Periodicity_r17_ms5;
    BuildSample_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17(value.ssb_PositionsInBurst_r17, depth + 1);
    value.ss_PBCH_BlockPower_r17 = -60;
}

void BuildSample_TAG(TAG& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag_Id = 0;
    value.timeAlignmentTimer = TimeAlignmentTimer_ms500;
}

void BuildSample_QCL_Info_ReferenceSignal(QCL_Info_ReferenceSignal& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = QCL_Info_ReferenceSignal_Tag_csi_rs;
    value.u.csi_rs = 0;
}

void BuildSample_QCL_Info(QCL_Info& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_QCL_Info_ReferenceSignal(value.referenceSignal, depth + 1);
    value.qcl_Type = QCL_Info_Qcl_Type_typeA;
}

void BuildSample_TCI_State(TCI_State& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tci_StateId = 0;
    BuildSample_QCL_Info(value.qcl_Type1, depth + 1);
}

void BuildSample_TCI_UL_State_r17_ReferenceSignal_r17(TCI_UL_State_r17_ReferenceSignal_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = TCI_UL_State_r17_ReferenceSignal_r17_Tag_ssb_Index_r17;
    value.u.ssb_Index_r17 = 0;
}

void BuildSample_TCI_UL_State_r17(TCI_UL_State_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tci_UL_StateId_r17 = 0;
    BuildSample_TCI_UL_State_r17_ReferenceSignal_r17(value.referenceSignal_r17, depth + 1);
}

void BuildSample_TDD_UL_DL_SlotConfig_Symbols_Explicit(TDD_UL_DL_SlotConfig_Symbols_Explicit& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_TDD_UL_DL_SlotConfig_Symbols(TDD_UL_DL_SlotConfig_Symbols& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = TDD_UL_DL_SlotConfig_Symbols_Tag_allDownlink;
}

void BuildSample_TDD_UL_DL_SlotConfig(TDD_UL_DL_SlotConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.slotIndex = 0;
    BuildSample_TDD_UL_DL_SlotConfig_Symbols(value.symbols, depth + 1);
}

void BuildSample_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16(TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16(TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16(TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_allDownlink_r16;
}

void BuildSample_TDD_UL_DL_SlotConfig_IAB_MT_r16(TDD_UL_DL_SlotConfig_IAB_MT_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.slotIndex_r16 = 0;
    BuildSample_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16(value.symbols_IAB_MT_r16, depth + 1);
}

void BuildSample_UAC_BarringInfoSet(UAC_BarringInfoSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.uac_BarringFactor = UAC_BarringInfoSet_Uac_BarringFactor_p00;
    value.uac_BarringTime = UAC_BarringInfoSet_Uac_BarringTime_s4;
    value.uac_BarringForAccessIdentity.bitLength = 7u;
    value.uac_BarringForAccessIdentity.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.uac_BarringForAccessIdentity.bytes != nullptr) {
        std::memset(value.uac_BarringForAccessIdentity.bytes, 0, 1u);
    }
}

void BuildSample_UAC_BarringInfoSet_v1700(UAC_BarringInfoSet_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UAC_BarringPerCat(UAC_BarringPerCat& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.accessCategory = 1;
    value.uac_barringInfoSetIndex = 1;
}

void BuildSample_UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList(UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 63u;
    value.items = (UAC_BarringInfoSetIndex*)std::malloc((std::size_t)value.count * sizeof(UAC_BarringInfoSetIndex));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_BarringInfoSetIndex));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_UAC_BarringPerPLMN_Uac_ACBarringListType(UAC_BarringPerPLMN_Uac_ACBarringListType& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UAC_BarringPerPLMN_Uac_ACBarringListType_Tag_uac_ImplicitACBarringList;
    BuildSample_UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList(value.u.uac_ImplicitACBarringList, depth + 1);
}

void BuildSample_UAC_BarringPerPLMN(UAC_BarringPerPLMN& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.plmn_IdentityIndex = 1;
}

void BuildSample_ExcessDelay_DRB_IdentityInfo_r17(ExcessDelay_DRB_IdentityInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.drb_IdentityList_count = 0u;
    value.delayThreshold = ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms0dot25;
}

void BuildSample_CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16(CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.timeGranularityForCI_r16 = CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16_n1;
    value.frequencyRegionForCI_r16 = 0;
    value.deltaOffset_r16 = 0;
}

void BuildSample_CI_ConfigurationPerServingCell_r16(CI_ConfigurationPerServingCell_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servingCellId = 0;
    value.positionInDCI_r16 = 0;
    value.ci_PayloadSize_r16 = CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n1;
    BuildSample_CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16(value.timeFrequencyRegion_r16, depth + 1);
}

void BuildSample_P0AlphaSet_r17(P0AlphaSet_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.closedLoopIndex_r17 = P0AlphaSet_r17_ClosedLoopIndex_r17_i0;
}

void BuildSample_Uplink_powerControl_r17(Uplink_powerControl_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ul_powercontrolId_r17 = 1;
}

void BuildSample_Uu_RelayRLC_ChannelConfig_r17(Uu_RelayRLC_ChannelConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.uu_RelayRLC_ChannelID_r17 = 1;
}

void BuildSample_UplinkTxDirectCurrentCell(UplinkTxDirectCurrentCell& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servCellIndex = 0;
    value.uplinkDirectCurrentBWP_count = 0u;
}

void BuildSample_UplinkTxDirectCurrentBWP(UplinkTxDirectCurrentBWP& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bwp_Id = 0;
    value.shift7dot5kHz = true;
    value.txDirectCurrentLocation = 0;
}

void BuildSample_DefaultDC_Location_r17(DefaultDC_Location_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = DefaultDC_Location_r17_Tag_ul;
    value.u.ul = FrequencyComponent_r17_activeCarrier;
}

void BuildSample_OffsetValue_r17(OffsetValue_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.offsetValue_r17 = -20000;
    value.shift7dot5kHz_r17 = true;
}

void BuildSample_CC_Group_r17_OffsetToDefault_r17_Offsetlist(CC_Group_r17_OffsetToDefault_r17_Offsetlist& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (OffsetValue_r17*)std::malloc((std::size_t)value.count * sizeof(OffsetValue_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(OffsetValue_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_OffsetValue_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CC_Group_r17_OffsetToDefault_r17(CC_Group_r17_OffsetToDefault_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = CC_Group_r17_OffsetToDefault_r17_Tag_offsetValue;
    BuildSample_OffsetValue_r17(value.u.offsetValue, depth + 1);
}

void BuildSample_CC_Group_r17(CC_Group_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servCellIndexLower_r17 = 0;
    BuildSample_DefaultDC_Location_r17(value.defaultDC_Location_r17, depth + 1);
}

void BuildSample_UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16(UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag_bwp_Id_r16;
    value.u.bwp_Id_r16 = 0;
}

void BuildSample_UplinkTxDirectCurrentCarrierInfo_r16(UplinkTxDirectCurrentCarrierInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.servCellIndex_r16 = 0;
    BuildSample_UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16(value.servCellInfo_r16, depth + 1);
}

void BuildSample_UplinkTxDirectCurrentTwoCarrierInfo_r16(UplinkTxDirectCurrentTwoCarrierInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.referenceCarrierIndex_r16 = 0;
    value.shift7dot5kHz_r16 = true;
    value.txDirectCurrentLocation_r16 = 0;
}

void BuildSample_UplinkTxDirectCurrentTwoCarrier_r16(UplinkTxDirectCurrentTwoCarrier_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_UplinkTxDirectCurrentCarrierInfo_r16(value.carrierOneInfo_r16, depth + 1);
    BuildSample_UplinkTxDirectCurrentCarrierInfo_r16(value.carrierTwoInfo_r16, depth + 1);
    BuildSample_UplinkTxDirectCurrentTwoCarrierInfo_r16(value.singlePA_TxDirectCurrent_r16, depth + 1);
}

void BuildSample_ZP_CSI_RS_Resource(ZP_CSI_RS_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.zp_CSI_RS_ResourceId = 0;
    BuildSample_CSI_RS_ResourceMapping(value.resourceMapping, depth + 1);
}

void BuildSample_AerialParameters_r18(AerialParameters_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_AppLayerMeasParameters_r17(AppLayerMeasParameters_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombinationList(BandCombinationList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination*)std::malloc((std::size_t)value.count * sizeof(BandCombination));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1540(BandCombinationList_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1540*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1540));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1540));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1540(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1550(BandCombinationList_v1550& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1550*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1550));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1550));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1550(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1560(BandCombinationList_v1560& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1560*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1560));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1560));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1560(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1570(BandCombinationList_v1570& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1570*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1570));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1570));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1570(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1580(BandCombinationList_v1580& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1580*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1580));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1580));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1580(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1590(BandCombinationList_v1590& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1590*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1590));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1590));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1590(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v15g0(BandCombinationList_v15g0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v15g0*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v15g0));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v15g0));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v15g0(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v15n0(BandCombinationList_v15n0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v15n0*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v15n0));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v15n0));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v15n0(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1610(BandCombinationList_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1610*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1610));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1610));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1610(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1630(BandCombinationList_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1630*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1630));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1630));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1630(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1640(BandCombinationList_v1640& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1640*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1640));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1640));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1640(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1650(BandCombinationList_v1650& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1650*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1650));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1650));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1650(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1680(BandCombinationList_v1680& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1680*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1680));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1680));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1680(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1690(BandCombinationList_v1690& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1690*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1690));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1690));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1690(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v16a0(BandCombinationList_v16a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v16a0*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v16a0));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v16a0));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v16a0(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1700(BandCombinationList_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1700*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1700));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1700));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1700(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1720(BandCombinationList_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1720*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1720));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1720));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1720(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1730(BandCombinationList_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1730*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1730));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1730));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1730(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1740(BandCombinationList_v1740& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1740*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1740));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1740));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1740(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1760(BandCombinationList_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1760*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1760));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1760));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1760(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1770(BandCombinationList_v1770& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1770*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1770));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1770));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1770(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1780(BandCombinationList_v1780& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1780*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1780));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1780));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1780(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_v1800(BandCombinationList_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_v1800*)std::malloc((std::size_t)value.count * sizeof(BandCombination_v1800));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_v1800));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_v1800(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_r16(BandCombinationList_UplinkTxSwitch_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_r16*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1630(BandCombinationList_UplinkTxSwitch_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1630*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1630));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1630));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1630(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1640(BandCombinationList_UplinkTxSwitch_v1640& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1640*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1640));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1640));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1640(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1650(BandCombinationList_UplinkTxSwitch_v1650& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1650*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1650));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1650));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1650(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1670(BandCombinationList_UplinkTxSwitch_v1670& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1670*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1670));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1670));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1670(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1690(BandCombinationList_UplinkTxSwitch_v1690& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1690*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1690));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1690));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1690(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v16a0(BandCombinationList_UplinkTxSwitch_v16a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v16a0*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v16a0));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v16a0));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v16a0(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v16e0(BandCombinationList_UplinkTxSwitch_v16e0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v16e0*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v16e0));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v16e0));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v16e0(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1700(BandCombinationList_UplinkTxSwitch_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1700*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1700));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1700));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1700(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1720(BandCombinationList_UplinkTxSwitch_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1720*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1720));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1720));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1720(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1730(BandCombinationList_UplinkTxSwitch_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1730*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1730));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1730));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1730(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1740(BandCombinationList_UplinkTxSwitch_v1740& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1740*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1740));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1740));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1740(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1760(BandCombinationList_UplinkTxSwitch_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1760*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1760));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1760));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1760(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1770(BandCombinationList_UplinkTxSwitch_v1770& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1770*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1770));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1770));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1770(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1780(BandCombinationList_UplinkTxSwitch_v1780& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1780*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1780));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1780));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1780(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationList_UplinkTxSwitch_v1800(BandCombinationList_UplinkTxSwitch_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombination_UplinkTxSwitch_v1800*)std::malloc((std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1800));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombination_UplinkTxSwitch_v1800));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombination_UplinkTxSwitch_v1800(value.items[i], depth + 1);
        }
    }
}

void BuildSample_CA_ParametersEUTRA(CA_ParametersEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR(CA_ParametersNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MRDC_Parameters(MRDC_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination(BandCombination& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandList_count = 0u;
    value.featureSetCombination = 0;
}

void BuildSample_CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb(CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1540(CA_ParametersNR_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1540(BandCombination_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandList_v1540_count = 0u;
}

void BuildSample_CA_ParametersNR_v1550(CA_ParametersNR_v1550& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1550(BandCombination_v1550& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CA_ParametersNR_v1550(value.ca_ParametersNR_v1550, depth + 1);
}

void BuildSample_CA_ParametersEUTRA_v1560(CA_ParametersEUTRA_v1560& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1560(CA_ParametersNR_v1560& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC(CA_ParametersNRDC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1560(BandCombination_v1560& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersEUTRA_v1570(CA_ParametersEUTRA_v1570& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1570(BandCombination_v1570& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CA_ParametersEUTRA_v1570(value.ca_ParametersEUTRA_v1570, depth + 1);
}

void BuildSample_MRDC_Parameters_v1580(MRDC_Parameters_v1580& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1580(BandCombination_v1580& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MRDC_Parameters_v1580(value.mrdc_Parameters_v1580, depth + 1);
}

void BuildSample_MRDC_Parameters_v1590(MRDC_Parameters_v1590& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1590(BandCombination_v1590& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MRDC_Parameters_v1590(value.mrdc_Parameters_v1590, depth + 1);
}

void BuildSample_CA_ParametersNR_v15g0(CA_ParametersNR_v15g0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v15g0(CA_ParametersNRDC_v15g0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MRDC_Parameters_v15g0(MRDC_Parameters_v15g0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v15g0(BandCombination_v15g0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MRDC_Parameters_v15n0(MRDC_Parameters_v15n0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v15n0(BandCombination_v15n0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MRDC_Parameters_v15n0(value.mrdc_Parameters_v15n0, depth + 1);
}

void BuildSample_CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16(CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookParameters_v1610(CodebookParameters_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookParametersAdditionPerBC_r16(CodebookParametersAdditionPerBC_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookComboParametersAdditionPerBC_r16(CodebookComboParametersAdditionPerBC_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1610_InterFreqDAPS_r16(CA_ParametersNR_v1610_InterFreqDAPS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16(CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberOfMonitoringCC_r16 = 2;
    value.supportedSpanArrangement_r16 = CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16_SupportedSpanArrangement_r16_alignedOnly;
}

void BuildSample_CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16(CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionCA1_r16 = 1;
    value.pdcch_BlindDetectionCA2_r16 = 1;
    value.supportedSpanArrangement_r16 = CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16_SupportedSpanArrangement_r16_alignedOnly;
}

void BuildSample_CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16(CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionMCG_UE1_r16 = 0;
    value.pdcch_BlindDetectionMCG_UE2_r16 = 0;
}

void BuildSample_CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16(CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionSCG_UE1_r16 = 0;
    value.pdcch_BlindDetectionSCG_UE2_r16 = 0;
}

void BuildSample_CA_ParametersNR_v1610(CA_ParametersNR_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v1610(CA_ParametersNRDC_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16(MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MRDC_Parameters_v1620(MRDC_Parameters_v1620& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1610(BandCombination_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SimulSRS_ForAntennaSwitching_r16(SimulSRS_ForAntennaSwitching_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1630(CA_ParametersNR_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v1630(CA_ParametersNRDC_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16(MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MRDC_Parameters_v1630(MRDC_Parameters_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1630(BandCombination_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PUCCH_Grp_CarrierTypes_r16(PUCCH_Grp_CarrierTypes_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16(CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionCA1_r16 = 1;
    value.pdcch_BlindDetectionCA2_r16 = 1;
}

void BuildSample_CA_ParametersNR_v1640(CA_ParametersNR_v1640& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v1640(CA_ParametersNRDC_v1640& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1640(BandCombination_v1640& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v1650(CA_ParametersNRDC_v1650& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1650(BandCombination_v1650& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1680(BandCombination_v1680& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16(CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16(CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.computationTimeForA_CSI_r16 = CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_ComputationTimeForA_CSI_r16_sameAsNoCross;
    value.carrierTypePairList_r16_count = 0u;
}

void BuildSample_CA_ParametersNR_v1690(CA_ParametersNR_v1690& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1690(BandCombination_v1690& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v16a0(CA_ParametersNR_v16a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionMixedList_r16_count = 0u;
}

void BuildSample_CA_ParametersNRDC_v16a0(CA_ParametersNRDC_v16a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v16a0(BandCombination_v16a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17(CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CrossCarrierSchedulingSCell_SpCell_r17(CrossCarrierSchedulingSCell_SpCell_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17(value.supportedSCS_Combinations_r17, depth + 1);
    value.pdcch_MonitoringOccasion_r17 = CrossCarrierSchedulingSCell_SpCell_r17_Pdcch_MonitoringOccasion_r17_val1;
}

void BuildSample_CodebookParametersfetype2PerBC_r17(CodebookParametersfetype2PerBC_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.fetype2basic_r17_count = 0u;
}

void BuildSample_CodebookComboParameterMixedTypePerBC_r17(CodebookComboParameterMixedTypePerBC_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookComboParameterMultiTRP_PerBC_r17(CodebookComboParameterMultiTRP_PerBC_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17(CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumNZP_CSI_RS_r17 = 2;
    value.cSI_Report_mode_r17 = CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CSI_Report_mode_r17_mode1;
    value.supportedComboAcrossCCs_r17_count = 0u;
    value.codebookMode_NCJT_r17 = CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CodebookMode_NCJT_r17_mode1;
}

void BuildSample_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17(CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1700(CA_ParametersNR_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v1700(CA_ParametersNRDC_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MRDC_Parameters_v1700(MRDC_Parameters_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1700(BandCombination_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PUCCH_Group_Config_r17(PUCCH_Group_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17(CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_Group_r17 = CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17_Pucch_Group_r17_primaryGroupOnly;
    BuildSample_PUCCH_Group_Config_r17(value.pucch_Group_Config_r17, depth + 1);
}

void BuildSample_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17(CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_Group_r17 = CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17_Pucch_Group_r17_primaryGroupOnly;
    BuildSample_PUCCH_Group_Config_r17(value.pucch_Group_Config_r17, depth + 1);
}

void BuildSample_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17(CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pucch_Group_r17 = CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17_Pucch_Group_r17_primaryGroupOnly;
    BuildSample_PUCCH_Group_Config_r17(value.pucch_Group_Config_r17, depth + 1);
}

void BuildSample_CA_ParametersNR_v1720(CA_ParametersNR_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v1720(CA_ParametersNRDC_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1720(BandCombination_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1730(CA_ParametersNR_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v1730(CA_ParametersNRDC_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1730(BandCombination_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1740(CA_ParametersNR_v1740& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1740(BandCombination_v1740& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1760(CA_ParametersNR_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v1760(CA_ParametersNRDC_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CA_ParametersNR_v1760(value.ca_ParametersNR_ForDC_v1760, depth + 1);
}

void BuildSample_BandCombination_v1760(BandCombination_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CA_ParametersNR_v1760(value.ca_ParametersNR_v1760, depth + 1);
    BuildSample_CA_ParametersNRDC_v1760(value.ca_ParametersNRDC_v1760, depth + 1);
}

void BuildSample_CA_ParametersNR_v1770(CA_ParametersNR_v1770& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MRDC_Parameters_v1770(MRDC_Parameters_v1770& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1770(BandCombination_v1770& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandList_v1770_count = 0u;
}

void BuildSample_SupportedAggBandwidth_r17(SupportedAggBandwidth_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SupportedAggBandwidth_r17_Tag_fr1_r17;
    value.u.fr1_r17 = SupportedAggBandwidth_r17_Fr1_r17_mhz20;
}

void BuildSample_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17(CA_ParametersNR_v1780_SupportedAggBW_FR1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1780(CA_ParametersNR_v1780& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v1780(CA_ParametersNRDC_v1780& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1780(BandCombination_v1780& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18(CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceList_r18_count = 0u;
    value.valueY_P_SP_CSI_RS_r18 = 1;
    value.valueY_A_CSI_RS_r18 = 1;
    value.scalingfactor_r18 = CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18_Scalingfactor_r18_n1;
}

void BuildSample_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18(CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ReportSettingList1_r18_count = 0u;
    value.supportedCSI_RS_ReportSettingList2_r18_count = 0u;
}

void BuildSample_CodebookParametersetype2DopplerCSI_r18(CodebookParametersetype2DopplerCSI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18(value.eType2Doppler_r18, depth + 1);
}

void BuildSample_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18(CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceList_r18_count = 0u;
    value.valueY_A_CSI_RS_r18 = 1;
    value.scalingfactor_r18 = CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18_Scalingfactor_r18_n1;
}

void BuildSample_CodebookParametersfetype2DopplerCSI_r18(CodebookParametersfetype2DopplerCSI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18(value.feType2Doppler_r18, depth + 1);
}

void BuildSample_CodebookParametersetype2CJT_r18_EType2CJT_r18(CodebookParametersetype2CJT_r18_EType2CJT_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceList_r18_count = 0u;
    value.scalingfactor_r18 = CodebookParametersetype2CJT_r18_EType2CJT_r18_Scalingfactor_r18_n1;
    value.maxNumberNZP_CSI_RS_MultiTRP_CJT_r18 = 2;
}

void BuildSample_CodebookParametersetype2CJT_r18(CodebookParametersetype2CJT_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookParametersetype2CJT_r18_EType2CJT_r18(value.eType2CJT_r18, depth + 1);
}

void BuildSample_CodebookParametersfetype2CJT_r18_FeType2CJT_r18(CodebookParametersfetype2CJT_r18_FeType2CJT_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceList_r18_count = 0u;
    value.scalingfactor_r18 = CodebookParametersfetype2CJT_r18_FeType2CJT_r18_Scalingfactor_r18_n1;
    value.maxNumberNZP_CSI_RS_MultiTRP_CJT_r18 = 2;
}

void BuildSample_CodebookParametersfetype2CJT_r18(CodebookParametersfetype2CJT_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookParametersfetype2CJT_r18_FeType2CJT_r18(value.feType2CJT_r18, depth + 1);
}

void BuildSample_CodebookComboParametersCJT_r18(CodebookComboParametersCJT_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookParametersHARQ_ACK_PUSCH_r18(CodebookParametersHARQ_ACK_PUSCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18(CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.valueX_r18 = 1;
    value.maxNumberActiveResource_r18 = 2;
}

void BuildSample_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18(CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberConfigPerCC_r18 = CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18_n2;
    value.maxNumberConfigAcrossCC_r18 = 1;
    value.maxNumberSimultaneousPerCC_r18 = CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n2;
}

void BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sdType1_Resource_r18 = CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n5;
    value.sdType2_Resource_r18 = CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n5;
}

void BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sdType1_Resource_r18 = 1;
    value.sdType2_Resource_r18 = 1;
}

void BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(value.maxNumberCSI_ResourceAcrossCC_r18, depth + 1);
    BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18(value.maxNumberPortsAcrossCC_r18, depth + 1);
}

void BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberCSI_ResourceAcrossCC_r18 = CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5;
    value.maxNumberPortsAcrossCC_r18 = 1;
}

void BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sdType1_Resource_r18 = CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n5;
    value.sdType2_Resource_r18 = CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n5;
}

void BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sdType1_Resource_r18 = 1;
    value.sdType2_Resource_r18 = 1;
}

void BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(value.maxNumberCSI_ResourceAcrossCC_r18, depth + 1);
    BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18(value.maxNumberPortsAcrossCC_r18, depth + 1);
}

void BuildSample_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberCSI_ResourceAcrossCC_r18 = CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5;
    value.maxNumberPortsAcrossCC_r18 = 1;
}

void BuildSample_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18(CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberCSI_ResourceAcrossCC_r18 = CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5;
    value.maxNumberPortsAcrossCC_r18 = 1;
}

void BuildSample_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18(CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberCSI_ResourceAcrossCC_r18 = CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5;
    value.maxNumberPortsAcrossCC_r18 = 1;
}

void BuildSample_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18(CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberCSI_ResourceAcrossCC_r18 = CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5;
    value.maxNumberPortsAcrossCC_r18 = 1;
}

void BuildSample_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18(CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberCSI_ResourceAcrossCC_r18 = CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5;
    value.maxNumberPortsAcrossCC_r18 = 1;
}

void BuildSample_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18(CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18(CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18(value.coScheduledCellSCS_r18, depth + 1);
    value.maxNumberCoScheduledCell_r18 = 2;
    value.maxNumberSetsOfCellAcrossPUCCH_Group_r18 = 1;
    value.maxNumberSetsOfCellScheduling_r18 = 1;
    value.harqFeedbackType_r18 = CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_HarqFeedbackType_r18_type1;
    value.coScheduledCellIndicationScheme_r18 = CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18_fdra;
}

void BuildSample_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18(CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.coScheduledCellSCS_r18 = CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellSCS_r18_lowScheduling_highScheduled;
    value.combinationCarrierType_r18_count = 0u;
    value.maxNumberCoScheduledCell_r18 = 2;
    value.maxNumberSetsOfCellAcrossPUCCH_Group_r18 = 1;
    value.maxNumberSetsOfCellScheduling_r18 = 1;
    value.harqFeedbackType_r18 = CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_HarqFeedbackType_r18_type1;
    value.coScheduledCellIndicationScheme_r18 = CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18_fdra;
}

void BuildSample_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18(CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18(CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18(value.coScheduledCellSCS_r18, depth + 1);
    value.maxNumberCoScheduledCell_r18 = 2;
    value.maxNumberSetsOfCellAcrossPUCCH_Group_r18 = 1;
    value.maxNumberSetsOfCellScheduling_r18 = 1;
    value.coScheduledCellIndicationScheme_r18 = CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18_fdra;
}

void BuildSample_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18(CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.coScheduledCellSCS_r18 = CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellSCS_r18_lowScheduling_highScheduled;
    value.combinationCarrierType_r18_count = 0u;
    value.maxNumberCoScheduledCell_r18 = 2;
    value.maxNumberSetsOfCellAcrossPUCCH_Group_r18 = 1;
    value.maxNumberSetsOfCellScheduling_r18 = 1;
    value.coScheduledCellIndicationScheme_r18 = CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18_fdra;
}

void BuildSample_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18(CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18(CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18(CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.numberOfCodebook_r18 = CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18_NumberOfCodebook_r18_n1;
    value.maxNumberPUCCH_Trans_r18 = 1;
}

void BuildSample_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18(CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberOfMonitoringCC_r18 = 2;
    value.supportedSpanArrangement_r18 = CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18_SupportedSpanArrangement_r18_alignedOnly;
}

void BuildSample_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18(CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.blindDetectionCA_Mixed_r18_count = 0u;
    value.supportedSpanArrangement_r18 = CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18_SupportedSpanArrangement_r18_alignedOnly;
}

void BuildSample_CA_ParametersNR_v1800(CA_ParametersNR_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CA_ParametersNRDC_v1800(CA_ParametersNRDC_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_v1800(BandCombination_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_r16(BandCombination_UplinkTxSwitch_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_BandCombination(value.bandCombination_r16, depth + 1);
    value.supportedBandPairListNR_r16_count = 0u;
}

void BuildSample_BandCombination_UplinkTxSwitch_v1630(BandCombination_UplinkTxSwitch_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1640(BandCombination_UplinkTxSwitch_v1640& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1650(BandCombination_UplinkTxSwitch_v1650& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1670(BandCombination_UplinkTxSwitch_v1670& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1690(BandCombination_UplinkTxSwitch_v1690& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v16a0(BandCombination_UplinkTxSwitch_v16a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v16e0(BandCombination_UplinkTxSwitch_v16e0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1700(BandCombination_UplinkTxSwitch_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1720(BandCombination_UplinkTxSwitch_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1730(BandCombination_UplinkTxSwitch_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1740(BandCombination_UplinkTxSwitch_v1740& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1760(BandCombination_UplinkTxSwitch_v1760& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1770(BandCombination_UplinkTxSwitch_v1770& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1780(BandCombination_UplinkTxSwitch_v1780& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombination_UplinkTxSwitch_v1800(BandCombination_UplinkTxSwitch_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ULTxSwitchingBandPair_r16(ULTxSwitchingBandPair_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandIndexUL1_r16 = 1;
    value.bandIndexUL2_r16 = 1;
    value.uplinkTxSwitchingPeriod_r16 = ULTxSwitchingBandPair_r16_UplinkTxSwitchingPeriod_r16_n35us;
}

void BuildSample_ULTxSwitchingBandPair_v1700(ULTxSwitchingBandPair_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18(ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.switchingPeriodFor1T_r18 = ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor1T_r18_n35us;
}

void BuildSample_ULTxSwitchingBandPair_r18(ULTxSwitchingBandPair_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandIndexUL1_r18 = 1;
    value.bandIndexUL2_r18 = 1;
    value.uplinkTxSwitchingOptionForBandPair_r18 = ULTxSwitchingBandPair_r18_UplinkTxSwitchingOptionForBandPair_r18_switchedUL;
    BuildSample_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18(value.uplinkTxSwitchingPeriodForBandPair_r18, depth + 1);
}

void BuildSample_UplinkTxSwitchingBandParameters_v1700(UplinkTxSwitchingBandParameters_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandIndex_r17 = 1;
}

void BuildSample_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18(UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag_bandPairIndex2_r18;
    value.u.bandPairIndex2_r18 = 1;
}

void BuildSample_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18(UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandPairIndex1_r18 = 1;
    BuildSample_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18(value.anotherBandPairOrBand_r18, depth + 1);
}

void BuildSample_UplinkTxSwitchingAdditionalPeriodDualUL_r18(UplinkTxSwitchingAdditionalPeriodDualUL_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18(value.uplinkTxSwitchingBetweenBandPairs_r18, depth + 1);
    value.switchingAdditionalPeriodDualUL_r18 = UplinkTxSwitchingAdditionalPeriodDualUL_r18_SwitchingAdditionalPeriodDualUL_r18_n35us;
}

void BuildSample_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18(SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag_maintainedUL_Trans_r18;
}

void BuildSample_SwitchingPeriodUnaffectedBandDualUL_r18(SwitchingPeriodUnaffectedBandDualUL_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandIndexUnaffected_r18 = 1;
    BuildSample_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18(value.periodUnaffectedBandDualUL_r18, depth + 1);
}

void BuildSample_BandParameters_Eutra(BandParameters_Eutra& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandEUTRA = 1;
}

void BuildSample_BandParameters_Nr(BandParameters_Nr& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandNR = 1;
}

void BuildSample_BandParameters(BandParameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandParameters_Tag_eutra;
    BuildSample_BandParameters_Eutra(value.u.eutra, depth + 1);
}

void BuildSample_BandParameters_v1540_Srs_CarrierSwitch_Nr(BandParameters_v1540_Srs_CarrierSwitch_Nr& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_SwitchingTimesListNR_count = 0u;
}

void BuildSample_BandParameters_v1540_Srs_CarrierSwitch_Eutra(BandParameters_v1540_Srs_CarrierSwitch_Eutra& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_SwitchingTimesListEUTRA_count = 0u;
}

void BuildSample_BandParameters_v1540_Srs_CarrierSwitch(BandParameters_v1540_Srs_CarrierSwitch& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandParameters_v1540_Srs_CarrierSwitch_Tag_nr;
    BuildSample_BandParameters_v1540_Srs_CarrierSwitch_Nr(value.u.nr, depth + 1);
}

void BuildSample_BandParameters_v1540_Srs_TxSwitch(BandParameters_v1540_Srs_TxSwitch& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedSRS_TxPortSwitch = BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch_t1r2;
}

void BuildSample_BandParameters_v1540(BandParameters_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParameters_v1610_Srs_TxSwitch_v1610(BandParameters_v1610_Srs_TxSwitch_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedSRS_TxPortSwitch_v1610 = BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610_t1r1_t1r2;
}

void BuildSample_BandParameters_v1610(BandParameters_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17(BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bitLength = 11u;
    value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bytes = (std::uint8_t*)std::malloc(2u);
    if (value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bytes != nullptr) {
        std::memset(value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bytes, 0, 2u);
    }
}

void BuildSample_BandParameters_v1710(BandParameters_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParameters_v1730(BandParameters_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.srs_SwitchingAffectedBandsListNR_r17_count = 0u;
}

void BuildSample_BandParameters_v1770(BandParameters_v1770& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParameters_v1780_SupportedAggBW_FR2_r17(BandParameters_v1780_SupportedAggBW_FR2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParameters_v1780(BandParameters_v1780& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18(BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag_empty_r18;
}

void BuildSample_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18(BandParameters_v1810_Srs_AntennaSwitching8T8R_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.antennaSwitch8T8R_r18 = BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_AntennaSwitch8T8R_r18_noTdm;
    value.entryNumberAffect_r18 = 1;
    value.entryNumberSwtich_r18 = 1;
}

void BuildSample_BandParameters_v1810(BandParameters_v1810& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandCombinationListSidelinkEUTRA_NR_r16(BandCombinationListSidelinkEUTRA_NR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombinationParametersSidelinkEUTRA_NR_r16*)std::malloc((std::size_t)value.count * sizeof(BandCombinationParametersSidelinkEUTRA_NR_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombinationParametersSidelinkEUTRA_NR_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombinationParametersSidelinkEUTRA_NR_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationListSidelinkEUTRA_NR_v1630(BandCombinationListSidelinkEUTRA_NR_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombinationParametersSidelinkEUTRA_NR_v1630*)std::malloc((std::size_t)value.count * sizeof(BandCombinationParametersSidelinkEUTRA_NR_v1630));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombinationParametersSidelinkEUTRA_NR_v1630));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombinationParametersSidelinkEUTRA_NR_v1630(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationListSidelinkEUTRA_NR_v1710(BandCombinationListSidelinkEUTRA_NR_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandCombinationParametersSidelinkEUTRA_NR_v1710*)std::malloc((std::size_t)value.count * sizeof(BandCombinationParametersSidelinkEUTRA_NR_v1710));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandCombinationParametersSidelinkEUTRA_NR_v1710));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandCombinationParametersSidelinkEUTRA_NR_v1710(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationParametersSidelinkEUTRA_NR_r16(BandCombinationParametersSidelinkEUTRA_NR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandParametersSidelinkEUTRA_NR_r16*)std::malloc((std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandParametersSidelinkEUTRA_NR_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationParametersSidelinkEUTRA_NR_v1630(BandCombinationParametersSidelinkEUTRA_NR_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandParametersSidelinkEUTRA_NR_v1630*)std::malloc((std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_v1630));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_v1630));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandParametersSidelinkEUTRA_NR_v1630(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandCombinationParametersSidelinkEUTRA_NR_v1710(BandCombinationParametersSidelinkEUTRA_NR_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandParametersSidelinkEUTRA_NR_v1710*)std::malloc((std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_v1710));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_v1710));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandParametersSidelinkEUTRA_NR_v1710(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandParametersSidelinkEUTRA_NR_r16_Eutra(BandParametersSidelinkEUTRA_NR_r16_Eutra& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParametersSidelink_r16(BandParametersSidelink_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.freqBandSidelink_r16 = 1;
}

void BuildSample_BandParametersSidelinkEUTRA_NR_r16_Nr(BandParametersSidelinkEUTRA_NR_r16_Nr& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_BandParametersSidelink_r16(value.bandParametersSidelinkNR_r16, depth + 1);
}

void BuildSample_BandParametersSidelinkEUTRA_NR_r16(BandParametersSidelinkEUTRA_NR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandParametersSidelinkEUTRA_NR_r16_Tag_eutra;
    BuildSample_BandParametersSidelinkEUTRA_NR_r16_Eutra(value.u.eutra, depth + 1);
}

void BuildSample_BandParametersSidelinkEUTRA_NR_v1630_Nr(BandParametersSidelinkEUTRA_NR_v1630_Nr& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParametersSidelinkEUTRA_NR_v1630(BandParametersSidelinkEUTRA_NR_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandParametersSidelinkEUTRA_NR_v1630_Tag_eutra;
}

void BuildSample_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71(BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6(BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17;
    BuildSample_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71(value.u.fr1_r17, depth + 1);
}

void BuildSample_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17(BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.harq_TxProcessModeTwoSidelink_r17 = BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17_n8;
}

void BuildSample_BandParametersSidelinkEUTRA_NR_v1710_Nr(BandParametersSidelinkEUTRA_NR_v1710_Nr& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParametersSidelinkEUTRA_NR_v1710(BandParametersSidelinkEUTRA_NR_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandParametersSidelinkEUTRA_NR_v1710_Tag_eutra;
}

void BuildSample_BandCombinationListSL_Discovery_r17(BandCombinationListSL_Discovery_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (BandParametersSidelinkDiscovery_r17*)std::malloc((std::size_t)value.count * sizeof(BandParametersSidelinkDiscovery_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandParametersSidelinkDiscovery_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_BandParametersSidelinkDiscovery_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17;
    BuildSample_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(value.u.fr1_r17, depth + 1);
}

void BuildSample_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17(BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.harq_TxProcessModeTwoSidelink_r17 = BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17_n8;
}

void BuildSample_BandParametersSidelinkDiscovery_r17(BandParametersSidelinkDiscovery_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCCH_BlindDetectionCA_MixedExt_r16(PDCCH_BlindDetectionCA_MixedExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionCA1_r16 = 1;
    value.pdcch_BlindDetectionCA2_r16 = 1;
}

void BuildSample_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16(PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag_pdcch_BlindDetectionCA_Mixed_v16a0;
    BuildSample_PDCCH_BlindDetectionCA_MixedExt_r16(value.u.pdcch_BlindDetectionCA_Mixed_v16a0, depth + 1);
}

void BuildSample_PDCCH_BlindDetectionCG_UE_MixedExt_r16(PDCCH_BlindDetectionCG_UE_MixedExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionCG_UE1_r16 = 0;
    value.pdcch_BlindDetectionCG_UE2_r16 = 0;
}

void BuildSample_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16(PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PDCCH_BlindDetectionCG_UE_MixedExt_r16(value.pdcch_BlindDetectionMCG_UE_Mixed_v16a0, depth + 1);
    BuildSample_PDCCH_BlindDetectionCG_UE_MixedExt_r16(value.pdcch_BlindDetectionSCG_UE_Mixed_v16a0, depth + 1);
}

void BuildSample_PDCCH_BlindDetectionMixedList_r16(PDCCH_BlindDetectionMixedList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCCH_BlindDetectionMCG_SCG_r17(PDCCH_BlindDetectionMCG_SCG_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionMCG_UE_r17 = 1;
    value.pdcch_BlindDetectionSCG_UE_r17 = 1;
}

void BuildSample_PDCCH_BlindDetectionCA_Mixed_r17(PDCCH_BlindDetectionCA_Mixed_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCCH_BlindDetectionCG_UE_Mixed_r17(PDCCH_BlindDetectionCG_UE_Mixed_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionCG_UE1_r17 = 0;
    value.pdcch_BlindDetectionCG_UE2_r17 = 0;
}

void BuildSample_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17(PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PDCCH_BlindDetectionCG_UE_Mixed_r17(value.pdcch_BlindDetectionMCG_UE_Mixed_v17, depth + 1);
    BuildSample_PDCCH_BlindDetectionCG_UE_Mixed_r17(value.pdcch_BlindDetectionSCG_UE_Mixed_v17, depth + 1);
}

void BuildSample_PDCCH_BlindDetectionMixed_r17(PDCCH_BlindDetectionMixed_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCCH_BlindDetectionCA_Mixed1_r17(PDCCH_BlindDetectionCA_Mixed1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCCH_BlindDetectionCG_UE_Mixed1_r17(PDCCH_BlindDetectionCG_UE_Mixed1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionCG_UE1_r17 = 0;
    value.pdcch_BlindDetectionCG_UE2_r17 = 0;
    value.pdcch_BlindDetectionCG_UE3_r17 = 0;
}

void BuildSample_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17(PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PDCCH_BlindDetectionCG_UE_Mixed1_r17(value.pdcch_BlindDetectionMCG_UE_Mixed1_v17, depth + 1);
    BuildSample_PDCCH_BlindDetectionCG_UE_Mixed1_r17(value.pdcch_BlindDetectionSCG_UE_Mixed1_v17, depth + 1);
}

void BuildSample_PDCCH_BlindDetectionMixed1_r17(PDCCH_BlindDetectionMixed1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCCH_BlindDetectionCG_UE_Mixed_r18(PDCCH_BlindDetectionCG_UE_Mixed_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionCG_UE1_r18 = 0;
    value.pdcch_BlindDetectionCG_UE2_r18 = 0;
}

void BuildSample_PDCCH_BlindDetectionMCG_SCG_r18(PDCCH_BlindDetectionMCG_SCG_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PDCCH_BlindDetectionCG_UE_Mixed_r18(value.pdcch_BlindDetectionMCG_UE_Mixed_r18, depth + 1);
    BuildSample_PDCCH_BlindDetectionCG_UE_Mixed_r18(value.pdcch_BlindDetectionSCG_UE_Mixed_r18, depth + 1);
}

void BuildSample_PDCCH_BlindDetectionCA_Mixed_r18(PDCCH_BlindDetectionCA_Mixed_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionCA1_r18 = 1;
    value.pdcch_BlindDetectionCA2_r18 = 1;
}

void BuildSample_TwoPUCCH_Grp_ConfigParams_r16(TwoPUCCH_Grp_ConfigParams_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PUCCH_Grp_CarrierTypes_r16(value.pucch_GroupMapping_r16, depth + 1);
    BuildSample_PUCCH_Grp_CarrierTypes_r16(value.pucch_TX_r16, depth + 1);
}

void BuildSample_TwoPUCCH_Grp_Configurations_r16(TwoPUCCH_Grp_Configurations_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_TwoPUCCH_Grp_ConfigParams_r16(value.pucch_PrimaryGroupMapping_r16, depth + 1);
    BuildSample_TwoPUCCH_Grp_ConfigParams_r16(value.pucch_SecondaryGroupMapping_r16, depth + 1);
}

void BuildSample_TwoPUCCH_Grp_Configurations_r17(TwoPUCCH_Grp_Configurations_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PUCCH_Group_Config_r17(value.primaryPUCCH_GroupConfig_r17, depth + 1);
    BuildSample_PUCCH_Group_Config_r17(value.secondaryPUCCH_GroupConfig_r17, depth + 1);
}

void BuildSample_CarrierTypePair_r16(CarrierTypePair_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PUCCH_Grp_CarrierTypes_r16(value.carrierForCSI_Measurement_r16, depth + 1);
    BuildSample_PUCCH_Grp_CarrierTypes_r16(value.carrierForCSI_Reporting_r16, depth + 1);
}

void BuildSample_CombinationCarrierType_r18(CombinationCarrierType_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.schedulingCellCarrierType_r18 = CombinationCarrierType_r18_SchedulingCellCarrierType_r18_licensed_fdd_fr1;
    value.scheduledCellCarrierType_r18 = CombinationCarrierType_r18_ScheduledCellCarrierType_r18_licensed_fdd_fr1;
}

void BuildSample_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18(PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PDCCH_BlindDetectionCG_UE_Mixed_r18(value.pdcch_BlindDetectionMCG_UE_Mixed_r18, depth + 1);
    BuildSample_PDCCH_BlindDetectionCG_UE_Mixed_r18(value.pdcch_BlindDetectionSCG_UE_Mixed_r18, depth + 1);
}

void BuildSample_PDCCH_BlindDetectionMixed1_r18(PDCCH_BlindDetectionMixed1_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18(value.pdcch_BlindDetectionCG_UE_Mixed_r18, depth + 1);
}

void BuildSample_CarrierAggregationVariant(CarrierAggregationVariant& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookParameters_Type1_SinglePanel(CodebookParameters_Type1_SinglePanel& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceList_count = 0u;
    value.modes = CodebookParameters_Type1_SinglePanel_Modes_mode1;
    value.maxNumberCSI_RS_PerResourceSet = 1;
}

void BuildSample_CodebookParameters_Type1_MultiPanel(CodebookParameters_Type1_MultiPanel& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceList_count = 0u;
    value.modes = CodebookParameters_Type1_MultiPanel_Modes_mode1;
    value.nrofPanels = CodebookParameters_Type1_MultiPanel_NrofPanels_n2;
    value.maxNumberCSI_RS_PerResourceSet = 1;
}

void BuildSample_CodebookParameters_Type1(CodebookParameters_Type1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookParameters_Type1_SinglePanel(value.singlePanel, depth + 1);
}

void BuildSample_CodebookParameters_Type2(CodebookParameters_Type2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceList_count = 0u;
    value.parameterLx = 2;
    value.amplitudeScalingType = CodebookParameters_Type2_AmplitudeScalingType_wideband;
}

void BuildSample_CodebookParameters_Type2_PortSelection(CodebookParameters_Type2_PortSelection& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceList_count = 0u;
    value.parameterLx = 2;
    value.amplitudeScalingType = CodebookParameters_Type2_PortSelection_AmplitudeScalingType_wideband;
}

void BuildSample_CodebookParameters(CodebookParameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookParameters_Type1(value.type1, depth + 1);
}

void BuildSample_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16(CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16(CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookParametersAddition_r16_Etype2_r16(CodebookParametersAddition_r16_Etype2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16(value.etype2R1_r16, depth + 1);
}

void BuildSample_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16(CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16(CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookParametersAddition_r16_Etype2_PS_r16(CodebookParametersAddition_r16_Etype2_PS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16(value.etype2R1_PortSelection_r16, depth + 1);
}

void BuildSample_CodebookParametersAddition_r16(CodebookParametersAddition_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16(CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16(CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16(CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16(CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16(CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16(CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16(CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16(CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16(CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16(CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16(CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16(CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16(CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16(CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0u;
}

void BuildSample_CodebookComboParametersAddition_r16(CodebookComboParametersAddition_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookParametersfetype2_r17(CodebookParametersfetype2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.fetype2basic_r17_count = 0u;
}

void BuildSample_CodebookComboParameterMixedType_r17(CodebookComboParameterMixedType_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookComboParameterMultiTRP_r17(CodebookComboParameterMultiTRP_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CodebookVariantsList_r16(CodebookVariantsList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SupportedCSI_RS_Resource*)std::malloc((std::size_t)value.count * sizeof(SupportedCSI_RS_Resource));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SupportedCSI_RS_Resource));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SupportedCSI_RS_Resource(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SupportedCSI_RS_Resource(SupportedCSI_RS_Resource& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberTxPortsPerResource = SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource_p2;
    value.maxNumberResourcesPerBand = 1;
    value.totalNumberTxPortsPerBand = 2;
}

void BuildSample_SupportedCSI_RS_ReportSetting_r18(SupportedCSI_RS_ReportSetting_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxN4_r18 = SupportedCSI_RS_ReportSetting_r18_MaxN4_r18_n1;
    value.maxNumberTxPortsPerResource_r18 = SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18_p2;
    value.maxNumberResourcesPerBand_r18 = 1;
    value.totalNumberTxPortsPerBand_r18 = 2;
}

void BuildSample_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18(DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.processingPRS_SymbolsDurationN3_r18 = DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_msDot125;
    value.processingDurationT3_r18 = DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms8;
}

void BuildSample_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18(DL_PRS_MeasurementWithRxFH_RRC_Connected_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ERedCapParameters_r18(ERedCapParameters_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportOfERedCap_r18 = ERedCapParameters_r18_SupportOfERedCap_r18_supported;
}

void BuildSample_FeatureSetCombination(FeatureSetCombination& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (FeatureSetsPerBand*)std::malloc((std::size_t)value.count * sizeof(FeatureSetsPerBand));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(FeatureSetsPerBand));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_FeatureSetsPerBand(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FeatureSetsPerBand(FeatureSetsPerBand& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (FeatureSet*)std::malloc((std::size_t)value.count * sizeof(FeatureSet));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(FeatureSet));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_FeatureSet(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FeatureSet_Eutra(FeatureSet_Eutra& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.downlinkSetEUTRA = 0;
    value.uplinkSetEUTRA = 0;
}

void BuildSample_FeatureSet_Nr(FeatureSet_Nr& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.downlinkSetNR = 0;
    value.uplinkSetNR = 0;
}

void BuildSample_FeatureSet(FeatureSet& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = FeatureSet_Tag_eutra;
    BuildSample_FeatureSet_Eutra(value.u.eutra, depth + 1);
}

void BuildSample_DummyA(DummyA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberNZP_CSI_RS_PerCC = 1;
    value.maxNumberPortsAcrossNZP_CSI_RS_PerCC = DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p2;
    value.maxNumberCS_IM_PerCC = DummyA_MaxNumberCS_IM_PerCC_n1;
    value.maxNumberSimultaneousCSI_RS_ActBWP_AllCC = DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n5;
    value.totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC = DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p8;
}

void BuildSample_FeatureSetDownlink_TimeDurationForQCL(FeatureSetDownlink_TimeDurationForQCL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot(FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink(FeatureSetDownlink& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.featureSetListPerDownlinkCC_count = 0u;
}

void BuildSample_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap(FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ProcessingParameters_DifferentTB_PerSlot(ProcessingParameters_DifferentTB_PerSlot& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_ProcessingParameters(ProcessingParameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.fallback = ProcessingParameters_Fallback_sc;
}

void BuildSample_FeatureSetDownlink_v1540_Pdsch_ProcessingType2(FeatureSetDownlink_v1540_Pdsch_ProcessingType2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited(FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.differentTB_PerSlot_SCS_30kHz = FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited_DifferentTB_PerSlot_SCS_30kHz_upto1;
}

void BuildSample_FeatureSetDownlink_v1540(FeatureSetDownlink_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_Resources(SRS_Resources& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberAperiodicSRS_PerBWP = SRS_Resources_MaxNumberAperiodicSRS_PerBWP_n1;
    value.maxNumberAperiodicSRS_PerBWP_PerSlot = 1;
    value.maxNumberPeriodicSRS_PerBWP = SRS_Resources_MaxNumberPeriodicSRS_PerBWP_n1;
    value.maxNumberPeriodicSRS_PerBWP_PerSlot = 1;
    value.maxNumberSemiPersistentSRS_PerBWP = SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP_n1;
    value.maxNumberSemiPersistentSRS_PerBWP_PerSlot = 1;
    value.maxNumberSRS_Ports_PerResource = SRS_Resources_MaxNumberSRS_Ports_PerResource_n1;
}

void BuildSample_FeatureSetDownlink_v15a0(FeatureSetDownlink_v15a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16(FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16(FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1610_IntraFreqDAPS_r16(FeatureSetDownlink_v1610_IntraFreqDAPS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCCH_MonitoringOccasions_r16(PDCCH_MonitoringOccasions_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16(FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16(FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16(FeatureSetDownlink_v1610_Pdcch_Monitoring_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1610(FeatureSetDownlink_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1700_TimeDurationForQCL_v1710(FeatureSetDownlink_v1700_TimeDurationForQCL_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCCH_RepetitionParameters_r17(PDCCH_RepetitionParameters_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedMode_r17 = PDCCH_RepetitionParameters_r17_SupportedMode_r17_intra_span;
}

void BuildSample_FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17(FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17(FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17(FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.numBD_twoPDCCH_r17 = 2;
    value.maxNumOverlaps_r17 = FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17_n1;
}

void BuildSample_FeatureSetDownlink_v1700(FeatureSetDownlink_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17(FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17(FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPRS_Resource_r17 = FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17_n1;
    BuildSample_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17(value.maxNumberPRS_ResourceProcessedPerSlot_r17, depth + 1);
}

void BuildSample_FeatureSetDownlink_v1720(FeatureSetDownlink_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1730(FeatureSetDownlink_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18(FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18(FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18(FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18(FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18(value.pdsch_ProcessingType1_r18, depth + 1);
    BuildSample_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18(value.pdsch_ProcessingType2_r18, depth + 1);
}

void BuildSample_FeatureSetDownlink_v1800(FeatureSetDownlink_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DummyB(DummyB& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberTxPortsPerResource = DummyB_MaxNumberTxPortsPerResource_p2;
    value.maxNumberResources = 1;
    value.totalNumberTxPorts = 2;
    value.supportedCodebookMode = DummyB_SupportedCodebookMode_mode1;
    value.maxNumberCSI_RS_PerResourceSet = 1;
}

void BuildSample_DummyC(DummyC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberTxPortsPerResource = DummyC_MaxNumberTxPortsPerResource_p8;
    value.maxNumberResources = 1;
    value.totalNumberTxPorts = 2;
    value.supportedCodebookMode = DummyC_SupportedCodebookMode_mode1;
    value.supportedNumberPanels = DummyC_SupportedNumberPanels_n2;
    value.maxNumberCSI_RS_PerResourceSet = 1;
}

void BuildSample_DummyD(DummyD& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberTxPortsPerResource = DummyD_MaxNumberTxPortsPerResource_p4;
    value.maxNumberResources = 1;
    value.totalNumberTxPorts = 2;
    value.parameterLx = 2;
    value.amplitudeScalingType = DummyD_AmplitudeScalingType_wideband;
    value.maxNumberCSI_RS_PerResourceSet = 1;
}

void BuildSample_DummyE(DummyE& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberTxPortsPerResource = DummyE_MaxNumberTxPortsPerResource_p4;
    value.maxNumberResources = 1;
    value.totalNumberTxPorts = 2;
    value.parameterLx = 2;
    value.amplitudeScalingType = DummyE_AmplitudeScalingType_wideband;
    value.maxNumberCSI_RS_PerResourceSet = 1;
}

void BuildSample_FeatureSetDownlinkPerCC(FeatureSetDownlinkPerCC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedSubcarrierSpacingDL = SubcarrierSpacing_kHz15;
    BuildSample_SupportedBandwidth(value.supportedBandwidthDL, depth + 1);
}

void BuildSample_MultiDCI_MultiTRP_r16(MultiDCI_MultiTRP_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberCORESET_r16 = MultiDCI_MultiTRP_r16_MaxNumberCORESET_r16_n2;
    value.maxNumberCORESETPerPoolIndex_r16 = 1;
    value.maxNumberUnicastPDSCH_PerPool_r16 = MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16_n1;
}

void BuildSample_FeatureSetDownlinkPerCC_v1620(FeatureSetDownlinkPerCC_v1620& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CRS_InterfMitigation_r17(CRS_InterfMitigation_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SupportedBandwidth_v1700(SupportedBandwidth_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SupportedBandwidth_v1700_Tag_fr1_r17;
    value.u.fr1_r17 = SupportedBandwidth_v1700_Fr1_r17_mhz5;
}

void BuildSample_FeatureSetDownlinkPerCC_v1700(FeatureSetDownlinkPerCC_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlinkPerCC_v1720(FeatureSetDownlinkPerCC_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlinkPerCC_v1730(FeatureSetDownlinkPerCC_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlinkPerCC_v1780(FeatureSetDownlinkPerCC_v1780& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetDownlinkPerCC_v1800(FeatureSetDownlinkPerCC_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSets(FeatureSets& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSets_v16d0(FeatureSets_v16d0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_DummyF(DummyF& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPeriodicCSI_ReportPerBWP = 1;
    value.maxNumberAperiodicCSI_ReportPerBWP = 1;
    value.maxNumberSemiPersistentCSI_ReportPerBWP = 0;
    value.simultaneousCSI_ReportsAllCC = 5;
}

void BuildSample_DummyI(DummyI& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedSRS_TxPortSwitch = DummyI_SupportedSRS_TxPortSwitch_t1r2;
}

void BuildSample_FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot(FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink(FeatureSetUplink& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.featureSetListPerUplinkCC_count = 0u;
}

void BuildSample_FeatureSetUplink_v1540_Pusch_ProcessingType2(FeatureSetUplink_v1540_Pusch_ProcessingType2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1540(FeatureSetUplink_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_PosResources_r16(SRS_PosResources_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_PosResourceSetPerBWP_r16 = SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16_n1;
    value.maxNumberSRS_PosResourcesPerBWP_r16 = SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16_n1;
    value.maxNumberSRS_ResourcesPerBWP_PerSlot_r16 = SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n1;
    value.maxNumberPeriodicSRS_PosResourcesPerBWP_r16 = SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16_n1;
    value.maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16 = SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n1;
}

void BuildSample_SRS_PosResourceAP_r16(SRS_PosResourceAP_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberAP_SRS_PosResourcesPerBWP_r16 = SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16_n1;
    value.maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16 = SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n1;
}

void BuildSample_SRS_PosResourceSP_r16(SRS_PosResourceSP_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSP_SRS_PosResourcesPerBWP_r16 = SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16_n1;
    value.maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16 = SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n1;
}

void BuildSample_SRS_AllPosResources_r16(SRS_AllPosResources_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_PosResources_r16(value.srs_PosResources_r16, depth + 1);
}

void BuildSample_FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16(FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPUSCH_Tx_r16 = FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16_n2;
    value.hoppingScheme_r16 = FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_HoppingScheme_r16_interSlotHopping;
}

void BuildSample_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16(FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16(FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16(FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1610_MultiPUCCH_r16(FeatureSetUplink_v1610_MultiPUCCH_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16(FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pusch_PreparationLowPriority_r16 = FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationLowPriority_r16_sym0;
    value.pusch_PreparationHighPriority_r16 = FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationHighPriority_r16_sym0;
}

void BuildSample_FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16(FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1610(FeatureSetUplink_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1630(FeatureSetUplink_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SubSlot_Config_r16(SubSlot_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16(FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1640(FeatureSetUplink_v1640& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0(FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPUSCH_Tx_Cap1_r16 = FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16_n2;
    value.maxNumberPUSCH_Tx_Cap2_r16 = FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16_n2;
}

void BuildSample_FeatureSetUplink_v16d0(FeatureSetUplink_v16d0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1710(FeatureSetUplink_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17(FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17(FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pusch_PreparationLowPriority_r17 = FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_Pusch_PreparationLowPriority_r17_sym0;
    BuildSample_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17(value.additionalCancellationTime_r17, depth + 1);
    value.maxNumberCarriers_r17 = 1;
}

void BuildSample_FeatureSetUplink_v1720(FeatureSetUplink_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PosSRS_BWA_RRC_Connected_r18(PosSRS_BWA_RRC_Connected_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PosSRS_BWA_IndependentCA_RRC_Connected_r18(PosSRS_BWA_IndependentCA_RRC_Connected_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18(FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dmrs_TypeA_r18 = FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Dmrs_TypeA_r18_supported;
}

void BuildSample_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18(FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dmrs_Type_r18 = FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Dmrs_Type_r18_etype1;
}

void BuildSample_FeatureSetUplink_v1800(FeatureSetUplink_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplinkPerCC_Mimo_CB_PUSCH(FeatureSetUplinkPerCC_Mimo_CB_PUSCH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_ResourcePerSet = 1;
}

void BuildSample_FeatureSetUplinkPerCC(FeatureSetUplinkPerCC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedSubcarrierSpacingUL = SubcarrierSpacing_kHz15;
    BuildSample_SupportedBandwidth(value.supportedBandwidthUL, depth + 1);
}

void BuildSample_FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH(FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_ResourcePerSet = 1;
    value.maxNumberSimultaneousSRS_ResourceTx = 1;
}

void BuildSample_FeatureSetUplinkPerCC_v1540(FeatureSetUplinkPerCC_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplinkPerCC_v1700(FeatureSetUplinkPerCC_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplinkPerCC_v1780(FeatureSetUplinkPerCC_v1780& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18(FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_ResourcePerSet_r18 = FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_ResourcePerSet_r18_n1;
    value.maxNumberLayerPerPanel_r18 = 1;
    value.maxNumberNZP_PUSCH_PortsPerSet_r18 = FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18_n1;
    value.maxNumberSRS_AntennaPortsPerSet_r18 = FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n1;
}

void BuildSample_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18(FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_ResourcePerSet_r18 = 1;
    value.maxNumberLayerPerPanel_r18 = 1;
    value.maxNumberSimulSRS_ResourcePerSet_r18 = 1;
}

void BuildSample_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18(FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_ResourcePerSet_r18 = FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_ResourcePerSet_r18_n1;
    value.maxNumberLayerPerSet_r18 = 1;
    value.maxNumberSRS_AntennaPortsPerSet_r18 = FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n1;
    value.maxNumberNZP_PUSCH_PortsPerSet_r18 = FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18_n1;
}

void BuildSample_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18(FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_ResourcePerSet_r18 = 1;
    value.maxNumberLayerPerSet_r18 = 1;
    value.maxNumberSimulSRS_ResourcePerSet_r18 = 1;
}

void BuildSample_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18(FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_ResourcePerSet_r18 = FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_ResourcePerSet_r18_n1;
    value.maxNumberLayerOverlapping_r18 = 1;
    value.maxNumberNZP_PUSCH_Overlapping_r18 = FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberNZP_PUSCH_Overlapping_r18_n1;
    value.maxNumberTotalLayerOverlapping_r18 = 2;
    value.maxNumberSRS_AntennaPortsPerSet_r18 = FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n1;
}

void BuildSample_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18(FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_ResourcePerSet_r18 = 1;
    value.maxNumberLayerOverlapping_r18 = 1;
    value.maxNumberSimulSRS_ResourcePerSet_r18 = 1;
    value.maxNumberTotalLayerOverlapping_r18 = 2;
}

void BuildSample_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18(FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPUSCH_MIMO_Layer_r18 = 1;
    value.maxNumberSRS_Resource_r18 = 1;
    value.srs_8TxPorts_r18 = FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18_Srs_8TxPorts_r18_noTDM;
}

void BuildSample_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18(FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18(value.codebook_8TxBasic_r18, depth + 1);
}

void BuildSample_FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18(FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPUSCH_MIMO_Layer_r18 = 1;
    value.maxNumberSRS_Resource_r18 = 1;
    value.maxNumberSimultaneousSRS_r18 = 1;
}

void BuildSample_FeatureSetUplinkPerCC_v1800(FeatureSetUplinkPerCC_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FreqBandList(FreqBandList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (FreqBandInformation*)std::malloc((std::size_t)value.count * sizeof(FreqBandInformation));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqBandInformation));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_FreqBandInformation(value.items[i], depth + 1);
        }
    }
}

void BuildSample_FreqBandInformationEUTRA(FreqBandInformationEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandEUTRA = 1;
}

void BuildSample_FreqBandInformationNR(FreqBandInformationNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandNR = 1;
}

void BuildSample_FreqBandInformation(FreqBandInformation& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = FreqBandInformation_Tag_bandInformationEUTRA;
    BuildSample_FreqBandInformationEUTRA(value.u.bandInformationEUTRA, depth + 1);
}

void BuildSample_FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17(FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17(FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17(FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_FR2_2_AccessParamsPerBand_r17(FR2_2_AccessParamsPerBand_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_HighSpeedParameters_r16(HighSpeedParameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_HighSpeedParameters_v1650(HighSpeedParameters_v1650& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = HighSpeedParameters_v1650_Tag_intraNR_MeasurementEnhancement_r16;
    value.u.intraNR_MeasurementEnhancement_r16 = HighSpeedParameters_v1650_IntraNR_MeasurementEnhancement_r16_supported;
}

void BuildSample_HighSpeedParameters_v1700(HighSpeedParameters_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IMS_ParametersCommon(IMS_ParametersCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IMS_ParametersFRX_Diff(IMS_ParametersFRX_Diff& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IMS_Parameters(IMS_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IMS_ParametersFR2_2_r17(IMS_ParametersFR2_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_IMS_Parameters_v1700(IMS_Parameters_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UTRA_FDD_Parameters_r16(UTRA_FDD_Parameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedBandListUTRA_FDD_r16_count = 0u;
}

void BuildSample_EUTRA_ParametersCommon(EUTRA_ParametersCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_EUTRA_ParametersXDD_Diff(EUTRA_ParametersXDD_Diff& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_EUTRA_Parameters(EUTRA_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedBandListEUTRA_count = 0u;
}

void BuildSample_InterRAT_Parameters(InterRAT_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_ParametersCommon(MAC_ParametersCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_ParametersXDD_Diff(MAC_ParametersXDD_Diff& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_Parameters(MAC_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MinTimeGap_r16(MinTimeGap_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16(MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_ParametersFRX_Diff_r16(MAC_ParametersFRX_Diff_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_Parameters_v1610(MAC_Parameters_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MinTimeGapFR2_2_r17(MinTimeGapFR2_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_ParametersFR2_2_r17_Drx_Adaptation_r17(MAC_ParametersFR2_2_r17_Drx_Adaptation_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_ParametersFR2_2_r17(MAC_ParametersFR2_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_Parameters_v1700(MAC_Parameters_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16(MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17(MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag_concurrentPerUE_OnlyMeasGap_r17;
    value.u.concurrentPerUE_OnlyMeasGap_r17 = MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_OnlyMeasGap_r17_supported;
}

void BuildSample_MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17(MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18(MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.fr1_r18 = MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_r18_ms10;
    value.fr2_r18 = MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr2_r18_ms10;
    value.fr1_AndFR2_r18 = MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_AndFR2_r18_ms20;
}

void BuildSample_MeasAndMobParametersCommon(MeasAndMobParametersCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersXDD_Diff(MeasAndMobParametersXDD_Diff& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersFRX_Diff(MeasAndMobParametersFRX_Diff& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParameters(MeasAndMobParameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersFR2_2_r17(MeasAndMobParametersFR2_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParameters_v1700(MeasAndMobParameters_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_Common(MeasAndMobParametersMRDC_Common& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_XDD_Diff(MeasAndMobParametersMRDC_XDD_Diff& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_FRX_Diff(MeasAndMobParametersMRDC_FRX_Diff& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC(MeasAndMobParametersMRDC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_XDD_Diff_v1560(MeasAndMobParametersMRDC_XDD_Diff_v1560& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_v1560(MeasAndMobParametersMRDC_v1560& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16(MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_Common_v1610(MeasAndMobParametersMRDC_Common_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_v1610(MeasAndMobParametersMRDC_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17(MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_Common_v1700(MeasAndMobParametersMRDC_Common_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_v1700(MeasAndMobParametersMRDC_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17(MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_Common_v1730(MeasAndMobParametersMRDC_Common_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17(value.independentGapConfig_maxCC_r17, depth + 1);
}

void BuildSample_MeasAndMobParametersMRDC_v1730(MeasAndMobParametersMRDC_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_Common_v1810(MeasAndMobParametersMRDC_Common_v1810& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MeasAndMobParametersMRDC_v1810(MeasAndMobParametersMRDC_v1810& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BeamManagementSSB_CSI_RS(BeamManagementSSB_CSI_RS& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSSB_CSI_RS_ResourceOneTx = BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx_n0;
    value.maxNumberCSI_RS_Resource = BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource_n0;
    value.maxNumberCSI_RS_ResourceTwoTx = BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx_n0;
    value.maxNumberAperiodicCSI_RS_Resource = BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource_n0;
}

void BuildSample_CSI_RS_ForTracking(CSI_RS_ForTracking& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxBurstLength = 1;
    value.maxSimultaneousResourceSetsPerCC = 1;
    value.maxConfiguredResourceSetsPerCC = 1;
    value.maxConfiguredResourceSetsAllCC = 1;
}

void BuildSample_CSI_RS_IM_ReceptionForFeedback(CSI_RS_IM_ReceptionForFeedback& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxConfigNumberNZP_CSI_RS_PerCC = 1;
    value.maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC = 2;
    value.maxConfigNumberCSI_IM_PerCC = CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC_n1;
    value.maxNumberSimultaneousNZP_CSI_RS_PerCC = 1;
    value.totalNumberPortsSimultaneousNZP_CSI_RS_PerCC = 2;
}

void BuildSample_CSI_RS_ProcFrameworkForSRS(CSI_RS_ProcFrameworkForSRS& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPeriodicSRS_AssocCSI_RS_PerBWP = 1;
    value.maxNumberAperiodicSRS_AssocCSI_RS_PerBWP = 1;
    value.maxNumberSP_SRS_AssocCSI_RS_PerBWP = 0;
    value.simultaneousSRS_AssocCSI_RS_PerCC = 1;
}

void BuildSample_CSI_ReportFramework(CSI_ReportFramework& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPeriodicCSI_PerBWP_ForCSI_Report = 1;
    value.maxNumberAperiodicCSI_PerBWP_ForCSI_Report = 1;
    value.maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report = 0;
    value.maxNumberPeriodicCSI_PerBWP_ForBeamReport = 1;
    value.maxNumberAperiodicCSI_PerBWP_ForBeamReport = 1;
    value.maxNumberAperiodicCSI_triggeringStatePerCC = CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC_n3;
    value.maxNumberSemiPersistentCSI_PerBWP_ForBeamReport = 0;
    value.simultaneousCSI_ReportsPerCC = 1;
}

void BuildSample_SpatialRelations(SpatialRelations& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberConfiguredSpatialRelations = SpatialRelations_MaxNumberConfiguredSpatialRelations_n4;
    value.maxNumberActiveSpatialRelations = SpatialRelations_MaxNumberActiveSpatialRelations_n1;
    value.maxNumberDL_RS_QCL_TypeD = SpatialRelations_MaxNumberDL_RS_QCL_TypeD_n1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming(MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CSI_ReportFrameworkExt_r16(CSI_ReportFrameworkExt_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberAperiodicCSI_PerBWP_ForCSI_ReportExt_r16 = 5;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16(MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSSB_CSIRS_OneTx_CMR_r16 = MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_OneTx_CMR_r16_n8;
    value.maxNumberCSI_IM_NZP_IMR_res_r16 = MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_r16_n8;
    value.maxNumberCSIRS_2Tx_res_r16 = MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16_n0;
    value.maxNumberSSB_CSIRS_res_r16 = MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16_n8;
    value.maxNumberCSI_IM_NZP_IMR_res_mem_r16 = MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16_n8;
    value.supportedCSI_RS_Density_CMR_r16 = MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedCSI_RS_Density_CMR_r16_one;
    value.maxNumberAperiodicCSI_RS_Res_r16 = MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16_n2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16(MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16(MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPerCORESET_Pool_r16 = MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_c1d091ea_n1;
    value.maxTotalNumberAcrossCORESET_Pool_r16 = MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_df654597_n2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16(MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16(MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16(MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportRepNumPDSCH_TDRA_r16 = MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16_n2;
    value.maxTBS_Size_r16 = MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16_kb3;
    value.maxNumberTCI_states_r16 = 1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16(MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16(MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640(MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberConfiguredSpatialRelations_v1640 = MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640_n96;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17(MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxBFD_RS_resourcesPerSetPerBWP_r17 = MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesPerSetPerBWP_r17_n1;
    value.maxBFR_r17 = 1;
    value.maxBFD_RS_resourcesAcrossSetsPerBWP_r17 = MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesAcrossSetsPerBWP_r17_n2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxConfiguredJointTCI_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17_n8;
    value.maxActivatedTCIAcrossCC_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17_n1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumMAC_CE_PerCC = MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC_n2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.additionalMAC_CE_PerCC_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_PerCC_r17_n0;
    value.additionalMAC_CE_AcrossCC_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_AcrossCC_r17_n0;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxConfiguredDL_TCI_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17_n4;
    value.maxConfiguredUL_TCI_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17_n4;
    value.maxActivatedDL_TCIAcrossCC_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17_n1;
    value.maxActivatedUL_TCIAcrossCC_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17_n1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.minBeamApplicationTime_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n1;
    value.maxActivatedDL_TCIPerCC_r17 = 2;
    value.maxActivatedUL_TCIPerCC_r17 = 2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.k_DL_PerCC_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_PerCC_r17_n0;
    value.k_UL_PerCC_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_PerCC_r17_n0;
    value.k_DL_AcrossCC_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_AcrossCC_r17_n0;
    value.k_UL_AcrossCC_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_AcrossCC_r17_n0;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumAdditionalPCI_L1_RSRP_r17 = 1;
    value.maxNumSSB_ResourceL1_RSRP_AcrossCC_r17 = MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17_MaxNumSSB_ResourceL1_RSRP_AcrossCC_r17_n1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17(MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumP_MPR_RI_pairs_r17 = 1;
    value.maxNumConfRS_r17 = MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17(MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17(MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumPeriodicSRS_r17 = 1;
    value.maxNumAperiodicSRS_r17 = 1;
    value.maxNumSP_SRS_r17 = 0;
    value.numSRS_ResourcePerCC_r17 = 1;
    value.numSRS_ResourceNonCodebook_r17 = 1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17(MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumAdditionalPCI_Case1_r17 = 1;
    value.maxNumAdditionalPCI_Case2_r17 = 0;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17(MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumBeamGroups_r17 = 1;
    value.maxNumRS_WithinSlot_r17 = MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17_n2;
    value.maxNumRS_AcrossSlot_r17 = MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17_n8;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17(MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumNZP_CSI_RS_r17 = 2;
    value.cSI_Report_mode_r17 = MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CSI_Report_mode_r17_mode1;
    value.supportedComboAcrossCCs_r17_count = 0u;
    value.codebookModeNCJT_r17 = MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CodebookModeNCJT_r17_mode1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710(MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17(MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710(MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710(MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberConfigJointTCIPerCC_PerBWP_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointT_082aef56;
    value.maxNumberActiveJointTCI_AcrossCC_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18_n2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tci_StateInd_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18_Tci_StateInd_r18_withAssignment;
    value.maxNumberActiveJointTCI_PerCC_r18 = 2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumConfigDL_TCI_PerCC_PerBWP_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_PerCC_PerBWP_r18_n4;
    value.maxNumConfigUL_TCI_PerCC_PerBWP_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_PerCC_PerBWP_r18_n4;
    value.maxNumActiveDL_TCI_AcrossCC_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18_n2;
    value.maxNumActiveUL_TCI_AcrossCC_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18_n2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumActiveDL_TCI_AcrossCC_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18_n2;
    value.maxNumActiveUL_TCI_AcrossCC_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18_n2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mTRP_Operation_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18_intraCell;
    value.maxNumberConfigJointTCIPerCC_PerBWP_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947_n8;
    value.maxNumberActiveJointTCIAcrossCC_PerCORESET_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587_n1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mTRP_Operation_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Op_2622f4dd;
    value.maxNumConfigDL_TCI_PerCC_PerBWP_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8_n8;
    value.maxNumConfigUL_TCI_PerCC_PerBWP_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0_n8;
    value.maxNumActiveDL_TCI_AcrossCC_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed_n1;
    value.maxNumActiveUL_TCI_AcrossCC_r18 = MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5_n1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumConfigDL_TCI_PerCC_PerBWP_r18 = 1;
    value.maxNumConfigUL_TCI_PerCC_PerBWP_r18 = 1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18(MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.valueX_r18 = 1;
    value.maxNumberActiveResource_r18 = 2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18(MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberConfigPerCC_r18 = MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18_n2;
    value.maxNumberConfigAcrossCC_r18 = 1;
    value.maxNumberSimultaneousPerCC_r18 = MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n2;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18(MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPeriodicSRS_Resource_PerBWP_r18 = 1;
    value.maxNumberAperiodicSRS_Resource_PerBWP_r18 = 1;
    value.maxNumberSemiPersistentSRS_ResourcePerBWP_r18 = 0;
    value.valueY_SRS_ResourceAssociate_r18 = 1;
    value.valueX_CSI_RS_ResourceAssociate_r18 = 1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18(MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPeriodicSRS_r18 = 1;
    value.maxNumberAperiodicSRS_r18 = 1;
    value.maxNumberSemiPersistentSRS_r18 = 0;
    value.simultaneousSRS_PerCC_r18 = 1;
    value.simultaneousCSI_RS_NonCB_r18 = 1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18(MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPeriodicSRS_Resource_PerBWP_r18 = 1;
    value.maxNumberAperiodicSRS_Resource_PerBWP_r18 = 1;
    value.maxNumberSemiPersistentSRS_ResourcePerBWP_r18 = 0;
    value.valueY_SRS_ResourceAssociate_r18 = 1;
    value.valueX_CSI_RS_ResourceAssociate_r18 = 1;
}

void BuildSample_MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18(MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.groupL1_RSRP_Reporting_r18 = MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_GroupL1_RSRP_Reporting_r18_jointULandDL;
    value.maxNumberBeamGroups_r18 = 1;
    value.maxNumberResWithinSlotAcrossCC_r18 = MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18_n2;
    value.maxNumberResAcrossCC_r18 = MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18_n8;
}

void BuildSample_DummyG(DummyG& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSSB_CSI_RS_ResourceOneTx = DummyG_MaxNumberSSB_CSI_RS_ResourceOneTx_n8;
    value.maxNumberSSB_CSI_RS_ResourceTwoTx = DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx_n0;
    value.supportedCSI_RS_Density = DummyG_SupportedCSI_RS_Density_one;
}

void BuildSample_DummyH(DummyH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.burstLength = 1;
    value.maxSimultaneousResourceSetsPerCC = 1;
    value.maxConfiguredResourceSetsPerCC = 1;
    value.maxConfiguredResourceSetsAllCC = 1;
}

void BuildSample_MIMO_ParametersPerBand_Tci_StatePDSCH(MIMO_ParametersPerBand_Tci_StatePDSCH& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL(MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand_UplinkBeamManagement(MIMO_ParametersPerBand_UplinkBeamManagement& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_ResourcePerSet_BM = MIMO_ParametersPerBand_UplinkBeamManagement_MaxNumberSRS_ResourcePerSet_BM_n2;
    value.maxNumberSRS_ResourceSet = 1;
}

void BuildSample_MIMO_ParametersPerBand_BeamReportTiming(MIMO_ParametersPerBand_BeamReportTiming& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PTRS_DensityRecommendationDL(PTRS_DensityRecommendationDL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.frequencyDensity1 = 1;
    value.frequencyDensity2 = 1;
    value.timeDensity1 = 0;
    value.timeDensity2 = 0;
    value.timeDensity3 = 0;
}

void BuildSample_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL(MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PTRS_DensityRecommendationUL(PTRS_DensityRecommendationUL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.frequencyDensity1 = 1;
    value.frequencyDensity2 = 1;
    value.timeDensity1 = 0;
    value.timeDensity2 = 0;
    value.timeDensity3 = 0;
    value.sampleDensity1 = 1;
    value.sampleDensity2 = 1;
    value.sampleDensity3 = 1;
    value.sampleDensity4 = 1;
    value.sampleDensity5 = 1;
}

void BuildSample_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL(MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MIMO_ParametersPerBand(MIMO_ParametersPerBand& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_CSI_MultiTRP_SupportedCombinations_r17(CSI_MultiTRP_SupportedCombinations_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumTx_Ports_r17 = CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17_n2;
    value.maxTotalNumCMR_r17 = 2;
    value.maxTotalNumTx_PortsNZP_CSI_RS_r17 = 2;
}

void BuildSample_NCR_Parameters_r18(NCR_Parameters_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_GeneralParametersMRDC_XDD_Diff(GeneralParametersMRDC_XDD_Diff& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MRDC_CapabilityAddXDD_Mode(UE_MRDC_CapabilityAddXDD_Mode& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MRDC_CapabilityAddFRX_Mode(UE_MRDC_CapabilityAddFRX_Mode& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasAndMobParametersMRDC_FRX_Diff(value.measAndMobParametersMRDC_FRX_Diff, depth + 1);
}

void BuildSample_NRDC_Parameters_Dummy(NRDC_Parameters_Dummy& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_NRDC_Parameters(NRDC_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NRDC_Parameters_v1570(NRDC_Parameters_v1570& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NRDC_Parameters_v15c0(NRDC_Parameters_v15c0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NRDC_Parameters_v1610(NRDC_Parameters_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NRDC_Parameters_v1700(NRDC_Parameters_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasAndMobParametersMRDC_v1700(value.measAndMobParametersNRDC_v1700, depth + 1);
}

void BuildSample_Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17(Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18(Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18(Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16(Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16(Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16(Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16(Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16(Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag_type1_r16;
    value.u.type1_r16 = Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type1_r16_us100;
}

void BuildSample_Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16(Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag_type1_r16;
    value.u.type1_r16 = Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type1_r16_us100;
}

void BuildSample_Phy_ParametersCommon(Phy_ParametersCommon& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersXDD_Diff(Phy_ParametersXDD_Diff& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot(Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC(Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcch_BlindDetectionMCG_UE = 1;
    value.pdcch_BlindDetectionSCG_UE = 1;
}

void BuildSample_Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16(Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersFRX_Diff(Phy_ParametersFRX_Diff& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersFR1(Phy_ParametersFR1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersFR2(Phy_ParametersFR2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_Parameters(Phy_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SON_Parameters_r16(SON_Parameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_BasedPerfMeas_Parameters_r16(UE_BasedPerfMeas_Parameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_CapabilityAddXDD_Mode(UE_NR_CapabilityAddXDD_Mode& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_CapabilityAddFRX_Mode(UE_NR_CapabilityAddFRX_Mode& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NTN_Parameters_r17(NTN_Parameters_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_OLPC_SRS_Pos_r16(OLPC_SRS_Pos_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17(PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.versionOfDictionary_r17 = 0;
    BuildSample_PLMN_Identity(value.associatedPLMN_ID_r17, depth + 1);
}

void BuildSample_PDCP_Parameters_ExtGroup2_Udc_r17(PDCP_Parameters_ExtGroup2_Udc_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCP_Parameters_SupportedROHC_Profiles(PDCP_Parameters_SupportedROHC_Profiles& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.profile0x0000 = true;
    value.profile0x0001 = true;
    value.profile0x0002 = true;
    value.profile0x0003 = true;
    value.profile0x0004 = true;
    value.profile0x0006 = true;
    value.profile0x0101 = true;
    value.profile0x0102 = true;
    value.profile0x0103 = true;
    value.profile0x0104 = true;
}

void BuildSample_PDCP_Parameters(PDCP_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PDCP_Parameters_SupportedROHC_Profiles(value.supportedROHC_Profiles, depth + 1);
    value.maxNumberROHC_ContextSessions = PDCP_Parameters_MaxNumberROHC_ContextSessions_cs2;
}

void BuildSample_PDCP_ParametersMRDC(PDCP_ParametersMRDC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCP_ParametersMRDC_v1610(PDCP_ParametersMRDC_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersCommon_v16a0(Phy_ParametersCommon_v16a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_Parameters_v16a0(Phy_Parameters_v16a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersMRDC(Phy_ParametersMRDC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NAICS_Capability_Entry(NAICS_Capability_Entry& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.numberOfNAICS_CapableCC = 1;
    value.numberOfAggregatedPRB = NAICS_Capability_Entry_NumberOfAggregatedPRB_n50;
}

void BuildSample_Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16(Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_Phy_ParametersSharedSpectrumChAccess_r16(Phy_ParametersSharedSpectrumChAccess_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PosSRS_BWA_RRC_Inactive_r18(PosSRS_BWA_RRC_Inactive_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17(PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PosSRS_TxFrequencyHoppingRRC_Connected_r18(PosSRS_TxFrequencyHoppingRRC_Connected_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PosSRS_TxFrequencyHoppingRRC_Inactive_r18(PosSRS_TxFrequencyHoppingRRC_Inactive_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PowSav_ParametersCommon_r16(PowSav_ParametersCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PowSav_ParametersFRX_Diff_r16(PowSav_ParametersFRX_Diff_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PowSav_Parameters_r16(PowSav_Parameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PowSav_ParametersFR2_2_r17(PowSav_ParametersFR2_2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PowSav_Parameters_v1700(PowSav_Parameters_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ppw_durationOfPRS_ProcessingSymbolsN_r17 = PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_msDot125;
    value.ppw_durationOfPRS_ProcessingSymbolsT_r17 = PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms1;
}

void BuildSample_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.ppw_durationOfPRS_ProcessingSymbolsN2_r17 = PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_msDot125;
    value.ppw_durationOfPRS_ProcessingSymbolsT2_r17 = PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_5fc2046e_ms4;
}

void BuildSample_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag_ppw_durationOfPRS_Processing1_r17;
    BuildSample_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17(value.u.ppw_durationOfPRS_Processing1_r17, depth + 1);
}

void BuildSample_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag_fr1_r17;
    value.u.fr1_r17 = PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17_mhz5;
}

void BuildSample_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.prsProcessingType_r17 = PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_PrsProcessingType_r17_type1A;
    value.ppw_dl_PRS_BufferType_r17 = PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_dl_PRS_BufferType_r17_type1;
    BuildSample_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17(value.ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17, depth + 1);
}

void BuildSample_RedCapParameters_r17(RedCapParameters_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RedCapParameters_v1740(RedCapParameters_v1740& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18(RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RF_Parameters(RF_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedBandListNR_count = 0u;
}

void BuildSample_RF_Parameters_v15g0(RF_Parameters_v15g0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RF_Parameters_v16a0(RF_Parameters_v16a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RF_Parameters_v16c0(RF_Parameters_v16c0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.supportedBandListNR_v16c0_count = 0u;
}

void BuildSample_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1(BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2(BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup4_ChannelBWs_DL_v1590(BandNR_ExtGroup4_ChannelBWs_DL_v1590& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag_fr1;
    BuildSample_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1(value.u.fr1, depth + 1);
}

void BuildSample_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1(BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2(BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup4_ChannelBWs_UL_v1590(BandNR_ExtGroup4_ChannelBWs_UL_v1590& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag_fr1;
    BuildSample_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1(value.u.fr1, depth + 1);
}

void BuildSample_SharedSpectrumChAccessParamsPerBand_r16(SharedSpectrumChAccessParamsPerBand_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SpatialRelationsSRS_Pos_r16(SpatialRelationsSRS_Pos_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16(BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPatterns_r16 = 2;
    value.maxNumberNon_OverlapPatterns_r16 = 1;
}

void BuildSample_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz(BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz(BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16(BandNR_ExtGroup6_ChannelBW_DL_IAB_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag_fr1_100mhz;
    BuildSample_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz(value.u.fr1_100mhz, depth + 1);
}

void BuildSample_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz(BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz(BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16(BandNR_ExtGroup6_ChannelBW_UL_IAB_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag_fr1_100mhz;
    BuildSample_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz(value.u.fr1_100mhz, depth + 1);
}

void BuildSample_BandNR_ExtGroup6_ActiveConfiguredGrant_r16(BandNR_ExtGroup6_ActiveConfiguredGrant_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberConfigsPerBWP_r16 = BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16_n1;
    value.maxNumberConfigsAllCC_r16 = 2;
}

void BuildSample_BandNR_ExtGroup6_Sps_r16(BandNR_ExtGroup6_Sps_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberConfigsPerBWP_r16 = 1;
    value.maxNumberConfigsAllCC_r16 = 2;
}

void BuildSample_SharedSpectrumChAccessParamsPerBand_v1630(SharedSpectrumChAccessParamsPerBand_v1630& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SharedSpectrumChAccessParamsPerBand_v1640(SharedSpectrumChAccessParamsPerBand_v1640& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SharedSpectrumChAccessParamsPerBand_v1650(SharedSpectrumChAccessParamsPerBand_v1650& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SharedSpectrumChAccessParamsPerBand_v1710(SharedSpectrumChAccessParamsPerBand_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17(SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberSRS_PosResourceSetPerBWP_r17 = SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17_n1;
    value.maxNumberSRS_PosResourcesPerBWP_r17 = SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17_n1;
    value.maxNumberSRS_ResourcesPerBWP_PerSlot_r17 = SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n1;
    value.maxNumberPeriodicSRS_PosResourcesPerBWP_r17 = SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17_n1;
    value.maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17 = SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_c9c38ded;
    value.dummy1 = SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1_n1;
    value.dummy2 = SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n1;
}

void BuildSample_SRS_AllPosResourcesRRC_Inactive_r17(SRS_AllPosResourcesRRC_Inactive_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17(value.srs_PosResourcesRRC_Inactive_r17, depth + 1);
}

void BuildSample_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17(BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17(BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberAperiodicCSI_RS_PerCC_r17 = BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17_n8;
    value.maxNumberAperiodicCSI_RS_AcrossCCs_r17 = BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17_n8;
}

void BuildSample_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17(BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.enhancedType3_HARQ_Codebooks_r17 = BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_EnhancedType3_HARQ_Codebooks_r17_n1;
    value.maxNumberPUCCH_Transmissions_r17 = BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17_n1;
}

void BuildSample_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17(BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.minHARQ_Retx_Offset_r17 = BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17_n_7;
    value.maxHARQ_Retx_Offset_r17 = BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n4;
}

void BuildSample_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17(BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag_fr1_r17;
    value.u.fr1_r17 = BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr1_r17_qam256;
}

void BuildSample_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17(BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumOfSemiPersistentSRSposResources_r17 = BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17_n1;
    value.maxNumOfSemiPersistentSRSposResourcesPerSlot_r17 = BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n1;
}

void BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sdType1_Resource_r18 = 1;
    value.sdType2_Resource_r18 = 1;
}

void BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sdType1_Resource_r18 = BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18_n8;
    value.sdType2_Resource_r18 = BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18_n8;
}

void BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csiFeedbackType_r18 = BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_CsiFeedbackType_r18_sdType1;
    value.maxNumberLmax_r18 = 2;
    BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18(value.maxNumberCSI_ResourcePerCC_r18, depth + 1);
    BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18(value.maxNumberTotalCSI_ResourcePerCC_r18, depth + 1);
    value.totalNumberCSI_Reporting_r18 = 2;
}

void BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csiFeedbackType_r18 = BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_CsiFeedbackType_r18_sdType1;
    value.maxNumberLmax_r18 = 2;
    value.subReportCSI_r18 = 2;
    value.maxNumberCSI_ResourcePerCC_r18 = 1;
    value.maxNumberTotalCSI_ResourcePerCC_r18 = BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8;
    value.totalNumberCSI_Reporting_r18 = 2;
}

void BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sdType1_Resource_r18 = 1;
    value.sdType2_Resource_r18 = 1;
}

void BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sdType1_Resource_r18 = BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_94441945;
    value.sdType2_Resource_r18 = BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_844dd2a3;
}

void BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csiFeedbackType_r18 = BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_CsiFeedbackType_r18_sdType1;
    value.maxNumberLmax_r18 = 2;
    value.subReportCSI_r18 = 2;
    BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18(value.maxNumberCSI_ResourcePerCC_r18, depth + 1);
    BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18(value.maxNumberTotalCSI_ResourcePerCC_r18, depth + 1);
    value.totalNumberCSI_Reporting_r18 = 2;
}

void BuildSample_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.csiFeedbackType_r18 = BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_CsiFeedbackType_r18_sdType1;
    value.maxNumberLmax_r18 = 2;
    value.subReportCSI_r18 = 2;
    value.maxNumberCSI_ResourcePerCC_r18 = 1;
    value.maxNumberTotalCSI_ResourcePerCC_r18 = BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8;
    value.totalNumberCSI_Reporting_r18 = 2;
}

void BuildSample_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18(BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberLmax_r18 = 2;
    value.maxNumberCSI_ResourcePerCC_r18 = 1;
    value.maxNumberTotalCSI_ResourcePerCC_r18 = BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8;
    value.totalNumberCSI_Reporting_r18 = 2;
}

void BuildSample_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18(BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberLmax_r18 = 2;
    value.subReportCSI_r18 = 2;
    value.maxNumberCSI_ResourcePerCC_r18 = 1;
    value.maxNumberTotalCSI_ResourcePerCC_r18 = BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8;
    value.totalNumberCSI_Reporting_r18 = 2;
}

void BuildSample_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18(BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberLmax_r18 = 2;
    value.subReportCSI_r18 = 2;
    value.maxNumberCSI_ResourcePerCC_r18 = 1;
    value.maxNumberTotalCSI_ResourcePerCC_r18 = BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8;
    value.totalNumberCSI_Reporting_r18 = 2;
}

void BuildSample_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18(BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberLmax_r18 = 2;
    value.subReportCSI_r18 = 2;
    value.maxNumberCSI_ResourcePerCC_r18 = 1;
    value.maxNumberTotalCSI_ResourcePerCC_r18 = BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8;
    value.totalNumberCSI_Reporting_r18 = 2;
}

void BuildSample_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18(BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberJointTCI_PerCell_r18 = BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18_n8;
    value.qcl_Resource_r18 = BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_Qcl_Resource_r18_srs;
    value.maxNumberJointTCI_AcrossCells_r18 = 1;
    value.maxNumberCells_r18 = 1;
}

void BuildSample_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18(BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.qcl_Resource_r18 = BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_Qcl_Resource_r18_srs;
    value.maxNumberJointTCI_PerCell_r18 = 1;
    value.maxNumberJointTCI_AcrossCells_r18 = BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18_n1;
}

void BuildSample_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18(BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberDL_TCI_PerCell_r18 = BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18_n4;
    value.maxNumberUL_TCI_PerCell_r18 = BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18_n4;
    value.qcl_Resource_r18 = BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_Qcl_Resource_r18_srs;
    value.maxNumberDL_TCI_AcrossCells_r18 = 1;
    value.maxNumberUL_TCI_AcrossCells_r18 = 1;
    value.maxNumberCells_r18 = 1;
}

void BuildSample_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18(BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.qcl_Resource_r18 = BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_Qcl_Resource_r18_srs;
    value.maxNumberDL_TCI_PerCell_r18 = 1;
    value.maxNumberUL_TCI_PerCell_r18 = 1;
    value.maxNumberDL_TCI_AcrossCells_r18 = BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18_n1;
    value.maxNumberUL_TCI_AcrossCells_r18 = BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18_n1;
}

void BuildSample_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18(BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberConfigsPerBWP = BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP_n1;
    value.maxNumberConfigsAllCC_FR1 = 2;
    value.maxNumberConfigsAllCC_FR2 = 2;
}

void BuildSample_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18(BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.overlapInRE_r18 = BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInRE_r18_oneSymbolNoOverlap;
    value.overlapInSymbol_r18 = BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInSymbol_r18_symbol2;
}

void BuildSample_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18(BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxNumberPatterns_r18 = 2;
    value.maxNumberNon_OverlapPatterns_r18 = 1;
}

void BuildSample_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18(BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18(BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18(BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18(value.fr1_r18, depth + 1);
    BuildSample_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18(value.fr2_r18, depth + 1);
}

void BuildSample_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18(BandNR_ExtGroup16_BeamSweepingFactorReduction_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.reduceForCellDetection = BandNR_ExtGroup16_BeamSweepingFactorReduction_r18_ReduceForCellDetection_n1;
    value.reduceForSSB_L1_RSRP_Meas = 0;
}

void BuildSample_BandNR_ChannelBWs_DL_Fr1(BandNR_ChannelBWs_DL_Fr1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ChannelBWs_DL_Fr2(BandNR_ChannelBWs_DL_Fr2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ChannelBWs_DL(BandNR_ChannelBWs_DL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandNR_ChannelBWs_DL_Tag_fr1;
    BuildSample_BandNR_ChannelBWs_DL_Fr1(value.u.fr1, depth + 1);
}

void BuildSample_BandNR_ChannelBWs_UL_Fr1(BandNR_ChannelBWs_UL_Fr1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ChannelBWs_UL_Fr2(BandNR_ChannelBWs_UL_Fr2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandNR_ChannelBWs_UL(BandNR_ChannelBWs_UL& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandNR_ChannelBWs_UL_Tag_fr1;
    BuildSample_BandNR_ChannelBWs_UL_Fr1(value.u.fr1, depth + 1);
}

void BuildSample_BandNR(BandNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bandNR = 1;
}

void BuildSample_BandNR_v16c0(BandNR_v16c0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_LowerMSD_r18_Aggressorband1_r18(LowerMSD_r18_Aggressorband1_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = LowerMSD_r18_Aggressorband1_r18_Tag_nr;
    value.u.nr = 1;
}

void BuildSample_LowerMSD_r18(LowerMSD_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_LowerMSD_r18_Aggressorband1_r18(value.aggressorband1_r18, depth + 1);
    value.msd_Information_r18_count = 0u;
}

void BuildSample_MSD_Information_r18(MSD_Information_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.msd_Type_r18 = MSD_Information_r18_Msd_Type_r18_harmonic;
    value.msd_PowerClass_r18 = MSD_Information_r18_Msd_PowerClass_r18_pc1dot5;
    value.msd_Class_r18 = MSD_Information_r18_Msd_Class_r18_classI;
}

void BuildSample_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0(RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720(RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RF_ParametersMRDC(RF_ParametersMRDC& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RF_ParametersMRDC_v15g0(RF_ParametersMRDC_v15g0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RF_ParametersMRDC_v15n0(RF_ParametersMRDC_v15n0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RF_ParametersMRDC_v16e0(RF_ParametersMRDC_v16e0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RLC_Parameters(RLC_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SDAP_Parameters(SDAP_Parameters& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SharedSpectrumChAccessParamsSidelinkPerBand_r18(SharedSpectrumChAccessParamsSidelinkPerBand_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RelayParameters_r17(RelayParameters_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_PDCP_ParametersSidelink_r18(PDCP_ParametersSidelink_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_RLC_ParametersSidelink_r16(RLC_ParametersSidelink_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_ParametersSidelinkCommon_r16(MAC_ParametersSidelinkCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_ParametersSidelinkXDD_Diff_r16(MAC_ParametersSidelinkXDD_Diff_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MAC_ParametersSidelink_r16(MAC_ParametersSidelink_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_SidelinkCapabilityAddXDD_Mode_r16(UE_SidelinkCapabilityAddXDD_Mode_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SidelinkParametersNR_r16(SidelinkParametersNR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SidelinkParametersEUTRA_r16(SidelinkParametersEUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SidelinkParameters_r16(SidelinkParameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16(BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.gnb_ScheduledMode3DelaySidelinkEUTRA_r16 = BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms0;
}

void BuildSample_BandSidelinkEUTRA_r16(BandSidelinkEUTRA_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.freqBandSidelinkEUTRA_r16 = 1;
}

void BuildSample_BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16(BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.harq_TxProcessModeTwoSidelink_r16 = BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Harq_TxProcessModeTwoSidelink_r16_n8;
}

void BuildSample_BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16(BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.cbr_CR_TimeLimitSidelink_r16 = BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_CR_TimeLimitSidelink_r16_time1;
}

void BuildSample_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17;
    BuildSample_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(value.u.fr1_r17, depth + 1);
}

void BuildSample_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17(BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.harq_TxProcessModeTwoSidelink_r17 = BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Harq_TxProcessModeTwoSidelink_r17_n8;
}

void BuildSample_BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710(BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16(BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16(BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16(BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag_fr1_r16;
    BuildSample_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16(value.u.fr1_r16, depth + 1);
}

void BuildSample_BandSidelink_r16_Sl_Reception_r16(BandSidelink_r16_Sl_Reception_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.harq_RxProcessSidelink_r16 = BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16_n16;
    value.pscch_RxSidelink_r16 = BandSidelink_r16_Sl_Reception_r16_Pscch_RxSidelink_r16_value1;
}

void BuildSample_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16(BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16(BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16(BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag_fr1_r16;
    BuildSample_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16(value.u.fr1_r16, depth + 1);
}

void BuildSample_BandSidelink_r16_Sl_TransmissionMode1_r16(BandSidelink_r16_Sl_TransmissionMode1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.harq_TxProcessModeOneSidelink_r16 = BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_TxProcessModeOneSidelink_r16_n8;
    BuildSample_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16(value.scs_CP_PatternTxSidelinkModeOne_r16, depth + 1);
}

void BuildSample_BandSidelink_r16_Sync_Sidelink_r16(BandSidelink_r16_Sync_Sidelink_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BandSidelink_r16_Psfch_FormatZeroSidelink_r16(BandSidelink_r16_Psfch_FormatZeroSidelink_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.psfch_RxNumber = BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber_n5;
    value.psfch_TxNumber = BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_TxNumber_n4;
}

void BuildSample_BandSidelink_r16(BandSidelink_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.freqBandSidelink_r16 = 1;
}

void BuildSample_SRS_SwitchingTimeNR(SRS_SwitchingTimeNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SRS_SwitchingTimeEUTRA(SRS_SwitchingTimeEUTRA& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_CapabilityRAT_Container(UE_CapabilityRAT_Container& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rat_Type = RAT_Type_nr;
    value.ue_CapabilityRAT_Container.length = 0u;
}

void BuildSample_UE_CapabilityRAT_Request(UE_CapabilityRAT_Request& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rat_Type = RAT_Type_nr;
}

void BuildSample_CellGrouping_r16(CellGrouping_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.mcg_r16_count = 0u;
    value.scg_r16_count = 0u;
    value.mode_r16 = CellGrouping_r16_Mode_r16_sync;
}

void BuildSample_UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension(UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UE_CapabilityRequestFilterNR_v1710(UE_CapabilityRequestFilterNR_v1710& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_CapabilityRequestFilterNR_v1540(UE_CapabilityRequestFilterNR_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_CapabilityRequestFilterNR(UE_CapabilityRequestFilterNR& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MRDC_Capability_v1800_NonCriticalExtension(UE_MRDC_Capability_v1800_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UE_MRDC_Capability_v1800(UE_MRDC_Capability_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MRDC_Capability_v1730(UE_MRDC_Capability_v1730& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MRDC_Capability_v1700(UE_MRDC_Capability_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasAndMobParametersMRDC_v1700(value.measAndMobParametersMRDC_v1700, depth + 1);
}

void BuildSample_GeneralParametersMRDC_v1610(GeneralParametersMRDC_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MRDC_Capability_v1610(UE_MRDC_Capability_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MRDC_CapabilityAddXDD_Mode_v1560(UE_MRDC_CapabilityAddXDD_Mode_v1560& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MRDC_Capability_v1560(UE_MRDC_Capability_v1560& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.receivedFilters = (UECapabilityEnquiry_v1560_IEs*)std::malloc(sizeof(UECapabilityEnquiry_v1560_IEs));
        if (value.receivedFilters != nullptr) {
            BuildSample_UECapabilityEnquiry_v1560_IEs(*value.receivedFilters, depth + 1);
        }
    }
}

void BuildSample_UE_MRDC_Capability(UE_MRDC_Capability& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RF_ParametersMRDC(value.rf_ParametersMRDC, depth + 1);
    if (depth < 2) {
        value.lateNonCriticalExtension = (UE_MRDC_Capability_v15g0*)std::malloc(sizeof(UE_MRDC_Capability_v15g0));
        if (value.lateNonCriticalExtension != nullptr) {
            BuildSample_UE_MRDC_Capability_v15g0(*value.lateNonCriticalExtension, depth + 1);
        }
    }
}

void BuildSample_UE_MRDC_Capability_v16e0_NonCriticalExtension(UE_MRDC_Capability_v16e0_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UE_MRDC_Capability_v16e0(UE_MRDC_Capability_v16e0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MRDC_Capability_v15n0(UE_MRDC_Capability_v15n0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_MRDC_Capability_v15g0(UE_MRDC_Capability_v15g0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v1800_NonCriticalExtension(UE_NR_Capability_v1800_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UE_NR_Capability_v1800(UE_NR_Capability_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v1750(UE_NR_Capability_v1750& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v1740(UE_NR_Capability_v1740& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_RedCapParameters_v1740(value.redCapParameters_v1740, depth + 1);
}

void BuildSample_BAP_Parameters_v1700(BAP_Parameters_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MBS_Parameters_r17(MBS_Parameters_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_RadioPagingInfo_r17(UE_RadioPagingInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v1700(UE_NR_Capability_v1700& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MeasAndMobParameters_v1700(value.measAndMobParameters_v1700, depth + 1);
    BuildSample_MBS_Parameters_r17(value.mbs_Parameters_r17, depth + 1);
}

void BuildSample_UE_NR_Capability_v1690(UE_NR_Capability_v1690& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v1650(UE_NR_Capability_v1650& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v1640(UE_NR_Capability_v1640& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_CapabilityAddFRX_Mode_v1610(UE_NR_CapabilityAddFRX_Mode_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_BAP_Parameters_r16(BAP_Parameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v1610(UE_NR_Capability_v1610& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v1570(UE_NR_Capability_v1570& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v1560(UE_NR_Capability_v1560& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    if (depth < 2) {
        value.receivedFilters = (UECapabilityEnquiry_v1560_IEs*)std::malloc(sizeof(UECapabilityEnquiry_v1560_IEs));
        if (value.receivedFilters != nullptr) {
            BuildSample_UECapabilityEnquiry_v1560_IEs(*value.receivedFilters, depth + 1);
        }
    }
}

void BuildSample_UE_NR_Capability_v1550(UE_NR_Capability_v1550& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_CapabilityAddFRX_Mode_v1540(UE_NR_CapabilityAddFRX_Mode_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v1540(UE_NR_Capability_v1540& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_CapabilityAddXDD_Mode_v1530(UE_NR_CapabilityAddXDD_Mode_v1530& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_EUTRA_ParametersXDD_Diff(value.eutra_ParametersXDD_Diff, depth + 1);
}

void BuildSample_UE_NR_Capability_v1530(UE_NR_Capability_v1530& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability(UE_NR_Capability& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.accessStratumRelease = AccessStratumRelease_rel15;
    BuildSample_PDCP_Parameters(value.pdcp_Parameters, depth + 1);
    BuildSample_Phy_Parameters(value.phy_Parameters, depth + 1);
    BuildSample_RF_Parameters(value.rf_Parameters, depth + 1);
    if (depth < 2) {
        value.lateNonCriticalExtension = (UE_NR_Capability_v15c0*)std::malloc(sizeof(UE_NR_Capability_v15c0));
        if (value.lateNonCriticalExtension != nullptr) {
            BuildSample_UE_NR_Capability_v15c0(*value.lateNonCriticalExtension, depth + 1);
        }
    }
}

void BuildSample_UE_NR_Capability_v16d0_NonCriticalExtension(UE_NR_Capability_v16d0_NonCriticalExtension& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    (void)depth;
}

void BuildSample_UE_NR_Capability_v16d0(UE_NR_Capability_v16d0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v16c0(UE_NR_Capability_v16c0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v16a0(UE_NR_Capability_v16a0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v15j0(UE_NR_Capability_v15j0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v15g0(UE_NR_Capability_v15g0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_UE_NR_Capability_v15c0(UE_NR_Capability_v15c0& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_AppLayerIdleInactiveConfig_r18(SetupRelease_AppLayerIdleInactiveConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_AppLayerIdleInactiveConfig_r18_Tag_release;
}

void BuildSample_RAN_VisibleParameters_r17(RAN_VisibleParameters_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_RAN_VisibleParameters_r17(SetupRelease_RAN_VisibleParameters_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_RAN_VisibleParameters_r17_Tag_release;
}

void BuildSample_MeasConfigAppLayer_r17(MeasConfigAppLayer_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.measConfigAppLayerId_r17 = 0;
}

void BuildSample_InterFreqTargetInfo_r16(InterFreqTargetInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.dl_CarrierFreq_r16 = 0;
}

void BuildSample_TrackingAreaIdentity_r16(TrackingAreaIdentity_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_Identity(value.plmn_Identity_r16, depth + 1);
    value.trackingAreaCode_r16.bitLength = 24u;
    value.trackingAreaCode_r16.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.trackingAreaCode_r16.bytes != nullptr) {
        std::memset(value.trackingAreaCode_r16.bytes, 0, 3u);
    }
}

void BuildSample_CAG_Config_r18(CAG_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_Identity(value.plmn_Identity_r18, depth + 1);
    value.cag_IdentityList_r18_count = 0u;
}

void BuildSample_SNPN_ConfigCellId_r18(SNPN_ConfigCellId_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_CGI_Info_Logging_r16(value.cgi_Identity_r18, depth + 1);
    value.nid_IdentityList_r18_count = 0u;
}

void BuildSample_SNPN_ConfigTAI_r18(SNPN_ConfigTAI_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_TrackingAreaIdentity_r16(value.tai_Identity_r18, depth + 1);
    value.nid_IdentityList_r18_count = 0u;
}

void BuildSample_SNPN_ConfigID_r18(SNPN_ConfigID_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_PLMN_Identity(value.plmn_Identity_r18, depth + 1);
    value.nid_IdentityList_r18_count = 0u;
}

void BuildSample_EUTRA_MBSFN_SubframeConfig_SubframeAllocation1(EUTRA_MBSFN_SubframeConfig_SubframeAllocation1& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag_oneFrame;
    value.u.oneFrame.bitLength = 6u;
    value.u.oneFrame.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.oneFrame.bytes != nullptr) {
        std::memset(value.u.oneFrame.bytes, 0, 1u);
    }
}

void BuildSample_EUTRA_MBSFN_SubframeConfig_SubframeAllocation2(EUTRA_MBSFN_SubframeConfig_SubframeAllocation2& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag_oneFrame;
    value.u.oneFrame.bitLength = 2u;
    value.u.oneFrame.bytes = (std::uint8_t*)std::malloc(1u);
    if (value.u.oneFrame.bytes != nullptr) {
        std::memset(value.u.oneFrame.bytes, 0, 1u);
    }
}

void BuildSample_EUTRA_MBSFN_SubframeConfig(EUTRA_MBSFN_SubframeConfig& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.radioframeAllocationPeriod = EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod_n1;
    value.radioframeAllocationOffset = 0;
    BuildSample_EUTRA_MBSFN_SubframeConfig_SubframeAllocation1(value.subframeAllocation1, depth + 1);
}

void BuildSample_EUTRA_NS_PmaxList(EUTRA_NS_PmaxList& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (EUTRA_NS_PmaxValue*)std::malloc((std::size_t)value.count * sizeof(EUTRA_NS_PmaxValue));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_NS_PmaxValue));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_EUTRA_NS_PmaxValue(value.items[i], depth + 1);
        }
    }
}

void BuildSample_EUTRA_MultiBandInfo(EUTRA_MultiBandInfo& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.eutra_FreqBandIndicator = 1;
}

void BuildSample_EUTRA_MultiBandInfoAerial_r18(EUTRA_MultiBandInfoAerial_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.eutra_FreqBandIndicator_r18 = 1;
}

void BuildSample_EUTRA_NS_PmaxValue(EUTRA_NS_PmaxValue& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_LogMeasResultBT_r16(LogMeasResultBT_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.bt_Addr_r16.bitLength = 48u;
    value.bt_Addr_r16.bytes = (std::uint8_t*)std::malloc(6u);
    if (value.bt_Addr_r16.bytes != nullptr) {
        std::memset(value.bt_Addr_r16.bytes, 0, 6u);
    }
}

void BuildSample_WLAN_Identifiers_r16(WLAN_Identifiers_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_WLAN_RTT_r16(WLAN_RTT_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.rttValue_r16 = 0;
    value.rttUnits_r16 = WLAN_RTT_r16_RttUnits_r16_microseconds;
}

void BuildSample_LogMeasResultWLAN_r16(LogMeasResultWLAN_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_WLAN_Identifiers_r16(value.wlan_Identifiers_r16, depth + 1);
}

void BuildSample_NeighbourCellInfo_r17(NeighbourCellInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_EpochTime_r17(value.epochTime_r17, depth + 1);
    BuildSample_EphemerisInfo_r17(value.ephemerisInfo_r17, depth + 1);
}

void BuildSample_CandidateServingFreqRangeNR_r18(CandidateServingFreqRangeNR_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.candidateCenterFreq_r18 = 0;
}

void BuildSample_PDU_SessionToReportUL_TrafficInfo_r18(PDU_SessionToReportUL_TrafficInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdu_SessionID = 0;
    value.qfi_ToReportUL_TrafficInfoList_r18_count = 0u;
}

void BuildSample_VisitedPSCellInfoList_r17(VisitedPSCellInfoList_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (VisitedPSCellInfo_r17*)std::malloc((std::size_t)value.count * sizeof(VisitedPSCellInfo_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(VisitedPSCellInfo_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_VisitedPSCellInfo_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16(VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag_cgi_Info;
    BuildSample_CGI_Info_Logging_r16(value.u.cgi_Info, depth + 1);
}

void BuildSample_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16(VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag_cellGlobalId_r16;
    BuildSample_CGI_InfoEUTRA(value.u.cellGlobalId_r16, depth + 1);
}

void BuildSample_VisitedCellInfo_r16_VisitedCellId_r16(VisitedCellInfo_r16_VisitedCellId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = VisitedCellInfo_r16_VisitedCellId_r16_Tag_nr_CellId_r16;
    BuildSample_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16(value.u.nr_CellId_r16, depth + 1);
}

void BuildSample_VisitedCellInfo_r16(VisitedCellInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.timeSpent_r16 = 0;
}

void BuildSample_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17(VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag_cgi_Info_r17;
    BuildSample_CGI_Info_Logging_r16(value.u.cgi_Info_r17, depth + 1);
}

void BuildSample_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17(VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag_cellGlobalId_r17;
    BuildSample_CGI_InfoEUTRALogging(value.u.cellGlobalId_r17, depth + 1);
}

void BuildSample_VisitedPSCellInfo_r17_VisitedCellId_r17(VisitedPSCellInfo_r17_VisitedCellId_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = VisitedPSCellInfo_r17_VisitedCellId_r17_Tag_nr_CellId_r17;
    BuildSample_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17(value.u.nr_CellId_r17, depth + 1);
}

void BuildSample_VisitedPSCellInfo_r17(VisitedPSCellInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.timeSpent_r17 = 0;
}

void BuildSample_SL_TxPoolDedicated_r16(SL_TxPoolDedicated_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PBPS_CPS_Config_r17(SL_PBPS_CPS_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_PBPS_CPS_Config_r17(SetupRelease_SL_PBPS_CPS_Config_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_PBPS_CPS_Config_r17_Tag_release;
}

void BuildSample_SL_InterUE_CoordinationScheme1_r17(SL_InterUE_CoordinationScheme1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_InterUE_CoordinationScheme2_r17(SL_InterUE_CoordinationScheme2_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_InterUE_CoordinationConfig_r17(SL_InterUE_CoordinationConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_InterUE_CoordinationConfig_r17(SetupRelease_SL_InterUE_CoordinationConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag_release;
}

void BuildSample_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 8u;
    value.items = (SL_CPE_StartingPositionsPSCCH_PSSCH_r18*)std::malloc((std::size_t)value.count * sizeof(SL_CPE_StartingPositionsPSCCH_PSSCH_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_CPE_StartingPositionsPSCCH_PSSCH_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_CPE_StartingPositionsPSCCH_PSSCH_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag_release;
}

void BuildSample_SL_SyncAllowed_r16(SL_SyncAllowed_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PTRS_Config_r16(SL_PTRS_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_CBR_PriorityTxConfigList_r16(SL_CBR_PriorityTxConfigList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_PriorityTxConfigIndex_r16*)std::malloc((std::size_t)value.count * sizeof(SL_PriorityTxConfigIndex_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_PriorityTxConfigIndex_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_PriorityTxConfigIndex_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_CBR_PriorityTxConfigList_v1650(SL_CBR_PriorityTxConfigList_v1650& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_PriorityTxConfigIndex_v1650*)std::malloc((std::size_t)value.count * sizeof(SL_PriorityTxConfigIndex_v1650));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_PriorityTxConfigIndex_v1650));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_PriorityTxConfigIndex_v1650(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_Thres_RSRP_List_r16(SL_Thres_RSRP_List_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 64u;
    value.items = (SL_Thres_RSRP_r16*)std::malloc((std::size_t)value.count * sizeof(SL_Thres_RSRP_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_Thres_RSRP_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SL_SelectionWindowList_r16(SL_SelectionWindowList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 8u;
    value.items = (SL_SelectionWindowConfig_r16*)std::malloc((std::size_t)value.count * sizeof(SL_SelectionWindowConfig_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_SelectionWindowConfig_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_SelectionWindowConfig_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_UE_SelectedConfigRP_r16(SL_UE_SelectedConfigRP_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_RS_ForSensing_r16 = SL_UE_SelectedConfigRP_r16_Sl_RS_ForSensing_r16_pscch;
}

void BuildSample_SL_TxPercentageList_r16(SL_TxPercentageList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 8u;
    value.items = (SL_TxPercentageConfig_r16*)std::malloc((std::size_t)value.count * sizeof(SL_TxPercentageConfig_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TxPercentageConfig_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_TxPercentageConfig_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_MinMaxMCS_List_r16(SL_MinMaxMCS_List_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_MinMaxMCS_Config_r16*)std::malloc((std::size_t)value.count * sizeof(SL_MinMaxMCS_Config_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_MinMaxMCS_Config_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_MinMaxMCS_Config_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_PowerControl_r16(SL_PowerControl_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_MaxTransPower_r16 = -30;
}

void BuildSample_SL_PSCCH_Config_r16(SL_PSCCH_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_PSCCH_Config_r16(SetupRelease_SL_PSCCH_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_PSCCH_Config_r16_Tag_release;
}

void BuildSample_SL_PSSCH_Config_r16(SL_PSSCH_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_PSSCH_Config_r16(SetupRelease_SL_PSSCH_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_PSSCH_Config_r16_Tag_release;
}

void BuildSample_SL_PSFCH_Config_r16(SL_PSFCH_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_PSFCH_Config_r16(SetupRelease_SL_PSFCH_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_PSFCH_Config_r16_Tag_release;
}

void BuildSample_SL_ResourcePool_r16_Sl_RxParametersNcell_r16(SL_ResourcePool_r16_Sl_RxParametersNcell_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_SyncConfigIndex_r16 = 0;
}

void BuildSample_SL_ResourcePool_r16(SL_ResourcePool_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_ResourcePoolConfig_r16(SL_ResourcePoolConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_ResourcePoolID_r16 = 1;
}

void BuildSample_SL_BWP_PoolConfig_r16(SL_BWP_PoolConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_BWP_PoolConfig_r16(SetupRelease_SL_BWP_PoolConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_BWP_PoolConfig_r16_Tag_release;
}

void BuildSample_SL_BWP_DiscPoolConfig_r17(SL_BWP_DiscPoolConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_BWP_DiscPoolConfig_r17(SetupRelease_SL_BWP_DiscPoolConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag_release;
}

void BuildSample_SL_PRS_TxPoolDedicated_r18(SL_PRS_TxPoolDedicated_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PRS_PowerControl_r18(SL_PRS_PowerControl_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag_release;
}

void BuildSample_SL_PRS_ResourcePool_r18(SL_PRS_ResourcePool_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PRS_ResourcePoolConfig_r18(SL_PRS_ResourcePoolConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_PRS_ResourcePoolID_r18 = 1;
}

void BuildSample_SL_BWP_PRS_PoolConfig_r18(SL_BWP_PRS_PoolConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_BWP_PRS_PoolConfig_r18(SetupRelease_SL_BWP_PRS_PoolConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag_release;
}

void BuildSample_SL_LBT_FailureRecoveryConfig_r18(SL_LBT_FailureRecoveryConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_LBT_FailureRecoveryConfig_r18(SetupRelease_SL_LBT_FailureRecoveryConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag_release;
}

void BuildSample_SL_PSBCH_Config_r16(SL_PSBCH_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SetupRelease_SL_PSBCH_Config_r16(SetupRelease_SL_PSBCH_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SetupRelease_SL_PSBCH_Config_r16_Tag_release;
}

void BuildSample_SL_BWP_Generic_r16(SL_BWP_Generic_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_BWP_Config_r16(SL_BWP_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_BWP_Id = 0;
}

void BuildSample_SL_BWP_DiscPoolConfigCommon_r17(SL_BWP_DiscPoolConfigCommon_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_BWP_PoolConfigCommon_r16(SL_BWP_PoolConfigCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_BWP_ConfigCommon_r16(SL_BWP_ConfigCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_BWP_PRS_PoolConfigCommon_r18(SL_BWP_PRS_PoolConfigCommon_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PriorityTxConfigIndex_r16(SL_PriorityTxConfigIndex_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PriorityTxConfigIndex_v1650(SL_PriorityTxConfigIndex_v1650& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_CBR_LevelsConfig_r16(SL_CBR_LevelsConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_CBR_r16*)std::malloc((std::size_t)value.count * sizeof(SL_CBR_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_CBR_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 0;
        }
    }
}

void BuildSample_SL_TxPower_r16(SL_TxPower_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_TxPower_r16_Tag_minusinfinity_r16;
}

void BuildSample_SL_PSSCH_TxParameters_r16(SL_PSSCH_TxParameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_MinMCS_PSSCH_r16 = 0;
    value.sl_MaxMCS_PSSCH_r16 = 0;
    value.sl_MinSubChannelNumPSSCH_r16 = 1;
    value.sl_MaxSubchannelNumPSSCH_r16 = 1;
    value.sl_MaxTxTransNumPSSCH_r16 = 1;
}

void BuildSample_SL_CBR_PSSCH_TxConfig_r16(SL_CBR_PSSCH_TxConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_CBR_LevelsDedicatedSL_PRS_RP_r18(SL_CBR_LevelsDedicatedSL_PRS_RP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 0u;
}

void BuildSample_SL_CBR_SL_PRS_TxConfig_r18(SL_CBR_SL_PRS_TxConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_SCCH_CarrierSetConfig_r18(SL_SCCH_CarrierSetConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_DestinationList_r18_count = 0u;
    value.sl_SRB_Identity_r18_count = 0u;
    value.sl_AllowedCarrierFreqSet1_r18_count = 0u;
    value.sl_AllowedCarrierFreqSet2_r18_count = 0u;
}

void BuildSample_SL_CG_MaxTransNumList_r16(SL_CG_MaxTransNumList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_CG_MaxTransNum_r16*)std::malloc((std::size_t)value.count * sizeof(SL_CG_MaxTransNum_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_CG_MaxTransNum_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_CG_MaxTransNum_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_PeriodCG_r16(SL_PeriodCG_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_PeriodCG_r16_Tag_sl_PeriodCG1_r16;
    value.u.sl_PeriodCG1_r16 = SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms100;
}

void BuildSample_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16(SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_ConfiguredGrantConfig_r16(SL_ConfiguredGrantConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_ConfigIndexCG_r16 = 0;
}

void BuildSample_SL_CG_MaxTransNum_r16(SL_CG_MaxTransNum_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_Priority_r16 = 1;
    value.sl_MaxTransNum_r16 = 1;
}

void BuildSample_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18(SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18(SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_ConfigIndexCG_r18 = 0;
    BuildSample_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18(value.rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18, depth + 1);
}

void BuildSample_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17(SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag_subMilliSeconds;
    value.u.subMilliSeconds = 1;
}

void BuildSample_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17(SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10;
    value.u.ms10 = 0;
}

void BuildSample_SL_DRX_ConfigUC_r17(SL_DRX_ConfigUC_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17(value.sl_drx_onDurationTimer_r17, depth + 1);
    value.sl_drx_InactivityTimer_r17 = SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms0;
    value.sl_drx_RetransmissionTimer_r17 = SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl0;
    BuildSample_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17(value.sl_drx_CycleStartOffset_r17, depth + 1);
    value.sl_drx_SlotOffset = 0;
}

void BuildSample_SL_DRX_ConfigUC_Info_r17(SL_DRX_ConfigUC_Info_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_SyncConfigList_r16(SL_SyncConfigList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_SyncConfig_r16*)std::malloc((std::size_t)value.count * sizeof(SL_SyncConfig_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_SyncConfig_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_SyncConfig_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_FreqConfig_r16(SL_FreqConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_Freq_Id_r16 = 1;
    value.sl_SCS_SpecificCarrierList_r16_count = 0u;
    value.valueN_r16 = -1;
}

void BuildSample_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18(SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag_sl_MaxEnergyDetectionThreshold_r18;
    value.u.sl_MaxEnergyDetectionThreshold_r18 = -85;
}

void BuildSample_SL_FreqConfigExt_v1800(SL_FreqConfigExt_v1800& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18(SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag_sl_MaxEnergyDetectionThreshold_r18;
    value.u.sl_MaxEnergyDetectionThreshold_r18 = -85;
}

void BuildSample_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18(SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_FreqConfigCommon_r16(SL_FreqConfigCommon_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_SCS_SpecificCarrierList_r16_count = 0u;
    value.sl_AbsoluteFrequencyPointA_r16 = 0;
    value.valueN_r16 = -1;
}

void BuildSample_SL_FreqSelectionConfig_r18(SL_FreqSelectionConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_priorityList_r18_count = 0u;
    value.sl_threshCBR_FreqReselection_r18 = 0;
    value.sl_threshCBR_FreqKeeping_r18 = 0;
}

void BuildSample_SL_ThresholdRSRP_Condition1_B_1_r17(SL_ThresholdRSRP_Condition1_B_1_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_Priority_r17 = 1;
    value.sl_ThresholdRSRP_Condition1_B_1_r17 = 0;
}

void BuildSample_SL_LogicalChannelConfig_r16(SL_LogicalChannelConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_Priority_r16 = 1;
    value.sl_PrioritisedBitRate_r16 = SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps0;
    value.sl_BucketSizeDuration_r16 = SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_ms5;
}

void BuildSample_SL_RemoteUE_ToAddMod_r17(SL_RemoteUE_ToAddMod_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_L2IdentityRemote_r17.bitLength = 24u;
    value.sl_L2IdentityRemote_r17.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_L2IdentityRemote_r17.bytes != nullptr) {
        std::memset(value.sl_L2IdentityRemote_r17.bytes, 0, 3u);
    }
}

void BuildSample_SL_U2U_RemoteUE_ToAddMod_r18(SL_U2U_RemoteUE_ToAddMod_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_L2IdentityRemoteUE_r18.bitLength = 24u;
    value.sl_L2IdentityRemoteUE_r18.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_L2IdentityRemoteUE_r18.bytes != nullptr) {
        std::memset(value.sl_L2IdentityRemoteUE_r18.bytes, 0, 3u);
    }
}

void BuildSample_SL_SRAP_ConfigU2U_r18(SL_SRAP_ConfigU2U_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_SourceRemoteUE_ToAddMod_r18(SL_SourceRemoteUE_ToAddMod_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_SourceUE_Identity_r18.bitLength = 24u;
    value.sl_SourceUE_Identity_r18.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_SourceUE_Identity_r18.bytes != nullptr) {
        std::memset(value.sl_SourceUE_Identity_r18.bytes, 0, 3u);
    }
    BuildSample_SL_SRAP_ConfigU2U_r18(value.sl_SRAP_ConfigU2U_r18, depth + 1);
}

void BuildSample_SL_U2U_RelayUE_ToAddMod_r18(SL_U2U_RelayUE_ToAddMod_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_L2IdentityRelay_r18.bitLength = 24u;
    value.sl_L2IdentityRelay_r18.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_L2IdentityRelay_r18.bytes != nullptr) {
        std::memset(value.sl_L2IdentityRelay_r18.bytes, 0, 3u);
    }
}

void BuildSample_SL_PeerRemoteUE_ToAddMod_r18(SL_PeerRemoteUE_ToAddMod_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_TargetUE_Identity_r18.bitLength = 24u;
    value.sl_TargetUE_Identity_r18.bytes = (std::uint8_t*)std::malloc(3u);
    if (value.sl_TargetUE_Identity_r18.bytes != nullptr) {
        std::memset(value.sl_TargetUE_Identity_r18.bytes, 0, 3u);
    }
    BuildSample_SL_SRAP_ConfigU2U_r18(value.sl_SRAP_ConfigU2U_r18, depth + 1);
}

void BuildSample_SL_MeasObjectToRemoveList_r16(SL_MeasObjectToRemoveList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_MeasObjectId_r16*)std::malloc((std::size_t)value.count * sizeof(SL_MeasObjectId_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_MeasObjectId_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SL_ReportConfigToRemoveList_r16(SL_ReportConfigToRemoveList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_ReportConfigId_r16*)std::malloc((std::size_t)value.count * sizeof(SL_ReportConfigId_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_ReportConfigId_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SL_MeasIdToRemoveList_r16(SL_MeasIdToRemoveList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_MeasId_r16*)std::malloc((std::size_t)value.count * sizeof(SL_MeasId_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_MeasId_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            value.items[i] = 1;
        }
    }
}

void BuildSample_SL_MeasConfig_r16(SL_MeasConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_MeasConfigInfo_r16(SL_MeasConfigInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_DestinationIndex_r16 = 0;
    BuildSample_SL_MeasConfig_r16(value.sl_MeasConfig_r16, depth + 1);
}

void BuildSample_SL_MeasIdInfo_r16(SL_MeasIdInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_MeasId_r16 = 1;
    value.sl_MeasObjectId_r16 = 1;
    value.sl_ReportConfigId_r16 = 1;
}

void BuildSample_SL_MeasObjectInfo_r16(SL_MeasObjectInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_MeasObjectId_r16 = 1;
    BuildSample_SL_MeasObject_r16(value.sl_MeasObject_r16, depth + 1);
}

void BuildSample_SL_PDCP_Config_r16(SL_PDCP_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PosBWP_ConfigCommon_r18(SL_PosBWP_ConfigCommon_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18(SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag_sl_ResourceReservePeriod1_r18;
    value.u.sl_ResourceReservePeriod1_r18 = SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms0;
}

void BuildSample_SL_PRS_ResourceDedicatedSL_PRS_RP_r18(SL_PRS_ResourceDedicatedSL_PRS_RP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18(SL_TxPercentageDedicatedSL_PRS_RP_Config_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18(SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_PSSCH_TxConfig_r16(SL_PSSCH_TxConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_ThresUE_Speed_r16 = SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16_kmph60;
    BuildSample_SL_PSSCH_TxParameters_r16(value.sl_ParametersAboveThres_r16, depth + 1);
    BuildSample_SL_PSSCH_TxParameters_r16(value.sl_ParametersBelowThres_r16, depth + 1);
}

void BuildSample_SL_MappedQoS_FlowsListDedicated_r16(SL_MappedQoS_FlowsListDedicated_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16(SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (SL_QoS_Profile_r16*)std::malloc((std::size_t)value.count * sizeof(SL_QoS_Profile_r16));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_QoS_Profile_r16));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_SL_QoS_Profile_r16(value.items[i], depth + 1);
        }
    }
}

void BuildSample_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16(SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag_sl_MappedQoS_FlowsList_r16;
    BuildSample_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16(value.u.sl_MappedQoS_FlowsList_r16, depth + 1);
}

void BuildSample_SL_SDAP_Config_r16(SL_SDAP_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_SDAP_Header_r16 = SL_SDAP_Config_r16_Sl_SDAP_Header_r16_present;
    value.sl_DefaultRB_r16 = true;
}

void BuildSample_SL_RadioBearerConfig_r16(SL_RadioBearerConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.slrb_Uu_ConfigIndex_r16 = 1;
}

void BuildSample_SL_RBSetConfig_r18(SL_RBSetConfig_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_RBSetIndex_r18 = 0;
}

void BuildSample_SL_PeriodicalReportConfig_r16(SL_PeriodicalReportConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_ReportInterval_r16 = ReportInterval_ms120;
    value.sl_ReportAmount_r16 = SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16_r1;
    BuildSample_SL_MeasReportQuantity_r16(value.sl_ReportQuantity_r16, depth + 1);
    value.sl_RS_Type_r16 = SL_RS_Type_r16_dmrs;
}

void BuildSample_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16(SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_MeasTriggerQuantity_r16(value.s1_Threshold_r16, depth + 1);
    value.sl_ReportOnLeave_r16 = true;
    value.sl_Hysteresis_r16 = 0;
    value.sl_TimeToTrigger_r16 = TimeToTrigger_ms0;
}

void BuildSample_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16(SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_MeasTriggerQuantity_r16(value.s2_Threshold_r16, depth + 1);
    value.sl_ReportOnLeave_r16 = true;
    value.sl_Hysteresis_r16 = 0;
    value.sl_TimeToTrigger_r16 = TimeToTrigger_ms0;
}

void BuildSample_SL_EventTriggerConfig_r16_Sl_EventId_r16(SL_EventTriggerConfig_r16_Sl_EventId_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag_eventS1_r16;
    BuildSample_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16(value.u.eventS1_r16, depth + 1);
}

void BuildSample_SL_EventTriggerConfig_r16(SL_EventTriggerConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_EventTriggerConfig_r16_Sl_EventId_r16(value.sl_EventId_r16, depth + 1);
    value.sl_ReportInterval_r16 = ReportInterval_ms120;
    value.sl_ReportAmount_r16 = SL_EventTriggerConfig_r16_Sl_ReportAmount_r16_r1;
    BuildSample_SL_MeasReportQuantity_r16(value.sl_ReportQuantity_r16, depth + 1);
    value.sl_RS_Type_r16 = SL_RS_Type_r16_dmrs;
}

void BuildSample_SL_ReportConfig_r16_Sl_ReportType_r16(SL_ReportConfig_r16_Sl_ReportType_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_ReportConfig_r16_Sl_ReportType_r16_Tag_sl_Periodical_r16;
    BuildSample_SL_PeriodicalReportConfig_r16(value.u.sl_Periodical_r16, depth + 1);
}

void BuildSample_SL_ReportConfig_r16(SL_ReportConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_ReportConfig_r16_Sl_ReportType_r16(value.sl_ReportType_r16, depth + 1);
}

void BuildSample_SL_ReportConfigInfo_r16(SL_ReportConfigInfo_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_ReportConfigId_r16 = 1;
    BuildSample_SL_ReportConfig_r16(value.sl_ReportConfig_r16, depth + 1);
}

void BuildSample_SL_CPE_StartingPositionsPSCCH_PSSCH_r18(SL_CPE_StartingPositionsPSCCH_PSSCH_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_Priority_r18 = 1;
    value.sl_CPE_StartingPositions_r18_count = 0u;
}

void BuildSample_SL_ZoneConfig_r16(SL_ZoneConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_ZoneLength_r16 = SL_ZoneConfig_r16_Sl_ZoneLength_r16_m5;
}

void BuildSample_SL_ZoneConfigMCR_r16(SL_ZoneConfigMCR_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_ZoneConfigMCR_Index_r16 = 0;
}

void BuildSample_SL_ResourceReservePeriod_r16(SL_ResourceReservePeriod_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_ResourceReservePeriod_r16_Tag_sl_ResourceReservePeriod1_r16;
    value.u.sl_ResourceReservePeriod1_r16 = SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms0;
}

void BuildSample_SL_SelectionWindowConfig_r16(SL_SelectionWindowConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_Priority_r16 = 1;
    value.sl_SelectionWindow_r16 = SL_SelectionWindowConfig_r16_Sl_SelectionWindow_r16_n1;
}

void BuildSample_SL_TxPercentageConfig_r16(SL_TxPercentageConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_Priority_r16 = 1;
    value.sl_TxPercentage_r16 = SL_TxPercentageConfig_r16_Sl_TxPercentage_r16_p20;
}

void BuildSample_SL_MinMaxMCS_Config_r16(SL_MinMaxMCS_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_MCS_Table_r16 = SL_MinMaxMCS_Config_r16_Sl_MCS_Table_r16_qam64;
    value.sl_MinMCS_PSSCH_r16 = 0;
    value.sl_MaxMCS_PSSCH_r16 = 0;
}

void BuildSample_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18(SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n2_r18;
    value.u.n2_r18 = 0;
}

void BuildSample_SL_PRS_ResourceSharedSL_PRS_RP_r18(SL_PRS_ResourceSharedSL_PRS_RP_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_PRS_ResourceID_r18 = 0;
    value.mNumberOfSymbols_r18 = 1;
    value.sl_PRS_starting_symbol_r18 = 4;
}

void BuildSample_SL_RLC_Config_r16_Sl_AM_RLC_r16(SL_RLC_Config_r16_Sl_AM_RLC_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_T_PollRetransmit_r16 = T_PollRetransmit_ms5;
    value.sl_PollPDU_r16 = PollPDU_p4;
    value.sl_PollByte_r16 = PollByte_kB1;
    value.sl_MaxRetxThreshold_r16 = SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16_t1;
}

void BuildSample_SL_RLC_Config_r16_Sl_UM_RLC_r16(SL_RLC_Config_r16_Sl_UM_RLC_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_RLC_Config_r16(SL_RLC_Config_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SL_RLC_Config_r16_Tag_sl_AM_RLC_r16;
    BuildSample_SL_RLC_Config_r16_Sl_AM_RLC_r16(value.u.sl_AM_RLC_r16, depth + 1);
}

void BuildSample_SL_RLC_BearerConfig_r16(SL_RLC_BearerConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_RLC_BearerConfigIndex_r16 = 1;
}

void BuildSample_SL_RLC_ChannelConfig_r17(SL_RLC_ChannelConfig_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_RLC_ChannelID_r17 = 1;
}

void BuildSample_SL_ServingCellInfo_r17(SL_ServingCellInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_PhysCellId_r17 = 0;
    value.sl_CarrierFreqNR_r17 = 0;
}

void BuildSample_SL_MappingToAddMod_r17(SL_MappingToAddMod_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_RemoteUE_RB_Identity_r17(value.sl_RemoteUE_RB_Identity_r17, depth + 1);
}

void BuildSample_SL_MappingConfig_U2U_r18(SL_MappingConfig_U2U_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.sl_RemoteUE_SLRB_Identity_r18 = 1;
    value.sl_EgressRLC_ChannelPC5_r18 = 1;
}

void BuildSample_SL_SSB_TimeAllocation_r16(SL_SSB_TimeAllocation_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_SyncConfig_r16_TxParameters_r16(SL_SyncConfig_r16_TxParameters_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SL_SyncConfig_r16(SL_SyncConfig_r16& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_SL_SyncConfig_r16_TxParameters_r16(value.txParameters_r16, depth + 1);
}

void BuildSample_MBS_NeighbourCell_r17(MBS_NeighbourCell_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.physCellId_r17 = 0;
}

void BuildSample_FreqInfoMBS_r18(FreqInfoMBS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.carrierFreqMBS_r18 = 0;
    value.freqBandIndicatorMBS_r18 = 1;
}

void BuildSample_CFR_LocationAndBW_r18(CFR_LocationAndBW_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_NonServingInfo_r18_Cfr_InfoMBS_r18(NonServingInfo_r18_Cfr_InfoMBS_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = NonServingInfo_r18_Cfr_InfoMBS_r18_Tag_cfr_Bandwidth_r18;
    value.u.cfr_Bandwidth_r18 = 1;
}

void BuildSample_NonServingInfo_r18(NonServingInfo_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_MBS_ServiceInfo_r17(MBS_ServiceInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_TMGI_r17(value.tmgi_r17, depth + 1);
}

void BuildSample_MRB_ListBroadcast_r17(MRB_ListBroadcast_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MRB_InfoBroadcast_r17*)std::malloc((std::size_t)value.count * sizeof(MRB_InfoBroadcast_r17));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MRB_InfoBroadcast_r17));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MRB_InfoBroadcast_r17(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MBS_SessionInfo_r17(MBS_SessionInfo_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_TMGI_r17(value.mbs_SessionId_r17, depth + 1);
    value.g_RNTI_r17 = 0;
    BuildSample_MRB_ListBroadcast_r17(value.mrb_ListBroadcast_r17, depth + 1);
}

void BuildSample_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17(MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.profile0x0000_r17 = true;
    value.profile0x0001_r17 = true;
    value.profile0x0002_r17 = true;
}

void BuildSample_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc(MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxCID_r17 = 15;
    BuildSample_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17(value.profiles_r17, depth + 1);
}

void BuildSample_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17(MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag_notUsed;
}

void BuildSample_MRB_PDCP_ConfigBroadcast_r17(MRB_PDCP_ConfigBroadcast_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17(value.headerCompression_r17, depth + 1);
}

void BuildSample_MRB_RLC_ConfigBroadcast_r17(MRB_RLC_ConfigBroadcast_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.logicalChannelIdentity_r17 = 1;
}

void BuildSample_MRB_InfoBroadcast_r17(MRB_InfoBroadcast_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MRB_PDCP_ConfigBroadcast_r17(value.pdcp_Config_r17, depth + 1);
    BuildSample_MRB_RLC_ConfigBroadcast_r17(value.rlc_Config_r17, depth + 1);
}

void BuildSample_MRB_ListMulticast_r18(MRB_ListMulticast_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.count = 1u;
    value.items = (MRB_InfoMulticast_r18*)std::malloc((std::size_t)value.count * sizeof(MRB_InfoMulticast_r18));
    if (value.items != nullptr) {
        std::memset(value.items, 0, (std::size_t)value.count * sizeof(MRB_InfoMulticast_r18));
        for (std::uint32_t i = 0; i < value.count; ++i) {
            BuildSample_MRB_InfoMulticast_r18(value.items[i], depth + 1);
        }
    }
}

void BuildSample_MBS_SessionInfoMulticast_r18(MBS_SessionInfoMulticast_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_TMGI_r17(value.mbs_SessionId_r18, depth + 1);
}

void BuildSample_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18(MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.profile0x0000_r18 = true;
    value.profile0x0001_r18 = true;
    value.profile0x0002_r18 = true;
}

void BuildSample_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc(MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.maxCID_r18 = 15;
    BuildSample_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18(value.profiles_r18, depth + 1);
}

void BuildSample_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18(MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag_notUsed;
}

void BuildSample_MRB_PDCP_ConfigMulticast_r18(MRB_PDCP_ConfigMulticast_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.pdcp_SN_SizeDL_r18 = MRB_PDCP_ConfigMulticast_r18_Pdcp_SN_SizeDL_r18_len12bits;
    BuildSample_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18(value.headerCompression_r18, depth + 1);
}

void BuildSample_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18(MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag_logicalChannelIdentitymulticast_r18;
    value.u.logicalChannelIdentitymulticast_r18 = 1;
}

void BuildSample_MRB_RLC_ConfigMulticast_r18(MRB_RLC_ConfigMulticast_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18(value.logicalChannelIdentity_r18, depth + 1);
    value.sn_FieldLength_r18 = MRB_RLC_ConfigMulticast_r18_Sn_FieldLength_r18_size6;
}

void BuildSample_MRB_InfoMulticast_r18(MRB_InfoMulticast_r18& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    BuildSample_MRB_PDCP_ConfigMulticast_r18(value.pdcp_Config_r18, depth + 1);
    BuildSample_MRB_RLC_ConfigMulticast_r18(value.rlc_Config_r18, depth + 1);
}

void BuildSample_MTCH_SSB_MappingWindowCycleOffset_r17(MTCH_SSB_MappingWindowCycleOffset_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms10;
    value.u.ms10 = 0;
}

void BuildSample_PDSCH_ConfigPTM_r17(PDSCH_ConfigPTM_r17& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
}

void BuildSample_SystemInformation_IEs_Sib_TypeAndInfo_Item(SystemInformation_IEs_Sib_TypeAndInfo_Item& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib2;
    BuildSample_SIB2(value.u.sib2, depth + 1);
}

void BuildSample_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item(PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_1_r16;
    BuildSample_SIBpos_r16(value.u.posSib1_1_r16, depth + 1);
}

void BuildSample_RateMatchPatternGroup_Item(RateMatchPatternGroup_Item& value, int depth)
{
    std::memset(&value, 0, sizeof(value));
    value.tag = RateMatchPatternGroup_Item_Tag_cellLevel;
    value.u.cellLevel = 0;
}

bool BuildSampleByKind(MessageKind kind, void* message)
{
    if (message == nullptr) { return false; }
    switch (kind) {
    case MessageKind_MIB: BuildSample_MIB(*static_cast<MIB*>(message), 0); return true;
    case MessageKind_SystemInformation: BuildSample_SystemInformation(*static_cast<SystemInformation*>(message), 0); return true;
    case MessageKind_SIB1: BuildSample_SIB1(*static_cast<SIB1*>(message), 0); return true;
    case MessageKind_RRCReject: BuildSample_RRCReject(*static_cast<RRCReject*>(message), 0); return true;
    case MessageKind_RRCSetup: BuildSample_RRCSetup(*static_cast<RRCSetup*>(message), 0); return true;
    case MessageKind_RRCReconfiguration: BuildSample_RRCReconfiguration(*static_cast<RRCReconfiguration*>(message), 0); return true;
    case MessageKind_RRCResume: BuildSample_RRCResume(*static_cast<RRCResume*>(message), 0); return true;
    case MessageKind_RRCRelease: BuildSample_RRCRelease(*static_cast<RRCRelease*>(message), 0); return true;
    case MessageKind_RRCReestablishment: BuildSample_RRCReestablishment(*static_cast<RRCReestablishment*>(message), 0); return true;
    case MessageKind_SecurityModeCommand: BuildSample_SecurityModeCommand(*static_cast<SecurityModeCommand*>(message), 0); return true;
    case MessageKind_DLInformationTransfer: BuildSample_DLInformationTransfer(*static_cast<DLInformationTransfer*>(message), 0); return true;
    case MessageKind_UECapabilityEnquiry: BuildSample_UECapabilityEnquiry(*static_cast<UECapabilityEnquiry*>(message), 0); return true;
    case MessageKind_CounterCheck: BuildSample_CounterCheck(*static_cast<CounterCheck*>(message), 0); return true;
    case MessageKind_MobilityFromNRCommand: BuildSample_MobilityFromNRCommand(*static_cast<MobilityFromNRCommand*>(message), 0); return true;
    case MessageKind_DLDedicatedMessageSegment_r16: BuildSample_DLDedicatedMessageSegment_r16(*static_cast<DLDedicatedMessageSegment_r16*>(message), 0); return true;
    case MessageKind_UEInformationRequest_r16: BuildSample_UEInformationRequest_r16(*static_cast<UEInformationRequest_r16*>(message), 0); return true;
    case MessageKind_DLInformationTransferMRDC_r16: BuildSample_DLInformationTransferMRDC_r16(*static_cast<DLInformationTransferMRDC_r16*>(message), 0); return true;
    case MessageKind_LoggedMeasurementConfiguration_r16: BuildSample_LoggedMeasurementConfiguration_r16(*static_cast<LoggedMeasurementConfiguration_r16*>(message), 0); return true;
    case MessageKind_MBSBroadcastConfiguration_r17: BuildSample_MBSBroadcastConfiguration_r17(*static_cast<MBSBroadcastConfiguration_r17*>(message), 0); return true;
    case MessageKind_MBSMulticastConfiguration_r18: BuildSample_MBSMulticastConfiguration_r18(*static_cast<MBSMulticastConfiguration_r18*>(message), 0); return true;
    case MessageKind_Paging: BuildSample_Paging(*static_cast<Paging*>(message), 0); return true;
    case MessageKind_RRCSetupRequest: BuildSample_RRCSetupRequest(*static_cast<RRCSetupRequest*>(message), 0); return true;
    case MessageKind_RRCResumeRequest: BuildSample_RRCResumeRequest(*static_cast<RRCResumeRequest*>(message), 0); return true;
    case MessageKind_RRCReestablishmentRequest: BuildSample_RRCReestablishmentRequest(*static_cast<RRCReestablishmentRequest*>(message), 0); return true;
    case MessageKind_RRCSystemInfoRequest: BuildSample_RRCSystemInfoRequest(*static_cast<RRCSystemInfoRequest*>(message), 0); return true;
    case MessageKind_RRCResumeRequest1: BuildSample_RRCResumeRequest1(*static_cast<RRCResumeRequest1*>(message), 0); return true;
    case MessageKind_MeasurementReport: BuildSample_MeasurementReport(*static_cast<MeasurementReport*>(message), 0); return true;
    case MessageKind_RRCReconfigurationComplete: BuildSample_RRCReconfigurationComplete(*static_cast<RRCReconfigurationComplete*>(message), 0); return true;
    case MessageKind_RRCSetupComplete: BuildSample_RRCSetupComplete(*static_cast<RRCSetupComplete*>(message), 0); return true;
    case MessageKind_RRCReestablishmentComplete: BuildSample_RRCReestablishmentComplete(*static_cast<RRCReestablishmentComplete*>(message), 0); return true;
    case MessageKind_RRCResumeComplete: BuildSample_RRCResumeComplete(*static_cast<RRCResumeComplete*>(message), 0); return true;
    case MessageKind_SecurityModeComplete: BuildSample_SecurityModeComplete(*static_cast<SecurityModeComplete*>(message), 0); return true;
    case MessageKind_SecurityModeFailure: BuildSample_SecurityModeFailure(*static_cast<SecurityModeFailure*>(message), 0); return true;
    case MessageKind_ULInformationTransfer: BuildSample_ULInformationTransfer(*static_cast<ULInformationTransfer*>(message), 0); return true;
    case MessageKind_LocationMeasurementIndication: BuildSample_LocationMeasurementIndication(*static_cast<LocationMeasurementIndication*>(message), 0); return true;
    case MessageKind_UECapabilityInformation: BuildSample_UECapabilityInformation(*static_cast<UECapabilityInformation*>(message), 0); return true;
    case MessageKind_CounterCheckResponse: BuildSample_CounterCheckResponse(*static_cast<CounterCheckResponse*>(message), 0); return true;
    case MessageKind_UEAssistanceInformation: BuildSample_UEAssistanceInformation(*static_cast<UEAssistanceInformation*>(message), 0); return true;
    case MessageKind_FailureInformation: BuildSample_FailureInformation(*static_cast<FailureInformation*>(message), 0); return true;
    case MessageKind_ULInformationTransferMRDC: BuildSample_ULInformationTransferMRDC(*static_cast<ULInformationTransferMRDC*>(message), 0); return true;
    case MessageKind_SCGFailureInformation: BuildSample_SCGFailureInformation(*static_cast<SCGFailureInformation*>(message), 0); return true;
    case MessageKind_SCGFailureInformationEUTRA: BuildSample_SCGFailureInformationEUTRA(*static_cast<SCGFailureInformationEUTRA*>(message), 0); return true;
    case MessageKind_ULDedicatedMessageSegment_r16: BuildSample_ULDedicatedMessageSegment_r16(*static_cast<ULDedicatedMessageSegment_r16*>(message), 0); return true;
    case MessageKind_DedicatedSIBRequest_r16: BuildSample_DedicatedSIBRequest_r16(*static_cast<DedicatedSIBRequest_r16*>(message), 0); return true;
    case MessageKind_MCGFailureInformation_r16: BuildSample_MCGFailureInformation_r16(*static_cast<MCGFailureInformation_r16*>(message), 0); return true;
    case MessageKind_UEInformationResponse_r16: BuildSample_UEInformationResponse_r16(*static_cast<UEInformationResponse_r16*>(message), 0); return true;
    case MessageKind_SidelinkUEInformationNR_r16: BuildSample_SidelinkUEInformationNR_r16(*static_cast<SidelinkUEInformationNR_r16*>(message), 0); return true;
    case MessageKind_ULInformationTransferIRAT_r16: BuildSample_ULInformationTransferIRAT_r16(*static_cast<ULInformationTransferIRAT_r16*>(message), 0); return true;
    case MessageKind_IABOtherInformation_r16: BuildSample_IABOtherInformation_r16(*static_cast<IABOtherInformation_r16*>(message), 0); return true;
    case MessageKind_MBSInterestIndication_r17: BuildSample_MBSInterestIndication_r17(*static_cast<MBSInterestIndication_r17*>(message), 0); return true;
    case MessageKind_UEPositioningAssistanceInfo_r17: BuildSample_UEPositioningAssistanceInfo_r17(*static_cast<UEPositioningAssistanceInfo_r17*>(message), 0); return true;
    case MessageKind_MeasurementReportAppLayer_r17: BuildSample_MeasurementReportAppLayer_r17(*static_cast<MeasurementReportAppLayer_r17*>(message), 0); return true;
    case MessageKind_IndirectPathFailureInformation_r18: BuildSample_IndirectPathFailureInformation_r18(*static_cast<IndirectPathFailureInformation_r18*>(message), 0); return true;
    default: break;
    }
    return false;
}

void FreeSampleByKind(MessageKind kind, void* message)
{
    if (message == nullptr) { return; }
    switch (kind) {
    case MessageKind_MIB: Free_MIB(*static_cast<MIB*>(message)); return;
    case MessageKind_SystemInformation: Free_SystemInformation(*static_cast<SystemInformation*>(message)); return;
    case MessageKind_SIB1: Free_SIB1(*static_cast<SIB1*>(message)); return;
    case MessageKind_RRCReject: Free_RRCReject(*static_cast<RRCReject*>(message)); return;
    case MessageKind_RRCSetup: Free_RRCSetup(*static_cast<RRCSetup*>(message)); return;
    case MessageKind_RRCReconfiguration: Free_RRCReconfiguration(*static_cast<RRCReconfiguration*>(message)); return;
    case MessageKind_RRCResume: Free_RRCResume(*static_cast<RRCResume*>(message)); return;
    case MessageKind_RRCRelease: Free_RRCRelease(*static_cast<RRCRelease*>(message)); return;
    case MessageKind_RRCReestablishment: Free_RRCReestablishment(*static_cast<RRCReestablishment*>(message)); return;
    case MessageKind_SecurityModeCommand: Free_SecurityModeCommand(*static_cast<SecurityModeCommand*>(message)); return;
    case MessageKind_DLInformationTransfer: Free_DLInformationTransfer(*static_cast<DLInformationTransfer*>(message)); return;
    case MessageKind_UECapabilityEnquiry: Free_UECapabilityEnquiry(*static_cast<UECapabilityEnquiry*>(message)); return;
    case MessageKind_CounterCheck: Free_CounterCheck(*static_cast<CounterCheck*>(message)); return;
    case MessageKind_MobilityFromNRCommand: Free_MobilityFromNRCommand(*static_cast<MobilityFromNRCommand*>(message)); return;
    case MessageKind_DLDedicatedMessageSegment_r16: Free_DLDedicatedMessageSegment_r16(*static_cast<DLDedicatedMessageSegment_r16*>(message)); return;
    case MessageKind_UEInformationRequest_r16: Free_UEInformationRequest_r16(*static_cast<UEInformationRequest_r16*>(message)); return;
    case MessageKind_DLInformationTransferMRDC_r16: Free_DLInformationTransferMRDC_r16(*static_cast<DLInformationTransferMRDC_r16*>(message)); return;
    case MessageKind_LoggedMeasurementConfiguration_r16: Free_LoggedMeasurementConfiguration_r16(*static_cast<LoggedMeasurementConfiguration_r16*>(message)); return;
    case MessageKind_MBSBroadcastConfiguration_r17: Free_MBSBroadcastConfiguration_r17(*static_cast<MBSBroadcastConfiguration_r17*>(message)); return;
    case MessageKind_MBSMulticastConfiguration_r18: Free_MBSMulticastConfiguration_r18(*static_cast<MBSMulticastConfiguration_r18*>(message)); return;
    case MessageKind_Paging: Free_Paging(*static_cast<Paging*>(message)); return;
    case MessageKind_RRCSetupRequest: Free_RRCSetupRequest(*static_cast<RRCSetupRequest*>(message)); return;
    case MessageKind_RRCResumeRequest: Free_RRCResumeRequest(*static_cast<RRCResumeRequest*>(message)); return;
    case MessageKind_RRCReestablishmentRequest: Free_RRCReestablishmentRequest(*static_cast<RRCReestablishmentRequest*>(message)); return;
    case MessageKind_RRCSystemInfoRequest: Free_RRCSystemInfoRequest(*static_cast<RRCSystemInfoRequest*>(message)); return;
    case MessageKind_RRCResumeRequest1: Free_RRCResumeRequest1(*static_cast<RRCResumeRequest1*>(message)); return;
    case MessageKind_MeasurementReport: Free_MeasurementReport(*static_cast<MeasurementReport*>(message)); return;
    case MessageKind_RRCReconfigurationComplete: Free_RRCReconfigurationComplete(*static_cast<RRCReconfigurationComplete*>(message)); return;
    case MessageKind_RRCSetupComplete: Free_RRCSetupComplete(*static_cast<RRCSetupComplete*>(message)); return;
    case MessageKind_RRCReestablishmentComplete: Free_RRCReestablishmentComplete(*static_cast<RRCReestablishmentComplete*>(message)); return;
    case MessageKind_RRCResumeComplete: Free_RRCResumeComplete(*static_cast<RRCResumeComplete*>(message)); return;
    case MessageKind_SecurityModeComplete: Free_SecurityModeComplete(*static_cast<SecurityModeComplete*>(message)); return;
    case MessageKind_SecurityModeFailure: Free_SecurityModeFailure(*static_cast<SecurityModeFailure*>(message)); return;
    case MessageKind_ULInformationTransfer: Free_ULInformationTransfer(*static_cast<ULInformationTransfer*>(message)); return;
    case MessageKind_LocationMeasurementIndication: Free_LocationMeasurementIndication(*static_cast<LocationMeasurementIndication*>(message)); return;
    case MessageKind_UECapabilityInformation: Free_UECapabilityInformation(*static_cast<UECapabilityInformation*>(message)); return;
    case MessageKind_CounterCheckResponse: Free_CounterCheckResponse(*static_cast<CounterCheckResponse*>(message)); return;
    case MessageKind_UEAssistanceInformation: Free_UEAssistanceInformation(*static_cast<UEAssistanceInformation*>(message)); return;
    case MessageKind_FailureInformation: Free_FailureInformation(*static_cast<FailureInformation*>(message)); return;
    case MessageKind_ULInformationTransferMRDC: Free_ULInformationTransferMRDC(*static_cast<ULInformationTransferMRDC*>(message)); return;
    case MessageKind_SCGFailureInformation: Free_SCGFailureInformation(*static_cast<SCGFailureInformation*>(message)); return;
    case MessageKind_SCGFailureInformationEUTRA: Free_SCGFailureInformationEUTRA(*static_cast<SCGFailureInformationEUTRA*>(message)); return;
    case MessageKind_ULDedicatedMessageSegment_r16: Free_ULDedicatedMessageSegment_r16(*static_cast<ULDedicatedMessageSegment_r16*>(message)); return;
    case MessageKind_DedicatedSIBRequest_r16: Free_DedicatedSIBRequest_r16(*static_cast<DedicatedSIBRequest_r16*>(message)); return;
    case MessageKind_MCGFailureInformation_r16: Free_MCGFailureInformation_r16(*static_cast<MCGFailureInformation_r16*>(message)); return;
    case MessageKind_UEInformationResponse_r16: Free_UEInformationResponse_r16(*static_cast<UEInformationResponse_r16*>(message)); return;
    case MessageKind_SidelinkUEInformationNR_r16: Free_SidelinkUEInformationNR_r16(*static_cast<SidelinkUEInformationNR_r16*>(message)); return;
    case MessageKind_ULInformationTransferIRAT_r16: Free_ULInformationTransferIRAT_r16(*static_cast<ULInformationTransferIRAT_r16*>(message)); return;
    case MessageKind_IABOtherInformation_r16: Free_IABOtherInformation_r16(*static_cast<IABOtherInformation_r16*>(message)); return;
    case MessageKind_MBSInterestIndication_r17: Free_MBSInterestIndication_r17(*static_cast<MBSInterestIndication_r17*>(message)); return;
    case MessageKind_UEPositioningAssistanceInfo_r17: Free_UEPositioningAssistanceInfo_r17(*static_cast<UEPositioningAssistanceInfo_r17*>(message)); return;
    case MessageKind_MeasurementReportAppLayer_r17: Free_MeasurementReportAppLayer_r17(*static_cast<MeasurementReportAppLayer_r17*>(message)); return;
    case MessageKind_IndirectPathFailureInformation_r18: Free_IndirectPathFailureInformation_r18(*static_cast<IndirectPathFailureInformation_r18*>(message)); return;
    default: break;
    }
}

std::size_t MessageStructSize(MessageKind kind)
{
    switch (kind) {
    case MessageKind_MIB: return sizeof(MIB);
    case MessageKind_SystemInformation: return sizeof(SystemInformation);
    case MessageKind_SIB1: return sizeof(SIB1);
    case MessageKind_RRCReject: return sizeof(RRCReject);
    case MessageKind_RRCSetup: return sizeof(RRCSetup);
    case MessageKind_RRCReconfiguration: return sizeof(RRCReconfiguration);
    case MessageKind_RRCResume: return sizeof(RRCResume);
    case MessageKind_RRCRelease: return sizeof(RRCRelease);
    case MessageKind_RRCReestablishment: return sizeof(RRCReestablishment);
    case MessageKind_SecurityModeCommand: return sizeof(SecurityModeCommand);
    case MessageKind_DLInformationTransfer: return sizeof(DLInformationTransfer);
    case MessageKind_UECapabilityEnquiry: return sizeof(UECapabilityEnquiry);
    case MessageKind_CounterCheck: return sizeof(CounterCheck);
    case MessageKind_MobilityFromNRCommand: return sizeof(MobilityFromNRCommand);
    case MessageKind_DLDedicatedMessageSegment_r16: return sizeof(DLDedicatedMessageSegment_r16);
    case MessageKind_UEInformationRequest_r16: return sizeof(UEInformationRequest_r16);
    case MessageKind_DLInformationTransferMRDC_r16: return sizeof(DLInformationTransferMRDC_r16);
    case MessageKind_LoggedMeasurementConfiguration_r16: return sizeof(LoggedMeasurementConfiguration_r16);
    case MessageKind_MBSBroadcastConfiguration_r17: return sizeof(MBSBroadcastConfiguration_r17);
    case MessageKind_MBSMulticastConfiguration_r18: return sizeof(MBSMulticastConfiguration_r18);
    case MessageKind_Paging: return sizeof(Paging);
    case MessageKind_RRCSetupRequest: return sizeof(RRCSetupRequest);
    case MessageKind_RRCResumeRequest: return sizeof(RRCResumeRequest);
    case MessageKind_RRCReestablishmentRequest: return sizeof(RRCReestablishmentRequest);
    case MessageKind_RRCSystemInfoRequest: return sizeof(RRCSystemInfoRequest);
    case MessageKind_RRCResumeRequest1: return sizeof(RRCResumeRequest1);
    case MessageKind_MeasurementReport: return sizeof(MeasurementReport);
    case MessageKind_RRCReconfigurationComplete: return sizeof(RRCReconfigurationComplete);
    case MessageKind_RRCSetupComplete: return sizeof(RRCSetupComplete);
    case MessageKind_RRCReestablishmentComplete: return sizeof(RRCReestablishmentComplete);
    case MessageKind_RRCResumeComplete: return sizeof(RRCResumeComplete);
    case MessageKind_SecurityModeComplete: return sizeof(SecurityModeComplete);
    case MessageKind_SecurityModeFailure: return sizeof(SecurityModeFailure);
    case MessageKind_ULInformationTransfer: return sizeof(ULInformationTransfer);
    case MessageKind_LocationMeasurementIndication: return sizeof(LocationMeasurementIndication);
    case MessageKind_UECapabilityInformation: return sizeof(UECapabilityInformation);
    case MessageKind_CounterCheckResponse: return sizeof(CounterCheckResponse);
    case MessageKind_UEAssistanceInformation: return sizeof(UEAssistanceInformation);
    case MessageKind_FailureInformation: return sizeof(FailureInformation);
    case MessageKind_ULInformationTransferMRDC: return sizeof(ULInformationTransferMRDC);
    case MessageKind_SCGFailureInformation: return sizeof(SCGFailureInformation);
    case MessageKind_SCGFailureInformationEUTRA: return sizeof(SCGFailureInformationEUTRA);
    case MessageKind_ULDedicatedMessageSegment_r16: return sizeof(ULDedicatedMessageSegment_r16);
    case MessageKind_DedicatedSIBRequest_r16: return sizeof(DedicatedSIBRequest_r16);
    case MessageKind_MCGFailureInformation_r16: return sizeof(MCGFailureInformation_r16);
    case MessageKind_UEInformationResponse_r16: return sizeof(UEInformationResponse_r16);
    case MessageKind_SidelinkUEInformationNR_r16: return sizeof(SidelinkUEInformationNR_r16);
    case MessageKind_ULInformationTransferIRAT_r16: return sizeof(ULInformationTransferIRAT_r16);
    case MessageKind_IABOtherInformation_r16: return sizeof(IABOtherInformation_r16);
    case MessageKind_MBSInterestIndication_r17: return sizeof(MBSInterestIndication_r17);
    case MessageKind_UEPositioningAssistanceInfo_r17: return sizeof(UEPositioningAssistanceInfo_r17);
    case MessageKind_MeasurementReportAppLayer_r17: return sizeof(MeasurementReportAppLayer_r17);
    case MessageKind_IndirectPathFailureInformation_r18: return sizeof(IndirectPathFailureInformation_r18);
    default: break;
    }
    return 0;
}

std::size_t MessageStructAlignment(MessageKind kind)
{
    switch (kind) {
    case MessageKind_MIB: return alignof(MIB);
    case MessageKind_SystemInformation: return alignof(SystemInformation);
    case MessageKind_SIB1: return alignof(SIB1);
    case MessageKind_RRCReject: return alignof(RRCReject);
    case MessageKind_RRCSetup: return alignof(RRCSetup);
    case MessageKind_RRCReconfiguration: return alignof(RRCReconfiguration);
    case MessageKind_RRCResume: return alignof(RRCResume);
    case MessageKind_RRCRelease: return alignof(RRCRelease);
    case MessageKind_RRCReestablishment: return alignof(RRCReestablishment);
    case MessageKind_SecurityModeCommand: return alignof(SecurityModeCommand);
    case MessageKind_DLInformationTransfer: return alignof(DLInformationTransfer);
    case MessageKind_UECapabilityEnquiry: return alignof(UECapabilityEnquiry);
    case MessageKind_CounterCheck: return alignof(CounterCheck);
    case MessageKind_MobilityFromNRCommand: return alignof(MobilityFromNRCommand);
    case MessageKind_DLDedicatedMessageSegment_r16: return alignof(DLDedicatedMessageSegment_r16);
    case MessageKind_UEInformationRequest_r16: return alignof(UEInformationRequest_r16);
    case MessageKind_DLInformationTransferMRDC_r16: return alignof(DLInformationTransferMRDC_r16);
    case MessageKind_LoggedMeasurementConfiguration_r16: return alignof(LoggedMeasurementConfiguration_r16);
    case MessageKind_MBSBroadcastConfiguration_r17: return alignof(MBSBroadcastConfiguration_r17);
    case MessageKind_MBSMulticastConfiguration_r18: return alignof(MBSMulticastConfiguration_r18);
    case MessageKind_Paging: return alignof(Paging);
    case MessageKind_RRCSetupRequest: return alignof(RRCSetupRequest);
    case MessageKind_RRCResumeRequest: return alignof(RRCResumeRequest);
    case MessageKind_RRCReestablishmentRequest: return alignof(RRCReestablishmentRequest);
    case MessageKind_RRCSystemInfoRequest: return alignof(RRCSystemInfoRequest);
    case MessageKind_RRCResumeRequest1: return alignof(RRCResumeRequest1);
    case MessageKind_MeasurementReport: return alignof(MeasurementReport);
    case MessageKind_RRCReconfigurationComplete: return alignof(RRCReconfigurationComplete);
    case MessageKind_RRCSetupComplete: return alignof(RRCSetupComplete);
    case MessageKind_RRCReestablishmentComplete: return alignof(RRCReestablishmentComplete);
    case MessageKind_RRCResumeComplete: return alignof(RRCResumeComplete);
    case MessageKind_SecurityModeComplete: return alignof(SecurityModeComplete);
    case MessageKind_SecurityModeFailure: return alignof(SecurityModeFailure);
    case MessageKind_ULInformationTransfer: return alignof(ULInformationTransfer);
    case MessageKind_LocationMeasurementIndication: return alignof(LocationMeasurementIndication);
    case MessageKind_UECapabilityInformation: return alignof(UECapabilityInformation);
    case MessageKind_CounterCheckResponse: return alignof(CounterCheckResponse);
    case MessageKind_UEAssistanceInformation: return alignof(UEAssistanceInformation);
    case MessageKind_FailureInformation: return alignof(FailureInformation);
    case MessageKind_ULInformationTransferMRDC: return alignof(ULInformationTransferMRDC);
    case MessageKind_SCGFailureInformation: return alignof(SCGFailureInformation);
    case MessageKind_SCGFailureInformationEUTRA: return alignof(SCGFailureInformationEUTRA);
    case MessageKind_ULDedicatedMessageSegment_r16: return alignof(ULDedicatedMessageSegment_r16);
    case MessageKind_DedicatedSIBRequest_r16: return alignof(DedicatedSIBRequest_r16);
    case MessageKind_MCGFailureInformation_r16: return alignof(MCGFailureInformation_r16);
    case MessageKind_UEInformationResponse_r16: return alignof(UEInformationResponse_r16);
    case MessageKind_SidelinkUEInformationNR_r16: return alignof(SidelinkUEInformationNR_r16);
    case MessageKind_ULInformationTransferIRAT_r16: return alignof(ULInformationTransferIRAT_r16);
    case MessageKind_IABOtherInformation_r16: return alignof(IABOtherInformation_r16);
    case MessageKind_MBSInterestIndication_r17: return alignof(MBSInterestIndication_r17);
    case MessageKind_UEPositioningAssistanceInfo_r17: return alignof(UEPositioningAssistanceInfo_r17);
    case MessageKind_MeasurementReportAppLayer_r17: return alignof(MeasurementReportAppLayer_r17);
    case MessageKind_IndirectPathFailureInformation_r18: return alignof(IndirectPathFailureInformation_r18);
    default: break;
    }
    return 0;
}
}  // namespace test
}  // namespace v1810
}  // namespace rrc
