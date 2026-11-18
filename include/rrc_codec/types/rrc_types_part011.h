/* ============================================================================
 * types/rrc_types_part011.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART011_H
#define RRC_CODEC_TYPES_PART011_H

#include "rrc_types_part000.h"
#include "rrc_types_part001.h"
#include "rrc_types_part002.h"
#include "rrc_types_part003.h"
#include "rrc_types_part004.h"
#include "rrc_types_part005.h"
#include "rrc_types_part006.h"
#include "rrc_types_part007.h"
#include "rrc_types_part008.h"
#include "rrc_types_part009.h"
#include "rrc_types_part010.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 枚举 AppLayerMeasConfig_r17_Rrc_SegAllowedSRB4_r17（ASN.1 rrc-SegAllowedSRB4-r17，源文件第 21291 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasConfig_r17_Rrc_SegAllowedSRB4_r17 {
    AppLayerMeasConfig_r17_Rrc_SegAllowedSRB4_r17_enabled = 0, /**< ASN.1 enabled */
} AppLayerMeasConfig_r17_Rrc_SegAllowedSRB4_r17;


/**
 * @brief 枚举 AppLayerMeasConfig_r17_ExtGroup1_Rrc_SegAllowedSRB5_r18（ASN.1 rrc-SegAllowedSRB5-r18，源文件第 21294 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasConfig_r17_ExtGroup1_Rrc_SegAllowedSRB5_r18 {
    AppLayerMeasConfig_r17_ExtGroup1_Rrc_SegAllowedSRB5_r18_enabled = 0, /**< ASN.1 enabled */
} AppLayerMeasConfig_r17_ExtGroup1_Rrc_SegAllowedSRB5_r18;


/**
 * @brief 枚举 AppLayerMeasConfig_r17_ExtGroup1_IdleInactiveReportAllowed_r18（ASN.1 idleInactiveReportAllowed-r18，源文件第 21295 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasConfig_r17_ExtGroup1_IdleInactiveReportAllowed_r18 {
    AppLayerMeasConfig_r17_ExtGroup1_IdleInactiveReportAllowed_r18_enabled = 0, /**< ASN.1 enabled */
} AppLayerMeasConfig_r17_ExtGroup1_IdleInactiveReportAllowed_r18;


/**
 * @brief 枚举 MeasConfigAppLayer_r17_ServiceType_r17（ASN.1 serviceType-r17，源文件第 21302 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasConfigAppLayer_r17_ServiceType_r17 {
    MeasConfigAppLayer_r17_ServiceType_r17_streaming = 0, /**< ASN.1 streaming */
    MeasConfigAppLayer_r17_ServiceType_r17_mtsi = 1, /**< ASN.1 mtsi */
    MeasConfigAppLayer_r17_ServiceType_r17_vr = 2, /**< ASN.1 vr */
    MeasConfigAppLayer_r17_ServiceType_r17_spare5 = 3, /**< ASN.1 spare5 */
    MeasConfigAppLayer_r17_ServiceType_r17_spare4 = 4, /**< ASN.1 spare4 */
    MeasConfigAppLayer_r17_ServiceType_r17_spare3 = 5, /**< ASN.1 spare3 */
    MeasConfigAppLayer_r17_ServiceType_r17_spare2 = 6, /**< ASN.1 spare2 */
    MeasConfigAppLayer_r17_ServiceType_r17_spare1 = 7, /**< ASN.1 spare1 */
} MeasConfigAppLayer_r17_ServiceType_r17;


/**
 * @brief 枚举 MeasConfigAppLayer_r17_ExtGroup1_ReportingSRB_r18（ASN.1 reportingSRB-r18，源文件第 21308 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasConfigAppLayer_r17_ExtGroup1_ReportingSRB_r18 {
    MeasConfigAppLayer_r17_ExtGroup1_ReportingSRB_r18_srb4 = 0, /**< ASN.1 srb4 */
    MeasConfigAppLayer_r17_ExtGroup1_ReportingSRB_r18_srb5 = 1, /**< ASN.1 srb5 */
} MeasConfigAppLayer_r17_ExtGroup1_ReportingSRB_r18;


/**
 * @brief 枚举 RAN_VisibleParameters_r17_Ran_VisiblePeriodicity_r17（ASN.1 ran-VisiblePeriodicity-r17，源文件第 21315 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RAN_VisibleParameters_r17_Ran_VisiblePeriodicity_r17 {
    RAN_VisibleParameters_r17_Ran_VisiblePeriodicity_r17_ms120 = 0, /**< ASN.1 ms120 */
    RAN_VisibleParameters_r17_Ran_VisiblePeriodicity_r17_ms240 = 1, /**< ASN.1 ms240 */
    RAN_VisibleParameters_r17_Ran_VisiblePeriodicity_r17_ms480 = 2, /**< ASN.1 ms480 */
    RAN_VisibleParameters_r17_Ran_VisiblePeriodicity_r17_ms640 = 3, /**< ASN.1 ms640 */
    RAN_VisibleParameters_r17_Ran_VisiblePeriodicity_r17_ms1024 = 4, /**< ASN.1 ms1024 */
} RAN_VisibleParameters_r17_Ran_VisiblePeriodicity_r17;


/**
 * @brief 枚举 RAN_VisibleParameters_r17_ExtGroup1_Ran_VisibleReportingSRB_r18（ASN.1 ran-VisibleReportingSRB-r18，源文件第 21320 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RAN_VisibleParameters_r17_ExtGroup1_Ran_VisibleReportingSRB_r18 {
    RAN_VisibleParameters_r17_ExtGroup1_Ran_VisibleReportingSRB_r18_srb4 = 0, /**< ASN.1 srb4 */
    RAN_VisibleParameters_r17_ExtGroup1_Ran_VisibleReportingSRB_r18_srb5 = 1, /**< ASN.1 srb5 */
} RAN_VisibleParameters_r17_ExtGroup1_Ran_VisibleReportingSRB_r18;


/**
 * @brief 枚举 EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod（ASN.1 radioframeAllocationPeriod，源文件第 21420 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod {
    EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod_n1 = 0, /**< ASN.1 n1 */
    EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod_n2 = 1, /**< ASN.1 n2 */
    EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod_n4 = 2, /**< ASN.1 n4 */
    EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod_n8 = 3, /**< ASN.1 n8 */
    EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod_n16 = 4, /**< ASN.1 n16 */
    EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod_n32 = 5, /**< ASN.1 n32 */
} EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod;


/**
 * @brief 枚举 EUTRA_PhysCellIdRange_Range（ASN.1 range，源文件第 21473 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EUTRA_PhysCellIdRange_Range {
    EUTRA_PhysCellIdRange_Range_n4 = 0, /**< ASN.1 n4 */
    EUTRA_PhysCellIdRange_Range_n8 = 1, /**< ASN.1 n8 */
    EUTRA_PhysCellIdRange_Range_n12 = 2, /**< ASN.1 n12 */
    EUTRA_PhysCellIdRange_Range_n16 = 3, /**< ASN.1 n16 */
    EUTRA_PhysCellIdRange_Range_n24 = 4, /**< ASN.1 n24 */
    EUTRA_PhysCellIdRange_Range_n32 = 5, /**< ASN.1 n32 */
    EUTRA_PhysCellIdRange_Range_n48 = 6, /**< ASN.1 n48 */
    EUTRA_PhysCellIdRange_Range_n64 = 7, /**< ASN.1 n64 */
    EUTRA_PhysCellIdRange_Range_n84 = 8, /**< ASN.1 n84 */
    EUTRA_PhysCellIdRange_Range_n96 = 9, /**< ASN.1 n96 */
    EUTRA_PhysCellIdRange_Range_n128 = 10, /**< ASN.1 n128 */
    EUTRA_PhysCellIdRange_Range_n168 = 11, /**< ASN.1 n168 */
    EUTRA_PhysCellIdRange_Range_n252 = 12, /**< ASN.1 n252 */
    EUTRA_PhysCellIdRange_Range_n504 = 13, /**< ASN.1 n504 */
    EUTRA_PhysCellIdRange_Range_spare2 = 14, /**< ASN.1 spare2 */
    EUTRA_PhysCellIdRange_Range_spare1 = 15, /**< ASN.1 spare1 */
} EUTRA_PhysCellIdRange_Range;


/**
 * @brief 枚举 WLAN_RTT_r16_RttUnits_r16（ASN.1 rttUnits-r16，源文件第 21559 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t WLAN_RTT_r16_RttUnits_r16;
#define WLAN_RTT_r16_RttUnits_r16_microseconds 0 /**< ASN.1 microseconds */
#define WLAN_RTT_r16_RttUnits_r16_hundredsofnanoseconds 1 /**< ASN.1 hundredsofnanoseconds */
#define WLAN_RTT_r16_RttUnits_r16_tensofnanoseconds 2 /**< ASN.1 tensofnanoseconds */
#define WLAN_RTT_r16_RttUnits_r16_nanoseconds 3 /**< ASN.1 nanoseconds */
#define WLAN_RTT_r16_RttUnits_r16_tenthsofnanoseconds 4 /**< ASN.1 tenthsofnanoseconds */


/**
 * @brief 枚举 OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer（ASN.1 delayBudgetReportingConfig/setup/delayBudgetReportingProhibitTimer，源文件第 21582 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer {
    OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer_s0 = 0, /**< ASN.1 s0 */
    OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer_s0dot4 = 1, /**< ASN.1 s0dot4 */
    OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer_s0dot8 = 2, /**< ASN.1 s0dot8 */
    OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer_s1dot6 = 3, /**< ASN.1 s1dot6 */
    OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer_s3 = 4, /**< ASN.1 s3 */
    OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer_s6 = 5, /**< ASN.1 s6 */
    OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer_s12 = 6, /**< ASN.1 s12 */
    OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer_s30 = 7, /**< ASN.1 s30 */
} OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer;


/**
 * @brief 枚举 OtherConfig_v1610_ReferenceTimePreferenceReporting_r16（ASN.1 referenceTimePreferenceReporting-r16，源文件第 21600 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1610_ReferenceTimePreferenceReporting_r16 {
    OtherConfig_v1610_ReferenceTimePreferenceReporting_r16_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1610_ReferenceTimePreferenceReporting_r16;


/**
 * @brief 枚举 OtherConfig_v1610_ObtainCommonLocation_r16（ASN.1 obtainCommonLocation-r16，源文件第 21604 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1610_ObtainCommonLocation_r16 {
    OtherConfig_v1610_ObtainCommonLocation_r16_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1610_ObtainCommonLocation_r16;


/**
 * @brief 枚举 OtherConfig_v1610_Sl_AssistanceConfigNR_r16（ASN.1 sl-AssistanceConfigNR-r16，源文件第 21605 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1610_Sl_AssistanceConfigNR_r16 {
    OtherConfig_v1610_Sl_AssistanceConfigNR_r16_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1610_Sl_AssistanceConfigNR_r16;


/**
 * @brief 枚举 OtherConfig_v1700_Ul_GapFR2_PreferenceConfig_r17（ASN.1 ul-GapFR2-PreferenceConfig-r17，源文件第 21609 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1700_Ul_GapFR2_PreferenceConfig_r17 {
    OtherConfig_v1700_Ul_GapFR2_PreferenceConfig_r17_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1700_Ul_GapFR2_PreferenceConfig_r17;


/**
 * @brief 枚举 OtherConfig_v1700_MaxBW_PreferenceConfigFR2_2_r17（ASN.1 maxBW-PreferenceConfigFR2-2-r17，源文件第 21613 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1700_MaxBW_PreferenceConfigFR2_2_r17 {
    OtherConfig_v1700_MaxBW_PreferenceConfigFR2_2_r17_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1700_MaxBW_PreferenceConfigFR2_2_r17;


/**
 * @brief 枚举 OtherConfig_v1700_MaxMIMO_LayerPreferenceConfigFR2_2_r17（ASN.1 maxMIMO-LayerPreferenceConfigFR2-2-r17，源文件第 21614 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1700_MaxMIMO_LayerPreferenceConfigFR2_2_r17 {
    OtherConfig_v1700_MaxMIMO_LayerPreferenceConfigFR2_2_r17_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1700_MaxMIMO_LayerPreferenceConfigFR2_2_r17;


/**
 * @brief 枚举 OtherConfig_v1700_MinSchedulingOffsetPreferenceConfigExt_r17（ASN.1 minSchedulingOffsetPreferenceConfigExt-r17，源文件第 21615 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1700_MinSchedulingOffsetPreferenceConfigExt_r17 {
    OtherConfig_v1700_MinSchedulingOffsetPreferenceConfigExt_r17_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1700_MinSchedulingOffsetPreferenceConfigExt_r17;


/**
 * @brief 枚举 OtherConfig_v1800_Aerial_FlightPathAvailabilityConfig_r18（ASN.1 aerial-FlightPathAvailabilityConfig-r18，源文件第 21626 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1800_Aerial_FlightPathAvailabilityConfig_r18 {
    OtherConfig_v1800_Aerial_FlightPathAvailabilityConfig_r18_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1800_Aerial_FlightPathAvailabilityConfig_r18;


/**
 * @brief 枚举 OtherConfig_v1800_N3c_RelayUE_InfoReportConfig_r18（ASN.1 n3c-RelayUE-InfoReportConfig-r18，源文件第 21628 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1800_N3c_RelayUE_InfoReportConfig_r18 {
    OtherConfig_v1800_N3c_RelayUE_InfoReportConfig_r18_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1800_N3c_RelayUE_InfoReportConfig_r18;


/**
 * @brief 枚举 OtherConfig_v1800_Sn_InitiatedPSCellChange_r18（ASN.1 sn-InitiatedPSCellChange-r18，源文件第 21630 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1800_Sn_InitiatedPSCellChange_r18 {
    OtherConfig_v1800_Sn_InitiatedPSCellChange_r18_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1800_Sn_InitiatedPSCellChange_r18;


/**
 * @brief 枚举 OtherConfig_v1800_Musim_GapPriorityAssistanceConfig_r18（ASN.1 musim-GapPriorityAssistanceConfig-r18，源文件第 21631 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OtherConfig_v1800_Musim_GapPriorityAssistanceConfig_r18 {
    OtherConfig_v1800_Musim_GapPriorityAssistanceConfig_r18_trueVal = 0, /**< ASN.1 trueVal */
} OtherConfig_v1800_Musim_GapPriorityAssistanceConfig_r18;


/**
 * @brief 枚举 IDC_AssistanceConfig_v1800_Idc_TDM_AssistanceConfig_r18（ASN.1 idc-TDM-AssistanceConfig-r18，源文件第 21637 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IDC_AssistanceConfig_v1800_Idc_TDM_AssistanceConfig_r18 {
    IDC_AssistanceConfig_v1800_Idc_TDM_AssistanceConfig_r18_setup = 0, /**< ASN.1 setup */
} IDC_AssistanceConfig_v1800_Idc_TDM_AssistanceConfig_r18;


/**
 * @brief 枚举 MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18（ASN.1 multiRx-PreferenceReportingConfigFR2ProhibitTimer-r18，源文件第 21641 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18 {
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s0 = 0, /**< ASN.1 s0 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s0dot5 = 1, /**< ASN.1 s0dot5 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s1 = 2, /**< ASN.1 s1 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s2 = 3, /**< ASN.1 s2 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s3 = 4, /**< ASN.1 s3 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s4 = 5, /**< ASN.1 s4 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s5 = 6, /**< ASN.1 s5 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s6 = 7, /**< ASN.1 s6 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s7 = 8, /**< ASN.1 s7 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s8 = 9, /**< ASN.1 s8 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s9 = 10, /**< ASN.1 s9 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s10 = 11, /**< ASN.1 s10 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s20 = 12, /**< ASN.1 s20 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_s30 = 13, /**< ASN.1 s30 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_spare2 = 14, /**< ASN.1 spare2 */
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18_spare1 = 15, /**< ASN.1 spare1 */
} MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18;


/**
 * @brief 枚举 MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17（ASN.1 musim-GapProhibitTimer-r17，源文件第 21649 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17 {
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s0 = 0, /**< ASN.1 s0 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s0dot1 = 1, /**< ASN.1 s0dot1 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s0dot2 = 2, /**< ASN.1 s0dot2 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s0dot3 = 3, /**< ASN.1 s0dot3 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s0dot4 = 4, /**< ASN.1 s0dot4 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s0dot5 = 5, /**< ASN.1 s0dot5 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s1 = 6, /**< ASN.1 s1 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s2 = 7, /**< ASN.1 s2 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s3 = 8, /**< ASN.1 s3 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s4 = 9, /**< ASN.1 s4 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s5 = 10, /**< ASN.1 s5 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s6 = 11, /**< ASN.1 s6 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s7 = 12, /**< ASN.1 s7 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s8 = 13, /**< ASN.1 s8 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s9 = 14, /**< ASN.1 s9 */
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17_s10 = 15, /**< ASN.1 s10 */
} MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17;


/**
 * @brief 枚举 MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17（ASN.1 musim-LeaveWithoutResponseTimer-r17，源文件第 21653 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17 {
    MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17_ms10 = 0, /**< ASN.1 ms10 */
    MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17_ms20 = 1, /**< ASN.1 ms20 */
    MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17_ms40 = 2, /**< ASN.1 ms40 */
    MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17_ms60 = 3, /**< ASN.1 ms60 */
    MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17_ms80 = 4, /**< ASN.1 ms80 */
    MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17_ms100 = 5, /**< ASN.1 ms100 */
    MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17_spare2 = 6, /**< ASN.1 spare2 */
    MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17_spare1 = 7, /**< ASN.1 spare1 */
} MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17;


/**
 * @brief 枚举 MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18（ASN.1 musim-WaitTimer-r18，源文件第 21658 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18 {
    MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18_ms10 = 0, /**< ASN.1 ms10 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18_ms20 = 1, /**< ASN.1 ms20 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18_ms40 = 2, /**< ASN.1 ms40 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18_ms60 = 3, /**< ASN.1 ms60 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18_ms80 = 4, /**< ASN.1 ms80 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18_ms100 = 5, /**< ASN.1 ms100 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18_spare2 = 6, /**< ASN.1 spare2 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18_spare1 = 7, /**< ASN.1 spare1 */
} MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18;


/**
 * @brief 枚举 MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18（ASN.1 musim-ProhibitTimer-r18，源文件第 21659 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18 {
    MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18_ms0 = 0, /**< ASN.1 ms0 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18_ms10 = 1, /**< ASN.1 ms10 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18_ms20 = 2, /**< ASN.1 ms20 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18_ms40 = 3, /**< ASN.1 ms40 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18_ms60 = 4, /**< ASN.1 ms60 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18_ms80 = 5, /**< ASN.1 ms80 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18_spare2 = 6, /**< ASN.1 spare2 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18_spare1 = 7, /**< ASN.1 spare1 */
} MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18;


/**
 * @brief 枚举 SuccessHO_Config_r17_ThresholdPercentageT304_r17（ASN.1 thresholdPercentageT304-r17，源文件第 21665 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SuccessHO_Config_r17_ThresholdPercentageT304_r17 {
    SuccessHO_Config_r17_ThresholdPercentageT304_r17_p40 = 0, /**< ASN.1 p40 */
    SuccessHO_Config_r17_ThresholdPercentageT304_r17_p60 = 1, /**< ASN.1 p60 */
    SuccessHO_Config_r17_ThresholdPercentageT304_r17_p80 = 2, /**< ASN.1 p80 */
    SuccessHO_Config_r17_ThresholdPercentageT304_r17_spare5 = 3, /**< ASN.1 spare5 */
    SuccessHO_Config_r17_ThresholdPercentageT304_r17_spare4 = 4, /**< ASN.1 spare4 */
    SuccessHO_Config_r17_ThresholdPercentageT304_r17_spare3 = 5, /**< ASN.1 spare3 */
    SuccessHO_Config_r17_ThresholdPercentageT304_r17_spare2 = 6, /**< ASN.1 spare2 */
    SuccessHO_Config_r17_ThresholdPercentageT304_r17_spare1 = 7, /**< ASN.1 spare1 */
} SuccessHO_Config_r17_ThresholdPercentageT304_r17;


/**
 * @brief 枚举 SuccessHO_Config_r17_ThresholdPercentageT310_r17（ASN.1 thresholdPercentageT310-r17，源文件第 21666 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SuccessHO_Config_r17_ThresholdPercentageT310_r17 {
    SuccessHO_Config_r17_ThresholdPercentageT310_r17_p40 = 0, /**< ASN.1 p40 */
    SuccessHO_Config_r17_ThresholdPercentageT310_r17_p60 = 1, /**< ASN.1 p60 */
    SuccessHO_Config_r17_ThresholdPercentageT310_r17_p80 = 2, /**< ASN.1 p80 */
    SuccessHO_Config_r17_ThresholdPercentageT310_r17_spare5 = 3, /**< ASN.1 spare5 */
    SuccessHO_Config_r17_ThresholdPercentageT310_r17_spare4 = 4, /**< ASN.1 spare4 */
    SuccessHO_Config_r17_ThresholdPercentageT310_r17_spare3 = 5, /**< ASN.1 spare3 */
    SuccessHO_Config_r17_ThresholdPercentageT310_r17_spare2 = 6, /**< ASN.1 spare2 */
    SuccessHO_Config_r17_ThresholdPercentageT310_r17_spare1 = 7, /**< ASN.1 spare1 */
} SuccessHO_Config_r17_ThresholdPercentageT310_r17;


/**
 * @brief 枚举 SuccessHO_Config_r17_ThresholdPercentageT312_r17（ASN.1 thresholdPercentageT312-r17，源文件第 21667 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SuccessHO_Config_r17_ThresholdPercentageT312_r17 {
    SuccessHO_Config_r17_ThresholdPercentageT312_r17_p20 = 0, /**< ASN.1 p20 */
    SuccessHO_Config_r17_ThresholdPercentageT312_r17_p40 = 1, /**< ASN.1 p40 */
    SuccessHO_Config_r17_ThresholdPercentageT312_r17_p60 = 2, /**< ASN.1 p60 */
    SuccessHO_Config_r17_ThresholdPercentageT312_r17_p80 = 3, /**< ASN.1 p80 */
    SuccessHO_Config_r17_ThresholdPercentageT312_r17_spare4 = 4, /**< ASN.1 spare4 */
    SuccessHO_Config_r17_ThresholdPercentageT312_r17_spare3 = 5, /**< ASN.1 spare3 */
    SuccessHO_Config_r17_ThresholdPercentageT312_r17_spare2 = 6, /**< ASN.1 spare2 */
    SuccessHO_Config_r17_ThresholdPercentageT312_r17_spare1 = 7, /**< ASN.1 spare1 */
} SuccessHO_Config_r17_ThresholdPercentageT312_r17;


/**
 * @brief 枚举 SuccessHO_Config_r17_SourceDAPS_FailureReporting_r17（ASN.1 sourceDAPS-FailureReporting-r17，源文件第 21668 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SuccessHO_Config_r17_SourceDAPS_FailureReporting_r17 {
    SuccessHO_Config_r17_SourceDAPS_FailureReporting_r17_trueVal = 0, /**< ASN.1 trueVal */
} SuccessHO_Config_r17_SourceDAPS_FailureReporting_r17;


/**
 * @brief 枚举 SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18（ASN.1 thresholdPercentageT304-SCG-r18，源文件第 21673 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18 {
    SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18_p40 = 0, /**< ASN.1 p40 */
    SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18_p60 = 1, /**< ASN.1 p60 */
    SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18_p80 = 2, /**< ASN.1 p80 */
    SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18_spare5 = 3, /**< ASN.1 spare5 */
    SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18_spare4 = 4, /**< ASN.1 spare4 */
    SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18_spare3 = 5, /**< ASN.1 spare3 */
    SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18_spare2 = 6, /**< ASN.1 spare2 */
    SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18_spare1 = 7, /**< ASN.1 spare1 */
} SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18;


/**
 * @brief 枚举 SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18（ASN.1 thresholdPercentageT310-SCG-r18，源文件第 21674 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18 {
    SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18_p40 = 0, /**< ASN.1 p40 */
    SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18_p60 = 1, /**< ASN.1 p60 */
    SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18_p80 = 2, /**< ASN.1 p80 */
    SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18_spare5 = 3, /**< ASN.1 spare5 */
    SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18_spare4 = 4, /**< ASN.1 spare4 */
    SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18_spare3 = 5, /**< ASN.1 spare3 */
    SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18_spare2 = 6, /**< ASN.1 spare2 */
    SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18_spare1 = 7, /**< ASN.1 spare1 */
} SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18;


/**
 * @brief 枚举 SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18（ASN.1 thresholdPercentageT312-SCG-r18，源文件第 21675 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18 {
    SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18_p20 = 0, /**< ASN.1 p20 */
    SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18_p40 = 1, /**< ASN.1 p40 */
    SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18_p60 = 2, /**< ASN.1 p60 */
    SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18_p80 = 3, /**< ASN.1 p80 */
    SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18_spare4 = 4, /**< ASN.1 spare4 */
    SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18_spare3 = 5, /**< ASN.1 spare3 */
    SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18_spare2 = 6, /**< ASN.1 spare2 */
    SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18_spare1 = 7, /**< ASN.1 spare1 */
} SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18;


/**
 * @brief 枚举 OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer（ASN.1 overheatingIndicationProhibitTimer，源文件第 21681 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer {
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s0 = 0, /**< ASN.1 s0 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s0dot5 = 1, /**< ASN.1 s0dot5 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s1 = 2, /**< ASN.1 s1 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s2 = 3, /**< ASN.1 s2 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s5 = 4, /**< ASN.1 s5 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s10 = 5, /**< ASN.1 s10 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s20 = 6, /**< ASN.1 s20 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s30 = 7, /**< ASN.1 s30 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s60 = 8, /**< ASN.1 s60 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s90 = 9, /**< ASN.1 s90 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s120 = 10, /**< ASN.1 s120 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s300 = 11, /**< ASN.1 s300 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_s600 = 12, /**< ASN.1 s600 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_spare3 = 13, /**< ASN.1 spare3 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_spare2 = 14, /**< ASN.1 spare2 */
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer_spare1 = 15, /**< ASN.1 spare1 */
} OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer;


/**
 * @brief 枚举 DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16（ASN.1 drx-PreferenceProhibitTimer-r16，源文件第 21691 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16 {
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s0 = 0, /**< ASN.1 s0 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s0dot5 = 1, /**< ASN.1 s0dot5 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s1 = 2, /**< ASN.1 s1 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s2 = 3, /**< ASN.1 s2 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s3 = 4, /**< ASN.1 s3 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s4 = 5, /**< ASN.1 s4 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s5 = 6, /**< ASN.1 s5 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s6 = 7, /**< ASN.1 s6 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s7 = 8, /**< ASN.1 s7 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s8 = 9, /**< ASN.1 s8 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s9 = 10, /**< ASN.1 s9 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s10 = 11, /**< ASN.1 s10 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s20 = 12, /**< ASN.1 s20 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_s30 = 13, /**< ASN.1 s30 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_spare2 = 14, /**< ASN.1 spare2 */
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16_spare1 = 15, /**< ASN.1 spare1 */
} DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16;


/**
 * @brief 枚举 MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16（ASN.1 maxBW-PreferenceProhibitTimer-r16，源文件第 21697 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16 {
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s0 = 0, /**< ASN.1 s0 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s0dot5 = 1, /**< ASN.1 s0dot5 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s1 = 2, /**< ASN.1 s1 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s2 = 3, /**< ASN.1 s2 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s3 = 4, /**< ASN.1 s3 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s4 = 5, /**< ASN.1 s4 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s5 = 6, /**< ASN.1 s5 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s6 = 7, /**< ASN.1 s6 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s7 = 8, /**< ASN.1 s7 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s8 = 9, /**< ASN.1 s8 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s9 = 10, /**< ASN.1 s9 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s10 = 11, /**< ASN.1 s10 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s20 = 12, /**< ASN.1 s20 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_s30 = 13, /**< ASN.1 s30 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_spare2 = 14, /**< ASN.1 spare2 */
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16_spare1 = 15, /**< ASN.1 spare1 */
} MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16;


/**
 * @brief 枚举 MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16（ASN.1 maxCC-PreferenceProhibitTimer-r16，源文件第 21703 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16 {
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s0 = 0, /**< ASN.1 s0 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s0dot5 = 1, /**< ASN.1 s0dot5 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s1 = 2, /**< ASN.1 s1 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s2 = 3, /**< ASN.1 s2 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s3 = 4, /**< ASN.1 s3 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s4 = 5, /**< ASN.1 s4 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s5 = 6, /**< ASN.1 s5 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s6 = 7, /**< ASN.1 s6 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s7 = 8, /**< ASN.1 s7 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s8 = 9, /**< ASN.1 s8 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s9 = 10, /**< ASN.1 s9 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s10 = 11, /**< ASN.1 s10 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s20 = 12, /**< ASN.1 s20 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_s30 = 13, /**< ASN.1 s30 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_spare2 = 14, /**< ASN.1 spare2 */
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16_spare1 = 15, /**< ASN.1 spare1 */
} MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16;


/**
 * @brief 枚举 MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16（ASN.1 maxMIMO-LayerPreferenceProhibitTimer-r16，源文件第 21709 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16 {
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s0 = 0, /**< ASN.1 s0 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s0dot5 = 1, /**< ASN.1 s0dot5 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s1 = 2, /**< ASN.1 s1 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s2 = 3, /**< ASN.1 s2 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s3 = 4, /**< ASN.1 s3 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s4 = 5, /**< ASN.1 s4 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s5 = 6, /**< ASN.1 s5 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s6 = 7, /**< ASN.1 s6 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s7 = 8, /**< ASN.1 s7 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s8 = 9, /**< ASN.1 s8 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s9 = 10, /**< ASN.1 s9 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s10 = 11, /**< ASN.1 s10 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s20 = 12, /**< ASN.1 s20 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_s30 = 13, /**< ASN.1 s30 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_spare2 = 14, /**< ASN.1 spare2 */
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16_spare1 = 15, /**< ASN.1 spare1 */
} MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16;


/**
 * @brief 枚举 MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16（ASN.1 minSchedulingOffsetPreferenceProhibitTimer-r16，源文件第 21715 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16 {
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s0 = 0, /**< ASN.1 s0 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s0dot5 = 1, /**< ASN.1 s0dot5 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s1 = 2, /**< ASN.1 s1 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s2 = 3, /**< ASN.1 s2 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s3 = 4, /**< ASN.1 s3 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s4 = 5, /**< ASN.1 s4 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s5 = 6, /**< ASN.1 s5 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s6 = 7, /**< ASN.1 s6 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s7 = 8, /**< ASN.1 s7 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s8 = 9, /**< ASN.1 s8 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s9 = 10, /**< ASN.1 s9 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s10 = 11, /**< ASN.1 s10 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s20 = 12, /**< ASN.1 s20 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_s30 = 13, /**< ASN.1 s30 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_spare2 = 14, /**< ASN.1 spare2 */
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16_spare1 = 15, /**< ASN.1 spare1 */
} MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16;


/**
 * @brief 枚举 ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16（ASN.1 releasePreferenceProhibitTimer-r16，源文件第 21721 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16 {
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s0 = 0, /**< ASN.1 s0 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s0dot5 = 1, /**< ASN.1 s0dot5 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s1 = 2, /**< ASN.1 s1 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s2 = 3, /**< ASN.1 s2 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s3 = 4, /**< ASN.1 s3 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s4 = 5, /**< ASN.1 s4 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s5 = 6, /**< ASN.1 s5 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s6 = 7, /**< ASN.1 s6 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s7 = 8, /**< ASN.1 s7 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s8 = 9, /**< ASN.1 s8 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s9 = 10, /**< ASN.1 s9 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s10 = 11, /**< ASN.1 s10 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s20 = 12, /**< ASN.1 s20 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_s30 = 13, /**< ASN.1 s30 */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_infinity = 14, /**< ASN.1 infinity */
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16_spare1 = 15, /**< ASN.1 spare1 */
} ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16;


/**
 * @brief 枚举 ReleasePreferenceConfig_r16_ConnectedReporting（ASN.1 connectedReporting，源文件第 21724 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReleasePreferenceConfig_r16_ConnectedReporting {
    ReleasePreferenceConfig_r16_ConnectedReporting_trueVal = 0, /**< ASN.1 trueVal */
} ReleasePreferenceConfig_r16_ConnectedReporting;


/**
 * @brief 枚举 RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer（ASN.1 rlm-RelaxtionReportingProhibitTimer，源文件第 21728 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer {
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s0 = 0, /**< ASN.1 s0 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s0dot5 = 1, /**< ASN.1 s0dot5 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s1 = 2, /**< ASN.1 s1 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s2 = 3, /**< ASN.1 s2 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s5 = 4, /**< ASN.1 s5 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s10 = 5, /**< ASN.1 s10 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s20 = 6, /**< ASN.1 s20 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s30 = 7, /**< ASN.1 s30 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s60 = 8, /**< ASN.1 s60 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s90 = 9, /**< ASN.1 s90 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s120 = 10, /**< ASN.1 s120 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s300 = 11, /**< ASN.1 s300 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_s600 = 12, /**< ASN.1 s600 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_infinity = 13, /**< ASN.1 infinity */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_spare2 = 14, /**< ASN.1 spare2 */
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer_spare1 = 15, /**< ASN.1 spare1 */
} RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer;


/**
 * @brief 枚举 BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer（ASN.1 bfd-RelaxtionReportingProhibitTimer，源文件第 21733 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer {
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s0 = 0, /**< ASN.1 s0 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s0dot5 = 1, /**< ASN.1 s0dot5 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s1 = 2, /**< ASN.1 s1 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s2 = 3, /**< ASN.1 s2 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s5 = 4, /**< ASN.1 s5 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s10 = 5, /**< ASN.1 s10 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s20 = 6, /**< ASN.1 s20 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s30 = 7, /**< ASN.1 s30 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s60 = 8, /**< ASN.1 s60 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s90 = 9, /**< ASN.1 s90 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s120 = 10, /**< ASN.1 s120 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s300 = 11, /**< ASN.1 s300 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_s600 = 12, /**< ASN.1 s600 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_infinity = 13, /**< ASN.1 infinity */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_spare2 = 14, /**< ASN.1 spare2 */
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer_spare1 = 15, /**< ASN.1 spare1 */
} BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer;


/**
 * @brief 枚举 SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17（ASN.1 scg-DeactivationPreferenceProhibitTimer-r17，源文件第 21738 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17 {
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s0 = 0, /**< ASN.1 s0 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s1 = 1, /**< ASN.1 s1 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s2 = 2, /**< ASN.1 s2 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s4 = 3, /**< ASN.1 s4 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s8 = 4, /**< ASN.1 s8 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s10 = 5, /**< ASN.1 s10 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s15 = 6, /**< ASN.1 s15 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s30 = 7, /**< ASN.1 s30 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s60 = 8, /**< ASN.1 s60 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s120 = 9, /**< ASN.1 s120 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s180 = 10, /**< ASN.1 s180 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s240 = 11, /**< ASN.1 s240 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s300 = 12, /**< ASN.1 s300 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s600 = 13, /**< ASN.1 s600 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s900 = 14, /**< ASN.1 s900 */
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17_s1800 = 15, /**< ASN.1 s1800 */
} SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17;


/**
 * @brief 枚举 RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17（ASN.1 s-SearchDeltaP-Stationary-r17，源文件第 21744 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17 {
    RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17_dB2 = 0, /**< ASN.1 dB2 */
    RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17_dB3 = 1, /**< ASN.1 dB3 */
    RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17_dB6 = 2, /**< ASN.1 dB6 */
    RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17_dB9 = 3, /**< ASN.1 dB9 */
    RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17_dB12 = 4, /**< ASN.1 dB12 */
    RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17_dB15 = 5, /**< ASN.1 dB15 */
    RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17_spare2 = 6, /**< ASN.1 spare2 */
    RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17_spare1 = 7, /**< ASN.1 spare1 */
} RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17;


/**
 * @brief 枚举 RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17（ASN.1 t-SearchDeltaP-Stationary-r17，源文件第 21745 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17 {
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_s5 = 0, /**< ASN.1 s5 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_s10 = 1, /**< ASN.1 s10 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_s20 = 2, /**< ASN.1 s20 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_s30 = 3, /**< ASN.1 s30 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_s60 = 4, /**< ASN.1 s60 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_s120 = 5, /**< ASN.1 s120 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_s180 = 6, /**< ASN.1 s180 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_s240 = 7, /**< ASN.1 s240 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_s300 = 8, /**< ASN.1 s300 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_spare7 = 9, /**< ASN.1 spare7 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_spare6 = 10, /**< ASN.1 spare6 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_spare5 = 11, /**< ASN.1 spare5 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_spare4 = 12, /**< ASN.1 spare4 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_spare3 = 13, /**< ASN.1 spare3 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_spare2 = 14, /**< ASN.1 spare2 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17_spare1 = 15, /**< ASN.1 spare1 */
} RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17;


/**
 * @brief 枚举 PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17（ASN.1 threshPropDelayDiff-r17，源文件第 21750 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17 {
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms0dot5 = 0, /**< ASN.1 ms0dot5 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms1 = 1, /**< ASN.1 ms1 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms2 = 2, /**< ASN.1 ms2 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms3 = 3, /**< ASN.1 ms3 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms4 = 4, /**< ASN.1 ms4 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms5 = 5, /**< ASN.1 ms5 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms6 = 6, /**< ASN.1 ms6 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms7 = 7, /**< ASN.1 ms7 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms8 = 8, /**< ASN.1 ms8 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms9 = 9, /**< ASN.1 ms9 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_ms10 = 10, /**< ASN.1 ms10 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_spare5 = 11, /**< ASN.1 spare5 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_spare4 = 12, /**< ASN.1 spare4 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_spare3 = 13, /**< ASN.1 spare3 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_spare2 = 14, /**< ASN.1 spare2 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17_spare1 = 15, /**< ASN.1 spare1 */
} PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17;


/**
 * @brief 枚举 CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18（ASN.1 candidateBandwidth-r18，源文件第 21769 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18 {
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_khz200 = 0, /**< ASN.1 khz200 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_khz400 = 1, /**< ASN.1 khz400 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_khz600 = 2, /**< ASN.1 khz600 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_khz800 = 3, /**< ASN.1 khz800 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz1 = 4, /**< ASN.1 mhz1 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz2 = 5, /**< ASN.1 mhz2 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz3 = 6, /**< ASN.1 mhz3 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz4 = 7, /**< ASN.1 mhz4 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz5 = 8, /**< ASN.1 mhz5 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz6 = 9, /**< ASN.1 mhz6 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz8 = 10, /**< ASN.1 mhz8 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz10 = 11, /**< ASN.1 mhz10 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz20 = 12, /**< ASN.1 mhz20 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz30 = 13, /**< ASN.1 mhz30 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz40 = 14, /**< ASN.1 mhz40 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz50 = 15, /**< ASN.1 mhz50 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz60 = 16, /**< ASN.1 mhz60 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz80 = 17, /**< ASN.1 mhz80 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz100 = 18, /**< ASN.1 mhz100 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz200 = 19, /**< ASN.1 mhz200 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz300 = 20, /**< ASN.1 mhz300 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18_mhz400 = 21, /**< ASN.1 mhz400 */
} CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18;


/**
 * @brief 枚举 UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18（ASN.1 ul-TrafficInfoProhibitTimer-r18，源文件第 21776 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18 {
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s0 = 0, /**< ASN.1 s0 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s0dot5 = 1, /**< ASN.1 s0dot5 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s1 = 2, /**< ASN.1 s1 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s2 = 3, /**< ASN.1 s2 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s5 = 4, /**< ASN.1 s5 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s10 = 5, /**< ASN.1 s10 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s20 = 6, /**< ASN.1 s20 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s30 = 7, /**< ASN.1 s30 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s60 = 8, /**< ASN.1 s60 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s90 = 9, /**< ASN.1 s90 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s120 = 10, /**< ASN.1 s120 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s300 = 11, /**< ASN.1 s300 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_s600 = 12, /**< ASN.1 s600 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_spare3 = 13, /**< ASN.1 spare3 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_spare2 = 14, /**< ASN.1 spare2 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18_spare1 = 15, /**< ASN.1 spare1 */
} UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18;


/**
 * @brief 枚举 Sensor_NameList_r16_MeasUncomBarPre_r16（ASN.1 measUncomBarPre-r16，源文件第 21800 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Sensor_NameList_r16_MeasUncomBarPre_r16 {
    Sensor_NameList_r16_MeasUncomBarPre_r16_trueVal = 0, /**< ASN.1 trueVal */
} Sensor_NameList_r16_MeasUncomBarPre_r16;


/**
 * @brief 枚举 Sensor_NameList_r16_MeasUeSpeed（ASN.1 measUeSpeed，源文件第 21801 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Sensor_NameList_r16_MeasUeSpeed {
    Sensor_NameList_r16_MeasUeSpeed_trueVal = 0, /**< ASN.1 trueVal */
} Sensor_NameList_r16_MeasUeSpeed;


/**
 * @brief 枚举 Sensor_NameList_r16_MeasUeOrientation（ASN.1 measUeOrientation，源文件第 21802 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Sensor_NameList_r16_MeasUeOrientation {
    Sensor_NameList_r16_MeasUeOrientation_trueVal = 0, /**< ASN.1 trueVal */
} Sensor_NameList_r16_MeasUeOrientation;


/**
 * @brief 枚举 UE_MeasurementsAvailable_r16_LogMeasAvailable_r16（ASN.1 logMeasAvailable-r16，源文件第 21818 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_MeasurementsAvailable_r16_LogMeasAvailable_r16 {
    UE_MeasurementsAvailable_r16_LogMeasAvailable_r16_trueVal = 0, /**< ASN.1 trueVal */
} UE_MeasurementsAvailable_r16_LogMeasAvailable_r16;


/**
 * @brief 枚举 UE_MeasurementsAvailable_r16_LogMeasAvailableBT_r16（ASN.1 logMeasAvailableBT-r16，源文件第 21819 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_MeasurementsAvailable_r16_LogMeasAvailableBT_r16 {
    UE_MeasurementsAvailable_r16_LogMeasAvailableBT_r16_trueVal = 0, /**< ASN.1 trueVal */
} UE_MeasurementsAvailable_r16_LogMeasAvailableBT_r16;


/**
 * @brief 枚举 UE_MeasurementsAvailable_r16_LogMeasAvailableWLAN_r16（ASN.1 logMeasAvailableWLAN-r16，源文件第 21820 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_MeasurementsAvailable_r16_LogMeasAvailableWLAN_r16 {
    UE_MeasurementsAvailable_r16_LogMeasAvailableWLAN_r16_trueVal = 0, /**< ASN.1 trueVal */
} UE_MeasurementsAvailable_r16_LogMeasAvailableWLAN_r16;


/**
 * @brief 枚举 UE_MeasurementsAvailable_r16_ConnEstFailInfoAvailable_r16（ASN.1 connEstFailInfoAvailable-r16，源文件第 21821 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_MeasurementsAvailable_r16_ConnEstFailInfoAvailable_r16 {
    UE_MeasurementsAvailable_r16_ConnEstFailInfoAvailable_r16_trueVal = 0, /**< ASN.1 trueVal */
} UE_MeasurementsAvailable_r16_ConnEstFailInfoAvailable_r16;


/**
 * @brief 枚举 UE_MeasurementsAvailable_r16_Rlf_InfoAvailable_r16（ASN.1 rlf-InfoAvailable-r16，源文件第 21822 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_MeasurementsAvailable_r16_Rlf_InfoAvailable_r16 {
    UE_MeasurementsAvailable_r16_Rlf_InfoAvailable_r16_trueVal = 0, /**< ASN.1 trueVal */
} UE_MeasurementsAvailable_r16_Rlf_InfoAvailable_r16;


/**
 * @brief 枚举 UE_MeasurementsAvailable_r16_ExtGroup1_SuccessHO_InfoAvailable_r17（ASN.1 successHO-InfoAvailable-r17，源文件第 21825 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_MeasurementsAvailable_r16_ExtGroup1_SuccessHO_InfoAvailable_r17 {
    UE_MeasurementsAvailable_r16_ExtGroup1_SuccessHO_InfoAvailable_r17_trueVal = 0, /**< ASN.1 trueVal */
} UE_MeasurementsAvailable_r16_ExtGroup1_SuccessHO_InfoAvailable_r17;


/**
 * @brief 枚举 UE_MeasurementsAvailable_r16_ExtGroup2_SuccessPSCell_InfoAvailable_r18（ASN.1 successPSCell-InfoAvailable-r18，源文件第 21829 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_MeasurementsAvailable_r16_ExtGroup2_SuccessPSCell_InfoAvailable_r18 {
    UE_MeasurementsAvailable_r16_ExtGroup2_SuccessPSCell_InfoAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} UE_MeasurementsAvailable_r16_ExtGroup2_SuccessPSCell_InfoAvailable_r18;


/**
 * @brief 枚举 SL_BWP_Generic_r16_Sl_LengthSymbols_r16（ASN.1 sl-LengthSymbols-r16，源文件第 21911 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_BWP_Generic_r16_Sl_LengthSymbols_r16 {
    SL_BWP_Generic_r16_Sl_LengthSymbols_r16_sym7 = 0, /**< ASN.1 sym7 */
    SL_BWP_Generic_r16_Sl_LengthSymbols_r16_sym8 = 1, /**< ASN.1 sym8 */
    SL_BWP_Generic_r16_Sl_LengthSymbols_r16_sym9 = 2, /**< ASN.1 sym9 */
    SL_BWP_Generic_r16_Sl_LengthSymbols_r16_sym10 = 3, /**< ASN.1 sym10 */
    SL_BWP_Generic_r16_Sl_LengthSymbols_r16_sym11 = 4, /**< ASN.1 sym11 */
    SL_BWP_Generic_r16_Sl_LengthSymbols_r16_sym12 = 5, /**< ASN.1 sym12 */
    SL_BWP_Generic_r16_Sl_LengthSymbols_r16_sym13 = 6, /**< ASN.1 sym13 */
    SL_BWP_Generic_r16_Sl_LengthSymbols_r16_sym14 = 7, /**< ASN.1 sym14 */
} SL_BWP_Generic_r16_Sl_LengthSymbols_r16;


/**
 * @brief 枚举 SL_BWP_Generic_r16_Sl_StartSymbol_r16（ASN.1 sl-StartSymbol-r16，源文件第 21912 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_BWP_Generic_r16_Sl_StartSymbol_r16 {
    SL_BWP_Generic_r16_Sl_StartSymbol_r16_sym0 = 0, /**< ASN.1 sym0 */
    SL_BWP_Generic_r16_Sl_StartSymbol_r16_sym1 = 1, /**< ASN.1 sym1 */
    SL_BWP_Generic_r16_Sl_StartSymbol_r16_sym2 = 2, /**< ASN.1 sym2 */
    SL_BWP_Generic_r16_Sl_StartSymbol_r16_sym3 = 3, /**< ASN.1 sym3 */
    SL_BWP_Generic_r16_Sl_StartSymbol_r16_sym4 = 4, /**< ASN.1 sym4 */
    SL_BWP_Generic_r16_Sl_StartSymbol_r16_sym5 = 5, /**< ASN.1 sym5 */
    SL_BWP_Generic_r16_Sl_StartSymbol_r16_sym6 = 6, /**< ASN.1 sym6 */
    SL_BWP_Generic_r16_Sl_StartSymbol_r16_sym7 = 7, /**< ASN.1 sym7 */
} SL_BWP_Generic_r16_Sl_StartSymbol_r16;


/**
 * @brief 枚举 SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18（ASN.1 sl-StartingSymbolFirst-r18，源文件第 21918 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18 {
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18_sym0 = 0, /**< ASN.1 sym0 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18_sym1 = 1, /**< ASN.1 sym1 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18_sym2 = 2, /**< ASN.1 sym2 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18_sym3 = 3, /**< ASN.1 sym3 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18_sym4 = 4, /**< ASN.1 sym4 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18_sym5 = 5, /**< ASN.1 sym5 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18_sym6 = 6, /**< ASN.1 sym6 */
} SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18;


/**
 * @brief 枚举 SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolSecond_r18（ASN.1 sl-StartingSymbolSecond-r18，源文件第 21919 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolSecond_r18 {
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolSecond_r18_sym3 = 0, /**< ASN.1 sym3 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolSecond_r18_sym4 = 1, /**< ASN.1 sym4 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolSecond_r18_sym5 = 2, /**< ASN.1 sym5 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolSecond_r18_sym6 = 3, /**< ASN.1 sym6 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolSecond_r18_sym7 = 4, /**< ASN.1 sym7 */
} SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolSecond_r18;


/**
 * @brief 枚举 SL_BWP_Generic_r16_ExtGroup1_Sl_TransmissionStructureForPSCCHandPSSCH_r18（ASN.1 sl-TransmissionStructureForPSCCHandPSSCH-r18，源文件第 21920 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_BWP_Generic_r16_ExtGroup1_Sl_TransmissionStructureForPSCCHandPSSCH_r18 {
    SL_BWP_Generic_r16_ExtGroup1_Sl_TransmissionStructureForPSCCHandPSSCH_r18_contigousRB = 0, /**< ASN.1 contigousRB */
    SL_BWP_Generic_r16_ExtGroup1_Sl_TransmissionStructureForPSCCHandPSSCH_r18_interlaceRB = 1, /**< ASN.1 interlaceRB */
} SL_BWP_Generic_r16_ExtGroup1_Sl_TransmissionStructureForPSCCHandPSSCH_r18;


/**
 * @brief 枚举 SL_BWP_Generic_r16_ExtGroup1_Sl_CWS_ForPsschWithoutHarqAck_r18（ASN.1 sl-CWS-ForPsschWithoutHarqAck-r18，源文件第 21924 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_BWP_Generic_r16_ExtGroup1_Sl_CWS_ForPsschWithoutHarqAck_r18 {
    SL_BWP_Generic_r16_ExtGroup1_Sl_CWS_ForPsschWithoutHarqAck_r18_t1 = 0, /**< ASN.1 t1 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_CWS_ForPsschWithoutHarqAck_r18_t8 = 1, /**< ASN.1 t8 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_CWS_ForPsschWithoutHarqAck_r18_t16 = 2, /**< ASN.1 t16 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_CWS_ForPsschWithoutHarqAck_r18_t32 = 3, /**< ASN.1 t32 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_CWS_ForPsschWithoutHarqAck_r18_infinity = 4, /**< ASN.1 infinity */
} SL_BWP_Generic_r16_ExtGroup1_Sl_CWS_ForPsschWithoutHarqAck_r18;


/**
 * @brief 枚举 SL_BWP_Generic_r16_ExtGroup1_Sl_SSSBPowerOffsetOfAnchorRBSet_r18（ASN.1 sl-SSSBPowerOffsetOfAnchorRBSet-r18，源文件第 21926 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_BWP_Generic_r16_ExtGroup1_Sl_SSSBPowerOffsetOfAnchorRBSet_r18 {
    SL_BWP_Generic_r16_ExtGroup1_Sl_SSSBPowerOffsetOfAnchorRBSet_r18_value1 = 0, /**< ASN.1 value1 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_SSSBPowerOffsetOfAnchorRBSet_r18_value2 = 1, /**< ASN.1 value2 */
} SL_BWP_Generic_r16_ExtGroup1_Sl_SSSBPowerOffsetOfAnchorRBSet_r18;


/**
 * @brief 枚举 SL_ConfigDedicatedNR_r16_T400_r16（ASN.1 t400-r16，源文件第 22095 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ConfigDedicatedNR_r16_T400_r16 {
    SL_ConfigDedicatedNR_r16_T400_r16_ms100 = 0, /**< ASN.1 ms100 */
    SL_ConfigDedicatedNR_r16_T400_r16_ms200 = 1, /**< ASN.1 ms200 */
    SL_ConfigDedicatedNR_r16_T400_r16_ms300 = 2, /**< ASN.1 ms300 */
    SL_ConfigDedicatedNR_r16_T400_r16_ms400 = 3, /**< ASN.1 ms400 */
    SL_ConfigDedicatedNR_r16_T400_r16_ms600 = 4, /**< ASN.1 ms600 */
    SL_ConfigDedicatedNR_r16_T400_r16_ms1000 = 5, /**< ASN.1 ms1000 */
    SL_ConfigDedicatedNR_r16_T400_r16_ms1500 = 6, /**< ASN.1 ms1500 */
    SL_ConfigDedicatedNR_r16_T400_r16_ms2000 = 7, /**< ASN.1 ms2000 */
} SL_ConfigDedicatedNR_r16_T400_r16;


/**
 * @brief 枚举 SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16（ASN.1 sl-MaxNumConsecutiveDTX-r16，源文件第 22115 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16 {
    SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16_n1 = 0, /**< ASN.1 n1 */
    SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16_n2 = 1, /**< ASN.1 n2 */
    SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16_n3 = 2, /**< ASN.1 n3 */
    SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16_n4 = 3, /**< ASN.1 n4 */
    SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16_n6 = 4, /**< ASN.1 n6 */
    SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16_n8 = 5, /**< ASN.1 n8 */
    SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16_n16 = 6, /**< ASN.1 n16 */
    SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16_n32 = 7, /**< ASN.1 n32 */
} SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16;


/**
 * @brief 枚举 SL_PHY_MAC_RLC_Config_r16_Sl_CSI_Acquisition_r16（ASN.1 sl-CSI-Acquisition-r16，源文件第 22116 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PHY_MAC_RLC_Config_r16_Sl_CSI_Acquisition_r16 {
    SL_PHY_MAC_RLC_Config_r16_Sl_CSI_Acquisition_r16_enabled = 0, /**< ASN.1 enabled */
} SL_PHY_MAC_RLC_Config_r16_Sl_CSI_Acquisition_r16;


/**
 * @brief 枚举 SL_PHY_MAC_RLC_Config_r16_NetworkControlledSyncTx_r16（ASN.1 networkControlledSyncTx-r16，源文件第 22119 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PHY_MAC_RLC_Config_r16_NetworkControlledSyncTx_r16 {
    SL_PHY_MAC_RLC_Config_r16_NetworkControlledSyncTx_r16_on = 0, /**< ASN.1 on */
    SL_PHY_MAC_RLC_Config_r16_NetworkControlledSyncTx_r16_off = 1, /**< ASN.1 off */
} SL_PHY_MAC_RLC_Config_r16_NetworkControlledSyncTx_r16;


/**
 * @brief 枚举 SL_PHY_MAC_RLC_Config_v1700_ExtGroup1_Sl_SyncTxMultiFreq_r18（ASN.1 sl-SyncTxMultiFreq-r18，源文件第 22133 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PHY_MAC_RLC_Config_v1700_ExtGroup1_Sl_SyncTxMultiFreq_r18 {
    SL_PHY_MAC_RLC_Config_v1700_ExtGroup1_Sl_SyncTxMultiFreq_r18_trueVal = 0, /**< ASN.1 trueVal */
} SL_PHY_MAC_RLC_Config_v1700_ExtGroup1_Sl_SyncTxMultiFreq_r18;


/**
 * @brief 枚举 SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16_Sl_TimeReferenceSFN_Type1_r16（ASN.1 rrc-ConfiguredSidelinkGrant-r16/sl-TimeReferenceSFN-Type1-r16，源文件第 22176 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16_Sl_TimeReferenceSFN_Type1_r16 {
    SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16_Sl_TimeReferenceSFN_Type1_r16_sfn512 = 0, /**< ASN.1 sfn512 */
} SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16_Sl_TimeReferenceSFN_Type1_r16;


/**
 * @brief 枚举 SL_PeriodCG_r16_Sl_PeriodCG1_r16（ASN.1 sl-PeriodCG1-r16，源文件第 22197 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PeriodCG_r16_Sl_PeriodCG1_r16 {
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms100 = 0, /**< ASN.1 ms100 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms200 = 1, /**< ASN.1 ms200 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms300 = 2, /**< ASN.1 ms300 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms400 = 3, /**< ASN.1 ms400 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms500 = 4, /**< ASN.1 ms500 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms600 = 5, /**< ASN.1 ms600 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms700 = 6, /**< ASN.1 ms700 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms800 = 7, /**< ASN.1 ms800 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms900 = 8, /**< ASN.1 ms900 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_ms1000 = 9, /**< ASN.1 ms1000 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_spare6 = 10, /**< ASN.1 spare6 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_spare5 = 11, /**< ASN.1 spare5 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_spare4 = 12, /**< ASN.1 spare4 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_spare3 = 13, /**< ASN.1 spare3 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_spare2 = 14, /**< ASN.1 spare2 */
    SL_PeriodCG_r16_Sl_PeriodCG1_r16_spare1 = 15, /**< ASN.1 spare1 */
} SL_PeriodCG_r16_Sl_PeriodCG1_r16;


/**
 * @brief 枚举 SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18_Sl_1fb5a88c（ASN.1 rrc-ConfiguredSidelinkGrantDedicated-SL-PRS-RP-r18/sl-TimeReferenceSFN-Type1-r18，源文件第 22211 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18_Sl_1fb5a88c {
    SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18_Sl_1fb5a88c_sfn512 = 0, /**< ASN.1 sfn512 */
} SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18_Sl_1fb5a88c;


/**
 * @brief 枚举 SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds（ASN.1 sl-DRX-GC-BC-OnDurationTimer-r17/milliSeconds，源文件第 22254 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds {
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms1 = 0, /**< ASN.1 ms1 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms2 = 1, /**< ASN.1 ms2 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms3 = 2, /**< ASN.1 ms3 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms4 = 3, /**< ASN.1 ms4 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms5 = 4, /**< ASN.1 ms5 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms6 = 5, /**< ASN.1 ms6 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms8 = 6, /**< ASN.1 ms8 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms10 = 7, /**< ASN.1 ms10 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms20 = 8, /**< ASN.1 ms20 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms30 = 9, /**< ASN.1 ms30 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms40 = 10, /**< ASN.1 ms40 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms50 = 11, /**< ASN.1 ms50 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms60 = 12, /**< ASN.1 ms60 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms80 = 13, /**< ASN.1 ms80 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms100 = 14, /**< ASN.1 ms100 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms200 = 15, /**< ASN.1 ms200 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms300 = 16, /**< ASN.1 ms300 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms400 = 17, /**< ASN.1 ms400 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms500 = 18, /**< ASN.1 ms500 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms600 = 19, /**< ASN.1 ms600 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms800 = 20, /**< ASN.1 ms800 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms1000 = 21, /**< ASN.1 ms1000 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms1200 = 22, /**< ASN.1 ms1200 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_ms1600 = 23, /**< ASN.1 ms1600 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_spare8 = 24, /**< ASN.1 spare8 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_spare7 = 25, /**< ASN.1 spare7 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_spare6 = 26, /**< ASN.1 spare6 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_spare5 = 27, /**< ASN.1 spare5 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_spare4 = 28, /**< ASN.1 spare4 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_spare3 = 29, /**< ASN.1 spare3 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_spare2 = 30, /**< ASN.1 spare2 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds_spare1 = 31, /**< ASN.1 spare1 */
} SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds;


/**
 * @brief 枚举 SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17（ASN.1 sl-DRX-GC-InactivityTimer-r17，源文件第 22259 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17 {
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms0 = 0, /**< ASN.1 ms0 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms1 = 1, /**< ASN.1 ms1 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms2 = 2, /**< ASN.1 ms2 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms3 = 3, /**< ASN.1 ms3 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms4 = 4, /**< ASN.1 ms4 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms5 = 5, /**< ASN.1 ms5 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms6 = 6, /**< ASN.1 ms6 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms8 = 7, /**< ASN.1 ms8 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms10 = 8, /**< ASN.1 ms10 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms20 = 9, /**< ASN.1 ms20 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms30 = 10, /**< ASN.1 ms30 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms40 = 11, /**< ASN.1 ms40 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms50 = 12, /**< ASN.1 ms50 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms60 = 13, /**< ASN.1 ms60 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms80 = 14, /**< ASN.1 ms80 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms100 = 15, /**< ASN.1 ms100 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms200 = 16, /**< ASN.1 ms200 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms300 = 17, /**< ASN.1 ms300 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms500 = 18, /**< ASN.1 ms500 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms750 = 19, /**< ASN.1 ms750 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms1280 = 20, /**< ASN.1 ms1280 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms1920 = 21, /**< ASN.1 ms1920 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_ms2560 = 22, /**< ASN.1 ms2560 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_spare9 = 23, /**< ASN.1 spare9 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_spare8 = 24, /**< ASN.1 spare8 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_spare7 = 25, /**< ASN.1 spare7 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_spare6 = 26, /**< ASN.1 spare6 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_spare5 = 27, /**< ASN.1 spare5 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_spare4 = 28, /**< ASN.1 spare4 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_spare3 = 29, /**< ASN.1 spare3 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_spare2 = 30, /**< ASN.1 spare2 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17_spare1 = 31, /**< ASN.1 spare1 */
} SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17;


/**
 * @brief 枚举 SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17（ASN.1 sl-DRX-GC-BC-Cycle-r17，源文件第 22263 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17 {
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms10 = 0, /**< ASN.1 ms10 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms20 = 1, /**< ASN.1 ms20 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms32 = 2, /**< ASN.1 ms32 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms40 = 3, /**< ASN.1 ms40 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms60 = 4, /**< ASN.1 ms60 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms64 = 5, /**< ASN.1 ms64 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms70 = 6, /**< ASN.1 ms70 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms80 = 7, /**< ASN.1 ms80 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms128 = 8, /**< ASN.1 ms128 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms160 = 9, /**< ASN.1 ms160 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms256 = 10, /**< ASN.1 ms256 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms320 = 11, /**< ASN.1 ms320 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms512 = 12, /**< ASN.1 ms512 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms640 = 13, /**< ASN.1 ms640 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms1024 = 14, /**< ASN.1 ms1024 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms1280 = 15, /**< ASN.1 ms1280 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms2048 = 16, /**< ASN.1 ms2048 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms2560 = 17, /**< ASN.1 ms2560 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms5120 = 18, /**< ASN.1 ms5120 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_ms10240 = 19, /**< ASN.1 ms10240 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare12 = 20, /**< ASN.1 spare12 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare11 = 21, /**< ASN.1 spare11 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare10 = 22, /**< ASN.1 spare10 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare9 = 23, /**< ASN.1 spare9 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare8 = 24, /**< ASN.1 spare8 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare7 = 25, /**< ASN.1 spare7 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare6 = 26, /**< ASN.1 spare6 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare5 = 27, /**< ASN.1 spare5 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare4 = 28, /**< ASN.1 spare4 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare3 = 29, /**< ASN.1 spare3 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare2 = 30, /**< ASN.1 spare2 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17_spare1 = 31, /**< ASN.1 spare1 */
} SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17;


/**
 * @brief 枚举 SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17（ASN.1 sl-DRX-GC-HARQ-RTT-Timer1-r17，源文件第 22271 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17 {
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17_sl0 = 0, /**< ASN.1 sl0 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17_sl1 = 1, /**< ASN.1 sl1 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17_sl2 = 2, /**< ASN.1 sl2 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17_sl4 = 3, /**< ASN.1 sl4 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17_spare4 = 4, /**< ASN.1 spare4 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17_spare3 = 5, /**< ASN.1 spare3 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17_spare2 = 6, /**< ASN.1 spare2 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17_spare1 = 7, /**< ASN.1 spare1 */
} SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17;


/**
 * @brief 枚举 SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17（ASN.1 sl-DRX-GC-HARQ-RTT-Timer2-r17，源文件第 22272 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17 {
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17_sl0 = 0, /**< ASN.1 sl0 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17_sl1 = 1, /**< ASN.1 sl1 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17_sl2 = 2, /**< ASN.1 sl2 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17_sl4 = 3, /**< ASN.1 sl4 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17_spare4 = 4, /**< ASN.1 spare4 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17_spare3 = 5, /**< ASN.1 spare3 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17_spare2 = 6, /**< ASN.1 spare2 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17_spare1 = 7, /**< ASN.1 spare1 */
} SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17;


/**
 * @brief 枚举 SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17（ASN.1 sl-DRX-GC-RetransmissionTimer-r17，源文件第 22273 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17 {
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl0 = 0, /**< ASN.1 sl0 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl1 = 1, /**< ASN.1 sl1 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl2 = 2, /**< ASN.1 sl2 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl4 = 3, /**< ASN.1 sl4 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl6 = 4, /**< ASN.1 sl6 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl8 = 5, /**< ASN.1 sl8 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl16 = 6, /**< ASN.1 sl16 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl24 = 7, /**< ASN.1 sl24 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl33 = 8, /**< ASN.1 sl33 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl40 = 9, /**< ASN.1 sl40 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl64 = 10, /**< ASN.1 sl64 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl80 = 11, /**< ASN.1 sl80 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl96 = 12, /**< ASN.1 sl96 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl112 = 13, /**< ASN.1 sl112 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl128 = 14, /**< ASN.1 sl128 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl160 = 15, /**< ASN.1 sl160 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_sl320 = 16, /**< ASN.1 sl320 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare15 = 17, /**< ASN.1 spare15 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare14 = 18, /**< ASN.1 spare14 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare13 = 19, /**< ASN.1 spare13 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare12 = 20, /**< ASN.1 spare12 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare11 = 21, /**< ASN.1 spare11 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare10 = 22, /**< ASN.1 spare10 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare9 = 23, /**< ASN.1 spare9 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare8 = 24, /**< ASN.1 spare8 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare7 = 25, /**< ASN.1 spare7 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare6 = 26, /**< ASN.1 spare6 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare5 = 27, /**< ASN.1 spare5 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare4 = 28, /**< ASN.1 spare4 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare3 = 29, /**< ASN.1 spare3 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare2 = 30, /**< ASN.1 spare2 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17_spare1 = 31, /**< ASN.1 spare1 */
} SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17;


/**
 * @brief 枚举 SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds（ASN.1 sl-drx-onDurationTimer-r17/milliSeconds，源文件第 22285 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds {
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms1 = 0, /**< ASN.1 ms1 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms2 = 1, /**< ASN.1 ms2 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms3 = 2, /**< ASN.1 ms3 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms4 = 3, /**< ASN.1 ms4 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms5 = 4, /**< ASN.1 ms5 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms6 = 5, /**< ASN.1 ms6 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms8 = 6, /**< ASN.1 ms8 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms10 = 7, /**< ASN.1 ms10 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms20 = 8, /**< ASN.1 ms20 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms30 = 9, /**< ASN.1 ms30 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms40 = 10, /**< ASN.1 ms40 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms50 = 11, /**< ASN.1 ms50 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms60 = 12, /**< ASN.1 ms60 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms80 = 13, /**< ASN.1 ms80 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms100 = 14, /**< ASN.1 ms100 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms200 = 15, /**< ASN.1 ms200 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms300 = 16, /**< ASN.1 ms300 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms400 = 17, /**< ASN.1 ms400 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms500 = 18, /**< ASN.1 ms500 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms600 = 19, /**< ASN.1 ms600 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms800 = 20, /**< ASN.1 ms800 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms1000 = 21, /**< ASN.1 ms1000 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms1200 = 22, /**< ASN.1 ms1200 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms1600 = 23, /**< ASN.1 ms1600 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare8 = 24, /**< ASN.1 spare8 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare7 = 25, /**< ASN.1 spare7 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare6 = 26, /**< ASN.1 spare6 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare5 = 27, /**< ASN.1 spare5 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare4 = 28, /**< ASN.1 spare4 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare3 = 29, /**< ASN.1 spare3 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare2 = 30, /**< ASN.1 spare2 */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare1 = 31, /**< ASN.1 spare1 */
} SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds;


/**
 * @brief 枚举 SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17（ASN.1 sl-drx-InactivityTimer-r17，源文件第 22290 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17 {
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms0 = 0, /**< ASN.1 ms0 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms1 = 1, /**< ASN.1 ms1 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms2 = 2, /**< ASN.1 ms2 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms3 = 3, /**< ASN.1 ms3 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms4 = 4, /**< ASN.1 ms4 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms5 = 5, /**< ASN.1 ms5 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms6 = 6, /**< ASN.1 ms6 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms8 = 7, /**< ASN.1 ms8 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms10 = 8, /**< ASN.1 ms10 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms20 = 9, /**< ASN.1 ms20 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms30 = 10, /**< ASN.1 ms30 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms40 = 11, /**< ASN.1 ms40 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms50 = 12, /**< ASN.1 ms50 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms60 = 13, /**< ASN.1 ms60 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms80 = 14, /**< ASN.1 ms80 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms100 = 15, /**< ASN.1 ms100 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms200 = 16, /**< ASN.1 ms200 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms300 = 17, /**< ASN.1 ms300 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms500 = 18, /**< ASN.1 ms500 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms750 = 19, /**< ASN.1 ms750 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms1280 = 20, /**< ASN.1 ms1280 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms1920 = 21, /**< ASN.1 ms1920 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_ms2560 = 22, /**< ASN.1 ms2560 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_spare9 = 23, /**< ASN.1 spare9 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_spare8 = 24, /**< ASN.1 spare8 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_spare7 = 25, /**< ASN.1 spare7 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_spare6 = 26, /**< ASN.1 spare6 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_spare5 = 27, /**< ASN.1 spare5 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_spare4 = 28, /**< ASN.1 spare4 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_spare3 = 29, /**< ASN.1 spare3 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_spare2 = 30, /**< ASN.1 spare2 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17_spare1 = 31, /**< ASN.1 spare1 */
} SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17;


/**
 * @brief 枚举 SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17（ASN.1 sl-drx-HARQ-RTT-Timer1-r17，源文件第 22294 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17 {
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17_sl0 = 0, /**< ASN.1 sl0 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17_sl1 = 1, /**< ASN.1 sl1 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17_sl2 = 2, /**< ASN.1 sl2 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17_sl4 = 3, /**< ASN.1 sl4 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17_spare4 = 4, /**< ASN.1 spare4 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17_spare3 = 5, /**< ASN.1 spare3 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17_spare2 = 6, /**< ASN.1 spare2 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17_spare1 = 7, /**< ASN.1 spare1 */
} SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17;


/**
 * @brief 枚举 SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17（ASN.1 sl-drx-HARQ-RTT-Timer2-r17，源文件第 22295 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17 {
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17_sl0 = 0, /**< ASN.1 sl0 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17_sl1 = 1, /**< ASN.1 sl1 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17_sl2 = 2, /**< ASN.1 sl2 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17_sl4 = 3, /**< ASN.1 sl4 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17_spare4 = 4, /**< ASN.1 spare4 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17_spare3 = 5, /**< ASN.1 spare3 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17_spare2 = 6, /**< ASN.1 spare2 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17_spare1 = 7, /**< ASN.1 spare1 */
} SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17;


/**
 * @brief 枚举 SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17（ASN.1 sl-drx-RetransmissionTimer-r17，源文件第 22296 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17 {
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl0 = 0, /**< ASN.1 sl0 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl1 = 1, /**< ASN.1 sl1 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl2 = 2, /**< ASN.1 sl2 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl4 = 3, /**< ASN.1 sl4 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl6 = 4, /**< ASN.1 sl6 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl8 = 5, /**< ASN.1 sl8 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl16 = 6, /**< ASN.1 sl16 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl24 = 7, /**< ASN.1 sl24 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl33 = 8, /**< ASN.1 sl33 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl40 = 9, /**< ASN.1 sl40 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl64 = 10, /**< ASN.1 sl64 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl80 = 11, /**< ASN.1 sl80 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl96 = 12, /**< ASN.1 sl96 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl112 = 13, /**< ASN.1 sl112 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl128 = 14, /**< ASN.1 sl128 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl160 = 15, /**< ASN.1 sl160 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_sl320 = 16, /**< ASN.1 sl320 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare15 = 17, /**< ASN.1 spare15 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare14 = 18, /**< ASN.1 spare14 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare13 = 19, /**< ASN.1 spare13 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare12 = 20, /**< ASN.1 spare12 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare11 = 21, /**< ASN.1 spare11 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare10 = 22, /**< ASN.1 spare10 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare9 = 23, /**< ASN.1 spare9 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare8 = 24, /**< ASN.1 spare8 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare7 = 25, /**< ASN.1 spare7 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare6 = 26, /**< ASN.1 spare6 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare5 = 27, /**< ASN.1 spare5 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare4 = 28, /**< ASN.1 spare4 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare3 = 29, /**< ASN.1 spare3 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare2 = 30, /**< ASN.1 spare2 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17_spare1 = 31, /**< ASN.1 spare1 */
} SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17;


/**
 * @brief 枚举 SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds（ASN.1 sl-drx-onDurationTimer-r17/milliSeconds，源文件第 22331 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds {
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms1 = 0, /**< ASN.1 ms1 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms2 = 1, /**< ASN.1 ms2 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms3 = 2, /**< ASN.1 ms3 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms4 = 3, /**< ASN.1 ms4 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms5 = 4, /**< ASN.1 ms5 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms6 = 5, /**< ASN.1 ms6 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms8 = 6, /**< ASN.1 ms8 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms10 = 7, /**< ASN.1 ms10 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms20 = 8, /**< ASN.1 ms20 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms30 = 9, /**< ASN.1 ms30 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms40 = 10, /**< ASN.1 ms40 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms50 = 11, /**< ASN.1 ms50 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms60 = 12, /**< ASN.1 ms60 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms80 = 13, /**< ASN.1 ms80 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms100 = 14, /**< ASN.1 ms100 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms200 = 15, /**< ASN.1 ms200 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms300 = 16, /**< ASN.1 ms300 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms400 = 17, /**< ASN.1 ms400 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms500 = 18, /**< ASN.1 ms500 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms600 = 19, /**< ASN.1 ms600 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms800 = 20, /**< ASN.1 ms800 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms1000 = 21, /**< ASN.1 ms1000 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms1200 = 22, /**< ASN.1 ms1200 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_ms1600 = 23, /**< ASN.1 ms1600 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare8 = 24, /**< ASN.1 spare8 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare7 = 25, /**< ASN.1 spare7 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare6 = 26, /**< ASN.1 spare6 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare5 = 27, /**< ASN.1 spare5 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare4 = 28, /**< ASN.1 spare4 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare3 = 29, /**< ASN.1 spare3 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare2 = 30, /**< ASN.1 spare2 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds_spare1 = 31, /**< ASN.1 spare1 */
} SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds;


/**
 * @brief 枚举 SL_FreqConfig_r16_FrequencyShift7p5khzSL_r16（ASN.1 frequencyShift7p5khzSL-r16，源文件第 22369 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_FreqConfig_r16_FrequencyShift7p5khzSL_r16 {
    SL_FreqConfig_r16_FrequencyShift7p5khzSL_r16_trueVal = 0, /**< ASN.1 trueVal */
} SL_FreqConfig_r16_FrequencyShift7p5khzSL_r16;


/**
 * @brief 枚举 SL_FreqConfig_r16_Sl_SyncPriority_r16（ASN.1 sl-SyncPriority-r16，源文件第 22374 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_FreqConfig_r16_Sl_SyncPriority_r16 {
    SL_FreqConfig_r16_Sl_SyncPriority_r16_gnss = 0, /**< ASN.1 gnss */
    SL_FreqConfig_r16_Sl_SyncPriority_r16_gnbEnb = 1, /**< ASN.1 gnbEnb */
} SL_FreqConfig_r16_Sl_SyncPriority_r16;


/**
 * @brief 枚举 SL_FreqConfigExt_v1800_AbsenceOfAnyOtherTechnology_r18（ASN.1 absenceOfAnyOtherTechnology-r18，源文件第 22380 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_FreqConfigExt_v1800_AbsenceOfAnyOtherTechnology_r18 {
    SL_FreqConfigExt_v1800_AbsenceOfAnyOtherTechnology_r18_trueVal = 0, /**< ASN.1 trueVal */
} SL_FreqConfigExt_v1800_AbsenceOfAnyOtherTechnology_r18;


/**
 * @brief 枚举 SL_FreqConfigExt_v1800_Sl_SyncTxDisabled_r18（ASN.1 sl-SyncTxDisabled-r18，源文件第 22382 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_FreqConfigExt_v1800_Sl_SyncTxDisabled_r18 {
    SL_FreqConfigExt_v1800_Sl_SyncTxDisabled_r18_trueVal = 0, /**< ASN.1 trueVal */
} SL_FreqConfigExt_v1800_Sl_SyncTxDisabled_r18;


/**
 * @brief 枚举 SL_FreqConfigCommon_r16_FrequencyShift7p5khzSL_r16（ASN.1 frequencyShift7p5khzSL-r16，源文件第 22399 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_FreqConfigCommon_r16_FrequencyShift7p5khzSL_r16 {
    SL_FreqConfigCommon_r16_FrequencyShift7p5khzSL_r16_trueVal = 0, /**< ASN.1 trueVal */
} SL_FreqConfigCommon_r16_FrequencyShift7p5khzSL_r16;


/**
 * @brief 枚举 SL_FreqConfigCommon_r16_Sl_SyncPriority_r16（ASN.1 sl-SyncPriority-r16，源文件第 22402 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_FreqConfigCommon_r16_Sl_SyncPriority_r16 {
    SL_FreqConfigCommon_r16_Sl_SyncPriority_r16_gnss = 0, /**< ASN.1 gnss */
    SL_FreqConfigCommon_r16_Sl_SyncPriority_r16_gnbEnb = 1, /**< ASN.1 gnbEnb */
} SL_FreqConfigCommon_r16_Sl_SyncPriority_r16;


/**
 * @brief 枚举 SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_AbsenceOfAnyOtherTechnology_r18（ASN.1 sl-UnlicensedFreqConfigCommon-r18/absenceOfAnyOtherTechnology-r18，源文件第 22408 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_AbsenceOfAnyOtherTechnology_r18 {
    SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_AbsenceOfAnyOtherTechnology_r18_trueVal = 0, /**< ASN.1 trueVal */
} SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_AbsenceOfAnyOtherTechnology_r18;


/**
 * @brief 枚举 SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_SyncTxDisabled_r18（ASN.1 sl-UnlicensedFreqConfigCommon-r18/sl-SyncTxDisabled-r18，源文件第 22410 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_SyncTxDisabled_r18 {
    SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_SyncTxDisabled_r18_trueVal = 0, /**< ASN.1 trueVal */
} SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_SyncTxDisabled_r18;


/**
 * @brief 枚举 SL_IndirectPathAddChange_r18_T421_r18（ASN.1 t421-r18，源文件第 22436 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_IndirectPathAddChange_r18_T421_r18 {
    SL_IndirectPathAddChange_r18_T421_r18_ms50 = 0, /**< ASN.1 ms50 */
    SL_IndirectPathAddChange_r18_T421_r18_ms100 = 1, /**< ASN.1 ms100 */
    SL_IndirectPathAddChange_r18_T421_r18_ms150 = 2, /**< ASN.1 ms150 */
    SL_IndirectPathAddChange_r18_T421_r18_ms200 = 3, /**< ASN.1 ms200 */
    SL_IndirectPathAddChange_r18_T421_r18_ms500 = 4, /**< ASN.1 ms500 */
    SL_IndirectPathAddChange_r18_T421_r18_ms1000 = 5, /**< ASN.1 ms1000 */
    SL_IndirectPathAddChange_r18_T421_r18_ms2000 = 6, /**< ASN.1 ms2000 */
    SL_IndirectPathAddChange_r18_T421_r18_ms10000 = 7, /**< ASN.1 ms10000 */
} SL_IndirectPathAddChange_r18_T421_r18;


/**
 * @brief 枚举 SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Explicit_r17（ASN.1 sl-IUC-Explicit-r17，源文件第 22451 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Explicit_r17 {
    SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Explicit_r17_enabled = 0, /**< ASN.1 enabled */
    SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Explicit_r17_disabled = 1, /**< ASN.1 disabled */
} SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Explicit_r17;


/**
 * @brief 枚举 SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Condition_r17（ASN.1 sl-IUC-Condition-r17，源文件第 22452 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Condition_r17 {
    SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Condition_r17_enabled = 0, /**< ASN.1 enabled */
    SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Condition_r17_disabled = 1, /**< ASN.1 disabled */
} SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Condition_r17;


/**
 * @brief 枚举 SL_InterUE_CoordinationScheme1_r17_Sl_Condition1_A_2_r17（ASN.1 sl-Condition1-A-2-r17，源文件第 22453 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_InterUE_CoordinationScheme1_r17_Sl_Condition1_A_2_r17 {
    SL_InterUE_CoordinationScheme1_r17_Sl_Condition1_A_2_r17_disabled = 0, /**< ASN.1 disabled */
} SL_InterUE_CoordinationScheme1_r17_Sl_Condition1_A_2_r17;


/**
 * @brief 枚举 SL_InterUE_CoordinationScheme1_r17_Sl_ContainerCoordInfo_r17（ASN.1 sl-ContainerCoordInfo-r17，源文件第 22456 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_InterUE_CoordinationScheme1_r17_Sl_ContainerCoordInfo_r17 {
    SL_InterUE_CoordinationScheme1_r17_Sl_ContainerCoordInfo_r17_enabled = 0, /**< ASN.1 enabled */
    SL_InterUE_CoordinationScheme1_r17_Sl_ContainerCoordInfo_r17_disabled = 1, /**< ASN.1 disabled */
} SL_InterUE_CoordinationScheme1_r17_Sl_ContainerCoordInfo_r17;


/**
 * @brief 枚举 SL_InterUE_CoordinationScheme1_r17_Sl_ContainerRequest_r17（ASN.1 sl-ContainerRequest-r17，源文件第 22457 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_InterUE_CoordinationScheme1_r17_Sl_ContainerRequest_r17 {
    SL_InterUE_CoordinationScheme1_r17_Sl_ContainerRequest_r17_enabled = 0, /**< ASN.1 enabled */
    SL_InterUE_CoordinationScheme1_r17_Sl_ContainerRequest_r17_disabled = 1, /**< ASN.1 disabled */
} SL_InterUE_CoordinationScheme1_r17_Sl_ContainerRequest_r17;


/**
 * @brief 枚举 SL_InterUE_CoordinationScheme1_r17_Sl_DetermineResourceType_r17（ASN.1 sl-DetermineResourceType-r17，源文件第 22467 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_InterUE_CoordinationScheme1_r17_Sl_DetermineResourceType_r17 {
    SL_InterUE_CoordinationScheme1_r17_Sl_DetermineResourceType_r17_uea = 0, /**< ASN.1 uea */
    SL_InterUE_CoordinationScheme1_r17_Sl_DetermineResourceType_r17_ueb = 1, /**< ASN.1 ueb */
} SL_InterUE_CoordinationScheme1_r17_Sl_DetermineResourceType_r17;


/**
 * @brief 枚举 SL_InterUE_CoordinationScheme2_r17_Sl_IUC_Scheme2_r17（ASN.1 sl-IUC-Scheme2-r17，源文件第 22472 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_InterUE_CoordinationScheme2_r17_Sl_IUC_Scheme2_r17 {
    SL_InterUE_CoordinationScheme2_r17_Sl_IUC_Scheme2_r17_enabled = 0, /**< ASN.1 enabled */
} SL_InterUE_CoordinationScheme2_r17_Sl_IUC_Scheme2_r17;


/**
 * @brief 枚举 SL_InterUE_CoordinationScheme2_r17_Sl_TypeUE_A_r17（ASN.1 sl-TypeUE-A-r17，源文件第 22474 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_InterUE_CoordinationScheme2_r17_Sl_TypeUE_A_r17 {
    SL_InterUE_CoordinationScheme2_r17_Sl_TypeUE_A_r17_enabled = 0, /**< ASN.1 enabled */
} SL_InterUE_CoordinationScheme2_r17_Sl_TypeUE_A_r17;


/**
 * @brief 枚举 SL_InterUE_CoordinationScheme2_r17_Sl_SlotLevelResourceExclusion_r17（ASN.1 sl-SlotLevelResourceExclusion-r17，源文件第 22476 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_InterUE_CoordinationScheme2_r17_Sl_SlotLevelResourceExclusion_r17 {
    SL_InterUE_CoordinationScheme2_r17_Sl_SlotLevelResourceExclusion_r17_enabled = 0, /**< ASN.1 enabled */
} SL_InterUE_CoordinationScheme2_r17_Sl_SlotLevelResourceExclusion_r17;


/**
 * @brief 枚举 SL_InterUE_CoordinationScheme2_r17_Sl_IndicationUE_B_r17（ASN.1 sl-IndicationUE-B-r17，源文件第 22478 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_InterUE_CoordinationScheme2_r17_Sl_IndicationUE_B_r17 {
    SL_InterUE_CoordinationScheme2_r17_Sl_IndicationUE_B_r17_enabled = 0, /**< ASN.1 enabled */
    SL_InterUE_CoordinationScheme2_r17_Sl_IndicationUE_B_r17_disabled = 1, /**< ASN.1 disabled */
} SL_InterUE_CoordinationScheme2_r17_Sl_IndicationUE_B_r17;


/**
 * @brief 枚举 SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18（ASN.1 sl-lbt-FailureInstanceMaxCount-r18，源文件第 22495 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18 {
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18_n4 = 0, /**< ASN.1 n4 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18_n8 = 1, /**< ASN.1 n8 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18_n16 = 2, /**< ASN.1 n16 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18_n32 = 3, /**< ASN.1 n32 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18_n64 = 4, /**< ASN.1 n64 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18_n128 = 5, /**< ASN.1 n128 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18_spare2 = 6, /**< ASN.1 spare2 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18_spare1 = 7, /**< ASN.1 spare1 */
} SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18;


/**
 * @brief 枚举 SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18（ASN.1 sl-lbt-FailureDetectionTimer-r18，源文件第 22496 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18 {
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18_ms10 = 0, /**< ASN.1 ms10 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18_ms20 = 1, /**< ASN.1 ms20 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18_ms40 = 2, /**< ASN.1 ms40 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18_ms80 = 3, /**< ASN.1 ms80 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18_ms160 = 4, /**< ASN.1 ms160 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18_ms320 = 5, /**< ASN.1 ms320 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18_spare2 = 6, /**< ASN.1 spare2 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18_spare1 = 7, /**< ASN.1 spare1 */
} SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18;


/**
 * @brief 枚举 SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18（ASN.1 sl-lbt-RecoveryTimer-r18，源文件第 22497 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18 {
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18_ms10 = 0, /**< ASN.1 ms10 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18_ms20 = 1, /**< ASN.1 ms20 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18_ms40 = 2, /**< ASN.1 ms40 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18_ms80 = 3, /**< ASN.1 ms80 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18_ms160 = 4, /**< ASN.1 ms160 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18_ms320 = 5, /**< ASN.1 ms320 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18_spare2 = 6, /**< ASN.1 spare2 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18_spare1 = 7, /**< ASN.1 spare1 */
} SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18;


/**
 * @brief 枚举 SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16（ASN.1 sl-PrioritisedBitRate-r16，源文件第 22506 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16 {
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps0 = 0, /**< ASN.1 kBps0 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps8 = 1, /**< ASN.1 kBps8 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps16 = 2, /**< ASN.1 kBps16 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps32 = 3, /**< ASN.1 kBps32 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps64 = 4, /**< ASN.1 kBps64 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps128 = 5, /**< ASN.1 kBps128 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps256 = 6, /**< ASN.1 kBps256 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps512 = 7, /**< ASN.1 kBps512 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps1024 = 8, /**< ASN.1 kBps1024 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps2048 = 9, /**< ASN.1 kBps2048 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps4096 = 10, /**< ASN.1 kBps4096 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps8192 = 11, /**< ASN.1 kBps8192 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps16384 = 12, /**< ASN.1 kBps16384 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps32768 = 13, /**< ASN.1 kBps32768 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_kBps65536 = 14, /**< ASN.1 kBps65536 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16_infinity = 15, /**< ASN.1 infinity */
} SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16;


/**
 * @brief 枚举 SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16（ASN.1 sl-BucketSizeDuration-r16，源文件第 22508 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16 {
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_ms5 = 0, /**< ASN.1 ms5 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_ms10 = 1, /**< ASN.1 ms10 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_ms20 = 2, /**< ASN.1 ms20 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_ms50 = 3, /**< ASN.1 ms50 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_ms100 = 4, /**< ASN.1 ms100 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_ms150 = 5, /**< ASN.1 ms150 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_ms300 = 6, /**< ASN.1 ms300 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_ms500 = 7, /**< ASN.1 ms500 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_ms1000 = 8, /**< ASN.1 ms1000 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_spare7 = 9, /**< ASN.1 spare7 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_spare6 = 10, /**< ASN.1 spare6 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_spare5 = 11, /**< ASN.1 spare5 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_spare4 = 12, /**< ASN.1 spare4 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_spare3 = 13, /**< ASN.1 spare3 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_spare2 = 14, /**< ASN.1 spare2 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16_spare1 = 15, /**< ASN.1 spare1 */
} SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16;


/**
 * @brief 枚举 SL_LogicalChannelConfig_r16_Sl_ConfiguredGrantType1Allowed_r16（ASN.1 sl-ConfiguredGrantType1Allowed-r16，源文件第 22510 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_LogicalChannelConfig_r16_Sl_ConfiguredGrantType1Allowed_r16 {
    SL_LogicalChannelConfig_r16_Sl_ConfiguredGrantType1Allowed_r16_trueVal = 0, /**< ASN.1 trueVal */
} SL_LogicalChannelConfig_r16_Sl_ConfiguredGrantType1Allowed_r16;


/**
 * @brief 枚举 SL_LogicalChannelConfig_r16_Sl_HARQ_FeedbackEnabled_r16（ASN.1 sl-HARQ-FeedbackEnabled-r16，源文件第 22511 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_LogicalChannelConfig_r16_Sl_HARQ_FeedbackEnabled_r16 {
    SL_LogicalChannelConfig_r16_Sl_HARQ_FeedbackEnabled_r16_enabled = 0, /**< ASN.1 enabled */
    SL_LogicalChannelConfig_r16_Sl_HARQ_FeedbackEnabled_r16_disabled = 1, /**< ASN.1 disabled */
} SL_LogicalChannelConfig_r16_Sl_HARQ_FeedbackEnabled_r16;


/**
 * @brief 枚举 SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16（ASN.1 sl-MaxPUSCH-Duration-r16，源文件第 22515 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16 {
    SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16_ms0p02 = 0, /**< ASN.1 ms0p02 */
    SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16_ms0p04 = 1, /**< ASN.1 ms0p04 */
    SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16_ms0p0625 = 2, /**< ASN.1 ms0p0625 */
    SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16_ms0p125 = 3, /**< ASN.1 ms0p125 */
    SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16_ms0p25 = 4, /**< ASN.1 ms0p25 */
    SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16_ms0p5 = 5, /**< ASN.1 ms0p5 */
    SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16_spare2 = 6, /**< ASN.1 spare2 */
    SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16_spare1 = 7, /**< ASN.1 spare1 */
} SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16;


/**
 * @brief 枚举 SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17（ASN.1 sl-AllowedResourceSelectionConfig-r17，源文件第 22665 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17 {
    SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17_c1 = 0, /**< ASN.1 c1 */
    SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17_c2 = 1, /**< ASN.1 c2 */
    SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17_c3 = 2, /**< ASN.1 c3 */
    SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17_c4 = 3, /**< ASN.1 c4 */
    SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17_c5 = 4, /**< ASN.1 c5 */
    SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17_c6 = 5, /**< ASN.1 c6 */
    SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17_c7 = 6, /**< ASN.1 c7 */
} SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17;


/**
 * @brief 枚举 SL_PBPS_CPS_Config_r17_Sl_Additional_PBPS_Occasion_r17（ASN.1 sl-Additional-PBPS-Occasion-r17，源文件第 22668 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PBPS_CPS_Config_r17_Sl_Additional_PBPS_Occasion_r17 {
    SL_PBPS_CPS_Config_r17_Sl_Additional_PBPS_Occasion_r17_monitored = 0, /**< ASN.1 monitored */
} SL_PBPS_CPS_Config_r17_Sl_Additional_PBPS_Occasion_r17;


/**
 * @brief 枚举 SL_PBPS_CPS_Config_r17_Sl_PartialSensingInactiveTime_r17（ASN.1 sl-PartialSensingInactiveTime-r17，源文件第 22675 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PBPS_CPS_Config_r17_Sl_PartialSensingInactiveTime_r17 {
    SL_PBPS_CPS_Config_r17_Sl_PartialSensingInactiveTime_r17_enabled = 0, /**< ASN.1 enabled */
    SL_PBPS_CPS_Config_r17_Sl_PartialSensingInactiveTime_r17_disabled = 1, /**< ASN.1 disabled */
} SL_PBPS_CPS_Config_r17_Sl_PartialSensingInactiveTime_r17;


/**
 * @brief 枚举 SL_PDCP_Config_r16_Sl_DiscardTimer_r16（ASN.1 sl-DiscardTimer-r16，源文件第 22683 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PDCP_Config_r16_Sl_DiscardTimer_r16 {
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms3 = 0, /**< ASN.1 ms3 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms10 = 1, /**< ASN.1 ms10 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms20 = 2, /**< ASN.1 ms20 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms25 = 3, /**< ASN.1 ms25 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms30 = 4, /**< ASN.1 ms30 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms40 = 5, /**< ASN.1 ms40 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms50 = 6, /**< ASN.1 ms50 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms60 = 7, /**< ASN.1 ms60 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms75 = 8, /**< ASN.1 ms75 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms100 = 9, /**< ASN.1 ms100 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms150 = 10, /**< ASN.1 ms150 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms200 = 11, /**< ASN.1 ms200 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms250 = 12, /**< ASN.1 ms250 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms300 = 13, /**< ASN.1 ms300 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms500 = 14, /**< ASN.1 ms500 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms750 = 15, /**< ASN.1 ms750 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_ms1500 = 16, /**< ASN.1 ms1500 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16_infinity = 17, /**< ASN.1 infinity */
} SL_PDCP_Config_r16_Sl_DiscardTimer_r16;


/**
 * @brief 枚举 SL_PDCP_Config_r16_Sl_PDCP_SN_Size_r16（ASN.1 sl-PDCP-SN-Size-r16，源文件第 22685 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PDCP_Config_r16_Sl_PDCP_SN_Size_r16 {
    SL_PDCP_Config_r16_Sl_PDCP_SN_Size_r16_len12bits = 0, /**< ASN.1 len12bits */
    SL_PDCP_Config_r16_Sl_PDCP_SN_Size_r16_len18bits = 1, /**< ASN.1 len18bits */
} SL_PDCP_Config_r16_Sl_PDCP_SN_Size_r16;


/**
 * @brief 枚举 SL_PDCP_Config_r16_Sl_OutOfOrderDelivery（ASN.1 sl-OutOfOrderDelivery，源文件第 22686 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PDCP_Config_r16_Sl_OutOfOrderDelivery {
    SL_PDCP_Config_r16_Sl_OutOfOrderDelivery_trueVal = 0, /**< ASN.1 trueVal */
} SL_PDCP_Config_r16_Sl_OutOfOrderDelivery;


/**
 * @brief 枚举 SL_PRS_ResourcePool_r18_Sl_PosAllowedResourceSelectionConfig_r18（ASN.1 sl-PosAllowedResourceSelectionConfig-r18，源文件第 22709 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_ResourcePool_r18_Sl_PosAllowedResourceSelectionConfig_r18 {
    SL_PRS_ResourcePool_r18_Sl_PosAllowedResourceSelectionConfig_r18_c1 = 0, /**< ASN.1 c1 */
    SL_PRS_ResourcePool_r18_Sl_PosAllowedResourceSelectionConfig_r18_c2 = 1, /**< ASN.1 c2 */
    SL_PRS_ResourcePool_r18_Sl_PosAllowedResourceSelectionConfig_r18_c3 = 2, /**< ASN.1 c3 */
} SL_PRS_ResourcePool_r18_Sl_PosAllowedResourceSelectionConfig_r18;


/**
 * @brief 枚举 SL_PRS_ResourcePool_r18_Sl_SensingWindowDedicatedSL_PRS_RP_r18（ASN.1 sl-SensingWindowDedicatedSL-PRS-RP-r18，源文件第 22714 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_ResourcePool_r18_Sl_SensingWindowDedicatedSL_PRS_RP_r18 {
    SL_PRS_ResourcePool_r18_Sl_SensingWindowDedicatedSL_PRS_RP_r18_ms100 = 0, /**< ASN.1 ms100 */
    SL_PRS_ResourcePool_r18_Sl_SensingWindowDedicatedSL_PRS_RP_r18_ms1100 = 1, /**< ASN.1 ms1100 */
} SL_PRS_ResourcePool_r18_Sl_SensingWindowDedicatedSL_PRS_RP_r18;


/**
 * @brief 枚举 SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18（ASN.1 sl-SubchannelSizeDedicatedSL-PRS-RP-r18，源文件第 22718 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18 {
    SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18_n10 = 0, /**< ASN.1 n10 */
    SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18_n12 = 1, /**< ASN.1 n12 */
    SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18_n15 = 2, /**< ASN.1 n15 */
    SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18_n20 = 3, /**< ASN.1 n20 */
    SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18_n25 = 4, /**< ASN.1 n25 */
    SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18_n50 = 5, /**< ASN.1 n50 */
    SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18_n75 = 6, /**< ASN.1 n75 */
    SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18_n100 = 7, /**< ASN.1 n100 */
} SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18;


/**
 * @brief 枚举 SL_PRS_ResourcePool_r18_Sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18（ASN.1 sl-MaxNumPerReserveDedicatedSL-PRS-RP-r18，源文件第 22719 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_ResourcePool_r18_Sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18 {
    SL_PRS_ResourcePool_r18_Sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18_n2 = 0, /**< ASN.1 n2 */
    SL_PRS_ResourcePool_r18_Sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18_n3 = 1, /**< ASN.1 n3 */
} SL_PRS_ResourcePool_r18_Sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18;


/**
 * @brief 枚举 SL_PRS_ResourcePool_r18_Sl_SRC_ID_LenDedicatedSL_PRS_RP_r18（ASN.1 sl-SRC-ID-LenDedicatedSL-PRS-RP-r18，源文件第 22721 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_ResourcePool_r18_Sl_SRC_ID_LenDedicatedSL_PRS_RP_r18 {
    SL_PRS_ResourcePool_r18_Sl_SRC_ID_LenDedicatedSL_PRS_RP_r18_n12 = 0, /**< ASN.1 n12 */
    SL_PRS_ResourcePool_r18_Sl_SRC_ID_LenDedicatedSL_PRS_RP_r18_n24 = 1, /**< ASN.1 n24 */
} SL_PRS_ResourcePool_r18_Sl_SRC_ID_LenDedicatedSL_PRS_RP_r18;


/**
 * @brief 枚举 SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18（ASN.1 sl-TimeWindowSizeCBR-DedicatedSL-PRS-RP-r18，源文件第 22724 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18 {
    SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18_ms100 = 0, /**< ASN.1 ms100 */
    SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18_slot100 = 1, /**< ASN.1 slot100 */
} SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18;


/**
 * @brief 枚举 SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18（ASN.1 sl-TimeWindowSizeCR-DedicatedSL-PRS-RP-r18，源文件第 22725 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18 {
    SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18_ms1000 = 0, /**< ASN.1 ms1000 */
    SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18_slot1000 = 1, /**< ASN.1 slot1000 */
} SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18;


/**
 * @brief 枚举 SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_TimeResourcePSCCH_DedicatedSL_PRS_RP_r18（ASN.1 timeResourcePSCCH-DedicatedSL-PRS-RP-r18，源文件第 22732 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_TimeResourcePSCCH_DedicatedSL_PRS_RP_r18 {
    SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_TimeResourcePSCCH_DedicatedSL_PRS_RP_r18_n2 = 0, /**< ASN.1 n2 */
    SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_TimeResourcePSCCH_DedicatedSL_PRS_RP_r18_n3 = 1, /**< ASN.1 n3 */
} SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_TimeResourcePSCCH_DedicatedSL_PRS_RP_r18;


/**
 * @brief 枚举 SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_FreqResourcePSCCH_DedicatedSL_PRS_RP_r18（ASN.1 freqResourcePSCCH-DedicatedSL-PRS-RP-r18，源文件第 22733 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_FreqResourcePSCCH_DedicatedSL_PRS_RP_r18 {
    SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_FreqResourcePSCCH_DedicatedSL_PRS_RP_r18_n10 = 0, /**< ASN.1 n10 */
    SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_FreqResourcePSCCH_DedicatedSL_PRS_RP_r18_n12 = 1, /**< ASN.1 n12 */
    SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_FreqResourcePSCCH_DedicatedSL_PRS_RP_r18_n15 = 2, /**< ASN.1 n15 */
    SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_FreqResourcePSCCH_DedicatedSL_PRS_RP_r18_n20 = 3, /**< ASN.1 n20 */
    SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_FreqResourcePSCCH_DedicatedSL_PRS_RP_r18_n25 = 4, /**< ASN.1 n25 */
} SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_FreqResourcePSCCH_DedicatedSL_PRS_RP_r18;


/**
 * @brief 枚举 SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18（ASN.1 sl-ResourceReservePeriod1-r18，源文件第 22738 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18 {
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms0 = 0, /**< ASN.1 ms0 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms100 = 1, /**< ASN.1 ms100 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms200 = 2, /**< ASN.1 ms200 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms300 = 3, /**< ASN.1 ms300 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms400 = 4, /**< ASN.1 ms400 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms500 = 5, /**< ASN.1 ms500 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms600 = 6, /**< ASN.1 ms600 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms700 = 7, /**< ASN.1 ms700 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms800 = 8, /**< ASN.1 ms800 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms900 = 9, /**< ASN.1 ms900 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18_ms1000 = 10, /**< ASN.1 ms1000 */
} SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18;


/**
 * @brief 枚举 SL_PRS_ResourceDedicatedSL_PRS_RP_r18_Sl_CombSize_r18（ASN.1 sl-CombSize-r18，源文件第 22745 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_ResourceDedicatedSL_PRS_RP_r18_Sl_CombSize_r18 {
    SL_PRS_ResourceDedicatedSL_PRS_RP_r18_Sl_CombSize_r18_n2 = 0, /**< ASN.1 n2 */
    SL_PRS_ResourceDedicatedSL_PRS_RP_r18_Sl_CombSize_r18_n4 = 1, /**< ASN.1 n4 */
    SL_PRS_ResourceDedicatedSL_PRS_RP_r18_Sl_CombSize_r18_n6 = 2, /**< ASN.1 n6 */
} SL_PRS_ResourceDedicatedSL_PRS_RP_r18_Sl_CombSize_r18;


/**
 * @brief 枚举 SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18（ASN.1 dl-Alpha-SL-PRS-r18，源文件第 22752 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18 {
    SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18_alpha0 = 0, /**< ASN.1 alpha0 */
    SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18_alpha04 = 1, /**< ASN.1 alpha04 */
    SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18_alpha05 = 2, /**< ASN.1 alpha05 */
    SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18_alpha06 = 3, /**< ASN.1 alpha06 */
    SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18_alpha07 = 4, /**< ASN.1 alpha07 */
    SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18_alpha08 = 5, /**< ASN.1 alpha08 */
    SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18_alpha09 = 6, /**< ASN.1 alpha09 */
    SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18_alpha1 = 7, /**< ASN.1 alpha1 */
} SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18;


/**
 * @brief 枚举 SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18（ASN.1 sl-Alpha-SL-PRS-r18，源文件第 22754 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18 {
    SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18_alpha0 = 0, /**< ASN.1 alpha0 */
    SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18_alpha04 = 1, /**< ASN.1 alpha04 */
    SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18_alpha05 = 2, /**< ASN.1 alpha05 */
    SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18_alpha06 = 3, /**< ASN.1 alpha06 */
    SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18_alpha07 = 4, /**< ASN.1 alpha07 */
    SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18_alpha08 = 5, /**< ASN.1 alpha08 */
    SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18_alpha09 = 6, /**< ASN.1 alpha09 */
    SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18_alpha1 = 7, /**< ASN.1 alpha1 */
} SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18;


/**
 * @brief 枚举 SL_TxPercentageDedicatedSL_PRS_RP_Config_r18_Sl_Priority_DedicatedSL_PRS_RP（ASN.1 sl-Priority-DedicatedSL-PRS-RP，源文件第 22759 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TxPercentageDedicatedSL_PRS_RP_Config_r18_Sl_Priority_DedicatedSL_PRS_RP {
    SL_TxPercentageDedicatedSL_PRS_RP_Config_r18_Sl_Priority_DedicatedSL_PRS_RP_p20 = 0, /**< ASN.1 p20 */
    SL_TxPercentageDedicatedSL_PRS_RP_Config_r18_Sl_Priority_DedicatedSL_PRS_RP_p35 = 1, /**< ASN.1 p35 */
    SL_TxPercentageDedicatedSL_PRS_RP_Config_r18_Sl_Priority_DedicatedSL_PRS_RP_p50 = 2, /**< ASN.1 p50 */
} SL_TxPercentageDedicatedSL_PRS_RP_Config_r18_Sl_Priority_DedicatedSL_PRS_RP;


/**
 * @brief 枚举 SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16（ASN.1 dl-Alpha-PSBCH-r16，源文件第 22777 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16 {
    SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16_alpha0 = 0, /**< ASN.1 alpha0 */
    SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16_alpha04 = 1, /**< ASN.1 alpha04 */
    SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16_alpha05 = 2, /**< ASN.1 alpha05 */
    SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16_alpha06 = 3, /**< ASN.1 alpha06 */
    SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16_alpha07 = 4, /**< ASN.1 alpha07 */
    SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16_alpha08 = 5, /**< ASN.1 alpha08 */
    SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16_alpha09 = 6, /**< ASN.1 alpha09 */
    SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16_alpha1 = 7, /**< ASN.1 alpha1 */
} SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16;


/**
 * @brief 枚举 SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16（ASN.1 sl-ThresUE-Speed-r16，源文件第 22791 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16 {
    SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16_kmph60 = 0, /**< ASN.1 kmph60 */
    SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16_kmph80 = 1, /**< ASN.1 kmph80 */
    SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16_kmph100 = 2, /**< ASN.1 kmph100 */
    SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16_kmph120 = 3, /**< ASN.1 kmph120 */
    SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16_kmph140 = 4, /**< ASN.1 kmph140 */
    SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16_kmph160 = 5, /**< ASN.1 kmph160 */
    SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16_kmph180 = 6, /**< ASN.1 kmph180 */
    SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16_kmph200 = 7, /**< ASN.1 kmph200 */
} SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16;


/**
 * @brief 枚举 SL_PQI_r16_Sl_Non_StandardizedPQI_r16_Sl_ResourceType_r16（ASN.1 sl-Non-StandardizedPQI-r16/sl-ResourceType-r16，源文件第 22831 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PQI_r16_Sl_Non_StandardizedPQI_r16_Sl_ResourceType_r16 {
    SL_PQI_r16_Sl_Non_StandardizedPQI_r16_Sl_ResourceType_r16_gbr = 0, /**< ASN.1 gbr */
    SL_PQI_r16_Sl_Non_StandardizedPQI_r16_Sl_ResourceType_r16_non_GBR = 1, /**< ASN.1 non-GBR */
    SL_PQI_r16_Sl_Non_StandardizedPQI_r16_Sl_ResourceType_r16_delayCriticalGBR = 2, /**< ASN.1 delayCriticalGBR */
    SL_PQI_r16_Sl_Non_StandardizedPQI_r16_Sl_ResourceType_r16_spare1 = 3, /**< ASN.1 spare1 */
} SL_PQI_r16_Sl_Non_StandardizedPQI_r16_Sl_ResourceType_r16;


/**
 * @brief 枚举 SL_RadioBearerConfig_r16_Sl_TransRange_r16（ASN.1 sl-TransRange-r16，源文件第 22856 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_RadioBearerConfig_r16_Sl_TransRange_r16 {
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m20 = 0, /**< ASN.1 m20 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m50 = 1, /**< ASN.1 m50 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m80 = 2, /**< ASN.1 m80 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m100 = 3, /**< ASN.1 m100 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m120 = 4, /**< ASN.1 m120 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m150 = 5, /**< ASN.1 m150 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m180 = 6, /**< ASN.1 m180 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m200 = 7, /**< ASN.1 m200 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m220 = 8, /**< ASN.1 m220 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m250 = 9, /**< ASN.1 m250 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m270 = 10, /**< ASN.1 m270 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m300 = 11, /**< ASN.1 m300 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m350 = 12, /**< ASN.1 m350 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m370 = 13, /**< ASN.1 m370 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m400 = 14, /**< ASN.1 m400 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m420 = 15, /**< ASN.1 m420 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m450 = 16, /**< ASN.1 m450 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m480 = 17, /**< ASN.1 m480 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m500 = 18, /**< ASN.1 m500 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m550 = 19, /**< ASN.1 m550 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m600 = 20, /**< ASN.1 m600 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m700 = 21, /**< ASN.1 m700 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_m1000 = 22, /**< ASN.1 m1000 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_spare9 = 23, /**< ASN.1 spare9 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_spare8 = 24, /**< ASN.1 spare8 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_spare7 = 25, /**< ASN.1 spare7 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_spare6 = 26, /**< ASN.1 spare6 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_spare5 = 27, /**< ASN.1 spare5 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_spare4 = 28, /**< ASN.1 spare4 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_spare3 = 29, /**< ASN.1 spare3 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_spare2 = 30, /**< ASN.1 spare2 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16_spare1 = 31, /**< ASN.1 spare1 */
} SL_RadioBearerConfig_r16_Sl_TransRange_r16;


/**
 * @brief 枚举 SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16（ASN.1 sl-ReportAmount-r16，源文件第 22946 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16 {
    SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16_r1 = 0, /**< ASN.1 r1 */
    SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16_r2 = 1, /**< ASN.1 r2 */
    SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16_r4 = 2, /**< ASN.1 r4 */
    SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16_r8 = 3, /**< ASN.1 r8 */
    SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16_r16 = 4, /**< ASN.1 r16 */
    SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16_r32 = 5, /**< ASN.1 r32 */
    SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16_r64 = 6, /**< ASN.1 r64 */
    SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16_infinity = 7, /**< ASN.1 infinity */
} SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16;


/**
 * @brief 枚举 SL_EventTriggerConfig_r16_Sl_ReportAmount_r16（ASN.1 sl-ReportAmount-r16，源文件第 22971 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_EventTriggerConfig_r16_Sl_ReportAmount_r16 {
    SL_EventTriggerConfig_r16_Sl_ReportAmount_r16_r1 = 0, /**< ASN.1 r1 */
    SL_EventTriggerConfig_r16_Sl_ReportAmount_r16_r2 = 1, /**< ASN.1 r2 */
    SL_EventTriggerConfig_r16_Sl_ReportAmount_r16_r4 = 2, /**< ASN.1 r4 */
    SL_EventTriggerConfig_r16_Sl_ReportAmount_r16_r8 = 3, /**< ASN.1 r8 */
    SL_EventTriggerConfig_r16_Sl_ReportAmount_r16_r16 = 4, /**< ASN.1 r16 */
    SL_EventTriggerConfig_r16_Sl_ReportAmount_r16_r32 = 5, /**< ASN.1 r32 */
    SL_EventTriggerConfig_r16_Sl_ReportAmount_r16_r64 = 6, /**< ASN.1 r64 */
    SL_EventTriggerConfig_r16_Sl_ReportAmount_r16_infinity = 7, /**< ASN.1 infinity */
} SL_EventTriggerConfig_r16_Sl_ReportAmount_r16;


/**
 * @brief 枚举 SL_ResourcePool_r16_Sl_SubchannelSize_r16（ASN.1 sl-SubchannelSize-r16，源文件第 22997 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_Sl_SubchannelSize_r16 {
    SL_ResourcePool_r16_Sl_SubchannelSize_r16_n10 = 0, /**< ASN.1 n10 */
    SL_ResourcePool_r16_Sl_SubchannelSize_r16_n12 = 1, /**< ASN.1 n12 */
    SL_ResourcePool_r16_Sl_SubchannelSize_r16_n15 = 2, /**< ASN.1 n15 */
    SL_ResourcePool_r16_Sl_SubchannelSize_r16_n20 = 3, /**< ASN.1 n20 */
    SL_ResourcePool_r16_Sl_SubchannelSize_r16_n25 = 4, /**< ASN.1 n25 */
    SL_ResourcePool_r16_Sl_SubchannelSize_r16_n50 = 5, /**< ASN.1 n50 */
    SL_ResourcePool_r16_Sl_SubchannelSize_r16_n75 = 6, /**< ASN.1 n75 */
    SL_ResourcePool_r16_Sl_SubchannelSize_r16_n100 = 7, /**< ASN.1 n100 */
} SL_ResourcePool_r16_Sl_SubchannelSize_r16;


/**
 * @brief 枚举 SL_ResourcePool_r16_Sl_Additional_MCS_Table_r16（ASN.1 sl-Additional-MCS-Table-r16，源文件第 23001 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_Sl_Additional_MCS_Table_r16 {
    SL_ResourcePool_r16_Sl_Additional_MCS_Table_r16_qam256 = 0, /**< ASN.1 qam256 */
    SL_ResourcePool_r16_Sl_Additional_MCS_Table_r16_qam64LowSE = 1, /**< ASN.1 qam64LowSE */
    SL_ResourcePool_r16_Sl_Additional_MCS_Table_r16_qam256_qam64LowSE = 2, /**< ASN.1 qam256-qam64LowSE */
} SL_ResourcePool_r16_Sl_Additional_MCS_Table_r16;


/**
 * @brief 枚举 SL_ResourcePool_r16_Sl_TimeWindowSizeCBR_r16（ASN.1 sl-TimeWindowSizeCBR-r16，源文件第 23003 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_Sl_TimeWindowSizeCBR_r16 {
    SL_ResourcePool_r16_Sl_TimeWindowSizeCBR_r16_ms100 = 0, /**< ASN.1 ms100 */
    SL_ResourcePool_r16_Sl_TimeWindowSizeCBR_r16_slot100 = 1, /**< ASN.1 slot100 */
} SL_ResourcePool_r16_Sl_TimeWindowSizeCBR_r16;


/**
 * @brief 枚举 SL_ResourcePool_r16_Sl_TimeWindowSizeCR_r16（ASN.1 sl-TimeWindowSizeCR-r16，源文件第 23004 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_Sl_TimeWindowSizeCR_r16 {
    SL_ResourcePool_r16_Sl_TimeWindowSizeCR_r16_ms1000 = 0, /**< ASN.1 ms1000 */
    SL_ResourcePool_r16_Sl_TimeWindowSizeCR_r16_slot1000 = 1, /**< ASN.1 slot1000 */
} SL_ResourcePool_r16_Sl_TimeWindowSizeCR_r16;


/**
 * @brief 枚举 SL_ResourcePool_r16_Sl_PreemptionEnable_r16（ASN.1 sl-PreemptionEnable-r16，源文件第 23014 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_Sl_PreemptionEnable_r16 {
    SL_ResourcePool_r16_Sl_PreemptionEnable_r16_enabled = 0, /**< ASN.1 enabled */
    SL_ResourcePool_r16_Sl_PreemptionEnable_r16_pl1 = 1, /**< ASN.1 pl1 */
    SL_ResourcePool_r16_Sl_PreemptionEnable_r16_pl2 = 2, /**< ASN.1 pl2 */
    SL_ResourcePool_r16_Sl_PreemptionEnable_r16_pl3 = 3, /**< ASN.1 pl3 */
    SL_ResourcePool_r16_Sl_PreemptionEnable_r16_pl4 = 4, /**< ASN.1 pl4 */
    SL_ResourcePool_r16_Sl_PreemptionEnable_r16_pl5 = 5, /**< ASN.1 pl5 */
    SL_ResourcePool_r16_Sl_PreemptionEnable_r16_pl6 = 6, /**< ASN.1 pl6 */
    SL_ResourcePool_r16_Sl_PreemptionEnable_r16_pl7 = 7, /**< ASN.1 pl7 */
    SL_ResourcePool_r16_Sl_PreemptionEnable_r16_pl8 = 8, /**< ASN.1 pl8 */
} SL_ResourcePool_r16_Sl_PreemptionEnable_r16;


/**
 * @brief 枚举 SL_ResourcePool_r16_Sl_X_Overhead_r16（ASN.1 sl-X-Overhead-r16，源文件第 23017 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_Sl_X_Overhead_r16 {
    SL_ResourcePool_r16_Sl_X_Overhead_r16_n0 = 0, /**< ASN.1 n0 */
    SL_ResourcePool_r16_Sl_X_Overhead_r16_n3 = 1, /**< ASN.1 n3 */
    SL_ResourcePool_r16_Sl_X_Overhead_r16_n6 = 2, /**< ASN.1 n6 */
    SL_ResourcePool_r16_Sl_X_Overhead_r16_n9 = 3, /**< ASN.1 n9 */
} SL_ResourcePool_r16_Sl_X_Overhead_r16;


/**
 * @brief 枚举 SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption1_r18（ASN.1 sl-Type1-LBT-BlockingOption1-r18，源文件第 23036 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption1_r18 {
    SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption1_r18_enabled = 0, /**< ASN.1 enabled */
} SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption1_r18;


/**
 * @brief 枚举 SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption2_r18（ASN.1 sl-Type1-LBT-BlockingOption2-r18，源文件第 23037 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption2_r18 {
    SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption2_r18_enabled = 0, /**< ASN.1 enabled */
} SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption2_r18;


/**
 * @brief 枚举 SL_ResourcePool_r16_ExtGroup3_Sl_NumInterlacePerSubchannel_r18（ASN.1 sl-NumInterlacePerSubchannel-r18，源文件第 23038 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_ExtGroup3_Sl_NumInterlacePerSubchannel_r18 {
    SL_ResourcePool_r16_ExtGroup3_Sl_NumInterlacePerSubchannel_r18_sc1 = 0, /**< ASN.1 sc1 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumInterlacePerSubchannel_r18_sc2 = 1, /**< ASN.1 sc2 */
} SL_ResourcePool_r16_ExtGroup3_Sl_NumInterlacePerSubchannel_r18;


/**
 * @brief 枚举 SL_ResourcePool_r16_ExtGroup3_Sl_NumReferencePRBs_OfInterlace_r18（ASN.1 sl-NumReferencePRBs-OfInterlace-r18，源文件第 23039 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_ExtGroup3_Sl_NumReferencePRBs_OfInterlace_r18 {
    SL_ResourcePool_r16_ExtGroup3_Sl_NumReferencePRBs_OfInterlace_r18_prb10 = 0, /**< ASN.1 prb10 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumReferencePRBs_OfInterlace_r18_prb11 = 1, /**< ASN.1 prb11 */
} SL_ResourcePool_r16_ExtGroup3_Sl_NumReferencePRBs_OfInterlace_r18;


/**
 * @brief 枚举 SL_ResourcePool_r16_ExtGroup3_Sl_TransmissionStructureForPSFCH_r18（ASN.1 sl-TransmissionStructureForPSFCH-r18，源文件第 23040 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_ExtGroup3_Sl_TransmissionStructureForPSFCH_r18 {
    SL_ResourcePool_r16_ExtGroup3_Sl_TransmissionStructureForPSFCH_r18_commonInterlace = 0, /**< ASN.1 commonInterlace */
    SL_ResourcePool_r16_ExtGroup3_Sl_TransmissionStructureForPSFCH_r18_dedicatedInterlace = 1, /**< ASN.1 dedicatedInterlace */
} SL_ResourcePool_r16_ExtGroup3_Sl_TransmissionStructureForPSFCH_r18;


/**
 * @brief 枚举 SL_ResourcePool_r16_ExtGroup3_Sl_NumDedicatedPRBs_ForPSFCH_r18（ASN.1 sl-NumDedicatedPRBs-ForPSFCH-r18，源文件第 23041 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_ExtGroup3_Sl_NumDedicatedPRBs_ForPSFCH_r18 {
    SL_ResourcePool_r16_ExtGroup3_Sl_NumDedicatedPRBs_ForPSFCH_r18_prb1 = 0, /**< ASN.1 prb1 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumDedicatedPRBs_ForPSFCH_r18_prb2 = 1, /**< ASN.1 prb2 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumDedicatedPRBs_ForPSFCH_r18_prb5 = 2, /**< ASN.1 prb5 */
} SL_ResourcePool_r16_ExtGroup3_Sl_NumDedicatedPRBs_ForPSFCH_r18;


/**
 * @brief 枚举 SL_ResourcePool_r16_ExtGroup3_Sl_NumPSFCH_Occasions_r18（ASN.1 sl-NumPSFCH-Occasions-r18，源文件第 23042 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_ExtGroup3_Sl_NumPSFCH_Occasions_r18 {
    SL_ResourcePool_r16_ExtGroup3_Sl_NumPSFCH_Occasions_r18_o1 = 0, /**< ASN.1 o1 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumPSFCH_Occasions_r18_o2 = 1, /**< ASN.1 o2 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumPSFCH_Occasions_r18_o3 = 2, /**< ASN.1 o3 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumPSFCH_Occasions_r18_o4 = 3, /**< ASN.1 o4 */
} SL_ResourcePool_r16_ExtGroup3_Sl_NumPSFCH_Occasions_r18;


/**
 * @brief 枚举 SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18（ASN.1 sl-NumRefSymbolLength-r18，源文件第 23045 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18 {
    SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18_sym7 = 0, /**< ASN.1 sym7 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18_sym8 = 1, /**< ASN.1 sym8 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18_sym9 = 2, /**< ASN.1 sym9 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18_sym10 = 3, /**< ASN.1 sym10 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18_sym11 = 4, /**< ASN.1 sym11 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18_sym12 = 5, /**< ASN.1 sym12 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18_sym13 = 6, /**< ASN.1 sym13 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18_sym14 = 7, /**< ASN.1 sym14 */
} SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18;


/**
 * @brief 枚举 SL_ResourcePool_r16_ExtGroup3_Sl_A2X_Service_r18（ASN.1 sl-A2X-Service-r18，源文件第 23050 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourcePool_r16_ExtGroup3_Sl_A2X_Service_r18 {
    SL_ResourcePool_r16_ExtGroup3_Sl_A2X_Service_r18_brid = 0, /**< ASN.1 brid */
    SL_ResourcePool_r16_ExtGroup3_Sl_A2X_Service_r18_daa = 1, /**< ASN.1 daa */
    SL_ResourcePool_r16_ExtGroup3_Sl_A2X_Service_r18_bridAndDAA = 2, /**< ASN.1 bridAndDAA */
    SL_ResourcePool_r16_ExtGroup3_Sl_A2X_Service_r18_spare1 = 3, /**< ASN.1 spare1 */
} SL_ResourcePool_r16_ExtGroup3_Sl_A2X_Service_r18;


/**
 * @brief 枚举 SL_ZoneConfigMCR_r16_Sl_TransRange_r16（ASN.1 sl-TransRange-r16，源文件第 23067 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ZoneConfigMCR_r16_Sl_TransRange_r16 {
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m20 = 0, /**< ASN.1 m20 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m50 = 1, /**< ASN.1 m50 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m80 = 2, /**< ASN.1 m80 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m100 = 3, /**< ASN.1 m100 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m120 = 4, /**< ASN.1 m120 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m150 = 5, /**< ASN.1 m150 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m180 = 6, /**< ASN.1 m180 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m200 = 7, /**< ASN.1 m200 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m220 = 8, /**< ASN.1 m220 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m250 = 9, /**< ASN.1 m250 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m270 = 10, /**< ASN.1 m270 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m300 = 11, /**< ASN.1 m300 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m350 = 12, /**< ASN.1 m350 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m370 = 13, /**< ASN.1 m370 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m400 = 14, /**< ASN.1 m400 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m420 = 15, /**< ASN.1 m420 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m450 = 16, /**< ASN.1 m450 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m480 = 17, /**< ASN.1 m480 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m500 = 18, /**< ASN.1 m500 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m550 = 19, /**< ASN.1 m550 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m600 = 20, /**< ASN.1 m600 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m700 = 21, /**< ASN.1 m700 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_m1000 = 22, /**< ASN.1 m1000 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_spare9 = 23, /**< ASN.1 spare9 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_spare8 = 24, /**< ASN.1 spare8 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_spare7 = 25, /**< ASN.1 spare7 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_spare6 = 26, /**< ASN.1 spare6 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_spare5 = 27, /**< ASN.1 spare5 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_spare4 = 28, /**< ASN.1 spare4 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_spare3 = 29, /**< ASN.1 spare3 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_spare2 = 30, /**< ASN.1 spare2 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16_spare1 = 31, /**< ASN.1 spare1 */
} SL_ZoneConfigMCR_r16_Sl_TransRange_r16;


/**
 * @brief 枚举 SL_SyncAllowed_r16_Gnss_Sync_r16（ASN.1 gnss-Sync-r16，源文件第 23076 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_SyncAllowed_r16_Gnss_Sync_r16 {
    SL_SyncAllowed_r16_Gnss_Sync_r16_trueVal = 0, /**< ASN.1 trueVal */
} SL_SyncAllowed_r16_Gnss_Sync_r16;


/**
 * @brief 枚举 SL_SyncAllowed_r16_GnbEnb_Sync_r16（ASN.1 gnbEnb-Sync-r16，源文件第 23077 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_SyncAllowed_r16_GnbEnb_Sync_r16 {
    SL_SyncAllowed_r16_GnbEnb_Sync_r16_trueVal = 0, /**< ASN.1 trueVal */
} SL_SyncAllowed_r16_GnbEnb_Sync_r16;


/**
 * @brief 枚举 SL_SyncAllowed_r16_Ue_Sync_r16（ASN.1 ue-Sync-r16，源文件第 23078 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_SyncAllowed_r16_Ue_Sync_r16 {
    SL_SyncAllowed_r16_Ue_Sync_r16_trueVal = 0, /**< ASN.1 trueVal */
} SL_SyncAllowed_r16_Ue_Sync_r16;


/**
 * @brief 枚举 SL_PSCCH_Config_r16_Sl_TimeResourcePSCCH_r16（ASN.1 sl-TimeResourcePSCCH-r16，源文件第 23082 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSCCH_Config_r16_Sl_TimeResourcePSCCH_r16 {
    SL_PSCCH_Config_r16_Sl_TimeResourcePSCCH_r16_n2 = 0, /**< ASN.1 n2 */
    SL_PSCCH_Config_r16_Sl_TimeResourcePSCCH_r16_n3 = 1, /**< ASN.1 n3 */
} SL_PSCCH_Config_r16_Sl_TimeResourcePSCCH_r16;


/**
 * @brief 枚举 SL_PSCCH_Config_r16_Sl_FreqResourcePSCCH_r16（ASN.1 sl-FreqResourcePSCCH-r16，源文件第 23083 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSCCH_Config_r16_Sl_FreqResourcePSCCH_r16 {
    SL_PSCCH_Config_r16_Sl_FreqResourcePSCCH_r16_n10 = 0, /**< ASN.1 n10 */
    SL_PSCCH_Config_r16_Sl_FreqResourcePSCCH_r16_n12 = 1, /**< ASN.1 n12 */
    SL_PSCCH_Config_r16_Sl_FreqResourcePSCCH_r16_n15 = 2, /**< ASN.1 n15 */
    SL_PSCCH_Config_r16_Sl_FreqResourcePSCCH_r16_n20 = 3, /**< ASN.1 n20 */
    SL_PSCCH_Config_r16_Sl_FreqResourcePSCCH_r16_n25 = 4, /**< ASN.1 n25 */
} SL_PSCCH_Config_r16_Sl_FreqResourcePSCCH_r16;


/**
 * @brief 枚举 SL_PSSCH_Config_r16_Sl_Scaling_r16（ASN.1 sl-Scaling-r16，源文件第 23092 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSSCH_Config_r16_Sl_Scaling_r16 {
    SL_PSSCH_Config_r16_Sl_Scaling_r16_f0p5 = 0, /**< ASN.1 f0p5 */
    SL_PSSCH_Config_r16_Sl_Scaling_r16_f0p65 = 1, /**< ASN.1 f0p65 */
    SL_PSSCH_Config_r16_Sl_Scaling_r16_f0p8 = 2, /**< ASN.1 f0p8 */
    SL_PSSCH_Config_r16_Sl_Scaling_r16_f1 = 3, /**< ASN.1 f1 */
} SL_PSSCH_Config_r16_Sl_Scaling_r16;


/**
 * @brief 枚举 SL_PSFCH_Config_r16_Sl_PSFCH_Period_r16（ASN.1 sl-PSFCH-Period-r16，源文件第 23097 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSFCH_Config_r16_Sl_PSFCH_Period_r16 {
    SL_PSFCH_Config_r16_Sl_PSFCH_Period_r16_sl0 = 0, /**< ASN.1 sl0 */
    SL_PSFCH_Config_r16_Sl_PSFCH_Period_r16_sl1 = 1, /**< ASN.1 sl1 */
    SL_PSFCH_Config_r16_Sl_PSFCH_Period_r16_sl2 = 2, /**< ASN.1 sl2 */
    SL_PSFCH_Config_r16_Sl_PSFCH_Period_r16_sl4 = 3, /**< ASN.1 sl4 */
} SL_PSFCH_Config_r16_Sl_PSFCH_Period_r16;


/**
 * @brief 枚举 SL_PSFCH_Config_r16_Sl_NumMuxCS_Pair_r16（ASN.1 sl-NumMuxCS-Pair-r16，源文件第 23099 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSFCH_Config_r16_Sl_NumMuxCS_Pair_r16 {
    SL_PSFCH_Config_r16_Sl_NumMuxCS_Pair_r16_n1 = 0, /**< ASN.1 n1 */
    SL_PSFCH_Config_r16_Sl_NumMuxCS_Pair_r16_n2 = 1, /**< ASN.1 n2 */
    SL_PSFCH_Config_r16_Sl_NumMuxCS_Pair_r16_n3 = 2, /**< ASN.1 n3 */
    SL_PSFCH_Config_r16_Sl_NumMuxCS_Pair_r16_n6 = 3, /**< ASN.1 n6 */
} SL_PSFCH_Config_r16_Sl_NumMuxCS_Pair_r16;


/**
 * @brief 枚举 SL_PSFCH_Config_r16_Sl_MinTimeGapPSFCH_r16（ASN.1 sl-MinTimeGapPSFCH-r16，源文件第 23100 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSFCH_Config_r16_Sl_MinTimeGapPSFCH_r16 {
    SL_PSFCH_Config_r16_Sl_MinTimeGapPSFCH_r16_sl2 = 0, /**< ASN.1 sl2 */
    SL_PSFCH_Config_r16_Sl_MinTimeGapPSFCH_r16_sl3 = 1, /**< ASN.1 sl3 */
} SL_PSFCH_Config_r16_Sl_MinTimeGapPSFCH_r16;


/**
 * @brief 枚举 SL_PSFCH_Config_r16_Sl_PSFCH_CandidateResourceType_r16（ASN.1 sl-PSFCH-CandidateResourceType-r16，源文件第 23102 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PSFCH_Config_r16_Sl_PSFCH_CandidateResourceType_r16 {
    SL_PSFCH_Config_r16_Sl_PSFCH_CandidateResourceType_r16_startSubCH = 0, /**< ASN.1 startSubCH */
    SL_PSFCH_Config_r16_Sl_PSFCH_CandidateResourceType_r16_allocSubCH = 1, /**< ASN.1 allocSubCH */
} SL_PSFCH_Config_r16_Sl_PSFCH_CandidateResourceType_r16;


/**
 * @brief 枚举 SL_PTRS_Config_r16_Sl_PTRS_RE_Offset_r16（ASN.1 sl-PTRS-RE-Offset-r16，源文件第 23108 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PTRS_Config_r16_Sl_PTRS_RE_Offset_r16 {
    SL_PTRS_Config_r16_Sl_PTRS_RE_Offset_r16_offset01 = 0, /**< ASN.1 offset01 */
    SL_PTRS_Config_r16_Sl_PTRS_RE_Offset_r16_offset10 = 1, /**< ASN.1 offset10 */
    SL_PTRS_Config_r16_Sl_PTRS_RE_Offset_r16_offset11 = 2, /**< ASN.1 offset11 */
} SL_PTRS_Config_r16_Sl_PTRS_RE_Offset_r16;


/**
 * @brief 枚举 SL_UE_SelectedConfigRP_r16_Sl_MultiReserveResource_r16（ASN.1 sl-MultiReserveResource-r16，源文件第 23115 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_UE_SelectedConfigRP_r16_Sl_MultiReserveResource_r16 {
    SL_UE_SelectedConfigRP_r16_Sl_MultiReserveResource_r16_enabled = 0, /**< ASN.1 enabled */
} SL_UE_SelectedConfigRP_r16_Sl_MultiReserveResource_r16;


/**
 * @brief 枚举 SL_UE_SelectedConfigRP_r16_Sl_MaxNumPerReserve_r16（ASN.1 sl-MaxNumPerReserve-r16，源文件第 23116 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_UE_SelectedConfigRP_r16_Sl_MaxNumPerReserve_r16 {
    SL_UE_SelectedConfigRP_r16_Sl_MaxNumPerReserve_r16_n2 = 0, /**< ASN.1 n2 */
    SL_UE_SelectedConfigRP_r16_Sl_MaxNumPerReserve_r16_n3 = 1, /**< ASN.1 n3 */
} SL_UE_SelectedConfigRP_r16_Sl_MaxNumPerReserve_r16;


/**
 * @brief 枚举 SL_UE_SelectedConfigRP_r16_Sl_SensingWindow_r16（ASN.1 sl-SensingWindow-r16，源文件第 23117 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_UE_SelectedConfigRP_r16_Sl_SensingWindow_r16 {
    SL_UE_SelectedConfigRP_r16_Sl_SensingWindow_r16_ms100 = 0, /**< ASN.1 ms100 */
    SL_UE_SelectedConfigRP_r16_Sl_SensingWindow_r16_ms1100 = 1, /**< ASN.1 ms1100 */
} SL_UE_SelectedConfigRP_r16_Sl_SensingWindow_r16;


/**
 * @brief 枚举 SL_UE_SelectedConfigRP_r16_Sl_RS_ForSensing_r16（ASN.1 sl-RS-ForSensing-r16，源文件第 23120 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_UE_SelectedConfigRP_r16_Sl_RS_ForSensing_r16 {
    SL_UE_SelectedConfigRP_r16_Sl_RS_ForSensing_r16_pscch = 0, /**< ASN.1 pscch */
    SL_UE_SelectedConfigRP_r16_Sl_RS_ForSensing_r16_pssch = 1, /**< ASN.1 pssch */
} SL_UE_SelectedConfigRP_r16_Sl_RS_ForSensing_r16;


/**
 * @brief 枚举 SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16（ASN.1 sl-ResourceReservePeriod1-r16，源文件第 23132 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16 {
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms0 = 0, /**< ASN.1 ms0 */
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms100 = 1, /**< ASN.1 ms100 */
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms200 = 2, /**< ASN.1 ms200 */
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms300 = 3, /**< ASN.1 ms300 */
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms400 = 4, /**< ASN.1 ms400 */
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms500 = 5, /**< ASN.1 ms500 */
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms600 = 6, /**< ASN.1 ms600 */
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms700 = 7, /**< ASN.1 ms700 */
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms800 = 8, /**< ASN.1 ms800 */
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms900 = 9, /**< ASN.1 ms900 */
    SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16_ms1000 = 10, /**< ASN.1 ms1000 */
} SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16;


/**
 * @brief 枚举 SL_SelectionWindowConfig_r16_Sl_SelectionWindow_r16（ASN.1 sl-SelectionWindow-r16，源文件第 23140 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_SelectionWindowConfig_r16_Sl_SelectionWindow_r16 {
    SL_SelectionWindowConfig_r16_Sl_SelectionWindow_r16_n1 = 0, /**< ASN.1 n1 */
    SL_SelectionWindowConfig_r16_Sl_SelectionWindow_r16_n5 = 1, /**< ASN.1 n5 */
    SL_SelectionWindowConfig_r16_Sl_SelectionWindow_r16_n10 = 2, /**< ASN.1 n10 */
    SL_SelectionWindowConfig_r16_Sl_SelectionWindow_r16_n20 = 3, /**< ASN.1 n20 */
} SL_SelectionWindowConfig_r16_Sl_SelectionWindow_r16;


/**
 * @brief 枚举 SL_TxPercentageConfig_r16_Sl_TxPercentage_r16（ASN.1 sl-TxPercentage-r16，源文件第 23147 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TxPercentageConfig_r16_Sl_TxPercentage_r16 {
    SL_TxPercentageConfig_r16_Sl_TxPercentage_r16_p20 = 0, /**< ASN.1 p20 */
    SL_TxPercentageConfig_r16_Sl_TxPercentage_r16_p35 = 1, /**< ASN.1 p35 */
    SL_TxPercentageConfig_r16_Sl_TxPercentage_r16_p50 = 2, /**< ASN.1 p50 */
} SL_TxPercentageConfig_r16_Sl_TxPercentage_r16;


/**
 * @brief 枚举 SL_MinMaxMCS_Config_r16_Sl_MCS_Table_r16（ASN.1 sl-MCS-Table-r16，源文件第 23153 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_MinMaxMCS_Config_r16_Sl_MCS_Table_r16 {
    SL_MinMaxMCS_Config_r16_Sl_MCS_Table_r16_qam64 = 0, /**< ASN.1 qam64 */
    SL_MinMaxMCS_Config_r16_Sl_MCS_Table_r16_qam256 = 1, /**< ASN.1 qam256 */
    SL_MinMaxMCS_Config_r16_Sl_MCS_Table_r16_qam64LowSE = 2, /**< ASN.1 qam64LowSE */
} SL_MinMaxMCS_Config_r16_Sl_MCS_Table_r16;


/**
 * @brief 枚举 SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16（ASN.1 sl-Alpha-PSSCH-PSCCH-r16，源文件第 23162 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16 {
    SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16_alpha0 = 0, /**< ASN.1 alpha0 */
    SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16_alpha04 = 1, /**< ASN.1 alpha04 */
    SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16_alpha05 = 2, /**< ASN.1 alpha05 */
    SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16_alpha06 = 3, /**< ASN.1 alpha06 */
    SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16_alpha07 = 4, /**< ASN.1 alpha07 */
    SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16_alpha08 = 5, /**< ASN.1 alpha08 */
    SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16_alpha09 = 6, /**< ASN.1 alpha09 */
    SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16_alpha1 = 7, /**< ASN.1 alpha1 */
} SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16;


/**
 * @brief 枚举 SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16（ASN.1 dl-Alpha-PSSCH-PSCCH-r16，源文件第 23163 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16 {
    SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16_alpha0 = 0, /**< ASN.1 alpha0 */
    SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16_alpha04 = 1, /**< ASN.1 alpha04 */
    SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16_alpha05 = 2, /**< ASN.1 alpha05 */
    SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16_alpha06 = 3, /**< ASN.1 alpha06 */
    SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16_alpha07 = 4, /**< ASN.1 alpha07 */
    SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16_alpha08 = 5, /**< ASN.1 alpha08 */
    SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16_alpha09 = 6, /**< ASN.1 alpha09 */
    SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16_alpha1 = 7, /**< ASN.1 alpha1 */
} SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16;


/**
 * @brief 枚举 SL_PowerControl_r16_Dl_Alpha_PSFCH_r16（ASN.1 dl-Alpha-PSFCH-r16，源文件第 23166 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PowerControl_r16_Dl_Alpha_PSFCH_r16 {
    SL_PowerControl_r16_Dl_Alpha_PSFCH_r16_alpha0 = 0, /**< ASN.1 alpha0 */
    SL_PowerControl_r16_Dl_Alpha_PSFCH_r16_alpha04 = 1, /**< ASN.1 alpha04 */
    SL_PowerControl_r16_Dl_Alpha_PSFCH_r16_alpha05 = 2, /**< ASN.1 alpha05 */
    SL_PowerControl_r16_Dl_Alpha_PSFCH_r16_alpha06 = 3, /**< ASN.1 alpha06 */
    SL_PowerControl_r16_Dl_Alpha_PSFCH_r16_alpha07 = 4, /**< ASN.1 alpha07 */
    SL_PowerControl_r16_Dl_Alpha_PSFCH_r16_alpha08 = 5, /**< ASN.1 alpha08 */
    SL_PowerControl_r16_Dl_Alpha_PSFCH_r16_alpha09 = 6, /**< ASN.1 alpha09 */
    SL_PowerControl_r16_Dl_Alpha_PSFCH_r16_alpha1 = 7, /**< ASN.1 alpha1 */
} SL_PowerControl_r16_Dl_Alpha_PSFCH_r16;


/**
 * @brief 枚举 SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16（ASN.1 sl-AM-RLC-r16/sl-MaxRetxThreshold-r16，源文件第 23233 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16 {
    SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16_t1 = 0, /**< ASN.1 t1 */
    SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16_t2 = 1, /**< ASN.1 t2 */
    SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16_t3 = 2, /**< ASN.1 t3 */
    SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16_t4 = 3, /**< ASN.1 t4 */
    SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16_t6 = 4, /**< ASN.1 t6 */
    SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16_t8 = 5, /**< ASN.1 t8 */
    SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16_t16 = 6, /**< ASN.1 t16 */
    SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16_t32 = 7, /**< ASN.1 t32 */
} SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16;


/**
 * @brief 枚举 SL_SDAP_Config_r16_Sl_SDAP_Header_r16（ASN.1 sl-SDAP-Header-r16，源文件第 23284 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_SDAP_Config_r16_Sl_SDAP_Header_r16 {
    SL_SDAP_Config_r16_Sl_SDAP_Header_r16_present = 0, /**< ASN.1 present */
    SL_SDAP_Config_r16_Sl_SDAP_Header_r16_absent = 1, /**< ASN.1 absent */
} SL_SDAP_Config_r16_Sl_SDAP_Header_r16;


/**
 * @brief 枚举 SL_SDAP_Config_r16_Sl_CastType_r16（ASN.1 sl-CastType-r16，源文件第 23290 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_SDAP_Config_r16_Sl_CastType_r16 {
    SL_SDAP_Config_r16_Sl_CastType_r16_broadcast = 0, /**< ASN.1 broadcast */
    SL_SDAP_Config_r16_Sl_CastType_r16_groupcast = 1, /**< ASN.1 groupcast */
    SL_SDAP_Config_r16_Sl_CastType_r16_unicast = 2, /**< ASN.1 unicast */
    SL_SDAP_Config_r16_Sl_CastType_r16_spare1 = 3, /**< ASN.1 spare1 */
} SL_SDAP_Config_r16_Sl_CastType_r16;


/**
 * @brief 枚举 SL_SyncConfig_r16_Sl_SyncRefMinHyst_r16（ASN.1 sl-SyncRefMinHyst-r16，源文件第 23355 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_SyncConfig_r16_Sl_SyncRefMinHyst_r16 {
    SL_SyncConfig_r16_Sl_SyncRefMinHyst_r16_dB0 = 0, /**< ASN.1 dB0 */
    SL_SyncConfig_r16_Sl_SyncRefMinHyst_r16_dB3 = 1, /**< ASN.1 dB3 */
    SL_SyncConfig_r16_Sl_SyncRefMinHyst_r16_dB6 = 2, /**< ASN.1 dB6 */
    SL_SyncConfig_r16_Sl_SyncRefMinHyst_r16_dB9 = 3, /**< ASN.1 dB9 */
    SL_SyncConfig_r16_Sl_SyncRefMinHyst_r16_dB12 = 4, /**< ASN.1 dB12 */
} SL_SyncConfig_r16_Sl_SyncRefMinHyst_r16;


/**
 * @brief 枚举 SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16（ASN.1 sl-SyncRefDiffHyst-r16，源文件第 23356 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16 {
    SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16_dB0 = 0, /**< ASN.1 dB0 */
    SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16_dB3 = 1, /**< ASN.1 dB3 */
    SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16_dB6 = 2, /**< ASN.1 dB6 */
    SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16_dB9 = 3, /**< ASN.1 dB9 */
    SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16_dB12 = 4, /**< ASN.1 dB12 */
    SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16_dBinf = 5, /**< ASN.1 dBinf */
} SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16;


/**
 * @brief 枚举 SL_SyncConfig_r16_Gnss_Sync_r16（ASN.1 gnss-Sync-r16，源文件第 23367 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_SyncConfig_r16_Gnss_Sync_r16 {
    SL_SyncConfig_r16_Gnss_Sync_r16_trueVal = 0, /**< ASN.1 trueVal */
} SL_SyncConfig_r16_Gnss_Sync_r16;


/**
 * @brief 枚举 SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16（ASN.1 sl-NumSSB-WithinPeriod-r16，源文件第 23374 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16 {
    SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16_n1 = 0, /**< ASN.1 n1 */
    SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16_n2 = 1, /**< ASN.1 n2 */
    SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16_n4 = 2, /**< ASN.1 n4 */
    SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16_n8 = 3, /**< ASN.1 n8 */
    SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16_n16 = 4, /**< ASN.1 n16 */
    SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16_n32 = 5, /**< ASN.1 n32 */
    SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16_n64 = 6, /**< ASN.1 n64 */
} SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16;


/**
 * @brief 枚举 SL_UE_SelectedConfig_r16_Sl_ProbResourceKeep_r16（ASN.1 sl-ProbResourceKeep-r16，源文件第 23404 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_UE_SelectedConfig_r16_Sl_ProbResourceKeep_r16 {
    SL_UE_SelectedConfig_r16_Sl_ProbResourceKeep_r16_v0 = 0, /**< ASN.1 v0 */
    SL_UE_SelectedConfig_r16_Sl_ProbResourceKeep_r16_v0dot2 = 1, /**< ASN.1 v0dot2 */
    SL_UE_SelectedConfig_r16_Sl_ProbResourceKeep_r16_v0dot4 = 2, /**< ASN.1 v0dot4 */
    SL_UE_SelectedConfig_r16_Sl_ProbResourceKeep_r16_v0dot6 = 3, /**< ASN.1 v0dot6 */
    SL_UE_SelectedConfig_r16_Sl_ProbResourceKeep_r16_v0dot8 = 4, /**< ASN.1 v0dot8 */
} SL_UE_SelectedConfig_r16_Sl_ProbResourceKeep_r16;


/**
 * @brief 枚举 SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16（ASN.1 sl-ReselectAfter-r16，源文件第 23405 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16 {
    SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16_n1 = 0, /**< ASN.1 n1 */
    SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16_n2 = 1, /**< ASN.1 n2 */
    SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16_n3 = 2, /**< ASN.1 n3 */
    SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16_n4 = 3, /**< ASN.1 n4 */
    SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16_n5 = 4, /**< ASN.1 n5 */
    SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16_n6 = 5, /**< ASN.1 n6 */
    SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16_n7 = 6, /**< ASN.1 n7 */
    SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16_n8 = 7, /**< ASN.1 n8 */
    SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16_n9 = 8, /**< ASN.1 n9 */
} SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16;


/**
 * @brief 枚举 SL_ZoneConfig_r16_Sl_ZoneLength_r16（ASN.1 sl-ZoneLength-r16，源文件第 23419 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ZoneConfig_r16_Sl_ZoneLength_r16 {
    SL_ZoneConfig_r16_Sl_ZoneLength_r16_m5 = 0, /**< ASN.1 m5 */
    SL_ZoneConfig_r16_Sl_ZoneLength_r16_m10 = 1, /**< ASN.1 m10 */
    SL_ZoneConfig_r16_Sl_ZoneLength_r16_m20 = 2, /**< ASN.1 m20 */
    SL_ZoneConfig_r16_Sl_ZoneLength_r16_m30 = 3, /**< ASN.1 m30 */
    SL_ZoneConfig_r16_Sl_ZoneLength_r16_m40 = 4, /**< ASN.1 m40 */
    SL_ZoneConfig_r16_Sl_ZoneLength_r16_m50 = 5, /**< ASN.1 m50 */
    SL_ZoneConfig_r16_Sl_ZoneLength_r16_spare2 = 6, /**< ASN.1 spare2 */
    SL_ZoneConfig_r16_Sl_ZoneLength_r16_spare1 = 7, /**< ASN.1 spare1 */
} SL_ZoneConfig_r16_Sl_ZoneLength_r16;


/**
 * @brief 枚举 DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds（ASN.1 drx-onDurationTimerPTM-r17/milliSeconds，源文件第 23453 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds {
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms1 = 0, /**< ASN.1 ms1 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms2 = 1, /**< ASN.1 ms2 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms3 = 2, /**< ASN.1 ms3 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms4 = 3, /**< ASN.1 ms4 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms5 = 4, /**< ASN.1 ms5 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms6 = 5, /**< ASN.1 ms6 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms8 = 6, /**< ASN.1 ms8 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms10 = 7, /**< ASN.1 ms10 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms20 = 8, /**< ASN.1 ms20 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms30 = 9, /**< ASN.1 ms30 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms40 = 10, /**< ASN.1 ms40 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms50 = 11, /**< ASN.1 ms50 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms60 = 12, /**< ASN.1 ms60 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms80 = 13, /**< ASN.1 ms80 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms100 = 14, /**< ASN.1 ms100 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms200 = 15, /**< ASN.1 ms200 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms300 = 16, /**< ASN.1 ms300 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms400 = 17, /**< ASN.1 ms400 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms500 = 18, /**< ASN.1 ms500 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms600 = 19, /**< ASN.1 ms600 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms800 = 20, /**< ASN.1 ms800 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms1000 = 21, /**< ASN.1 ms1000 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms1200 = 22, /**< ASN.1 ms1200 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_ms1600 = 23, /**< ASN.1 ms1600 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_spare8 = 24, /**< ASN.1 spare8 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_spare7 = 25, /**< ASN.1 spare7 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_spare6 = 26, /**< ASN.1 spare6 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_spare5 = 27, /**< ASN.1 spare5 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_spare4 = 28, /**< ASN.1 spare4 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_spare3 = 29, /**< ASN.1 spare3 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_spare2 = 30, /**< ASN.1 spare2 */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds_spare1 = 31, /**< ASN.1 spare1 */
} DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds;


/**
 * @brief 枚举 DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17（ASN.1 drx-InactivityTimerPTM-r17，源文件第 23459 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17 {
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms0 = 0, /**< ASN.1 ms0 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms1 = 1, /**< ASN.1 ms1 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms2 = 2, /**< ASN.1 ms2 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms3 = 3, /**< ASN.1 ms3 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms4 = 4, /**< ASN.1 ms4 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms5 = 5, /**< ASN.1 ms5 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms6 = 6, /**< ASN.1 ms6 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms8 = 7, /**< ASN.1 ms8 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms10 = 8, /**< ASN.1 ms10 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms20 = 9, /**< ASN.1 ms20 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms30 = 10, /**< ASN.1 ms30 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms40 = 11, /**< ASN.1 ms40 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms50 = 12, /**< ASN.1 ms50 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms60 = 13, /**< ASN.1 ms60 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms80 = 14, /**< ASN.1 ms80 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms100 = 15, /**< ASN.1 ms100 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms200 = 16, /**< ASN.1 ms200 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms300 = 17, /**< ASN.1 ms300 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms500 = 18, /**< ASN.1 ms500 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms750 = 19, /**< ASN.1 ms750 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms1280 = 20, /**< ASN.1 ms1280 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms1920 = 21, /**< ASN.1 ms1920 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_ms2560 = 22, /**< ASN.1 ms2560 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_spare9 = 23, /**< ASN.1 spare9 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_spare8 = 24, /**< ASN.1 spare8 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_spare7 = 25, /**< ASN.1 spare7 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_spare6 = 26, /**< ASN.1 spare6 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_spare5 = 27, /**< ASN.1 spare5 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_spare4 = 28, /**< ASN.1 spare4 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_spare3 = 29, /**< ASN.1 spare3 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_spare2 = 30, /**< ASN.1 spare2 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17_spare1 = 31, /**< ASN.1 spare1 */
} DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17;


/**
 * @brief 枚举 DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17（ASN.1 drx-RetransmissionTimerDL-PTM-r17，源文件第 23465 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17 {
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl0 = 0, /**< ASN.1 sl0 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl1 = 1, /**< ASN.1 sl1 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl2 = 2, /**< ASN.1 sl2 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl4 = 3, /**< ASN.1 sl4 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl6 = 4, /**< ASN.1 sl6 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl8 = 5, /**< ASN.1 sl8 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl16 = 6, /**< ASN.1 sl16 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl24 = 7, /**< ASN.1 sl24 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl33 = 8, /**< ASN.1 sl33 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl40 = 9, /**< ASN.1 sl40 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl64 = 10, /**< ASN.1 sl64 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl80 = 11, /**< ASN.1 sl80 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl96 = 12, /**< ASN.1 sl96 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl112 = 13, /**< ASN.1 sl112 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl128 = 14, /**< ASN.1 sl128 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl160 = 15, /**< ASN.1 sl160 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_sl320 = 16, /**< ASN.1 sl320 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare15 = 17, /**< ASN.1 spare15 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare14 = 18, /**< ASN.1 spare14 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare13 = 19, /**< ASN.1 spare13 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare12 = 20, /**< ASN.1 spare12 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare11 = 21, /**< ASN.1 spare11 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare10 = 22, /**< ASN.1 spare10 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare9 = 23, /**< ASN.1 spare9 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare8 = 24, /**< ASN.1 spare8 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare7 = 25, /**< ASN.1 spare7 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare6 = 26, /**< ASN.1 spare6 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare5 = 27, /**< ASN.1 spare5 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare4 = 28, /**< ASN.1 spare4 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare3 = 29, /**< ASN.1 spare3 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare2 = 30, /**< ASN.1 spare2 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17_spare1 = 31, /**< ASN.1 spare1 */
} DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17;


/**
 * @brief 枚举 MRB_PDCP_ConfigBroadcast_r17_Pdcp_SN_SizeDL_r17（ASN.1 pdcp-SN-SizeDL-r17，源文件第 23569 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRB_PDCP_ConfigBroadcast_r17_Pdcp_SN_SizeDL_r17 {
    MRB_PDCP_ConfigBroadcast_r17_Pdcp_SN_SizeDL_r17_len12bits = 0, /**< ASN.1 len12bits */
} MRB_PDCP_ConfigBroadcast_r17_Pdcp_SN_SizeDL_r17;


/**
 * @brief 枚举 MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17（ASN.1 t-Reordering-r17，源文件第 23581 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17 {
    MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17_ms1 = 0, /**< ASN.1 ms1 */
    MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17_ms10 = 1, /**< ASN.1 ms10 */
    MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17_ms40 = 2, /**< ASN.1 ms40 */
    MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17_ms160 = 3, /**< ASN.1 ms160 */
    MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17_ms500 = 4, /**< ASN.1 ms500 */
    MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17_ms1000 = 5, /**< ASN.1 ms1000 */
    MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17_ms1250 = 6, /**< ASN.1 ms1250 */
    MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17_ms2750 = 7, /**< ASN.1 ms2750 */
} MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17;


/**
 * @brief 枚举 MRB_RLC_ConfigBroadcast_r17_Sn_FieldLength_r17（ASN.1 sn-FieldLength-r17，源文件第 23586 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRB_RLC_ConfigBroadcast_r17_Sn_FieldLength_r17 {
    MRB_RLC_ConfigBroadcast_r17_Sn_FieldLength_r17_size6 = 0, /**< ASN.1 size6 */
} MRB_RLC_ConfigBroadcast_r17_Sn_FieldLength_r17;


/**
 * @brief 枚举 MBS_SessionInfoMulticast_r18_Pdcp_SyncIndicator_r18（ASN.1 pdcp-SyncIndicator-r18，源文件第 23604 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MBS_SessionInfoMulticast_r18_Pdcp_SyncIndicator_r18 {
    MBS_SessionInfoMulticast_r18_Pdcp_SyncIndicator_r18_trueVal = 0, /**< ASN.1 trueVal */
} MBS_SessionInfoMulticast_r18_Pdcp_SyncIndicator_r18;


/**
 * @brief 枚举 MBS_SessionInfoMulticast_r18_StopMonitoringRNTI_r18（ASN.1 stopMonitoringRNTI-r18，源文件第 23605 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MBS_SessionInfoMulticast_r18_StopMonitoringRNTI_r18 {
    MBS_SessionInfoMulticast_r18_StopMonitoringRNTI_r18_trueVal = 0, /**< ASN.1 trueVal */
} MBS_SessionInfoMulticast_r18_StopMonitoringRNTI_r18;


/**
 * @brief 枚举 MRB_PDCP_ConfigMulticast_r18_Pdcp_SN_SizeDL_r18（ASN.1 pdcp-SN-SizeDL-r18，源文件第 23618 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRB_PDCP_ConfigMulticast_r18_Pdcp_SN_SizeDL_r18 {
    MRB_PDCP_ConfigMulticast_r18_Pdcp_SN_SizeDL_r18_len12bits = 0, /**< ASN.1 len12bits */
    MRB_PDCP_ConfigMulticast_r18_Pdcp_SN_SizeDL_r18_len18bits = 1, /**< ASN.1 len18bits */
} MRB_PDCP_ConfigMulticast_r18_Pdcp_SN_SizeDL_r18;


/**
 * @brief 枚举 MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17（ASN.1 t-Reordering-r17，源文件第 23630 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17 {
    MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17_ms1 = 0, /**< ASN.1 ms1 */
    MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17_ms10 = 1, /**< ASN.1 ms10 */
    MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17_ms40 = 2, /**< ASN.1 ms40 */
    MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17_ms160 = 3, /**< ASN.1 ms160 */
    MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17_ms500 = 4, /**< ASN.1 ms500 */
    MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17_ms1000 = 5, /**< ASN.1 ms1000 */
    MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17_ms1250 = 6, /**< ASN.1 ms1250 */
    MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17_ms2750 = 7, /**< ASN.1 ms2750 */
} MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17;


/**
 * @brief 枚举 MRB_RLC_ConfigMulticast_r18_Sn_FieldLength_r18（ASN.1 sn-FieldLength-r18，源文件第 23638 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRB_RLC_ConfigMulticast_r18_Sn_FieldLength_r18 {
    MRB_RLC_ConfigMulticast_r18_Sn_FieldLength_r18_size6 = 0, /**< ASN.1 size6 */
    MRB_RLC_ConfigMulticast_r18_Sn_FieldLength_r18_size12 = 1, /**< ASN.1 size12 */
} MRB_RLC_ConfigMulticast_r18_Sn_FieldLength_r18;


/**
 * @brief 枚举 PDSCH_ConfigBroadcast_r17_Mcs_Table_r17（ASN.1 mcs-Table-r17，源文件第 23664 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_ConfigBroadcast_r17_Mcs_Table_r17 {
    PDSCH_ConfigBroadcast_r17_Mcs_Table_r17_qam256 = 0, /**< ASN.1 qam256 */
    PDSCH_ConfigBroadcast_r17_Mcs_Table_r17_qam64LowSE = 1, /**< ASN.1 qam64LowSE */
} PDSCH_ConfigBroadcast_r17_Mcs_Table_r17;


/**
 * @brief 枚举 PDSCH_ConfigBroadcast_r17_XOverhead_r17（ASN.1 xOverhead-r17，源文件第 23665 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_ConfigBroadcast_r17_XOverhead_r17 {
    PDSCH_ConfigBroadcast_r17_XOverhead_r17_xOh6 = 0, /**< ASN.1 xOh6 */
    PDSCH_ConfigBroadcast_r17_XOverhead_r17_xOh12 = 1, /**< ASN.1 xOh12 */
    PDSCH_ConfigBroadcast_r17_XOverhead_r17_xOh18 = 2, /**< ASN.1 xOh18 */
} PDSCH_ConfigBroadcast_r17_XOverhead_r17;


/**
 * @brief 枚举 PDSCH_ConfigPTM_r17_Pdsch_AggregationFactor_r17（ASN.1 pdsch-AggregationFactor-r17，源文件第 23671 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_ConfigPTM_r17_Pdsch_AggregationFactor_r17 {
    PDSCH_ConfigPTM_r17_Pdsch_AggregationFactor_r17_n2 = 0, /**< ASN.1 n2 */
    PDSCH_ConfigPTM_r17_Pdsch_AggregationFactor_r17_n4 = 1, /**< ASN.1 n4 */
    PDSCH_ConfigPTM_r17_Pdsch_AggregationFactor_r17_n8 = 2, /**< ASN.1 n8 */
} PDSCH_ConfigPTM_r17_Pdsch_AggregationFactor_r17;



/* ---------- 顶层基本类型 typedef ---------- */
typedef int64_t AppLayerBufferLevel_r17; /**< INTEGER (0..30000)，位宽 15 bit */
typedef SDT_MAC_PHY_CG_Config_r17 SDT_CG_Config_r17; /**< OCTET STRING (CONTAINING SDT_MAC_PHY_CG_Config_r17)：字段使用 SDT_CG_Config_r17* */
typedef SRS_PosRRC_InactiveConfig_r17 SRS_PosRRC_Inactive_r17; /**< OCTET STRING (CONTAINING SRS_PosRRC_InactiveConfig_r17)：字段使用 SRS_PosRRC_Inactive_r17* */
typedef int64_t FeaturePriority_r17; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t MUSIM_BandEntryIndex_r18; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t TimeSinceFailure_r16; /**< INTEGER (0..172800)，位宽 18 bit */
typedef int64_t TimeUntilReconnection_r16; /**< INTEGER (0..172800)，位宽 18 bit */
typedef int64_t TimeSinceCHO_Reconfig_r17; /**< INTEGER (0..1023)，位宽 10 bit */
typedef int64_t TimeSinceCPAC_Reconfig_r18; /**< INTEGER (0..1023)，位宽 10 bit */
typedef int64_t TimeConnSourceDAPS_Failure_r17; /**< INTEGER (0..1023)，位宽 10 bit */
typedef int64_t UPInterruptionTimeAtHO_r17; /**< INTEGER (0..1023)，位宽 10 bit */
typedef int64_t ElapsedTimeT316_r18; /**< INTEGER (0..2000)，位宽 11 bit */
typedef int64_t ElapsedTimeSCGFailure_r18; /**< INTEGER (0..1023)，位宽 10 bit */
typedef int64_t TimeSinceSHR_r18; /**< INTEGER (0..172800)，位宽 18 bit */
typedef OctetString MBS_FSAI_r17; /**< OCTET STRING SIZE (3)，定长 */
typedef int64_t AdditionalSpectrumEmission; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t AdditionalSpectrumEmission_v1760; /**< INTEGER (8..39)，位宽 5 bit */
typedef int64_t AdditionalSpectrumEmission_r18; /**< INTEGER (0..39)，位宽 6 bit */
typedef int64_t FlightPathUpdateDistanceThr_r18; /**< INTEGER (0..1023)，位宽 10 bit */
typedef int64_t FlightPathUpdateTimeThr_r18; /**< INTEGER (0..16383)，位宽 14 bit */
typedef int64_t Altitude_r18; /**< INTEGER (-420..10000)，位宽 14 bit */
typedef BitString AMF_Identifier; /**< BIT STRING SIZE (24)，定长 */
typedef int64_t ARFCN_ValueEUTRA; /**< INTEGER (0..262143)，位宽 18 bit */
typedef int64_t ARFCN_ValueNR; /**< INTEGER (0..3279165)，位宽 22 bit */
typedef int64_t ARFCN_ValueUTRA_FDD_r16; /**< INTEGER (0..16383)，位宽 14 bit */
typedef int64_t AvailabilityCombinationsPerCellIndex_r16; /**< INTEGER (0..512)，位宽 10 bit */
typedef int64_t AvailabilityCombinationId_r16; /**< INTEGER (0..511)，位宽 9 bit */
typedef int64_t BH_LogicalChannelIdentity_Ext_r16; /**< INTEGER (320..65855)，位宽 16 bit */
typedef BitString BH_RLC_ChannelID_r16; /**< BIT STRING SIZE (16)，定长 */
typedef int64_t BWP_Id; /**< INTEGER (0..4)，位宽 3 bit */
typedef SystemInformation SCellSIB20_r17; /**< OCTET STRING (CONTAINING SystemInformation)：字段使用 SCellSIB20_r17* */
typedef int64_t IAB_ResourceConfigID_r17; /**< INTEGER (0..65535)，位宽 16 bit */
typedef int64_t UplinkTxSwitchingBandIndex_r18; /**< INTEGER (1..32)，位宽 5 bit */
typedef int64_t CellGroupId; /**< INTEGER (0..3)，位宽 2 bit */
typedef BitString CellIdentity; /**< BIT STRING SIZE (36)，定长 */
typedef int64_t CellReselectionPriority; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t CLI_RSSI_Range_r16; /**< INTEGER (0..76)，位宽 7 bit */
typedef int64_t CondReconfigId_r16; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t SecurityCellSetId_r18; /**< INTEGER (1..9)，位宽 4 bit */
typedef int64_t ConfiguredGrantConfigIndex_r16; /**< INTEGER (0..11)，位宽 4 bit */
typedef int64_t ConfiguredGrantConfigIndexMAC_r16; /**< INTEGER (0..31)，位宽 5 bit */
typedef int64_t ControlResourceSetId; /**< INTEGER (0..11)，位宽 4 bit */
typedef int64_t ControlResourceSetId_r16; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t ControlResourceSetId_v1610; /**< INTEGER (12..15)，位宽 2 bit */
typedef int64_t ControlResourceSetZero; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t CSI_IM_ResourceId; /**< INTEGER (0..31)，位宽 5 bit */
typedef int64_t CSI_IM_ResourceSetId; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t PortIndex8; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t PortIndex4; /**< INTEGER (0..3)，位宽 2 bit */
typedef int64_t PortIndex2; /**< INTEGER (0..1)，位宽 1 bit */
typedef int64_t CSI_ReportConfigId; /**< INTEGER (0..47)，位宽 6 bit */
typedef int64_t NZP_CSI_RS_ResourceIndex_r18; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t CSI_ReportSubConfigId_r18; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t CSI_ResourceConfigId; /**< INTEGER (0..111)，位宽 7 bit */
typedef int64_t CSI_RS_Index; /**< INTEGER (0..95)，位宽 7 bit */
typedef int64_t ServingAdditionalPCIIndex_r17; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t CSI_SSB_ResourceSetId; /**< INTEGER (0..63)，位宽 6 bit */
typedef OctetString DedicatedNAS_Message; /**< OCTET STRING 无 SIZE 约束（半约束长度） */
typedef int64_t DL_PPW_ID_r17; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t DRB_Identity; /**< INTEGER (1..32)，位宽 5 bit */
typedef int64_t PositionStateVector_r17; /**< INTEGER (-33554432..33554431)，位宽 26 bit */
typedef int64_t VelocityStateVector_r17; /**< INTEGER (-131072..131071)，位宽 18 bit */
typedef BitString EUTRA_C_RNTI; /**< BIT STRING SIZE (16)，定长 */
typedef int64_t FreqBandIndicatorNR; /**< INTEGER (1..1024)，位宽 10 bit */
typedef int64_t GapPriority_r17; /**< INTEGER (1..16)，位宽 4 bit */
typedef int64_t Hysteresis; /**< INTEGER (0..30)，位宽 5 bit */
typedef int64_t HysteresisAltitude_r18; /**< INTEGER (0..64)，位宽 7 bit */
typedef int64_t HysteresisLocation_r17; /**< INTEGER (0..32768)，位宽 16 bit */
typedef BitString I_RNTI_Value; /**< BIT STRING SIZE (40)，定长 */
typedef int64_t LogicalChannelIdentity; /**< INTEGER (1..32)，位宽 5 bit */
typedef int64_t LTM_CandidateId_r18; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t LTM_CSI_ReportConfigId_r18; /**< INTEGER (0..47)，位宽 6 bit */
typedef int64_t LTM_CSI_ResourceConfigId_r18; /**< INTEGER (0..111)，位宽 7 bit */
typedef int64_t MBS_RNTI_SpecificConfigId_r17; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t LCG_Id_r18; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t MeasPosPreConfigGapId_r17; /**< INTEGER (1..16)，位宽 4 bit */
typedef int64_t MeasGapId_r17; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t MeasId; /**< INTEGER (1..64)，位宽 6 bit */
typedef int64_t RSRQ_RangeEUTRA_r16; /**< INTEGER (-30..46)，位宽 7 bit */
typedef int64_t RSSI_ResourceId_r16; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t EUTRA_CellIndex; /**< INTEGER (1..32)，位宽 5 bit */
typedef int64_t MeasObjectId; /**< INTEGER (1..64)，位宽 6 bit */
typedef int64_t UTRA_FDD_CellIndex_r16; /**< INTEGER (1..32)，位宽 5 bit */
typedef int64_t TimeBetweenEvent_r17; /**< INTEGER (0..1023)，位宽 10 bit */
typedef int64_t MeasSequence_r18; /**< INTEGER (1..64)，位宽 6 bit */
typedef int64_t RSRP_RangeEUTRA; /**< INTEGER (0..97)，位宽 7 bit */
typedef int64_t RSRQ_RangeEUTRA; /**< INTEGER (0..34)，位宽 6 bit */
typedef int64_t SINR_RangeEUTRA; /**< INTEGER (0..127)，位宽 7 bit */
typedef int64_t MRB_Identity_r17; /**< INTEGER (1..512)，位宽 9 bit */
typedef int64_t MUSIM_GapId_r17; /**< INTEGER (0..2)，位宽 2 bit */
typedef int64_t NCR_AperiodicFwdTimeResourceId_r18; /**< INTEGER (0..111)，位宽 7 bit */
typedef int64_t NCR_PeriodicFwdResourceId_r18; /**< INTEGER (0..1023)，位宽 10 bit */
typedef int64_t NCR_PeriodicFwdResourceSetId_r18; /**< INTEGER (0..31)，位宽 5 bit */
typedef int64_t NCR_SemiPersistentFwdResourceId_r18; /**< INTEGER (0..127)，位宽 7 bit */
typedef int64_t NCR_SemiPersistentFwdResourceSetId_r18; /**< INTEGER (0..31)，位宽 5 bit */
typedef int64_t NextHopChainingCount; /**< INTEGER (0..7)，位宽 3 bit */
typedef BitString NG_5G_S_TMSI; /**< BIT STRING SIZE (48)，定长 */
typedef BitString NID_r16; /**< BIT STRING SIZE (44)，定长 */
typedef int64_t NR_DL_PRS_ResourceID_r17; /**< INTEGER (0..63)，位宽 6 bit */
typedef BitString NSAG_ID_r17; /**< BIT STRING SIZE (8)，定长 */
typedef int64_t NZP_CSI_RS_ResourceId; /**< INTEGER (0..191)，位宽 8 bit */
typedef int64_t NZP_CSI_RS_ResourceSetId; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t P_Max; /**< INTEGER (-30..33)，位宽 6 bit */
typedef int64_t PathlossReferenceRS_Id_r17; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t PCI_RangeIndex; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t SCS_SpecificDuration_r17; /**< INTEGER (1..166)，位宽 8 bit */
typedef int64_t MaxMIMO_LayersDL_r16; /**< INTEGER (1..8)，位宽 3 bit */
typedef BitString DownlinkHARQ_FeedbackDisabled_r17; /**< BIT STRING SIZE (32)，定长 */
typedef int64_t PDU_SessionID; /**< INTEGER (0..255)，位宽 8 bit */
typedef int64_t PhysCellId; /**< INTEGER (0..1007)，位宽 10 bit */
typedef int64_t PDSCH_HARQ_ACK_EnhType3Index_r17; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t PDCCH_BlindDetection; /**< INTEGER (1..15)，位宽 4 bit */
typedef int64_t PDCCH_BlindDetection2_r16; /**< INTEGER (1..15)，位宽 4 bit */
typedef int64_t PDCCH_BlindDetection3_r16; /**< INTEGER (1..15)，位宽 4 bit */
typedef int64_t PDCCH_BlindDetection4_r17; /**< INTEGER (1..15)，位宽 4 bit */
typedef int64_t MCC_MNC_Digit; /**< INTEGER (0..9)，位宽 4 bit */
typedef int64_t PRB_Id; /**< INTEGER (0..274)，位宽 9 bit */
typedef int64_t PUCCH_ResourceSetId; /**< INTEGER (0..3)，位宽 2 bit */
typedef int64_t PUCCH_ResourceId; /**< INTEGER (0..127)，位宽 7 bit */
typedef int64_t PUCCH_ResourceGroupId_r16; /**< INTEGER (0..3)，位宽 2 bit */
typedef int64_t PUCCH_PathlossReferenceRS_Id; /**< INTEGER (0..3)，位宽 2 bit */
typedef int64_t PUCCH_PathlossReferenceRS_Id_v1610; /**< INTEGER (4..63)，位宽 6 bit */
typedef int64_t PUCCH_PathlossReferenceRS_Id_r17; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t P0_PUCCH_Id; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t PUCCH_PowerControlSetInfoId_r17; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t PUCCH_SpatialRelationInfoId; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t PUCCH_SpatialRelationInfoId_r16; /**< INTEGER (1..64)，位宽 6 bit */
typedef int64_t PUCCH_SpatialRelationInfoId_v1610; /**< INTEGER (9..64)，位宽 6 bit */
typedef int64_t MPE_ResourceId_r17; /**< INTEGER (1..64)，位宽 6 bit */
typedef int64_t P0_PUSCH_AlphaSetId; /**< INTEGER (0..29)，位宽 5 bit */
typedef int64_t PUSCH_PathlossReferenceRS_Id; /**< INTEGER (0..3)，位宽 2 bit */
typedef int64_t PUSCH_PathlossReferenceRS_Id_v1610; /**< INTEGER (4..63)，位宽 6 bit */
typedef int64_t PUSCH_PathlossReferenceRS_Id_r17; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t SRI_PUSCH_PowerControlId; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t P0_PUSCH_SetId_r16; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t P0_PUSCH_r16; /**< INTEGER (-16..15)，位宽 5 bit */
typedef int64_t MaxMIMO_LayersDCI_0_2_r16; /**< INTEGER (1..4)，位宽 2 bit */
typedef BitString UplinkHARQ_mode_r17; /**< BIT STRING SIZE (32)，定长 */
typedef int64_t QFI; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t Q_QualMin; /**< INTEGER (-43..-12)，位宽 5 bit */
typedef int64_t Q_RxLevMin; /**< INTEGER (-70..-22)，位宽 6 bit */
typedef int64_t RACH_ConfigTwoTAIndex_r18; /**< INTEGER (1..7)，位宽 3 bit */
typedef int64_t BeamLinkMonitoringRS_Id_r17; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t RadioLinkMonitoringRS_Id; /**< INTEGER (0..9)，位宽 4 bit */
typedef int64_t RAN_AreaCode; /**< INTEGER (0..255)，位宽 8 bit */
typedef int64_t RateMatchPatternId; /**< INTEGER (0..3)，位宽 2 bit */
typedef RRCReconfiguration ReferenceConfiguration_r18; /**< OCTET STRING (CONTAINING RRCReconfiguration)：字段使用 ReferenceConfiguration_r18* */
typedef OctetString ReferenceLocation_r17; /**< OCTET STRING 无 SIZE 约束（半约束长度） */
typedef int64_t RejectWaitTime; /**< INTEGER (1..16)，位宽 4 bit */
typedef int64_t ReportConfigId; /**< INTEGER (1..64)，位宽 6 bit */
typedef int64_t ReselectionThreshold; /**< INTEGER (0..31)，位宽 5 bit */
typedef int64_t ReselectionThresholdQ; /**< INTEGER (0..31)，位宽 5 bit */
typedef int64_t LogicalChannelIdentityExt_r17; /**< INTEGER (320..65855)，位宽 16 bit */
typedef int64_t RNTI_Value; /**< INTEGER (0..65535)，位宽 16 bit */
typedef int64_t RSRP_Range; /**< INTEGER (0..127)，位宽 7 bit */
typedef int64_t RSRQ_Range; /**< INTEGER (0..127)，位宽 7 bit */
typedef int64_t RSSI_Range_r16; /**< INTEGER (0..76)，位宽 7 bit */
typedef int64_t SCellActivationRS_ConfigId_r17; /**< INTEGER (1..255)，位宽 8 bit */
typedef int64_t SCellIndex; /**< INTEGER (1..31)，位宽 5 bit */
typedef int64_t SchedulingRequestId; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t SchedulingRequestResourceId; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t ScramblingId; /**< INTEGER (0..1023)，位宽 10 bit */
typedef int64_t SearchSpaceId; /**< INTEGER (0..39)，位宽 6 bit */
typedef int64_t SearchSpaceZero; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t ServCellIndex; /**< INTEGER (0..31)，位宽 5 bit */
typedef int64_t DormancyGroupID_r16; /**< INTEGER (0..4)，位宽 3 bit */
typedef int64_t SetOfCellsId_r18; /**< INTEGER (0..3)，位宽 2 bit */
typedef BitString ShortI_RNTI_Value; /**< BIT STRING SIZE (24)，定长 */
typedef BitString ShortMAC_I; /**< BIT STRING SIZE (16)，定长 */
typedef int64_t SINR_Range; /**< INTEGER (0..127)，位宽 7 bit */
typedef int64_t SK_Counter; /**< INTEGER (0..65535)，位宽 16 bit */
typedef int64_t SlotFormatCombinationId; /**< INTEGER (0..511)，位宽 9 bit */
typedef int64_t CO_Duration_r16; /**< INTEGER (0..1120)，位宽 11 bit */
typedef int64_t CO_Duration_r17; /**< INTEGER (0..4480)，位宽 13 bit */
typedef int64_t SPS_ConfigIndex_r16; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t SRB_Identity; /**< INTEGER (1..3)，位宽 2 bit */
typedef int64_t SRB_Identity_v1700; /**< INTEGER (4)，单值 0 bit */
typedef int64_t SRB_Identity_v1800; /**< INTEGER (5)，单值 0 bit */
typedef int64_t AvailableSlotOffset_r17; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t SRS_PathlossReferenceRS_Id_r16; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t SRS_ResourceSetId; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t SRS_PosResourceSetId_r16; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t SRS_ResourceId; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t SRS_PosResourceId_r16; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t SRS_RSRP_Range_r16; /**< INTEGER (0..98)，位宽 7 bit */
typedef int64_t SSB_Index; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t AdditionalPCIIndex_r17; /**< INTEGER (1..7)，位宽 3 bit */
typedef int64_t TAG_Id; /**< INTEGER (0..3)，位宽 2 bit */
typedef int64_t TCI_StateId; /**< INTEGER (0..127)，位宽 7 bit */
typedef int64_t TCI_UL_StateId_r17; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t TDD_UL_DL_SlotIndex; /**< INTEGER (0..319)，位宽 9 bit */
typedef BitString TrackingAreaCode; /**< BIT STRING SIZE (24)，定长 */
typedef int64_t T_Reselection; /**< INTEGER (0..7)，位宽 3 bit */
typedef int64_t TN_AreaId_r18; /**< INTEGER (1..32)，位宽 5 bit */
typedef int64_t UAC_BarringInfoSetIndex; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t Uplink_powerControlId_r17; /**< INTEGER (1..64)，位宽 6 bit */
typedef int64_t Uu_RelayRLC_ChannelID_r17; /**< INTEGER (1..32)，位宽 5 bit */
typedef int64_t ZP_CSI_RS_ResourceId; /**< INTEGER (0..31)，位宽 5 bit */
typedef int64_t ZP_CSI_RS_ResourceSetId; /**< INTEGER (0..15)，位宽 4 bit */
typedef BitString SRS_SwitchingAffectedBandsNR_r17; /**< BIT STRING SIZE (1..32) */
typedef int64_t FeatureSetCombinationId; /**< INTEGER (0..1024)，位宽 11 bit */
typedef int64_t FeatureSetDownlinkId; /**< INTEGER (0..1024)，位宽 11 bit */
typedef int64_t FeatureSetDownlinkPerCC_Id; /**< INTEGER (1..1024)，位宽 10 bit */
typedef int64_t FeatureSetEUTRA_DownlinkId; /**< INTEGER (0..256)，位宽 9 bit */
typedef int64_t FeatureSetEUTRA_UplinkId; /**< INTEGER (0..256)，位宽 9 bit */
typedef int64_t FeatureSetUplinkId; /**< INTEGER (0..1024)，位宽 11 bit */
typedef int64_t FeatureSetUplinkPerCC_Id; /**< INTEGER (1..1024)，位宽 10 bit */
typedef int64_t FreqBandIndicatorEUTRA; /**< INTEGER (1..256)，位宽 8 bit */
typedef int64_t NumberOfCarriers; /**< INTEGER (1..16)，位宽 4 bit */
typedef BitString SimultaneousRxTxPerBandPair; /**< BIT STRING SIZE (3..496) */
typedef BitString AbsoluteTimeInfo_r16; /**< BIT STRING SIZE (48)，定长 */
typedef OctetString BT_Name_r16; /**< OCTET STRING SIZE (1..248) */
typedef OctetString DedicatedInfoF1c_r17; /**< OCTET STRING 无 SIZE 约束（半约束长度） */
typedef int64_t EUTRA_PhysCellId; /**< INTEGER (0..503)，位宽 9 bit */
typedef bool EUTRA_PresenceAntennaPort1; /**< BOOLEAN */
typedef int64_t IAB_IP_AddressIndex_r16; /**< INTEGER (1..32)，位宽 5 bit */
typedef int64_t WLAN_RSSI_Range_r16; /**< INTEGER (0..141)，位宽 8 bit */
typedef int64_t MeasConfigAppLayerId_r17; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t PhysCellIdUTRA_FDD_r16; /**< INTEGER (0..511)，位宽 9 bit */
typedef int64_t RRC_TransactionIdentifier; /**< INTEGER (0..3)，位宽 2 bit */
typedef OctetString WLAN_Name_r16; /**< OCTET STRING SIZE (1..32) */
typedef int64_t SL_ResourcePoolID_r16; /**< INTEGER (1..16)，位宽 4 bit */
typedef int64_t SL_PRS_ResourcePoolID_r18; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t SL_TxConfigIndex_r16; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t SL_CBR_r16; /**< INTEGER (0..100)，位宽 7 bit */
typedef int64_t SL_CBR_Dedicated_SL_PRS_RP_r18; /**< INTEGER (0..100)，位宽 7 bit */
typedef int64_t SL_DestinationIndex_r16; /**< INTEGER (0..31)，位宽 5 bit */
typedef int64_t SL_ConfigIndexCG_r16; /**< INTEGER (0..7)，位宽 3 bit */
typedef BitString SL_DestinationIdentity_r16; /**< BIT STRING SIZE (24)，定长 */
typedef int64_t SL_Freq_Id_r16; /**< INTEGER (1..8)，位宽 3 bit */
typedef int64_t SL_MeasId_r16; /**< INTEGER (1..64)，位宽 6 bit */
typedef int64_t SL_MeasObjectId_r16; /**< INTEGER (1..64)，位宽 6 bit */
typedef int64_t SL_PRS_TxConfigIndex_r18; /**< INTEGER (0..64)，位宽 7 bit */
typedef int64_t SL_QoS_FlowIdentity_r16; /**< INTEGER (1..2048)，位宽 11 bit */
typedef int64_t SL_ReportConfigId_r16; /**< INTEGER (1..64)，位宽 6 bit */
typedef int64_t SL_BetaOffsets_r16; /**< INTEGER (0..31)，位宽 5 bit */
typedef int64_t SL_RLC_BearerConfigIndex_r16; /**< INTEGER (1..512)，位宽 9 bit */
typedef int64_t SL_RLC_BearerConfigIndex_v1800; /**< INTEGER (513..1024)，位宽 9 bit */
typedef int64_t SL_RLC_ChannelID_r17; /**< INTEGER (1..512)，位宽 9 bit */
typedef BitString SL_SourceIdentity_r17; /**< BIT STRING SIZE (24)，定长 */
typedef int64_t SL_RSRP_Range_r16; /**< INTEGER (0..13)，位宽 4 bit */
typedef int64_t SL_Thres_RSRP_r16; /**< INTEGER (0..66)，位宽 7 bit */
typedef int64_t SLRB_Uu_ConfigIndex_r16; /**< INTEGER (1..512)，位宽 9 bit */
typedef int64_t DRX_ConfigPTM_Index_r17; /**< INTEGER (0..63)，位宽 6 bit */
typedef int64_t PDSCH_ConfigIndex_r17; /**< INTEGER (0..15)，位宽 4 bit */
typedef int64_t MTCH_SSB_MappingWindowIndex_r17; /**< INTEGER (0..15)，位宽 4 bit */


/* ---------- 顶层类型别名 ---------- */
typedef VisitedCellInfoList_r16 MobilityHistoryReport_r16; /**< ASN.1 MobilityHistoryReport-r16 ::= MobilityHistoryReport-r16 */
typedef Q_OffsetRange RangeToBestCell; /**< ASN.1 RangeToBestCell ::= RangeToBestCell */
typedef RNTI_Value AI_RNTI_r16; /**< ASN.1 AI-RNTI-r16 ::= AI-RNTI-r16 */

/**
 * @brief DRB_CountMSB_InfoList
 * @note ASN.1：DRB-CountMSB-InfoList；源文件第 229 行。
 * @note DRB-CountMSB-InfoList ::= SEQUENCE OF (size 1..29) OF DRB-CountMSB-Info
 */
struct DRB_CountMSB_InfoList {
    DRB_CountMSB_Info* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CounterCheck_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 226 行。
 * @note SEQUENCE { }
 */
struct CounterCheck_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief CounterCheck_IEs
 * @note ASN.1：CounterCheck-IEs；源文件第 223 行。
 * @note CounterCheck-IEs ::= SEQUENCE { drb-CountMSB-InfoList, lateNonCriticalExtension, nonCriticalExtens...
 */
struct CounterCheck_IEs {
    DRB_CountMSB_InfoList drb_CountMSB_InfoList; /**< ASN.1 drb-CountMSB-InfoList；SEQUENCE OF DRB_CountMSB_Info，SIZE (1..29)。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    CounterCheck_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief CounterCheck_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 219 行。
 * @note SEQUENCE { }
 */
struct CounterCheck_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief CounterCheck_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 217 行。
 * @note CHOICE { counterCheck, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CounterCheck_CriticalExtensions_Tag {
    CounterCheck_CriticalExtensions_Tag_counterCheck = 0, /**< ASN.1 counterCheck */
    CounterCheck_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} CounterCheck_CriticalExtensions_Tag;

struct CounterCheck_CriticalExtensions {
    CounterCheck_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CounterCheck_IEs counterCheck; /**< ASN.1 counterCheck */
        CounterCheck_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief CounterCheck
 * @note ASN.1：CounterCheck；源文件第 215 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_CounterCheck（包装位 2 级，入口 2 个 CHOICE）。
 * @note CounterCheck ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct CounterCheck {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    CounterCheck_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief DRB_CountMSB_Info
 * @note ASN.1：DRB-CountMSB-Info；源文件第 231 行。
 * @note DRB-CountMSB-Info ::= SEQUENCE { drb-Identity, countMSB-Uplink, countMSB-Downlink }
 */
struct DRB_CountMSB_Info {
    DRB_Identity drb_Identity; /**< ASN.1 drb-Identity；INTEGER (1..32)，位宽 5 bit。 */
    int64_t countMSB_Uplink; /**< ASN.1 countMSB-Uplink；INTEGER (0..33554431)，位宽 25 bit。 */
    int64_t countMSB_Downlink; /**< ASN.1 countMSB-Downlink；INTEGER (0..33554431)，位宽 25 bit。 */
};


/**
 * @brief DRB_CountInfoList
 * @note ASN.1：DRB-CountInfoList；源文件第 255 行。
 * @note DRB-CountInfoList ::= SEQUENCE OF (size 0..29) OF DRB-CountInfo
 */
struct DRB_CountInfoList {
    DRB_CountInfo* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CounterCheckResponse_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 251 行。
 * @note SEQUENCE { }
 */
struct CounterCheckResponse_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief CounterCheckResponse_IEs
 * @note ASN.1：CounterCheckResponse-IEs；源文件第 248 行。
 * @note CounterCheckResponse-IEs ::= SEQUENCE { drb-CountInfoList, lateNonCriticalExtension, nonCriticalExtension }
 */
struct CounterCheckResponse_IEs {
    DRB_CountInfoList drb_CountInfoList; /**< ASN.1 drb-CountInfoList；SEQUENCE OF DRB_CountInfo，SIZE (0..29)。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    CounterCheckResponse_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief CounterCheckResponse_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 244 行。
 * @note SEQUENCE { }
 */
struct CounterCheckResponse_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief CounterCheckResponse_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 242 行。
 * @note CHOICE { counterCheckResponse, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CounterCheckResponse_CriticalExtensions_Tag {
    CounterCheckResponse_CriticalExtensions_Tag_counterCheckResponse = 0, /**< ASN.1 counterCheckResponse */
    CounterCheckResponse_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} CounterCheckResponse_CriticalExtensions_Tag;

struct CounterCheckResponse_CriticalExtensions {
    CounterCheckResponse_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CounterCheckResponse_IEs counterCheckResponse; /**< ASN.1 counterCheckResponse */
        CounterCheckResponse_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief CounterCheckResponse
 * @note ASN.1：CounterCheckResponse；源文件第 240 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_CounterCheckResponse（包装位 2 级，入口 2 个 CHOICE）。
 * @note CounterCheckResponse ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct CounterCheckResponse {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    CounterCheckResponse_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief DRB_CountInfo
 * @note ASN.1：DRB-CountInfo；源文件第 257 行。
 * @note DRB-CountInfo ::= SEQUENCE { drb-Identity, count-Uplink, count-Downlink }
 */
struct DRB_CountInfo {
    DRB_Identity drb_Identity; /**< ASN.1 drb-Identity；INTEGER (1..32)，位宽 5 bit。 */
    int64_t count_Uplink; /**< ASN.1 count-Uplink；INTEGER (0..4294967295)，位宽 32 bit。 */
    int64_t count_Downlink; /**< ASN.1 count-Downlink；INTEGER (0..4294967295)，位宽 32 bit。 */
};


/**
 * @brief DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16
 * @note ASN.1：onDemandSIB-RequestList-r16；源文件第 274 行。
 * @note SEQUENCE { requestedSIB-List-r16, requestedPosSIB-List-r16 }
 */
struct DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16 {
    bool has_requestedSIB_List_r16; /**< requestedSIB-List-r16 是否存在。 */
    SIB_ReqInfo_r16* requestedSIB_List_r16_items; /**< ASN.1 requestedSIB-List-r16；SEQUENCE OF SIB_ReqInfo_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t requestedSIB_List_r16_count; /**< requestedSIB-List-r16 元素个数。 */
    bool has_requestedPosSIB_List_r16; /**< requestedPosSIB-List-r16 是否存在。 */
    PosSIB_ReqInfo_r16* requestedPosSIB_List_r16_items; /**< ASN.1 requestedPosSIB-List-r16；SEQUENCE OF PosSIB_ReqInfo_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t requestedPosSIB_List_r16_count; /**< requestedPosSIB-List-r16 元素个数。 */
};


/**
 * @brief DedicatedSIBRequest_r16_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 280 行。
 * @note SEQUENCE { }
 */
struct DedicatedSIBRequest_r16_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief DedicatedSIBRequest_r16_IEs
 * @note ASN.1：DedicatedSIBRequest-r16-IEs；源文件第 273 行。
 * @note DedicatedSIBRequest-r16-IEs ::= SEQUENCE { onDemandSIB-RequestList-r16, lateNonCriticalExtension, nonCritical...
 */
struct DedicatedSIBRequest_r16_IEs {
    bool has_onDemandSIB_RequestList_r16; /**< onDemandSIB-RequestList-r16 是否存在。 */
    DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16 onDemandSIB_RequestList_r16; /**< ASN.1 onDemandSIB-RequestList-r16；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    DedicatedSIBRequest_r16_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief DedicatedSIBRequest_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 269 行。
 * @note SEQUENCE { }
 */
struct DedicatedSIBRequest_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief DedicatedSIBRequest_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 267 行。
 * @note CHOICE { dedicatedSIBRequest-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DedicatedSIBRequest_r16_CriticalExtensions_Tag {
    DedicatedSIBRequest_r16_CriticalExtensions_Tag_dedicatedSIBRequest_r16 = 0, /**< ASN.1 dedicatedSIBRequest-r16 */
    DedicatedSIBRequest_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} DedicatedSIBRequest_r16_CriticalExtensions_Tag;

struct DedicatedSIBRequest_r16_CriticalExtensions {
    DedicatedSIBRequest_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        DedicatedSIBRequest_r16_IEs dedicatedSIBRequest_r16; /**< ASN.1 dedicatedSIBRequest-r16 */
        DedicatedSIBRequest_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief DedicatedSIBRequest_r16
 * @note ASN.1：DedicatedSIBRequest-r16；源文件第 266 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_DedicatedSIBRequest_r16（包装位 3 级，入口 3 个 CHOICE）。
 * @note DedicatedSIBRequest-r16 ::= SEQUENCE { criticalExtensions }
 */
struct DedicatedSIBRequest_r16 {
    DedicatedSIBRequest_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief GNSS_ID_r16
 * @note ASN.1：GNSS-ID-r16；源文件第 4232 行。
 * @note GNSS-ID-r16 ::= SEQUENCE { gnss-id-r16 }
 */
struct GNSS_ID_r16 {
    GNSS_ID_r16_Gnss_id_r16 gnss_id_r16; /**< ASN.1 gnss-id-r16；枚举。 */
};


/**
 * @brief SBAS_ID_r16
 * @note ASN.1：SBAS-ID-r16；源文件第 4237 行。
 * @note SBAS-ID-r16 ::= SEQUENCE { sbas-id-r16 }
 */
struct SBAS_ID_r16 {
    SBAS_ID_r16_Sbas_id_r16 sbas_id_r16; /**< ASN.1 sbas-id-r16；枚举。 */
};


/**
 * @brief PosSIB_ReqInfo_r16
 * @note ASN.1：PosSIB-ReqInfo-r16；源文件第 285 行。
 * @note PosSIB-ReqInfo-r16 ::= SEQUENCE { gnss-id-r16, sbas-id-r16, posSibType-r16 }
 */
struct PosSIB_ReqInfo_r16 {
    bool has_gnss_id_r16; /**< gnss-id-r16 是否存在。 */
    GNSS_ID_r16 gnss_id_r16; /**< ASN.1 gnss-id-r16；结构体；OPTIONAL。 */
    bool has_sbas_id_r16; /**< sbas-id-r16 是否存在。 */
    SBAS_ID_r16 sbas_id_r16; /**< ASN.1 sbas-id-r16；结构体；OPTIONAL。 */
    PosSIB_ReqInfo_r16_PosSibType_r16 posSibType_r16; /**< ASN.1 posSibType-r16；枚举。 */
};


/**
 * @brief DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 318 行。
 * @note SEQUENCE { }
 */
struct DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief DLDedicatedMessageSegment_r16_IEs
 * @note ASN.1：DLDedicatedMessageSegment-r16-IEs；源文件第 313 行。
 * @note DLDedicatedMessageSegment-r16-IEs ::= SEQUENCE { segmentNumber-r16, rrc-MessageSegmentContainer-r16, rrc-MessageSeg...
 */
struct DLDedicatedMessageSegment_r16_IEs {
    int64_t segmentNumber_r16; /**< ASN.1 segmentNumber-r16；INTEGER (0..4)，位宽 3 bit。 */
    OctetString rrc_MessageSegmentContainer_r16; /**< ASN.1 rrc-MessageSegmentContainer-r16；SIZE 无上界（半约束长度）。 */
    DLDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16 rrc_MessageSegmentType_r16; /**< ASN.1 rrc-MessageSegmentType-r16；枚举。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief DLDedicatedMessageSegment_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 309 行。
 * @note SEQUENCE { }
 */
struct DLDedicatedMessageSegment_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief DLDedicatedMessageSegment_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 307 行。
 * @note CHOICE { dlDedicatedMessageSegment-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DLDedicatedMessageSegment_r16_CriticalExtensions_Tag {
    DLDedicatedMessageSegment_r16_CriticalExtensions_Tag_dlDedicatedMessageSegment_r16 = 0, /**< ASN.1 dlDedicatedMessageSegment-r16 */
    DLDedicatedMessageSegment_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} DLDedicatedMessageSegment_r16_CriticalExtensions_Tag;

struct DLDedicatedMessageSegment_r16_CriticalExtensions {
    DLDedicatedMessageSegment_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        DLDedicatedMessageSegment_r16_IEs dlDedicatedMessageSegment_r16; /**< ASN.1 dlDedicatedMessageSegment-r16 */
        DLDedicatedMessageSegment_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief DLDedicatedMessageSegment_r16
 * @note ASN.1：DLDedicatedMessageSegment-r16；源文件第 306 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_DLDedicatedMessageSegment_r16（包装位 2 级，入口 2 个 CHOICE）。
 * @note DLDedicatedMessageSegment-r16 ::= SEQUENCE { criticalExtensions }
 */
struct DLDedicatedMessageSegment_r16 {
    DLDedicatedMessageSegment_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief ClockQualityMetrics_r18_ClockAccuracy_r18
 * @note ASN.1：clockAccuracy-r18；源文件第 5157 行。
 * @note CHOICE { value, index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ClockQualityMetrics_r18_ClockAccuracy_r18_Tag {
    ClockQualityMetrics_r18_ClockAccuracy_r18_Tag_value = 0, /**< ASN.1 value */
    ClockQualityMetrics_r18_ClockAccuracy_r18_Tag_index = 1, /**< ASN.1 index */
} ClockQualityMetrics_r18_ClockAccuracy_r18_Tag;

struct ClockQualityMetrics_r18_ClockAccuracy_r18 {
    ClockQualityMetrics_r18_ClockAccuracy_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t value; /**< ASN.1 value */
        int64_t index; /**< ASN.1 index */
    } u;
};


/**
 * @brief ClockQualityMetrics_r18
 * @note ASN.1：ClockQualityMetrics-r18；源文件第 5152 行。
 * @note ClockQualityMetrics-r18 ::= SEQUENCE { synchronisationState-r18, tracebilityToUTC-r18, tracebilityToGNSS-...
 */
struct ClockQualityMetrics_r18 {
    bool has_synchronisationState_r18; /**< synchronisationState-r18 是否存在。 */
    ClockQualityMetrics_r18_SynchronisationState_r18 synchronisationState_r18; /**< ASN.1 synchronisationState-r18；枚举；OPTIONAL。 */
    bool has_tracebilityToUTC_r18; /**< tracebilityToUTC-r18 是否存在。 */
    bool tracebilityToUTC_r18; /**< ASN.1 tracebilityToUTC-r18；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_tracebilityToGNSS_r18; /**< tracebilityToGNSS-r18 是否存在。 */
    bool tracebilityToGNSS_r18; /**< ASN.1 tracebilityToGNSS-r18；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_clockFrequencyStability_r18; /**< clockFrequencyStability-r18 是否存在。 */
    BitString clockFrequencyStability_r18; /**< ASN.1 clockFrequencyStability-r18；SIZE (16)，定长；OPTIONAL。 */
    bool has_clockAccuracy_r18; /**< clockAccuracy-r18 是否存在。 */
    ClockQualityMetrics_r18_ClockAccuracy_r18 clockAccuracy_r18; /**< ASN.1 clockAccuracy-r18；结构体；OPTIONAL。 */
    bool has_parentTimeSource_r18; /**< parentTimeSource-r18 是否存在。 */
    ClockQualityMetrics_r18_ParentTimeSource_r18 parentTimeSource_r18; /**< ASN.1 parentTimeSource-r18；枚举；OPTIONAL。 */
};


/**
 * @brief DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18
 * @note ASN.1：clockQualityDetailsLevel-r18；源文件第 353 行。
 * @note CHOICE { clockQualityMetrics-r18, clockQualityAcceptanceStatus-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag {
    DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag_clockQualityMetrics_r18 = 0, /**< ASN.1 clockQualityMetrics-r18 */
    DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag_clockQualityAcceptanceStatus_r18 = 1, /**< ASN.1 clockQualityAcceptanceStatus-r18 */
} DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag;

struct DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18 {
    DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ClockQualityMetrics_r18 clockQualityMetrics_r18; /**< ASN.1 clockQualityMetrics-r18 */
        DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_ClockQualityAcceptanceStatus_r18 clockQualityAcceptanceStatus_r18; /**< ASN.1 clockQualityAcceptanceStatus-r18 */
    } u;
};


/**
 * @brief DLInformationTransfer_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 357 行。
 * @note SEQUENCE { }
 */
struct DLInformationTransfer_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief DLInformationTransfer_v1800_IEs
 * @note ASN.1：DLInformationTransfer-v1800-IEs；源文件第 351 行。
 * @note DLInformationTransfer-v1800-IEs ::= SEQUENCE { eventID-TSS-r18, clockQualityDetailsLevel-r18, nonCriticalExtension }
 */
struct DLInformationTransfer_v1800_IEs {
    bool has_eventID_TSS_r18; /**< eventID-TSS-r18 是否存在。 */
    int64_t eventID_TSS_r18; /**< ASN.1 eventID-TSS-r18；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
    bool has_clockQualityDetailsLevel_r18; /**< clockQualityDetailsLevel-r18 是否存在。 */
    DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18 clockQualityDetailsLevel_r18; /**< ASN.1 clockQualityDetailsLevel-r18；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    DLInformationTransfer_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RxTxTimeDiff_r17
 * @note ASN.1：RxTxTimeDiff-r17；源文件第 12038 行。
 * @note RxTxTimeDiff-r17 ::= SEQUENCE { result-k5-r17 }
 */
struct RxTxTimeDiff_r17 {
    bool has_result_k5_r17; /**< result-k5-r17 是否存在。 */
    int64_t result_k5_r17; /**< ASN.1 result-k5-r17；INTEGER (0..61565)，位宽 16 bit；OPTIONAL。 */
};


/**
 * @brief DLInformationTransfer_v1700_IEs
 * @note ASN.1：DLInformationTransfer-v1700-IEs；源文件第 343 行。
 * @note DLInformationTransfer-v1700-IEs ::= SEQUENCE { dedicatedInfoF1c-r17, rxTxTimeDiff-gNB-r17, ta-PDC-r17, sib9Fallba...
 */
struct DLInformationTransfer_v1700_IEs {
    bool has_dedicatedInfoF1c_r17; /**< dedicatedInfoF1c-r17 是否存在。 */
    DedicatedInfoF1c_r17 dedicatedInfoF1c_r17; /**< ASN.1 dedicatedInfoF1c-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_rxTxTimeDiff_gNB_r17; /**< rxTxTimeDiff-gNB-r17 是否存在。 */
    RxTxTimeDiff_r17 rxTxTimeDiff_gNB_r17; /**< ASN.1 rxTxTimeDiff-gNB-r17；结构体；OPTIONAL。 */
    bool has_ta_PDC_r17; /**< ta-PDC-r17 是否存在。 */
    DLInformationTransfer_v1700_IEs_Ta_PDC_r17 ta_PDC_r17; /**< ASN.1 ta-PDC-r17；枚举；OPTIONAL。 */
    bool has_sib9Fallback_r17; /**< sib9Fallback-r17 是否存在。 */
    DLInformationTransfer_v1700_IEs_Sib9Fallback_r17 sib9Fallback_r17; /**< ASN.1 sib9Fallback-r17；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    DLInformationTransfer_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief ReferenceTime_r16
 * @note ASN.1：ReferenceTime-r16；源文件第 11187 行。
 * @note ReferenceTime-r16 ::= SEQUENCE { refDays-r16, refSeconds-r16, refMilliSeconds-r16, refTenNanoSecond...
 */
struct ReferenceTime_r16 {
    int64_t refDays_r16; /**< ASN.1 refDays-r16；INTEGER (0..72999)，位宽 17 bit。 */
    int64_t refSeconds_r16; /**< ASN.1 refSeconds-r16；INTEGER (0..86399)，位宽 17 bit。 */
    int64_t refMilliSeconds_r16; /**< ASN.1 refMilliSeconds-r16；INTEGER (0..999)，位宽 10 bit。 */
    int64_t refTenNanoSeconds_r16; /**< ASN.1 refTenNanoSeconds-r16；INTEGER (0..99999)，位宽 17 bit。 */
};


/**
 * @brief ReferenceTimeInfo_r16
 * @note ASN.1：ReferenceTimeInfo-r16；源文件第 11180 行。
 * @note ReferenceTimeInfo-r16 ::= SEQUENCE { time-r16, uncertainty-r16, timeInfoType-r16, referenceSFN-r16 }
 */
struct ReferenceTimeInfo_r16 {
    ReferenceTime_r16 time_r16; /**< ASN.1 time-r16；结构体。 */
    bool has_uncertainty_r16; /**< uncertainty-r16 是否存在。 */
    int64_t uncertainty_r16; /**< ASN.1 uncertainty-r16；INTEGER (0..32767)，位宽 15 bit；OPTIONAL。 */
    bool has_timeInfoType_r16; /**< timeInfoType-r16 是否存在。 */
    ReferenceTimeInfo_r16_TimeInfoType_r16 timeInfoType_r16; /**< ASN.1 timeInfoType-r16；枚举；OPTIONAL。 */
    bool has_referenceSFN_r16; /**< referenceSFN-r16 是否存在。 */
    int64_t referenceSFN_r16; /**< ASN.1 referenceSFN-r16；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
};


/**
 * @brief DLInformationTransfer_v1610_IEs
 * @note ASN.1：DLInformationTransfer-v1610-IEs；源文件第 338 行。
 * @note DLInformationTransfer-v1610-IEs ::= SEQUENCE { referenceTimeInfo-r16, nonCriticalExtension }
 */
struct DLInformationTransfer_v1610_IEs {
    bool has_referenceTimeInfo_r16; /**< referenceTimeInfo-r16 是否存在。 */
    ReferenceTimeInfo_r16 referenceTimeInfo_r16; /**< ASN.1 referenceTimeInfo-r16；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    DLInformationTransfer_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief DLInformationTransfer_IEs
 * @note ASN.1：DLInformationTransfer-IEs；源文件第 332 行。
 * @note DLInformationTransfer-IEs ::= SEQUENCE { dedicatedNAS-Message, lateNonCriticalExtension, nonCriticalExtensi...
 */
struct DLInformationTransfer_IEs {
    bool has_dedicatedNAS_Message; /**< dedicatedNAS-Message 是否存在。 */
    DedicatedNAS_Message dedicatedNAS_Message; /**< ASN.1 dedicatedNAS-Message；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    DLInformationTransfer_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief DLInformationTransfer_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 328 行。
 * @note SEQUENCE { }
 */
struct DLInformationTransfer_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief DLInformationTransfer_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 326 行。
 * @note CHOICE { dlInformationTransfer, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DLInformationTransfer_CriticalExtensions_Tag {
    DLInformationTransfer_CriticalExtensions_Tag_dlInformationTransfer = 0, /**< ASN.1 dlInformationTransfer */
    DLInformationTransfer_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} DLInformationTransfer_CriticalExtensions_Tag;

struct DLInformationTransfer_CriticalExtensions {
    DLInformationTransfer_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        DLInformationTransfer_IEs dlInformationTransfer; /**< ASN.1 dlInformationTransfer */
        DLInformationTransfer_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief DLInformationTransfer
 * @note ASN.1：DLInformationTransfer；源文件第 324 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_DLInformationTransfer（包装位 2 级，入口 2 个 CHOICE）。
 * @note DLInformationTransfer ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct DLInformationTransfer {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    DLInformationTransfer_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief DLInformationTransferMRDC_r16_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 377 行。
 * @note SEQUENCE { }
 */
struct DLInformationTransferMRDC_r16_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief DLInformationTransferMRDC_r16_IEs
 * @note ASN.1：DLInformationTransferMRDC-r16-IEs；源文件第 373 行。
 * @note DLInformationTransferMRDC-r16-IEs ::= SEQUENCE { dl-DCCH-MessageNR-r16, dl-DCCH-MessageEUTRA-r16, lateNonCriticalEx...
 */
struct DLInformationTransferMRDC_r16_IEs {
    bool has_dl_DCCH_MessageNR_r16; /**< dl-DCCH-MessageNR-r16 是否存在。 */
    OctetString dl_DCCH_MessageNR_r16; /**< ASN.1 dl-DCCH-MessageNR-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_dl_DCCH_MessageEUTRA_r16; /**< dl-DCCH-MessageEUTRA-r16 是否存在。 */
    OctetString dl_DCCH_MessageEUTRA_r16; /**< ASN.1 dl-DCCH-MessageEUTRA-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    DLInformationTransferMRDC_r16_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief DLInformationTransferMRDC_r16_CriticalExtensions_C1
 * @note ASN.1：criticalExtensions/c1；源文件第 365 行。
 * @note CHOICE { dlInformationTransferMRDC-r16, spare3, spare2, spare1 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag {
    DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_dlInformationTransferMRDC_r16 = 0, /**< ASN.1 dlInformationTransferMRDC-r16 */
    DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare3 = 1, /**< ASN.1 spare3 */
    DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare2 = 2, /**< ASN.1 spare2 */
    DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare1 = 3, /**< ASN.1 spare1 */
} DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag;

struct DLInformationTransferMRDC_r16_CriticalExtensions_C1 {
    DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        DLInformationTransferMRDC_r16_IEs dlInformationTransferMRDC_r16; /**< ASN.1 dlInformationTransferMRDC-r16 */
        Null spare3; /**< ASN.1 spare3 */
        Null spare2; /**< ASN.1 spare2 */
        Null spare1; /**< ASN.1 spare1 */
    } u;
};


/**
 * @brief DLInformationTransferMRDC_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 369 行。
 * @note SEQUENCE { }
 */
struct DLInformationTransferMRDC_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief DLInformationTransferMRDC_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 364 行。
 * @note CHOICE { c1, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DLInformationTransferMRDC_r16_CriticalExtensions_Tag {
    DLInformationTransferMRDC_r16_CriticalExtensions_Tag_c1 = 0, /**< ASN.1 c1 */
    DLInformationTransferMRDC_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} DLInformationTransferMRDC_r16_CriticalExtensions_Tag;

struct DLInformationTransferMRDC_r16_CriticalExtensions {
    DLInformationTransferMRDC_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        DLInformationTransferMRDC_r16_CriticalExtensions_C1 c1; /**< ASN.1 c1 */
        DLInformationTransferMRDC_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief DLInformationTransferMRDC_r16
 * @note ASN.1：DLInformationTransferMRDC-r16；源文件第 363 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_DLInformationTransferMRDC_r16（包装位 2 级，入口 2 个 CHOICE）。
 * @note DLInformationTransferMRDC-r16 ::= SEQUENCE { criticalExtensions }
 */
struct DLInformationTransferMRDC_r16 {
    DLInformationTransferMRDC_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief FailureInfoRLC_Bearer
 * @note ASN.1：FailureInfoRLC-Bearer；源文件第 397 行。
 * @note FailureInfoRLC-Bearer ::= SEQUENCE { cellGroupId, logicalChannelIdentity, failureType }
 */
struct FailureInfoRLC_Bearer {
    CellGroupId cellGroupId; /**< ASN.1 cellGroupId；INTEGER (0..3)，位宽 2 bit。 */
    LogicalChannelIdentity logicalChannelIdentity; /**< ASN.1 logicalChannelIdentity；INTEGER (1..32)，位宽 5 bit。 */
    FailureInfoRLC_Bearer_FailureType failureType; /**< ASN.1 failureType；枚举。 */
};


/**
 * @brief FailureInfoDAPS_r16
 * @note ASN.1：FailureInfoDAPS-r16；源文件第 408 行。
 * @note FailureInfoDAPS-r16 ::= SEQUENCE { failureType-r16 }
 */
struct FailureInfoDAPS_r16 {
    FailureInfoDAPS_r16_FailureType_r16 failureType_r16; /**< ASN.1 failureType-r16；枚举。 */
};


/**
 * @brief FailureInformation_v1610_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 405 行。
 * @note SEQUENCE { }
 */
struct FailureInformation_v1610_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief FailureInformation_v1610_IEs
 * @note ASN.1：FailureInformation-v1610-IEs；源文件第 403 行。
 * @note FailureInformation-v1610-IEs ::= SEQUENCE { failureInfoDAPS-r16, nonCriticalExtension }
 */
struct FailureInformation_v1610_IEs {
    bool has_failureInfoDAPS_r16; /**< failureInfoDAPS-r16 是否存在。 */
    FailureInfoDAPS_r16 failureInfoDAPS_r16; /**< ASN.1 failureInfoDAPS-r16；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    FailureInformation_v1610_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief FailureInformation_IEs
 * @note ASN.1：FailureInformation-IEs；源文件第 391 行。
 * @note FailureInformation-IEs ::= SEQUENCE { failureInfoRLC-Bearer, lateNonCriticalExtension, nonCriticalExtens...
 */
struct FailureInformation_IEs {
    bool has_failureInfoRLC_Bearer; /**< failureInfoRLC-Bearer 是否存在。 */
    FailureInfoRLC_Bearer failureInfoRLC_Bearer; /**< ASN.1 failureInfoRLC-Bearer；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    FailureInformation_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief FailureInformation_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 387 行。
 * @note SEQUENCE { }
 */
struct FailureInformation_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief FailureInformation_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 385 行。
 * @note CHOICE { failureInformation, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum FailureInformation_CriticalExtensions_Tag {
    FailureInformation_CriticalExtensions_Tag_failureInformation = 0, /**< ASN.1 failureInformation */
    FailureInformation_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} FailureInformation_CriticalExtensions_Tag;

struct FailureInformation_CriticalExtensions {
    FailureInformation_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        FailureInformation_IEs failureInformation; /**< ASN.1 failureInformation */
        FailureInformation_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief FailureInformation
 * @note ASN.1：FailureInformation；源文件第 384 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_FailureInformation（包装位 2 级，入口 2 个 CHOICE）。
 * @note FailureInformation ::= SEQUENCE { criticalExtensions }
 */
struct FailureInformation {
    FailureInformation_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief IAB_IP_AddressNumReq_r16
 * @note ASN.1：IAB-IP-AddressNumReq-r16；源文件第 447 行。
 * @note IAB-IP-AddressNumReq-r16 ::= SEQUENCE { all-Traffic-NumReq-r16, f1-C-Traffic-NumReq-r16, f1-U-Traffic-NumR...
 */
struct IAB_IP_AddressNumReq_r16 {
    bool has_all_Traffic_NumReq_r16; /**< all-Traffic-NumReq-r16 是否存在。 */
    int64_t all_Traffic_NumReq_r16; /**< ASN.1 all-Traffic-NumReq-r16；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_f1_C_Traffic_NumReq_r16; /**< f1-C-Traffic-NumReq-r16 是否存在。 */
    int64_t f1_C_Traffic_NumReq_r16; /**< ASN.1 f1-C-Traffic-NumReq-r16；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_f1_U_Traffic_NumReq_r16; /**< f1-U-Traffic-NumReq-r16 是否存在。 */
    int64_t f1_U_Traffic_NumReq_r16; /**< ASN.1 f1-U-Traffic-NumReq-r16；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_non_F1_Traffic_NumReq_r16; /**< non-F1-Traffic-NumReq-r16 是否存在。 */
    int64_t non_F1_Traffic_NumReq_r16; /**< ASN.1 non-F1-Traffic-NumReq-r16；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief IAB_IP_AddressPrefixReq_r16
 * @note ASN.1：IAB-IP-AddressPrefixReq-r16；源文件第 455 行。
 * @note IAB-IP-AddressPrefixReq-r16 ::= SEQUENCE { all-Traffic-PrefixReq-r16, f1-C-Traffic-PrefixReq-r16, f1-U-Traffi...
 */
struct IAB_IP_AddressPrefixReq_r16 {
    bool has_all_Traffic_PrefixReq_r16; /**< all-Traffic-PrefixReq-r16 是否存在。 */
    IAB_IP_AddressPrefixReq_r16_All_Traffic_PrefixReq_r16 all_Traffic_PrefixReq_r16; /**< ASN.1 all-Traffic-PrefixReq-r16；枚举；OPTIONAL。 */
    bool has_f1_C_Traffic_PrefixReq_r16; /**< f1-C-Traffic-PrefixReq-r16 是否存在。 */
    IAB_IP_AddressPrefixReq_r16_F1_C_Traffic_PrefixReq_r16 f1_C_Traffic_PrefixReq_r16; /**< ASN.1 f1-C-Traffic-PrefixReq-r16；枚举；OPTIONAL。 */
    bool has_f1_U_Traffic_PrefixReq_r16; /**< f1-U-Traffic-PrefixReq-r16 是否存在。 */
    IAB_IP_AddressPrefixReq_r16_F1_U_Traffic_PrefixReq_r16 f1_U_Traffic_PrefixReq_r16; /**< ASN.1 f1-U-Traffic-PrefixReq-r16；枚举；OPTIONAL。 */
    bool has_non_F1_Traffic_PrefixReq_r16; /**< non-F1-Traffic-PrefixReq-r16 是否存在。 */
    IAB_IP_AddressPrefixReq_r16_Non_F1_Traffic_PrefixReq_r16 non_F1_Traffic_PrefixReq_r16; /**< ASN.1 non-F1-Traffic-PrefixReq-r16；枚举；OPTIONAL。 */
};


/**
 * @brief IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16
 * @note ASN.1：ip-InfoType-r16/iab-IP-Request-r16/iab-IPv6-AddressReq-r16；源文件第 427 行。
 * @note CHOICE { iab-IPv6-AddressNumReq-r16, iab-IPv6-AddressPrefixReq-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag {
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag_iab_IPv6_AddressNumReq_r16 = 0, /**< ASN.1 iab-IPv6-AddressNumReq-r16 */
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag_iab_IPv6_AddressPrefixReq_r16 = 1, /**< ASN.1 iab-IPv6-AddressPrefixReq-r16 */
} IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag;

struct IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16 {
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        IAB_IP_AddressNumReq_r16 iab_IPv6_AddressNumReq_r16; /**< ASN.1 iab-IPv6-AddressNumReq-r16 */
        IAB_IP_AddressPrefixReq_r16 iab_IPv6_AddressPrefixReq_r16; /**< ASN.1 iab-IPv6-AddressPrefixReq-r16 */
    } u;
};


/**
 * @brief IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16
 * @note ASN.1：ip-InfoType-r16/iab-IP-Request-r16；源文件第 425 行。
 * @note SEQUENCE { iab-IPv4-AddressNumReq-r16, iab-IPv6-AddressReq-r16 }
 */
struct IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16 {
    bool has_iab_IPv4_AddressNumReq_r16; /**< iab-IPv4-AddressNumReq-r16 是否存在。 */
    IAB_IP_AddressNumReq_r16 iab_IPv4_AddressNumReq_r16; /**< ASN.1 iab-IPv4-AddressNumReq-r16；结构体；OPTIONAL。 */
    bool has_iab_IPv6_AddressReq_r16; /**< iab-IPv6-AddressReq-r16 是否存在。 */
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16 iab_IPv6_AddressReq_r16; /**< ASN.1 iab-IPv6-AddressReq-r16；结构体；OPTIONAL。 */
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART011_H */
