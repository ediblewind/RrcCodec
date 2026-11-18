/* ============================================================================
 * types/rrc_types_part004.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART004_H
#define RRC_CODEC_TYPES_PART004_H

#include "rrc_types_part000.h"
#include "rrc_types_part001.h"
#include "rrc_types_part002.h"
#include "rrc_types_part003.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 枚举 MCCH_Config_r17_Mcch_ModificationPeriod_r17（ASN.1 mcch-ModificationPeriod-r17，源文件第 4012 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MCCH_Config_r17_Mcch_ModificationPeriod_r17 {
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf2 = 0, /**< ASN.1 rf2 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf4 = 1, /**< ASN.1 rf4 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf8 = 2, /**< ASN.1 rf8 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf16 = 3, /**< ASN.1 rf16 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf32 = 4, /**< ASN.1 rf32 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf64 = 5, /**< ASN.1 rf64 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf128 = 6, /**< ASN.1 rf128 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf256 = 7, /**< ASN.1 rf256 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf512 = 8, /**< ASN.1 rf512 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf1024 = 9, /**< ASN.1 rf1024 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf2048 = 10, /**< ASN.1 rf2048 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf4096 = 11, /**< ASN.1 rf4096 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf8192 = 12, /**< ASN.1 rf8192 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf16384 = 13, /**< ASN.1 rf16384 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf32768 = 14, /**< ASN.1 rf32768 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17_rf65536 = 15, /**< ASN.1 rf65536 */
} MCCH_Config_r17_Mcch_ModificationPeriod_r17;


/**
 * @brief 枚举 SIB22_r18_Hs_ATG_cellReselectionSet_r18（ASN.1 hs-ATG-cellReselectionSet-r18，源文件第 4054 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB22_r18_Hs_ATG_cellReselectionSet_r18 {
    SIB22_r18_Hs_ATG_cellReselectionSet_r18_trueVal = 0, /**< ASN.1 trueVal */
} SIB22_r18_Hs_ATG_cellReselectionSet_r18;


/**
 * @brief 枚举 SIB23_r18_SegmentType_r18（ASN.1 segmentType-r18，源文件第 4075 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB23_r18_SegmentType_r18 {
    SIB23_r18_SegmentType_r18_notLastSegment = 0, /**< ASN.1 notLastSegment */
    SIB23_r18_SegmentType_r18_lastSegment = 1, /**< ASN.1 lastSegment */
} SIB23_r18_SegmentType_r18;


/**
 * @brief 枚举 PosSchedulingInfo_r16_OffsetToSI_Used_r16（ASN.1 offsetToSI-Used-r16，源文件第 4209 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSchedulingInfo_r16_OffsetToSI_Used_r16 {
    PosSchedulingInfo_r16_OffsetToSI_Used_r16_trueVal = 0, /**< ASN.1 trueVal */
} PosSchedulingInfo_r16_OffsetToSI_Used_r16;


/**
 * @brief 枚举 PosSchedulingInfo_r16_PosSI_Periodicity_r16（ASN.1 posSI-Periodicity-r16，源文件第 4210 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSchedulingInfo_r16_PosSI_Periodicity_r16 {
    PosSchedulingInfo_r16_PosSI_Periodicity_r16_rf8 = 0, /**< ASN.1 rf8 */
    PosSchedulingInfo_r16_PosSI_Periodicity_r16_rf16 = 1, /**< ASN.1 rf16 */
    PosSchedulingInfo_r16_PosSI_Periodicity_r16_rf32 = 2, /**< ASN.1 rf32 */
    PosSchedulingInfo_r16_PosSI_Periodicity_r16_rf64 = 3, /**< ASN.1 rf64 */
    PosSchedulingInfo_r16_PosSI_Periodicity_r16_rf128 = 4, /**< ASN.1 rf128 */
    PosSchedulingInfo_r16_PosSI_Periodicity_r16_rf256 = 5, /**< ASN.1 rf256 */
    PosSchedulingInfo_r16_PosSI_Periodicity_r16_rf512 = 6, /**< ASN.1 rf512 */
} PosSchedulingInfo_r16_PosSI_Periodicity_r16;


/**
 * @brief 枚举 PosSchedulingInfo_r16_PosSI_BroadcastStatus_r16（ASN.1 posSI-BroadcastStatus-r16，源文件第 4211 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSchedulingInfo_r16_PosSI_BroadcastStatus_r16 {
    PosSchedulingInfo_r16_PosSI_BroadcastStatus_r16_broadcasting = 0, /**< ASN.1 broadcasting */
    PosSchedulingInfo_r16_PosSI_BroadcastStatus_r16_notBroadcasting = 1, /**< ASN.1 notBroadcasting */
} PosSchedulingInfo_r16_PosSI_BroadcastStatus_r16;


/**
 * @brief 枚举 PosSIB_Type_r16_Encrypted_r16（ASN.1 encrypted-r16，源文件第 4219 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSIB_Type_r16_Encrypted_r16 {
    PosSIB_Type_r16_Encrypted_r16_trueVal = 0, /**< ASN.1 trueVal */
} PosSIB_Type_r16_Encrypted_r16;


/**
 * @brief 枚举 PosSIB_Type_r16_PosSibType_r16（ASN.1 posSibType-r16，源文件第 4222 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t PosSIB_Type_r16_PosSibType_r16;
#define PosSIB_Type_r16_PosSibType_r16_posSibType1_1 0 /**< ASN.1 posSibType1-1 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType1_2 1 /**< ASN.1 posSibType1-2 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType1_3 2 /**< ASN.1 posSibType1-3 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType1_4 3 /**< ASN.1 posSibType1-4 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType1_5 4 /**< ASN.1 posSibType1-5 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType1_6 5 /**< ASN.1 posSibType1-6 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType1_7 6 /**< ASN.1 posSibType1-7 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType1_8 7 /**< ASN.1 posSibType1-8 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_1 8 /**< ASN.1 posSibType2-1 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_2 9 /**< ASN.1 posSibType2-2 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_3 10 /**< ASN.1 posSibType2-3 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_4 11 /**< ASN.1 posSibType2-4 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_5 12 /**< ASN.1 posSibType2-5 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_6 13 /**< ASN.1 posSibType2-6 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_7 14 /**< ASN.1 posSibType2-7 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_8 15 /**< ASN.1 posSibType2-8 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_9 16 /**< ASN.1 posSibType2-9 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_10 17 /**< ASN.1 posSibType2-10 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_11 18 /**< ASN.1 posSibType2-11 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_12 19 /**< ASN.1 posSibType2-12 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_13 20 /**< ASN.1 posSibType2-13 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_14 21 /**< ASN.1 posSibType2-14 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_15 22 /**< ASN.1 posSibType2-15 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_16 23 /**< ASN.1 posSibType2-16 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_17 24 /**< ASN.1 posSibType2-17 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_18 25 /**< ASN.1 posSibType2-18 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_19 26 /**< ASN.1 posSibType2-19 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_20 27 /**< ASN.1 posSibType2-20 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_21 28 /**< ASN.1 posSibType2-21 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_22 29 /**< ASN.1 posSibType2-22 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType2_23 30 /**< ASN.1 posSibType2-23 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType3_1 31 /**< ASN.1 posSibType3-1 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType4_1 32 /**< ASN.1 posSibType4-1 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType5_1 33 /**< ASN.1 posSibType5-1 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType6_1 34 /**< ASN.1 posSibType6-1 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType6_2 35 /**< ASN.1 posSibType6-2 */
#define PosSIB_Type_r16_PosSibType_r16_posSibType6_3 36 /**< ASN.1 posSibType6-3 */


/**
 * @brief 枚举 PosSIB_Type_r16_AreaScope_r16（ASN.1 areaScope-r16，源文件第 4229 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSIB_Type_r16_AreaScope_r16 {
    PosSIB_Type_r16_AreaScope_r16_trueVal = 0, /**< ASN.1 trueVal */
} PosSIB_Type_r16_AreaScope_r16;


/**
 * @brief 枚举 GNSS_ID_r16_Gnss_id_r16（ASN.1 gnss-id-r16，源文件第 4233 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t GNSS_ID_r16_Gnss_id_r16;
#define GNSS_ID_r16_Gnss_id_r16_gps 0 /**< ASN.1 gps */
#define GNSS_ID_r16_Gnss_id_r16_sbas 1 /**< ASN.1 sbas */
#define GNSS_ID_r16_Gnss_id_r16_qzss 2 /**< ASN.1 qzss */
#define GNSS_ID_r16_Gnss_id_r16_galileo 3 /**< ASN.1 galileo */
#define GNSS_ID_r16_Gnss_id_r16_glonass 4 /**< ASN.1 glonass */
#define GNSS_ID_r16_Gnss_id_r16_bds 5 /**< ASN.1 bds */
#define GNSS_ID_r16_Gnss_id_r16_navic_v1760 6 /**< ASN.1 navic-v1760（扩展添加项） */


/**
 * @brief 枚举 SBAS_ID_r16_Sbas_id_r16（ASN.1 sbas-id-r16，源文件第 4238 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t SBAS_ID_r16_Sbas_id_r16;
#define SBAS_ID_r16_Sbas_id_r16_waas 0 /**< ASN.1 waas */
#define SBAS_ID_r16_Sbas_id_r16_egnos 1 /**< ASN.1 egnos */
#define SBAS_ID_r16_Sbas_id_r16_msas 2 /**< ASN.1 msas */
#define SBAS_ID_r16_Sbas_id_r16_gagan 3 /**< ASN.1 gagan */


/**
 * @brief 枚举 AdvancedReceiver_MU_MIMO_r18_Mcs_Table_r18（ASN.1 mcs-Table-r18，源文件第 4267 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AdvancedReceiver_MU_MIMO_r18_Mcs_Table_r18 {
    AdvancedReceiver_MU_MIMO_r18_Mcs_Table_r18_qam1024 = 0, /**< ASN.1 qam1024 */
    AdvancedReceiver_MU_MIMO_r18_Mcs_Table_r18_qam256 = 1, /**< ASN.1 qam256 */
    AdvancedReceiver_MU_MIMO_r18_Mcs_Table_r18_qam64 = 2, /**< ASN.1 qam64 */
    AdvancedReceiver_MU_MIMO_r18_Mcs_Table_r18_spare1 = 3, /**< ASN.1 spare1 */
} AdvancedReceiver_MU_MIMO_r18_Mcs_Table_r18;


/**
 * @brief 枚举 AdvancedReceiver_MU_MIMO_r18_AdvReceiver_MU_MIMO_DCI_1_1_r18（ASN.1 advReceiver-MU-MIMO-DCI-1-1-r18，源文件第 4268 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AdvancedReceiver_MU_MIMO_r18_AdvReceiver_MU_MIMO_DCI_1_1_r18 {
    AdvancedReceiver_MU_MIMO_r18_AdvReceiver_MU_MIMO_DCI_1_1_r18_enabled = 0, /**< ASN.1 enabled */
} AdvancedReceiver_MU_MIMO_r18_AdvReceiver_MU_MIMO_DCI_1_1_r18;


/**
 * @brief 枚举 ATG_Config_r18_Ta_ReportATG_r18（ASN.1 ta-ReportATG-r18，源文件第 4324 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ATG_Config_r18_Ta_ReportATG_r18 {
    ATG_Config_r18_Ta_ReportATG_r18_enabled = 0, /**< ASN.1 enabled */
} ATG_Config_r18_Ta_ReportATG_r18;


/**
 * @brief 枚举 BeamFailureRecoveryConfig_Ssb_perRACH_Occasion（ASN.1 ssb-perRACH-Occasion，源文件第 4393 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamFailureRecoveryConfig_Ssb_perRACH_Occasion {
    BeamFailureRecoveryConfig_Ssb_perRACH_Occasion_oneEighth = 0, /**< ASN.1 oneEighth */
    BeamFailureRecoveryConfig_Ssb_perRACH_Occasion_oneFourth = 1, /**< ASN.1 oneFourth */
    BeamFailureRecoveryConfig_Ssb_perRACH_Occasion_oneHalf = 2, /**< ASN.1 oneHalf */
    BeamFailureRecoveryConfig_Ssb_perRACH_Occasion_one = 3, /**< ASN.1 one */
    BeamFailureRecoveryConfig_Ssb_perRACH_Occasion_two = 4, /**< ASN.1 two */
    BeamFailureRecoveryConfig_Ssb_perRACH_Occasion_four = 5, /**< ASN.1 four */
    BeamFailureRecoveryConfig_Ssb_perRACH_Occasion_eight = 6, /**< ASN.1 eight */
    BeamFailureRecoveryConfig_Ssb_perRACH_Occasion_sixteen = 7, /**< ASN.1 sixteen */
} BeamFailureRecoveryConfig_Ssb_perRACH_Occasion;


/**
 * @brief 枚举 BeamFailureRecoveryConfig_BeamFailureRecoveryTimer（ASN.1 beamFailureRecoveryTimer，源文件第 4398 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamFailureRecoveryConfig_BeamFailureRecoveryTimer {
    BeamFailureRecoveryConfig_BeamFailureRecoveryTimer_ms10 = 0, /**< ASN.1 ms10 */
    BeamFailureRecoveryConfig_BeamFailureRecoveryTimer_ms20 = 1, /**< ASN.1 ms20 */
    BeamFailureRecoveryConfig_BeamFailureRecoveryTimer_ms40 = 2, /**< ASN.1 ms40 */
    BeamFailureRecoveryConfig_BeamFailureRecoveryTimer_ms60 = 3, /**< ASN.1 ms60 */
    BeamFailureRecoveryConfig_BeamFailureRecoveryTimer_ms80 = 4, /**< ASN.1 ms80 */
    BeamFailureRecoveryConfig_BeamFailureRecoveryTimer_ms100 = 5, /**< ASN.1 ms100 */
    BeamFailureRecoveryConfig_BeamFailureRecoveryTimer_ms150 = 6, /**< ASN.1 ms150 */
    BeamFailureRecoveryConfig_BeamFailureRecoveryTimer_ms200 = 7, /**< ASN.1 ms200 */
} BeamFailureRecoveryConfig_BeamFailureRecoveryTimer;


/**
 * @brief 枚举 BeamFailureRecoveryConfig_ExtGroup3_SpCell_BFR_CBRA_r16（ASN.1 spCell-BFR-CBRA-r16，源文件第 4408 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamFailureRecoveryConfig_ExtGroup3_SpCell_BFR_CBRA_r16 {
    BeamFailureRecoveryConfig_ExtGroup3_SpCell_BFR_CBRA_r16_trueVal = 0, /**< ASN.1 trueVal */
} BeamFailureRecoveryConfig_ExtGroup3_SpCell_BFR_CBRA_r16;


/**
 * @brief 枚举 BH_RLC_ChannelConfig_r16_ReestablishRLC_r16（ASN.1 reestablishRLC-r16，源文件第 4481 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BH_RLC_ChannelConfig_r16_ReestablishRLC_r16 {
    BH_RLC_ChannelConfig_r16_ReestablishRLC_r16_trueVal = 0, /**< ASN.1 trueVal */
} BH_RLC_ChannelConfig_r16_ReestablishRLC_r16;


/**
 * @brief 枚举 BSR_Config_PeriodicBSR_Timer（ASN.1 periodicBSR-Timer，源文件第 4496 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BSR_Config_PeriodicBSR_Timer {
    BSR_Config_PeriodicBSR_Timer_sf1 = 0, /**< ASN.1 sf1 */
    BSR_Config_PeriodicBSR_Timer_sf5 = 1, /**< ASN.1 sf5 */
    BSR_Config_PeriodicBSR_Timer_sf10 = 2, /**< ASN.1 sf10 */
    BSR_Config_PeriodicBSR_Timer_sf16 = 3, /**< ASN.1 sf16 */
    BSR_Config_PeriodicBSR_Timer_sf20 = 4, /**< ASN.1 sf20 */
    BSR_Config_PeriodicBSR_Timer_sf32 = 5, /**< ASN.1 sf32 */
    BSR_Config_PeriodicBSR_Timer_sf40 = 6, /**< ASN.1 sf40 */
    BSR_Config_PeriodicBSR_Timer_sf64 = 7, /**< ASN.1 sf64 */
    BSR_Config_PeriodicBSR_Timer_sf80 = 8, /**< ASN.1 sf80 */
    BSR_Config_PeriodicBSR_Timer_sf128 = 9, /**< ASN.1 sf128 */
    BSR_Config_PeriodicBSR_Timer_sf160 = 10, /**< ASN.1 sf160 */
    BSR_Config_PeriodicBSR_Timer_sf320 = 11, /**< ASN.1 sf320 */
    BSR_Config_PeriodicBSR_Timer_sf640 = 12, /**< ASN.1 sf640 */
    BSR_Config_PeriodicBSR_Timer_sf1280 = 13, /**< ASN.1 sf1280 */
    BSR_Config_PeriodicBSR_Timer_sf2560 = 14, /**< ASN.1 sf2560 */
    BSR_Config_PeriodicBSR_Timer_infinity = 15, /**< ASN.1 infinity */
} BSR_Config_PeriodicBSR_Timer;


/**
 * @brief 枚举 BSR_Config_RetxBSR_Timer（ASN.1 retxBSR-Timer，源文件第 4498 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BSR_Config_RetxBSR_Timer {
    BSR_Config_RetxBSR_Timer_sf10 = 0, /**< ASN.1 sf10 */
    BSR_Config_RetxBSR_Timer_sf20 = 1, /**< ASN.1 sf20 */
    BSR_Config_RetxBSR_Timer_sf40 = 2, /**< ASN.1 sf40 */
    BSR_Config_RetxBSR_Timer_sf80 = 3, /**< ASN.1 sf80 */
    BSR_Config_RetxBSR_Timer_sf160 = 4, /**< ASN.1 sf160 */
    BSR_Config_RetxBSR_Timer_sf320 = 5, /**< ASN.1 sf320 */
    BSR_Config_RetxBSR_Timer_sf640 = 6, /**< ASN.1 sf640 */
    BSR_Config_RetxBSR_Timer_sf1280 = 7, /**< ASN.1 sf1280 */
    BSR_Config_RetxBSR_Timer_sf2560 = 8, /**< ASN.1 sf2560 */
    BSR_Config_RetxBSR_Timer_sf5120 = 9, /**< ASN.1 sf5120 */
    BSR_Config_RetxBSR_Timer_sf10240 = 10, /**< ASN.1 sf10240 */
    BSR_Config_RetxBSR_Timer_spare5 = 11, /**< ASN.1 spare5 */
    BSR_Config_RetxBSR_Timer_spare4 = 12, /**< ASN.1 spare4 */
    BSR_Config_RetxBSR_Timer_spare3 = 13, /**< ASN.1 spare3 */
    BSR_Config_RetxBSR_Timer_spare2 = 14, /**< ASN.1 spare2 */
    BSR_Config_RetxBSR_Timer_spare1 = 15, /**< ASN.1 spare1 */
} BSR_Config_RetxBSR_Timer;


/**
 * @brief 枚举 BSR_Config_LogicalChannelSR_DelayTimer（ASN.1 logicalChannelSR-DelayTimer，源文件第 4500 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BSR_Config_LogicalChannelSR_DelayTimer {
    BSR_Config_LogicalChannelSR_DelayTimer_sf20 = 0, /**< ASN.1 sf20 */
    BSR_Config_LogicalChannelSR_DelayTimer_sf40 = 1, /**< ASN.1 sf40 */
    BSR_Config_LogicalChannelSR_DelayTimer_sf64 = 2, /**< ASN.1 sf64 */
    BSR_Config_LogicalChannelSR_DelayTimer_sf128 = 3, /**< ASN.1 sf128 */
    BSR_Config_LogicalChannelSR_DelayTimer_sf512 = 4, /**< ASN.1 sf512 */
    BSR_Config_LogicalChannelSR_DelayTimer_sf1024 = 5, /**< ASN.1 sf1024 */
    BSR_Config_LogicalChannelSR_DelayTimer_sf2560 = 6, /**< ASN.1 sf2560 */
    BSR_Config_LogicalChannelSR_DelayTimer_spare1 = 7, /**< ASN.1 spare1 */
} BSR_Config_LogicalChannelSR_DelayTimer;


/**
 * @brief 枚举 BWP_CyclicPrefix（ASN.1 cyclicPrefix，源文件第 4510 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BWP_CyclicPrefix {
    BWP_CyclicPrefix_extended = 0, /**< ASN.1 extended */
} BWP_CyclicPrefix;


/**
 * @brief 枚举 TCI_inDCI_r18_Tci_SelectionPresentInDCI_r18（ASN.1 tci-SelectionPresentInDCI-r18，源文件第 4578 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TCI_inDCI_r18_Tci_SelectionPresentInDCI_r18 {
    TCI_inDCI_r18_Tci_SelectionPresentInDCI_r18_enabled = 0, /**< ASN.1 enabled */
} TCI_inDCI_r18_Tci_SelectionPresentInDCI_r18;


/**
 * @brief 枚举 TCI_inDCI_r18_ApplyIndicatedTCI_StateDCI_1_0_r18（ASN.1 applyIndicatedTCI-StateDCI-1-0-r18，源文件第 4579 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TCI_inDCI_r18_ApplyIndicatedTCI_StateDCI_1_0_r18 {
    TCI_inDCI_r18_ApplyIndicatedTCI_StateDCI_1_0_r18_first = 0, /**< ASN.1 first */
    TCI_inDCI_r18_ApplyIndicatedTCI_StateDCI_1_0_r18_second = 1, /**< ASN.1 second */
    TCI_inDCI_r18_ApplyIndicatedTCI_StateDCI_1_0_r18_both = 2, /**< ASN.1 both */
} TCI_inDCI_r18_ApplyIndicatedTCI_StateDCI_1_0_r18;


/**
 * @brief 枚举 BWP_UplinkCommon_ExtGroup1_UseInterlacePUCCH_PUSCH_r16（ASN.1 useInterlacePUCCH-PUSCH-r16，源文件第 4608 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BWP_UplinkCommon_ExtGroup1_UseInterlacePUCCH_PUSCH_r16 {
    BWP_UplinkCommon_ExtGroup1_UseInterlacePUCCH_PUSCH_r16_enabled = 0, /**< ASN.1 enabled */
} BWP_UplinkCommon_ExtGroup1_UseInterlacePUCCH_PUSCH_r16;


/**
 * @brief 枚举 BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18（ASN.1 preambleTransMax-Msg1-Repetition-r18，源文件第 4626 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18 {
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18_n1 = 0, /**< ASN.1 n1 */
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18_n2 = 1, /**< ASN.1 n2 */
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18_n4 = 2, /**< ASN.1 n4 */
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18_n6 = 3, /**< ASN.1 n6 */
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18_n8 = 4, /**< ASN.1 n8 */
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18_n10 = 5, /**< ASN.1 n10 */
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18_n20 = 6, /**< ASN.1 n20 */
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18_n50 = 7, /**< ASN.1 n50 */
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18_n100 = 8, /**< ASN.1 n100 */
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18_n200 = 9, /**< ASN.1 n200 */
} BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18;


/**
 * @brief 枚举 BWP_UplinkDedicated_ExtGroup1_UseInterlacePUCCH_PUSCH_r16（ASN.1 useInterlacePUCCH-PUSCH-r16，源文件第 4654 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BWP_UplinkDedicated_ExtGroup1_UseInterlacePUCCH_PUSCH_r16 {
    BWP_UplinkDedicated_ExtGroup1_UseInterlacePUCCH_PUSCH_r16_enabled = 0, /**< ASN.1 enabled */
} BWP_UplinkDedicated_ExtGroup1_UseInterlacePUCCH_PUSCH_r16;


/**
 * @brief 枚举 LTM_QCL_Info_r18_Qcl_Type_r18（ASN.1 qcl-Type-r18，源文件第 4722 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTM_QCL_Info_r18_Qcl_Type_r18 {
    LTM_QCL_Info_r18_Qcl_Type_r18_typeA = 0, /**< ASN.1 typeA */
    LTM_QCL_Info_r18_Qcl_Type_r18_typeB = 1, /**< ASN.1 typeB */
    LTM_QCL_Info_r18_Qcl_Type_r18_typeC = 2, /**< ASN.1 typeC */
    LTM_QCL_Info_r18_Qcl_Type_r18_typeD = 3, /**< ASN.1 typeD */
} LTM_QCL_Info_r18_Qcl_Type_r18;


/**
 * @brief 枚举 CellAccessRelatedInfo_CellReservedForOtherUse（ASN.1 cellReservedForOtherUse，源文件第 4744 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellAccessRelatedInfo_CellReservedForOtherUse {
    CellAccessRelatedInfo_CellReservedForOtherUse_trueVal = 0, /**< ASN.1 trueVal */
} CellAccessRelatedInfo_CellReservedForOtherUse;


/**
 * @brief 枚举 CellAccessRelatedInfo_ExtGroup1_CellReservedForFutureUse_r16（ASN.1 cellReservedForFutureUse-r16，源文件第 4747 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellAccessRelatedInfo_ExtGroup1_CellReservedForFutureUse_r16 {
    CellAccessRelatedInfo_ExtGroup1_CellReservedForFutureUse_r16_trueVal = 0, /**< ASN.1 trueVal */
} CellAccessRelatedInfo_ExtGroup1_CellReservedForFutureUse_r16;


/**
 * @brief 枚举 SNPN_AccessInfo_r17_ExtCH_Supported_r17（ASN.1 extCH-Supported-r17，源文件第 4756 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SNPN_AccessInfo_r17_ExtCH_Supported_r17 {
    SNPN_AccessInfo_r17_ExtCH_Supported_r17_trueVal = 0, /**< ASN.1 trueVal */
} SNPN_AccessInfo_r17_ExtCH_Supported_r17;


/**
 * @brief 枚举 SNPN_AccessInfo_r17_ExtCH_WithoutConfigAllowed_r17（ASN.1 extCH-WithoutConfigAllowed-r17，源文件第 4757 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SNPN_AccessInfo_r17_ExtCH_WithoutConfigAllowed_r17 {
    SNPN_AccessInfo_r17_ExtCH_WithoutConfigAllowed_r17_trueVal = 0, /**< ASN.1 trueVal */
} SNPN_AccessInfo_r17_ExtCH_WithoutConfigAllowed_r17;


/**
 * @brief 枚举 SNPN_AccessInfo_r17_OnboardingEnabled_r17（ASN.1 onboardingEnabled-r17，源文件第 4758 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SNPN_AccessInfo_r17_OnboardingEnabled_r17 {
    SNPN_AccessInfo_r17_OnboardingEnabled_r17_trueVal = 0, /**< ASN.1 trueVal */
} SNPN_AccessInfo_r17_OnboardingEnabled_r17;


/**
 * @brief 枚举 SNPN_AccessInfo_r17_ImsEmergencySupportForSNPN_r17（ASN.1 imsEmergencySupportForSNPN-r17，源文件第 4759 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SNPN_AccessInfo_r17_ImsEmergencySupportForSNPN_r17 {
    SNPN_AccessInfo_r17_ImsEmergencySupportForSNPN_r17_trueVal = 0, /**< ASN.1 trueVal */
} SNPN_AccessInfo_r17_ImsEmergencySupportForSNPN_r17;


/**
 * @brief 枚举 CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds（ASN.1 cellDTXDRX-onDurationTimer-r18/milliSeconds，源文件第 4801 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds {
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms1 = 0, /**< ASN.1 ms1 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms2 = 1, /**< ASN.1 ms2 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms3 = 2, /**< ASN.1 ms3 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms4 = 3, /**< ASN.1 ms4 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms5 = 4, /**< ASN.1 ms5 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms6 = 5, /**< ASN.1 ms6 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms8 = 6, /**< ASN.1 ms8 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms10 = 7, /**< ASN.1 ms10 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms20 = 8, /**< ASN.1 ms20 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms30 = 9, /**< ASN.1 ms30 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms40 = 10, /**< ASN.1 ms40 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms50 = 11, /**< ASN.1 ms50 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms60 = 12, /**< ASN.1 ms60 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms80 = 13, /**< ASN.1 ms80 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms100 = 14, /**< ASN.1 ms100 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms200 = 15, /**< ASN.1 ms200 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms300 = 16, /**< ASN.1 ms300 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms400 = 17, /**< ASN.1 ms400 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms500 = 18, /**< ASN.1 ms500 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms600 = 19, /**< ASN.1 ms600 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms800 = 20, /**< ASN.1 ms800 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms1000 = 21, /**< ASN.1 ms1000 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms1200 = 22, /**< ASN.1 ms1200 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_ms1600 = 23, /**< ASN.1 ms1600 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_spare8 = 24, /**< ASN.1 spare8 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_spare7 = 25, /**< ASN.1 spare7 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_spare6 = 26, /**< ASN.1 spare6 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_spare5 = 27, /**< ASN.1 spare5 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_spare4 = 28, /**< ASN.1 spare4 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_spare3 = 29, /**< ASN.1 spare3 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_spare2 = 30, /**< ASN.1 spare2 */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds_spare1 = 31, /**< ASN.1 spare1 */
} CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds;


/**
 * @brief 枚举 CellDTXDRX_Config_r18_CellDTXDRXconfigType_r18（ASN.1 cellDTXDRXconfigType-r18，源文件第 4829 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellDTXDRX_Config_r18_CellDTXDRXconfigType_r18 {
    CellDTXDRX_Config_r18_CellDTXDRXconfigType_r18_dtx = 0, /**< ASN.1 dtx */
    CellDTXDRX_Config_r18_CellDTXDRXconfigType_r18_drx = 1, /**< ASN.1 drx */
    CellDTXDRX_Config_r18_CellDTXDRXconfigType_r18_dtxdrx = 2, /**< ASN.1 dtxdrx */
} CellDTXDRX_Config_r18_CellDTXDRXconfigType_r18;


/**
 * @brief 枚举 CellDTXDRX_Config_r18_CellDTXDRXactivationStatus_r18（ASN.1 cellDTXDRXactivationStatus-r18，源文件第 4830 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellDTXDRX_Config_r18_CellDTXDRXactivationStatus_r18 {
    CellDTXDRX_Config_r18_CellDTXDRXactivationStatus_r18_activated = 0, /**< ASN.1 activated */
    CellDTXDRX_Config_r18_CellDTXDRXactivationStatus_r18_deactivated = 1, /**< ASN.1 deactivated */
} CellDTXDRX_Config_r18_CellDTXDRXactivationStatus_r18;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup1_ReportUplinkTxDirectCurrent（ASN.1 reportUplinkTxDirectCurrent，源文件第 4848 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup1_ReportUplinkTxDirectCurrent {
    CellGroupConfig_ExtGroup1_ReportUplinkTxDirectCurrent_trueVal = 0, /**< ASN.1 trueVal */
} CellGroupConfig_ExtGroup1_ReportUplinkTxDirectCurrent;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup2_F1c_TransferPath_r16（ASN.1 f1c-TransferPath-r16，源文件第 4854 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup2_F1c_TransferPath_r16 {
    CellGroupConfig_ExtGroup2_F1c_TransferPath_r16_lte = 0, /**< ASN.1 lte */
    CellGroupConfig_ExtGroup2_F1c_TransferPath_r16_nr = 1, /**< ASN.1 nr */
    CellGroupConfig_ExtGroup2_F1c_TransferPath_r16_both = 2, /**< ASN.1 both */
} CellGroupConfig_ExtGroup2_F1c_TransferPath_r16;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup2_UplinkTxSwitchingOption_r16（ASN.1 uplinkTxSwitchingOption-r16，源文件第 4859 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup2_UplinkTxSwitchingOption_r16 {
    CellGroupConfig_ExtGroup2_UplinkTxSwitchingOption_r16_switchedUL = 0, /**< ASN.1 switchedUL */
    CellGroupConfig_ExtGroup2_UplinkTxSwitchingOption_r16_dualUL = 1, /**< ASN.1 dualUL */
} CellGroupConfig_ExtGroup2_UplinkTxSwitchingOption_r16;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup2_UplinkTxSwitchingPowerBoosting_r16（ASN.1 uplinkTxSwitchingPowerBoosting-r16，源文件第 4860 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup2_UplinkTxSwitchingPowerBoosting_r16 {
    CellGroupConfig_ExtGroup2_UplinkTxSwitchingPowerBoosting_r16_enabled = 0, /**< ASN.1 enabled */
} CellGroupConfig_ExtGroup2_UplinkTxSwitchingPowerBoosting_r16;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup3_ReportUplinkTxDirectCurrentTwoCarrier_r16（ASN.1 reportUplinkTxDirectCurrentTwoCarrier-r16，源文件第 4863 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup3_ReportUplinkTxDirectCurrentTwoCarrier_r16 {
    CellGroupConfig_ExtGroup3_ReportUplinkTxDirectCurrentTwoCarrier_r16_trueVal = 0, /**< ASN.1 trueVal */
} CellGroupConfig_ExtGroup3_ReportUplinkTxDirectCurrentTwoCarrier_r16;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup4_F1c_TransferPathNRDC_r17（ASN.1 f1c-TransferPathNRDC-r17，源文件第 4866 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup4_F1c_TransferPathNRDC_r17 {
    CellGroupConfig_ExtGroup4_F1c_TransferPathNRDC_r17_mcg = 0, /**< ASN.1 mcg */
    CellGroupConfig_ExtGroup4_F1c_TransferPathNRDC_r17_scg = 1, /**< ASN.1 scg */
    CellGroupConfig_ExtGroup4_F1c_TransferPathNRDC_r17_both = 2, /**< ASN.1 both */
} CellGroupConfig_ExtGroup4_F1c_TransferPathNRDC_r17;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup4_UplinkTxSwitching_2T_Mode_r17（ASN.1 uplinkTxSwitching-2T-Mode-r17，源文件第 4867 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup4_UplinkTxSwitching_2T_Mode_r17 {
    CellGroupConfig_ExtGroup4_UplinkTxSwitching_2T_Mode_r17_enabled = 0, /**< ASN.1 enabled */
} CellGroupConfig_ExtGroup4_UplinkTxSwitching_2T_Mode_r17;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup4_UplinkTxSwitching_DualUL_TxState_r17（ASN.1 uplinkTxSwitching-DualUL-TxState-r17，源文件第 4868 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup4_UplinkTxSwitching_DualUL_TxState_r17 {
    CellGroupConfig_ExtGroup4_UplinkTxSwitching_DualUL_TxState_r17_oneT = 0, /**< ASN.1 oneT */
    CellGroupConfig_ExtGroup4_UplinkTxSwitching_DualUL_TxState_r17_twoT = 1, /**< ASN.1 twoT */
} CellGroupConfig_ExtGroup4_UplinkTxSwitching_DualUL_TxState_r17;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup6_PrioSCellPRACH_OverSP_PeriodicSRS_r17（ASN.1 prioSCellPRACH-OverSP-PeriodicSRS-r17，源文件第 4885 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup6_PrioSCellPRACH_OverSP_PeriodicSRS_r17 {
    CellGroupConfig_ExtGroup6_PrioSCellPRACH_OverSP_PeriodicSRS_r17_enabled = 0, /**< ASN.1 enabled */
} CellGroupConfig_ExtGroup6_PrioSCellPRACH_OverSP_PeriodicSRS_r17;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup7_NonCollocatedTypeMRDC_r18（ASN.1 nonCollocatedTypeMRDC-r18，源文件第 4890 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup7_NonCollocatedTypeMRDC_r18 {
    CellGroupConfig_ExtGroup7_NonCollocatedTypeMRDC_r18_trueVal = 0, /**< ASN.1 trueVal */
} CellGroupConfig_ExtGroup7_NonCollocatedTypeMRDC_r18;


/**
 * @brief 枚举 CellGroupConfig_ExtGroup7_NonCollocatedTypeNR_CA_r18（ASN.1 nonCollocatedTypeNR-CA-r18，源文件第 4891 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGroupConfig_ExtGroup7_NonCollocatedTypeNR_CA_r18 {
    CellGroupConfig_ExtGroup7_NonCollocatedTypeNR_CA_r18_trueVal = 0, /**< ASN.1 trueVal */
} CellGroupConfig_ExtGroup7_NonCollocatedTypeNR_CA_r18;


/**
 * @brief 枚举 SpCellConfig_RlmInSyncOutOfSyncThreshold（ASN.1 rlmInSyncOutOfSyncThreshold，源文件第 4901 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpCellConfig_RlmInSyncOutOfSyncThreshold {
    SpCellConfig_RlmInSyncOutOfSyncThreshold_n1 = 0, /**< ASN.1 n1 */
} SpCellConfig_RlmInSyncOutOfSyncThreshold;


/**
 * @brief 枚举 SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17（ASN.1 lowMobilityEvaluationConnected-r17/s-SearchDeltaP-Connected-r17，源文件第 4906 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17 {
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17_dB3 = 0, /**< ASN.1 dB3 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17_dB6 = 1, /**< ASN.1 dB6 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17_dB9 = 2, /**< ASN.1 dB9 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17_dB12 = 3, /**< ASN.1 dB12 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17_dB15 = 4, /**< ASN.1 dB15 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17_spare3 = 5, /**< ASN.1 spare3 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17_spare2 = 6, /**< ASN.1 spare2 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17_spare1 = 7, /**< ASN.1 spare1 */
} SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17;


/**
 * @brief 枚举 SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17（ASN.1 lowMobilityEvaluationConnected-r17/t-SearchDeltaP-Connected-r17，源文件第 4907 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17 {
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_s5 = 0, /**< ASN.1 s5 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_s10 = 1, /**< ASN.1 s10 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_s20 = 2, /**< ASN.1 s20 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_s30 = 3, /**< ASN.1 s30 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_s60 = 4, /**< ASN.1 s60 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_s120 = 5, /**< ASN.1 s120 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_s180 = 6, /**< ASN.1 s180 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_s240 = 7, /**< ASN.1 s240 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_s300 = 8, /**< ASN.1 s300 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_spare7 = 9, /**< ASN.1 spare7 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_spare6 = 10, /**< ASN.1 spare6 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_spare5 = 11, /**< ASN.1 spare5 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_spare4 = 12, /**< ASN.1 spare4 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_spare3 = 13, /**< ASN.1 spare3 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_spare2 = 14, /**< ASN.1 spare2 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17_spare1 = 15, /**< ASN.1 spare1 */
} SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17;


/**
 * @brief 枚举 ReconfigurationWithSync_T304（ASN.1 t304，源文件第 4919 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReconfigurationWithSync_T304 {
    ReconfigurationWithSync_T304_ms50 = 0, /**< ASN.1 ms50 */
    ReconfigurationWithSync_T304_ms100 = 1, /**< ASN.1 ms100 */
    ReconfigurationWithSync_T304_ms150 = 2, /**< ASN.1 ms150 */
    ReconfigurationWithSync_T304_ms200 = 3, /**< ASN.1 ms200 */
    ReconfigurationWithSync_T304_ms500 = 4, /**< ASN.1 ms500 */
    ReconfigurationWithSync_T304_ms1000 = 5, /**< ASN.1 ms1000 */
    ReconfigurationWithSync_T304_ms2000 = 6, /**< ASN.1 ms2000 */
    ReconfigurationWithSync_T304_ms10000 = 7, /**< ASN.1 ms10000 */
} ReconfigurationWithSync_T304;


/**
 * @brief 枚举 ReconfigurationWithSync_ExtGroup4_Sl_IndirectPathMaintain_r18（ASN.1 sl-IndirectPathMaintain-r18，源文件第 4936 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReconfigurationWithSync_ExtGroup4_Sl_IndirectPathMaintain_r18 {
    ReconfigurationWithSync_ExtGroup4_Sl_IndirectPathMaintain_r18_trueVal = 0, /**< ASN.1 trueVal */
} ReconfigurationWithSync_ExtGroup4_Sl_IndirectPathMaintain_r18;


/**
 * @brief 枚举 DAPS_UplinkPowerConfig_r16_UplinkPowerSharingDAPS_Mode_r16（ASN.1 uplinkPowerSharingDAPS-Mode-r16，源文件第 4943 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DAPS_UplinkPowerConfig_r16_UplinkPowerSharingDAPS_Mode_r16 {
    DAPS_UplinkPowerConfig_r16_UplinkPowerSharingDAPS_Mode_r16_semi_static_mode1 = 0, /**< ASN.1 semi-static-mode1 */
    DAPS_UplinkPowerConfig_r16_UplinkPowerSharingDAPS_Mode_r16_semi_static_mode2 = 1, /**< ASN.1 semi-static-mode2 */
    DAPS_UplinkPowerConfig_r16_UplinkPowerSharingDAPS_Mode_r16_dynamic = 2, /**< ASN.1 dynamic */
} DAPS_UplinkPowerConfig_r16_UplinkPowerSharingDAPS_Mode_r16;


/**
 * @brief 枚举 SCellConfig_ExtGroup2_SCellState_r16（ASN.1 sCellState-r16，源文件第 4955 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SCellConfig_ExtGroup2_SCellState_r16 {
    SCellConfig_ExtGroup2_SCellState_r16_activated = 0, /**< ASN.1 activated */
} SCellConfig_ExtGroup2_SCellState_r16;


/**
 * @brief 枚举 SCellConfig_ExtGroup2_SecondaryDRX_GroupConfig_r16（ASN.1 secondaryDRX-GroupConfig-r16，源文件第 4956 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SCellConfig_ExtGroup2_SecondaryDRX_GroupConfig_r16 {
    SCellConfig_ExtGroup2_SecondaryDRX_GroupConfig_r16_trueVal = 0, /**< ASN.1 trueVal */
} SCellConfig_ExtGroup2_SecondaryDRX_GroupConfig_r16;


/**
 * @brief 枚举 GoodServingCellEvaluation_r17_Offset_r17（ASN.1 offset-r17，源文件第 4977 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GoodServingCellEvaluation_r17_Offset_r17 {
    GoodServingCellEvaluation_r17_Offset_r17_db2 = 0, /**< ASN.1 db2 */
    GoodServingCellEvaluation_r17_Offset_r17_db4 = 1, /**< ASN.1 db4 */
    GoodServingCellEvaluation_r17_Offset_r17_db6 = 2, /**< ASN.1 db6 */
    GoodServingCellEvaluation_r17_Offset_r17_db8 = 3, /**< ASN.1 db8 */
} GoodServingCellEvaluation_r17_Offset_r17;


/**
 * @brief 枚举 SL_PathSwitchConfig_r17_T420_r17（ASN.1 t420-r17，源文件第 4982 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PathSwitchConfig_r17_T420_r17 {
    SL_PathSwitchConfig_r17_T420_r17_ms50 = 0, /**< ASN.1 ms50 */
    SL_PathSwitchConfig_r17_T420_r17_ms100 = 1, /**< ASN.1 ms100 */
    SL_PathSwitchConfig_r17_T420_r17_ms150 = 2, /**< ASN.1 ms150 */
    SL_PathSwitchConfig_r17_T420_r17_ms200 = 3, /**< ASN.1 ms200 */
    SL_PathSwitchConfig_r17_T420_r17_ms500 = 4, /**< ASN.1 ms500 */
    SL_PathSwitchConfig_r17_T420_r17_ms1000 = 5, /**< ASN.1 ms1000 */
    SL_PathSwitchConfig_r17_T420_r17_ms2000 = 6, /**< ASN.1 ms2000 */
    SL_PathSwitchConfig_r17_T420_r17_ms10000 = 7, /**< ASN.1 ms10000 */
} SL_PathSwitchConfig_r17_T420_r17;


/**
 * @brief 枚举 IAB_ResourceConfig_r17_PeriodicitySlotList_r17（ASN.1 periodicitySlotList-r17，源文件第 4989 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IAB_ResourceConfig_r17_PeriodicitySlotList_r17 {
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms0p5 = 0, /**< ASN.1 ms0p5 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms0p625 = 1, /**< ASN.1 ms0p625 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms1 = 2, /**< ASN.1 ms1 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms1p25 = 3, /**< ASN.1 ms1p25 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms2 = 4, /**< ASN.1 ms2 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms2p5 = 5, /**< ASN.1 ms2p5 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms5 = 6, /**< ASN.1 ms5 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms10 = 7, /**< ASN.1 ms10 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms20 = 8, /**< ASN.1 ms20 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms40 = 9, /**< ASN.1 ms40 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms80 = 10, /**< ASN.1 ms80 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17_ms160 = 11, /**< ASN.1 ms160 */
} IAB_ResourceConfig_r17_PeriodicitySlotList_r17;


/**
 * @brief 枚举 AutonomousDenialParameters_r18_AutonomousDenialSlots_r18（ASN.1 autonomousDenialSlots-r18，源文件第 5015 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AutonomousDenialParameters_r18_AutonomousDenialSlots_r18 {
    AutonomousDenialParameters_r18_AutonomousDenialSlots_r18_n2 = 0, /**< ASN.1 n2 */
    AutonomousDenialParameters_r18_AutonomousDenialSlots_r18_n5 = 1, /**< ASN.1 n5 */
    AutonomousDenialParameters_r18_AutonomousDenialSlots_r18_n10 = 2, /**< ASN.1 n10 */
    AutonomousDenialParameters_r18_AutonomousDenialSlots_r18_n15 = 3, /**< ASN.1 n15 */
    AutonomousDenialParameters_r18_AutonomousDenialSlots_r18_n20 = 4, /**< ASN.1 n20 */
    AutonomousDenialParameters_r18_AutonomousDenialSlots_r18_n30 = 5, /**< ASN.1 n30 */
    AutonomousDenialParameters_r18_AutonomousDenialSlots_r18_spare2 = 6, /**< ASN.1 spare2 */
    AutonomousDenialParameters_r18_AutonomousDenialSlots_r18_spare1 = 7, /**< ASN.1 spare1 */
} AutonomousDenialParameters_r18_AutonomousDenialSlots_r18;


/**
 * @brief 枚举 AutonomousDenialParameters_r18_AutonomousDenialValidity_r18（ASN.1 autonomousDenialValidity-r18，源文件第 5016 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AutonomousDenialParameters_r18_AutonomousDenialValidity_r18 {
    AutonomousDenialParameters_r18_AutonomousDenialValidity_r18_n200 = 0, /**< ASN.1 n200 */
    AutonomousDenialParameters_r18_AutonomousDenialValidity_r18_n500 = 1, /**< ASN.1 n500 */
    AutonomousDenialParameters_r18_AutonomousDenialValidity_r18_n1000 = 2, /**< ASN.1 n1000 */
    AutonomousDenialParameters_r18_AutonomousDenialValidity_r18_n2000 = 3, /**< ASN.1 n2000 */
} AutonomousDenialParameters_r18_AutonomousDenialValidity_r18;


/**
 * @brief 枚举 RACH_LessHO_r18_TargetNTA_r18（ASN.1 targetNTA-r18，源文件第 5020 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_LessHO_r18_TargetNTA_r18 {
    RACH_LessHO_r18_TargetNTA_r18_zero = 0, /**< ASN.1 zero */
    RACH_LessHO_r18_TargetNTA_r18_source = 1, /**< ASN.1 source */
} RACH_LessHO_r18_TargetNTA_r18;


/**
 * @brief 枚举 UplinkTxSwitchingBandPairConfig_r18_SwitchingOptionConfigForBandPair_r18（ASN.1 switchingOptionConfigForBandPair-r18，源文件第 5040 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkTxSwitchingBandPairConfig_r18_SwitchingOptionConfigForBandPair_r18 {
    UplinkTxSwitchingBandPairConfig_r18_SwitchingOptionConfigForBandPair_r18_switchedUL = 0, /**< ASN.1 switchedUL */
    UplinkTxSwitchingBandPairConfig_r18_SwitchingOptionConfigForBandPair_r18_dualUL = 1, /**< ASN.1 dualUL */
} UplinkTxSwitchingBandPairConfig_r18_SwitchingOptionConfigForBandPair_r18;


/**
 * @brief 枚举 UplinkTxSwitchingBandPairConfig_r18_Switching2T_Mode_r18（ASN.1 switching2T-Mode-r18，源文件第 5041 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkTxSwitchingBandPairConfig_r18_Switching2T_Mode_r18 {
    UplinkTxSwitchingBandPairConfig_r18_Switching2T_Mode_r18_enabled = 0, /**< ASN.1 enabled */
} UplinkTxSwitchingBandPairConfig_r18_Switching2T_Mode_r18;


/**
 * @brief 枚举 UplinkTxSwitchingBandPairConfig_r18_SwitchingPeriodConfigForBandPair_r18（ASN.1 switchingPeriodConfigForBandPair-r18，源文件第 5042 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkTxSwitchingBandPairConfig_r18_SwitchingPeriodConfigForBandPair_r18 {
    UplinkTxSwitchingBandPairConfig_r18_SwitchingPeriodConfigForBandPair_r18_n35us = 0, /**< ASN.1 n35us */
    UplinkTxSwitchingBandPairConfig_r18_SwitchingPeriodConfigForBandPair_r18_n140us = 1, /**< ASN.1 n140us */
} UplinkTxSwitchingBandPairConfig_r18_SwitchingPeriodConfigForBandPair_r18;


/**
 * @brief 枚举 CGI_InfoEUTRA_FreqBandIndicatorPriority（ASN.1 freqBandIndicatorPriority，源文件第 5101 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CGI_InfoEUTRA_FreqBandIndicatorPriority {
    CGI_InfoEUTRA_FreqBandIndicatorPriority_trueVal = 0, /**< ASN.1 trueVal */
} CGI_InfoEUTRA_FreqBandIndicatorPriority;


/**
 * @brief 枚举 CGI_InfoNR_ExtGroup2_CellReservedForOtherUse_r16（ASN.1 cellReservedForOtherUse-r16，源文件第 5131 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CGI_InfoNR_ExtGroup2_CellReservedForOtherUse_r16 {
    CGI_InfoNR_ExtGroup2_CellReservedForOtherUse_r16_trueVal = 0, /**< ASN.1 trueVal */
} CGI_InfoNR_ExtGroup2_CellReservedForOtherUse_r16;


/**
 * @brief 枚举 ClockQualityMetrics_r18_SynchronisationState_r18（ASN.1 synchronisationState-r18，源文件第 5153 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ClockQualityMetrics_r18_SynchronisationState_r18 {
    ClockQualityMetrics_r18_SynchronisationState_r18_locked = 0, /**< ASN.1 locked */
    ClockQualityMetrics_r18_SynchronisationState_r18_holdover = 1, /**< ASN.1 holdover */
    ClockQualityMetrics_r18_SynchronisationState_r18_freerun = 2, /**< ASN.1 freerun */
    ClockQualityMetrics_r18_SynchronisationState_r18_spare1 = 3, /**< ASN.1 spare1 */
} ClockQualityMetrics_r18_SynchronisationState_r18;


/**
 * @brief 枚举 ClockQualityMetrics_r18_ParentTimeSource_r18（ASN.1 parentTimeSource-r18，源文件第 5161 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ClockQualityMetrics_r18_ParentTimeSource_r18 {
    ClockQualityMetrics_r18_ParentTimeSource_r18_syncE = 0, /**< ASN.1 syncE */
    ClockQualityMetrics_r18_ParentTimeSource_r18_pTP = 1, /**< ASN.1 pTP */
    ClockQualityMetrics_r18_ParentTimeSource_r18_gNSS = 2, /**< ASN.1 gNSS */
    ClockQualityMetrics_r18_ParentTimeSource_r18_atomicClock = 3, /**< ASN.1 atomicClock */
    ClockQualityMetrics_r18_ParentTimeSource_r18_terrestialRadio = 4, /**< ASN.1 terrestialRadio */
    ClockQualityMetrics_r18_ParentTimeSource_r18_serialTimeCode = 5, /**< ASN.1 serialTimeCode */
    ClockQualityMetrics_r18_ParentTimeSource_r18_nTP = 6, /**< ASN.1 nTP */
    ClockQualityMetrics_r18_ParentTimeSource_r18_handset = 7, /**< ASN.1 handset */
    ClockQualityMetrics_r18_ParentTimeSource_r18_other = 8, /**< ASN.1 other */
    ClockQualityMetrics_r18_ParentTimeSource_r18_spare7 = 9, /**< ASN.1 spare7 */
    ClockQualityMetrics_r18_ParentTimeSource_r18_spare6 = 10, /**< ASN.1 spare6 */
    ClockQualityMetrics_r18_ParentTimeSource_r18_spare5 = 11, /**< ASN.1 spare5 */
    ClockQualityMetrics_r18_ParentTimeSource_r18_spare4 = 12, /**< ASN.1 spare4 */
    ClockQualityMetrics_r18_ParentTimeSource_r18_spare3 = 13, /**< ASN.1 spare3 */
    ClockQualityMetrics_r18_ParentTimeSource_r18_spare2 = 14, /**< ASN.1 spare2 */
    ClockQualityMetrics_r18_ParentTimeSource_r18_spare1 = 15, /**< ASN.1 spare1 */
} ClockQualityMetrics_r18_ParentTimeSource_r18;


/**
 * @brief 枚举 CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelectionSamplingSize（ASN.1 codebookType/type2/subType/typeII-PortSelection/portSelectionSamplingSize，源文件第 5238 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelectionSamplingSize {
    CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelectionSamplingSize_n1 = 0, /**< ASN.1 n1 */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelectionSamplingSize_n2 = 1, /**< ASN.1 n2 */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelectionSamplingSize_n3 = 2, /**< ASN.1 n3 */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelectionSamplingSize_n4 = 3, /**< ASN.1 n4 */
} CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelectionSamplingSize;


/**
 * @brief 枚举 CodebookConfig_CodebookType_Type2_PhaseAlphabetSize（ASN.1 codebookType/type2/phaseAlphabetSize，源文件第 5242 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_CodebookType_Type2_PhaseAlphabetSize {
    CodebookConfig_CodebookType_Type2_PhaseAlphabetSize_n4 = 0, /**< ASN.1 n4 */
    CodebookConfig_CodebookType_Type2_PhaseAlphabetSize_n8 = 1, /**< ASN.1 n8 */
} CodebookConfig_CodebookType_Type2_PhaseAlphabetSize;


/**
 * @brief 枚举 CodebookConfig_CodebookType_Type2_NumberOfBeams（ASN.1 codebookType/type2/numberOfBeams，源文件第 5244 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_CodebookType_Type2_NumberOfBeams {
    CodebookConfig_CodebookType_Type2_NumberOfBeams_two = 0, /**< ASN.1 two */
    CodebookConfig_CodebookType_Type2_NumberOfBeams_three = 1, /**< ASN.1 three */
    CodebookConfig_CodebookType_Type2_NumberOfBeams_four = 2, /**< ASN.1 four */
} CodebookConfig_CodebookType_Type2_NumberOfBeams;


/**
 * @brief 枚举 CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16_PortSelectionSamplingSize_r16（ASN.1 codebookType/type2/subType/typeII-PortSelection-r16/portSelectionSamplingSize-r16，源文件第 5272 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16_PortSelectionSamplingSize_r16 {
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16_PortSelectionSamplingSize_r16_n1 = 0, /**< ASN.1 n1 */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16_PortSelectionSamplingSize_r16_n2 = 1, /**< ASN.1 n2 */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16_PortSelectionSamplingSize_r16_n3 = 2, /**< ASN.1 n3 */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16_PortSelectionSamplingSize_r16_n4 = 3, /**< ASN.1 n4 */
} CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16_PortSelectionSamplingSize_r16;


/**
 * @brief 枚举 CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17_ValueOfN_r17（ASN.1 codebookType/type2/typeII-PortSelection-r17/valueOfN-r17，源文件第 5339 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17_ValueOfN_r17 {
    CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17_ValueOfN_r17_n2 = 0, /**< ASN.1 n2 */
    CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17_ValueOfN_r17_n4 = 1, /**< ASN.1 n4 */
} CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17_ValueOfN_r17;


/**
 * @brief 枚举 CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_RestrictedCMR_Selection_r18（ASN.1 codebookType/type2/typeII-CJT-r18/restrictedCMR-Selection-r18，源文件第 5362 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_RestrictedCMR_Selection_r18 {
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_RestrictedCMR_Selection_r18_enable = 0, /**< ASN.1 enable */
} CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_RestrictedCMR_Selection_r18;


/**
 * @brief 枚举 CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_ValueOfO3_r18（ASN.1 codebookType/type2/typeII-CJT-r18/valueOfO3-r18，源文件第 5363 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_ValueOfO3_r18 {
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_ValueOfO3_r18_n1 = 0, /**< ASN.1 n1 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_ValueOfO3_r18_n4 = 1, /**< ASN.1 n4 */
} CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_ValueOfO3_r18;


/**
 * @brief 枚举 CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_RestrictedCMR_Selection_r18（ASN.1 codebookType/type2/typeII-CJT-PortSelection-r18/restrictedCMR-Selection-r18，源文件第 5371 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_RestrictedCMR_Selection_r18 {
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_RestrictedCMR_Selection_r18_enable = 0, /**< ASN.1 enable */
} CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_RestrictedCMR_Selection_r18;


/**
 * @brief 枚举 CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfO3_r18（ASN.1 codebookType/type2/typeII-CJT-PortSelection-r18/valueOfO3-r18，源文件第 5372 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfO3_r18 {
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfO3_r18_n1 = 0, /**< ASN.1 n1 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfO3_r18_n4 = 1, /**< ASN.1 n4 */
} CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfO3_r18;


/**
 * @brief 枚举 CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfN_CJT_r18（ASN.1 codebookType/type2/typeII-CJT-PortSelection-r18/valueOfN-CJT-r18，源文件第 5373 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfN_CJT_r18 {
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfN_CJT_r18_n2 = 0, /**< ASN.1 n2 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfN_CJT_r18_n4 = 1, /**< ASN.1 n4 */
} CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfN_CJT_r18;


/**
 * @brief 枚举 CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18_PredictionDelay_r18（ASN.1 codebookType/type2/typeII-Doppler-r18/predictionDelay-r18，源文件第 5383 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18_PredictionDelay_r18 {
    CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18_PredictionDelay_r18_m0 = 0, /**< ASN.1 m0 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18_PredictionDelay_r18_n0 = 1, /**< ASN.1 n0 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18_PredictionDelay_r18_n1 = 2, /**< ASN.1 n1 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18_PredictionDelay_r18_n2 = 3, /**< ASN.1 n2 */
} CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18_PredictionDelay_r18;


/**
 * @brief 枚举 CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_ValueOfN_Doppler_r18（ASN.1 codebookType/type2/typeII-DopplerPortSelection-r18/valueOfN-Doppler-r18，源文件第 5389 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_ValueOfN_Doppler_r18 {
    CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_ValueOfN_Doppler_r18_n2 = 0, /**< ASN.1 n2 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_ValueOfN_Doppler_r18_n4 = 1, /**< ASN.1 n4 */
} CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_ValueOfN_Doppler_r18;


/**
 * @brief 枚举 CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_PredictionDelay_r18（ASN.1 codebookType/type2/typeII-DopplerPortSelection-r18/predictionDelay-r18，源文件第 5391 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_PredictionDelay_r18 {
    CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_PredictionDelay_r18_m0 = 0, /**< ASN.1 m0 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_PredictionDelay_r18_n0 = 1, /**< ASN.1 n0 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_PredictionDelay_r18_n1 = 2, /**< ASN.1 n1 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_PredictionDelay_r18_n2 = 3, /**< ASN.1 n2 */
} CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_PredictionDelay_r18;


/**
 * @brief 枚举 TD_DD_Config_r18_VectorLengthDD_r18（ASN.1 vectorLengthDD-r18，源文件第 5415 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TD_DD_Config_r18_VectorLengthDD_r18 {
    TD_DD_Config_r18_VectorLengthDD_r18_n1 = 0, /**< ASN.1 n1 */
    TD_DD_Config_r18_VectorLengthDD_r18_n2 = 1, /**< ASN.1 n2 */
    TD_DD_Config_r18_VectorLengthDD_r18_n4 = 2, /**< ASN.1 n4 */
    TD_DD_Config_r18_VectorLengthDD_r18_n8 = 3, /**< ASN.1 n8 */
} TD_DD_Config_r18_VectorLengthDD_r18;


/**
 * @brief 枚举 TD_DD_Config_r18_UnitDurationDD_r18（ASN.1 unitDurationDD-r18，源文件第 5416 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TD_DD_Config_r18_UnitDurationDD_r18 {
    TD_DD_Config_r18_UnitDurationDD_r18_m1 = 0, /**< ASN.1 m1 */
    TD_DD_Config_r18_UnitDurationDD_r18_m2 = 1, /**< ASN.1 m2 */
} TD_DD_Config_r18_UnitDurationDD_r18;


/**
 * @brief 枚举 TD_DD_Config_r18_TdCQI_r18（ASN.1 tdCQI-r18，源文件第 5418 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TD_DD_Config_r18_TdCQI_r18 {
    TD_DD_Config_r18_TdCQI_r18_n11 = 0, /**< ASN.1 n11 */
    TD_DD_Config_r18_TdCQI_r18_n12 = 1, /**< ASN.1 n12 */
    TD_DD_Config_r18_TdCQI_r18_n2 = 2, /**< ASN.1 n2 */
    TD_DD_Config_r18_TdCQI_r18_spare1 = 3, /**< ASN.1 spare1 */
} TD_DD_Config_r18_TdCQI_r18;


/**
 * @brief 枚举 CondReconfigToAddMod_r16_ExtGroup2_Scpac_ConfigComplete_r18（ASN.1 scpac-ConfigComplete-r18，源文件第 5455 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CondReconfigToAddMod_r16_ExtGroup2_Scpac_ConfigComplete_r18 {
    CondReconfigToAddMod_r16_ExtGroup2_Scpac_ConfigComplete_r18_trueVal = 0, /**< ASN.1 trueVal */
} CondReconfigToAddMod_r16_ExtGroup2_Scpac_ConfigComplete_r18;


/**
 * @brief 枚举 ConditionalReconfiguration_r16_AttemptCondReconfig_r16（ASN.1 attemptCondReconfig-r16，源文件第 5482 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConditionalReconfiguration_r16_AttemptCondReconfig_r16 {
    ConditionalReconfiguration_r16_AttemptCondReconfig_r16_trueVal = 0, /**< ASN.1 trueVal */
} ConditionalReconfiguration_r16_AttemptCondReconfig_r16;


/**
 * @brief 枚举 ConfiguredGrantConfig_FrequencyHopping（ASN.1 frequencyHopping，源文件第 5511 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_FrequencyHopping {
    ConfiguredGrantConfig_FrequencyHopping_intraSlot = 0, /**< ASN.1 intraSlot */
    ConfiguredGrantConfig_FrequencyHopping_interSlot = 1, /**< ASN.1 interSlot */
} ConfiguredGrantConfig_FrequencyHopping;


/**
 * @brief 枚举 ConfiguredGrantConfig_Mcs_Table（ASN.1 mcs-Table，源文件第 5513 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_Mcs_Table {
    ConfiguredGrantConfig_Mcs_Table_qam256 = 0, /**< ASN.1 qam256 */
    ConfiguredGrantConfig_Mcs_Table_qam64LowSE = 1, /**< ASN.1 qam64LowSE */
} ConfiguredGrantConfig_Mcs_Table;


/**
 * @brief 枚举 ConfiguredGrantConfig_Mcs_TableTransformPrecoder（ASN.1 mcs-TableTransformPrecoder，源文件第 5514 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_Mcs_TableTransformPrecoder {
    ConfiguredGrantConfig_Mcs_TableTransformPrecoder_qam256 = 0, /**< ASN.1 qam256 */
    ConfiguredGrantConfig_Mcs_TableTransformPrecoder_qam64LowSE = 1, /**< ASN.1 qam64LowSE */
} ConfiguredGrantConfig_Mcs_TableTransformPrecoder;


/**
 * @brief 枚举 ConfiguredGrantConfig_ResourceAllocation（ASN.1 resourceAllocation，源文件第 5516 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_ResourceAllocation {
    ConfiguredGrantConfig_ResourceAllocation_resourceAllocationType0 = 0, /**< ASN.1 resourceAllocationType0 */
    ConfiguredGrantConfig_ResourceAllocation_resourceAllocationType1 = 1, /**< ASN.1 resourceAllocationType1 */
    ConfiguredGrantConfig_ResourceAllocation_dynamicSwitch = 2, /**< ASN.1 dynamicSwitch */
} ConfiguredGrantConfig_ResourceAllocation;


/**
 * @brief 枚举 ConfiguredGrantConfig_Rbg_Size（ASN.1 rbg-Size，源文件第 5517 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_Rbg_Size {
    ConfiguredGrantConfig_Rbg_Size_config2 = 0, /**< ASN.1 config2 */
} ConfiguredGrantConfig_Rbg_Size;


/**
 * @brief 枚举 ConfiguredGrantConfig_PowerControlLoopToUse（ASN.1 powerControlLoopToUse，源文件第 5518 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_PowerControlLoopToUse {
    ConfiguredGrantConfig_PowerControlLoopToUse_n0 = 0, /**< ASN.1 n0 */
    ConfiguredGrantConfig_PowerControlLoopToUse_n1 = 1, /**< ASN.1 n1 */
} ConfiguredGrantConfig_PowerControlLoopToUse;


/**
 * @brief 枚举 ConfiguredGrantConfig_TransformPrecoder（ASN.1 transformPrecoder，源文件第 5520 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_TransformPrecoder {
    ConfiguredGrantConfig_TransformPrecoder_enabled = 0, /**< ASN.1 enabled */
    ConfiguredGrantConfig_TransformPrecoder_disabled = 1, /**< ASN.1 disabled */
} ConfiguredGrantConfig_TransformPrecoder;


/**
 * @brief 枚举 ConfiguredGrantConfig_RepK（ASN.1 repK，源文件第 5522 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_RepK {
    ConfiguredGrantConfig_RepK_n1 = 0, /**< ASN.1 n1 */
    ConfiguredGrantConfig_RepK_n2 = 1, /**< ASN.1 n2 */
    ConfiguredGrantConfig_RepK_n4 = 2, /**< ASN.1 n4 */
    ConfiguredGrantConfig_RepK_n8 = 3, /**< ASN.1 n8 */
} ConfiguredGrantConfig_RepK;


/**
 * @brief 枚举 ConfiguredGrantConfig_RepK_RV（ASN.1 repK-RV，源文件第 5523 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_RepK_RV {
    ConfiguredGrantConfig_RepK_RV_s1_0231 = 0, /**< ASN.1 s1-0231 */
    ConfiguredGrantConfig_RepK_RV_s2_0303 = 1, /**< ASN.1 s2-0303 */
    ConfiguredGrantConfig_RepK_RV_s3_0000 = 2, /**< ASN.1 s3-0000 */
} ConfiguredGrantConfig_RepK_RV;


/**
 * @brief 枚举 ConfiguredGrantConfig_Periodicity（ASN.1 periodicity，源文件第 5524 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_Periodicity {
    ConfiguredGrantConfig_Periodicity_sym2 = 0, /**< ASN.1 sym2 */
    ConfiguredGrantConfig_Periodicity_sym7 = 1, /**< ASN.1 sym7 */
    ConfiguredGrantConfig_Periodicity_sym1x14 = 2, /**< ASN.1 sym1x14 */
    ConfiguredGrantConfig_Periodicity_sym2x14 = 3, /**< ASN.1 sym2x14 */
    ConfiguredGrantConfig_Periodicity_sym4x14 = 4, /**< ASN.1 sym4x14 */
    ConfiguredGrantConfig_Periodicity_sym5x14 = 5, /**< ASN.1 sym5x14 */
    ConfiguredGrantConfig_Periodicity_sym8x14 = 6, /**< ASN.1 sym8x14 */
    ConfiguredGrantConfig_Periodicity_sym10x14 = 7, /**< ASN.1 sym10x14 */
    ConfiguredGrantConfig_Periodicity_sym16x14 = 8, /**< ASN.1 sym16x14 */
    ConfiguredGrantConfig_Periodicity_sym20x14 = 9, /**< ASN.1 sym20x14 */
    ConfiguredGrantConfig_Periodicity_sym32x14 = 10, /**< ASN.1 sym32x14 */
    ConfiguredGrantConfig_Periodicity_sym40x14 = 11, /**< ASN.1 sym40x14 */
    ConfiguredGrantConfig_Periodicity_sym64x14 = 12, /**< ASN.1 sym64x14 */
    ConfiguredGrantConfig_Periodicity_sym80x14 = 13, /**< ASN.1 sym80x14 */
    ConfiguredGrantConfig_Periodicity_sym128x14 = 14, /**< ASN.1 sym128x14 */
    ConfiguredGrantConfig_Periodicity_sym160x14 = 15, /**< ASN.1 sym160x14 */
    ConfiguredGrantConfig_Periodicity_sym256x14 = 16, /**< ASN.1 sym256x14 */
    ConfiguredGrantConfig_Periodicity_sym320x14 = 17, /**< ASN.1 sym320x14 */
    ConfiguredGrantConfig_Periodicity_sym512x14 = 18, /**< ASN.1 sym512x14 */
    ConfiguredGrantConfig_Periodicity_sym640x14 = 19, /**< ASN.1 sym640x14 */
    ConfiguredGrantConfig_Periodicity_sym1024x14 = 20, /**< ASN.1 sym1024x14 */
    ConfiguredGrantConfig_Periodicity_sym1280x14 = 21, /**< ASN.1 sym1280x14 */
    ConfiguredGrantConfig_Periodicity_sym2560x14 = 22, /**< ASN.1 sym2560x14 */
    ConfiguredGrantConfig_Periodicity_sym5120x14 = 23, /**< ASN.1 sym5120x14 */
    ConfiguredGrantConfig_Periodicity_sym6 = 24, /**< ASN.1 sym6 */
    ConfiguredGrantConfig_Periodicity_sym1x12 = 25, /**< ASN.1 sym1x12 */
    ConfiguredGrantConfig_Periodicity_sym2x12 = 26, /**< ASN.1 sym2x12 */
    ConfiguredGrantConfig_Periodicity_sym4x12 = 27, /**< ASN.1 sym4x12 */
    ConfiguredGrantConfig_Periodicity_sym5x12 = 28, /**< ASN.1 sym5x12 */
    ConfiguredGrantConfig_Periodicity_sym8x12 = 29, /**< ASN.1 sym8x12 */
    ConfiguredGrantConfig_Periodicity_sym10x12 = 30, /**< ASN.1 sym10x12 */
    ConfiguredGrantConfig_Periodicity_sym16x12 = 31, /**< ASN.1 sym16x12 */
    ConfiguredGrantConfig_Periodicity_sym20x12 = 32, /**< ASN.1 sym20x12 */
    ConfiguredGrantConfig_Periodicity_sym32x12 = 33, /**< ASN.1 sym32x12 */
    ConfiguredGrantConfig_Periodicity_sym40x12 = 34, /**< ASN.1 sym40x12 */
    ConfiguredGrantConfig_Periodicity_sym64x12 = 35, /**< ASN.1 sym64x12 */
    ConfiguredGrantConfig_Periodicity_sym80x12 = 36, /**< ASN.1 sym80x12 */
    ConfiguredGrantConfig_Periodicity_sym128x12 = 37, /**< ASN.1 sym128x12 */
    ConfiguredGrantConfig_Periodicity_sym160x12 = 38, /**< ASN.1 sym160x12 */
    ConfiguredGrantConfig_Periodicity_sym256x12 = 39, /**< ASN.1 sym256x12 */
    ConfiguredGrantConfig_Periodicity_sym320x12 = 40, /**< ASN.1 sym320x12 */
    ConfiguredGrantConfig_Periodicity_sym512x12 = 41, /**< ASN.1 sym512x12 */
    ConfiguredGrantConfig_Periodicity_sym640x12 = 42, /**< ASN.1 sym640x12 */
    ConfiguredGrantConfig_Periodicity_sym1280x12 = 43, /**< ASN.1 sym1280x12 */
    ConfiguredGrantConfig_Periodicity_sym2560x12 = 44, /**< ASN.1 sym2560x12 */
} ConfiguredGrantConfig_Periodicity;


/**
 * @brief 枚举 ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_Pusch_RepTypeIndicator_r16（ASN.1 rrc-ConfiguredUplinkGrant/pusch-RepTypeIndicator-r16，源文件第 5546 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_Pusch_RepTypeIndicator_r16 {
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_Pusch_RepTypeIndicator_r16_pusch_RepTypeA = 0, /**< ASN.1 pusch-RepTypeA */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_Pusch_RepTypeIndicator_r16_pusch_RepTypeB = 1, /**< ASN.1 pusch-RepTypeB */
} ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_Pusch_RepTypeIndicator_r16;


/**
 * @brief 枚举 ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_FrequencyHoppingPUSCH_RepTypeB_r16（ASN.1 rrc-ConfiguredUplinkGrant/frequencyHoppingPUSCH-RepTypeB-r16，源文件第 5547 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_FrequencyHoppingPUSCH_RepTypeB_r16 {
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_FrequencyHoppingPUSCH_RepTypeB_r16_interRepetition = 0, /**< ASN.1 interRepetition */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_FrequencyHoppingPUSCH_RepTypeB_r16_interSlot = 1, /**< ASN.1 interSlot */
} ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_FrequencyHoppingPUSCH_RepTypeB_r16;


/**
 * @brief 枚举 ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_TimeReferenceSFN_r16（ASN.1 rrc-ConfiguredUplinkGrant/timeReferenceSFN-r16，源文件第 5548 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_TimeReferenceSFN_r16 {
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_TimeReferenceSFN_r16_sfn512 = 0, /**< ASN.1 sfn512 */
} ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_TimeReferenceSFN_r16;


/**
 * @brief 枚举 ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18（ASN.1 rrc-ConfiguredUplinkGrant/cg-SDT-PeriodicityExt-r18，源文件第 5561 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18 {
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym1x14x1280 = 0, /**< ASN.1 sym1x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym2x14x1280 = 1, /**< ASN.1 sym2x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym4x14x1280 = 2, /**< ASN.1 sym4x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym8x14x1280 = 3, /**< ASN.1 sym8x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym16x14x1280 = 4, /**< ASN.1 sym16x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym32x14x1280 = 5, /**< ASN.1 sym32x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym48x14x1280 = 6, /**< ASN.1 sym48x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym64x14x1280 = 7, /**< ASN.1 sym64x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym96x14x1280 = 8, /**< ASN.1 sym96x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym128x14x1280 = 9, /**< ASN.1 sym128x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym192x14x1280 = 10, /**< ASN.1 sym192x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym240x14x1280 = 11, /**< ASN.1 sym240x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym256x14x1280 = 12, /**< ASN.1 sym256x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym384x14x1280 = 13, /**< ASN.1 sym384x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym472x14x1280 = 14, /**< ASN.1 sym472x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym480x14x1280 = 15, /**< ASN.1 sym480x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym512x14x1280 = 16, /**< ASN.1 sym512x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym768x14x1280 = 17, /**< ASN.1 sym768x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym944x14x1280 = 18, /**< ASN.1 sym944x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym960x14x1280 = 19, /**< ASN.1 sym960x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym1408x14x1280 = 20, /**< ASN.1 sym1408x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym1536x14x1280 = 21, /**< ASN.1 sym1536x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym1888x14x1280 = 22, /**< ASN.1 sym1888x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym1920x14x1280 = 23, /**< ASN.1 sym1920x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym2816x14x1280 = 24, /**< ASN.1 sym2816x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym3072x14x1280 = 25, /**< ASN.1 sym3072x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym3776x14x1280 = 26, /**< ASN.1 sym3776x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym5632x14x1280 = 27, /**< ASN.1 sym5632x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym6144x14x1280 = 28, /**< ASN.1 sym6144x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym7552x14x1280 = 29, /**< ASN.1 sym7552x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym7680x14x1280 = 30, /**< ASN.1 sym7680x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym11264x14x1280 = 31, /**< ASN.1 sym11264x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym15104x14x1280 = 32, /**< ASN.1 sym15104x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym15360x14x1280 = 33, /**< ASN.1 sym15360x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym22528x14x1280 = 34, /**< ASN.1 sym22528x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym30208x14x1280 = 35, /**< ASN.1 sym30208x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym45056x14x1280 = 36, /**< ASN.1 sym45056x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym60416x14x1280 = 37, /**< ASN.1 sym60416x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym90112x14x1280 = 38, /**< ASN.1 sym90112x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym180224x14x1280 = 39, /**< ASN.1 sym180224x14x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym4x12x1280 = 40, /**< ASN.1 sym4x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym8x12x1280 = 41, /**< ASN.1 sym8x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym16x12x1280 = 42, /**< ASN.1 sym16x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym32x12x1280 = 43, /**< ASN.1 sym32x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym192x12x1280 = 44, /**< ASN.1 sym192x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym384x12x1280 = 45, /**< ASN.1 sym384x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym960x12x1280 = 46, /**< ASN.1 sym960x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym1888x12x1280 = 47, /**< ASN.1 sym1888x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym3776x12x1280 = 48, /**< ASN.1 sym3776x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym5632x12x1280 = 49, /**< ASN.1 sym5632x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_sym11264x12x1280 = 50, /**< ASN.1 sym11264x12x1280 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare13 = 51, /**< ASN.1 spare13 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare12 = 52, /**< ASN.1 spare12 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare11 = 53, /**< ASN.1 spare11 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare10 = 54, /**< ASN.1 spare10 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare9 = 55, /**< ASN.1 spare9 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare8 = 56, /**< ASN.1 spare8 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare7 = 57, /**< ASN.1 spare7 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare6 = 58, /**< ASN.1 spare6 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare5 = 59, /**< ASN.1 spare5 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare4 = 60, /**< ASN.1 spare4 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare3 = 61, /**< ASN.1 spare3 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare2 = 62, /**< ASN.1 spare2 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18_spare1 = 63, /**< ASN.1 spare1 */
} ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18;


/**
 * @brief 枚举 ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_ApplyIndicatedTCI_State_r18（ASN.1 rrc-ConfiguredUplinkGrant/applyIndicatedTCI-State-r18，源文件第 5578 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_ApplyIndicatedTCI_State_r18 {
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_ApplyIndicatedTCI_State_r18_first = 0, /**< ASN.1 first */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_ApplyIndicatedTCI_State_r18_second = 1, /**< ASN.1 second */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_ApplyIndicatedTCI_State_r18_both = 2, /**< ASN.1 both */
} ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_ApplyIndicatedTCI_State_r18;


/**
 * @brief 枚举 ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16（ASN.1 cg-minDFI-Delay-r16，源文件第 5584 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16 {
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym7 = 0, /**< ASN.1 sym7 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym1x14 = 1, /**< ASN.1 sym1x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym2x14 = 2, /**< ASN.1 sym2x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym3x14 = 3, /**< ASN.1 sym3x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym4x14 = 4, /**< ASN.1 sym4x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym5x14 = 5, /**< ASN.1 sym5x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym6x14 = 6, /**< ASN.1 sym6x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym7x14 = 7, /**< ASN.1 sym7x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym8x14 = 8, /**< ASN.1 sym8x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym9x14 = 9, /**< ASN.1 sym9x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym10x14 = 10, /**< ASN.1 sym10x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym11x14 = 11, /**< ASN.1 sym11x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym12x14 = 12, /**< ASN.1 sym12x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym13x14 = 13, /**< ASN.1 sym13x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym14x14 = 14, /**< ASN.1 sym14x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym15x14 = 15, /**< ASN.1 sym15x14 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16_sym16x14 = 16, /**< ASN.1 sym16x14 */
} ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16;


/**
 * @brief 枚举 ConfiguredGrantConfig_ExtGroup1_Cg_UCI_Multiplexing_r16（ASN.1 cg-UCI-Multiplexing-r16，源文件第 5591 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_ExtGroup1_Cg_UCI_Multiplexing_r16 {
    ConfiguredGrantConfig_ExtGroup1_Cg_UCI_Multiplexing_r16_enabled = 0, /**< ASN.1 enabled */
} ConfiguredGrantConfig_ExtGroup1_Cg_UCI_Multiplexing_r16;


/**
 * @brief 枚举 ConfiguredGrantConfig_ExtGroup1_StartingFromRV0_r16（ASN.1 startingFromRV0-r16，源文件第 5600 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_ExtGroup1_StartingFromRV0_r16 {
    ConfiguredGrantConfig_ExtGroup1_StartingFromRV0_r16_on = 0, /**< ASN.1 on */
    ConfiguredGrantConfig_ExtGroup1_StartingFromRV0_r16_off = 1, /**< ASN.1 off */
} ConfiguredGrantConfig_ExtGroup1_StartingFromRV0_r16;


/**
 * @brief 枚举 ConfiguredGrantConfig_ExtGroup1_Phy_PriorityIndex_r16（ASN.1 phy-PriorityIndex-r16，源文件第 5601 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_ExtGroup1_Phy_PriorityIndex_r16 {
    ConfiguredGrantConfig_ExtGroup1_Phy_PriorityIndex_r16_p0 = 0, /**< ASN.1 p0 */
    ConfiguredGrantConfig_ExtGroup1_Phy_PriorityIndex_r16_p1 = 1, /**< ASN.1 p1 */
} ConfiguredGrantConfig_ExtGroup1_Phy_PriorityIndex_r16;


/**
 * @brief 枚举 ConfiguredGrantConfig_ExtGroup1_AutonomousTx_r16（ASN.1 autonomousTx-r16，源文件第 5602 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_ExtGroup1_AutonomousTx_r16 {
    ConfiguredGrantConfig_ExtGroup1_AutonomousTx_r16_enabled = 0, /**< ASN.1 enabled */
} ConfiguredGrantConfig_ExtGroup1_AutonomousTx_r16;


/**
 * @brief 枚举 ConfiguredGrantConfig_ExtGroup2_MappingPattern_r17（ASN.1 mappingPattern-r17，源文件第 5607 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_ExtGroup2_MappingPattern_r17 {
    ConfiguredGrantConfig_ExtGroup2_MappingPattern_r17_cyclicMapping = 0, /**< ASN.1 cyclicMapping */
    ConfiguredGrantConfig_ExtGroup2_MappingPattern_r17_sequentialMapping = 1, /**< ASN.1 sequentialMapping */
} ConfiguredGrantConfig_ExtGroup2_MappingPattern_r17;


/**
 * @brief 枚举 ConfiguredGrantConfig_ExtGroup2_PowerControlLoopToUse2_r17（ASN.1 powerControlLoopToUse2-r17，源文件第 5610 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_ExtGroup2_PowerControlLoopToUse2_r17 {
    ConfiguredGrantConfig_ExtGroup2_PowerControlLoopToUse2_r17_n0 = 0, /**< ASN.1 n0 */
    ConfiguredGrantConfig_ExtGroup2_PowerControlLoopToUse2_r17_n1 = 1, /**< ASN.1 n1 */
} ConfiguredGrantConfig_ExtGroup2_PowerControlLoopToUse2_r17;


/**
 * @brief 枚举 ConfiguredGrantConfig_ExtGroup2_RepK_v1710（ASN.1 repK-v1710，源文件第 5613 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_ExtGroup2_RepK_v1710 {
    ConfiguredGrantConfig_ExtGroup2_RepK_v1710_n12 = 0, /**< ASN.1 n12 */
    ConfiguredGrantConfig_ExtGroup2_RepK_v1710_n16 = 1, /**< ASN.1 n16 */
    ConfiguredGrantConfig_ExtGroup2_RepK_v1710_n24 = 2, /**< ASN.1 n24 */
    ConfiguredGrantConfig_ExtGroup2_RepK_v1710_n32 = 3, /**< ASN.1 n32 */
} ConfiguredGrantConfig_ExtGroup2_RepK_v1710;


/**
 * @brief 枚举 ConfiguredGrantConfig_ExtGroup4_DisableCG_RetransmissionMonitoring_r18（ASN.1 disableCG-RetransmissionMonitoring-r18，源文件第 5624 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConfiguredGrantConfig_ExtGroup4_DisableCG_RetransmissionMonitoring_r18 {
    ConfiguredGrantConfig_ExtGroup4_DisableCG_RetransmissionMonitoring_r18_trueVal = 0, /**< ASN.1 trueVal */
} ConfiguredGrantConfig_ExtGroup4_DisableCG_RetransmissionMonitoring_r18;


/**
 * @brief 枚举 CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17（ASN.1 sdt-SSB-PerCG-PUSCH-r17，源文件第 5675 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17 {
    CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17_oneEighth = 0, /**< ASN.1 oneEighth */
    CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17_oneFourth = 1, /**< ASN.1 oneFourth */
    CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17_half = 2, /**< ASN.1 half */
    CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17_one = 3, /**< ASN.1 one */
    CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17_two = 4, /**< ASN.1 two */
    CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17_four = 5, /**< ASN.1 four */
    CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17_eight = 6, /**< ASN.1 eight */
    CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17_sixteen = 7, /**< ASN.1 sixteen */
} CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17;


/**
 * @brief 枚举 CG_SDT_Configuration_r17_Sdt_Alpha_r17（ASN.1 sdt-Alpha-r17，源文件第 5677 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CG_SDT_Configuration_r17_Sdt_Alpha_r17 {
    CG_SDT_Configuration_r17_Sdt_Alpha_r17_alpha0 = 0, /**< ASN.1 alpha0 */
    CG_SDT_Configuration_r17_Sdt_Alpha_r17_alpha04 = 1, /**< ASN.1 alpha04 */
    CG_SDT_Configuration_r17_Sdt_Alpha_r17_alpha05 = 2, /**< ASN.1 alpha05 */
    CG_SDT_Configuration_r17_Sdt_Alpha_r17_alpha06 = 3, /**< ASN.1 alpha06 */
    CG_SDT_Configuration_r17_Sdt_Alpha_r17_alpha07 = 4, /**< ASN.1 alpha07 */
    CG_SDT_Configuration_r17_Sdt_Alpha_r17_alpha08 = 5, /**< ASN.1 alpha08 */
    CG_SDT_Configuration_r17_Sdt_Alpha_r17_alpha09 = 6, /**< ASN.1 alpha09 */
    CG_SDT_Configuration_r17_Sdt_Alpha_r17_alpha1 = 7, /**< ASN.1 alpha1 */
} CG_SDT_Configuration_r17_Sdt_Alpha_r17;


/**
 * @brief 枚举 CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18（ASN.1 rrc-SSB-PerCG-PUSCH-r18，源文件第 5693 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18 {
    CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18_oneEighth = 0, /**< ASN.1 oneEighth */
    CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18_oneFourth = 1, /**< ASN.1 oneFourth */
    CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18_half = 2, /**< ASN.1 half */
    CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18_one = 3, /**< ASN.1 one */
    CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18_two = 4, /**< ASN.1 two */
    CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18_four = 5, /**< ASN.1 four */
    CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18_eight = 6, /**< ASN.1 eight */
    CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18_sixteen = 7, /**< ASN.1 sixteen */
} CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18;


/**
 * @brief 枚举 CG_RRC_Configuration_r18_Rrc_Alpha_r18（ASN.1 rrc-Alpha-r18，源文件第 5695 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CG_RRC_Configuration_r18_Rrc_Alpha_r18 {
    CG_RRC_Configuration_r18_Rrc_Alpha_r18_alpha0 = 0, /**< ASN.1 alpha0 */
    CG_RRC_Configuration_r18_Rrc_Alpha_r18_alpha04 = 1, /**< ASN.1 alpha04 */
    CG_RRC_Configuration_r18_Rrc_Alpha_r18_alpha05 = 2, /**< ASN.1 alpha05 */
    CG_RRC_Configuration_r18_Rrc_Alpha_r18_alpha06 = 3, /**< ASN.1 alpha06 */
    CG_RRC_Configuration_r18_Rrc_Alpha_r18_alpha07 = 4, /**< ASN.1 alpha07 */
    CG_RRC_Configuration_r18_Rrc_Alpha_r18_alpha08 = 5, /**< ASN.1 alpha08 */
    CG_RRC_Configuration_r18_Rrc_Alpha_r18_alpha09 = 6, /**< ASN.1 alpha09 */
    CG_RRC_Configuration_r18_Rrc_Alpha_r18_alpha1 = 7, /**< ASN.1 alpha1 */
} CG_RRC_Configuration_r18_Rrc_Alpha_r18;


/**
 * @brief 枚举 ConnEstFailureControl_ConnEstFailCount（ASN.1 connEstFailCount，源文件第 5717 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConnEstFailureControl_ConnEstFailCount {
    ConnEstFailureControl_ConnEstFailCount_n1 = 0, /**< ASN.1 n1 */
    ConnEstFailureControl_ConnEstFailCount_n2 = 1, /**< ASN.1 n2 */
    ConnEstFailureControl_ConnEstFailCount_n3 = 2, /**< ASN.1 n3 */
    ConnEstFailureControl_ConnEstFailCount_n4 = 3, /**< ASN.1 n4 */
} ConnEstFailureControl_ConnEstFailCount;


/**
 * @brief 枚举 ConnEstFailureControl_ConnEstFailOffsetValidity（ASN.1 connEstFailOffsetValidity，源文件第 5718 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ConnEstFailureControl_ConnEstFailOffsetValidity {
    ConnEstFailureControl_ConnEstFailOffsetValidity_s30 = 0, /**< ASN.1 s30 */
    ConnEstFailureControl_ConnEstFailOffsetValidity_s60 = 1, /**< ASN.1 s60 */
    ConnEstFailureControl_ConnEstFailOffsetValidity_s120 = 2, /**< ASN.1 s120 */
    ConnEstFailureControl_ConnEstFailOffsetValidity_s240 = 3, /**< ASN.1 s240 */
    ConnEstFailureControl_ConnEstFailOffsetValidity_s300 = 4, /**< ASN.1 s300 */
    ConnEstFailureControl_ConnEstFailOffsetValidity_s420 = 5, /**< ASN.1 s420 */
    ConnEstFailureControl_ConnEstFailOffsetValidity_s600 = 6, /**< ASN.1 s600 */
    ConnEstFailureControl_ConnEstFailOffsetValidity_s900 = 7, /**< ASN.1 s900 */
} ConnEstFailureControl_ConnEstFailOffsetValidity;


/**
 * @brief 枚举 ControlResourceSet_Cce_REG_MappingType_Interleaved_Reg_BundleSize（ASN.1 cce-REG-MappingType/interleaved/reg-BundleSize，源文件第 5731 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ControlResourceSet_Cce_REG_MappingType_Interleaved_Reg_BundleSize {
    ControlResourceSet_Cce_REG_MappingType_Interleaved_Reg_BundleSize_n2 = 0, /**< ASN.1 n2 */
    ControlResourceSet_Cce_REG_MappingType_Interleaved_Reg_BundleSize_n3 = 1, /**< ASN.1 n3 */
    ControlResourceSet_Cce_REG_MappingType_Interleaved_Reg_BundleSize_n6 = 2, /**< ASN.1 n6 */
} ControlResourceSet_Cce_REG_MappingType_Interleaved_Reg_BundleSize;


/**
 * @brief 枚举 ControlResourceSet_Cce_REG_MappingType_Interleaved_InterleaverSize（ASN.1 cce-REG-MappingType/interleaved/interleaverSize，源文件第 5732 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ControlResourceSet_Cce_REG_MappingType_Interleaved_InterleaverSize {
    ControlResourceSet_Cce_REG_MappingType_Interleaved_InterleaverSize_n2 = 0, /**< ASN.1 n2 */
    ControlResourceSet_Cce_REG_MappingType_Interleaved_InterleaverSize_n3 = 1, /**< ASN.1 n3 */
    ControlResourceSet_Cce_REG_MappingType_Interleaved_InterleaverSize_n6 = 2, /**< ASN.1 n6 */
} ControlResourceSet_Cce_REG_MappingType_Interleaved_InterleaverSize;


/**
 * @brief 枚举 ControlResourceSet_PrecoderGranularity（ASN.1 precoderGranularity，源文件第 5737 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ControlResourceSet_PrecoderGranularity {
    ControlResourceSet_PrecoderGranularity_sameAsREG_bundle = 0, /**< ASN.1 sameAsREG-bundle */
    ControlResourceSet_PrecoderGranularity_allContiguousRBs = 1, /**< ASN.1 allContiguousRBs */
} ControlResourceSet_PrecoderGranularity;


/**
 * @brief 枚举 ControlResourceSet_Tci_PresentInDCI（ASN.1 tci-PresentInDCI，源文件第 5740 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ControlResourceSet_Tci_PresentInDCI {
    ControlResourceSet_Tci_PresentInDCI_enabled = 0, /**< ASN.1 enabled */
} ControlResourceSet_Tci_PresentInDCI;


/**
 * @brief 枚举 ControlResourceSet_ExtGroup2_FollowUnifiedTCI_State_r17（ASN.1 followUnifiedTCI-State-r17，源文件第 5750 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ControlResourceSet_ExtGroup2_FollowUnifiedTCI_State_r17 {
    ControlResourceSet_ExtGroup2_FollowUnifiedTCI_State_r17_enabled = 0, /**< ASN.1 enabled */
} ControlResourceSet_ExtGroup2_FollowUnifiedTCI_State_r17;


/**
 * @brief 枚举 ControlResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18（ASN.1 applyIndicatedTCI-State-r18，源文件第 5753 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ControlResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18 {
    ControlResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18_first = 0, /**< ASN.1 first */
    ControlResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18_second = 1, /**< ASN.1 second */
    ControlResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18_both = 2, /**< ASN.1 both */
    ControlResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18_none = 3, /**< ASN.1 none */
} ControlResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18;


/**
 * @brief 枚举 CrossCarrierSchedulingConfig_ExtGroup1_EnableDefaultBeamForCCS_r16（ASN.1 enableDefaultBeamForCCS-r16，源文件第 5790 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CrossCarrierSchedulingConfig_ExtGroup1_EnableDefaultBeamForCCS_r16 {
    CrossCarrierSchedulingConfig_ExtGroup1_EnableDefaultBeamForCCS_r16_enabled = 0, /**< ASN.1 enabled */
} CrossCarrierSchedulingConfig_ExtGroup1_EnableDefaultBeamForCCS_r16;


/**
 * @brief 枚举 CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17（ASN.1 ccs-BlindDetectionSplit-r17，源文件第 5793 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17 {
    CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17_oneSeventh = 0, /**< ASN.1 oneSeventh */
    CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17_threeFourteenth = 1, /**< ASN.1 threeFourteenth */
    CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17_twoSeventh = 2, /**< ASN.1 twoSeventh */
    CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17_threeSeventh = 3, /**< ASN.1 threeSeventh */
    CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17_oneHalf = 4, /**< ASN.1 oneHalf */
    CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17_fourSeventh = 5, /**< ASN.1 fourSeventh */
    CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17_fiveSeventh = 6, /**< ASN.1 fiveSeventh */
    CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17_spare1 = 7, /**< ASN.1 spare1 */
} CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17;


/**
 * @brief 枚举 CSI_AperiodicTriggerState_ExtGroup1_Ap_CSI_MultiplexingMode_r17（ASN.1 ap-CSI-MultiplexingMode-r17，源文件第 5807 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_AperiodicTriggerState_ExtGroup1_Ap_CSI_MultiplexingMode_r17 {
    CSI_AperiodicTriggerState_ExtGroup1_Ap_CSI_MultiplexingMode_r17_enabled = 0, /**< ASN.1 enabled */
} CSI_AperiodicTriggerState_ExtGroup1_Ap_CSI_MultiplexingMode_r17;


/**
 * @brief 枚举 CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerSet_r18（ASN.1 applyIndicatedTCI-State-r18/perSet-r18，源文件第 5844 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerSet_r18 {
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerSet_r18_first = 0, /**< ASN.1 first */
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerSet_r18_second = 1, /**< ASN.1 second */
} CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerSet_r18;


/**
 * @brief 枚举 CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item（ASN.1 applyIndicatedTCI-State-r18/perResource-r18/Item，源文件第 5845 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item {
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item_first = 0, /**< ASN.1 first */
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item_second = 1, /**< ASN.1 second */
} CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item;


/**
 * @brief 枚举 CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerSet_r18（ASN.1 applyIndicatedTCI-State2-r18/perSet-r18，源文件第 5848 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerSet_r18 {
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerSet_r18_first = 0, /**< ASN.1 first */
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerSet_r18_second = 1, /**< ASN.1 second */
} CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerSet_r18;


/**
 * @brief 枚举 CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item（ASN.1 applyIndicatedTCI-State2-r18/perResource-r18/Item，源文件第 5849 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item {
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item_first = 0, /**< ASN.1 first */
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item_second = 1, /**< ASN.1 second */
} CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item;


/**
 * @brief 枚举 CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0（ASN.1 csi-IM-ResourceElementPattern/pattern0/subcarrierLocation-p0，源文件第 5871 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0 {
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0_s0 = 0, /**< ASN.1 s0 */
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0_s2 = 1, /**< ASN.1 s2 */
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0_s4 = 2, /**< ASN.1 s4 */
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0_s6 = 3, /**< ASN.1 s6 */
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0_s8 = 4, /**< ASN.1 s8 */
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0_s10 = 5, /**< ASN.1 s10 */
} CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0;


/**
 * @brief 枚举 CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1_SubcarrierLocation_p1（ASN.1 csi-IM-ResourceElementPattern/pattern1/subcarrierLocation-p1，源文件第 5875 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1_SubcarrierLocation_p1 {
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1_SubcarrierLocation_p1_s0 = 0, /**< ASN.1 s0 */
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1_SubcarrierLocation_p1_s4 = 1, /**< ASN.1 s4 */
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1_SubcarrierLocation_p1_s8 = 2, /**< ASN.1 s8 */
} CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1_SubcarrierLocation_p1;


/**
 * @brief 枚举 CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig（ASN.1 reportConfigType/semiPersistentOnPUSCH/reportSlotConfig，源文件第 5963 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig {
    CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig_sl5 = 0, /**< ASN.1 sl5 */
    CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig_sl10 = 1, /**< ASN.1 sl10 */
    CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig_sl20 = 2, /**< ASN.1 sl20 */
    CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig_sl40 = 3, /**< ASN.1 sl40 */
    CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig_sl80 = 4, /**< ASN.1 sl80 */
    CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig_sl160 = 5, /**< ASN.1 sl160 */
    CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig_sl320 = 6, /**< ASN.1 sl320 */
} CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig;


/**
 * @brief 枚举 CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI_Pdsch_BundleSizeForCSI（ASN.1 reportQuantity/cri-RI-i1-CQI/pdsch-BundleSizeForCSI，源文件第 5976 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI_Pdsch_BundleSizeForCSI {
    CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI_Pdsch_BundleSizeForCSI_n2 = 0, /**< ASN.1 n2 */
    CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI_Pdsch_BundleSizeForCSI_n4 = 1, /**< ASN.1 n4 */
} CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI_Pdsch_BundleSizeForCSI;


/**
 * @brief 枚举 CSI_ReportConfig_ReportFreqConfiguration_Cqi_FormatIndicator（ASN.1 reportFreqConfiguration/cqi-FormatIndicator，源文件第 5984 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_ReportFreqConfiguration_Cqi_FormatIndicator {
    CSI_ReportConfig_ReportFreqConfiguration_Cqi_FormatIndicator_widebandCQI = 0, /**< ASN.1 widebandCQI */
    CSI_ReportConfig_ReportFreqConfiguration_Cqi_FormatIndicator_subbandCQI = 1, /**< ASN.1 subbandCQI */
} CSI_ReportConfig_ReportFreqConfiguration_Cqi_FormatIndicator;


/**
 * @brief 枚举 CSI_ReportConfig_ReportFreqConfiguration_Pmi_FormatIndicator（ASN.1 reportFreqConfiguration/pmi-FormatIndicator，源文件第 5985 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_ReportFreqConfiguration_Pmi_FormatIndicator {
    CSI_ReportConfig_ReportFreqConfiguration_Pmi_FormatIndicator_widebandPMI = 0, /**< ASN.1 widebandPMI */
    CSI_ReportConfig_ReportFreqConfiguration_Pmi_FormatIndicator_subbandPMI = 1, /**< ASN.1 subbandPMI */
} CSI_ReportConfig_ReportFreqConfiguration_Pmi_FormatIndicator;


/**
 * @brief 枚举 CSI_ReportConfig_TimeRestrictionForChannelMeasurements（ASN.1 timeRestrictionForChannelMeasurements，源文件第 6008 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_TimeRestrictionForChannelMeasurements {
    CSI_ReportConfig_TimeRestrictionForChannelMeasurements_configured = 0, /**< ASN.1 configured */
    CSI_ReportConfig_TimeRestrictionForChannelMeasurements_notConfigured = 1, /**< ASN.1 notConfigured */
} CSI_ReportConfig_TimeRestrictionForChannelMeasurements;


/**
 * @brief 枚举 CSI_ReportConfig_TimeRestrictionForInterferenceMeasurements（ASN.1 timeRestrictionForInterferenceMeasurements，源文件第 6009 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_TimeRestrictionForInterferenceMeasurements {
    CSI_ReportConfig_TimeRestrictionForInterferenceMeasurements_configured = 0, /**< ASN.1 configured */
    CSI_ReportConfig_TimeRestrictionForInterferenceMeasurements_notConfigured = 1, /**< ASN.1 notConfigured */
} CSI_ReportConfig_TimeRestrictionForInterferenceMeasurements;


/**
 * @brief 枚举 CSI_ReportConfig_Dummy（ASN.1 dummy，源文件第 6011 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_Dummy {
    CSI_ReportConfig_Dummy_n1 = 0, /**< ASN.1 n1 */
    CSI_ReportConfig_Dummy_n2 = 1, /**< ASN.1 n2 */
} CSI_ReportConfig_Dummy;


/**
 * @brief 枚举 CSI_ReportConfig_GroupBasedBeamReporting_Disabled_NrofReportedRS（ASN.1 groupBasedBeamReporting/disabled/nrofReportedRS，源文件第 6015 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_GroupBasedBeamReporting_Disabled_NrofReportedRS {
    CSI_ReportConfig_GroupBasedBeamReporting_Disabled_NrofReportedRS_n1 = 0, /**< ASN.1 n1 */
    CSI_ReportConfig_GroupBasedBeamReporting_Disabled_NrofReportedRS_n2 = 1, /**< ASN.1 n2 */
    CSI_ReportConfig_GroupBasedBeamReporting_Disabled_NrofReportedRS_n3 = 2, /**< ASN.1 n3 */
    CSI_ReportConfig_GroupBasedBeamReporting_Disabled_NrofReportedRS_n4 = 3, /**< ASN.1 n4 */
} CSI_ReportConfig_GroupBasedBeamReporting_Disabled_NrofReportedRS;


/**
 * @brief 枚举 CSI_ReportConfig_Cqi_Table（ASN.1 cqi-Table，源文件第 6018 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_Cqi_Table {
    CSI_ReportConfig_Cqi_Table_table1 = 0, /**< ASN.1 table1 */
    CSI_ReportConfig_Cqi_Table_table2 = 1, /**< ASN.1 table2 */
    CSI_ReportConfig_Cqi_Table_table3 = 2, /**< ASN.1 table3 */
    CSI_ReportConfig_Cqi_Table_table4_r17 = 3, /**< ASN.1 table4-r17 */
} CSI_ReportConfig_Cqi_Table;


/**
 * @brief 枚举 CSI_ReportConfig_SubbandSize（ASN.1 subbandSize，源文件第 6019 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_SubbandSize {
    CSI_ReportConfig_SubbandSize_value1 = 0, /**< ASN.1 value1 */
    CSI_ReportConfig_SubbandSize_value2 = 1, /**< ASN.1 value2 */
} CSI_ReportConfig_SubbandSize;


/**
 * @brief 枚举 CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530_ReportSlotConfig_v1530（ASN.1 semiPersistentOnPUSCH-v1530/reportSlotConfig-v1530，源文件第 6024 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530_ReportSlotConfig_v1530 {
    CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530_ReportSlotConfig_v1530_sl4 = 0, /**< ASN.1 sl4 */
    CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530_ReportSlotConfig_v1530_sl8 = 1, /**< ASN.1 sl8 */
    CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530_ReportSlotConfig_v1530_sl16 = 2, /**< ASN.1 sl16 */
} CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530_ReportSlotConfig_v1530;


/**
 * @brief 枚举 CSI_ReportConfig_ExtGroup3_Cqi_BitsPerSubband_r17（ASN.1 cqi-BitsPerSubband-r17，源文件第 6043 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_ExtGroup3_Cqi_BitsPerSubband_r17 {
    CSI_ReportConfig_ExtGroup3_Cqi_BitsPerSubband_r17_bits4 = 0, /**< ASN.1 bits4 */
} CSI_ReportConfig_ExtGroup3_Cqi_BitsPerSubband_r17;


/**
 * @brief 枚举 CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710_NrofReportedGroups_r17（ASN.1 groupBasedBeamReporting-v1710/nrofReportedGroups-r17，源文件第 6045 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710_NrofReportedGroups_r17 {
    CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710_NrofReportedGroups_r17_n1 = 0, /**< ASN.1 n1 */
    CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710_NrofReportedGroups_r17_n2 = 1, /**< ASN.1 n2 */
    CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710_NrofReportedGroups_r17_n3 = 2, /**< ASN.1 n3 */
    CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710_NrofReportedGroups_r17_n4 = 3, /**< ASN.1 n4 */
} CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710_NrofReportedGroups_r17;


/**
 * @brief 枚举 CSI_ReportConfig_ExtGroup3_SharedCMR_r17（ASN.1 sharedCMR-r17，源文件第 6048 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_ExtGroup3_SharedCMR_r17 {
    CSI_ReportConfig_ExtGroup3_SharedCMR_r17_enable = 0, /**< ASN.1 enable */
} CSI_ReportConfig_ExtGroup3_SharedCMR_r17;


/**
 * @brief 枚举 CSI_ReportConfig_ExtGroup3_Csi_ReportMode_r17（ASN.1 csi-ReportMode-r17，源文件第 6049 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_ExtGroup3_Csi_ReportMode_r17 {
    CSI_ReportConfig_ExtGroup3_Csi_ReportMode_r17_mode1 = 0, /**< ASN.1 mode1 */
    CSI_ReportConfig_ExtGroup3_Csi_ReportMode_r17_mode2 = 1, /**< ASN.1 mode2 */
} CSI_ReportConfig_ExtGroup3_Csi_ReportMode_r17;


/**
 * @brief 枚举 CSI_ReportConfig_ExtGroup3_NumberOfSingleTRP_CSI_Mode1_r17（ASN.1 numberOfSingleTRP-CSI-Mode1-r17，源文件第 6050 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_ExtGroup3_NumberOfSingleTRP_CSI_Mode1_r17 {
    CSI_ReportConfig_ExtGroup3_NumberOfSingleTRP_CSI_Mode1_r17_n0 = 0, /**< ASN.1 n0 */
    CSI_ReportConfig_ExtGroup3_NumberOfSingleTRP_CSI_Mode1_r17_n1 = 1, /**< ASN.1 n1 */
    CSI_ReportConfig_ExtGroup3_NumberOfSingleTRP_CSI_Mode1_r17_n2 = 2, /**< ASN.1 n2 */
} CSI_ReportConfig_ExtGroup3_NumberOfSingleTRP_CSI_Mode1_r17;


/**
 * @brief 枚举 CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800_ReportingMode_r18（ASN.1 groupBasedBeamReporting-v1800/reportingMode-r18，源文件第 6075 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800_ReportingMode_r18 {
    CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800_ReportingMode_r18_jointULDL = 0, /**< ASN.1 jointULDL */
    CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800_ReportingMode_r18_onlyUL = 1, /**< ASN.1 onlyUL */
} CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800_ReportingMode_r18;


/**
 * @brief 枚举 TDCP_r18_PhaseReporting_r18（ASN.1 phaseReporting-r18，源文件第 6129 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TDCP_r18_PhaseReporting_r18 {
    TDCP_r18_PhaseReporting_r18_enable = 0, /**< ASN.1 enable */
} TDCP_r18_PhaseReporting_r18;


/**
 * @brief 枚举 CSI_ResourceConfig_ResourceType（ASN.1 resourceType，源文件第 6192 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ResourceConfig_ResourceType {
    CSI_ResourceConfig_ResourceType_aperiodic = 0, /**< ASN.1 aperiodic */
    CSI_ResourceConfig_ResourceType_semiPersistent = 1, /**< ASN.1 semiPersistent */
    CSI_ResourceConfig_ResourceType_periodic = 2, /**< ASN.1 periodic */
} CSI_ResourceConfig_ResourceType;


/**
 * @brief 枚举 CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs（ASN.1 csi-rs-MeasurementBW/nrofPRBs，源文件第 6240 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs {
    CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs_size24 = 0, /**< ASN.1 size24 */
    CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs_size48 = 1, /**< ASN.1 size48 */
    CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs_size96 = 2, /**< ASN.1 size96 */
    CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs_size192 = 3, /**< ASN.1 size192 */
    CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs_size264 = 4, /**< ASN.1 size264 */
} CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs;


/**
 * @brief 枚举 CSI_RS_CellMobility_Density（ASN.1 density，源文件第 6243 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_RS_CellMobility_Density {
    CSI_RS_CellMobility_Density_d1 = 0, /**< ASN.1 d1 */
    CSI_RS_CellMobility_Density_d3 = 1, /**< ASN.1 d3 */
} CSI_RS_CellMobility_Density;


/**
 * @brief 枚举 CSI_RS_ResourceMapping_NrofPorts（ASN.1 nrofPorts，源文件第 6290 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_RS_ResourceMapping_NrofPorts {
    CSI_RS_ResourceMapping_NrofPorts_p1 = 0, /**< ASN.1 p1 */
    CSI_RS_ResourceMapping_NrofPorts_p2 = 1, /**< ASN.1 p2 */
    CSI_RS_ResourceMapping_NrofPorts_p4 = 2, /**< ASN.1 p4 */
    CSI_RS_ResourceMapping_NrofPorts_p8 = 3, /**< ASN.1 p8 */
    CSI_RS_ResourceMapping_NrofPorts_p12 = 4, /**< ASN.1 p12 */
    CSI_RS_ResourceMapping_NrofPorts_p16 = 5, /**< ASN.1 p16 */
    CSI_RS_ResourceMapping_NrofPorts_p24 = 6, /**< ASN.1 p24 */
    CSI_RS_ResourceMapping_NrofPorts_p32 = 7, /**< ASN.1 p32 */
} CSI_RS_ResourceMapping_NrofPorts;


/**
 * @brief 枚举 CSI_RS_ResourceMapping_Cdm_Type（ASN.1 cdm-Type，源文件第 6293 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_RS_ResourceMapping_Cdm_Type {
    CSI_RS_ResourceMapping_Cdm_Type_noCDM = 0, /**< ASN.1 noCDM */
    CSI_RS_ResourceMapping_Cdm_Type_fd_CDM2 = 1, /**< ASN.1 fd-CDM2 */
    CSI_RS_ResourceMapping_Cdm_Type_cdm4_FD2_TD2 = 2, /**< ASN.1 cdm4-FD2-TD2 */
    CSI_RS_ResourceMapping_Cdm_Type_cdm8_FD2_TD4 = 3, /**< ASN.1 cdm8-FD2-TD4 */
} CSI_RS_ResourceMapping_Cdm_Type;


/**
 * @brief 枚举 CSI_RS_ResourceMapping_Density_Dot5（ASN.1 density/dot5，源文件第 6295 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_RS_ResourceMapping_Density_Dot5 {
    CSI_RS_ResourceMapping_Density_Dot5_evenPRBs = 0, /**< ASN.1 evenPRBs */
    CSI_RS_ResourceMapping_Density_Dot5_oddPRBs = 1, /**< ASN.1 oddPRBs */
} CSI_RS_ResourceMapping_Density_Dot5;


/**
 * @brief 枚举 CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1_Sp_CSI_MultiplexingMode_r17（ASN.1 sp-CSI-MultiplexingMode-r17，源文件第 6313 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1_Sp_CSI_MultiplexingMode_r17 {
    CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1_Sp_CSI_MultiplexingMode_r17_enabled = 0, /**< ASN.1 enabled */
} CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1_Sp_CSI_MultiplexingMode_r17;


/**
 * @brief 枚举 DL_PPW_PreConfig_r17_Type_r17（ASN.1 type-r17，源文件第 6352 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PPW_PreConfig_r17_Type_r17 {
    DL_PPW_PreConfig_r17_Type_r17_type1A = 0, /**< ASN.1 type1A */
    DL_PPW_PreConfig_r17_Type_r17_type1B = 1, /**< ASN.1 type1B */
    DL_PPW_PreConfig_r17_Type_r17_type2 = 2, /**< ASN.1 type2 */
} DL_PPW_PreConfig_r17_Type_r17;


/**
 * @brief 枚举 DL_PPW_PreConfig_r17_Priority_r17（ASN.1 priority-r17，源文件第 6353 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PPW_PreConfig_r17_Priority_r17 {
    DL_PPW_PreConfig_r17_Priority_r17_st1 = 0, /**< ASN.1 st1 */
    DL_PPW_PreConfig_r17_Priority_r17_st2 = 1, /**< ASN.1 st2 */
    DL_PPW_PreConfig_r17_Priority_r17_st3 = 2, /**< ASN.1 st3 */
} DL_PPW_PreConfig_r17_Priority_r17;


/**
 * @brief 枚举 DMRS_BundlingPUCCH_Config_r17_Pucch_DMRS_Bundling_r17（ASN.1 pucch-DMRS-Bundling-r17，源文件第 6446 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_BundlingPUCCH_Config_r17_Pucch_DMRS_Bundling_r17 {
    DMRS_BundlingPUCCH_Config_r17_Pucch_DMRS_Bundling_r17_enabled = 0, /**< ASN.1 enabled */
} DMRS_BundlingPUCCH_Config_r17_Pucch_DMRS_Bundling_r17;


/**
 * @brief 枚举 DMRS_BundlingPUCCH_Config_r17_Pucch_WindowRestart_r17（ASN.1 pucch-WindowRestart-r17，源文件第 6448 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_BundlingPUCCH_Config_r17_Pucch_WindowRestart_r17 {
    DMRS_BundlingPUCCH_Config_r17_Pucch_WindowRestart_r17_enabled = 0, /**< ASN.1 enabled */
} DMRS_BundlingPUCCH_Config_r17_Pucch_WindowRestart_r17;


/**
 * @brief 枚举 DMRS_BundlingPUCCH_Config_r17_Pucch_FrequencyHoppingInterval_r17（ASN.1 pucch-FrequencyHoppingInterval-r17，源文件第 6449 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_BundlingPUCCH_Config_r17_Pucch_FrequencyHoppingInterval_r17 {
    DMRS_BundlingPUCCH_Config_r17_Pucch_FrequencyHoppingInterval_r17_s2 = 0, /**< ASN.1 s2 */
    DMRS_BundlingPUCCH_Config_r17_Pucch_FrequencyHoppingInterval_r17_s4 = 1, /**< ASN.1 s4 */
    DMRS_BundlingPUCCH_Config_r17_Pucch_FrequencyHoppingInterval_r17_s5 = 2, /**< ASN.1 s5 */
    DMRS_BundlingPUCCH_Config_r17_Pucch_FrequencyHoppingInterval_r17_s10 = 3, /**< ASN.1 s10 */
} DMRS_BundlingPUCCH_Config_r17_Pucch_FrequencyHoppingInterval_r17;


/**
 * @brief 枚举 DMRS_BundlingPUSCH_Config_r17_Pusch_DMRS_Bundling_r17（ASN.1 pusch-DMRS-Bundling-r17，源文件第 6457 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_BundlingPUSCH_Config_r17_Pusch_DMRS_Bundling_r17 {
    DMRS_BundlingPUSCH_Config_r17_Pusch_DMRS_Bundling_r17_enabled = 0, /**< ASN.1 enabled */
} DMRS_BundlingPUSCH_Config_r17_Pusch_DMRS_Bundling_r17;


/**
 * @brief 枚举 DMRS_BundlingPUSCH_Config_r17_Pusch_WindowRestart_r17（ASN.1 pusch-WindowRestart-r17，源文件第 6459 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_BundlingPUSCH_Config_r17_Pusch_WindowRestart_r17 {
    DMRS_BundlingPUSCH_Config_r17_Pusch_WindowRestart_r17_enabled = 0, /**< ASN.1 enabled */
} DMRS_BundlingPUSCH_Config_r17_Pusch_WindowRestart_r17;


/**
 * @brief 枚举 DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17（ASN.1 pusch-FrequencyHoppingInterval-r17，源文件第 6460 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17 {
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17_s2 = 0, /**< ASN.1 s2 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17_s4 = 1, /**< ASN.1 s4 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17_s5 = 2, /**< ASN.1 s5 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17_s6 = 3, /**< ASN.1 s6 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17_s8 = 4, /**< ASN.1 s8 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17_s10 = 5, /**< ASN.1 s10 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17_s12 = 6, /**< ASN.1 s12 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17_s14 = 7, /**< ASN.1 s14 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17_s16 = 8, /**< ASN.1 s16 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17_s20 = 9, /**< ASN.1 s20 */
} DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17;


/**
 * @brief 枚举 DMRS_DownlinkConfig_Dmrs_Type（ASN.1 dmrs-Type，源文件第 6468 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_DownlinkConfig_Dmrs_Type {
    DMRS_DownlinkConfig_Dmrs_Type_type2 = 0, /**< ASN.1 type2 */
} DMRS_DownlinkConfig_Dmrs_Type;


/**
 * @brief 枚举 DMRS_DownlinkConfig_Dmrs_AdditionalPosition（ASN.1 dmrs-AdditionalPosition，源文件第 6469 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_DownlinkConfig_Dmrs_AdditionalPosition {
    DMRS_DownlinkConfig_Dmrs_AdditionalPosition_pos0 = 0, /**< ASN.1 pos0 */
    DMRS_DownlinkConfig_Dmrs_AdditionalPosition_pos1 = 1, /**< ASN.1 pos1 */
    DMRS_DownlinkConfig_Dmrs_AdditionalPosition_pos3 = 2, /**< ASN.1 pos3 */
} DMRS_DownlinkConfig_Dmrs_AdditionalPosition;


/**
 * @brief 枚举 DMRS_DownlinkConfig_MaxLength（ASN.1 maxLength，源文件第 6470 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_DownlinkConfig_MaxLength {
    DMRS_DownlinkConfig_MaxLength_len2 = 0, /**< ASN.1 len2 */
} DMRS_DownlinkConfig_MaxLength;


/**
 * @brief 枚举 DMRS_DownlinkConfig_ExtGroup1_Dmrs_Downlink_r16（ASN.1 dmrs-Downlink-r16，源文件第 6476 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_DownlinkConfig_ExtGroup1_Dmrs_Downlink_r16 {
    DMRS_DownlinkConfig_ExtGroup1_Dmrs_Downlink_r16_enabled = 0, /**< ASN.1 enabled */
} DMRS_DownlinkConfig_ExtGroup1_Dmrs_Downlink_r16;


/**
 * @brief 枚举 DMRS_DownlinkConfig_ExtGroup2_Dmrs_TypeEnh_r18（ASN.1 dmrs-TypeEnh-r18，源文件第 6479 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_DownlinkConfig_ExtGroup2_Dmrs_TypeEnh_r18 {
    DMRS_DownlinkConfig_ExtGroup2_Dmrs_TypeEnh_r18_enabled = 0, /**< ASN.1 enabled */
} DMRS_DownlinkConfig_ExtGroup2_Dmrs_TypeEnh_r18;


/**
 * @brief 枚举 DMRS_UplinkConfig_Dmrs_Type（ASN.1 dmrs-Type，源文件第 6487 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_UplinkConfig_Dmrs_Type {
    DMRS_UplinkConfig_Dmrs_Type_type2 = 0, /**< ASN.1 type2 */
} DMRS_UplinkConfig_Dmrs_Type;


/**
 * @brief 枚举 DMRS_UplinkConfig_Dmrs_AdditionalPosition（ASN.1 dmrs-AdditionalPosition，源文件第 6488 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_UplinkConfig_Dmrs_AdditionalPosition {
    DMRS_UplinkConfig_Dmrs_AdditionalPosition_pos0 = 0, /**< ASN.1 pos0 */
    DMRS_UplinkConfig_Dmrs_AdditionalPosition_pos1 = 1, /**< ASN.1 pos1 */
    DMRS_UplinkConfig_Dmrs_AdditionalPosition_pos3 = 2, /**< ASN.1 pos3 */
} DMRS_UplinkConfig_Dmrs_AdditionalPosition;


/**
 * @brief 枚举 DMRS_UplinkConfig_MaxLength（ASN.1 maxLength，源文件第 6490 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_UplinkConfig_MaxLength {
    DMRS_UplinkConfig_MaxLength_len2 = 0, /**< ASN.1 len2 */
} DMRS_UplinkConfig_MaxLength;


/**
 * @brief 枚举 DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1_Dmrs_Uplink_r16（ASN.1 transformPrecodingDisabled/dmrs-Uplink-r16，源文件第 6496 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1_Dmrs_Uplink_r16 {
    DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1_Dmrs_Uplink_r16_enabled = 0, /**< ASN.1 enabled */
} DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1_Dmrs_Uplink_r16;


/**
 * @brief 枚举 DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceGroupHopping（ASN.1 transformPrecodingEnabled/sequenceGroupHopping，源文件第 6501 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceGroupHopping {
    DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceGroupHopping_disabled = 0, /**< ASN.1 disabled */
} DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceGroupHopping;


/**
 * @brief 枚举 DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceHopping（ASN.1 transformPrecodingEnabled/sequenceHopping，源文件第 6502 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceHopping {
    DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceHopping_enabled = 0, /**< ASN.1 enabled */
} DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceHopping;


/**
 * @brief 枚举 DMRS_UplinkConfig_ExtGroup1_Dmrs_TypeEnh_r18（ASN.1 dmrs-TypeEnh-r18，源文件第 6510 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DMRS_UplinkConfig_ExtGroup1_Dmrs_TypeEnh_r18 {
    DMRS_UplinkConfig_ExtGroup1_Dmrs_TypeEnh_r18_enabled = 0, /**< ASN.1 enabled */
} DMRS_UplinkConfig_ExtGroup1_Dmrs_TypeEnh_r18;


/**
 * @brief 枚举 BCCH_Config_ModificationPeriodCoeff（ASN.1 modificationPeriodCoeff，源文件第 6555 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BCCH_Config_ModificationPeriodCoeff {
    BCCH_Config_ModificationPeriodCoeff_n2 = 0, /**< ASN.1 n2 */
    BCCH_Config_ModificationPeriodCoeff_n4 = 1, /**< ASN.1 n4 */
    BCCH_Config_ModificationPeriodCoeff_n8 = 2, /**< ASN.1 n8 */
    BCCH_Config_ModificationPeriodCoeff_n16 = 3, /**< ASN.1 n16 */
} BCCH_Config_ModificationPeriodCoeff;


/**
 * @brief 枚举 PCCH_Config_Ns（ASN.1 ns，源文件第 6569 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PCCH_Config_Ns {
    PCCH_Config_Ns_four = 0, /**< ASN.1 four */
    PCCH_Config_Ns_two = 1, /**< ASN.1 two */
    PCCH_Config_Ns_one = 2, /**< ASN.1 one */
} PCCH_Config_Ns;


/**
 * @brief 枚举 PCCH_Config_ExtGroup2_RanPagingInIdlePO_r17（ASN.1 ranPagingInIdlePO-r17，源文件第 6585 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PCCH_Config_ExtGroup2_RanPagingInIdlePO_r17 {
    PCCH_Config_ExtGroup2_RanPagingInIdlePO_r17_trueVal = 0, /**< ASN.1 trueVal */
} PCCH_Config_ExtGroup2_RanPagingInIdlePO_r17;


/**
 * @brief 枚举 PEI_Config_r17_Po_NumPerPEI_r17（ASN.1 po-NumPerPEI-r17，源文件第 6595 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PEI_Config_r17_Po_NumPerPEI_r17 {
    PEI_Config_r17_Po_NumPerPEI_r17_po1 = 0, /**< ASN.1 po1 */
    PEI_Config_r17_Po_NumPerPEI_r17_po2 = 1, /**< ASN.1 po2 */
    PEI_Config_r17_Po_NumPerPEI_r17_po4 = 2, /**< ASN.1 po4 */
    PEI_Config_r17_Po_NumPerPEI_r17_po8 = 3, /**< ASN.1 po8 */
} PEI_Config_r17_Po_NumPerPEI_r17;


/**
 * @brief 枚举 PEI_Config_r17_LastUsedCellOnly_r17（ASN.1 lastUsedCellOnly-r17，源文件第 6599 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PEI_Config_r17_LastUsedCellOnly_r17 {
    PEI_Config_r17_LastUsedCellOnly_r17_trueVal = 0, /**< ASN.1 trueVal */
} PEI_Config_r17_LastUsedCellOnly_r17;


/**
 * @brief 枚举 DownlinkPreemption_TimeFrequencySet（ASN.1 timeFrequencySet，源文件第 6614 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DownlinkPreemption_TimeFrequencySet {
    DownlinkPreemption_TimeFrequencySet_set0 = 0, /**< ASN.1 set0 */
    DownlinkPreemption_TimeFrequencySet_set1 = 1, /**< ASN.1 set1 */
} DownlinkPreemption_TimeFrequencySet;


/**
 * @brief 枚举 DRX_Config_Drx_onDurationTimer_MilliSeconds（ASN.1 drx-onDurationTimer/milliSeconds，源文件第 6636 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_Config_Drx_onDurationTimer_MilliSeconds {
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms1 = 0, /**< ASN.1 ms1 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms2 = 1, /**< ASN.1 ms2 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms3 = 2, /**< ASN.1 ms3 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms4 = 3, /**< ASN.1 ms4 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms5 = 4, /**< ASN.1 ms5 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms6 = 5, /**< ASN.1 ms6 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms8 = 6, /**< ASN.1 ms8 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms10 = 7, /**< ASN.1 ms10 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms20 = 8, /**< ASN.1 ms20 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms30 = 9, /**< ASN.1 ms30 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms40 = 10, /**< ASN.1 ms40 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms50 = 11, /**< ASN.1 ms50 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms60 = 12, /**< ASN.1 ms60 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms80 = 13, /**< ASN.1 ms80 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms100 = 14, /**< ASN.1 ms100 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms200 = 15, /**< ASN.1 ms200 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms300 = 16, /**< ASN.1 ms300 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms400 = 17, /**< ASN.1 ms400 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms500 = 18, /**< ASN.1 ms500 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms600 = 19, /**< ASN.1 ms600 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms800 = 20, /**< ASN.1 ms800 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms1000 = 21, /**< ASN.1 ms1000 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms1200 = 22, /**< ASN.1 ms1200 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_ms1600 = 23, /**< ASN.1 ms1600 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_spare8 = 24, /**< ASN.1 spare8 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_spare7 = 25, /**< ASN.1 spare7 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_spare6 = 26, /**< ASN.1 spare6 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_spare5 = 27, /**< ASN.1 spare5 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_spare4 = 28, /**< ASN.1 spare4 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_spare3 = 29, /**< ASN.1 spare3 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_spare2 = 30, /**< ASN.1 spare2 */
    DRX_Config_Drx_onDurationTimer_MilliSeconds_spare1 = 31, /**< ASN.1 spare1 */
} DRX_Config_Drx_onDurationTimer_MilliSeconds;


/**
 * @brief 枚举 DRX_Config_Drx_InactivityTimer（ASN.1 drx-InactivityTimer，源文件第 6641 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_Config_Drx_InactivityTimer {
    DRX_Config_Drx_InactivityTimer_ms0 = 0, /**< ASN.1 ms0 */
    DRX_Config_Drx_InactivityTimer_ms1 = 1, /**< ASN.1 ms1 */
    DRX_Config_Drx_InactivityTimer_ms2 = 2, /**< ASN.1 ms2 */
    DRX_Config_Drx_InactivityTimer_ms3 = 3, /**< ASN.1 ms3 */
    DRX_Config_Drx_InactivityTimer_ms4 = 4, /**< ASN.1 ms4 */
    DRX_Config_Drx_InactivityTimer_ms5 = 5, /**< ASN.1 ms5 */
    DRX_Config_Drx_InactivityTimer_ms6 = 6, /**< ASN.1 ms6 */
    DRX_Config_Drx_InactivityTimer_ms8 = 7, /**< ASN.1 ms8 */
    DRX_Config_Drx_InactivityTimer_ms10 = 8, /**< ASN.1 ms10 */
    DRX_Config_Drx_InactivityTimer_ms20 = 9, /**< ASN.1 ms20 */
    DRX_Config_Drx_InactivityTimer_ms30 = 10, /**< ASN.1 ms30 */
    DRX_Config_Drx_InactivityTimer_ms40 = 11, /**< ASN.1 ms40 */
    DRX_Config_Drx_InactivityTimer_ms50 = 12, /**< ASN.1 ms50 */
    DRX_Config_Drx_InactivityTimer_ms60 = 13, /**< ASN.1 ms60 */
    DRX_Config_Drx_InactivityTimer_ms80 = 14, /**< ASN.1 ms80 */
    DRX_Config_Drx_InactivityTimer_ms100 = 15, /**< ASN.1 ms100 */
    DRX_Config_Drx_InactivityTimer_ms200 = 16, /**< ASN.1 ms200 */
    DRX_Config_Drx_InactivityTimer_ms300 = 17, /**< ASN.1 ms300 */
    DRX_Config_Drx_InactivityTimer_ms500 = 18, /**< ASN.1 ms500 */
    DRX_Config_Drx_InactivityTimer_ms750 = 19, /**< ASN.1 ms750 */
    DRX_Config_Drx_InactivityTimer_ms1280 = 20, /**< ASN.1 ms1280 */
    DRX_Config_Drx_InactivityTimer_ms1920 = 21, /**< ASN.1 ms1920 */
    DRX_Config_Drx_InactivityTimer_ms2560 = 22, /**< ASN.1 ms2560 */
    DRX_Config_Drx_InactivityTimer_spare9 = 23, /**< ASN.1 spare9 */
    DRX_Config_Drx_InactivityTimer_spare8 = 24, /**< ASN.1 spare8 */
    DRX_Config_Drx_InactivityTimer_spare7 = 25, /**< ASN.1 spare7 */
    DRX_Config_Drx_InactivityTimer_spare6 = 26, /**< ASN.1 spare6 */
    DRX_Config_Drx_InactivityTimer_spare5 = 27, /**< ASN.1 spare5 */
    DRX_Config_Drx_InactivityTimer_spare4 = 28, /**< ASN.1 spare4 */
    DRX_Config_Drx_InactivityTimer_spare3 = 29, /**< ASN.1 spare3 */
    DRX_Config_Drx_InactivityTimer_spare2 = 30, /**< ASN.1 spare2 */
    DRX_Config_Drx_InactivityTimer_spare1 = 31, /**< ASN.1 spare1 */
} DRX_Config_Drx_InactivityTimer;


/**
 * @brief 枚举 DRX_Config_Drx_RetransmissionTimerDL（ASN.1 drx-RetransmissionTimerDL，源文件第 6647 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_Config_Drx_RetransmissionTimerDL {
    DRX_Config_Drx_RetransmissionTimerDL_sl0 = 0, /**< ASN.1 sl0 */
    DRX_Config_Drx_RetransmissionTimerDL_sl1 = 1, /**< ASN.1 sl1 */
    DRX_Config_Drx_RetransmissionTimerDL_sl2 = 2, /**< ASN.1 sl2 */
    DRX_Config_Drx_RetransmissionTimerDL_sl4 = 3, /**< ASN.1 sl4 */
    DRX_Config_Drx_RetransmissionTimerDL_sl6 = 4, /**< ASN.1 sl6 */
    DRX_Config_Drx_RetransmissionTimerDL_sl8 = 5, /**< ASN.1 sl8 */
    DRX_Config_Drx_RetransmissionTimerDL_sl16 = 6, /**< ASN.1 sl16 */
    DRX_Config_Drx_RetransmissionTimerDL_sl24 = 7, /**< ASN.1 sl24 */
    DRX_Config_Drx_RetransmissionTimerDL_sl33 = 8, /**< ASN.1 sl33 */
    DRX_Config_Drx_RetransmissionTimerDL_sl40 = 9, /**< ASN.1 sl40 */
    DRX_Config_Drx_RetransmissionTimerDL_sl64 = 10, /**< ASN.1 sl64 */
    DRX_Config_Drx_RetransmissionTimerDL_sl80 = 11, /**< ASN.1 sl80 */
    DRX_Config_Drx_RetransmissionTimerDL_sl96 = 12, /**< ASN.1 sl96 */
    DRX_Config_Drx_RetransmissionTimerDL_sl112 = 13, /**< ASN.1 sl112 */
    DRX_Config_Drx_RetransmissionTimerDL_sl128 = 14, /**< ASN.1 sl128 */
    DRX_Config_Drx_RetransmissionTimerDL_sl160 = 15, /**< ASN.1 sl160 */
    DRX_Config_Drx_RetransmissionTimerDL_sl320 = 16, /**< ASN.1 sl320 */
    DRX_Config_Drx_RetransmissionTimerDL_spare15 = 17, /**< ASN.1 spare15 */
    DRX_Config_Drx_RetransmissionTimerDL_spare14 = 18, /**< ASN.1 spare14 */
    DRX_Config_Drx_RetransmissionTimerDL_spare13 = 19, /**< ASN.1 spare13 */
    DRX_Config_Drx_RetransmissionTimerDL_spare12 = 20, /**< ASN.1 spare12 */
    DRX_Config_Drx_RetransmissionTimerDL_spare11 = 21, /**< ASN.1 spare11 */
    DRX_Config_Drx_RetransmissionTimerDL_spare10 = 22, /**< ASN.1 spare10 */
    DRX_Config_Drx_RetransmissionTimerDL_spare9 = 23, /**< ASN.1 spare9 */
    DRX_Config_Drx_RetransmissionTimerDL_spare8 = 24, /**< ASN.1 spare8 */
    DRX_Config_Drx_RetransmissionTimerDL_spare7 = 25, /**< ASN.1 spare7 */
    DRX_Config_Drx_RetransmissionTimerDL_spare6 = 26, /**< ASN.1 spare6 */
    DRX_Config_Drx_RetransmissionTimerDL_spare5 = 27, /**< ASN.1 spare5 */
    DRX_Config_Drx_RetransmissionTimerDL_spare4 = 28, /**< ASN.1 spare4 */
    DRX_Config_Drx_RetransmissionTimerDL_spare3 = 29, /**< ASN.1 spare3 */
    DRX_Config_Drx_RetransmissionTimerDL_spare2 = 30, /**< ASN.1 spare2 */
    DRX_Config_Drx_RetransmissionTimerDL_spare1 = 31, /**< ASN.1 spare1 */
} DRX_Config_Drx_RetransmissionTimerDL;


/**
 * @brief 枚举 DRX_Config_Drx_RetransmissionTimerUL（ASN.1 drx-RetransmissionTimerUL，源文件第 6651 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_Config_Drx_RetransmissionTimerUL {
    DRX_Config_Drx_RetransmissionTimerUL_sl0 = 0, /**< ASN.1 sl0 */
    DRX_Config_Drx_RetransmissionTimerUL_sl1 = 1, /**< ASN.1 sl1 */
    DRX_Config_Drx_RetransmissionTimerUL_sl2 = 2, /**< ASN.1 sl2 */
    DRX_Config_Drx_RetransmissionTimerUL_sl4 = 3, /**< ASN.1 sl4 */
    DRX_Config_Drx_RetransmissionTimerUL_sl6 = 4, /**< ASN.1 sl6 */
    DRX_Config_Drx_RetransmissionTimerUL_sl8 = 5, /**< ASN.1 sl8 */
    DRX_Config_Drx_RetransmissionTimerUL_sl16 = 6, /**< ASN.1 sl16 */
    DRX_Config_Drx_RetransmissionTimerUL_sl24 = 7, /**< ASN.1 sl24 */
    DRX_Config_Drx_RetransmissionTimerUL_sl33 = 8, /**< ASN.1 sl33 */
    DRX_Config_Drx_RetransmissionTimerUL_sl40 = 9, /**< ASN.1 sl40 */
    DRX_Config_Drx_RetransmissionTimerUL_sl64 = 10, /**< ASN.1 sl64 */
    DRX_Config_Drx_RetransmissionTimerUL_sl80 = 11, /**< ASN.1 sl80 */
    DRX_Config_Drx_RetransmissionTimerUL_sl96 = 12, /**< ASN.1 sl96 */
    DRX_Config_Drx_RetransmissionTimerUL_sl112 = 13, /**< ASN.1 sl112 */
    DRX_Config_Drx_RetransmissionTimerUL_sl128 = 14, /**< ASN.1 sl128 */
    DRX_Config_Drx_RetransmissionTimerUL_sl160 = 15, /**< ASN.1 sl160 */
    DRX_Config_Drx_RetransmissionTimerUL_sl320 = 16, /**< ASN.1 sl320 */
    DRX_Config_Drx_RetransmissionTimerUL_spare15 = 17, /**< ASN.1 spare15 */
    DRX_Config_Drx_RetransmissionTimerUL_spare14 = 18, /**< ASN.1 spare14 */
    DRX_Config_Drx_RetransmissionTimerUL_spare13 = 19, /**< ASN.1 spare13 */
    DRX_Config_Drx_RetransmissionTimerUL_spare12 = 20, /**< ASN.1 spare12 */
    DRX_Config_Drx_RetransmissionTimerUL_spare11 = 21, /**< ASN.1 spare11 */
    DRX_Config_Drx_RetransmissionTimerUL_spare10 = 22, /**< ASN.1 spare10 */
    DRX_Config_Drx_RetransmissionTimerUL_spare9 = 23, /**< ASN.1 spare9 */
    DRX_Config_Drx_RetransmissionTimerUL_spare8 = 24, /**< ASN.1 spare8 */
    DRX_Config_Drx_RetransmissionTimerUL_spare7 = 25, /**< ASN.1 spare7 */
    DRX_Config_Drx_RetransmissionTimerUL_spare6 = 26, /**< ASN.1 spare6 */
    DRX_Config_Drx_RetransmissionTimerUL_spare5 = 27, /**< ASN.1 spare5 */
    DRX_Config_Drx_RetransmissionTimerUL_spare4 = 28, /**< ASN.1 spare4 */
    DRX_Config_Drx_RetransmissionTimerUL_spare3 = 29, /**< ASN.1 spare3 */
    DRX_Config_Drx_RetransmissionTimerUL_spare2 = 30, /**< ASN.1 spare2 */
    DRX_Config_Drx_RetransmissionTimerUL_spare1 = 31, /**< ASN.1 spare1 */
} DRX_Config_Drx_RetransmissionTimerUL;


/**
 * @brief 枚举 DRX_Config_ShortDRX_Drx_ShortCycle（ASN.1 shortDRX/drx-ShortCycle，源文件第 6678 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_Config_ShortDRX_Drx_ShortCycle {
    DRX_Config_ShortDRX_Drx_ShortCycle_ms2 = 0, /**< ASN.1 ms2 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms3 = 1, /**< ASN.1 ms3 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms4 = 2, /**< ASN.1 ms4 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms5 = 3, /**< ASN.1 ms5 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms6 = 4, /**< ASN.1 ms6 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms7 = 5, /**< ASN.1 ms7 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms8 = 6, /**< ASN.1 ms8 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms10 = 7, /**< ASN.1 ms10 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms14 = 8, /**< ASN.1 ms14 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms16 = 9, /**< ASN.1 ms16 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms20 = 10, /**< ASN.1 ms20 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms30 = 11, /**< ASN.1 ms30 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms32 = 12, /**< ASN.1 ms32 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms35 = 13, /**< ASN.1 ms35 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms40 = 14, /**< ASN.1 ms40 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms64 = 15, /**< ASN.1 ms64 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms80 = 16, /**< ASN.1 ms80 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms128 = 17, /**< ASN.1 ms128 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms160 = 18, /**< ASN.1 ms160 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms256 = 19, /**< ASN.1 ms256 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms320 = 20, /**< ASN.1 ms320 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms512 = 21, /**< ASN.1 ms512 */
    DRX_Config_ShortDRX_Drx_ShortCycle_ms640 = 22, /**< ASN.1 ms640 */
    DRX_Config_ShortDRX_Drx_ShortCycle_spare9 = 23, /**< ASN.1 spare9 */
    DRX_Config_ShortDRX_Drx_ShortCycle_spare8 = 24, /**< ASN.1 spare8 */
    DRX_Config_ShortDRX_Drx_ShortCycle_spare7 = 25, /**< ASN.1 spare7 */
    DRX_Config_ShortDRX_Drx_ShortCycle_spare6 = 26, /**< ASN.1 spare6 */
    DRX_Config_ShortDRX_Drx_ShortCycle_spare5 = 27, /**< ASN.1 spare5 */
    DRX_Config_ShortDRX_Drx_ShortCycle_spare4 = 28, /**< ASN.1 spare4 */
    DRX_Config_ShortDRX_Drx_ShortCycle_spare3 = 29, /**< ASN.1 spare3 */
    DRX_Config_ShortDRX_Drx_ShortCycle_spare2 = 30, /**< ASN.1 spare2 */
    DRX_Config_ShortDRX_Drx_ShortCycle_spare1 = 31, /**< ASN.1 spare1 */
} DRX_Config_ShortDRX_Drx_ShortCycle;


/**
 * @brief 枚举 DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18（ASN.1 shortDRX-r18/drx-NonIntegerShortCycle-r18，源文件第 6720 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18 {
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms1001over240 = 0, /**< ASN.1 ms1001over240 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms25over6 = 1, /**< ASN.1 ms25over6 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms25over3 = 2, /**< ASN.1 ms25over3 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms1001over120 = 3, /**< ASN.1 ms1001over120 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms100over9 = 4, /**< ASN.1 ms100over9 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms25over2 = 5, /**< ASN.1 ms25over2 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms40over3 = 6, /**< ASN.1 ms40over3 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms125over9 = 7, /**< ASN.1 ms125over9 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms50over3 = 8, /**< ASN.1 ms50over3 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms1001over60 = 9, /**< ASN.1 ms1001over60 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms125over6 = 10, /**< ASN.1 ms125over6 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms200over9 = 11, /**< ASN.1 ms200over9 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms100over3 = 12, /**< ASN.1 ms100over3 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms1001over30 = 13, /**< ASN.1 ms1001over30 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms125over3 = 14, /**< ASN.1 ms125over3 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms1001over24 = 15, /**< ASN.1 ms1001over24 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_ms200over3 = 16, /**< ASN.1 ms200over3 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare15 = 17, /**< ASN.1 spare15 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare14 = 18, /**< ASN.1 spare14 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare13 = 19, /**< ASN.1 spare13 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare12 = 20, /**< ASN.1 spare12 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare11 = 21, /**< ASN.1 spare11 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare10 = 22, /**< ASN.1 spare10 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare9 = 23, /**< ASN.1 spare9 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare8 = 24, /**< ASN.1 spare8 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare7 = 25, /**< ASN.1 spare7 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare6 = 26, /**< ASN.1 spare6 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare5 = 27, /**< ASN.1 spare5 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare4 = 28, /**< ASN.1 spare4 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare3 = 29, /**< ASN.1 spare3 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare2 = 30, /**< ASN.1 spare2 */
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18_spare1 = 31, /**< ASN.1 spare1 */
} DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18;


/**
 * @brief 枚举 DRX_ConfigExt2_v1800_Drx_TimeReferenceSFN_r18（ASN.1 drx-TimeReferenceSFN-r18，源文件第 6727 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_ConfigExt2_v1800_Drx_TimeReferenceSFN_r18 {
    DRX_ConfigExt2_v1800_Drx_TimeReferenceSFN_r18_sfn512 = 0, /**< ASN.1 sfn512 */
} DRX_ConfigExt2_v1800_Drx_TimeReferenceSFN_r18;


/**
 * @brief 枚举 DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds（ASN.1 drx-onDurationTimer-r16/milliSeconds，源文件第 6737 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds {
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms1 = 0, /**< ASN.1 ms1 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms2 = 1, /**< ASN.1 ms2 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms3 = 2, /**< ASN.1 ms3 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms4 = 3, /**< ASN.1 ms4 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms5 = 4, /**< ASN.1 ms5 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms6 = 5, /**< ASN.1 ms6 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms8 = 6, /**< ASN.1 ms8 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms10 = 7, /**< ASN.1 ms10 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms20 = 8, /**< ASN.1 ms20 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms30 = 9, /**< ASN.1 ms30 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms40 = 10, /**< ASN.1 ms40 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms50 = 11, /**< ASN.1 ms50 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms60 = 12, /**< ASN.1 ms60 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms80 = 13, /**< ASN.1 ms80 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms100 = 14, /**< ASN.1 ms100 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms200 = 15, /**< ASN.1 ms200 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms300 = 16, /**< ASN.1 ms300 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms400 = 17, /**< ASN.1 ms400 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms500 = 18, /**< ASN.1 ms500 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms600 = 19, /**< ASN.1 ms600 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms800 = 20, /**< ASN.1 ms800 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms1000 = 21, /**< ASN.1 ms1000 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms1200 = 22, /**< ASN.1 ms1200 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_ms1600 = 23, /**< ASN.1 ms1600 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_spare8 = 24, /**< ASN.1 spare8 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_spare7 = 25, /**< ASN.1 spare7 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_spare6 = 26, /**< ASN.1 spare6 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_spare5 = 27, /**< ASN.1 spare5 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_spare4 = 28, /**< ASN.1 spare4 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_spare3 = 29, /**< ASN.1 spare3 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_spare2 = 30, /**< ASN.1 spare2 */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds_spare1 = 31, /**< ASN.1 spare1 */
} DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds;


/**
 * @brief 枚举 DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16（ASN.1 drx-InactivityTimer-r16，源文件第 6742 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16 {
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms0 = 0, /**< ASN.1 ms0 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms1 = 1, /**< ASN.1 ms1 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms2 = 2, /**< ASN.1 ms2 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms3 = 3, /**< ASN.1 ms3 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms4 = 4, /**< ASN.1 ms4 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms5 = 5, /**< ASN.1 ms5 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms6 = 6, /**< ASN.1 ms6 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms8 = 7, /**< ASN.1 ms8 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms10 = 8, /**< ASN.1 ms10 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms20 = 9, /**< ASN.1 ms20 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms30 = 10, /**< ASN.1 ms30 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms40 = 11, /**< ASN.1 ms40 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms50 = 12, /**< ASN.1 ms50 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms60 = 13, /**< ASN.1 ms60 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms80 = 14, /**< ASN.1 ms80 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms100 = 15, /**< ASN.1 ms100 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms200 = 16, /**< ASN.1 ms200 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms300 = 17, /**< ASN.1 ms300 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms500 = 18, /**< ASN.1 ms500 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms750 = 19, /**< ASN.1 ms750 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms1280 = 20, /**< ASN.1 ms1280 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms1920 = 21, /**< ASN.1 ms1920 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_ms2560 = 22, /**< ASN.1 ms2560 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_spare9 = 23, /**< ASN.1 spare9 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_spare8 = 24, /**< ASN.1 spare8 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_spare7 = 25, /**< ASN.1 spare7 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_spare6 = 26, /**< ASN.1 spare6 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_spare5 = 27, /**< ASN.1 spare5 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_spare4 = 28, /**< ASN.1 spare4 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_spare3 = 29, /**< ASN.1 spare3 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_spare2 = 30, /**< ASN.1 spare2 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16_spare1 = 31, /**< ASN.1 spare1 */
} DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16;


/**
 * @brief 枚举 DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17（ASN.1 drx-RetransmissionTimerSL-r17，源文件第 6753 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17 {
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl0 = 0, /**< ASN.1 sl0 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl1 = 1, /**< ASN.1 sl1 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl2 = 2, /**< ASN.1 sl2 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl4 = 3, /**< ASN.1 sl4 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl6 = 4, /**< ASN.1 sl6 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl8 = 5, /**< ASN.1 sl8 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl16 = 6, /**< ASN.1 sl16 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl24 = 7, /**< ASN.1 sl24 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl33 = 8, /**< ASN.1 sl33 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl40 = 9, /**< ASN.1 sl40 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl64 = 10, /**< ASN.1 sl64 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl80 = 11, /**< ASN.1 sl80 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl96 = 12, /**< ASN.1 sl96 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl112 = 13, /**< ASN.1 sl112 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl128 = 14, /**< ASN.1 sl128 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl160 = 15, /**< ASN.1 sl160 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_sl320 = 16, /**< ASN.1 sl320 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare15 = 17, /**< ASN.1 spare15 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare14 = 18, /**< ASN.1 spare14 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare13 = 19, /**< ASN.1 spare13 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare12 = 20, /**< ASN.1 spare12 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare11 = 21, /**< ASN.1 spare11 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare10 = 22, /**< ASN.1 spare10 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare9 = 23, /**< ASN.1 spare9 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare8 = 24, /**< ASN.1 spare8 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare7 = 25, /**< ASN.1 spare7 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare6 = 26, /**< ASN.1 spare6 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare5 = 27, /**< ASN.1 spare5 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare4 = 28, /**< ASN.1 spare4 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare3 = 29, /**< ASN.1 spare3 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare2 = 30, /**< ASN.1 spare2 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17_spare1 = 31, /**< ASN.1 spare1 */
} DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17;


/**
 * @brief 枚举 EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18（ASN.1 ssb-PerRACH-Occasion-r18，源文件第 6765 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18 {
    EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18_oneEighth = 0, /**< ASN.1 oneEighth */
    EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18_oneFourth = 1, /**< ASN.1 oneFourth */
    EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18_oneHalf = 2, /**< ASN.1 oneHalf */
    EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18_one = 3, /**< ASN.1 one */
    EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18_two = 4, /**< ASN.1 two */
    EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18_four = 5, /**< ASN.1 four */
    EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18_eight = 6, /**< ASN.1 eight */
    EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18_sixteen = 7, /**< ASN.1 sixteen */
} EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18;


/**
 * @brief 枚举 EarlyUL_SyncConfig_r18_N_TimingAdvanceOffset_r18（ASN.1 n-TimingAdvanceOffset-r18，源文件第 6771 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EarlyUL_SyncConfig_r18_N_TimingAdvanceOffset_r18 {
    EarlyUL_SyncConfig_r18_N_TimingAdvanceOffset_r18_n0 = 0, /**< ASN.1 n0 */
    EarlyUL_SyncConfig_r18_N_TimingAdvanceOffset_r18_n25600 = 1, /**< ASN.1 n25600 */
    EarlyUL_SyncConfig_r18_N_TimingAdvanceOffset_r18_n39936 = 2, /**< ASN.1 n39936 */
    EarlyUL_SyncConfig_r18_N_TimingAdvanceOffset_r18_spare1 = 3, /**< ASN.1 spare1 */
} EarlyUL_SyncConfig_r18_N_TimingAdvanceOffset_r18;


/**
 * @brief 枚举 FeatureCombination_r17_RedCap_r17（ASN.1 redCap-r17，源文件第 6822 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombination_r17_RedCap_r17 {
    FeatureCombination_r17_RedCap_r17_trueVal = 0, /**< ASN.1 trueVal */
} FeatureCombination_r17_RedCap_r17;


/**
 * @brief 枚举 FeatureCombination_r17_SmallData_r17（ASN.1 smallData-r17，源文件第 6823 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombination_r17_SmallData_r17 {
    FeatureCombination_r17_SmallData_r17_trueVal = 0, /**< ASN.1 trueVal */
} FeatureCombination_r17_SmallData_r17;


/**
 * @brief 枚举 FeatureCombination_r17_Msg3_Repetitions_r17（ASN.1 msg3-Repetitions-r17，源文件第 6825 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombination_r17_Msg3_Repetitions_r17 {
    FeatureCombination_r17_Msg3_Repetitions_r17_trueVal = 0, /**< ASN.1 trueVal */
} FeatureCombination_r17_Msg3_Repetitions_r17;


/**
 * @brief 枚举 FeatureCombination_r17_Msg1_Repetitions_r18（ASN.1 msg1-Repetitions-r18，源文件第 6826 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombination_r17_Msg1_Repetitions_r18 {
    FeatureCombination_r17_Msg1_Repetitions_r18_trueVal = 0, /**< ASN.1 trueVal */
} FeatureCombination_r17_Msg1_Repetitions_r18;


/**
 * @brief 枚举 FeatureCombination_r17_ERedCap_r18（ASN.1 eRedCap-r18，源文件第 6827 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombination_r17_ERedCap_r18 {
    FeatureCombination_r17_ERedCap_r18_trueVal = 0, /**< ASN.1 trueVal */
} FeatureCombination_r17_ERedCap_r18;


/**
 * @brief 枚举 FeatureCombination_r17_Spare2（ASN.1 spare2，源文件第 6828 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombination_r17_Spare2 {
    FeatureCombination_r17_Spare2_trueVal = 0, /**< ASN.1 trueVal */
} FeatureCombination_r17_Spare2;


/**
 * @brief 枚举 FeatureCombination_r17_Spare1（ASN.1 spare1，源文件第 6829 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombination_r17_Spare1 {
    FeatureCombination_r17_Spare1_trueVal = 0, /**< ASN.1 trueVal */
} FeatureCombination_r17_Spare1;


/**
 * @brief 枚举 FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17（ASN.1 groupBconfigured-r17/ra-SizeGroupA-r17，源文件第 6843 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17 {
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b56 = 0, /**< ASN.1 b56 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b144 = 1, /**< ASN.1 b144 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b208 = 2, /**< ASN.1 b208 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b256 = 3, /**< ASN.1 b256 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b282 = 4, /**< ASN.1 b282 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b480 = 5, /**< ASN.1 b480 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b640 = 6, /**< ASN.1 b640 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b800 = 7, /**< ASN.1 b800 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b1000 = 8, /**< ASN.1 b1000 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_b72 = 9, /**< ASN.1 b72 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_spare6 = 10, /**< ASN.1 spare6 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_spare5 = 11, /**< ASN.1 spare5 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_spare4 = 12, /**< ASN.1 spare4 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_spare3 = 13, /**< ASN.1 spare3 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_spare2 = 14, /**< ASN.1 spare2 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17_spare1 = 15, /**< ASN.1 spare1 */
} FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17;


/**
 * @brief 枚举 FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17（ASN.1 groupBconfigured-r17/messagePowerOffsetGroupB-r17，源文件第 6845 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17 {
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17_minusinfinity = 0, /**< ASN.1 minusinfinity */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17_dB0 = 1, /**< ASN.1 dB0 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17_dB5 = 2, /**< ASN.1 dB5 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17_dB8 = 3, /**< ASN.1 dB8 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17_dB10 = 4, /**< ASN.1 dB10 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17_dB12 = 5, /**< ASN.1 dB12 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17_dB15 = 6, /**< ASN.1 dB15 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17_dB18 = 7, /**< ASN.1 dB18 */
} FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17;


/**
 * @brief 枚举 FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionNum_r18（ASN.1 msg1-RepetitionNum-r18，源文件第 6854 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionNum_r18 {
    FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionNum_r18_n2 = 0, /**< ASN.1 n2 */
    FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionNum_r18_n4 = 1, /**< ASN.1 n4 */
    FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionNum_r18_n8 = 2, /**< ASN.1 n8 */
    FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionNum_r18_spare1 = 3, /**< ASN.1 spare1 */
} FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionNum_r18;


/**
 * @brief 枚举 FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionTimeOffsetROGroup_r18（ASN.1 msg1-RepetitionTimeOffsetROGroup-r18，源文件第 6855 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionTimeOffsetROGroup_r18 {
    FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionTimeOffsetROGroup_r18_n4 = 0, /**< ASN.1 n4 */
    FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionTimeOffsetROGroup_r18_n8 = 1, /**< ASN.1 n8 */
    FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionTimeOffsetROGroup_r18_n16 = 2, /**< ASN.1 n16 */
    FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionTimeOffsetROGroup_r18_spare1 = 3, /**< ASN.1 spare1 */
} FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionTimeOffsetROGroup_r18;


/**
 * @brief 枚举 FrequencyInfoUL_FrequencyShift7p5khz（ASN.1 frequencyShift7p5khz，源文件第 6951 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FrequencyInfoUL_FrequencyShift7p5khz {
    FrequencyInfoUL_FrequencyShift7p5khz_trueVal = 0, /**< ASN.1 trueVal */
} FrequencyInfoUL_FrequencyShift7p5khz;


/**
 * @brief 枚举 FrequencyInfoUL_SIB_FrequencyShift7p5khz（ASN.1 frequencyShift7p5khz，源文件第 6969 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FrequencyInfoUL_SIB_FrequencyShift7p5khz {
    FrequencyInfoUL_SIB_FrequencyShift7p5khz_trueVal = 0, /**< ASN.1 trueVal */
} FrequencyInfoUL_SIB_FrequencyShift7p5khz;


/**
 * @brief 枚举 HighSpeedConfig_r16_HighSpeedMeasFlag_r16（ASN.1 highSpeedMeasFlag-r16，源文件第 6989 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedConfig_r16_HighSpeedMeasFlag_r16 {
    HighSpeedConfig_r16_HighSpeedMeasFlag_r16_trueVal = 0, /**< ASN.1 trueVal */
} HighSpeedConfig_r16_HighSpeedMeasFlag_r16;


/**
 * @brief 枚举 HighSpeedConfig_r16_HighSpeedDemodFlag_r16（ASN.1 highSpeedDemodFlag-r16，源文件第 6990 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedConfig_r16_HighSpeedDemodFlag_r16 {
    HighSpeedConfig_r16_HighSpeedDemodFlag_r16_trueVal = 0, /**< ASN.1 trueVal */
} HighSpeedConfig_r16_HighSpeedDemodFlag_r16;


/**
 * @brief 枚举 HighSpeedConfig_v1700_HighSpeedMeasCA_Scell_r17（ASN.1 highSpeedMeasCA-Scell-r17，源文件第 6995 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedConfig_v1700_HighSpeedMeasCA_Scell_r17 {
    HighSpeedConfig_v1700_HighSpeedMeasCA_Scell_r17_trueVal = 0, /**< ASN.1 trueVal */
} HighSpeedConfig_v1700_HighSpeedMeasCA_Scell_r17;


/**
 * @brief 枚举 HighSpeedConfig_v1700_HighSpeedMeasInterFreq_r17（ASN.1 highSpeedMeasInterFreq-r17，源文件第 6996 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedConfig_v1700_HighSpeedMeasInterFreq_r17 {
    HighSpeedConfig_v1700_HighSpeedMeasInterFreq_r17_trueVal = 0, /**< ASN.1 trueVal */
} HighSpeedConfig_v1700_HighSpeedMeasInterFreq_r17;


/**
 * @brief 枚举 HighSpeedConfig_v1700_HighSpeedDemodCA_Scell_r17（ASN.1 highSpeedDemodCA-Scell-r17，源文件第 6997 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedConfig_v1700_HighSpeedDemodCA_Scell_r17 {
    HighSpeedConfig_v1700_HighSpeedDemodCA_Scell_r17_trueVal = 0, /**< ASN.1 trueVal */
} HighSpeedConfig_v1700_HighSpeedDemodCA_Scell_r17;


/**
 * @brief 枚举 HighSpeedConfigFR2_r17_HighSpeedMeasFlagFR2_r17（ASN.1 highSpeedMeasFlagFR2-r17，源文件第 7002 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedConfigFR2_r17_HighSpeedMeasFlagFR2_r17 {
    HighSpeedConfigFR2_r17_HighSpeedMeasFlagFR2_r17_set1 = 0, /**< ASN.1 set1 */
    HighSpeedConfigFR2_r17_HighSpeedMeasFlagFR2_r17_set2 = 1, /**< ASN.1 set2 */
} HighSpeedConfigFR2_r17_HighSpeedMeasFlagFR2_r17;


/**
 * @brief 枚举 HighSpeedConfigFR2_r17_HighSpeedDeploymentTypeFR2_r17（ASN.1 highSpeedDeploymentTypeFR2-r17，源文件第 7003 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedConfigFR2_r17_HighSpeedDeploymentTypeFR2_r17 {
    HighSpeedConfigFR2_r17_HighSpeedDeploymentTypeFR2_r17_unidirectional = 0, /**< ASN.1 unidirectional */
    HighSpeedConfigFR2_r17_HighSpeedDeploymentTypeFR2_r17_bidirectional = 1, /**< ASN.1 bidirectional */
} HighSpeedConfigFR2_r17_HighSpeedDeploymentTypeFR2_r17;


/**
 * @brief 枚举 HighSpeedConfigFR2_r17_HighSpeedLargeOneStepUL_TimingFR2_r17（ASN.1 highSpeedLargeOneStepUL-TimingFR2-r17，源文件第 7004 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedConfigFR2_r17_HighSpeedLargeOneStepUL_TimingFR2_r17 {
    HighSpeedConfigFR2_r17_HighSpeedLargeOneStepUL_TimingFR2_r17_trueVal = 0, /**< ASN.1 trueVal */
} HighSpeedConfigFR2_r17_HighSpeedLargeOneStepUL_TimingFR2_r17;


/**
 * @brief 枚举 LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16（ASN.1 lbt-FailureInstanceMaxCount-r16，源文件第 7052 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16 {
    LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16_n4 = 0, /**< ASN.1 n4 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16_n8 = 1, /**< ASN.1 n8 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16_n16 = 2, /**< ASN.1 n16 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16_n32 = 3, /**< ASN.1 n32 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16_n64 = 4, /**< ASN.1 n64 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16_n128 = 5, /**< ASN.1 n128 */
} LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16;


/**
 * @brief 枚举 LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16（ASN.1 lbt-FailureDetectionTimer-r16，源文件第 7053 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16 {
    LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16_ms10 = 0, /**< ASN.1 ms10 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16_ms20 = 1, /**< ASN.1 ms20 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16_ms40 = 2, /**< ASN.1 ms40 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16_ms80 = 3, /**< ASN.1 ms80 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16_ms160 = 4, /**< ASN.1 ms160 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16_ms320 = 5, /**< ASN.1 ms320 */
} LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16;


/**
 * @brief 枚举 NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16（ASN.1 nr-MeasPRS-length-r16，源文件第 7097 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16 {
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16_ms1dot5 = 0, /**< ASN.1 ms1dot5 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16_ms3 = 1, /**< ASN.1 ms3 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16_ms3dot5 = 2, /**< ASN.1 ms3dot5 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16_ms4 = 3, /**< ASN.1 ms4 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16_ms5dot5 = 4, /**< ASN.1 ms5dot5 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16_ms6 = 5, /**< ASN.1 ms6 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16_ms10 = 6, /**< ASN.1 ms10 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16_ms20 = 7, /**< ASN.1 ms20 */
} NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16;


/**
 * @brief 枚举 LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate（ASN.1 ul-SpecificParameters/prioritisedBitRate，源文件第 7107 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate {
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps0 = 0, /**< ASN.1 kBps0 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps8 = 1, /**< ASN.1 kBps8 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps16 = 2, /**< ASN.1 kBps16 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps32 = 3, /**< ASN.1 kBps32 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps64 = 4, /**< ASN.1 kBps64 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps128 = 5, /**< ASN.1 kBps128 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps256 = 6, /**< ASN.1 kBps256 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps512 = 7, /**< ASN.1 kBps512 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps1024 = 8, /**< ASN.1 kBps1024 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps2048 = 9, /**< ASN.1 kBps2048 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps4096 = 10, /**< ASN.1 kBps4096 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps8192 = 11, /**< ASN.1 kBps8192 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps16384 = 12, /**< ASN.1 kBps16384 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps32768 = 13, /**< ASN.1 kBps32768 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_kBps65536 = 14, /**< ASN.1 kBps65536 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate_infinity = 15, /**< ASN.1 infinity */
} LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate;


/**
 * @brief 枚举 LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration（ASN.1 ul-SpecificParameters/bucketSizeDuration，源文件第 7109 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration {
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_ms5 = 0, /**< ASN.1 ms5 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_ms10 = 1, /**< ASN.1 ms10 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_ms20 = 2, /**< ASN.1 ms20 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_ms50 = 3, /**< ASN.1 ms50 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_ms100 = 4, /**< ASN.1 ms100 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_ms150 = 5, /**< ASN.1 ms150 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_ms300 = 6, /**< ASN.1 ms300 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_ms500 = 7, /**< ASN.1 ms500 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_ms1000 = 8, /**< ASN.1 ms1000 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_spare7 = 9, /**< ASN.1 spare7 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_spare6 = 10, /**< ASN.1 spare6 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_spare5 = 11, /**< ASN.1 spare5 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_spare4 = 12, /**< ASN.1 spare4 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_spare3 = 13, /**< ASN.1 spare3 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_spare2 = 14, /**< ASN.1 spare2 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration_spare1 = 15, /**< ASN.1 spare1 */
} LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration;


/**
 * @brief 枚举 LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration（ASN.1 ul-SpecificParameters/maxPUSCH-Duration，源文件第 7114 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration {
    LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration_ms0p02 = 0, /**< ASN.1 ms0p02 */
    LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration_ms0p04 = 1, /**< ASN.1 ms0p04 */
    LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration_ms0p0625 = 2, /**< ASN.1 ms0p0625 */
    LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration_ms0p125 = 3, /**< ASN.1 ms0p125 */
    LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration_ms0p25 = 4, /**< ASN.1 ms0p25 */
    LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration_ms0p5 = 5, /**< ASN.1 ms0p5 */
    LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration_ms0p01_v1700 = 6, /**< ASN.1 ms0p01-v1700 */
    LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration_spare1 = 7, /**< ASN.1 spare1 */
} LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration;


/**
 * @brief 枚举 LogicalChannelConfig_Ul_SpecificParameters_ConfiguredGrantType1Allowed（ASN.1 ul-SpecificParameters/configuredGrantType1Allowed，源文件第 7116 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogicalChannelConfig_Ul_SpecificParameters_ConfiguredGrantType1Allowed {
    LogicalChannelConfig_Ul_SpecificParameters_ConfiguredGrantType1Allowed_trueVal = 0, /**< ASN.1 trueVal */
} LogicalChannelConfig_Ul_SpecificParameters_ConfiguredGrantType1Allowed;


/**
 * @brief 枚举 LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer（ASN.1 ul-SpecificParameters/bitRateQueryProhibitTimer，源文件第 7122 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer {
    LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer_s0 = 0, /**< ASN.1 s0 */
    LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer_s0dot4 = 1, /**< ASN.1 s0dot4 */
    LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer_s0dot8 = 2, /**< ASN.1 s0dot8 */
    LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer_s1dot6 = 3, /**< ASN.1 s1dot6 */
    LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer_s3 = 4, /**< ASN.1 s3 */
    LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer_s6 = 5, /**< ASN.1 s6 */
    LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer_s12 = 6, /**< ASN.1 s12 */
    LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer_s30 = 7, /**< ASN.1 s30 */
} LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer;


/**
 * @brief 枚举 LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1_AllowedPHY_PriorityIndex_r16（ASN.1 ul-SpecificParameters/allowedPHY-PriorityIndex-r16，源文件第 7126 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1_AllowedPHY_PriorityIndex_r16 {
    LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1_AllowedPHY_PriorityIndex_r16_p0 = 0, /**< ASN.1 p0 */
    LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1_AllowedPHY_PriorityIndex_r16_p1 = 1, /**< ASN.1 p1 */
} LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1_AllowedPHY_PriorityIndex_r16;


/**
 * @brief 枚举 LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2_AllowedHARQ_mode_r17（ASN.1 ul-SpecificParameters/allowedHARQ-mode-r17，源文件第 7130 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2_AllowedHARQ_mode_r17 {
    LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2_AllowedHARQ_mode_r17_harqModeA = 0, /**< ASN.1 harqModeA */
    LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2_AllowedHARQ_mode_r17_harqModeB = 1, /**< ASN.1 harqModeB */
} LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2_AllowedHARQ_mode_r17;


/**
 * @brief 枚举 LogicalChannelConfig_ExtGroup1_BitRateMultiplier_r16（ASN.1 bitRateMultiplier-r16，源文件第 7136 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogicalChannelConfig_ExtGroup1_BitRateMultiplier_r16 {
    LogicalChannelConfig_ExtGroup1_BitRateMultiplier_r16_x40 = 0, /**< ASN.1 x40 */
    LogicalChannelConfig_ExtGroup1_BitRateMultiplier_r16_x70 = 1, /**< ASN.1 x70 */
    LogicalChannelConfig_ExtGroup1_BitRateMultiplier_r16_x100 = 2, /**< ASN.1 x100 */
    LogicalChannelConfig_ExtGroup1_BitRateMultiplier_r16_x200 = 3, /**< ASN.1 x200 */
} LogicalChannelConfig_ExtGroup1_BitRateMultiplier_r16;


/**
 * @brief 枚举 LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17（ASN.1 neighCarrierBandwidthDL-r17，源文件第 7151 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17 {
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17_n6 = 0, /**< ASN.1 n6 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17_n15 = 1, /**< ASN.1 n15 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17_n25 = 2, /**< ASN.1 n25 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17_n50 = 3, /**< ASN.1 n50 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17_n75 = 4, /**< ASN.1 n75 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17_n100 = 5, /**< ASN.1 n100 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17_spare2 = 6, /**< ASN.1 spare2 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17_spare1 = 7, /**< ASN.1 spare1 */
} LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17;


/**
 * @brief 枚举 LTE_NeighCellsCRS_AssistInfo_r17_NeighCRS_muting_r17（ASN.1 neighCRS-muting-r17，源文件第 7154 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTE_NeighCellsCRS_AssistInfo_r17_NeighCRS_muting_r17 {
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCRS_muting_r17_enabled = 0, /**< ASN.1 enabled */
} LTE_NeighCellsCRS_AssistInfo_r17_NeighCRS_muting_r17;


/**
 * @brief 枚举 LTE_NeighCellsCRS_AssistInfo_r17_NeighNrofCRS_Ports_r17（ASN.1 neighNrofCRS-Ports-r17，源文件第 7156 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTE_NeighCellsCRS_AssistInfo_r17_NeighNrofCRS_Ports_r17 {
    LTE_NeighCellsCRS_AssistInfo_r17_NeighNrofCRS_Ports_r17_n1 = 0, /**< ASN.1 n1 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighNrofCRS_Ports_r17_n2 = 1, /**< ASN.1 n2 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighNrofCRS_Ports_r17_n4 = 2, /**< ASN.1 n4 */
} LTE_NeighCellsCRS_AssistInfo_r17_NeighNrofCRS_Ports_r17;


/**
 * @brief 枚举 LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17（ASN.1 neighV-Shift-r17，源文件第 7157 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17 {
    LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17_n0 = 0, /**< ASN.1 n0 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17_n1 = 1, /**< ASN.1 n1 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17_n2 = 2, /**< ASN.1 n2 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17_n3 = 3, /**< ASN.1 n3 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17_n4 = 4, /**< ASN.1 n4 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17_n5 = 5, /**< ASN.1 n5 */
} LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17;


/**
 * @brief 枚举 LTM_Candidate_r18_Ltm_ConfigComplete_r18（ASN.1 ltm-ConfigComplete-r18，源文件第 7173 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTM_Candidate_r18_Ltm_ConfigComplete_r18 {
    LTM_Candidate_r18_Ltm_ConfigComplete_r18_trueVal = 0, /**< ASN.1 trueVal */
} LTM_Candidate_r18_Ltm_ConfigComplete_r18;


/**
 * @brief 枚举 LTM_SSB_Config_r18_Ssb_Periodicity_r18（ASN.1 ssb-Periodicity-r18，源文件第 7185 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTM_SSB_Config_r18_Ssb_Periodicity_r18 {
    LTM_SSB_Config_r18_Ssb_Periodicity_r18_ms5 = 0, /**< ASN.1 ms5 */
    LTM_SSB_Config_r18_Ssb_Periodicity_r18_ms10 = 1, /**< ASN.1 ms10 */
    LTM_SSB_Config_r18_Ssb_Periodicity_r18_ms20 = 2, /**< ASN.1 ms20 */
    LTM_SSB_Config_r18_Ssb_Periodicity_r18_ms40 = 3, /**< ASN.1 ms40 */
    LTM_SSB_Config_r18_Ssb_Periodicity_r18_ms80 = 4, /**< ASN.1 ms80 */
    LTM_SSB_Config_r18_Ssb_Periodicity_r18_ms160 = 5, /**< ASN.1 ms160 */
    LTM_SSB_Config_r18_Ssb_Periodicity_r18_spare2 = 6, /**< ASN.1 spare2 */
    LTM_SSB_Config_r18_Ssb_Periodicity_r18_spare1 = 7, /**< ASN.1 spare1 */
} LTM_SSB_Config_r18_Ssb_Periodicity_r18;


/**
 * @brief 枚举 LTM_Config_r18_AttemptLTM_Switch_r18（ASN.1 attemptLTM-Switch-r18，源文件第 7207 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTM_Config_r18_AttemptLTM_Switch_r18 {
    LTM_Config_r18_AttemptLTM_Switch_r18_trueVal = 0, /**< ASN.1 trueVal */
} LTM_Config_r18_AttemptLTM_Switch_r18;


/**
 * @brief 枚举 LTM_ReportContent_r18_NrOfReportedCells_r18（ASN.1 nrOfReportedCells-r18，源文件第 7246 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTM_ReportContent_r18_NrOfReportedCells_r18 {
    LTM_ReportContent_r18_NrOfReportedCells_r18_n1 = 0, /**< ASN.1 n1 */
    LTM_ReportContent_r18_NrOfReportedCells_r18_n2 = 1, /**< ASN.1 n2 */
    LTM_ReportContent_r18_NrOfReportedCells_r18_n3 = 2, /**< ASN.1 n3 */
    LTM_ReportContent_r18_NrOfReportedCells_r18_n4 = 3, /**< ASN.1 n4 */
} LTM_ReportContent_r18_NrOfReportedCells_r18;


/**
 * @brief 枚举 LTM_ReportContent_r18_NrOfReportedRS_PerCell_r18（ASN.1 nrOfReportedRS-PerCell-r18，源文件第 7247 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTM_ReportContent_r18_NrOfReportedRS_PerCell_r18 {
    LTM_ReportContent_r18_NrOfReportedRS_PerCell_r18_n1 = 0, /**< ASN.1 n1 */
    LTM_ReportContent_r18_NrOfReportedRS_PerCell_r18_n2 = 1, /**< ASN.1 n2 */
    LTM_ReportContent_r18_NrOfReportedRS_PerCell_r18_n3 = 2, /**< ASN.1 n3 */
    LTM_ReportContent_r18_NrOfReportedRS_PerCell_r18_n4 = 3, /**< ASN.1 n4 */
} LTM_ReportContent_r18_NrOfReportedRS_PerCell_r18;


/**
 * @brief 枚举 LTM_ReportContent_r18_SpCellInclusion_r18（ASN.1 spCellInclusion-r18，源文件第 7248 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTM_ReportContent_r18_SpCellInclusion_r18 {
    LTM_ReportContent_r18_SpCellInclusion_r18_trueVal = 0, /**< ASN.1 trueVal */
} LTM_ReportContent_r18_SpCellInclusion_r18;


/**
 * @brief 枚举 LTM_TCI_Info_r18_UnifiedTCI_StateType_r18（ASN.1 unifiedTCI-StateType-r18，源文件第 7300 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LTM_TCI_Info_r18_UnifiedTCI_StateType_r18 {
    LTM_TCI_Info_r18_UnifiedTCI_StateType_r18_separate = 0, /**< ASN.1 separate */
    LTM_TCI_Info_r18_UnifiedTCI_StateType_r18_joint = 1, /**< ASN.1 joint */
} LTM_TCI_Info_r18_UnifiedTCI_StateType_r18;


/**
 * @brief 枚举 MAC_CellGroupConfig_ExtGroup2_UsePreBSR_r16（ASN.1 usePreBSR-r16，源文件第 7319 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_CellGroupConfig_ExtGroup2_UsePreBSR_r16 {
    MAC_CellGroupConfig_ExtGroup2_UsePreBSR_r16_trueVal = 0, /**< ASN.1 trueVal */
} MAC_CellGroupConfig_ExtGroup2_UsePreBSR_r16;


/**
 * @brief 枚举 MAC_CellGroupConfig_ExtGroup2_Lch_BasedPrioritization_r16（ASN.1 lch-BasedPrioritization-r16，源文件第 7321 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_CellGroupConfig_ExtGroup2_Lch_BasedPrioritization_r16 {
    MAC_CellGroupConfig_ExtGroup2_Lch_BasedPrioritization_r16_enabled = 0, /**< ASN.1 enabled */
} MAC_CellGroupConfig_ExtGroup2_Lch_BasedPrioritization_r16;


/**
 * @brief 枚举 MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxDynamic_r16（ASN.1 enhancedSkipUplinkTxDynamic-r16，源文件第 7326 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxDynamic_r16 {
    MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxDynamic_r16_trueVal = 0, /**< ASN.1 trueVal */
} MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxDynamic_r16;


/**
 * @brief 枚举 MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxConfigured_r16（ASN.1 enhancedSkipUplinkTxConfigured-r16，源文件第 7327 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxConfigured_r16 {
    MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxConfigured_r16_trueVal = 0, /**< ASN.1 trueVal */
} MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxConfigured_r16;


/**
 * @brief 枚举 MAC_CellGroupConfig_ExtGroup4_IntraCG_Prioritization_r17（ASN.1 intraCG-Prioritization-r17，源文件第 7330 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_CellGroupConfig_ExtGroup4_IntraCG_Prioritization_r17 {
    MAC_CellGroupConfig_ExtGroup4_IntraCG_Prioritization_r17_enabled = 0, /**< ASN.1 enabled */
} MAC_CellGroupConfig_ExtGroup4_IntraCG_Prioritization_r17;


/**
 * @brief 枚举 MAC_CellGroupConfig_ExtGroup5_Drx_LastTransmissionUL_r17（ASN.1 drx-LastTransmissionUL-r17，源文件第 7345 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_CellGroupConfig_ExtGroup5_Drx_LastTransmissionUL_r17 {
    MAC_CellGroupConfig_ExtGroup5_Drx_LastTransmissionUL_r17_enabled = 0, /**< ASN.1 enabled */
} MAC_CellGroupConfig_ExtGroup5_Drx_LastTransmissionUL_r17;


/**
 * @brief 枚举 MAC_CellGroupConfig_ExtGroup6_PosMG_Request_r17（ASN.1 posMG-Request-r17，源文件第 7348 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_CellGroupConfig_ExtGroup6_PosMG_Request_r17 {
    MAC_CellGroupConfig_ExtGroup6_PosMG_Request_r17_enabled = 0, /**< ASN.1 enabled */
} MAC_CellGroupConfig_ExtGroup6_PosMG_Request_r17;


/**
 * @brief 枚举 MBS_RNTI_SpecificConfig_r17_Harq_FeedbackEnablerMulticast_r17（ASN.1 harq-FeedbackEnablerMulticast-r17，源文件第 7368 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MBS_RNTI_SpecificConfig_r17_Harq_FeedbackEnablerMulticast_r17 {
    MBS_RNTI_SpecificConfig_r17_Harq_FeedbackEnablerMulticast_r17_dci_enabler = 0, /**< ASN.1 dci-enabler */
    MBS_RNTI_SpecificConfig_r17_Harq_FeedbackEnablerMulticast_r17_enabled = 1, /**< ASN.1 enabled */
} MBS_RNTI_SpecificConfig_r17_Harq_FeedbackEnablerMulticast_r17;


/**
 * @brief 枚举 MBS_RNTI_SpecificConfig_r17_Harq_FeedbackOptionMulticast_r17（ASN.1 harq-FeedbackOptionMulticast-r17，源文件第 7369 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MBS_RNTI_SpecificConfig_r17_Harq_FeedbackOptionMulticast_r17 {
    MBS_RNTI_SpecificConfig_r17_Harq_FeedbackOptionMulticast_r17_ack_nack = 0, /**< ASN.1 ack-nack */
    MBS_RNTI_SpecificConfig_r17_Harq_FeedbackOptionMulticast_r17_nack_only = 1, /**< ASN.1 nack-only */
} MBS_RNTI_SpecificConfig_r17_Harq_FeedbackOptionMulticast_r17;


/**
 * @brief 枚举 MBS_RNTI_SpecificConfig_r17_Pdsch_AggregationFactor_r17（ASN.1 pdsch-AggregationFactor-r17，源文件第 7370 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MBS_RNTI_SpecificConfig_r17_Pdsch_AggregationFactor_r17 {
    MBS_RNTI_SpecificConfig_r17_Pdsch_AggregationFactor_r17_n2 = 0, /**< ASN.1 n2 */
    MBS_RNTI_SpecificConfig_r17_Pdsch_AggregationFactor_r17_n4 = 1, /**< ASN.1 n4 */
    MBS_RNTI_SpecificConfig_r17_Pdsch_AggregationFactor_r17_n8 = 2, /**< ASN.1 n8 */
} MBS_RNTI_SpecificConfig_r17_Pdsch_AggregationFactor_r17;


/**
 * @brief 枚举 MeasConfig_ExtGroup1_InterFrequencyConfig_NoGap_r16（ASN.1 interFrequencyConfig-NoGap-r16，源文件第 7402 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasConfig_ExtGroup1_InterFrequencyConfig_NoGap_r16 {
    MeasConfig_ExtGroup1_InterFrequencyConfig_NoGap_r16_trueVal = 0, /**< ASN.1 trueVal */
} MeasConfig_ExtGroup1_InterFrequencyConfig_NoGap_r16;


/**
 * @brief 枚举 GapConfig_Mgl（ASN.1 mgl，源文件第 7436 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_Mgl {
    GapConfig_Mgl_ms1dot5 = 0, /**< ASN.1 ms1dot5 */
    GapConfig_Mgl_ms3 = 1, /**< ASN.1 ms3 */
    GapConfig_Mgl_ms3dot5 = 2, /**< ASN.1 ms3dot5 */
    GapConfig_Mgl_ms4 = 3, /**< ASN.1 ms4 */
    GapConfig_Mgl_ms5dot5 = 4, /**< ASN.1 ms5dot5 */
    GapConfig_Mgl_ms6 = 5, /**< ASN.1 ms6 */
} GapConfig_Mgl;


/**
 * @brief 枚举 GapConfig_Mgrp（ASN.1 mgrp，源文件第 7437 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_Mgrp {
    GapConfig_Mgrp_ms20 = 0, /**< ASN.1 ms20 */
    GapConfig_Mgrp_ms40 = 1, /**< ASN.1 ms40 */
    GapConfig_Mgrp_ms80 = 2, /**< ASN.1 ms80 */
    GapConfig_Mgrp_ms160 = 3, /**< ASN.1 ms160 */
} GapConfig_Mgrp;


/**
 * @brief 枚举 GapConfig_Mgta（ASN.1 mgta，源文件第 7438 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_Mgta {
    GapConfig_Mgta_ms0 = 0, /**< ASN.1 ms0 */
    GapConfig_Mgta_ms0dot25 = 1, /**< ASN.1 ms0dot25 */
    GapConfig_Mgta_ms0dot5 = 2, /**< ASN.1 ms0dot5 */
} GapConfig_Mgta;


/**
 * @brief 枚举 GapConfig_ExtGroup1_RefServCellIndicator（ASN.1 refServCellIndicator，源文件第 7441 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_ExtGroup1_RefServCellIndicator {
    GapConfig_ExtGroup1_RefServCellIndicator_pCell = 0, /**< ASN.1 pCell */
    GapConfig_ExtGroup1_RefServCellIndicator_pSCell = 1, /**< ASN.1 pSCell */
    GapConfig_ExtGroup1_RefServCellIndicator_mcg_FR2 = 2, /**< ASN.1 mcg-FR2 */
} GapConfig_ExtGroup1_RefServCellIndicator;


/**
 * @brief 枚举 GapConfig_ExtGroup2_Mgl_r16（ASN.1 mgl-r16，源文件第 7445 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_ExtGroup2_Mgl_r16 {
    GapConfig_ExtGroup2_Mgl_r16_ms10 = 0, /**< ASN.1 ms10 */
    GapConfig_ExtGroup2_Mgl_r16_ms20 = 1, /**< ASN.1 ms20 */
} GapConfig_ExtGroup2_Mgl_r16;


/**
 * @brief 枚举 GapConfig_r17_GapType_r17（ASN.1 gapType-r17，源文件第 7451 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_r17_GapType_r17 {
    GapConfig_r17_GapType_r17_perUE = 0, /**< ASN.1 perUE */
    GapConfig_r17_GapType_r17_perFR1 = 1, /**< ASN.1 perFR1 */
    GapConfig_r17_GapType_r17_perFR2 = 2, /**< ASN.1 perFR2 */
} GapConfig_r17_GapType_r17;


/**
 * @brief 枚举 GapConfig_r17_Mgl_r17（ASN.1 mgl-r17，源文件第 7453 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_r17_Mgl_r17 {
    GapConfig_r17_Mgl_r17_ms1 = 0, /**< ASN.1 ms1 */
    GapConfig_r17_Mgl_r17_ms1dot5 = 1, /**< ASN.1 ms1dot5 */
    GapConfig_r17_Mgl_r17_ms2 = 2, /**< ASN.1 ms2 */
    GapConfig_r17_Mgl_r17_ms3 = 3, /**< ASN.1 ms3 */
    GapConfig_r17_Mgl_r17_ms3dot5 = 4, /**< ASN.1 ms3dot5 */
    GapConfig_r17_Mgl_r17_ms4 = 5, /**< ASN.1 ms4 */
    GapConfig_r17_Mgl_r17_ms5 = 6, /**< ASN.1 ms5 */
    GapConfig_r17_Mgl_r17_ms5dot5 = 7, /**< ASN.1 ms5dot5 */
    GapConfig_r17_Mgl_r17_ms6 = 8, /**< ASN.1 ms6 */
    GapConfig_r17_Mgl_r17_ms10 = 9, /**< ASN.1 ms10 */
    GapConfig_r17_Mgl_r17_ms20 = 10, /**< ASN.1 ms20 */
} GapConfig_r17_Mgl_r17;


/**
 * @brief 枚举 GapConfig_r17_Mgrp_r17（ASN.1 mgrp-r17，源文件第 7454 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_r17_Mgrp_r17 {
    GapConfig_r17_Mgrp_r17_ms20 = 0, /**< ASN.1 ms20 */
    GapConfig_r17_Mgrp_r17_ms40 = 1, /**< ASN.1 ms40 */
    GapConfig_r17_Mgrp_r17_ms80 = 2, /**< ASN.1 ms80 */
    GapConfig_r17_Mgrp_r17_ms160 = 3, /**< ASN.1 ms160 */
} GapConfig_r17_Mgrp_r17;


/**
 * @brief 枚举 GapConfig_r17_Mgta_r17（ASN.1 mgta-r17，源文件第 7455 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_r17_Mgta_r17 {
    GapConfig_r17_Mgta_r17_ms0 = 0, /**< ASN.1 ms0 */
    GapConfig_r17_Mgta_r17_ms0dot25 = 1, /**< ASN.1 ms0dot25 */
    GapConfig_r17_Mgta_r17_ms0dot5 = 2, /**< ASN.1 ms0dot5 */
    GapConfig_r17_Mgta_r17_ms0dot75 = 3, /**< ASN.1 ms0dot75 */
} GapConfig_r17_Mgta_r17;


/**
 * @brief 枚举 GapConfig_r17_RefServCellIndicator_r17（ASN.1 refServCellIndicator-r17，源文件第 7456 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_r17_RefServCellIndicator_r17 {
    GapConfig_r17_RefServCellIndicator_r17_pCell = 0, /**< ASN.1 pCell */
    GapConfig_r17_RefServCellIndicator_r17_pSCell = 1, /**< ASN.1 pSCell */
    GapConfig_r17_RefServCellIndicator_r17_mcg_FR2 = 2, /**< ASN.1 mcg-FR2 */
} GapConfig_r17_RefServCellIndicator_r17;


/**
 * @brief 枚举 GapConfig_r17_PreConfigInd_r17（ASN.1 preConfigInd-r17，源文件第 7458 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_r17_PreConfigInd_r17 {
    GapConfig_r17_PreConfigInd_r17_trueVal = 0, /**< ASN.1 trueVal */
} GapConfig_r17_PreConfigInd_r17;


/**
 * @brief 枚举 GapConfig_r17_NcsgInd_r17（ASN.1 ncsgInd-r17，源文件第 7459 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_r17_NcsgInd_r17 {
    GapConfig_r17_NcsgInd_r17_trueVal = 0, /**< ASN.1 trueVal */
} GapConfig_r17_NcsgInd_r17;


/**
 * @brief 枚举 GapConfig_r17_GapAssociationPRS_r17（ASN.1 gapAssociationPRS-r17，源文件第 7460 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GapConfig_r17_GapAssociationPRS_r17 {
    GapConfig_r17_GapAssociationPRS_r17_trueVal = 0, /**< ASN.1 trueVal */
} GapConfig_r17_GapAssociationPRS_r17;


/**
 * @brief 枚举 PosGapConfig_r17_Mgl_r17（ASN.1 mgl-r17，源文件第 7473 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosGapConfig_r17_Mgl_r17 {
    PosGapConfig_r17_Mgl_r17_ms1dot5 = 0, /**< ASN.1 ms1dot5 */
    PosGapConfig_r17_Mgl_r17_ms3 = 1, /**< ASN.1 ms3 */
    PosGapConfig_r17_Mgl_r17_ms3dot5 = 2, /**< ASN.1 ms3dot5 */
    PosGapConfig_r17_Mgl_r17_ms4 = 3, /**< ASN.1 ms4 */
    PosGapConfig_r17_Mgl_r17_ms5dot5 = 4, /**< ASN.1 ms5dot5 */
    PosGapConfig_r17_Mgl_r17_ms6 = 5, /**< ASN.1 ms6 */
    PosGapConfig_r17_Mgl_r17_ms10 = 6, /**< ASN.1 ms10 */
    PosGapConfig_r17_Mgl_r17_ms20 = 7, /**< ASN.1 ms20 */
} PosGapConfig_r17_Mgl_r17;


/**
 * @brief 枚举 PosGapConfig_r17_Mgrp_r17（ASN.1 mgrp-r17，源文件第 7474 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosGapConfig_r17_Mgrp_r17 {
    PosGapConfig_r17_Mgrp_r17_ms20 = 0, /**< ASN.1 ms20 */
    PosGapConfig_r17_Mgrp_r17_ms40 = 1, /**< ASN.1 ms40 */
    PosGapConfig_r17_Mgrp_r17_ms80 = 2, /**< ASN.1 ms80 */
    PosGapConfig_r17_Mgrp_r17_ms160 = 3, /**< ASN.1 ms160 */
} PosGapConfig_r17_Mgrp_r17;


/**
 * @brief 枚举 PosGapConfig_r17_Mgta_r17（ASN.1 mgta-r17，源文件第 7475 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosGapConfig_r17_Mgta_r17 {
    PosGapConfig_r17_Mgta_r17_ms0 = 0, /**< ASN.1 ms0 */
    PosGapConfig_r17_Mgta_r17_ms0dot25 = 1, /**< ASN.1 ms0dot25 */
    PosGapConfig_r17_Mgta_r17_ms0dot5 = 2, /**< ASN.1 ms0dot5 */
} PosGapConfig_r17_Mgta_r17;


/**
 * @brief 枚举 PosGapConfig_r17_GapType_r17（ASN.1 gapType-r17，源文件第 7476 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosGapConfig_r17_GapType_r17 {
    PosGapConfig_r17_GapType_r17_perUE = 0, /**< ASN.1 perUE */
    PosGapConfig_r17_GapType_r17_perFR1 = 1, /**< ASN.1 perFR1 */
    PosGapConfig_r17_GapType_r17_perFR2 = 2, /**< ASN.1 perFR2 */
} PosGapConfig_r17_GapType_r17;


/**
 * @brief 枚举 MeasIdleConfigDedicated_r16_MeasIdleDuration_r16（ASN.1 measIdleDuration-r16，源文件第 7523 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasIdleConfigDedicated_r16_MeasIdleDuration_r16 {
    MeasIdleConfigDedicated_r16_MeasIdleDuration_r16_sec10 = 0, /**< ASN.1 sec10 */
    MeasIdleConfigDedicated_r16_MeasIdleDuration_r16_sec30 = 1, /**< ASN.1 sec30 */
    MeasIdleConfigDedicated_r16_MeasIdleDuration_r16_sec60 = 2, /**< ASN.1 sec60 */
    MeasIdleConfigDedicated_r16_MeasIdleDuration_r16_sec120 = 3, /**< ASN.1 sec120 */
    MeasIdleConfigDedicated_r16_MeasIdleDuration_r16_sec180 = 4, /**< ASN.1 sec180 */
    MeasIdleConfigDedicated_r16_MeasIdleDuration_r16_sec240 = 5, /**< ASN.1 sec240 */
    MeasIdleConfigDedicated_r16_MeasIdleDuration_r16_sec300 = 6, /**< ASN.1 sec300 */
    MeasIdleConfigDedicated_r16_MeasIdleDuration_r16_spare = 7, /**< ASN.1 spare */
} MeasIdleConfigDedicated_r16_MeasIdleDuration_r16;


/**
 * @brief 枚举 MeasIdleCarrierNR_r16_ReportQuantities_r16（ASN.1 reportQuantities-r16，源文件第 7547 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasIdleCarrierNR_r16_ReportQuantities_r16 {
    MeasIdleCarrierNR_r16_ReportQuantities_r16_rsrp = 0, /**< ASN.1 rsrp */
    MeasIdleCarrierNR_r16_ReportQuantities_r16_rsrq = 1, /**< ASN.1 rsrq */
    MeasIdleCarrierNR_r16_ReportQuantities_r16_both = 2, /**< ASN.1 both */
} MeasIdleCarrierNR_r16_ReportQuantities_r16;


/**
 * @brief 枚举 MeasIdleCarrierEUTRA_r16_ReportQuantitiesEUTRA_r16（ASN.1 reportQuantitiesEUTRA-r16，源文件第 7568 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasIdleCarrierEUTRA_r16_ReportQuantitiesEUTRA_r16 {
    MeasIdleCarrierEUTRA_r16_ReportQuantitiesEUTRA_r16_rsrp = 0, /**< ASN.1 rsrp */
    MeasIdleCarrierEUTRA_r16_ReportQuantitiesEUTRA_r16_rsrq = 1, /**< ASN.1 rsrq */
    MeasIdleCarrierEUTRA_r16_ReportQuantitiesEUTRA_r16_both = 2, /**< ASN.1 both */
} MeasIdleCarrierEUTRA_r16_ReportQuantitiesEUTRA_r16;


/**
 * @brief 枚举 BeamMeasConfigIdle_NR_r16_ReportQuantityRS_Indexes_r16（ASN.1 reportQuantityRS-Indexes-r16，源文件第 7589 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamMeasConfigIdle_NR_r16_ReportQuantityRS_Indexes_r16 {
    BeamMeasConfigIdle_NR_r16_ReportQuantityRS_Indexes_r16_rsrp = 0, /**< ASN.1 rsrp */
    BeamMeasConfigIdle_NR_r16_ReportQuantityRS_Indexes_r16_rsrq = 1, /**< ASN.1 rsrq */
    BeamMeasConfigIdle_NR_r16_ReportQuantityRS_Indexes_r16_both = 2, /**< ASN.1 both */
} BeamMeasConfigIdle_NR_r16_ReportQuantityRS_Indexes_r16;


/**
 * @brief 枚举 MeasObjectNR_ExtGroup1_MeasCycleSCell（ASN.1 measCycleSCell，源文件第 7726 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasObjectNR_ExtGroup1_MeasCycleSCell {
    MeasObjectNR_ExtGroup1_MeasCycleSCell_sf160 = 0, /**< ASN.1 sf160 */
    MeasObjectNR_ExtGroup1_MeasCycleSCell_sf256 = 1, /**< ASN.1 sf256 */
    MeasObjectNR_ExtGroup1_MeasCycleSCell_sf320 = 2, /**< ASN.1 sf320 */
    MeasObjectNR_ExtGroup1_MeasCycleSCell_sf512 = 3, /**< ASN.1 sf512 */
    MeasObjectNR_ExtGroup1_MeasCycleSCell_sf640 = 4, /**< ASN.1 sf640 */
    MeasObjectNR_ExtGroup1_MeasCycleSCell_sf1024 = 5, /**< ASN.1 sf1024 */
    MeasObjectNR_ExtGroup1_MeasCycleSCell_sf1280 = 6, /**< ASN.1 sf1280 */
} MeasObjectNR_ExtGroup1_MeasCycleSCell;


/**
 * @brief 枚举 MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17（ASN.1 measCyclePSCell-r17，源文件第 7737 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17 {
    MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17_ms160 = 0, /**< ASN.1 ms160 */
    MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17_ms256 = 1, /**< ASN.1 ms256 */
    MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17_ms320 = 2, /**< ASN.1 ms320 */
    MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17_ms512 = 3, /**< ASN.1 ms512 */
    MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17_ms640 = 4, /**< ASN.1 ms640 */
    MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17_ms1024 = 5, /**< ASN.1 ms1024 */
    MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17_ms1280 = 6, /**< ASN.1 ms1280 */
    MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17_spare1 = 7, /**< ASN.1 spare1 */
} MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17;


/**
 * @brief 枚举 CellsToAddModExt_v1710_Ntn_PolarizationDL_r17（ASN.1 ntn-PolarizationDL-r17，源文件第 7814 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellsToAddModExt_v1710_Ntn_PolarizationDL_r17 {
    CellsToAddModExt_v1710_Ntn_PolarizationDL_r17_rhcp = 0, /**< ASN.1 rhcp */
    CellsToAddModExt_v1710_Ntn_PolarizationDL_r17_lhcp = 1, /**< ASN.1 lhcp */
    CellsToAddModExt_v1710_Ntn_PolarizationDL_r17_linear = 2, /**< ASN.1 linear */
} CellsToAddModExt_v1710_Ntn_PolarizationDL_r17;


/**
 * @brief 枚举 CellsToAddModExt_v1710_Ntn_PolarizationUL_r17（ASN.1 ntn-PolarizationUL-r17，源文件第 7815 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellsToAddModExt_v1710_Ntn_PolarizationUL_r17 {
    CellsToAddModExt_v1710_Ntn_PolarizationUL_r17_rhcp = 0, /**< ASN.1 rhcp */
    CellsToAddModExt_v1710_Ntn_PolarizationUL_r17_lhcp = 1, /**< ASN.1 lhcp */
    CellsToAddModExt_v1710_Ntn_PolarizationUL_r17_linear = 2, /**< ASN.1 linear */
} CellsToAddModExt_v1710_Ntn_PolarizationUL_r17;


/**
 * @brief 枚举 RMTC_Config_r16_Rmtc_Periodicity_r16（ASN.1 rmtc-Periodicity-r16，源文件第 7823 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RMTC_Config_r16_Rmtc_Periodicity_r16 {
    RMTC_Config_r16_Rmtc_Periodicity_r16_ms40 = 0, /**< ASN.1 ms40 */
    RMTC_Config_r16_Rmtc_Periodicity_r16_ms80 = 1, /**< ASN.1 ms80 */
    RMTC_Config_r16_Rmtc_Periodicity_r16_ms160 = 2, /**< ASN.1 ms160 */
    RMTC_Config_r16_Rmtc_Periodicity_r16_ms320 = 3, /**< ASN.1 ms320 */
    RMTC_Config_r16_Rmtc_Periodicity_r16_ms640 = 4, /**< ASN.1 ms640 */
} RMTC_Config_r16_Rmtc_Periodicity_r16;


/**
 * @brief 枚举 RMTC_Config_r16_MeasDurationSymbols_r16（ASN.1 measDurationSymbols-r16，源文件第 7825 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RMTC_Config_r16_MeasDurationSymbols_r16 {
    RMTC_Config_r16_MeasDurationSymbols_r16_sym1 = 0, /**< ASN.1 sym1 */
    RMTC_Config_r16_MeasDurationSymbols_r16_sym14or12 = 1, /**< ASN.1 sym14or12 */
    RMTC_Config_r16_MeasDurationSymbols_r16_sym28or24 = 2, /**< ASN.1 sym28or24 */
    RMTC_Config_r16_MeasDurationSymbols_r16_sym42or36 = 3, /**< ASN.1 sym42or36 */
    RMTC_Config_r16_MeasDurationSymbols_r16_sym70or60 = 4, /**< ASN.1 sym70or60 */
} RMTC_Config_r16_MeasDurationSymbols_r16;


/**
 * @brief 枚举 RMTC_Config_r16_Ref_SCS_CP_r16（ASN.1 ref-SCS-CP-r16，源文件第 7827 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RMTC_Config_r16_Ref_SCS_CP_r16 {
    RMTC_Config_r16_Ref_SCS_CP_r16_kHz15 = 0, /**< ASN.1 kHz15 */
    RMTC_Config_r16_Ref_SCS_CP_r16_kHz30 = 1, /**< ASN.1 kHz30 */
    RMTC_Config_r16_Ref_SCS_CP_r16_kHz60_NCP = 2, /**< ASN.1 kHz60-NCP */
    RMTC_Config_r16_Ref_SCS_CP_r16_kHz60_ECP = 3, /**< ASN.1 kHz60-ECP */
} RMTC_Config_r16_Ref_SCS_CP_r16;


/**
 * @brief 枚举 RMTC_Config_r16_ExtGroup1_Rmtc_Bandwidth_r17（ASN.1 rmtc-Bandwidth-r17，源文件第 7830 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RMTC_Config_r16_ExtGroup1_Rmtc_Bandwidth_r17 {
    RMTC_Config_r16_ExtGroup1_Rmtc_Bandwidth_r17_mhz100 = 0, /**< ASN.1 mhz100 */
    RMTC_Config_r16_ExtGroup1_Rmtc_Bandwidth_r17_mhz400 = 1, /**< ASN.1 mhz400 */
    RMTC_Config_r16_ExtGroup1_Rmtc_Bandwidth_r17_mhz800 = 2, /**< ASN.1 mhz800 */
    RMTC_Config_r16_ExtGroup1_Rmtc_Bandwidth_r17_mhz1600 = 3, /**< ASN.1 mhz1600 */
    RMTC_Config_r16_ExtGroup1_Rmtc_Bandwidth_r17_mhz2000 = 4, /**< ASN.1 mhz2000 */
} RMTC_Config_r16_ExtGroup1_Rmtc_Bandwidth_r17;


/**
 * @brief 枚举 RMTC_Config_r16_ExtGroup1_MeasDurationSymbols_v1700（ASN.1 measDurationSymbols-v1700，源文件第 7831 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RMTC_Config_r16_ExtGroup1_MeasDurationSymbols_v1700 {
    RMTC_Config_r16_ExtGroup1_MeasDurationSymbols_v1700_sym140 = 0, /**< ASN.1 sym140 */
    RMTC_Config_r16_ExtGroup1_MeasDurationSymbols_v1700_sym560 = 1, /**< ASN.1 sym560 */
    RMTC_Config_r16_ExtGroup1_MeasDurationSymbols_v1700_sym1120 = 2, /**< ASN.1 sym1120 */
} RMTC_Config_r16_ExtGroup1_MeasDurationSymbols_v1700;


/**
 * @brief 枚举 RMTC_Config_r16_ExtGroup1_Ref_SCS_CP_v1700（ASN.1 ref-SCS-CP-v1700，源文件第 7832 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RMTC_Config_r16_ExtGroup1_Ref_SCS_CP_v1700 {
    RMTC_Config_r16_ExtGroup1_Ref_SCS_CP_v1700_kHz120 = 0, /**< ASN.1 kHz120 */
    RMTC_Config_r16_ExtGroup1_Ref_SCS_CP_v1700_kHz480 = 1, /**< ASN.1 kHz480 */
    RMTC_Config_r16_ExtGroup1_Ref_SCS_CP_v1700_kHz960 = 2, /**< ASN.1 kHz960 */
} RMTC_Config_r16_ExtGroup1_Ref_SCS_CP_v1700;


/**
 * @brief 枚举 MeasResultNR_ExtGroup2_ChoCandidate_r17（ASN.1 choCandidate-r17，源文件第 8038 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasResultNR_ExtGroup2_ChoCandidate_r17 {
    MeasResultNR_ExtGroup2_ChoCandidate_r17_trueVal = 0, /**< ASN.1 trueVal */
} MeasResultNR_ExtGroup2_ChoCandidate_r17;


/**
 * @brief 枚举 MeasResultNR_ExtGroup2_TriggeredEvent_r17_FirstTriggeredEvent_r17（ASN.1 triggeredEvent-r17/firstTriggeredEvent-r17，源文件第 8042 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasResultNR_ExtGroup2_TriggeredEvent_r17_FirstTriggeredEvent_r17 {
    MeasResultNR_ExtGroup2_TriggeredEvent_r17_FirstTriggeredEvent_r17_condFirstEvent = 0, /**< ASN.1 condFirstEvent */
    MeasResultNR_ExtGroup2_TriggeredEvent_r17_FirstTriggeredEvent_r17_condSecondEvent = 1, /**< ASN.1 condSecondEvent */
} MeasResultNR_ExtGroup2_TriggeredEvent_r17_FirstTriggeredEvent_r17;


/**
 * @brief 枚举 MeasResultsPerCellIdleNR_r16_ExtGroup1_ValidityStatus_r18（ASN.1 validityStatus-r18，源文件第 8212 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasResultsPerCellIdleNR_r16_ExtGroup1_ValidityStatus_r18 {
    MeasResultsPerCellIdleNR_r16_ExtGroup1_ValidityStatus_r18_checked = 0, /**< ASN.1 checked */
    MeasResultsPerCellIdleNR_r16_ExtGroup1_ValidityStatus_r18_spare3 = 1, /**< ASN.1 spare3 */
    MeasResultsPerCellIdleNR_r16_ExtGroup1_ValidityStatus_r18_spare2 = 2, /**< ASN.1 spare2 */
    MeasResultsPerCellIdleNR_r16_ExtGroup1_ValidityStatus_r18_spare1 = 3, /**< ASN.1 spare1 */
} MeasResultsPerCellIdleNR_r16_ExtGroup1_ValidityStatus_r18;


/**
 * @brief 枚举 MeasWindowConfig_r18_WindowDuration（ASN.1 windowDuration，源文件第 8299 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasWindowConfig_r18_WindowDuration {
    MeasWindowConfig_r18_WindowDuration_ms2 = 0, /**< ASN.1 ms2 */
    MeasWindowConfig_r18_WindowDuration_ms5 = 1, /**< ASN.1 ms5 */
    MeasWindowConfig_r18_WindowDuration_ms5dot5 = 2, /**< ASN.1 ms5dot5 */
    MeasWindowConfig_r18_WindowDuration_spare1 = 3, /**< ASN.1 spare1 */
} MeasWindowConfig_r18_WindowDuration;


/**
 * @brief 枚举 MobilityStateParameters_T_Evaluation（ASN.1 t-Evaluation，源文件第 8307 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MobilityStateParameters_T_Evaluation {
    MobilityStateParameters_T_Evaluation_s30 = 0, /**< ASN.1 s30 */
    MobilityStateParameters_T_Evaluation_s60 = 1, /**< ASN.1 s60 */
    MobilityStateParameters_T_Evaluation_s120 = 2, /**< ASN.1 s120 */
    MobilityStateParameters_T_Evaluation_s180 = 3, /**< ASN.1 s180 */
    MobilityStateParameters_T_Evaluation_s240 = 4, /**< ASN.1 s240 */
    MobilityStateParameters_T_Evaluation_spare3 = 5, /**< ASN.1 spare3 */
    MobilityStateParameters_T_Evaluation_spare2 = 6, /**< ASN.1 spare2 */
    MobilityStateParameters_T_Evaluation_spare1 = 7, /**< ASN.1 spare1 */
} MobilityStateParameters_T_Evaluation;


/**
 * @brief 枚举 MobilityStateParameters_T_HystNormal（ASN.1 t-HystNormal，源文件第 8309 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MobilityStateParameters_T_HystNormal {
    MobilityStateParameters_T_HystNormal_s30 = 0, /**< ASN.1 s30 */
    MobilityStateParameters_T_HystNormal_s60 = 1, /**< ASN.1 s60 */
    MobilityStateParameters_T_HystNormal_s120 = 2, /**< ASN.1 s120 */
    MobilityStateParameters_T_HystNormal_s180 = 3, /**< ASN.1 s180 */
    MobilityStateParameters_T_HystNormal_s240 = 4, /**< ASN.1 s240 */
    MobilityStateParameters_T_HystNormal_spare3 = 5, /**< ASN.1 spare3 */
    MobilityStateParameters_T_HystNormal_spare2 = 6, /**< ASN.1 spare2 */
    MobilityStateParameters_T_HystNormal_spare1 = 7, /**< ASN.1 spare1 */
} MobilityStateParameters_T_HystNormal;


/**
 * @brief 枚举 MsgA_PUSCH_Config_r16_MsgA_TransformPrecoder_r16（ASN.1 msgA-TransformPrecoder-r16，源文件第 8334 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MsgA_PUSCH_Config_r16_MsgA_TransformPrecoder_r16 {
    MsgA_PUSCH_Config_r16_MsgA_TransformPrecoder_r16_enabled = 0, /**< ASN.1 enabled */
    MsgA_PUSCH_Config_r16_MsgA_TransformPrecoder_r16_disabled = 1, /**< ASN.1 disabled */
} MsgA_PUSCH_Config_r16_MsgA_TransformPrecoder_r16;


/**
 * @brief 枚举 MsgA_PUSCH_Resource_r16_NrofMsgA_PO_PerSlot_r16（ASN.1 nrofMsgA-PO-PerSlot-r16，源文件第 8342 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MsgA_PUSCH_Resource_r16_NrofMsgA_PO_PerSlot_r16 {
    MsgA_PUSCH_Resource_r16_NrofMsgA_PO_PerSlot_r16_one = 0, /**< ASN.1 one */
    MsgA_PUSCH_Resource_r16_NrofMsgA_PO_PerSlot_r16_two = 1, /**< ASN.1 two */
    MsgA_PUSCH_Resource_r16_NrofMsgA_PO_PerSlot_r16_three = 2, /**< ASN.1 three */
    MsgA_PUSCH_Resource_r16_NrofMsgA_PO_PerSlot_r16_six = 3, /**< ASN.1 six */
} MsgA_PUSCH_Resource_r16_NrofMsgA_PO_PerSlot_r16;


/**
 * @brief 枚举 MsgA_PUSCH_Resource_r16_MappingTypeMsgA_PUSCH_r16（ASN.1 mappingTypeMsgA-PUSCH-r16，源文件第 8346 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MsgA_PUSCH_Resource_r16_MappingTypeMsgA_PUSCH_r16 {
    MsgA_PUSCH_Resource_r16_MappingTypeMsgA_PUSCH_r16_typeA = 0, /**< ASN.1 typeA */
    MsgA_PUSCH_Resource_r16_MappingTypeMsgA_PUSCH_r16_typeB = 1, /**< ASN.1 typeB */
} MsgA_PUSCH_Resource_r16_MappingTypeMsgA_PUSCH_r16;


/**
 * @brief 枚举 MsgA_PUSCH_Resource_r16_NrofMsgA_PO_FDM_r16（ASN.1 nrofMsgA-PO-FDM-r16，源文件第 8351 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MsgA_PUSCH_Resource_r16_NrofMsgA_PO_FDM_r16 {
    MsgA_PUSCH_Resource_r16_NrofMsgA_PO_FDM_r16_one = 0, /**< ASN.1 one */
    MsgA_PUSCH_Resource_r16_NrofMsgA_PO_FDM_r16_two = 1, /**< ASN.1 two */
    MsgA_PUSCH_Resource_r16_NrofMsgA_PO_FDM_r16_four = 2, /**< ASN.1 four */
    MsgA_PUSCH_Resource_r16_NrofMsgA_PO_FDM_r16_eight = 3, /**< ASN.1 eight */
} MsgA_PUSCH_Resource_r16_NrofMsgA_PO_FDM_r16;


/**
 * @brief 枚举 MsgA_PUSCH_Resource_r16_MsgA_IntraSlotFrequencyHopping_r16（ASN.1 msgA-IntraSlotFrequencyHopping-r16，源文件第 8352 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MsgA_PUSCH_Resource_r16_MsgA_IntraSlotFrequencyHopping_r16 {
    MsgA_PUSCH_Resource_r16_MsgA_IntraSlotFrequencyHopping_r16_enabled = 0, /**< ASN.1 enabled */
} MsgA_PUSCH_Resource_r16_MsgA_IntraSlotFrequencyHopping_r16;


/**
 * @brief 枚举 MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16（ASN.1 msgA-Alpha-r16，源文件第 8356 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16 {
    MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16_alpha0 = 0, /**< ASN.1 alpha0 */
    MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16_alpha04 = 1, /**< ASN.1 alpha04 */
    MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16_alpha05 = 2, /**< ASN.1 alpha05 */
    MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16_alpha06 = 3, /**< ASN.1 alpha06 */
    MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16_alpha07 = 4, /**< ASN.1 alpha07 */
    MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16_alpha08 = 5, /**< ASN.1 alpha08 */
    MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16_alpha09 = 6, /**< ASN.1 alpha09 */
    MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16_alpha1 = 7, /**< ASN.1 alpha1 */
} MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16;


/**
 * @brief 枚举 MsgA_DMRS_Config_r16_MsgA_DMRS_AdditionalPosition_r16（ASN.1 msgA-DMRS-AdditionalPosition-r16，源文件第 8364 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MsgA_DMRS_Config_r16_MsgA_DMRS_AdditionalPosition_r16 {
    MsgA_DMRS_Config_r16_MsgA_DMRS_AdditionalPosition_r16_pos0 = 0, /**< ASN.1 pos0 */
    MsgA_DMRS_Config_r16_MsgA_DMRS_AdditionalPosition_r16_pos1 = 1, /**< ASN.1 pos1 */
    MsgA_DMRS_Config_r16_MsgA_DMRS_AdditionalPosition_r16_pos3 = 2, /**< ASN.1 pos3 */
} MsgA_DMRS_Config_r16_MsgA_DMRS_AdditionalPosition_r16;


/**
 * @brief 枚举 MsgA_DMRS_Config_r16_MsgA_MaxLength_r16（ASN.1 msgA-MaxLength-r16，源文件第 8365 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MsgA_DMRS_Config_r16_MsgA_MaxLength_r16 {
    MsgA_DMRS_Config_r16_MsgA_MaxLength_r16_len2 = 0, /**< ASN.1 len2 */
} MsgA_DMRS_Config_r16_MsgA_MaxLength_r16;


/**
 * @brief 枚举 MUSIM_GapConfig_r17_ExtGroup1_Musim_GapKeep_r18（ASN.1 musim-GapKeep-r18，源文件第 8410 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MUSIM_GapConfig_r17_ExtGroup1_Musim_GapKeep_r18 {
    MUSIM_GapConfig_r17_ExtGroup1_Musim_GapKeep_r18_trueVal = 0, /**< ASN.1 trueVal */
} MUSIM_GapConfig_r17_ExtGroup1_Musim_GapKeep_r18;


/**
 * @brief 枚举 MUSIM_GapInfo_r17_Musim_GapLength_r17（ASN.1 musim-GapLength-r17，源文件第 8429 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MUSIM_GapInfo_r17_Musim_GapLength_r17 {
    MUSIM_GapInfo_r17_Musim_GapLength_r17_ms3 = 0, /**< ASN.1 ms3 */
    MUSIM_GapInfo_r17_Musim_GapLength_r17_ms4 = 1, /**< ASN.1 ms4 */
    MUSIM_GapInfo_r17_Musim_GapLength_r17_ms6 = 2, /**< ASN.1 ms6 */
    MUSIM_GapInfo_r17_Musim_GapLength_r17_ms10 = 3, /**< ASN.1 ms10 */
    MUSIM_GapInfo_r17_Musim_GapLength_r17_ms20 = 4, /**< ASN.1 ms20 */
} MUSIM_GapInfo_r17_Musim_GapLength_r17;


/**
 * @brief 枚举 NCR_PeriodicFwdResourceSet_r18_PriorityFlag_r18（ASN.1 priorityFlag-r18，源文件第 8595 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NCR_PeriodicFwdResourceSet_r18_PriorityFlag_r18 {
    NCR_PeriodicFwdResourceSet_r18_PriorityFlag_r18_trueVal = 0, /**< ASN.1 trueVal */
} NCR_PeriodicFwdResourceSet_r18_PriorityFlag_r18;


/**
 * @brief 枚举 NCR_SemiPersistentFwdResourceSet_r18_PriorityFlag_r18（ASN.1 priorityFlag-r18，源文件第 8627 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NCR_SemiPersistentFwdResourceSet_r18_PriorityFlag_r18 {
    NCR_SemiPersistentFwdResourceSet_r18_PriorityFlag_r18_trueVal = 0, /**< ASN.1 trueVal */
} NCR_SemiPersistentFwdResourceSet_r18_PriorityFlag_r18;


/**
 * @brief 枚举 NeedForGapsIntraFreq_r16_GapIndicationIntra_r16（ASN.1 gapIndicationIntra-r16，源文件第 8670 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NeedForGapsIntraFreq_r16_GapIndicationIntra_r16 {
    NeedForGapsIntraFreq_r16_GapIndicationIntra_r16_gap = 0, /**< ASN.1 gap */
    NeedForGapsIntraFreq_r16_GapIndicationIntra_r16_no_gap = 1, /**< ASN.1 no-gap */
} NeedForGapsIntraFreq_r16_GapIndicationIntra_r16;


/**
 * @brief 枚举 NeedForGapsNR_r16_GapIndication_r16（ASN.1 gapIndication-r16，源文件第 8675 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NeedForGapsNR_r16_GapIndication_r16 {
    NeedForGapsNR_r16_GapIndication_r16_gap = 0, /**< ASN.1 gap */
    NeedForGapsNR_r16_GapIndication_r16_no_gap = 1, /**< ASN.1 no-gap */
} NeedForGapsNR_r16_GapIndication_r16;


/**
 * @brief 枚举 NeedForNCSG_EUTRA_r17_GapIndication_r17（ASN.1 gapIndication-r17，源文件第 8701 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NeedForNCSG_EUTRA_r17_GapIndication_r17 {
    NeedForNCSG_EUTRA_r17_GapIndication_r17_gap = 0, /**< ASN.1 gap */
    NeedForNCSG_EUTRA_r17_GapIndication_r17_ncsg = 1, /**< ASN.1 ncsg */
    NeedForNCSG_EUTRA_r17_GapIndication_r17_nogap_noncsg = 2, /**< ASN.1 nogap-noncsg */
} NeedForNCSG_EUTRA_r17_GapIndication_r17;


/**
 * @brief 枚举 NeedForNCSG_IntraFreq_r17_GapIndicationIntra_r17（ASN.1 gapIndicationIntra-r17，源文件第 8718 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NeedForNCSG_IntraFreq_r17_GapIndicationIntra_r17 {
    NeedForNCSG_IntraFreq_r17_GapIndicationIntra_r17_gap = 0, /**< ASN.1 gap */
    NeedForNCSG_IntraFreq_r17_GapIndicationIntra_r17_ncsg = 1, /**< ASN.1 ncsg */
    NeedForNCSG_IntraFreq_r17_GapIndicationIntra_r17_nogap_noncsg = 2, /**< ASN.1 nogap-noncsg */
} NeedForNCSG_IntraFreq_r17_GapIndicationIntra_r17;


/**
 * @brief 枚举 NeedForNCSG_NR_r17_GapIndication_r17（ASN.1 gapIndication-r17，源文件第 8723 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NeedForNCSG_NR_r17_GapIndication_r17 {
    NeedForNCSG_NR_r17_GapIndication_r17_gap = 0, /**< ASN.1 gap */
    NeedForNCSG_NR_r17_GapIndication_r17_ncsg = 1, /**< ASN.1 ncsg */
    NeedForNCSG_NR_r17_GapIndication_r17_nogap_noncsg = 2, /**< ASN.1 nogap-noncsg */
} NeedForNCSG_NR_r17_GapIndication_r17;


/**
 * @brief 枚举 NeedForInterruptionNR_r18_InterruptionIndication_r18（ASN.1 interruptionIndication-r18，源文件第 8740 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NeedForInterruptionNR_r18_InterruptionIndication_r18 {
    NeedForInterruptionNR_r18_InterruptionIndication_r18_no_gap_with_interruption = 0, /**< ASN.1 no-gap-with-interruption */
    NeedForInterruptionNR_r18_InterruptionIndication_r18_no_gap_no_interruption = 1, /**< ASN.1 no-gap-no-interruption */
} NeedForInterruptionNR_r18_InterruptionIndication_r18;


/**
 * @brief 枚举 NonCellDefiningSSB_r17_Ssb_Periodicity_r17（ASN.1 ssb-Periodicity-r17，源文件第 8758 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NonCellDefiningSSB_r17_Ssb_Periodicity_r17 {
    NonCellDefiningSSB_r17_Ssb_Periodicity_r17_ms5 = 0, /**< ASN.1 ms5 */
    NonCellDefiningSSB_r17_Ssb_Periodicity_r17_ms10 = 1, /**< ASN.1 ms10 */
    NonCellDefiningSSB_r17_Ssb_Periodicity_r17_ms20 = 2, /**< ASN.1 ms20 */
    NonCellDefiningSSB_r17_Ssb_Periodicity_r17_ms40 = 3, /**< ASN.1 ms40 */
    NonCellDefiningSSB_r17_Ssb_Periodicity_r17_ms80 = 4, /**< ASN.1 ms80 */
    NonCellDefiningSSB_r17_Ssb_Periodicity_r17_ms160 = 5, /**< ASN.1 ms160 */
    NonCellDefiningSSB_r17_Ssb_Periodicity_r17_spare2 = 6, /**< ASN.1 spare2 */
    NonCellDefiningSSB_r17_Ssb_Periodicity_r17_spare1 = 7, /**< ASN.1 spare1 */
} NonCellDefiningSSB_r17_Ssb_Periodicity_r17;


/**
 * @brief 枚举 NonCellDefiningSSB_r17_Ssb_TimeOffset_r17（ASN.1 ssb-TimeOffset-r17，源文件第 8759 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NonCellDefiningSSB_r17_Ssb_TimeOffset_r17 {
    NonCellDefiningSSB_r17_Ssb_TimeOffset_r17_ms5 = 0, /**< ASN.1 ms5 */
    NonCellDefiningSSB_r17_Ssb_TimeOffset_r17_ms10 = 1, /**< ASN.1 ms10 */
    NonCellDefiningSSB_r17_Ssb_TimeOffset_r17_ms15 = 2, /**< ASN.1 ms15 */
    NonCellDefiningSSB_r17_Ssb_TimeOffset_r17_ms20 = 3, /**< ASN.1 ms20 */
    NonCellDefiningSSB_r17_Ssb_TimeOffset_r17_ms40 = 4, /**< ASN.1 ms40 */
    NonCellDefiningSSB_r17_Ssb_TimeOffset_r17_ms80 = 5, /**< ASN.1 ms80 */
    NonCellDefiningSSB_r17_Ssb_TimeOffset_r17_spare2 = 6, /**< ASN.1 spare2 */
    NonCellDefiningSSB_r17_Ssb_TimeOffset_r17_spare1 = 7, /**< ASN.1 spare1 */
} NonCellDefiningSSB_r17_Ssb_TimeOffset_r17;


/**
 * @brief 枚举 CAG_IdentityInfo_r16_ManualCAGselectionAllowed_r16（ASN.1 manualCAGselectionAllowed-r16，源文件第 8779 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CAG_IdentityInfo_r16_ManualCAGselectionAllowed_r16 {
    CAG_IdentityInfo_r16_ManualCAGselectionAllowed_r16_trueVal = 0, /**< ASN.1 trueVal */
} CAG_IdentityInfo_r16_ManualCAGselectionAllowed_r16;


/**
 * @brief 枚举 NPN_IdentityInfo_r16_CellReservedForOperatorUse_r16（ASN.1 cellReservedForOperatorUse-r16，源文件第 8795 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NPN_IdentityInfo_r16_CellReservedForOperatorUse_r16 {
    NPN_IdentityInfo_r16_CellReservedForOperatorUse_r16_reserved = 0, /**< ASN.1 reserved */
    NPN_IdentityInfo_r16_CellReservedForOperatorUse_r16_notReserved = 1, /**< ASN.1 notReserved */
} NPN_IdentityInfo_r16_CellReservedForOperatorUse_r16;


/**
 * @brief 枚举 NPN_IdentityInfo_r16_Iab_Support_r16（ASN.1 iab-Support-r16，源文件第 8796 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NPN_IdentityInfo_r16_Iab_Support_r16 {
    NPN_IdentityInfo_r16_Iab_Support_r16_trueVal = 0, /**< ASN.1 trueVal */
} NPN_IdentityInfo_r16_Iab_Support_r16;


/**
 * @brief 枚举 NPN_IdentityInfo_r16_ExtGroup2_MobileIAB_Support_r18（ASN.1 mobileIAB-Support-r18，源文件第 8802 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NPN_IdentityInfo_r16_ExtGroup2_MobileIAB_Support_r18 {
    NPN_IdentityInfo_r16_ExtGroup2_MobileIAB_Support_r18_trueVal = 0, /**< ASN.1 trueVal */
} NPN_IdentityInfo_r16_ExtGroup2_MobileIAB_Support_r18;


/**
 * @brief 枚举 NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17（ASN.1 numSymbols-r17，源文件第 8816 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17 {
    NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17_n2 = 0, /**< ASN.1 n2 */
    NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17_n4 = 1, /**< ASN.1 n4 */
    NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17_n6 = 2, /**< ASN.1 n6 */
    NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17_n12 = 3, /**< ASN.1 n12 */
    NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17_n1_v1800 = 4, /**< ASN.1 n1-v1800 */
    NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17_spare3 = 5, /**< ASN.1 spare3 */
    NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17_spare2 = 6, /**< ASN.1 spare2 */
    NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17_spare1 = 7, /**< ASN.1 spare1 */
} NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17;


/**
 * @brief 枚举 DL_PRS_QCL_Info_r17_Ssb_r17_Rs_Type_r17（ASN.1 ssb-r17/rs-Type-r17，源文件第 8930 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PRS_QCL_Info_r17_Ssb_r17_Rs_Type_r17 {
    DL_PRS_QCL_Info_r17_Ssb_r17_Rs_Type_r17_typeC = 0, /**< ASN.1 typeC */
    DL_PRS_QCL_Info_r17_Ssb_r17_Rs_Type_r17_typeD = 1, /**< ASN.1 typeD */
    DL_PRS_QCL_Info_r17_Ssb_r17_Rs_Type_r17_typeC_plus_typeD = 2, /**< ASN.1 typeC-plus-typeD */
} DL_PRS_QCL_Info_r17_Ssb_r17_Rs_Type_r17;


/**
 * @brief 枚举 RepFactorAndTimeGap_r17_RepetitionFactor_r17（ASN.1 repetitionFactor-r17，源文件第 8943 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RepFactorAndTimeGap_r17_RepetitionFactor_r17 {
    RepFactorAndTimeGap_r17_RepetitionFactor_r17_n2 = 0, /**< ASN.1 n2 */
    RepFactorAndTimeGap_r17_RepetitionFactor_r17_n4 = 1, /**< ASN.1 n4 */
    RepFactorAndTimeGap_r17_RepetitionFactor_r17_n6 = 2, /**< ASN.1 n6 */
    RepFactorAndTimeGap_r17_RepetitionFactor_r17_n8 = 3, /**< ASN.1 n8 */
    RepFactorAndTimeGap_r17_RepetitionFactor_r17_n16 = 4, /**< ASN.1 n16 */
    RepFactorAndTimeGap_r17_RepetitionFactor_r17_n32 = 5, /**< ASN.1 n32 */
    RepFactorAndTimeGap_r17_RepetitionFactor_r17_spare2 = 6, /**< ASN.1 spare2 */
    RepFactorAndTimeGap_r17_RepetitionFactor_r17_spare1 = 7, /**< ASN.1 spare1 */
} RepFactorAndTimeGap_r17_RepetitionFactor_r17;


/**
 * @brief 枚举 RepFactorAndTimeGap_r17_TimeGap_r17（ASN.1 timeGap-r17，源文件第 8944 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RepFactorAndTimeGap_r17_TimeGap_r17 {
    RepFactorAndTimeGap_r17_TimeGap_r17_s1 = 0, /**< ASN.1 s1 */
    RepFactorAndTimeGap_r17_TimeGap_r17_s2 = 1, /**< ASN.1 s2 */
    RepFactorAndTimeGap_r17_TimeGap_r17_s4 = 2, /**< ASN.1 s4 */
    RepFactorAndTimeGap_r17_TimeGap_r17_s8 = 3, /**< ASN.1 s8 */
    RepFactorAndTimeGap_r17_TimeGap_r17_s16 = 4, /**< ASN.1 s16 */
    RepFactorAndTimeGap_r17_TimeGap_r17_s32 = 5, /**< ASN.1 s32 */
    RepFactorAndTimeGap_r17_TimeGap_r17_spare2 = 6, /**< ASN.1 spare2 */
    RepFactorAndTimeGap_r17_TimeGap_r17_spare1 = 7, /**< ASN.1 spare1 */
} RepFactorAndTimeGap_r17_TimeGap_r17;


/**
 * @brief 枚举 NTN_Config_r17_Ntn_UlSyncValidityDuration_r17（ASN.1 ntn-UlSyncValidityDuration-r17，源文件第 8988 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NTN_Config_r17_Ntn_UlSyncValidityDuration_r17 {
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s5 = 0, /**< ASN.1 s5 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s10 = 1, /**< ASN.1 s10 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s15 = 2, /**< ASN.1 s15 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s20 = 3, /**< ASN.1 s20 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s25 = 4, /**< ASN.1 s25 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s30 = 5, /**< ASN.1 s30 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s35 = 6, /**< ASN.1 s35 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s40 = 7, /**< ASN.1 s40 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s45 = 8, /**< ASN.1 s45 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s50 = 9, /**< ASN.1 s50 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s55 = 10, /**< ASN.1 s55 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s60 = 11, /**< ASN.1 s60 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s120 = 12, /**< ASN.1 s120 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s180 = 13, /**< ASN.1 s180 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s240 = 14, /**< ASN.1 s240 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17_s900 = 15, /**< ASN.1 s900 */
} NTN_Config_r17_Ntn_UlSyncValidityDuration_r17;


/**
 * @brief 枚举 NTN_Config_r17_Ntn_PolarizationDL_r17（ASN.1 ntn-PolarizationDL-r17，源文件第 8993 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NTN_Config_r17_Ntn_PolarizationDL_r17 {
    NTN_Config_r17_Ntn_PolarizationDL_r17_rhcp = 0, /**< ASN.1 rhcp */
    NTN_Config_r17_Ntn_PolarizationDL_r17_lhcp = 1, /**< ASN.1 lhcp */
    NTN_Config_r17_Ntn_PolarizationDL_r17_linear = 2, /**< ASN.1 linear */
} NTN_Config_r17_Ntn_PolarizationDL_r17;


/**
 * @brief 枚举 NTN_Config_r17_Ntn_PolarizationUL_r17（ASN.1 ntn-PolarizationUL-r17，源文件第 8994 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NTN_Config_r17_Ntn_PolarizationUL_r17 {
    NTN_Config_r17_Ntn_PolarizationUL_r17_rhcp = 0, /**< ASN.1 rhcp */
    NTN_Config_r17_Ntn_PolarizationUL_r17_lhcp = 1, /**< ASN.1 lhcp */
    NTN_Config_r17_Ntn_PolarizationUL_r17_linear = 2, /**< ASN.1 linear */
} NTN_Config_r17_Ntn_PolarizationUL_r17;


/**
 * @brief 枚举 NTN_Config_r17_Ta_Report_r17（ASN.1 ta-Report-r17，源文件第 8996 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NTN_Config_r17_Ta_Report_r17 {
    NTN_Config_r17_Ta_Report_r17_enabled = 0, /**< ASN.1 enabled */
} NTN_Config_r17_Ta_Report_r17;


/**
 * @brief 枚举 NZP_CSI_RS_Resource_PowerControlOffsetSS（ASN.1 powerControlOffsetSS，源文件第 9013 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NZP_CSI_RS_Resource_PowerControlOffsetSS {
    NZP_CSI_RS_Resource_PowerControlOffsetSS_db_3 = 0, /**< ASN.1 db-3 */
    NZP_CSI_RS_Resource_PowerControlOffsetSS_db0 = 1, /**< ASN.1 db0 */
    NZP_CSI_RS_Resource_PowerControlOffsetSS_db3 = 2, /**< ASN.1 db3 */
    NZP_CSI_RS_Resource_PowerControlOffsetSS_db6 = 3, /**< ASN.1 db6 */
} NZP_CSI_RS_Resource_PowerControlOffsetSS;


/**
 * @brief 枚举 NZP_CSI_RS_Resource_ExtGroup1_CyclicPrefix_r18（ASN.1 cyclicPrefix-r18，源文件第 9021 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NZP_CSI_RS_Resource_ExtGroup1_CyclicPrefix_r18 {
    NZP_CSI_RS_Resource_ExtGroup1_CyclicPrefix_r18_extended = 0, /**< ASN.1 extended */
} NZP_CSI_RS_Resource_ExtGroup1_CyclicPrefix_r18;


/**
 * @brief 枚举 NZP_CSI_RS_ResourceSet_Repetition（ASN.1 repetition，源文件第 9036 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NZP_CSI_RS_ResourceSet_Repetition {
    NZP_CSI_RS_ResourceSet_Repetition_on = 0, /**< ASN.1 on */
    NZP_CSI_RS_ResourceSet_Repetition_off = 1, /**< ASN.1 off */
} NZP_CSI_RS_ResourceSet_Repetition;


/**
 * @brief 枚举 NZP_CSI_RS_ResourceSet_Trs_Info（ASN.1 trs-Info，源文件第 9038 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NZP_CSI_RS_ResourceSet_Trs_Info {
    NZP_CSI_RS_ResourceSet_Trs_Info_trueVal = 0, /**< ASN.1 trueVal */
} NZP_CSI_RS_ResourceSet_Trs_Info;


/**
 * @brief 枚举 NZP_CSI_RS_ResourceSet_ExtGroup2_Pdc_Info_r17（ASN.1 pdc-Info-r17，源文件第 9044 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NZP_CSI_RS_ResourceSet_ExtGroup2_Pdc_Info_r17 {
    NZP_CSI_RS_ResourceSet_ExtGroup2_Pdc_Info_r17_trueVal = 0, /**< ASN.1 trueVal */
} NZP_CSI_RS_ResourceSet_ExtGroup2_Pdc_Info_r17;


/**
 * @brief 枚举 NZP_CSI_RS_ResourceSet_ExtGroup3_ResourceType_r18（ASN.1 resourceType-r18，源文件第 9050 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NZP_CSI_RS_ResourceSet_ExtGroup3_ResourceType_r18 {
    NZP_CSI_RS_ResourceSet_ExtGroup3_ResourceType_r18_periodic = 0, /**< ASN.1 periodic */
} NZP_CSI_RS_ResourceSet_ExtGroup3_ResourceType_r18;


/**
 * @brief 枚举 PCI_Range_2（ASN.1 range，源文件第 9119 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PCI_Range_2 {
    PCI_Range_2_n4 = 0, /**< ASN.1 n4 */
    PCI_Range_2_n8 = 1, /**< ASN.1 n8 */
    PCI_Range_2_n12 = 2, /**< ASN.1 n12 */
    PCI_Range_2_n16 = 3, /**< ASN.1 n16 */
    PCI_Range_2_n24 = 4, /**< ASN.1 n24 */
    PCI_Range_2_n32 = 5, /**< ASN.1 n32 */
    PCI_Range_2_n48 = 6, /**< ASN.1 n48 */
    PCI_Range_2_n64 = 7, /**< ASN.1 n64 */
    PCI_Range_2_n84 = 8, /**< ASN.1 n84 */
    PCI_Range_2_n96 = 9, /**< ASN.1 n96 */
    PCI_Range_2_n128 = 10, /**< ASN.1 n128 */
    PCI_Range_2_n168 = 11, /**< ASN.1 n168 */
    PCI_Range_2_n252 = 12, /**< ASN.1 n252 */
    PCI_Range_2_n504 = 13, /**< ASN.1 n504 */
    PCI_Range_2_n1008 = 14, /**< ASN.1 n1008 */
    PCI_Range_2_spare1 = 15, /**< ASN.1 spare1 */
} PCI_Range_2;


/**
 * @brief 枚举 PDCCH_Config_ExtGroup1_MonitoringCapabilityConfig_r16（ASN.1 monitoringCapabilityConfig-r16，源文件第 9159 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_Config_ExtGroup1_MonitoringCapabilityConfig_r16 {
    PDCCH_Config_ExtGroup1_MonitoringCapabilityConfig_r16_r15monitoringcapability = 0, /**< ASN.1 r15monitoringcapability */
    PDCCH_Config_ExtGroup1_MonitoringCapabilityConfig_r16_r16monitoringcapability = 1, /**< ASN.1 r16monitoringcapability */
} PDCCH_Config_ExtGroup1_MonitoringCapabilityConfig_r16;


/**
 * @brief 枚举 PDCCH_Config_ExtGroup2_MonitoringCapabilityConfig_v1710（ASN.1 monitoringCapabilityConfig-v1710，源文件第 9164 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_Config_ExtGroup2_MonitoringCapabilityConfig_v1710 {
    PDCCH_Config_ExtGroup2_MonitoringCapabilityConfig_v1710_r17monitoringcapability = 0, /**< ASN.1 r17monitoringcapability */
} PDCCH_Config_ExtGroup2_MonitoringCapabilityConfig_v1710;


/**
 * @brief 枚举 PDCCH_Config_ExtGroup3_Pdcch_MonitoringResumptionAfterNack_r18（ASN.1 pdcch-MonitoringResumptionAfterNack-r18，源文件第 9169 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_Config_ExtGroup3_Pdcch_MonitoringResumptionAfterNack_r18 {
    PDCCH_Config_ExtGroup3_Pdcch_MonitoringResumptionAfterNack_r18_trueVal = 0, /**< ASN.1 trueVal */
} PDCCH_Config_ExtGroup3_Pdcch_MonitoringResumptionAfterNack_r18;


/**
 * @brief 枚举 PDCCH_ConfigCommon_ExtGroup4_FollowUnifiedTCI_State_v1720（ASN.1 followUnifiedTCI-State-v1720，源文件第 9245 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_ConfigCommon_ExtGroup4_FollowUnifiedTCI_State_v1720 {
    PDCCH_ConfigCommon_ExtGroup4_FollowUnifiedTCI_State_v1720_enabled = 0, /**< ASN.1 enabled */
} PDCCH_ConfigCommon_ExtGroup4_FollowUnifiedTCI_State_v1720;


/**
 * @brief 枚举 PDCCH_ConfigCommon_ExtGroup5_ApplyIndicatedTCI_State_r18（ASN.1 applyIndicatedTCI-State-r18，源文件第 9248 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_ConfigCommon_ExtGroup5_ApplyIndicatedTCI_State_r18 {
    PDCCH_ConfigCommon_ExtGroup5_ApplyIndicatedTCI_State_r18_first = 0, /**< ASN.1 first */
    PDCCH_ConfigCommon_ExtGroup5_ApplyIndicatedTCI_State_r18_second = 1, /**< ASN.1 second */
    PDCCH_ConfigCommon_ExtGroup5_ApplyIndicatedTCI_State_r18_both = 2, /**< ASN.1 both */
    PDCCH_ConfigCommon_ExtGroup5_ApplyIndicatedTCI_State_r18_none = 3, /**< ASN.1 none */
} PDCCH_ConfigCommon_ExtGroup5_ApplyIndicatedTCI_State_r18;


/**
 * @brief 枚举 PDCP_Config_Drb_DiscardTimer（ASN.1 drb/discardTimer，源文件第 9283 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_Drb_DiscardTimer {
    PDCP_Config_Drb_DiscardTimer_ms10 = 0, /**< ASN.1 ms10 */
    PDCP_Config_Drb_DiscardTimer_ms20 = 1, /**< ASN.1 ms20 */
    PDCP_Config_Drb_DiscardTimer_ms30 = 2, /**< ASN.1 ms30 */
    PDCP_Config_Drb_DiscardTimer_ms40 = 3, /**< ASN.1 ms40 */
    PDCP_Config_Drb_DiscardTimer_ms50 = 4, /**< ASN.1 ms50 */
    PDCP_Config_Drb_DiscardTimer_ms60 = 5, /**< ASN.1 ms60 */
    PDCP_Config_Drb_DiscardTimer_ms75 = 6, /**< ASN.1 ms75 */
    PDCP_Config_Drb_DiscardTimer_ms100 = 7, /**< ASN.1 ms100 */
    PDCP_Config_Drb_DiscardTimer_ms150 = 8, /**< ASN.1 ms150 */
    PDCP_Config_Drb_DiscardTimer_ms200 = 9, /**< ASN.1 ms200 */
    PDCP_Config_Drb_DiscardTimer_ms250 = 10, /**< ASN.1 ms250 */
    PDCP_Config_Drb_DiscardTimer_ms300 = 11, /**< ASN.1 ms300 */
    PDCP_Config_Drb_DiscardTimer_ms500 = 12, /**< ASN.1 ms500 */
    PDCP_Config_Drb_DiscardTimer_ms750 = 13, /**< ASN.1 ms750 */
    PDCP_Config_Drb_DiscardTimer_ms1500 = 14, /**< ASN.1 ms1500 */
    PDCP_Config_Drb_DiscardTimer_infinity = 15, /**< ASN.1 infinity */
} PDCP_Config_Drb_DiscardTimer;


/**
 * @brief 枚举 PDCP_Config_Drb_Pdcp_SN_SizeUL（ASN.1 drb/pdcp-SN-SizeUL，源文件第 9285 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_Drb_Pdcp_SN_SizeUL {
    PDCP_Config_Drb_Pdcp_SN_SizeUL_len12bits = 0, /**< ASN.1 len12bits */
    PDCP_Config_Drb_Pdcp_SN_SizeUL_len18bits = 1, /**< ASN.1 len18bits */
} PDCP_Config_Drb_Pdcp_SN_SizeUL;


/**
 * @brief 枚举 PDCP_Config_Drb_Pdcp_SN_SizeDL（ASN.1 drb/pdcp-SN-SizeDL，源文件第 9286 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_Drb_Pdcp_SN_SizeDL {
    PDCP_Config_Drb_Pdcp_SN_SizeDL_len12bits = 0, /**< ASN.1 len12bits */
    PDCP_Config_Drb_Pdcp_SN_SizeDL_len18bits = 1, /**< ASN.1 len18bits */
} PDCP_Config_Drb_Pdcp_SN_SizeDL;


/**
 * @brief 枚举 PDCP_Config_Drb_HeaderCompression_Rohc_Drb_ContinueROHC（ASN.1 drb/headerCompression/rohc/drb-ContinueROHC，源文件第 9302 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_Drb_HeaderCompression_Rohc_Drb_ContinueROHC {
    PDCP_Config_Drb_HeaderCompression_Rohc_Drb_ContinueROHC_trueVal = 0, /**< ASN.1 trueVal */
} PDCP_Config_Drb_HeaderCompression_Rohc_Drb_ContinueROHC;


/**
 * @brief 枚举 PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Drb_ContinueROHC（ASN.1 drb/headerCompression/uplinkOnlyROHC/drb-ContinueROHC，源文件第 9309 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Drb_ContinueROHC {
    PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Drb_ContinueROHC_trueVal = 0, /**< ASN.1 trueVal */
} PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Drb_ContinueROHC;


/**
 * @brief 枚举 PDCP_Config_Drb_IntegrityProtection（ASN.1 drb/integrityProtection，源文件第 9313 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_Drb_IntegrityProtection {
    PDCP_Config_Drb_IntegrityProtection_enabled = 0, /**< ASN.1 enabled */
} PDCP_Config_Drb_IntegrityProtection;


/**
 * @brief 枚举 PDCP_Config_Drb_StatusReportRequired（ASN.1 drb/statusReportRequired，源文件第 9314 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_Drb_StatusReportRequired {
    PDCP_Config_Drb_StatusReportRequired_trueVal = 0, /**< ASN.1 trueVal */
} PDCP_Config_Drb_StatusReportRequired;


/**
 * @brief 枚举 PDCP_Config_Drb_OutOfOrderDelivery（ASN.1 drb/outOfOrderDelivery，源文件第 9315 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_Drb_OutOfOrderDelivery {
    PDCP_Config_Drb_OutOfOrderDelivery_trueVal = 0, /**< ASN.1 trueVal */
} PDCP_Config_Drb_OutOfOrderDelivery;


/**
 * @brief 枚举 PDCP_Config_T_Reordering（ASN.1 t-Reordering，源文件第 9326 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_T_Reordering {
    PDCP_Config_T_Reordering_ms0 = 0, /**< ASN.1 ms0 */
    PDCP_Config_T_Reordering_ms1 = 1, /**< ASN.1 ms1 */
    PDCP_Config_T_Reordering_ms2 = 2, /**< ASN.1 ms2 */
    PDCP_Config_T_Reordering_ms4 = 3, /**< ASN.1 ms4 */
    PDCP_Config_T_Reordering_ms5 = 4, /**< ASN.1 ms5 */
    PDCP_Config_T_Reordering_ms8 = 5, /**< ASN.1 ms8 */
    PDCP_Config_T_Reordering_ms10 = 6, /**< ASN.1 ms10 */
    PDCP_Config_T_Reordering_ms15 = 7, /**< ASN.1 ms15 */
    PDCP_Config_T_Reordering_ms20 = 8, /**< ASN.1 ms20 */
    PDCP_Config_T_Reordering_ms30 = 9, /**< ASN.1 ms30 */
    PDCP_Config_T_Reordering_ms40 = 10, /**< ASN.1 ms40 */
    PDCP_Config_T_Reordering_ms50 = 11, /**< ASN.1 ms50 */
    PDCP_Config_T_Reordering_ms60 = 12, /**< ASN.1 ms60 */
    PDCP_Config_T_Reordering_ms80 = 13, /**< ASN.1 ms80 */
    PDCP_Config_T_Reordering_ms100 = 14, /**< ASN.1 ms100 */
    PDCP_Config_T_Reordering_ms120 = 15, /**< ASN.1 ms120 */
    PDCP_Config_T_Reordering_ms140 = 16, /**< ASN.1 ms140 */
    PDCP_Config_T_Reordering_ms160 = 17, /**< ASN.1 ms160 */
    PDCP_Config_T_Reordering_ms180 = 18, /**< ASN.1 ms180 */
    PDCP_Config_T_Reordering_ms200 = 19, /**< ASN.1 ms200 */
    PDCP_Config_T_Reordering_ms220 = 20, /**< ASN.1 ms220 */
    PDCP_Config_T_Reordering_ms240 = 21, /**< ASN.1 ms240 */
    PDCP_Config_T_Reordering_ms260 = 22, /**< ASN.1 ms260 */
    PDCP_Config_T_Reordering_ms280 = 23, /**< ASN.1 ms280 */
    PDCP_Config_T_Reordering_ms300 = 24, /**< ASN.1 ms300 */
    PDCP_Config_T_Reordering_ms500 = 25, /**< ASN.1 ms500 */
    PDCP_Config_T_Reordering_ms750 = 26, /**< ASN.1 ms750 */
    PDCP_Config_T_Reordering_ms1000 = 27, /**< ASN.1 ms1000 */
    PDCP_Config_T_Reordering_ms1250 = 28, /**< ASN.1 ms1250 */
    PDCP_Config_T_Reordering_ms1500 = 29, /**< ASN.1 ms1500 */
    PDCP_Config_T_Reordering_ms1750 = 30, /**< ASN.1 ms1750 */
    PDCP_Config_T_Reordering_ms2000 = 31, /**< ASN.1 ms2000 */
    PDCP_Config_T_Reordering_ms2250 = 32, /**< ASN.1 ms2250 */
    PDCP_Config_T_Reordering_ms2500 = 33, /**< ASN.1 ms2500 */
    PDCP_Config_T_Reordering_ms2750 = 34, /**< ASN.1 ms2750 */
    PDCP_Config_T_Reordering_ms3000 = 35, /**< ASN.1 ms3000 */
    PDCP_Config_T_Reordering_spare28 = 36, /**< ASN.1 spare28 */
    PDCP_Config_T_Reordering_spare27 = 37, /**< ASN.1 spare27 */
    PDCP_Config_T_Reordering_spare26 = 38, /**< ASN.1 spare26 */
    PDCP_Config_T_Reordering_spare25 = 39, /**< ASN.1 spare25 */
    PDCP_Config_T_Reordering_spare24 = 40, /**< ASN.1 spare24 */
    PDCP_Config_T_Reordering_spare23 = 41, /**< ASN.1 spare23 */
    PDCP_Config_T_Reordering_spare22 = 42, /**< ASN.1 spare22 */
    PDCP_Config_T_Reordering_spare21 = 43, /**< ASN.1 spare21 */
    PDCP_Config_T_Reordering_spare20 = 44, /**< ASN.1 spare20 */
    PDCP_Config_T_Reordering_spare19 = 45, /**< ASN.1 spare19 */
    PDCP_Config_T_Reordering_spare18 = 46, /**< ASN.1 spare18 */
    PDCP_Config_T_Reordering_spare17 = 47, /**< ASN.1 spare17 */
    PDCP_Config_T_Reordering_spare16 = 48, /**< ASN.1 spare16 */
    PDCP_Config_T_Reordering_spare15 = 49, /**< ASN.1 spare15 */
    PDCP_Config_T_Reordering_spare14 = 50, /**< ASN.1 spare14 */
    PDCP_Config_T_Reordering_spare13 = 51, /**< ASN.1 spare13 */
    PDCP_Config_T_Reordering_spare12 = 52, /**< ASN.1 spare12 */
    PDCP_Config_T_Reordering_spare11 = 53, /**< ASN.1 spare11 */
    PDCP_Config_T_Reordering_spare10 = 54, /**< ASN.1 spare10 */
    PDCP_Config_T_Reordering_spare09 = 55, /**< ASN.1 spare09 */
    PDCP_Config_T_Reordering_spare08 = 56, /**< ASN.1 spare08 */
    PDCP_Config_T_Reordering_spare07 = 57, /**< ASN.1 spare07 */
    PDCP_Config_T_Reordering_spare06 = 58, /**< ASN.1 spare06 */
    PDCP_Config_T_Reordering_spare05 = 59, /**< ASN.1 spare05 */
    PDCP_Config_T_Reordering_spare04 = 60, /**< ASN.1 spare04 */
    PDCP_Config_T_Reordering_spare03 = 61, /**< ASN.1 spare03 */
    PDCP_Config_T_Reordering_spare02 = 62, /**< ASN.1 spare02 */
    PDCP_Config_T_Reordering_spare01 = 63, /**< ASN.1 spare01 */
} PDCP_Config_T_Reordering;


/**
 * @brief 枚举 PDCP_Config_ExtGroup1_CipheringDisabled（ASN.1 cipheringDisabled，源文件第 9339 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_ExtGroup1_CipheringDisabled {
    PDCP_Config_ExtGroup1_CipheringDisabled_trueVal = 0, /**< ASN.1 trueVal */
} PDCP_Config_ExtGroup1_CipheringDisabled;


/**
 * @brief 枚举 PDCP_Config_ExtGroup3_SurvivalTimeStateSupport_r17（ASN.1 survivalTimeStateSupport-r17，源文件第 9350 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_ExtGroup3_SurvivalTimeStateSupport_r17 {
    PDCP_Config_ExtGroup3_SurvivalTimeStateSupport_r17_trueVal = 0, /**< ASN.1 trueVal */
} PDCP_Config_ExtGroup3_SurvivalTimeStateSupport_r17;


/**
 * @brief 枚举 PDCP_Config_ExtGroup4_Pdu_SetDiscard_r18（ASN.1 pdu-SetDiscard-r18，源文件第 9356 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_ExtGroup4_Pdu_SetDiscard_r18 {
    PDCP_Config_ExtGroup4_Pdu_SetDiscard_r18_trueVal = 0, /**< ASN.1 trueVal */
} PDCP_Config_ExtGroup4_Pdu_SetDiscard_r18;


/**
 * @brief 枚举 PDCP_Config_ExtGroup4_PrimaryPathOnIndirectPath_r18（ASN.1 primaryPathOnIndirectPath-r18，源文件第 9358 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Config_ExtGroup4_PrimaryPathOnIndirectPath_r18 {
    PDCP_Config_ExtGroup4_PrimaryPathOnIndirectPath_r18_trueVal = 0, /**< ASN.1 trueVal */
} PDCP_Config_ExtGroup4_PrimaryPathOnIndirectPath_r18;


/**
 * @brief 枚举 EthernetHeaderCompression_r16_Ehc_Common_r16_Ehc_CID_Length_r16（ASN.1 ehc-Common-r16/ehc-CID-Length-r16，源文件第 9364 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EthernetHeaderCompression_r16_Ehc_Common_r16_Ehc_CID_Length_r16 {
    EthernetHeaderCompression_r16_Ehc_Common_r16_Ehc_CID_Length_r16_bits7 = 0, /**< ASN.1 bits7 */
    EthernetHeaderCompression_r16_Ehc_Common_r16_Ehc_CID_Length_r16_bits15 = 1, /**< ASN.1 bits15 */
} EthernetHeaderCompression_r16_Ehc_Common_r16_Ehc_CID_Length_r16;


/**
 * @brief 枚举 EthernetHeaderCompression_r16_Ehc_Downlink_r16_Drb_ContinueEHC_DL_r16（ASN.1 ehc-Downlink-r16/drb-ContinueEHC-DL-r16，源文件第 9368 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EthernetHeaderCompression_r16_Ehc_Downlink_r16_Drb_ContinueEHC_DL_r16 {
    EthernetHeaderCompression_r16_Ehc_Downlink_r16_Drb_ContinueEHC_DL_r16_trueVal = 0, /**< ASN.1 trueVal */
} EthernetHeaderCompression_r16_Ehc_Downlink_r16_Drb_ContinueEHC_DL_r16;


/**
 * @brief 枚举 EthernetHeaderCompression_r16_Ehc_Uplink_r16_Drb_ContinueEHC_UL_r16（ASN.1 ehc-Uplink-r16/drb-ContinueEHC-UL-r16，源文件第 9373 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EthernetHeaderCompression_r16_Ehc_Uplink_r16_Drb_ContinueEHC_UL_r16 {
    EthernetHeaderCompression_r16_Ehc_Uplink_r16_Drb_ContinueEHC_UL_r16_trueVal = 0, /**< ASN.1 trueVal */
} EthernetHeaderCompression_r16_Ehc_Uplink_r16_Drb_ContinueEHC_UL_r16;


/**
 * @brief 枚举 UplinkDataCompression_r17_NewSetup_BufferSize_r17（ASN.1 newSetup/bufferSize-r17，源文件第 9389 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkDataCompression_r17_NewSetup_BufferSize_r17 {
    UplinkDataCompression_r17_NewSetup_BufferSize_r17_kbyte2 = 0, /**< ASN.1 kbyte2 */
    UplinkDataCompression_r17_NewSetup_BufferSize_r17_kbyte4 = 1, /**< ASN.1 kbyte4 */
    UplinkDataCompression_r17_NewSetup_BufferSize_r17_kbyte8 = 2, /**< ASN.1 kbyte8 */
    UplinkDataCompression_r17_NewSetup_BufferSize_r17_spare1 = 3, /**< ASN.1 spare1 */
} UplinkDataCompression_r17_NewSetup_BufferSize_r17;


/**
 * @brief 枚举 UplinkDataCompression_r17_NewSetup_Dictionary_r17（ASN.1 newSetup/dictionary-r17，源文件第 9390 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkDataCompression_r17_NewSetup_Dictionary_r17 {
    UplinkDataCompression_r17_NewSetup_Dictionary_r17_sip_SDP = 0, /**< ASN.1 sip-SDP */
    UplinkDataCompression_r17_NewSetup_Dictionary_r17_operator_ = 1, /**< ASN.1 operator */
} UplinkDataCompression_r17_NewSetup_Dictionary_r17;


/**
 * @brief 枚举 PDSCH_Config_Vrb_ToPRB_Interleaver（ASN.1 vrb-ToPRB-Interleaver，源文件第 9407 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_Vrb_ToPRB_Interleaver {
    PDSCH_Config_Vrb_ToPRB_Interleaver_n2 = 0, /**< ASN.1 n2 */
    PDSCH_Config_Vrb_ToPRB_Interleaver_n4 = 1, /**< ASN.1 n4 */
} PDSCH_Config_Vrb_ToPRB_Interleaver;


/**
 * @brief 枚举 PDSCH_Config_ResourceAllocation（ASN.1 resourceAllocation，源文件第 9408 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ResourceAllocation {
    PDSCH_Config_ResourceAllocation_resourceAllocationType0 = 0, /**< ASN.1 resourceAllocationType0 */
    PDSCH_Config_ResourceAllocation_resourceAllocationType1 = 1, /**< ASN.1 resourceAllocationType1 */
    PDSCH_Config_ResourceAllocation_dynamicSwitch = 2, /**< ASN.1 dynamicSwitch */
} PDSCH_Config_ResourceAllocation;


/**
 * @brief 枚举 PDSCH_Config_Pdsch_AggregationFactor（ASN.1 pdsch-AggregationFactor，源文件第 9410 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_Pdsch_AggregationFactor {
    PDSCH_Config_Pdsch_AggregationFactor_n2 = 0, /**< ASN.1 n2 */
    PDSCH_Config_Pdsch_AggregationFactor_n4 = 1, /**< ASN.1 n4 */
    PDSCH_Config_Pdsch_AggregationFactor_n8 = 2, /**< ASN.1 n8 */
} PDSCH_Config_Pdsch_AggregationFactor;


/**
 * @brief 枚举 PDSCH_Config_Rbg_Size（ASN.1 rbg-Size，源文件第 9416 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_Rbg_Size {
    PDSCH_Config_Rbg_Size_config1 = 0, /**< ASN.1 config1 */
    PDSCH_Config_Rbg_Size_config2 = 1, /**< ASN.1 config2 */
} PDSCH_Config_Rbg_Size;


/**
 * @brief 枚举 PDSCH_Config_Mcs_Table（ASN.1 mcs-Table，源文件第 9417 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_Mcs_Table {
    PDSCH_Config_Mcs_Table_qam256 = 0, /**< ASN.1 qam256 */
    PDSCH_Config_Mcs_Table_qam64LowSE = 1, /**< ASN.1 qam64LowSE */
} PDSCH_Config_Mcs_Table;


/**
 * @brief 枚举 PDSCH_Config_MaxNrofCodeWordsScheduledByDCI（ASN.1 maxNrofCodeWordsScheduledByDCI，源文件第 9418 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_MaxNrofCodeWordsScheduledByDCI {
    PDSCH_Config_MaxNrofCodeWordsScheduledByDCI_n1 = 0, /**< ASN.1 n1 */
    PDSCH_Config_MaxNrofCodeWordsScheduledByDCI_n2 = 1, /**< ASN.1 n2 */
} PDSCH_Config_MaxNrofCodeWordsScheduledByDCI;


/**
 * @brief 枚举 PDSCH_Config_Prb_BundlingType_StaticBundling_BundleSize（ASN.1 prb-BundlingType/staticBundling/bundleSize，源文件第 9422 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_Prb_BundlingType_StaticBundling_BundleSize {
    PDSCH_Config_Prb_BundlingType_StaticBundling_BundleSize_n4 = 0, /**< ASN.1 n4 */
    PDSCH_Config_Prb_BundlingType_StaticBundling_BundleSize_wideband = 1, /**< ASN.1 wideband */
} PDSCH_Config_Prb_BundlingType_StaticBundling_BundleSize;


/**
 * @brief 枚举 PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet1（ASN.1 prb-BundlingType/dynamicBundling/bundleSizeSet1，源文件第 9425 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet1 {
    PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet1_n4 = 0, /**< ASN.1 n4 */
    PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet1_wideband = 1, /**< ASN.1 wideband */
    PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet1_n2_wideband = 2, /**< ASN.1 n2-wideband */
    PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet1_n4_wideband = 3, /**< ASN.1 n4-wideband */
} PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet1;


/**
 * @brief 枚举 PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet2（ASN.1 prb-BundlingType/dynamicBundling/bundleSizeSet2，源文件第 9426 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet2 {
    PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet2_n4 = 0, /**< ASN.1 n4 */
    PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet2_wideband = 1, /**< ASN.1 wideband */
} PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet2;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART004_H */
