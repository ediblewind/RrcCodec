/* ============================================================================
 * types/rrc_types_part006.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART006_H
#define RRC_CODEC_TYPES_PART006_H

#include "rrc_types_part000.h"
#include "rrc_types_part001.h"
#include "rrc_types_part002.h"
#include "rrc_types_part003.h"
#include "rrc_types_part004.h"
#include "rrc_types_part005.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 枚举 SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17（ASN.1 sibType-r17/type2-r17/posSibType-r17，源文件第 12862 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17;
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType1_9 0 /**< ASN.1 posSibType1-9 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType1_10 1 /**< ASN.1 posSibType1-10 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType2_24 2 /**< ASN.1 posSibType2-24 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType2_25 3 /**< ASN.1 posSibType2-25 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType6_4 4 /**< ASN.1 posSibType6-4 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType6_5 5 /**< ASN.1 posSibType6-5 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType6_6 6 /**< ASN.1 posSibType6-6 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType2_17a_v1770 7 /**< ASN.1 posSibType2-17a-v1770 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType2_18a_v1770 8 /**< ASN.1 posSibType2-18a-v1770 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType2_20a_v1770 9 /**< ASN.1 posSibType2-20a-v1770 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType1_11_v1800 10 /**< ASN.1 posSibType1-11-v1800 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType1_12_v1800 11 /**< ASN.1 posSibType1-12-v1800 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType2_26_v1800 12 /**< ASN.1 posSibType2-26-v1800 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType2_27_v1800 13 /**< ASN.1 posSibType2-27-v1800 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType6_7_v1800 14 /**< ASN.1 posSibType6-7-v1800 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType7_1_v1800 15 /**< ASN.1 posSibType7-1-v1800 */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType7_2_v1800 16 /**< ASN.1 posSibType7-2-v1800（扩展添加项） */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType7_3_v1800 17 /**< ASN.1 posSibType7-3-v1800（扩展添加项） */
#define SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17_posSibType7_4_v1800 18 /**< ASN.1 posSibType7-4-v1800（扩展添加项） */


/**
 * @brief 枚举 SIB_TypeInfo_v1700_SibType_r17_Type2_r17_Encrypted_r17（ASN.1 sibType-r17/type2-r17/encrypted-r17，源文件第 12868 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB_TypeInfo_v1700_SibType_r17_Type2_r17_Encrypted_r17 {
    SIB_TypeInfo_v1700_SibType_r17_Type2_r17_Encrypted_r17_trueVal = 0, /**< ASN.1 trueVal */
} SIB_TypeInfo_v1700_SibType_r17_Type2_r17_Encrypted_r17;


/**
 * @brief 枚举 SIB_TypeInfo_v1700_AreaScope_r17（ASN.1 areaScope-r17，源文件第 12874 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB_TypeInfo_v1700_AreaScope_r17 {
    SIB_TypeInfo_v1700_AreaScope_r17_trueVal = 0, /**< ASN.1 trueVal */
} SIB_TypeInfo_v1700_AreaScope_r17;


/**
 * @brief 枚举 SlotFormatCombinationsPerCell_ExtGroup1_EnableConfiguredUL_r16（ASN.1 enableConfiguredUL-r16，源文件第 12894 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SlotFormatCombinationsPerCell_ExtGroup1_EnableConfiguredUL_r16 {
    SlotFormatCombinationsPerCell_ExtGroup1_EnableConfiguredUL_r16_enabled = 0, /**< ASN.1 enabled */
} SlotFormatCombinationsPerCell_ExtGroup1_EnableConfiguredUL_r16;


/**
 * @brief 枚举 SpeedStateScaleFactors_Sf_Medium（ASN.1 sf-Medium，源文件第 12974 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpeedStateScaleFactors_Sf_Medium {
    SpeedStateScaleFactors_Sf_Medium_oDot25 = 0, /**< ASN.1 oDot25 */
    SpeedStateScaleFactors_Sf_Medium_oDot5 = 1, /**< ASN.1 oDot5 */
    SpeedStateScaleFactors_Sf_Medium_oDot75 = 2, /**< ASN.1 oDot75 */
    SpeedStateScaleFactors_Sf_Medium_lDot0 = 3, /**< ASN.1 lDot0 */
} SpeedStateScaleFactors_Sf_Medium;


/**
 * @brief 枚举 SpeedStateScaleFactors_Sf_High（ASN.1 sf-High，源文件第 12975 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpeedStateScaleFactors_Sf_High {
    SpeedStateScaleFactors_Sf_High_oDot25 = 0, /**< ASN.1 oDot25 */
    SpeedStateScaleFactors_Sf_High_oDot5 = 1, /**< ASN.1 oDot5 */
    SpeedStateScaleFactors_Sf_High_oDot75 = 2, /**< ASN.1 oDot75 */
    SpeedStateScaleFactors_Sf_High_lDot0 = 3, /**< ASN.1 lDot0 */
} SpeedStateScaleFactors_Sf_High;


/**
 * @brief 枚举 SPS_Config_Periodicity（ASN.1 periodicity，源文件第 12981 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SPS_Config_Periodicity {
    SPS_Config_Periodicity_ms10 = 0, /**< ASN.1 ms10 */
    SPS_Config_Periodicity_ms20 = 1, /**< ASN.1 ms20 */
    SPS_Config_Periodicity_ms32 = 2, /**< ASN.1 ms32 */
    SPS_Config_Periodicity_ms40 = 3, /**< ASN.1 ms40 */
    SPS_Config_Periodicity_ms64 = 4, /**< ASN.1 ms64 */
    SPS_Config_Periodicity_ms80 = 5, /**< ASN.1 ms80 */
    SPS_Config_Periodicity_ms128 = 6, /**< ASN.1 ms128 */
    SPS_Config_Periodicity_ms160 = 7, /**< ASN.1 ms160 */
    SPS_Config_Periodicity_ms320 = 8, /**< ASN.1 ms320 */
    SPS_Config_Periodicity_ms640 = 9, /**< ASN.1 ms640 */
    SPS_Config_Periodicity_spare6 = 10, /**< ASN.1 spare6 */
    SPS_Config_Periodicity_spare5 = 11, /**< ASN.1 spare5 */
    SPS_Config_Periodicity_spare4 = 12, /**< ASN.1 spare4 */
    SPS_Config_Periodicity_spare3 = 13, /**< ASN.1 spare3 */
    SPS_Config_Periodicity_spare2 = 14, /**< ASN.1 spare2 */
    SPS_Config_Periodicity_spare1 = 15, /**< ASN.1 spare1 */
} SPS_Config_Periodicity;


/**
 * @brief 枚举 SPS_Config_Mcs_Table（ASN.1 mcs-Table，源文件第 12985 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SPS_Config_Mcs_Table {
    SPS_Config_Mcs_Table_qam64LowSE = 0, /**< ASN.1 qam64LowSE */
} SPS_Config_Mcs_Table;


/**
 * @brief 枚举 SPS_Config_ExtGroup1_Pdsch_AggregationFactor_r16（ASN.1 pdsch-AggregationFactor-r16，源文件第 12992 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SPS_Config_ExtGroup1_Pdsch_AggregationFactor_r16 {
    SPS_Config_ExtGroup1_Pdsch_AggregationFactor_r16_n1 = 0, /**< ASN.1 n1 */
    SPS_Config_ExtGroup1_Pdsch_AggregationFactor_r16_n2 = 1, /**< ASN.1 n2 */
    SPS_Config_ExtGroup1_Pdsch_AggregationFactor_r16_n4 = 2, /**< ASN.1 n4 */
    SPS_Config_ExtGroup1_Pdsch_AggregationFactor_r16_n8 = 3, /**< ASN.1 n8 */
} SPS_Config_ExtGroup1_Pdsch_AggregationFactor_r16;


/**
 * @brief 枚举 SRS_CarrierSwitching_Srs_SwitchFromCarrier（ASN.1 srs-SwitchFromCarrier，源文件第 13036 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_CarrierSwitching_Srs_SwitchFromCarrier {
    SRS_CarrierSwitching_Srs_SwitchFromCarrier_sUL = 0, /**< ASN.1 sUL */
    SRS_CarrierSwitching_Srs_SwitchFromCarrier_nUL = 1, /**< ASN.1 nUL */
} SRS_CarrierSwitching_Srs_SwitchFromCarrier;


/**
 * @brief 枚举 SRS_Config_Tpc_Accumulation（ASN.1 tpc-Accumulation，源文件第 13062 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Config_Tpc_Accumulation {
    SRS_Config_Tpc_Accumulation_disabled = 0, /**< ASN.1 disabled */
} SRS_Config_Tpc_Accumulation;


/**
 * @brief 枚举 SRS_Config_ExtGroup2_Dci_TriggeringPosResourceSetLink_r18（ASN.1 dci-TriggeringPosResourceSetLink-r18，源文件第 13076 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Config_ExtGroup2_Dci_TriggeringPosResourceSetLink_r18 {
    SRS_Config_ExtGroup2_Dci_TriggeringPosResourceSetLink_r18_enabled = 0, /**< ASN.1 enabled */
} SRS_Config_ExtGroup2_Dci_TriggeringPosResourceSetLink_r18;


/**
 * @brief 枚举 SRS_ResourceSet_Usage（ASN.1 usage，源文件第 13103 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_ResourceSet_Usage {
    SRS_ResourceSet_Usage_beamManagement = 0, /**< ASN.1 beamManagement */
    SRS_ResourceSet_Usage_codebook = 1, /**< ASN.1 codebook */
    SRS_ResourceSet_Usage_nonCodebook = 2, /**< ASN.1 nonCodebook */
    SRS_ResourceSet_Usage_antennaSwitching = 3, /**< ASN.1 antennaSwitching */
} SRS_ResourceSet_Usage;


/**
 * @brief 枚举 SRS_ResourceSet_Srs_PowerControlAdjustmentStates（ASN.1 srs-PowerControlAdjustmentStates，源文件第 13107 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_ResourceSet_Srs_PowerControlAdjustmentStates {
    SRS_ResourceSet_Srs_PowerControlAdjustmentStates_sameAsFci2 = 0, /**< ASN.1 sameAsFci2 */
    SRS_ResourceSet_Srs_PowerControlAdjustmentStates_separateClosedLoop = 1, /**< ASN.1 separateClosedLoop */
} SRS_ResourceSet_Srs_PowerControlAdjustmentStates;


/**
 * @brief 枚举 SRS_ResourceSet_ExtGroup2_UsagePDC_r17（ASN.1 usagePDC-r17，源文件第 13113 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_ResourceSet_ExtGroup2_UsagePDC_r17 {
    SRS_ResourceSet_ExtGroup2_UsagePDC_r17_trueVal = 0, /**< ASN.1 trueVal */
} SRS_ResourceSet_ExtGroup2_UsagePDC_r17;


/**
 * @brief 枚举 SRS_ResourceSet_ExtGroup2_FollowUnifiedTCI_StateSRS_r17（ASN.1 followUnifiedTCI-StateSRS-r17，源文件第 13115 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_ResourceSet_ExtGroup2_FollowUnifiedTCI_StateSRS_r17 {
    SRS_ResourceSet_ExtGroup2_FollowUnifiedTCI_StateSRS_r17_enabled = 0, /**< ASN.1 enabled */
} SRS_ResourceSet_ExtGroup2_FollowUnifiedTCI_StateSRS_r17;


/**
 * @brief 枚举 SRS_ResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18（ASN.1 applyIndicatedTCI-State-r18，源文件第 13118 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_ResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18 {
    SRS_ResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18_first = 0, /**< ASN.1 first */
    SRS_ResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18_second = 1, /**< ASN.1 second */
} SRS_ResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18;


/**
 * @brief 枚举 SRS_Resource_NrofSRS_Ports（ASN.1 nrofSRS-Ports，源文件第 13172 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_NrofSRS_Ports {
    SRS_Resource_NrofSRS_Ports_port1 = 0, /**< ASN.1 port1 */
    SRS_Resource_NrofSRS_Ports_ports2 = 1, /**< ASN.1 ports2 */
    SRS_Resource_NrofSRS_Ports_ports4 = 2, /**< ASN.1 ports4 */
} SRS_Resource_NrofSRS_Ports;


/**
 * @brief 枚举 SRS_Resource_Ptrs_PortIndex（ASN.1 ptrs-PortIndex，源文件第 13173 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_Ptrs_PortIndex {
    SRS_Resource_Ptrs_PortIndex_n0 = 0, /**< ASN.1 n0 */
    SRS_Resource_Ptrs_PortIndex_n1 = 1, /**< ASN.1 n1 */
} SRS_Resource_Ptrs_PortIndex;


/**
 * @brief 枚举 SRS_ResourceMapping_NrofSymbols（ASN.1 resourceMapping/nrofSymbols，源文件第 13186 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_ResourceMapping_NrofSymbols {
    SRS_ResourceMapping_NrofSymbols_n1 = 0, /**< ASN.1 n1 */
    SRS_ResourceMapping_NrofSymbols_n2 = 1, /**< ASN.1 n2 */
    SRS_ResourceMapping_NrofSymbols_n4 = 2, /**< ASN.1 n4 */
} SRS_ResourceMapping_NrofSymbols;


/**
 * @brief 枚举 SRS_ResourceMapping_RepetitionFactor（ASN.1 resourceMapping/repetitionFactor，源文件第 13187 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_ResourceMapping_RepetitionFactor {
    SRS_ResourceMapping_RepetitionFactor_n1 = 0, /**< ASN.1 n1 */
    SRS_ResourceMapping_RepetitionFactor_n2 = 1, /**< ASN.1 n2 */
    SRS_ResourceMapping_RepetitionFactor_n4 = 2, /**< ASN.1 n4 */
} SRS_ResourceMapping_RepetitionFactor;


/**
 * @brief 枚举 SRS_Resource_GroupOrSequenceHopping（ASN.1 groupOrSequenceHopping，源文件第 13196 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_GroupOrSequenceHopping {
    SRS_Resource_GroupOrSequenceHopping_neither = 0, /**< ASN.1 neither */
    SRS_Resource_GroupOrSequenceHopping_groupHopping = 1, /**< ASN.1 groupHopping */
    SRS_Resource_GroupOrSequenceHopping_sequenceHopping = 2, /**< ASN.1 sequenceHopping */
} SRS_Resource_GroupOrSequenceHopping;


/**
 * @brief 枚举 SRS_Resource_ExtGroup1_ResourceMapping_r16_NrofSymbols_r16（ASN.1 resourceMapping-r16/nrofSymbols-r16，源文件第 13216 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_ExtGroup1_ResourceMapping_r16_NrofSymbols_r16 {
    SRS_Resource_ExtGroup1_ResourceMapping_r16_NrofSymbols_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_Resource_ExtGroup1_ResourceMapping_r16_NrofSymbols_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_Resource_ExtGroup1_ResourceMapping_r16_NrofSymbols_r16_n4 = 2, /**< ASN.1 n4 */
} SRS_Resource_ExtGroup1_ResourceMapping_r16_NrofSymbols_r16;


/**
 * @brief 枚举 SRS_Resource_ExtGroup1_ResourceMapping_r16_RepetitionFactor_r16（ASN.1 resourceMapping-r16/repetitionFactor-r16，源文件第 13217 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_ExtGroup1_ResourceMapping_r16_RepetitionFactor_r16 {
    SRS_Resource_ExtGroup1_ResourceMapping_r16_RepetitionFactor_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_Resource_ExtGroup1_ResourceMapping_r16_RepetitionFactor_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_Resource_ExtGroup1_ResourceMapping_r16_RepetitionFactor_r16_n4 = 2, /**< ASN.1 n4 */
} SRS_Resource_ExtGroup1_ResourceMapping_r16_RepetitionFactor_r16;


/**
 * @brief 枚举 SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17（ASN.1 resourceMapping-r17/nrofSymbols-r17，源文件第 13224 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17 {
    SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17_n1 = 0, /**< ASN.1 n1 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17_n2 = 1, /**< ASN.1 n2 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17_n4 = 2, /**< ASN.1 n4 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17_n8 = 3, /**< ASN.1 n8 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17_n10 = 4, /**< ASN.1 n10 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17_n12 = 5, /**< ASN.1 n12 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17_n14 = 6, /**< ASN.1 n14 */
} SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17;


/**
 * @brief 枚举 SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17（ASN.1 resourceMapping-r17/repetitionFactor-r17，源文件第 13225 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17 {
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n1 = 0, /**< ASN.1 n1 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n2 = 1, /**< ASN.1 n2 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n4 = 2, /**< ASN.1 n4 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n5 = 3, /**< ASN.1 n5 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n6 = 4, /**< ASN.1 n6 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n7 = 5, /**< ASN.1 n7 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n8 = 6, /**< ASN.1 n8 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n10 = 7, /**< ASN.1 n10 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n12 = 8, /**< ASN.1 n12 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17_n14 = 9, /**< ASN.1 n14 */
} SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17;


/**
 * @brief 枚举 SRS_Resource_ExtGroup2_PartialFreqSounding_r17_EnableStartRBHopping_r17（ASN.1 partialFreqSounding-r17/enableStartRBHopping-r17，源文件第 13232 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_ExtGroup2_PartialFreqSounding_r17_EnableStartRBHopping_r17 {
    SRS_Resource_ExtGroup2_PartialFreqSounding_r17_EnableStartRBHopping_r17_enable = 0, /**< ASN.1 enable */
} SRS_Resource_ExtGroup2_PartialFreqSounding_r17_EnableStartRBHopping_r17;


/**
 * @brief 枚举 SRS_Resource_ExtGroup3_RepetitionFactor_v1730（ASN.1 repetitionFactor-v1730，源文件第 13244 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_ExtGroup3_RepetitionFactor_v1730 {
    SRS_Resource_ExtGroup3_RepetitionFactor_v1730_n3 = 0, /**< ASN.1 n3 */
} SRS_Resource_ExtGroup3_RepetitionFactor_v1730;


/**
 * @brief 枚举 SRS_Resource_ExtGroup4_NrofSRS_Ports_n8_r18（ASN.1 nrofSRS-Ports-n8-r18，源文件第 13250 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_ExtGroup4_NrofSRS_Ports_n8_r18 {
    SRS_Resource_ExtGroup4_NrofSRS_Ports_n8_r18_ports8 = 0, /**< ASN.1 ports8 */
    SRS_Resource_ExtGroup4_NrofSRS_Ports_n8_r18_ports8tdm = 1, /**< ASN.1 ports8tdm */
} SRS_Resource_ExtGroup4_NrofSRS_Ports_n8_r18;


/**
 * @brief 枚举 SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingWithRepetition_r18（ASN.1 combOffsetHopping-r18/hoppingWithRepetition-r18，源文件第 13257 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingWithRepetition_r18 {
    SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingWithRepetition_r18_symbol = 0, /**< ASN.1 symbol */
    SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingWithRepetition_r18_repetition = 1, /**< ASN.1 repetition */
} SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingWithRepetition_r18;


/**
 * @brief 枚举 SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingFinerGranularity_r18（ASN.1 cyclicShiftHopping-r18/hoppingFinerGranularity-r18，源文件第 13266 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingFinerGranularity_r18 {
    SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingFinerGranularity_r18_enable = 0, /**< ASN.1 enable */
} SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingFinerGranularity_r18;


/**
 * @brief 枚举 SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16（ASN.1 resourceMapping-r16/nrofSymbols-r16，源文件第 13290 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16 {
    SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16_n4 = 2, /**< ASN.1 n4 */
    SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16_n8 = 3, /**< ASN.1 n8 */
    SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16_n12 = 4, /**< ASN.1 n12 */
} SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16;


/**
 * @brief 枚举 SRS_PosResource_r16_GroupOrSequenceHopping_r16（ASN.1 groupOrSequenceHopping-r16，源文件第 13297 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResource_r16_GroupOrSequenceHopping_r16 {
    SRS_PosResource_r16_GroupOrSequenceHopping_r16_neither = 0, /**< ASN.1 neither */
    SRS_PosResource_r16_GroupOrSequenceHopping_r16_groupHopping = 1, /**< ASN.1 groupHopping */
    SRS_PosResource_r16_GroupOrSequenceHopping_r16_sequenceHopping = 2, /**< ASN.1 sequenceHopping */
} SRS_PosResource_r16_GroupOrSequenceHopping_r16;


/**
 * @brief 枚举 SRS_PosResource_r16_ExtGroup1_Srs_PosPeriodicConfigHyperSFN_Index_r18（ASN.1 srs-PosPeriodicConfigHyperSFN-Index-r18，源文件第 13322 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResource_r16_ExtGroup1_Srs_PosPeriodicConfigHyperSFN_Index_r18 {
    SRS_PosResource_r16_ExtGroup1_Srs_PosPeriodicConfigHyperSFN_Index_r18_even0 = 0, /**< ASN.1 even0 */
    SRS_PosResource_r16_ExtGroup1_Srs_PosPeriodicConfigHyperSFN_Index_r18_odd1 = 1, /**< ASN.1 odd1 */
} SRS_PosResource_r16_ExtGroup1_Srs_PosPeriodicConfigHyperSFN_Index_r18;


/**
 * @brief 枚举 SSB_Configuration_r16_HalfFrameIndex_r16（ASN.1 halfFrameIndex-r16，源文件第 13360 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SSB_Configuration_r16_HalfFrameIndex_r16 {
    SSB_Configuration_r16_HalfFrameIndex_r16_zero = 0, /**< ASN.1 zero */
    SSB_Configuration_r16_HalfFrameIndex_r16_one = 1, /**< ASN.1 one */
} SSB_Configuration_r16_HalfFrameIndex_r16;


/**
 * @brief 枚举 SSB_Configuration_r16_Ssb_Periodicity_r16（ASN.1 ssb-Periodicity-r16，源文件第 13362 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SSB_Configuration_r16_Ssb_Periodicity_r16 {
    SSB_Configuration_r16_Ssb_Periodicity_r16_ms5 = 0, /**< ASN.1 ms5 */
    SSB_Configuration_r16_Ssb_Periodicity_r16_ms10 = 1, /**< ASN.1 ms10 */
    SSB_Configuration_r16_Ssb_Periodicity_r16_ms20 = 2, /**< ASN.1 ms20 */
    SSB_Configuration_r16_Ssb_Periodicity_r16_ms40 = 3, /**< ASN.1 ms40 */
    SSB_Configuration_r16_Ssb_Periodicity_r16_ms80 = 4, /**< ASN.1 ms80 */
    SSB_Configuration_r16_Ssb_Periodicity_r16_ms160 = 5, /**< ASN.1 ms160 */
    SSB_Configuration_r16_Ssb_Periodicity_r16_spare2 = 6, /**< ASN.1 spare2 */
    SSB_Configuration_r16_Ssb_Periodicity_r16_spare1 = 7, /**< ASN.1 spare1 */
} SSB_Configuration_r16_Ssb_Periodicity_r16;


/**
 * @brief 枚举 TxHoppingConfig_r18_OverlapValue_r18（ASN.1 overlapValue-r18，源文件第 13453 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TxHoppingConfig_r18_OverlapValue_r18 {
    TxHoppingConfig_r18_OverlapValue_r18_zeroRB = 0, /**< ASN.1 zeroRB */
    TxHoppingConfig_r18_OverlapValue_r18_oneRB = 1, /**< ASN.1 oneRB */
    TxHoppingConfig_r18_OverlapValue_r18_twoRB = 2, /**< ASN.1 twoRB */
    TxHoppingConfig_r18_OverlapValue_r18_fourRB = 3, /**< ASN.1 fourRB */
} TxHoppingConfig_r18_OverlapValue_r18;


/**
 * @brief 枚举 SRS_PosUplinkTransmissionWindowConfig_r18_Duration_r18（ASN.1 duration-r18，源文件第 13497 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosUplinkTransmissionWindowConfig_r18_Duration_r18 {
    SRS_PosUplinkTransmissionWindowConfig_r18_Duration_r18_s1 = 0, /**< ASN.1 s1 */
    SRS_PosUplinkTransmissionWindowConfig_r18_Duration_r18_s2 = 1, /**< ASN.1 s2 */
    SRS_PosUplinkTransmissionWindowConfig_r18_Duration_r18_s4 = 2, /**< ASN.1 s4 */
    SRS_PosUplinkTransmissionWindowConfig_r18_Duration_r18_s6 = 3, /**< ASN.1 s6 */
} SRS_PosUplinkTransmissionWindowConfig_r18_Duration_r18;


/**
 * @brief 枚举 SSB_MTC_Duration（ASN.1 duration，源文件第 13546 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SSB_MTC_Duration {
    SSB_MTC_Duration_sf1 = 0, /**< ASN.1 sf1 */
    SSB_MTC_Duration_sf2 = 1, /**< ASN.1 sf2 */
    SSB_MTC_Duration_sf3 = 2, /**< ASN.1 sf3 */
    SSB_MTC_Duration_sf4 = 3, /**< ASN.1 sf4 */
    SSB_MTC_Duration_sf5 = 4, /**< ASN.1 sf5 */
} SSB_MTC_Duration;


/**
 * @brief 枚举 SSB_MTC2_Periodicity（ASN.1 periodicity，源文件第 13551 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SSB_MTC2_Periodicity {
    SSB_MTC2_Periodicity_sf5 = 0, /**< ASN.1 sf5 */
    SSB_MTC2_Periodicity_sf10 = 1, /**< ASN.1 sf10 */
    SSB_MTC2_Periodicity_sf20 = 2, /**< ASN.1 sf20 */
    SSB_MTC2_Periodicity_sf40 = 3, /**< ASN.1 sf40 */
    SSB_MTC2_Periodicity_sf80 = 4, /**< ASN.1 sf80 */
    SSB_MTC2_Periodicity_spare3 = 5, /**< ASN.1 spare3 */
    SSB_MTC2_Periodicity_spare2 = 6, /**< ASN.1 spare2 */
    SSB_MTC2_Periodicity_spare1 = 7, /**< ASN.1 spare1 */
} SSB_MTC2_Periodicity;


/**
 * @brief 枚举 SSB_MTC2_LP_r16_Periodicity（ASN.1 periodicity，源文件第 13556 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SSB_MTC2_LP_r16_Periodicity {
    SSB_MTC2_LP_r16_Periodicity_sf10 = 0, /**< ASN.1 sf10 */
    SSB_MTC2_LP_r16_Periodicity_sf20 = 1, /**< ASN.1 sf20 */
    SSB_MTC2_LP_r16_Periodicity_sf40 = 2, /**< ASN.1 sf40 */
    SSB_MTC2_LP_r16_Periodicity_sf80 = 3, /**< ASN.1 sf80 */
    SSB_MTC2_LP_r16_Periodicity_sf160 = 4, /**< ASN.1 sf160 */
    SSB_MTC2_LP_r16_Periodicity_spare3 = 5, /**< ASN.1 spare3 */
    SSB_MTC2_LP_r16_Periodicity_spare2 = 6, /**< ASN.1 spare2 */
    SSB_MTC2_LP_r16_Periodicity_spare1 = 7, /**< ASN.1 spare1 */
} SSB_MTC2_LP_r16_Periodicity;


/**
 * @brief 枚举 SSB_MTC3_r16_Duration_r16（ASN.1 duration-r16，源文件第 13571 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SSB_MTC3_r16_Duration_r16 {
    SSB_MTC3_r16_Duration_r16_sf1 = 0, /**< ASN.1 sf1 */
    SSB_MTC3_r16_Duration_r16_sf2 = 1, /**< ASN.1 sf2 */
    SSB_MTC3_r16_Duration_r16_sf3 = 2, /**< ASN.1 sf3 */
    SSB_MTC3_r16_Duration_r16_sf4 = 3, /**< ASN.1 sf4 */
    SSB_MTC3_r16_Duration_r16_sf5 = 4, /**< ASN.1 sf5 */
} SSB_MTC3_r16_Duration_r16;


/**
 * @brief 枚举 SSB_MTC_AdditionalPCI_r17_Periodicity_r17（ASN.1 periodicity-r17，源文件第 13584 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SSB_MTC_AdditionalPCI_r17_Periodicity_r17 {
    SSB_MTC_AdditionalPCI_r17_Periodicity_r17_ms5 = 0, /**< ASN.1 ms5 */
    SSB_MTC_AdditionalPCI_r17_Periodicity_r17_ms10 = 1, /**< ASN.1 ms10 */
    SSB_MTC_AdditionalPCI_r17_Periodicity_r17_ms20 = 2, /**< ASN.1 ms20 */
    SSB_MTC_AdditionalPCI_r17_Periodicity_r17_ms40 = 3, /**< ASN.1 ms40 */
    SSB_MTC_AdditionalPCI_r17_Periodicity_r17_ms80 = 4, /**< ASN.1 ms80 */
    SSB_MTC_AdditionalPCI_r17_Periodicity_r17_ms160 = 5, /**< ASN.1 ms160 */
    SSB_MTC_AdditionalPCI_r17_Periodicity_r17_spare2 = 6, /**< ASN.1 spare2 */
    SSB_MTC_AdditionalPCI_r17_Periodicity_r17_spare1 = 7, /**< ASN.1 spare1 */
} SSB_MTC_AdditionalPCI_r17_Periodicity_r17;


/**
 * @brief 枚举 TAR_Config_r17_OffsetThresholdTA_r17（ASN.1 offsetThresholdTA-r17，源文件第 13644 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TAR_Config_r17_OffsetThresholdTA_r17 {
    TAR_Config_r17_OffsetThresholdTA_r17_ms0dot5 = 0, /**< ASN.1 ms0dot5 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms1 = 1, /**< ASN.1 ms1 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms2 = 2, /**< ASN.1 ms2 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms3 = 3, /**< ASN.1 ms3 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms4 = 4, /**< ASN.1 ms4 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms5 = 5, /**< ASN.1 ms5 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms6 = 6, /**< ASN.1 ms6 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms7 = 7, /**< ASN.1 ms7 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms8 = 8, /**< ASN.1 ms8 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms9 = 9, /**< ASN.1 ms9 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms10 = 10, /**< ASN.1 ms10 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms11 = 11, /**< ASN.1 ms11 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms12 = 12, /**< ASN.1 ms12 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms13 = 13, /**< ASN.1 ms13 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms14 = 14, /**< ASN.1 ms14 */
    TAR_Config_r17_OffsetThresholdTA_r17_ms15 = 15, /**< ASN.1 ms15 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare13 = 16, /**< ASN.1 spare13 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare12 = 17, /**< ASN.1 spare12 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare11 = 18, /**< ASN.1 spare11 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare10 = 19, /**< ASN.1 spare10 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare9 = 20, /**< ASN.1 spare9 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare8 = 21, /**< ASN.1 spare8 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare7 = 22, /**< ASN.1 spare7 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare6 = 23, /**< ASN.1 spare6 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare5 = 24, /**< ASN.1 spare5 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare4 = 25, /**< ASN.1 spare4 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare3 = 26, /**< ASN.1 spare3 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare2 = 27, /**< ASN.1 spare2 */
    TAR_Config_r17_OffsetThresholdTA_r17_spare1 = 28, /**< ASN.1 spare1 */
} TAR_Config_r17_OffsetThresholdTA_r17;


/**
 * @brief 枚举 TAR_Config_r17_TimingAdvanceSR_r17（ASN.1 timingAdvanceSR-r17，源文件第 13647 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TAR_Config_r17_TimingAdvanceSR_r17 {
    TAR_Config_r17_TimingAdvanceSR_r17_enabled = 0, /**< ASN.1 enabled */
} TAR_Config_r17_TimingAdvanceSR_r17;


/**
 * @brief 枚举 TAR_Config_r18_TimingAdvanceSR_r18（ASN.1 timingAdvanceSR-r18，源文件第 13652 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TAR_Config_r18_TimingAdvanceSR_r18 {
    TAR_Config_r18_TimingAdvanceSR_r18_enabled = 0, /**< ASN.1 enabled */
} TAR_Config_r18_TimingAdvanceSR_r18;


/**
 * @brief 枚举 TCI_State_ExtGroup2_Tag_Id_ptr_r18（ASN.1 tag-Id-ptr-r18，源文件第 13678 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TCI_State_ExtGroup2_Tag_Id_ptr_r18 {
    TCI_State_ExtGroup2_Tag_Id_ptr_r18_n0 = 0, /**< ASN.1 n0 */
    TCI_State_ExtGroup2_Tag_Id_ptr_r18_n1 = 1, /**< ASN.1 n1 */
} TCI_State_ExtGroup2_Tag_Id_ptr_r18;


/**
 * @brief 枚举 QCL_Info_Qcl_Type（ASN.1 qcl-Type，源文件第 13689 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum QCL_Info_Qcl_Type {
    QCL_Info_Qcl_Type_typeA = 0, /**< ASN.1 typeA */
    QCL_Info_Qcl_Type_typeB = 1, /**< ASN.1 typeB */
    QCL_Info_Qcl_Type_typeC = 2, /**< ASN.1 typeC */
    QCL_Info_Qcl_Type_typeD = 3, /**< ASN.1 typeD */
} QCL_Info_Qcl_Type;


/**
 * @brief 枚举 TCI_UL_State_r17_ExtGroup1_Tag_Id_ptr_r18（ASN.1 tag-Id-ptr-r18，源文件第 13715 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TCI_UL_State_r17_ExtGroup1_Tag_Id_ptr_r18 {
    TCI_UL_State_r17_ExtGroup1_Tag_Id_ptr_r18_n0 = 0, /**< ASN.1 n0 */
    TCI_UL_State_r17_ExtGroup1_Tag_Id_ptr_r18_n1 = 1, /**< ASN.1 n1 */
} TCI_UL_State_r17_ExtGroup1_Tag_Id_ptr_r18;


/**
 * @brief 枚举 TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity（ASN.1 dl-UL-TransmissionPeriodicity，源文件第 13735 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity {
    TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity_ms0p5 = 0, /**< ASN.1 ms0p5 */
    TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity_ms0p625 = 1, /**< ASN.1 ms0p625 */
    TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity_ms1 = 2, /**< ASN.1 ms1 */
    TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity_ms1p25 = 3, /**< ASN.1 ms1p25 */
    TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity_ms2 = 4, /**< ASN.1 ms2 */
    TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity_ms2p5 = 5, /**< ASN.1 ms2p5 */
    TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity_ms5 = 6, /**< ASN.1 ms5 */
    TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity_ms10 = 7, /**< ASN.1 ms10 */
} TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity;


/**
 * @brief 枚举 TDD_UL_DL_Pattern_ExtGroup1_Dl_UL_TransmissionPeriodicity_v1530（ASN.1 dl-UL-TransmissionPeriodicity-v1530，源文件第 13742 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum TDD_UL_DL_Pattern_ExtGroup1_Dl_UL_TransmissionPeriodicity_v1530 {
    TDD_UL_DL_Pattern_ExtGroup1_Dl_UL_TransmissionPeriodicity_v1530_ms3 = 0, /**< ASN.1 ms3 */
    TDD_UL_DL_Pattern_ExtGroup1_Dl_UL_TransmissionPeriodicity_v1530_ms4 = 1, /**< ASN.1 ms4 */
} TDD_UL_DL_Pattern_ExtGroup1_Dl_UL_TransmissionPeriodicity_v1530;


/**
 * @brief 枚举 UAC_BarringInfoSet_Uac_BarringFactor（ASN.1 uac-BarringFactor，源文件第 13832 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UAC_BarringInfoSet_Uac_BarringFactor {
    UAC_BarringInfoSet_Uac_BarringFactor_p00 = 0, /**< ASN.1 p00 */
    UAC_BarringInfoSet_Uac_BarringFactor_p05 = 1, /**< ASN.1 p05 */
    UAC_BarringInfoSet_Uac_BarringFactor_p10 = 2, /**< ASN.1 p10 */
    UAC_BarringInfoSet_Uac_BarringFactor_p15 = 3, /**< ASN.1 p15 */
    UAC_BarringInfoSet_Uac_BarringFactor_p20 = 4, /**< ASN.1 p20 */
    UAC_BarringInfoSet_Uac_BarringFactor_p25 = 5, /**< ASN.1 p25 */
    UAC_BarringInfoSet_Uac_BarringFactor_p30 = 6, /**< ASN.1 p30 */
    UAC_BarringInfoSet_Uac_BarringFactor_p40 = 7, /**< ASN.1 p40 */
    UAC_BarringInfoSet_Uac_BarringFactor_p50 = 8, /**< ASN.1 p50 */
    UAC_BarringInfoSet_Uac_BarringFactor_p60 = 9, /**< ASN.1 p60 */
    UAC_BarringInfoSet_Uac_BarringFactor_p70 = 10, /**< ASN.1 p70 */
    UAC_BarringInfoSet_Uac_BarringFactor_p75 = 11, /**< ASN.1 p75 */
    UAC_BarringInfoSet_Uac_BarringFactor_p80 = 12, /**< ASN.1 p80 */
    UAC_BarringInfoSet_Uac_BarringFactor_p85 = 13, /**< ASN.1 p85 */
    UAC_BarringInfoSet_Uac_BarringFactor_p90 = 14, /**< ASN.1 p90 */
    UAC_BarringInfoSet_Uac_BarringFactor_p95 = 15, /**< ASN.1 p95 */
} UAC_BarringInfoSet_Uac_BarringFactor;


/**
 * @brief 枚举 UAC_BarringInfoSet_Uac_BarringTime（ASN.1 uac-BarringTime，源文件第 13834 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UAC_BarringInfoSet_Uac_BarringTime {
    UAC_BarringInfoSet_Uac_BarringTime_s4 = 0, /**< ASN.1 s4 */
    UAC_BarringInfoSet_Uac_BarringTime_s8 = 1, /**< ASN.1 s8 */
    UAC_BarringInfoSet_Uac_BarringTime_s16 = 2, /**< ASN.1 s16 */
    UAC_BarringInfoSet_Uac_BarringTime_s32 = 3, /**< ASN.1 s32 */
    UAC_BarringInfoSet_Uac_BarringTime_s64 = 4, /**< ASN.1 s64 */
    UAC_BarringInfoSet_Uac_BarringTime_s128 = 5, /**< ASN.1 s128 */
    UAC_BarringInfoSet_Uac_BarringTime_s256 = 6, /**< ASN.1 s256 */
    UAC_BarringInfoSet_Uac_BarringTime_s512 = 7, /**< ASN.1 s512 */
} UAC_BarringInfoSet_Uac_BarringTime;


/**
 * @brief 枚举 UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17（ASN.1 uac-BarringFactorForAI3-r17，源文件第 13839 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17 {
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p00 = 0, /**< ASN.1 p00 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p05 = 1, /**< ASN.1 p05 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p10 = 2, /**< ASN.1 p10 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p15 = 3, /**< ASN.1 p15 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p20 = 4, /**< ASN.1 p20 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p25 = 5, /**< ASN.1 p25 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p30 = 6, /**< ASN.1 p30 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p40 = 7, /**< ASN.1 p40 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p50 = 8, /**< ASN.1 p50 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p60 = 9, /**< ASN.1 p60 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p70 = 10, /**< ASN.1 p70 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p75 = 11, /**< ASN.1 p75 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p80 = 12, /**< ASN.1 p80 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p85 = 13, /**< ASN.1 p85 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p90 = 14, /**< ASN.1 p90 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17_p95 = 15, /**< ASN.1 p95 */
} UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17;


/**
 * @brief 枚举 UE_TimersAndConstants_T300（ASN.1 t300，源文件第 13870 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TimersAndConstants_T300 {
    UE_TimersAndConstants_T300_ms100 = 0, /**< ASN.1 ms100 */
    UE_TimersAndConstants_T300_ms200 = 1, /**< ASN.1 ms200 */
    UE_TimersAndConstants_T300_ms300 = 2, /**< ASN.1 ms300 */
    UE_TimersAndConstants_T300_ms400 = 3, /**< ASN.1 ms400 */
    UE_TimersAndConstants_T300_ms600 = 4, /**< ASN.1 ms600 */
    UE_TimersAndConstants_T300_ms1000 = 5, /**< ASN.1 ms1000 */
    UE_TimersAndConstants_T300_ms1500 = 6, /**< ASN.1 ms1500 */
    UE_TimersAndConstants_T300_ms2000 = 7, /**< ASN.1 ms2000 */
} UE_TimersAndConstants_T300;


/**
 * @brief 枚举 UE_TimersAndConstants_T301（ASN.1 t301，源文件第 13871 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TimersAndConstants_T301 {
    UE_TimersAndConstants_T301_ms100 = 0, /**< ASN.1 ms100 */
    UE_TimersAndConstants_T301_ms200 = 1, /**< ASN.1 ms200 */
    UE_TimersAndConstants_T301_ms300 = 2, /**< ASN.1 ms300 */
    UE_TimersAndConstants_T301_ms400 = 3, /**< ASN.1 ms400 */
    UE_TimersAndConstants_T301_ms600 = 4, /**< ASN.1 ms600 */
    UE_TimersAndConstants_T301_ms1000 = 5, /**< ASN.1 ms1000 */
    UE_TimersAndConstants_T301_ms1500 = 6, /**< ASN.1 ms1500 */
    UE_TimersAndConstants_T301_ms2000 = 7, /**< ASN.1 ms2000 */
} UE_TimersAndConstants_T301;


/**
 * @brief 枚举 UE_TimersAndConstants_T310（ASN.1 t310，源文件第 13872 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TimersAndConstants_T310 {
    UE_TimersAndConstants_T310_ms0 = 0, /**< ASN.1 ms0 */
    UE_TimersAndConstants_T310_ms50 = 1, /**< ASN.1 ms50 */
    UE_TimersAndConstants_T310_ms100 = 2, /**< ASN.1 ms100 */
    UE_TimersAndConstants_T310_ms200 = 3, /**< ASN.1 ms200 */
    UE_TimersAndConstants_T310_ms500 = 4, /**< ASN.1 ms500 */
    UE_TimersAndConstants_T310_ms1000 = 5, /**< ASN.1 ms1000 */
    UE_TimersAndConstants_T310_ms2000 = 6, /**< ASN.1 ms2000 */
} UE_TimersAndConstants_T310;


/**
 * @brief 枚举 UE_TimersAndConstants_N310（ASN.1 n310，源文件第 13873 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TimersAndConstants_N310 {
    UE_TimersAndConstants_N310_n1 = 0, /**< ASN.1 n1 */
    UE_TimersAndConstants_N310_n2 = 1, /**< ASN.1 n2 */
    UE_TimersAndConstants_N310_n3 = 2, /**< ASN.1 n3 */
    UE_TimersAndConstants_N310_n4 = 3, /**< ASN.1 n4 */
    UE_TimersAndConstants_N310_n6 = 4, /**< ASN.1 n6 */
    UE_TimersAndConstants_N310_n8 = 5, /**< ASN.1 n8 */
    UE_TimersAndConstants_N310_n10 = 6, /**< ASN.1 n10 */
    UE_TimersAndConstants_N310_n20 = 7, /**< ASN.1 n20 */
} UE_TimersAndConstants_N310;


/**
 * @brief 枚举 UE_TimersAndConstants_T311（ASN.1 t311，源文件第 13874 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TimersAndConstants_T311 {
    UE_TimersAndConstants_T311_ms1000 = 0, /**< ASN.1 ms1000 */
    UE_TimersAndConstants_T311_ms3000 = 1, /**< ASN.1 ms3000 */
    UE_TimersAndConstants_T311_ms5000 = 2, /**< ASN.1 ms5000 */
    UE_TimersAndConstants_T311_ms10000 = 3, /**< ASN.1 ms10000 */
    UE_TimersAndConstants_T311_ms15000 = 4, /**< ASN.1 ms15000 */
    UE_TimersAndConstants_T311_ms20000 = 5, /**< ASN.1 ms20000 */
    UE_TimersAndConstants_T311_ms30000 = 6, /**< ASN.1 ms30000 */
} UE_TimersAndConstants_T311;


/**
 * @brief 枚举 UE_TimersAndConstants_N311（ASN.1 n311，源文件第 13875 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TimersAndConstants_N311 {
    UE_TimersAndConstants_N311_n1 = 0, /**< ASN.1 n1 */
    UE_TimersAndConstants_N311_n2 = 1, /**< ASN.1 n2 */
    UE_TimersAndConstants_N311_n3 = 2, /**< ASN.1 n3 */
    UE_TimersAndConstants_N311_n4 = 3, /**< ASN.1 n4 */
    UE_TimersAndConstants_N311_n5 = 4, /**< ASN.1 n5 */
    UE_TimersAndConstants_N311_n6 = 5, /**< ASN.1 n6 */
    UE_TimersAndConstants_N311_n8 = 6, /**< ASN.1 n8 */
    UE_TimersAndConstants_N311_n10 = 7, /**< ASN.1 n10 */
} UE_TimersAndConstants_N311;


/**
 * @brief 枚举 UE_TimersAndConstants_T319（ASN.1 t319，源文件第 13876 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TimersAndConstants_T319 {
    UE_TimersAndConstants_T319_ms100 = 0, /**< ASN.1 ms100 */
    UE_TimersAndConstants_T319_ms200 = 1, /**< ASN.1 ms200 */
    UE_TimersAndConstants_T319_ms300 = 2, /**< ASN.1 ms300 */
    UE_TimersAndConstants_T319_ms400 = 3, /**< ASN.1 ms400 */
    UE_TimersAndConstants_T319_ms600 = 4, /**< ASN.1 ms600 */
    UE_TimersAndConstants_T319_ms1000 = 5, /**< ASN.1 ms1000 */
    UE_TimersAndConstants_T319_ms1500 = 6, /**< ASN.1 ms1500 */
    UE_TimersAndConstants_T319_ms2000 = 7, /**< ASN.1 ms2000 */
} UE_TimersAndConstants_T319;


/**
 * @brief 枚举 UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17（ASN.1 t300-RemoteUE-r17，源文件第 13884 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17 {
    UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17_ms100 = 0, /**< ASN.1 ms100 */
    UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17_ms200 = 1, /**< ASN.1 ms200 */
    UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17_ms300 = 2, /**< ASN.1 ms300 */
    UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17_ms400 = 3, /**< ASN.1 ms400 */
    UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17_ms600 = 4, /**< ASN.1 ms600 */
    UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17_ms1000 = 5, /**< ASN.1 ms1000 */
    UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17_ms1500 = 6, /**< ASN.1 ms1500 */
    UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17_ms2000 = 7, /**< ASN.1 ms2000 */
} UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17;


/**
 * @brief 枚举 UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17（ASN.1 t301-RemoteUE-r17，源文件第 13885 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17 {
    UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17_ms100 = 0, /**< ASN.1 ms100 */
    UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17_ms200 = 1, /**< ASN.1 ms200 */
    UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17_ms300 = 2, /**< ASN.1 ms300 */
    UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17_ms400 = 3, /**< ASN.1 ms400 */
    UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17_ms600 = 4, /**< ASN.1 ms600 */
    UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17_ms1000 = 5, /**< ASN.1 ms1000 */
    UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17_ms1500 = 6, /**< ASN.1 ms1500 */
    UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17_ms2000 = 7, /**< ASN.1 ms2000 */
} UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17;


/**
 * @brief 枚举 UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17（ASN.1 t319-RemoteUE-r17，源文件第 13886 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17 {
    UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17_ms100 = 0, /**< ASN.1 ms100 */
    UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17_ms200 = 1, /**< ASN.1 ms200 */
    UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17_ms300 = 2, /**< ASN.1 ms300 */
    UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17_ms400 = 3, /**< ASN.1 ms400 */
    UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17_ms600 = 4, /**< ASN.1 ms600 */
    UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17_ms1000 = 5, /**< ASN.1 ms1000 */
    UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17_ms1500 = 6, /**< ASN.1 ms1500 */
    UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17_ms2000 = 7, /**< ASN.1 ms2000 */
} UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17;


/**
 * @brief 枚举 ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold（ASN.1 delayThreshold，源文件第 13906 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold {
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms0dot25 = 0, /**< ASN.1 ms0dot25 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms0dot5 = 1, /**< ASN.1 ms0dot5 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms1 = 2, /**< ASN.1 ms1 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms2 = 3, /**< ASN.1 ms2 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms4 = 4, /**< ASN.1 ms4 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms5 = 5, /**< ASN.1 ms5 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms10 = 6, /**< ASN.1 ms10 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms20 = 7, /**< ASN.1 ms20 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms30 = 8, /**< ASN.1 ms30 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms40 = 9, /**< ASN.1 ms40 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms50 = 10, /**< ASN.1 ms50 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms60 = 11, /**< ASN.1 ms60 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms70 = 12, /**< ASN.1 ms70 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms80 = 13, /**< ASN.1 ms80 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms90 = 14, /**< ASN.1 ms90 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms100 = 15, /**< ASN.1 ms100 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms150 = 16, /**< ASN.1 ms150 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms300 = 17, /**< ASN.1 ms300 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold_ms500 = 18, /**< ASN.1 ms500 */
} ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold;


/**
 * @brief 枚举 UL_GapFR2_Config_r17_Ugl_r17（ASN.1 ugl-r17，源文件第 13915 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UL_GapFR2_Config_r17_Ugl_r17 {
    UL_GapFR2_Config_r17_Ugl_r17_ms0dot125 = 0, /**< ASN.1 ms0dot125 */
    UL_GapFR2_Config_r17_Ugl_r17_ms0dot25 = 1, /**< ASN.1 ms0dot25 */
    UL_GapFR2_Config_r17_Ugl_r17_ms0dot5 = 2, /**< ASN.1 ms0dot5 */
    UL_GapFR2_Config_r17_Ugl_r17_ms1 = 3, /**< ASN.1 ms1 */
} UL_GapFR2_Config_r17_Ugl_r17;


/**
 * @brief 枚举 UL_GapFR2_Config_r17_Ugrp_r17（ASN.1 ugrp-r17，源文件第 13916 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UL_GapFR2_Config_r17_Ugrp_r17 {
    UL_GapFR2_Config_r17_Ugrp_r17_ms5 = 0, /**< ASN.1 ms5 */
    UL_GapFR2_Config_r17_Ugrp_r17_ms20 = 1, /**< ASN.1 ms20 */
    UL_GapFR2_Config_r17_Ugrp_r17_ms40 = 2, /**< ASN.1 ms40 */
    UL_GapFR2_Config_r17_Ugrp_r17_ms160 = 3, /**< ASN.1 ms160 */
} UL_GapFR2_Config_r17_Ugrp_r17;


/**
 * @brief 枚举 CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16（ASN.1 ci-PayloadSize-r16，源文件第 13934 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16 {
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n1 = 0, /**< ASN.1 n1 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n2 = 1, /**< ASN.1 n2 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n4 = 2, /**< ASN.1 n4 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n5 = 3, /**< ASN.1 n5 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n7 = 4, /**< ASN.1 n7 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n8 = 5, /**< ASN.1 n8 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n10 = 6, /**< ASN.1 n10 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n14 = 7, /**< ASN.1 n14 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n16 = 8, /**< ASN.1 n16 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n20 = 9, /**< ASN.1 n20 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n28 = 10, /**< ASN.1 n28 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n32 = 11, /**< ASN.1 n32 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n35 = 12, /**< ASN.1 n35 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n42 = 13, /**< ASN.1 n42 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n56 = 14, /**< ASN.1 n56 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16_n112 = 15, /**< ASN.1 n112 */
} CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16;


/**
 * @brief 枚举 CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeDurationForCI_r16（ASN.1 timeFrequencyRegion-r16/timeDurationForCI-r16，源文件第 13936 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeDurationForCI_r16 {
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeDurationForCI_r16_n2 = 0, /**< ASN.1 n2 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeDurationForCI_r16_n4 = 1, /**< ASN.1 n4 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeDurationForCI_r16_n7 = 2, /**< ASN.1 n7 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeDurationForCI_r16_n14 = 3, /**< ASN.1 n14 */
} CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeDurationForCI_r16;


/**
 * @brief 枚举 CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16（ASN.1 timeFrequencyRegion-r16/timeGranularityForCI-r16，源文件第 13937 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16 {
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16_n1 = 0, /**< ASN.1 n1 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16_n2 = 1, /**< ASN.1 n2 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16_n4 = 2, /**< ASN.1 n4 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16_n7 = 3, /**< ASN.1 n7 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16_n14 = 4, /**< ASN.1 n14 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16_n28 = 5, /**< ASN.1 n28 */
} CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16;


/**
 * @brief 枚举 CI_ConfigurationPerServingCell_r16_UplinkCancellationPriority_v1610（ASN.1 uplinkCancellationPriority-v1610，源文件第 13942 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CI_ConfigurationPerServingCell_r16_UplinkCancellationPriority_v1610 {
    CI_ConfigurationPerServingCell_r16_UplinkCancellationPriority_v1610_enabled = 0, /**< ASN.1 enabled */
} CI_ConfigurationPerServingCell_r16_UplinkCancellationPriority_v1610;


/**
 * @brief 枚举 P0AlphaSet_r17_ClosedLoopIndex_r17（ASN.1 closedLoopIndex-r17，源文件第 13988 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum P0AlphaSet_r17_ClosedLoopIndex_r17 {
    P0AlphaSet_r17_ClosedLoopIndex_r17_i0 = 0, /**< ASN.1 i0 */
    P0AlphaSet_r17_ClosedLoopIndex_r17_i1 = 1, /**< ASN.1 i1 */
} P0AlphaSet_r17_ClosedLoopIndex_r17;


/**
 * @brief 枚举 Uu_RelayRLC_ChannelConfig_r17_ReestablishRLC_r17（ASN.1 reestablishRLC-r17，源文件第 13999 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Uu_RelayRLC_ChannelConfig_r17_ReestablishRLC_r17 {
    Uu_RelayRLC_ChannelConfig_r17_ReestablishRLC_r17_trueVal = 0, /**< ASN.1 trueVal */
} Uu_RelayRLC_ChannelConfig_r17_ReestablishRLC_r17;


/**
 * @brief 枚举 UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_DeactivatedCarrier_r16（ASN.1 servCellInfo-r16/deactivatedCarrier-r16，源文件第 14075 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_DeactivatedCarrier_r16 {
    UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_DeactivatedCarrier_r16_deactivated = 0, /**< ASN.1 deactivated */
} UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_DeactivatedCarrier_r16;


/**
 * @brief 枚举 AerialParameters_r18_AerialUE_Capability_r18（ASN.1 aerialUE-Capability-r18，源文件第 14122 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AerialParameters_r18_AerialUE_Capability_r18 {
    AerialParameters_r18_AerialUE_Capability_r18_supported = 0, /**< ASN.1 supported */
} AerialParameters_r18_AerialUE_Capability_r18;


/**
 * @brief 枚举 AerialParameters_r18_AltitudeMeas_r18（ASN.1 altitudeMeas-r18，源文件第 14124 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AerialParameters_r18_AltitudeMeas_r18 {
    AerialParameters_r18_AltitudeMeas_r18_supported = 0, /**< ASN.1 supported */
} AerialParameters_r18_AltitudeMeas_r18;


/**
 * @brief 枚举 AerialParameters_r18_AltitudeBasedSSB_ToMeasure_r18（ASN.1 altitudeBasedSSB-ToMeasure-r18，源文件第 14126 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AerialParameters_r18_AltitudeBasedSSB_ToMeasure_r18 {
    AerialParameters_r18_AltitudeBasedSSB_ToMeasure_r18_supported = 0, /**< ASN.1 supported */
} AerialParameters_r18_AltitudeBasedSSB_ToMeasure_r18;


/**
 * @brief 枚举 AerialParameters_r18_EventAxHy_r18（ASN.1 eventAxHy-r18，源文件第 14128 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AerialParameters_r18_EventAxHy_r18 {
    AerialParameters_r18_EventAxHy_r18_supported = 0, /**< ASN.1 supported */
} AerialParameters_r18_EventAxHy_r18;


/**
 * @brief 枚举 AerialParameters_r18_FlightPathReporting_r18（ASN.1 flightPathReporting-r18，源文件第 14130 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AerialParameters_r18_FlightPathReporting_r18 {
    AerialParameters_r18_FlightPathReporting_r18_supported = 0, /**< ASN.1 supported */
} AerialParameters_r18_FlightPathReporting_r18;


/**
 * @brief 枚举 AerialParameters_r18_FlightPathAvailabilityIndicationUAI_r18（ASN.1 flightPathAvailabilityIndicationUAI-r18，源文件第 14132 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AerialParameters_r18_FlightPathAvailabilityIndicationUAI_r18 {
    AerialParameters_r18_FlightPathAvailabilityIndicationUAI_r18_supported = 0, /**< ASN.1 supported */
} AerialParameters_r18_FlightPathAvailabilityIndicationUAI_r18;


/**
 * @brief 枚举 AerialParameters_r18_MultipleCellsMeasExtension_r18（ASN.1 multipleCellsMeasExtension-r18，源文件第 14135 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AerialParameters_r18_MultipleCellsMeasExtension_r18 {
    AerialParameters_r18_MultipleCellsMeasExtension_r18_supported = 0, /**< ASN.1 supported */
} AerialParameters_r18_MultipleCellsMeasExtension_r18;


/**
 * @brief 枚举 AerialParameters_r18_Nr_NS_PmaxListAerial_r18（ASN.1 nr-NS-PmaxListAerial-r18，源文件第 14137 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AerialParameters_r18_Nr_NS_PmaxListAerial_r18 {
    AerialParameters_r18_Nr_NS_PmaxListAerial_r18_supported = 0, /**< ASN.1 supported */
} AerialParameters_r18_Nr_NS_PmaxListAerial_r18;


/**
 * @brief 枚举 AerialParameters_r18_SimulMultiTriggerSingleMeasReport_r18（ASN.1 simulMultiTriggerSingleMeasReport-r18，源文件第 14141 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AerialParameters_r18_SimulMultiTriggerSingleMeasReport_r18 {
    AerialParameters_r18_SimulMultiTriggerSingleMeasReport_r18_supported = 0, /**< ASN.1 supported */
} AerialParameters_r18_SimulMultiTriggerSingleMeasReport_r18;


/**
 * @brief 枚举 AerialParameters_r18_Sl_A2X_Service_r18（ASN.1 sl-A2X-Service-r18，源文件第 14143 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AerialParameters_r18_Sl_A2X_Service_r18 {
    AerialParameters_r18_Sl_A2X_Service_r18_brid = 0, /**< ASN.1 brid */
    AerialParameters_r18_Sl_A2X_Service_r18_daa = 1, /**< ASN.1 daa */
    AerialParameters_r18_Sl_A2X_Service_r18_bridAndDAA = 2, /**< ASN.1 bridAndDAA */
} AerialParameters_r18_Sl_A2X_Service_r18;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_Qoe_Streaming_MeasReport_r17（ASN.1 qoe-Streaming-MeasReport-r17，源文件第 14151 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_Qoe_Streaming_MeasReport_r17 {
    AppLayerMeasParameters_r17_Qoe_Streaming_MeasReport_r17_supported = 0, /**< ASN.1 supported */
} AppLayerMeasParameters_r17_Qoe_Streaming_MeasReport_r17;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_Qoe_MTSI_MeasReport_r17（ASN.1 qoe-MTSI-MeasReport-r17，源文件第 14152 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_Qoe_MTSI_MeasReport_r17 {
    AppLayerMeasParameters_r17_Qoe_MTSI_MeasReport_r17_supported = 0, /**< ASN.1 supported */
} AppLayerMeasParameters_r17_Qoe_MTSI_MeasReport_r17;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_Qoe_VR_MeasReport_r17（ASN.1 qoe-VR-MeasReport-r17，源文件第 14153 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_Qoe_VR_MeasReport_r17 {
    AppLayerMeasParameters_r17_Qoe_VR_MeasReport_r17_supported = 0, /**< ASN.1 supported */
} AppLayerMeasParameters_r17_Qoe_VR_MeasReport_r17;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_Ran_VisibleQoE_Streaming_MeasReport_r17（ASN.1 ran-VisibleQoE-Streaming-MeasReport-r17，源文件第 14154 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_Ran_VisibleQoE_Streaming_MeasReport_r17 {
    AppLayerMeasParameters_r17_Ran_VisibleQoE_Streaming_MeasReport_r17_supported = 0, /**< ASN.1 supported */
} AppLayerMeasParameters_r17_Ran_VisibleQoE_Streaming_MeasReport_r17;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_Ran_VisibleQoE_VR_MeasReport_r17（ASN.1 ran-VisibleQoE-VR-MeasReport-r17，源文件第 14155 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_Ran_VisibleQoE_VR_MeasReport_r17 {
    AppLayerMeasParameters_r17_Ran_VisibleQoE_VR_MeasReport_r17_supported = 0, /**< ASN.1 supported */
} AppLayerMeasParameters_r17_Ran_VisibleQoE_VR_MeasReport_r17;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_Ul_MeasurementReportAppLayer_Seg_r17（ASN.1 ul-MeasurementReportAppLayer-Seg-r17，源文件第 14156 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_Ul_MeasurementReportAppLayer_Seg_r17 {
    AppLayerMeasParameters_r17_Ul_MeasurementReportAppLayer_Seg_r17_supported = 0, /**< ASN.1 supported */
} AppLayerMeasParameters_r17_Ul_MeasurementReportAppLayer_Seg_r17;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_ExtGroup1_Qoe_IdleInactiveMeasReport_r18（ASN.1 qoe-IdleInactiveMeasReport-r18，源文件第 14159 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_ExtGroup1_Qoe_IdleInactiveMeasReport_r18 {
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_IdleInactiveMeasReport_r18_supported = 0, /**< ASN.1 supported */
} AppLayerMeasParameters_r17_ExtGroup1_Qoe_IdleInactiveMeasReport_r18;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_ExtGroup1_Qoe_NRDC_MeasReport_r18（ASN.1 qoe-NRDC-MeasReport-r18，源文件第 14160 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_ExtGroup1_Qoe_NRDC_MeasReport_r18 {
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_NRDC_MeasReport_r18_supported = 0, /**< ASN.1 supported */
} AppLayerMeasParameters_r17_ExtGroup1_Qoe_NRDC_MeasReport_r18;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_ExtGroup1_Qoe_AdditionalMemoryMeasReport_r18（ASN.1 qoe-AdditionalMemoryMeasReport-r18，源文件第 14161 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_ExtGroup1_Qoe_AdditionalMemoryMeasReport_r18 {
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_AdditionalMemoryMeasReport_r18_kB128 = 0, /**< ASN.1 kB128 */
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_AdditionalMemoryMeasReport_r18_kB256 = 1, /**< ASN.1 kB256 */
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_AdditionalMemoryMeasReport_r18_kB512 = 2, /**< ASN.1 kB512 */
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_AdditionalMemoryMeasReport_r18_kB1024 = 3, /**< ASN.1 kB1024 */
} AppLayerMeasParameters_r17_ExtGroup1_Qoe_AdditionalMemoryMeasReport_r18;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_ExtGroup1_Qoe_PriorityBasedDiscarding_r18（ASN.1 qoe-PriorityBasedDiscarding-r18，源文件第 14162 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_ExtGroup1_Qoe_PriorityBasedDiscarding_r18 {
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_PriorityBasedDiscarding_r18_supported = 0, /**< ASN.1 supported */
} AppLayerMeasParameters_r17_ExtGroup1_Qoe_PriorityBasedDiscarding_r18;


/**
 * @brief 枚举 AppLayerMeasParameters_r17_ExtGroup1_Srb5_r18（ASN.1 srb5-r18，源文件第 14163 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerMeasParameters_r17_ExtGroup1_Srb5_r18 {
    AppLayerMeasParameters_r17_ExtGroup1_Srb5_r18_supported = 0, /**< ASN.1 supported */
} AppLayerMeasParameters_r17_ExtGroup1_Srb5_r18;


/**
 * @brief 枚举 BandCombination_PowerClass_v1530（ASN.1 powerClass-v1530，源文件第 14257 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandCombination_PowerClass_v1530 {
    BandCombination_PowerClass_v1530_pc2 = 0, /**< ASN.1 pc2 */
} BandCombination_PowerClass_v1530;


/**
 * @brief 枚举 BandCombination_v1560_Ne_DC_BC（ASN.1 ne-DC-BC，源文件第 14269 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandCombination_v1560_Ne_DC_BC {
    BandCombination_v1560_Ne_DC_BC_supported = 0, /**< ASN.1 supported */
} BandCombination_v1560_Ne_DC_BC;


/**
 * @brief 枚举 BandCombination_v1610_PowerClass_v1610（ASN.1 powerClass-v1610，源文件第 14302 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandCombination_v1610_PowerClass_v1610 {
    BandCombination_v1610_PowerClass_v1610_pc1dot5 = 0, /**< ASN.1 pc1dot5 */
} BandCombination_v1610_PowerClass_v1610;


/**
 * @brief 枚举 BandCombination_v1610_PowerClassNRPart_r16（ASN.1 powerClassNRPart-r16，源文件第 14303 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandCombination_v1610_PowerClassNRPart_r16 {
    BandCombination_v1610_PowerClassNRPart_r16_pc1 = 0, /**< ASN.1 pc1 */
    BandCombination_v1610_PowerClassNRPart_r16_pc2 = 1, /**< ASN.1 pc2 */
    BandCombination_v1610_PowerClassNRPart_r16_pc3 = 2, /**< ASN.1 pc3 */
    BandCombination_v1610_PowerClassNRPart_r16_pc5 = 3, /**< ASN.1 pc5 */
} BandCombination_v1610_PowerClassNRPart_r16;


/**
 * @brief 枚举 BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_OptionSupport_r16（ASN.1 uplinkTxSwitching-OptionSupport-r16，源文件第 14397 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_OptionSupport_r16 {
    BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_OptionSupport_r16_switchedUL = 0, /**< ASN.1 switchedUL */
    BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_OptionSupport_r16_dualUL = 1, /**< ASN.1 dualUL */
    BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_OptionSupport_r16_both = 2, /**< ASN.1 both */
} BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_OptionSupport_r16;


/**
 * @brief 枚举 BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_PowerBoosting_r16（ASN.1 uplinkTxSwitching-PowerBoosting-r16，源文件第 14398 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_PowerBoosting_r16 {
    BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_PowerBoosting_r16_supported = 0, /**< ASN.1 supported */
} BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_PowerBoosting_r16;


/**
 * @brief 枚举 BandCombination_UplinkTxSwitch_r16_ExtGroup1_UplinkTxSwitching_PUSCH_TransCoherence_r16（ASN.1 uplinkTxSwitching-PUSCH-TransCoherence-r16，源文件第 14402 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandCombination_UplinkTxSwitch_r16_ExtGroup1_UplinkTxSwitching_PUSCH_TransCoherence_r16 {
    BandCombination_UplinkTxSwitch_r16_ExtGroup1_UplinkTxSwitching_PUSCH_TransCoherence_r16_nonCoherent = 0, /**< ASN.1 nonCoherent */
    BandCombination_UplinkTxSwitch_r16_ExtGroup1_UplinkTxSwitching_PUSCH_TransCoherence_r16_fullCoherent = 1, /**< ASN.1 fullCoherent */
} BandCombination_UplinkTxSwitch_r16_ExtGroup1_UplinkTxSwitching_PUSCH_TransCoherence_r16;


/**
 * @brief 枚举 BandCombination_UplinkTxSwitch_v1720_UplinkTxSwitching_OptionSupport2T2T_r17（ASN.1 uplinkTxSwitching-OptionSupport2T2T-r17，源文件第 14444 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandCombination_UplinkTxSwitch_v1720_UplinkTxSwitching_OptionSupport2T2T_r17 {
    BandCombination_UplinkTxSwitch_v1720_UplinkTxSwitching_OptionSupport2T2T_r17_switchedUL = 0, /**< ASN.1 switchedUL */
    BandCombination_UplinkTxSwitch_v1720_UplinkTxSwitching_OptionSupport2T2T_r17_dualUL = 1, /**< ASN.1 dualUL */
    BandCombination_UplinkTxSwitch_v1720_UplinkTxSwitching_OptionSupport2T2T_r17_both = 2, /**< ASN.1 both */
} BandCombination_UplinkTxSwitch_v1720_UplinkTxSwitching_OptionSupport2T2T_r17;


/**
 * @brief 枚举 BandCombination_UplinkTxSwitch_v1800_UplinkTxSwitchingMinimumSeparationTime_r18（ASN.1 uplinkTxSwitchingMinimumSeparationTime-r18，源文件第 14471 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandCombination_UplinkTxSwitch_v1800_UplinkTxSwitchingMinimumSeparationTime_r18 {
    BandCombination_UplinkTxSwitch_v1800_UplinkTxSwitchingMinimumSeparationTime_r18_n0us = 0, /**< ASN.1 n0us */
    BandCombination_UplinkTxSwitch_v1800_UplinkTxSwitchingMinimumSeparationTime_r18_n500us = 1, /**< ASN.1 n500us */
} BandCombination_UplinkTxSwitch_v1800_UplinkTxSwitchingMinimumSeparationTime_r18;


/**
 * @brief 枚举 BandCombination_UplinkTxSwitch_v1800_SwitchingPeriodRestriction_r18（ASN.1 switchingPeriodRestriction-r18，源文件第 14475 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandCombination_UplinkTxSwitch_v1800_SwitchingPeriodRestriction_r18 {
    BandCombination_UplinkTxSwitch_v1800_SwitchingPeriodRestriction_r18_trueVal = 0, /**< ASN.1 trueVal */
} BandCombination_UplinkTxSwitch_v1800_SwitchingPeriodRestriction_r18;


/**
 * @brief 枚举 ULTxSwitchingBandPair_r16_UplinkTxSwitchingPeriod_r16（ASN.1 uplinkTxSwitchingPeriod-r16，源文件第 14481 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ULTxSwitchingBandPair_r16_UplinkTxSwitchingPeriod_r16 {
    ULTxSwitchingBandPair_r16_UplinkTxSwitchingPeriod_r16_n35us = 0, /**< ASN.1 n35us */
    ULTxSwitchingBandPair_r16_UplinkTxSwitchingPeriod_r16_n140us = 1, /**< ASN.1 n140us */
    ULTxSwitchingBandPair_r16_UplinkTxSwitchingPeriod_r16_n210us = 2, /**< ASN.1 n210us */
} ULTxSwitchingBandPair_r16_UplinkTxSwitchingPeriod_r16;


/**
 * @brief 枚举 ULTxSwitchingBandPair_v1700_UplinkTxSwitchingPeriod2T2T_r17（ASN.1 uplinkTxSwitchingPeriod2T2T-r17，源文件第 14486 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ULTxSwitchingBandPair_v1700_UplinkTxSwitchingPeriod2T2T_r17 {
    ULTxSwitchingBandPair_v1700_UplinkTxSwitchingPeriod2T2T_r17_n35us = 0, /**< ASN.1 n35us */
    ULTxSwitchingBandPair_v1700_UplinkTxSwitchingPeriod2T2T_r17_n140us = 1, /**< ASN.1 n140us */
    ULTxSwitchingBandPair_v1700_UplinkTxSwitchingPeriod2T2T_r17_n210us = 2, /**< ASN.1 n210us */
} ULTxSwitchingBandPair_v1700_UplinkTxSwitchingPeriod2T2T_r17;


/**
 * @brief 枚举 ULTxSwitchingBandPair_r18_UplinkTxSwitchingOptionForBandPair_r18（ASN.1 uplinkTxSwitchingOptionForBandPair-r18，源文件第 14493 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ULTxSwitchingBandPair_r18_UplinkTxSwitchingOptionForBandPair_r18 {
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingOptionForBandPair_r18_switchedUL = 0, /**< ASN.1 switchedUL */
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingOptionForBandPair_r18_dualUL = 1, /**< ASN.1 dualUL */
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingOptionForBandPair_r18_both = 2, /**< ASN.1 both */
} ULTxSwitchingBandPair_r18_UplinkTxSwitchingOptionForBandPair_r18;


/**
 * @brief 枚举 ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor2T_r18（ASN.1 uplinkTxSwitchingPeriodForBandPair-r18/switchingPeriodFor2T-r18，源文件第 14496 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor2T_r18 {
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor2T_r18_n35us = 0, /**< ASN.1 n35us */
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor2T_r18_n140us = 1, /**< ASN.1 n140us */
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor2T_r18_n210us = 2, /**< ASN.1 n210us */
} ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor2T_r18;


/**
 * @brief 枚举 ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor1T_r18（ASN.1 uplinkTxSwitchingPeriodForBandPair-r18/switchingPeriodFor1T-r18，源文件第 14497 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor1T_r18 {
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor1T_r18_n35us = 0, /**< ASN.1 n35us */
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor1T_r18_n140us = 1, /**< ASN.1 n140us */
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor1T_r18_n210us = 2, /**< ASN.1 n210us */
} ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor1T_r18;


/**
 * @brief 枚举 UplinkTxSwitchingBandParameters_v1700_UplinkTxSwitching2T2T_PUSCH_TransCoherence_r17（ASN.1 uplinkTxSwitching2T2T-PUSCH-TransCoherence-r17，源文件第 14509 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkTxSwitchingBandParameters_v1700_UplinkTxSwitching2T2T_PUSCH_TransCoherence_r17 {
    UplinkTxSwitchingBandParameters_v1700_UplinkTxSwitching2T2T_PUSCH_TransCoherence_r17_nonCoherent = 0, /**< ASN.1 nonCoherent */
    UplinkTxSwitchingBandParameters_v1700_UplinkTxSwitching2T2T_PUSCH_TransCoherence_r17_fullCoherent = 1, /**< ASN.1 fullCoherent */
} UplinkTxSwitchingBandParameters_v1700_UplinkTxSwitching2T2T_PUSCH_TransCoherence_r17;


/**
 * @brief 枚举 UplinkTxSwitchingAdditionalPeriodDualUL_r18_SwitchingAdditionalPeriodDualUL_r18（ASN.1 switchingAdditionalPeriodDualUL-r18，源文件第 14521 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkTxSwitchingAdditionalPeriodDualUL_r18_SwitchingAdditionalPeriodDualUL_r18 {
    UplinkTxSwitchingAdditionalPeriodDualUL_r18_SwitchingAdditionalPeriodDualUL_r18_n35us = 0, /**< ASN.1 n35us */
    UplinkTxSwitchingAdditionalPeriodDualUL_r18_SwitchingAdditionalPeriodDualUL_r18_n140us = 1, /**< ASN.1 n140us */
    UplinkTxSwitchingAdditionalPeriodDualUL_r18_SwitchingAdditionalPeriodDualUL_r18_n210us = 2, /**< ASN.1 n210us */
} UplinkTxSwitchingAdditionalPeriodDualUL_r18_SwitchingAdditionalPeriodDualUL_r18;


/**
 * @brief 枚举 SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_PeriodOnULBands_r18（ASN.1 periodUnaffectedBandDualUL-r18/periodOnULBands-r18，源文件第 14528 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_PeriodOnULBands_r18 {
    SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_PeriodOnULBands_r18_n35us = 0, /**< ASN.1 n35us */
    SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_PeriodOnULBands_r18_n140us = 1, /**< ASN.1 n140us */
    SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_PeriodOnULBands_r18_n210us = 2, /**< ASN.1 n210us */
} SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_PeriodOnULBands_r18;


/**
 * @brief 枚举 BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch（ASN.1 srs-TxSwitch/supportedSRS-TxPortSwitch，源文件第 14556 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch {
    BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch_t1r2 = 0, /**< ASN.1 t1r2 */
    BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch_t1r4 = 1, /**< ASN.1 t1r4 */
    BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch_t2r4 = 2, /**< ASN.1 t2r4 */
    BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch_t1r4_t2r4 = 3, /**< ASN.1 t1r4-t2r4 */
    BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch_t1r1 = 4, /**< ASN.1 t1r1 */
    BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch_t2r2 = 5, /**< ASN.1 t2r2 */
    BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch_t4r4 = 6, /**< ASN.1 t4r4 */
    BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch_notSupported = 7, /**< ASN.1 notSupported */
} BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch;


/**
 * @brief 枚举 BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610（ASN.1 srs-TxSwitch-v1610/supportedSRS-TxPortSwitch-v1610，源文件第 14564 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610 {
    BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610_t1r1_t1r2 = 0, /**< ASN.1 t1r1-t1r2 */
    BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610_t1r1_t1r2_t1r4 = 1, /**< ASN.1 t1r1-t1r2-t1r4 */
    BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610_t1r1_t1r2_t2r2_t2r4 = 2, /**< ASN.1 t1r1-t1r2-t2r2-t2r4 */
    BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610_t1r1_t1r2_t2r2_t1r4_t2r4 = 3, /**< ASN.1 t1r1-t1r2-t2r2-t1r4-t2r4 */
    BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610_t1r1_t2r2 = 4, /**< ASN.1 t1r1-t2r2 */
    BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610_t1r1_t2r2_t4r4 = 5, /**< ASN.1 t1r1-t2r2-t4r4 */
} BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610;


/**
 * @brief 枚举 BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_AntennaSwitch8T8R_r18（ASN.1 srs-AntennaSwitching8T8R-r18/antennaSwitch8T8R-r18，源文件第 14603 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_AntennaSwitch8T8R_r18 {
    BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_AntennaSwitch8T8R_r18_noTdm = 0, /**< ASN.1 noTdm */
    BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_AntennaSwitch8T8R_r18_tdmAndNoTdm = 1, /**< ASN.1 tdmAndNoTdm */
} BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_AntennaSwitch8T8R_r18;


/**
 * @brief 枚举 BandParametersSidelinkEUTRA_NR_v1630_Nr_Tx_Sidelink_r16（ASN.1 nr/tx-Sidelink-r16，源文件第 14647 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkEUTRA_NR_v1630_Nr_Tx_Sidelink_r16 {
    BandParametersSidelinkEUTRA_NR_v1630_Nr_Tx_Sidelink_r16_supported = 0, /**< ASN.1 supported */
} BandParametersSidelinkEUTRA_NR_v1630_Nr_Tx_Sidelink_r16;


/**
 * @brief 枚举 BandParametersSidelinkEUTRA_NR_v1630_Nr_Rx_Sidelink_r16（ASN.1 nr/rx-Sidelink-r16，源文件第 14648 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkEUTRA_NR_v1630_Nr_Rx_Sidelink_r16 {
    BandParametersSidelinkEUTRA_NR_v1630_Nr_Rx_Sidelink_r16_supported = 0, /**< ASN.1 supported */
} BandParametersSidelinkEUTRA_NR_v1630_Nr_Rx_Sidelink_r16;


/**
 * @brief 枚举 BandParametersSidelinkEUTRA_NR_v1630_Nr_Sl_CrossCarrierScheduling_r16（ASN.1 nr/sl-CrossCarrierScheduling-r16，源文件第 14649 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkEUTRA_NR_v1630_Nr_Sl_CrossCarrierScheduling_r16 {
    BandParametersSidelinkEUTRA_NR_v1630_Nr_Sl_CrossCarrierScheduling_r16_supported = 0, /**< ASN.1 supported */
} BandParametersSidelinkEUTRA_NR_v1630_Nr_Sl_CrossCarrierScheduling_r16;


/**
 * @brief 枚举 BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17（ASN.1 nr/sl-TransmissionMode2-PartialSensing-r17/harq-TxProcessModeTwoSidelink-r17，源文件第 14658 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17 {
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17_n8 = 0, /**< ASN.1 n8 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17_n16 = 1, /**< ASN.1 n16 */
} BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17;


/**
 * @brief 枚举 BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17（ASN.1 nr/sl-TransmissionMode2-PartialSensing-r17/extendedCP-Mode2PartialSensing-r17，源文件第 14670 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17 {
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2Part_1f6f0502 = 0, /**< ASN.1 supported */
} BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17;


/**
 * @brief 枚举 BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17（ASN.1 nr/sl-TransmissionMode2-PartialSensing-r17/dl-openLoopPC-Sidelink-r17，源文件第 14671 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17 {
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17_supported = 0, /**< ASN.1 supported */
} BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17;


/**
 * @brief 枚举 BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17（ASN.1 nr/rx-sidelinkPSFCH-r17，源文件第 14674 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17 {
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17_n5 = 0, /**< ASN.1 n5 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17_n15 = 1, /**< ASN.1 n15 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17_n25 = 2, /**< ASN.1 n25 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17_n32 = 3, /**< ASN.1 n32 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17_n35 = 4, /**< ASN.1 n35 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17_n45 = 5, /**< ASN.1 n45 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17_n50 = 6, /**< ASN.1 n50 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17_n64 = 7, /**< ASN.1 n64 */
} BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17;


/**
 * @brief 枚举 BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme1_Mode2Sidelink_r17（ASN.1 nr/tx-IUC-Scheme1-Mode2Sidelink-r17，源文件第 14676 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme1_Mode2Sidelink_r17 {
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme1_Mode2Sidelink_r17_supported = 0, /**< ASN.1 supported */
} BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme1_Mode2Sidelink_r17;


/**
 * @brief 枚举 BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme2_Mode2Sidelink_r17（ASN.1 nr/tx-IUC-Scheme2-Mode2Sidelink-r17，源文件第 14678 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme2_Mode2Sidelink_r17 {
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme2_Mode2Sidelink_r17_n4 = 0, /**< ASN.1 n4 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme2_Mode2Sidelink_r17_n8 = 1, /**< ASN.1 n8 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme2_Mode2Sidelink_r17_n16 = 2, /**< ASN.1 n16 */
} BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme2_Mode2Sidelink_r17;


/**
 * @brief 枚举 BandParametersSidelinkDiscovery_r17_Sl_CrossCarrierScheduling_r17（ASN.1 sl-CrossCarrierScheduling-r17，源文件第 14692 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkDiscovery_r17_Sl_CrossCarrierScheduling_r17 {
    BandParametersSidelinkDiscovery_r17_Sl_CrossCarrierScheduling_r17_supported = 0, /**< ASN.1 supported */
} BandParametersSidelinkDiscovery_r17_Sl_CrossCarrierScheduling_r17;


/**
 * @brief 枚举 BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17（ASN.1 sl-TransmissionMode2-PartialSensing-r17/harq-TxProcessModeTwoSidelink-r17，源文件第 14695 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17 {
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17_n8 = 0, /**< ASN.1 n8 */
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17_n16 = 1, /**< ASN.1 n16 */
} BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17;


/**
 * @brief 枚举 BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17（ASN.1 sl-TransmissionMode2-PartialSensing-r17/extendedCP-Mode2PartialSensing-r17，源文件第 14707 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17 {
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17_supported = 0, /**< ASN.1 supported */
} BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17;


/**
 * @brief 枚举 BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17（ASN.1 sl-TransmissionMode2-PartialSensing-r17/dl-openLoopPC-Sidelink-r17，源文件第 14708 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17 {
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17_supported = 0, /**< ASN.1 supported */
} BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17;


/**
 * @brief 枚举 BandParametersSidelinkDiscovery_r17_Tx_IUC_Scheme1_Mode2Sidelink_r17（ASN.1 tx-IUC-Scheme1-Mode2Sidelink-r17，源文件第 14711 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandParametersSidelinkDiscovery_r17_Tx_IUC_Scheme1_Mode2Sidelink_r17 {
    BandParametersSidelinkDiscovery_r17_Tx_IUC_Scheme1_Mode2Sidelink_r17_supported = 0, /**< ASN.1 supported */
} BandParametersSidelinkDiscovery_r17_Tx_IUC_Scheme1_Mode2Sidelink_r17;


/**
 * @brief 枚举 CA_ParametersEUTRA_MultipleTimingAdvance（ASN.1 multipleTimingAdvance，源文件第 14733 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersEUTRA_MultipleTimingAdvance {
    CA_ParametersEUTRA_MultipleTimingAdvance_supported = 0, /**< ASN.1 supported */
} CA_ParametersEUTRA_MultipleTimingAdvance;


/**
 * @brief 枚举 CA_ParametersEUTRA_SimultaneousRx_Tx（ASN.1 simultaneousRx-Tx，源文件第 14734 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersEUTRA_SimultaneousRx_Tx {
    CA_ParametersEUTRA_SimultaneousRx_Tx_supported = 0, /**< ASN.1 supported */
} CA_ParametersEUTRA_SimultaneousRx_Tx;


/**
 * @brief 枚举 CA_ParametersEUTRA_AdditionalRx_Tx_PerformanceReq（ASN.1 additionalRx-Tx-PerformanceReq，源文件第 14736 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersEUTRA_AdditionalRx_Tx_PerformanceReq {
    CA_ParametersEUTRA_AdditionalRx_Tx_PerformanceReq_supported = 0, /**< ASN.1 supported */
} CA_ParametersEUTRA_AdditionalRx_Tx_PerformanceReq;


/**
 * @brief 枚举 CA_ParametersEUTRA_Ue_CA_PowerClass_N（ASN.1 ue-CA-PowerClass-N，源文件第 14737 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersEUTRA_Ue_CA_PowerClass_N {
    CA_ParametersEUTRA_Ue_CA_PowerClass_N_class2 = 0, /**< ASN.1 class2 */
} CA_ParametersEUTRA_Ue_CA_PowerClass_N;


/**
 * @brief 枚举 CA_ParametersNR_Dummy（ASN.1 dummy，源文件第 14754 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_Dummy {
    CA_ParametersNR_Dummy_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_Dummy;


/**
 * @brief 枚举 CA_ParametersNR_ParallelTxSRS_PUCCH_PUSCH（ASN.1 parallelTxSRS-PUCCH-PUSCH，源文件第 14755 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_ParallelTxSRS_PUCCH_PUSCH {
    CA_ParametersNR_ParallelTxSRS_PUCCH_PUSCH_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_ParallelTxSRS_PUCCH_PUSCH;


/**
 * @brief 枚举 CA_ParametersNR_ParallelTxPRACH_SRS_PUCCH_PUSCH（ASN.1 parallelTxPRACH-SRS-PUCCH-PUSCH，源文件第 14756 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_ParallelTxPRACH_SRS_PUCCH_PUSCH {
    CA_ParametersNR_ParallelTxPRACH_SRS_PUCCH_PUSCH_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_ParallelTxPRACH_SRS_PUCCH_PUSCH;


/**
 * @brief 枚举 CA_ParametersNR_SimultaneousRxTxInterBandCA（ASN.1 simultaneousRxTxInterBandCA，源文件第 14757 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_SimultaneousRxTxInterBandCA {
    CA_ParametersNR_SimultaneousRxTxInterBandCA_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_SimultaneousRxTxInterBandCA;


/**
 * @brief 枚举 CA_ParametersNR_SimultaneousRxTxSUL（ASN.1 simultaneousRxTxSUL，源文件第 14758 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_SimultaneousRxTxSUL {
    CA_ParametersNR_SimultaneousRxTxSUL_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_SimultaneousRxTxSUL;


/**
 * @brief 枚举 CA_ParametersNR_DiffNumerologyAcrossPUCCH_Group（ASN.1 diffNumerologyAcrossPUCCH-Group，源文件第 14759 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_DiffNumerologyAcrossPUCCH_Group {
    CA_ParametersNR_DiffNumerologyAcrossPUCCH_Group_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_DiffNumerologyAcrossPUCCH_Group;


/**
 * @brief 枚举 CA_ParametersNR_DiffNumerologyWithinPUCCH_GroupSmallerSCS（ASN.1 diffNumerologyWithinPUCCH-GroupSmallerSCS，源文件第 14760 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_DiffNumerologyWithinPUCCH_GroupSmallerSCS {
    CA_ParametersNR_DiffNumerologyWithinPUCCH_GroupSmallerSCS_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_DiffNumerologyWithinPUCCH_GroupSmallerSCS;


/**
 * @brief 枚举 CA_ParametersNR_SupportedNumberTAG（ASN.1 supportedNumberTAG，源文件第 14761 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_SupportedNumberTAG {
    CA_ParametersNR_SupportedNumberTAG_n2 = 0, /**< ASN.1 n2 */
    CA_ParametersNR_SupportedNumberTAG_n3 = 1, /**< ASN.1 n3 */
    CA_ParametersNR_SupportedNumberTAG_n4 = 2, /**< ASN.1 n4 */
} CA_ParametersNR_SupportedNumberTAG;


/**
 * @brief 枚举 CA_ParametersNR_v1540_DualPA_Architecture（ASN.1 dualPA-Architecture，源文件第 14772 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1540_DualPA_Architecture {
    CA_ParametersNR_v1540_DualPA_Architecture_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1540_DualPA_Architecture;


/**
 * @brief 枚举 CA_ParametersNR_v1550_Dummy（ASN.1 dummy，源文件第 14776 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1550_Dummy {
    CA_ParametersNR_v1550_Dummy_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1550_Dummy;


/**
 * @brief 枚举 CA_ParametersNR_v1560_DiffNumerologyWithinPUCCH_GroupLargerSCS（ASN.1 diffNumerologyWithinPUCCH-GroupLargerSCS，源文件第 14780 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1560_DiffNumerologyWithinPUCCH_GroupLargerSCS {
    CA_ParametersNR_v1560_DiffNumerologyWithinPUCCH_GroupLargerSCS_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1560_DiffNumerologyWithinPUCCH_GroupLargerSCS;


/**
 * @brief 枚举 CA_ParametersNR_v1610_ParallelTxMsgA_SRS_PUCCH_PUSCH_r16（ASN.1 parallelTxMsgA-SRS-PUCCH-PUSCH-r16，源文件第 14790 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_ParallelTxMsgA_SRS_PUCCH_PUSCH_r16 {
    CA_ParametersNR_v1610_ParallelTxMsgA_SRS_PUCCH_PUSCH_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_ParallelTxMsgA_SRS_PUCCH_PUSCH_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_MsgA_SUL_r16（ASN.1 msgA-SUL-r16，源文件第 14792 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_MsgA_SUL_r16 {
    CA_ParametersNR_v1610_MsgA_SUL_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_MsgA_SUL_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_JointSearchSpaceSwitchAcrossCells_r16（ASN.1 jointSearchSpaceSwitchAcrossCells-r16，源文件第 14794 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_JointSearchSpaceSwitchAcrossCells_r16 {
    CA_ParametersNR_v1610_JointSearchSpaceSwitchAcrossCells_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_JointSearchSpaceSwitchAcrossCells_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_Half_DuplexTDD_CA_SameSCS_r16（ASN.1 half-DuplexTDD-CA-SameSCS-r16，源文件第 14796 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_Half_DuplexTDD_CA_SameSCS_r16 {
    CA_ParametersNR_v1610_Half_DuplexTDD_CA_SameSCS_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_Half_DuplexTDD_CA_SameSCS_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_ScellDormancyWithinActiveTime_r16（ASN.1 scellDormancyWithinActiveTime-r16，源文件第 14798 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_ScellDormancyWithinActiveTime_r16 {
    CA_ParametersNR_v1610_ScellDormancyWithinActiveTime_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_ScellDormancyWithinActiveTime_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_ScellDormancyOutsideActiveTime_r16（ASN.1 scellDormancyOutsideActiveTime-r16，源文件第 14800 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_ScellDormancyOutsideActiveTime_r16 {
    CA_ParametersNR_v1610_ScellDormancyOutsideActiveTime_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_ScellDormancyOutsideActiveTime_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_CrossCarrierA_CSI_trigDiffSCS_r16（ASN.1 crossCarrierA-CSI-trigDiffSCS-r16，源文件第 14802 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_CrossCarrierA_CSI_trigDiffSCS_r16 {
    CA_ParametersNR_v1610_CrossCarrierA_CSI_trigDiffSCS_r16_higherA_CSI_SCS = 0, /**< ASN.1 higherA-CSI-SCS */
    CA_ParametersNR_v1610_CrossCarrierA_CSI_trigDiffSCS_r16_lowerA_CSI_SCS = 1, /**< ASN.1 lowerA-CSI-SCS */
    CA_ParametersNR_v1610_CrossCarrierA_CSI_trigDiffSCS_r16_both = 2, /**< ASN.1 both */
} CA_ParametersNR_v1610_CrossCarrierA_CSI_trigDiffSCS_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_DefaultQCL_CrossCarrierA_CSI_Trig_r16（ASN.1 defaultQCL-CrossCarrierA-CSI-Trig-r16，源文件第 14804 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_DefaultQCL_CrossCarrierA_CSI_Trig_r16 {
    CA_ParametersNR_v1610_DefaultQCL_CrossCarrierA_CSI_Trig_r16_diffOnly = 0, /**< ASN.1 diffOnly */
    CA_ParametersNR_v1610_DefaultQCL_CrossCarrierA_CSI_Trig_r16_both = 1, /**< ASN.1 both */
} CA_ParametersNR_v1610_DefaultQCL_CrossCarrierA_CSI_Trig_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_InterCA_NonAlignedFrame_r16（ASN.1 interCA-NonAlignedFrame-r16，源文件第 14806 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_InterCA_NonAlignedFrame_r16 {
    CA_ParametersNR_v1610_InterCA_NonAlignedFrame_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_InterCA_NonAlignedFrame_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_Simul_SRS_Trans_BC_r16（ASN.1 simul-SRS-Trans-BC-r16，源文件第 14807 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_Simul_SRS_Trans_BC_r16 {
    CA_ParametersNR_v1610_Simul_SRS_Trans_BC_r16_n2 = 0, /**< ASN.1 n2 */
} CA_ParametersNR_v1610_Simul_SRS_Trans_BC_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqAsyncDAPS_r16（ASN.1 interFreqDAPS-r16/interFreqAsyncDAPS-r16，源文件第 14809 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqAsyncDAPS_r16 {
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqAsyncDAPS_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqAsyncDAPS_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDiffSCS_DAPS_r16（ASN.1 interFreqDAPS-r16/interFreqDiffSCS-DAPS-r16，源文件第 14810 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDiffSCS_DAPS_r16 {
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDiffSCS_DAPS_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDiffSCS_DAPS_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqMultiUL_TransmissionDAPS_r16（ASN.1 interFreqDAPS-r16/interFreqMultiUL-TransmissionDAPS-r16，源文件第 14811 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqMultiUL_TransmissionDAPS_r16 {
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqMultiUL_TransmissionDAPS_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqMultiUL_TransmissionDAPS_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode1_r16（ASN.1 interFreqDAPS-r16/interFreqSemiStaticPowerSharingDAPS-Mode1-r16，源文件第 14812 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode1_r16 {
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode1_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode1_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode2_r16（ASN.1 interFreqDAPS-r16/interFreqSemiStaticPowerSharingDAPS-Mode2-r16，源文件第 14813 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode2_r16 {
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode2_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode2_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDynamicPowerSharingDAPS_r16（ASN.1 interFreqDAPS-r16/interFreqDynamicPowerSharingDAPS-r16，源文件第 14814 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDynamicPowerSharingDAPS_r16 {
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDynamicPowerSharingDAPS_r16_short_ = 0, /**< ASN.1 short */
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDynamicPowerSharingDAPS_r16_long_ = 1, /**< ASN.1 long */
} CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDynamicPowerSharingDAPS_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqUL_TransCancellationDAPS_r16（ASN.1 interFreqDAPS-r16/interFreqUL-TransCancellationDAPS-r16，源文件第 14815 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqUL_TransCancellationDAPS_r16 {
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqUL_TransCancellationDAPS_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqUL_TransCancellationDAPS_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16_SupportedSpanArrangement_r16（ASN.1 pdcch-MonitoringCA-r16/supportedSpanArrangement-r16，源文件第 14824 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16_SupportedSpanArrangement_r16 {
    CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16_SupportedSpanArrangement_r16_alignedOnly = 0, /**< ASN.1 alignedOnly */
    CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16_SupportedSpanArrangement_r16_alignedAndNonAligned = 1, /**< ASN.1 alignedAndNonAligned */
} CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16_SupportedSpanArrangement_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16_SupportedSpanArrangement_r16（ASN.1 pdcch-BlindDetectionCA-Mixed-r16/supportedSpanArrangement-r16，源文件第 14831 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16_SupportedSpanArrangement_r16 {
    CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16_SupportedSpanArrangement_r16_alignedOnly = 0, /**< ASN.1 alignedOnly */
    CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16_SupportedSpanArrangement_r16_alignedAndNonAligned = 1, /**< ASN.1 alignedAndNonAligned */
} CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16_SupportedSpanArrangement_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_CrossCarrierSchedulingDL_DiffSCS_r16（ASN.1 crossCarrierSchedulingDL-DiffSCS-r16，源文件第 14848 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_CrossCarrierSchedulingDL_DiffSCS_r16 {
    CA_ParametersNR_v1610_CrossCarrierSchedulingDL_DiffSCS_r16_low_to_high = 0, /**< ASN.1 low-to-high */
    CA_ParametersNR_v1610_CrossCarrierSchedulingDL_DiffSCS_r16_high_to_low = 1, /**< ASN.1 high-to-low */
    CA_ParametersNR_v1610_CrossCarrierSchedulingDL_DiffSCS_r16_both = 2, /**< ASN.1 both */
} CA_ParametersNR_v1610_CrossCarrierSchedulingDL_DiffSCS_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_CrossCarrierSchedulingDefaultQCL_r16（ASN.1 crossCarrierSchedulingDefaultQCL-r16，源文件第 14850 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_CrossCarrierSchedulingDefaultQCL_r16 {
    CA_ParametersNR_v1610_CrossCarrierSchedulingDefaultQCL_r16_diff_only = 0, /**< ASN.1 diff-only */
    CA_ParametersNR_v1610_CrossCarrierSchedulingDefaultQCL_r16_both = 1, /**< ASN.1 both */
} CA_ParametersNR_v1610_CrossCarrierSchedulingDefaultQCL_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_CrossCarrierSchedulingUL_DiffSCS_r16（ASN.1 crossCarrierSchedulingUL-DiffSCS-r16，源文件第 14852 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_CrossCarrierSchedulingUL_DiffSCS_r16 {
    CA_ParametersNR_v1610_CrossCarrierSchedulingUL_DiffSCS_r16_low_to_high = 0, /**< ASN.1 low-to-high */
    CA_ParametersNR_v1610_CrossCarrierSchedulingUL_DiffSCS_r16_high_to_low = 1, /**< ASN.1 high-to-low */
    CA_ParametersNR_v1610_CrossCarrierSchedulingUL_DiffSCS_r16_both = 2, /**< ASN.1 both */
} CA_ParametersNR_v1610_CrossCarrierSchedulingUL_DiffSCS_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1610_Simul_SRS_MIMO_Trans_BC_r16（ASN.1 simul-SRS-MIMO-Trans-BC-r16，源文件第 14854 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1610_Simul_SRS_MIMO_Trans_BC_r16 {
    CA_ParametersNR_v1610_Simul_SRS_MIMO_Trans_BC_r16_n2 = 0, /**< ASN.1 n2 */
} CA_ParametersNR_v1610_Simul_SRS_MIMO_Trans_BC_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1630_BeamManagementType_r16（ASN.1 beamManagementType-r16，源文件第 14866 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1630_BeamManagementType_r16 {
    CA_ParametersNR_v1630_BeamManagementType_r16_ibm = 0, /**< ASN.1 ibm */
    CA_ParametersNR_v1630_BeamManagementType_r16_dummy = 1, /**< ASN.1 dummy */
} CA_ParametersNR_v1630_BeamManagementType_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1630_IntraBandFreqSeparationUL_AggBW_GapBW_r16（ASN.1 intraBandFreqSeparationUL-AggBW-GapBW-r16，源文件第 14868 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1630_IntraBandFreqSeparationUL_AggBW_GapBW_r16 {
    CA_ParametersNR_v1630_IntraBandFreqSeparationUL_AggBW_GapBW_r16_classI = 0, /**< ASN.1 classI */
    CA_ParametersNR_v1630_IntraBandFreqSeparationUL_AggBW_GapBW_r16_classII = 1, /**< ASN.1 classII */
    CA_ParametersNR_v1630_IntraBandFreqSeparationUL_AggBW_GapBW_r16_classIII = 2, /**< ASN.1 classIII */
} CA_ParametersNR_v1630_IntraBandFreqSeparationUL_AggBW_GapBW_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1630_InterCA_NonAlignedFrame_B_r16（ASN.1 interCA-NonAlignedFrame-B-r16，源文件第 14870 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1630_InterCA_NonAlignedFrame_B_r16 {
    CA_ParametersNR_v1630_InterCA_NonAlignedFrame_B_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1630_InterCA_NonAlignedFrame_B_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1640_UplinkTxDC_TwoCarrierReport_r16（ASN.1 uplinkTxDC-TwoCarrierReport-r16，源文件第 14875 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1640_UplinkTxDC_TwoCarrierReport_r16 {
    CA_ParametersNR_v1640_UplinkTxDC_TwoCarrierReport_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1640_UplinkTxDC_TwoCarrierReport_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1640_DiffNumerologyAcrossPUCCH_Group_CarrierTypes_r16（ASN.1 diffNumerologyAcrossPUCCH-Group-CarrierTypes-r16，源文件第 14885 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1640_DiffNumerologyAcrossPUCCH_Group_CarrierTypes_r16 {
    CA_ParametersNR_v1640_DiffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1640_DiffNumerologyAcrossPUCCH_Group_CarrierTypes_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16（ASN.1 diffNumerologyWithinPUCCH-GroupSmallerSCS-CarrierTypes-r16，源文件第 14887 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16 {
    CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16（ASN.1 diffNumerologyWithinPUCCH-GroupLargerSCS-CarrierTypes-r16，源文件第 14889 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16 {
    CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_ComputationTimeForA_CSI_r16（ASN.1 csi-ReportingCrossPUCCH-Grp-r16/computationTimeForA-CSI-r16，源文件第 14902 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_ComputationTimeForA_CSI_r16 {
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_ComputationTimeForA_CSI_r16_sameAsNoCross = 0, /**< ASN.1 sameAsNoCross */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_ComputationTimeForA_CSI_r16_relaxed = 1, /**< ASN.1 relaxed */
} CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_ComputationTimeForA_CSI_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_15kHz_additionalSymbols_r16（ASN.1 csi-ReportingCrossPUCCH-Grp-r16/additionalSymbols-r16/scs-15kHz-additionalSymbols-r16，源文件第 14904 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_15kHz_additionalSymbols_r16 {
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_15kHz_additionalSymbols_r16_s14 = 0, /**< ASN.1 s14 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_15kHz_additionalSymbols_r16_s28 = 1, /**< ASN.1 s28 */
} CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_15kHz_additionalSymbols_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_30kHz_additionalSymbols_r16（ASN.1 csi-ReportingCrossPUCCH-Grp-r16/additionalSymbols-r16/scs-30kHz-additionalSymbols-r16，源文件第 14905 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_30kHz_additionalSymbols_r16 {
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_30kHz_additionalSymbols_r16_s14 = 0, /**< ASN.1 s14 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_30kHz_additionalSymbols_r16_s28 = 1, /**< ASN.1 s28 */
} CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_30kHz_additionalSymbols_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_60kHz_additionalSymbols_r16（ASN.1 csi-ReportingCrossPUCCH-Grp-r16/additionalSymbols-r16/scs-60kHz-additionalSymbols-r16，源文件第 14906 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_60kHz_additionalSymbols_r16 {
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_60kHz_additionalSymbols_r16_s14 = 0, /**< ASN.1 s14 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_60kHz_additionalSymbols_r16_s28 = 1, /**< ASN.1 s28 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_60kHz_additionalSymbols_r16_s56 = 2, /**< ASN.1 s56 */
} CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_60kHz_additionalSymbols_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_120kHz_additionalSymbols_r16（ASN.1 csi-ReportingCrossPUCCH-Grp-r16/additionalSymbols-r16/scs-120kHz-additionalSymbols-r16，源文件第 14907 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_120kHz_additionalSymbols_r16 {
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_120kHz_additionalSymbols_r16_s14 = 0, /**< ASN.1 s14 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_120kHz_additionalSymbols_r16_s28 = 1, /**< ASN.1 s28 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_120kHz_additionalSymbols_r16_s56 = 2, /**< ASN.1 s56 */
} CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_120kHz_additionalSymbols_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUCCH_r16（ASN.1 csi-ReportingCrossPUCCH-Grp-r16/sp-CSI-ReportingOnPUCCH-r16，源文件第 14909 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUCCH_r16 {
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUCCH_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUCCH_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUSCH_r16（ASN.1 csi-ReportingCrossPUCCH-Grp-r16/sp-CSI-ReportingOnPUSCH-r16，源文件第 14910 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUSCH_r16 {
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUSCH_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUSCH_r16;


/**
 * @brief 枚举 CA_ParametersNR_v1700_DemodulationEnhancementCA_r17（ASN.1 demodulationEnhancementCA-r17，源文件第 14923 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_DemodulationEnhancementCA_r17 {
    CA_ParametersNR_v1700_DemodulationEnhancementCA_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1700_DemodulationEnhancementCA_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17（ASN.1 maxUplinkDutyCycle-interBandCA-PC2-r17，源文件第 14925 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17 {
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17_n50 = 0, /**< ASN.1 n50 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17_n60 = 1, /**< ASN.1 n60 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17_n70 = 2, /**< ASN.1 n70 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17_n80 = 3, /**< ASN.1 n80 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17_n90 = 4, /**< ASN.1 n90 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17_n100 = 5, /**< ASN.1 n100 */
} CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17（ASN.1 maxUplinkDutyCycle-SULcombination-PC2-r17，源文件第 14927 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17 {
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17_n50 = 0, /**< ASN.1 n50 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17_n60 = 1, /**< ASN.1 n60 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17_n70 = 2, /**< ASN.1 n70 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17_n80 = 3, /**< ASN.1 n80 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17_n90 = 4, /**< ASN.1 n90 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17_n100 = 5, /**< ASN.1 n100 */
} CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_BeamManagementType_CBM_r17（ASN.1 beamManagementType-CBM-r17，源文件第 14928 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_BeamManagementType_CBM_r17 {
    CA_ParametersNR_v1700_BeamManagementType_CBM_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1700_BeamManagementType_CBM_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_ParallelTxPUCCH_PUSCH_r17（ASN.1 parallelTxPUCCH-PUSCH-r17，源文件第 14930 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_ParallelTxPUCCH_PUSCH_r17 {
    CA_ParametersNR_v1700_ParallelTxPUCCH_PUSCH_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1700_ParallelTxPUCCH_PUSCH_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CSI_Report_mode_r17（ASN.1 mTRP-CSI-EnhancementPerBC-r17/cSI-Report-mode-r17，源文件第 14936 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CSI_Report_mode_r17 {
    CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CSI_Report_mode_r17_mode1 = 0, /**< ASN.1 mode1 */
    CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CSI_Report_mode_r17_mode2 = 1, /**< ASN.1 mode2 */
    CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CSI_Report_mode_r17_both = 2, /**< ASN.1 both */
} CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CSI_Report_mode_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CodebookMode_NCJT_r17（ASN.1 mTRP-CSI-EnhancementPerBC-r17/codebookMode-NCJT-r17，源文件第 14938 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CodebookMode_NCJT_r17 {
    CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CodebookMode_NCJT_r17_mode1 = 0, /**< ASN.1 mode1 */
    CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CodebookMode_NCJT_r17_mode1And2 = 1, /**< ASN.1 mode1And2 */
} CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CodebookMode_NCJT_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17（ASN.1 maxCC-32-DL-HARQ-ProcessFR2-2-r17，源文件第 14943 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17 {
    CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17_n1 = 0, /**< ASN.1 n1 */
    CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17_n2 = 1, /**< ASN.1 n2 */
    CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17_n3 = 2, /**< ASN.1 n3 */
    CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17_n4 = 3, /**< ASN.1 n4 */
    CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17_n6 = 4, /**< ASN.1 n6 */
    CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17_n8 = 5, /**< ASN.1 n8 */
    CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17_n16 = 6, /**< ASN.1 n16 */
    CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17_n32 = 7, /**< ASN.1 n32 */
} CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17（ASN.1 maxCC-32-UL-HARQ-ProcessFR2-2-r17，源文件第 14945 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17 {
    CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17_n1 = 0, /**< ASN.1 n1 */
    CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17_n2 = 1, /**< ASN.1 n2 */
    CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17_n3 = 2, /**< ASN.1 n3 */
    CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17_n4 = 3, /**< ASN.1 n4 */
    CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17_n5 = 4, /**< ASN.1 n5 */
    CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17_n8 = 5, /**< ASN.1 n8 */
    CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17_n16 = 6, /**< ASN.1 n16 */
    CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17_n32 = 7, /**< ASN.1 n32 */
} CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_Dci_FormatsPCellPSCellUSS_Sets_r17（ASN.1 dci-FormatsPCellPSCellUSS-Sets-r17，源文件第 14951 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_Dci_FormatsPCellPSCellUSS_Sets_r17 {
    CA_ParametersNR_v1700_Dci_FormatsPCellPSCellUSS_Sets_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1700_Dci_FormatsPCellPSCellUSS_Sets_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_DisablingScalingFactorDeactSCell_r17（ASN.1 disablingScalingFactorDeactSCell-r17，源文件第 14953 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_DisablingScalingFactorDeactSCell_r17 {
    CA_ParametersNR_v1700_DisablingScalingFactorDeactSCell_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1700_DisablingScalingFactorDeactSCell_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1700_DisablingScalingFactorDormantSCell_r17（ASN.1 disablingScalingFactorDormantSCell-r17，源文件第 14955 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1700_DisablingScalingFactorDormantSCell_r17 {
    CA_ParametersNR_v1700_DisablingScalingFactorDormantSCell_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1700_DisablingScalingFactorDormantSCell_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_ParallelTxSRS_PUCCH_PUSCH_intraBand_r17（ASN.1 parallelTxSRS-PUCCH-PUSCH-intraBand-r17，源文件第 14969 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_ParallelTxSRS_PUCCH_PUSCH_intraBand_r17 {
    CA_ParametersNR_v1720_ParallelTxSRS_PUCCH_PUSCH_intraBand_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1720_ParallelTxSRS_PUCCH_PUSCH_intraBand_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_ParallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17（ASN.1 parallelTxPRACH-SRS-PUCCH-PUSCH-intraBand-r17，源文件第 14971 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_ParallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17 {
    CA_ParametersNR_v1720_ParallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1720_ParallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17_Pucch_Group_r17（ASN.1 semiStaticPUCCH-CellSwitchSingleGroup-r17/pucch-Group-r17，源文件第 14974 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17_Pucch_Group_r17 {
    CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17_Pucch_Group_r17_primaryGroupOnly = 0, /**< ASN.1 primaryGroupOnly */
    CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17_Pucch_Group_r17_secondaryGroupOnly = 1, /**< ASN.1 secondaryGroupOnly */
    CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17_Pucch_Group_r17_eitherPrimaryOrSecondaryGroup = 2, /**< ASN.1 eitherPrimaryOrSecondaryGroup */
} CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17_Pucch_Group_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17_Pucch_Group_r17（ASN.1 dynamicPUCCH-CellSwitchSameLengthSingleGroup-r17/pucch-Group-r17，源文件第 14982 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17_Pucch_Group_r17 {
    CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17_Pucch_Group_r17_primaryGroupOnly = 0, /**< ASN.1 primaryGroupOnly */
    CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17_Pucch_Group_r17_secondaryGroupOnly = 1, /**< ASN.1 secondaryGroupOnly */
    CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17_Pucch_Group_r17_eitherPrimaryOrSecondaryGroup = 2, /**< ASN.1 eitherPrimaryOrSecondaryGroup */
} CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17_Pucch_Group_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17_Pucch_Group_r17（ASN.1 dynamicPUCCH-CellSwitchDiffLengthSingleGroup-r17/pucch-Group-r17，源文件第 14988 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17_Pucch_Group_r17 {
    CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17_Pucch_Group_r17_primaryGroupOnly = 0, /**< ASN.1 primaryGroupOnly */
    CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17_Pucch_Group_r17_secondaryGroupOnly = 1, /**< ASN.1 secondaryGroupOnly */
    CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17_Pucch_Group_r17_eitherPrimaryOrSecondaryGroup = 2, /**< ASN.1 eitherPrimaryOrSecondaryGroup */
} CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17_Pucch_Group_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_Ack_NACK_FeedbackForMulticast_r17（ASN.1 ack-NACK-FeedbackForMulticast-r17，源文件第 15001 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_Ack_NACK_FeedbackForMulticast_r17 {
    CA_ParametersNR_v1720_Ack_NACK_FeedbackForMulticast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1720_Ack_NACK_FeedbackForMulticast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_Ptp_Retx_Multicast_r17（ASN.1 ptp-Retx-Multicast-r17，源文件第 15003 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_Ptp_Retx_Multicast_r17 {
    CA_ParametersNR_v1720_Ptp_Retx_Multicast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1720_Ptp_Retx_Multicast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_Nack_OnlyFeedbackForMulticast_r17（ASN.1 nack-OnlyFeedbackForMulticast-r17，源文件第 15005 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_Nack_OnlyFeedbackForMulticast_r17 {
    CA_ParametersNR_v1720_Nack_OnlyFeedbackForMulticast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1720_Nack_OnlyFeedbackForMulticast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_Nack_OnlyFeedbackSpecificResourceForMulticast_r17（ASN.1 nack-OnlyFeedbackSpecificResourceForMulticast-r17，源文件第 15007 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_Nack_OnlyFeedbackSpecificResourceForMulticast_r17 {
    CA_ParametersNR_v1720_Nack_OnlyFeedbackSpecificResourceForMulticast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1720_Nack_OnlyFeedbackSpecificResourceForMulticast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_Ack_NACK_FeedbackForSPS_Multicast_r17（ASN.1 ack-NACK-FeedbackForSPS-Multicast-r17，源文件第 15010 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_Ack_NACK_FeedbackForSPS_Multicast_r17 {
    CA_ParametersNR_v1720_Ack_NACK_FeedbackForSPS_Multicast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1720_Ack_NACK_FeedbackForSPS_Multicast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_Ptp_Retx_SPS_Multicast_r17（ASN.1 ptp-Retx-SPS-Multicast-r17，源文件第 15012 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_Ptp_Retx_SPS_Multicast_r17 {
    CA_ParametersNR_v1720_Ptp_Retx_SPS_Multicast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1720_Ptp_Retx_SPS_Multicast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_HigherPowerLimit_r17（ASN.1 higherPowerLimit-r17，源文件第 15014 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_HigherPowerLimit_r17 {
    CA_ParametersNR_v1720_HigherPowerLimit_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1720_HigherPowerLimit_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1720_ParallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17（ASN.1 parallelTxMsgA-SRS-PUCCH-PUSCH-intraBand-r17，源文件第 15016 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1720_ParallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17 {
    CA_ParametersNR_v1720_ParallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1720_ParallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeAPerBC_r17（ASN.1 dmrs-BundlingPUSCH-RepTypeAPerBC-r17，源文件第 15046 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeAPerBC_r17 {
    CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeAPerBC_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeAPerBC_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeBPerBC_r17（ASN.1 dmrs-BundlingPUSCH-RepTypeBPerBC-r17，源文件第 15048 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeBPerBC_r17 {
    CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeBPerBC_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeBPerBC_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_multiSlotPerBC_r17（ASN.1 dmrs-BundlingPUSCH-multiSlotPerBC-r17，源文件第 15050 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_multiSlotPerBC_r17 {
    CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_multiSlotPerBC_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_multiSlotPerBC_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Dmrs_BundlingPUCCH_RepPerBC_r17（ASN.1 dmrs-BundlingPUCCH-RepPerBC-r17，源文件第 15052 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Dmrs_BundlingPUCCH_RepPerBC_r17 {
    CA_ParametersNR_v1730_Dmrs_BundlingPUCCH_RepPerBC_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Dmrs_BundlingPUCCH_RepPerBC_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Dmrs_BundlingRestartPerBC_r17（ASN.1 dmrs-BundlingRestartPerBC-r17，源文件第 15054 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Dmrs_BundlingRestartPerBC_r17 {
    CA_ParametersNR_v1730_Dmrs_BundlingRestartPerBC_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Dmrs_BundlingRestartPerBC_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Dmrs_BundlingNonBackToBackTX_PerBC_r17（ASN.1 dmrs-BundlingNonBackToBackTX-PerBC-r17，源文件第 15056 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Dmrs_BundlingNonBackToBackTX_PerBC_r17 {
    CA_ParametersNR_v1730_Dmrs_BundlingNonBackToBackTX_PerBC_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Dmrs_BundlingNonBackToBackTX_PerBC_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_StayOnTargetCC_SRS_CarrierSwitch_r17（ASN.1 stayOnTargetCC-SRS-CarrierSwitch-r17，源文件第 15058 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_StayOnTargetCC_SRS_CarrierSwitch_r17 {
    CA_ParametersNR_v1730_StayOnTargetCC_SRS_CarrierSwitch_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_StayOnTargetCC_SRS_CarrierSwitch_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17（ASN.1 fdm-CodebookForMux-UnicastMulticastHARQ-ACK-r17，源文件第 15060 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17 {
    CA_ParametersNR_v1730_Fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17（ASN.1 mode2-TDM-CodebookForMux-UnicastMulticastHARQ-ACK-r17，源文件第 15062 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17 {
    CA_ParametersNR_v1730_Mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Mode1_ForType1_CodebookGeneration_r17（ASN.1 mode1-ForType1-CodebookGeneration-r17，源文件第 15064 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Mode1_ForType1_CodebookGeneration_r17 {
    CA_ParametersNR_v1730_Mode1_ForType1_CodebookGeneration_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Mode1_ForType1_CodebookGeneration_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17（ASN.1 nack-OnlyFeedbackSpecificResourceForSPS-Multicast-r17，源文件第 15067 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17 {
    CA_ParametersNR_v1730_Nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_MultiPUCCH_ConfigForMulticast_r17（ASN.1 multiPUCCH-ConfigForMulticast-r17，源文件第 15069 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_MultiPUCCH_ConfigForMulticast_r17 {
    CA_ParametersNR_v1730_MultiPUCCH_ConfigForMulticast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_MultiPUCCH_ConfigForMulticast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Pucch_ConfigForSPS_Multicast_r17（ASN.1 pucch-ConfigForSPS-Multicast-r17，源文件第 15071 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Pucch_ConfigForSPS_Multicast_r17 {
    CA_ParametersNR_v1730_Pucch_ConfigForSPS_Multicast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Pucch_ConfigForSPS_Multicast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1730_Mux_HARQ_ACK_UnicastMulticast_r17（ASN.1 mux-HARQ-ACK-UnicastMulticast-r17，源文件第 15076 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1730_Mux_HARQ_ACK_UnicastMulticast_r17 {
    CA_ParametersNR_v1730_Mux_HARQ_ACK_UnicastMulticast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1730_Mux_HARQ_ACK_UnicastMulticast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1740_Nack_OnlyFeedbackForSPS_Multicast_r17（ASN.1 nack-OnlyFeedbackForSPS-Multicast-r17，源文件第 15082 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1740_Nack_OnlyFeedbackForSPS_Multicast_r17 {
    CA_ParametersNR_v1740_Nack_OnlyFeedbackForSPS_Multicast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1740_Nack_OnlyFeedbackForSPS_Multicast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1740_SinglePUCCH_ConfigForMulticast_r17（ASN.1 singlePUCCH-ConfigForMulticast-r17，源文件第 15084 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1740_SinglePUCCH_ConfigForMulticast_r17 {
    CA_ParametersNR_v1740_SinglePUCCH_ConfigForMulticast_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1740_SinglePUCCH_ConfigForMulticast_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1760_PrioSCellPRACH_OverSP_PeriodicSRS_Support_r17（ASN.1 prioSCellPRACH-OverSP-PeriodicSRS-Support-r17，源文件第 15088 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1760_PrioSCellPRACH_OverSP_PeriodicSRS_Support_r17 {
    CA_ParametersNR_v1760_PrioSCellPRACH_OverSP_PeriodicSRS_Support_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1760_PrioSCellPRACH_OverSP_PeriodicSRS_Support_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1770_ParallelTxPUCCH_PUSCH_SamePriority_r17（ASN.1 parallelTxPUCCH-PUSCH-SamePriority-r17，源文件第 15092 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1770_ParallelTxPUCCH_PUSCH_SamePriority_r17 {
    CA_ParametersNR_v1770_ParallelTxPUCCH_PUSCH_SamePriority_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1770_ParallelTxPUCCH_PUSCH_SamePriority_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1780_ParallelTxPUCCH_PUSCH_SamePriority_r17（ASN.1 parallelTxPUCCH-PUSCH-SamePriority-r17，源文件第 15096 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1780_ParallelTxPUCCH_PUSCH_SamePriority_r17 {
    CA_ParametersNR_v1780_ParallelTxPUCCH_PUSCH_SamePriority_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1780_ParallelTxPUCCH_PUSCH_SamePriority_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1780_SupportedAggBW_FR1_r17_ScalingFactorSCS_r17（ASN.1 supportedAggBW-FR1-r17/scalingFactorSCS-r17，源文件第 15098 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1780_SupportedAggBW_FR1_r17_ScalingFactorSCS_r17 {
    CA_ParametersNR_v1780_SupportedAggBW_FR1_r17_ScalingFactorSCS_r17_trueVal = 0, /**< ASN.1 trueVal */
} CA_ParametersNR_v1780_SupportedAggBW_FR1_r17_ScalingFactorSCS_r17;


/**
 * @brief 枚举 CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18（ASN.1 tdcp-ResourcePerBC-r18/maxNumberConfigPerCC-r18，源文件第 15124 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18 {
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18_n2 = 0, /**< ASN.1 n2 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18_n4 = 1, /**< ASN.1 n4 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18_n6 = 2, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18_n10 = 4, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18_n12 = 5, /**< ASN.1 n12 */
} CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18（ASN.1 tdcp-ResourcePerBC-r18/maxNumberSimultaneousPerCC-r18，源文件第 15126 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18 {
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n2 = 0, /**< ASN.1 n2 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n4 = 1, /**< ASN.1 n4 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n6 = 2, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n12 = 4, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n16 = 5, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n20 = 6, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n24 = 7, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n28 = 8, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18_n32 = 9, /**< ASN.1 n32 */
} CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_TimelineRelax_CJT_CSI_CA_r18（ASN.1 timelineRelax-CJT-CSI-CA-r18，源文件第 15129 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_TimelineRelax_CJT_CSI_CA_r18 {
    CA_ParametersNR_v1800_TimelineRelax_CJT_CSI_CA_r18_n0 = 0, /**< ASN.1 n0 */
    CA_ParametersNR_v1800_TimelineRelax_CJT_CSI_CA_r18_n2 = 1, /**< ASN.1 n2 */
} CA_ParametersNR_v1800_TimelineRelax_CJT_CSI_CA_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18（ASN.1 spatialAdaptation-CSI-FeedbackPerBC-r18/maxNumberCSI-ResourceAcrossCC-r18/sdType1-Resource-r18，源文件第 15133 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n5 = 0, /**< ASN.1 n5 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n6 = 1, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n7 = 2, /**< ASN.1 n7 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n9 = 4, /**< ASN.1 n9 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n10 = 5, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n12 = 6, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n14 = 7, /**< ASN.1 n14 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n16 = 8, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n18 = 9, /**< ASN.1 n18 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n20 = 10, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n22 = 11, /**< ASN.1 n22 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n24 = 12, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n26 = 13, /**< ASN.1 n26 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n28 = 14, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n30 = 15, /**< ASN.1 n30 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n32 = 16, /**< ASN.1 n32 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n34 = 17, /**< ASN.1 n34 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n36 = 18, /**< ASN.1 n36 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n38 = 19, /**< ASN.1 n38 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n40 = 20, /**< ASN.1 n40 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n42 = 21, /**< ASN.1 n42 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n44 = 22, /**< ASN.1 n44 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n46 = 23, /**< ASN.1 n46 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n48 = 24, /**< ASN.1 n48 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n50 = 25, /**< ASN.1 n50 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n52 = 26, /**< ASN.1 n52 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n54 = 27, /**< ASN.1 n54 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n56 = 28, /**< ASN.1 n56 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n58 = 29, /**< ASN.1 n58 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n60 = 30, /**< ASN.1 n60 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n62 = 31, /**< ASN.1 n62 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18_n64 = 32, /**< ASN.1 n64 */
} CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18（ASN.1 spatialAdaptation-CSI-FeedbackPerBC-r18/maxNumberCSI-ResourceAcrossCC-r18/sdType2-Resource-r18，源文件第 15136 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n5 = 0, /**< ASN.1 n5 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n6 = 1, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n7 = 2, /**< ASN.1 n7 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n9 = 4, /**< ASN.1 n9 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n10 = 5, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n12 = 6, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n14 = 7, /**< ASN.1 n14 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n16 = 8, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n18 = 9, /**< ASN.1 n18 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n20 = 10, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n22 = 11, /**< ASN.1 n22 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n24 = 12, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n26 = 13, /**< ASN.1 n26 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n28 = 14, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n30 = 15, /**< ASN.1 n30 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n32 = 16, /**< ASN.1 n32 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n34 = 17, /**< ASN.1 n34 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n36 = 18, /**< ASN.1 n36 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n38 = 19, /**< ASN.1 n38 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n40 = 20, /**< ASN.1 n40 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n42 = 21, /**< ASN.1 n42 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n44 = 22, /**< ASN.1 n44 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n46 = 23, /**< ASN.1 n46 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n48 = 24, /**< ASN.1 n48 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n50 = 25, /**< ASN.1 n50 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n52 = 26, /**< ASN.1 n52 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n54 = 27, /**< ASN.1 n54 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n56 = 28, /**< ASN.1 n56 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n58 = 29, /**< ASN.1 n58 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n60 = 30, /**< ASN.1 n60 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n62 = 31, /**< ASN.1 n62 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18_n64 = 32, /**< ASN.1 n64 */
} CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18（ASN.1 spatialAdaptation-CSI-FeedbackPUSCH-PerBC-r18/maxNumberCSI-ResourceAcrossCC-r18，源文件第 15148 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5 = 0, /**< ASN.1 n5 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n6 = 1, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n7 = 2, /**< ASN.1 n7 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n9 = 4, /**< ASN.1 n9 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n10 = 5, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n12 = 6, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n14 = 7, /**< ASN.1 n14 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n16 = 8, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n18 = 9, /**< ASN.1 n18 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n20 = 10, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n22 = 11, /**< ASN.1 n22 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n24 = 12, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n26 = 13, /**< ASN.1 n26 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n28 = 14, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n30 = 15, /**< ASN.1 n30 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n32 = 16, /**< ASN.1 n32 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n34 = 17, /**< ASN.1 n34 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n36 = 18, /**< ASN.1 n36 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n38 = 19, /**< ASN.1 n38 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n40 = 20, /**< ASN.1 n40 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n42 = 21, /**< ASN.1 n42 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n44 = 22, /**< ASN.1 n44 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n46 = 23, /**< ASN.1 n46 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n48 = 24, /**< ASN.1 n48 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n50 = 25, /**< ASN.1 n50 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n52 = 26, /**< ASN.1 n52 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n54 = 27, /**< ASN.1 n54 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n56 = 28, /**< ASN.1 n56 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n58 = 29, /**< ASN.1 n58 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n60 = 30, /**< ASN.1 n60 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n62 = 31, /**< ASN.1 n62 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n64 = 32, /**< ASN.1 n64 */
} CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6（ASN.1 spatialAdaptation-CSI-FeedbackAperiodicPerBC-r18/maxNumberCSI-ResourceAcrossCC-r18/sdType1-Resource-r18，源文件第 15156 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n5 = 0, /**< ASN.1 n5 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n6 = 1, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n7 = 2, /**< ASN.1 n7 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n9 = 4, /**< ASN.1 n9 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n10 = 5, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n12 = 6, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n14 = 7, /**< ASN.1 n14 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n16 = 8, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n18 = 9, /**< ASN.1 n18 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n20 = 10, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n22 = 11, /**< ASN.1 n22 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n24 = 12, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n26 = 13, /**< ASN.1 n26 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n28 = 14, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n30 = 15, /**< ASN.1 n30 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n32 = 16, /**< ASN.1 n32 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n34 = 17, /**< ASN.1 n34 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n36 = 18, /**< ASN.1 n36 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n38 = 19, /**< ASN.1 n38 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n40 = 20, /**< ASN.1 n40 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n42 = 21, /**< ASN.1 n42 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n44 = 22, /**< ASN.1 n44 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n46 = 23, /**< ASN.1 n46 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n48 = 24, /**< ASN.1 n48 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n50 = 25, /**< ASN.1 n50 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n52 = 26, /**< ASN.1 n52 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n54 = 27, /**< ASN.1 n54 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n56 = 28, /**< ASN.1 n56 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n58 = 29, /**< ASN.1 n58 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n60 = 30, /**< ASN.1 n60 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n62 = 31, /**< ASN.1 n62 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6_n64 = 32, /**< ASN.1 n64 */
} CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6;


/**
 * @brief 枚举 CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa（ASN.1 spatialAdaptation-CSI-FeedbackAperiodicPerBC-r18/maxNumberCSI-ResourceAcrossCC-r18/sdType2-Resource-r18，源文件第 15159 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n5 = 0, /**< ASN.1 n5 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n6 = 1, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n7 = 2, /**< ASN.1 n7 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n9 = 4, /**< ASN.1 n9 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n10 = 5, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n12 = 6, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n14 = 7, /**< ASN.1 n14 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n16 = 8, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n18 = 9, /**< ASN.1 n18 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n20 = 10, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n22 = 11, /**< ASN.1 n22 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n24 = 12, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n26 = 13, /**< ASN.1 n26 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n28 = 14, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n30 = 15, /**< ASN.1 n30 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n32 = 16, /**< ASN.1 n32 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n34 = 17, /**< ASN.1 n34 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n36 = 18, /**< ASN.1 n36 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n38 = 19, /**< ASN.1 n38 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n40 = 20, /**< ASN.1 n40 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n42 = 21, /**< ASN.1 n42 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n44 = 22, /**< ASN.1 n44 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n46 = 23, /**< ASN.1 n46 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n48 = 24, /**< ASN.1 n48 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n50 = 25, /**< ASN.1 n50 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n52 = 26, /**< ASN.1 n52 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n54 = 27, /**< ASN.1 n54 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n56 = 28, /**< ASN.1 n56 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n58 = 29, /**< ASN.1 n58 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n60 = 30, /**< ASN.1 n60 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n62 = 31, /**< ASN.1 n62 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa_n64 = 32, /**< ASN.1 n64 */
} CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa;


/**
 * @brief 枚举 CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18（ASN.1 spatialAdaptation-CSI-FeedbackPUCCH-PerBC-r18/maxNumberCSI-ResourceAcrossCC-r18，源文件第 15170 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5 = 0, /**< ASN.1 n5 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n6 = 1, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n7 = 2, /**< ASN.1 n7 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n9 = 4, /**< ASN.1 n9 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n10 = 5, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n12 = 6, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n14 = 7, /**< ASN.1 n14 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n16 = 8, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n18 = 9, /**< ASN.1 n18 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n20 = 10, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n22 = 11, /**< ASN.1 n22 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n24 = 12, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n26 = 13, /**< ASN.1 n26 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n28 = 14, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n30 = 15, /**< ASN.1 n30 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n32 = 16, /**< ASN.1 n32 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n34 = 17, /**< ASN.1 n34 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n36 = 18, /**< ASN.1 n36 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n38 = 19, /**< ASN.1 n38 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n40 = 20, /**< ASN.1 n40 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n42 = 21, /**< ASN.1 n42 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n44 = 22, /**< ASN.1 n44 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n46 = 23, /**< ASN.1 n46 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n48 = 24, /**< ASN.1 n48 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n50 = 25, /**< ASN.1 n50 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n52 = 26, /**< ASN.1 n52 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n54 = 27, /**< ASN.1 n54 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n56 = 28, /**< ASN.1 n56 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n58 = 29, /**< ASN.1 n58 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n60 = 30, /**< ASN.1 n60 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n62 = 31, /**< ASN.1 n62 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n64 = 32, /**< ASN.1 n64 */
} CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18（ASN.1 powerAdaptation-CSI-FeedbackPerBC-r18/maxNumberCSI-ResourceAcrossCC-r18，源文件第 15177 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 {
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5 = 0, /**< ASN.1 n5 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n6 = 1, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n7 = 2, /**< ASN.1 n7 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n9 = 4, /**< ASN.1 n9 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n10 = 5, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n12 = 6, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n14 = 7, /**< ASN.1 n14 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n16 = 8, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n18 = 9, /**< ASN.1 n18 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n20 = 10, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n22 = 11, /**< ASN.1 n22 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n24 = 12, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n26 = 13, /**< ASN.1 n26 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n28 = 14, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n30 = 15, /**< ASN.1 n30 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n32 = 16, /**< ASN.1 n32 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n34 = 17, /**< ASN.1 n34 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n36 = 18, /**< ASN.1 n36 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n38 = 19, /**< ASN.1 n38 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n40 = 20, /**< ASN.1 n40 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n42 = 21, /**< ASN.1 n42 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n44 = 22, /**< ASN.1 n44 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n46 = 23, /**< ASN.1 n46 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n48 = 24, /**< ASN.1 n48 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n50 = 25, /**< ASN.1 n50 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n52 = 26, /**< ASN.1 n52 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n54 = 27, /**< ASN.1 n54 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n56 = 28, /**< ASN.1 n56 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n58 = 29, /**< ASN.1 n58 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n60 = 30, /**< ASN.1 n60 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n62 = 31, /**< ASN.1 n62 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n64 = 32, /**< ASN.1 n64 */
} CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18（ASN.1 powerAdaptation-CSI-FeedbackPUSCH-PerBC-r18/maxNumberCSI-ResourceAcrossCC-r18，源文件第 15184 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 {
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5 = 0, /**< ASN.1 n5 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n6 = 1, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n7 = 2, /**< ASN.1 n7 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n9 = 4, /**< ASN.1 n9 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n10 = 5, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n12 = 6, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n14 = 7, /**< ASN.1 n14 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n16 = 8, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n18 = 9, /**< ASN.1 n18 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n20 = 10, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n22 = 11, /**< ASN.1 n22 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n24 = 12, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n26 = 13, /**< ASN.1 n26 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n28 = 14, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n30 = 15, /**< ASN.1 n30 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n32 = 16, /**< ASN.1 n32 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n34 = 17, /**< ASN.1 n34 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n36 = 18, /**< ASN.1 n36 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n38 = 19, /**< ASN.1 n38 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n40 = 20, /**< ASN.1 n40 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n42 = 21, /**< ASN.1 n42 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n44 = 22, /**< ASN.1 n44 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n46 = 23, /**< ASN.1 n46 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n48 = 24, /**< ASN.1 n48 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n50 = 25, /**< ASN.1 n50 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n52 = 26, /**< ASN.1 n52 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n54 = 27, /**< ASN.1 n54 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n56 = 28, /**< ASN.1 n56 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n58 = 29, /**< ASN.1 n58 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n60 = 30, /**< ASN.1 n60 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n62 = 31, /**< ASN.1 n62 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n64 = 32, /**< ASN.1 n64 */
} CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18（ASN.1 powerAdaptation-CSI-FeedbackAperiodicPerBC-r18/maxNumberCSI-ResourceAcrossCC-r18，源文件第 15191 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 {
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5 = 0, /**< ASN.1 n5 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n6 = 1, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n7 = 2, /**< ASN.1 n7 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n9 = 4, /**< ASN.1 n9 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n10 = 5, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n12 = 6, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n14 = 7, /**< ASN.1 n14 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n16 = 8, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n18 = 9, /**< ASN.1 n18 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n20 = 10, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n22 = 11, /**< ASN.1 n22 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n24 = 12, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n26 = 13, /**< ASN.1 n26 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n28 = 14, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n30 = 15, /**< ASN.1 n30 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n32 = 16, /**< ASN.1 n32 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n34 = 17, /**< ASN.1 n34 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n36 = 18, /**< ASN.1 n36 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n38 = 19, /**< ASN.1 n38 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n40 = 20, /**< ASN.1 n40 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n42 = 21, /**< ASN.1 n42 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n44 = 22, /**< ASN.1 n44 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n46 = 23, /**< ASN.1 n46 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n48 = 24, /**< ASN.1 n48 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n50 = 25, /**< ASN.1 n50 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n52 = 26, /**< ASN.1 n52 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n54 = 27, /**< ASN.1 n54 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n56 = 28, /**< ASN.1 n56 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n58 = 29, /**< ASN.1 n58 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n60 = 30, /**< ASN.1 n60 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n62 = 31, /**< ASN.1 n62 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n64 = 32, /**< ASN.1 n64 */
} CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18（ASN.1 powerAdaptation-CSI-FeedbackPUCCH-PerBC-r18/maxNumberCSI-ResourceAcrossCC-r18，源文件第 15199 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 {
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n5 = 0, /**< ASN.1 n5 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n6 = 1, /**< ASN.1 n6 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n7 = 2, /**< ASN.1 n7 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n8 = 3, /**< ASN.1 n8 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n9 = 4, /**< ASN.1 n9 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n10 = 5, /**< ASN.1 n10 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n12 = 6, /**< ASN.1 n12 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n14 = 7, /**< ASN.1 n14 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n16 = 8, /**< ASN.1 n16 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n18 = 9, /**< ASN.1 n18 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n20 = 10, /**< ASN.1 n20 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n22 = 11, /**< ASN.1 n22 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n24 = 12, /**< ASN.1 n24 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n26 = 13, /**< ASN.1 n26 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n28 = 14, /**< ASN.1 n28 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n30 = 15, /**< ASN.1 n30 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n32 = 16, /**< ASN.1 n32 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n34 = 17, /**< ASN.1 n34 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n36 = 18, /**< ASN.1 n36 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n38 = 19, /**< ASN.1 n38 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n40 = 20, /**< ASN.1 n40 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n42 = 21, /**< ASN.1 n42 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n44 = 22, /**< ASN.1 n44 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n46 = 23, /**< ASN.1 n46 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n48 = 24, /**< ASN.1 n48 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n50 = 25, /**< ASN.1 n50 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n52 = 26, /**< ASN.1 n52 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n54 = 27, /**< ASN.1 n54 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n56 = 28, /**< ASN.1 n56 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n58 = 29, /**< ASN.1 n58 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n60 = 30, /**< ASN.1 n60 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n62 = 31, /**< ASN.1 n62 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_n64 = 32, /**< ASN.1 n64 */
} CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1（ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18/coScheduledCellSCS-r18/nonSharedSpectrum-fdd-fr1，源文件第 15213 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1（ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18/coScheduledCellSCS-r18/nonSharedSpectrum-tdd-fr1，源文件第 15214 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1（ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18/coScheduledCellSCS-r18/sharedSpectrum-tdd-fr1，源文件第 15215 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1（ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18/coScheduledCellSCS-r18/fr2-1，源文件第 15216 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2（ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18/coScheduledCellSCS-r18/fr2-2，源文件第 15217 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_HarqFeedbackType_r18（ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18/harqFeedbackType-r18，源文件第 15222 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_HarqFeedbackType_r18 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_HarqFeedbackType_r18_type1 = 0, /**< ASN.1 type1 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_HarqFeedbackType_r18_type2 = 1, /**< ASN.1 type2 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_HarqFeedbackType_r18_type1And2 = 2, /**< ASN.1 type1And2 */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_HarqFeedbackType_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18（ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18/coScheduledCellIndicationScheme-r18，源文件第 15223 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18_fdra = 0, /**< ASN.1 fdra */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18_cellInd = 1, /**< ASN.1 cellInd */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18_both = 2, /**< ASN.1 both */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_SupportOfSearchSpace_r18（ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18/supportOfSearchSpace-r18，源文件第 15224 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_SupportOfSearchSpace_r18 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_SupportOfSearchSpace_r18_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_SupportOfSearchSpace_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18（ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18/licensed-fdd-tdd-fr1-r18，源文件第 15225 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellSCS_r18（ASN.1 multiCell-PDSCH-DCI-1-3-DiffSCS-r18/coScheduledCellSCS-r18，源文件第 15230 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellSCS_r18 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellSCS_r18_lowScheduling_highScheduled = 0, /**< ASN.1 lowScheduling-highScheduled */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellSCS_r18_highScheduling_lowScheduled = 1, /**< ASN.1 highScheduling-lowScheduled */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellSCS_r18_both = 2, /**< ASN.1 both */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellSCS_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_HarqFeedbackType_r18（ASN.1 multiCell-PDSCH-DCI-1-3-DiffSCS-r18/harqFeedbackType-r18，源文件第 15236 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_HarqFeedbackType_r18 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_HarqFeedbackType_r18_type1 = 0, /**< ASN.1 type1 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_HarqFeedbackType_r18_type2 = 1, /**< ASN.1 type2 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_HarqFeedbackType_r18_type1And2 = 2, /**< ASN.1 type1And2 */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_HarqFeedbackType_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18（ASN.1 multiCell-PDSCH-DCI-1-3-DiffSCS-r18/coScheduledCellIndicationScheme-r18，源文件第 15237 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18_fdra = 0, /**< ASN.1 fdra */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18_cellInd = 1, /**< ASN.1 cellInd */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18_both = 2, /**< ASN.1 both */
} CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1（ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18/coScheduledCellSCS-r18/nonSharedSpectrum-fdd-fr1，源文件第 15243 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1（ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18/coScheduledCellSCS-r18/nonSharedSpectrum-tdd-fr1，源文件第 15244 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1（ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18/coScheduledCellSCS-r18/sharedSpectrum-tdd-fr1，源文件第 15245 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1（ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18/coScheduledCellSCS-r18/fr2-1，源文件第 15246 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2（ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18/coScheduledCellSCS-r18/fr2-2，源文件第 15247 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18（ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18/coScheduledCellIndicationScheme-r18，源文件第 15251 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18_fdra = 0, /**< ASN.1 fdra */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18_cellInd = 1, /**< ASN.1 cellInd */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18_both = 2, /**< ASN.1 both */
} CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_SupportOfSearchSpace_r18（ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18/supportOfSearchSpace-r18，源文件第 15252 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_SupportOfSearchSpace_r18 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_SupportOfSearchSpace_r18_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_SupportOfSearchSpace_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18（ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18/licensed-fdd-tdd-fr1-r18，源文件第 15253 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellSCS_r18（ASN.1 multiCell-PUSCH-DCI-0-3-DiffSCS-r18/coScheduledCellSCS-r18，源文件第 15258 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellSCS_r18 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellSCS_r18_lowScheduling_highScheduled = 0, /**< ASN.1 lowScheduling-highScheduled */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellSCS_r18_highScheduling_lowScheduled = 1, /**< ASN.1 highScheduling-lowScheduled */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellSCS_r18_both = 2, /**< ASN.1 both */
} CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellSCS_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18（ASN.1 multiCell-PUSCH-DCI-0-3-DiffSCS-r18/coScheduledCellIndicationScheme-r18，源文件第 15264 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18_fdra = 0, /**< ASN.1 fdra */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18_cellInd = 1, /**< ASN.1 cellInd */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18_both = 2, /**< ASN.1 both */
} CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_120kHz_r18（ASN.1 advUnicastDCI-DL-r18/scs-15kHz-120kHz-r18，源文件第 15268 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_120kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_120kHz_r18_n2 = 0, /**< ASN.1 n2 */
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_120kHz_r18_n4 = 1, /**< ASN.1 n4 */
} CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_120kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_60kHz_r18（ASN.1 advUnicastDCI-DL-r18/scs-15kHz-60kHz-r18，源文件第 15269 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_60kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_60kHz_r18_n2 = 0, /**< ASN.1 n2 */
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_60kHz_r18_n4 = 1, /**< ASN.1 n4 */
} CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_60kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_120kHz_r18（ASN.1 advUnicastDCI-DL-r18/scs-30kHz-120kHz-r18，源文件第 15270 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_120kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_120kHz_r18_n2 = 0, /**< ASN.1 n2 */
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_120kHz_r18_n4 = 1, /**< ASN.1 n4 */
} CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_120kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_30kHz_r18（ASN.1 advUnicastDCI-DL-r18/scs-15kHz-30kHz-r18，源文件第 15271 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_30kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_30kHz_r18_n2 = 0, /**< ASN.1 n2 */
} CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_30kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_60kHz_r18（ASN.1 advUnicastDCI-DL-r18/scs-30kHz-60kHz-r18，源文件第 15272 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_60kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_60kHz_r18_n2 = 0, /**< ASN.1 n2 */
} CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_60kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_60kHz_120kHz_r18（ASN.1 advUnicastDCI-DL-r18/scs-60kHz-120kHz-r18，源文件第 15273 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_60kHz_120kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_60kHz_120kHz_r18_n2 = 0, /**< ASN.1 n2 */
} CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_60kHz_120kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_120kHz_r18（ASN.1 advUnicastDCI-UL-r18/scs-15kHz-120kHz-r18，源文件第 15277 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_120kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_120kHz_r18_n2 = 0, /**< ASN.1 n2 */
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_120kHz_r18_n4 = 1, /**< ASN.1 n4 */
} CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_120kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_60kHz_r18（ASN.1 advUnicastDCI-UL-r18/scs-15kHz-60kHz-r18，源文件第 15278 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_60kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_60kHz_r18_n2 = 0, /**< ASN.1 n2 */
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_60kHz_r18_n4 = 1, /**< ASN.1 n4 */
} CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_60kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_120kHz_r18（ASN.1 advUnicastDCI-UL-r18/scs-30kHz-120kHz-r18，源文件第 15279 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_120kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_120kHz_r18_n2 = 0, /**< ASN.1 n2 */
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_120kHz_r18_n4 = 1, /**< ASN.1 n4 */
} CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_120kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_30kHz_r18（ASN.1 advUnicastDCI-UL-r18/scs-15kHz-30kHz-r18，源文件第 15280 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_30kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_30kHz_r18_n2 = 0, /**< ASN.1 n2 */
} CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_30kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_60kHz_r18（ASN.1 advUnicastDCI-UL-r18/scs-30kHz-60kHz-r18，源文件第 15281 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_60kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_60kHz_r18_n2 = 0, /**< ASN.1 n2 */
} CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_60kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_60kHz_120kHz_r18（ASN.1 advUnicastDCI-UL-r18/scs-60kHz-120kHz-r18，源文件第 15282 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_60kHz_120kHz_r18 {
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_60kHz_120kHz_r18_n2 = 0, /**< ASN.1 n2 */
} CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_60kHz_120kHz_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_Type3HARQ_CB_DCI_1_3_r18（ASN.1 type3HARQ-CB-DCI-1-3-r18，源文件第 15285 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_Type3HARQ_CB_DCI_1_3_r18 {
    CA_ParametersNR_v1800_Type3HARQ_CB_DCI_1_3_r18_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_Type3HARQ_CB_DCI_1_3_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18_NumberOfCodebook_r18（ASN.1 type3EnhHARQ-CB-DCI-1-3-r18/numberOfCodebook-r18，源文件第 15288 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18_NumberOfCodebook_r18 {
    CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18_NumberOfCodebook_r18_n1 = 0, /**< ASN.1 n1 */
    CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18_NumberOfCodebook_r18_n2 = 1, /**< ASN.1 n2 */
    CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18_NumberOfCodebook_r18_n4 = 2, /**< ASN.1 n4 */
    CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18_NumberOfCodebook_r18_n8 = 3, /**< ASN.1 n8 */
} CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18_NumberOfCodebook_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18_SupportedSpanArrangement_r18（ASN.1 pdcch-MonitoringCA-r18/supportedSpanArrangement-r18，源文件第 15295 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18_SupportedSpanArrangement_r18 {
    CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18_SupportedSpanArrangement_r18_alignedOnly = 0, /**< ASN.1 alignedOnly */
    CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18_SupportedSpanArrangement_r18_alignedAndNonAligned = 1, /**< ASN.1 alignedAndNonAligned */
} CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18_SupportedSpanArrangement_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18_SupportedSpanArrangement_r18（ASN.1 pdcch-BlindDetectionCA-Mixed-r18/supportedSpanArrangement-r18，源文件第 15302 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18_SupportedSpanArrangement_r18 {
    CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18_SupportedSpanArrangement_r18_alignedOnly = 0, /**< ASN.1 alignedOnly */
    CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18_SupportedSpanArrangement_r18_alignedAndNonAligned = 1, /**< ASN.1 alignedAndNonAligned */
} CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18_SupportedSpanArrangement_r18;


/**
 * @brief 枚举 CA_ParametersNR_v1800_IntraBandNR_CA_non_collocated_r18（ASN.1 intraBandNR-CA-non-collocated-r18，源文件第 15316 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNR_v1800_IntraBandNR_CA_non_collocated_r18 {
    CA_ParametersNR_v1800_IntraBandNR_CA_non_collocated_r18_supported = 0, /**< ASN.1 supported */
} CA_ParametersNR_v1800_IntraBandNR_CA_non_collocated_r18;


/**
 * @brief 枚举 CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_15kHz_r17（ASN.1 supportedSCS-Combinations-r17/scs15kHz-15kHz-r17，源文件第 15321 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_15kHz_r17 {
    CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_15kHz_r17_supported = 0, /**< ASN.1 supported */
} CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_15kHz_r17;


/**
 * @brief 枚举 CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_30kHz_r17（ASN.1 supportedSCS-Combinations-r17/scs15kHz-30kHz-r17，源文件第 15322 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_30kHz_r17 {
    CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_30kHz_r17_supported = 0, /**< ASN.1 supported */
} CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_30kHz_r17;


/**
 * @brief 枚举 CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_60kHz_r17（ASN.1 supportedSCS-Combinations-r17/scs15kHz-60kHz-r17，源文件第 15323 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_60kHz_r17 {
    CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_60kHz_r17_supported = 0, /**< ASN.1 supported */
} CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_60kHz_r17;


/**
 * @brief 枚举 CrossCarrierSchedulingSCell_SpCell_r17_Pdcch_MonitoringOccasion_r17（ASN.1 pdcch-MonitoringOccasion-r17，源文件第 15328 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CrossCarrierSchedulingSCell_SpCell_r17_Pdcch_MonitoringOccasion_r17 {
    CrossCarrierSchedulingSCell_SpCell_r17_Pdcch_MonitoringOccasion_r17_val1 = 0, /**< ASN.1 val1 */
    CrossCarrierSchedulingSCell_SpCell_r17_Pdcch_MonitoringOccasion_r17_val2 = 1, /**< ASN.1 val2 */
} CrossCarrierSchedulingSCell_SpCell_r17_Pdcch_MonitoringOccasion_r17;


/**
 * @brief 枚举 SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xLessThanY_r16（ASN.1 supportSRS-xTyR-xLessThanY-r16，源文件第 15410 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xLessThanY_r16 {
    SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xLessThanY_r16_supported = 0, /**< ASN.1 supported */
} SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xLessThanY_r16;


/**
 * @brief 枚举 SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xEqualToY_r16（ASN.1 supportSRS-xTyR-xEqualToY-r16，源文件第 15411 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xEqualToY_r16 {
    SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xEqualToY_r16_supported = 0, /**< ASN.1 supported */
} SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xEqualToY_r16;


/**
 * @brief 枚举 SimulSRS_ForAntennaSwitching_r16_SupportSRS_AntennaSwitching_r16（ASN.1 supportSRS-AntennaSwitching-r16，源文件第 15412 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SimulSRS_ForAntennaSwitching_r16_SupportSRS_AntennaSwitching_r16 {
    SimulSRS_ForAntennaSwitching_r16_SupportSRS_AntennaSwitching_r16_supported = 0, /**< ASN.1 supported */
} SimulSRS_ForAntennaSwitching_r16_SupportSRS_AntennaSwitching_r16;


/**
 * @brief 枚举 PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedTDD_r16（ASN.1 fr1-NonSharedTDD-r16，源文件第 15437 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedTDD_r16 {
    PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedTDD_r16_supported = 0, /**< ASN.1 supported */
} PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedTDD_r16;


/**
 * @brief 枚举 PUCCH_Grp_CarrierTypes_r16_Fr1_SharedTDD_r16（ASN.1 fr1-SharedTDD-r16，源文件第 15438 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Grp_CarrierTypes_r16_Fr1_SharedTDD_r16 {
    PUCCH_Grp_CarrierTypes_r16_Fr1_SharedTDD_r16_supported = 0, /**< ASN.1 supported */
} PUCCH_Grp_CarrierTypes_r16_Fr1_SharedTDD_r16;


/**
 * @brief 枚举 PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedFDD_r16（ASN.1 fr1-NonSharedFDD-r16，源文件第 15439 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedFDD_r16 {
    PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedFDD_r16_supported = 0, /**< ASN.1 supported */
} PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedFDD_r16;


/**
 * @brief 枚举 PUCCH_Grp_CarrierTypes_r16_Fr2_r16（ASN.1 fr2-r16，源文件第 15440 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Grp_CarrierTypes_r16_Fr2_r16 {
    PUCCH_Grp_CarrierTypes_r16_Fr2_r16_supported = 0, /**< ASN.1 supported */
} PUCCH_Grp_CarrierTypes_r16_Fr2_r16;


/**
 * @brief 枚举 PUCCH_Group_Config_r17_Fr1_FR1_NonSharedTDD_r17（ASN.1 fr1-FR1-NonSharedTDD-r17，源文件第 15444 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Group_Config_r17_Fr1_FR1_NonSharedTDD_r17 {
    PUCCH_Group_Config_r17_Fr1_FR1_NonSharedTDD_r17_supported = 0, /**< ASN.1 supported */
} PUCCH_Group_Config_r17_Fr1_FR1_NonSharedTDD_r17;


/**
 * @brief 枚举 PUCCH_Group_Config_r17_Fr2_FR2_NonSharedTDD_r17（ASN.1 fr2-FR2-NonSharedTDD-r17，源文件第 15445 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Group_Config_r17_Fr2_FR2_NonSharedTDD_r17 {
    PUCCH_Group_Config_r17_Fr2_FR2_NonSharedTDD_r17_supported = 0, /**< ASN.1 supported */
} PUCCH_Group_Config_r17_Fr2_FR2_NonSharedTDD_r17;


/**
 * @brief 枚举 PUCCH_Group_Config_r17_Fr1_FR2_NonSharedTDD_r17（ASN.1 fr1-FR2-NonSharedTDD-r17，源文件第 15446 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Group_Config_r17_Fr1_FR2_NonSharedTDD_r17 {
    PUCCH_Group_Config_r17_Fr1_FR2_NonSharedTDD_r17_supported = 0, /**< ASN.1 supported */
} PUCCH_Group_Config_r17_Fr1_FR2_NonSharedTDD_r17;


/**
 * @brief 枚举 CombinationCarrierType_r18_SchedulingCellCarrierType_r18（ASN.1 schedulingCellCarrierType-r18，源文件第 15450 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CombinationCarrierType_r18_SchedulingCellCarrierType_r18 {
    CombinationCarrierType_r18_SchedulingCellCarrierType_r18_licensed_fdd_fr1 = 0, /**< ASN.1 licensed-fdd-fr1 */
    CombinationCarrierType_r18_SchedulingCellCarrierType_r18_licensed_tdd_fr1 = 1, /**< ASN.1 licensed-tdd-fr1 */
    CombinationCarrierType_r18_SchedulingCellCarrierType_r18_unlicensed_tdd_fr1 = 2, /**< ASN.1 unlicensed-tdd-fr1 */
    CombinationCarrierType_r18_SchedulingCellCarrierType_r18_fr2_1 = 3, /**< ASN.1 fr2-1 */
    CombinationCarrierType_r18_SchedulingCellCarrierType_r18_fr2_2 = 4, /**< ASN.1 fr2-2 */
} CombinationCarrierType_r18_SchedulingCellCarrierType_r18;


/**
 * @brief 枚举 CombinationCarrierType_r18_ScheduledCellCarrierType_r18（ASN.1 scheduledCellCarrierType-r18，源文件第 15451 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CombinationCarrierType_r18_ScheduledCellCarrierType_r18 {
    CombinationCarrierType_r18_ScheduledCellCarrierType_r18_licensed_fdd_fr1 = 0, /**< ASN.1 licensed-fdd-fr1 */
    CombinationCarrierType_r18_ScheduledCellCarrierType_r18_licensed_tdd_fr1 = 1, /**< ASN.1 licensed-tdd-fr1 */
    CombinationCarrierType_r18_ScheduledCellCarrierType_r18_unlicensed_tdd_fr1 = 2, /**< ASN.1 unlicensed-tdd-fr1 */
    CombinationCarrierType_r18_ScheduledCellCarrierType_r18_fr2_1 = 3, /**< ASN.1 fr2-1 */
    CombinationCarrierType_r18_ScheduledCellCarrierType_r18_fr2_2 = 4, /**< ASN.1 fr2-2 */
} CombinationCarrierType_r18_ScheduledCellCarrierType_r18;


/**
 * @brief 枚举 CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode1_r16（ASN.1 intraFR-NR-DC-PwrSharingMode1-r16，源文件第 15471 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode1_r16 {
    CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode1_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode1_r16;


/**
 * @brief 枚举 CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode2_r16（ASN.1 intraFR-NR-DC-PwrSharingMode2-r16，源文件第 15473 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode2_r16 {
    CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode2_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode2_r16;


/**
 * @brief 枚举 CA_ParametersNRDC_v1610_IntraFR_NR_DC_DynamicPwrSharing_r16（ASN.1 intraFR-NR-DC-DynamicPwrSharing-r16，源文件第 15475 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNRDC_v1610_IntraFR_NR_DC_DynamicPwrSharing_r16 {
    CA_ParametersNRDC_v1610_IntraFR_NR_DC_DynamicPwrSharing_r16_short_ = 0, /**< ASN.1 short */
    CA_ParametersNRDC_v1610_IntraFR_NR_DC_DynamicPwrSharing_r16_long_ = 1, /**< ASN.1 long */
} CA_ParametersNRDC_v1610_IntraFR_NR_DC_DynamicPwrSharing_r16;


/**
 * @brief 枚举 CA_ParametersNRDC_v1610_AsyncNRDC_r16（ASN.1 asyncNRDC-r16，源文件第 15476 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNRDC_v1610_AsyncNRDC_r16 {
    CA_ParametersNRDC_v1610_AsyncNRDC_r16_supported = 0, /**< ASN.1 supported */
} CA_ParametersNRDC_v1610_AsyncNRDC_r16;


/**
 * @brief 枚举 CA_ParametersNRDC_v1700_SimultaneousRxTx_IAB_MultipleParents_r17（ASN.1 simultaneousRxTx-IAB-MultipleParents-r17，源文件第 15498 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNRDC_v1700_SimultaneousRxTx_IAB_MultipleParents_r17 {
    CA_ParametersNRDC_v1700_SimultaneousRxTx_IAB_MultipleParents_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNRDC_v1700_SimultaneousRxTx_IAB_MultipleParents_r17;


/**
 * @brief 枚举 CA_ParametersNRDC_v1700_CondPSCellAdditionNRDC_r17（ASN.1 condPSCellAdditionNRDC-r17，源文件第 15499 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNRDC_v1700_CondPSCellAdditionNRDC_r17 {
    CA_ParametersNRDC_v1700_CondPSCellAdditionNRDC_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNRDC_v1700_CondPSCellAdditionNRDC_r17;


/**
 * @brief 枚举 CA_ParametersNRDC_v1700_Scg_ActivationDeactivationNRDC_r17（ASN.1 scg-ActivationDeactivationNRDC-r17，源文件第 15500 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNRDC_v1700_Scg_ActivationDeactivationNRDC_r17 {
    CA_ParametersNRDC_v1700_Scg_ActivationDeactivationNRDC_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNRDC_v1700_Scg_ActivationDeactivationNRDC_r17;


/**
 * @brief 枚举 CA_ParametersNRDC_v1700_Scg_ActivationDeactivationResumeNRDC_r17（ASN.1 scg-ActivationDeactivationResumeNRDC-r17，源文件第 15501 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNRDC_v1700_Scg_ActivationDeactivationResumeNRDC_r17 {
    CA_ParametersNRDC_v1700_Scg_ActivationDeactivationResumeNRDC_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNRDC_v1700_Scg_ActivationDeactivationResumeNRDC_r17;


/**
 * @brief 枚举 CA_ParametersNRDC_v1700_BeamManagementType_CBM_r17（ASN.1 beamManagementType-CBM-r17，源文件第 15502 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CA_ParametersNRDC_v1700_BeamManagementType_CBM_r17 {
    CA_ParametersNRDC_v1700_BeamManagementType_CBM_r17_supported = 0, /**< ASN.1 supported */
} CA_ParametersNRDC_v1700_BeamManagementType_CBM_r17;


/**
 * @brief 枚举 CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1FDD（ASN.1 fr1fdd-FR1TDD-CA-SpCellOnFR1FDD，源文件第 15541 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1FDD {
    CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1FDD_supported = 0, /**< ASN.1 supported */
} CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1FDD;


/**
 * @brief 枚举 CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1TDD（ASN.1 fr1fdd-FR1TDD-CA-SpCellOnFR1TDD，源文件第 15542 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1TDD {
    CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1TDD_supported = 0, /**< ASN.1 supported */
} CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1TDD;


/**
 * @brief 枚举 CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR1FDD（ASN.1 fr1fdd-FR2TDD-CA-SpCellOnFR1FDD，源文件第 15543 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR1FDD {
    CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR1FDD_supported = 0, /**< ASN.1 supported */
} CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR1FDD;


/**
 * @brief 枚举 CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR2TDD（ASN.1 fr1fdd-FR2TDD-CA-SpCellOnFR2TDD，源文件第 15544 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR2TDD {
    CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR2TDD_supported = 0, /**< ASN.1 supported */
} CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR2TDD;


/**
 * @brief 枚举 CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR1TDD（ASN.1 fr1tdd-FR2TDD-CA-SpCellOnFR1TDD，源文件第 15545 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR1TDD {
    CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR1TDD_supported = 0, /**< ASN.1 supported */
} CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR1TDD;


/**
 * @brief 枚举 CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR2TDD（ASN.1 fr1tdd-FR2TDD-CA-SpCellOnFR2TDD，源文件第 15546 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR2TDD {
    CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR2TDD_supported = 0, /**< ASN.1 supported */
} CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR2TDD;


/**
 * @brief 枚举 CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD（ASN.1 fr1fdd-FR1TDD-FR2TDD-CA-SpCellOnFR1FDD，源文件第 15547 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD {
    CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD_supported = 0, /**< ASN.1 supported */
} CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD;


/**
 * @brief 枚举 CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD（ASN.1 fr1fdd-FR1TDD-FR2TDD-CA-SpCellOnFR1TDD，源文件第 15548 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD {
    CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD_supported = 0, /**< ASN.1 supported */
} CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD;


/**
 * @brief 枚举 CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD（ASN.1 fr1fdd-FR1TDD-FR2TDD-CA-SpCellOnFR2TDD，源文件第 15549 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD {
    CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD_supported = 0, /**< ASN.1 supported */
} CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD;


/**
 * @brief 枚举 CodebookParameters_Type1_SinglePanel_Modes（ASN.1 type1/singlePanel/modes，源文件第 15559 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParameters_Type1_SinglePanel_Modes {
    CodebookParameters_Type1_SinglePanel_Modes_mode1 = 0, /**< ASN.1 mode1 */
    CodebookParameters_Type1_SinglePanel_Modes_mode1andMode2 = 1, /**< ASN.1 mode1andMode2 */
} CodebookParameters_Type1_SinglePanel_Modes;


/**
 * @brief 枚举 CodebookParameters_Type1_MultiPanel_Modes（ASN.1 type1/multiPanel/modes，源文件第 15564 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParameters_Type1_MultiPanel_Modes {
    CodebookParameters_Type1_MultiPanel_Modes_mode1 = 0, /**< ASN.1 mode1 */
    CodebookParameters_Type1_MultiPanel_Modes_mode2 = 1, /**< ASN.1 mode2 */
    CodebookParameters_Type1_MultiPanel_Modes_both = 2, /**< ASN.1 both */
} CodebookParameters_Type1_MultiPanel_Modes;


/**
 * @brief 枚举 CodebookParameters_Type1_MultiPanel_NrofPanels（ASN.1 type1/multiPanel/nrofPanels，源文件第 15565 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParameters_Type1_MultiPanel_NrofPanels {
    CodebookParameters_Type1_MultiPanel_NrofPanels_n2 = 0, /**< ASN.1 n2 */
    CodebookParameters_Type1_MultiPanel_NrofPanels_n4 = 1, /**< ASN.1 n4 */
} CodebookParameters_Type1_MultiPanel_NrofPanels;


/**
 * @brief 枚举 CodebookParameters_Type2_AmplitudeScalingType（ASN.1 type2/amplitudeScalingType，源文件第 15572 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParameters_Type2_AmplitudeScalingType {
    CodebookParameters_Type2_AmplitudeScalingType_wideband = 0, /**< ASN.1 wideband */
    CodebookParameters_Type2_AmplitudeScalingType_widebandAndSubband = 1, /**< ASN.1 widebandAndSubband */
} CodebookParameters_Type2_AmplitudeScalingType;


/**
 * @brief 枚举 CodebookParameters_Type2_AmplitudeSubsetRestriction（ASN.1 type2/amplitudeSubsetRestriction，源文件第 15573 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParameters_Type2_AmplitudeSubsetRestriction {
    CodebookParameters_Type2_AmplitudeSubsetRestriction_supported = 0, /**< ASN.1 supported */
} CodebookParameters_Type2_AmplitudeSubsetRestriction;


/**
 * @brief 枚举 CodebookParameters_Type2_PortSelection_AmplitudeScalingType（ASN.1 type2-PortSelection/amplitudeScalingType，源文件第 15578 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParameters_Type2_PortSelection_AmplitudeScalingType {
    CodebookParameters_Type2_PortSelection_AmplitudeScalingType_wideband = 0, /**< ASN.1 wideband */
    CodebookParameters_Type2_PortSelection_AmplitudeScalingType_widebandAndSubband = 1, /**< ASN.1 widebandAndSubband */
} CodebookParameters_Type2_PortSelection_AmplitudeScalingType;


/**
 * @brief 枚举 CodebookParametersAddition_r16_Etype2_r16_ParamComb7_8_r16（ASN.1 etype2-r16/paramComb7-8-r16，源文件第 15604 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersAddition_r16_Etype2_r16_ParamComb7_8_r16 {
    CodebookParametersAddition_r16_Etype2_r16_ParamComb7_8_r16_supported = 0, /**< ASN.1 supported */
} CodebookParametersAddition_r16_Etype2_r16_ParamComb7_8_r16;


/**
 * @brief 枚举 CodebookParametersAddition_r16_Etype2_r16_Rank3_4_r16（ASN.1 etype2-r16/rank3-4-r16，源文件第 15606 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersAddition_r16_Etype2_r16_Rank3_4_r16 {
    CodebookParametersAddition_r16_Etype2_r16_Rank3_4_r16_supported = 0, /**< ASN.1 supported */
} CodebookParametersAddition_r16_Etype2_r16_Rank3_4_r16;


/**
 * @brief 枚举 CodebookParametersAddition_r16_Etype2_r16_AmplitudeSubsetRestriction_r16（ASN.1 etype2-r16/amplitudeSubsetRestriction-r16，源文件第 15608 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersAddition_r16_Etype2_r16_AmplitudeSubsetRestriction_r16 {
    CodebookParametersAddition_r16_Etype2_r16_AmplitudeSubsetRestriction_r16_supported = 0, /**< ASN.1 supported */
} CodebookParametersAddition_r16_Etype2_r16_AmplitudeSubsetRestriction_r16;


/**
 * @brief 枚举 CodebookParametersAddition_r16_Etype2_PS_r16_Rank3_4_r16（ASN.1 etype2-PS-r16/rank3-4-r16，源文件第 15622 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersAddition_r16_Etype2_PS_r16_Rank3_4_r16 {
    CodebookParametersAddition_r16_Etype2_PS_r16_Rank3_4_r16_supported = 0, /**< ASN.1 supported */
} CodebookParametersAddition_r16_Etype2_PS_r16_Rank3_4_r16;


/**
 * @brief 枚举 CodebookParametersfetype2_r17_Fetype2Rank3Rank4_r17（ASN.1 fetype2Rank3Rank4-r17，源文件第 15682 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2_r17_Fetype2Rank3Rank4_r17 {
    CodebookParametersfetype2_r17_Fetype2Rank3Rank4_r17_supported = 0, /**< ASN.1 supported */
} CodebookParametersfetype2_r17_Fetype2Rank3Rank4_r17;


/**
 * @brief 枚举 CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18_Scalingfactor_r18（ASN.1 eType2Doppler-r18/scalingfactor-r18，源文件第 15948 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18_Scalingfactor_r18 {
    CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18_Scalingfactor_r18_n1 = 0, /**< ASN.1 n1 */
    CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18_Scalingfactor_r18_n2 = 1, /**< ASN.1 n2 */
    CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18_Scalingfactor_r18_n4 = 2, /**< ASN.1 n4 */
} CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18_Scalingfactor_r18;


/**
 * @brief 枚举 CodebookParametersetype2DopplerCSI_r18_DdUnitSize_A_CSI_RS_CMR_r18（ASN.1 ddUnitSize-A-CSI-RS-CMR-r18，源文件第 15958 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2DopplerCSI_r18_DdUnitSize_A_CSI_RS_CMR_r18 {
    CodebookParametersetype2DopplerCSI_r18_DdUnitSize_A_CSI_RS_CMR_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2DopplerCSI_r18_DdUnitSize_A_CSI_RS_CMR_r18;


/**
 * @brief 枚举 CodebookParametersetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18（ASN.1 maxNumberAperiodicCSI-RS-Resource-r18，源文件第 15961 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18 {
    CodebookParametersetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18_n4 = 0, /**< ASN.1 n4 */
    CodebookParametersetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18_n8 = 1, /**< ASN.1 n8 */
    CodebookParametersetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18_n12 = 2, /**< ASN.1 n12 */
} CodebookParametersetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18;


/**
 * @brief 枚举 CodebookParametersetype2DopplerCSI_r18_EType2DopplerX1_r18（ASN.1 eType2DopplerX1-r18，源文件第 15966 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2DopplerCSI_r18_EType2DopplerX1_r18 {
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerX1_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2DopplerCSI_r18_EType2DopplerX1_r18;


/**
 * @brief 枚举 CodebookParametersetype2DopplerCSI_r18_EType2DopplerX2_r18（ASN.1 eType2DopplerX2-r18，源文件第 15968 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2DopplerCSI_r18_EType2DopplerX2_r18 {
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerX2_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2DopplerCSI_r18_EType2DopplerX2_r18;


/**
 * @brief 枚举 CodebookParametersetype2DopplerCSI_r18_EType2DopplerL_N4D1_r18（ASN.1 eType2DopplerL-N4D1-r18，源文件第 15970 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2DopplerCSI_r18_EType2DopplerL_N4D1_r18 {
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerL_N4D1_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2DopplerCSI_r18_EType2DopplerL_N4D1_r18;


/**
 * @brief 枚举 CodebookParametersetype2DopplerCSI_r18_EType2DopplerL6_r18（ASN.1 eType2DopplerL6-r18，源文件第 15972 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2DopplerCSI_r18_EType2DopplerL6_r18 {
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerL6_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2DopplerCSI_r18_EType2DopplerL6_r18;


/**
 * @brief 枚举 CodebookParametersetype2DopplerCSI_r18_EType2DopplerR3R4_r18（ASN.1 eType2DopplerR3R4-r18，源文件第 15974 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2DopplerCSI_r18_EType2DopplerR3R4_r18 {
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerR3R4_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2DopplerCSI_r18_EType2DopplerR3R4_r18;


/**
 * @brief 枚举 CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18_Scalingfactor_r18（ASN.1 feType2Doppler-r18/scalingfactor-r18，源文件第 15983 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18_Scalingfactor_r18 {
    CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18_Scalingfactor_r18_n1 = 0, /**< ASN.1 n1 */
    CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18_Scalingfactor_r18_n2 = 1, /**< ASN.1 n2 */
    CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18_Scalingfactor_r18_n4 = 2, /**< ASN.1 n4 */
} CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18_Scalingfactor_r18;


/**
 * @brief 枚举 CodebookParametersfetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18（ASN.1 maxNumberAperiodicCSI-RS-Resource-r18，源文件第 15987 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18 {
    CodebookParametersfetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18_n4 = 0, /**< ASN.1 n4 */
    CodebookParametersfetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18_n8 = 1, /**< ASN.1 n8 */
    CodebookParametersfetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18_n12 = 2, /**< ASN.1 n12 */
} CodebookParametersfetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18;


/**
 * @brief 枚举 CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerL_N4D1_r18（ASN.1 feType2DopplerL-N4D1-r18，源文件第 15997 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerL_N4D1_r18 {
    CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerL_N4D1_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerL_N4D1_r18;


/**
 * @brief 枚举 CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerR3R4_r18（ASN.1 feType2DopplerR3R4-r18，源文件第 15999 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerR3R4_r18 {
    CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerR3R4_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerR3R4_r18;


/**
 * @brief 枚举 CodebookParametersetype2CJT_r18_EType2CJT_r18_Scalingfactor_r18（ASN.1 eType2CJT-r18/scalingfactor-r18，源文件第 16007 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2CJT_r18_EType2CJT_r18_Scalingfactor_r18 {
    CodebookParametersetype2CJT_r18_EType2CJT_r18_Scalingfactor_r18_n1 = 0, /**< ASN.1 n1 */
    CodebookParametersetype2CJT_r18_EType2CJT_r18_Scalingfactor_r18_n1dot5 = 1, /**< ASN.1 n1dot5 */
    CodebookParametersetype2CJT_r18_EType2CJT_r18_Scalingfactor_r18_n2 = 2, /**< ASN.1 n2 */
} CodebookParametersetype2CJT_r18_EType2CJT_r18_Scalingfactor_r18;


/**
 * @brief 枚举 CodebookParametersetype2CJT_r18_EType2CJT_FD_FO_r18（ASN.1 eType2CJT-FD-FO-r18，源文件第 16014 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2CJT_r18_EType2CJT_FD_FO_r18 {
    CodebookParametersetype2CJT_r18_EType2CJT_FD_FO_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2CJT_r18_EType2CJT_FD_FO_r18;


/**
 * @brief 枚举 CodebookParametersetype2CJT_r18_EType2CJT_PV_Beta_r18（ASN.1 eType2CJT-PV-Beta-r18，源文件第 16019 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2CJT_r18_EType2CJT_PV_Beta_r18 {
    CodebookParametersetype2CJT_r18_EType2CJT_PV_Beta_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2CJT_r18_EType2CJT_PV_Beta_r18;


/**
 * @brief 枚举 CodebookParametersetype2CJT_r18_EType2CJT_2NN1N2_r18（ASN.1 eType2CJT-2NN1N2-r18，源文件第 16021 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2CJT_r18_EType2CJT_2NN1N2_r18 {
    CodebookParametersetype2CJT_r18_EType2CJT_2NN1N2_r18_n64 = 0, /**< ASN.1 n64 */
    CodebookParametersetype2CJT_r18_EType2CJT_2NN1N2_r18_n96 = 1, /**< ASN.1 n96 */
    CodebookParametersetype2CJT_r18_EType2CJT_2NN1N2_r18_n128 = 2, /**< ASN.1 n128 */
} CodebookParametersetype2CJT_r18_EType2CJT_2NN1N2_r18;


/**
 * @brief 枚举 CodebookParametersetype2CJT_r18_EType2CJT_Rank3Rank4_r18（ASN.1 eType2CJT-Rank3Rank4-r18，源文件第 16023 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2CJT_r18_EType2CJT_Rank3Rank4_r18 {
    CodebookParametersetype2CJT_r18_EType2CJT_Rank3Rank4_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2CJT_r18_EType2CJT_Rank3Rank4_r18;


/**
 * @brief 枚举 CodebookParametersetype2CJT_r18_EType2CJT_L6_r18（ASN.1 eType2CJT-L6-r18，源文件第 16025 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2CJT_r18_EType2CJT_L6_r18 {
    CodebookParametersetype2CJT_r18_EType2CJT_L6_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2CJT_r18_EType2CJT_L6_r18;


/**
 * @brief 枚举 CodebookParametersetype2CJT_r18_EType2CJT_NN_r18（ASN.1 eType2CJT-NN-r18，源文件第 16027 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2CJT_r18_EType2CJT_NN_r18 {
    CodebookParametersetype2CJT_r18_EType2CJT_NN_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2CJT_r18_EType2CJT_NN_r18;


/**
 * @brief 枚举 CodebookParametersetype2CJT_r18_EType2CJT_NL_SD_r18（ASN.1 eType2CJT-NL-SD-r18，源文件第 16030 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2CJT_r18_EType2CJT_NL_SD_r18 {
    CodebookParametersetype2CJT_r18_EType2CJT_NL_SD_r18_n2 = 0, /**< ASN.1 n2 */
    CodebookParametersetype2CJT_r18_EType2CJT_NL_SD_r18_n4 = 1, /**< ASN.1 n4 */
} CodebookParametersetype2CJT_r18_EType2CJT_NL_SD_r18;


/**
 * @brief 枚举 CodebookParametersetype2CJT_r18_EType2CJT_Unequal_r18（ASN.1 eType2CJT-Unequal-r18，源文件第 16032 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersetype2CJT_r18_EType2CJT_Unequal_r18 {
    CodebookParametersetype2CJT_r18_EType2CJT_Unequal_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersetype2CJT_r18_EType2CJT_Unequal_r18;


/**
 * @brief 枚举 CodebookParametersfetype2CJT_r18_FeType2CJT_r18_Scalingfactor_r18（ASN.1 feType2CJT-r18/scalingfactor-r18，源文件第 16040 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2CJT_r18_FeType2CJT_r18_Scalingfactor_r18 {
    CodebookParametersfetype2CJT_r18_FeType2CJT_r18_Scalingfactor_r18_n1 = 0, /**< ASN.1 n1 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_r18_Scalingfactor_r18_n1dot5 = 1, /**< ASN.1 n1dot5 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_r18_Scalingfactor_r18_n2 = 2, /**< ASN.1 n2 */
} CodebookParametersfetype2CJT_r18_FeType2CJT_r18_Scalingfactor_r18;


/**
 * @brief 枚举 CodebookParametersfetype2CJT_r18_FeType2CJT_FD_FO_r18（ASN.1 feType2CJT-FD-FO-r18，源文件第 16047 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2CJT_r18_FeType2CJT_FD_FO_r18 {
    CodebookParametersfetype2CJT_r18_FeType2CJT_FD_FO_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersfetype2CJT_r18_FeType2CJT_FD_FO_r18;


/**
 * @brief 枚举 CodebookParametersfetype2CJT_r18_FeType2CJT_2NN1N2_r18（ASN.1 feType2CJT-2NN1N2-r18，源文件第 16055 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2CJT_r18_FeType2CJT_2NN1N2_r18 {
    CodebookParametersfetype2CJT_r18_FeType2CJT_2NN1N2_r18_n64 = 0, /**< ASN.1 n64 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_2NN1N2_r18_n96 = 1, /**< ASN.1 n96 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_2NN1N2_r18_n128 = 2, /**< ASN.1 n128 */
} CodebookParametersfetype2CJT_r18_FeType2CJT_2NN1N2_r18;


/**
 * @brief 枚举 CodebookParametersfetype2CJT_r18_FeType2CJT_Rank3Rank4_r18（ASN.1 feType2CJT-Rank3Rank4-r18，源文件第 16057 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2CJT_r18_FeType2CJT_Rank3Rank4_r18 {
    CodebookParametersfetype2CJT_r18_FeType2CJT_Rank3Rank4_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersfetype2CJT_r18_FeType2CJT_Rank3Rank4_r18;


/**
 * @brief 枚举 CodebookParametersfetype2CJT_r18_FeType2CJT_NN_r18（ASN.1 feType2CJT-NN-r18，源文件第 16059 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2CJT_r18_FeType2CJT_NN_r18 {
    CodebookParametersfetype2CJT_r18_FeType2CJT_NN_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersfetype2CJT_r18_FeType2CJT_NN_r18;


/**
 * @brief 枚举 CodebookParametersfetype2CJT_r18_FeType2CJT_NL_r18（ASN.1 feType2CJT-NL-r18，源文件第 16062 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2CJT_r18_FeType2CJT_NL_r18 {
    CodebookParametersfetype2CJT_r18_FeType2CJT_NL_r18_n2 = 0, /**< ASN.1 n2 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_NL_r18_n4 = 1, /**< ASN.1 n4 */
} CodebookParametersfetype2CJT_r18_FeType2CJT_NL_r18;


/**
 * @brief 枚举 CodebookParametersfetype2CJT_r18_FeType2CJT_Unequal_r18（ASN.1 feType2CJT-Unequal-r18，源文件第 16064 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersfetype2CJT_r18_FeType2CJT_Unequal_r18 {
    CodebookParametersfetype2CJT_r18_FeType2CJT_Unequal_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersfetype2CJT_r18_FeType2CJT_Unequal_r18;


/**
 * @brief 枚举 CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType1_r18（ASN.1 multiplexingType1-r18，源文件第 16095 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType1_r18 {
    CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType1_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType1_r18;


/**
 * @brief 枚举 CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType2_r18（ASN.1 multiplexingType2-r18，源文件第 16097 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType2_r18 {
    CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType2_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType2_r18;


/**
 * @brief 枚举 CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType3_r18（ASN.1 multiplexingType3-r18，源文件第 16099 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType3_r18 {
    CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType3_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType3_r18;


/**
 * @brief 枚举 CodebookParametersHARQ_ACK_PUSCH_r18_Pucch_DiffResource_PDSCH_r18（ASN.1 pucch-DiffResource-PDSCH-r18，源文件第 16101 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersHARQ_ACK_PUSCH_r18_Pucch_DiffResource_PDSCH_r18 {
    CodebookParametersHARQ_ACK_PUSCH_r18_Pucch_DiffResource_PDSCH_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersHARQ_ACK_PUSCH_r18_Pucch_DiffResource_PDSCH_r18;


/**
 * @brief 枚举 CodebookParametersHARQ_ACK_PUSCH_r18_DiffCB_Size_PDSCH_r18（ASN.1 diffCB-Size-PDSCH-r18，源文件第 16103 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookParametersHARQ_ACK_PUSCH_r18_DiffCB_Size_PDSCH_r18 {
    CodebookParametersHARQ_ACK_PUSCH_r18_DiffCB_Size_PDSCH_r18_supported = 0, /**< ASN.1 supported */
} CodebookParametersHARQ_ACK_PUSCH_r18_DiffCB_Size_PDSCH_r18;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART006_H */
