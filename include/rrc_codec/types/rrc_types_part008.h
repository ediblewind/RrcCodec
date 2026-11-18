/* ============================================================================
 * types/rrc_types_part008.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART008_H
#define RRC_CODEC_TYPES_PART008_H

#include "rrc_types_part000.h"
#include "rrc_types_part001.h"
#include "rrc_types_part002.h"
#include "rrc_types_part003.h"
#include "rrc_types_part004.h"
#include "rrc_types_part005.h"
#include "rrc_types_part006.h"
#include "rrc_types_part007.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 枚举 EUTRA_ParametersCommon_MultiNS_Pmax_EUTRA（ASN.1 multiNS-Pmax-EUTRA，源文件第 17348 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EUTRA_ParametersCommon_MultiNS_Pmax_EUTRA {
    EUTRA_ParametersCommon_MultiNS_Pmax_EUTRA_supported = 0, /**< ASN.1 supported */
} EUTRA_ParametersCommon_MultiNS_Pmax_EUTRA;


/**
 * @brief 枚举 EUTRA_ParametersCommon_Rs_SINR_MeasEUTRA（ASN.1 rs-SINR-MeasEUTRA，源文件第 17349 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EUTRA_ParametersCommon_Rs_SINR_MeasEUTRA {
    EUTRA_ParametersCommon_Rs_SINR_MeasEUTRA_supported = 0, /**< ASN.1 supported */
} EUTRA_ParametersCommon_Rs_SINR_MeasEUTRA;


/**
 * @brief 枚举 EUTRA_ParametersCommon_ExtGroup1_Ne_DC（ASN.1 ne-DC，源文件第 17352 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EUTRA_ParametersCommon_ExtGroup1_Ne_DC {
    EUTRA_ParametersCommon_ExtGroup1_Ne_DC_supported = 0, /**< ASN.1 supported */
} EUTRA_ParametersCommon_ExtGroup1_Ne_DC;


/**
 * @brief 枚举 EUTRA_ParametersCommon_ExtGroup2_Nr_HO_ToEN_DC_r16（ASN.1 nr-HO-ToEN-DC-r16，源文件第 17355 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EUTRA_ParametersCommon_ExtGroup2_Nr_HO_ToEN_DC_r16 {
    EUTRA_ParametersCommon_ExtGroup2_Nr_HO_ToEN_DC_r16_supported = 0, /**< ASN.1 supported */
} EUTRA_ParametersCommon_ExtGroup2_Nr_HO_ToEN_DC_r16;


/**
 * @brief 枚举 EUTRA_ParametersXDD_Diff_RsrqMeasWidebandEUTRA（ASN.1 rsrqMeasWidebandEUTRA，源文件第 17360 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EUTRA_ParametersXDD_Diff_RsrqMeasWidebandEUTRA {
    EUTRA_ParametersXDD_Diff_RsrqMeasWidebandEUTRA_supported = 0, /**< ASN.1 supported */
} EUTRA_ParametersXDD_Diff_RsrqMeasWidebandEUTRA;


/**
 * @brief 枚举 MAC_ParametersCommon_Lcp_Restriction（ASN.1 lcp-Restriction，源文件第 17395 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_Lcp_Restriction {
    MAC_ParametersCommon_Lcp_Restriction_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_Lcp_Restriction;


/**
 * @brief 枚举 MAC_ParametersCommon_Dummy（ASN.1 dummy，源文件第 17396 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_Dummy {
    MAC_ParametersCommon_Dummy_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_Dummy;


/**
 * @brief 枚举 MAC_ParametersCommon_Lch_ToSCellRestriction（ASN.1 lch-ToSCellRestriction，源文件第 17397 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_Lch_ToSCellRestriction {
    MAC_ParametersCommon_Lch_ToSCellRestriction_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_Lch_ToSCellRestriction;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup1_RecommendedBitRate（ASN.1 recommendedBitRate，源文件第 17400 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup1_RecommendedBitRate {
    MAC_ParametersCommon_ExtGroup1_RecommendedBitRate_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup1_RecommendedBitRate;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup1_RecommendedBitRateQuery（ASN.1 recommendedBitRateQuery，源文件第 17401 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup1_RecommendedBitRateQuery {
    MAC_ParametersCommon_ExtGroup1_RecommendedBitRateQuery_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup1_RecommendedBitRateQuery;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup2_RecommendedBitRateMultiplier_r16（ASN.1 recommendedBitRateMultiplier-r16，源文件第 17404 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup2_RecommendedBitRateMultiplier_r16 {
    MAC_ParametersCommon_ExtGroup2_RecommendedBitRateMultiplier_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup2_RecommendedBitRateMultiplier_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup2_PreEmptiveBSR_r16（ASN.1 preEmptiveBSR-r16，源文件第 17405 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup2_PreEmptiveBSR_r16 {
    MAC_ParametersCommon_ExtGroup2_PreEmptiveBSR_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup2_PreEmptiveBSR_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup2_AutonomousTransmission_r16（ASN.1 autonomousTransmission-r16，源文件第 17406 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup2_AutonomousTransmission_r16 {
    MAC_ParametersCommon_ExtGroup2_AutonomousTransmission_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup2_AutonomousTransmission_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup2_Lch_PriorityBasedPrioritization_r16（ASN.1 lch-PriorityBasedPrioritization-r16，源文件第 17407 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup2_Lch_PriorityBasedPrioritization_r16 {
    MAC_ParametersCommon_ExtGroup2_Lch_PriorityBasedPrioritization_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup2_Lch_PriorityBasedPrioritization_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup2_Lch_ToConfiguredGrantMapping_r16（ASN.1 lch-ToConfiguredGrantMapping-r16，源文件第 17408 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup2_Lch_ToConfiguredGrantMapping_r16 {
    MAC_ParametersCommon_ExtGroup2_Lch_ToConfiguredGrantMapping_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup2_Lch_ToConfiguredGrantMapping_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup2_Lch_ToGrantPriorityRestriction_r16（ASN.1 lch-ToGrantPriorityRestriction-r16，源文件第 17409 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup2_Lch_ToGrantPriorityRestriction_r16 {
    MAC_ParametersCommon_ExtGroup2_Lch_ToGrantPriorityRestriction_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup2_Lch_ToGrantPriorityRestriction_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup2_SinglePHR_P_r16（ASN.1 singlePHR-P-r16，源文件第 17410 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup2_SinglePHR_P_r16 {
    MAC_ParametersCommon_ExtGroup2_SinglePHR_P_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup2_SinglePHR_P_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup2_Ul_LBT_FailureDetectionRecovery_r16（ASN.1 ul-LBT-FailureDetectionRecovery-r16，源文件第 17411 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup2_Ul_LBT_FailureDetectionRecovery_r16 {
    MAC_ParametersCommon_ExtGroup2_Ul_LBT_FailureDetectionRecovery_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup2_Ul_LBT_FailureDetectionRecovery_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup2_Tdd_MPE_P_MPR_Reporting_r16（ASN.1 tdd-MPE-P-MPR-Reporting-r16，源文件第 17413 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup2_Tdd_MPE_P_MPR_Reporting_r16 {
    MAC_ParametersCommon_ExtGroup2_Tdd_MPE_P_MPR_Reporting_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup2_Tdd_MPE_P_MPR_Reporting_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup2_Lcid_ExtensionIAB_r16（ASN.1 lcid-ExtensionIAB-r16，源文件第 17414 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup2_Lcid_ExtensionIAB_r16 {
    MAC_ParametersCommon_ExtGroup2_Lcid_ExtensionIAB_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup2_Lcid_ExtensionIAB_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup3_SpCell_BFR_CBRA_r16（ASN.1 spCell-BFR-CBRA-r16，源文件第 17417 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup3_SpCell_BFR_CBRA_r16 {
    MAC_ParametersCommon_ExtGroup3_SpCell_BFR_CBRA_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup3_SpCell_BFR_CBRA_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup4_Srs_ResourceId_Ext_r16（ASN.1 srs-ResourceId-Ext-r16，源文件第 17420 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup4_Srs_ResourceId_Ext_r16 {
    MAC_ParametersCommon_ExtGroup4_Srs_ResourceId_Ext_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup4_Srs_ResourceId_Ext_r16;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_EnhancedUuDRX_forSidelink_r17（ASN.1 enhancedUuDRX-forSidelink-r17，源文件第 17423 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_EnhancedUuDRX_forSidelink_r17 {
    MAC_ParametersCommon_ExtGroup5_EnhancedUuDRX_forSidelink_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_EnhancedUuDRX_forSidelink_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_Mg_ActivationRequestPRS_Meas_r17（ASN.1 mg-ActivationRequestPRS-Meas-r17，源文件第 17425 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_Mg_ActivationRequestPRS_Meas_r17 {
    MAC_ParametersCommon_ExtGroup5_Mg_ActivationRequestPRS_Meas_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_Mg_ActivationRequestPRS_Meas_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_Mg_ActivationCommPRS_Meas_r17（ASN.1 mg-ActivationCommPRS-Meas-r17，源文件第 17427 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_Mg_ActivationCommPRS_Meas_r17 {
    MAC_ParametersCommon_ExtGroup5_Mg_ActivationCommPRS_Meas_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_Mg_ActivationCommPRS_Meas_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_IntraCG_Prioritization_r17（ASN.1 intraCG-Prioritization-r17，源文件第 17428 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_IntraCG_Prioritization_r17 {
    MAC_ParametersCommon_ExtGroup5_IntraCG_Prioritization_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_IntraCG_Prioritization_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_JointPrioritizationCG_Retx_Timer_r17（ASN.1 jointPrioritizationCG-Retx-Timer-r17，源文件第 17429 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_JointPrioritizationCG_Retx_Timer_r17 {
    MAC_ParametersCommon_ExtGroup5_JointPrioritizationCG_Retx_Timer_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_JointPrioritizationCG_Retx_Timer_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_SurvivalTime_r17（ASN.1 survivalTime-r17，源文件第 17430 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_SurvivalTime_r17 {
    MAC_ParametersCommon_ExtGroup5_SurvivalTime_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_SurvivalTime_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_Lcg_ExtensionIAB_r17（ASN.1 lcg-ExtensionIAB-r17，源文件第 17431 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_Lcg_ExtensionIAB_r17 {
    MAC_ParametersCommon_ExtGroup5_Lcg_ExtensionIAB_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_Lcg_ExtensionIAB_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_Harq_FeedbackDisabled_r17（ASN.1 harq-FeedbackDisabled-r17，源文件第 17432 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_Harq_FeedbackDisabled_r17 {
    MAC_ParametersCommon_ExtGroup5_Harq_FeedbackDisabled_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_Harq_FeedbackDisabled_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_Uplink_Harq_ModeB_r17（ASN.1 uplink-Harq-ModeB-r17，源文件第 17433 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_Uplink_Harq_ModeB_r17 {
    MAC_ParametersCommon_ExtGroup5_Uplink_Harq_ModeB_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_Uplink_Harq_ModeB_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_Sr_TriggeredBy_TA_Report_r17（ASN.1 sr-TriggeredBy-TA-Report-r17，源文件第 17434 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_Sr_TriggeredBy_TA_Report_r17 {
    MAC_ParametersCommon_ExtGroup5_Sr_TriggeredBy_TA_Report_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_Sr_TriggeredBy_TA_Report_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_ExtendedDRX_CycleInactive_r17（ASN.1 extendedDRX-CycleInactive-r17，源文件第 17435 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_ExtendedDRX_CycleInactive_r17 {
    MAC_ParametersCommon_ExtGroup5_ExtendedDRX_CycleInactive_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_ExtendedDRX_CycleInactive_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_SimultaneousSR_PUSCH_DiffPUCCH_groups_r17（ASN.1 simultaneousSR-PUSCH-DiffPUCCH-groups-r17，源文件第 17436 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_SimultaneousSR_PUSCH_DiffPUCCH_groups_r17 {
    MAC_ParametersCommon_ExtGroup5_SimultaneousSR_PUSCH_DiffPUCCH_groups_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_SimultaneousSR_PUSCH_DiffPUCCH_groups_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup5_LastTransmissionUL_r17（ASN.1 lastTransmissionUL-r17，源文件第 17437 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup5_LastTransmissionUL_r17 {
    MAC_ParametersCommon_ExtGroup5_LastTransmissionUL_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup5_LastTransmissionUL_r17;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup6_Sr_TriggeredByTA_ReportATG_r18（ASN.1 sr-TriggeredByTA-ReportATG-r18，源文件第 17440 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup6_Sr_TriggeredByTA_ReportATG_r18 {
    MAC_ParametersCommon_ExtGroup6_Sr_TriggeredByTA_ReportATG_r18_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup6_Sr_TriggeredByTA_ReportATG_r18;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup6_UplinkTA_ReportingATG_r18（ASN.1 uplinkTA-ReportingATG-r18，源文件第 17442 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup6_UplinkTA_ReportingATG_r18 {
    MAC_ParametersCommon_ExtGroup6_UplinkTA_ReportingATG_r18_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup6_UplinkTA_ReportingATG_r18;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup6_ExtendedDRX_CycleInactive_r18（ASN.1 extendedDRX-CycleInactive-r18，源文件第 17443 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup6_ExtendedDRX_CycleInactive_r18 {
    MAC_ParametersCommon_ExtGroup6_ExtendedDRX_CycleInactive_r18_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup6_ExtendedDRX_CycleInactive_r18;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup6_AdditionalBS_Table_r18（ASN.1 additionalBS-Table-r18，源文件第 17444 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup6_AdditionalBS_Table_r18 {
    MAC_ParametersCommon_ExtGroup6_AdditionalBS_Table_r18_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup6_AdditionalBS_Table_r18;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup6_DelayStatusReport_r18（ASN.1 delayStatusReport-r18，源文件第 17445 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup6_DelayStatusReport_r18 {
    MAC_ParametersCommon_ExtGroup6_DelayStatusReport_r18_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup6_DelayStatusReport_r18;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup6_DisableCG_RetransmissionMonitoring_r18（ASN.1 disableCG-RetransmissionMonitoring-r18，源文件第 17446 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup6_DisableCG_RetransmissionMonitoring_r18 {
    MAC_ParametersCommon_ExtGroup6_DisableCG_RetransmissionMonitoring_r18_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup6_DisableCG_RetransmissionMonitoring_r18;


/**
 * @brief 枚举 MAC_ParametersCommon_ExtGroup6_Non_IntegerDRX_r18（ASN.1 non-IntegerDRX-r18，源文件第 17447 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersCommon_ExtGroup6_Non_IntegerDRX_r18 {
    MAC_ParametersCommon_ExtGroup6_Non_IntegerDRX_r18_supported = 0, /**< ASN.1 supported */
} MAC_ParametersCommon_ExtGroup6_Non_IntegerDRX_r18;


/**
 * @brief 枚举 MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivation_r16（ASN.1 directMCG-SCellActivation-r16，源文件第 17452 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivation_r16 {
    MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivation_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivation_r16;


/**
 * @brief 枚举 MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivationResume_r16（ASN.1 directMCG-SCellActivationResume-r16，源文件第 17453 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivationResume_r16 {
    MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivationResume_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivationResume_r16;


/**
 * @brief 枚举 MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivation_r16（ASN.1 directSCG-SCellActivation-r16，源文件第 17454 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivation_r16 {
    MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivation_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivation_r16;


/**
 * @brief 枚举 MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivationResume_r16（ASN.1 directSCG-SCellActivationResume-r16，源文件第 17455 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivationResume_r16 {
    MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivationResume_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivationResume_r16;


/**
 * @brief 枚举 MAC_ParametersFR2_2_r17_DirectMCG_SCellActivation_r17（ASN.1 directMCG-SCellActivation-r17，源文件第 17465 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersFR2_2_r17_DirectMCG_SCellActivation_r17 {
    MAC_ParametersFR2_2_r17_DirectMCG_SCellActivation_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersFR2_2_r17_DirectMCG_SCellActivation_r17;


/**
 * @brief 枚举 MAC_ParametersFR2_2_r17_DirectMCG_SCellActivationResume_r17（ASN.1 directMCG-SCellActivationResume-r17，源文件第 17466 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersFR2_2_r17_DirectMCG_SCellActivationResume_r17 {
    MAC_ParametersFR2_2_r17_DirectMCG_SCellActivationResume_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersFR2_2_r17_DirectMCG_SCellActivationResume_r17;


/**
 * @brief 枚举 MAC_ParametersFR2_2_r17_DirectSCG_SCellActivation_r17（ASN.1 directSCG-SCellActivation-r17，源文件第 17467 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersFR2_2_r17_DirectSCG_SCellActivation_r17 {
    MAC_ParametersFR2_2_r17_DirectSCG_SCellActivation_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersFR2_2_r17_DirectSCG_SCellActivation_r17;


/**
 * @brief 枚举 MAC_ParametersFR2_2_r17_DirectSCG_SCellActivationResume_r17（ASN.1 directSCG-SCellActivationResume-r17，源文件第 17468 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersFR2_2_r17_DirectSCG_SCellActivationResume_r17 {
    MAC_ParametersFR2_2_r17_DirectSCG_SCellActivationResume_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersFR2_2_r17_DirectSCG_SCellActivationResume_r17;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_SkipUplinkTxDynamic（ASN.1 skipUplinkTxDynamic，源文件第 17477 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_SkipUplinkTxDynamic {
    MAC_ParametersXDD_Diff_SkipUplinkTxDynamic_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_SkipUplinkTxDynamic;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_LogicalChannelSR_DelayTimer（ASN.1 logicalChannelSR-DelayTimer，源文件第 17478 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_LogicalChannelSR_DelayTimer {
    MAC_ParametersXDD_Diff_LogicalChannelSR_DelayTimer_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_LogicalChannelSR_DelayTimer;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_LongDRX_Cycle（ASN.1 longDRX-Cycle，源文件第 17479 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_LongDRX_Cycle {
    MAC_ParametersXDD_Diff_LongDRX_Cycle_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_LongDRX_Cycle;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_ShortDRX_Cycle（ASN.1 shortDRX-Cycle，源文件第 17480 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_ShortDRX_Cycle {
    MAC_ParametersXDD_Diff_ShortDRX_Cycle_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_ShortDRX_Cycle;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_MultipleSR_Configurations（ASN.1 multipleSR-Configurations，源文件第 17481 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_MultipleSR_Configurations {
    MAC_ParametersXDD_Diff_MultipleSR_Configurations_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_MultipleSR_Configurations;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_MultipleConfiguredGrants（ASN.1 multipleConfiguredGrants，源文件第 17482 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_MultipleConfiguredGrants {
    MAC_ParametersXDD_Diff_MultipleConfiguredGrants_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_MultipleConfiguredGrants;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_ExtGroup1_SecondaryDRX_Group_r16（ASN.1 secondaryDRX-Group-r16，源文件第 17485 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_ExtGroup1_SecondaryDRX_Group_r16 {
    MAC_ParametersXDD_Diff_ExtGroup1_SecondaryDRX_Group_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_ExtGroup1_SecondaryDRX_Group_r16;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxDynamic_r16（ASN.1 enhancedSkipUplinkTxDynamic-r16，源文件第 17488 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxDynamic_r16 {
    MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxDynamic_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxDynamic_r16;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxConfigured_r16（ASN.1 enhancedSkipUplinkTxConfigured-r16，源文件第 17489 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxConfigured_r16 {
    MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxConfigured_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxConfigured_r16;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_ExtGroup3_Ptm_Retransmission_r18（ASN.1 ptm-Retransmission-r18，源文件第 17492 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_ExtGroup3_Ptm_Retransmission_r18 {
    MAC_ParametersXDD_Diff_ExtGroup3_Ptm_Retransmission_r18_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_ExtGroup3_Ptm_Retransmission_r18;


/**
 * @brief 枚举 MAC_ParametersXDD_Diff_ExtGroup3_Ptm_RetransmissionInactive_r18（ASN.1 ptm-RetransmissionInactive-r18，源文件第 17493 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersXDD_Diff_ExtGroup3_Ptm_RetransmissionInactive_r18 {
    MAC_ParametersXDD_Diff_ExtGroup3_Ptm_RetransmissionInactive_r18_supported = 0, /**< ASN.1 supported */
} MAC_ParametersXDD_Diff_ExtGroup3_Ptm_RetransmissionInactive_r18;


/**
 * @brief 枚举 MinTimeGap_r16_Scs_15kHz_r16（ASN.1 scs-15kHz-r16，源文件第 17498 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinTimeGap_r16_Scs_15kHz_r16 {
    MinTimeGap_r16_Scs_15kHz_r16_sl1 = 0, /**< ASN.1 sl1 */
    MinTimeGap_r16_Scs_15kHz_r16_sl3 = 1, /**< ASN.1 sl3 */
} MinTimeGap_r16_Scs_15kHz_r16;


/**
 * @brief 枚举 MinTimeGap_r16_Scs_30kHz_r16（ASN.1 scs-30kHz-r16，源文件第 17499 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinTimeGap_r16_Scs_30kHz_r16 {
    MinTimeGap_r16_Scs_30kHz_r16_sl1 = 0, /**< ASN.1 sl1 */
    MinTimeGap_r16_Scs_30kHz_r16_sl6 = 1, /**< ASN.1 sl6 */
} MinTimeGap_r16_Scs_30kHz_r16;


/**
 * @brief 枚举 MinTimeGap_r16_Scs_60kHz_r16（ASN.1 scs-60kHz-r16，源文件第 17500 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinTimeGap_r16_Scs_60kHz_r16 {
    MinTimeGap_r16_Scs_60kHz_r16_sl1 = 0, /**< ASN.1 sl1 */
    MinTimeGap_r16_Scs_60kHz_r16_sl12 = 1, /**< ASN.1 sl12 */
} MinTimeGap_r16_Scs_60kHz_r16;


/**
 * @brief 枚举 MinTimeGap_r16_Scs_120kHz_r16（ASN.1 scs-120kHz-r16，源文件第 17501 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinTimeGap_r16_Scs_120kHz_r16 {
    MinTimeGap_r16_Scs_120kHz_r16_sl2 = 0, /**< ASN.1 sl2 */
    MinTimeGap_r16_Scs_120kHz_r16_sl24 = 1, /**< ASN.1 sl24 */
} MinTimeGap_r16_Scs_120kHz_r16;


/**
 * @brief 枚举 MinTimeGapFR2_2_r17_Scs_120kHz_r17（ASN.1 scs-120kHz-r17，源文件第 17505 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinTimeGapFR2_2_r17_Scs_120kHz_r17 {
    MinTimeGapFR2_2_r17_Scs_120kHz_r17_sl2 = 0, /**< ASN.1 sl2 */
    MinTimeGapFR2_2_r17_Scs_120kHz_r17_sl24 = 1, /**< ASN.1 sl24 */
} MinTimeGapFR2_2_r17_Scs_120kHz_r17;


/**
 * @brief 枚举 MinTimeGapFR2_2_r17_Scs_480kHz_r17（ASN.1 scs-480kHz-r17，源文件第 17506 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinTimeGapFR2_2_r17_Scs_480kHz_r17 {
    MinTimeGapFR2_2_r17_Scs_480kHz_r17_sl8 = 0, /**< ASN.1 sl8 */
    MinTimeGapFR2_2_r17_Scs_480kHz_r17_sl96 = 1, /**< ASN.1 sl96 */
} MinTimeGapFR2_2_r17_Scs_480kHz_r17;


/**
 * @brief 枚举 MinTimeGapFR2_2_r17_Scs_960kHz_r17（ASN.1 scs-960kHz-r17，源文件第 17507 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinTimeGapFR2_2_r17_Scs_960kHz_r17 {
    MinTimeGapFR2_2_r17_Scs_960kHz_r17_sl16 = 0, /**< ASN.1 sl16 */
    MinTimeGapFR2_2_r17_Scs_960kHz_r17_sl192 = 1, /**< ASN.1 sl192 */
} MinTimeGapFR2_2_r17_Scs_960kHz_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_Ssb_RLM（ASN.1 ssb-RLM，源文件第 17525 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_Ssb_RLM {
    MeasAndMobParametersCommon_Ssb_RLM_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_Ssb_RLM;


/**
 * @brief 枚举 MeasAndMobParametersCommon_Ssb_AndCSI_RS_RLM（ASN.1 ssb-AndCSI-RS-RLM，源文件第 17526 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_Ssb_AndCSI_RS_RLM {
    MeasAndMobParametersCommon_Ssb_AndCSI_RS_RLM_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_Ssb_AndCSI_RS_RLM;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup1_EventB_MeasAndReport（ASN.1 eventB-MeasAndReport，源文件第 17529 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup1_EventB_MeasAndReport {
    MeasAndMobParametersCommon_ExtGroup1_EventB_MeasAndReport_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup1_EventB_MeasAndReport;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup1_HandoverFDD_TDD（ASN.1 handoverFDD-TDD，源文件第 17530 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup1_HandoverFDD_TDD {
    MeasAndMobParametersCommon_ExtGroup1_HandoverFDD_TDD_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup1_HandoverFDD_TDD;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup1_Eutra_CGI_Reporting（ASN.1 eutra-CGI-Reporting，源文件第 17531 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup1_Eutra_CGI_Reporting {
    MeasAndMobParametersCommon_ExtGroup1_Eutra_CGI_Reporting_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup1_Eutra_CGI_Reporting;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup1_Nr_CGI_Reporting（ASN.1 nr-CGI-Reporting，源文件第 17532 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup1_Nr_CGI_Reporting {
    MeasAndMobParametersCommon_ExtGroup1_Nr_CGI_Reporting_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup1_Nr_CGI_Reporting;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup2_IndependentGapConfig（ASN.1 independentGapConfig，源文件第 17535 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup2_IndependentGapConfig {
    MeasAndMobParametersCommon_ExtGroup2_IndependentGapConfig_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup2_IndependentGapConfig;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup2_PeriodicEUTRA_MeasAndReport（ASN.1 periodicEUTRA-MeasAndReport，源文件第 17536 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup2_PeriodicEUTRA_MeasAndReport {
    MeasAndMobParametersCommon_ExtGroup2_PeriodicEUTRA_MeasAndReport_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup2_PeriodicEUTRA_MeasAndReport;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup2_HandoverFR1_FR2（ASN.1 handoverFR1-FR2，源文件第 17537 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup2_HandoverFR1_FR2 {
    MeasAndMobParametersCommon_ExtGroup2_HandoverFR1_FR2_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup2_HandoverFR1_FR2;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR（ASN.1 maxNumberCSI-RS-RRM-RS-SINR，源文件第 17538 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR {
    MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR_n4 = 0, /**< ASN.1 n4 */
    MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR_n8 = 1, /**< ASN.1 n8 */
    MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR_n16 = 2, /**< ASN.1 n16 */
    MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR_n32 = 3, /**< ASN.1 n32 */
    MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR_n64 = 4, /**< ASN.1 n64 */
    MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR_n96 = 5, /**< ASN.1 n96 */
} MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup3_Nr_CGI_Reporting_ENDC（ASN.1 nr-CGI-Reporting-ENDC，源文件第 17541 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup3_Nr_CGI_Reporting_ENDC {
    MeasAndMobParametersCommon_ExtGroup3_Nr_CGI_Reporting_ENDC_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup3_Nr_CGI_Reporting_ENDC;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NEDC（ASN.1 eutra-CGI-Reporting-NEDC，源文件第 17544 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NEDC {
    MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NEDC_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NEDC;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NRDC（ASN.1 eutra-CGI-Reporting-NRDC，源文件第 17545 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NRDC {
    MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NRDC_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NRDC;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NEDC（ASN.1 nr-CGI-Reporting-NEDC，源文件第 17546 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NEDC {
    MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NEDC_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NEDC;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NRDC（ASN.1 nr-CGI-Reporting-NRDC，源文件第 17547 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NRDC {
    MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NRDC_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NRDC;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_ReportAddNeighMeasForPeriodic_r16（ASN.1 reportAddNeighMeasForPeriodic-r16，源文件第 17550 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_ReportAddNeighMeasForPeriodic_r16 {
    MeasAndMobParametersCommon_ExtGroup5_ReportAddNeighMeasForPeriodic_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_ReportAddNeighMeasForPeriodic_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFDD_TDD_r16（ASN.1 condHandoverParametersCommon-r16/condHandoverFDD-TDD-r16，源文件第 17552 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFDD_TDD_r16 {
    MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFDD_TDD_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFDD_TDD_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFR1_FR2_r16（ASN.1 condHandoverParametersCommon-r16/condHandoverFR1-FR2-r16，源文件第 17553 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFR1_FR2_r16 {
    MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFR1_FR2_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFR1_FR2_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_Nr_NeedForGap_Reporting_r16（ASN.1 nr-NeedForGap-Reporting-r16，源文件第 17555 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_Nr_NeedForGap_Reporting_r16 {
    MeasAndMobParametersCommon_ExtGroup5_Nr_NeedForGap_Reporting_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_Nr_NeedForGap_Reporting_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_SupportedGapPattern_NRonly_NEDC_r16（ASN.1 supportedGapPattern-NRonly-NEDC-r16，源文件第 17557 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_SupportedGapPattern_NRonly_NEDC_r16 {
    MeasAndMobParametersCommon_ExtGroup5_SupportedGapPattern_NRonly_NEDC_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_SupportedGapPattern_NRonly_NEDC_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_RSSI_r16（ASN.1 maxNumberCLI-RSSI-r16，源文件第 17558 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_RSSI_r16 {
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_RSSI_r16_n8 = 0, /**< ASN.1 n8 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_RSSI_r16_n16 = 1, /**< ASN.1 n16 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_RSSI_r16_n32 = 2, /**< ASN.1 n32 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_RSSI_r16_n64 = 3, /**< ASN.1 n64 */
} MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_RSSI_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_SRS_RSRP_r16（ASN.1 maxNumberCLI-SRS-RSRP-r16，源文件第 17559 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_SRS_RSRP_r16 {
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_SRS_RSRP_r16_n4 = 0, /**< ASN.1 n4 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_SRS_RSRP_r16_n8 = 1, /**< ASN.1 n8 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_SRS_RSRP_r16_n16 = 2, /**< ASN.1 n16 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_SRS_RSRP_r16_n32 = 3, /**< ASN.1 n32 */
} MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_SRS_RSRP_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_MaxNumberPerSlotCLI_SRS_RSRP_r16（ASN.1 maxNumberPerSlotCLI-SRS-RSRP-r16，源文件第 17560 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_MaxNumberPerSlotCLI_SRS_RSRP_r16 {
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberPerSlotCLI_SRS_RSRP_r16_n2 = 0, /**< ASN.1 n2 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberPerSlotCLI_SRS_RSRP_r16_n4 = 1, /**< ASN.1 n4 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberPerSlotCLI_SRS_RSRP_r16_n8 = 2, /**< ASN.1 n8 */
} MeasAndMobParametersCommon_ExtGroup5_MaxNumberPerSlotCLI_SRS_RSRP_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_Mfbi_IAB_r16（ASN.1 mfbi-IAB-r16，源文件第 17561 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_Mfbi_IAB_r16 {
    MeasAndMobParametersCommon_ExtGroup5_Mfbi_IAB_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_Mfbi_IAB_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_Dummy（ASN.1 dummy，源文件第 17562 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_Dummy {
    MeasAndMobParametersCommon_ExtGroup5_Dummy_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_Dummy;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_Nr_CGI_Reporting_NPN_r16（ASN.1 nr-CGI-Reporting-NPN-r16，源文件第 17563 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_Nr_CGI_Reporting_NPN_r16 {
    MeasAndMobParametersCommon_ExtGroup5_Nr_CGI_Reporting_NPN_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_Nr_CGI_Reporting_NPN_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_IdleInactiveEUTRA_MeasReport_r16（ASN.1 idleInactiveEUTRA-MeasReport-r16，源文件第 17564 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_IdleInactiveEUTRA_MeasReport_r16 {
    MeasAndMobParametersCommon_ExtGroup5_IdleInactiveEUTRA_MeasReport_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_IdleInactiveEUTRA_MeasReport_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_IdleInactive_ValidityArea_r16（ASN.1 idleInactive-ValidityArea-r16，源文件第 17565 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_IdleInactive_ValidityArea_r16 {
    MeasAndMobParametersCommon_ExtGroup5_IdleInactive_ValidityArea_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_IdleInactive_ValidityArea_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_r16（ASN.1 eutra-AutonomousGaps-r16，源文件第 17566 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_r16 {
    MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NEDC_r16（ASN.1 eutra-AutonomousGaps-NEDC-r16，源文件第 17567 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NEDC_r16 {
    MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NEDC_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NEDC_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NRDC_r16（ASN.1 eutra-AutonomousGaps-NRDC-r16，源文件第 17568 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NRDC_r16 {
    MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NRDC_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NRDC_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup5_PcellT312_r16（ASN.1 pcellT312-r16，源文件第 17569 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup5_PcellT312_r16 {
    MeasAndMobParametersCommon_ExtGroup5_PcellT312_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup5_PcellT312_r16;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_OnlyMeasGap_r17（ASN.1 concurrentMeasGap-r17/concurrentPerUE-OnlyMeasGap-r17，源文件第 17575 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_OnlyMeasGap_r17 {
    MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_OnlyMeasGap_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_OnlyMeasGap_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_PerFRCombMeasGap_r17（ASN.1 concurrentMeasGap-r17/concurrentPerUE-PerFRCombMeasGap-r17，源文件第 17576 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_PerFRCombMeasGap_r17 {
    MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_PerFRCombMeasGap_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_PerFRCombMeasGap_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_Nr_NeedForGapNCSG_Reporting_r17（ASN.1 nr-NeedForGapNCSG-Reporting-r17，源文件第 17579 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_Nr_NeedForGapNCSG_Reporting_r17 {
    MeasAndMobParametersCommon_ExtGroup6_Nr_NeedForGapNCSG_Reporting_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_Nr_NeedForGapNCSG_Reporting_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_Eutra_NeedForGapNCSG_Reporting_r17（ASN.1 eutra-NeedForGapNCSG-Reporting-r17，源文件第 17580 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_Eutra_NeedForGapNCSG_Reporting_r17 {
    MeasAndMobParametersCommon_ExtGroup6_Eutra_NeedForGapNCSG_Reporting_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_Eutra_NeedForGapNCSG_Reporting_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_Ncsg_MeasGapPerFR_r17（ASN.1 ncsg-MeasGapPerFR-r17，源文件第 17582 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_Ncsg_MeasGapPerFR_r17 {
    MeasAndMobParametersCommon_ExtGroup6_Ncsg_MeasGapPerFR_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_Ncsg_MeasGapPerFR_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_PreconfiguredUE_AutonomousMeasGap_r17（ASN.1 preconfiguredUE-AutonomousMeasGap-r17，源文件第 17588 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_PreconfiguredUE_AutonomousMeasGap_r17 {
    MeasAndMobParametersCommon_ExtGroup6_PreconfiguredUE_AutonomousMeasGap_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_PreconfiguredUE_AutonomousMeasGap_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_PreconfiguredNW_ControlledMeasGap_r17（ASN.1 preconfiguredNW-ControlledMeasGap-r17，源文件第 17590 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_PreconfiguredNW_ControlledMeasGap_r17 {
    MeasAndMobParametersCommon_ExtGroup6_PreconfiguredNW_ControlledMeasGap_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_PreconfiguredNW_ControlledMeasGap_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_HandoverFR1_FR2_2_r17（ASN.1 handoverFR1-FR2-2-r17，源文件第 17591 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_HandoverFR1_FR2_2_r17 {
    MeasAndMobParametersCommon_ExtGroup6_HandoverFR1_FR2_2_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_HandoverFR1_FR2_2_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_HandoverFR2_1_FR2_2_r17（ASN.1 handoverFR2-1-FR2-2-r17，源文件第 17592 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_HandoverFR2_1_FR2_2_r17 {
    MeasAndMobParametersCommon_ExtGroup6_HandoverFR2_1_FR2_2_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_HandoverFR2_1_FR2_2_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_IndependentGapConfigPRS_r17（ASN.1 independentGapConfigPRS-r17，源文件第 17594 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_IndependentGapConfigPRS_r17 {
    MeasAndMobParametersCommon_ExtGroup6_IndependentGapConfigPRS_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_IndependentGapConfigPRS_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_Rrm_RelaxationRRC_ConnectedRedCap_r17（ASN.1 rrm-RelaxationRRC-ConnectedRedCap-r17，源文件第 17595 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_Rrm_RelaxationRRC_ConnectedRedCap_r17 {
    MeasAndMobParametersCommon_ExtGroup6_Rrm_RelaxationRRC_ConnectedRedCap_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_Rrm_RelaxationRRC_ConnectedRedCap_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_ParallelMeasurementGap_r17（ASN.1 parallelMeasurementGap-r17，源文件第 17597 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_ParallelMeasurementGap_r17 {
    MeasAndMobParametersCommon_ExtGroup6_ParallelMeasurementGap_r17_n2 = 0, /**< ASN.1 n2 */
} MeasAndMobParametersCommon_ExtGroup6_ParallelMeasurementGap_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_CondHandoverWithSCG_NRDC_r17（ASN.1 condHandoverWithSCG-NRDC-r17，源文件第 17598 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_CondHandoverWithSCG_NRDC_r17 {
    MeasAndMobParametersCommon_ExtGroup6_CondHandoverWithSCG_NRDC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_CondHandoverWithSCG_NRDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_r17（ASN.1 gNB-ID-LengthReporting-r17，源文件第 17599 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_r17 {
    MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_ENDC_r17（ASN.1 gNB-ID-LengthReporting-ENDC-r17，源文件第 17600 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_ENDC_r17 {
    MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_ENDC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_ENDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NEDC_r17（ASN.1 gNB-ID-LengthReporting-NEDC-r17，源文件第 17601 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NEDC_r17 {
    MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NEDC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NEDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NRDC_r17（ASN.1 gNB-ID-LengthReporting-NRDC-r17，源文件第 17602 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NRDC_r17 {
    MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NRDC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NRDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NPN_r17（ASN.1 gNB-ID-LengthReporting-NPN-r17，源文件第 17603 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NPN_r17 {
    MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NPN_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NPN_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup7_ParallelSMTC_r17（ASN.1 parallelSMTC-r17，源文件第 17607 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup7_ParallelSMTC_r17 {
    MeasAndMobParametersCommon_ExtGroup7_ParallelSMTC_r17_n4 = 0, /**< ASN.1 n4 */
} MeasAndMobParametersCommon_ExtGroup7_ParallelSMTC_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup7_ConcurrentMeasGapEUTRA_r17（ASN.1 concurrentMeasGapEUTRA-r17，源文件第 17609 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup7_ConcurrentMeasGapEUTRA_r17 {
    MeasAndMobParametersCommon_ExtGroup7_ConcurrentMeasGapEUTRA_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup7_ConcurrentMeasGapEUTRA_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup7_ServiceLinkPropDelayDiffReporting_r17（ASN.1 serviceLinkPropDelayDiffReporting-r17，源文件第 17610 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup7_ServiceLinkPropDelayDiffReporting_r17 {
    MeasAndMobParametersCommon_ExtGroup7_ServiceLinkPropDelayDiffReporting_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup7_ServiceLinkPropDelayDiffReporting_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup7_Ncsg_SymbolLevelScheduleRestrictionInter_r17（ASN.1 ncsg-SymbolLevelScheduleRestrictionInter-r17，源文件第 17612 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup7_Ncsg_SymbolLevelScheduleRestrictionInter_r17 {
    MeasAndMobParametersCommon_ExtGroup7_Ncsg_SymbolLevelScheduleRestrictionInter_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup7_Ncsg_SymbolLevelScheduleRestrictionInter_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup8_EventD1_MeasReportTrigger_r17（ASN.1 eventD1-MeasReportTrigger-r17，源文件第 17615 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup8_EventD1_MeasReportTrigger_r17 {
    MeasAndMobParametersCommon_ExtGroup8_EventD1_MeasReportTrigger_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup8_EventD1_MeasReportTrigger_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup9_InterSatMeas_r17（ASN.1 interSatMeas-r17，源文件第 17623 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup9_InterSatMeas_r17 {
    MeasAndMobParametersCommon_ExtGroup9_InterSatMeas_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup9_InterSatMeas_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup9_DeriveSSB_IndexFromCellInterNon_NCSG_r17（ASN.1 deriveSSB-IndexFromCellInterNon-NCSG-r17，源文件第 17624 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup9_DeriveSSB_IndexFromCellInterNon_NCSG_r17 {
    MeasAndMobParametersCommon_ExtGroup9_DeriveSSB_IndexFromCellInterNon_NCSG_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup9_DeriveSSB_IndexFromCellInterNon_NCSG_r17;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_L3_MeasUnknownSCellActivation_r18（ASN.1 l3-MeasUnknownSCellActivation-r18，源文件第 17628 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_L3_MeasUnknownSCellActivation_r18 {
    MeasAndMobParametersCommon_ExtGroup10_L3_MeasUnknownSCellActivation_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_L3_MeasUnknownSCellActivation_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_ShortMeasInterval_r18（ASN.1 shortMeasInterval-r18，源文件第 17630 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_ShortMeasInterval_r18 {
    MeasAndMobParametersCommon_ExtGroup10_ShortMeasInterval_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_ShortMeasInterval_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Nr_NeedForInterruptionReport_r18（ASN.1 nr-NeedForInterruptionReport-r18，源文件第 17631 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Nr_NeedForInterruptionReport_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Nr_NeedForInterruptionReport_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_Nr_NeedForInterruptionReport_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_MeasSequenceConfig_r18（ASN.1 measSequenceConfig-r18，源文件第 17632 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_MeasSequenceConfig_r18 {
    MeasAndMobParametersCommon_ExtGroup10_MeasSequenceConfig_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_MeasSequenceConfig_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_CellIndividualOffsetPerMeasEvent_r18（ASN.1 cellIndividualOffsetPerMeasEvent-r18，源文件第 17633 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_CellIndividualOffsetPerMeasEvent_r18 {
    MeasAndMobParametersCommon_ExtGroup10_CellIndividualOffsetPerMeasEvent_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_CellIndividualOffsetPerMeasEvent_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_r18（ASN.1 ltm-MCG-r18，源文件第 17634 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_SCG_r18（ASN.1 ltm-SCG-r18，源文件第 17635 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_SCG_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_SCG_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_SCG_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_NRDC_r18（ASN.1 ltm-MCG-NRDC-r18，源文件第 17636 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_NRDC_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_NRDC_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_NRDC_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessDG_r18（ASN.1 ltm-RACH-LessDG-r18，源文件第 17637 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessDG_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessDG_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessDG_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessCG_r18（ASN.1 ltm-RACH-LessCG-r18，源文件第 17638 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessCG_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessCG_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessCG_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_Recovery_r18（ASN.1 ltm-Recovery-r18，源文件第 17639 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_Recovery_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_Recovery_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_Recovery_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_ReferenceConfig_r18（ASN.1 ltm-ReferenceConfig-r18，源文件第 17640 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_ReferenceConfig_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_ReferenceConfig_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_ReferenceConfig_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_EventD2_MeasReportTrigger_r18（ASN.1 eventD2-MeasReportTrigger-r18，源文件第 17641 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_EventD2_MeasReportTrigger_r18 {
    MeasAndMobParametersCommon_ExtGroup10_EventD2_MeasReportTrigger_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_EventD2_MeasReportTrigger_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsPreMG_r18（ASN.1 concurrentMeasGapsPreMG-r18，源文件第 17643 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsPreMG_r18 {
    MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsPreMG_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsPreMG_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsNCSG_r18（ASN.1 concurrentMeasGapsNCSG-r18，源文件第 17645 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsNCSG_r18 {
    MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsNCSG_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsNCSG_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Eutra_NoGapMeasurement_r18（ASN.1 eutra-NoGapMeasurement-r18，源文件第 17647 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Eutra_NoGapMeasurement_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Eutra_NoGapMeasurement_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_Eutra_NoGapMeasurement_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasCRS_InsideBWP_EUTRA_r18（ASN.1 concurrentMeasCRS-InsideBWP-EUTRA-r18，源文件第 17651 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasCRS_InsideBWP_EUTRA_r18 {
    MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasCRS_InsideBWP_EUTRA_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasCRS_InsideBWP_EUTRA_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_InterFreqMeasGap_r18（ASN.1 ltm-InterFreqMeasGap-r18，源文件第 17653 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_InterFreqMeasGap_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_InterFreqMeasGap_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_InterFreqMeasGap_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_r18（ASN.1 ltm-FastUE-Processing-r18/fr1-r18，源文件第 17656 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_r18_ms10 = 0, /**< ASN.1 ms10 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_r18_ms15 = 1, /**< ASN.1 ms15 */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr2_r18（ASN.1 ltm-FastUE-Processing-r18/fr2-r18，源文件第 17657 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr2_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr2_r18_ms10 = 0, /**< ASN.1 ms10 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr2_r18_ms15 = 1, /**< ASN.1 ms15 */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr2_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_AndFR2_r18（ASN.1 ltm-FastUE-Processing-r18/fr1-AndFR2-r18，源文件第 17658 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_AndFR2_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_AndFR2_r18_ms20 = 0, /**< ASN.1 ms20 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_AndFR2_r18_ms30 = 1, /**< ASN.1 ms30 */
} MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_AndFR2_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportEMR_r18（ASN.1 measValidationReportEMR-r18，源文件第 17661 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportEMR_r18 {
    MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportEMR_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportEMR_r18;


/**
 * @brief 枚举 MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportNonEMR_r18（ASN.1 measValidationReportNonEMR-r18，源文件第 17663 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportNonEMR_r18 {
    MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportNonEMR_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportNonEMR_r18;


/**
 * @brief 枚举 MeasAndMobParametersXDD_Diff_IntraAndInterF_MeasAndReport（ASN.1 intraAndInterF-MeasAndReport，源文件第 17668 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersXDD_Diff_IntraAndInterF_MeasAndReport {
    MeasAndMobParametersXDD_Diff_IntraAndInterF_MeasAndReport_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersXDD_Diff_IntraAndInterF_MeasAndReport;


/**
 * @brief 枚举 MeasAndMobParametersXDD_Diff_EventA_MeasAndReport（ASN.1 eventA-MeasAndReport，源文件第 17669 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersXDD_Diff_EventA_MeasAndReport {
    MeasAndMobParametersXDD_Diff_EventA_MeasAndReport_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersXDD_Diff_EventA_MeasAndReport;


/**
 * @brief 枚举 MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverInterF（ASN.1 handoverInterF，源文件第 17672 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverInterF {
    MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverInterF_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverInterF;


/**
 * @brief 枚举 MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_EPC（ASN.1 handoverLTE-EPC，源文件第 17673 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_EPC {
    MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_EPC_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_EPC;


/**
 * @brief 枚举 MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_5GC（ASN.1 handoverLTE-5GC，源文件第 17674 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_5GC {
    MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_5GC_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_5GC;


/**
 * @brief 枚举 MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh（ASN.1 sftd-MeasNR-Neigh，源文件第 17677 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh {
    MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh;


/**
 * @brief 枚举 MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh_DRX（ASN.1 sftd-MeasNR-Neigh-DRX，源文件第 17678 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh_DRX {
    MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh_DRX_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh_DRX;


/**
 * @brief 枚举 MeasAndMobParametersXDD_Diff_ExtGroup3_Dummy（ASN.1 dummy，源文件第 17681 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersXDD_Diff_ExtGroup3_Dummy {
    MeasAndMobParametersXDD_Diff_ExtGroup3_Dummy_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersXDD_Diff_ExtGroup3_Dummy;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_Ss_SINR_Meas（ASN.1 ss-SINR-Meas，源文件第 17686 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_Ss_SINR_Meas {
    MeasAndMobParametersFRX_Diff_Ss_SINR_Meas_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_Ss_SINR_Meas;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithSSB（ASN.1 csi-RSRP-AndRSRQ-MeasWithSSB，源文件第 17687 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithSSB {
    MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithSSB_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithSSB;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithoutSSB（ASN.1 csi-RSRP-AndRSRQ-MeasWithoutSSB，源文件第 17688 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithoutSSB {
    MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithoutSSB_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithoutSSB;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_Csi_SINR_Meas（ASN.1 csi-SINR-Meas，源文件第 17689 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_Csi_SINR_Meas {
    MeasAndMobParametersFRX_Diff_Csi_SINR_Meas_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_Csi_SINR_Meas;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_Csi_RS_RLM（ASN.1 csi-RS-RLM，源文件第 17690 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_Csi_RS_RLM {
    MeasAndMobParametersFRX_Diff_Csi_RS_RLM_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_Csi_RS_RLM;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverInterF（ASN.1 handoverInterF，源文件第 17693 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverInterF {
    MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverInterF_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverInterF;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_EPC（ASN.1 handoverLTE-EPC，源文件第 17694 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_EPC {
    MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_EPC_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_EPC;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_5GC（ASN.1 handoverLTE-5GC，源文件第 17695 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_5GC {
    MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_5GC_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_5GC;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup2_MaxNumberResource_CSI_RS_RLM（ASN.1 maxNumberResource-CSI-RS-RLM，源文件第 17698 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup2_MaxNumberResource_CSI_RS_RLM {
    MeasAndMobParametersFRX_Diff_ExtGroup2_MaxNumberResource_CSI_RS_RLM_n2 = 0, /**< ASN.1 n2 */
    MeasAndMobParametersFRX_Diff_ExtGroup2_MaxNumberResource_CSI_RS_RLM_n4 = 1, /**< ASN.1 n4 */
    MeasAndMobParametersFRX_Diff_ExtGroup2_MaxNumberResource_CSI_RS_RLM_n6 = 2, /**< ASN.1 n6 */
    MeasAndMobParametersFRX_Diff_ExtGroup2_MaxNumberResource_CSI_RS_RLM_n8 = 3, /**< ASN.1 n8 */
} MeasAndMobParametersFRX_Diff_ExtGroup2_MaxNumberResource_CSI_RS_RLM;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup3_SimultaneousRxDataSSB_DiffNumerology（ASN.1 simultaneousRxDataSSB-DiffNumerology，源文件第 17701 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup3_SimultaneousRxDataSSB_DiffNumerology {
    MeasAndMobParametersFRX_Diff_ExtGroup3_SimultaneousRxDataSSB_DiffNumerology_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup3_SimultaneousRxDataSSB_DiffNumerology;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_r16（ASN.1 nr-AutonomousGaps-r16，源文件第 17704 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_r16;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_ENDC_r16（ASN.1 nr-AutonomousGaps-ENDC-r16，源文件第 17705 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_ENDC_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_ENDC_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_ENDC_r16;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NEDC_r16（ASN.1 nr-AutonomousGaps-NEDC-r16，源文件第 17706 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NEDC_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NEDC_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NEDC_r16;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NRDC_r16（ASN.1 nr-AutonomousGaps-NRDC-r16，源文件第 17707 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NRDC_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NRDC_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NRDC_r16;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_Dummy（ASN.1 dummy，源文件第 17708 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_Dummy {
    MeasAndMobParametersFRX_Diff_ExtGroup4_Dummy_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_Dummy;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_RSSI_Meas_r16（ASN.1 cli-RSSI-Meas-r16，源文件第 17709 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_RSSI_Meas_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_RSSI_Meas_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_RSSI_Meas_r16;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_SRS_RSRP_Meas_r16（ASN.1 cli-SRS-RSRP-Meas-r16，源文件第 17710 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_SRS_RSRP_Meas_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_SRS_RSRP_Meas_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_SRS_RSRP_Meas_r16;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_InterFrequencyMeas_NoGap_r16（ASN.1 interFrequencyMeas-NoGap-r16，源文件第 17711 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_InterFrequencyMeas_NoGap_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup4_InterFrequencyMeas_NoGap_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_InterFrequencyMeas_NoGap_r16;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_SimultaneousRxDataSSB_DiffNumerology_Inter_r16（ASN.1 simultaneousRxDataSSB-DiffNumerology-Inter-r16，源文件第 17712 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_SimultaneousRxDataSSB_DiffNumerology_Inter_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup4_SimultaneousRxDataSSB_DiffNumerology_Inter_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_SimultaneousRxDataSSB_DiffNumerology_Inter_r16;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasReport_r16（ASN.1 idleInactiveNR-MeasReport-r16，源文件第 17713 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasReport_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasReport_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasReport_r16;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasBeamReport_r16（ASN.1 idleInactiveNR-MeasBeamReport-r16，源文件第 17715 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasBeamReport_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasBeamReport_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasBeamReport_r16;


/**
 * @brief 枚举 MeasAndMobParametersFRX_Diff_ExtGroup5_IncreasedNumberofCSIRSPerMO_r16（ASN.1 increasedNumberofCSIRSPerMO-r16，源文件第 17718 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFRX_Diff_ExtGroup5_IncreasedNumberofCSIRSPerMO_r16 {
    MeasAndMobParametersFRX_Diff_ExtGroup5_IncreasedNumberofCSIRSPerMO_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFRX_Diff_ExtGroup5_IncreasedNumberofCSIRSPerMO_r16;


/**
 * @brief 枚举 MeasAndMobParametersFR2_2_r17_HandoverInterF_r17（ASN.1 handoverInterF-r17，源文件第 17723 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFR2_2_r17_HandoverInterF_r17 {
    MeasAndMobParametersFR2_2_r17_HandoverInterF_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFR2_2_r17_HandoverInterF_r17;


/**
 * @brief 枚举 MeasAndMobParametersFR2_2_r17_HandoverLTE_EPC_r17（ASN.1 handoverLTE-EPC-r17，源文件第 17724 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFR2_2_r17_HandoverLTE_EPC_r17 {
    MeasAndMobParametersFR2_2_r17_HandoverLTE_EPC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFR2_2_r17_HandoverLTE_EPC_r17;


/**
 * @brief 枚举 MeasAndMobParametersFR2_2_r17_HandoverLTE_5GC_r17（ASN.1 handoverLTE-5GC-r17，源文件第 17725 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFR2_2_r17_HandoverLTE_5GC_r17 {
    MeasAndMobParametersFR2_2_r17_HandoverLTE_5GC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFR2_2_r17_HandoverLTE_5GC_r17;


/**
 * @brief 枚举 MeasAndMobParametersFR2_2_r17_IdleInactiveNR_MeasReport_r17（ASN.1 idleInactiveNR-MeasReport-r17，源文件第 17726 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersFR2_2_r17_IdleInactiveNR_MeasReport_r17 {
    MeasAndMobParametersFR2_2_r17_IdleInactiveNR_MeasReport_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersFR2_2_r17_IdleInactiveNR_MeasReport_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_v1610_InterNR_MeasEUTRA_IAB_r16（ASN.1 interNR-MeasEUTRA-IAB-r16，源文件第 17745 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_v1610_InterNR_MeasEUTRA_IAB_r16 {
    MeasAndMobParametersMRDC_v1610_InterNR_MeasEUTRA_IAB_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_v1610_InterNR_MeasEUTRA_IAB_r16;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_IndependentGapConfig（ASN.1 independentGapConfig，源文件第 17761 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_IndependentGapConfig {
    MeasAndMobParametersMRDC_Common_IndependentGapConfig_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_IndependentGapConfig;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFDD_TDD_r16（ASN.1 condPSCellChangeParametersCommon-r16/condPSCellChangeFDD-TDD-r16，源文件第 17766 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFDD_TDD_r16 {
    MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFDD_TDD_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFDD_TDD_r16;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFR1_FR2_r16（ASN.1 condPSCellChangeParametersCommon-r16/condPSCellChangeFR1-FR2-r16，源文件第 17767 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFR1_FR2_r16 {
    MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFR1_FR2_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFR1_FR2_r16;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1610_PscellT312_r16（ASN.1 pscellT312-r16，源文件第 17769 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1610_PscellT312_r16 {
    MeasAndMobParametersMRDC_Common_v1610_PscellT312_r16_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1610_PscellT312_r16;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_NRDC_r17（ASN.1 condPSCellChangeParameters-r17/inter-SN-condPSCellChangeFDD-TDD-NRDC-r17，源文件第 17774 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_NRDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_NRDC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_NRDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_NRDC_r17（ASN.1 condPSCellChangeParameters-r17/inter-SN-condPSCellChangeFR1-FR2-NRDC-r17，源文件第 17775 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_NRDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_NRDC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_NRDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_ENDC_r17（ASN.1 condPSCellChangeParameters-r17/inter-SN-condPSCellChangeFDD-TDD-ENDC-r17，源文件第 17776 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_ENDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_ENDC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_ENDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_ENDC_r17（ASN.1 condPSCellChangeParameters-r17/inter-SN-condPSCellChangeFR1-FR2-ENDC-r17，源文件第 17777 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_ENDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_ENDC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_ENDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17（ASN.1 condPSCellChangeParameters-r17/mn-InitiatedCondPSCellChange-FR1FDD-ENDC-r17，源文件第 17778 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR_b8c73921 = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17（ASN.1 condPSCellChangeParameters-r17/mn-InitiatedCondPSCellChange-FR1TDD-ENDC-r17，源文件第 17779 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR_affe1c8e = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17（ASN.1 condPSCellChangeParameters-r17/mn-InitiatedCondPSCellChange-FR2TDD-ENDC-r17，源文件第 17780 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR_016e8b75 = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17（ASN.1 condPSCellChangeParameters-r17/sn-InitiatedCondPSCellChange-FR1FDD-ENDC-r17，源文件第 17781 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR_8254ebe1 = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17（ASN.1 condPSCellChangeParameters-r17/sn-InitiatedCondPSCellChange-FR1TDD-ENDC-r17，源文件第 17782 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR_da82aa36 = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17（ASN.1 condPSCellChangeParameters-r17/sn-InitiatedCondPSCellChange-FR2TDD-ENDC-r17，源文件第 17783 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR_18a62d98 = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_ENDC_r17（ASN.1 condHandoverWithSCG-ENDC-r17，源文件第 17785 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_ENDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_ENDC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_ENDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_NEDC_r17（ASN.1 condHandoverWithSCG-NEDC-r17，源文件第 17786 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_NEDC_r17 {
    MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_NEDC_r17_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_NEDC_r17;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_r18（ASN.1 mn-ConfiguredMN-TriggerSCPAC-r18，源文件第 17798 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_r18 {
    MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_r18;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredSN_TriggerSCPAC_r18（ASN.1 mn-ConfiguredSN-TriggerSCPAC-r18，源文件第 17799 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredSN_TriggerSCPAC_r18 {
    MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredSN_TriggerSCPAC_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredSN_TriggerSCPAC_r18;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredSCPAC_r18（ASN.1 sn-ConfiguredSCPAC-r18，源文件第 17800 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredSCPAC_r18 {
    MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredSCPAC_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredSCPAC_r18;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18（ASN.1 mn-ConfiguredMN-TriggerSCPAC-afterSCG-release-r18，源文件第 17801 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18 {
    MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredReferenceConfigSCPAC_r18（ASN.1 mn-ConfiguredReferenceConfigSCPAC-r18，源文件第 17802 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredReferenceConfigSCPAC_r18 {
    MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredReferenceConfigSCPAC_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredReferenceConfigSCPAC_r18;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredReferenceConfigSCPAC_r18（ASN.1 sn-ConfiguredReferenceConfigSCPAC-r18，源文件第 17803 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredReferenceConfigSCPAC_r18 {
    MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredReferenceConfigSCPAC_r18_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredReferenceConfigSCPAC_r18;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasPSCell（ASN.1 sftd-MeasPSCell，源文件第 17807 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasPSCell {
    MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasPSCell_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasPSCell;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasNR_Cell（ASN.1 sftd-MeasNR-Cell，源文件第 17808 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasNR_Cell {
    MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasNR_Cell_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasNR_Cell;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_XDD_Diff_v1560_Sftd_MeasPSCell_NEDC（ASN.1 sftd-MeasPSCell-NEDC，源文件第 17812 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_XDD_Diff_v1560_Sftd_MeasPSCell_NEDC {
    MeasAndMobParametersMRDC_XDD_Diff_v1560_Sftd_MeasPSCell_NEDC_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_XDD_Diff_v1560_Sftd_MeasPSCell_NEDC;


/**
 * @brief 枚举 MeasAndMobParametersMRDC_FRX_Diff_SimultaneousRxDataSSB_DiffNumerology（ASN.1 simultaneousRxDataSSB-DiffNumerology，源文件第 17816 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasAndMobParametersMRDC_FRX_Diff_SimultaneousRxDataSSB_DiffNumerology {
    MeasAndMobParametersMRDC_FRX_Diff_SimultaneousRxDataSSB_DiffNumerology_supported = 0, /**< ASN.1 supported */
} MeasAndMobParametersMRDC_FRX_Diff_SimultaneousRxDataSSB_DiffNumerology;


/**
 * @brief 枚举 MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC（ASN.1 tci-StatePDSCH/maxNumberConfiguredTCI-StatesPerCC，源文件第 17831 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC {
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC_n8 = 1, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC_n16 = 2, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC_n32 = 3, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC_n64 = 4, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC_n128 = 5, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC;


/**
 * @brief 枚举 MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberActiveTCI_PerBWP（ASN.1 tci-StatePDSCH/maxNumberActiveTCI-PerBWP，源文件第 17832 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberActiveTCI_PerBWP {
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberActiveTCI_PerBWP_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberActiveTCI_PerBWP_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberActiveTCI_PerBWP_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberActiveTCI_PerBWP_n8 = 3, /**< ASN.1 n8 */
} MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberActiveTCI_PerBWP;


/**
 * @brief 枚举 MIMO_ParametersPerBand_AdditionalActiveTCI_StatePDCCH（ASN.1 additionalActiveTCI-StatePDCCH，源文件第 17834 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_AdditionalActiveTCI_StatePDCCH {
    MIMO_ParametersPerBand_AdditionalActiveTCI_StatePDCCH_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_AdditionalActiveTCI_StatePDCCH;


/**
 * @brief 枚举 MIMO_ParametersPerBand_Pusch_TransCoherence（ASN.1 pusch-TransCoherence，源文件第 17835 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_Pusch_TransCoherence {
    MIMO_ParametersPerBand_Pusch_TransCoherence_nonCoherent = 0, /**< ASN.1 nonCoherent */
    MIMO_ParametersPerBand_Pusch_TransCoherence_partialCoherent = 1, /**< ASN.1 partialCoherent */
    MIMO_ParametersPerBand_Pusch_TransCoherence_fullCoherent = 2, /**< ASN.1 fullCoherent */
} MIMO_ParametersPerBand_Pusch_TransCoherence;


/**
 * @brief 枚举 MIMO_ParametersPerBand_BeamCorrespondenceWithoutUL_BeamSweeping（ASN.1 beamCorrespondenceWithoutUL-BeamSweeping，源文件第 17836 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_BeamCorrespondenceWithoutUL_BeamSweeping {
    MIMO_ParametersPerBand_BeamCorrespondenceWithoutUL_BeamSweeping_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_BeamCorrespondenceWithoutUL_BeamSweeping;


/**
 * @brief 枚举 MIMO_ParametersPerBand_PeriodicBeamReport（ASN.1 periodicBeamReport，源文件第 17837 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_PeriodicBeamReport {
    MIMO_ParametersPerBand_PeriodicBeamReport_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_PeriodicBeamReport;


/**
 * @brief 枚举 MIMO_ParametersPerBand_AperiodicBeamReport（ASN.1 aperiodicBeamReport，源文件第 17838 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_AperiodicBeamReport {
    MIMO_ParametersPerBand_AperiodicBeamReport_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_AperiodicBeamReport;


/**
 * @brief 枚举 MIMO_ParametersPerBand_Sp_BeamReportPUCCH（ASN.1 sp-BeamReportPUCCH，源文件第 17839 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_Sp_BeamReportPUCCH {
    MIMO_ParametersPerBand_Sp_BeamReportPUCCH_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_Sp_BeamReportPUCCH;


/**
 * @brief 枚举 MIMO_ParametersPerBand_Sp_BeamReportPUSCH（ASN.1 sp-BeamReportPUSCH，源文件第 17840 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_Sp_BeamReportPUSCH {
    MIMO_ParametersPerBand_Sp_BeamReportPUSCH_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_Sp_BeamReportPUSCH;


/**
 * @brief 枚举 MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_15kHz（ASN.1 maxNumberRxTxBeamSwitchDL/scs-15kHz，源文件第 17844 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_15kHz {
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_15kHz_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_15kHz_n7 = 1, /**< ASN.1 n7 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_15kHz_n14 = 2, /**< ASN.1 n14 */
} MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_15kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_30kHz（ASN.1 maxNumberRxTxBeamSwitchDL/scs-30kHz，源文件第 17845 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_30kHz {
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_30kHz_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_30kHz_n7 = 1, /**< ASN.1 n7 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_30kHz_n14 = 2, /**< ASN.1 n14 */
} MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_30kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_60kHz（ASN.1 maxNumberRxTxBeamSwitchDL/scs-60kHz，源文件第 17846 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_60kHz {
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_60kHz_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_60kHz_n7 = 1, /**< ASN.1 n7 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_60kHz_n14 = 2, /**< ASN.1 n14 */
} MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_60kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_120kHz（ASN.1 maxNumberRxTxBeamSwitchDL/scs-120kHz，源文件第 17847 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_120kHz {
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_120kHz_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_120kHz_n7 = 1, /**< ASN.1 n7 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_120kHz_n14 = 2, /**< ASN.1 n14 */
} MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_120kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_240kHz（ASN.1 maxNumberRxTxBeamSwitchDL/scs-240kHz，源文件第 17848 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_240kHz {
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_240kHz_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_240kHz_n7 = 1, /**< ASN.1 n7 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_240kHz_n14 = 2, /**< ASN.1 n14 */
} MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_240kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_MaxNumberNonGroupBeamReporting（ASN.1 maxNumberNonGroupBeamReporting，源文件第 17850 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_MaxNumberNonGroupBeamReporting {
    MIMO_ParametersPerBand_MaxNumberNonGroupBeamReporting_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_MaxNumberNonGroupBeamReporting_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_MaxNumberNonGroupBeamReporting_n4 = 2, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_MaxNumberNonGroupBeamReporting;


/**
 * @brief 枚举 MIMO_ParametersPerBand_GroupBeamReporting（ASN.1 groupBeamReporting，源文件第 17851 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_GroupBeamReporting {
    MIMO_ParametersPerBand_GroupBeamReporting_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_GroupBeamReporting;


/**
 * @brief 枚举 MIMO_ParametersPerBand_UplinkBeamManagement_MaxNumberSRS_ResourcePerSet_BM（ASN.1 uplinkBeamManagement/maxNumberSRS-ResourcePerSet-BM，源文件第 17853 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_UplinkBeamManagement_MaxNumberSRS_ResourcePerSet_BM {
    MIMO_ParametersPerBand_UplinkBeamManagement_MaxNumberSRS_ResourcePerSet_BM_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_UplinkBeamManagement_MaxNumberSRS_ResourcePerSet_BM_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_UplinkBeamManagement_MaxNumberSRS_ResourcePerSet_BM_n8 = 2, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_UplinkBeamManagement_MaxNumberSRS_ResourcePerSet_BM_n16 = 3, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_UplinkBeamManagement_MaxNumberSRS_ResourcePerSet_BM;


/**
 * @brief 枚举 MIMO_ParametersPerBand_Dummy2（ASN.1 dummy2，源文件第 17859 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_Dummy2 {
    MIMO_ParametersPerBand_Dummy2_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_Dummy2;


/**
 * @brief 枚举 MIMO_ParametersPerBand_TwoPortsPTRS_UL（ASN.1 twoPortsPTRS-UL，源文件第 17860 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_TwoPortsPTRS_UL {
    MIMO_ParametersPerBand_TwoPortsPTRS_UL_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_TwoPortsPTRS_UL;


/**
 * @brief 枚举 MIMO_ParametersPerBand_BeamReportTiming_Scs_15kHz（ASN.1 beamReportTiming/scs-15kHz，源文件第 17864 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_BeamReportTiming_Scs_15kHz {
    MIMO_ParametersPerBand_BeamReportTiming_Scs_15kHz_sym2 = 0, /**< ASN.1 sym2 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_15kHz_sym4 = 1, /**< ASN.1 sym4 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_15kHz_sym8 = 2, /**< ASN.1 sym8 */
} MIMO_ParametersPerBand_BeamReportTiming_Scs_15kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_BeamReportTiming_Scs_30kHz（ASN.1 beamReportTiming/scs-30kHz，源文件第 17865 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_BeamReportTiming_Scs_30kHz {
    MIMO_ParametersPerBand_BeamReportTiming_Scs_30kHz_sym4 = 0, /**< ASN.1 sym4 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_30kHz_sym8 = 1, /**< ASN.1 sym8 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_30kHz_sym14 = 2, /**< ASN.1 sym14 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_30kHz_sym28 = 3, /**< ASN.1 sym28 */
} MIMO_ParametersPerBand_BeamReportTiming_Scs_30kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_BeamReportTiming_Scs_60kHz（ASN.1 beamReportTiming/scs-60kHz，源文件第 17866 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_BeamReportTiming_Scs_60kHz {
    MIMO_ParametersPerBand_BeamReportTiming_Scs_60kHz_sym8 = 0, /**< ASN.1 sym8 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_60kHz_sym14 = 1, /**< ASN.1 sym14 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_60kHz_sym28 = 2, /**< ASN.1 sym28 */
} MIMO_ParametersPerBand_BeamReportTiming_Scs_60kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_BeamReportTiming_Scs_120kHz（ASN.1 beamReportTiming/scs-120kHz，源文件第 17867 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_BeamReportTiming_Scs_120kHz {
    MIMO_ParametersPerBand_BeamReportTiming_Scs_120kHz_sym14 = 0, /**< ASN.1 sym14 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_120kHz_sym28 = 1, /**< ASN.1 sym28 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_120kHz_sym56 = 2, /**< ASN.1 sym56 */
} MIMO_ParametersPerBand_BeamReportTiming_Scs_120kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_AperiodicTRS（ASN.1 aperiodicTRS，源文件第 17882 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_AperiodicTRS {
    MIMO_ParametersPerBand_AperiodicTRS_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_AperiodicTRS;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup1_Dummy6（ASN.1 dummy6，源文件第 17885 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup1_Dummy6 {
    MIMO_ParametersPerBand_ExtGroup1_Dummy6_trueVal = 0, /**< ASN.1 trueVal */
} MIMO_ParametersPerBand_ExtGroup1_Dummy6;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_60kHz（ASN.1 beamSwitchTiming/scs-60kHz，源文件第 17888 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_60kHz {
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_60kHz_sym14 = 0, /**< ASN.1 sym14 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_60kHz_sym28 = 1, /**< ASN.1 sym28 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_60kHz_sym48 = 2, /**< ASN.1 sym48 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_60kHz_sym224 = 3, /**< ASN.1 sym224 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_60kHz_sym336 = 4, /**< ASN.1 sym336 */
} MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_60kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_120kHz（ASN.1 beamSwitchTiming/scs-120kHz，源文件第 17889 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_120kHz {
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_120kHz_sym14 = 0, /**< ASN.1 sym14 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_120kHz_sym28 = 1, /**< ASN.1 sym28 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_120kHz_sym48 = 2, /**< ASN.1 sym48 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_120kHz_sym224 = 3, /**< ASN.1 sym224 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_120kHz_sym336 = 4, /**< ASN.1 sym336 */
} MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_120kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_DefaultQCL_TwoTCI_r16（ASN.1 defaultQCL-TwoTCI-r16，源文件第 17901 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_DefaultQCL_TwoTCI_r16 {
    MIMO_ParametersPerBand_ExtGroup2_DefaultQCL_TwoTCI_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_DefaultQCL_TwoTCI_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_Simul_SpatialRelationUpdatePUCCHResGroup_r16（ASN.1 simul-SpatialRelationUpdatePUCCHResGroup-r16，源文件第 17904 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_Simul_SpatialRelationUpdatePUCCHResGroup_r16 {
    MIMO_ParametersPerBand_ExtGroup2_Simul_SpatialRelationUpdatePUCCHResGroup_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_Simul_SpatialRelationUpdatePUCCHResGroup_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_MaxNumberSCellBFR_r16（ASN.1 maxNumberSCellBFR-r16，源文件第 17907 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_MaxNumberSCellBFR_r16 {
    MIMO_ParametersPerBand_ExtGroup2_MaxNumberSCellBFR_r16_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup2_MaxNumberSCellBFR_r16_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup2_MaxNumberSCellBFR_r16_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup2_MaxNumberSCellBFR_r16_n8 = 3, /**< ASN.1 n8 */
} MIMO_ParametersPerBand_ExtGroup2_MaxNumberSCellBFR_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_SimultaneousReceptionDiffTypeD_r16（ASN.1 simultaneousReceptionDiffTypeD-r16，源文件第 17910 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_SimultaneousReceptionDiffTypeD_r16 {
    MIMO_ParametersPerBand_ExtGroup2_SimultaneousReceptionDiffTypeD_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_SimultaneousReceptionDiffTypeD_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_OneTx_CMR_r16（ASN.1 ssb-csirs-SINR-measurement-r16/maxNumberSSB-CSIRS-OneTx-CMR-r16，源文件第 17913 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_OneTx_CMR_r16 {
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_OneTx_CMR_r16_n8 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_OneTx_CMR_r16_n16 = 1, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_OneTx_CMR_r16_n32 = 2, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_OneTx_CMR_r16_n64 = 3, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_OneTx_CMR_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_r16（ASN.1 ssb-csirs-SINR-measurement-r16/maxNumberCSI-IM-NZP-IMR-res-r16，源文件第 17914 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_r16 {
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_r16_n8 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_r16_n16 = 1, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_r16_n32 = 2, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_r16_n64 = 3, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16（ASN.1 ssb-csirs-SINR-measurement-r16/maxNumberCSIRS-2Tx-res-r16，源文件第 17915 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16 {
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16_n0 = 0, /**< ASN.1 n0 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16_n8 = 2, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16_n16 = 3, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16_n32 = 4, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16_n64 = 5, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16（ASN.1 ssb-csirs-SINR-measurement-r16/maxNumberSSB-CSIRS-res-r16，源文件第 17916 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16 {
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16_n8 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16_n16 = 1, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16_n32 = 2, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16_n64 = 3, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16_n128 = 4, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16（ASN.1 ssb-csirs-SINR-measurement-r16/maxNumberCSI-IM-NZP-IMR-res-mem-r16，源文件第 17917 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16 {
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16_n8 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16_n16 = 1, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16_n32 = 2, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16_n64 = 3, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16_n128 = 4, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedCSI_RS_Density_CMR_r16（ASN.1 ssb-csirs-SINR-measurement-r16/supportedCSI-RS-Density-CMR-r16，源文件第 17918 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedCSI_RS_Density_CMR_r16 {
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedCSI_RS_Density_CMR_r16_one = 0, /**< ASN.1 one */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedCSI_RS_Density_CMR_r16_three = 1, /**< ASN.1 three */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedCSI_RS_Density_CMR_r16_oneAndThree = 2, /**< ASN.1 oneAndThree */
} MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedCSI_RS_Density_CMR_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16（ASN.1 ssb-csirs-SINR-measurement-r16/maxNumberAperiodicCSI-RS-Res-r16，源文件第 17919 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16 {
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16_n8 = 2, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16_n16 = 3, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16_n32 = 4, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16_n64 = 5, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedSINR_meas_r16（ASN.1 ssb-csirs-SINR-measurement-r16/supportedSINR-meas-r16，源文件第 17920 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedSINR_meas_r16 {
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedSINR_meas_r16_ssbWithCSI_IM = 0, /**< ASN.1 ssbWithCSI-IM */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedSINR_meas_r16_ssbWithNZP_IMR = 1, /**< ASN.1 ssbWithNZP-IMR */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedSINR_meas_r16_csirsWithNZP_IMR = 2, /**< ASN.1 csirsWithNZP-IMR */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedSINR_meas_r16_csi_RSWithoutIMR = 3, /**< ASN.1 csi-RSWithoutIMR */
} MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedSINR_meas_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_NonGroupSINR_reporting_r16（ASN.1 nonGroupSINR-reporting-r16，源文件第 17923 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_NonGroupSINR_reporting_r16 {
    MIMO_ParametersPerBand_ExtGroup2_NonGroupSINR_reporting_r16_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup2_NonGroupSINR_reporting_r16_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup2_NonGroupSINR_reporting_r16_n4 = 2, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup2_NonGroupSINR_reporting_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_GroupSINR_reporting_r16（ASN.1 groupSINR-reporting-r16，源文件第 17925 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_GroupSINR_reporting_r16 {
    MIMO_ParametersPerBand_ExtGroup2_GroupSINR_reporting_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_GroupSINR_reporting_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OverlapPDSCHsInTimePartiallyFreq_r16（ASN.1 multiDCI-multiTRP-Parameters-r16/overlapPDSCHsInTimePartiallyFreq-r16，源文件第 17931 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OverlapPDSCHsInTimePartiallyFreq_r16 {
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OverlapPDSCHsInTimePartiallyFreq_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OverlapPDSCHsInTimePartiallyFreq_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportPDCCH_ToPDSCH_r16（ASN.1 multiDCI-multiTRP-Parameters-r16/outOfOrderOperationDL-r16/supportPDCCH-ToPDSCH-r16，源文件第 17934 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportPDCCH_ToPDSCH_r16 {
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportP_92a8369d = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportPDCCH_ToPDSCH_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportPDSCH_ToHARQ_ACK_r16（ASN.1 multiDCI-multiTRP-Parameters-r16/outOfOrderOperationDL-r16/supportPDSCH-ToHARQ-ACK-r16，源文件第 17935 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportPDSCH_ToHARQ_ACK_r16 {
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportP_8d0745cd = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportPDSCH_ToHARQ_ACK_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationUL_r16（ASN.1 multiDCI-multiTRP-Parameters-r16/outOfOrderOperationUL-r16，源文件第 17938 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationUL_r16 {
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationUL_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationUL_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_SeparateCRS_RateMatching_r16（ASN.1 multiDCI-multiTRP-Parameters-r16/separateCRS-RateMatching-r16，源文件第 17940 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_SeparateCRS_RateMatching_r16 {
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_SeparateCRS_RateMatching_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_SeparateCRS_RateMatching_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_DefaultQCL_PerCORESETPoolIndex_r16（ASN.1 multiDCI-multiTRP-Parameters-r16/defaultQCL-PerCORESETPoolIndex-r16，源文件第 17942 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_DefaultQCL_PerCORESETPoolIndex_r16 {
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_DefaultQCL_PerCORESETPoolIndex_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_DefaultQCL_PerCORESETPoolIndex_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_c1d091ea（ASN.1 multiDCI-multiTRP-Parameters-r16/maxNumberActivatedTCI-States-r16/maxNumberPerCORESET-Pool-r16，源文件第 17945 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_c1d091ea {
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_c1d091ea_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_c1d091ea_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_c1d091ea_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_c1d091ea_n8 = 3, /**< ASN.1 n8 */
} MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_c1d091ea;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_df654597（ASN.1 multiDCI-multiTRP-Parameters-r16/maxNumberActivatedTCI-States-r16/maxTotalNumberAcrossCORESET-Pool-r16，源文件第 17946 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_df654597 {
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_df654597_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_df654597_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_df654597_n8 = 2, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_df654597_n16 = 3, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_df654597;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportNewDMRS_Port_r16（ASN.1 singleDCI-SDM-scheme-Parameters-r16/supportNewDMRS-Port-r16，源文件第 17951 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportNewDMRS_Port_r16 {
    MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportNewDMRS_Port_r16_supported1 = 0, /**< ASN.1 supported1 */
    MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportNewDMRS_Port_r16_supported2 = 1, /**< ASN.1 supported2 */
    MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportNewDMRS_Port_r16_supported3 = 2, /**< ASN.1 supported3 */
} MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportNewDMRS_Port_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportTwoPortDL_PTRS_r16（ASN.1 singleDCI-SDM-scheme-Parameters-r16/supportTwoPortDL-PTRS-r16，源文件第 17953 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportTwoPortDL_PTRS_r16 {
    MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportTwoPortDL_PTRS_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportTwoPortDL_PTRS_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_SupportFDM_SchemeA_r16（ASN.1 supportFDM-SchemeA-r16，源文件第 17956 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_SupportFDM_SchemeA_r16 {
    MIMO_ParametersPerBand_ExtGroup2_SupportFDM_SchemeA_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_SupportFDM_SchemeA_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_SupportCodeWordSoftCombining_r16（ASN.1 supportCodeWordSoftCombining-r16，源文件第 17958 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_SupportCodeWordSoftCombining_r16 {
    MIMO_ParametersPerBand_ExtGroup2_SupportCodeWordSoftCombining_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_SupportCodeWordSoftCombining_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_SupportTDM_SchemeA_r16（ASN.1 supportTDM-SchemeA-r16，源文件第 17960 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_SupportTDM_SchemeA_r16 {
    MIMO_ParametersPerBand_ExtGroup2_SupportTDM_SchemeA_r16_kb3 = 0, /**< ASN.1 kb3 */
    MIMO_ParametersPerBand_ExtGroup2_SupportTDM_SchemeA_r16_kb5 = 1, /**< ASN.1 kb5 */
    MIMO_ParametersPerBand_ExtGroup2_SupportTDM_SchemeA_r16_kb10 = 2, /**< ASN.1 kb10 */
    MIMO_ParametersPerBand_ExtGroup2_SupportTDM_SchemeA_r16_kb20 = 3, /**< ASN.1 kb20 */
    MIMO_ParametersPerBand_ExtGroup2_SupportTDM_SchemeA_r16_noRestriction = 4, /**< ASN.1 noRestriction */
} MIMO_ParametersPerBand_ExtGroup2_SupportTDM_SchemeA_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16（ASN.1 supportInter-slotTDM-r16/supportRepNumPDSCH-TDRA-r16，源文件第 17963 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16 {
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16_n3 = 1, /**< ASN.1 n3 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16_n5 = 3, /**< ASN.1 n5 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16_n6 = 4, /**< ASN.1 n6 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16_n7 = 5, /**< ASN.1 n7 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16_n8 = 6, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16_n16 = 7, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16（ASN.1 supportInter-slotTDM-r16/maxTBS-Size-r16，源文件第 17964 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16 {
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16_kb3 = 0, /**< ASN.1 kb3 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16_kb5 = 1, /**< ASN.1 kb5 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16_kb10 = 2, /**< ASN.1 kb10 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16_kb20 = 3, /**< ASN.1 kb20 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16_noRestriction = 4, /**< ASN.1 noRestriction */
} MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PDSCH_r16（ASN.1 lowPAPR-DMRS-PDSCH-r16，源文件第 17968 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PDSCH_r16 {
    MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PDSCH_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PDSCH_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithoutPrecoding_r16（ASN.1 lowPAPR-DMRS-PUSCHwithoutPrecoding-r16，源文件第 17970 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithoutPrecoding_r16 {
    MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithoutPrecoding_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithoutPrecoding_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUCCH_r16（ASN.1 lowPAPR-DMRS-PUCCH-r16，源文件第 17972 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUCCH_r16 {
    MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUCCH_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUCCH_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithPrecoding_r16（ASN.1 lowPAPR-DMRS-PUSCHwithPrecoding-r16，源文件第 17974 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithPrecoding_r16 {
    MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithPrecoding_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithPrecoding_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceSSB_based_r16（ASN.1 beamCorrespondenceSSB-based-r16，源文件第 17982 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceSSB_based_r16 {
    MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceSSB_based_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceSSB_based_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceCSI_RS_based_r16（ASN.1 beamCorrespondenceCSI-RS-based-r16，源文件第 17984 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceCSI_RS_based_r16 {
    MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceCSI_RS_based_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceCSI_RS_based_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_60kHz_r16（ASN.1 beamSwitchTiming-r16/scs-60kHz-r16，源文件第 17986 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_60kHz_r16 {
    MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_60kHz_r16_sym224 = 0, /**< ASN.1 sym224 */
    MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_60kHz_r16_sym336 = 1, /**< ASN.1 sym336 */
} MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_60kHz_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_120kHz_r16（ASN.1 beamSwitchTiming-r16/scs-120kHz-r16，源文件第 17987 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_120kHz_r16 {
    MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_120kHz_r16_sym224 = 0, /**< ASN.1 sym224 */
    MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_120kHz_r16_sym336 = 1, /**< ASN.1 sym336 */
} MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_120kHz_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat1_2OFDM_syms_r16（ASN.1 semi-PersistentL1-SINR-Report-PUCCH-r16/supportReportFormat1-2OFDM-syms-r16，源文件第 17993 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat1_2OFDM_syms_r16 {
    MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat1_2OFDM_syms_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat1_2OFDM_syms_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat4_14OFDM_syms_r16（ASN.1 semi-PersistentL1-SINR-Report-PUCCH-r16/supportReportFormat4-14OFDM-syms-r16，源文件第 17994 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat4_14OFDM_syms_r16 {
    MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat4_14OFDM_syms_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat4_14OFDM_syms_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUSCH_r16（ASN.1 semi-PersistentL1-SINR-Report-PUSCH-r16，源文件第 17997 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUSCH_r16 {
    MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUSCH_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUSCH_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640（ASN.1 spatialRelations-v1640/maxNumberConfiguredSpatialRelations-v1640，源文件第 18002 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640 {
    MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640_n96 = 0, /**< ASN.1 n96 */
    MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640_n128 = 1, /**< ASN.1 n128 */
    MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640_n160 = 2, /**< ASN.1 n160 */
    MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640_n192 = 3, /**< ASN.1 n192 */
    MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640_n224 = 4, /**< ASN.1 n224 */
    MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640_n256 = 5, /**< ASN.1 n256 */
    MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640_n288 = 6, /**< ASN.1 n288 */
    MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640_n320 = 7, /**< ASN.1 n320 */
} MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup4_Support64CandidateBeamRS_BFR_r16（ASN.1 support64CandidateBeamRS-BFR-r16，源文件第 18005 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup4_Support64CandidateBeamRS_BFR_r16 {
    MIMO_ParametersPerBand_ExtGroup4_Support64CandidateBeamRS_BFR_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup4_Support64CandidateBeamRS_BFR_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup5_MaxMIMO_LayersForMulti_DCI_mTRP_r16（ASN.1 maxMIMO-LayersForMulti-DCI-mTRP-r16，源文件第 18009 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup5_MaxMIMO_LayersForMulti_DCI_mTRP_r16 {
    MIMO_ParametersPerBand_ExtGroup5_MaxMIMO_LayersForMulti_DCI_mTRP_r16_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup5_MaxMIMO_LayersForMulti_DCI_mTRP_r16;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_increasedRepetition_r17（ASN.1 srs-increasedRepetition-r17，源文件第 18016 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_increasedRepetition_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_increasedRepetition_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_Srs_increasedRepetition_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_partialFrequencySounding_r17（ASN.1 srs-partialFrequencySounding-r17，源文件第 18018 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_partialFrequencySounding_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_partialFrequencySounding_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_Srs_partialFrequencySounding_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_startRB_locationHoppingPartial_r17（ASN.1 srs-startRB-locationHoppingPartial-r17，源文件第 18020 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_startRB_locationHoppingPartial_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_startRB_locationHoppingPartial_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_Srs_startRB_locationHoppingPartial_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_combEight_r17（ASN.1 srs-combEight-r17，源文件第 18022 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_combEight_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_combEight_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_Srs_combEight_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoCSI_RS_r17（ASN.1 mTRP-PUSCH-twoCSI-RS-r17，源文件第 18026 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoCSI_RS_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoCSI_RS_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoCSI_RS_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_InterSlot_r17（ASN.1 mTRP-PUCCH-InterSlot-r17，源文件第 18028 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_InterSlot_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_InterSlot_r17_pf0_2 = 0, /**< ASN.1 pf0-2 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_InterSlot_r17_pf1_3_4 = 1, /**< ASN.1 pf1-3-4 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_InterSlot_r17_pf0_4 = 2, /**< ASN.1 pf0-4 */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_InterSlot_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_CyclicMapping_r17（ASN.1 mTRP-PUCCH-CyclicMapping-r17，源文件第 18030 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_CyclicMapping_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_CyclicMapping_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_CyclicMapping_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_SecondTPC_r17（ASN.1 mTRP-PUCCH-SecondTPC-r17，源文件第 18032 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_SecondTPC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_SecondTPC_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_SecondTPC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesPerSetPerBWP_r17（ASN.1 mTRP-BFR-twoBFD-RS-Set-r17/maxBFD-RS-resourcesPerSetPerBWP-r17，源文件第 18035 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesPerSetPerBWP_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesPerSetPerBWP_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesPerSetPerBWP_r17_n2 = 1, /**< ASN.1 n2 */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesPerSetPerBWP_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesAcrossSetsPerBWP_r17（ASN.1 mTRP-BFR-twoBFD-RS-Set-r17/maxBFD-RS-resourcesAcrossSetsPerBWP-r17，源文件第 18037 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesAcrossSetsPerBWP_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesAcrossSetsPerBWP_r17_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesAcrossSetsPerBWP_r17_n3 = 1, /**< ASN.1 n3 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesAcrossSetsPerBWP_r17_n4 = 2, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesAcrossSetsPerBWP_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_PUCCH_SR_perCG_r17（ASN.1 mTRP-BFR-PUCCH-SR-perCG-r17，源文件第 18040 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_PUCCH_SR_perCG_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_PUCCH_SR_perCG_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_PUCCH_SR_perCG_r17_n2 = 1, /**< ASN.1 n2 */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_PUCCH_SR_perCG_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_association_PUCCH_SR_r17（ASN.1 mTRP-BFR-association-PUCCH-SR-r17，源文件第 18042 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_association_PUCCH_SR_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_association_PUCCH_SR_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_association_PUCCH_SR_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Sfn_SimulTwoTCI_AcrossMultiCC_r17（ASN.1 sfn-SimulTwoTCI-AcrossMultiCC-r17，源文件第 18044 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Sfn_SimulTwoTCI_AcrossMultiCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Sfn_SimulTwoTCI_AcrossMultiCC_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_Sfn_SimulTwoTCI_AcrossMultiCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultDL_BeamSetup_r17（ASN.1 sfn-DefaultDL-BeamSetup-r17，源文件第 18046 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultDL_BeamSetup_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultDL_BeamSetup_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultDL_BeamSetup_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultUL_BeamSetup_r17（ASN.1 sfn-DefaultUL-BeamSetup-r17，源文件第 18048 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultUL_BeamSetup_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultUL_BeamSetup_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultUL_BeamSetup_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringOffset_r17（ASN.1 srs-TriggeringOffset-r17，源文件第 18050 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringOffset_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringOffset_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringOffset_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringOffset_r17_n4 = 2, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringOffset_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringDCI_r17（ASN.1 srs-TriggeringDCI-r17，源文件第 18052 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringDCI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringDCI_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringDCI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17（ASN.1 unifiedJointTCI-r17/maxConfiguredJointTCI-r17，源文件第 18057 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17_n8 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17_n12 = 1, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17_n16 = 2, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17_n24 = 3, /**< ASN.1 n24 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17_n32 = 4, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17_n48 = 5, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17_n64 = 6, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17_n128 = 7, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17（ASN.1 unifiedJointTCI-r17/maxActivatedTCIAcrossCC-r17，源文件第 18058 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17_n16 = 4, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17（ASN.1 unifiedJointTCI-multiMAC-CE-r17/minBeamApplicationTime-r17，源文件第 18062 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n7 = 3, /**< ASN.1 n7 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n14 = 4, /**< ASN.1 n14 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n28 = 5, /**< ASN.1 n28 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n42 = 6, /**< ASN.1 n42 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n56 = 7, /**< ASN.1 n56 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n70 = 8, /**< ASN.1 n70 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n84 = 9, /**< ASN.1 n84 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n98 = 10, /**< ASN.1 n98 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n112 = 11, /**< ASN.1 n112 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n224 = 12, /**< ASN.1 n224 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n336 = 13, /**< ASN.1 n336 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC（ASN.1 unifiedJointTCI-multiMAC-CE-r17/maxNumMAC-CE-PerCC，源文件第 18064 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC_n3 = 1, /**< ASN.1 n3 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC_n5 = 3, /**< ASN.1 n5 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC_n6 = 4, /**< ASN.1 n6 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC_n7 = 5, /**< ASN.1 n7 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC_n8 = 6, /**< ASN.1 n8 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_perBWP_CA_r17（ASN.1 unifiedJointTCI-perBWP-CA-r17，源文件第 18067 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_perBWP_CA_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_perBWP_CA_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_perBWP_CA_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_ListSharingCA_r17（ASN.1 unifiedJointTCI-ListSharingCA-r17，源文件第 18069 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_ListSharingCA_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_ListSharingCA_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_ListSharingCA_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_ListSharingCA_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_ListSharingCA_r17_n8 = 3, /**< ASN.1 n8 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_ListSharingCA_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_commonMultiCC_r17（ASN.1 unifiedJointTCI-commonMultiCC-r17，源文件第 18071 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_commonMultiCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_commonMultiCC_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_commonMultiCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_BeamAlignDLRS_r17（ASN.1 unifiedJointTCI-BeamAlignDLRS-r17，源文件第 18073 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_BeamAlignDLRS_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_BeamAlignDLRS_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_BeamAlignDLRS_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_PC_association_r17（ASN.1 unifiedJointTCI-PC-association-r17，源文件第 18075 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_PC_association_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_PC_association_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_PC_association_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_r17（ASN.1 unifiedJointTCI-Legacy-r17，源文件第 18077 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_SRS_r17（ASN.1 unifiedJointTCI-Legacy-SRS-r17，源文件第 18079 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_SRS_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_SRS_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_SRS_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_CORESET0_r17（ASN.1 unifiedJointTCI-Legacy-CORESET0-r17，源文件第 18081 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_CORESET0_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_CORESET0_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_CORESET0_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_SCellBFR_r17（ASN.1 unifiedJointTCI-SCellBFR-r17，源文件第 18083 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_SCellBFR_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_SCellBFR_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_SCellBFR_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_PerCC_r17（ASN.1 unifiedJointTCI-InterCell-r17/additionalMAC-CE-PerCC-r17，源文件第 18086 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_PerCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_PerCC_r17_n0 = 0, /**< ASN.1 n0 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_PerCC_r17_n1 = 1, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_PerCC_r17_n2 = 2, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_PerCC_r17_n4 = 3, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_PerCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_AcrossCC_r17（ASN.1 unifiedJointTCI-InterCell-r17/additionalMAC-CE-AcrossCC-r17，源文件第 18087 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_AcrossCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_AcrossCC_r17_n0 = 0, /**< ASN.1 n0 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_AcrossCC_r17_n1 = 1, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_AcrossCC_r17_n2 = 2, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_AcrossCC_r17_n4 = 3, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_AcrossCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17（ASN.1 unifiedSeparateTCI-r17/maxConfiguredDL-TCI-r17，源文件第 18091 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17_n8 = 1, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17_n12 = 2, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17_n16 = 3, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17_n24 = 4, /**< ASN.1 n24 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17_n32 = 5, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17_n48 = 6, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17_n64 = 7, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17_n128 = 8, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17（ASN.1 unifiedSeparateTCI-r17/maxConfiguredUL-TCI-r17，源文件第 18092 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17_n8 = 1, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17_n12 = 2, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17_n16 = 3, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17_n24 = 4, /**< ASN.1 n24 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17_n32 = 5, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17_n48 = 6, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17_n64 = 7, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17（ASN.1 unifiedSeparateTCI-r17/maxActivatedDL-TCIAcrossCC-r17，源文件第 18093 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17_n16 = 4, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17（ASN.1 unifiedSeparateTCI-r17/maxActivatedUL-TCIAcrossCC-r17，源文件第 18094 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17_n16 = 4, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17（ASN.1 unifiedSeparateTCI-multiMAC-CE-r17/minBeamApplicationTime-r17，源文件第 18098 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n7 = 3, /**< ASN.1 n7 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n14 = 4, /**< ASN.1 n14 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n28 = 5, /**< ASN.1 n28 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n42 = 6, /**< ASN.1 n42 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n56 = 7, /**< ASN.1 n56 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n70 = 8, /**< ASN.1 n70 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n84 = 9, /**< ASN.1 n84 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n98 = 10, /**< ASN.1 n98 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n112 = 11, /**< ASN.1 n112 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n224 = 12, /**< ASN.1 n224 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17_n336 = 13, /**< ASN.1 n336 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_perBWP_CA_r17（ASN.1 unifiedSeparateTCI-perBWP-CA-r17，源文件第 18103 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_perBWP_CA_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_perBWP_CA_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_perBWP_CA_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListDL_TCI_r17（ASN.1 unifiedSeparateTCI-ListSharingCA-r17/maxNumListDL-TCI-r17，源文件第 18106 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListDL_TCI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListDL_TCI_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListDL_TCI_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListDL_TCI_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListDL_TCI_r17_n8 = 3, /**< ASN.1 n8 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListDL_TCI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListUL_TCI_r17（ASN.1 unifiedSeparateTCI-ListSharingCA-r17/maxNumListUL-TCI-r17，源文件第 18107 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListUL_TCI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListUL_TCI_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListUL_TCI_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListUL_TCI_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListUL_TCI_r17_n8 = 3, /**< ASN.1 n8 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListUL_TCI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_commonMultiCC_r17（ASN.1 unifiedSeparateTCI-commonMultiCC-r17，源文件第 18110 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_commonMultiCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_commonMultiCC_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_commonMultiCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_PerCC_r17（ASN.1 unifiedSeparateTCI-InterCell-r17/k-DL-PerCC-r17，源文件第 18113 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_PerCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_PerCC_r17_n0 = 0, /**< ASN.1 n0 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_PerCC_r17_n1 = 1, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_PerCC_r17_n2 = 2, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_PerCC_r17_n4 = 3, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_PerCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_PerCC_r17（ASN.1 unifiedSeparateTCI-InterCell-r17/k-UL-PerCC-r17，源文件第 18114 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_PerCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_PerCC_r17_n0 = 0, /**< ASN.1 n0 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_PerCC_r17_n1 = 1, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_PerCC_r17_n2 = 2, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_PerCC_r17_n4 = 3, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_PerCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_AcrossCC_r17（ASN.1 unifiedSeparateTCI-InterCell-r17/k-DL-AcrossCC-r17，源文件第 18115 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_AcrossCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_AcrossCC_r17_n0 = 0, /**< ASN.1 n0 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_AcrossCC_r17_n1 = 1, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_AcrossCC_r17_n2 = 2, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_AcrossCC_r17_n4 = 3, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_AcrossCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_AcrossCC_r17（ASN.1 unifiedSeparateTCI-InterCell-r17/k-UL-AcrossCC-r17，源文件第 18116 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_AcrossCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_AcrossCC_r17_n0 = 0, /**< ASN.1 n0 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_AcrossCC_r17_n1 = 1, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_AcrossCC_r17_n2 = 2, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_AcrossCC_r17_n4 = 3, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_AcrossCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17_MaxNumSSB_ResourceL1_RSRP_AcrossCC_r17（ASN.1 unifiedJointTCI-mTRP-InterCell-BM-r17/maxNumSSB-ResourceL1-RSRP-AcrossCC-r17，源文件第 18121 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17_MaxNumSSB_ResourceL1_RSRP_AcrossCC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17_MaxNumSSB_ResourceL1_RSRP_AcrossCC_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17_MaxNumSSB_ResourceL1_RSRP_AcrossCC_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17_MaxNumSSB_ResourceL1_RSRP_AcrossCC_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17_MaxNumSSB_ResourceL1_RSRP_AcrossCC_r17_n8 = 3, /**< ASN.1 n8 */
} MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17_MaxNumSSB_ResourceL1_RSRP_AcrossCC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17（ASN.1 mpe-Mitigation-r17/maxNumConfRS-r17，源文件第 18126 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n12 = 4, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n16 = 5, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n28 = 6, /**< ASN.1 n28 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n32 = 7, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n48 = 8, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17_n64 = 9, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal1_r17（ASN.1 srs-PortReport-r17/capVal1-r17，源文件第 18130 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal1_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal1_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal1_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal1_r17_n4 = 2, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal1_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal2_r17（ASN.1 srs-PortReport-r17/capVal2-r17，源文件第 18131 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal2_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal2_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal2_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal2_r17_n4 = 2, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal2_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal3_r17（ASN.1 srs-PortReport-r17/capVal3-r17，源文件第 18132 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal3_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal3_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal3_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal3_r17_n4 = 2, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal3_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal4_r17（ASN.1 srs-PortReport-r17/capVal4-r17，源文件第 18133 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal4_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal4_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal4_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal4_r17_n4 = 2, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal4_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_individual_r17（ASN.1 mTRP-PDCCH-individual-r17，源文件第 18136 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_individual_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_individual_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_individual_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_anySpan_3Symbols_r17（ASN.1 mTRP-PDCCH-anySpan-3Symbols-r17，源文件第 18138 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_anySpan_3Symbols_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_anySpan_3Symbols_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_anySpan_3Symbols_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_TwoQCL_TypeD_r17（ASN.1 mTRP-PDCCH-TwoQCL-TypeD-r17，源文件第 18140 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_TwoQCL_TypeD_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_TwoQCL_TypeD_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_TwoQCL_TypeD_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_cyclicMapping_r17（ASN.1 mTRP-PUSCH-cyclicMapping-r17，源文件第 18150 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_cyclicMapping_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_cyclicMapping_r17_typeA = 0, /**< ASN.1 typeA */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_cyclicMapping_r17_typeB = 1, /**< ASN.1 typeB */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_cyclicMapping_r17_both = 2, /**< ASN.1 both */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_cyclicMapping_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_secondTPC_r17（ASN.1 mTRP-PUSCH-secondTPC-r17，源文件第 18152 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_secondTPC_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_secondTPC_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_secondTPC_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoPHR_Reporting_r17（ASN.1 mTRP-PUSCH-twoPHR-Reporting-r17，源文件第 18154 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoPHR_Reporting_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoPHR_Reporting_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoPHR_Reporting_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_A_CSI_r17（ASN.1 mTRP-PUSCH-A-CSI-r17，源文件第 18156 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_A_CSI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_A_CSI_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_A_CSI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_SP_CSI_r17（ASN.1 mTRP-PUSCH-SP-CSI-r17，源文件第 18158 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_SP_CSI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_SP_CSI_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_SP_CSI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CG_r17（ASN.1 mTRP-PUSCH-CG-r17，源文件第 18160 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CG_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CG_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CG_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_MAC_CE_r17（ASN.1 mTRP-PUCCH-MAC-CE-r17，源文件第 18162 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_MAC_CE_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_MAC_CE_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_MAC_CE_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17（ASN.1 mTRP-GroupBasedL1-RSRP-r17/maxNumRS-WithinSlot-r17，源文件第 18173 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17_n3 = 1, /**< ASN.1 n3 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17_n16 = 4, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17_n32 = 5, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17_n64 = 6, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17（ASN.1 mTRP-GroupBasedL1-RSRP-r17/maxNumRS-AcrossSlot-r17，源文件第 18174 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17_n8 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17_n16 = 1, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17_n32 = 2, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17_n64 = 3, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17_n128 = 4, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17（ASN.1 mTRP-BFD-RS-MAC-CE-r17，源文件第 18177 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17_n8 = 1, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17_n12 = 2, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17_n16 = 3, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17_n32 = 4, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17_n48 = 5, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17_n64 = 6, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CSI_Report_mode_r17（ASN.1 mTRP-CSI-EnhancementPerBand-r17/cSI-Report-mode-r17，源文件第 18181 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CSI_Report_mode_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CSI_Report_mode_r17_mode1 = 0, /**< ASN.1 mode1 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CSI_Report_mode_r17_mode2 = 1, /**< ASN.1 mode2 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CSI_Report_mode_r17_both = 2, /**< ASN.1 both */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CSI_Report_mode_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CodebookModeNCJT_r17（ASN.1 mTRP-CSI-EnhancementPerBand-r17/codebookModeNCJT-r17，源文件第 18183 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CodebookModeNCJT_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CodebookModeNCJT_r17_mode1 = 0, /**< ASN.1 mode1 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CodebookModeNCJT_r17_mode1And2 = 1, /**< ASN.1 mode1And2 */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CodebookModeNCJT_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_additionalCSI_r17（ASN.1 mTRP-CSI-additionalCSI-r17，源文件第 18188 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_additionalCSI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_additionalCSI_r17_x1 = 0, /**< ASN.1 x1 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_additionalCSI_r17_x2 = 1, /**< ASN.1 x2 */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_additionalCSI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_N_Max2_r17（ASN.1 mTRP-CSI-N-Max2-r17，源文件第 18190 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_N_Max2_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_N_Max2_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_N_Max2_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_CMR_r17（ASN.1 mTRP-CSI-CMR-r17，源文件第 18192 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_CMR_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_CMR_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_CMR_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_Srs_partialFreqSounding_r17（ASN.1 srs-partialFreqSounding-r17，源文件第 18194 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_Srs_partialFreqSounding_r17 {
    MIMO_ParametersPerBand_ExtGroup7_Srs_partialFreqSounding_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup7_Srs_partialFreqSounding_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_480kHz（ASN.1 beamSwitchTiming-v1710/scs-480kHz，源文件第 18197 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_480kHz {
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_480kHz_sym56 = 0, /**< ASN.1 sym56 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_480kHz_sym112 = 1, /**< ASN.1 sym112 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_480kHz_sym192 = 2, /**< ASN.1 sym192 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_480kHz_sym896 = 3, /**< ASN.1 sym896 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_480kHz_sym1344 = 4, /**< ASN.1 sym1344 */
} MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_480kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_960kHz（ASN.1 beamSwitchTiming-v1710/scs-960kHz，源文件第 18198 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_960kHz {
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_960kHz_sym112 = 0, /**< ASN.1 sym112 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_960kHz_sym224 = 1, /**< ASN.1 sym224 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_960kHz_sym384 = 2, /**< ASN.1 sym384 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_960kHz_sym1792 = 3, /**< ASN.1 sym1792 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_960kHz_sym2688 = 4, /**< ASN.1 sym2688 */
} MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_960kHz;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_480kHz_r17（ASN.1 beamSwitchTiming-r17/scs-480kHz-r17，源文件第 18202 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_480kHz_r17 {
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_480kHz_r17_sym896 = 0, /**< ASN.1 sym896 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_480kHz_r17_sym1344 = 1, /**< ASN.1 sym1344 */
} MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_480kHz_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_960kHz_r17（ASN.1 beamSwitchTiming-r17/scs-960kHz-r17，源文件第 18203 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_960kHz_r17 {
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_960kHz_r17_sym1792 = 0, /**< ASN.1 sym1792 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_960kHz_r17_sym2688 = 1, /**< ASN.1 sym2688 */
} MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_960kHz_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_480kHz_r17（ASN.1 beamReportTiming-v1710/scs-480kHz-r17，源文件第 18207 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_480kHz_r17 {
    MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_480kHz_r17_sym56 = 0, /**< ASN.1 sym56 */
    MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_480kHz_r17_sym112 = 1, /**< ASN.1 sym112 */
    MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_480kHz_r17_sym224 = 2, /**< ASN.1 sym224 */
} MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_480kHz_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_960kHz_r17（ASN.1 beamReportTiming-v1710/scs-960kHz-r17，源文件第 18208 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_960kHz_r17 {
    MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_960kHz_r17_sym112 = 0, /**< ASN.1 sym112 */
    MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_960kHz_r17_sym224 = 1, /**< ASN.1 sym224 */
    MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_960kHz_r17_sym448 = 2, /**< ASN.1 sym448 */
} MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_960kHz_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_480kHz_r17（ASN.1 maxNumberRxTxBeamSwitchDL-v1710/scs-480kHz-r17，源文件第 18212 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_480kHz_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_480kHz_r17_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_480kHz_r17_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_480kHz_r17_n7 = 2, /**< ASN.1 n7 */
} MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_480kHz_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_960kHz_r17（ASN.1 maxNumberRxTxBeamSwitchDL-v1710/scs-960kHz-r17，源文件第 18213 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_960kHz_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_960kHz_r17_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_960kHz_r17_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_960kHz_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_960kHz_r17_n7 = 3, /**< ASN.1 n7 */
} MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_960kHz_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup8_Srs_PortReportSP_AP_r17（ASN.1 srs-PortReportSP-AP-r17，源文件第 18218 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup8_Srs_PortReportSP_AP_r17 {
    MIMO_ParametersPerBand_ExtGroup8_Srs_PortReportSP_AP_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup8_Srs_PortReportSP_AP_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup8_Sfn_ImplicitRS_twoTCI_r17（ASN.1 sfn-ImplicitRS-twoTCI-r17，源文件第 18221 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup8_Sfn_ImplicitRS_twoTCI_r17 {
    MIMO_ParametersPerBand_ExtGroup8_Sfn_ImplicitRS_twoTCI_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup8_Sfn_ImplicitRS_twoTCI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup8_Sfn_QCL_TypeD_Collision_twoTCI_r17（ASN.1 sfn-QCL-TypeD-Collision-twoTCI-r17，源文件第 18223 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup8_Sfn_QCL_TypeD_Collision_twoTCI_r17 {
    MIMO_ParametersPerBand_ExtGroup8_Sfn_QCL_TypeD_Collision_twoTCI_r17_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup8_Sfn_QCL_TypeD_Collision_twoTCI_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup8_MTRP_CSI_numCPU_r17（ASN.1 mTRP-CSI-numCPU-r17，源文件第 18225 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup8_MTRP_CSI_numCPU_r17 {
    MIMO_ParametersPerBand_ExtGroup8_MTRP_CSI_numCPU_r17_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup8_MTRP_CSI_numCPU_r17_n3 = 1, /**< ASN.1 n3 */
    MIMO_ParametersPerBand_ExtGroup8_MTRP_CSI_numCPU_r17_n4 = 2, /**< ASN.1 n4 */
} MIMO_ParametersPerBand_ExtGroup8_MTRP_CSI_numCPU_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17（ASN.1 supportRepNumPDSCH-TDRA-DCI-1-2-r17，源文件第 18228 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17 {
    MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17_n3 = 1, /**< ASN.1 n3 */
    MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17_n5 = 3, /**< ASN.1 n5 */
    MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17_n6 = 4, /**< ASN.1 n6 */
    MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17_n7 = 5, /**< ASN.1 n7 */
    MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17_n8 = 6, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17_n16 = 7, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointTCIPerCC_PerBWP_r18（ASN.1 tci-JointTCI-UpdateSingleActiveTCI-PerCC-r18/maxNumberConfigJointTCIPerCC-PerBWP-r18，源文件第 18240 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointTCIPerCC_PerBWP_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointT_082aef56 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointT_9dc92495 = 1, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointT_c0e97125 = 2, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointT_1d03554b = 3, /**< ASN.1 n24 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointT_3447a552 = 4, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointT_c82b5524 = 5, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointT_01e79d4b = 6, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointT_4d68cb47 = 7, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointTCIPerCC_PerBWP_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18（ASN.1 tci-JointTCI-UpdateSingleActiveTCI-PerCC-r18/maxNumberActiveJointTCI-AcrossCC-r18，源文件第 18241 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18_n6 = 2, /**< ASN.1 n6 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18_n16 = 4, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18_n32 = 5, /**< ASN.1 n32 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18_Tci_StateInd_r18（ASN.1 tci-JointTCI-UpdateMultiActiveTCI-PerCC-r18/tci-StateInd-r18，源文件第 18246 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18_Tci_StateInd_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18_Tci_StateInd_r18_withAssignment = 0, /**< ASN.1 withAssignment */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18_Tci_StateInd_r18_withoutAssignment = 1, /**< ASN.1 withoutAssignment */
} MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18_Tci_StateInd_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionDCI_r18（ASN.1 tci-SelectionDCI-r18，源文件第 18250 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionDCI_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionDCI_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionDCI_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_PerCC_PerBWP_r18（ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-r18/maxNumConfigDL-TCI-PerCC-PerBWP-r18，源文件第 18254 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_PerCC_PerBWP_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_PerCC_PerBWP_r18_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_PerCC_PerBWP_r18_n8 = 1, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_3001e92a = 2, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_dd14c38e = 3, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_8b4311e7 = 4, /**< ASN.1 n24 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_18326083 = 5, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_fdf03707 = 6, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_8233533a = 7, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_8ccaa8fc = 8, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_PerCC_PerBWP_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_PerCC_PerBWP_r18（ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-r18/maxNumConfigUL-TCI-PerCC-PerBWP-r18，源文件第 18255 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_PerCC_PerBWP_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_PerCC_PerBWP_r18_n4 = 0, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_PerCC_PerBWP_r18_n8 = 1, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_e4fb1034 = 2, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_21be645d = 3, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_dbfc1365 = 4, /**< ASN.1 n24 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_5ea4bcd7 = 5, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_b47b783d = 6, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_2b3dec88 = 7, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_PerCC_PerBWP_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18（ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-r18/maxNumActiveDL-TCI-AcrossCC-r18，源文件第 18256 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18_n8 = 2, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18_n16 = 3, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18（ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-r18/maxNumActiveUL-TCI-AcrossCC-r18，源文件第 18257 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18_n8 = 2, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18_n16 = 3, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18（ASN.1 tci-SeparateTCI-UpdateMultiActiveTCI-PerCC-r18/maxNumActiveDL-TCI-AcrossCC-r18，源文件第 18262 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18_n8 = 2, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18_n16 = 3, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18（ASN.1 tci-SeparateTCI-UpdateMultiActiveTCI-PerCC-r18/maxNumActiveUL-TCI-AcrossCC-r18，源文件第 18263 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18_n8 = 2, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18_n16 = 3, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionAperiodicCSI_RS_r18（ASN.1 tci-SelectionAperiodicCSI-RS-r18，源文件第 18266 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionAperiodicCSI_RS_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionAperiodicCSI_RS_r18_perResource = 0, /**< ASN.1 perResource */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionAperiodicCSI_RS_r18_perResourceSet = 1, /**< ASN.1 perResourceSet */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionAperiodicCSI_RS_r18_both = 2, /**< ASN.1 both */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionAperiodicCSI_RS_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoTCI_StatePDSCH_CJT_TxScheme_r18（ASN.1 twoTCI-StatePDSCH-CJT-TxScheme-r18，源文件第 18268 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoTCI_StatePDSCH_CJT_TxScheme_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoTCI_StatePDSCH_CJT_TxScheme_r18_cjtSchemeA = 0, /**< ASN.1 cjtSchemeA */
    MIMO_ParametersPerBand_ExtGroup10_TwoTCI_StatePDSCH_CJT_TxScheme_r18_cjtSchemeB = 1, /**< ASN.1 cjtSchemeB */
    MIMO_ParametersPerBand_ExtGroup10_TwoTCI_StatePDSCH_CJT_TxScheme_r18_both = 2, /**< ASN.1 both */
} MIMO_ParametersPerBand_ExtGroup10_TwoTCI_StatePDSCH_CJT_TxScheme_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18（ASN.1 tci-JointTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18/mTRP-Operation-r18，源文件第 18272 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18_intraCell = 0, /**< ASN.1 intraCell */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Opera_40f948ae = 1, /**< ASN.1 intraCellAndInterCell */
} MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947（ASN.1 tci-JointTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18/maxNumberConfigJointTCIPerCC-PerBWP-r18，源文件第 18273 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947_n8 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947_n12 = 1, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947_n16 = 2, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947_n24 = 3, /**< ASN.1 n24 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947_n32 = 4, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947_n48 = 5, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947_n64 = 6, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947_n128 = 7, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587（ASN.1 tci-JointTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18/maxNumberActiveJointTCIAcrossCC-PerCORESET-r18，源文件第 18274 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587_n16 = 4, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_TRP_BFR_r18（ASN.1 tci-TRP-BFR-r18，源文件第 18280 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_TRP_BFR_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_TRP_BFR_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Tci_TRP_BFR_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18（ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18/mTRP-Operation-r18，源文件第 18284 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Op_2622f4dd = 0, /**< ASN.1 intraCell */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Op_1e189599 = 1, /**< ASN.1 intraCellAndInterCell */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8（ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18/maxNumConfigDL-TCI-PerCC-PerBWP-r18，源文件第 18285 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8_n8 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8_n12 = 1, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8_n16 = 2, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8_n24 = 3, /**< ASN.1 n24 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8_n32 = 4, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8_n48 = 5, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8_n64 = 6, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8_n128 = 7, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0（ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18/maxNumConfigUL-TCI-PerCC-PerBWP-r18，源文件第 18286 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0_n8 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0_n12 = 1, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0_n16 = 2, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0_n24 = 3, /**< ASN.1 n24 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0_n32 = 4, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0_n48 = 5, /**< ASN.1 n48 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0_n64 = 6, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed（ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18/maxNumActiveDL-TCI-AcrossCC-r18，源文件第 18287 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed_n16 = 4, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5（ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18/maxNumActiveUL-TCI-AcrossCC-r18，源文件第 18288 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5_n1 = 0, /**< ASN.1 n1 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5_n2 = 1, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5_n16 = 4, /**< ASN.1 n16 */
} MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_SpCell_TAG_Ind_r18（ASN.1 spCell-TAG-Ind-r18，源文件第 18301 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_SpCell_TAG_Ind_r18 {
    MIMO_ParametersPerBand_ExtGroup10_SpCell_TAG_Ind_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_SpCell_TAG_Ind_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_InterCellCrossTRP_PDCCH_OrderCFRA_r18（ASN.1 interCellCrossTRP-PDCCH-OrderCFRA-r18，源文件第 18304 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_InterCellCrossTRP_PDCCH_OrderCFRA_r18 {
    MIMO_ParametersPerBand_ExtGroup10_InterCellCrossTRP_PDCCH_OrderCFRA_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_InterCellCrossTRP_PDCCH_OrderCFRA_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_IntraCellCrossTRP_PDCCH_OrderCFRA_r18（ASN.1 intraCellCrossTRP-PDCCH-OrderCFRA-r18，源文件第 18307 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_IntraCellCrossTRP_PDCCH_OrderCFRA_r18 {
    MIMO_ParametersPerBand_ExtGroup10_IntraCellCrossTRP_PDCCH_OrderCFRA_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_IntraCellCrossTRP_PDCCH_OrderCFRA_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_OverlapUL_TransReduction_r18（ASN.1 overlapUL-TransReduction-r18，源文件第 18309 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_OverlapUL_TransReduction_r18 {
    MIMO_ParametersPerBand_ExtGroup10_OverlapUL_TransReduction_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_OverlapUL_TransReduction_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18（ASN.1 tdcp-Resource-r18/maxNumberConfigPerCC-r18，源文件第 18317 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18_n6 = 2, /**< ASN.1 n6 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18_n10 = 4, /**< ASN.1 n10 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18_n12 = 5, /**< ASN.1 n12 */
} MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18（ASN.1 tdcp-Resource-r18/maxNumberSimultaneousPerCC-r18，源文件第 18319 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n4 = 1, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n6 = 2, /**< ASN.1 n6 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n12 = 4, /**< ASN.1 n12 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n16 = 5, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n20 = 6, /**< ASN.1 n20 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n24 = 7, /**< ASN.1 n24 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n28 = 8, /**< ASN.1 n28 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18_n32 = 9, /**< ASN.1 n32 */
} MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TimelineRelax_CJT_CSI_r18（ASN.1 timelineRelax-CJT-CSI-r18，源文件第 18322 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TimelineRelax_CJT_CSI_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TimelineRelax_CJT_CSI_r18_n0 = 0, /**< ASN.1 n0 */
    MIMO_ParametersPerBand_ExtGroup10_TimelineRelax_CJT_CSI_r18_n2 = 1, /**< ASN.1 n2 */
} MIMO_ParametersPerBand_ExtGroup10_TimelineRelax_CJT_CSI_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_JointConfigDMRSPortDynamicSwitching_r18（ASN.1 jointConfigDMRSPortDynamicSwitching-r18，源文件第 18324 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_JointConfigDMRSPortDynamicSwitching_r18 {
    MIMO_ParametersPerBand_ExtGroup10_JointConfigDMRSPortDynamicSwitching_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_JointConfigDMRSPortDynamicSwitching_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHopping_r18（ASN.1 srs-combOffsetHopping-r18，源文件第 18326 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHopping_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHopping_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHopping_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetInTime_r18（ASN.1 srs-combOffsetInTime-r18，源文件第 18328 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetInTime_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetInTime_r18_srs = 0, /**< ASN.1 srs */
    MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetInTime_r18_rsrs = 1, /**< ASN.1 rsrs */
    MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetInTime_r18_both = 2, /**< ASN.1 both */
} MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetInTime_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetCombinedGroupSequence_r18（ASN.1 srs-combOffsetCombinedGroupSequence-r18，源文件第 18330 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetCombinedGroupSequence_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetCombinedGroupSequence_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetCombinedGroupSequence_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHoppingWithinSubset_r18（ASN.1 srs-combOffsetHoppingWithinSubset-r18，源文件第 18332 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHoppingWithinSubset_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHoppingWithinSubset_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHoppingWithinSubset_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHopping_r18（ASN.1 srs-cyclicShiftHopping-r18，源文件第 18334 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHopping_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHopping_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHopping_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHoppingSmallGranularity_r18（ASN.1 srs-cyclicShiftHoppingSmallGranularity-r18，源文件第 18336 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHoppingSmallGranularity_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHoppingSmallGranularity_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHoppingSmallGranularity_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedGroupSequence_r18（ASN.1 srs-cyclicShiftCombinedGroupSequence-r18，源文件第 18338 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedGroupSequence_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedGroupSequence_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedGroupSequence_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_CyclicShiftHoppingWithinSubset_r18（ASN.1 cyclicShiftHoppingWithinSubset-r18，源文件第 18340 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_CyclicShiftHoppingWithinSubset_r18 {
    MIMO_ParametersPerBand_ExtGroup10_CyclicShiftHoppingWithinSubset_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_CyclicShiftHoppingWithinSubset_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedCombOffset_r18（ASN.1 srs-cyclicShiftCombinedCombOffset-r18，源文件第 18342 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedCombOffset_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedCombOffset_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedCombOffset_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18（ASN.1 pusch-CB-2PTRS-SingleDCI-STx2P-SDM-r18，源文件第 18345 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18（ASN.1 pusch-NonCB-2PTRS-SingleDCI-STx2P-SDM-r18，源文件第 18347 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Dmrs_PortEntrySingleDCI_SDM_r18（ASN.1 dmrs-PortEntrySingleDCI-SDM-r18，源文件第 18365 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Dmrs_PortEntrySingleDCI_SDM_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Dmrs_PortEntrySingleDCI_SDM_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Dmrs_PortEntrySingleDCI_SDM_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18（ASN.1 pusch-CB-2PTRS-SingleDCI-STx2P-SFN-r18，源文件第 18367 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18（ASN.1 pusch-NonCB-2PTRS-SingleDCI-STx2P-SFN-r18，源文件第 18369 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-FullTimeFullFreqOverlap-r18，源文件第 18379 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-FullTimePartialFreqOverlap-r18，源文件第 18381 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-PartialTimeFullFreqOverlap-r18，源文件第 18383 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-PartialTimePartialFreqOverlap-r18，源文件第 18385 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-PartialTimeNonFreqOverlap-r18，源文件第 18388 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-CG-CG-r18，源文件第 18390 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-CG-DG-r18，源文件第 18392 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18（ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-FullTimeFullFreqOverlap-r18，源文件第 18394 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18（ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-FullTimePartialFreqOverlap-r18，源文件第 18397 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18（ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-PartialTimeFullFreqOverlap-r18，源文件第 18400 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18（ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-PartialTimePartialFreqOverlap-r18，源文件第 18403 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18（ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-PartialTimeNonFreqOverlap-r18，源文件第 18405 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18（ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-CG-CG-r18，源文件第 18407 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18（ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-CG-DG-r18，源文件第 18409 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18 {
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_Pucch_RepetitionDynamicIndicationSFN_r18（ASN.1 pucch-RepetitionDynamicIndicationSFN-r18，源文件第 18411 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_Pucch_RepetitionDynamicIndicationSFN_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Pucch_RepetitionDynamicIndicationSFN_r18_supported = 0, /**< ASN.1 supported */
} MIMO_ParametersPerBand_ExtGroup10_Pucch_RepetitionDynamicIndicationSFN_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_GroupL1_RSRP_Reporting_r18（ASN.1 groupBeamReporting-STx2P-r18/groupL1-RSRP-Reporting-r18，源文件第 18414 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_GroupL1_RSRP_Reporting_r18 {
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_GroupL1_RSRP_Reporting_r18_jointULandDL = 0, /**< ASN.1 jointULandDL */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_GroupL1_RSRP_Reporting_r18_ulOnly = 1, /**< ASN.1 ulOnly */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_GroupL1_RSRP_Reporting_r18_both = 2, /**< ASN.1 both */
} MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_GroupL1_RSRP_Reporting_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18（ASN.1 groupBeamReporting-STx2P-r18/maxNumberResWithinSlotAcrossCC-r18，源文件第 18416 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18_n2 = 0, /**< ASN.1 n2 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18_n3 = 1, /**< ASN.1 n3 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18_n4 = 2, /**< ASN.1 n4 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18_n8 = 3, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18_n16 = 4, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18_n32 = 5, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18_n64 = 6, /**< ASN.1 n64 */
} MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18;


/**
 * @brief 枚举 MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18（ASN.1 groupBeamReporting-STx2P-r18/maxNumberResAcrossCC-r18，源文件第 18417 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18_n8 = 0, /**< ASN.1 n8 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18_n16 = 1, /**< ASN.1 n16 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18_n32 = 2, /**< ASN.1 n32 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18_n64 = 3, /**< ASN.1 n64 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18_n128 = 4, /**< ASN.1 n128 */
} MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18;


/**
 * @brief 枚举 DummyG_MaxNumberSSB_CSI_RS_ResourceOneTx（ASN.1 maxNumberSSB-CSI-RS-ResourceOneTx，源文件第 18423 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyG_MaxNumberSSB_CSI_RS_ResourceOneTx {
    DummyG_MaxNumberSSB_CSI_RS_ResourceOneTx_n8 = 0, /**< ASN.1 n8 */
    DummyG_MaxNumberSSB_CSI_RS_ResourceOneTx_n16 = 1, /**< ASN.1 n16 */
    DummyG_MaxNumberSSB_CSI_RS_ResourceOneTx_n32 = 2, /**< ASN.1 n32 */
    DummyG_MaxNumberSSB_CSI_RS_ResourceOneTx_n64 = 3, /**< ASN.1 n64 */
} DummyG_MaxNumberSSB_CSI_RS_ResourceOneTx;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART008_H */
