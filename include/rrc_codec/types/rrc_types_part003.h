/* ============================================================================
 * types/rrc_types_part003.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART003_H
#define RRC_CODEC_TYPES_PART003_H

#include "rrc_types_part000.h"
#include "rrc_types_part001.h"
#include "rrc_types_part002.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 枚举 SIB_ReqInfo_r16（ASN.1 SIB-ReqInfo-r16，源文件第 283 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB_ReqInfo_r16 {
    SIB_ReqInfo_r16_sib12 = 0, /**< ASN.1 sib12 */
    SIB_ReqInfo_r16_sib13 = 1, /**< ASN.1 sib13 */
    SIB_ReqInfo_r16_sib14 = 2, /**< ASN.1 sib14 */
    SIB_ReqInfo_r16_sib20_v1700 = 3, /**< ASN.1 sib20-v1700 */
    SIB_ReqInfo_r16_sib21_v1700 = 4, /**< ASN.1 sib21-v1700 */
    SIB_ReqInfo_r16_sib23_v1810 = 5, /**< ASN.1 sib23-v1810 */
    SIB_ReqInfo_r16_spare2 = 6, /**< ASN.1 spare2 */
    SIB_ReqInfo_r16_spare1 = 7, /**< ASN.1 spare1 */
} SIB_ReqInfo_r16;


/**
 * @brief 枚举 ReestablishmentCause（ASN.1 ReestablishmentCause，源文件第 925 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReestablishmentCause {
    ReestablishmentCause_reconfigurationFailure = 0, /**< ASN.1 reconfigurationFailure */
    ReestablishmentCause_handoverFailure = 1, /**< ASN.1 handoverFailure */
    ReestablishmentCause_otherFailure = 2, /**< ASN.1 otherFailure */
    ReestablishmentCause_spare1 = 3, /**< ASN.1 spare1 */
} ReestablishmentCause;


/**
 * @brief 枚举 T316_r16（ASN.1 T316-r16，源文件第 1038 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum T316_r16 {
    T316_r16_ms50 = 0, /**< ASN.1 ms50 */
    T316_r16_ms100 = 1, /**< ASN.1 ms100 */
    T316_r16_ms200 = 2, /**< ASN.1 ms200 */
    T316_r16_ms300 = 3, /**< ASN.1 ms300 */
    T316_r16_ms400 = 4, /**< ASN.1 ms400 */
    T316_r16_ms500 = 5, /**< ASN.1 ms500 */
    T316_r16_ms600 = 6, /**< ASN.1 ms600 */
    T316_r16_ms1000 = 7, /**< ASN.1 ms1000 */
    T316_r16_ms1500 = 8, /**< ASN.1 ms1500 */
    T316_r16_ms2000 = 9, /**< ASN.1 ms2000 */
} T316_r16;


/**
 * @brief 枚举 SL_TimeOffsetEUTRA_r16（ASN.1 SL-TimeOffsetEUTRA-r16，源文件第 1059 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TimeOffsetEUTRA_r16 {
    SL_TimeOffsetEUTRA_r16_ms0 = 0, /**< ASN.1 ms0 */
    SL_TimeOffsetEUTRA_r16_ms0dot25 = 1, /**< ASN.1 ms0dot25 */
    SL_TimeOffsetEUTRA_r16_ms0dot5 = 2, /**< ASN.1 ms0dot5 */
    SL_TimeOffsetEUTRA_r16_ms0dot625 = 3, /**< ASN.1 ms0dot625 */
    SL_TimeOffsetEUTRA_r16_ms0dot75 = 4, /**< ASN.1 ms0dot75 */
    SL_TimeOffsetEUTRA_r16_ms1 = 5, /**< ASN.1 ms1 */
    SL_TimeOffsetEUTRA_r16_ms1dot25 = 6, /**< ASN.1 ms1dot25 */
    SL_TimeOffsetEUTRA_r16_ms1dot5 = 7, /**< ASN.1 ms1dot5 */
    SL_TimeOffsetEUTRA_r16_ms1dot75 = 8, /**< ASN.1 ms1dot75 */
    SL_TimeOffsetEUTRA_r16_ms2 = 9, /**< ASN.1 ms2 */
    SL_TimeOffsetEUTRA_r16_ms2dot5 = 10, /**< ASN.1 ms2dot5 */
    SL_TimeOffsetEUTRA_r16_ms3 = 11, /**< ASN.1 ms3 */
    SL_TimeOffsetEUTRA_r16_ms4 = 12, /**< ASN.1 ms4 */
    SL_TimeOffsetEUTRA_r16_ms5 = 13, /**< ASN.1 ms5 */
    SL_TimeOffsetEUTRA_r16_ms6 = 14, /**< ASN.1 ms6 */
    SL_TimeOffsetEUTRA_r16_ms8 = 15, /**< ASN.1 ms8 */
    SL_TimeOffsetEUTRA_r16_ms10 = 16, /**< ASN.1 ms10 */
    SL_TimeOffsetEUTRA_r16_ms20 = 17, /**< ASN.1 ms20 */
} SL_TimeOffsetEUTRA_r16;


/**
 * @brief 枚举 PeriodicRNAU_TimerValue（ASN.1 PeriodicRNAU-TimerValue，源文件第 1235 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PeriodicRNAU_TimerValue {
    PeriodicRNAU_TimerValue_min5 = 0, /**< ASN.1 min5 */
    PeriodicRNAU_TimerValue_min10 = 1, /**< ASN.1 min10 */
    PeriodicRNAU_TimerValue_min20 = 2, /**< ASN.1 min20 */
    PeriodicRNAU_TimerValue_min30 = 3, /**< ASN.1 min30 */
    PeriodicRNAU_TimerValue_min60 = 4, /**< ASN.1 min60 */
    PeriodicRNAU_TimerValue_min120 = 5, /**< ASN.1 min120 */
    PeriodicRNAU_TimerValue_min360 = 6, /**< ASN.1 min360 */
    PeriodicRNAU_TimerValue_min720 = 7, /**< ASN.1 min720 */
} PeriodicRNAU_TimerValue;


/**
 * @brief 枚举 PagingCycle（ASN.1 PagingCycle，源文件第 1247 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PagingCycle {
    PagingCycle_rf32 = 0, /**< ASN.1 rf32 */
    PagingCycle_rf64 = 1, /**< ASN.1 rf64 */
    PagingCycle_rf128 = 2, /**< ASN.1 rf128 */
    PagingCycle_rf256 = 3, /**< ASN.1 rf256 */
} PagingCycle;


/**
 * @brief 枚举 RSRP_ChangeThreshold_r17（ASN.1 RSRP-ChangeThreshold-r17，源文件第 1364 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RSRP_ChangeThreshold_r17 {
    RSRP_ChangeThreshold_r17_dB4 = 0, /**< ASN.1 dB4 */
    RSRP_ChangeThreshold_r17_dB6 = 1, /**< ASN.1 dB6 */
    RSRP_ChangeThreshold_r17_dB8 = 2, /**< ASN.1 dB8 */
    RSRP_ChangeThreshold_r17_dB10 = 3, /**< ASN.1 dB10 */
    RSRP_ChangeThreshold_r17_dB14 = 4, /**< ASN.1 dB14 */
    RSRP_ChangeThreshold_r17_dB18 = 5, /**< ASN.1 dB18 */
    RSRP_ChangeThreshold_r17_dB22 = 6, /**< ASN.1 dB22 */
    RSRP_ChangeThreshold_r17_dB26 = 7, /**< ASN.1 dB26 */
    RSRP_ChangeThreshold_r17_dB30 = 8, /**< ASN.1 dB30 */
    RSRP_ChangeThreshold_r17_dB34 = 9, /**< ASN.1 dB34 */
    RSRP_ChangeThreshold_r17_spare6 = 10, /**< ASN.1 spare6 */
    RSRP_ChangeThreshold_r17_spare5 = 11, /**< ASN.1 spare5 */
    RSRP_ChangeThreshold_r17_spare4 = 12, /**< ASN.1 spare4 */
    RSRP_ChangeThreshold_r17_spare3 = 13, /**< ASN.1 spare3 */
    RSRP_ChangeThreshold_r17_spare2 = 14, /**< ASN.1 spare2 */
    RSRP_ChangeThreshold_r17_spare1 = 15, /**< ASN.1 spare1 */
} RSRP_ChangeThreshold_r17;


/**
 * @brief 枚举 ExtendedPagingCycle_r17（ASN.1 ExtendedPagingCycle-r17，源文件第 1399 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ExtendedPagingCycle_r17 {
    ExtendedPagingCycle_r17_rf256 = 0, /**< ASN.1 rf256 */
    ExtendedPagingCycle_r17_rf512 = 1, /**< ASN.1 rf512 */
    ExtendedPagingCycle_r17_rf1024 = 2, /**< ASN.1 rf1024 */
    ExtendedPagingCycle_r17_spare1 = 3, /**< ASN.1 spare1 */
} ExtendedPagingCycle_r17;


/**
 * @brief 枚举 EstablishmentCause（ASN.1 EstablishmentCause，源文件第 1658 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EstablishmentCause {
    EstablishmentCause_emergency = 0, /**< ASN.1 emergency */
    EstablishmentCause_highPriorityAccess = 1, /**< ASN.1 highPriorityAccess */
    EstablishmentCause_mt_Access = 2, /**< ASN.1 mt-Access */
    EstablishmentCause_mo_Signalling = 3, /**< ASN.1 mo-Signalling */
    EstablishmentCause_mo_Data = 4, /**< ASN.1 mo-Data */
    EstablishmentCause_mo_VoiceCall = 5, /**< ASN.1 mo-VoiceCall */
    EstablishmentCause_mo_VideoCall = 6, /**< ASN.1 mo-VideoCall */
    EstablishmentCause_mo_SMS = 7, /**< ASN.1 mo-SMS */
    EstablishmentCause_mps_PriorityAccess = 8, /**< ASN.1 mps-PriorityAccess */
    EstablishmentCause_mcs_PriorityAccess = 9, /**< ASN.1 mcs-PriorityAccess */
    EstablishmentCause_spare6 = 10, /**< ASN.1 spare6 */
    EstablishmentCause_spare5 = 11, /**< ASN.1 spare5 */
    EstablishmentCause_spare4 = 12, /**< ASN.1 spare4 */
    EstablishmentCause_spare3 = 13, /**< ASN.1 spare3 */
    EstablishmentCause_spare2 = 14, /**< ASN.1 spare2 */
    EstablishmentCause_spare1 = 15, /**< ASN.1 spare1 */
} EstablishmentCause;


/**
 * @brief 枚举 UAC_AccessCategory1_SelectionAssistanceInfo（ASN.1 UAC-AccessCategory1-SelectionAssistanceInfo，源文件第 1926 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UAC_AccessCategory1_SelectionAssistanceInfo {
    UAC_AccessCategory1_SelectionAssistanceInfo_a = 0, /**< ASN.1 a */
    UAC_AccessCategory1_SelectionAssistanceInfo_b = 1, /**< ASN.1 b */
    UAC_AccessCategory1_SelectionAssistanceInfo_c = 2, /**< ASN.1 c */
} UAC_AccessCategory1_SelectionAssistanceInfo;


/**
 * @brief 枚举 UAC_AC1_SelectAssistInfo_r16（ASN.1 UAC-AC1-SelectAssistInfo-r16，源文件第 1928 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UAC_AC1_SelectAssistInfo_r16 {
    UAC_AC1_SelectAssistInfo_r16_a = 0, /**< ASN.1 a */
    UAC_AC1_SelectAssistInfo_r16_b = 1, /**< ASN.1 b */
    UAC_AC1_SelectAssistInfo_r16_c = 2, /**< ASN.1 c */
    UAC_AC1_SelectAssistInfo_r16_notConfigured = 3, /**< ASN.1 notConfigured */
} UAC_AC1_SelectAssistInfo_r16;


/**
 * @brief 枚举 SL_TxProfile_r18（ASN.1 SL-TxProfile-r18，源文件第 2119 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TxProfile_r18 {
    SL_TxProfile_r18_backwardsCompatible = 0, /**< ASN.1 backwardsCompatible */
    SL_TxProfile_r18_backwardsIncompatible = 1, /**< ASN.1 backwardsIncompatible */
} SL_TxProfile_r18;


/**
 * @brief 枚举 ReducedAggregatedBandwidth（ASN.1 ReducedAggregatedBandwidth，源文件第 2258 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReducedAggregatedBandwidth {
    ReducedAggregatedBandwidth_mhz0 = 0, /**< ASN.1 mhz0 */
    ReducedAggregatedBandwidth_mhz10 = 1, /**< ASN.1 mhz10 */
    ReducedAggregatedBandwidth_mhz20 = 2, /**< ASN.1 mhz20 */
    ReducedAggregatedBandwidth_mhz30 = 3, /**< ASN.1 mhz30 */
    ReducedAggregatedBandwidth_mhz40 = 4, /**< ASN.1 mhz40 */
    ReducedAggregatedBandwidth_mhz50 = 5, /**< ASN.1 mhz50 */
    ReducedAggregatedBandwidth_mhz60 = 6, /**< ASN.1 mhz60 */
    ReducedAggregatedBandwidth_mhz80 = 7, /**< ASN.1 mhz80 */
    ReducedAggregatedBandwidth_mhz100 = 8, /**< ASN.1 mhz100 */
    ReducedAggregatedBandwidth_mhz200 = 9, /**< ASN.1 mhz200 */
    ReducedAggregatedBandwidth_mhz300 = 10, /**< ASN.1 mhz300 */
    ReducedAggregatedBandwidth_mhz400 = 11, /**< ASN.1 mhz400 */
} ReducedAggregatedBandwidth;


/**
 * @brief 枚举 ReducedAggregatedBandwidth_r17（ASN.1 ReducedAggregatedBandwidth-r17，源文件第 2260 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReducedAggregatedBandwidth_r17 {
    ReducedAggregatedBandwidth_r17_mhz0 = 0, /**< ASN.1 mhz0 */
    ReducedAggregatedBandwidth_r17_mhz100 = 1, /**< ASN.1 mhz100 */
    ReducedAggregatedBandwidth_r17_mhz200 = 2, /**< ASN.1 mhz200 */
    ReducedAggregatedBandwidth_r17_mhz400 = 3, /**< ASN.1 mhz400 */
    ReducedAggregatedBandwidth_r17_mhz800 = 4, /**< ASN.1 mhz800 */
    ReducedAggregatedBandwidth_r17_mhz1200 = 5, /**< ASN.1 mhz1200 */
    ReducedAggregatedBandwidth_r17_mhz1600 = 6, /**< ASN.1 mhz1600 */
    ReducedAggregatedBandwidth_r17_mhz2000 = 7, /**< ASN.1 mhz2000 */
} ReducedAggregatedBandwidth_r17;


/**
 * @brief 枚举 JitterBound_r18（ASN.1 JitterBound-r18，源文件第 2585 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum JitterBound_r18 {
    JitterBound_r18_ms0 = 0, /**< ASN.1 ms0 */
    JitterBound_r18_ms0dot5 = 1, /**< ASN.1 ms0dot5 */
    JitterBound_r18_ms1 = 2, /**< ASN.1 ms1 */
    JitterBound_r18_ms1dot5 = 3, /**< ASN.1 ms1dot5 */
    JitterBound_r18_ms2 = 4, /**< ASN.1 ms2 */
    JitterBound_r18_ms2dot5 = 5, /**< ASN.1 ms2dot5 */
    JitterBound_r18_ms3 = 6, /**< ASN.1 ms3 */
    JitterBound_r18_ms3dot5 = 7, /**< ASN.1 ms3dot5 */
    JitterBound_r18_ms4 = 8, /**< ASN.1 ms4 */
    JitterBound_r18_ms4dot5 = 9, /**< ASN.1 ms4dot5 */
    JitterBound_r18_ms5 = 10, /**< ASN.1 ms5 */
    JitterBound_r18_ms5dot5 = 11, /**< ASN.1 ms5dot5 */
    JitterBound_r18_ms6 = 12, /**< ASN.1 ms6 */
    JitterBound_r18_ms6dot5 = 13, /**< ASN.1 ms6dot5 */
    JitterBound_r18_ms7 = 14, /**< ASN.1 ms7 */
    JitterBound_r18_beyondMs7 = 15, /**< ASN.1 beyondMs7 */
} JitterBound_r18;


/**
 * @brief 枚举 SIB_Type_r17（ASN.1 SIB-Type-r17，源文件第 2934 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB_Type_r17 {
    SIB_Type_r17_sibType2 = 0, /**< ASN.1 sibType2 */
    SIB_Type_r17_sibType3 = 1, /**< ASN.1 sibType3 */
    SIB_Type_r17_sibType4 = 2, /**< ASN.1 sibType4 */
    SIB_Type_r17_sibType5 = 3, /**< ASN.1 sibType5 */
    SIB_Type_r17_sibType9 = 4, /**< ASN.1 sibType9 */
    SIB_Type_r17_sibType10 = 5, /**< ASN.1 sibType10 */
    SIB_Type_r17_sibType11 = 6, /**< ASN.1 sibType11 */
    SIB_Type_r17_sibType12 = 7, /**< ASN.1 sibType12 */
    SIB_Type_r17_sibType13 = 8, /**< ASN.1 sibType13 */
    SIB_Type_r17_sibType14 = 9, /**< ASN.1 sibType14 */
    SIB_Type_r17_posSIB_v1810 = 10, /**< ASN.1 posSIB-v1810 */
    SIB_Type_r17_spare5 = 11, /**< ASN.1 spare5 */
    SIB_Type_r17_spare4 = 12, /**< ASN.1 spare4 */
    SIB_Type_r17_spare3 = 13, /**< ASN.1 spare3 */
    SIB_Type_r17_spare2 = 14, /**< ASN.1 spare2 */
    SIB_Type_r17_spare1 = 15, /**< ASN.1 spare1 */
} SIB_Type_r17;


/**
 * @brief 枚举 SIB_Type_r18（ASN.1 SIB-Type-r18，源文件第 2937 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB_Type_r18 {
    SIB_Type_r18_sibType15 = 0, /**< ASN.1 sibType15 */
    SIB_Type_r18_sibType16 = 1, /**< ASN.1 sibType16 */
    SIB_Type_r18_sibType17 = 2, /**< ASN.1 sibType17 */
    SIB_Type_r18_sibType18 = 3, /**< ASN.1 sibType18 */
    SIB_Type_r18_sibType19 = 4, /**< ASN.1 sibType19 */
    SIB_Type_r18_sibType20 = 5, /**< ASN.1 sibType20 */
    SIB_Type_r18_sibType21 = 6, /**< ASN.1 sibType21 */
    SIB_Type_r18_sibType22 = 7, /**< ASN.1 sibType22 */
    SIB_Type_r18_sibType23 = 8, /**< ASN.1 sibType23 */
    SIB_Type_r18_sibType24 = 9, /**< ASN.1 sibType24 */
    SIB_Type_r18_sibType25 = 10, /**< ASN.1 sibType25 */
    SIB_Type_r18_spare5 = 11, /**< ASN.1 spare5 */
    SIB_Type_r18_spare4 = 12, /**< ASN.1 spare4 */
    SIB_Type_r18_spare3 = 13, /**< ASN.1 spare3 */
    SIB_Type_r18_spare2 = 14, /**< ASN.1 spare2 */
    SIB_Type_r18_spare1 = 15, /**< ASN.1 spare1 */
} SIB_Type_r18;


/**
 * @brief 枚举 NumberOfMsg4_Repetitions_r18（ASN.1 NumberOfMsg4-Repetitions-r18，源文件第 3986 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NumberOfMsg4_Repetitions_r18 {
    NumberOfMsg4_Repetitions_r18_n1 = 0, /**< ASN.1 n1 */
    NumberOfMsg4_Repetitions_r18_n2 = 1, /**< ASN.1 n2 */
    NumberOfMsg4_Repetitions_r18_n4 = 2, /**< ASN.1 n4 */
    NumberOfMsg4_Repetitions_r18_n8 = 3, /**< ASN.1 n8 */
} NumberOfMsg4_Repetitions_r18;


/**
 * @brief 枚举 Alpha（ASN.1 Alpha，源文件第 4290 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Alpha {
    Alpha_alpha0 = 0, /**< ASN.1 alpha0 */
    Alpha_alpha04 = 1, /**< ASN.1 alpha04 */
    Alpha_alpha05 = 2, /**< ASN.1 alpha05 */
    Alpha_alpha06 = 3, /**< ASN.1 alpha06 */
    Alpha_alpha07 = 4, /**< ASN.1 alpha07 */
    Alpha_alpha08 = 5, /**< ASN.1 alpha08 */
    Alpha_alpha09 = 6, /**< ASN.1 alpha09 */
    Alpha_alpha1 = 7, /**< ASN.1 alpha1 */
} Alpha;


/**
 * @brief 枚举 NumberOfMsg3_Repetitions_r17（ASN.1 NumberOfMsg3-Repetitions-r17，源文件第 4638 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NumberOfMsg3_Repetitions_r17 {
    NumberOfMsg3_Repetitions_r17_n1 = 0, /**< ASN.1 n1 */
    NumberOfMsg3_Repetitions_r17_n2 = 1, /**< ASN.1 n2 */
    NumberOfMsg3_Repetitions_r17_n3 = 2, /**< ASN.1 n3 */
    NumberOfMsg3_Repetitions_r17_n4 = 3, /**< ASN.1 n4 */
    NumberOfMsg3_Repetitions_r17_n7 = 4, /**< ASN.1 n7 */
    NumberOfMsg3_Repetitions_r17_n8 = 5, /**< ASN.1 n8 */
    NumberOfMsg3_Repetitions_r17_n12 = 6, /**< ASN.1 n12 */
    NumberOfMsg3_Repetitions_r17_n16 = 7, /**< ASN.1 n16 */
} NumberOfMsg3_Repetitions_r17;


/**
 * @brief 枚举 CellReselectionSubPriority（ASN.1 CellReselectionSubPriority，源文件第 5073 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellReselectionSubPriority {
    CellReselectionSubPriority_oDot2 = 0, /**< ASN.1 oDot2 */
    CellReselectionSubPriority_oDot4 = 1, /**< ASN.1 oDot4 */
    CellReselectionSubPriority_oDot6 = 2, /**< ASN.1 oDot6 */
    CellReselectionSubPriority_oDot8 = 3, /**< ASN.1 oDot8 */
} CellReselectionSubPriority;


/**
 * @brief 枚举 DelayD（ASN.1 DelayD，源文件第 6132 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DelayD {
    DelayD_symb4 = 0, /**< ASN.1 symb4 */
    DelayD_slot1 = 1, /**< ASN.1 slot1 */
    DelayD_slot2 = 2, /**< ASN.1 slot2 */
    DelayD_slot3 = 3, /**< ASN.1 slot3 */
    DelayD_slot4 = 4, /**< ASN.1 slot4 */
    DelayD_slot5 = 5, /**< ASN.1 slot5 */
    DelayD_slot6 = 6, /**< ASN.1 slot6 */
    DelayD_slot10 = 7, /**< ASN.1 slot10 */
} DelayD;


/**
 * @brief 枚举 FilterCoefficient（ASN.1 FilterCoefficient，源文件第 6862 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t FilterCoefficient;
#define FilterCoefficient_fc0 0 /**< ASN.1 fc0 */
#define FilterCoefficient_fc1 1 /**< ASN.1 fc1 */
#define FilterCoefficient_fc2 2 /**< ASN.1 fc2 */
#define FilterCoefficient_fc3 3 /**< ASN.1 fc3 */
#define FilterCoefficient_fc4 4 /**< ASN.1 fc4 */
#define FilterCoefficient_fc5 5 /**< ASN.1 fc5 */
#define FilterCoefficient_fc6 6 /**< ASN.1 fc6 */
#define FilterCoefficient_fc7 7 /**< ASN.1 fc7 */
#define FilterCoefficient_fc8 8 /**< ASN.1 fc8 */
#define FilterCoefficient_fc9 9 /**< ASN.1 fc9 */
#define FilterCoefficient_fc11 10 /**< ASN.1 fc11 */
#define FilterCoefficient_fc13 11 /**< ASN.1 fc13 */
#define FilterCoefficient_fc15 12 /**< ASN.1 fc15 */
#define FilterCoefficient_fc17 13 /**< ASN.1 fc17 */
#define FilterCoefficient_fc19 14 /**< ASN.1 fc19 */
#define FilterCoefficient_spare1 15 /**< ASN.1 spare1 */


/**
 * @brief 枚举 DataInactivityTimer（ASN.1 DataInactivityTimer，源文件第 7359 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DataInactivityTimer {
    DataInactivityTimer_s1 = 0, /**< ASN.1 s1 */
    DataInactivityTimer_s2 = 1, /**< ASN.1 s2 */
    DataInactivityTimer_s3 = 2, /**< ASN.1 s3 */
    DataInactivityTimer_s5 = 3, /**< ASN.1 s5 */
    DataInactivityTimer_s7 = 4, /**< ASN.1 s7 */
    DataInactivityTimer_s10 = 5, /**< ASN.1 s10 */
    DataInactivityTimer_s15 = 6, /**< ASN.1 s15 */
    DataInactivityTimer_s20 = 7, /**< ASN.1 s20 */
    DataInactivityTimer_s40 = 8, /**< ASN.1 s40 */
    DataInactivityTimer_s50 = 9, /**< ASN.1 s50 */
    DataInactivityTimer_s60 = 10, /**< ASN.1 s60 */
    DataInactivityTimer_s80 = 11, /**< ASN.1 s80 */
    DataInactivityTimer_s100 = 12, /**< ASN.1 s100 */
    DataInactivityTimer_s120 = 13, /**< ASN.1 s120 */
    DataInactivityTimer_s150 = 14, /**< ASN.1 s150 */
    DataInactivityTimer_s180 = 15, /**< ASN.1 s180 */
} DataInactivityTimer;


/**
 * @brief 枚举 MeasGapSharingScheme（ASN.1 MeasGapSharingScheme，源文件第 7499 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasGapSharingScheme {
    MeasGapSharingScheme_scheme00 = 0, /**< ASN.1 scheme00 */
    MeasGapSharingScheme_scheme01 = 1, /**< ASN.1 scheme01 */
    MeasGapSharingScheme_scheme10 = 2, /**< ASN.1 scheme10 */
    MeasGapSharingScheme_scheme11 = 3, /**< ASN.1 scheme11 */
} MeasGapSharingScheme;


/**
 * @brief 枚举 MeasurementValidityDuration_r18（ASN.1 MeasurementValidityDuration-r18，源文件第 7581 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasurementValidityDuration_r18 {
    MeasurementValidityDuration_r18_s5 = 0, /**< ASN.1 s5 */
    MeasurementValidityDuration_r18_s10 = 1, /**< ASN.1 s10 */
    MeasurementValidityDuration_r18_s20 = 2, /**< ASN.1 s20 */
    MeasurementValidityDuration_r18_s50 = 3, /**< ASN.1 s50 */
    MeasurementValidityDuration_r18_s100 = 4, /**< ASN.1 s100 */
    MeasurementValidityDuration_r18_spare3 = 5, /**< ASN.1 spare3 */
    MeasurementValidityDuration_r18_spare2 = 6, /**< ASN.1 spare2 */
    MeasurementValidityDuration_r18_spare1 = 7, /**< ASN.1 spare1 */
} MeasurementValidityDuration_r18;


/**
 * @brief 枚举 T312_r16（ASN.1 T312-r16，源文件第 7755 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum T312_r16 {
    T312_r16_ms0 = 0, /**< ASN.1 ms0 */
    T312_r16_ms50 = 1, /**< ASN.1 ms50 */
    T312_r16_ms100 = 2, /**< ASN.1 ms100 */
    T312_r16_ms200 = 3, /**< ASN.1 ms200 */
    T312_r16_ms300 = 4, /**< ASN.1 ms300 */
    T312_r16_ms400 = 5, /**< ASN.1 ms400 */
    T312_r16_ms500 = 6, /**< ASN.1 ms500 */
    T312_r16_ms1000 = 7, /**< ASN.1 ms1000 */
} T312_r16;


/**
 * @brief 枚举 UL_DataSplitThreshold（ASN.1 UL-DataSplitThreshold，源文件第 9378 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UL_DataSplitThreshold {
    UL_DataSplitThreshold_b0 = 0, /**< ASN.1 b0 */
    UL_DataSplitThreshold_b100 = 1, /**< ASN.1 b100 */
    UL_DataSplitThreshold_b200 = 2, /**< ASN.1 b200 */
    UL_DataSplitThreshold_b400 = 3, /**< ASN.1 b400 */
    UL_DataSplitThreshold_b800 = 4, /**< ASN.1 b800 */
    UL_DataSplitThreshold_b1600 = 5, /**< ASN.1 b1600 */
    UL_DataSplitThreshold_b3200 = 6, /**< ASN.1 b3200 */
    UL_DataSplitThreshold_b6400 = 7, /**< ASN.1 b6400 */
    UL_DataSplitThreshold_b12800 = 8, /**< ASN.1 b12800 */
    UL_DataSplitThreshold_b25600 = 9, /**< ASN.1 b25600 */
    UL_DataSplitThreshold_b51200 = 10, /**< ASN.1 b51200 */
    UL_DataSplitThreshold_b102400 = 11, /**< ASN.1 b102400 */
    UL_DataSplitThreshold_b204800 = 12, /**< ASN.1 b204800 */
    UL_DataSplitThreshold_b409600 = 13, /**< ASN.1 b409600 */
    UL_DataSplitThreshold_b819200 = 14, /**< ASN.1 b819200 */
    UL_DataSplitThreshold_b1228800 = 15, /**< ASN.1 b1228800 */
    UL_DataSplitThreshold_b1638400 = 16, /**< ASN.1 b1638400 */
    UL_DataSplitThreshold_b2457600 = 17, /**< ASN.1 b2457600 */
    UL_DataSplitThreshold_b3276800 = 18, /**< ASN.1 b3276800 */
    UL_DataSplitThreshold_b4096000 = 19, /**< ASN.1 b4096000 */
    UL_DataSplitThreshold_b4915200 = 20, /**< ASN.1 b4915200 */
    UL_DataSplitThreshold_b5734400 = 21, /**< ASN.1 b5734400 */
    UL_DataSplitThreshold_b6553600 = 22, /**< ASN.1 b6553600 */
    UL_DataSplitThreshold_infinity = 23, /**< ASN.1 infinity */
    UL_DataSplitThreshold_spare8 = 24, /**< ASN.1 spare8 */
    UL_DataSplitThreshold_spare7 = 25, /**< ASN.1 spare7 */
    UL_DataSplitThreshold_spare6 = 26, /**< ASN.1 spare6 */
    UL_DataSplitThreshold_spare5 = 27, /**< ASN.1 spare5 */
    UL_DataSplitThreshold_spare4 = 28, /**< ASN.1 spare4 */
    UL_DataSplitThreshold_spare3 = 29, /**< ASN.1 spare3 */
    UL_DataSplitThreshold_spare2 = 30, /**< ASN.1 spare2 */
    UL_DataSplitThreshold_spare1 = 31, /**< ASN.1 spare1 */
} UL_DataSplitThreshold;


/**
 * @brief 枚举 DiscardTimerExt_r16（ASN.1 DiscardTimerExt-r16，源文件第 9383 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DiscardTimerExt_r16 {
    DiscardTimerExt_r16_ms0dot5 = 0, /**< ASN.1 ms0dot5 */
    DiscardTimerExt_r16_ms1 = 1, /**< ASN.1 ms1 */
    DiscardTimerExt_r16_ms2 = 2, /**< ASN.1 ms2 */
    DiscardTimerExt_r16_ms4 = 3, /**< ASN.1 ms4 */
    DiscardTimerExt_r16_ms6 = 4, /**< ASN.1 ms6 */
    DiscardTimerExt_r16_ms8 = 5, /**< ASN.1 ms8 */
    DiscardTimerExt_r16_spare2 = 6, /**< ASN.1 spare2 */
    DiscardTimerExt_r16_spare1 = 7, /**< ASN.1 spare1 */
} DiscardTimerExt_r16;


/**
 * @brief 枚举 DiscardTimerExt2_r17（ASN.1 DiscardTimerExt2-r17，源文件第 9385 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DiscardTimerExt2_r17 {
    DiscardTimerExt2_r17_ms2000 = 0, /**< ASN.1 ms2000 */
    DiscardTimerExt2_r17_spare3 = 1, /**< ASN.1 spare3 */
    DiscardTimerExt2_r17_spare2 = 2, /**< ASN.1 spare2 */
    DiscardTimerExt2_r17_spare1 = 3, /**< ASN.1 spare1 */
} DiscardTimerExt2_r17;


/**
 * @brief 枚举 DiscardTimerForLowImportance_r18（ASN.1 DiscardTimerForLowImportance-r18，源文件第 9395 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DiscardTimerForLowImportance_r18 {
    DiscardTimerForLowImportance_r18_ms0 = 0, /**< ASN.1 ms0 */
    DiscardTimerForLowImportance_r18_ms2 = 1, /**< ASN.1 ms2 */
    DiscardTimerForLowImportance_r18_ms4 = 2, /**< ASN.1 ms4 */
    DiscardTimerForLowImportance_r18_ms6 = 3, /**< ASN.1 ms6 */
    DiscardTimerForLowImportance_r18_ms8 = 4, /**< ASN.1 ms8 */
    DiscardTimerForLowImportance_r18_ms10 = 5, /**< ASN.1 ms10 */
    DiscardTimerForLowImportance_r18_ms12 = 6, /**< ASN.1 ms12 */
    DiscardTimerForLowImportance_r18_ms14 = 7, /**< ASN.1 ms14 */
    DiscardTimerForLowImportance_r18_ms18 = 8, /**< ASN.1 ms18 */
    DiscardTimerForLowImportance_r18_ms22 = 9, /**< ASN.1 ms22 */
    DiscardTimerForLowImportance_r18_ms26 = 10, /**< ASN.1 ms26 */
    DiscardTimerForLowImportance_r18_ms30 = 11, /**< ASN.1 ms30 */
    DiscardTimerForLowImportance_r18_ms40 = 12, /**< ASN.1 ms40 */
    DiscardTimerForLowImportance_r18_ms50 = 13, /**< ASN.1 ms50 */
    DiscardTimerForLowImportance_r18_ms75 = 14, /**< ASN.1 ms75 */
    DiscardTimerForLowImportance_r18_ms100 = 15, /**< ASN.1 ms100 */
} DiscardTimerForLowImportance_r18;


/**
 * @brief 枚举 PUCCH_MaxCodeRate（ASN.1 PUCCH-MaxCodeRate，源文件第 10012 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_MaxCodeRate {
    PUCCH_MaxCodeRate_zeroDot08 = 0, /**< ASN.1 zeroDot08 */
    PUCCH_MaxCodeRate_zeroDot15 = 1, /**< ASN.1 zeroDot15 */
    PUCCH_MaxCodeRate_zeroDot25 = 2, /**< ASN.1 zeroDot25 */
    PUCCH_MaxCodeRate_zeroDot35 = 3, /**< ASN.1 zeroDot35 */
    PUCCH_MaxCodeRate_zeroDot45 = 4, /**< ASN.1 zeroDot45 */
    PUCCH_MaxCodeRate_zeroDot60 = 5, /**< ASN.1 zeroDot60 */
    PUCCH_MaxCodeRate_zeroDot80 = 6, /**< ASN.1 zeroDot80 */
} PUCCH_MaxCodeRate;


/**
 * @brief 枚举 Q_OffsetRange（ASN.1 Q-OffsetRange，源文件第 10653 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Q_OffsetRange {
    Q_OffsetRange_dB_24 = 0, /**< ASN.1 dB-24 */
    Q_OffsetRange_dB_22 = 1, /**< ASN.1 dB-22 */
    Q_OffsetRange_dB_20 = 2, /**< ASN.1 dB-20 */
    Q_OffsetRange_dB_18 = 3, /**< ASN.1 dB-18 */
    Q_OffsetRange_dB_16 = 4, /**< ASN.1 dB-16 */
    Q_OffsetRange_dB_14 = 5, /**< ASN.1 dB-14 */
    Q_OffsetRange_dB_12 = 6, /**< ASN.1 dB-12 */
    Q_OffsetRange_dB_10 = 7, /**< ASN.1 dB-10 */
    Q_OffsetRange_dB_8 = 8, /**< ASN.1 dB-8 */
    Q_OffsetRange_dB_6 = 9, /**< ASN.1 dB-6 */
    Q_OffsetRange_dB_5 = 10, /**< ASN.1 dB-5 */
    Q_OffsetRange_dB_4 = 11, /**< ASN.1 dB-4 */
    Q_OffsetRange_dB_3 = 12, /**< ASN.1 dB-3 */
    Q_OffsetRange_dB_2 = 13, /**< ASN.1 dB-2 */
    Q_OffsetRange_dB_1 = 14, /**< ASN.1 dB-1 */
    Q_OffsetRange_dB0 = 15, /**< ASN.1 dB0 */
    Q_OffsetRange_dB1 = 16, /**< ASN.1 dB1 */
    Q_OffsetRange_dB2 = 17, /**< ASN.1 dB2 */
    Q_OffsetRange_dB3 = 18, /**< ASN.1 dB3 */
    Q_OffsetRange_dB4 = 19, /**< ASN.1 dB4 */
    Q_OffsetRange_dB5 = 20, /**< ASN.1 dB5 */
    Q_OffsetRange_dB6 = 21, /**< ASN.1 dB6 */
    Q_OffsetRange_dB8 = 22, /**< ASN.1 dB8 */
    Q_OffsetRange_dB10 = 23, /**< ASN.1 dB10 */
    Q_OffsetRange_dB12 = 24, /**< ASN.1 dB12 */
    Q_OffsetRange_dB14 = 25, /**< ASN.1 dB14 */
    Q_OffsetRange_dB16 = 26, /**< ASN.1 dB16 */
    Q_OffsetRange_dB18 = 27, /**< ASN.1 dB18 */
    Q_OffsetRange_dB20 = 28, /**< ASN.1 dB20 */
    Q_OffsetRange_dB22 = 29, /**< ASN.1 dB22 */
    Q_OffsetRange_dB24 = 30, /**< ASN.1 dB24 */
} Q_OffsetRange;


/**
 * @brief 枚举 NR_RS_Type（ASN.1 NR-RS-Type，源文件第 11692 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NR_RS_Type {
    NR_RS_Type_ssb = 0, /**< ASN.1 ssb */
    NR_RS_Type_csi_rs = 1, /**< ASN.1 csi-rs */
} NR_RS_Type;


/**
 * @brief 枚举 RxTxReportInterval_r17（ASN.1 RxTxReportInterval-r17，源文件第 11747 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RxTxReportInterval_r17 {
    RxTxReportInterval_r17_ms80 = 0, /**< ASN.1 ms80 */
    RxTxReportInterval_r17_ms120 = 1, /**< ASN.1 ms120 */
    RxTxReportInterval_r17_ms160 = 2, /**< ASN.1 ms160 */
    RxTxReportInterval_r17_ms240 = 3, /**< ASN.1 ms240 */
    RxTxReportInterval_r17_ms320 = 4, /**< ASN.1 ms320 */
    RxTxReportInterval_r17_ms480 = 5, /**< ASN.1 ms480 */
    RxTxReportInterval_r17_ms640 = 6, /**< ASN.1 ms640 */
    RxTxReportInterval_r17_ms1024 = 7, /**< ASN.1 ms1024 */
    RxTxReportInterval_r17_ms1280 = 8, /**< ASN.1 ms1280 */
    RxTxReportInterval_r17_ms2048 = 9, /**< ASN.1 ms2048 */
    RxTxReportInterval_r17_ms2560 = 10, /**< ASN.1 ms2560 */
    RxTxReportInterval_r17_ms5120 = 11, /**< ASN.1 ms5120 */
    RxTxReportInterval_r17_spare4 = 12, /**< ASN.1 spare4 */
    RxTxReportInterval_r17_spare3 = 13, /**< ASN.1 spare3 */
    RxTxReportInterval_r17_spare2 = 14, /**< ASN.1 spare2 */
    RxTxReportInterval_r17_spare1 = 15, /**< ASN.1 spare1 */
} RxTxReportInterval_r17;


/**
 * @brief 枚举 MeasReportQuantityCLI_r16（ASN.1 MeasReportQuantityCLI-r16，源文件第 11754 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasReportQuantityCLI_r16 {
    MeasReportQuantityCLI_r16_srs_rsrp = 0, /**< ASN.1 srs-rsrp */
    MeasReportQuantityCLI_r16_cli_rssi = 1, /**< ASN.1 cli-rssi */
} MeasReportQuantityCLI_r16;


/**
 * @brief 枚举 ReportInterval（ASN.1 ReportInterval，源文件第 11828 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReportInterval {
    ReportInterval_ms120 = 0, /**< ASN.1 ms120 */
    ReportInterval_ms240 = 1, /**< ASN.1 ms240 */
    ReportInterval_ms480 = 2, /**< ASN.1 ms480 */
    ReportInterval_ms640 = 3, /**< ASN.1 ms640 */
    ReportInterval_ms1024 = 4, /**< ASN.1 ms1024 */
    ReportInterval_ms2048 = 5, /**< ASN.1 ms2048 */
    ReportInterval_ms5120 = 6, /**< ASN.1 ms5120 */
    ReportInterval_ms10240 = 7, /**< ASN.1 ms10240 */
    ReportInterval_ms20480 = 8, /**< ASN.1 ms20480 */
    ReportInterval_ms40960 = 9, /**< ASN.1 ms40960 */
    ReportInterval_min1 = 10, /**< ASN.1 min1 */
    ReportInterval_min6 = 11, /**< ASN.1 min6 */
    ReportInterval_min12 = 12, /**< ASN.1 min12 */
    ReportInterval_min30 = 13, /**< ASN.1 min30 */
} ReportInterval;


/**
 * @brief 枚举 ResumeCause（ASN.1 ResumeCause，源文件第 11844 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ResumeCause {
    ResumeCause_emergency = 0, /**< ASN.1 emergency */
    ResumeCause_highPriorityAccess = 1, /**< ASN.1 highPriorityAccess */
    ResumeCause_mt_Access = 2, /**< ASN.1 mt-Access */
    ResumeCause_mo_Signalling = 3, /**< ASN.1 mo-Signalling */
    ResumeCause_mo_Data = 4, /**< ASN.1 mo-Data */
    ResumeCause_mo_VoiceCall = 5, /**< ASN.1 mo-VoiceCall */
    ResumeCause_mo_VideoCall = 6, /**< ASN.1 mo-VideoCall */
    ResumeCause_mo_SMS = 7, /**< ASN.1 mo-SMS */
    ResumeCause_rna_Update = 8, /**< ASN.1 rna-Update */
    ResumeCause_mps_PriorityAccess = 9, /**< ASN.1 mps-PriorityAccess */
    ResumeCause_mcs_PriorityAccess = 10, /**< ASN.1 mcs-PriorityAccess */
    ResumeCause_mt_SDT_v1810 = 11, /**< ASN.1 mt-SDT-v1810 */
    ResumeCause_srs_PosConfigOrActivationReq_v1800 = 12, /**< ASN.1 srs-PosConfigOrActivationReq-v1800 */
    ResumeCause_spare3 = 13, /**< ASN.1 spare3 */
    ResumeCause_spare2 = 14, /**< ASN.1 spare2 */
    ResumeCause_spare1 = 15, /**< ASN.1 spare1 */
} ResumeCause;


/**
 * @brief 枚举 T_PollRetransmit（ASN.1 T-PollRetransmit，源文件第 11923 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum T_PollRetransmit {
    T_PollRetransmit_ms5 = 0, /**< ASN.1 ms5 */
    T_PollRetransmit_ms10 = 1, /**< ASN.1 ms10 */
    T_PollRetransmit_ms15 = 2, /**< ASN.1 ms15 */
    T_PollRetransmit_ms20 = 3, /**< ASN.1 ms20 */
    T_PollRetransmit_ms25 = 4, /**< ASN.1 ms25 */
    T_PollRetransmit_ms30 = 5, /**< ASN.1 ms30 */
    T_PollRetransmit_ms35 = 6, /**< ASN.1 ms35 */
    T_PollRetransmit_ms40 = 7, /**< ASN.1 ms40 */
    T_PollRetransmit_ms45 = 8, /**< ASN.1 ms45 */
    T_PollRetransmit_ms50 = 9, /**< ASN.1 ms50 */
    T_PollRetransmit_ms55 = 10, /**< ASN.1 ms55 */
    T_PollRetransmit_ms60 = 11, /**< ASN.1 ms60 */
    T_PollRetransmit_ms65 = 12, /**< ASN.1 ms65 */
    T_PollRetransmit_ms70 = 13, /**< ASN.1 ms70 */
    T_PollRetransmit_ms75 = 14, /**< ASN.1 ms75 */
    T_PollRetransmit_ms80 = 15, /**< ASN.1 ms80 */
    T_PollRetransmit_ms85 = 16, /**< ASN.1 ms85 */
    T_PollRetransmit_ms90 = 17, /**< ASN.1 ms90 */
    T_PollRetransmit_ms95 = 18, /**< ASN.1 ms95 */
    T_PollRetransmit_ms100 = 19, /**< ASN.1 ms100 */
    T_PollRetransmit_ms105 = 20, /**< ASN.1 ms105 */
    T_PollRetransmit_ms110 = 21, /**< ASN.1 ms110 */
    T_PollRetransmit_ms115 = 22, /**< ASN.1 ms115 */
    T_PollRetransmit_ms120 = 23, /**< ASN.1 ms120 */
    T_PollRetransmit_ms125 = 24, /**< ASN.1 ms125 */
    T_PollRetransmit_ms130 = 25, /**< ASN.1 ms130 */
    T_PollRetransmit_ms135 = 26, /**< ASN.1 ms135 */
    T_PollRetransmit_ms140 = 27, /**< ASN.1 ms140 */
    T_PollRetransmit_ms145 = 28, /**< ASN.1 ms145 */
    T_PollRetransmit_ms150 = 29, /**< ASN.1 ms150 */
    T_PollRetransmit_ms155 = 30, /**< ASN.1 ms155 */
    T_PollRetransmit_ms160 = 31, /**< ASN.1 ms160 */
    T_PollRetransmit_ms165 = 32, /**< ASN.1 ms165 */
    T_PollRetransmit_ms170 = 33, /**< ASN.1 ms170 */
    T_PollRetransmit_ms175 = 34, /**< ASN.1 ms175 */
    T_PollRetransmit_ms180 = 35, /**< ASN.1 ms180 */
    T_PollRetransmit_ms185 = 36, /**< ASN.1 ms185 */
    T_PollRetransmit_ms190 = 37, /**< ASN.1 ms190 */
    T_PollRetransmit_ms195 = 38, /**< ASN.1 ms195 */
    T_PollRetransmit_ms200 = 39, /**< ASN.1 ms200 */
    T_PollRetransmit_ms205 = 40, /**< ASN.1 ms205 */
    T_PollRetransmit_ms210 = 41, /**< ASN.1 ms210 */
    T_PollRetransmit_ms215 = 42, /**< ASN.1 ms215 */
    T_PollRetransmit_ms220 = 43, /**< ASN.1 ms220 */
    T_PollRetransmit_ms225 = 44, /**< ASN.1 ms225 */
    T_PollRetransmit_ms230 = 45, /**< ASN.1 ms230 */
    T_PollRetransmit_ms235 = 46, /**< ASN.1 ms235 */
    T_PollRetransmit_ms240 = 47, /**< ASN.1 ms240 */
    T_PollRetransmit_ms245 = 48, /**< ASN.1 ms245 */
    T_PollRetransmit_ms250 = 49, /**< ASN.1 ms250 */
    T_PollRetransmit_ms300 = 50, /**< ASN.1 ms300 */
    T_PollRetransmit_ms350 = 51, /**< ASN.1 ms350 */
    T_PollRetransmit_ms400 = 52, /**< ASN.1 ms400 */
    T_PollRetransmit_ms450 = 53, /**< ASN.1 ms450 */
    T_PollRetransmit_ms500 = 54, /**< ASN.1 ms500 */
    T_PollRetransmit_ms800 = 55, /**< ASN.1 ms800 */
    T_PollRetransmit_ms1000 = 56, /**< ASN.1 ms1000 */
    T_PollRetransmit_ms2000 = 57, /**< ASN.1 ms2000 */
    T_PollRetransmit_ms4000 = 58, /**< ASN.1 ms4000 */
    T_PollRetransmit_ms1_v1610 = 59, /**< ASN.1 ms1-v1610 */
    T_PollRetransmit_ms2_v1610 = 60, /**< ASN.1 ms2-v1610 */
    T_PollRetransmit_ms3_v1610 = 61, /**< ASN.1 ms3-v1610 */
    T_PollRetransmit_ms4_v1610 = 62, /**< ASN.1 ms4-v1610 */
    T_PollRetransmit_spare1 = 63, /**< ASN.1 spare1 */
} T_PollRetransmit;


/**
 * @brief 枚举 PollPDU（ASN.1 PollPDU，源文件第 11937 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PollPDU {
    PollPDU_p4 = 0, /**< ASN.1 p4 */
    PollPDU_p8 = 1, /**< ASN.1 p8 */
    PollPDU_p16 = 2, /**< ASN.1 p16 */
    PollPDU_p32 = 3, /**< ASN.1 p32 */
    PollPDU_p64 = 4, /**< ASN.1 p64 */
    PollPDU_p128 = 5, /**< ASN.1 p128 */
    PollPDU_p256 = 6, /**< ASN.1 p256 */
    PollPDU_p512 = 7, /**< ASN.1 p512 */
    PollPDU_p1024 = 8, /**< ASN.1 p1024 */
    PollPDU_p2048 = 9, /**< ASN.1 p2048 */
    PollPDU_p4096 = 10, /**< ASN.1 p4096 */
    PollPDU_p6144 = 11, /**< ASN.1 p6144 */
    PollPDU_p8192 = 12, /**< ASN.1 p8192 */
    PollPDU_p12288 = 13, /**< ASN.1 p12288 */
    PollPDU_p16384 = 14, /**< ASN.1 p16384 */
    PollPDU_p20480 = 15, /**< ASN.1 p20480 */
    PollPDU_p24576 = 16, /**< ASN.1 p24576 */
    PollPDU_p28672 = 17, /**< ASN.1 p28672 */
    PollPDU_p32768 = 18, /**< ASN.1 p32768 */
    PollPDU_p40960 = 19, /**< ASN.1 p40960 */
    PollPDU_p49152 = 20, /**< ASN.1 p49152 */
    PollPDU_p57344 = 21, /**< ASN.1 p57344 */
    PollPDU_p65536 = 22, /**< ASN.1 p65536 */
    PollPDU_infinity = 23, /**< ASN.1 infinity */
    PollPDU_spare8 = 24, /**< ASN.1 spare8 */
    PollPDU_spare7 = 25, /**< ASN.1 spare7 */
    PollPDU_spare6 = 26, /**< ASN.1 spare6 */
    PollPDU_spare5 = 27, /**< ASN.1 spare5 */
    PollPDU_spare4 = 28, /**< ASN.1 spare4 */
    PollPDU_spare3 = 29, /**< ASN.1 spare3 */
    PollPDU_spare2 = 30, /**< ASN.1 spare2 */
    PollPDU_spare1 = 31, /**< ASN.1 spare1 */
} PollPDU;


/**
 * @brief 枚举 PollByte（ASN.1 PollByte，源文件第 11942 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PollByte {
    PollByte_kB1 = 0, /**< ASN.1 kB1 */
    PollByte_kB2 = 1, /**< ASN.1 kB2 */
    PollByte_kB5 = 2, /**< ASN.1 kB5 */
    PollByte_kB8 = 3, /**< ASN.1 kB8 */
    PollByte_kB10 = 4, /**< ASN.1 kB10 */
    PollByte_kB15 = 5, /**< ASN.1 kB15 */
    PollByte_kB25 = 6, /**< ASN.1 kB25 */
    PollByte_kB50 = 7, /**< ASN.1 kB50 */
    PollByte_kB75 = 8, /**< ASN.1 kB75 */
    PollByte_kB100 = 9, /**< ASN.1 kB100 */
    PollByte_kB125 = 10, /**< ASN.1 kB125 */
    PollByte_kB250 = 11, /**< ASN.1 kB250 */
    PollByte_kB375 = 12, /**< ASN.1 kB375 */
    PollByte_kB500 = 13, /**< ASN.1 kB500 */
    PollByte_kB750 = 14, /**< ASN.1 kB750 */
    PollByte_kB1000 = 15, /**< ASN.1 kB1000 */
    PollByte_kB1250 = 16, /**< ASN.1 kB1250 */
    PollByte_kB1500 = 17, /**< ASN.1 kB1500 */
    PollByte_kB2000 = 18, /**< ASN.1 kB2000 */
    PollByte_kB3000 = 19, /**< ASN.1 kB3000 */
    PollByte_kB4000 = 20, /**< ASN.1 kB4000 */
    PollByte_kB4500 = 21, /**< ASN.1 kB4500 */
    PollByte_kB5000 = 22, /**< ASN.1 kB5000 */
    PollByte_kB5500 = 23, /**< ASN.1 kB5500 */
    PollByte_kB6000 = 24, /**< ASN.1 kB6000 */
    PollByte_kB6500 = 25, /**< ASN.1 kB6500 */
    PollByte_kB7000 = 26, /**< ASN.1 kB7000 */
    PollByte_kB7500 = 27, /**< ASN.1 kB7500 */
    PollByte_mB8 = 28, /**< ASN.1 mB8 */
    PollByte_mB9 = 29, /**< ASN.1 mB9 */
    PollByte_mB10 = 30, /**< ASN.1 mB10 */
    PollByte_mB11 = 31, /**< ASN.1 mB11 */
    PollByte_mB12 = 32, /**< ASN.1 mB12 */
    PollByte_mB13 = 33, /**< ASN.1 mB13 */
    PollByte_mB14 = 34, /**< ASN.1 mB14 */
    PollByte_mB15 = 35, /**< ASN.1 mB15 */
    PollByte_mB16 = 36, /**< ASN.1 mB16 */
    PollByte_mB17 = 37, /**< ASN.1 mB17 */
    PollByte_mB18 = 38, /**< ASN.1 mB18 */
    PollByte_mB20 = 39, /**< ASN.1 mB20 */
    PollByte_mB25 = 40, /**< ASN.1 mB25 */
    PollByte_mB30 = 41, /**< ASN.1 mB30 */
    PollByte_mB40 = 42, /**< ASN.1 mB40 */
    PollByte_infinity = 43, /**< ASN.1 infinity */
    PollByte_spare20 = 44, /**< ASN.1 spare20 */
    PollByte_spare19 = 45, /**< ASN.1 spare19 */
    PollByte_spare18 = 46, /**< ASN.1 spare18 */
    PollByte_spare17 = 47, /**< ASN.1 spare17 */
    PollByte_spare16 = 48, /**< ASN.1 spare16 */
    PollByte_spare15 = 49, /**< ASN.1 spare15 */
    PollByte_spare14 = 50, /**< ASN.1 spare14 */
    PollByte_spare13 = 51, /**< ASN.1 spare13 */
    PollByte_spare12 = 52, /**< ASN.1 spare12 */
    PollByte_spare11 = 53, /**< ASN.1 spare11 */
    PollByte_spare10 = 54, /**< ASN.1 spare10 */
    PollByte_spare9 = 55, /**< ASN.1 spare9 */
    PollByte_spare8 = 56, /**< ASN.1 spare8 */
    PollByte_spare7 = 57, /**< ASN.1 spare7 */
    PollByte_spare6 = 58, /**< ASN.1 spare6 */
    PollByte_spare5 = 59, /**< ASN.1 spare5 */
    PollByte_spare4 = 60, /**< ASN.1 spare4 */
    PollByte_spare3 = 61, /**< ASN.1 spare3 */
    PollByte_spare2 = 62, /**< ASN.1 spare2 */
    PollByte_spare1 = 63, /**< ASN.1 spare1 */
} PollByte;


/**
 * @brief 枚举 T_Reassembly（ASN.1 T-Reassembly，源文件第 11954 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum T_Reassembly {
    T_Reassembly_ms0 = 0, /**< ASN.1 ms0 */
    T_Reassembly_ms5 = 1, /**< ASN.1 ms5 */
    T_Reassembly_ms10 = 2, /**< ASN.1 ms10 */
    T_Reassembly_ms15 = 3, /**< ASN.1 ms15 */
    T_Reassembly_ms20 = 4, /**< ASN.1 ms20 */
    T_Reassembly_ms25 = 5, /**< ASN.1 ms25 */
    T_Reassembly_ms30 = 6, /**< ASN.1 ms30 */
    T_Reassembly_ms35 = 7, /**< ASN.1 ms35 */
    T_Reassembly_ms40 = 8, /**< ASN.1 ms40 */
    T_Reassembly_ms45 = 9, /**< ASN.1 ms45 */
    T_Reassembly_ms50 = 10, /**< ASN.1 ms50 */
    T_Reassembly_ms55 = 11, /**< ASN.1 ms55 */
    T_Reassembly_ms60 = 12, /**< ASN.1 ms60 */
    T_Reassembly_ms65 = 13, /**< ASN.1 ms65 */
    T_Reassembly_ms70 = 14, /**< ASN.1 ms70 */
    T_Reassembly_ms75 = 15, /**< ASN.1 ms75 */
    T_Reassembly_ms80 = 16, /**< ASN.1 ms80 */
    T_Reassembly_ms85 = 17, /**< ASN.1 ms85 */
    T_Reassembly_ms90 = 18, /**< ASN.1 ms90 */
    T_Reassembly_ms95 = 19, /**< ASN.1 ms95 */
    T_Reassembly_ms100 = 20, /**< ASN.1 ms100 */
    T_Reassembly_ms110 = 21, /**< ASN.1 ms110 */
    T_Reassembly_ms120 = 22, /**< ASN.1 ms120 */
    T_Reassembly_ms130 = 23, /**< ASN.1 ms130 */
    T_Reassembly_ms140 = 24, /**< ASN.1 ms140 */
    T_Reassembly_ms150 = 25, /**< ASN.1 ms150 */
    T_Reassembly_ms160 = 26, /**< ASN.1 ms160 */
    T_Reassembly_ms170 = 27, /**< ASN.1 ms170 */
    T_Reassembly_ms180 = 28, /**< ASN.1 ms180 */
    T_Reassembly_ms190 = 29, /**< ASN.1 ms190 */
    T_Reassembly_ms200 = 30, /**< ASN.1 ms200 */
    T_Reassembly_spare1 = 31, /**< ASN.1 spare1 */
} T_Reassembly;


/**
 * @brief 枚举 T_StatusProhibit（ASN.1 T-StatusProhibit，源文件第 11961 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum T_StatusProhibit {
    T_StatusProhibit_ms0 = 0, /**< ASN.1 ms0 */
    T_StatusProhibit_ms5 = 1, /**< ASN.1 ms5 */
    T_StatusProhibit_ms10 = 2, /**< ASN.1 ms10 */
    T_StatusProhibit_ms15 = 3, /**< ASN.1 ms15 */
    T_StatusProhibit_ms20 = 4, /**< ASN.1 ms20 */
    T_StatusProhibit_ms25 = 5, /**< ASN.1 ms25 */
    T_StatusProhibit_ms30 = 6, /**< ASN.1 ms30 */
    T_StatusProhibit_ms35 = 7, /**< ASN.1 ms35 */
    T_StatusProhibit_ms40 = 8, /**< ASN.1 ms40 */
    T_StatusProhibit_ms45 = 9, /**< ASN.1 ms45 */
    T_StatusProhibit_ms50 = 10, /**< ASN.1 ms50 */
    T_StatusProhibit_ms55 = 11, /**< ASN.1 ms55 */
    T_StatusProhibit_ms60 = 12, /**< ASN.1 ms60 */
    T_StatusProhibit_ms65 = 13, /**< ASN.1 ms65 */
    T_StatusProhibit_ms70 = 14, /**< ASN.1 ms70 */
    T_StatusProhibit_ms75 = 15, /**< ASN.1 ms75 */
    T_StatusProhibit_ms80 = 16, /**< ASN.1 ms80 */
    T_StatusProhibit_ms85 = 17, /**< ASN.1 ms85 */
    T_StatusProhibit_ms90 = 18, /**< ASN.1 ms90 */
    T_StatusProhibit_ms95 = 19, /**< ASN.1 ms95 */
    T_StatusProhibit_ms100 = 20, /**< ASN.1 ms100 */
    T_StatusProhibit_ms105 = 21, /**< ASN.1 ms105 */
    T_StatusProhibit_ms110 = 22, /**< ASN.1 ms110 */
    T_StatusProhibit_ms115 = 23, /**< ASN.1 ms115 */
    T_StatusProhibit_ms120 = 24, /**< ASN.1 ms120 */
    T_StatusProhibit_ms125 = 25, /**< ASN.1 ms125 */
    T_StatusProhibit_ms130 = 26, /**< ASN.1 ms130 */
    T_StatusProhibit_ms135 = 27, /**< ASN.1 ms135 */
    T_StatusProhibit_ms140 = 28, /**< ASN.1 ms140 */
    T_StatusProhibit_ms145 = 29, /**< ASN.1 ms145 */
    T_StatusProhibit_ms150 = 30, /**< ASN.1 ms150 */
    T_StatusProhibit_ms155 = 31, /**< ASN.1 ms155 */
    T_StatusProhibit_ms160 = 32, /**< ASN.1 ms160 */
    T_StatusProhibit_ms165 = 33, /**< ASN.1 ms165 */
    T_StatusProhibit_ms170 = 34, /**< ASN.1 ms170 */
    T_StatusProhibit_ms175 = 35, /**< ASN.1 ms175 */
    T_StatusProhibit_ms180 = 36, /**< ASN.1 ms180 */
    T_StatusProhibit_ms185 = 37, /**< ASN.1 ms185 */
    T_StatusProhibit_ms190 = 38, /**< ASN.1 ms190 */
    T_StatusProhibit_ms195 = 39, /**< ASN.1 ms195 */
    T_StatusProhibit_ms200 = 40, /**< ASN.1 ms200 */
    T_StatusProhibit_ms205 = 41, /**< ASN.1 ms205 */
    T_StatusProhibit_ms210 = 42, /**< ASN.1 ms210 */
    T_StatusProhibit_ms215 = 43, /**< ASN.1 ms215 */
    T_StatusProhibit_ms220 = 44, /**< ASN.1 ms220 */
    T_StatusProhibit_ms225 = 45, /**< ASN.1 ms225 */
    T_StatusProhibit_ms230 = 46, /**< ASN.1 ms230 */
    T_StatusProhibit_ms235 = 47, /**< ASN.1 ms235 */
    T_StatusProhibit_ms240 = 48, /**< ASN.1 ms240 */
    T_StatusProhibit_ms245 = 49, /**< ASN.1 ms245 */
    T_StatusProhibit_ms250 = 50, /**< ASN.1 ms250 */
    T_StatusProhibit_ms300 = 51, /**< ASN.1 ms300 */
    T_StatusProhibit_ms350 = 52, /**< ASN.1 ms350 */
    T_StatusProhibit_ms400 = 53, /**< ASN.1 ms400 */
    T_StatusProhibit_ms450 = 54, /**< ASN.1 ms450 */
    T_StatusProhibit_ms500 = 55, /**< ASN.1 ms500 */
    T_StatusProhibit_ms800 = 56, /**< ASN.1 ms800 */
    T_StatusProhibit_ms1000 = 57, /**< ASN.1 ms1000 */
    T_StatusProhibit_ms1200 = 58, /**< ASN.1 ms1200 */
    T_StatusProhibit_ms1600 = 59, /**< ASN.1 ms1600 */
    T_StatusProhibit_ms2000 = 60, /**< ASN.1 ms2000 */
    T_StatusProhibit_ms2400 = 61, /**< ASN.1 ms2400 */
    T_StatusProhibit_spare2 = 62, /**< ASN.1 spare2 */
    T_StatusProhibit_spare1 = 63, /**< ASN.1 spare1 */
} T_StatusProhibit;


/**
 * @brief 枚举 SN_FieldLengthUM（ASN.1 SN-FieldLengthUM，源文件第 11973 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SN_FieldLengthUM {
    SN_FieldLengthUM_size6 = 0, /**< ASN.1 size6 */
    SN_FieldLengthUM_size12 = 1, /**< ASN.1 size12 */
} SN_FieldLengthUM;


/**
 * @brief 枚举 SN_FieldLengthAM（ASN.1 SN-FieldLengthAM，源文件第 11974 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SN_FieldLengthAM {
    SN_FieldLengthAM_size12 = 0, /**< ASN.1 size12 */
    SN_FieldLengthAM_size18 = 1, /**< ASN.1 size18 */
} SN_FieldLengthAM;


/**
 * @brief 枚举 T_StatusProhibit_v1610（ASN.1 T-StatusProhibit-v1610，源文件第 11998 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum T_StatusProhibit_v1610 {
    T_StatusProhibit_v1610_ms1 = 0, /**< ASN.1 ms1 */
    T_StatusProhibit_v1610_ms2 = 1, /**< ASN.1 ms2 */
    T_StatusProhibit_v1610_ms3 = 2, /**< ASN.1 ms3 */
    T_StatusProhibit_v1610_ms4 = 3, /**< ASN.1 ms4 */
    T_StatusProhibit_v1610_spare4 = 4, /**< ASN.1 spare4 */
    T_StatusProhibit_v1610_spare3 = 5, /**< ASN.1 spare3 */
    T_StatusProhibit_v1610_spare2 = 6, /**< ASN.1 spare2 */
    T_StatusProhibit_v1610_spare1 = 7, /**< ASN.1 spare1 */
} T_StatusProhibit_v1610;


/**
 * @brief 枚举 T_ReassemblyExt_r17（ASN.1 T-ReassemblyExt-r17，源文件第 12000 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum T_ReassemblyExt_r17 {
    T_ReassemblyExt_r17_ms210 = 0, /**< ASN.1 ms210 */
    T_ReassemblyExt_r17_ms220 = 1, /**< ASN.1 ms220 */
    T_ReassemblyExt_r17_ms340 = 2, /**< ASN.1 ms340 */
    T_ReassemblyExt_r17_ms350 = 3, /**< ASN.1 ms350 */
    T_ReassemblyExt_r17_ms550 = 4, /**< ASN.1 ms550 */
    T_ReassemblyExt_r17_ms1100 = 5, /**< ASN.1 ms1100 */
    T_ReassemblyExt_r17_ms1650 = 6, /**< ASN.1 ms1650 */
    T_ReassemblyExt_r17_ms2200 = 7, /**< ASN.1 ms2200 */
} T_ReassemblyExt_r17;


/**
 * @brief 枚举 IntegrityProtAlgorithm（ASN.1 IntegrityProtAlgorithm，源文件第 12355 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t IntegrityProtAlgorithm;
#define IntegrityProtAlgorithm_nia0 0 /**< ASN.1 nia0 */
#define IntegrityProtAlgorithm_nia1 1 /**< ASN.1 nia1 */
#define IntegrityProtAlgorithm_nia2 2 /**< ASN.1 nia2 */
#define IntegrityProtAlgorithm_nia3 3 /**< ASN.1 nia3 */
#define IntegrityProtAlgorithm_spare4 4 /**< ASN.1 spare4 */
#define IntegrityProtAlgorithm_spare3 5 /**< ASN.1 spare3 */
#define IntegrityProtAlgorithm_spare2 6 /**< ASN.1 spare2 */
#define IntegrityProtAlgorithm_spare1 7 /**< ASN.1 spare1 */


/**
 * @brief 枚举 CipheringAlgorithm（ASN.1 CipheringAlgorithm，源文件第 12359 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t CipheringAlgorithm;
#define CipheringAlgorithm_nea0 0 /**< ASN.1 nea0 */
#define CipheringAlgorithm_nea1 1 /**< ASN.1 nea1 */
#define CipheringAlgorithm_nea2 2 /**< ASN.1 nea2 */
#define CipheringAlgorithm_nea3 3 /**< ASN.1 nea3 */
#define CipheringAlgorithm_spare4 4 /**< ASN.1 spare4 */
#define CipheringAlgorithm_spare3 5 /**< ASN.1 spare3 */
#define CipheringAlgorithm_spare2 6 /**< ASN.1 spare2 */
#define CipheringAlgorithm_spare1 7 /**< ASN.1 spare1 */


/**
 * @brief 枚举 SSB_PositionQCL_Relation_r16（ASN.1 SSB-PositionQCL-Relation-r16，源文件第 13598 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SSB_PositionQCL_Relation_r16 {
    SSB_PositionQCL_Relation_r16_n1 = 0, /**< ASN.1 n1 */
    SSB_PositionQCL_Relation_r16_n2 = 1, /**< ASN.1 n2 */
    SSB_PositionQCL_Relation_r16_n4 = 2, /**< ASN.1 n4 */
    SSB_PositionQCL_Relation_r16_n8 = 3, /**< ASN.1 n8 */
} SSB_PositionQCL_Relation_r16;


/**
 * @brief 枚举 SSB_PositionQCL_Relation_r17（ASN.1 SSB-PositionQCL-Relation-r17，源文件第 13600 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SSB_PositionQCL_Relation_r17 {
    SSB_PositionQCL_Relation_r17_n32 = 0, /**< ASN.1 n32 */
    SSB_PositionQCL_Relation_r17_n64 = 1, /**< ASN.1 n64 */
} SSB_PositionQCL_Relation_r17;


/**
 * @brief 枚举 SubcarrierSpacing（ASN.1 SubcarrierSpacing，源文件第 13622 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SubcarrierSpacing {
    SubcarrierSpacing_kHz15 = 0, /**< ASN.1 kHz15 */
    SubcarrierSpacing_kHz30 = 1, /**< ASN.1 kHz30 */
    SubcarrierSpacing_kHz60 = 2, /**< ASN.1 kHz60 */
    SubcarrierSpacing_kHz120 = 3, /**< ASN.1 kHz120 */
    SubcarrierSpacing_kHz240 = 4, /**< ASN.1 kHz240 */
    SubcarrierSpacing_kHz480_v1700 = 5, /**< ASN.1 kHz480-v1700 */
    SubcarrierSpacing_kHz960_v1700 = 6, /**< ASN.1 kHz960-v1700 */
    SubcarrierSpacing_spare1 = 7, /**< ASN.1 spare1 */
} SubcarrierSpacing;


/**
 * @brief 枚举 TimeAlignmentTimer（ASN.1 TimeAlignmentTimer，源文件第 13804 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TimeAlignmentTimer {
    TimeAlignmentTimer_ms500 = 0, /**< ASN.1 ms500 */
    TimeAlignmentTimer_ms750 = 1, /**< ASN.1 ms750 */
    TimeAlignmentTimer_ms1280 = 2, /**< ASN.1 ms1280 */
    TimeAlignmentTimer_ms1920 = 3, /**< ASN.1 ms1920 */
    TimeAlignmentTimer_ms2560 = 4, /**< ASN.1 ms2560 */
    TimeAlignmentTimer_ms5120 = 5, /**< ASN.1 ms5120 */
    TimeAlignmentTimer_ms10240 = 6, /**< ASN.1 ms10240 */
    TimeAlignmentTimer_infinity = 7, /**< ASN.1 infinity */
} TimeAlignmentTimer;


/**
 * @brief 枚举 TimeToTrigger（ASN.1 TimeToTrigger，源文件第 13809 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TimeToTrigger {
    TimeToTrigger_ms0 = 0, /**< ASN.1 ms0 */
    TimeToTrigger_ms40 = 1, /**< ASN.1 ms40 */
    TimeToTrigger_ms64 = 2, /**< ASN.1 ms64 */
    TimeToTrigger_ms80 = 3, /**< ASN.1 ms80 */
    TimeToTrigger_ms100 = 4, /**< ASN.1 ms100 */
    TimeToTrigger_ms128 = 5, /**< ASN.1 ms128 */
    TimeToTrigger_ms160 = 6, /**< ASN.1 ms160 */
    TimeToTrigger_ms256 = 7, /**< ASN.1 ms256 */
    TimeToTrigger_ms320 = 8, /**< ASN.1 ms320 */
    TimeToTrigger_ms480 = 9, /**< ASN.1 ms480 */
    TimeToTrigger_ms512 = 10, /**< ASN.1 ms512 */
    TimeToTrigger_ms640 = 11, /**< ASN.1 ms640 */
    TimeToTrigger_ms1024 = 12, /**< ASN.1 ms1024 */
    TimeToTrigger_ms1280 = 13, /**< ASN.1 ms1280 */
    TimeToTrigger_ms2560 = 14, /**< ASN.1 ms2560 */
    TimeToTrigger_ms5120 = 15, /**< ASN.1 ms5120 */
} TimeToTrigger;


/**
 * @brief 枚举 FrequencyComponent_r17（ASN.1 FrequencyComponent-r17，源文件第 14057 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FrequencyComponent_r17 {
    FrequencyComponent_r17_activeCarrier = 0, /**< ASN.1 activeCarrier */
    FrequencyComponent_r17_configuredCarrier = 1, /**< ASN.1 configuredCarrier */
    FrequencyComponent_r17_activeBWP = 2, /**< ASN.1 activeBWP */
    FrequencyComponent_r17_configuredBWP = 3, /**< ASN.1 configuredBWP */
} FrequencyComponent_r17;


/**
 * @brief 枚举 AccessStratumRelease（ASN.1 AccessStratumRelease，源文件第 14114 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t AccessStratumRelease;
#define AccessStratumRelease_rel15 0 /**< ASN.1 rel15 */
#define AccessStratumRelease_rel16 1 /**< ASN.1 rel16 */
#define AccessStratumRelease_rel17 2 /**< ASN.1 rel17 */
#define AccessStratumRelease_rel18 3 /**< ASN.1 rel18 */
#define AccessStratumRelease_spare4 4 /**< ASN.1 spare4 */
#define AccessStratumRelease_spare3 5 /**< ASN.1 spare3 */
#define AccessStratumRelease_spare2 6 /**< ASN.1 spare2 */
#define AccessStratumRelease_spare1 7 /**< ASN.1 spare1 */


/**
 * @brief 枚举 ScalingFactorSidelink_r16（ASN.1 ScalingFactorSidelink-r16，源文件第 14613 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ScalingFactorSidelink_r16 {
    ScalingFactorSidelink_r16_f0p4 = 0, /**< ASN.1 f0p4 */
    ScalingFactorSidelink_r16_f0p75 = 1, /**< ASN.1 f0p75 */
    ScalingFactorSidelink_r16_f0p8 = 2, /**< ASN.1 f0p8 */
    ScalingFactorSidelink_r16_f1 = 3, /**< ASN.1 f1 */
} ScalingFactorSidelink_r16;


/**
 * @brief 枚举 IntraBandPowerClass_r16（ASN.1 IntraBandPowerClass-r16，源文件第 14615 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IntraBandPowerClass_r16 {
    IntraBandPowerClass_r16_pc2 = 0, /**< ASN.1 pc2 */
    IntraBandPowerClass_r16_pc3 = 1, /**< ASN.1 pc3 */
    IntraBandPowerClass_r16_spare6 = 2, /**< ASN.1 spare6 */
    IntraBandPowerClass_r16_spare5 = 3, /**< ASN.1 spare5 */
    IntraBandPowerClass_r16_spare4 = 4, /**< ASN.1 spare4 */
    IntraBandPowerClass_r16_spare3 = 5, /**< ASN.1 spare3 */
    IntraBandPowerClass_r16_spare2 = 6, /**< ASN.1 spare2 */
    IntraBandPowerClass_r16_spare1 = 7, /**< ASN.1 spare1 */
} IntraBandPowerClass_r16;


/**
 * @brief 枚举 CA_BandwidthClassEUTRA（ASN.1 CA-BandwidthClassEUTRA，源文件第 14717 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t CA_BandwidthClassEUTRA;
#define CA_BandwidthClassEUTRA_a 0 /**< ASN.1 a */
#define CA_BandwidthClassEUTRA_b 1 /**< ASN.1 b */
#define CA_BandwidthClassEUTRA_c 2 /**< ASN.1 c */
#define CA_BandwidthClassEUTRA_d 3 /**< ASN.1 d */
#define CA_BandwidthClassEUTRA_e 4 /**< ASN.1 e */
#define CA_BandwidthClassEUTRA_f 5 /**< ASN.1 f */


/**
 * @brief 枚举 CA_BandwidthClassNR（ASN.1 CA-BandwidthClassNR，源文件第 14725 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t CA_BandwidthClassNR;
#define CA_BandwidthClassNR_a 0 /**< ASN.1 a */
#define CA_BandwidthClassNR_b 1 /**< ASN.1 b */
#define CA_BandwidthClassNR_c 2 /**< ASN.1 c */
#define CA_BandwidthClassNR_d 3 /**< ASN.1 d */
#define CA_BandwidthClassNR_e 4 /**< ASN.1 e */
#define CA_BandwidthClassNR_f 5 /**< ASN.1 f */
#define CA_BandwidthClassNR_g 6 /**< ASN.1 g */
#define CA_BandwidthClassNR_h 7 /**< ASN.1 h */
#define CA_BandwidthClassNR_i 8 /**< ASN.1 i */
#define CA_BandwidthClassNR_j 9 /**< ASN.1 j */
#define CA_BandwidthClassNR_k 10 /**< ASN.1 k */
#define CA_BandwidthClassNR_l 11 /**< ASN.1 l */
#define CA_BandwidthClassNR_m 12 /**< ASN.1 m */
#define CA_BandwidthClassNR_n 13 /**< ASN.1 n */
#define CA_BandwidthClassNR_o 14 /**< ASN.1 o */
#define CA_BandwidthClassNR_p 15 /**< ASN.1 p */
#define CA_BandwidthClassNR_q 16 /**< ASN.1 q */
#define CA_BandwidthClassNR_r2_v1730 17 /**< ASN.1 r2-v1730（扩展添加项） */
#define CA_BandwidthClassNR_r3_v1730 18 /**< ASN.1 r3-v1730（扩展添加项） */
#define CA_BandwidthClassNR_r4_v1730 19 /**< ASN.1 r4-v1730（扩展添加项） */
#define CA_BandwidthClassNR_r5_v1730 20 /**< ASN.1 r5-v1730（扩展添加项） */
#define CA_BandwidthClassNR_r6_v1730 21 /**< ASN.1 r6-v1730（扩展添加项） */
#define CA_BandwidthClassNR_r7_v1730 22 /**< ASN.1 r7-v1730（扩展添加项） */
#define CA_BandwidthClassNR_r8_v1730 23 /**< ASN.1 r8-v1730（扩展添加项） */
#define CA_BandwidthClassNR_r9_v1730 24 /**< ASN.1 r9-v1730（扩展添加项） */
#define CA_BandwidthClassNR_r10_v1730 25 /**< ASN.1 r10-v1730（扩展添加项） */
#define CA_BandwidthClassNR_r11_v1730 26 /**< ASN.1 r11-v1730（扩展添加项） */
#define CA_BandwidthClassNR_r12_v1730 27 /**< ASN.1 r12-v1730（扩展添加项） */
#define CA_BandwidthClassNR_v_v1770 28 /**< ASN.1 v-v1770（扩展添加项） */
#define CA_BandwidthClassNR_w_v1770 29 /**< ASN.1 w-v1770（扩展添加项） */


/**
 * @brief 枚举 CA_BandwidthClassNR_r17（ASN.1 CA-BandwidthClassNR-r17，源文件第 14727 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t CA_BandwidthClassNR_r17;
#define CA_BandwidthClassNR_r17_r 0 /**< ASN.1 r */
#define CA_BandwidthClassNR_r17_s 1 /**< ASN.1 s */
#define CA_BandwidthClassNR_r17_t 2 /**< ASN.1 t */
#define CA_BandwidthClassNR_r17_u 3 /**< ASN.1 u */


/**
 * @brief 枚举 AggregatedBandwidth（ASN.1 AggregatedBandwidth，源文件第 17188 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AggregatedBandwidth {
    AggregatedBandwidth_mhz50 = 0, /**< ASN.1 mhz50 */
    AggregatedBandwidth_mhz100 = 1, /**< ASN.1 mhz100 */
    AggregatedBandwidth_mhz150 = 2, /**< ASN.1 mhz150 */
    AggregatedBandwidth_mhz200 = 3, /**< ASN.1 mhz200 */
    AggregatedBandwidth_mhz250 = 4, /**< ASN.1 mhz250 */
    AggregatedBandwidth_mhz300 = 5, /**< ASN.1 mhz300 */
    AggregatedBandwidth_mhz350 = 6, /**< ASN.1 mhz350 */
    AggregatedBandwidth_mhz400 = 7, /**< ASN.1 mhz400 */
    AggregatedBandwidth_mhz450 = 8, /**< ASN.1 mhz450 */
    AggregatedBandwidth_mhz500 = 9, /**< ASN.1 mhz500 */
    AggregatedBandwidth_mhz550 = 10, /**< ASN.1 mhz550 */
    AggregatedBandwidth_mhz600 = 11, /**< ASN.1 mhz600 */
    AggregatedBandwidth_mhz650 = 12, /**< ASN.1 mhz650 */
    AggregatedBandwidth_mhz700 = 13, /**< ASN.1 mhz700 */
    AggregatedBandwidth_mhz750 = 14, /**< ASN.1 mhz750 */
    AggregatedBandwidth_mhz800 = 15, /**< ASN.1 mhz800 */
} AggregatedBandwidth;


/**
 * @brief 枚举 FreqSeparationClass（ASN.1 FreqSeparationClass，源文件第 17194 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t FreqSeparationClass;
#define FreqSeparationClass_mhz800 0 /**< ASN.1 mhz800 */
#define FreqSeparationClass_mhz1200 1 /**< ASN.1 mhz1200 */
#define FreqSeparationClass_mhz1400 2 /**< ASN.1 mhz1400 */
#define FreqSeparationClass_mhz400_v1650 3 /**< ASN.1 mhz400-v1650（扩展添加项） */
#define FreqSeparationClass_mhz600_v1650 4 /**< ASN.1 mhz600-v1650（扩展添加项） */


/**
 * @brief 枚举 FreqSeparationClassDL_v1620（ASN.1 FreqSeparationClassDL-v1620，源文件第 17196 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FreqSeparationClassDL_v1620 {
    FreqSeparationClassDL_v1620_mhz1000 = 0, /**< ASN.1 mhz1000 */
    FreqSeparationClassDL_v1620_mhz1600 = 1, /**< ASN.1 mhz1600 */
    FreqSeparationClassDL_v1620_mhz1800 = 2, /**< ASN.1 mhz1800 */
    FreqSeparationClassDL_v1620_mhz2000 = 3, /**< ASN.1 mhz2000 */
    FreqSeparationClassDL_v1620_mhz2200 = 4, /**< ASN.1 mhz2200 */
    FreqSeparationClassDL_v1620_mhz2400 = 5, /**< ASN.1 mhz2400 */
} FreqSeparationClassDL_v1620;


/**
 * @brief 枚举 FreqSeparationClassUL_v1620（ASN.1 FreqSeparationClassUL-v1620，源文件第 17198 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FreqSeparationClassUL_v1620 {
    FreqSeparationClassUL_v1620_mhz1000 = 0, /**< ASN.1 mhz1000 */
} FreqSeparationClassUL_v1620;


/**
 * @brief 枚举 FreqSeparationClassDL_Only_r16（ASN.1 FreqSeparationClassDL-Only-r16，源文件第 17203 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FreqSeparationClassDL_Only_r16 {
    FreqSeparationClassDL_Only_r16_mhz200 = 0, /**< ASN.1 mhz200 */
    FreqSeparationClassDL_Only_r16_mhz400 = 1, /**< ASN.1 mhz400 */
    FreqSeparationClassDL_Only_r16_mhz600 = 2, /**< ASN.1 mhz600 */
    FreqSeparationClassDL_Only_r16_mhz800 = 3, /**< ASN.1 mhz800 */
    FreqSeparationClassDL_Only_r16_mhz1000 = 4, /**< ASN.1 mhz1000 */
    FreqSeparationClassDL_Only_r16_mhz1200 = 5, /**< ASN.1 mhz1200 */
} FreqSeparationClassDL_Only_r16;


/**
 * @brief 枚举 SupportedBandUTRA_FDD_r16（ASN.1 SupportedBandUTRA-FDD-r16，源文件第 17369 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SupportedBandUTRA_FDD_r16 {
    SupportedBandUTRA_FDD_r16_bandI = 0, /**< ASN.1 bandI */
    SupportedBandUTRA_FDD_r16_bandII = 1, /**< ASN.1 bandII */
    SupportedBandUTRA_FDD_r16_bandIII = 2, /**< ASN.1 bandIII */
    SupportedBandUTRA_FDD_r16_bandIV = 3, /**< ASN.1 bandIV */
    SupportedBandUTRA_FDD_r16_bandV = 4, /**< ASN.1 bandV */
    SupportedBandUTRA_FDD_r16_bandVI = 5, /**< ASN.1 bandVI */
    SupportedBandUTRA_FDD_r16_bandVII = 6, /**< ASN.1 bandVII */
    SupportedBandUTRA_FDD_r16_bandVIII = 7, /**< ASN.1 bandVIII */
    SupportedBandUTRA_FDD_r16_bandIX = 8, /**< ASN.1 bandIX */
    SupportedBandUTRA_FDD_r16_bandX = 9, /**< ASN.1 bandX */
    SupportedBandUTRA_FDD_r16_bandXI = 10, /**< ASN.1 bandXI */
    SupportedBandUTRA_FDD_r16_bandXII = 11, /**< ASN.1 bandXII */
    SupportedBandUTRA_FDD_r16_bandXIII = 12, /**< ASN.1 bandXIII */
    SupportedBandUTRA_FDD_r16_bandXIV = 13, /**< ASN.1 bandXIV */
    SupportedBandUTRA_FDD_r16_bandXV = 14, /**< ASN.1 bandXV */
    SupportedBandUTRA_FDD_r16_bandXVI = 15, /**< ASN.1 bandXVI */
    SupportedBandUTRA_FDD_r16_bandXVII = 16, /**< ASN.1 bandXVII */
    SupportedBandUTRA_FDD_r16_bandXVIII = 17, /**< ASN.1 bandXVIII */
    SupportedBandUTRA_FDD_r16_bandXIX = 18, /**< ASN.1 bandXIX */
    SupportedBandUTRA_FDD_r16_bandXX = 19, /**< ASN.1 bandXX */
    SupportedBandUTRA_FDD_r16_bandXXI = 20, /**< ASN.1 bandXXI */
    SupportedBandUTRA_FDD_r16_bandXXII = 21, /**< ASN.1 bandXXII */
    SupportedBandUTRA_FDD_r16_bandXXIII = 22, /**< ASN.1 bandXXIII */
    SupportedBandUTRA_FDD_r16_bandXXIV = 23, /**< ASN.1 bandXXIV */
    SupportedBandUTRA_FDD_r16_bandXXV = 24, /**< ASN.1 bandXXV */
    SupportedBandUTRA_FDD_r16_bandXXVI = 25, /**< ASN.1 bandXXVI */
    SupportedBandUTRA_FDD_r16_bandXXVII = 26, /**< ASN.1 bandXXVII */
    SupportedBandUTRA_FDD_r16_bandXXVIII = 27, /**< ASN.1 bandXXVIII */
    SupportedBandUTRA_FDD_r16_bandXXIX = 28, /**< ASN.1 bandXXIX */
    SupportedBandUTRA_FDD_r16_bandXXX = 29, /**< ASN.1 bandXXX */
    SupportedBandUTRA_FDD_r16_bandXXXI = 30, /**< ASN.1 bandXXXI */
    SupportedBandUTRA_FDD_r16_bandXXXII = 31, /**< ASN.1 bandXXXII */
} SupportedBandUTRA_FDD_r16;


/**
 * @brief 枚举 MIMO_LayersDL（ASN.1 MIMO-LayersDL，源文件第 17822 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_LayersDL {
    MIMO_LayersDL_twoLayers = 0, /**< ASN.1 twoLayers */
    MIMO_LayersDL_fourLayers = 1, /**< ASN.1 fourLayers */
    MIMO_LayersDL_eightLayers = 2, /**< ASN.1 eightLayers */
} MIMO_LayersDL;


/**
 * @brief 枚举 MIMO_LayersUL（ASN.1 MIMO-LayersUL，源文件第 17824 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMO_LayersUL {
    MIMO_LayersUL_oneLayer = 0, /**< ASN.1 oneLayer */
    MIMO_LayersUL_twoLayers = 1, /**< ASN.1 twoLayers */
    MIMO_LayersUL_fourLayers = 2, /**< ASN.1 fourLayers */
} MIMO_LayersUL;


/**
 * @brief 枚举 ModulationOrder（ASN.1 ModulationOrder，源文件第 18522 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ModulationOrder {
    ModulationOrder_bpsk_halfpi = 0, /**< ASN.1 bpsk-halfpi */
    ModulationOrder_bpsk = 1, /**< ASN.1 bpsk */
    ModulationOrder_qpsk = 2, /**< ASN.1 qpsk */
    ModulationOrder_qam16 = 3, /**< ASN.1 qam16 */
    ModulationOrder_qam64 = 4, /**< ASN.1 qam64 */
    ModulationOrder_qam256 = 5, /**< ASN.1 qam256 */
} ModulationOrder;


/**
 * @brief 枚举 RAT_Type（ASN.1 RAT-Type，源文件第 19395 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t RAT_Type;
#define RAT_Type_nr 0 /**< ASN.1 nr */
#define RAT_Type_eutra_nr 1 /**< ASN.1 eutra-nr */
#define RAT_Type_eutra 2 /**< ASN.1 eutra */
#define RAT_Type_utra_fdd_v1610 3 /**< ASN.1 utra-fdd-v1610 */


/**
 * @brief 枚举 EUTRA_AllowedMeasBandwidth（ASN.1 EUTRA-AllowedMeasBandwidth，源文件第 21412 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EUTRA_AllowedMeasBandwidth {
    EUTRA_AllowedMeasBandwidth_mbw6 = 0, /**< ASN.1 mbw6 */
    EUTRA_AllowedMeasBandwidth_mbw15 = 1, /**< ASN.1 mbw15 */
    EUTRA_AllowedMeasBandwidth_mbw25 = 2, /**< ASN.1 mbw25 */
    EUTRA_AllowedMeasBandwidth_mbw50 = 3, /**< ASN.1 mbw50 */
    EUTRA_AllowedMeasBandwidth_mbw75 = 4, /**< ASN.1 mbw75 */
    EUTRA_AllowedMeasBandwidth_mbw100 = 5, /**< ASN.1 mbw100 */
} EUTRA_AllowedMeasBandwidth;


/**
 * @brief 枚举 EUTRA_Q_OffsetRange（ASN.1 EUTRA-Q-OffsetRange，源文件第 21485 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EUTRA_Q_OffsetRange {
    EUTRA_Q_OffsetRange_dB_24 = 0, /**< ASN.1 dB-24 */
    EUTRA_Q_OffsetRange_dB_22 = 1, /**< ASN.1 dB-22 */
    EUTRA_Q_OffsetRange_dB_20 = 2, /**< ASN.1 dB-20 */
    EUTRA_Q_OffsetRange_dB_18 = 3, /**< ASN.1 dB-18 */
    EUTRA_Q_OffsetRange_dB_16 = 4, /**< ASN.1 dB-16 */
    EUTRA_Q_OffsetRange_dB_14 = 5, /**< ASN.1 dB-14 */
    EUTRA_Q_OffsetRange_dB_12 = 6, /**< ASN.1 dB-12 */
    EUTRA_Q_OffsetRange_dB_10 = 7, /**< ASN.1 dB-10 */
    EUTRA_Q_OffsetRange_dB_8 = 8, /**< ASN.1 dB-8 */
    EUTRA_Q_OffsetRange_dB_6 = 9, /**< ASN.1 dB-6 */
    EUTRA_Q_OffsetRange_dB_5 = 10, /**< ASN.1 dB-5 */
    EUTRA_Q_OffsetRange_dB_4 = 11, /**< ASN.1 dB-4 */
    EUTRA_Q_OffsetRange_dB_3 = 12, /**< ASN.1 dB-3 */
    EUTRA_Q_OffsetRange_dB_2 = 13, /**< ASN.1 dB-2 */
    EUTRA_Q_OffsetRange_dB_1 = 14, /**< ASN.1 dB-1 */
    EUTRA_Q_OffsetRange_dB0 = 15, /**< ASN.1 dB0 */
    EUTRA_Q_OffsetRange_dB1 = 16, /**< ASN.1 dB1 */
    EUTRA_Q_OffsetRange_dB2 = 17, /**< ASN.1 dB2 */
    EUTRA_Q_OffsetRange_dB3 = 18, /**< ASN.1 dB3 */
    EUTRA_Q_OffsetRange_dB4 = 19, /**< ASN.1 dB4 */
    EUTRA_Q_OffsetRange_dB5 = 20, /**< ASN.1 dB5 */
    EUTRA_Q_OffsetRange_dB6 = 21, /**< ASN.1 dB6 */
    EUTRA_Q_OffsetRange_dB8 = 22, /**< ASN.1 dB8 */
    EUTRA_Q_OffsetRange_dB10 = 23, /**< ASN.1 dB10 */
    EUTRA_Q_OffsetRange_dB12 = 24, /**< ASN.1 dB12 */
    EUTRA_Q_OffsetRange_dB14 = 25, /**< ASN.1 dB14 */
    EUTRA_Q_OffsetRange_dB16 = 26, /**< ASN.1 dB16 */
    EUTRA_Q_OffsetRange_dB18 = 27, /**< ASN.1 dB18 */
    EUTRA_Q_OffsetRange_dB20 = 28, /**< ASN.1 dB20 */
    EUTRA_Q_OffsetRange_dB22 = 29, /**< ASN.1 dB22 */
    EUTRA_Q_OffsetRange_dB24 = 30, /**< ASN.1 dB24 */
} EUTRA_Q_OffsetRange;


/**
 * @brief 枚举 IAB_IP_Usage_r16（ASN.1 IAB-IP-Usage-r16，源文件第 21510 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IAB_IP_Usage_r16 {
    IAB_IP_Usage_r16_f1_C = 0, /**< ASN.1 f1-C */
    IAB_IP_Usage_r16_f1_U = 1, /**< ASN.1 f1-U */
    IAB_IP_Usage_r16_non_F1 = 2, /**< ASN.1 non-F1 */
    IAB_IP_Usage_r16_spare = 3, /**< ASN.1 spare */
} IAB_IP_Usage_r16;


/**
 * @brief 枚举 LoggingDuration_r16（ASN.1 LoggingDuration-r16，源文件第 21515 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LoggingDuration_r16 {
    LoggingDuration_r16_min10 = 0, /**< ASN.1 min10 */
    LoggingDuration_r16_min20 = 1, /**< ASN.1 min20 */
    LoggingDuration_r16_min40 = 2, /**< ASN.1 min40 */
    LoggingDuration_r16_min60 = 3, /**< ASN.1 min60 */
    LoggingDuration_r16_min90 = 4, /**< ASN.1 min90 */
    LoggingDuration_r16_min120 = 5, /**< ASN.1 min120 */
    LoggingDuration_r16_spare2 = 6, /**< ASN.1 spare2 */
    LoggingDuration_r16_spare1 = 7, /**< ASN.1 spare1 */
} LoggingDuration_r16;


/**
 * @brief 枚举 LoggingInterval_r16（ASN.1 LoggingInterval-r16，源文件第 21521 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LoggingInterval_r16 {
    LoggingInterval_r16_ms320 = 0, /**< ASN.1 ms320 */
    LoggingInterval_r16_ms640 = 1, /**< ASN.1 ms640 */
    LoggingInterval_r16_ms1280 = 2, /**< ASN.1 ms1280 */
    LoggingInterval_r16_ms2560 = 3, /**< ASN.1 ms2560 */
    LoggingInterval_r16_ms5120 = 4, /**< ASN.1 ms5120 */
    LoggingInterval_r16_ms10240 = 5, /**< ASN.1 ms10240 */
    LoggingInterval_r16_ms20480 = 6, /**< ASN.1 ms20480 */
    LoggingInterval_r16_ms30720 = 7, /**< ASN.1 ms30720 */
    LoggingInterval_r16_ms40960 = 8, /**< ASN.1 ms40960 */
    LoggingInterval_r16_ms61440 = 9, /**< ASN.1 ms61440 */
    LoggingInterval_r16_infinity = 10, /**< ASN.1 infinity */
} LoggingInterval_r16;


/**
 * @brief 枚举 UTRA_FDD_Q_OffsetRange_r16（ASN.1 UTRA-FDD-Q-OffsetRange-r16，源文件第 21837 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UTRA_FDD_Q_OffsetRange_r16 {
    UTRA_FDD_Q_OffsetRange_r16_dB_24 = 0, /**< ASN.1 dB-24 */
    UTRA_FDD_Q_OffsetRange_r16_dB_22 = 1, /**< ASN.1 dB-22 */
    UTRA_FDD_Q_OffsetRange_r16_dB_20 = 2, /**< ASN.1 dB-20 */
    UTRA_FDD_Q_OffsetRange_r16_dB_18 = 3, /**< ASN.1 dB-18 */
    UTRA_FDD_Q_OffsetRange_r16_dB_16 = 4, /**< ASN.1 dB-16 */
    UTRA_FDD_Q_OffsetRange_r16_dB_14 = 5, /**< ASN.1 dB-14 */
    UTRA_FDD_Q_OffsetRange_r16_dB_12 = 6, /**< ASN.1 dB-12 */
    UTRA_FDD_Q_OffsetRange_r16_dB_10 = 7, /**< ASN.1 dB-10 */
    UTRA_FDD_Q_OffsetRange_r16_dB_8 = 8, /**< ASN.1 dB-8 */
    UTRA_FDD_Q_OffsetRange_r16_dB_6 = 9, /**< ASN.1 dB-6 */
    UTRA_FDD_Q_OffsetRange_r16_dB_5 = 10, /**< ASN.1 dB-5 */
    UTRA_FDD_Q_OffsetRange_r16_dB_4 = 11, /**< ASN.1 dB-4 */
    UTRA_FDD_Q_OffsetRange_r16_dB_3 = 12, /**< ASN.1 dB-3 */
    UTRA_FDD_Q_OffsetRange_r16_dB_2 = 13, /**< ASN.1 dB-2 */
    UTRA_FDD_Q_OffsetRange_r16_dB_1 = 14, /**< ASN.1 dB-1 */
    UTRA_FDD_Q_OffsetRange_r16_dB0 = 15, /**< ASN.1 dB0 */
    UTRA_FDD_Q_OffsetRange_r16_dB1 = 16, /**< ASN.1 dB1 */
    UTRA_FDD_Q_OffsetRange_r16_dB2 = 17, /**< ASN.1 dB2 */
    UTRA_FDD_Q_OffsetRange_r16_dB3 = 18, /**< ASN.1 dB3 */
    UTRA_FDD_Q_OffsetRange_r16_dB4 = 19, /**< ASN.1 dB4 */
    UTRA_FDD_Q_OffsetRange_r16_dB5 = 20, /**< ASN.1 dB5 */
    UTRA_FDD_Q_OffsetRange_r16_dB6 = 21, /**< ASN.1 dB6 */
    UTRA_FDD_Q_OffsetRange_r16_dB8 = 22, /**< ASN.1 dB8 */
    UTRA_FDD_Q_OffsetRange_r16_dB10 = 23, /**< ASN.1 dB10 */
    UTRA_FDD_Q_OffsetRange_r16_dB12 = 24, /**< ASN.1 dB12 */
    UTRA_FDD_Q_OffsetRange_r16_dB14 = 25, /**< ASN.1 dB14 */
    UTRA_FDD_Q_OffsetRange_r16_dB16 = 26, /**< ASN.1 dB16 */
    UTRA_FDD_Q_OffsetRange_r16_dB18 = 27, /**< ASN.1 dB18 */
    UTRA_FDD_Q_OffsetRange_r16_dB20 = 28, /**< ASN.1 dB20 */
    UTRA_FDD_Q_OffsetRange_r16_dB22 = 29, /**< ASN.1 dB22 */
    UTRA_FDD_Q_OffsetRange_r16_dB24 = 30, /**< ASN.1 dB24 */
} UTRA_FDD_Q_OffsetRange_r16;


/**
 * @brief 枚举 SL_RelayIndicationMP_r18（ASN.1 SL-RelayIndicationMP-r18，源文件第 22874 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_RelayIndicationMP_r18 {
    SL_RelayIndicationMP_r18_support = 0, /**< ASN.1 support */
} SL_RelayIndicationMP_r18;


/**
 * @brief 枚举 SL_RS_Type_r16（ASN.1 SL-RS-Type-r16，源文件第 22987 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_RS_Type_r16 {
    SL_RS_Type_r16_dmrs = 0, /**< ASN.1 dmrs */
    SL_RS_Type_r16_sl_prs = 1, /**< ASN.1 sl-prs */
    SL_RS_Type_r16_spare2 = 2, /**< ASN.1 spare2 */
    SL_RS_Type_r16_spare1 = 3, /**< ASN.1 spare1 */
} SL_RS_Type_r16;


/**
 * @brief 枚举 SL_TypeTxSync_r16（ASN.1 SL-TypeTxSync-r16，源文件第 23397 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TypeTxSync_r16 {
    SL_TypeTxSync_r16_gnss = 0, /**< ASN.1 gnss */
    SL_TypeTxSync_r16_gnbEnb = 1, /**< ASN.1 gnbEnb */
    SL_TypeTxSync_r16_ue = 2, /**< ASN.1 ue */
} SL_TypeTxSync_r16;


/**
 * @brief 枚举 PosSIB_ReqInfo_r16_PosSibType_r16（ASN.1 posSibType-r16，源文件第 288 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t PosSIB_ReqInfo_r16_PosSibType_r16;
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_1 0 /**< ASN.1 posSibType1-1 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_2 1 /**< ASN.1 posSibType1-2 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_3 2 /**< ASN.1 posSibType1-3 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_4 3 /**< ASN.1 posSibType1-4 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_5 4 /**< ASN.1 posSibType1-5 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_6 5 /**< ASN.1 posSibType1-6 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_7 6 /**< ASN.1 posSibType1-7 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_8 7 /**< ASN.1 posSibType1-8 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_1 8 /**< ASN.1 posSibType2-1 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_2 9 /**< ASN.1 posSibType2-2 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_3 10 /**< ASN.1 posSibType2-3 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_4 11 /**< ASN.1 posSibType2-4 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_5 12 /**< ASN.1 posSibType2-5 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_6 13 /**< ASN.1 posSibType2-6 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_7 14 /**< ASN.1 posSibType2-7 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_8 15 /**< ASN.1 posSibType2-8 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_9 16 /**< ASN.1 posSibType2-9 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_10 17 /**< ASN.1 posSibType2-10 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_11 18 /**< ASN.1 posSibType2-11 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_12 19 /**< ASN.1 posSibType2-12 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_13 20 /**< ASN.1 posSibType2-13 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_14 21 /**< ASN.1 posSibType2-14 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_15 22 /**< ASN.1 posSibType2-15 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_16 23 /**< ASN.1 posSibType2-16 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_17 24 /**< ASN.1 posSibType2-17 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_18 25 /**< ASN.1 posSibType2-18 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_19 26 /**< ASN.1 posSibType2-19 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_20 27 /**< ASN.1 posSibType2-20 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_21 28 /**< ASN.1 posSibType2-21 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_22 29 /**< ASN.1 posSibType2-22 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_23 30 /**< ASN.1 posSibType2-23 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType3_1 31 /**< ASN.1 posSibType3-1 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType4_1 32 /**< ASN.1 posSibType4-1 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType5_1 33 /**< ASN.1 posSibType5-1 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType6_1 34 /**< ASN.1 posSibType6-1 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType6_2 35 /**< ASN.1 posSibType6-2 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType6_3 36 /**< ASN.1 posSibType6-3 */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_9_v1710 37 /**< ASN.1 posSibType1-9-v1710（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_10_v1710 38 /**< ASN.1 posSibType1-10-v1710（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_24_v1710 39 /**< ASN.1 posSibType2-24-v1710（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_25_v1710 40 /**< ASN.1 posSibType2-25-v1710（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType6_4_v1710 41 /**< ASN.1 posSibType6-4-v1710（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType6_5_v1710 42 /**< ASN.1 posSibType6-5-v1710（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType6_6_v1710 43 /**< ASN.1 posSibType6-6-v1710（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_17a_v1770 44 /**< ASN.1 posSibType2-17a-v1770（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_18a_v1770 45 /**< ASN.1 posSibType2-18a-v1770（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_20a_v1770 46 /**< ASN.1 posSibType2-20a-v1770（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_11_v1800 47 /**< ASN.1 posSibType1-11-v1800（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType1_12_v1800 48 /**< ASN.1 posSibType1-12-v1800（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_26_v1800 49 /**< ASN.1 posSibType2-26-v1800（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType2_27_v1800 50 /**< ASN.1 posSibType2-27-v1800（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType6_7_v1800 51 /**< ASN.1 posSibType6-7-v1800（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType7_1_v1800 52 /**< ASN.1 posSibType7-1-v1800（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType7_2_v1800 53 /**< ASN.1 posSibType7-2-v1800（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType7_3_v1800 54 /**< ASN.1 posSibType7-3-v1800（扩展添加项） */
#define PosSIB_ReqInfo_r16_PosSibType_r16_posSibType7_4_v1800 55 /**< ASN.1 posSibType7-4-v1800（扩展添加项） */


/**
 * @brief 枚举 DLDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16（ASN.1 rrc-MessageSegmentType-r16，源文件第 316 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DLDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16 {
    DLDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16_notLastSegment = 0, /**< ASN.1 notLastSegment */
    DLDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16_lastSegment = 1, /**< ASN.1 lastSegment */
} DLDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16;


/**
 * @brief 枚举 DLInformationTransfer_v1700_IEs_Ta_PDC_r17（ASN.1 ta-PDC-r17，源文件第 346 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DLInformationTransfer_v1700_IEs_Ta_PDC_r17 {
    DLInformationTransfer_v1700_IEs_Ta_PDC_r17_activate = 0, /**< ASN.1 activate */
    DLInformationTransfer_v1700_IEs_Ta_PDC_r17_deactivate = 1, /**< ASN.1 deactivate */
} DLInformationTransfer_v1700_IEs_Ta_PDC_r17;


/**
 * @brief 枚举 DLInformationTransfer_v1700_IEs_Sib9Fallback_r17（ASN.1 sib9Fallback-r17，源文件第 347 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DLInformationTransfer_v1700_IEs_Sib9Fallback_r17 {
    DLInformationTransfer_v1700_IEs_Sib9Fallback_r17_trueVal = 0, /**< ASN.1 trueVal */
} DLInformationTransfer_v1700_IEs_Sib9Fallback_r17;


/**
 * @brief 枚举 DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_ClockQualityAcceptanceStatus_r18（ASN.1 clockQualityDetailsLevel-r18/clockQualityAcceptanceStatus-r18，源文件第 355 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_ClockQualityAcceptanceStatus_r18 {
    DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_ClockQualityAcceptanceStatus_r18_acceptable = 0, /**< ASN.1 acceptable */
    DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_ClockQualityAcceptanceStatus_r18_notAcceptable = 1, /**< ASN.1 notAcceptable */
} DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_ClockQualityAcceptanceStatus_r18;


/**
 * @brief 枚举 FailureInfoRLC_Bearer_FailureType（ASN.1 failureType，源文件第 400 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FailureInfoRLC_Bearer_FailureType {
    FailureInfoRLC_Bearer_FailureType_rlc_failure = 0, /**< ASN.1 rlc-failure */
    FailureInfoRLC_Bearer_FailureType_spare3 = 1, /**< ASN.1 spare3 */
    FailureInfoRLC_Bearer_FailureType_spare2 = 2, /**< ASN.1 spare2 */
    FailureInfoRLC_Bearer_FailureType_spare1 = 3, /**< ASN.1 spare1 */
} FailureInfoRLC_Bearer_FailureType;


/**
 * @brief 枚举 FailureInfoDAPS_r16_FailureType_r16（ASN.1 failureType-r16，源文件第 409 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FailureInfoDAPS_r16_FailureType_r16 {
    FailureInfoDAPS_r16_FailureType_r16_daps_failure = 0, /**< ASN.1 daps-failure */
    FailureInfoDAPS_r16_FailureType_r16_spare3 = 1, /**< ASN.1 spare3 */
    FailureInfoDAPS_r16_FailureType_r16_spare2 = 2, /**< ASN.1 spare2 */
    FailureInfoDAPS_r16_FailureType_r16_spare1 = 3, /**< ASN.1 spare1 */
} FailureInfoDAPS_r16_FailureType_r16;


/**
 * @brief 枚举 IAB_IP_AddressPrefixReq_r16_All_Traffic_PrefixReq_r16（ASN.1 all-Traffic-PrefixReq-r16，源文件第 456 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IAB_IP_AddressPrefixReq_r16_All_Traffic_PrefixReq_r16 {
    IAB_IP_AddressPrefixReq_r16_All_Traffic_PrefixReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} IAB_IP_AddressPrefixReq_r16_All_Traffic_PrefixReq_r16;


/**
 * @brief 枚举 IAB_IP_AddressPrefixReq_r16_F1_C_Traffic_PrefixReq_r16（ASN.1 f1-C-Traffic-PrefixReq-r16，源文件第 457 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IAB_IP_AddressPrefixReq_r16_F1_C_Traffic_PrefixReq_r16 {
    IAB_IP_AddressPrefixReq_r16_F1_C_Traffic_PrefixReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} IAB_IP_AddressPrefixReq_r16_F1_C_Traffic_PrefixReq_r16;


/**
 * @brief 枚举 IAB_IP_AddressPrefixReq_r16_F1_U_Traffic_PrefixReq_r16（ASN.1 f1-U-Traffic-PrefixReq-r16，源文件第 458 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IAB_IP_AddressPrefixReq_r16_F1_U_Traffic_PrefixReq_r16 {
    IAB_IP_AddressPrefixReq_r16_F1_U_Traffic_PrefixReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} IAB_IP_AddressPrefixReq_r16_F1_U_Traffic_PrefixReq_r16;


/**
 * @brief 枚举 IAB_IP_AddressPrefixReq_r16_Non_F1_Traffic_PrefixReq_r16（ASN.1 non-F1-Traffic-PrefixReq-r16，源文件第 459 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IAB_IP_AddressPrefixReq_r16_Non_F1_Traffic_PrefixReq_r16 {
    IAB_IP_AddressPrefixReq_r16_Non_F1_Traffic_PrefixReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} IAB_IP_AddressPrefixReq_r16_Non_F1_Traffic_PrefixReq_r16;


/**
 * @brief 枚举 FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18（ASN.1 failureTypeIndirectPath-r18，源文件第 494 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18 {
    FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18_t421_Expiry = 0, /**< ASN.1 t421-Expiry */
    FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18_sl_Failure = 1, /**< ASN.1 sl-Failure */
    FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18_n3c_Failure = 2, /**< ASN.1 n3c-Failure */
    FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18_relayUE_Uu_RLF = 3, /**< ASN.1 relayUE-Uu-RLF */
    FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18_relayUE_CellReselection = 4, /**< ASN.1 relayUE-CellReselection */
    FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18_relayUE_Uu_RRC_Failure = 5, /**< ASN.1 relayUE-Uu-RRC-Failure */
    FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18_indirectPathAddChangeFailure = 6, /**< ASN.1 indirectPathAddChangeFailure */
    FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18_spare1 = 7, /**< ASN.1 spare1 */
} FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18;


/**
 * @brief 枚举 LoggedMeasurementConfiguration_v1700_IEs_SigLoggedMeasType_r17（ASN.1 sigLoggedMeasType-r17，源文件第 551 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LoggedMeasurementConfiguration_v1700_IEs_SigLoggedMeasType_r17 {
    LoggedMeasurementConfiguration_v1700_IEs_SigLoggedMeasType_r17_trueVal = 0, /**< ASN.1 trueVal */
} LoggedMeasurementConfiguration_v1700_IEs_SigLoggedMeasType_r17;


/**
 * @brief 枚举 LoggedMeasurementConfiguration_v1700_IEs_EarlyMeasIndication_r17（ASN.1 earlyMeasIndication-r17，源文件第 552 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LoggedMeasurementConfiguration_v1700_IEs_EarlyMeasIndication_r17 {
    LoggedMeasurementConfiguration_v1700_IEs_EarlyMeasIndication_r17_trueVal = 0, /**< ASN.1 trueVal */
} LoggedMeasurementConfiguration_v1700_IEs_EarlyMeasIndication_r17;


/**
 * @brief 枚举 MBSInterestIndication_r17_IEs_Mbs_Priority_r17（ASN.1 mbs-Priority-r17，源文件第 615 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MBSInterestIndication_r17_IEs_Mbs_Priority_r17 {
    MBSInterestIndication_r17_IEs_Mbs_Priority_r17_trueVal = 0, /**< ASN.1 trueVal */
} MBSInterestIndication_r17_IEs_Mbs_Priority_r17;


/**
 * @brief 枚举 FailureReportMCG_r16_FailureType_r16（ASN.1 failureType-r16，源文件第 669 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FailureReportMCG_r16_FailureType_r16 {
    FailureReportMCG_r16_FailureType_r16_t310_Expiry = 0, /**< ASN.1 t310-Expiry */
    FailureReportMCG_r16_FailureType_r16_randomAccessProblem = 1, /**< ASN.1 randomAccessProblem */
    FailureReportMCG_r16_FailureType_r16_rlc_MaxNumRetx = 2, /**< ASN.1 rlc-MaxNumRetx */
    FailureReportMCG_r16_FailureType_r16_t312_Expiry_r16 = 3, /**< ASN.1 t312-Expiry-r16 */
    FailureReportMCG_r16_FailureType_r16_lbt_Failure_r16 = 4, /**< ASN.1 lbt-Failure-r16 */
    FailureReportMCG_r16_FailureType_r16_beamFailureRecoveryFailure_r16 = 5, /**< ASN.1 beamFailureRecoveryFailure-r16 */
    FailureReportMCG_r16_FailureType_r16_bh_RLF_r16 = 6, /**< ASN.1 bh-RLF-r16 */
    FailureReportMCG_r16_FailureType_r16_spare1 = 7, /**< ASN.1 spare1 */
} FailureReportMCG_r16_FailureType_r16;


/**
 * @brief 枚举 MeasReportAppLayer_r17_AppLayerSessionStatus_r17（ASN.1 appLayerSessionStatus-r17，源文件第 734 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MeasReportAppLayer_r17_AppLayerSessionStatus_r17 {
    MeasReportAppLayer_r17_AppLayerSessionStatus_r17_start = 0, /**< ASN.1 start */
    MeasReportAppLayer_r17_AppLayerSessionStatus_r17_stop = 1, /**< ASN.1 stop */
} MeasReportAppLayer_r17_AppLayerSessionStatus_r17;


/**
 * @brief 枚举 MIB_SubCarrierSpacingCommon（ASN.1 subCarrierSpacingCommon，源文件第 763 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIB_SubCarrierSpacingCommon {
    MIB_SubCarrierSpacingCommon_scs15or60 = 0, /**< ASN.1 scs15or60 */
    MIB_SubCarrierSpacingCommon_scs30or120 = 1, /**< ASN.1 scs30or120 */
} MIB_SubCarrierSpacingCommon;


/**
 * @brief 枚举 MIB_Dmrs_TypeA_Position（ASN.1 dmrs-TypeA-Position，源文件第 765 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIB_Dmrs_TypeA_Position {
    MIB_Dmrs_TypeA_Position_pos2 = 0, /**< ASN.1 pos2 */
    MIB_Dmrs_TypeA_Position_pos3 = 1, /**< ASN.1 pos3 */
} MIB_Dmrs_TypeA_Position;


/**
 * @brief 枚举 MIB_CellBarred（ASN.1 cellBarred，源文件第 767 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIB_CellBarred {
    MIB_CellBarred_barred = 0, /**< ASN.1 barred */
    MIB_CellBarred_notBarred = 1, /**< ASN.1 notBarred */
} MIB_CellBarred;


/**
 * @brief 枚举 MIB_IntraFreqReselection（ASN.1 intraFreqReselection，源文件第 768 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIB_IntraFreqReselection {
    MIB_IntraFreqReselection_allowed = 0, /**< ASN.1 allowed */
    MIB_IntraFreqReselection_notAllowed = 1, /**< ASN.1 notAllowed */
} MIB_IntraFreqReselection;


/**
 * @brief 枚举 MobilityFromNRCommand_IEs_TargetRAT_Type（ASN.1 targetRAT-Type，源文件第 784 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t MobilityFromNRCommand_IEs_TargetRAT_Type;
#define MobilityFromNRCommand_IEs_TargetRAT_Type_eutra 0 /**< ASN.1 eutra */
#define MobilityFromNRCommand_IEs_TargetRAT_Type_utra_fdd_v1610 1 /**< ASN.1 utra-fdd-v1610 */
#define MobilityFromNRCommand_IEs_TargetRAT_Type_spare2 2 /**< ASN.1 spare2 */
#define MobilityFromNRCommand_IEs_TargetRAT_Type_spare1 3 /**< ASN.1 spare1 */


/**
 * @brief 枚举 MobilityFromNRCommand_v1610_IEs_VoiceFallbackIndication_r16（ASN.1 voiceFallbackIndication-r16，源文件第 792 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MobilityFromNRCommand_v1610_IEs_VoiceFallbackIndication_r16 {
    MobilityFromNRCommand_v1610_IEs_VoiceFallbackIndication_r16_trueVal = 0, /**< ASN.1 trueVal */
} MobilityFromNRCommand_v1610_IEs_VoiceFallbackIndication_r16;


/**
 * @brief 枚举 PagingRecord_AccessType（ASN.1 accessType，源文件第 834 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PagingRecord_AccessType {
    PagingRecord_AccessType_non3GPP = 0, /**< ASN.1 non3GPP */
} PagingRecord_AccessType;


/**
 * @brief 枚举 PagingRecord_v1700_PagingCause_r17（ASN.1 pagingCause-r17，源文件第 839 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PagingRecord_v1700_PagingCause_r17 {
    PagingRecord_v1700_PagingCause_r17_voice = 0, /**< ASN.1 voice */
} PagingRecord_v1700_PagingCause_r17;


/**
 * @brief 枚举 PagingRecord_v1800_Mt_SDT（ASN.1 mt-SDT，源文件第 843 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PagingRecord_v1800_Mt_SDT {
    PagingRecord_v1800_Mt_SDT_trueVal = 0, /**< ASN.1 trueVal */
} PagingRecord_v1800_Mt_SDT;


/**
 * @brief 枚举 GroupPaging_r18_InactiveReceptionAllowed_r18（ASN.1 inactiveReceptionAllowed-r18，源文件第 853 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GroupPaging_r18_InactiveReceptionAllowed_r18 {
    GroupPaging_r18_InactiveReceptionAllowed_r18_trueVal = 0, /**< ASN.1 trueVal */
} GroupPaging_r18_InactiveReceptionAllowed_r18;


/**
 * @brief 枚举 RRCReestablishmentComplete_v1800_IEs_FlightPathInfoAvailable_r18（ASN.1 flightPathInfoAvailable-r18，源文件第 900 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCReestablishmentComplete_v1800_IEs_FlightPathInfoAvailable_r18 {
    RRCReestablishmentComplete_v1800_IEs_FlightPathInfoAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCReestablishmentComplete_v1800_IEs_FlightPathInfoAvailable_r18;


/**
 * @brief 枚举 RRCReestablishmentComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18（ASN.1 measConfigReportAppLayerAvailable-r18，源文件第 901 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCReestablishmentComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18 {
    RRCReestablishmentComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCReestablishmentComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18;


/**
 * @brief 枚举 RRCReconfiguration_v1530_IEs_FullConfig（ASN.1 fullConfig，源文件第 948 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCReconfiguration_v1530_IEs_FullConfig {
    RRCReconfiguration_v1530_IEs_FullConfig_trueVal = 0, /**< ASN.1 trueVal */
} RRCReconfiguration_v1530_IEs_FullConfig;


/**
 * @brief 枚举 RRCReconfiguration_v1610_IEs_Daps_SourceRelease_r16（ASN.1 daps-SourceRelease-r16，源文件第 973 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCReconfiguration_v1610_IEs_Daps_SourceRelease_r16 {
    RRCReconfiguration_v1610_IEs_Daps_SourceRelease_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCReconfiguration_v1610_IEs_Daps_SourceRelease_r16;


/**
 * @brief 枚举 RRCReconfiguration_v1700_IEs_Scg_State_r17（ASN.1 scg-State-r17，源文件第 993 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCReconfiguration_v1700_IEs_Scg_State_r17 {
    RRCReconfiguration_v1700_IEs_Scg_State_r17_deactivated = 0, /**< ASN.1 deactivated */
} RRCReconfiguration_v1700_IEs_Scg_State_r17;


/**
 * @brief 枚举 RRCReconfiguration_v1800_IEs_NeedForInterruptionConfigNR_r18（ASN.1 needForInterruptionConfigNR-r18，源文件第 1000 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCReconfiguration_v1800_IEs_NeedForInterruptionConfigNR_r18 {
    RRCReconfiguration_v1800_IEs_NeedForInterruptionConfigNR_r18_disabled = 0, /**< ASN.1 disabled */
    RRCReconfiguration_v1800_IEs_NeedForInterruptionConfigNR_r18_enabled = 1, /**< ASN.1 enabled */
} RRCReconfiguration_v1800_IEs_NeedForInterruptionConfigNR_r18;


/**
 * @brief 枚举 MRDC_SecondaryCellGroupConfig_Mrdc_ReleaseAndAdd（ASN.1 mrdc-ReleaseAndAdd，源文件第 1012 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_SecondaryCellGroupConfig_Mrdc_ReleaseAndAdd {
    MRDC_SecondaryCellGroupConfig_Mrdc_ReleaseAndAdd_trueVal = 0, /**< ASN.1 trueVal */
} MRDC_SecondaryCellGroupConfig_Mrdc_ReleaseAndAdd;


/**
 * @brief 枚举 BAP_Config_r16_FlowControlFeedbackType_r16（ASN.1 flowControlFeedbackType-r16，源文件第 1023 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BAP_Config_r16_FlowControlFeedbackType_r16 {
    BAP_Config_r16_FlowControlFeedbackType_r16_perBH_RLC_Channel = 0, /**< ASN.1 perBH-RLC-Channel */
    BAP_Config_r16_FlowControlFeedbackType_r16_perRoutingID = 1, /**< ASN.1 perRoutingID */
    BAP_Config_r16_FlowControlFeedbackType_r16_both = 2, /**< ASN.1 both */
} BAP_Config_r16_FlowControlFeedbackType_r16;


/**
 * @brief 枚举 OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16（ASN.1 onDemandSIB-RequestProhibitTimer-r16，源文件第 1035 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16 {
    OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16_s0 = 0, /**< ASN.1 s0 */
    OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16_s0dot5 = 1, /**< ASN.1 s0dot5 */
    OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16_s1 = 2, /**< ASN.1 s1 */
    OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16_s2 = 3, /**< ASN.1 s2 */
    OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16_s5 = 4, /**< ASN.1 s5 */
    OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16_s10 = 5, /**< ASN.1 s10 */
    OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16_s20 = 6, /**< ASN.1 s20 */
    OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16_s30 = 7, /**< ASN.1 s30 */
} OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16;


/**
 * @brief 枚举 UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17（ASN.1 periodicReporting-r17，源文件第 1064 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17 {
    UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17_ms160 = 0, /**< ASN.1 ms160 */
    UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17_ms320 = 1, /**< ASN.1 ms320 */
    UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17_ms1280 = 2, /**< ASN.1 ms1280 */
    UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17_ms2560 = 3, /**< ASN.1 ms2560 */
    UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17_ms61440 = 4, /**< ASN.1 ms61440 */
    UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17_ms81920 = 5, /**< ASN.1 ms81920 */
    UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17_ms368640 = 6, /**< ASN.1 ms368640 */
    UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17_ms737280 = 7, /**< ASN.1 ms737280 */
} UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17;


/**
 * @brief 枚举 RRCReconfigurationComplete_v1800_IEs_FlightPathInfoAvailable_r18（ASN.1 flightPathInfoAvailable-r18，源文件第 1123 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCReconfigurationComplete_v1800_IEs_FlightPathInfoAvailable_r18 {
    RRCReconfigurationComplete_v1800_IEs_FlightPathInfoAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCReconfigurationComplete_v1800_IEs_FlightPathInfoAvailable_r18;


/**
 * @brief 枚举 RRCReconfigurationComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18（ASN.1 measConfigReportAppLayerAvailable-r18，源文件第 1126 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCReconfigurationComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18 {
    RRCReconfigurationComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCReconfigurationComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18;


/**
 * @brief 枚举 RRCRelease_IEs_DeprioritisationReq_DeprioritisationType（ASN.1 deprioritisationReq/deprioritisationType，源文件第 1162 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCRelease_IEs_DeprioritisationReq_DeprioritisationType {
    RRCRelease_IEs_DeprioritisationReq_DeprioritisationType_frequency = 0, /**< ASN.1 frequency */
    RRCRelease_IEs_DeprioritisationReq_DeprioritisationType_nr = 1, /**< ASN.1 nr */
} RRCRelease_IEs_DeprioritisationReq_DeprioritisationType;


/**
 * @brief 枚举 RRCRelease_IEs_DeprioritisationReq_DeprioritisationTimer（ASN.1 deprioritisationReq/deprioritisationTimer，源文件第 1163 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCRelease_IEs_DeprioritisationReq_DeprioritisationTimer {
    RRCRelease_IEs_DeprioritisationReq_DeprioritisationTimer_min5 = 0, /**< ASN.1 min5 */
    RRCRelease_IEs_DeprioritisationReq_DeprioritisationTimer_min10 = 1, /**< ASN.1 min10 */
    RRCRelease_IEs_DeprioritisationReq_DeprioritisationTimer_min15 = 2, /**< ASN.1 min15 */
    RRCRelease_IEs_DeprioritisationReq_DeprioritisationTimer_min30 = 3, /**< ASN.1 min30 */
} RRCRelease_IEs_DeprioritisationReq_DeprioritisationTimer;


/**
 * @brief 枚举 RRCRelease_v1610_IEs_VoiceFallbackIndication_r16（ASN.1 voiceFallbackIndication-r16，源文件第 1175 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCRelease_v1610_IEs_VoiceFallbackIndication_r16 {
    RRCRelease_v1610_IEs_VoiceFallbackIndication_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCRelease_v1610_IEs_VoiceFallbackIndication_r16;


/**
 * @brief 枚举 RRCRelease_v1650_IEs_MpsPriorityIndication_r16（ASN.1 mpsPriorityIndication-r16，源文件第 1181 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCRelease_v1650_IEs_MpsPriorityIndication_r16 {
    RRCRelease_v1650_IEs_MpsPriorityIndication_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCRelease_v1650_IEs_MpsPriorityIndication_r16;


/**
 * @brief 枚举 RRCRelease_v1710_IEs_NoLastCellUpdate_r17（ASN.1 noLastCellUpdate-r17，源文件第 1186 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCRelease_v1710_IEs_NoLastCellUpdate_r17 {
    RRCRelease_v1710_IEs_NoLastCellUpdate_r17_trueVal = 0, /**< ASN.1 trueVal */
} RRCRelease_v1710_IEs_NoLastCellUpdate_r17;


/**
 * @brief 枚举 RedirectedCarrierInfo_EUTRA_CnType（ASN.1 cnType，源文件第 1198 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RedirectedCarrierInfo_EUTRA_CnType {
    RedirectedCarrierInfo_EUTRA_CnType_epc = 0, /**< ASN.1 epc */
    RedirectedCarrierInfo_EUTRA_CnType_fiveGC = 1, /**< ASN.1 fiveGC */
} RedirectedCarrierInfo_EUTRA_CnType;


/**
 * @brief 枚举 SuspendConfig_ExtGroup3_ResumeIndication_r18（ASN.1 resumeIndication-r18，源文件第 1226 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SuspendConfig_ExtGroup3_ResumeIndication_r18 {
    SuspendConfig_ExtGroup3_ResumeIndication_r18_trueVal = 0, /**< ASN.1 trueVal */
} SuspendConfig_ExtGroup3_ResumeIndication_r18;


/**
 * @brief 枚举 CellReselectionPriorities_T320（ASN.1 t320，源文件第 1240 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellReselectionPriorities_T320 {
    CellReselectionPriorities_T320_min5 = 0, /**< ASN.1 min5 */
    CellReselectionPriorities_T320_min10 = 1, /**< ASN.1 min10 */
    CellReselectionPriorities_T320_min20 = 2, /**< ASN.1 min20 */
    CellReselectionPriorities_T320_min30 = 3, /**< ASN.1 min30 */
    CellReselectionPriorities_T320_min60 = 4, /**< ASN.1 min60 */
    CellReselectionPriorities_T320_min120 = 5, /**< ASN.1 min120 */
    CellReselectionPriorities_T320_min180 = 6, /**< ASN.1 min180 */
    CellReselectionPriorities_T320_spare1 = 7, /**< ASN.1 spare1 */
} CellReselectionPriorities_T320;


/**
 * @brief 枚举 SDT_Config_r17_Sdt_SRB2_Indication_r17（ASN.1 sdt-SRB2-Indication-r17，源文件第 1292 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDT_Config_r17_Sdt_SRB2_Indication_r17 {
    SDT_Config_r17_Sdt_SRB2_Indication_r17_allowed = 0, /**< ASN.1 allowed */
} SDT_Config_r17_Sdt_SRB2_Indication_r17;


/**
 * @brief 枚举 SDT_Config_r17_Sdt_DRB_ContinueROHC_r17（ASN.1 sdt-DRB-ContinueROHC-r17，源文件第 1294 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDT_Config_r17_Sdt_DRB_ContinueROHC_r17 {
    SDT_Config_r17_Sdt_DRB_ContinueROHC_r17_cell = 0, /**< ASN.1 cell */
    SDT_Config_r17_Sdt_DRB_ContinueROHC_r17_rna = 1, /**< ASN.1 rna */
} SDT_Config_r17_Sdt_DRB_ContinueROHC_r17;


/**
 * @brief 枚举 SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18（ASN.1 cg-MT-SDT-MaxDurationToNext-CG-Occasion-r18，源文件第 1314 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18 {
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_ms10 = 0, /**< ASN.1 ms10 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_ms100 = 1, /**< ASN.1 ms100 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_sec1 = 2, /**< ASN.1 sec1 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_sec10 = 3, /**< ASN.1 sec10 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_sec60 = 4, /**< ASN.1 sec60 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_sec100 = 5, /**< ASN.1 sec100 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_sec300 = 6, /**< ASN.1 sec300 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_sec600 = 7, /**< ASN.1 sec600 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_sec1200 = 8, /**< ASN.1 sec1200 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_sec1800 = 9, /**< ASN.1 sec1800 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_sec3600 = 10, /**< ASN.1 sec3600 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_spare5 = 11, /**< ASN.1 spare5 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_spare4 = 12, /**< ASN.1 spare4 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_spare3 = 13, /**< ASN.1 spare3 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_spare2 = 14, /**< ASN.1 spare2 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18_spare1 = 15, /**< ASN.1 spare1 */
} SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18;


/**
 * @brief 枚举 CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17（ASN.1 cg-SDT-RSRP-ChangeThreshold-r17，源文件第 1322 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17 {
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB2 = 0, /**< ASN.1 dB2 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB4 = 1, /**< ASN.1 dB4 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB6 = 2, /**< ASN.1 dB6 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB8 = 3, /**< ASN.1 dB8 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB10 = 4, /**< ASN.1 dB10 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB14 = 5, /**< ASN.1 dB14 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB18 = 6, /**< ASN.1 dB18 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB22 = 7, /**< ASN.1 dB22 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB26 = 8, /**< ASN.1 dB26 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB30 = 9, /**< ASN.1 dB30 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_dB34 = 10, /**< ASN.1 dB34 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_spare5 = 11, /**< ASN.1 spare5 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_spare4 = 12, /**< ASN.1 spare4 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_spare3 = 13, /**< ASN.1 spare3 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_spare2 = 14, /**< ASN.1 spare2 */
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17_spare1 = 15, /**< ASN.1 spare1 */
} CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17;


/**
 * @brief 枚举 CG_SDT_ConfigLCH_Restriction_r17_ConfiguredGrantType1Allowed_r17（ASN.1 configuredGrantType1Allowed-r17，源文件第 1341 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CG_SDT_ConfigLCH_Restriction_r17_ConfiguredGrantType1Allowed_r17 {
    CG_SDT_ConfigLCH_Restriction_r17_ConfiguredGrantType1Allowed_r17_trueVal = 0, /**< ASN.1 trueVal */
} CG_SDT_ConfigLCH_Restriction_r17_ConfiguredGrantType1Allowed_r17;


/**
 * @brief 枚举 CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18（ASN.1 cg-SDT-MaxDurationToNext-CG-Occasion-r18，源文件第 1347 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18 {
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_ms10 = 0, /**< ASN.1 ms10 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_ms100 = 1, /**< ASN.1 ms100 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_sec1 = 2, /**< ASN.1 sec1 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_sec10 = 3, /**< ASN.1 sec10 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_sec60 = 4, /**< ASN.1 sec60 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_sec100 = 5, /**< ASN.1 sec100 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_sec300 = 6, /**< ASN.1 sec300 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_sec600 = 7, /**< ASN.1 sec600 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_sec1200 = 8, /**< ASN.1 sec1200 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_sec1800 = 9, /**< ASN.1 sec1800 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_sec3600 = 10, /**< ASN.1 sec3600 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_spare5 = 11, /**< ASN.1 spare5 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_spare4 = 12, /**< ASN.1 spare4 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_spare3 = 13, /**< ASN.1 spare3 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_spare2 = 14, /**< ASN.1 spare2 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18_spare1 = 15, /**< ASN.1 spare1 */
} CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18;


/**
 * @brief 枚举 AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18（ASN.1 inactivePosSRS-ValidityAreaTAT-r18，源文件第 1392 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18 {
    AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18_ms1280 = 0, /**< ASN.1 ms1280 */
    AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18_ms1920 = 1, /**< ASN.1 ms1920 */
    AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18_ms2560 = 2, /**< ASN.1 ms2560 */
    AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18_ms5120 = 3, /**< ASN.1 ms5120 */
    AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18_ms10240 = 4, /**< ASN.1 ms10240 */
    AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18_ms20480 = 5, /**< ASN.1 ms20480 */
    AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18_ms40960 = 6, /**< ASN.1 ms40960 */
    AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18_infinity = 7, /**< ASN.1 infinity */
} AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18;


/**
 * @brief 枚举 AreaValidityTA_Config_r18_AutonomousTA_AdjustmentEnabled_r18（ASN.1 autonomousTA-AdjustmentEnabled-r18，源文件第 1394 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AreaValidityTA_Config_r18_AutonomousTA_AdjustmentEnabled_r18 {
    AreaValidityTA_Config_r18_AutonomousTA_AdjustmentEnabled_r18_trueVal = 0, /**< ASN.1 trueVal */
} AreaValidityTA_Config_r18_AutonomousTA_AdjustmentEnabled_r18;


/**
 * @brief 枚举 ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18（ASN.1 extendedPagingCycle-r18，源文件第 1402 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18 {
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf2 = 0, /**< ASN.1 hf2 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf4 = 1, /**< ASN.1 hf4 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf8 = 2, /**< ASN.1 hf8 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf16 = 3, /**< ASN.1 hf16 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf32 = 4, /**< ASN.1 hf32 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf64 = 5, /**< ASN.1 hf64 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf128 = 6, /**< ASN.1 hf128 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf256 = 7, /**< ASN.1 hf256 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf512 = 8, /**< ASN.1 hf512 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_hf1024 = 9, /**< ASN.1 hf1024 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_spare6 = 10, /**< ASN.1 spare6 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_spare5 = 11, /**< ASN.1 spare5 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_spare4 = 12, /**< ASN.1 spare4 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_spare3 = 13, /**< ASN.1 spare3 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_spare2 = 14, /**< ASN.1 spare2 */
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18_spare1 = 15, /**< ASN.1 spare1 */
} ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18;


/**
 * @brief 枚举 ExtendedPagingCycleConfig_r18_PagingPTWLength_r18（ASN.1 pagingPTWLength-r18，源文件第 1404 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ExtendedPagingCycleConfig_r18_PagingPTWLength_r18 {
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms1280 = 0, /**< ASN.1 ms1280 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms2560 = 1, /**< ASN.1 ms2560 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms3840 = 2, /**< ASN.1 ms3840 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms5120 = 3, /**< ASN.1 ms5120 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms6400 = 4, /**< ASN.1 ms6400 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms7680 = 5, /**< ASN.1 ms7680 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms8960 = 6, /**< ASN.1 ms8960 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms10240 = 7, /**< ASN.1 ms10240 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms11520 = 8, /**< ASN.1 ms11520 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms12800 = 9, /**< ASN.1 ms12800 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms14080 = 10, /**< ASN.1 ms14080 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms15360 = 11, /**< ASN.1 ms15360 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms16640 = 12, /**< ASN.1 ms16640 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms17920 = 13, /**< ASN.1 ms17920 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms19200 = 14, /**< ASN.1 ms19200 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms20480 = 15, /**< ASN.1 ms20480 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms21760 = 16, /**< ASN.1 ms21760 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms23040 = 17, /**< ASN.1 ms23040 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms24320 = 18, /**< ASN.1 ms24320 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms25600 = 19, /**< ASN.1 ms25600 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms26880 = 20, /**< ASN.1 ms26880 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms28160 = 21, /**< ASN.1 ms28160 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms29440 = 22, /**< ASN.1 ms29440 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms30720 = 23, /**< ASN.1 ms30720 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms32000 = 24, /**< ASN.1 ms32000 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms33280 = 25, /**< ASN.1 ms33280 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms34560 = 26, /**< ASN.1 ms34560 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms35840 = 27, /**< ASN.1 ms35840 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms37120 = 28, /**< ASN.1 ms37120 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms38400 = 29, /**< ASN.1 ms38400 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms39680 = 30, /**< ASN.1 ms39680 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18_ms40960 = 31, /**< ASN.1 ms40960 */
} ExtendedPagingCycleConfig_r18_PagingPTWLength_r18;


/**
 * @brief 枚举 RRCResume_IEs_FullConfig（ASN.1 fullConfig，源文件第 1430 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResume_IEs_FullConfig {
    RRCResume_IEs_FullConfig_trueVal = 0, /**< ASN.1 trueVal */
} RRCResume_IEs_FullConfig;


/**
 * @brief 枚举 RRCResume_v1610_IEs_IdleModeMeasurementReq_r16（ASN.1 idleModeMeasurementReq-r16，源文件第 1442 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResume_v1610_IEs_IdleModeMeasurementReq_r16 {
    RRCResume_v1610_IEs_IdleModeMeasurementReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCResume_v1610_IEs_IdleModeMeasurementReq_r16;


/**
 * @brief 枚举 RRCResume_v1610_IEs_RestoreMCG_SCells_r16（ASN.1 restoreMCG-SCells-r16，源文件第 1443 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResume_v1610_IEs_RestoreMCG_SCells_r16 {
    RRCResume_v1610_IEs_RestoreMCG_SCells_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCResume_v1610_IEs_RestoreMCG_SCells_r16;


/**
 * @brief 枚举 RRCResume_v1610_IEs_RestoreSCG_r16（ASN.1 restoreSCG-r16，源文件第 1444 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResume_v1610_IEs_RestoreSCG_r16 {
    RRCResume_v1610_IEs_RestoreSCG_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCResume_v1610_IEs_RestoreSCG_r16;


/**
 * @brief 枚举 RRCResume_v1700_IEs_Scg_State_r17（ASN.1 scg-State-r17，源文件第 1458 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResume_v1700_IEs_Scg_State_r17 {
    RRCResume_v1700_IEs_Scg_State_r17_deactivated = 0, /**< ASN.1 deactivated */
} RRCResume_v1700_IEs_Scg_State_r17;


/**
 * @brief 枚举 RRCResume_v1800_IEs_NeedForInterruptionConfigNR_r18（ASN.1 needForInterruptionConfigNR-r18，源文件第 1464 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResume_v1800_IEs_NeedForInterruptionConfigNR_r18 {
    RRCResume_v1800_IEs_NeedForInterruptionConfigNR_r18_disabled = 0, /**< ASN.1 disabled */
    RRCResume_v1800_IEs_NeedForInterruptionConfigNR_r18_enabled = 1, /**< ASN.1 enabled */
} RRCResume_v1800_IEs_NeedForInterruptionConfigNR_r18;


/**
 * @brief 枚举 RRCResume_v1800_IEs_ReselectionMeasurementReq_r18（ASN.1 reselectionMeasurementReq-r18，源文件第 1465 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResume_v1800_IEs_ReselectionMeasurementReq_r18 {
    RRCResume_v1800_IEs_ReselectionMeasurementReq_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCResume_v1800_IEs_ReselectionMeasurementReq_r18;


/**
 * @brief 枚举 RRCResumeComplete_v1610_IEs_IdleMeasAvailable_r16（ASN.1 idleMeasAvailable-r16，源文件第 1489 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResumeComplete_v1610_IEs_IdleMeasAvailable_r16 {
    RRCResumeComplete_v1610_IEs_IdleMeasAvailable_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCResumeComplete_v1610_IEs_IdleMeasAvailable_r16;


/**
 * @brief 枚举 RRCResumeComplete_v1610_IEs_MobilityHistoryAvail_r16（ASN.1 mobilityHistoryAvail-r16，源文件第 1497 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResumeComplete_v1610_IEs_MobilityHistoryAvail_r16 {
    RRCResumeComplete_v1610_IEs_MobilityHistoryAvail_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCResumeComplete_v1610_IEs_MobilityHistoryAvail_r16;


/**
 * @brief 枚举 RRCResumeComplete_v1610_IEs_MobilityState_r16（ASN.1 mobilityState-r16，源文件第 1498 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResumeComplete_v1610_IEs_MobilityState_r16 {
    RRCResumeComplete_v1610_IEs_MobilityState_r16_normal = 0, /**< ASN.1 normal */
    RRCResumeComplete_v1610_IEs_MobilityState_r16_medium = 1, /**< ASN.1 medium */
    RRCResumeComplete_v1610_IEs_MobilityState_r16_high = 2, /**< ASN.1 high */
    RRCResumeComplete_v1610_IEs_MobilityState_r16_spare = 3, /**< ASN.1 spare */
} RRCResumeComplete_v1610_IEs_MobilityState_r16;


/**
 * @brief 枚举 RRCResumeComplete_v1800_IEs_Musim_CapRestrictionInd_r18（ASN.1 musim-CapRestrictionInd-r18，源文件第 1521 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResumeComplete_v1800_IEs_Musim_CapRestrictionInd_r18 {
    RRCResumeComplete_v1800_IEs_Musim_CapRestrictionInd_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCResumeComplete_v1800_IEs_Musim_CapRestrictionInd_r18;


/**
 * @brief 枚举 RRCResumeComplete_v1800_IEs_FlightPathInfoAvailable_r18（ASN.1 flightPathInfoAvailable-r18，源文件第 1522 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResumeComplete_v1800_IEs_FlightPathInfoAvailable_r18 {
    RRCResumeComplete_v1800_IEs_FlightPathInfoAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCResumeComplete_v1800_IEs_FlightPathInfoAvailable_r18;


/**
 * @brief 枚举 RRCResumeComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18（ASN.1 measConfigReportAppLayerAvailable-r18，源文件第 1523 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResumeComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18 {
    RRCResumeComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCResumeComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18;


/**
 * @brief 枚举 RRCResumeComplete_v1800_IEs_ReselectionMeasAvailable_r18（ASN.1 reselectionMeasAvailable-r18，源文件第 1525 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCResumeComplete_v1800_IEs_ReselectionMeasAvailable_r18 {
    RRCResumeComplete_v1800_IEs_ReselectionMeasAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCResumeComplete_v1800_IEs_ReselectionMeasAvailable_r18;


/**
 * @brief 枚举 RRCSetupComplete_IEs_Guami_Type（ASN.1 guami-Type，源文件第 1595 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_IEs_Guami_Type {
    RRCSetupComplete_IEs_Guami_Type_native = 0, /**< ASN.1 native */
    RRCSetupComplete_IEs_Guami_Type_mapped = 1, /**< ASN.1 mapped */
} RRCSetupComplete_IEs_Guami_Type;


/**
 * @brief 枚举 RRCSetupComplete_v1610_IEs_Iab_NodeIndication_r16（ASN.1 iab-NodeIndication-r16，源文件第 1607 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1610_IEs_Iab_NodeIndication_r16 {
    RRCSetupComplete_v1610_IEs_Iab_NodeIndication_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1610_IEs_Iab_NodeIndication_r16;


/**
 * @brief 枚举 RRCSetupComplete_v1610_IEs_IdleMeasAvailable_r16（ASN.1 idleMeasAvailable-r16，源文件第 1608 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1610_IEs_IdleMeasAvailable_r16 {
    RRCSetupComplete_v1610_IEs_IdleMeasAvailable_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1610_IEs_IdleMeasAvailable_r16;


/**
 * @brief 枚举 RRCSetupComplete_v1610_IEs_MobilityHistoryAvail_r16（ASN.1 mobilityHistoryAvail-r16，源文件第 1610 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1610_IEs_MobilityHistoryAvail_r16 {
    RRCSetupComplete_v1610_IEs_MobilityHistoryAvail_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1610_IEs_MobilityHistoryAvail_r16;


/**
 * @brief 枚举 RRCSetupComplete_v1610_IEs_MobilityState_r16（ASN.1 mobilityState-r16，源文件第 1611 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1610_IEs_MobilityState_r16 {
    RRCSetupComplete_v1610_IEs_MobilityState_r16_normal = 0, /**< ASN.1 normal */
    RRCSetupComplete_v1610_IEs_MobilityState_r16_medium = 1, /**< ASN.1 medium */
    RRCSetupComplete_v1610_IEs_MobilityState_r16_high = 2, /**< ASN.1 high */
    RRCSetupComplete_v1610_IEs_MobilityState_r16_spare = 3, /**< ASN.1 spare */
} RRCSetupComplete_v1610_IEs_MobilityState_r16;


/**
 * @brief 枚举 RRCSetupComplete_v1690_IEs_Ul_RRC_Segmentation_r16（ASN.1 ul-RRC-Segmentation-r16，源文件第 1616 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1690_IEs_Ul_RRC_Segmentation_r16 {
    RRCSetupComplete_v1690_IEs_Ul_RRC_Segmentation_r16_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1690_IEs_Ul_RRC_Segmentation_r16;


/**
 * @brief 枚举 RRCSetupComplete_v1700_IEs_OnboardingRequest_r17（ASN.1 onboardingRequest-r17，源文件第 1621 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1700_IEs_OnboardingRequest_r17 {
    RRCSetupComplete_v1700_IEs_OnboardingRequest_r17_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1700_IEs_OnboardingRequest_r17;


/**
 * @brief 枚举 RRCSetupComplete_v1800_IEs_Ncr_NodeIndication_r18（ASN.1 ncr-NodeIndication-r18，源文件第 1626 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1800_IEs_Ncr_NodeIndication_r18 {
    RRCSetupComplete_v1800_IEs_Ncr_NodeIndication_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1800_IEs_Ncr_NodeIndication_r18;


/**
 * @brief 枚举 RRCSetupComplete_v1800_IEs_Musim_CapRestrictionInd_r18（ASN.1 musim-CapRestrictionInd-r18，源文件第 1627 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1800_IEs_Musim_CapRestrictionInd_r18 {
    RRCSetupComplete_v1800_IEs_Musim_CapRestrictionInd_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1800_IEs_Musim_CapRestrictionInd_r18;


/**
 * @brief 枚举 RRCSetupComplete_v1800_IEs_FlightPathInfoAvailable_r18（ASN.1 flightPathInfoAvailable-r18，源文件第 1628 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1800_IEs_FlightPathInfoAvailable_r18 {
    RRCSetupComplete_v1800_IEs_FlightPathInfoAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1800_IEs_FlightPathInfoAvailable_r18;


/**
 * @brief 枚举 RRCSetupComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18（ASN.1 measConfigReportAppLayerAvailable-r18，源文件第 1629 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18 {
    RRCSetupComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18;


/**
 * @brief 枚举 RRCSetupComplete_v1800_IEs_MobileIAB_NodeIndication_r18（ASN.1 mobileIAB-NodeIndication-r18，源文件第 1630 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1800_IEs_MobileIAB_NodeIndication_r18 {
    RRCSetupComplete_v1800_IEs_MobileIAB_NodeIndication_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1800_IEs_MobileIAB_NodeIndication_r18;


/**
 * @brief 枚举 RRCSetupComplete_v1800_IEs_ReselectionMeasAvailable_r18（ASN.1 reselectionMeasAvailable-r18，源文件第 1631 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RRCSetupComplete_v1800_IEs_ReselectionMeasAvailable_r18 {
    RRCSetupComplete_v1800_IEs_ReselectionMeasAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} RRCSetupComplete_v1800_IEs_ReselectionMeasAvailable_r18;


/**
 * @brief 枚举 FailureReportSCG_FailureType（ASN.1 failureType，源文件第 1707 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FailureReportSCG_FailureType {
    FailureReportSCG_FailureType_t310_Expiry = 0, /**< ASN.1 t310-Expiry */
    FailureReportSCG_FailureType_randomAccessProblem = 1, /**< ASN.1 randomAccessProblem */
    FailureReportSCG_FailureType_rlc_MaxNumRetx = 2, /**< ASN.1 rlc-MaxNumRetx */
    FailureReportSCG_FailureType_synchReconfigFailureSCG = 3, /**< ASN.1 synchReconfigFailureSCG */
    FailureReportSCG_FailureType_scg_ReconfigFailure = 4, /**< ASN.1 scg-ReconfigFailure */
    FailureReportSCG_FailureType_srb3_IntegrityFailure = 5, /**< ASN.1 srb3-IntegrityFailure */
    FailureReportSCG_FailureType_other_r16 = 6, /**< ASN.1 other-r16 */
    FailureReportSCG_FailureType_spare1 = 7, /**< ASN.1 spare1 */
} FailureReportSCG_FailureType;


/**
 * @brief 枚举 FailureReportSCG_ExtGroup1_FailureType_v1610（ASN.1 failureType-v1610，源文件第 1717 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FailureReportSCG_ExtGroup1_FailureType_v1610 {
    FailureReportSCG_ExtGroup1_FailureType_v1610_scg_lbtFailure_r16 = 0, /**< ASN.1 scg-lbtFailure-r16 */
    FailureReportSCG_ExtGroup1_FailureType_v1610_beamFailureRecoveryFailure_r16 = 1, /**< ASN.1 beamFailureRecoveryFailure-r16 */
    FailureReportSCG_ExtGroup1_FailureType_v1610_t312_Expiry_r16 = 2, /**< ASN.1 t312-Expiry-r16 */
    FailureReportSCG_ExtGroup1_FailureType_v1610_bh_RLF_r16 = 3, /**< ASN.1 bh-RLF-r16 */
    FailureReportSCG_ExtGroup1_FailureType_v1610_beamFailure_r17 = 4, /**< ASN.1 beamFailure-r17 */
    FailureReportSCG_ExtGroup1_FailureType_v1610_spare3 = 5, /**< ASN.1 spare3 */
    FailureReportSCG_ExtGroup1_FailureType_v1610_spare2 = 6, /**< ASN.1 spare2 */
    FailureReportSCG_ExtGroup1_FailureType_v1610_spare1 = 7, /**< ASN.1 spare1 */
} FailureReportSCG_ExtGroup1_FailureType_v1610;


/**
 * @brief 枚举 FailureReportSCG_EUTRA_FailureType（ASN.1 failureType，源文件第 1758 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FailureReportSCG_EUTRA_FailureType {
    FailureReportSCG_EUTRA_FailureType_t313_Expiry = 0, /**< ASN.1 t313-Expiry */
    FailureReportSCG_EUTRA_FailureType_randomAccessProblem = 1, /**< ASN.1 randomAccessProblem */
    FailureReportSCG_EUTRA_FailureType_rlc_MaxNumRetx = 2, /**< ASN.1 rlc-MaxNumRetx */
    FailureReportSCG_EUTRA_FailureType_scg_ChangeFailure = 3, /**< ASN.1 scg-ChangeFailure */
    FailureReportSCG_EUTRA_FailureType_spare4 = 4, /**< ASN.1 spare4 */
    FailureReportSCG_EUTRA_FailureType_spare3 = 5, /**< ASN.1 spare3 */
    FailureReportSCG_EUTRA_FailureType_spare2 = 6, /**< ASN.1 spare2 */
    FailureReportSCG_EUTRA_FailureType_spare1 = 7, /**< ASN.1 spare1 */
} FailureReportSCG_EUTRA_FailureType;


/**
 * @brief 枚举 SIB1_Ims_EmergencySupport（ASN.1 ims-EmergencySupport，源文件第 1842 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_Ims_EmergencySupport {
    SIB1_Ims_EmergencySupport_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_Ims_EmergencySupport;


/**
 * @brief 枚举 SIB1_ECallOverIMS_Support（ASN.1 eCallOverIMS-Support，源文件第 1843 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_ECallOverIMS_Support {
    SIB1_ECallOverIMS_Support_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_ECallOverIMS_Support;


/**
 * @brief 枚举 SIB1_UseFullResumeID（ASN.1 useFullResumeID，源文件第 1854 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_UseFullResumeID {
    SIB1_UseFullResumeID_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_UseFullResumeID;


/**
 * @brief 枚举 SIB1_v1610_IEs_IdleModeMeasurementsEUTRA_r16（ASN.1 idleModeMeasurementsEUTRA-r16，源文件第 1860 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1610_IEs_IdleModeMeasurementsEUTRA_r16 {
    SIB1_v1610_IEs_IdleModeMeasurementsEUTRA_r16_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1610_IEs_IdleModeMeasurementsEUTRA_r16;


/**
 * @brief 枚举 SIB1_v1610_IEs_IdleModeMeasurementsNR_r16（ASN.1 idleModeMeasurementsNR-r16，源文件第 1861 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1610_IEs_IdleModeMeasurementsNR_r16 {
    SIB1_v1610_IEs_IdleModeMeasurementsNR_r16_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1610_IEs_IdleModeMeasurementsNR_r16;


/**
 * @brief 枚举 SIB1_v1700_IEs_Hsdn_Cell_r17（ASN.1 hsdn-Cell-r17，源文件第 1874 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1700_IEs_Hsdn_Cell_r17 {
    SIB1_v1700_IEs_Hsdn_Cell_r17_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1700_IEs_Hsdn_Cell_r17;


/**
 * @brief 枚举 SIB1_v1700_IEs_EDRX_AllowedIdle_r17（ASN.1 eDRX-AllowedIdle-r17，源文件第 1888 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1700_IEs_EDRX_AllowedIdle_r17 {
    SIB1_v1700_IEs_EDRX_AllowedIdle_r17_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1700_IEs_EDRX_AllowedIdle_r17;


/**
 * @brief 枚举 SIB1_v1700_IEs_EDRX_AllowedInactive_r17（ASN.1 eDRX-AllowedInactive-r17，源文件第 1889 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1700_IEs_EDRX_AllowedInactive_r17 {
    SIB1_v1700_IEs_EDRX_AllowedInactive_r17_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1700_IEs_EDRX_AllowedInactive_r17;


/**
 * @brief 枚举 SIB1_v1700_IEs_IntraFreqReselectionRedCap_r17（ASN.1 intraFreqReselectionRedCap-r17，源文件第 1890 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1700_IEs_IntraFreqReselectionRedCap_r17 {
    SIB1_v1700_IEs_IntraFreqReselectionRedCap_r17_allowed = 0, /**< ASN.1 allowed */
    SIB1_v1700_IEs_IntraFreqReselectionRedCap_r17_notAllowed = 1, /**< ASN.1 notAllowed */
} SIB1_v1700_IEs_IntraFreqReselectionRedCap_r17;


/**
 * @brief 枚举 SIB1_v1700_IEs_CellBarredNTN_r17（ASN.1 cellBarredNTN-r17，源文件第 1891 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1700_IEs_CellBarredNTN_r17 {
    SIB1_v1700_IEs_CellBarredNTN_r17_barred = 0, /**< ASN.1 barred */
    SIB1_v1700_IEs_CellBarredNTN_r17_notBarred = 1, /**< ASN.1 notBarred */
} SIB1_v1700_IEs_CellBarredNTN_r17;


/**
 * @brief 枚举 SIB1_v1800_IEs_Ncr_Support_r18（ASN.1 ncr-Support-r18，源文件第 1901 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_Ncr_Support_r18 {
    SIB1_v1800_IEs_Ncr_Support_r18_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1800_IEs_Ncr_Support_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_Musim_CapRestrictionAllowed_r18（ASN.1 musim-CapRestrictionAllowed-r18，源文件第 1903 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_Musim_CapRestrictionAllowed_r18 {
    SIB1_v1800_IEs_Musim_CapRestrictionAllowed_r18_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1800_IEs_Musim_CapRestrictionAllowed_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_CellBarredATG_r18（ASN.1 cellBarredATG-r18，源文件第 1909 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_CellBarredATG_r18 {
    SIB1_v1800_IEs_CellBarredATG_r18_barred = 0, /**< ASN.1 barred */
    SIB1_v1800_IEs_CellBarredATG_r18_notBarred = 1, /**< ASN.1 notBarred */
} SIB1_v1800_IEs_CellBarredATG_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_CellBarredNES_r18（ASN.1 cellBarredNES-r18，源文件第 1910 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_CellBarredNES_r18 {
    SIB1_v1800_IEs_CellBarredNES_r18_notBarred = 0, /**< ASN.1 notBarred */
} SIB1_v1800_IEs_CellBarredNES_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_MobileIAB_Cell_r18（ASN.1 mobileIAB-Cell-r18，源文件第 1911 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_MobileIAB_Cell_r18 {
    SIB1_v1800_IEs_MobileIAB_Cell_r18_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1800_IEs_MobileIAB_Cell_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_EDRX_AllowedInactive_r18（ASN.1 eDRX-AllowedInactive-r18，源文件第 1912 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_EDRX_AllowedInactive_r18 {
    SIB1_v1800_IEs_EDRX_AllowedInactive_r18_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1800_IEs_EDRX_AllowedInactive_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_IntraFreqReselection_eRedCap_r18（ASN.1 intraFreqReselection-eRedCap-r18，源文件第 1913 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_IntraFreqReselection_eRedCap_r18 {
    SIB1_v1800_IEs_IntraFreqReselection_eRedCap_r18_allowed = 0, /**< ASN.1 allowed */
    SIB1_v1800_IEs_IntraFreqReselection_eRedCap_r18_notAllowed = 1, /**< ASN.1 notAllowed */
} SIB1_v1800_IEs_IntraFreqReselection_eRedCap_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_NonServingCellMII_r18（ASN.1 nonServingCellMII-r18，源文件第 1914 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_NonServingCellMII_r18 {
    SIB1_v1800_IEs_NonServingCellMII_r18_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1800_IEs_NonServingCellMII_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18（ASN.1 sdt-BeamFailureRecoveryProhibitTimer-r18，源文件第 1915 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18 {
    SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18_ms50 = 0, /**< ASN.1 ms50 */
    SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18_ms100 = 1, /**< ASN.1 ms100 */
    SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18_ms200 = 2, /**< ASN.1 ms200 */
    SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18_ms500 = 3, /**< ASN.1 ms500 */
    SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18_ms1000 = 4, /**< ASN.1 ms1000 */
    SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18_ms1500 = 5, /**< ASN.1 ms1500 */
    SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18_ms2000 = 6, /**< ASN.1 ms2000 */
    SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18_ms3000 = 7, /**< ASN.1 ms3000 */
} SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_CellBarredFixedVSAT_r18（ASN.1 cellBarredFixedVSAT-r18，源文件第 1918 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_CellBarredFixedVSAT_r18 {
    SIB1_v1800_IEs_CellBarredFixedVSAT_r18_barred = 0, /**< ASN.1 barred */
    SIB1_v1800_IEs_CellBarredFixedVSAT_r18_notBarred = 1, /**< ASN.1 notBarred */
} SIB1_v1800_IEs_CellBarredFixedVSAT_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_CellBarredMobileVSAT_r18（ASN.1 cellBarredMobileVSAT-r18，源文件第 1919 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_CellBarredMobileVSAT_r18 {
    SIB1_v1800_IEs_CellBarredMobileVSAT_r18_barred = 0, /**< ASN.1 barred */
    SIB1_v1800_IEs_CellBarredMobileVSAT_r18_notBarred = 1, /**< ASN.1 notBarred */
} SIB1_v1800_IEs_CellBarredMobileVSAT_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_ReselectionMeasurementsNR_r18（ASN.1 reselectionMeasurementsNR-r18，源文件第 1920 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_ReselectionMeasurementsNR_r18 {
    SIB1_v1800_IEs_ReselectionMeasurementsNR_r18_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1800_IEs_ReselectionMeasurementsNR_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_CellBarred2RxXR_r18（ASN.1 cellBarred2RxXR-r18，源文件第 1921 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_CellBarred2RxXR_r18 {
    SIB1_v1800_IEs_CellBarred2RxXR_r18_trueVal = 0, /**< ASN.1 trueVal */
} SIB1_v1800_IEs_CellBarred2RxXR_r18;


/**
 * @brief 枚举 SIB1_v1800_IEs_IntraFreqReselection2RxXR_r18（ASN.1 intraFreqReselection2RxXR-r18，源文件第 1922 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB1_v1800_IEs_IntraFreqReselection2RxXR_r18 {
    SIB1_v1800_IEs_IntraFreqReselection2RxXR_r18_allowed = 0, /**< ASN.1 allowed */
    SIB1_v1800_IEs_IntraFreqReselection2RxXR_r18_notAllowed = 1, /**< ASN.1 notAllowed */
} SIB1_v1800_IEs_IntraFreqReselection2RxXR_r18;


/**
 * @brief 枚举 SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17（ASN.1 sdt-LogicalChannelSR-DelayTimer-r17，源文件第 1932 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17 {
    SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17_sf20 = 0, /**< ASN.1 sf20 */
    SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17_sf40 = 1, /**< ASN.1 sf40 */
    SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17_sf64 = 2, /**< ASN.1 sf64 */
    SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17_sf128 = 3, /**< ASN.1 sf128 */
    SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17_sf512 = 4, /**< ASN.1 sf512 */
    SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17_sf1024 = 5, /**< ASN.1 sf1024 */
    SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17_sf2560 = 6, /**< ASN.1 sf2560 */
    SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17_spare1 = 7, /**< ASN.1 spare1 */
} SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17;


/**
 * @brief 枚举 SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17（ASN.1 sdt-DataVolumeThreshold-r17，源文件第 1933 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17 {
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte32 = 0, /**< ASN.1 byte32 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte100 = 1, /**< ASN.1 byte100 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte200 = 2, /**< ASN.1 byte200 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte400 = 3, /**< ASN.1 byte400 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte600 = 4, /**< ASN.1 byte600 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte800 = 5, /**< ASN.1 byte800 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte1000 = 6, /**< ASN.1 byte1000 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte2000 = 7, /**< ASN.1 byte2000 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte4000 = 8, /**< ASN.1 byte4000 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte8000 = 9, /**< ASN.1 byte8000 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte9000 = 10, /**< ASN.1 byte9000 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte10000 = 11, /**< ASN.1 byte10000 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte12000 = 12, /**< ASN.1 byte12000 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte24000 = 13, /**< ASN.1 byte24000 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte48000 = 14, /**< ASN.1 byte48000 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17_byte96000 = 15, /**< ASN.1 byte96000 */
} SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17;


/**
 * @brief 枚举 SDT_ConfigCommonSIB_r17_T319a_r17（ASN.1 t319a-r17，源文件第 1935 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDT_ConfigCommonSIB_r17_T319a_r17 {
    SDT_ConfigCommonSIB_r17_T319a_r17_ms100 = 0, /**< ASN.1 ms100 */
    SDT_ConfigCommonSIB_r17_T319a_r17_ms200 = 1, /**< ASN.1 ms200 */
    SDT_ConfigCommonSIB_r17_T319a_r17_ms300 = 2, /**< ASN.1 ms300 */
    SDT_ConfigCommonSIB_r17_T319a_r17_ms400 = 3, /**< ASN.1 ms400 */
    SDT_ConfigCommonSIB_r17_T319a_r17_ms600 = 4, /**< ASN.1 ms600 */
    SDT_ConfigCommonSIB_r17_T319a_r17_ms1000 = 5, /**< ASN.1 ms1000 */
    SDT_ConfigCommonSIB_r17_T319a_r17_ms2000 = 6, /**< ASN.1 ms2000 */
    SDT_ConfigCommonSIB_r17_T319a_r17_ms3000 = 7, /**< ASN.1 ms3000 */
    SDT_ConfigCommonSIB_r17_T319a_r17_ms4000 = 8, /**< ASN.1 ms4000 */
    SDT_ConfigCommonSIB_r17_T319a_r17_spare7 = 9, /**< ASN.1 spare7 */
    SDT_ConfigCommonSIB_r17_T319a_r17_spare6 = 10, /**< ASN.1 spare6 */
    SDT_ConfigCommonSIB_r17_T319a_r17_spare5 = 11, /**< ASN.1 spare5 */
    SDT_ConfigCommonSIB_r17_T319a_r17_spare4 = 12, /**< ASN.1 spare4 */
    SDT_ConfigCommonSIB_r17_T319a_r17_spare3 = 13, /**< ASN.1 spare3 */
    SDT_ConfigCommonSIB_r17_T319a_r17_spare2 = 14, /**< ASN.1 spare2 */
    SDT_ConfigCommonSIB_r17_T319a_r17_spare1 = 15, /**< ASN.1 spare1 */
} SDT_ConfigCommonSIB_r17_T319a_r17;


/**
 * @brief 枚举 RedCap_ConfigCommonSIB_r17_HalfDuplexRedCapAllowed_r17（ASN.1 halfDuplexRedCapAllowed-r17，源文件第 1940 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RedCap_ConfigCommonSIB_r17_HalfDuplexRedCapAllowed_r17 {
    RedCap_ConfigCommonSIB_r17_HalfDuplexRedCapAllowed_r17_trueVal = 0, /**< ASN.1 trueVal */
} RedCap_ConfigCommonSIB_r17_HalfDuplexRedCapAllowed_r17;


/**
 * @brief 枚举 RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap1Rx_r17（ASN.1 cellBarredRedCap-r17/cellBarredRedCap1Rx-r17，源文件第 1942 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap1Rx_r17 {
    RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap1Rx_r17_barred = 0, /**< ASN.1 barred */
    RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap1Rx_r17_notBarred = 1, /**< ASN.1 notBarred */
} RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap1Rx_r17;


/**
 * @brief 枚举 RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap2Rx_r17（ASN.1 cellBarredRedCap-r17/cellBarredRedCap2Rx-r17，源文件第 1943 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap2Rx_r17 {
    RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap2Rx_r17_barred = 0, /**< ASN.1 barred */
    RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap2Rx_r17_notBarred = 1, /**< ASN.1 notBarred */
} RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap2Rx_r17;


/**
 * @brief 枚举 ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap1Rx_r18（ASN.1 cellBarredeRedCap-r18/cellBarredeRedCap1Rx-r18，源文件第 1950 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap1Rx_r18 {
    ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap1Rx_r18_barred = 0, /**< ASN.1 barred */
    ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap1Rx_r18_notBarred = 1, /**< ASN.1 notBarred */
} ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap1Rx_r18;


/**
 * @brief 枚举 ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap2Rx_r18（ASN.1 cellBarredeRedCap-r18/cellBarredeRedCap2Rx-r18，源文件第 1951 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap2Rx_r18 {
    ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap2Rx_r18_barred = 0, /**< ASN.1 barred */
    ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap2Rx_r18_notBarred = 1, /**< ASN.1 notBarred */
} ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap2Rx_r18;


/**
 * @brief 枚举 MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18（ASN.1 sdt-LogicalChannelSR-DelayTimer-r18，源文件第 1959 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18 {
    MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18_sf20 = 0, /**< ASN.1 sf20 */
    MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18_sf40 = 1, /**< ASN.1 sf40 */
    MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18_sf64 = 2, /**< ASN.1 sf64 */
    MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18_sf128 = 3, /**< ASN.1 sf128 */
    MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18_sf512 = 4, /**< ASN.1 sf512 */
    MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18_sf1024 = 5, /**< ASN.1 sf1024 */
    MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18_sf2560 = 6, /**< ASN.1 sf2560 */
    MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18_spare1 = 7, /**< ASN.1 spare1 */
} MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18;


/**
 * @brief 枚举 MT_SDT_ConfigCommonSIB_r18_T319a_r18（ASN.1 t319a-r18，源文件第 1960 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MT_SDT_ConfigCommonSIB_r18_T319a_r18 {
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_ms100 = 0, /**< ASN.1 ms100 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_ms200 = 1, /**< ASN.1 ms200 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_ms300 = 2, /**< ASN.1 ms300 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_ms400 = 3, /**< ASN.1 ms400 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_ms600 = 4, /**< ASN.1 ms600 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_ms1000 = 5, /**< ASN.1 ms1000 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_ms2000 = 6, /**< ASN.1 ms2000 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_ms3000 = 7, /**< ASN.1 ms3000 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_ms4000 = 8, /**< ASN.1 ms4000 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_spare7 = 9, /**< ASN.1 spare7 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_spare6 = 10, /**< ASN.1 spare6 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_spare5 = 11, /**< ASN.1 spare5 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_spare4 = 12, /**< ASN.1 spare4 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_spare3 = 13, /**< ASN.1 spare3 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_spare2 = 14, /**< ASN.1 spare2 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18_spare1 = 15, /**< ASN.1 spare1 */
} MT_SDT_ConfigCommonSIB_r18_T319a_r18;


/**
 * @brief 枚举 SidelinkUEInformationNR_v1700_IEs_Ue_Type_r17（ASN.1 ue-Type-r17，源文件第 1990 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SidelinkUEInformationNR_v1700_IEs_Ue_Type_r17 {
    SidelinkUEInformationNR_v1700_IEs_Ue_Type_r17_relayUE = 0, /**< ASN.1 relayUE */
    SidelinkUEInformationNR_v1700_IEs_Ue_Type_r17_remoteUE = 1, /**< ASN.1 remoteUE */
} SidelinkUEInformationNR_v1700_IEs_Ue_Type_r17;


/**
 * @brief 枚举 SL_TxResourceReq_r16_Sl_CastType_r16（ASN.1 sl-CastType-r16，源文件第 2011 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TxResourceReq_r16_Sl_CastType_r16 {
    SL_TxResourceReq_r16_Sl_CastType_r16_broadcast = 0, /**< ASN.1 broadcast */
    SL_TxResourceReq_r16_Sl_CastType_r16_groupcast = 1, /**< ASN.1 groupcast */
    SL_TxResourceReq_r16_Sl_CastType_r16_unicast = 2, /**< ASN.1 unicast */
    SL_TxResourceReq_r16_Sl_CastType_r16_spare1 = 3, /**< ASN.1 spare1 */
} SL_TxResourceReq_r16_Sl_CastType_r16;


/**
 * @brief 枚举 SL_TxResourceReq_v1700_Sl_DRX_Indication_r17（ASN.1 sl-DRX-Indication-r17，源文件第 2025 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TxResourceReq_v1700_Sl_DRX_Indication_r17 {
    SL_TxResourceReq_v1700_Sl_DRX_Indication_r17_on = 0, /**< ASN.1 on */
    SL_TxResourceReq_v1700_Sl_DRX_Indication_r17_off = 1, /**< ASN.1 off */
} SL_TxResourceReq_v1700_Sl_DRX_Indication_r17;


/**
 * @brief 枚举 SL_TxResourceReqDisc_r17_Sl_CastTypeDisc_r17（ASN.1 sl-CastTypeDisc-r17，源文件第 2048 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TxResourceReqDisc_r17_Sl_CastTypeDisc_r17 {
    SL_TxResourceReqDisc_r17_Sl_CastTypeDisc_r17_broadcast = 0, /**< ASN.1 broadcast */
    SL_TxResourceReqDisc_r17_Sl_CastTypeDisc_r17_groupcast = 1, /**< ASN.1 groupcast */
    SL_TxResourceReqDisc_r17_Sl_CastTypeDisc_r17_unicast = 2, /**< ASN.1 unicast */
    SL_TxResourceReqDisc_r17_Sl_CastTypeDisc_r17_spare1 = 3, /**< ASN.1 spare1 */
} SL_TxResourceReqDisc_r17_Sl_CastTypeDisc_r17;


/**
 * @brief 枚举 SL_TxResourceReqDisc_r17_Sl_DiscoveryType_r17（ASN.1 sl-DiscoveryType-r17，源文件第 2051 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TxResourceReqDisc_r17_Sl_DiscoveryType_r17 {
    SL_TxResourceReqDisc_r17_Sl_DiscoveryType_r17_relay = 0, /**< ASN.1 relay */
    SL_TxResourceReqDisc_r17_Sl_DiscoveryType_r17_non_Relay = 1, /**< ASN.1 non-Relay */
} SL_TxResourceReqDisc_r17_Sl_DiscoveryType_r17;


/**
 * @brief 枚举 SL_TxResourceReqL2U2N_Relay_r17_Sl_LocalID_Request_r17（ASN.1 sl-LocalID-Request-r17，源文件第 2071 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TxResourceReqL2U2N_Relay_r17_Sl_LocalID_Request_r17 {
    SL_TxResourceReqL2U2N_Relay_r17_Sl_LocalID_Request_r17_trueVal = 0, /**< ASN.1 trueVal */
} SL_TxResourceReqL2U2N_Relay_r17_Sl_LocalID_Request_r17;


/**
 * @brief 枚举 SL_PosTxResourceReq_r18_Sl_PosCastType_r18（ASN.1 sl-PosCastType-r18，源文件第 2098 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PosTxResourceReq_r18_Sl_PosCastType_r18 {
    SL_PosTxResourceReq_r18_Sl_PosCastType_r18_broadcast = 0, /**< ASN.1 broadcast */
    SL_PosTxResourceReq_r18_Sl_PosCastType_r18_groupcast = 1, /**< ASN.1 groupcast */
    SL_PosTxResourceReq_r18_Sl_PosCastType_r18_unicast = 2, /**< ASN.1 unicast */
    SL_PosTxResourceReq_r18_Sl_PosCastType_r18_spare1 = 3, /**< ASN.1 spare1 */
} SL_PosTxResourceReq_r18_Sl_PosCastType_r18;


/**
 * @brief 枚举 SL_Failure_r16_Sl_Failure_r16（ASN.1 sl-Failure-r16，源文件第 2133 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_Failure_r16_Sl_Failure_r16 {
    SL_Failure_r16_Sl_Failure_r16_rlf = 0, /**< ASN.1 rlf */
    SL_Failure_r16_Sl_Failure_r16_configFailure = 1, /**< ASN.1 configFailure */
    SL_Failure_r16_Sl_Failure_r16_drxReject_v1710 = 2, /**< ASN.1 drxReject-v1710 */
    SL_Failure_r16_Sl_Failure_r16_spare5 = 3, /**< ASN.1 spare5 */
    SL_Failure_r16_Sl_Failure_r16_spare4 = 4, /**< ASN.1 spare4 */
    SL_Failure_r16_Sl_Failure_r16_spare3 = 5, /**< ASN.1 spare3 */
    SL_Failure_r16_Sl_Failure_r16_spare2 = 6, /**< ASN.1 spare2 */
    SL_Failure_r16_Sl_Failure_r16_spare1 = 7, /**< ASN.1 spare1 */
} SL_Failure_r16_Sl_Failure_r16;


/**
 * @brief 枚举 DelayBudgetReport_Type1（ASN.1 type1，源文件第 2223 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DelayBudgetReport_Type1 {
    DelayBudgetReport_Type1_msMinus1280 = 0, /**< ASN.1 msMinus1280 */
    DelayBudgetReport_Type1_msMinus640 = 1, /**< ASN.1 msMinus640 */
    DelayBudgetReport_Type1_msMinus320 = 2, /**< ASN.1 msMinus320 */
    DelayBudgetReport_Type1_msMinus160 = 3, /**< ASN.1 msMinus160 */
    DelayBudgetReport_Type1_msMinus80 = 4, /**< ASN.1 msMinus80 */
    DelayBudgetReport_Type1_msMinus60 = 5, /**< ASN.1 msMinus60 */
    DelayBudgetReport_Type1_msMinus40 = 6, /**< ASN.1 msMinus40 */
    DelayBudgetReport_Type1_msMinus20 = 7, /**< ASN.1 msMinus20 */
    DelayBudgetReport_Type1_ms0 = 8, /**< ASN.1 ms0 */
    DelayBudgetReport_Type1_ms20 = 9, /**< ASN.1 ms20 */
    DelayBudgetReport_Type1_ms40 = 10, /**< ASN.1 ms40 */
    DelayBudgetReport_Type1_ms60 = 11, /**< ASN.1 ms60 */
    DelayBudgetReport_Type1_ms80 = 12, /**< ASN.1 ms80 */
    DelayBudgetReport_Type1_ms160 = 13, /**< ASN.1 ms160 */
    DelayBudgetReport_Type1_ms320 = 14, /**< ASN.1 ms320 */
    DelayBudgetReport_Type1_ms640 = 15, /**< ASN.1 ms640 */
    DelayBudgetReport_Type1_ms1280 = 16, /**< ASN.1 ms1280 */
} DelayBudgetReport_Type1;


/**
 * @brief 枚举 UEAssistanceInformation_v1700_IEs_Scg_DeactivationPreference_r17（ASN.1 scg-DeactivationPreference-r17，源文件第 2287 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEAssistanceInformation_v1700_IEs_Scg_DeactivationPreference_r17 {
    UEAssistanceInformation_v1700_IEs_Scg_DeactivationPreference_r17_scgDeactivationPreferred = 0, /**< ASN.1 scgDeactivationPreferred */
    UEAssistanceInformation_v1700_IEs_Scg_DeactivationPreference_r17_noPreference = 1, /**< ASN.1 noPreference */
} UEAssistanceInformation_v1700_IEs_Scg_DeactivationPreference_r17;


/**
 * @brief 枚举 UEAssistanceInformation_v1700_IEs_UplinkData_r17（ASN.1 uplinkData-r17，源文件第 2288 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEAssistanceInformation_v1700_IEs_UplinkData_r17 {
    UEAssistanceInformation_v1700_IEs_UplinkData_r17_trueVal = 0, /**< ASN.1 trueVal */
} UEAssistanceInformation_v1700_IEs_UplinkData_r17;


/**
 * @brief 枚举 UEAssistanceInformation_v1800_IEs_MultiRx_PreferenceFR2_r18（ASN.1 multiRx-PreferenceFR2-r18，源文件第 2297 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEAssistanceInformation_v1800_IEs_MultiRx_PreferenceFR2_r18 {
    UEAssistanceInformation_v1800_IEs_MultiRx_PreferenceFR2_r18_single = 0, /**< ASN.1 single */
    UEAssistanceInformation_v1800_IEs_MultiRx_PreferenceFR2_r18_multiple = 1, /**< ASN.1 multiple */
} UEAssistanceInformation_v1800_IEs_MultiRx_PreferenceFR2_r18;


/**
 * @brief 枚举 UEAssistanceInformation_v1800_IEs_FlightPathInfoAvailable_r18（ASN.1 flightPathInfoAvailable-r18，源文件第 2299 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEAssistanceInformation_v1800_IEs_FlightPathInfoAvailable_r18 {
    UEAssistanceInformation_v1800_IEs_FlightPathInfoAvailable_r18_trueVal = 0, /**< ASN.1 trueVal */
} UEAssistanceInformation_v1800_IEs_FlightPathInfoAvailable_r18;


/**
 * @brief 枚举 AffectedCarrierFreq_r16_InterferenceDirection_r16（ASN.1 interferenceDirection-r16，源文件第 2316 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AffectedCarrierFreq_r16_InterferenceDirection_r16 {
    AffectedCarrierFreq_r16_InterferenceDirection_r16_nr = 0, /**< ASN.1 nr */
    AffectedCarrierFreq_r16_InterferenceDirection_r16_other = 1, /**< ASN.1 other */
    AffectedCarrierFreq_r16_InterferenceDirection_r16_both = 2, /**< ASN.1 both */
    AffectedCarrierFreq_r16_InterferenceDirection_r16_spare = 3, /**< ASN.1 spare */
} AffectedCarrierFreq_r16_InterferenceDirection_r16;


/**
 * @brief 枚举 VictimSystemType_r16_Gps_r16（ASN.1 gps-r16，源文件第 2327 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum VictimSystemType_r16_Gps_r16 {
    VictimSystemType_r16_Gps_r16_trueVal = 0, /**< ASN.1 trueVal */
} VictimSystemType_r16_Gps_r16;


/**
 * @brief 枚举 VictimSystemType_r16_Glonass_r16（ASN.1 glonass-r16，源文件第 2328 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum VictimSystemType_r16_Glonass_r16 {
    VictimSystemType_r16_Glonass_r16_trueVal = 0, /**< ASN.1 trueVal */
} VictimSystemType_r16_Glonass_r16;


/**
 * @brief 枚举 VictimSystemType_r16_Bds_r16（ASN.1 bds-r16，源文件第 2329 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum VictimSystemType_r16_Bds_r16 {
    VictimSystemType_r16_Bds_r16_trueVal = 0, /**< ASN.1 trueVal */
} VictimSystemType_r16_Bds_r16;


/**
 * @brief 枚举 VictimSystemType_r16_Galileo_r16（ASN.1 galileo-r16，源文件第 2330 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum VictimSystemType_r16_Galileo_r16 {
    VictimSystemType_r16_Galileo_r16_trueVal = 0, /**< ASN.1 trueVal */
} VictimSystemType_r16_Galileo_r16;


/**
 * @brief 枚举 VictimSystemType_r16_NavIC_r16（ASN.1 navIC-r16，源文件第 2331 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum VictimSystemType_r16_NavIC_r16 {
    VictimSystemType_r16_NavIC_r16_trueVal = 0, /**< ASN.1 trueVal */
} VictimSystemType_r16_NavIC_r16;


/**
 * @brief 枚举 VictimSystemType_r16_Wlan_r16（ASN.1 wlan-r16，源文件第 2332 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum VictimSystemType_r16_Wlan_r16 {
    VictimSystemType_r16_Wlan_r16_trueVal = 0, /**< ASN.1 trueVal */
} VictimSystemType_r16_Wlan_r16;


/**
 * @brief 枚举 VictimSystemType_r16_Bluetooth_r16（ASN.1 bluetooth-r16，源文件第 2333 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum VictimSystemType_r16_Bluetooth_r16 {
    VictimSystemType_r16_Bluetooth_r16_trueVal = 0, /**< ASN.1 trueVal */
} VictimSystemType_r16_Bluetooth_r16;


/**
 * @brief 枚举 VictimSystemType_r16_ExtGroup1_Uwb_r18（ASN.1 uwb-r18，源文件第 2336 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum VictimSystemType_r16_ExtGroup1_Uwb_r18 {
    VictimSystemType_r16_ExtGroup1_Uwb_r18_trueVal = 0, /**< ASN.1 trueVal */
} VictimSystemType_r16_ExtGroup1_Uwb_r18;


/**
 * @brief 枚举 DRX_Preference_r16_PreferredDRX_InactivityTimer_r16（ASN.1 preferredDRX-InactivityTimer-r16，源文件第 2341 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_Preference_r16_PreferredDRX_InactivityTimer_r16 {
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms0 = 0, /**< ASN.1 ms0 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms1 = 1, /**< ASN.1 ms1 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms2 = 2, /**< ASN.1 ms2 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms3 = 3, /**< ASN.1 ms3 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms4 = 4, /**< ASN.1 ms4 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms5 = 5, /**< ASN.1 ms5 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms6 = 6, /**< ASN.1 ms6 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms8 = 7, /**< ASN.1 ms8 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms10 = 8, /**< ASN.1 ms10 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms20 = 9, /**< ASN.1 ms20 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms30 = 10, /**< ASN.1 ms30 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms40 = 11, /**< ASN.1 ms40 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms50 = 12, /**< ASN.1 ms50 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms60 = 13, /**< ASN.1 ms60 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms80 = 14, /**< ASN.1 ms80 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms100 = 15, /**< ASN.1 ms100 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms200 = 16, /**< ASN.1 ms200 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms300 = 17, /**< ASN.1 ms300 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms500 = 18, /**< ASN.1 ms500 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms750 = 19, /**< ASN.1 ms750 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms1280 = 20, /**< ASN.1 ms1280 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms1920 = 21, /**< ASN.1 ms1920 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_ms2560 = 22, /**< ASN.1 ms2560 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_spare9 = 23, /**< ASN.1 spare9 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_spare8 = 24, /**< ASN.1 spare8 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_spare7 = 25, /**< ASN.1 spare7 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_spare6 = 26, /**< ASN.1 spare6 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_spare5 = 27, /**< ASN.1 spare5 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_spare4 = 28, /**< ASN.1 spare4 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_spare3 = 29, /**< ASN.1 spare3 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_spare2 = 30, /**< ASN.1 spare2 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16_spare1 = 31, /**< ASN.1 spare1 */
} DRX_Preference_r16_PreferredDRX_InactivityTimer_r16;


/**
 * @brief 枚举 DRX_Preference_r16_PreferredDRX_LongCycle_r16（ASN.1 preferredDRX-LongCycle-r16，源文件第 2345 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_Preference_r16_PreferredDRX_LongCycle_r16 {
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms10 = 0, /**< ASN.1 ms10 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms20 = 1, /**< ASN.1 ms20 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms32 = 2, /**< ASN.1 ms32 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms40 = 3, /**< ASN.1 ms40 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms60 = 4, /**< ASN.1 ms60 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms64 = 5, /**< ASN.1 ms64 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms70 = 6, /**< ASN.1 ms70 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms80 = 7, /**< ASN.1 ms80 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms128 = 8, /**< ASN.1 ms128 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms160 = 9, /**< ASN.1 ms160 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms256 = 10, /**< ASN.1 ms256 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms320 = 11, /**< ASN.1 ms320 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms512 = 12, /**< ASN.1 ms512 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms640 = 13, /**< ASN.1 ms640 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms1024 = 14, /**< ASN.1 ms1024 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms1280 = 15, /**< ASN.1 ms1280 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms2048 = 16, /**< ASN.1 ms2048 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms2560 = 17, /**< ASN.1 ms2560 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms5120 = 18, /**< ASN.1 ms5120 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_ms10240 = 19, /**< ASN.1 ms10240 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare12 = 20, /**< ASN.1 spare12 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare11 = 21, /**< ASN.1 spare11 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare10 = 22, /**< ASN.1 spare10 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare9 = 23, /**< ASN.1 spare9 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare8 = 24, /**< ASN.1 spare8 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare7 = 25, /**< ASN.1 spare7 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare6 = 26, /**< ASN.1 spare6 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare5 = 27, /**< ASN.1 spare5 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare4 = 28, /**< ASN.1 spare4 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare3 = 29, /**< ASN.1 spare3 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare2 = 30, /**< ASN.1 spare2 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16_spare1 = 31, /**< ASN.1 spare1 */
} DRX_Preference_r16_PreferredDRX_LongCycle_r16;


/**
 * @brief 枚举 DRX_Preference_r16_PreferredDRX_ShortCycle_r16（ASN.1 preferredDRX-ShortCycle-r16，源文件第 2349 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRX_Preference_r16_PreferredDRX_ShortCycle_r16 {
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms2 = 0, /**< ASN.1 ms2 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms3 = 1, /**< ASN.1 ms3 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms4 = 2, /**< ASN.1 ms4 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms5 = 3, /**< ASN.1 ms5 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms6 = 4, /**< ASN.1 ms6 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms7 = 5, /**< ASN.1 ms7 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms8 = 6, /**< ASN.1 ms8 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms10 = 7, /**< ASN.1 ms10 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms14 = 8, /**< ASN.1 ms14 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms16 = 9, /**< ASN.1 ms16 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms20 = 10, /**< ASN.1 ms20 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms30 = 11, /**< ASN.1 ms30 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms32 = 12, /**< ASN.1 ms32 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms35 = 13, /**< ASN.1 ms35 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms40 = 14, /**< ASN.1 ms40 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms64 = 15, /**< ASN.1 ms64 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms80 = 16, /**< ASN.1 ms80 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms128 = 17, /**< ASN.1 ms128 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms160 = 18, /**< ASN.1 ms160 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms256 = 19, /**< ASN.1 ms256 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms320 = 20, /**< ASN.1 ms320 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms512 = 21, /**< ASN.1 ms512 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_ms640 = 22, /**< ASN.1 ms640 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_spare9 = 23, /**< ASN.1 spare9 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_spare8 = 24, /**< ASN.1 spare8 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_spare7 = 25, /**< ASN.1 spare7 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_spare6 = 26, /**< ASN.1 spare6 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_spare5 = 27, /**< ASN.1 spare5 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_spare4 = 28, /**< ASN.1 spare4 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_spare3 = 29, /**< ASN.1 spare3 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_spare2 = 30, /**< ASN.1 spare2 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16_spare1 = 31, /**< ASN.1 spare1 */
} DRX_Preference_r16_PreferredDRX_ShortCycle_r16;


/**
 * @brief 枚举 MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_15kHz_r16（ASN.1 preferredK0-r16/preferredK0-SCS-15kHz-r16，源文件第 2392 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_15kHz_r16 {
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_15kHz_r16_sl1 = 0, /**< ASN.1 sl1 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_15kHz_r16_sl2 = 1, /**< ASN.1 sl2 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_15kHz_r16_sl4 = 2, /**< ASN.1 sl4 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_15kHz_r16_sl6 = 3, /**< ASN.1 sl6 */
} MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_15kHz_r16;


/**
 * @brief 枚举 MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_30kHz_r16（ASN.1 preferredK0-r16/preferredK0-SCS-30kHz-r16，源文件第 2393 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_30kHz_r16 {
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_30kHz_r16_sl1 = 0, /**< ASN.1 sl1 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_30kHz_r16_sl2 = 1, /**< ASN.1 sl2 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_30kHz_r16_sl4 = 2, /**< ASN.1 sl4 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_30kHz_r16_sl6 = 3, /**< ASN.1 sl6 */
} MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_30kHz_r16;


/**
 * @brief 枚举 MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_60kHz_r16（ASN.1 preferredK0-r16/preferredK0-SCS-60kHz-r16，源文件第 2394 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_60kHz_r16 {
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_60kHz_r16_sl2 = 0, /**< ASN.1 sl2 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_60kHz_r16_sl4 = 1, /**< ASN.1 sl4 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_60kHz_r16_sl8 = 2, /**< ASN.1 sl8 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_60kHz_r16_sl12 = 3, /**< ASN.1 sl12 */
} MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_60kHz_r16;


/**
 * @brief 枚举 MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_120kHz_r16（ASN.1 preferredK0-r16/preferredK0-SCS-120kHz-r16，源文件第 2395 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_120kHz_r16 {
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_120kHz_r16_sl2 = 0, /**< ASN.1 sl2 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_120kHz_r16_sl4 = 1, /**< ASN.1 sl4 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_120kHz_r16_sl8 = 2, /**< ASN.1 sl8 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_120kHz_r16_sl12 = 3, /**< ASN.1 sl12 */
} MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_120kHz_r16;


/**
 * @brief 枚举 MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_15kHz_r16（ASN.1 preferredK2-r16/preferredK2-SCS-15kHz-r16，源文件第 2398 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_15kHz_r16 {
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_15kHz_r16_sl1 = 0, /**< ASN.1 sl1 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_15kHz_r16_sl2 = 1, /**< ASN.1 sl2 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_15kHz_r16_sl4 = 2, /**< ASN.1 sl4 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_15kHz_r16_sl6 = 3, /**< ASN.1 sl6 */
} MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_15kHz_r16;


/**
 * @brief 枚举 MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_30kHz_r16（ASN.1 preferredK2-r16/preferredK2-SCS-30kHz-r16，源文件第 2399 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_30kHz_r16 {
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_30kHz_r16_sl1 = 0, /**< ASN.1 sl1 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_30kHz_r16_sl2 = 1, /**< ASN.1 sl2 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_30kHz_r16_sl4 = 2, /**< ASN.1 sl4 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_30kHz_r16_sl6 = 3, /**< ASN.1 sl6 */
} MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_30kHz_r16;


/**
 * @brief 枚举 MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_60kHz_r16（ASN.1 preferredK2-r16/preferredK2-SCS-60kHz-r16，源文件第 2400 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_60kHz_r16 {
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_60kHz_r16_sl2 = 0, /**< ASN.1 sl2 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_60kHz_r16_sl4 = 1, /**< ASN.1 sl4 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_60kHz_r16_sl8 = 2, /**< ASN.1 sl8 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_60kHz_r16_sl12 = 3, /**< ASN.1 sl12 */
} MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_60kHz_r16;


/**
 * @brief 枚举 MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_120kHz_r16（ASN.1 preferredK2-r16/preferredK2-SCS-120kHz-r16，源文件第 2401 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_120kHz_r16 {
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_120kHz_r16_sl2 = 0, /**< ASN.1 sl2 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_120kHz_r16_sl4 = 1, /**< ASN.1 sl4 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_120kHz_r16_sl8 = 2, /**< ASN.1 sl8 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_120kHz_r16_sl12 = 3, /**< ASN.1 sl12 */
} MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_120kHz_r16;


/**
 * @brief 枚举 MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_480kHz_r17（ASN.1 preferredK0-r17/preferredK0-SCS-480kHz-r17，源文件第 2407 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_480kHz_r17 {
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_480kHz_r17_sl8 = 0, /**< ASN.1 sl8 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_480kHz_r17_sl16 = 1, /**< ASN.1 sl16 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_480kHz_r17_sl32 = 2, /**< ASN.1 sl32 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_480kHz_r17_sl48 = 3, /**< ASN.1 sl48 */
} MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_480kHz_r17;


/**
 * @brief 枚举 MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_960kHz_r17（ASN.1 preferredK0-r17/preferredK0-SCS-960kHz-r17，源文件第 2408 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_960kHz_r17 {
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_960kHz_r17_sl8 = 0, /**< ASN.1 sl8 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_960kHz_r17_sl16 = 1, /**< ASN.1 sl16 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_960kHz_r17_sl32 = 2, /**< ASN.1 sl32 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_960kHz_r17_sl48 = 3, /**< ASN.1 sl48 */
} MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_960kHz_r17;


/**
 * @brief 枚举 MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_480kHz_r17（ASN.1 preferredK2-r17/preferredK2-SCS-480kHz-r17，源文件第 2411 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_480kHz_r17 {
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_480kHz_r17_sl8 = 0, /**< ASN.1 sl8 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_480kHz_r17_sl16 = 1, /**< ASN.1 sl16 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_480kHz_r17_sl32 = 2, /**< ASN.1 sl32 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_480kHz_r17_sl48 = 3, /**< ASN.1 sl48 */
} MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_480kHz_r17;


/**
 * @brief 枚举 MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_960kHz_r17（ASN.1 preferredK2-r17/preferredK2-SCS-960kHz-r17，源文件第 2412 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_960kHz_r17 {
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_960kHz_r17_sl8 = 0, /**< ASN.1 sl8 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_960kHz_r17_sl16 = 1, /**< ASN.1 sl16 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_960kHz_r17_sl32 = 2, /**< ASN.1 sl32 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_960kHz_r17_sl48 = 3, /**< ASN.1 sl48 */
} MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_960kHz_r17;


/**
 * @brief 枚举 MUSIM_Assistance_r17_Musim_PreferredRRC_State_r17（ASN.1 musim-PreferredRRC-State-r17，源文件第 2417 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MUSIM_Assistance_r17_Musim_PreferredRRC_State_r17 {
    MUSIM_Assistance_r17_Musim_PreferredRRC_State_r17_idle = 0, /**< ASN.1 idle */
    MUSIM_Assistance_r17_Musim_PreferredRRC_State_r17_inactive = 1, /**< ASN.1 inactive */
    MUSIM_Assistance_r17_Musim_PreferredRRC_State_r17_outOfConnected = 2, /**< ASN.1 outOfConnected */
} MUSIM_Assistance_r17_Musim_PreferredRRC_State_r17;


/**
 * @brief 枚举 MUSIM_Assistance_v1800_Musim_GapKeepPreference_r18（ASN.1 musim-GapKeepPreference-r18，源文件第 2426 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MUSIM_Assistance_v1800_Musim_GapKeepPreference_r18 {
    MUSIM_Assistance_v1800_Musim_GapKeepPreference_r18_trueVal = 0, /**< ASN.1 trueVal */
} MUSIM_Assistance_v1800_Musim_GapKeepPreference_r18;


/**
 * @brief 枚举 MUSIM_Cell_SCG_ToRelease_r18_Scg_ReleasePreference_r18（ASN.1 scg-ReleasePreference-r18，源文件第 2443 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MUSIM_Cell_SCG_ToRelease_r18_Scg_ReleasePreference_r18 {
    MUSIM_Cell_SCG_ToRelease_r18_Scg_ReleasePreference_r18_scgReleasePreferred = 0, /**< ASN.1 scgReleasePreferred */
} MUSIM_Cell_SCG_ToRelease_r18_Scg_ReleasePreference_r18;


/**
 * @brief 枚举 ReleasePreference_r16_PreferredRRC_State_r16（ASN.1 preferredRRC-State-r16，源文件第 2484 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReleasePreference_r16_PreferredRRC_State_r16 {
    ReleasePreference_r16_PreferredRRC_State_r16_idle = 0, /**< ASN.1 idle */
    ReleasePreference_r16_PreferredRRC_State_r16_inactive = 1, /**< ASN.1 inactive */
    ReleasePreference_r16_PreferredRRC_State_r16_connected = 2, /**< ASN.1 connected */
    ReleasePreference_r16_PreferredRRC_State_r16_outOfConnected = 3, /**< ASN.1 outOfConnected */
} ReleasePreference_r16_PreferredRRC_State_r16;


/**
 * @brief 枚举 SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16（ASN.1 trafficPeriodicity-r16，源文件第 2500 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16 {
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms20 = 0, /**< ASN.1 ms20 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms50 = 1, /**< ASN.1 ms50 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms100 = 2, /**< ASN.1 ms100 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms200 = 3, /**< ASN.1 ms200 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms300 = 4, /**< ASN.1 ms300 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms400 = 5, /**< ASN.1 ms400 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms500 = 6, /**< ASN.1 ms500 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms600 = 7, /**< ASN.1 ms600 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms700 = 8, /**< ASN.1 ms700 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms800 = 9, /**< ASN.1 ms800 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms900 = 10, /**< ASN.1 ms900 */
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16_ms1000 = 11, /**< ASN.1 ms1000 */
} SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16;


/**
 * @brief 枚举 IDC_TDM_Assistance_r18_CycleLength_r18（ASN.1 cycleLength-r18，源文件第 2519 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IDC_TDM_Assistance_r18_CycleLength_r18 {
    IDC_TDM_Assistance_r18_CycleLength_r18_ms2 = 0, /**< ASN.1 ms2 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms3 = 1, /**< ASN.1 ms3 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms4 = 2, /**< ASN.1 ms4 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms5 = 3, /**< ASN.1 ms5 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms6 = 4, /**< ASN.1 ms6 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms7 = 5, /**< ASN.1 ms7 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms8 = 6, /**< ASN.1 ms8 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms10 = 7, /**< ASN.1 ms10 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms14 = 8, /**< ASN.1 ms14 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms16 = 9, /**< ASN.1 ms16 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms20 = 10, /**< ASN.1 ms20 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms30 = 11, /**< ASN.1 ms30 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms32 = 12, /**< ASN.1 ms32 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms35 = 13, /**< ASN.1 ms35 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms40 = 14, /**< ASN.1 ms40 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms60 = 15, /**< ASN.1 ms60 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms64 = 16, /**< ASN.1 ms64 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms70 = 17, /**< ASN.1 ms70 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms80 = 18, /**< ASN.1 ms80 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms96 = 19, /**< ASN.1 ms96 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms100 = 20, /**< ASN.1 ms100 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms128 = 21, /**< ASN.1 ms128 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms160 = 22, /**< ASN.1 ms160 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms256 = 23, /**< ASN.1 ms256 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms320 = 24, /**< ASN.1 ms320 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms512 = 25, /**< ASN.1 ms512 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms640 = 26, /**< ASN.1 ms640 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms1024 = 27, /**< ASN.1 ms1024 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms1280 = 28, /**< ASN.1 ms1280 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms2048 = 29, /**< ASN.1 ms2048 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms2560 = 30, /**< ASN.1 ms2560 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms5120 = 31, /**< ASN.1 ms5120 */
    IDC_TDM_Assistance_r18_CycleLength_r18_ms10240 = 32, /**< ASN.1 ms10240 */
} IDC_TDM_Assistance_r18_CycleLength_r18;


/**
 * @brief 枚举 IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds（ASN.1 activeDuration-r18/milliSeconds，源文件第 2526 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds {
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms1 = 0, /**< ASN.1 ms1 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms2 = 1, /**< ASN.1 ms2 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms3 = 2, /**< ASN.1 ms3 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms4 = 3, /**< ASN.1 ms4 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms5 = 4, /**< ASN.1 ms5 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms6 = 5, /**< ASN.1 ms6 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms8 = 6, /**< ASN.1 ms8 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms10 = 7, /**< ASN.1 ms10 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms20 = 8, /**< ASN.1 ms20 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms30 = 9, /**< ASN.1 ms30 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms40 = 10, /**< ASN.1 ms40 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms50 = 11, /**< ASN.1 ms50 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms60 = 12, /**< ASN.1 ms60 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms80 = 13, /**< ASN.1 ms80 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms100 = 14, /**< ASN.1 ms100 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms200 = 15, /**< ASN.1 ms200 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms300 = 16, /**< ASN.1 ms300 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms400 = 17, /**< ASN.1 ms400 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms500 = 18, /**< ASN.1 ms500 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms600 = 19, /**< ASN.1 ms600 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms800 = 20, /**< ASN.1 ms800 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms1000 = 21, /**< ASN.1 ms1000 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms1200 = 22, /**< ASN.1 ms1200 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_ms1600 = 23, /**< ASN.1 ms1600 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_spare8 = 24, /**< ASN.1 spare8 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_spare7 = 25, /**< ASN.1 spare7 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_spare6 = 26, /**< ASN.1 spare6 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_spare5 = 27, /**< ASN.1 spare5 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_spare4 = 28, /**< ASN.1 spare4 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_spare3 = 29, /**< ASN.1 spare3 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_spare2 = 30, /**< ASN.1 spare2 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds_spare1 = 31, /**< ASN.1 spare1 */
} IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds;


/**
 * @brief 枚举 AffectedCarrierFreqRange_r18_InterferenceDirection_r18（ASN.1 interferenceDirection-r18，源文件第 2537 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AffectedCarrierFreqRange_r18_InterferenceDirection_r18 {
    AffectedCarrierFreqRange_r18_InterferenceDirection_r18_nr = 0, /**< ASN.1 nr */
    AffectedCarrierFreqRange_r18_InterferenceDirection_r18_other = 1, /**< ASN.1 other */
    AffectedCarrierFreqRange_r18_InterferenceDirection_r18_both = 2, /**< ASN.1 both */
    AffectedCarrierFreqRange_r18_InterferenceDirection_r18_spare = 3, /**< ASN.1 spare */
} AffectedCarrierFreqRange_r18_InterferenceDirection_r18;


/**
 * @brief 枚举 AffectedCarrierFreqRangeComb_r18_InterferenceDirection_r18（ASN.1 interferenceDirection-r18，源文件第 2545 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AffectedCarrierFreqRangeComb_r18_InterferenceDirection_r18 {
    AffectedCarrierFreqRangeComb_r18_InterferenceDirection_r18_nr = 0, /**< ASN.1 nr */
    AffectedCarrierFreqRangeComb_r18_InterferenceDirection_r18_other = 1, /**< ASN.1 other */
    AffectedCarrierFreqRangeComb_r18_InterferenceDirection_r18_both = 2, /**< ASN.1 both */
    AffectedCarrierFreqRangeComb_r18_InterferenceDirection_r18_spare = 3, /**< ASN.1 spare */
} AffectedCarrierFreqRangeComb_r18_InterferenceDirection_r18;


/**
 * @brief 枚举 AffectedFreqRange_r18_AffectedBandwidth_r18（ASN.1 affectedBandwidth-r18，源文件第 2551 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AffectedFreqRange_r18_AffectedBandwidth_r18 {
    AffectedFreqRange_r18_AffectedBandwidth_r18_khz200 = 0, /**< ASN.1 khz200 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_khz400 = 1, /**< ASN.1 khz400 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_khz600 = 2, /**< ASN.1 khz600 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_khz800 = 3, /**< ASN.1 khz800 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz1 = 4, /**< ASN.1 mhz1 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz2 = 5, /**< ASN.1 mhz2 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz3 = 6, /**< ASN.1 mhz3 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz4 = 7, /**< ASN.1 mhz4 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz5 = 8, /**< ASN.1 mhz5 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz6 = 9, /**< ASN.1 mhz6 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz8 = 10, /**< ASN.1 mhz8 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz10 = 11, /**< ASN.1 mhz10 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz20 = 12, /**< ASN.1 mhz20 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz30 = 13, /**< ASN.1 mhz30 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz40 = 14, /**< ASN.1 mhz40 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz50 = 15, /**< ASN.1 mhz50 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz60 = 16, /**< ASN.1 mhz60 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz80 = 17, /**< ASN.1 mhz80 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz100 = 18, /**< ASN.1 mhz100 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz200 = 19, /**< ASN.1 mhz200 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz300 = 20, /**< ASN.1 mhz300 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_mhz400 = 21, /**< ASN.1 mhz400 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_spare10 = 22, /**< ASN.1 spare10 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_spare9 = 23, /**< ASN.1 spare9 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_spare8 = 24, /**< ASN.1 spare8 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_spare7 = 25, /**< ASN.1 spare7 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_spare6 = 26, /**< ASN.1 spare6 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_spare5 = 27, /**< ASN.1 spare5 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_spare4 = 28, /**< ASN.1 spare4 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_spare3 = 29, /**< ASN.1 spare3 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_spare2 = 30, /**< ASN.1 spare2 */
    AffectedFreqRange_r18_AffectedBandwidth_r18_spare1 = 31, /**< ASN.1 spare1 */
} AffectedFreqRange_r18_AffectedBandwidth_r18;


/**
 * @brief 枚举 SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18（ASN.1 sl-PRS-Periodicity-r18，源文件第 2590 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18 {
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms100 = 0, /**< ASN.1 ms100 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms200 = 1, /**< ASN.1 ms200 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms300 = 2, /**< ASN.1 ms300 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms400 = 3, /**< ASN.1 ms400 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms500 = 4, /**< ASN.1 ms500 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms600 = 5, /**< ASN.1 ms600 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms700 = 6, /**< ASN.1 ms700 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms800 = 7, /**< ASN.1 ms800 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms900 = 8, /**< ASN.1 ms900 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_ms1000 = 9, /**< ASN.1 ms1000 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_spare6 = 10, /**< ASN.1 spare6 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_spare5 = 11, /**< ASN.1 spare5 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_spare4 = 12, /**< ASN.1 spare4 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_spare3 = 13, /**< ASN.1 spare3 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_spare2 = 14, /**< ASN.1 spare2 */
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18_spare1 = 15, /**< ASN.1 spare1 */
} SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18;


/**
 * @brief 枚举 SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18（ASN.1 sl-PRS-Bandwidth-r18，源文件第 2594 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18 {
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz5 = 0, /**< ASN.1 mhz5 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz10 = 1, /**< ASN.1 mhz10 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz15 = 2, /**< ASN.1 mhz15 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz20 = 3, /**< ASN.1 mhz20 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz25 = 4, /**< ASN.1 mhz25 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz30 = 5, /**< ASN.1 mhz30 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz35 = 6, /**< ASN.1 mhz35 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz40 = 7, /**< ASN.1 mhz40 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz45 = 8, /**< ASN.1 mhz45 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz50 = 9, /**< ASN.1 mhz50 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz60 = 10, /**< ASN.1 mhz60 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz70 = 11, /**< ASN.1 mhz70 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz80 = 12, /**< ASN.1 mhz80 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz90 = 13, /**< ASN.1 mhz90 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18_mhz100 = 14, /**< ASN.1 mhz100 */
} SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18;


/**
 * @brief 枚举 UECapabilityEnquiry_v1610_IEs_Rrc_SegAllowed_r16（ASN.1 rrc-SegAllowed-r16，源文件第 2624 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UECapabilityEnquiry_v1610_IEs_Rrc_SegAllowed_r16 {
    UECapabilityEnquiry_v1610_IEs_Rrc_SegAllowed_r16_enabled = 0, /**< ASN.1 enabled */
} UECapabilityEnquiry_v1610_IEs_Rrc_SegAllowed_r16;


/**
 * @brief 枚举 UEInformationRequest_r16_IEs_IdleModeMeasurementReq_r16（ASN.1 idleModeMeasurementReq-r16，源文件第 2657 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEInformationRequest_r16_IEs_IdleModeMeasurementReq_r16 {
    UEInformationRequest_r16_IEs_IdleModeMeasurementReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} UEInformationRequest_r16_IEs_IdleModeMeasurementReq_r16;


/**
 * @brief 枚举 UEInformationRequest_r16_IEs_LogMeasReportReq_r16（ASN.1 logMeasReportReq-r16，源文件第 2658 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEInformationRequest_r16_IEs_LogMeasReportReq_r16 {
    UEInformationRequest_r16_IEs_LogMeasReportReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} UEInformationRequest_r16_IEs_LogMeasReportReq_r16;


/**
 * @brief 枚举 UEInformationRequest_r16_IEs_ConnEstFailReportReq_r16（ASN.1 connEstFailReportReq-r16，源文件第 2659 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEInformationRequest_r16_IEs_ConnEstFailReportReq_r16 {
    UEInformationRequest_r16_IEs_ConnEstFailReportReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} UEInformationRequest_r16_IEs_ConnEstFailReportReq_r16;


/**
 * @brief 枚举 UEInformationRequest_r16_IEs_Ra_ReportReq_r16（ASN.1 ra-ReportReq-r16，源文件第 2660 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEInformationRequest_r16_IEs_Ra_ReportReq_r16 {
    UEInformationRequest_r16_IEs_Ra_ReportReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} UEInformationRequest_r16_IEs_Ra_ReportReq_r16;


/**
 * @brief 枚举 UEInformationRequest_r16_IEs_Rlf_ReportReq_r16（ASN.1 rlf-ReportReq-r16，源文件第 2661 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEInformationRequest_r16_IEs_Rlf_ReportReq_r16 {
    UEInformationRequest_r16_IEs_Rlf_ReportReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} UEInformationRequest_r16_IEs_Rlf_ReportReq_r16;


/**
 * @brief 枚举 UEInformationRequest_r16_IEs_MobilityHistoryReportReq_r16（ASN.1 mobilityHistoryReportReq-r16，源文件第 2662 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEInformationRequest_r16_IEs_MobilityHistoryReportReq_r16 {
    UEInformationRequest_r16_IEs_MobilityHistoryReportReq_r16_trueVal = 0, /**< ASN.1 trueVal */
} UEInformationRequest_r16_IEs_MobilityHistoryReportReq_r16;


/**
 * @brief 枚举 UEInformationRequest_v1700_IEs_SuccessHO_ReportReq_r17（ASN.1 successHO-ReportReq-r17，源文件第 2668 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEInformationRequest_v1700_IEs_SuccessHO_ReportReq_r17 {
    UEInformationRequest_v1700_IEs_SuccessHO_ReportReq_r17_trueVal = 0, /**< ASN.1 trueVal */
} UEInformationRequest_v1700_IEs_SuccessHO_ReportReq_r17;


/**
 * @brief 枚举 UEInformationRequest_v1700_IEs_CoarseLocationRequest_r17（ASN.1 coarseLocationRequest-r17，源文件第 2669 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEInformationRequest_v1700_IEs_CoarseLocationRequest_r17 {
    UEInformationRequest_v1700_IEs_CoarseLocationRequest_r17_trueVal = 0, /**< ASN.1 trueVal */
} UEInformationRequest_v1700_IEs_CoarseLocationRequest_r17;


/**
 * @brief 枚举 UEInformationRequest_v1800_IEs_SuccessPSCell_ReportReq_r18（ASN.1 successPSCell-ReportReq-r18，源文件第 2675 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEInformationRequest_v1800_IEs_SuccessPSCell_ReportReq_r18 {
    UEInformationRequest_v1800_IEs_SuccessPSCell_ReportReq_r18_trueVal = 0, /**< ASN.1 trueVal */
} UEInformationRequest_v1800_IEs_SuccessPSCell_ReportReq_r18;


/**
 * @brief 枚举 UEInformationRequest_v1800_IEs_ReselectionMeasurementReq_r18（ASN.1 reselectionMeasurementReq-r18，源文件第 2676 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEInformationRequest_v1800_IEs_ReselectionMeasurementReq_r18 {
    UEInformationRequest_v1800_IEs_ReselectionMeasurementReq_r18_trueVal = 0, /**< ASN.1 trueVal */
} UEInformationRequest_v1800_IEs_ReselectionMeasurementReq_r18;


/**
 * @brief 枚举 FlightPathInfoReportConfig_r18_IncludeTimeStamp_r18（ASN.1 includeTimeStamp-r18，源文件第 2682 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FlightPathInfoReportConfig_r18_IncludeTimeStamp_r18 {
    FlightPathInfoReportConfig_r18_IncludeTimeStamp_r18_trueVal = 0, /**< ASN.1 trueVal */
} FlightPathInfoReportConfig_r18_IncludeTimeStamp_r18;


/**
 * @brief 枚举 LogMeasReport_r16_LogMeasAvailable_r16（ASN.1 logMeasAvailable-r16，源文件第 2735 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogMeasReport_r16_LogMeasAvailable_r16 {
    LogMeasReport_r16_LogMeasAvailable_r16_trueVal = 0, /**< ASN.1 trueVal */
} LogMeasReport_r16_LogMeasAvailable_r16;


/**
 * @brief 枚举 LogMeasReport_r16_LogMeasAvailableBT_r16（ASN.1 logMeasAvailableBT-r16，源文件第 2736 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogMeasReport_r16_LogMeasAvailableBT_r16 {
    LogMeasReport_r16_LogMeasAvailableBT_r16_trueVal = 0, /**< ASN.1 trueVal */
} LogMeasReport_r16_LogMeasAvailableBT_r16;


/**
 * @brief 枚举 LogMeasReport_r16_LogMeasAvailableWLAN_r16（ASN.1 logMeasAvailableWLAN-r16，源文件第 2737 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogMeasReport_r16_LogMeasAvailableWLAN_r16 {
    LogMeasReport_r16_LogMeasAvailableWLAN_r16_trueVal = 0, /**< ASN.1 trueVal */
} LogMeasReport_r16_LogMeasAvailableWLAN_r16;


/**
 * @brief 枚举 LogMeasInfo_r16_AnyCellSelectionDetected_r16（ASN.1 anyCellSelectionDetected-r16，源文件第 2752 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogMeasInfo_r16_AnyCellSelectionDetected_r16 {
    LogMeasInfo_r16_AnyCellSelectionDetected_r16_trueVal = 0, /**< ASN.1 trueVal */
} LogMeasInfo_r16_AnyCellSelectionDetected_r16;


/**
 * @brief 枚举 LogMeasInfo_r16_ExtGroup1_InDeviceCoexDetected_r17（ASN.1 inDeviceCoexDetected-r17，源文件第 2755 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum LogMeasInfo_r16_ExtGroup1_InDeviceCoexDetected_r17 {
    LogMeasInfo_r16_ExtGroup1_InDeviceCoexDetected_r17_trueVal = 0, /**< ASN.1 trueVal */
} LogMeasInfo_r16_ExtGroup1_InDeviceCoexDetected_r17;


/**
 * @brief 枚举 RA_Report_r16_RaPurpose_r16（ASN.1 raPurpose-r16，源文件第 2803 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_Report_r16_RaPurpose_r16 {
    RA_Report_r16_RaPurpose_r16_accessRelated = 0, /**< ASN.1 accessRelated */
    RA_Report_r16_RaPurpose_r16_beamFailureRecovery = 1, /**< ASN.1 beamFailureRecovery */
    RA_Report_r16_RaPurpose_r16_reconfigurationWithSync = 2, /**< ASN.1 reconfigurationWithSync */
    RA_Report_r16_RaPurpose_r16_ulUnSynchronized = 3, /**< ASN.1 ulUnSynchronized */
    RA_Report_r16_RaPurpose_r16_schedulingRequestFailure = 4, /**< ASN.1 schedulingRequestFailure */
    RA_Report_r16_RaPurpose_r16_noPUCCHResourceAvailable = 5, /**< ASN.1 noPUCCHResourceAvailable */
    RA_Report_r16_RaPurpose_r16_requestForOtherSI = 6, /**< ASN.1 requestForOtherSI */
    RA_Report_r16_RaPurpose_r16_msg3RequestForOtherSI_r17 = 7, /**< ASN.1 msg3RequestForOtherSI-r17 */
    RA_Report_r16_RaPurpose_r16_lbtFailure_r18 = 8, /**< ASN.1 lbtFailure-r18 */
    RA_Report_r16_RaPurpose_r16_spare7 = 9, /**< ASN.1 spare7 */
    RA_Report_r16_RaPurpose_r16_spare6 = 10, /**< ASN.1 spare6 */
    RA_Report_r16_RaPurpose_r16_spare5 = 11, /**< ASN.1 spare5 */
    RA_Report_r16_RaPurpose_r16_spare4 = 12, /**< ASN.1 spare4 */
    RA_Report_r16_RaPurpose_r16_spare3 = 13, /**< ASN.1 spare3 */
    RA_Report_r16_RaPurpose_r16_spare2 = 14, /**< ASN.1 spare2 */
    RA_Report_r16_RaPurpose_r16_spare1 = 15, /**< ASN.1 spare1 */
} RA_Report_r16_RaPurpose_r16;


/**
 * @brief 枚举 RA_InformationCommon_r16_Msg1_FDM_r16（ASN.1 msg1-FDM-r16，源文件第 2821 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_Msg1_FDM_r16 {
    RA_InformationCommon_r16_Msg1_FDM_r16_one = 0, /**< ASN.1 one */
    RA_InformationCommon_r16_Msg1_FDM_r16_two = 1, /**< ASN.1 two */
    RA_InformationCommon_r16_Msg1_FDM_r16_four = 2, /**< ASN.1 four */
    RA_InformationCommon_r16_Msg1_FDM_r16_eight = 3, /**< ASN.1 eight */
} RA_InformationCommon_r16_Msg1_FDM_r16;


/**
 * @brief 枚举 RA_InformationCommon_r16_Msg1_FDMCFRA_r16（ASN.1 msg1-FDMCFRA-r16，源文件第 2822 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_Msg1_FDMCFRA_r16 {
    RA_InformationCommon_r16_Msg1_FDMCFRA_r16_one = 0, /**< ASN.1 one */
    RA_InformationCommon_r16_Msg1_FDMCFRA_r16_two = 1, /**< ASN.1 two */
    RA_InformationCommon_r16_Msg1_FDMCFRA_r16_four = 2, /**< ASN.1 four */
    RA_InformationCommon_r16_Msg1_FDMCFRA_r16_eight = 3, /**< ASN.1 eight */
} RA_InformationCommon_r16_Msg1_FDMCFRA_r16;


/**
 * @brief 枚举 RA_InformationCommon_r16_ExtGroup2_Msg1_SCS_From_prach_ConfigurationIndex_r16（ASN.1 msg1-SCS-From-prach-ConfigurationIndex-r16，源文件第 2829 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_ExtGroup2_Msg1_SCS_From_prach_ConfigurationIndex_r16 {
    RA_InformationCommon_r16_ExtGroup2_Msg1_SCS_From_prach_ConfigurationIndex_r16_kHz1dot25 = 0, /**< ASN.1 kHz1dot25 */
    RA_InformationCommon_r16_ExtGroup2_Msg1_SCS_From_prach_ConfigurationIndex_r16_kHz5 = 1, /**< ASN.1 kHz5 */
    RA_InformationCommon_r16_ExtGroup2_Msg1_SCS_From_prach_ConfigurationIndex_r16_spare2 = 2, /**< ASN.1 spare2 */
    RA_InformationCommon_r16_ExtGroup2_Msg1_SCS_From_prach_ConfigurationIndex_r16_spare1 = 3, /**< ASN.1 spare1 */
} RA_InformationCommon_r16_ExtGroup2_Msg1_SCS_From_prach_ConfigurationIndex_r16;


/**
 * @brief 枚举 RA_InformationCommon_r16_ExtGroup3_Msg1_SCS_From_prach_ConfigurationIndexCFRA_r16（ASN.1 msg1-SCS-From-prach-ConfigurationIndexCFRA-r16，源文件第 2832 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_ExtGroup3_Msg1_SCS_From_prach_ConfigurationIndexCFRA_r16 {
    RA_InformationCommon_r16_ExtGroup3_Msg1_SCS_From_prach_ConfigurationIndexCFRA_r16_kHz1dot25 = 0, /**< ASN.1 kHz1dot25 */
    RA_InformationCommon_r16_ExtGroup3_Msg1_SCS_From_prach_ConfigurationIndexCFRA_r16_kHz5 = 1, /**< ASN.1 kHz5 */
    RA_InformationCommon_r16_ExtGroup3_Msg1_SCS_From_prach_ConfigurationIndexCFRA_r16_spare2 = 2, /**< ASN.1 spare2 */
    RA_InformationCommon_r16_ExtGroup3_Msg1_SCS_From_prach_ConfigurationIndexCFRA_r16_spare1 = 3, /**< ASN.1 spare1 */
} RA_InformationCommon_r16_ExtGroup3_Msg1_SCS_From_prach_ConfigurationIndexCFRA_r16;


/**
 * @brief 枚举 RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDM_r17（ASN.1 msgA-RO-FDM-r17，源文件第 2838 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDM_r17 {
    RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDM_r17_one = 0, /**< ASN.1 one */
    RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDM_r17_two = 1, /**< ASN.1 two */
    RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDM_r17_four = 2, /**< ASN.1 four */
    RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDM_r17_eight = 3, /**< ASN.1 eight */
} RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDM_r17;


/**
 * @brief 枚举 RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDMCFRA_r17（ASN.1 msgA-RO-FDMCFRA-r17，源文件第 2839 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDMCFRA_r17 {
    RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDMCFRA_r17_one = 0, /**< ASN.1 one */
    RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDMCFRA_r17_two = 1, /**< ASN.1 two */
    RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDMCFRA_r17_four = 2, /**< ASN.1 four */
    RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDMCFRA_r17_eight = 3, /**< ASN.1 eight */
} RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDMCFRA_r17;


/**
 * @brief 枚举 RA_InformationCommon_r16_ExtGroup4_MsgA_SCS_From_prach_ConfigurationIndex_r17（ASN.1 msgA-SCS-From-prach-ConfigurationIndex-r17，源文件第 2840 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_ExtGroup4_MsgA_SCS_From_prach_ConfigurationIndex_r17 {
    RA_InformationCommon_r16_ExtGroup4_MsgA_SCS_From_prach_ConfigurationIndex_r17_kHz1dot25 = 0, /**< ASN.1 kHz1dot25 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_SCS_From_prach_ConfigurationIndex_r17_kHz5 = 1, /**< ASN.1 kHz5 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_SCS_From_prach_ConfigurationIndex_r17_spare2 = 2, /**< ASN.1 spare2 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_SCS_From_prach_ConfigurationIndex_r17_spare1 = 3, /**< ASN.1 spare1 */
} RA_InformationCommon_r16_ExtGroup4_MsgA_SCS_From_prach_ConfigurationIndex_r17;


/**
 * @brief 枚举 RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17（ASN.1 msgA-TransMax-r17，源文件第 2841 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17 {
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17_n1 = 0, /**< ASN.1 n1 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17_n2 = 1, /**< ASN.1 n2 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17_n4 = 2, /**< ASN.1 n4 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17_n6 = 3, /**< ASN.1 n6 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17_n8 = 4, /**< ASN.1 n8 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17_n10 = 5, /**< ASN.1 n10 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17_n20 = 6, /**< ASN.1 n20 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17_n50 = 7, /**< ASN.1 n50 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17_n100 = 8, /**< ASN.1 n100 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17_n200 = 9, /**< ASN.1 n200 */
} RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17;


/**
 * @brief 枚举 RA_InformationCommon_r16_ExtGroup4_NrofMsgA_PO_FDM_r17（ASN.1 nrofMsgA-PO-FDM-r17，源文件第 2846 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_ExtGroup4_NrofMsgA_PO_FDM_r17 {
    RA_InformationCommon_r16_ExtGroup4_NrofMsgA_PO_FDM_r17_one = 0, /**< ASN.1 one */
    RA_InformationCommon_r16_ExtGroup4_NrofMsgA_PO_FDM_r17_two = 1, /**< ASN.1 two */
    RA_InformationCommon_r16_ExtGroup4_NrofMsgA_PO_FDM_r17_four = 2, /**< ASN.1 four */
    RA_InformationCommon_r16_ExtGroup4_NrofMsgA_PO_FDM_r17_eight = 3, /**< ASN.1 eight */
} RA_InformationCommon_r16_ExtGroup4_NrofMsgA_PO_FDM_r17;


/**
 * @brief 枚举 RA_InformationCommon_r16_ExtGroup4_OnDemandSISuccess_r17（ASN.1 onDemandSISuccess-r17，源文件第 2851 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_ExtGroup4_OnDemandSISuccess_r17 {
    RA_InformationCommon_r16_ExtGroup4_OnDemandSISuccess_r17_trueVal = 0, /**< ASN.1 trueVal */
} RA_InformationCommon_r16_ExtGroup4_OnDemandSISuccess_r17;


/**
 * @brief 枚举 RA_InformationCommon_r16_ExtGroup5_Sdt_Failed_r18（ASN.1 sdt-Failed-r18，源文件第 2861 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_InformationCommon_r16_ExtGroup5_Sdt_Failed_r18 {
    RA_InformationCommon_r16_ExtGroup5_Sdt_Failed_r18_trueVal = 0, /**< ASN.1 trueVal */
} RA_InformationCommon_r16_ExtGroup5_Sdt_Failed_r18;


/**
 * @brief 枚举 ReportedFeatureCombination_r18_RedCap_r18（ASN.1 redCap-r18，源文件第 2871 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReportedFeatureCombination_r18_RedCap_r18 {
    ReportedFeatureCombination_r18_RedCap_r18_trueVal = 0, /**< ASN.1 trueVal */
} ReportedFeatureCombination_r18_RedCap_r18;


/**
 * @brief 枚举 ReportedFeatureCombination_r18_SmallData_r18（ASN.1 smallData-r18，源文件第 2872 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReportedFeatureCombination_r18_SmallData_r18 {
    ReportedFeatureCombination_r18_SmallData_r18_trueVal = 0, /**< ASN.1 trueVal */
} ReportedFeatureCombination_r18_SmallData_r18;


/**
 * @brief 枚举 ReportedFeatureCombination_r18_Msg3_Repetitions_r18（ASN.1 msg3-Repetitions-r18，源文件第 2874 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReportedFeatureCombination_r18_Msg3_Repetitions_r18 {
    ReportedFeatureCombination_r18_Msg3_Repetitions_r18_trueVal = 0, /**< ASN.1 trueVal */
} ReportedFeatureCombination_r18_Msg3_Repetitions_r18;


/**
 * @brief 枚举 ReportedFeatureCombination_r18_Msg1_Repetitions_r18（ASN.1 msg1-Repetitions-r18，源文件第 2875 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReportedFeatureCombination_r18_Msg1_Repetitions_r18 {
    ReportedFeatureCombination_r18_Msg1_Repetitions_r18_trueVal = 0, /**< ASN.1 trueVal */
} ReportedFeatureCombination_r18_Msg1_Repetitions_r18;


/**
 * @brief 枚举 ReportedFeatureCombination_r18_ERedCap_r18（ASN.1 eRedCap-r18，源文件第 2876 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReportedFeatureCombination_r18_ERedCap_r18 {
    ReportedFeatureCombination_r18_ERedCap_r18_trueVal = 0, /**< ASN.1 trueVal */
} ReportedFeatureCombination_r18_ERedCap_r18;


/**
 * @brief 枚举 PerRASSBInfo_v1800_AllPreamblesBlocked（ASN.1 allPreamblesBlocked，源文件第 2903 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PerRASSBInfo_v1800_AllPreamblesBlocked {
    PerRASSBInfo_v1800_AllPreamblesBlocked_trueVal = 0, /**< ASN.1 trueVal */
} PerRASSBInfo_v1800_AllPreamblesBlocked;


/**
 * @brief 枚举 PerRASSBInfo_v1800_Lbt_Detected_r18（ASN.1 lbt-Detected-r18，源文件第 2904 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PerRASSBInfo_v1800_Lbt_Detected_r18 {
    PerRASSBInfo_v1800_Lbt_Detected_r18_trueVal = 0, /**< ASN.1 trueVal */
} PerRASSBInfo_v1800_Lbt_Detected_r18;


/**
 * @brief 枚举 PerRACSI_RSInfo_v1800_AllPreamblesBlocked（ASN.1 allPreamblesBlocked，源文件第 2918 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PerRACSI_RSInfo_v1800_AllPreamblesBlocked {
    PerRACSI_RSInfo_v1800_AllPreamblesBlocked_trueVal = 0, /**< ASN.1 trueVal */
} PerRACSI_RSInfo_v1800_AllPreamblesBlocked;


/**
 * @brief 枚举 PerRACSI_RSInfo_v1800_Lbt_Detected_r18（ASN.1 lbt-Detected-r18，源文件第 2919 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PerRACSI_RSInfo_v1800_Lbt_Detected_r18 {
    PerRACSI_RSInfo_v1800_Lbt_Detected_r18_trueVal = 0, /**< ASN.1 trueVal */
} PerRACSI_RSInfo_v1800_Lbt_Detected_r18;


/**
 * @brief 枚举 PerRAAttemptInfo_r16_ExtGroup1_FallbackToFourStepRA_r17（ASN.1 fallbackToFourStepRA-r17，源文件第 2930 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PerRAAttemptInfo_r16_ExtGroup1_FallbackToFourStepRA_r17 {
    PerRAAttemptInfo_r16_ExtGroup1_FallbackToFourStepRA_r17_trueVal = 0, /**< ASN.1 trueVal */
} PerRAAttemptInfo_r16_ExtGroup1_FallbackToFourStepRA_r17;


/**
 * @brief 枚举 RLF_Report_r16_Nr_RLF_Report_r16_ConnectionFailureType_r16（ASN.1 nr-RLF-Report-r16/connectionFailureType-r16，源文件第 2971 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_ConnectionFailureType_r16 {
    RLF_Report_r16_Nr_RLF_Report_r16_ConnectionFailureType_r16_rlf = 0, /**< ASN.1 rlf */
    RLF_Report_r16_Nr_RLF_Report_r16_ConnectionFailureType_r16_hof = 1, /**< ASN.1 hof */
} RLF_Report_r16_Nr_RLF_Report_r16_ConnectionFailureType_r16;


/**
 * @brief 枚举 RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16（ASN.1 nr-RLF-Report-r16/rlf-Cause-r16，源文件第 2972 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16 {
    RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16_t310_Expiry = 0, /**< ASN.1 t310-Expiry */
    RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16_randomAccessProblem = 1, /**< ASN.1 randomAccessProblem */
    RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16_rlc_MaxNumRetx = 2, /**< ASN.1 rlc-MaxNumRetx */
    RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16_beamFailureRecoveryFailure = 3, /**< ASN.1 beamFailureRecoveryFailure */
    RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16_lbtFailure_r16 = 4, /**< ASN.1 lbtFailure-r16 */
    RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16_bh_rlfRecoveryFailure = 5, /**< ASN.1 bh-rlfRecoveryFailure */
    RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16_t312_expiry_r17 = 6, /**< ASN.1 t312-expiry-r17 */
    RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16_spare1 = 7, /**< ASN.1 spare1 */
} RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16;


/**
 * @brief 枚举 RLF_Report_r16_Nr_RLF_Report_r16_NoSuitableCellFound_r16（ASN.1 nr-RLF-Report-r16/noSuitableCellFound-r16，源文件第 2976 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_NoSuitableCellFound_r16 {
    RLF_Report_r16_Nr_RLF_Report_r16_NoSuitableCellFound_r16_trueVal = 0, /**< ASN.1 trueVal */
} RLF_Report_r16_Nr_RLF_Report_r16_NoSuitableCellFound_r16;


/**
 * @brief 枚举 RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_LastHO_Type_r17（ASN.1 nr-RLF-Report-r16/lastHO-Type-r17，源文件第 2983 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_LastHO_Type_r17 {
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_LastHO_Type_r17_cho = 0, /**< ASN.1 cho */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_LastHO_Type_r17_daps = 1, /**< ASN.1 daps */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_LastHO_Type_r17_spare2 = 2, /**< ASN.1 spare2 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_LastHO_Type_r17_spare1 = 3, /**< ASN.1 spare1 */
} RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_LastHO_Type_r17;


/**
 * @brief 枚举 RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_McgRecoveryFailureCause_r18（ASN.1 nr-RLF-Report-r16/mcgRecoveryFailureCause-r18，源文件第 2997 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_McgRecoveryFailureCause_r18 {
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_McgRecoveryFailureCause_r18_t316_Expiry = 0, /**< ASN.1 t316-Expiry */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_McgRecoveryFailureCause_r18_scgDeactivated = 1, /**< ASN.1 scgDeactivated */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_McgRecoveryFailureCause_r18_spare2 = 2, /**< ASN.1 spare2 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_McgRecoveryFailureCause_r18_spare1 = 3, /**< ASN.1 spare1 */
} RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_McgRecoveryFailureCause_r18;


/**
 * @brief 枚举 RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18（ASN.1 nr-RLF-Report-r16/scgFailureCause-r18，源文件第 2998 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18 {
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_t310_Expiry = 0, /**< ASN.1 t310-Expiry */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_randomAccessProblem = 1, /**< ASN.1 randomAccessProblem */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_rlc_MaxNumRetx = 2, /**< ASN.1 rlc-MaxNumRetx */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_synchReconfigFailureSCG = 3, /**< ASN.1 synchReconfigFailureSCG */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_scg_ReconfigFailure = 4, /**< ASN.1 scg-ReconfigFailure */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_srb3_IntegrityFailure = 5, /**< ASN.1 srb3-IntegrityFailure */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_scg_lbtFailure_r16 = 6, /**< ASN.1 scg-lbtFailure-r16 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_beamFailureRecoveryFailure_r16 = 7, /**< ASN.1 beamFailureRecoveryFailure-r16 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_t312_Expiry_r16 = 8, /**< ASN.1 t312-Expiry-r16 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_bh_RLF_r16 = 9, /**< ASN.1 bh-RLF-r16 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_beamFailure_r17 = 10, /**< ASN.1 beamFailure-r17 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_spare3 = 11, /**< ASN.1 spare3 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_spare2 = 12, /**< ASN.1 spare2 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18_spare1 = 13, /**< ASN.1 spare1 */
} RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18;


/**
 * @brief 枚举 RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_VoiceFallbackHO_r18（ASN.1 nr-RLF-Report-r16/voiceFallbackHO-r18，源文件第 3004 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_VoiceFallbackHO_r18 {
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_VoiceFallbackHO_r18_trueVal = 0, /**< ASN.1 trueVal */
} RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_VoiceFallbackHO_r18;


/**
 * @brief 枚举 SuccessHO_Report_r17_SourceCellInfo_r17_Rlf_InSourceDAPS_r17（ASN.1 sourceCellInfo-r17/rlf-InSourceDAPS-r17，源文件第 3025 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SuccessHO_Report_r17_SourceCellInfo_r17_Rlf_InSourceDAPS_r17 {
    SuccessHO_Report_r17_SourceCellInfo_r17_Rlf_InSourceDAPS_r17_trueVal = 0, /**< ASN.1 trueVal */
} SuccessHO_Report_r17_SourceCellInfo_r17_Rlf_InSourceDAPS_r17;


/**
 * @brief 枚举 SuccessPSCell_Report_r18_Sn_InitiatedPSCellChange_r18（ASN.1 sn-InitiatedPSCellChange-r18，源文件第 3081 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SuccessPSCell_Report_r18_Sn_InitiatedPSCellChange_r18 {
    SuccessPSCell_Report_r18_Sn_InitiatedPSCellChange_r18_trueVal = 0, /**< ASN.1 trueVal */
} SuccessPSCell_Report_r18_Sn_InitiatedPSCellChange_r18;


/**
 * @brief 枚举 SHR_Cause_r17_T304_cause_r17（ASN.1 t304-cause-r17，源文件第 3159 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SHR_Cause_r17_T304_cause_r17 {
    SHR_Cause_r17_T304_cause_r17_trueVal = 0, /**< ASN.1 trueVal */
} SHR_Cause_r17_T304_cause_r17;


/**
 * @brief 枚举 SHR_Cause_r17_T310_cause_r17（ASN.1 t310-cause-r17，源文件第 3160 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SHR_Cause_r17_T310_cause_r17 {
    SHR_Cause_r17_T310_cause_r17_trueVal = 0, /**< ASN.1 trueVal */
} SHR_Cause_r17_T310_cause_r17;


/**
 * @brief 枚举 SHR_Cause_r17_T312_cause_r17（ASN.1 t312-cause-r17，源文件第 3161 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SHR_Cause_r17_T312_cause_r17 {
    SHR_Cause_r17_T312_cause_r17_trueVal = 0, /**< ASN.1 trueVal */
} SHR_Cause_r17_T312_cause_r17;


/**
 * @brief 枚举 SHR_Cause_r17_SourceDAPS_Failure_r17（ASN.1 sourceDAPS-Failure-r17，源文件第 3162 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SHR_Cause_r17_SourceDAPS_Failure_r17 {
    SHR_Cause_r17_SourceDAPS_Failure_r17_trueVal = 0, /**< ASN.1 trueVal */
} SHR_Cause_r17_SourceDAPS_Failure_r17;


/**
 * @brief 枚举 SPR_Cause_r18_T304_cause_r18（ASN.1 t304-cause-r18，源文件第 3167 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SPR_Cause_r18_T304_cause_r18 {
    SPR_Cause_r18_T304_cause_r18_trueVal = 0, /**< ASN.1 trueVal */
} SPR_Cause_r18_T304_cause_r18;


/**
 * @brief 枚举 SPR_Cause_r18_T310_cause_r18（ASN.1 t310-cause-r18，源文件第 3168 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SPR_Cause_r18_T310_cause_r18 {
    SPR_Cause_r18_T310_cause_r18_trueVal = 0, /**< ASN.1 trueVal */
} SPR_Cause_r18_T310_cause_r18;


/**
 * @brief 枚举 SPR_Cause_r18_T312_cause_r18（ASN.1 t312-cause-r18，源文件第 3169 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SPR_Cause_r18_T312_cause_r18 {
    SPR_Cause_r18_T312_cause_r18_trueVal = 0, /**< ASN.1 trueVal */
} SPR_Cause_r18_T312_cause_r18;


/**
 * @brief 枚举 UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17（ASN.1 ue-TxTEG-TimingErrorMarginValue-r17，源文件第 3210 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17 {
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc0 = 0, /**< ASN.1 tc0 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc2 = 1, /**< ASN.1 tc2 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc4 = 2, /**< ASN.1 tc4 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc6 = 3, /**< ASN.1 tc6 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc8 = 4, /**< ASN.1 tc8 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc12 = 5, /**< ASN.1 tc12 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc16 = 6, /**< ASN.1 tc16 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc20 = 7, /**< ASN.1 tc20 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc24 = 8, /**< ASN.1 tc24 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc32 = 9, /**< ASN.1 tc32 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc40 = 10, /**< ASN.1 tc40 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc48 = 11, /**< ASN.1 tc48 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc56 = 12, /**< ASN.1 tc56 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc64 = 13, /**< ASN.1 tc64 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc72 = 14, /**< ASN.1 tc72 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17_tc80 = 15, /**< ASN.1 tc80 */
} UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17;


/**
 * @brief 枚举 ULDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16（ASN.1 rrc-MessageSegmentType-r16，源文件第 3248 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ULDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16 {
    ULDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16_notLastSegment = 0, /**< ASN.1 notLastSegment */
    ULDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16_lastSegment = 1, /**< ASN.1 lastSegment */
} ULDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16;


/**
 * @brief 枚举 SIB2_CellReselectionInfoCommon_Q_Hyst（ASN.1 cellReselectionInfoCommon/q-Hyst，源文件第 3329 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB2_CellReselectionInfoCommon_Q_Hyst {
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB0 = 0, /**< ASN.1 dB0 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB1 = 1, /**< ASN.1 dB1 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB2 = 2, /**< ASN.1 dB2 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB3 = 3, /**< ASN.1 dB3 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB4 = 4, /**< ASN.1 dB4 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB5 = 5, /**< ASN.1 dB5 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB6 = 6, /**< ASN.1 dB6 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB8 = 7, /**< ASN.1 dB8 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB10 = 8, /**< ASN.1 dB10 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB12 = 9, /**< ASN.1 dB12 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB14 = 10, /**< ASN.1 dB14 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB16 = 11, /**< ASN.1 dB16 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB18 = 12, /**< ASN.1 dB18 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB20 = 13, /**< ASN.1 dB20 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB22 = 14, /**< ASN.1 dB22 */
    SIB2_CellReselectionInfoCommon_Q_Hyst_dB24 = 15, /**< ASN.1 dB24 */
} SIB2_CellReselectionInfoCommon_Q_Hyst;


/**
 * @brief 枚举 SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_Medium（ASN.1 cellReselectionInfoCommon/speedStateReselectionPars/q-HystSF/sf-Medium，源文件第 3335 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_Medium {
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_Medium_dB_6 = 0, /**< ASN.1 dB-6 */
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_Medium_dB_4 = 1, /**< ASN.1 dB-4 */
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_Medium_dB_2 = 2, /**< ASN.1 dB-2 */
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_Medium_dB0 = 3, /**< ASN.1 dB0 */
} SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_Medium;


/**
 * @brief 枚举 SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_High（ASN.1 cellReselectionInfoCommon/speedStateReselectionPars/q-HystSF/sf-High，源文件第 3336 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_High {
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_High_dB_6 = 0, /**< ASN.1 dB-6 */
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_High_dB_4 = 1, /**< ASN.1 dB-4 */
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_High_dB_2 = 2, /**< ASN.1 dB-2 */
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_High_dB0 = 3, /**< ASN.1 dB0 */
} SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_High;


/**
 * @brief 枚举 SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16（ASN.1 relaxedMeasurement-r16/lowMobilityEvaluation-r16/s-SearchDeltaP-r16，源文件第 3390 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16 {
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16_dB3 = 0, /**< ASN.1 dB3 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16_dB6 = 1, /**< ASN.1 dB6 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16_dB9 = 2, /**< ASN.1 dB9 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16_dB12 = 3, /**< ASN.1 dB12 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16_dB15 = 4, /**< ASN.1 dB15 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16_spare3 = 5, /**< ASN.1 spare3 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16_spare2 = 6, /**< ASN.1 spare2 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16_spare1 = 7, /**< ASN.1 spare1 */
} SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16;


/**
 * @brief 枚举 SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16（ASN.1 relaxedMeasurement-r16/lowMobilityEvaluation-r16/t-SearchDeltaP-r16，源文件第 3393 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16 {
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_s5 = 0, /**< ASN.1 s5 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_s10 = 1, /**< ASN.1 s10 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_s20 = 2, /**< ASN.1 s20 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_s30 = 3, /**< ASN.1 s30 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_s60 = 4, /**< ASN.1 s60 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_s120 = 5, /**< ASN.1 s120 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_s180 = 6, /**< ASN.1 s180 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_s240 = 7, /**< ASN.1 s240 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_s300 = 8, /**< ASN.1 s300 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_spare7 = 9, /**< ASN.1 spare7 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_spare6 = 10, /**< ASN.1 spare6 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_spare5 = 11, /**< ASN.1 spare5 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_spare4 = 12, /**< ASN.1 spare4 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_spare3 = 13, /**< ASN.1 spare3 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_spare2 = 14, /**< ASN.1 spare2 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16_spare1 = 15, /**< ASN.1 spare1 */
} SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16;


/**
 * @brief 枚举 SIB2_ExtGroup1_RelaxedMeasurement_r16_CombineRelaxedMeasCondition_r16（ASN.1 relaxedMeasurement-r16/combineRelaxedMeasCondition-r16，源文件第 3402 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB2_ExtGroup1_RelaxedMeasurement_r16_CombineRelaxedMeasCondition_r16 {
    SIB2_ExtGroup1_RelaxedMeasurement_r16_CombineRelaxedMeasCondition_r16_trueVal = 0, /**< ASN.1 trueVal */
} SIB2_ExtGroup1_RelaxedMeasurement_r16_CombineRelaxedMeasCondition_r16;


/**
 * @brief 枚举 SIB2_ExtGroup1_RelaxedMeasurement_r16_HighPriorityMeasRelax_r16（ASN.1 relaxedMeasurement-r16/highPriorityMeasRelax-r16，源文件第 3403 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB2_ExtGroup1_RelaxedMeasurement_r16_HighPriorityMeasRelax_r16 {
    SIB2_ExtGroup1_RelaxedMeasurement_r16_HighPriorityMeasRelax_r16_trueVal = 0, /**< ASN.1 trueVal */
} SIB2_ExtGroup1_RelaxedMeasurement_r16_HighPriorityMeasRelax_r16;


/**
 * @brief 枚举 SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17（ASN.1 relaxedMeasurement-r17/stationaryMobilityEvaluation-r17/s-SearchDeltaP-Stationary-r17，源文件第 3410 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17 {
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17_dB2 = 0, /**< ASN.1 dB2 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17_dB3 = 1, /**< ASN.1 dB3 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17_dB6 = 2, /**< ASN.1 dB6 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17_dB9 = 3, /**< ASN.1 dB9 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17_dB12 = 4, /**< ASN.1 dB12 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17_dB15 = 5, /**< ASN.1 dB15 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17_spare2 = 6, /**< ASN.1 spare2 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17_spare1 = 7, /**< ASN.1 spare1 */
} SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17;


/**
 * @brief 枚举 SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17（ASN.1 relaxedMeasurement-r17/stationaryMobilityEvaluation-r17/t-SearchDeltaP-Stationary-r17，源文件第 3411 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17 {
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_s5 = 0, /**< ASN.1 s5 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_s10 = 1, /**< ASN.1 s10 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_s20 = 2, /**< ASN.1 s20 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_s30 = 3, /**< ASN.1 s30 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_s60 = 4, /**< ASN.1 s60 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_s120 = 5, /**< ASN.1 s120 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_s180 = 6, /**< ASN.1 s180 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_s240 = 7, /**< ASN.1 s240 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_s300 = 8, /**< ASN.1 s300 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_spare7 = 9, /**< ASN.1 spare7 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_spare6 = 10, /**< ASN.1 spare6 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_spare5 = 11, /**< ASN.1 spare5 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_spare4 = 12, /**< ASN.1 spare4 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_spare3 = 13, /**< ASN.1 spare3 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_spare2 = 14, /**< ASN.1 spare2 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17_spare1 = 15, /**< ASN.1 spare1 */
} SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17;


/**
 * @brief 枚举 SIB2_ExtGroup2_RelaxedMeasurement_r17_CombineRelaxedMeasCondition2_r17（ASN.1 relaxedMeasurement-r17/combineRelaxedMeasCondition2-r17，源文件第 3418 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB2_ExtGroup2_RelaxedMeasurement_r17_CombineRelaxedMeasCondition2_r17 {
    SIB2_ExtGroup2_RelaxedMeasurement_r17_CombineRelaxedMeasCondition2_r17_trueVal = 0, /**< ASN.1 trueVal */
} SIB2_ExtGroup2_RelaxedMeasurement_r17_CombineRelaxedMeasCondition2_r17;


/**
 * @brief 枚举 SIB3_ExtGroup3_ChannelAccessMode2_r17（ASN.1 channelAccessMode2-r17，源文件第 3443 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB3_ExtGroup3_ChannelAccessMode2_r17 {
    SIB3_ExtGroup3_ChannelAccessMode2_r17_enabled = 0, /**< ASN.1 enabled */
} SIB3_ExtGroup3_ChannelAccessMode2_r17;


/**
 * @brief 枚举 InterFreqCarrierFreqInfo_v1700_HighSpeedMeasInterFreq_r17（ASN.1 highSpeedMeasInterFreq-r17，源文件第 3564 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum InterFreqCarrierFreqInfo_v1700_HighSpeedMeasInterFreq_r17 {
    InterFreqCarrierFreqInfo_v1700_HighSpeedMeasInterFreq_r17_trueVal = 0, /**< ASN.1 trueVal */
} InterFreqCarrierFreqInfo_v1700_HighSpeedMeasInterFreq_r17;


/**
 * @brief 枚举 InterFreqCarrierFreqInfo_v1700_RedCapAccessAllowed_r17（ASN.1 redCapAccessAllowed-r17，源文件第 3565 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum InterFreqCarrierFreqInfo_v1700_RedCapAccessAllowed_r17 {
    InterFreqCarrierFreqInfo_v1700_RedCapAccessAllowed_r17_trueVal = 0, /**< ASN.1 trueVal */
} InterFreqCarrierFreqInfo_v1700_RedCapAccessAllowed_r17;


/**
 * @brief 枚举 InterFreqCarrierFreqInfo_v1730_ChannelAccessMode2_r17（ASN.1 channelAccessMode2-r17，源文件第 3575 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum InterFreqCarrierFreqInfo_v1730_ChannelAccessMode2_r17 {
    InterFreqCarrierFreqInfo_v1730_ChannelAccessMode2_r17_enabled = 0, /**< ASN.1 enabled */
} InterFreqCarrierFreqInfo_v1730_ChannelAccessMode2_r17;


/**
 * @brief 枚举 InterFreqCarrierFreqInfo_v1800_MobileIAB_Freq_r18（ASN.1 mobileIAB-Freq-r18，源文件第 3586 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum InterFreqCarrierFreqInfo_v1800_MobileIAB_Freq_r18 {
    InterFreqCarrierFreqInfo_v1800_MobileIAB_Freq_r18_trueVal = 0, /**< ASN.1 trueVal */
} InterFreqCarrierFreqInfo_v1800_MobileIAB_Freq_r18;


/**
 * @brief 枚举 InterFreqCarrierFreqInfo_v1800_ERedCapAccessAllowed_r18（ASN.1 eRedCapAccessAllowed-r18，源文件第 3587 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum InterFreqCarrierFreqInfo_v1800_ERedCapAccessAllowed_r18 {
    InterFreqCarrierFreqInfo_v1800_ERedCapAccessAllowed_r18_trueVal = 0, /**< ASN.1 trueVal */
} InterFreqCarrierFreqInfo_v1800_ERedCapAccessAllowed_r18;


/**
 * @brief 枚举 InterFreqCarrierFreqInfo_v1800_AccessAllowed2RxXR_r18（ASN.1 accessAllowed2RxXR-r18，源文件第 3589 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum InterFreqCarrierFreqInfo_v1800_AccessAllowed2RxXR_r18 {
    InterFreqCarrierFreqInfo_v1800_AccessAllowed2RxXR_r18_trueVal = 0, /**< ASN.1 trueVal */
} InterFreqCarrierFreqInfo_v1800_AccessAllowed2RxXR_r18;


/**
 * @brief 枚举 SIB5_ExtGroup2_IdleModeMeasVoiceFallback_r17（ASN.1 idleModeMeasVoiceFallback-r17，源文件第 3640 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB5_ExtGroup2_IdleModeMeasVoiceFallback_r17 {
    SIB5_ExtGroup2_IdleModeMeasVoiceFallback_r17_trueVal = 0, /**< ASN.1 trueVal */
} SIB5_ExtGroup2_IdleModeMeasVoiceFallback_r17;


/**
 * @brief 枚举 CarrierFreqEUTRA_v1610_HighSpeedEUTRACarrier_r16（ASN.1 highSpeedEUTRACarrier-r16，源文件第 3676 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CarrierFreqEUTRA_v1610_HighSpeedEUTRACarrier_r16 {
    CarrierFreqEUTRA_v1610_HighSpeedEUTRACarrier_r16_trueVal = 0, /**< ASN.1 trueVal */
} CarrierFreqEUTRA_v1610_HighSpeedEUTRACarrier_r16;


/**
 * @brief 枚举 SIB7_WarningMessageSegmentType（ASN.1 warningMessageSegmentType，源文件第 3718 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB7_WarningMessageSegmentType {
    SIB7_WarningMessageSegmentType_notLastSegment = 0, /**< ASN.1 notLastSegment */
    SIB7_WarningMessageSegmentType_lastSegment = 1, /**< ASN.1 lastSegment */
} SIB7_WarningMessageSegmentType;


/**
 * @brief 枚举 SIB8_WarningMessageSegmentType（ASN.1 warningMessageSegmentType，源文件第 3732 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB8_WarningMessageSegmentType {
    SIB8_WarningMessageSegmentType_notLastSegment = 0, /**< ASN.1 notLastSegment */
    SIB8_WarningMessageSegmentType_lastSegment = 1, /**< ASN.1 lastSegment */
} SIB8_WarningMessageSegmentType;


/**
 * @brief 枚举 SIB12_r16_SegmentType_r16（ASN.1 segmentType-r16，源文件第 3790 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB12_r16_SegmentType_r16 {
    SIB12_r16_SegmentType_r16_notLastSegment = 0, /**< ASN.1 notLastSegment */
    SIB12_r16_SegmentType_r16_lastSegment = 1, /**< ASN.1 lastSegment */
} SIB12_r16_SegmentType_r16;


/**
 * @brief 枚举 SIB12_IEs_r16_ExtGroup1_Sl_L2U2N_Relay_r17（ASN.1 sl-L2U2N-Relay-r17，源文件第 3801 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB12_IEs_r16_ExtGroup1_Sl_L2U2N_Relay_r17 {
    SIB12_IEs_r16_ExtGroup1_Sl_L2U2N_Relay_r17_enabled = 0, /**< ASN.1 enabled */
} SIB12_IEs_r16_ExtGroup1_Sl_L2U2N_Relay_r17;


/**
 * @brief 枚举 SIB12_IEs_r16_ExtGroup1_Sl_NonRelayDiscovery_r17（ASN.1 sl-NonRelayDiscovery-r17，源文件第 3802 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB12_IEs_r16_ExtGroup1_Sl_NonRelayDiscovery_r17 {
    SIB12_IEs_r16_ExtGroup1_Sl_NonRelayDiscovery_r17_enabled = 0, /**< ASN.1 enabled */
} SIB12_IEs_r16_ExtGroup1_Sl_NonRelayDiscovery_r17;


/**
 * @brief 枚举 SIB12_IEs_r16_ExtGroup1_Sl_L3U2N_RelayDiscovery_r17（ASN.1 sl-L3U2N-RelayDiscovery-r17，源文件第 3803 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB12_IEs_r16_ExtGroup1_Sl_L3U2N_RelayDiscovery_r17 {
    SIB12_IEs_r16_ExtGroup1_Sl_L3U2N_RelayDiscovery_r17_enabled = 0, /**< ASN.1 enabled */
} SIB12_IEs_r16_ExtGroup1_Sl_L3U2N_RelayDiscovery_r17;


/**
 * @brief 枚举 SIB12_IEs_r16_ExtGroup2_Sl_SyncTxMultiFreq_r18（ASN.1 sl-SyncTxMultiFreq-r18，源文件第 3810 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB12_IEs_r16_ExtGroup2_Sl_SyncTxMultiFreq_r18 {
    SIB12_IEs_r16_ExtGroup2_Sl_SyncTxMultiFreq_r18_trueVal = 0, /**< ASN.1 trueVal */
} SIB12_IEs_r16_ExtGroup2_Sl_SyncTxMultiFreq_r18;


/**
 * @brief 枚举 SIB12_IEs_r16_ExtGroup2_Sl_L2U2U_Relay_r18（ASN.1 sl-L2U2U-Relay-r18，源文件第 3813 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB12_IEs_r16_ExtGroup2_Sl_L2U2U_Relay_r18 {
    SIB12_IEs_r16_ExtGroup2_Sl_L2U2U_Relay_r18_enabled = 0, /**< ASN.1 enabled */
} SIB12_IEs_r16_ExtGroup2_Sl_L2U2U_Relay_r18;


/**
 * @brief 枚举 SL_ConfigCommonNR_r16_Sl_CSI_Acquisition_r16（ASN.1 sl-CSI-Acquisition-r16，源文件第 3825 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ConfigCommonNR_r16_Sl_CSI_Acquisition_r16 {
    SL_ConfigCommonNR_r16_Sl_CSI_Acquisition_r16_enabled = 0, /**< ASN.1 enabled */
} SL_ConfigCommonNR_r16_Sl_CSI_Acquisition_r16;


/**
 * @brief 枚举 SL_ConfigCommonNR_r16_T400_r16（ASN.1 t400-r16，源文件第 3827 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ConfigCommonNR_r16_T400_r16 {
    SL_ConfigCommonNR_r16_T400_r16_ms100 = 0, /**< ASN.1 ms100 */
    SL_ConfigCommonNR_r16_T400_r16_ms200 = 1, /**< ASN.1 ms200 */
    SL_ConfigCommonNR_r16_T400_r16_ms300 = 2, /**< ASN.1 ms300 */
    SL_ConfigCommonNR_r16_T400_r16_ms400 = 3, /**< ASN.1 ms400 */
    SL_ConfigCommonNR_r16_T400_r16_ms600 = 4, /**< ASN.1 ms600 */
    SL_ConfigCommonNR_r16_T400_r16_ms1000 = 5, /**< ASN.1 ms1000 */
    SL_ConfigCommonNR_r16_T400_r16_ms1500 = 6, /**< ASN.1 ms1500 */
    SL_ConfigCommonNR_r16_T400_r16_ms2000 = 7, /**< ASN.1 ms2000 */
} SL_ConfigCommonNR_r16_T400_r16;


/**
 * @brief 枚举 SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16（ASN.1 sl-MaxNumConsecutiveDTX-r16，源文件第 3828 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16 {
    SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16_n1 = 0, /**< ASN.1 n1 */
    SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16_n2 = 1, /**< ASN.1 n2 */
    SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16_n3 = 2, /**< ASN.1 n3 */
    SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16_n4 = 3, /**< ASN.1 n4 */
    SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16_n6 = 4, /**< ASN.1 n6 */
    SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16_n8 = 5, /**< ASN.1 n8 */
    SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16_n16 = 6, /**< ASN.1 n16 */
    SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16_n32 = 7, /**< ASN.1 n32 */
} SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16;


/**
 * @brief 枚举 SIB17_r17_SegmentType_r17（ASN.1 segmentType-r17，源文件第 3897 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB17_r17_SegmentType_r17 {
    SIB17_r17_SegmentType_r17_notLastSegment = 0, /**< ASN.1 notLastSegment */
    SIB17_r17_SegmentType_r17_lastSegment = 1, /**< ASN.1 lastSegment */
} SIB17_r17_SegmentType_r17;


/**
 * @brief 枚举 SIB17_IEs_r17_ValidityDuration_r17（ASN.1 validityDuration-r17，源文件第 3903 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB17_IEs_r17_ValidityDuration_r17 {
    SIB17_IEs_r17_ValidityDuration_r17_t1 = 0, /**< ASN.1 t1 */
    SIB17_IEs_r17_ValidityDuration_r17_t2 = 1, /**< ASN.1 t2 */
    SIB17_IEs_r17_ValidityDuration_r17_t4 = 2, /**< ASN.1 t4 */
    SIB17_IEs_r17_ValidityDuration_r17_t8 = 3, /**< ASN.1 t8 */
    SIB17_IEs_r17_ValidityDuration_r17_t16 = 4, /**< ASN.1 t16 */
    SIB17_IEs_r17_ValidityDuration_r17_t32 = 5, /**< ASN.1 t32 */
    SIB17_IEs_r17_ValidityDuration_r17_t64 = 6, /**< ASN.1 t64 */
    SIB17_IEs_r17_ValidityDuration_r17_t128 = 7, /**< ASN.1 t128 */
    SIB17_IEs_r17_ValidityDuration_r17_t256 = 8, /**< ASN.1 t256 */
    SIB17_IEs_r17_ValidityDuration_r17_t512 = 9, /**< ASN.1 t512 */
    SIB17_IEs_r17_ValidityDuration_r17_infinity = 10, /**< ASN.1 infinity */
    SIB17_IEs_r17_ValidityDuration_r17_spare5 = 11, /**< ASN.1 spare5 */
    SIB17_IEs_r17_ValidityDuration_r17_spare4 = 12, /**< ASN.1 spare4 */
    SIB17_IEs_r17_ValidityDuration_r17_spare3 = 13, /**< ASN.1 spare3 */
    SIB17_IEs_r17_ValidityDuration_r17_spare2 = 14, /**< ASN.1 spare2 */
    SIB17_IEs_r17_ValidityDuration_r17_spare1 = 15, /**< ASN.1 spare1 */
} SIB17_IEs_r17_ValidityDuration_r17;


/**
 * @brief 枚举 TRS_ResourceSet_r17_PowerControlOffsetSS_r17（ASN.1 powerControlOffsetSS-r17，源文件第 3910 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TRS_ResourceSet_r17_PowerControlOffsetSS_r17 {
    TRS_ResourceSet_r17_PowerControlOffsetSS_r17_db_3 = 0, /**< ASN.1 db-3 */
    TRS_ResourceSet_r17_PowerControlOffsetSS_r17_db0 = 1, /**< ASN.1 db0 */
    TRS_ResourceSet_r17_PowerControlOffsetSS_r17_db3 = 2, /**< ASN.1 db3 */
    TRS_ResourceSet_r17_PowerControlOffsetSS_r17_db6 = 3, /**< ASN.1 db6 */
} TRS_ResourceSet_r17_PowerControlOffsetSS_r17;


/**
 * @brief 枚举 TRS_ResourceSet_r17_NrofResources_r17（ASN.1 nrofResources-r17，源文件第 3929 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TRS_ResourceSet_r17_NrofResources_r17 {
    TRS_ResourceSet_r17_NrofResources_r17_n2 = 0, /**< ASN.1 n2 */
    TRS_ResourceSet_r17_NrofResources_r17_n4 = 1, /**< ASN.1 n4 */
} TRS_ResourceSet_r17_NrofResources_r17;


/**
 * @brief 枚举 MCCH_Config_r17_Mcch_WindowDuration_r17（ASN.1 mcch-WindowDuration-r17，源文件第 4011 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MCCH_Config_r17_Mcch_WindowDuration_r17 {
    MCCH_Config_r17_Mcch_WindowDuration_r17_sl2 = 0, /**< ASN.1 sl2 */
    MCCH_Config_r17_Mcch_WindowDuration_r17_sl4 = 1, /**< ASN.1 sl4 */
    MCCH_Config_r17_Mcch_WindowDuration_r17_sl8 = 2, /**< ASN.1 sl8 */
    MCCH_Config_r17_Mcch_WindowDuration_r17_sl10 = 3, /**< ASN.1 sl10 */
    MCCH_Config_r17_Mcch_WindowDuration_r17_sl20 = 4, /**< ASN.1 sl20 */
    MCCH_Config_r17_Mcch_WindowDuration_r17_sl40 = 5, /**< ASN.1 sl40 */
    MCCH_Config_r17_Mcch_WindowDuration_r17_sl80 = 6, /**< ASN.1 sl80 */
    MCCH_Config_r17_Mcch_WindowDuration_r17_sl160 = 7, /**< ASN.1 sl160 */
} MCCH_Config_r17_Mcch_WindowDuration_r17;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART003_H */
