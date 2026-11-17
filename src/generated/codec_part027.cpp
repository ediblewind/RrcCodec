/* ============================================================================
 * src/generated/codec_part027.cpp — 生成的编解码函数
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#include "codec_internal.h"

#include <cstdlib>
#include <cstring>
#include <vector>

namespace rrc {
namespace v1810 {

ErrorCode Encode_MAC_ParametersCommon_ExtGroup1(Encoder& enc, const MAC_ParametersCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_recommendedBitRate);
    enc.WriteBit(value.has_recommendedBitRateQuery);
    if (value.has_recommendedBitRate) {
        enc.WriteConstrainedInteger((std::int64_t)(value.recommendedBitRate), 0, 0);
    }
    if (value.has_recommendedBitRateQuery) {
        enc.WriteConstrainedInteger((std::int64_t)(value.recommendedBitRateQuery), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersCommon_ExtGroup1(Decoder& dec, MAC_ParametersCommon_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.recommendedBitRate = (MAC_ParametersCommon_ExtGroup1_RecommendedBitRate)0;
    }
    if (present_1) {
        value.recommendedBitRateQuery = (MAC_ParametersCommon_ExtGroup1_RecommendedBitRateQuery)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersCommon_ExtGroup1(MAC_ParametersCommon_ExtGroup1& value)
{
    if (value.has_recommendedBitRate) {
    }
    if (value.has_recommendedBitRateQuery) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersCommon_ExtGroup2(Encoder& enc, const MAC_ParametersCommon_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_recommendedBitRateMultiplier_r16);
    enc.WriteBit(value.has_preEmptiveBSR_r16);
    enc.WriteBit(value.has_autonomousTransmission_r16);
    enc.WriteBit(value.has_lch_PriorityBasedPrioritization_r16);
    enc.WriteBit(value.has_lch_ToConfiguredGrantMapping_r16);
    enc.WriteBit(value.has_lch_ToGrantPriorityRestriction_r16);
    enc.WriteBit(value.has_singlePHR_P_r16);
    enc.WriteBit(value.has_ul_LBT_FailureDetectionRecovery_r16);
    enc.WriteBit(value.has_tdd_MPE_P_MPR_Reporting_r16);
    enc.WriteBit(value.has_lcid_ExtensionIAB_r16);
    if (value.has_recommendedBitRateMultiplier_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.recommendedBitRateMultiplier_r16), 0, 0);
    }
    if (value.has_preEmptiveBSR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preEmptiveBSR_r16), 0, 0);
    }
    if (value.has_autonomousTransmission_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.autonomousTransmission_r16), 0, 0);
    }
    if (value.has_lch_PriorityBasedPrioritization_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lch_PriorityBasedPrioritization_r16), 0, 0);
    }
    if (value.has_lch_ToConfiguredGrantMapping_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lch_ToConfiguredGrantMapping_r16), 0, 0);
    }
    if (value.has_lch_ToGrantPriorityRestriction_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lch_ToGrantPriorityRestriction_r16), 0, 0);
    }
    if (value.has_singlePHR_P_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.singlePHR_P_r16), 0, 0);
    }
    if (value.has_ul_LBT_FailureDetectionRecovery_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_LBT_FailureDetectionRecovery_r16), 0, 0);
    }
    if (value.has_tdd_MPE_P_MPR_Reporting_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tdd_MPE_P_MPR_Reporting_r16), 0, 0);
    }
    if (value.has_lcid_ExtensionIAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lcid_ExtensionIAB_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersCommon_ExtGroup2(Decoder& dec, MAC_ParametersCommon_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (present_0) {
        value.recommendedBitRateMultiplier_r16 = (MAC_ParametersCommon_ExtGroup2_RecommendedBitRateMultiplier_r16)0;
    }
    if (present_1) {
        value.preEmptiveBSR_r16 = (MAC_ParametersCommon_ExtGroup2_PreEmptiveBSR_r16)0;
    }
    if (present_2) {
        value.autonomousTransmission_r16 = (MAC_ParametersCommon_ExtGroup2_AutonomousTransmission_r16)0;
    }
    if (present_3) {
        value.lch_PriorityBasedPrioritization_r16 = (MAC_ParametersCommon_ExtGroup2_Lch_PriorityBasedPrioritization_r16)0;
    }
    if (present_4) {
        value.lch_ToConfiguredGrantMapping_r16 = (MAC_ParametersCommon_ExtGroup2_Lch_ToConfiguredGrantMapping_r16)0;
    }
    if (present_5) {
        value.lch_ToGrantPriorityRestriction_r16 = (MAC_ParametersCommon_ExtGroup2_Lch_ToGrantPriorityRestriction_r16)0;
    }
    if (present_6) {
        value.singlePHR_P_r16 = (MAC_ParametersCommon_ExtGroup2_SinglePHR_P_r16)0;
    }
    if (present_7) {
        value.ul_LBT_FailureDetectionRecovery_r16 = (MAC_ParametersCommon_ExtGroup2_Ul_LBT_FailureDetectionRecovery_r16)0;
    }
    if (present_8) {
        value.tdd_MPE_P_MPR_Reporting_r16 = (MAC_ParametersCommon_ExtGroup2_Tdd_MPE_P_MPR_Reporting_r16)0;
    }
    if (present_9) {
        value.lcid_ExtensionIAB_r16 = (MAC_ParametersCommon_ExtGroup2_Lcid_ExtensionIAB_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersCommon_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersCommon_ExtGroup2(MAC_ParametersCommon_ExtGroup2& value)
{
    if (value.has_recommendedBitRateMultiplier_r16) {
    }
    if (value.has_preEmptiveBSR_r16) {
    }
    if (value.has_autonomousTransmission_r16) {
    }
    if (value.has_lch_PriorityBasedPrioritization_r16) {
    }
    if (value.has_lch_ToConfiguredGrantMapping_r16) {
    }
    if (value.has_lch_ToGrantPriorityRestriction_r16) {
    }
    if (value.has_singlePHR_P_r16) {
    }
    if (value.has_ul_LBT_FailureDetectionRecovery_r16) {
    }
    if (value.has_tdd_MPE_P_MPR_Reporting_r16) {
    }
    if (value.has_lcid_ExtensionIAB_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersCommon_ExtGroup3(Encoder& enc, const MAC_ParametersCommon_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_spCell_BFR_CBRA_r16);
    if (value.has_spCell_BFR_CBRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spCell_BFR_CBRA_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersCommon_ExtGroup3(Decoder& dec, MAC_ParametersCommon_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.spCell_BFR_CBRA_r16 = (MAC_ParametersCommon_ExtGroup3_SpCell_BFR_CBRA_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersCommon_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersCommon_ExtGroup3(MAC_ParametersCommon_ExtGroup3& value)
{
    if (value.has_spCell_BFR_CBRA_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersCommon_ExtGroup4(Encoder& enc, const MAC_ParametersCommon_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_ResourceId_Ext_r16);
    if (value.has_srs_ResourceId_Ext_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceId_Ext_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersCommon_ExtGroup4(Decoder& dec, MAC_ParametersCommon_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.srs_ResourceId_Ext_r16 = (MAC_ParametersCommon_ExtGroup4_Srs_ResourceId_Ext_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersCommon_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersCommon_ExtGroup4(MAC_ParametersCommon_ExtGroup4& value)
{
    if (value.has_srs_ResourceId_Ext_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersCommon_ExtGroup5(Encoder& enc, const MAC_ParametersCommon_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_enhancedUuDRX_forSidelink_r17);
    enc.WriteBit(value.has_mg_ActivationRequestPRS_Meas_r17);
    enc.WriteBit(value.has_mg_ActivationCommPRS_Meas_r17);
    enc.WriteBit(value.has_intraCG_Prioritization_r17);
    enc.WriteBit(value.has_jointPrioritizationCG_Retx_Timer_r17);
    enc.WriteBit(value.has_survivalTime_r17);
    enc.WriteBit(value.has_lcg_ExtensionIAB_r17);
    enc.WriteBit(value.has_harq_FeedbackDisabled_r17);
    enc.WriteBit(value.has_uplink_Harq_ModeB_r17);
    enc.WriteBit(value.has_sr_TriggeredBy_TA_Report_r17);
    enc.WriteBit(value.has_extendedDRX_CycleInactive_r17);
    enc.WriteBit(value.has_simultaneousSR_PUSCH_DiffPUCCH_groups_r17);
    enc.WriteBit(value.has_lastTransmissionUL_r17);
    if (value.has_enhancedUuDRX_forSidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedUuDRX_forSidelink_r17), 0, 0);
    }
    if (value.has_mg_ActivationRequestPRS_Meas_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mg_ActivationRequestPRS_Meas_r17), 0, 0);
    }
    if (value.has_mg_ActivationCommPRS_Meas_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mg_ActivationCommPRS_Meas_r17), 0, 0);
    }
    if (value.has_intraCG_Prioritization_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraCG_Prioritization_r17), 0, 0);
    }
    if (value.has_jointPrioritizationCG_Retx_Timer_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.jointPrioritizationCG_Retx_Timer_r17), 0, 0);
    }
    if (value.has_survivalTime_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.survivalTime_r17), 0, 0);
    }
    if (value.has_lcg_ExtensionIAB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lcg_ExtensionIAB_r17), 0, 0);
    }
    if (value.has_harq_FeedbackDisabled_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_FeedbackDisabled_r17), 0, 0);
    }
    if (value.has_uplink_Harq_ModeB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplink_Harq_ModeB_r17), 0, 0);
    }
    if (value.has_sr_TriggeredBy_TA_Report_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sr_TriggeredBy_TA_Report_r17), 0, 0);
    }
    if (value.has_extendedDRX_CycleInactive_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedDRX_CycleInactive_r17), 0, 0);
    }
    if (value.has_simultaneousSR_PUSCH_DiffPUCCH_groups_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousSR_PUSCH_DiffPUCCH_groups_r17), 0, 0);
    }
    if (value.has_lastTransmissionUL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lastTransmissionUL_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersCommon_ExtGroup5(Decoder& dec, MAC_ParametersCommon_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (present_0) {
        value.enhancedUuDRX_forSidelink_r17 = (MAC_ParametersCommon_ExtGroup5_EnhancedUuDRX_forSidelink_r17)0;
    }
    if (present_1) {
        value.mg_ActivationRequestPRS_Meas_r17 = (MAC_ParametersCommon_ExtGroup5_Mg_ActivationRequestPRS_Meas_r17)0;
    }
    if (present_2) {
        value.mg_ActivationCommPRS_Meas_r17 = (MAC_ParametersCommon_ExtGroup5_Mg_ActivationCommPRS_Meas_r17)0;
    }
    if (present_3) {
        value.intraCG_Prioritization_r17 = (MAC_ParametersCommon_ExtGroup5_IntraCG_Prioritization_r17)0;
    }
    if (present_4) {
        value.jointPrioritizationCG_Retx_Timer_r17 = (MAC_ParametersCommon_ExtGroup5_JointPrioritizationCG_Retx_Timer_r17)0;
    }
    if (present_5) {
        value.survivalTime_r17 = (MAC_ParametersCommon_ExtGroup5_SurvivalTime_r17)0;
    }
    if (present_6) {
        value.lcg_ExtensionIAB_r17 = (MAC_ParametersCommon_ExtGroup5_Lcg_ExtensionIAB_r17)0;
    }
    if (present_7) {
        value.harq_FeedbackDisabled_r17 = (MAC_ParametersCommon_ExtGroup5_Harq_FeedbackDisabled_r17)0;
    }
    if (present_8) {
        value.uplink_Harq_ModeB_r17 = (MAC_ParametersCommon_ExtGroup5_Uplink_Harq_ModeB_r17)0;
    }
    if (present_9) {
        value.sr_TriggeredBy_TA_Report_r17 = (MAC_ParametersCommon_ExtGroup5_Sr_TriggeredBy_TA_Report_r17)0;
    }
    if (present_10) {
        value.extendedDRX_CycleInactive_r17 = (MAC_ParametersCommon_ExtGroup5_ExtendedDRX_CycleInactive_r17)0;
    }
    if (present_11) {
        value.simultaneousSR_PUSCH_DiffPUCCH_groups_r17 = (MAC_ParametersCommon_ExtGroup5_SimultaneousSR_PUSCH_DiffPUCCH_groups_r17)0;
    }
    if (present_12) {
        value.lastTransmissionUL_r17 = (MAC_ParametersCommon_ExtGroup5_LastTransmissionUL_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersCommon_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersCommon_ExtGroup5(MAC_ParametersCommon_ExtGroup5& value)
{
    if (value.has_enhancedUuDRX_forSidelink_r17) {
    }
    if (value.has_mg_ActivationRequestPRS_Meas_r17) {
    }
    if (value.has_mg_ActivationCommPRS_Meas_r17) {
    }
    if (value.has_intraCG_Prioritization_r17) {
    }
    if (value.has_jointPrioritizationCG_Retx_Timer_r17) {
    }
    if (value.has_survivalTime_r17) {
    }
    if (value.has_lcg_ExtensionIAB_r17) {
    }
    if (value.has_harq_FeedbackDisabled_r17) {
    }
    if (value.has_uplink_Harq_ModeB_r17) {
    }
    if (value.has_sr_TriggeredBy_TA_Report_r17) {
    }
    if (value.has_extendedDRX_CycleInactive_r17) {
    }
    if (value.has_simultaneousSR_PUSCH_DiffPUCCH_groups_r17) {
    }
    if (value.has_lastTransmissionUL_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersCommon_ExtGroup6(Encoder& enc, const MAC_ParametersCommon_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_sr_TriggeredByTA_ReportATG_r18);
    enc.WriteBit(value.has_uplinkTA_ReportingATG_r18);
    enc.WriteBit(value.has_extendedDRX_CycleInactive_r18);
    enc.WriteBit(value.has_additionalBS_Table_r18);
    enc.WriteBit(value.has_delayStatusReport_r18);
    enc.WriteBit(value.has_disableCG_RetransmissionMonitoring_r18);
    enc.WriteBit(value.has_non_IntegerDRX_r18);
    if (value.has_sr_TriggeredByTA_ReportATG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sr_TriggeredByTA_ReportATG_r18), 0, 0);
    }
    if (value.has_uplinkTA_ReportingATG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTA_ReportingATG_r18), 0, 0);
    }
    if (value.has_extendedDRX_CycleInactive_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedDRX_CycleInactive_r18), 0, 0);
    }
    if (value.has_additionalBS_Table_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalBS_Table_r18), 0, 0);
    }
    if (value.has_delayStatusReport_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.delayStatusReport_r18), 0, 0);
    }
    if (value.has_disableCG_RetransmissionMonitoring_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.disableCG_RetransmissionMonitoring_r18), 0, 0);
    }
    if (value.has_non_IntegerDRX_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.non_IntegerDRX_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersCommon_ExtGroup6(Decoder& dec, MAC_ParametersCommon_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (present_0) {
        value.sr_TriggeredByTA_ReportATG_r18 = (MAC_ParametersCommon_ExtGroup6_Sr_TriggeredByTA_ReportATG_r18)0;
    }
    if (present_1) {
        value.uplinkTA_ReportingATG_r18 = (MAC_ParametersCommon_ExtGroup6_UplinkTA_ReportingATG_r18)0;
    }
    if (present_2) {
        value.extendedDRX_CycleInactive_r18 = (MAC_ParametersCommon_ExtGroup6_ExtendedDRX_CycleInactive_r18)0;
    }
    if (present_3) {
        value.additionalBS_Table_r18 = (MAC_ParametersCommon_ExtGroup6_AdditionalBS_Table_r18)0;
    }
    if (present_4) {
        value.delayStatusReport_r18 = (MAC_ParametersCommon_ExtGroup6_DelayStatusReport_r18)0;
    }
    if (present_5) {
        value.disableCG_RetransmissionMonitoring_r18 = (MAC_ParametersCommon_ExtGroup6_DisableCG_RetransmissionMonitoring_r18)0;
    }
    if (present_6) {
        value.non_IntegerDRX_r18 = (MAC_ParametersCommon_ExtGroup6_Non_IntegerDRX_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersCommon_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersCommon_ExtGroup6(MAC_ParametersCommon_ExtGroup6& value)
{
    if (value.has_sr_TriggeredByTA_ReportATG_r18) {
    }
    if (value.has_uplinkTA_ReportingATG_r18) {
    }
    if (value.has_extendedDRX_CycleInactive_r18) {
    }
    if (value.has_additionalBS_Table_r18) {
    }
    if (value.has_delayStatusReport_r18) {
    }
    if (value.has_disableCG_RetransmissionMonitoring_r18) {
    }
    if (value.has_non_IntegerDRX_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersCommon(Encoder& enc, const MAC_ParametersCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_lcp_Restriction);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_lch_ToSCellRestriction);
    if (value.has_lcp_Restriction) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lcp_Restriction), 0, 0);
    }
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    if (value.has_lch_ToSCellRestriction) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lch_ToSCellRestriction), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(6u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        enc.WriteBit(value.has_extGroup6);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MAC_ParametersCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MAC_ParametersCommon_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_MAC_ParametersCommon_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_MAC_ParametersCommon_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_MAC_ParametersCommon_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_MAC_ParametersCommon_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersCommon(Decoder& dec, MAC_ParametersCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        value.lcp_Restriction = (MAC_ParametersCommon_Lcp_Restriction)0;
    }
    if (present_1) {
        value.dummy = (MAC_ParametersCommon_Dummy)0;
    }
    if (present_2) {
        value.lch_ToSCellRestriction = (MAC_ParametersCommon_Lch_ToSCellRestriction)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 6u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[6] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MAC_ParametersCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MAC_ParametersCommon_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MAC_ParametersCommon_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup3 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[3]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MAC_ParametersCommon_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup4 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[4]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MAC_ParametersCommon_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup5 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[5]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MAC_ParametersCommon_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup6 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersCommon(MAC_ParametersCommon& value)
{
    if (value.has_lcp_Restriction) {
    }
    if (value.has_dummy) {
    }
    if (value.has_lch_ToSCellRestriction) {
    }
    if (value.has_extGroup1) {
        Free_MAC_ParametersCommon_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MAC_ParametersCommon_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_MAC_ParametersCommon_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_MAC_ParametersCommon_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_MAC_ParametersCommon_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_MAC_ParametersCommon_ExtGroup6(value.extGroup6);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersXDD_Diff_ExtGroup1(Encoder& enc, const MAC_ParametersXDD_Diff_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_secondaryDRX_Group_r16);
    if (value.has_secondaryDRX_Group_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.secondaryDRX_Group_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersXDD_Diff_ExtGroup1(Decoder& dec, MAC_ParametersXDD_Diff_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.secondaryDRX_Group_r16 = (MAC_ParametersXDD_Diff_ExtGroup1_SecondaryDRX_Group_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersXDD_Diff_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersXDD_Diff_ExtGroup1(MAC_ParametersXDD_Diff_ExtGroup1& value)
{
    if (value.has_secondaryDRX_Group_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersXDD_Diff_ExtGroup2(Encoder& enc, const MAC_ParametersXDD_Diff_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_enhancedSkipUplinkTxDynamic_r16);
    enc.WriteBit(value.has_enhancedSkipUplinkTxConfigured_r16);
    if (value.has_enhancedSkipUplinkTxDynamic_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedSkipUplinkTxDynamic_r16), 0, 0);
    }
    if (value.has_enhancedSkipUplinkTxConfigured_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedSkipUplinkTxConfigured_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersXDD_Diff_ExtGroup2(Decoder& dec, MAC_ParametersXDD_Diff_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.enhancedSkipUplinkTxDynamic_r16 = (MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxDynamic_r16)0;
    }
    if (present_1) {
        value.enhancedSkipUplinkTxConfigured_r16 = (MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxConfigured_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersXDD_Diff_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersXDD_Diff_ExtGroup2(MAC_ParametersXDD_Diff_ExtGroup2& value)
{
    if (value.has_enhancedSkipUplinkTxDynamic_r16) {
    }
    if (value.has_enhancedSkipUplinkTxConfigured_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersXDD_Diff_ExtGroup3(Encoder& enc, const MAC_ParametersXDD_Diff_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_ptm_Retransmission_r18);
    enc.WriteBit(value.has_ptm_RetransmissionInactive_r18);
    if (value.has_ptm_Retransmission_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ptm_Retransmission_r18), 0, 0);
    }
    if (value.has_ptm_RetransmissionInactive_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ptm_RetransmissionInactive_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersXDD_Diff_ExtGroup3(Decoder& dec, MAC_ParametersXDD_Diff_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.ptm_Retransmission_r18 = (MAC_ParametersXDD_Diff_ExtGroup3_Ptm_Retransmission_r18)0;
    }
    if (present_1) {
        value.ptm_RetransmissionInactive_r18 = (MAC_ParametersXDD_Diff_ExtGroup3_Ptm_RetransmissionInactive_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersXDD_Diff_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersXDD_Diff_ExtGroup3(MAC_ParametersXDD_Diff_ExtGroup3& value)
{
    if (value.has_ptm_Retransmission_r18) {
    }
    if (value.has_ptm_RetransmissionInactive_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersXDD_Diff(Encoder& enc, const MAC_ParametersXDD_Diff& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_skipUplinkTxDynamic);
    enc.WriteBit(value.has_logicalChannelSR_DelayTimer);
    enc.WriteBit(value.has_longDRX_Cycle);
    enc.WriteBit(value.has_shortDRX_Cycle);
    enc.WriteBit(value.has_multipleSR_Configurations);
    enc.WriteBit(value.has_multipleConfiguredGrants);
    if (value.has_skipUplinkTxDynamic) {
        enc.WriteConstrainedInteger((std::int64_t)(value.skipUplinkTxDynamic), 0, 0);
    }
    if (value.has_logicalChannelSR_DelayTimer) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannelSR_DelayTimer), 0, 0);
    }
    if (value.has_longDRX_Cycle) {
        enc.WriteConstrainedInteger((std::int64_t)(value.longDRX_Cycle), 0, 0);
    }
    if (value.has_shortDRX_Cycle) {
        enc.WriteConstrainedInteger((std::int64_t)(value.shortDRX_Cycle), 0, 0);
    }
    if (value.has_multipleSR_Configurations) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipleSR_Configurations), 0, 0);
    }
    if (value.has_multipleConfiguredGrants) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipleConfiguredGrants), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MAC_ParametersXDD_Diff_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MAC_ParametersXDD_Diff_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_MAC_ParametersXDD_Diff_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersXDD_Diff(Decoder& dec, MAC_ParametersXDD_Diff& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (present_0) {
        value.skipUplinkTxDynamic = (MAC_ParametersXDD_Diff_SkipUplinkTxDynamic)0;
    }
    if (present_1) {
        value.logicalChannelSR_DelayTimer = (MAC_ParametersXDD_Diff_LogicalChannelSR_DelayTimer)0;
    }
    if (present_2) {
        value.longDRX_Cycle = (MAC_ParametersXDD_Diff_LongDRX_Cycle)0;
    }
    if (present_3) {
        value.shortDRX_Cycle = (MAC_ParametersXDD_Diff_ShortDRX_Cycle)0;
    }
    if (present_4) {
        value.multipleSR_Configurations = (MAC_ParametersXDD_Diff_MultipleSR_Configurations)0;
    }
    if (present_5) {
        value.multipleConfiguredGrants = (MAC_ParametersXDD_Diff_MultipleConfiguredGrants)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 3u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[3] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MAC_ParametersXDD_Diff_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MAC_ParametersXDD_Diff_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MAC_ParametersXDD_Diff_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup3 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersXDD_Diff(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersXDD_Diff(MAC_ParametersXDD_Diff& value)
{
    if (value.has_skipUplinkTxDynamic) {
    }
    if (value.has_logicalChannelSR_DelayTimer) {
    }
    if (value.has_longDRX_Cycle) {
    }
    if (value.has_shortDRX_Cycle) {
    }
    if (value.has_multipleSR_Configurations) {
    }
    if (value.has_multipleConfiguredGrants) {
    }
    if (value.has_extGroup1) {
        Free_MAC_ParametersXDD_Diff_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MAC_ParametersXDD_Diff_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_MAC_ParametersXDD_Diff_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_Parameters(Encoder& enc, const MAC_Parameters& value)
{
    (void)value;
    enc.WriteBit(value.has_mac_ParametersCommon);
    enc.WriteBit(value.has_mac_ParametersXDD_Diff);
    if (value.has_mac_ParametersCommon) {
        Encode_MAC_ParametersCommon(enc, value.mac_ParametersCommon);
    }
    if (value.has_mac_ParametersXDD_Diff) {
        Encode_MAC_ParametersXDD_Diff(enc, value.mac_ParametersXDD_Diff);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_Parameters(Decoder& dec, MAC_Parameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MAC_ParametersCommon(dec, value.mac_ParametersCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MAC_ParametersXDD_Diff(dec, value.mac_ParametersXDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_Parameters(MAC_Parameters& value)
{
    if (value.has_mac_ParametersCommon) {
        Free_MAC_ParametersCommon(value.mac_ParametersCommon);
    }
    if (value.has_mac_ParametersXDD_Diff) {
        Free_MAC_ParametersXDD_Diff(value.mac_ParametersXDD_Diff);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MinTimeGap_r16(Encoder& enc, const MinTimeGap_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_r16);
    enc.WriteBit(value.has_scs_60kHz_r16);
    enc.WriteBit(value.has_scs_120kHz_r16);
    if (value.has_scs_15kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r16), 0, 1);
    }
    if (value.has_scs_30kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r16), 0, 1);
    }
    if (value.has_scs_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r16), 0, 1);
    }
    if (value.has_scs_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_MinTimeGap_r16(Decoder& dec, MinTimeGap_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_15kHz_r16 = (MinTimeGap_r16_Scs_15kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_30kHz_r16 = (MinTimeGap_r16_Scs_30kHz_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_60kHz_r16 = (MinTimeGap_r16_Scs_60kHz_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_120kHz_r16 = (MinTimeGap_r16_Scs_120kHz_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MinTimeGap_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinTimeGap_r16(MinTimeGap_r16& value)
{
    if (value.has_scs_15kHz_r16) {
    }
    if (value.has_scs_30kHz_r16) {
    }
    if (value.has_scs_60kHz_r16) {
    }
    if (value.has_scs_120kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16(Encoder& enc, const MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_non_SharedSpectrumChAccess_r16);
    enc.WriteBit(value.has_sharedSpectrumChAccess_r16);
    if (value.has_non_SharedSpectrumChAccess_r16) {
        Encode_MinTimeGap_r16(enc, value.non_SharedSpectrumChAccess_r16);
    }
    if (value.has_sharedSpectrumChAccess_r16) {
        Encode_MinTimeGap_r16(enc, value.sharedSpectrumChAccess_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16(Decoder& dec, MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MinTimeGap_r16(dec, value.non_SharedSpectrumChAccess_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MinTimeGap_r16(dec, value.sharedSpectrumChAccess_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16(MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16& value)
{
    if (value.has_non_SharedSpectrumChAccess_r16) {
        Free_MinTimeGap_r16(value.non_SharedSpectrumChAccess_r16);
    }
    if (value.has_sharedSpectrumChAccess_r16) {
        Free_MinTimeGap_r16(value.sharedSpectrumChAccess_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersFRX_Diff_r16(Encoder& enc, const MAC_ParametersFRX_Diff_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_directMCG_SCellActivation_r16);
    enc.WriteBit(value.has_directMCG_SCellActivationResume_r16);
    enc.WriteBit(value.has_directSCG_SCellActivation_r16);
    enc.WriteBit(value.has_directSCG_SCellActivationResume_r16);
    enc.WriteBit(value.has_drx_Adaptation_r16);
    if (value.has_directMCG_SCellActivation_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directMCG_SCellActivation_r16), 0, 0);
    }
    if (value.has_directMCG_SCellActivationResume_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directMCG_SCellActivationResume_r16), 0, 0);
    }
    if (value.has_directSCG_SCellActivation_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directSCG_SCellActivation_r16), 0, 0);
    }
    if (value.has_directSCG_SCellActivationResume_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directSCG_SCellActivationResume_r16), 0, 0);
    }
    if (value.has_drx_Adaptation_r16) {
        Encode_MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16(enc, value.drx_Adaptation_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersFRX_Diff_r16(Decoder& dec, MAC_ParametersFRX_Diff_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (present_0) {
        value.directMCG_SCellActivation_r16 = (MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivation_r16)0;
    }
    if (present_1) {
        value.directMCG_SCellActivationResume_r16 = (MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivationResume_r16)0;
    }
    if (present_2) {
        value.directSCG_SCellActivation_r16 = (MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivation_r16)0;
    }
    if (present_3) {
        value.directSCG_SCellActivationResume_r16 = (MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivationResume_r16)0;
    }
    if (present_4) {
        if (Decode_MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16(dec, value.drx_Adaptation_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersFRX_Diff_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersFRX_Diff_r16(MAC_ParametersFRX_Diff_r16& value)
{
    if (value.has_directMCG_SCellActivation_r16) {
    }
    if (value.has_directMCG_SCellActivationResume_r16) {
    }
    if (value.has_directSCG_SCellActivation_r16) {
    }
    if (value.has_directSCG_SCellActivationResume_r16) {
    }
    if (value.has_drx_Adaptation_r16) {
        Free_MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16(value.drx_Adaptation_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_Parameters_v1610(Encoder& enc, const MAC_Parameters_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_mac_ParametersFRX_Diff_r16);
    if (value.has_mac_ParametersFRX_Diff_r16) {
        Encode_MAC_ParametersFRX_Diff_r16(enc, value.mac_ParametersFRX_Diff_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_Parameters_v1610(Decoder& dec, MAC_Parameters_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MAC_ParametersFRX_Diff_r16(dec, value.mac_ParametersFRX_Diff_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_Parameters_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_Parameters_v1610(MAC_Parameters_v1610& value)
{
    if (value.has_mac_ParametersFRX_Diff_r16) {
        Free_MAC_ParametersFRX_Diff_r16(value.mac_ParametersFRX_Diff_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MinTimeGapFR2_2_r17(Encoder& enc, const MinTimeGapFR2_2_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_120kHz_r17);
    enc.WriteBit(value.has_scs_480kHz_r17);
    enc.WriteBit(value.has_scs_960kHz_r17);
    if (value.has_scs_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r17), 0, 1);
    }
    if (value.has_scs_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_480kHz_r17), 0, 1);
    }
    if (value.has_scs_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_960kHz_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_MinTimeGapFR2_2_r17(Decoder& dec, MinTimeGapFR2_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_120kHz_r17 = (MinTimeGapFR2_2_r17_Scs_120kHz_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_480kHz_r17 = (MinTimeGapFR2_2_r17_Scs_480kHz_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_960kHz_r17 = (MinTimeGapFR2_2_r17_Scs_960kHz_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MinTimeGapFR2_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinTimeGapFR2_2_r17(MinTimeGapFR2_2_r17& value)
{
    if (value.has_scs_120kHz_r17) {
    }
    if (value.has_scs_480kHz_r17) {
    }
    if (value.has_scs_960kHz_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersFR2_2_r17_Drx_Adaptation_r17(Encoder& enc, const MAC_ParametersFR2_2_r17_Drx_Adaptation_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_non_SharedSpectrumChAccess_r17);
    enc.WriteBit(value.has_sharedSpectrumChAccess_r17);
    if (value.has_non_SharedSpectrumChAccess_r17) {
        Encode_MinTimeGapFR2_2_r17(enc, value.non_SharedSpectrumChAccess_r17);
    }
    if (value.has_sharedSpectrumChAccess_r17) {
        Encode_MinTimeGapFR2_2_r17(enc, value.sharedSpectrumChAccess_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersFR2_2_r17_Drx_Adaptation_r17(Decoder& dec, MAC_ParametersFR2_2_r17_Drx_Adaptation_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MinTimeGapFR2_2_r17(dec, value.non_SharedSpectrumChAccess_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MinTimeGapFR2_2_r17(dec, value.sharedSpectrumChAccess_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersFR2_2_r17_Drx_Adaptation_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersFR2_2_r17_Drx_Adaptation_r17(MAC_ParametersFR2_2_r17_Drx_Adaptation_r17& value)
{
    if (value.has_non_SharedSpectrumChAccess_r17) {
        Free_MinTimeGapFR2_2_r17(value.non_SharedSpectrumChAccess_r17);
    }
    if (value.has_sharedSpectrumChAccess_r17) {
        Free_MinTimeGapFR2_2_r17(value.sharedSpectrumChAccess_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersFR2_2_r17(Encoder& enc, const MAC_ParametersFR2_2_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_directMCG_SCellActivation_r17);
    enc.WriteBit(value.has_directMCG_SCellActivationResume_r17);
    enc.WriteBit(value.has_directSCG_SCellActivation_r17);
    enc.WriteBit(value.has_directSCG_SCellActivationResume_r17);
    enc.WriteBit(value.has_drx_Adaptation_r17);
    if (value.has_directMCG_SCellActivation_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directMCG_SCellActivation_r17), 0, 0);
    }
    if (value.has_directMCG_SCellActivationResume_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directMCG_SCellActivationResume_r17), 0, 0);
    }
    if (value.has_directSCG_SCellActivation_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directSCG_SCellActivation_r17), 0, 0);
    }
    if (value.has_directSCG_SCellActivationResume_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directSCG_SCellActivationResume_r17), 0, 0);
    }
    if (value.has_drx_Adaptation_r17) {
        Encode_MAC_ParametersFR2_2_r17_Drx_Adaptation_r17(enc, value.drx_Adaptation_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersFR2_2_r17(Decoder& dec, MAC_ParametersFR2_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (present_0) {
        value.directMCG_SCellActivation_r17 = (MAC_ParametersFR2_2_r17_DirectMCG_SCellActivation_r17)0;
    }
    if (present_1) {
        value.directMCG_SCellActivationResume_r17 = (MAC_ParametersFR2_2_r17_DirectMCG_SCellActivationResume_r17)0;
    }
    if (present_2) {
        value.directSCG_SCellActivation_r17 = (MAC_ParametersFR2_2_r17_DirectSCG_SCellActivation_r17)0;
    }
    if (present_3) {
        value.directSCG_SCellActivationResume_r17 = (MAC_ParametersFR2_2_r17_DirectSCG_SCellActivationResume_r17)0;
    }
    if (present_4) {
        if (Decode_MAC_ParametersFR2_2_r17_Drx_Adaptation_r17(dec, value.drx_Adaptation_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersFR2_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersFR2_2_r17(MAC_ParametersFR2_2_r17& value)
{
    if (value.has_directMCG_SCellActivation_r17) {
    }
    if (value.has_directMCG_SCellActivationResume_r17) {
    }
    if (value.has_directSCG_SCellActivation_r17) {
    }
    if (value.has_directSCG_SCellActivationResume_r17) {
    }
    if (value.has_drx_Adaptation_r17) {
        Free_MAC_ParametersFR2_2_r17_Drx_Adaptation_r17(value.drx_Adaptation_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_Parameters_v1700(Encoder& enc, const MAC_Parameters_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_mac_ParametersFR2_2_r17);
    if (value.has_mac_ParametersFR2_2_r17) {
        Encode_MAC_ParametersFR2_2_r17(enc, value.mac_ParametersFR2_2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_Parameters_v1700(Decoder& dec, MAC_Parameters_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MAC_ParametersFR2_2_r17(dec, value.mac_ParametersFR2_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_Parameters_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_Parameters_v1700(MAC_Parameters_v1700& value)
{
    if (value.has_mac_ParametersFR2_2_r17) {
        Free_MAC_ParametersFR2_2_r17(value.mac_ParametersFR2_2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup1(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_eventB_MeasAndReport);
    enc.WriteBit(value.has_handoverFDD_TDD);
    enc.WriteBit(value.has_eutra_CGI_Reporting);
    enc.WriteBit(value.has_nr_CGI_Reporting);
    if (value.has_eventB_MeasAndReport) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eventB_MeasAndReport), 0, 0);
    }
    if (value.has_handoverFDD_TDD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverFDD_TDD), 0, 0);
    }
    if (value.has_eutra_CGI_Reporting) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_CGI_Reporting), 0, 0);
    }
    if (value.has_nr_CGI_Reporting) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_CGI_Reporting), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup1(Decoder& dec, MeasAndMobParametersCommon_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.eventB_MeasAndReport = (MeasAndMobParametersCommon_ExtGroup1_EventB_MeasAndReport)0;
    }
    if (present_1) {
        value.handoverFDD_TDD = (MeasAndMobParametersCommon_ExtGroup1_HandoverFDD_TDD)0;
    }
    if (present_2) {
        value.eutra_CGI_Reporting = (MeasAndMobParametersCommon_ExtGroup1_Eutra_CGI_Reporting)0;
    }
    if (present_3) {
        value.nr_CGI_Reporting = (MeasAndMobParametersCommon_ExtGroup1_Nr_CGI_Reporting)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup1(MeasAndMobParametersCommon_ExtGroup1& value)
{
    if (value.has_eventB_MeasAndReport) {
    }
    if (value.has_handoverFDD_TDD) {
    }
    if (value.has_eutra_CGI_Reporting) {
    }
    if (value.has_nr_CGI_Reporting) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup2(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_independentGapConfig);
    enc.WriteBit(value.has_periodicEUTRA_MeasAndReport);
    enc.WriteBit(value.has_handoverFR1_FR2);
    enc.WriteBit(value.has_maxNumberCSI_RS_RRM_RS_SINR);
    if (value.has_independentGapConfig) {
        enc.WriteConstrainedInteger((std::int64_t)(value.independentGapConfig), 0, 0);
    }
    if (value.has_periodicEUTRA_MeasAndReport) {
        enc.WriteConstrainedInteger((std::int64_t)(value.periodicEUTRA_MeasAndReport), 0, 0);
    }
    if (value.has_handoverFR1_FR2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverFR1_FR2), 0, 0);
    }
    if (value.has_maxNumberCSI_RS_RRM_RS_SINR) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_RRM_RS_SINR), 0, 5);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup2(Decoder& dec, MeasAndMobParametersCommon_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.independentGapConfig = (MeasAndMobParametersCommon_ExtGroup2_IndependentGapConfig)0;
    }
    if (present_1) {
        value.periodicEUTRA_MeasAndReport = (MeasAndMobParametersCommon_ExtGroup2_PeriodicEUTRA_MeasAndReport)0;
    }
    if (present_2) {
        value.handoverFR1_FR2 = (MeasAndMobParametersCommon_ExtGroup2_HandoverFR1_FR2)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_RRM_RS_SINR = (MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup2(MeasAndMobParametersCommon_ExtGroup2& value)
{
    if (value.has_independentGapConfig) {
    }
    if (value.has_periodicEUTRA_MeasAndReport) {
    }
    if (value.has_handoverFR1_FR2) {
    }
    if (value.has_maxNumberCSI_RS_RRM_RS_SINR) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup3(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_nr_CGI_Reporting_ENDC);
    if (value.has_nr_CGI_Reporting_ENDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_CGI_Reporting_ENDC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup3(Decoder& dec, MeasAndMobParametersCommon_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.nr_CGI_Reporting_ENDC = (MeasAndMobParametersCommon_ExtGroup3_Nr_CGI_Reporting_ENDC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup3(MeasAndMobParametersCommon_ExtGroup3& value)
{
    if (value.has_nr_CGI_Reporting_ENDC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup4(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_eutra_CGI_Reporting_NEDC);
    enc.WriteBit(value.has_eutra_CGI_Reporting_NRDC);
    enc.WriteBit(value.has_nr_CGI_Reporting_NEDC);
    enc.WriteBit(value.has_nr_CGI_Reporting_NRDC);
    if (value.has_eutra_CGI_Reporting_NEDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_CGI_Reporting_NEDC), 0, 0);
    }
    if (value.has_eutra_CGI_Reporting_NRDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_CGI_Reporting_NRDC), 0, 0);
    }
    if (value.has_nr_CGI_Reporting_NEDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_CGI_Reporting_NEDC), 0, 0);
    }
    if (value.has_nr_CGI_Reporting_NRDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_CGI_Reporting_NRDC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup4(Decoder& dec, MeasAndMobParametersCommon_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.eutra_CGI_Reporting_NEDC = (MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NEDC)0;
    }
    if (present_1) {
        value.eutra_CGI_Reporting_NRDC = (MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NRDC)0;
    }
    if (present_2) {
        value.nr_CGI_Reporting_NEDC = (MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NEDC)0;
    }
    if (present_3) {
        value.nr_CGI_Reporting_NRDC = (MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NRDC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup4(MeasAndMobParametersCommon_ExtGroup4& value)
{
    if (value.has_eutra_CGI_Reporting_NEDC) {
    }
    if (value.has_eutra_CGI_Reporting_NRDC) {
    }
    if (value.has_nr_CGI_Reporting_NEDC) {
    }
    if (value.has_nr_CGI_Reporting_NRDC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_condHandoverFDD_TDD_r16);
    enc.WriteBit(value.has_condHandoverFR1_FR2_r16);
    if (value.has_condHandoverFDD_TDD_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condHandoverFDD_TDD_r16), 0, 0);
    }
    if (value.has_condHandoverFR1_FR2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condHandoverFR1_FR2_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16(Decoder& dec, MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.condHandoverFDD_TDD_r16 = (MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFDD_TDD_r16)0;
    }
    if (present_1) {
        value.condHandoverFR1_FR2_r16 = (MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFR1_FR2_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16(MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16& value)
{
    if (value.has_condHandoverFDD_TDD_r16) {
    }
    if (value.has_condHandoverFR1_FR2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup5(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_reportAddNeighMeasForPeriodic_r16);
    enc.WriteBit(value.has_condHandoverParametersCommon_r16);
    enc.WriteBit(value.has_nr_NeedForGap_Reporting_r16);
    enc.WriteBit(value.has_supportedGapPattern_NRonly_r16);
    enc.WriteBit(value.has_supportedGapPattern_NRonly_NEDC_r16);
    enc.WriteBit(value.has_maxNumberCLI_RSSI_r16);
    enc.WriteBit(value.has_maxNumberCLI_SRS_RSRP_r16);
    enc.WriteBit(value.has_maxNumberPerSlotCLI_SRS_RSRP_r16);
    enc.WriteBit(value.has_mfbi_IAB_r16);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_nr_CGI_Reporting_NPN_r16);
    enc.WriteBit(value.has_idleInactiveEUTRA_MeasReport_r16);
    enc.WriteBit(value.has_idleInactive_ValidityArea_r16);
    enc.WriteBit(value.has_eutra_AutonomousGaps_r16);
    enc.WriteBit(value.has_eutra_AutonomousGaps_NEDC_r16);
    enc.WriteBit(value.has_eutra_AutonomousGaps_NRDC_r16);
    enc.WriteBit(value.has_pcellT312_r16);
    enc.WriteBit(value.has_supportedGapPattern_r16);
    if (value.has_reportAddNeighMeasForPeriodic_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reportAddNeighMeasForPeriodic_r16), 0, 0);
    }
    if (value.has_condHandoverParametersCommon_r16) {
        Encode_MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16(enc, value.condHandoverParametersCommon_r16);
    }
    if (value.has_nr_NeedForGap_Reporting_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_NeedForGap_Reporting_r16), 0, 0);
    }
    if (value.has_supportedGapPattern_NRonly_r16) {
        enc.WriteFixedBitString(value.supportedGapPattern_NRonly_r16.bytes, value.supportedGapPattern_NRonly_r16.bitLength, 10, 10);
    }
    if (value.has_supportedGapPattern_NRonly_NEDC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportedGapPattern_NRonly_NEDC_r16), 0, 0);
    }
    if (value.has_maxNumberCLI_RSSI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCLI_RSSI_r16), 0, 3);
    }
    if (value.has_maxNumberCLI_SRS_RSRP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCLI_SRS_RSRP_r16), 0, 3);
    }
    if (value.has_maxNumberPerSlotCLI_SRS_RSRP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPerSlotCLI_SRS_RSRP_r16), 0, 2);
    }
    if (value.has_mfbi_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mfbi_IAB_r16), 0, 0);
    }
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    if (value.has_nr_CGI_Reporting_NPN_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_CGI_Reporting_NPN_r16), 0, 0);
    }
    if (value.has_idleInactiveEUTRA_MeasReport_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleInactiveEUTRA_MeasReport_r16), 0, 0);
    }
    if (value.has_idleInactive_ValidityArea_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleInactive_ValidityArea_r16), 0, 0);
    }
    if (value.has_eutra_AutonomousGaps_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_AutonomousGaps_r16), 0, 0);
    }
    if (value.has_eutra_AutonomousGaps_NEDC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_AutonomousGaps_NEDC_r16), 0, 0);
    }
    if (value.has_eutra_AutonomousGaps_NRDC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_AutonomousGaps_NRDC_r16), 0, 0);
    }
    if (value.has_pcellT312_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pcellT312_r16), 0, 0);
    }
    if (value.has_supportedGapPattern_r16) {
        enc.WriteFixedBitString(value.supportedGapPattern_r16.bytes, value.supportedGapPattern_r16.bitLength, 2, 2);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup5(Decoder& dec, MeasAndMobParametersCommon_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    bool present_17 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (!dec.ReadBit(present_17)) { goto fail; }
    if (present_0) {
        value.reportAddNeighMeasForPeriodic_r16 = (MeasAndMobParametersCommon_ExtGroup5_ReportAddNeighMeasForPeriodic_r16)0;
    }
    if (present_1) {
        if (Decode_MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16(dec, value.condHandoverParametersCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.nr_NeedForGap_Reporting_r16 = (MeasAndMobParametersCommon_ExtGroup5_Nr_NeedForGap_Reporting_r16)0;
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.supportedGapPattern_NRonly_r16.bytes = string_bytes;
        value.supportedGapPattern_NRonly_r16.bitLength = string_length;
    }
    if (present_4) {
        value.supportedGapPattern_NRonly_NEDC_r16 = (MeasAndMobParametersCommon_ExtGroup5_SupportedGapPattern_NRonly_NEDC_r16)0;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberCLI_RSSI_r16 = (MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_RSSI_r16)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberCLI_SRS_RSRP_r16 = (MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_SRS_RSRP_r16)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberPerSlotCLI_SRS_RSRP_r16 = (MeasAndMobParametersCommon_ExtGroup5_MaxNumberPerSlotCLI_SRS_RSRP_r16)tmp_value;
    }
    if (present_8) {
        value.mfbi_IAB_r16 = (MeasAndMobParametersCommon_ExtGroup5_Mfbi_IAB_r16)0;
    }
    if (present_9) {
        value.dummy = (MeasAndMobParametersCommon_ExtGroup5_Dummy)0;
    }
    if (present_10) {
        value.nr_CGI_Reporting_NPN_r16 = (MeasAndMobParametersCommon_ExtGroup5_Nr_CGI_Reporting_NPN_r16)0;
    }
    if (present_11) {
        value.idleInactiveEUTRA_MeasReport_r16 = (MeasAndMobParametersCommon_ExtGroup5_IdleInactiveEUTRA_MeasReport_r16)0;
    }
    if (present_12) {
        value.idleInactive_ValidityArea_r16 = (MeasAndMobParametersCommon_ExtGroup5_IdleInactive_ValidityArea_r16)0;
    }
    if (present_13) {
        value.eutra_AutonomousGaps_r16 = (MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_r16)0;
    }
    if (present_14) {
        value.eutra_AutonomousGaps_NEDC_r16 = (MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NEDC_r16)0;
    }
    if (present_15) {
        value.eutra_AutonomousGaps_NRDC_r16 = (MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NRDC_r16)0;
    }
    if (present_16) {
        value.pcellT312_r16 = (MeasAndMobParametersCommon_ExtGroup5_PcellT312_r16)0;
    }
    if (present_17) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.supportedGapPattern_r16.bytes = string_bytes;
        value.supportedGapPattern_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup5(MeasAndMobParametersCommon_ExtGroup5& value)
{
    if (value.has_reportAddNeighMeasForPeriodic_r16) {
    }
    if (value.has_condHandoverParametersCommon_r16) {
        Free_MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16(value.condHandoverParametersCommon_r16);
    }
    if (value.has_nr_NeedForGap_Reporting_r16) {
    }
    if (value.has_supportedGapPattern_NRonly_r16) {
        std::free(value.supportedGapPattern_NRonly_r16.bytes);
        value.supportedGapPattern_NRonly_r16.bytes = nullptr;
        value.supportedGapPattern_NRonly_r16.bitLength = 0;
    }
    if (value.has_supportedGapPattern_NRonly_NEDC_r16) {
    }
    if (value.has_maxNumberCLI_RSSI_r16) {
    }
    if (value.has_maxNumberCLI_SRS_RSRP_r16) {
    }
    if (value.has_maxNumberPerSlotCLI_SRS_RSRP_r16) {
    }
    if (value.has_mfbi_IAB_r16) {
    }
    if (value.has_dummy) {
    }
    if (value.has_nr_CGI_Reporting_NPN_r16) {
    }
    if (value.has_idleInactiveEUTRA_MeasReport_r16) {
    }
    if (value.has_idleInactive_ValidityArea_r16) {
    }
    if (value.has_eutra_AutonomousGaps_r16) {
    }
    if (value.has_eutra_AutonomousGaps_NEDC_r16) {
    }
    if (value.has_eutra_AutonomousGaps_NRDC_r16) {
    }
    if (value.has_pcellT312_r16) {
    }
    if (value.has_supportedGapPattern_r16) {
        std::free(value.supportedGapPattern_r16.bytes);
        value.supportedGapPattern_r16.bytes = nullptr;
        value.supportedGapPattern_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag_concurrentPerUE_OnlyMeasGap_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.concurrentPerUE_OnlyMeasGap_r17), 0, 0);
        break;
    case MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag_concurrentPerUE_PerFRCombMeasGap_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.concurrentPerUE_PerFRCombMeasGap_r17), 0, 0);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17(Decoder& dec, MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag)root_index;
    switch (value.tag) {
    case MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag_concurrentPerUE_OnlyMeasGap_r17: {
        value.u.concurrentPerUE_OnlyMeasGap_r17 = (MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_OnlyMeasGap_r17)0;
        break;
    }
    case MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag_concurrentPerUE_PerFRCombMeasGap_r17: {
        value.u.concurrentPerUE_PerFRCombMeasGap_r17 = (MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_PerFRCombMeasGap_r17)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17(MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17& value)
{
    switch (value.tag) {
    case MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag_concurrentPerUE_OnlyMeasGap_r17:
        break;
    case MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag_concurrentPerUE_PerFRCombMeasGap_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup6(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_concurrentMeasGap_r17);
    enc.WriteBit(value.has_nr_NeedForGapNCSG_Reporting_r17);
    enc.WriteBit(value.has_eutra_NeedForGapNCSG_Reporting_r17);
    enc.WriteBit(value.has_ncsg_MeasGapPerFR_r17);
    enc.WriteBit(value.has_ncsg_MeasGapPatterns_r17);
    enc.WriteBit(value.has_ncsg_MeasGapNR_Patterns_r17);
    enc.WriteBit(value.has_preconfiguredUE_AutonomousMeasGap_r17);
    enc.WriteBit(value.has_preconfiguredNW_ControlledMeasGap_r17);
    enc.WriteBit(value.has_handoverFR1_FR2_2_r17);
    enc.WriteBit(value.has_handoverFR2_1_FR2_2_r17);
    enc.WriteBit(value.has_independentGapConfigPRS_r17);
    enc.WriteBit(value.has_rrm_RelaxationRRC_ConnectedRedCap_r17);
    enc.WriteBit(value.has_parallelMeasurementGap_r17);
    enc.WriteBit(value.has_condHandoverWithSCG_NRDC_r17);
    enc.WriteBit(value.has_gNB_ID_LengthReporting_r17);
    enc.WriteBit(value.has_gNB_ID_LengthReporting_ENDC_r17);
    enc.WriteBit(value.has_gNB_ID_LengthReporting_NEDC_r17);
    enc.WriteBit(value.has_gNB_ID_LengthReporting_NRDC_r17);
    enc.WriteBit(value.has_gNB_ID_LengthReporting_NPN_r17);
    if (value.has_concurrentMeasGap_r17) {
        Encode_MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17(enc, value.concurrentMeasGap_r17);
    }
    if (value.has_nr_NeedForGapNCSG_Reporting_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_NeedForGapNCSG_Reporting_r17), 0, 0);
    }
    if (value.has_eutra_NeedForGapNCSG_Reporting_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_NeedForGapNCSG_Reporting_r17), 0, 0);
    }
    if (value.has_ncsg_MeasGapPerFR_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncsg_MeasGapPerFR_r17), 0, 0);
    }
    if (value.has_ncsg_MeasGapPatterns_r17) {
        enc.WriteFixedBitString(value.ncsg_MeasGapPatterns_r17.bytes, value.ncsg_MeasGapPatterns_r17.bitLength, 24, 24);
    }
    if (value.has_ncsg_MeasGapNR_Patterns_r17) {
        enc.WriteFixedBitString(value.ncsg_MeasGapNR_Patterns_r17.bytes, value.ncsg_MeasGapNR_Patterns_r17.bitLength, 24, 24);
    }
    if (value.has_preconfiguredUE_AutonomousMeasGap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preconfiguredUE_AutonomousMeasGap_r17), 0, 0);
    }
    if (value.has_preconfiguredNW_ControlledMeasGap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preconfiguredNW_ControlledMeasGap_r17), 0, 0);
    }
    if (value.has_handoverFR1_FR2_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverFR1_FR2_2_r17), 0, 0);
    }
    if (value.has_handoverFR2_1_FR2_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverFR2_1_FR2_2_r17), 0, 0);
    }
    if (value.has_independentGapConfigPRS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.independentGapConfigPRS_r17), 0, 0);
    }
    if (value.has_rrm_RelaxationRRC_ConnectedRedCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rrm_RelaxationRRC_ConnectedRedCap_r17), 0, 0);
    }
    if (value.has_parallelMeasurementGap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelMeasurementGap_r17), 0, 0);
    }
    if (value.has_condHandoverWithSCG_NRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condHandoverWithSCG_NRDC_r17), 0, 0);
    }
    if (value.has_gNB_ID_LengthReporting_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_ID_LengthReporting_r17), 0, 0);
    }
    if (value.has_gNB_ID_LengthReporting_ENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_ID_LengthReporting_ENDC_r17), 0, 0);
    }
    if (value.has_gNB_ID_LengthReporting_NEDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_ID_LengthReporting_NEDC_r17), 0, 0);
    }
    if (value.has_gNB_ID_LengthReporting_NRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_ID_LengthReporting_NRDC_r17), 0, 0);
    }
    if (value.has_gNB_ID_LengthReporting_NPN_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_ID_LengthReporting_NPN_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup6(Decoder& dec, MeasAndMobParametersCommon_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    bool present_17 = false;
    bool present_18 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (!dec.ReadBit(present_17)) { goto fail; }
    if (!dec.ReadBit(present_18)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17(dec, value.concurrentMeasGap_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.nr_NeedForGapNCSG_Reporting_r17 = (MeasAndMobParametersCommon_ExtGroup6_Nr_NeedForGapNCSG_Reporting_r17)0;
    }
    if (present_2) {
        value.eutra_NeedForGapNCSG_Reporting_r17 = (MeasAndMobParametersCommon_ExtGroup6_Eutra_NeedForGapNCSG_Reporting_r17)0;
    }
    if (present_3) {
        value.ncsg_MeasGapPerFR_r17 = (MeasAndMobParametersCommon_ExtGroup6_Ncsg_MeasGapPerFR_r17)0;
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.ncsg_MeasGapPatterns_r17.bytes = string_bytes;
        value.ncsg_MeasGapPatterns_r17.bitLength = string_length;
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.ncsg_MeasGapNR_Patterns_r17.bytes = string_bytes;
        value.ncsg_MeasGapNR_Patterns_r17.bitLength = string_length;
    }
    if (present_6) {
        value.preconfiguredUE_AutonomousMeasGap_r17 = (MeasAndMobParametersCommon_ExtGroup6_PreconfiguredUE_AutonomousMeasGap_r17)0;
    }
    if (present_7) {
        value.preconfiguredNW_ControlledMeasGap_r17 = (MeasAndMobParametersCommon_ExtGroup6_PreconfiguredNW_ControlledMeasGap_r17)0;
    }
    if (present_8) {
        value.handoverFR1_FR2_2_r17 = (MeasAndMobParametersCommon_ExtGroup6_HandoverFR1_FR2_2_r17)0;
    }
    if (present_9) {
        value.handoverFR2_1_FR2_2_r17 = (MeasAndMobParametersCommon_ExtGroup6_HandoverFR2_1_FR2_2_r17)0;
    }
    if (present_10) {
        value.independentGapConfigPRS_r17 = (MeasAndMobParametersCommon_ExtGroup6_IndependentGapConfigPRS_r17)0;
    }
    if (present_11) {
        value.rrm_RelaxationRRC_ConnectedRedCap_r17 = (MeasAndMobParametersCommon_ExtGroup6_Rrm_RelaxationRRC_ConnectedRedCap_r17)0;
    }
    if (present_12) {
        value.parallelMeasurementGap_r17 = (MeasAndMobParametersCommon_ExtGroup6_ParallelMeasurementGap_r17)0;
    }
    if (present_13) {
        value.condHandoverWithSCG_NRDC_r17 = (MeasAndMobParametersCommon_ExtGroup6_CondHandoverWithSCG_NRDC_r17)0;
    }
    if (present_14) {
        value.gNB_ID_LengthReporting_r17 = (MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_r17)0;
    }
    if (present_15) {
        value.gNB_ID_LengthReporting_ENDC_r17 = (MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_ENDC_r17)0;
    }
    if (present_16) {
        value.gNB_ID_LengthReporting_NEDC_r17 = (MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NEDC_r17)0;
    }
    if (present_17) {
        value.gNB_ID_LengthReporting_NRDC_r17 = (MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NRDC_r17)0;
    }
    if (present_18) {
        value.gNB_ID_LengthReporting_NPN_r17 = (MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NPN_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup6(MeasAndMobParametersCommon_ExtGroup6& value)
{
    if (value.has_concurrentMeasGap_r17) {
        Free_MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17(value.concurrentMeasGap_r17);
    }
    if (value.has_nr_NeedForGapNCSG_Reporting_r17) {
    }
    if (value.has_eutra_NeedForGapNCSG_Reporting_r17) {
    }
    if (value.has_ncsg_MeasGapPerFR_r17) {
    }
    if (value.has_ncsg_MeasGapPatterns_r17) {
        std::free(value.ncsg_MeasGapPatterns_r17.bytes);
        value.ncsg_MeasGapPatterns_r17.bytes = nullptr;
        value.ncsg_MeasGapPatterns_r17.bitLength = 0;
    }
    if (value.has_ncsg_MeasGapNR_Patterns_r17) {
        std::free(value.ncsg_MeasGapNR_Patterns_r17.bytes);
        value.ncsg_MeasGapNR_Patterns_r17.bytes = nullptr;
        value.ncsg_MeasGapNR_Patterns_r17.bitLength = 0;
    }
    if (value.has_preconfiguredUE_AutonomousMeasGap_r17) {
    }
    if (value.has_preconfiguredNW_ControlledMeasGap_r17) {
    }
    if (value.has_handoverFR1_FR2_2_r17) {
    }
    if (value.has_handoverFR2_1_FR2_2_r17) {
    }
    if (value.has_independentGapConfigPRS_r17) {
    }
    if (value.has_rrm_RelaxationRRC_ConnectedRedCap_r17) {
    }
    if (value.has_parallelMeasurementGap_r17) {
    }
    if (value.has_condHandoverWithSCG_NRDC_r17) {
    }
    if (value.has_gNB_ID_LengthReporting_r17) {
    }
    if (value.has_gNB_ID_LengthReporting_ENDC_r17) {
    }
    if (value.has_gNB_ID_LengthReporting_NEDC_r17) {
    }
    if (value.has_gNB_ID_LengthReporting_NRDC_r17) {
    }
    if (value.has_gNB_ID_LengthReporting_NPN_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup7(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup7& value)
{
    (void)value;
    enc.WriteBit(value.has_parallelSMTC_r17);
    enc.WriteBit(value.has_concurrentMeasGapEUTRA_r17);
    enc.WriteBit(value.has_serviceLinkPropDelayDiffReporting_r17);
    enc.WriteBit(value.has_ncsg_SymbolLevelScheduleRestrictionInter_r17);
    if (value.has_parallelSMTC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelSMTC_r17), 0, 0);
    }
    if (value.has_concurrentMeasGapEUTRA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.concurrentMeasGapEUTRA_r17), 0, 0);
    }
    if (value.has_serviceLinkPropDelayDiffReporting_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.serviceLinkPropDelayDiffReporting_r17), 0, 0);
    }
    if (value.has_ncsg_SymbolLevelScheduleRestrictionInter_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncsg_SymbolLevelScheduleRestrictionInter_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup7(Decoder& dec, MeasAndMobParametersCommon_ExtGroup7& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.parallelSMTC_r17 = (MeasAndMobParametersCommon_ExtGroup7_ParallelSMTC_r17)0;
    }
    if (present_1) {
        value.concurrentMeasGapEUTRA_r17 = (MeasAndMobParametersCommon_ExtGroup7_ConcurrentMeasGapEUTRA_r17)0;
    }
    if (present_2) {
        value.serviceLinkPropDelayDiffReporting_r17 = (MeasAndMobParametersCommon_ExtGroup7_ServiceLinkPropDelayDiffReporting_r17)0;
    }
    if (present_3) {
        value.ncsg_SymbolLevelScheduleRestrictionInter_r17 = (MeasAndMobParametersCommon_ExtGroup7_Ncsg_SymbolLevelScheduleRestrictionInter_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup7(MeasAndMobParametersCommon_ExtGroup7& value)
{
    if (value.has_parallelSMTC_r17) {
    }
    if (value.has_concurrentMeasGapEUTRA_r17) {
    }
    if (value.has_serviceLinkPropDelayDiffReporting_r17) {
    }
    if (value.has_ncsg_SymbolLevelScheduleRestrictionInter_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_fr1_Only_r17);
    enc.WriteBit(value.has_fr2_Only_r17);
    enc.WriteBit(value.has_fr1_AndFR2_r17);
    if (value.has_fr1_Only_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1_Only_r17), 1, 32);
    }
    if (value.has_fr2_Only_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr2_Only_r17), 1, 32);
    }
    if (value.has_fr1_AndFR2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1_AndFR2_r17), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17(Decoder& dec, MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.fr1_Only_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.fr2_Only_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.fr1_AndFR2_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17(MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17& value)
{
    if (value.has_fr1_Only_r17) {
    }
    if (value.has_fr2_Only_r17) {
    }
    if (value.has_fr1_AndFR2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup8(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup8& value)
{
    (void)value;
    enc.WriteBit(value.has_eventD1_MeasReportTrigger_r17);
    enc.WriteBit(value.has_independentGapConfig_maxCC_r17);
    if (value.has_eventD1_MeasReportTrigger_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eventD1_MeasReportTrigger_r17), 0, 0);
    }
    if (value.has_independentGapConfig_maxCC_r17) {
        Encode_MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17(enc, value.independentGapConfig_maxCC_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup8(Decoder& dec, MeasAndMobParametersCommon_ExtGroup8& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.eventD1_MeasReportTrigger_r17 = (MeasAndMobParametersCommon_ExtGroup8_EventD1_MeasReportTrigger_r17)0;
    }
    if (present_1) {
        if (Decode_MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17(dec, value.independentGapConfig_maxCC_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup8(MeasAndMobParametersCommon_ExtGroup8& value)
{
    if (value.has_eventD1_MeasReportTrigger_r17) {
    }
    if (value.has_independentGapConfig_maxCC_r17) {
        Free_MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17(value.independentGapConfig_maxCC_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup9(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup9& value)
{
    (void)value;
    enc.WriteBit(value.has_interSatMeas_r17);
    enc.WriteBit(value.has_deriveSSB_IndexFromCellInterNon_NCSG_r17);
    if (value.has_interSatMeas_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interSatMeas_r17), 0, 0);
    }
    if (value.has_deriveSSB_IndexFromCellInterNon_NCSG_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.deriveSSB_IndexFromCellInterNon_NCSG_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup9(Decoder& dec, MeasAndMobParametersCommon_ExtGroup9& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.interSatMeas_r17 = (MeasAndMobParametersCommon_ExtGroup9_InterSatMeas_r17)0;
    }
    if (present_1) {
        value.deriveSSB_IndexFromCellInterNon_NCSG_r17 = (MeasAndMobParametersCommon_ExtGroup9_DeriveSSB_IndexFromCellInterNon_NCSG_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup9(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup9(MeasAndMobParametersCommon_ExtGroup9& value)
{
    if (value.has_interSatMeas_r17) {
    }
    if (value.has_deriveSSB_IndexFromCellInterNon_NCSG_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.fr1_r18), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.fr2_r18), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.fr1_AndFR2_r18), 0, 1);
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18(Decoder& dec, MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.fr1_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.fr2_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr2_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.fr1_AndFR2_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_AndFR2_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18(MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon_ExtGroup10(Encoder& enc, const MeasAndMobParametersCommon_ExtGroup10& value)
{
    (void)value;
    enc.WriteBit(value.has_l3_MeasUnknownSCellActivation_r18);
    enc.WriteBit(value.has_shortMeasInterval_r18);
    enc.WriteBit(value.has_nr_NeedForInterruptionReport_r18);
    enc.WriteBit(value.has_measSequenceConfig_r18);
    enc.WriteBit(value.has_cellIndividualOffsetPerMeasEvent_r18);
    enc.WriteBit(value.has_ltm_MCG_r18);
    enc.WriteBit(value.has_ltm_SCG_r18);
    enc.WriteBit(value.has_ltm_MCG_NRDC_r18);
    enc.WriteBit(value.has_ltm_RACH_LessDG_r18);
    enc.WriteBit(value.has_ltm_RACH_LessCG_r18);
    enc.WriteBit(value.has_ltm_Recovery_r18);
    enc.WriteBit(value.has_ltm_ReferenceConfig_r18);
    enc.WriteBit(value.has_eventD2_MeasReportTrigger_r18);
    enc.WriteBit(value.has_concurrentMeasGapsPreMG_r18);
    enc.WriteBit(value.has_concurrentMeasGapsNCSG_r18);
    enc.WriteBit(value.has_eutra_NoGapMeasurement_r18);
    enc.WriteBit(value.has_eutra_MeasEMW_r18);
    enc.WriteBit(value.has_concurrentMeasCRS_InsideBWP_EUTRA_r18);
    enc.WriteBit(value.has_ltm_InterFreqMeasGap_r18);
    enc.WriteBit(value.has_ltm_FastUE_Processing_r18);
    enc.WriteBit(value.has_measValidationReportEMR_r18);
    enc.WriteBit(value.has_measValidationReportNonEMR_r18);
    if (value.has_l3_MeasUnknownSCellActivation_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.l3_MeasUnknownSCellActivation_r18), 0, 0);
    }
    if (value.has_shortMeasInterval_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.shortMeasInterval_r18), 0, 0);
    }
    if (value.has_nr_NeedForInterruptionReport_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_NeedForInterruptionReport_r18), 0, 0);
    }
    if (value.has_measSequenceConfig_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measSequenceConfig_r18), 0, 0);
    }
    if (value.has_cellIndividualOffsetPerMeasEvent_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellIndividualOffsetPerMeasEvent_r18), 0, 0);
    }
    if (value.has_ltm_MCG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_MCG_r18), 0, 0);
    }
    if (value.has_ltm_SCG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_SCG_r18), 0, 0);
    }
    if (value.has_ltm_MCG_NRDC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_MCG_NRDC_r18), 0, 0);
    }
    if (value.has_ltm_RACH_LessDG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_RACH_LessDG_r18), 0, 0);
    }
    if (value.has_ltm_RACH_LessCG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_RACH_LessCG_r18), 0, 0);
    }
    if (value.has_ltm_Recovery_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_Recovery_r18), 0, 0);
    }
    if (value.has_ltm_ReferenceConfig_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_ReferenceConfig_r18), 0, 0);
    }
    if (value.has_eventD2_MeasReportTrigger_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eventD2_MeasReportTrigger_r18), 0, 0);
    }
    if (value.has_concurrentMeasGapsPreMG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.concurrentMeasGapsPreMG_r18), 0, 0);
    }
    if (value.has_concurrentMeasGapsNCSG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.concurrentMeasGapsNCSG_r18), 0, 0);
    }
    if (value.has_eutra_NoGapMeasurement_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_NoGapMeasurement_r18), 0, 0);
    }
    if (value.has_eutra_MeasEMW_r18) {
        enc.WriteFixedBitString(value.eutra_MeasEMW_r18.bytes, value.eutra_MeasEMW_r18.bitLength, 6, 6);
    }
    if (value.has_concurrentMeasCRS_InsideBWP_EUTRA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.concurrentMeasCRS_InsideBWP_EUTRA_r18), 0, 0);
    }
    if (value.has_ltm_InterFreqMeasGap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_InterFreqMeasGap_r18), 0, 0);
    }
    if (value.has_ltm_FastUE_Processing_r18) {
        Encode_MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18(enc, value.ltm_FastUE_Processing_r18);
    }
    if (value.has_measValidationReportEMR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measValidationReportEMR_r18), 0, 0);
    }
    if (value.has_measValidationReportNonEMR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measValidationReportNonEMR_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon_ExtGroup10(Decoder& dec, MeasAndMobParametersCommon_ExtGroup10& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    bool present_17 = false;
    bool present_18 = false;
    bool present_19 = false;
    bool present_20 = false;
    bool present_21 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (!dec.ReadBit(present_17)) { goto fail; }
    if (!dec.ReadBit(present_18)) { goto fail; }
    if (!dec.ReadBit(present_19)) { goto fail; }
    if (!dec.ReadBit(present_20)) { goto fail; }
    if (!dec.ReadBit(present_21)) { goto fail; }
    if (present_0) {
        value.l3_MeasUnknownSCellActivation_r18 = (MeasAndMobParametersCommon_ExtGroup10_L3_MeasUnknownSCellActivation_r18)0;
    }
    if (present_1) {
        value.shortMeasInterval_r18 = (MeasAndMobParametersCommon_ExtGroup10_ShortMeasInterval_r18)0;
    }
    if (present_2) {
        value.nr_NeedForInterruptionReport_r18 = (MeasAndMobParametersCommon_ExtGroup10_Nr_NeedForInterruptionReport_r18)0;
    }
    if (present_3) {
        value.measSequenceConfig_r18 = (MeasAndMobParametersCommon_ExtGroup10_MeasSequenceConfig_r18)0;
    }
    if (present_4) {
        value.cellIndividualOffsetPerMeasEvent_r18 = (MeasAndMobParametersCommon_ExtGroup10_CellIndividualOffsetPerMeasEvent_r18)0;
    }
    if (present_5) {
        value.ltm_MCG_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_r18)0;
    }
    if (present_6) {
        value.ltm_SCG_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_SCG_r18)0;
    }
    if (present_7) {
        value.ltm_MCG_NRDC_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_NRDC_r18)0;
    }
    if (present_8) {
        value.ltm_RACH_LessDG_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessDG_r18)0;
    }
    if (present_9) {
        value.ltm_RACH_LessCG_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessCG_r18)0;
    }
    if (present_10) {
        value.ltm_Recovery_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_Recovery_r18)0;
    }
    if (present_11) {
        value.ltm_ReferenceConfig_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_ReferenceConfig_r18)0;
    }
    if (present_12) {
        value.eventD2_MeasReportTrigger_r18 = (MeasAndMobParametersCommon_ExtGroup10_EventD2_MeasReportTrigger_r18)0;
    }
    if (present_13) {
        value.concurrentMeasGapsPreMG_r18 = (MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsPreMG_r18)0;
    }
    if (present_14) {
        value.concurrentMeasGapsNCSG_r18 = (MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsNCSG_r18)0;
    }
    if (present_15) {
        value.eutra_NoGapMeasurement_r18 = (MeasAndMobParametersCommon_ExtGroup10_Eutra_NoGapMeasurement_r18)0;
    }
    if (present_16) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.eutra_MeasEMW_r18.bytes = string_bytes;
        value.eutra_MeasEMW_r18.bitLength = string_length;
    }
    if (present_17) {
        value.concurrentMeasCRS_InsideBWP_EUTRA_r18 = (MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasCRS_InsideBWP_EUTRA_r18)0;
    }
    if (present_18) {
        value.ltm_InterFreqMeasGap_r18 = (MeasAndMobParametersCommon_ExtGroup10_Ltm_InterFreqMeasGap_r18)0;
    }
    if (present_19) {
        if (Decode_MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18(dec, value.ltm_FastUE_Processing_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_20) {
        value.measValidationReportEMR_r18 = (MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportEMR_r18)0;
    }
    if (present_21) {
        value.measValidationReportNonEMR_r18 = (MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportNonEMR_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon_ExtGroup10(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon_ExtGroup10(MeasAndMobParametersCommon_ExtGroup10& value)
{
    if (value.has_l3_MeasUnknownSCellActivation_r18) {
    }
    if (value.has_shortMeasInterval_r18) {
    }
    if (value.has_nr_NeedForInterruptionReport_r18) {
    }
    if (value.has_measSequenceConfig_r18) {
    }
    if (value.has_cellIndividualOffsetPerMeasEvent_r18) {
    }
    if (value.has_ltm_MCG_r18) {
    }
    if (value.has_ltm_SCG_r18) {
    }
    if (value.has_ltm_MCG_NRDC_r18) {
    }
    if (value.has_ltm_RACH_LessDG_r18) {
    }
    if (value.has_ltm_RACH_LessCG_r18) {
    }
    if (value.has_ltm_Recovery_r18) {
    }
    if (value.has_ltm_ReferenceConfig_r18) {
    }
    if (value.has_eventD2_MeasReportTrigger_r18) {
    }
    if (value.has_concurrentMeasGapsPreMG_r18) {
    }
    if (value.has_concurrentMeasGapsNCSG_r18) {
    }
    if (value.has_eutra_NoGapMeasurement_r18) {
    }
    if (value.has_eutra_MeasEMW_r18) {
        std::free(value.eutra_MeasEMW_r18.bytes);
        value.eutra_MeasEMW_r18.bytes = nullptr;
        value.eutra_MeasEMW_r18.bitLength = 0;
    }
    if (value.has_concurrentMeasCRS_InsideBWP_EUTRA_r18) {
    }
    if (value.has_ltm_InterFreqMeasGap_r18) {
    }
    if (value.has_ltm_FastUE_Processing_r18) {
        Free_MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18(value.ltm_FastUE_Processing_r18);
    }
    if (value.has_measValidationReportEMR_r18) {
    }
    if (value.has_measValidationReportNonEMR_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersCommon(Encoder& enc, const MeasAndMobParametersCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7 || value.has_extGroup8 || value.has_extGroup9 || value.has_extGroup10;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_supportedGapPattern);
    enc.WriteBit(value.has_ssb_RLM);
    enc.WriteBit(value.has_ssb_AndCSI_RS_RLM);
    if (value.has_supportedGapPattern) {
        enc.WriteFixedBitString(value.supportedGapPattern.bytes, value.supportedGapPattern.bitLength, 22, 22);
    }
    if (value.has_ssb_RLM) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_RLM), 0, 0);
    }
    if (value.has_ssb_AndCSI_RS_RLM) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_AndCSI_RS_RLM), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(10u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        enc.WriteBit(value.has_extGroup6);
        enc.WriteBit(value.has_extGroup7);
        enc.WriteBit(value.has_extGroup8);
        enc.WriteBit(value.has_extGroup9);
        enc.WriteBit(value.has_extGroup10);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasAndMobParametersCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MeasAndMobParametersCommon_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_MeasAndMobParametersCommon_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_MeasAndMobParametersCommon_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_MeasAndMobParametersCommon_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_MeasAndMobParametersCommon_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_MeasAndMobParametersCommon_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup8) {
    Encoder sub;
    Encode_MeasAndMobParametersCommon_ExtGroup8(sub, value.extGroup8);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup9) {
    Encoder sub;
    Encode_MeasAndMobParametersCommon_ExtGroup9(sub, value.extGroup9);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup10) {
    Encoder sub;
    Encode_MeasAndMobParametersCommon_ExtGroup10(sub, value.extGroup10);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersCommon(Decoder& dec, MeasAndMobParametersCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 22)) { goto fail; }
        string_length = 22;
        value.supportedGapPattern.bytes = string_bytes;
        value.supportedGapPattern.bitLength = string_length;
    }
    if (present_1) {
        value.ssb_RLM = (MeasAndMobParametersCommon_Ssb_RLM)0;
    }
    if (present_2) {
        value.ssb_AndCSI_RS_RLM = (MeasAndMobParametersCommon_Ssb_AndCSI_RS_RLM)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 10u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[10] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersCommon_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersCommon_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup3 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[3]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersCommon_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup4 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[4]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersCommon_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup5 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[5]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersCommon_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup6 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[6]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersCommon_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup7 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[7]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersCommon_ExtGroup8(sub, value.extGroup8) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup8 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[8]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersCommon_ExtGroup9(sub, value.extGroup9) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup9 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[9]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersCommon_ExtGroup10(sub, value.extGroup10) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup10 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersCommon(MeasAndMobParametersCommon& value)
{
    if (value.has_supportedGapPattern) {
        std::free(value.supportedGapPattern.bytes);
        value.supportedGapPattern.bytes = nullptr;
        value.supportedGapPattern.bitLength = 0;
    }
    if (value.has_ssb_RLM) {
    }
    if (value.has_ssb_AndCSI_RS_RLM) {
    }
    if (value.has_extGroup1) {
        Free_MeasAndMobParametersCommon_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MeasAndMobParametersCommon_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_MeasAndMobParametersCommon_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_MeasAndMobParametersCommon_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_MeasAndMobParametersCommon_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_MeasAndMobParametersCommon_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_MeasAndMobParametersCommon_ExtGroup7(value.extGroup7);
    }
    if (value.has_extGroup8) {
        Free_MeasAndMobParametersCommon_ExtGroup8(value.extGroup8);
    }
    if (value.has_extGroup9) {
        Free_MeasAndMobParametersCommon_ExtGroup9(value.extGroup9);
    }
    if (value.has_extGroup10) {
        Free_MeasAndMobParametersCommon_ExtGroup10(value.extGroup10);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersXDD_Diff_ExtGroup1(Encoder& enc, const MeasAndMobParametersXDD_Diff_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_handoverInterF);
    enc.WriteBit(value.has_handoverLTE_EPC);
    enc.WriteBit(value.has_handoverLTE_5GC);
    if (value.has_handoverInterF) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverInterF), 0, 0);
    }
    if (value.has_handoverLTE_EPC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverLTE_EPC), 0, 0);
    }
    if (value.has_handoverLTE_5GC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverLTE_5GC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersXDD_Diff_ExtGroup1(Decoder& dec, MeasAndMobParametersXDD_Diff_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        value.handoverInterF = (MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverInterF)0;
    }
    if (present_1) {
        value.handoverLTE_EPC = (MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_EPC)0;
    }
    if (present_2) {
        value.handoverLTE_5GC = (MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_5GC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersXDD_Diff_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersXDD_Diff_ExtGroup1(MeasAndMobParametersXDD_Diff_ExtGroup1& value)
{
    if (value.has_handoverInterF) {
    }
    if (value.has_handoverLTE_EPC) {
    }
    if (value.has_handoverLTE_5GC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersXDD_Diff_ExtGroup2(Encoder& enc, const MeasAndMobParametersXDD_Diff_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_sftd_MeasNR_Neigh);
    enc.WriteBit(value.has_sftd_MeasNR_Neigh_DRX);
    if (value.has_sftd_MeasNR_Neigh) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sftd_MeasNR_Neigh), 0, 0);
    }
    if (value.has_sftd_MeasNR_Neigh_DRX) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sftd_MeasNR_Neigh_DRX), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersXDD_Diff_ExtGroup2(Decoder& dec, MeasAndMobParametersXDD_Diff_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.sftd_MeasNR_Neigh = (MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh)0;
    }
    if (present_1) {
        value.sftd_MeasNR_Neigh_DRX = (MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh_DRX)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersXDD_Diff_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersXDD_Diff_ExtGroup2(MeasAndMobParametersXDD_Diff_ExtGroup2& value)
{
    if (value.has_sftd_MeasNR_Neigh) {
    }
    if (value.has_sftd_MeasNR_Neigh_DRX) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersXDD_Diff_ExtGroup3(Encoder& enc, const MeasAndMobParametersXDD_Diff_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_dummy);
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersXDD_Diff_ExtGroup3(Decoder& dec, MeasAndMobParametersXDD_Diff_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.dummy = (MeasAndMobParametersXDD_Diff_ExtGroup3_Dummy)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersXDD_Diff_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersXDD_Diff_ExtGroup3(MeasAndMobParametersXDD_Diff_ExtGroup3& value)
{
    if (value.has_dummy) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersXDD_Diff(Encoder& enc, const MeasAndMobParametersXDD_Diff& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_intraAndInterF_MeasAndReport);
    enc.WriteBit(value.has_eventA_MeasAndReport);
    if (value.has_intraAndInterF_MeasAndReport) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraAndInterF_MeasAndReport), 0, 0);
    }
    if (value.has_eventA_MeasAndReport) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eventA_MeasAndReport), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasAndMobParametersXDD_Diff_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MeasAndMobParametersXDD_Diff_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_MeasAndMobParametersXDD_Diff_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersXDD_Diff(Decoder& dec, MeasAndMobParametersXDD_Diff& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.intraAndInterF_MeasAndReport = (MeasAndMobParametersXDD_Diff_IntraAndInterF_MeasAndReport)0;
    }
    if (present_1) {
        value.eventA_MeasAndReport = (MeasAndMobParametersXDD_Diff_EventA_MeasAndReport)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 3u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[3] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersXDD_Diff_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersXDD_Diff_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersXDD_Diff_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup3 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersXDD_Diff(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersXDD_Diff(MeasAndMobParametersXDD_Diff& value)
{
    if (value.has_intraAndInterF_MeasAndReport) {
    }
    if (value.has_eventA_MeasAndReport) {
    }
    if (value.has_extGroup1) {
        Free_MeasAndMobParametersXDD_Diff_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MeasAndMobParametersXDD_Diff_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_MeasAndMobParametersXDD_Diff_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersFRX_Diff_ExtGroup1(Encoder& enc, const MeasAndMobParametersFRX_Diff_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_handoverInterF);
    enc.WriteBit(value.has_handoverLTE_EPC);
    enc.WriteBit(value.has_handoverLTE_5GC);
    if (value.has_handoverInterF) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverInterF), 0, 0);
    }
    if (value.has_handoverLTE_EPC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverLTE_EPC), 0, 0);
    }
    if (value.has_handoverLTE_5GC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverLTE_5GC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersFRX_Diff_ExtGroup1(Decoder& dec, MeasAndMobParametersFRX_Diff_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        value.handoverInterF = (MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverInterF)0;
    }
    if (present_1) {
        value.handoverLTE_EPC = (MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_EPC)0;
    }
    if (present_2) {
        value.handoverLTE_5GC = (MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_5GC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersFRX_Diff_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersFRX_Diff_ExtGroup1(MeasAndMobParametersFRX_Diff_ExtGroup1& value)
{
    if (value.has_handoverInterF) {
    }
    if (value.has_handoverLTE_EPC) {
    }
    if (value.has_handoverLTE_5GC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersFRX_Diff_ExtGroup2(Encoder& enc, const MeasAndMobParametersFRX_Diff_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumberResource_CSI_RS_RLM);
    if (value.has_maxNumberResource_CSI_RS_RLM) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResource_CSI_RS_RLM), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersFRX_Diff_ExtGroup2(Decoder& dec, MeasAndMobParametersFRX_Diff_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberResource_CSI_RS_RLM = (MeasAndMobParametersFRX_Diff_ExtGroup2_MaxNumberResource_CSI_RS_RLM)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersFRX_Diff_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersFRX_Diff_ExtGroup2(MeasAndMobParametersFRX_Diff_ExtGroup2& value)
{
    if (value.has_maxNumberResource_CSI_RS_RLM) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersFRX_Diff_ExtGroup3(Encoder& enc, const MeasAndMobParametersFRX_Diff_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_simultaneousRxDataSSB_DiffNumerology);
    if (value.has_simultaneousRxDataSSB_DiffNumerology) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousRxDataSSB_DiffNumerology), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersFRX_Diff_ExtGroup3(Decoder& dec, MeasAndMobParametersFRX_Diff_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.simultaneousRxDataSSB_DiffNumerology = (MeasAndMobParametersFRX_Diff_ExtGroup3_SimultaneousRxDataSSB_DiffNumerology)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersFRX_Diff_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersFRX_Diff_ExtGroup3(MeasAndMobParametersFRX_Diff_ExtGroup3& value)
{
    if (value.has_simultaneousRxDataSSB_DiffNumerology) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersFRX_Diff_ExtGroup4(Encoder& enc, const MeasAndMobParametersFRX_Diff_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_nr_AutonomousGaps_r16);
    enc.WriteBit(value.has_nr_AutonomousGaps_ENDC_r16);
    enc.WriteBit(value.has_nr_AutonomousGaps_NEDC_r16);
    enc.WriteBit(value.has_nr_AutonomousGaps_NRDC_r16);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_cli_RSSI_Meas_r16);
    enc.WriteBit(value.has_cli_SRS_RSRP_Meas_r16);
    enc.WriteBit(value.has_interFrequencyMeas_NoGap_r16);
    enc.WriteBit(value.has_simultaneousRxDataSSB_DiffNumerology_Inter_r16);
    enc.WriteBit(value.has_idleInactiveNR_MeasReport_r16);
    enc.WriteBit(value.has_idleInactiveNR_MeasBeamReport_r16);
    if (value.has_nr_AutonomousGaps_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_AutonomousGaps_r16), 0, 0);
    }
    if (value.has_nr_AutonomousGaps_ENDC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_AutonomousGaps_ENDC_r16), 0, 0);
    }
    if (value.has_nr_AutonomousGaps_NEDC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_AutonomousGaps_NEDC_r16), 0, 0);
    }
    if (value.has_nr_AutonomousGaps_NRDC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_AutonomousGaps_NRDC_r16), 0, 0);
    }
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    if (value.has_cli_RSSI_Meas_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cli_RSSI_Meas_r16), 0, 0);
    }
    if (value.has_cli_SRS_RSRP_Meas_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cli_SRS_RSRP_Meas_r16), 0, 0);
    }
    if (value.has_interFrequencyMeas_NoGap_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interFrequencyMeas_NoGap_r16), 0, 0);
    }
    if (value.has_simultaneousRxDataSSB_DiffNumerology_Inter_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousRxDataSSB_DiffNumerology_Inter_r16), 0, 0);
    }
    if (value.has_idleInactiveNR_MeasReport_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleInactiveNR_MeasReport_r16), 0, 0);
    }
    if (value.has_idleInactiveNR_MeasBeamReport_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleInactiveNR_MeasBeamReport_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersFRX_Diff_ExtGroup4(Decoder& dec, MeasAndMobParametersFRX_Diff_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (present_0) {
        value.nr_AutonomousGaps_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_r16)0;
    }
    if (present_1) {
        value.nr_AutonomousGaps_ENDC_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_ENDC_r16)0;
    }
    if (present_2) {
        value.nr_AutonomousGaps_NEDC_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NEDC_r16)0;
    }
    if (present_3) {
        value.nr_AutonomousGaps_NRDC_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NRDC_r16)0;
    }
    if (present_4) {
        value.dummy = (MeasAndMobParametersFRX_Diff_ExtGroup4_Dummy)0;
    }
    if (present_5) {
        value.cli_RSSI_Meas_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_RSSI_Meas_r16)0;
    }
    if (present_6) {
        value.cli_SRS_RSRP_Meas_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_SRS_RSRP_Meas_r16)0;
    }
    if (present_7) {
        value.interFrequencyMeas_NoGap_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup4_InterFrequencyMeas_NoGap_r16)0;
    }
    if (present_8) {
        value.simultaneousRxDataSSB_DiffNumerology_Inter_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup4_SimultaneousRxDataSSB_DiffNumerology_Inter_r16)0;
    }
    if (present_9) {
        value.idleInactiveNR_MeasReport_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasReport_r16)0;
    }
    if (present_10) {
        value.idleInactiveNR_MeasBeamReport_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasBeamReport_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersFRX_Diff_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersFRX_Diff_ExtGroup4(MeasAndMobParametersFRX_Diff_ExtGroup4& value)
{
    if (value.has_nr_AutonomousGaps_r16) {
    }
    if (value.has_nr_AutonomousGaps_ENDC_r16) {
    }
    if (value.has_nr_AutonomousGaps_NEDC_r16) {
    }
    if (value.has_nr_AutonomousGaps_NRDC_r16) {
    }
    if (value.has_dummy) {
    }
    if (value.has_cli_RSSI_Meas_r16) {
    }
    if (value.has_cli_SRS_RSRP_Meas_r16) {
    }
    if (value.has_interFrequencyMeas_NoGap_r16) {
    }
    if (value.has_simultaneousRxDataSSB_DiffNumerology_Inter_r16) {
    }
    if (value.has_idleInactiveNR_MeasReport_r16) {
    }
    if (value.has_idleInactiveNR_MeasBeamReport_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersFRX_Diff_ExtGroup5(Encoder& enc, const MeasAndMobParametersFRX_Diff_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_increasedNumberofCSIRSPerMO_r16);
    if (value.has_increasedNumberofCSIRSPerMO_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.increasedNumberofCSIRSPerMO_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersFRX_Diff_ExtGroup5(Decoder& dec, MeasAndMobParametersFRX_Diff_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.increasedNumberofCSIRSPerMO_r16 = (MeasAndMobParametersFRX_Diff_ExtGroup5_IncreasedNumberofCSIRSPerMO_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersFRX_Diff_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersFRX_Diff_ExtGroup5(MeasAndMobParametersFRX_Diff_ExtGroup5& value)
{
    if (value.has_increasedNumberofCSIRSPerMO_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersFRX_Diff(Encoder& enc, const MeasAndMobParametersFRX_Diff& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ss_SINR_Meas);
    enc.WriteBit(value.has_csi_RSRP_AndRSRQ_MeasWithSSB);
    enc.WriteBit(value.has_csi_RSRP_AndRSRQ_MeasWithoutSSB);
    enc.WriteBit(value.has_csi_SINR_Meas);
    enc.WriteBit(value.has_csi_RS_RLM);
    if (value.has_ss_SINR_Meas) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ss_SINR_Meas), 0, 0);
    }
    if (value.has_csi_RSRP_AndRSRQ_MeasWithSSB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RSRP_AndRSRQ_MeasWithSSB), 0, 0);
    }
    if (value.has_csi_RSRP_AndRSRQ_MeasWithoutSSB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RSRP_AndRSRQ_MeasWithoutSSB), 0, 0);
    }
    if (value.has_csi_SINR_Meas) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_SINR_Meas), 0, 0);
    }
    if (value.has_csi_RS_RLM) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_RLM), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(5u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasAndMobParametersFRX_Diff_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MeasAndMobParametersFRX_Diff_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_MeasAndMobParametersFRX_Diff_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_MeasAndMobParametersFRX_Diff_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_MeasAndMobParametersFRX_Diff_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersFRX_Diff(Decoder& dec, MeasAndMobParametersFRX_Diff& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (present_0) {
        value.ss_SINR_Meas = (MeasAndMobParametersFRX_Diff_Ss_SINR_Meas)0;
    }
    if (present_1) {
        value.csi_RSRP_AndRSRQ_MeasWithSSB = (MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithSSB)0;
    }
    if (present_2) {
        value.csi_RSRP_AndRSRQ_MeasWithoutSSB = (MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithoutSSB)0;
    }
    if (present_3) {
        value.csi_SINR_Meas = (MeasAndMobParametersFRX_Diff_Csi_SINR_Meas)0;
    }
    if (present_4) {
        value.csi_RS_RLM = (MeasAndMobParametersFRX_Diff_Csi_RS_RLM)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 5u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[5] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersFRX_Diff_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersFRX_Diff_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersFRX_Diff_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup3 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[3]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersFRX_Diff_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup4 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[4]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasAndMobParametersFRX_Diff_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup5 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersFRX_Diff(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersFRX_Diff(MeasAndMobParametersFRX_Diff& value)
{
    if (value.has_ss_SINR_Meas) {
    }
    if (value.has_csi_RSRP_AndRSRQ_MeasWithSSB) {
    }
    if (value.has_csi_RSRP_AndRSRQ_MeasWithoutSSB) {
    }
    if (value.has_csi_SINR_Meas) {
    }
    if (value.has_csi_RS_RLM) {
    }
    if (value.has_extGroup1) {
        Free_MeasAndMobParametersFRX_Diff_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MeasAndMobParametersFRX_Diff_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_MeasAndMobParametersFRX_Diff_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_MeasAndMobParametersFRX_Diff_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_MeasAndMobParametersFRX_Diff_ExtGroup5(value.extGroup5);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParameters(Encoder& enc, const MeasAndMobParameters& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersCommon);
    enc.WriteBit(value.has_measAndMobParametersXDD_Diff);
    enc.WriteBit(value.has_measAndMobParametersFRX_Diff);
    if (value.has_measAndMobParametersCommon) {
        Encode_MeasAndMobParametersCommon(enc, value.measAndMobParametersCommon);
    }
    if (value.has_measAndMobParametersXDD_Diff) {
        Encode_MeasAndMobParametersXDD_Diff(enc, value.measAndMobParametersXDD_Diff);
    }
    if (value.has_measAndMobParametersFRX_Diff) {
        Encode_MeasAndMobParametersFRX_Diff(enc, value.measAndMobParametersFRX_Diff);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParameters(Decoder& dec, MeasAndMobParameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersCommon(dec, value.measAndMobParametersCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasAndMobParametersXDD_Diff(dec, value.measAndMobParametersXDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MeasAndMobParametersFRX_Diff(dec, value.measAndMobParametersFRX_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParameters(MeasAndMobParameters& value)
{
    if (value.has_measAndMobParametersCommon) {
        Free_MeasAndMobParametersCommon(value.measAndMobParametersCommon);
    }
    if (value.has_measAndMobParametersXDD_Diff) {
        Free_MeasAndMobParametersXDD_Diff(value.measAndMobParametersXDD_Diff);
    }
    if (value.has_measAndMobParametersFRX_Diff) {
        Free_MeasAndMobParametersFRX_Diff(value.measAndMobParametersFRX_Diff);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersFR2_2_r17(Encoder& enc, const MeasAndMobParametersFR2_2_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_handoverInterF_r17);
    enc.WriteBit(value.has_handoverLTE_EPC_r17);
    enc.WriteBit(value.has_handoverLTE_5GC_r17);
    enc.WriteBit(value.has_idleInactiveNR_MeasReport_r17);
    if (value.has_handoverInterF_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverInterF_r17), 0, 0);
    }
    if (value.has_handoverLTE_EPC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverLTE_EPC_r17), 0, 0);
    }
    if (value.has_handoverLTE_5GC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverLTE_5GC_r17), 0, 0);
    }
    if (value.has_idleInactiveNR_MeasReport_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleInactiveNR_MeasReport_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersFR2_2_r17(Decoder& dec, MeasAndMobParametersFR2_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.handoverInterF_r17 = (MeasAndMobParametersFR2_2_r17_HandoverInterF_r17)0;
    }
    if (present_1) {
        value.handoverLTE_EPC_r17 = (MeasAndMobParametersFR2_2_r17_HandoverLTE_EPC_r17)0;
    }
    if (present_2) {
        value.handoverLTE_5GC_r17 = (MeasAndMobParametersFR2_2_r17_HandoverLTE_5GC_r17)0;
    }
    if (present_3) {
        value.idleInactiveNR_MeasReport_r17 = (MeasAndMobParametersFR2_2_r17_IdleInactiveNR_MeasReport_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersFR2_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersFR2_2_r17(MeasAndMobParametersFR2_2_r17& value)
{
    if (value.has_handoverInterF_r17) {
    }
    if (value.has_handoverLTE_EPC_r17) {
    }
    if (value.has_handoverLTE_5GC_r17) {
    }
    if (value.has_idleInactiveNR_MeasReport_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParameters_v1700(Encoder& enc, const MeasAndMobParameters_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersFR2_2_r17);
    if (value.has_measAndMobParametersFR2_2_r17) {
        Encode_MeasAndMobParametersFR2_2_r17(enc, value.measAndMobParametersFR2_2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParameters_v1700(Decoder& dec, MeasAndMobParameters_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersFR2_2_r17(dec, value.measAndMobParametersFR2_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParameters_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParameters_v1700(MeasAndMobParameters_v1700& value)
{
    if (value.has_measAndMobParametersFR2_2_r17) {
        Free_MeasAndMobParametersFR2_2_r17(value.measAndMobParametersFR2_2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_Common(Encoder& enc, const MeasAndMobParametersMRDC_Common& value)
{
    (void)value;
    enc.WriteBit(value.has_independentGapConfig);
    if (value.has_independentGapConfig) {
        enc.WriteConstrainedInteger((std::int64_t)(value.independentGapConfig), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_Common(Decoder& dec, MeasAndMobParametersMRDC_Common& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.independentGapConfig = (MeasAndMobParametersMRDC_Common_IndependentGapConfig)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_Common(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_Common(MeasAndMobParametersMRDC_Common& value)
{
    if (value.has_independentGapConfig) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_XDD_Diff(Encoder& enc, const MeasAndMobParametersMRDC_XDD_Diff& value)
{
    (void)value;
    enc.WriteBit(value.has_sftd_MeasPSCell);
    enc.WriteBit(value.has_sftd_MeasNR_Cell);
    if (value.has_sftd_MeasPSCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sftd_MeasPSCell), 0, 0);
    }
    if (value.has_sftd_MeasNR_Cell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sftd_MeasNR_Cell), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_XDD_Diff(Decoder& dec, MeasAndMobParametersMRDC_XDD_Diff& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.sftd_MeasPSCell = (MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasPSCell)0;
    }
    if (present_1) {
        value.sftd_MeasNR_Cell = (MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasNR_Cell)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_XDD_Diff(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_XDD_Diff(MeasAndMobParametersMRDC_XDD_Diff& value)
{
    if (value.has_sftd_MeasPSCell) {
    }
    if (value.has_sftd_MeasNR_Cell) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_FRX_Diff(Encoder& enc, const MeasAndMobParametersMRDC_FRX_Diff& value)
{
    (void)value;
    enc.WriteBit(value.has_simultaneousRxDataSSB_DiffNumerology);
    if (value.has_simultaneousRxDataSSB_DiffNumerology) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousRxDataSSB_DiffNumerology), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_FRX_Diff(Decoder& dec, MeasAndMobParametersMRDC_FRX_Diff& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.simultaneousRxDataSSB_DiffNumerology = (MeasAndMobParametersMRDC_FRX_Diff_SimultaneousRxDataSSB_DiffNumerology)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_FRX_Diff(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_FRX_Diff(MeasAndMobParametersMRDC_FRX_Diff& value)
{
    if (value.has_simultaneousRxDataSSB_DiffNumerology) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC(Encoder& enc, const MeasAndMobParametersMRDC& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC_Common);
    enc.WriteBit(value.has_measAndMobParametersMRDC_XDD_Diff);
    enc.WriteBit(value.has_measAndMobParametersMRDC_FRX_Diff);
    if (value.has_measAndMobParametersMRDC_Common) {
        Encode_MeasAndMobParametersMRDC_Common(enc, value.measAndMobParametersMRDC_Common);
    }
    if (value.has_measAndMobParametersMRDC_XDD_Diff) {
        Encode_MeasAndMobParametersMRDC_XDD_Diff(enc, value.measAndMobParametersMRDC_XDD_Diff);
    }
    if (value.has_measAndMobParametersMRDC_FRX_Diff) {
        Encode_MeasAndMobParametersMRDC_FRX_Diff(enc, value.measAndMobParametersMRDC_FRX_Diff);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC(Decoder& dec, MeasAndMobParametersMRDC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_Common(dec, value.measAndMobParametersMRDC_Common) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasAndMobParametersMRDC_XDD_Diff(dec, value.measAndMobParametersMRDC_XDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MeasAndMobParametersMRDC_FRX_Diff(dec, value.measAndMobParametersMRDC_FRX_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC(MeasAndMobParametersMRDC& value)
{
    if (value.has_measAndMobParametersMRDC_Common) {
        Free_MeasAndMobParametersMRDC_Common(value.measAndMobParametersMRDC_Common);
    }
    if (value.has_measAndMobParametersMRDC_XDD_Diff) {
        Free_MeasAndMobParametersMRDC_XDD_Diff(value.measAndMobParametersMRDC_XDD_Diff);
    }
    if (value.has_measAndMobParametersMRDC_FRX_Diff) {
        Free_MeasAndMobParametersMRDC_FRX_Diff(value.measAndMobParametersMRDC_FRX_Diff);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_XDD_Diff_v1560(Encoder& enc, const MeasAndMobParametersMRDC_XDD_Diff_v1560& value)
{
    (void)value;
    enc.WriteBit(value.has_sftd_MeasPSCell_NEDC);
    if (value.has_sftd_MeasPSCell_NEDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sftd_MeasPSCell_NEDC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_XDD_Diff_v1560(Decoder& dec, MeasAndMobParametersMRDC_XDD_Diff_v1560& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.sftd_MeasPSCell_NEDC = (MeasAndMobParametersMRDC_XDD_Diff_v1560_Sftd_MeasPSCell_NEDC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_XDD_Diff_v1560(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_XDD_Diff_v1560(MeasAndMobParametersMRDC_XDD_Diff_v1560& value)
{
    if (value.has_sftd_MeasPSCell_NEDC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_v1560(Encoder& enc, const MeasAndMobParametersMRDC_v1560& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC_XDD_Diff_v1560);
    if (value.has_measAndMobParametersMRDC_XDD_Diff_v1560) {
        Encode_MeasAndMobParametersMRDC_XDD_Diff_v1560(enc, value.measAndMobParametersMRDC_XDD_Diff_v1560);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_v1560(Decoder& dec, MeasAndMobParametersMRDC_v1560& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_XDD_Diff_v1560(dec, value.measAndMobParametersMRDC_XDD_Diff_v1560) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_v1560(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_v1560(MeasAndMobParametersMRDC_v1560& value)
{
    if (value.has_measAndMobParametersMRDC_XDD_Diff_v1560) {
        Free_MeasAndMobParametersMRDC_XDD_Diff_v1560(value.measAndMobParametersMRDC_XDD_Diff_v1560);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16(Encoder& enc, const MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_condPSCellChangeFDD_TDD_r16);
    enc.WriteBit(value.has_condPSCellChangeFR1_FR2_r16);
    if (value.has_condPSCellChangeFDD_TDD_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condPSCellChangeFDD_TDD_r16), 0, 0);
    }
    if (value.has_condPSCellChangeFR1_FR2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condPSCellChangeFR1_FR2_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16(Decoder& dec, MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.condPSCellChangeFDD_TDD_r16 = (MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFDD_TDD_r16)0;
    }
    if (present_1) {
        value.condPSCellChangeFR1_FR2_r16 = (MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFR1_FR2_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16(MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16& value)
{
    if (value.has_condPSCellChangeFDD_TDD_r16) {
    }
    if (value.has_condPSCellChangeFR1_FR2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_Common_v1610(Encoder& enc, const MeasAndMobParametersMRDC_Common_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_condPSCellChangeParametersCommon_r16);
    enc.WriteBit(value.has_pscellT312_r16);
    if (value.has_condPSCellChangeParametersCommon_r16) {
        Encode_MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16(enc, value.condPSCellChangeParametersCommon_r16);
    }
    if (value.has_pscellT312_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pscellT312_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_Common_v1610(Decoder& dec, MeasAndMobParametersMRDC_Common_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16(dec, value.condPSCellChangeParametersCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.pscellT312_r16 = (MeasAndMobParametersMRDC_Common_v1610_PscellT312_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_Common_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_Common_v1610(MeasAndMobParametersMRDC_Common_v1610& value)
{
    if (value.has_condPSCellChangeParametersCommon_r16) {
        Free_MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16(value.condPSCellChangeParametersCommon_r16);
    }
    if (value.has_pscellT312_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_v1610(Encoder& enc, const MeasAndMobParametersMRDC_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC_Common_v1610);
    enc.WriteBit(value.has_interNR_MeasEUTRA_IAB_r16);
    if (value.has_measAndMobParametersMRDC_Common_v1610) {
        Encode_MeasAndMobParametersMRDC_Common_v1610(enc, value.measAndMobParametersMRDC_Common_v1610);
    }
    if (value.has_interNR_MeasEUTRA_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interNR_MeasEUTRA_IAB_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_v1610(Decoder& dec, MeasAndMobParametersMRDC_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_Common_v1610(dec, value.measAndMobParametersMRDC_Common_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.interNR_MeasEUTRA_IAB_r16 = (MeasAndMobParametersMRDC_v1610_InterNR_MeasEUTRA_IAB_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_v1610(MeasAndMobParametersMRDC_v1610& value)
{
    if (value.has_measAndMobParametersMRDC_Common_v1610) {
        Free_MeasAndMobParametersMRDC_Common_v1610(value.measAndMobParametersMRDC_Common_v1610);
    }
    if (value.has_interNR_MeasEUTRA_IAB_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17(Encoder& enc, const MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_inter_SN_condPSCellChangeFDD_TDD_NRDC_r17);
    enc.WriteBit(value.has_inter_SN_condPSCellChangeFR1_FR2_NRDC_r17);
    enc.WriteBit(value.has_inter_SN_condPSCellChangeFDD_TDD_ENDC_r17);
    enc.WriteBit(value.has_inter_SN_condPSCellChangeFR1_FR2_ENDC_r17);
    enc.WriteBit(value.has_mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17);
    enc.WriteBit(value.has_mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17);
    enc.WriteBit(value.has_mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17);
    enc.WriteBit(value.has_sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17);
    enc.WriteBit(value.has_sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17);
    enc.WriteBit(value.has_sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17);
    if (value.has_inter_SN_condPSCellChangeFDD_TDD_NRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inter_SN_condPSCellChangeFDD_TDD_NRDC_r17), 0, 0);
    }
    if (value.has_inter_SN_condPSCellChangeFR1_FR2_NRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inter_SN_condPSCellChangeFR1_FR2_NRDC_r17), 0, 0);
    }
    if (value.has_inter_SN_condPSCellChangeFDD_TDD_ENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inter_SN_condPSCellChangeFDD_TDD_ENDC_r17), 0, 0);
    }
    if (value.has_inter_SN_condPSCellChangeFR1_FR2_ENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inter_SN_condPSCellChangeFR1_FR2_ENDC_r17), 0, 0);
    }
    if (value.has_mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17), 0, 0);
    }
    if (value.has_mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17), 0, 0);
    }
    if (value.has_mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17), 0, 0);
    }
    if (value.has_sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17), 0, 0);
    }
    if (value.has_sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17), 0, 0);
    }
    if (value.has_sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17(Decoder& dec, MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (present_0) {
        value.inter_SN_condPSCellChangeFDD_TDD_NRDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_NRDC_r17)0;
    }
    if (present_1) {
        value.inter_SN_condPSCellChangeFR1_FR2_NRDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_NRDC_r17)0;
    }
    if (present_2) {
        value.inter_SN_condPSCellChangeFDD_TDD_ENDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_ENDC_r17)0;
    }
    if (present_3) {
        value.inter_SN_condPSCellChangeFR1_FR2_ENDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_ENDC_r17)0;
    }
    if (present_4) {
        value.mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17)0;
    }
    if (present_5) {
        value.mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17)0;
    }
    if (present_6) {
        value.mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17)0;
    }
    if (present_7) {
        value.sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17)0;
    }
    if (present_8) {
        value.sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17)0;
    }
    if (present_9) {
        value.sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17(MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17& value)
{
    if (value.has_inter_SN_condPSCellChangeFDD_TDD_NRDC_r17) {
    }
    if (value.has_inter_SN_condPSCellChangeFR1_FR2_NRDC_r17) {
    }
    if (value.has_inter_SN_condPSCellChangeFDD_TDD_ENDC_r17) {
    }
    if (value.has_inter_SN_condPSCellChangeFR1_FR2_ENDC_r17) {
    }
    if (value.has_mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17) {
    }
    if (value.has_mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17) {
    }
    if (value.has_mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17) {
    }
    if (value.has_sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17) {
    }
    if (value.has_sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17) {
    }
    if (value.has_sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_Common_v1700(Encoder& enc, const MeasAndMobParametersMRDC_Common_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_condPSCellChangeParameters_r17);
    enc.WriteBit(value.has_condHandoverWithSCG_ENDC_r17);
    enc.WriteBit(value.has_condHandoverWithSCG_NEDC_r17);
    if (value.has_condPSCellChangeParameters_r17) {
        Encode_MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17(enc, value.condPSCellChangeParameters_r17);
    }
    if (value.has_condHandoverWithSCG_ENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condHandoverWithSCG_ENDC_r17), 0, 0);
    }
    if (value.has_condHandoverWithSCG_NEDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condHandoverWithSCG_NEDC_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_Common_v1700(Decoder& dec, MeasAndMobParametersMRDC_Common_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17(dec, value.condPSCellChangeParameters_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.condHandoverWithSCG_ENDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_ENDC_r17)0;
    }
    if (present_2) {
        value.condHandoverWithSCG_NEDC_r17 = (MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_NEDC_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_Common_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_Common_v1700(MeasAndMobParametersMRDC_Common_v1700& value)
{
    if (value.has_condPSCellChangeParameters_r17) {
        Free_MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17(value.condPSCellChangeParameters_r17);
    }
    if (value.has_condHandoverWithSCG_ENDC_r17) {
    }
    if (value.has_condHandoverWithSCG_NEDC_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_v1700(Encoder& enc, const MeasAndMobParametersMRDC_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC_Common_v1700);
    if (value.has_measAndMobParametersMRDC_Common_v1700) {
        Encode_MeasAndMobParametersMRDC_Common_v1700(enc, value.measAndMobParametersMRDC_Common_v1700);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_v1700(Decoder& dec, MeasAndMobParametersMRDC_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_Common_v1700(dec, value.measAndMobParametersMRDC_Common_v1700) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_v1700(MeasAndMobParametersMRDC_v1700& value)
{
    if (value.has_measAndMobParametersMRDC_Common_v1700) {
        Free_MeasAndMobParametersMRDC_Common_v1700(value.measAndMobParametersMRDC_Common_v1700);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17(Encoder& enc, const MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_fr1_Only_r17);
    enc.WriteBit(value.has_fr2_Only_r17);
    enc.WriteBit(value.has_fr1_AndFR2_r17);
    if (value.has_fr1_Only_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1_Only_r17), 1, 32);
    }
    if (value.has_fr2_Only_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr2_Only_r17), 1, 32);
    }
    if (value.has_fr1_AndFR2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1_AndFR2_r17), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17(Decoder& dec, MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.fr1_Only_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.fr2_Only_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.fr1_AndFR2_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17(MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17& value)
{
    if (value.has_fr1_Only_r17) {
    }
    if (value.has_fr2_Only_r17) {
    }
    if (value.has_fr1_AndFR2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_Common_v1730(Encoder& enc, const MeasAndMobParametersMRDC_Common_v1730& value)
{
    (void)value;
    Encode_MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17(enc, value.independentGapConfig_maxCC_r17);
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_Common_v1730(Decoder& dec, MeasAndMobParametersMRDC_Common_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17(dec, value.independentGapConfig_maxCC_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_Common_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_Common_v1730(MeasAndMobParametersMRDC_Common_v1730& value)
{
    Free_MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17(value.independentGapConfig_maxCC_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_v1730(Encoder& enc, const MeasAndMobParametersMRDC_v1730& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC_Common_v1730);
    if (value.has_measAndMobParametersMRDC_Common_v1730) {
        Encode_MeasAndMobParametersMRDC_Common_v1730(enc, value.measAndMobParametersMRDC_Common_v1730);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_v1730(Decoder& dec, MeasAndMobParametersMRDC_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_Common_v1730(dec, value.measAndMobParametersMRDC_Common_v1730) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_v1730(MeasAndMobParametersMRDC_v1730& value)
{
    if (value.has_measAndMobParametersMRDC_Common_v1730) {
        Free_MeasAndMobParametersMRDC_Common_v1730(value.measAndMobParametersMRDC_Common_v1730);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_Common_v1810(Encoder& enc, const MeasAndMobParametersMRDC_Common_v1810& value)
{
    (void)value;
    enc.WriteBit(value.has_mn_ConfiguredMN_TriggerSCPAC_r18);
    enc.WriteBit(value.has_mn_ConfiguredSN_TriggerSCPAC_r18);
    enc.WriteBit(value.has_sn_ConfiguredSCPAC_r18);
    enc.WriteBit(value.has_mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18);
    enc.WriteBit(value.has_mn_ConfiguredReferenceConfigSCPAC_r18);
    enc.WriteBit(value.has_sn_ConfiguredReferenceConfigSCPAC_r18);
    if (value.has_mn_ConfiguredMN_TriggerSCPAC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mn_ConfiguredMN_TriggerSCPAC_r18), 0, 0);
    }
    if (value.has_mn_ConfiguredSN_TriggerSCPAC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mn_ConfiguredSN_TriggerSCPAC_r18), 0, 0);
    }
    if (value.has_sn_ConfiguredSCPAC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_ConfiguredSCPAC_r18), 0, 0);
    }
    if (value.has_mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18), 0, 0);
    }
    if (value.has_mn_ConfiguredReferenceConfigSCPAC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mn_ConfiguredReferenceConfigSCPAC_r18), 0, 0);
    }
    if (value.has_sn_ConfiguredReferenceConfigSCPAC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_ConfiguredReferenceConfigSCPAC_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_Common_v1810(Decoder& dec, MeasAndMobParametersMRDC_Common_v1810& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (present_0) {
        value.mn_ConfiguredMN_TriggerSCPAC_r18 = (MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_r18)0;
    }
    if (present_1) {
        value.mn_ConfiguredSN_TriggerSCPAC_r18 = (MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredSN_TriggerSCPAC_r18)0;
    }
    if (present_2) {
        value.sn_ConfiguredSCPAC_r18 = (MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredSCPAC_r18)0;
    }
    if (present_3) {
        value.mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18 = (MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18)0;
    }
    if (present_4) {
        value.mn_ConfiguredReferenceConfigSCPAC_r18 = (MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredReferenceConfigSCPAC_r18)0;
    }
    if (present_5) {
        value.sn_ConfiguredReferenceConfigSCPAC_r18 = (MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredReferenceConfigSCPAC_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_Common_v1810(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_Common_v1810(MeasAndMobParametersMRDC_Common_v1810& value)
{
    if (value.has_mn_ConfiguredMN_TriggerSCPAC_r18) {
    }
    if (value.has_mn_ConfiguredSN_TriggerSCPAC_r18) {
    }
    if (value.has_sn_ConfiguredSCPAC_r18) {
    }
    if (value.has_mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18) {
    }
    if (value.has_mn_ConfiguredReferenceConfigSCPAC_r18) {
    }
    if (value.has_sn_ConfiguredReferenceConfigSCPAC_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasAndMobParametersMRDC_v1810(Encoder& enc, const MeasAndMobParametersMRDC_v1810& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC_Common_v1810);
    if (value.has_measAndMobParametersMRDC_Common_v1810) {
        Encode_MeasAndMobParametersMRDC_Common_v1810(enc, value.measAndMobParametersMRDC_Common_v1810);
    }
    return enc.Error();
}

ErrorCode Decode_MeasAndMobParametersMRDC_v1810(Decoder& dec, MeasAndMobParametersMRDC_v1810& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_Common_v1810(dec, value.measAndMobParametersMRDC_Common_v1810) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasAndMobParametersMRDC_v1810(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasAndMobParametersMRDC_v1810(MeasAndMobParametersMRDC_v1810& value)
{
    if (value.has_measAndMobParametersMRDC_Common_v1810) {
        Free_MeasAndMobParametersMRDC_Common_v1810(value.measAndMobParametersMRDC_Common_v1810);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BeamManagementSSB_CSI_RS(Encoder& enc, const BeamManagementSSB_CSI_RS& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedCSI_RS_Density);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSSB_CSI_RS_ResourceOneTx), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_Resource), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_ResourceTwoTx), 0, 5);
    if (value.has_supportedCSI_RS_Density) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_Density), 0, 2);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_RS_Resource), 0, 6);
    return enc.Error();
}

ErrorCode Decode_BeamManagementSSB_CSI_RS(Decoder& dec, BeamManagementSSB_CSI_RS& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberSSB_CSI_RS_ResourceOneTx = (BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_Resource = (BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_ResourceTwoTx = (BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.supportedCSI_RS_Density = (BeamManagementSSB_CSI_RS_SupportedCSI_RS_Density)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_RS_Resource = (BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BeamManagementSSB_CSI_RS(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamManagementSSB_CSI_RS(BeamManagementSSB_CSI_RS& value)
{
    if (value.has_supportedCSI_RS_Density) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_ForTracking(Encoder& enc, const CSI_RS_ForTracking& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxBurstLength), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxSimultaneousResourceSetsPerCC), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxConfiguredResourceSetsPerCC), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxConfiguredResourceSetsAllCC), 1, 256);
    return enc.Error();
}

ErrorCode Decode_CSI_RS_ForTracking(Decoder& dec, CSI_RS_ForTracking& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxBurstLength = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxSimultaneousResourceSetsPerCC = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxConfiguredResourceSetsPerCC = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
        value.maxConfiguredResourceSetsAllCC = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_ForTracking(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_ForTracking(CSI_RS_ForTracking& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_IM_ReceptionForFeedback(Encoder& enc, const CSI_RS_IM_ReceptionForFeedback& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxConfigNumberNZP_CSI_RS_PerCC), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC), 2, 256);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxConfigNumberCSI_IM_PerCC), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSimultaneousNZP_CSI_RS_PerCC), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberPortsSimultaneousNZP_CSI_RS_PerCC), 2, 256);
    return enc.Error();
}

ErrorCode Decode_CSI_RS_IM_ReceptionForFeedback(Decoder& dec, CSI_RS_IM_ReceptionForFeedback& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxConfigNumberNZP_CSI_RS_PerCC = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 256, tmp_value)) { goto fail; }
        value.maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxConfigNumberCSI_IM_PerCC = (CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberSimultaneousNZP_CSI_RS_PerCC = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 256, tmp_value)) { goto fail; }
        value.totalNumberPortsSimultaneousNZP_CSI_RS_PerCC = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_IM_ReceptionForFeedback(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_IM_ReceptionForFeedback(CSI_RS_IM_ReceptionForFeedback& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_ProcFrameworkForSRS(Encoder& enc, const CSI_RS_ProcFrameworkForSRS& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicSRS_AssocCSI_RS_PerBWP), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicSRS_AssocCSI_RS_PerBWP), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSP_SRS_AssocCSI_RS_PerBWP), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousSRS_AssocCSI_RS_PerCC), 1, 8);
    return enc.Error();
}

ErrorCode Decode_CSI_RS_ProcFrameworkForSRS(Decoder& dec, CSI_RS_ProcFrameworkForSRS& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberPeriodicSRS_AssocCSI_RS_PerBWP = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberAperiodicSRS_AssocCSI_RS_PerBWP = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberSP_SRS_AssocCSI_RS_PerBWP = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.simultaneousSRS_AssocCSI_RS_PerCC = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_ProcFrameworkForSRS(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_ProcFrameworkForSRS(CSI_RS_ProcFrameworkForSRS& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportFramework(Encoder& enc, const CSI_ReportFramework& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicCSI_PerBWP_ForCSI_Report), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_PerBWP_ForCSI_Report), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicCSI_PerBWP_ForBeamReport), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_PerBWP_ForBeamReport), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_triggeringStatePerCC), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSemiPersistentCSI_PerBWP_ForBeamReport), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousCSI_ReportsPerCC), 1, 8);
    return enc.Error();
}

ErrorCode Decode_CSI_ReportFramework(Decoder& dec, CSI_ReportFramework& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberPeriodicCSI_PerBWP_ForCSI_Report = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_PerBWP_ForCSI_Report = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberPeriodicCSI_PerBWP_ForBeamReport = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_PerBWP_ForBeamReport = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_triggeringStatePerCC = (CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberSemiPersistentCSI_PerBWP_ForBeamReport = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.simultaneousCSI_ReportsPerCC = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportFramework(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportFramework(CSI_ReportFramework& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SpatialRelations(Encoder& enc, const SpatialRelations& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalActiveSpatialRelationPUCCH);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfiguredSpatialRelations), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberActiveSpatialRelations), 0, 4);
    if (value.has_additionalActiveSpatialRelationPUCCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalActiveSpatialRelationPUCCH), 0, 0);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberDL_RS_QCL_TypeD), 0, 4);
    return enc.Error();
}

ErrorCode Decode_SpatialRelations(Decoder& dec, SpatialRelations& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberConfiguredSpatialRelations = (SpatialRelations_MaxNumberConfiguredSpatialRelations)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberActiveSpatialRelations = (SpatialRelations_MaxNumberActiveSpatialRelations)tmp_value;
    }
    if (present_0) {
        value.additionalActiveSpatialRelationPUCCH = (SpatialRelations_AdditionalActiveSpatialRelationPUCCH)0;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberDL_RS_QCL_TypeD = (SpatialRelations_MaxNumberDL_RS_QCL_TypeD)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SpatialRelations(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SpatialRelations(SpatialRelations& value)
{
    if (value.has_additionalActiveSpatialRelationPUCCH) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 4);
    }
    if (value.has_scs_120kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming(Decoder& dec, MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.scs_60kHz = (MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_60kHz)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.scs_120kHz = (MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_120kHz)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming(MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming& value)
{
    if (value.has_scs_60kHz) {
    }
    if (value.has_scs_120kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup1(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_dummy6);
    enc.WriteBit(value.has_beamManagementSSB_CSI_RS);
    enc.WriteBit(value.has_beamSwitchTiming);
    enc.WriteBit(value.has_codebookParameters);
    enc.WriteBit(value.has_csi_RS_IM_ReceptionForFeedback);
    enc.WriteBit(value.has_csi_RS_ProcFrameworkForSRS);
    enc.WriteBit(value.has_csi_ReportFramework);
    enc.WriteBit(value.has_csi_RS_ForTracking);
    enc.WriteBit(value.has_srs_AssocCSI_RS);
    enc.WriteBit(value.has_spatialRelations);
    if (value.has_dummy6) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy6), 0, 0);
    }
    if (value.has_beamManagementSSB_CSI_RS) {
        Encode_BeamManagementSSB_CSI_RS(enc, value.beamManagementSSB_CSI_RS);
    }
    if (value.has_beamSwitchTiming) {
        Encode_MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming(enc, value.beamSwitchTiming);
    }
    if (value.has_codebookParameters) {
        Encode_CodebookParameters(enc, value.codebookParameters);
    }
    if (value.has_csi_RS_IM_ReceptionForFeedback) {
        Encode_CSI_RS_IM_ReceptionForFeedback(enc, value.csi_RS_IM_ReceptionForFeedback);
    }
    if (value.has_csi_RS_ProcFrameworkForSRS) {
        Encode_CSI_RS_ProcFrameworkForSRS(enc, value.csi_RS_ProcFrameworkForSRS);
    }
    if (value.has_csi_ReportFramework) {
        Encode_CSI_ReportFramework(enc, value.csi_ReportFramework);
    }
    if (value.has_csi_RS_ForTracking) {
        Encode_CSI_RS_ForTracking(enc, value.csi_RS_ForTracking);
    }
    if (value.has_srs_AssocCSI_RS) {
enc.WriteConstrainedLength(value.srs_AssocCSI_RS_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_AssocCSI_RS_count; ++i) {
    Encode_SupportedCSI_RS_Resource(enc, value.srs_AssocCSI_RS_items[i]);
}
    }
    if (value.has_spatialRelations) {
        Encode_SpatialRelations(enc, value.spatialRelations);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup1(Decoder& dec, MIMO_ParametersPerBand_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (present_0) {
        value.dummy6 = (MIMO_ParametersPerBand_ExtGroup1_Dummy6)0;
    }
    if (present_1) {
        if (Decode_BeamManagementSSB_CSI_RS(dec, value.beamManagementSSB_CSI_RS) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming(dec, value.beamSwitchTiming) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_CodebookParameters(dec, value.codebookParameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_CSI_RS_IM_ReceptionForFeedback(dec, value.csi_RS_IM_ReceptionForFeedback) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_CSI_RS_ProcFrameworkForSRS(dec, value.csi_RS_ProcFrameworkForSRS) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_CSI_ReportFramework(dec, value.csi_ReportFramework) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_CSI_RS_ForTracking(dec, value.csi_RS_ForTracking) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_AssocCSI_RS_count)) { goto fail; }
if (value.srs_AssocCSI_RS_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_AssocCSI_RS_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_AssocCSI_RS_count > 0u) {
    value.srs_AssocCSI_RS_items = (SupportedCSI_RS_Resource*)std::malloc((std::size_t)value.srs_AssocCSI_RS_count * sizeof(SupportedCSI_RS_Resource));
    if (value.srs_AssocCSI_RS_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_AssocCSI_RS_items, 0, (std::size_t)value.srs_AssocCSI_RS_count * sizeof(SupportedCSI_RS_Resource));
}
for (std::uint32_t i = 0; i < value.srs_AssocCSI_RS_count; ++i) {
    if (Decode_SupportedCSI_RS_Resource(dec, value.srs_AssocCSI_RS_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
        if (Decode_SpatialRelations(dec, value.spatialRelations) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup1(MIMO_ParametersPerBand_ExtGroup1& value)
{
    if (value.has_dummy6) {
    }
    if (value.has_beamManagementSSB_CSI_RS) {
        Free_BeamManagementSSB_CSI_RS(value.beamManagementSSB_CSI_RS);
    }
    if (value.has_beamSwitchTiming) {
        Free_MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming(value.beamSwitchTiming);
    }
    if (value.has_codebookParameters) {
        Free_CodebookParameters(value.codebookParameters);
    }
    if (value.has_csi_RS_IM_ReceptionForFeedback) {
        Free_CSI_RS_IM_ReceptionForFeedback(value.csi_RS_IM_ReceptionForFeedback);
    }
    if (value.has_csi_RS_ProcFrameworkForSRS) {
        Free_CSI_RS_ProcFrameworkForSRS(value.csi_RS_ProcFrameworkForSRS);
    }
    if (value.has_csi_ReportFramework) {
        Free_CSI_ReportFramework(value.csi_ReportFramework);
    }
    if (value.has_csi_RS_ForTracking) {
        Free_CSI_RS_ForTracking(value.csi_RS_ForTracking);
    }
    if (value.has_srs_AssocCSI_RS) {
        if (value.srs_AssocCSI_RS_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_AssocCSI_RS_count; ++i) {
                Free_SupportedCSI_RS_Resource(value.srs_AssocCSI_RS_items[i]);
            }
            std::free(value.srs_AssocCSI_RS_items);
            value.srs_AssocCSI_RS_items = nullptr;
        }
        value.srs_AssocCSI_RS_count = 0;
    }
    if (value.has_spatialRelations) {
        Free_SpatialRelations(value.spatialRelations);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportFrameworkExt_r16(Encoder& enc, const CSI_ReportFrameworkExt_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_PerBWP_ForCSI_ReportExt_r16), 5, 8);
    return enc.Error();
}

ErrorCode Decode_CSI_ReportFrameworkExt_r16(Decoder& dec, CSI_ReportFrameworkExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(5, 8, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_PerBWP_ForCSI_ReportExt_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportFrameworkExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportFrameworkExt_r16(CSI_ReportFrameworkExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedSINR_meas_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSSB_CSIRS_OneTx_CMR_r16), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_IM_NZP_IMR_res_r16), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSIRS_2Tx_res_r16), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSSB_CSIRS_res_r16), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_IM_NZP_IMR_res_mem_r16), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_Density_CMR_r16), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_RS_Res_r16), 0, 5);
    if (value.has_supportedSINR_meas_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportedSINR_meas_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16(Decoder& dec, MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberSSB_CSIRS_OneTx_CMR_r16 = (MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_OneTx_CMR_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberCSI_IM_NZP_IMR_res_r16 = (MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberCSIRS_2Tx_res_r16 = (MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberSSB_CSIRS_res_r16 = (MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberCSI_IM_NZP_IMR_res_mem_r16 = (MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.supportedCSI_RS_Density_CMR_r16 = (MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedCSI_RS_Density_CMR_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_RS_Res_r16 = (MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.supportedSINR_meas_r16 = (MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedSINR_meas_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16(MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16& value)
{
    if (value.has_supportedSINR_meas_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_supportPDCCH_ToPDSCH_r16);
    enc.WriteBit(value.has_supportPDSCH_ToHARQ_ACK_r16);
    if (value.has_supportPDCCH_ToPDSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportPDCCH_ToPDSCH_r16), 0, 0);
    }
    if (value.has_supportPDSCH_ToHARQ_ACK_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportPDSCH_ToHARQ_ACK_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16(Decoder& dec, MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.supportPDCCH_ToPDSCH_r16 = (MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportPDCCH_ToPDSCH_r16)0;
    }
    if (present_1) {
        value.supportPDSCH_ToHARQ_ACK_r16 = (MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportPDSCH_ToHARQ_ACK_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16(MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16& value)
{
    if (value.has_supportPDCCH_ToPDSCH_r16) {
    }
    if (value.has_supportPDSCH_ToHARQ_ACK_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPerCORESET_Pool_r16), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxTotalNumberAcrossCORESET_Pool_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16(Decoder& dec, MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberPerCORESET_Pool_r16 = (MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_c1d091ea)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxTotalNumberAcrossCORESET_Pool_r16 = (MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_df654597)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16(MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_overlapPDSCHsFullyFreqTime_r16);
    enc.WriteBit(value.has_overlapPDSCHsInTimePartiallyFreq_r16);
    enc.WriteBit(value.has_outOfOrderOperationDL_r16);
    enc.WriteBit(value.has_outOfOrderOperationUL_r16);
    enc.WriteBit(value.has_separateCRS_RateMatching_r16);
    enc.WriteBit(value.has_defaultQCL_PerCORESETPoolIndex_r16);
    enc.WriteBit(value.has_maxNumberActivatedTCI_States_r16);
    if (value.has_overlapPDSCHsFullyFreqTime_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.overlapPDSCHsFullyFreqTime_r16), 1, 2);
    }
    if (value.has_overlapPDSCHsInTimePartiallyFreq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.overlapPDSCHsInTimePartiallyFreq_r16), 0, 0);
    }
    if (value.has_outOfOrderOperationDL_r16) {
        Encode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16(enc, value.outOfOrderOperationDL_r16);
    }
    if (value.has_outOfOrderOperationUL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.outOfOrderOperationUL_r16), 0, 0);
    }
    if (value.has_separateCRS_RateMatching_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.separateCRS_RateMatching_r16), 0, 0);
    }
    if (value.has_defaultQCL_PerCORESETPoolIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.defaultQCL_PerCORESETPoolIndex_r16), 0, 0);
    }
    if (value.has_maxNumberActivatedTCI_States_r16) {
        Encode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16(enc, value.maxNumberActivatedTCI_States_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16(Decoder& dec, MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.overlapPDSCHsFullyFreqTime_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        value.overlapPDSCHsInTimePartiallyFreq_r16 = (MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OverlapPDSCHsInTimePartiallyFreq_r16)0;
    }
    if (present_2) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16(dec, value.outOfOrderOperationDL_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.outOfOrderOperationUL_r16 = (MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationUL_r16)0;
    }
    if (present_4) {
        value.separateCRS_RateMatching_r16 = (MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_SeparateCRS_RateMatching_r16)0;
    }
    if (present_5) {
        value.defaultQCL_PerCORESETPoolIndex_r16 = (MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_DefaultQCL_PerCORESETPoolIndex_r16)0;
    }
    if (present_6) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16(dec, value.maxNumberActivatedTCI_States_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16(MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16& value)
{
    if (value.has_overlapPDSCHsFullyFreqTime_r16) {
    }
    if (value.has_overlapPDSCHsInTimePartiallyFreq_r16) {
    }
    if (value.has_outOfOrderOperationDL_r16) {
        Free_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16(value.outOfOrderOperationDL_r16);
    }
    if (value.has_outOfOrderOperationUL_r16) {
    }
    if (value.has_separateCRS_RateMatching_r16) {
    }
    if (value.has_defaultQCL_PerCORESETPoolIndex_r16) {
    }
    if (value.has_maxNumberActivatedTCI_States_r16) {
        Free_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16(value.maxNumberActivatedTCI_States_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_supportNewDMRS_Port_r16);
    enc.WriteBit(value.has_supportTwoPortDL_PTRS_r16);
    if (value.has_supportNewDMRS_Port_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportNewDMRS_Port_r16), 0, 2);
    }
    if (value.has_supportTwoPortDL_PTRS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportTwoPortDL_PTRS_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16(Decoder& dec, MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.supportNewDMRS_Port_r16 = (MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportNewDMRS_Port_r16)tmp_value;
    }
    if (present_1) {
        value.supportTwoPortDL_PTRS_r16 = (MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportTwoPortDL_PTRS_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16(MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16& value)
{
    if (value.has_supportNewDMRS_Port_r16) {
    }
    if (value.has_supportTwoPortDL_PTRS_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.supportRepNumPDSCH_TDRA_r16), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxTBS_Size_r16), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTCI_states_r16), 1, 2);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16(Decoder& dec, MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.supportRepNumPDSCH_TDRA_r16 = (MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxTBS_Size_r16 = (MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxNumberTCI_states_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16(MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz_r16);
    enc.WriteBit(value.has_scs_120kHz_r16);
    if (value.has_scs_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r16), 0, 1);
    }
    if (value.has_scs_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16(Decoder& dec, MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_60kHz_r16 = (MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_60kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_120kHz_r16 = (MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_120kHz_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16(MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16& value)
{
    if (value.has_scs_60kHz_r16) {
    }
    if (value.has_scs_120kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup2(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_defaultQCL_TwoTCI_r16);
    enc.WriteBit(value.has_codebookParametersPerBand_r16);
    enc.WriteBit(value.has_simul_SpatialRelationUpdatePUCCHResGroup_r16);
    enc.WriteBit(value.has_maxNumberSCellBFR_r16);
    enc.WriteBit(value.has_simultaneousReceptionDiffTypeD_r16);
    enc.WriteBit(value.has_ssb_csirs_SINR_measurement_r16);
    enc.WriteBit(value.has_nonGroupSINR_reporting_r16);
    enc.WriteBit(value.has_groupSINR_reporting_r16);
    enc.WriteBit(value.has_multiDCI_multiTRP_Parameters_r16);
    enc.WriteBit(value.has_singleDCI_SDM_scheme_Parameters_r16);
    enc.WriteBit(value.has_supportFDM_SchemeA_r16);
    enc.WriteBit(value.has_supportCodeWordSoftCombining_r16);
    enc.WriteBit(value.has_supportTDM_SchemeA_r16);
    enc.WriteBit(value.has_supportInter_slotTDM_r16);
    enc.WriteBit(value.has_lowPAPR_DMRS_PDSCH_r16);
    enc.WriteBit(value.has_lowPAPR_DMRS_PUSCHwithoutPrecoding_r16);
    enc.WriteBit(value.has_lowPAPR_DMRS_PUCCH_r16);
    enc.WriteBit(value.has_lowPAPR_DMRS_PUSCHwithPrecoding_r16);
    enc.WriteBit(value.has_csi_ReportFrameworkExt_r16);
    enc.WriteBit(value.has_codebookParametersAddition_r16);
    enc.WriteBit(value.has_codebookComboParametersAddition_r16);
    enc.WriteBit(value.has_beamCorrespondenceSSB_based_r16);
    enc.WriteBit(value.has_beamCorrespondenceCSI_RS_based_r16);
    enc.WriteBit(value.has_beamSwitchTiming_r16);
    if (value.has_defaultQCL_TwoTCI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.defaultQCL_TwoTCI_r16), 0, 0);
    }
    if (value.has_codebookParametersPerBand_r16) {
        Encode_CodebookParameters_v1610(enc, value.codebookParametersPerBand_r16);
    }
    if (value.has_simul_SpatialRelationUpdatePUCCHResGroup_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simul_SpatialRelationUpdatePUCCHResGroup_r16), 0, 0);
    }
    if (value.has_maxNumberSCellBFR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSCellBFR_r16), 0, 3);
    }
    if (value.has_simultaneousReceptionDiffTypeD_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousReceptionDiffTypeD_r16), 0, 0);
    }
    if (value.has_ssb_csirs_SINR_measurement_r16) {
        Encode_MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16(enc, value.ssb_csirs_SINR_measurement_r16);
    }
    if (value.has_nonGroupSINR_reporting_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nonGroupSINR_reporting_r16), 0, 2);
    }
    if (value.has_groupSINR_reporting_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.groupSINR_reporting_r16), 0, 0);
    }
    if (value.has_multiDCI_multiTRP_Parameters_r16) {
        Encode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16(enc, value.multiDCI_multiTRP_Parameters_r16);
    }
    if (value.has_singleDCI_SDM_scheme_Parameters_r16) {
        Encode_MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16(enc, value.singleDCI_SDM_scheme_Parameters_r16);
    }
    if (value.has_supportFDM_SchemeA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportFDM_SchemeA_r16), 0, 0);
    }
    if (value.has_supportCodeWordSoftCombining_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportCodeWordSoftCombining_r16), 0, 0);
    }
    if (value.has_supportTDM_SchemeA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportTDM_SchemeA_r16), 0, 4);
    }
    if (value.has_supportInter_slotTDM_r16) {
        Encode_MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16(enc, value.supportInter_slotTDM_r16);
    }
    if (value.has_lowPAPR_DMRS_PDSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lowPAPR_DMRS_PDSCH_r16), 0, 0);
    }
    if (value.has_lowPAPR_DMRS_PUSCHwithoutPrecoding_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lowPAPR_DMRS_PUSCHwithoutPrecoding_r16), 0, 0);
    }
    if (value.has_lowPAPR_DMRS_PUCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lowPAPR_DMRS_PUCCH_r16), 0, 0);
    }
    if (value.has_lowPAPR_DMRS_PUSCHwithPrecoding_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lowPAPR_DMRS_PUSCHwithPrecoding_r16), 0, 0);
    }
    if (value.has_csi_ReportFrameworkExt_r16) {
        Encode_CSI_ReportFrameworkExt_r16(enc, value.csi_ReportFrameworkExt_r16);
    }
    if (value.has_codebookParametersAddition_r16) {
        Encode_CodebookParametersAddition_r16(enc, value.codebookParametersAddition_r16);
    }
    if (value.has_codebookComboParametersAddition_r16) {
        Encode_CodebookComboParametersAddition_r16(enc, value.codebookComboParametersAddition_r16);
    }
    if (value.has_beamCorrespondenceSSB_based_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamCorrespondenceSSB_based_r16), 0, 0);
    }
    if (value.has_beamCorrespondenceCSI_RS_based_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamCorrespondenceCSI_RS_based_r16), 0, 0);
    }
    if (value.has_beamSwitchTiming_r16) {
        Encode_MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16(enc, value.beamSwitchTiming_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup2(Decoder& dec, MIMO_ParametersPerBand_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    bool present_17 = false;
    bool present_18 = false;
    bool present_19 = false;
    bool present_20 = false;
    bool present_21 = false;
    bool present_22 = false;
    bool present_23 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (!dec.ReadBit(present_17)) { goto fail; }
    if (!dec.ReadBit(present_18)) { goto fail; }
    if (!dec.ReadBit(present_19)) { goto fail; }
    if (!dec.ReadBit(present_20)) { goto fail; }
    if (!dec.ReadBit(present_21)) { goto fail; }
    if (!dec.ReadBit(present_22)) { goto fail; }
    if (!dec.ReadBit(present_23)) { goto fail; }
    if (present_0) {
        value.defaultQCL_TwoTCI_r16 = (MIMO_ParametersPerBand_ExtGroup2_DefaultQCL_TwoTCI_r16)0;
    }
    if (present_1) {
        if (Decode_CodebookParameters_v1610(dec, value.codebookParametersPerBand_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.simul_SpatialRelationUpdatePUCCHResGroup_r16 = (MIMO_ParametersPerBand_ExtGroup2_Simul_SpatialRelationUpdatePUCCHResGroup_r16)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberSCellBFR_r16 = (MIMO_ParametersPerBand_ExtGroup2_MaxNumberSCellBFR_r16)tmp_value;
    }
    if (present_4) {
        value.simultaneousReceptionDiffTypeD_r16 = (MIMO_ParametersPerBand_ExtGroup2_SimultaneousReceptionDiffTypeD_r16)0;
    }
    if (present_5) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16(dec, value.ssb_csirs_SINR_measurement_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.nonGroupSINR_reporting_r16 = (MIMO_ParametersPerBand_ExtGroup2_NonGroupSINR_reporting_r16)tmp_value;
    }
    if (present_7) {
        value.groupSINR_reporting_r16 = (MIMO_ParametersPerBand_ExtGroup2_GroupSINR_reporting_r16)0;
    }
    if (present_8) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16(dec, value.multiDCI_multiTRP_Parameters_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16(dec, value.singleDCI_SDM_scheme_Parameters_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        value.supportFDM_SchemeA_r16 = (MIMO_ParametersPerBand_ExtGroup2_SupportFDM_SchemeA_r16)0;
    }
    if (present_11) {
        value.supportCodeWordSoftCombining_r16 = (MIMO_ParametersPerBand_ExtGroup2_SupportCodeWordSoftCombining_r16)0;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.supportTDM_SchemeA_r16 = (MIMO_ParametersPerBand_ExtGroup2_SupportTDM_SchemeA_r16)tmp_value;
    }
    if (present_13) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16(dec, value.supportInter_slotTDM_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
        value.lowPAPR_DMRS_PDSCH_r16 = (MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PDSCH_r16)0;
    }
    if (present_15) {
        value.lowPAPR_DMRS_PUSCHwithoutPrecoding_r16 = (MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithoutPrecoding_r16)0;
    }
    if (present_16) {
        value.lowPAPR_DMRS_PUCCH_r16 = (MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUCCH_r16)0;
    }
    if (present_17) {
        value.lowPAPR_DMRS_PUSCHwithPrecoding_r16 = (MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithPrecoding_r16)0;
    }
    if (present_18) {
        if (Decode_CSI_ReportFrameworkExt_r16(dec, value.csi_ReportFrameworkExt_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_19) {
        if (Decode_CodebookParametersAddition_r16(dec, value.codebookParametersAddition_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_20) {
        if (Decode_CodebookComboParametersAddition_r16(dec, value.codebookComboParametersAddition_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_21) {
        value.beamCorrespondenceSSB_based_r16 = (MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceSSB_based_r16)0;
    }
    if (present_22) {
        value.beamCorrespondenceCSI_RS_based_r16 = (MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceCSI_RS_based_r16)0;
    }
    if (present_23) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16(dec, value.beamSwitchTiming_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup2(MIMO_ParametersPerBand_ExtGroup2& value)
{
    if (value.has_defaultQCL_TwoTCI_r16) {
    }
    if (value.has_codebookParametersPerBand_r16) {
        Free_CodebookParameters_v1610(value.codebookParametersPerBand_r16);
    }
    if (value.has_simul_SpatialRelationUpdatePUCCHResGroup_r16) {
    }
    if (value.has_maxNumberSCellBFR_r16) {
    }
    if (value.has_simultaneousReceptionDiffTypeD_r16) {
    }
    if (value.has_ssb_csirs_SINR_measurement_r16) {
        Free_MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16(value.ssb_csirs_SINR_measurement_r16);
    }
    if (value.has_nonGroupSINR_reporting_r16) {
    }
    if (value.has_groupSINR_reporting_r16) {
    }
    if (value.has_multiDCI_multiTRP_Parameters_r16) {
        Free_MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16(value.multiDCI_multiTRP_Parameters_r16);
    }
    if (value.has_singleDCI_SDM_scheme_Parameters_r16) {
        Free_MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16(value.singleDCI_SDM_scheme_Parameters_r16);
    }
    if (value.has_supportFDM_SchemeA_r16) {
    }
    if (value.has_supportCodeWordSoftCombining_r16) {
    }
    if (value.has_supportTDM_SchemeA_r16) {
    }
    if (value.has_supportInter_slotTDM_r16) {
        Free_MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16(value.supportInter_slotTDM_r16);
    }
    if (value.has_lowPAPR_DMRS_PDSCH_r16) {
    }
    if (value.has_lowPAPR_DMRS_PUSCHwithoutPrecoding_r16) {
    }
    if (value.has_lowPAPR_DMRS_PUCCH_r16) {
    }
    if (value.has_lowPAPR_DMRS_PUSCHwithPrecoding_r16) {
    }
    if (value.has_csi_ReportFrameworkExt_r16) {
        Free_CSI_ReportFrameworkExt_r16(value.csi_ReportFrameworkExt_r16);
    }
    if (value.has_codebookParametersAddition_r16) {
        Free_CodebookParametersAddition_r16(value.codebookParametersAddition_r16);
    }
    if (value.has_codebookComboParametersAddition_r16) {
        Free_CodebookComboParametersAddition_r16(value.codebookComboParametersAddition_r16);
    }
    if (value.has_beamCorrespondenceSSB_based_r16) {
    }
    if (value.has_beamCorrespondenceCSI_RS_based_r16) {
    }
    if (value.has_beamSwitchTiming_r16) {
        Free_MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16(value.beamSwitchTiming_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_supportReportFormat1_2OFDM_syms_r16);
    enc.WriteBit(value.has_supportReportFormat4_14OFDM_syms_r16);
    if (value.has_supportReportFormat1_2OFDM_syms_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportReportFormat1_2OFDM_syms_r16), 0, 0);
    }
    if (value.has_supportReportFormat4_14OFDM_syms_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportReportFormat4_14OFDM_syms_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16(Decoder& dec, MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.supportReportFormat1_2OFDM_syms_r16 = (MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat1_2OFDM_syms_r16)0;
    }
    if (present_1) {
        value.supportReportFormat4_14OFDM_syms_r16 = (MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat4_14OFDM_syms_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16(MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16& value)
{
    if (value.has_supportReportFormat1_2OFDM_syms_r16) {
    }
    if (value.has_supportReportFormat4_14OFDM_syms_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup3(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_semi_PersistentL1_SINR_Report_PUCCH_r16);
    enc.WriteBit(value.has_semi_PersistentL1_SINR_Report_PUSCH_r16);
    if (value.has_semi_PersistentL1_SINR_Report_PUCCH_r16) {
        Encode_MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16(enc, value.semi_PersistentL1_SINR_Report_PUCCH_r16);
    }
    if (value.has_semi_PersistentL1_SINR_Report_PUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.semi_PersistentL1_SINR_Report_PUSCH_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup3(Decoder& dec, MIMO_ParametersPerBand_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16(dec, value.semi_PersistentL1_SINR_Report_PUCCH_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.semi_PersistentL1_SINR_Report_PUSCH_r16 = (MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUSCH_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup3(MIMO_ParametersPerBand_ExtGroup3& value)
{
    if (value.has_semi_PersistentL1_SINR_Report_PUCCH_r16) {
        Free_MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16(value.semi_PersistentL1_SINR_Report_PUCCH_r16);
    }
    if (value.has_semi_PersistentL1_SINR_Report_PUSCH_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfiguredSpatialRelations_v1640), 0, 7);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640(Decoder& dec, MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumberConfiguredSpatialRelations_v1640 = (MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640(MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup4(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_spatialRelations_v1640);
    enc.WriteBit(value.has_support64CandidateBeamRS_BFR_r16);
    if (value.has_spatialRelations_v1640) {
        Encode_MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640(enc, value.spatialRelations_v1640);
    }
    if (value.has_support64CandidateBeamRS_BFR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.support64CandidateBeamRS_BFR_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup4(Decoder& dec, MIMO_ParametersPerBand_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640(dec, value.spatialRelations_v1640) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.support64CandidateBeamRS_BFR_r16 = (MIMO_ParametersPerBand_ExtGroup4_Support64CandidateBeamRS_BFR_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup4(MIMO_ParametersPerBand_ExtGroup4& value)
{
    if (value.has_spatialRelations_v1640) {
        Free_MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640(value.spatialRelations_v1640);
    }
    if (value.has_support64CandidateBeamRS_BFR_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup5(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_maxMIMO_LayersForMulti_DCI_mTRP_r16);
    if (value.has_maxMIMO_LayersForMulti_DCI_mTRP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_LayersForMulti_DCI_mTRP_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup5(Decoder& dec, MIMO_ParametersPerBand_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.maxMIMO_LayersForMulti_DCI_mTRP_r16 = (MIMO_ParametersPerBand_ExtGroup5_MaxMIMO_LayersForMulti_DCI_mTRP_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup5(MIMO_ParametersPerBand_ExtGroup5& value)
{
    if (value.has_maxMIMO_LayersForMulti_DCI_mTRP_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup6(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedSINR_meas_v1670);
    if (value.has_supportedSINR_meas_v1670) {
        enc.WriteFixedBitString(value.supportedSINR_meas_v1670.bytes, value.supportedSINR_meas_v1670.bitLength, 4, 4);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup6(Decoder& dec, MIMO_ParametersPerBand_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.supportedSINR_meas_v1670.bytes = string_bytes;
        value.supportedSINR_meas_v1670.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup6(MIMO_ParametersPerBand_ExtGroup6& value)
{
    if (value.has_supportedSINR_meas_v1670) {
        std::free(value.supportedSINR_meas_v1670.bytes);
        value.supportedSINR_meas_v1670.bytes = nullptr;
        value.supportedSINR_meas_v1670.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxBFD_RS_resourcesPerSetPerBWP_r17), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxBFR_r17), 1, 9);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxBFD_RS_resourcesAcrossSetsPerBWP_r17), 0, 2);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.maxBFD_RS_resourcesPerSetPerBWP_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesPerSetPerBWP_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.maxBFR_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxBFD_RS_resourcesAcrossSetsPerBWP_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesAcrossSetsPerBWP_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17(MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxConfiguredJointTCI_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxActivatedTCIAcrossCC_r17), 0, 4);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxConfiguredJointTCI_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxActivatedTCIAcrossCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_minBeamApplicationTime_r17);
    if (value.has_minBeamApplicationTime_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.minBeamApplicationTime_r17), 0, 13);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumMAC_CE_PerCC), 0, 6);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.minBeamApplicationTime_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumMAC_CE_PerCC = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17& value)
{
    if (value.has_minBeamApplicationTime_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.additionalMAC_CE_PerCC_r17), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.additionalMAC_CE_AcrossCC_r17), 0, 3);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.additionalMAC_CE_PerCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_PerCC_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.additionalMAC_CE_AcrossCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_AcrossCC_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxConfiguredDL_TCI_r17), 0, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxConfiguredUL_TCI_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxActivatedDL_TCIAcrossCC_r17), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxActivatedUL_TCIAcrossCC_r17), 0, 4);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.maxConfiguredDL_TCI_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxConfiguredUL_TCI_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxActivatedDL_TCIAcrossCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxActivatedUL_TCIAcrossCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.minBeamApplicationTime_r17), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxActivatedDL_TCIPerCC_r17), 2, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxActivatedUL_TCIPerCC_r17), 2, 8);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.minBeamApplicationTime_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxActivatedDL_TCIPerCC_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxActivatedUL_TCIPerCC_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumListDL_TCI_r17);
    enc.WriteBit(value.has_maxNumListUL_TCI_r17);
    if (value.has_maxNumListDL_TCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumListDL_TCI_r17), 0, 3);
    }
    if (value.has_maxNumListUL_TCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumListUL_TCI_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumListDL_TCI_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListDL_TCI_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumListUL_TCI_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListUL_TCI_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17& value)
{
    if (value.has_maxNumListDL_TCI_r17) {
    }
    if (value.has_maxNumListUL_TCI_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.k_DL_PerCC_r17), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.k_UL_PerCC_r17), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.k_DL_AcrossCC_r17), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.k_UL_AcrossCC_r17), 0, 3);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.k_DL_PerCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_PerCC_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.k_UL_PerCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_PerCC_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.k_DL_AcrossCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_AcrossCC_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.k_UL_AcrossCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_AcrossCC_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumAdditionalPCI_L1_RSRP_r17), 1, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumSSB_ResourceL1_RSRP_AcrossCC_r17), 0, 3);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.maxNumAdditionalPCI_L1_RSRP_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumSSB_ResourceL1_RSRP_AcrossCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17_MaxNumSSB_ResourceL1_RSRP_AcrossCC_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17(MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumP_MPR_RI_pairs_r17), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumConfRS_r17), 0, 9);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumP_MPR_RI_pairs_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumConfRS_r17 = (MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17(MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_capVal1_r17);
    enc.WriteBit(value.has_capVal2_r17);
    enc.WriteBit(value.has_capVal3_r17);
    enc.WriteBit(value.has_capVal4_r17);
    if (value.has_capVal1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.capVal1_r17), 0, 2);
    }
    if (value.has_capVal2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.capVal2_r17), 0, 2);
    }
    if (value.has_capVal3_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.capVal3_r17), 0, 2);
    }
    if (value.has_capVal4_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.capVal4_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.capVal1_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal1_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.capVal2_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal2_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.capVal3_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal3_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.capVal4_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal4_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17(MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17& value)
{
    if (value.has_capVal1_r17) {
    }
    if (value.has_capVal2_r17) {
    }
    if (value.has_capVal3_r17) {
    }
    if (value.has_capVal4_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumPeriodicSRS_r17), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumAperiodicSRS_r17), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumSP_SRS_r17), 0, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.numSRS_ResourcePerCC_r17), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.numSRS_ResourceNonCodebook_r17), 1, 2);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumPeriodicSRS_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumAperiodicSRS_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.maxNumSP_SRS_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.numSRS_ResourcePerCC_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.numSRS_ResourceNonCodebook_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17(MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumAdditionalPCI_Case1_r17), 1, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumAdditionalPCI_Case2_r17), 0, 7);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.maxNumAdditionalPCI_Case1_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumAdditionalPCI_Case2_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17(MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumBeamGroups_r17), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumRS_WithinSlot_r17), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumRS_AcrossSlot_r17), 0, 4);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumBeamGroups_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumRS_WithinSlot_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumRS_AcrossSlot_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17(MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumNZP_CSI_RS_r17), 2, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.cSI_Report_mode_r17), 0, 2);
enc.WriteConstrainedLength(value.supportedComboAcrossCCs_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedComboAcrossCCs_r17_count; ++i) {
    Encode_CSI_MultiTRP_SupportedCombinations_r17(enc, value.supportedComboAcrossCCs_r17_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.codebookModeNCJT_r17), 0, 1);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxNumNZP_CSI_RS_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.cSI_Report_mode_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CSI_Report_mode_r17)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedComboAcrossCCs_r17_count)) { goto fail; }
if (value.supportedComboAcrossCCs_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedComboAcrossCCs_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedComboAcrossCCs_r17_count > 0u) {
    value.supportedComboAcrossCCs_r17_items = (CSI_MultiTRP_SupportedCombinations_r17*)std::malloc((std::size_t)value.supportedComboAcrossCCs_r17_count * sizeof(CSI_MultiTRP_SupportedCombinations_r17));
    if (value.supportedComboAcrossCCs_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedComboAcrossCCs_r17_items, 0, (std::size_t)value.supportedComboAcrossCCs_r17_count * sizeof(CSI_MultiTRP_SupportedCombinations_r17));
}
for (std::uint32_t i = 0; i < value.supportedComboAcrossCCs_r17_count; ++i) {
    if (Decode_CSI_MultiTRP_SupportedCombinations_r17(dec, value.supportedComboAcrossCCs_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.codebookModeNCJT_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CodebookModeNCJT_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17(MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17& value)
{
    if (value.supportedComboAcrossCCs_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedComboAcrossCCs_r17_count; ++i) {
            Free_CSI_MultiTRP_SupportedCombinations_r17(value.supportedComboAcrossCCs_r17_items[i]);
        }
        std::free(value.supportedComboAcrossCCs_r17_items);
        value.supportedComboAcrossCCs_r17_items = nullptr;
    }
    value.supportedComboAcrossCCs_r17_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_480kHz);
    enc.WriteBit(value.has_scs_960kHz);
    if (value.has_scs_480kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_480kHz), 0, 4);
    }
    if (value.has_scs_960kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_960kHz), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.scs_480kHz = (MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_480kHz)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.scs_960kHz = (MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_960kHz)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710(MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710& value)
{
    if (value.has_scs_480kHz) {
    }
    if (value.has_scs_960kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_480kHz_r17);
    enc.WriteBit(value.has_scs_960kHz_r17);
    if (value.has_scs_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_480kHz_r17), 0, 1);
    }
    if (value.has_scs_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_960kHz_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_480kHz_r17 = (MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_480kHz_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_960kHz_r17 = (MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_960kHz_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17(MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17& value)
{
    if (value.has_scs_480kHz_r17) {
    }
    if (value.has_scs_960kHz_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_480kHz_r17);
    enc.WriteBit(value.has_scs_960kHz_r17);
    if (value.has_scs_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_480kHz_r17), 0, 2);
    }
    if (value.has_scs_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_960kHz_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_480kHz_r17 = (MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_480kHz_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_960kHz_r17 = (MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_960kHz_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710(MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710& value)
{
    if (value.has_scs_480kHz_r17) {
    }
    if (value.has_scs_960kHz_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_480kHz_r17);
    enc.WriteBit(value.has_scs_960kHz_r17);
    if (value.has_scs_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_480kHz_r17), 0, 2);
    }
    if (value.has_scs_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_960kHz_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_480kHz_r17 = (MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_480kHz_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_960kHz_r17 = (MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_960kHz_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710(MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710& value)
{
    if (value.has_scs_480kHz_r17) {
    }
    if (value.has_scs_960kHz_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup7(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup7& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_increasedRepetition_r17);
    enc.WriteBit(value.has_srs_partialFrequencySounding_r17);
    enc.WriteBit(value.has_srs_startRB_locationHoppingPartial_r17);
    enc.WriteBit(value.has_srs_combEight_r17);
    enc.WriteBit(value.has_codebookParametersfetype2_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_twoCSI_RS_r17);
    enc.WriteBit(value.has_mTRP_PUCCH_InterSlot_r17);
    enc.WriteBit(value.has_mTRP_PUCCH_CyclicMapping_r17);
    enc.WriteBit(value.has_mTRP_PUCCH_SecondTPC_r17);
    enc.WriteBit(value.has_mTRP_BFR_twoBFD_RS_Set_r17);
    enc.WriteBit(value.has_mTRP_BFR_PUCCH_SR_perCG_r17);
    enc.WriteBit(value.has_mTRP_BFR_association_PUCCH_SR_r17);
    enc.WriteBit(value.has_sfn_SimulTwoTCI_AcrossMultiCC_r17);
    enc.WriteBit(value.has_sfn_DefaultDL_BeamSetup_r17);
    enc.WriteBit(value.has_sfn_DefaultUL_BeamSetup_r17);
    enc.WriteBit(value.has_srs_TriggeringOffset_r17);
    enc.WriteBit(value.has_srs_TriggeringDCI_r17);
    enc.WriteBit(value.has_codebookComboParameterMixedType_r17);
    enc.WriteBit(value.has_unifiedJointTCI_r17);
    enc.WriteBit(value.has_unifiedJointTCI_multiMAC_CE_r17);
    enc.WriteBit(value.has_unifiedJointTCI_perBWP_CA_r17);
    enc.WriteBit(value.has_unifiedJointTCI_ListSharingCA_r17);
    enc.WriteBit(value.has_unifiedJointTCI_commonMultiCC_r17);
    enc.WriteBit(value.has_unifiedJointTCI_BeamAlignDLRS_r17);
    enc.WriteBit(value.has_unifiedJointTCI_PC_association_r17);
    enc.WriteBit(value.has_unifiedJointTCI_Legacy_r17);
    enc.WriteBit(value.has_unifiedJointTCI_Legacy_SRS_r17);
    enc.WriteBit(value.has_unifiedJointTCI_Legacy_CORESET0_r17);
    enc.WriteBit(value.has_unifiedJointTCI_SCellBFR_r17);
    enc.WriteBit(value.has_unifiedJointTCI_InterCell_r17);
    enc.WriteBit(value.has_unifiedSeparateTCI_r17);
    enc.WriteBit(value.has_unifiedSeparateTCI_multiMAC_CE_r17);
    enc.WriteBit(value.has_unifiedSeparateTCI_perBWP_CA_r17);
    enc.WriteBit(value.has_unifiedSeparateTCI_ListSharingCA_r17);
    enc.WriteBit(value.has_unifiedSeparateTCI_commonMultiCC_r17);
    enc.WriteBit(value.has_unifiedSeparateTCI_InterCell_r17);
    enc.WriteBit(value.has_unifiedJointTCI_mTRP_InterCell_BM_r17);
    enc.WriteBit(value.has_mpe_Mitigation_r17);
    enc.WriteBit(value.has_srs_PortReport_r17);
    enc.WriteBit(value.has_mTRP_PDCCH_individual_r17);
    enc.WriteBit(value.has_mTRP_PDCCH_anySpan_3Symbols_r17);
    enc.WriteBit(value.has_mTRP_PDCCH_TwoQCL_TypeD_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_CSI_RS_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_cyclicMapping_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_secondTPC_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_twoPHR_Reporting_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_A_CSI_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_SP_CSI_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_CG_r17);
    enc.WriteBit(value.has_mTRP_PUCCH_MAC_CE_r17);
    enc.WriteBit(value.has_mTRP_PUCCH_maxNum_PC_FR1_r17);
    enc.WriteBit(value.has_mTRP_inter_Cell_r17);
    enc.WriteBit(value.has_mTRP_GroupBasedL1_RSRP_r17);
    enc.WriteBit(value.has_mTRP_BFD_RS_MAC_CE_r17);
    enc.WriteBit(value.has_mTRP_CSI_EnhancementPerBand_r17);
    enc.WriteBit(value.has_codebookComboParameterMultiTRP_r17);
    enc.WriteBit(value.has_mTRP_CSI_additionalCSI_r17);
    enc.WriteBit(value.has_mTRP_CSI_N_Max2_r17);
    enc.WriteBit(value.has_mTRP_CSI_CMR_r17);
    enc.WriteBit(value.has_srs_partialFreqSounding_r17);
    enc.WriteBit(value.has_beamSwitchTiming_v1710);
    enc.WriteBit(value.has_beamSwitchTiming_r17);
    enc.WriteBit(value.has_beamReportTiming_v1710);
    enc.WriteBit(value.has_maxNumberRxTxBeamSwitchDL_v1710);
    if (value.has_srs_increasedRepetition_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_increasedRepetition_r17), 0, 0);
    }
    if (value.has_srs_partialFrequencySounding_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_partialFrequencySounding_r17), 0, 0);
    }
    if (value.has_srs_startRB_locationHoppingPartial_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_startRB_locationHoppingPartial_r17), 0, 0);
    }
    if (value.has_srs_combEight_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_combEight_r17), 0, 0);
    }
    if (value.has_codebookParametersfetype2_r17) {
        Encode_CodebookParametersfetype2_r17(enc, value.codebookParametersfetype2_r17);
    }
    if (value.has_mTRP_PUSCH_twoCSI_RS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_twoCSI_RS_r17), 0, 0);
    }
    if (value.has_mTRP_PUCCH_InterSlot_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUCCH_InterSlot_r17), 0, 2);
    }
    if (value.has_mTRP_PUCCH_CyclicMapping_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUCCH_CyclicMapping_r17), 0, 0);
    }
    if (value.has_mTRP_PUCCH_SecondTPC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUCCH_SecondTPC_r17), 0, 0);
    }
    if (value.has_mTRP_BFR_twoBFD_RS_Set_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17(enc, value.mTRP_BFR_twoBFD_RS_Set_r17);
    }
    if (value.has_mTRP_BFR_PUCCH_SR_perCG_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_BFR_PUCCH_SR_perCG_r17), 0, 1);
    }
    if (value.has_mTRP_BFR_association_PUCCH_SR_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_BFR_association_PUCCH_SR_r17), 0, 0);
    }
    if (value.has_sfn_SimulTwoTCI_AcrossMultiCC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_SimulTwoTCI_AcrossMultiCC_r17), 0, 0);
    }
    if (value.has_sfn_DefaultDL_BeamSetup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_DefaultDL_BeamSetup_r17), 0, 0);
    }
    if (value.has_sfn_DefaultUL_BeamSetup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_DefaultUL_BeamSetup_r17), 0, 0);
    }
    if (value.has_srs_TriggeringOffset_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_TriggeringOffset_r17), 0, 2);
    }
    if (value.has_srs_TriggeringDCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_TriggeringDCI_r17), 0, 0);
    }
    if (value.has_codebookComboParameterMixedType_r17) {
        Encode_CodebookComboParameterMixedType_r17(enc, value.codebookComboParameterMixedType_r17);
    }
    if (value.has_unifiedJointTCI_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17(enc, value.unifiedJointTCI_r17);
    }
    if (value.has_unifiedJointTCI_multiMAC_CE_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17(enc, value.unifiedJointTCI_multiMAC_CE_r17);
    }
    if (value.has_unifiedJointTCI_perBWP_CA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedJointTCI_perBWP_CA_r17), 0, 0);
    }
    if (value.has_unifiedJointTCI_ListSharingCA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedJointTCI_ListSharingCA_r17), 0, 3);
    }
    if (value.has_unifiedJointTCI_commonMultiCC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedJointTCI_commonMultiCC_r17), 0, 0);
    }
    if (value.has_unifiedJointTCI_BeamAlignDLRS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedJointTCI_BeamAlignDLRS_r17), 0, 0);
    }
    if (value.has_unifiedJointTCI_PC_association_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedJointTCI_PC_association_r17), 0, 0);
    }
    if (value.has_unifiedJointTCI_Legacy_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedJointTCI_Legacy_r17), 0, 0);
    }
    if (value.has_unifiedJointTCI_Legacy_SRS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedJointTCI_Legacy_SRS_r17), 0, 0);
    }
    if (value.has_unifiedJointTCI_Legacy_CORESET0_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedJointTCI_Legacy_CORESET0_r17), 0, 0);
    }
    if (value.has_unifiedJointTCI_SCellBFR_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedJointTCI_SCellBFR_r17), 0, 0);
    }
    if (value.has_unifiedJointTCI_InterCell_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17(enc, value.unifiedJointTCI_InterCell_r17);
    }
    if (value.has_unifiedSeparateTCI_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17(enc, value.unifiedSeparateTCI_r17);
    }
    if (value.has_unifiedSeparateTCI_multiMAC_CE_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17(enc, value.unifiedSeparateTCI_multiMAC_CE_r17);
    }
    if (value.has_unifiedSeparateTCI_perBWP_CA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedSeparateTCI_perBWP_CA_r17), 0, 0);
    }
    if (value.has_unifiedSeparateTCI_ListSharingCA_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17(enc, value.unifiedSeparateTCI_ListSharingCA_r17);
    }
    if (value.has_unifiedSeparateTCI_commonMultiCC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedSeparateTCI_commonMultiCC_r17), 0, 0);
    }
    if (value.has_unifiedSeparateTCI_InterCell_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17(enc, value.unifiedSeparateTCI_InterCell_r17);
    }
    if (value.has_unifiedJointTCI_mTRP_InterCell_BM_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17(enc, value.unifiedJointTCI_mTRP_InterCell_BM_r17);
    }
    if (value.has_mpe_Mitigation_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17(enc, value.mpe_Mitigation_r17);
    }
    if (value.has_srs_PortReport_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17(enc, value.srs_PortReport_r17);
    }
    if (value.has_mTRP_PDCCH_individual_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PDCCH_individual_r17), 0, 0);
    }
    if (value.has_mTRP_PDCCH_anySpan_3Symbols_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PDCCH_anySpan_3Symbols_r17), 0, 0);
    }
    if (value.has_mTRP_PDCCH_TwoQCL_TypeD_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PDCCH_TwoQCL_TypeD_r17), 0, 0);
    }
    if (value.has_mTRP_PUSCH_CSI_RS_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17(enc, value.mTRP_PUSCH_CSI_RS_r17);
    }
    if (value.has_mTRP_PUSCH_cyclicMapping_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_cyclicMapping_r17), 0, 2);
    }
    if (value.has_mTRP_PUSCH_secondTPC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_secondTPC_r17), 0, 0);
    }
    if (value.has_mTRP_PUSCH_twoPHR_Reporting_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_twoPHR_Reporting_r17), 0, 0);
    }
    if (value.has_mTRP_PUSCH_A_CSI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_A_CSI_r17), 0, 0);
    }
    if (value.has_mTRP_PUSCH_SP_CSI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_SP_CSI_r17), 0, 0);
    }
    if (value.has_mTRP_PUSCH_CG_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_CG_r17), 0, 0);
    }
    if (value.has_mTRP_PUCCH_MAC_CE_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUCCH_MAC_CE_r17), 0, 0);
    }
    if (value.has_mTRP_PUCCH_maxNum_PC_FR1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUCCH_maxNum_PC_FR1_r17), 3, 8);
    }
    if (value.has_mTRP_inter_Cell_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17(enc, value.mTRP_inter_Cell_r17);
    }
    if (value.has_mTRP_GroupBasedL1_RSRP_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17(enc, value.mTRP_GroupBasedL1_RSRP_r17);
    }
    if (value.has_mTRP_BFD_RS_MAC_CE_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_BFD_RS_MAC_CE_r17), 0, 6);
    }
    if (value.has_mTRP_CSI_EnhancementPerBand_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17(enc, value.mTRP_CSI_EnhancementPerBand_r17);
    }
    if (value.has_codebookComboParameterMultiTRP_r17) {
        Encode_CodebookComboParameterMultiTRP_r17(enc, value.codebookComboParameterMultiTRP_r17);
    }
    if (value.has_mTRP_CSI_additionalCSI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_CSI_additionalCSI_r17), 0, 1);
    }
    if (value.has_mTRP_CSI_N_Max2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_CSI_N_Max2_r17), 0, 0);
    }
    if (value.has_mTRP_CSI_CMR_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_CSI_CMR_r17), 0, 0);
    }
    if (value.has_srs_partialFreqSounding_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_partialFreqSounding_r17), 0, 0);
    }
    if (value.has_beamSwitchTiming_v1710) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710(enc, value.beamSwitchTiming_v1710);
    }
    if (value.has_beamSwitchTiming_r17) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17(enc, value.beamSwitchTiming_r17);
    }
    if (value.has_beamReportTiming_v1710) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710(enc, value.beamReportTiming_v1710);
    }
    if (value.has_maxNumberRxTxBeamSwitchDL_v1710) {
        Encode_MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710(enc, value.maxNumberRxTxBeamSwitchDL_v1710);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup7(Decoder& dec, MIMO_ParametersPerBand_ExtGroup7& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    bool present_17 = false;
    bool present_18 = false;
    bool present_19 = false;
    bool present_20 = false;
    bool present_21 = false;
    bool present_22 = false;
    bool present_23 = false;
    bool present_24 = false;
    bool present_25 = false;
    bool present_26 = false;
    bool present_27 = false;
    bool present_28 = false;
    bool present_29 = false;
    bool present_30 = false;
    bool present_31 = false;
    bool present_32 = false;
    bool present_33 = false;
    bool present_34 = false;
    bool present_35 = false;
    bool present_36 = false;
    bool present_37 = false;
    bool present_38 = false;
    bool present_39 = false;
    bool present_40 = false;
    bool present_41 = false;
    bool present_42 = false;
    bool present_43 = false;
    bool present_44 = false;
    bool present_45 = false;
    bool present_46 = false;
    bool present_47 = false;
    bool present_48 = false;
    bool present_49 = false;
    bool present_50 = false;
    bool present_51 = false;
    bool present_52 = false;
    bool present_53 = false;
    bool present_54 = false;
    bool present_55 = false;
    bool present_56 = false;
    bool present_57 = false;
    bool present_58 = false;
    bool present_59 = false;
    bool present_60 = false;
    bool present_61 = false;
    bool present_62 = false;
    bool present_63 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (!dec.ReadBit(present_17)) { goto fail; }
    if (!dec.ReadBit(present_18)) { goto fail; }
    if (!dec.ReadBit(present_19)) { goto fail; }
    if (!dec.ReadBit(present_20)) { goto fail; }
    if (!dec.ReadBit(present_21)) { goto fail; }
    if (!dec.ReadBit(present_22)) { goto fail; }
    if (!dec.ReadBit(present_23)) { goto fail; }
    if (!dec.ReadBit(present_24)) { goto fail; }
    if (!dec.ReadBit(present_25)) { goto fail; }
    if (!dec.ReadBit(present_26)) { goto fail; }
    if (!dec.ReadBit(present_27)) { goto fail; }
    if (!dec.ReadBit(present_28)) { goto fail; }
    if (!dec.ReadBit(present_29)) { goto fail; }
    if (!dec.ReadBit(present_30)) { goto fail; }
    if (!dec.ReadBit(present_31)) { goto fail; }
    if (!dec.ReadBit(present_32)) { goto fail; }
    if (!dec.ReadBit(present_33)) { goto fail; }
    if (!dec.ReadBit(present_34)) { goto fail; }
    if (!dec.ReadBit(present_35)) { goto fail; }
    if (!dec.ReadBit(present_36)) { goto fail; }
    if (!dec.ReadBit(present_37)) { goto fail; }
    if (!dec.ReadBit(present_38)) { goto fail; }
    if (!dec.ReadBit(present_39)) { goto fail; }
    if (!dec.ReadBit(present_40)) { goto fail; }
    if (!dec.ReadBit(present_41)) { goto fail; }
    if (!dec.ReadBit(present_42)) { goto fail; }
    if (!dec.ReadBit(present_43)) { goto fail; }
    if (!dec.ReadBit(present_44)) { goto fail; }
    if (!dec.ReadBit(present_45)) { goto fail; }
    if (!dec.ReadBit(present_46)) { goto fail; }
    if (!dec.ReadBit(present_47)) { goto fail; }
    if (!dec.ReadBit(present_48)) { goto fail; }
    if (!dec.ReadBit(present_49)) { goto fail; }
    if (!dec.ReadBit(present_50)) { goto fail; }
    if (!dec.ReadBit(present_51)) { goto fail; }
    if (!dec.ReadBit(present_52)) { goto fail; }
    if (!dec.ReadBit(present_53)) { goto fail; }
    if (!dec.ReadBit(present_54)) { goto fail; }
    if (!dec.ReadBit(present_55)) { goto fail; }
    if (!dec.ReadBit(present_56)) { goto fail; }
    if (!dec.ReadBit(present_57)) { goto fail; }
    if (!dec.ReadBit(present_58)) { goto fail; }
    if (!dec.ReadBit(present_59)) { goto fail; }
    if (!dec.ReadBit(present_60)) { goto fail; }
    if (!dec.ReadBit(present_61)) { goto fail; }
    if (!dec.ReadBit(present_62)) { goto fail; }
    if (!dec.ReadBit(present_63)) { goto fail; }
    if (present_0) {
        value.srs_increasedRepetition_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_increasedRepetition_r17)0;
    }
    if (present_1) {
        value.srs_partialFrequencySounding_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_partialFrequencySounding_r17)0;
    }
    if (present_2) {
        value.srs_startRB_locationHoppingPartial_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_startRB_locationHoppingPartial_r17)0;
    }
    if (present_3) {
        value.srs_combEight_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_combEight_r17)0;
    }
    if (present_4) {
        if (Decode_CodebookParametersfetype2_r17(dec, value.codebookParametersfetype2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        value.mTRP_PUSCH_twoCSI_RS_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoCSI_RS_r17)0;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.mTRP_PUCCH_InterSlot_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_InterSlot_r17)tmp_value;
    }
    if (present_7) {
        value.mTRP_PUCCH_CyclicMapping_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_CyclicMapping_r17)0;
    }
    if (present_8) {
        value.mTRP_PUCCH_SecondTPC_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_SecondTPC_r17)0;
    }
    if (present_9) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17(dec, value.mTRP_BFR_twoBFD_RS_Set_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mTRP_BFR_PUCCH_SR_perCG_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_PUCCH_SR_perCG_r17)tmp_value;
    }
    if (present_11) {
        value.mTRP_BFR_association_PUCCH_SR_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_association_PUCCH_SR_r17)0;
    }
    if (present_12) {
        value.sfn_SimulTwoTCI_AcrossMultiCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_Sfn_SimulTwoTCI_AcrossMultiCC_r17)0;
    }
    if (present_13) {
        value.sfn_DefaultDL_BeamSetup_r17 = (MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultDL_BeamSetup_r17)0;
    }
    if (present_14) {
        value.sfn_DefaultUL_BeamSetup_r17 = (MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultUL_BeamSetup_r17)0;
    }
    if (present_15) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.srs_TriggeringOffset_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringOffset_r17)tmp_value;
    }
    if (present_16) {
        value.srs_TriggeringDCI_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringDCI_r17)0;
    }
    if (present_17) {
        if (Decode_CodebookComboParameterMixedType_r17(dec, value.codebookComboParameterMixedType_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_18) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17(dec, value.unifiedJointTCI_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_19) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17(dec, value.unifiedJointTCI_multiMAC_CE_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_20) {
        value.unifiedJointTCI_perBWP_CA_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_perBWP_CA_r17)0;
    }
    if (present_21) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.unifiedJointTCI_ListSharingCA_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_ListSharingCA_r17)tmp_value;
    }
    if (present_22) {
        value.unifiedJointTCI_commonMultiCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_commonMultiCC_r17)0;
    }
    if (present_23) {
        value.unifiedJointTCI_BeamAlignDLRS_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_BeamAlignDLRS_r17)0;
    }
    if (present_24) {
        value.unifiedJointTCI_PC_association_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_PC_association_r17)0;
    }
    if (present_25) {
        value.unifiedJointTCI_Legacy_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_r17)0;
    }
    if (present_26) {
        value.unifiedJointTCI_Legacy_SRS_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_SRS_r17)0;
    }
    if (present_27) {
        value.unifiedJointTCI_Legacy_CORESET0_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_CORESET0_r17)0;
    }
    if (present_28) {
        value.unifiedJointTCI_SCellBFR_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_SCellBFR_r17)0;
    }
    if (present_29) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17(dec, value.unifiedJointTCI_InterCell_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_30) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17(dec, value.unifiedSeparateTCI_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_31) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17(dec, value.unifiedSeparateTCI_multiMAC_CE_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_32) {
        value.unifiedSeparateTCI_perBWP_CA_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_perBWP_CA_r17)0;
    }
    if (present_33) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17(dec, value.unifiedSeparateTCI_ListSharingCA_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_34) {
        value.unifiedSeparateTCI_commonMultiCC_r17 = (MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_commonMultiCC_r17)0;
    }
    if (present_35) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17(dec, value.unifiedSeparateTCI_InterCell_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_36) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17(dec, value.unifiedJointTCI_mTRP_InterCell_BM_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_37) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17(dec, value.mpe_Mitigation_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_38) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17(dec, value.srs_PortReport_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_39) {
        value.mTRP_PDCCH_individual_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_individual_r17)0;
    }
    if (present_40) {
        value.mTRP_PDCCH_anySpan_3Symbols_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_anySpan_3Symbols_r17)0;
    }
    if (present_41) {
        value.mTRP_PDCCH_TwoQCL_TypeD_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_TwoQCL_TypeD_r17)0;
    }
    if (present_42) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17(dec, value.mTRP_PUSCH_CSI_RS_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_43) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.mTRP_PUSCH_cyclicMapping_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_cyclicMapping_r17)tmp_value;
    }
    if (present_44) {
        value.mTRP_PUSCH_secondTPC_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_secondTPC_r17)0;
    }
    if (present_45) {
        value.mTRP_PUSCH_twoPHR_Reporting_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoPHR_Reporting_r17)0;
    }
    if (present_46) {
        value.mTRP_PUSCH_A_CSI_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_A_CSI_r17)0;
    }
    if (present_47) {
        value.mTRP_PUSCH_SP_CSI_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_SP_CSI_r17)0;
    }
    if (present_48) {
        value.mTRP_PUSCH_CG_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CG_r17)0;
    }
    if (present_49) {
        value.mTRP_PUCCH_MAC_CE_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_MAC_CE_r17)0;
    }
    if (present_50) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(3, 8, tmp_value)) { goto fail; }
        value.mTRP_PUCCH_maxNum_PC_FR1_r17 = (int64_t)tmp_value;
    }
    if (present_51) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17(dec, value.mTRP_inter_Cell_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_52) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17(dec, value.mTRP_GroupBasedL1_RSRP_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_53) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.mTRP_BFD_RS_MAC_CE_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17)tmp_value;
    }
    if (present_54) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17(dec, value.mTRP_CSI_EnhancementPerBand_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_55) {
        if (Decode_CodebookComboParameterMultiTRP_r17(dec, value.codebookComboParameterMultiTRP_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_56) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mTRP_CSI_additionalCSI_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_additionalCSI_r17)tmp_value;
    }
    if (present_57) {
        value.mTRP_CSI_N_Max2_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_N_Max2_r17)0;
    }
    if (present_58) {
        value.mTRP_CSI_CMR_r17 = (MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_CMR_r17)0;
    }
    if (present_59) {
        value.srs_partialFreqSounding_r17 = (MIMO_ParametersPerBand_ExtGroup7_Srs_partialFreqSounding_r17)0;
    }
    if (present_60) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710(dec, value.beamSwitchTiming_v1710) != ErrorCode_Ok) { goto fail; }
    }
    if (present_61) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17(dec, value.beamSwitchTiming_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_62) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710(dec, value.beamReportTiming_v1710) != ErrorCode_Ok) { goto fail; }
    }
    if (present_63) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710(dec, value.maxNumberRxTxBeamSwitchDL_v1710) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup7(MIMO_ParametersPerBand_ExtGroup7& value)
{
    if (value.has_srs_increasedRepetition_r17) {
    }
    if (value.has_srs_partialFrequencySounding_r17) {
    }
    if (value.has_srs_startRB_locationHoppingPartial_r17) {
    }
    if (value.has_srs_combEight_r17) {
    }
    if (value.has_codebookParametersfetype2_r17) {
        Free_CodebookParametersfetype2_r17(value.codebookParametersfetype2_r17);
    }
    if (value.has_mTRP_PUSCH_twoCSI_RS_r17) {
    }
    if (value.has_mTRP_PUCCH_InterSlot_r17) {
    }
    if (value.has_mTRP_PUCCH_CyclicMapping_r17) {
    }
    if (value.has_mTRP_PUCCH_SecondTPC_r17) {
    }
    if (value.has_mTRP_BFR_twoBFD_RS_Set_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17(value.mTRP_BFR_twoBFD_RS_Set_r17);
    }
    if (value.has_mTRP_BFR_PUCCH_SR_perCG_r17) {
    }
    if (value.has_mTRP_BFR_association_PUCCH_SR_r17) {
    }
    if (value.has_sfn_SimulTwoTCI_AcrossMultiCC_r17) {
    }
    if (value.has_sfn_DefaultDL_BeamSetup_r17) {
    }
    if (value.has_sfn_DefaultUL_BeamSetup_r17) {
    }
    if (value.has_srs_TriggeringOffset_r17) {
    }
    if (value.has_srs_TriggeringDCI_r17) {
    }
    if (value.has_codebookComboParameterMixedType_r17) {
        Free_CodebookComboParameterMixedType_r17(value.codebookComboParameterMixedType_r17);
    }
    if (value.has_unifiedJointTCI_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17(value.unifiedJointTCI_r17);
    }
    if (value.has_unifiedJointTCI_multiMAC_CE_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17(value.unifiedJointTCI_multiMAC_CE_r17);
    }
    if (value.has_unifiedJointTCI_perBWP_CA_r17) {
    }
    if (value.has_unifiedJointTCI_ListSharingCA_r17) {
    }
    if (value.has_unifiedJointTCI_commonMultiCC_r17) {
    }
    if (value.has_unifiedJointTCI_BeamAlignDLRS_r17) {
    }
    if (value.has_unifiedJointTCI_PC_association_r17) {
    }
    if (value.has_unifiedJointTCI_Legacy_r17) {
    }
    if (value.has_unifiedJointTCI_Legacy_SRS_r17) {
    }
    if (value.has_unifiedJointTCI_Legacy_CORESET0_r17) {
    }
    if (value.has_unifiedJointTCI_SCellBFR_r17) {
    }
    if (value.has_unifiedJointTCI_InterCell_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17(value.unifiedJointTCI_InterCell_r17);
    }
    if (value.has_unifiedSeparateTCI_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17(value.unifiedSeparateTCI_r17);
    }
    if (value.has_unifiedSeparateTCI_multiMAC_CE_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17(value.unifiedSeparateTCI_multiMAC_CE_r17);
    }
    if (value.has_unifiedSeparateTCI_perBWP_CA_r17) {
    }
    if (value.has_unifiedSeparateTCI_ListSharingCA_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17(value.unifiedSeparateTCI_ListSharingCA_r17);
    }
    if (value.has_unifiedSeparateTCI_commonMultiCC_r17) {
    }
    if (value.has_unifiedSeparateTCI_InterCell_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17(value.unifiedSeparateTCI_InterCell_r17);
    }
    if (value.has_unifiedJointTCI_mTRP_InterCell_BM_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17(value.unifiedJointTCI_mTRP_InterCell_BM_r17);
    }
    if (value.has_mpe_Mitigation_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17(value.mpe_Mitigation_r17);
    }
    if (value.has_srs_PortReport_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17(value.srs_PortReport_r17);
    }
    if (value.has_mTRP_PDCCH_individual_r17) {
    }
    if (value.has_mTRP_PDCCH_anySpan_3Symbols_r17) {
    }
    if (value.has_mTRP_PDCCH_TwoQCL_TypeD_r17) {
    }
    if (value.has_mTRP_PUSCH_CSI_RS_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17(value.mTRP_PUSCH_CSI_RS_r17);
    }
    if (value.has_mTRP_PUSCH_cyclicMapping_r17) {
    }
    if (value.has_mTRP_PUSCH_secondTPC_r17) {
    }
    if (value.has_mTRP_PUSCH_twoPHR_Reporting_r17) {
    }
    if (value.has_mTRP_PUSCH_A_CSI_r17) {
    }
    if (value.has_mTRP_PUSCH_SP_CSI_r17) {
    }
    if (value.has_mTRP_PUSCH_CG_r17) {
    }
    if (value.has_mTRP_PUCCH_MAC_CE_r17) {
    }
    if (value.has_mTRP_PUCCH_maxNum_PC_FR1_r17) {
    }
    if (value.has_mTRP_inter_Cell_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17(value.mTRP_inter_Cell_r17);
    }
    if (value.has_mTRP_GroupBasedL1_RSRP_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17(value.mTRP_GroupBasedL1_RSRP_r17);
    }
    if (value.has_mTRP_BFD_RS_MAC_CE_r17) {
    }
    if (value.has_mTRP_CSI_EnhancementPerBand_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17(value.mTRP_CSI_EnhancementPerBand_r17);
    }
    if (value.has_codebookComboParameterMultiTRP_r17) {
        Free_CodebookComboParameterMultiTRP_r17(value.codebookComboParameterMultiTRP_r17);
    }
    if (value.has_mTRP_CSI_additionalCSI_r17) {
    }
    if (value.has_mTRP_CSI_N_Max2_r17) {
    }
    if (value.has_mTRP_CSI_CMR_r17) {
    }
    if (value.has_srs_partialFreqSounding_r17) {
    }
    if (value.has_beamSwitchTiming_v1710) {
        Free_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710(value.beamSwitchTiming_v1710);
    }
    if (value.has_beamSwitchTiming_r17) {
        Free_MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17(value.beamSwitchTiming_r17);
    }
    if (value.has_beamReportTiming_v1710) {
        Free_MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710(value.beamReportTiming_v1710);
    }
    if (value.has_maxNumberRxTxBeamSwitchDL_v1710) {
        Free_MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710(value.maxNumberRxTxBeamSwitchDL_v1710);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup8(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup8& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_PortReportSP_AP_r17);
    enc.WriteBit(value.has_maxNumberRxBeam_v1720);
    enc.WriteBit(value.has_sfn_ImplicitRS_twoTCI_r17);
    enc.WriteBit(value.has_sfn_QCL_TypeD_Collision_twoTCI_r17);
    enc.WriteBit(value.has_mTRP_CSI_numCPU_r17);
    if (value.has_srs_PortReportSP_AP_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_PortReportSP_AP_r17), 0, 0);
    }
    if (value.has_maxNumberRxBeam_v1720) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberRxBeam_v1720), 9, 12);
    }
    if (value.has_sfn_ImplicitRS_twoTCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_ImplicitRS_twoTCI_r17), 0, 0);
    }
    if (value.has_sfn_QCL_TypeD_Collision_twoTCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_QCL_TypeD_Collision_twoTCI_r17), 0, 0);
    }
    if (value.has_mTRP_CSI_numCPU_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_CSI_numCPU_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup8(Decoder& dec, MIMO_ParametersPerBand_ExtGroup8& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (present_0) {
        value.srs_PortReportSP_AP_r17 = (MIMO_ParametersPerBand_ExtGroup8_Srs_PortReportSP_AP_r17)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(9, 12, tmp_value)) { goto fail; }
        value.maxNumberRxBeam_v1720 = (int64_t)tmp_value;
    }
    if (present_2) {
        value.sfn_ImplicitRS_twoTCI_r17 = (MIMO_ParametersPerBand_ExtGroup8_Sfn_ImplicitRS_twoTCI_r17)0;
    }
    if (present_3) {
        value.sfn_QCL_TypeD_Collision_twoTCI_r17 = (MIMO_ParametersPerBand_ExtGroup8_Sfn_QCL_TypeD_Collision_twoTCI_r17)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.mTRP_CSI_numCPU_r17 = (MIMO_ParametersPerBand_ExtGroup8_MTRP_CSI_numCPU_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup8(MIMO_ParametersPerBand_ExtGroup8& value)
{
    if (value.has_srs_PortReportSP_AP_r17) {
    }
    if (value.has_maxNumberRxBeam_v1720) {
    }
    if (value.has_sfn_ImplicitRS_twoTCI_r17) {
    }
    if (value.has_sfn_QCL_TypeD_Collision_twoTCI_r17) {
    }
    if (value.has_mTRP_CSI_numCPU_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup9(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup9& value)
{
    (void)value;
    enc.WriteBit(value.has_supportRepNumPDSCH_TDRA_DCI_1_2_r17);
    if (value.has_supportRepNumPDSCH_TDRA_DCI_1_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportRepNumPDSCH_TDRA_DCI_1_2_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup9(Decoder& dec, MIMO_ParametersPerBand_ExtGroup9& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.supportRepNumPDSCH_TDRA_DCI_1_2_r17 = (MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup9(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup9(MIMO_ParametersPerBand_ExtGroup9& value)
{
    if (value.has_supportRepNumPDSCH_TDRA_DCI_1_2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigJointTCIPerCC_PerBWP_r18), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberActiveJointTCI_AcrossCC_r18), 0, 5);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumberConfigJointTCIPerCC_PerBWP_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointTCIPerCC_PerBWP_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberActiveJointTCI_AcrossCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.tci_StateInd_r18), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberActiveJointTCI_PerCC_r18), 2, 8);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.tci_StateInd_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18_Tci_StateInd_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxNumberActiveJointTCI_PerCC_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumConfigDL_TCI_PerCC_PerBWP_r18), 0, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumConfigUL_TCI_PerCC_PerBWP_r18), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumActiveDL_TCI_AcrossCC_r18), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumActiveUL_TCI_AcrossCC_r18), 0, 3);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.maxNumConfigDL_TCI_PerCC_PerBWP_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_PerCC_PerBWP_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumConfigUL_TCI_PerCC_PerBWP_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_PerCC_PerBWP_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumActiveDL_TCI_AcrossCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumActiveUL_TCI_AcrossCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumActiveDL_TCI_AcrossCC_r18), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumActiveUL_TCI_AcrossCC_r18), 0, 3);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumActiveDL_TCI_AcrossCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumActiveUL_TCI_AcrossCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_Operation_r18), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigJointTCIPerCC_PerBWP_r18), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberActiveJointTCIAcrossCC_PerCORESET_r18), 0, 4);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mTRP_Operation_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumberConfigJointTCIPerCC_PerBWP_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberActiveJointTCIAcrossCC_PerCORESET_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_Operation_r18), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumConfigDL_TCI_PerCC_PerBWP_r18), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumConfigUL_TCI_PerCC_PerBWP_r18), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumActiveDL_TCI_AcrossCC_r18), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumActiveUL_TCI_AcrossCC_r18), 0, 4);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mTRP_Operation_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumConfigDL_TCI_PerCC_PerBWP_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumConfigUL_TCI_PerCC_PerBWP_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumActiveDL_TCI_AcrossCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumActiveUL_TCI_AcrossCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumConfigDL_TCI_PerCC_PerBWP_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumConfigUL_TCI_PerCC_PerBWP_r18), 1, 8);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumConfigDL_TCI_PerCC_PerBWP_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumConfigUL_TCI_PerCC_PerBWP_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18(MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.valueX_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberActiveResource_r18), 2, 32);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.valueX_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 32, tmp_value)) { goto fail; }
        value.maxNumberActiveResource_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18(MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigPerCC_r18), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigAcrossCC_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSimultaneousPerCC_r18), 0, 9);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberConfigPerCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberConfigAcrossCC_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumberSimultaneousPerCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18(MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicSRS_Resource_PerBWP_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicSRS_Resource_PerBWP_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSemiPersistentSRS_ResourcePerBWP_r18), 0, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.valueY_SRS_ResourceAssociate_r18), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.valueX_CSI_RS_ResourceAssociate_r18), 1, 2);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberPeriodicSRS_Resource_PerBWP_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberAperiodicSRS_Resource_PerBWP_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.maxNumberSemiPersistentSRS_ResourcePerBWP_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.valueY_SRS_ResourceAssociate_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.valueX_CSI_RS_ResourceAssociate_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18(MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
