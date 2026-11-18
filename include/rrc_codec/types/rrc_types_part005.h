/* ============================================================================
 * types/rrc_types_part005.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART005_H
#define RRC_CODEC_TYPES_PART005_H

#include "rrc_types_part000.h"
#include "rrc_types_part001.h"
#include "rrc_types_part002.h"
#include "rrc_types_part003.h"
#include "rrc_types_part004.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_1_2_r16（ASN.1 antennaPortsFieldPresenceDCI-1-2-r16，源文件第 9449 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_1_2_r16 {
    PDSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_1_2_r16_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_1_2_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_1_2_r16（ASN.1 dmrs-SequenceInitializationDCI-1-2-r16，源文件第 9456 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_1_2_r16 {
    PDSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_1_2_r16_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_1_2_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_Mcs_TableDCI_1_2_r16（ASN.1 mcs-TableDCI-1-2-r16，源文件第 9458 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_Mcs_TableDCI_1_2_r16 {
    PDSCH_Config_ExtGroup1_Mcs_TableDCI_1_2_r16_qam256 = 0, /**< ASN.1 qam256 */
    PDSCH_Config_ExtGroup1_Mcs_TableDCI_1_2_r16_qam64LowSE = 1, /**< ASN.1 qam64LowSE */
} PDSCH_Config_ExtGroup1_Mcs_TableDCI_1_2_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16_BundleSize_r16（ASN.1 prb-BundlingTypeDCI-1-2-r16/staticBundling-r16/bundleSize-r16，源文件第 9464 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16_BundleSize_r16 {
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16_BundleSize_r16_n4 = 0, /**< ASN.1 n4 */
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16_BundleSize_r16_wideband = 1, /**< ASN.1 wideband */
} PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16_BundleSize_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet1_r16（ASN.1 prb-BundlingTypeDCI-1-2-r16/dynamicBundling-r16/bundleSizeSet1-r16，源文件第 9467 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet1_r16 {
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet1_r16_n4 = 0, /**< ASN.1 n4 */
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet1_r16_wideband = 1, /**< ASN.1 wideband */
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet1_r16_n2_wideband = 2, /**< ASN.1 n2-wideband */
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet1_r16_n4_wideband = 3, /**< ASN.1 n4-wideband */
} PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet1_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet2_r16（ASN.1 prb-BundlingTypeDCI-1-2-r16/dynamicBundling-r16/bundleSizeSet2-r16，源文件第 9468 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet2_r16 {
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet2_r16_n4 = 0, /**< ASN.1 n4 */
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet2_r16_wideband = 1, /**< ASN.1 wideband */
} PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet2_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_2_r16（ASN.1 priorityIndicatorDCI-1-2-r16，源文件第 9471 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_2_r16 {
    PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_2_r16_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_2_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_1_2_r16（ASN.1 resourceAllocationType1GranularityDCI-1-2-r16，源文件第 9474 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_1_2_r16 {
    PDSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_1_2_r16_n2 = 0, /**< ASN.1 n2 */
    PDSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_1_2_r16_n4 = 1, /**< ASN.1 n4 */
    PDSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_1_2_r16_n8 = 2, /**< ASN.1 n8 */
    PDSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_1_2_r16_n16 = 3, /**< ASN.1 n16 */
} PDSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_1_2_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_Vrb_ToPRB_InterleaverDCI_1_2_r16（ASN.1 vrb-ToPRB-InterleaverDCI-1-2-r16，源文件第 9475 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_Vrb_ToPRB_InterleaverDCI_1_2_r16 {
    PDSCH_Config_ExtGroup1_Vrb_ToPRB_InterleaverDCI_1_2_r16_n2 = 0, /**< ASN.1 n2 */
    PDSCH_Config_ExtGroup1_Vrb_ToPRB_InterleaverDCI_1_2_r16_n4 = 1, /**< ASN.1 n4 */
} PDSCH_Config_ExtGroup1_Vrb_ToPRB_InterleaverDCI_1_2_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_ReferenceOfSLIVDCI_1_2_r16（ASN.1 referenceOfSLIVDCI-1-2-r16，源文件第 9476 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_ReferenceOfSLIVDCI_1_2_r16 {
    PDSCH_Config_ExtGroup1_ReferenceOfSLIVDCI_1_2_r16_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup1_ReferenceOfSLIVDCI_1_2_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_ResourceAllocationDCI_1_2_r16（ASN.1 resourceAllocationDCI-1-2-r16，源文件第 9477 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_ResourceAllocationDCI_1_2_r16 {
    PDSCH_Config_ExtGroup1_ResourceAllocationDCI_1_2_r16_resourceAllocationType0 = 0, /**< ASN.1 resourceAllocationType0 */
    PDSCH_Config_ExtGroup1_ResourceAllocationDCI_1_2_r16_resourceAllocationType1 = 1, /**< ASN.1 resourceAllocationType1 */
    PDSCH_Config_ExtGroup1_ResourceAllocationDCI_1_2_r16_dynamicSwitch = 2, /**< ASN.1 dynamicSwitch */
} PDSCH_Config_ExtGroup1_ResourceAllocationDCI_1_2_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_1_r16（ASN.1 priorityIndicatorDCI-1-1-r16，源文件第 9481 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_1_r16 {
    PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_1_r16_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_1_r16;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17（ASN.1 pdsch-HARQ-ACK-OneShotFeedbackDCI-1-2-r17，源文件第 9490 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17 {
    PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_1_2_r17（ASN.1 pdsch-HARQ-ACK-EnhType3DCI-1-2-r17，源文件第 9491 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_1_2_r17 {
    PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_1_2_r17_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_1_2_r17;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17（ASN.1 pdsch-HARQ-ACK-EnhType3DCI-Field-1-2-r17，源文件第 9492 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17 {
    PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_RetxDCI_1_2_r17（ASN.1 pdsch-HARQ-ACK-RetxDCI-1-2-r17，源文件第 9493 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_RetxDCI_1_2_r17 {
    PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_RetxDCI_1_2_r17_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_RetxDCI_1_2_r17;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_Pucch_sSCellDynDCI_1_2_r17（ASN.1 pucch-sSCellDynDCI-1-2-r17，源文件第 9494 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_Pucch_sSCellDynDCI_1_2_r17 {
    PDSCH_Config_ExtGroup3_Pucch_sSCellDynDCI_1_2_r17_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup3_Pucch_sSCellDynDCI_1_2_r17;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_BeamAppTime_r17（ASN.1 beamAppTime-r17，源文件第 9504 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_BeamAppTime_r17 {
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n1 = 0, /**< ASN.1 n1 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n2 = 1, /**< ASN.1 n2 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n4 = 2, /**< ASN.1 n4 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n7 = 3, /**< ASN.1 n7 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n14 = 4, /**< ASN.1 n14 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n28 = 5, /**< ASN.1 n28 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n42 = 6, /**< ASN.1 n42 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n56 = 7, /**< ASN.1 n56 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n70 = 8, /**< ASN.1 n70 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n84 = 9, /**< ASN.1 n84 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n98 = 10, /**< ASN.1 n98 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n112 = 11, /**< ASN.1 n112 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n224 = 12, /**< ASN.1 n224 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_n336 = 13, /**< ASN.1 n336 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_spare2 = 14, /**< ASN.1 spare2 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17_spare1 = 15, /**< ASN.1 spare1 */
} PDSCH_Config_ExtGroup3_BeamAppTime_r17;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_Dmrs_FD_OCC_DisabledForRank1_PDSCH_r17（ASN.1 dmrs-FD-OCC-DisabledForRank1-PDSCH-r17，源文件第 9507 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_Dmrs_FD_OCC_DisabledForRank1_PDSCH_r17 {
    PDSCH_Config_ExtGroup3_Dmrs_FD_OCC_DisabledForRank1_PDSCH_r17_trueVal = 0, /**< ASN.1 trueVal */
} PDSCH_Config_ExtGroup3_Dmrs_FD_OCC_DisabledForRank1_PDSCH_r17;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_Mcs_Table_r17（ASN.1 mcs-Table-r17，源文件第 9511 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_Mcs_Table_r17 {
    PDSCH_Config_ExtGroup3_Mcs_Table_r17_qam1024 = 0, /**< ASN.1 qam1024 */
} PDSCH_Config_ExtGroup3_Mcs_Table_r17;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_Mcs_TableDCI_1_2_r17（ASN.1 mcs-TableDCI-1-2-r17，源文件第 9512 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_Mcs_TableDCI_1_2_r17 {
    PDSCH_Config_ExtGroup3_Mcs_TableDCI_1_2_r17_qam1024 = 0, /**< ASN.1 qam1024 */
} PDSCH_Config_ExtGroup3_Mcs_TableDCI_1_2_r17;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_XOverheadMulticast_r17（ASN.1 xOverheadMulticast-r17，源文件第 9513 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_XOverheadMulticast_r17 {
    PDSCH_Config_ExtGroup3_XOverheadMulticast_r17_xOh6 = 0, /**< ASN.1 xOh6 */
    PDSCH_Config_ExtGroup3_XOverheadMulticast_r17_xOh12 = 1, /**< ASN.1 xOh12 */
    PDSCH_Config_ExtGroup3_XOverheadMulticast_r17_xOh18 = 2, /**< ASN.1 xOh18 */
} PDSCH_Config_ExtGroup3_XOverheadMulticast_r17;


/**
 * @brief 枚举 PDSCH_Config_ExtGroup3_PriorityIndicatorDCI_4_2_r17（ASN.1 priorityIndicatorDCI-4-2-r17，源文件第 9514 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_Config_ExtGroup3_PriorityIndicatorDCI_4_2_r17 {
    PDSCH_Config_ExtGroup3_PriorityIndicatorDCI_4_2_r17_enabled = 0, /**< ASN.1 enabled */
} PDSCH_Config_ExtGroup3_PriorityIndicatorDCI_4_2_r17;


/**
 * @brief 枚举 PDSCH_ConfigDCI_1_3_r18_ResourceAllocationDCI_1_3_r18（ASN.1 resourceAllocationDCI-1-3-r18，源文件第 9538 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_ConfigDCI_1_3_r18_ResourceAllocationDCI_1_3_r18 {
    PDSCH_ConfigDCI_1_3_r18_ResourceAllocationDCI_1_3_r18_resourceAllocationType0 = 0, /**< ASN.1 resourceAllocationType0 */
    PDSCH_ConfigDCI_1_3_r18_ResourceAllocationDCI_1_3_r18_resourceAllocationType1 = 1, /**< ASN.1 resourceAllocationType1 */
    PDSCH_ConfigDCI_1_3_r18_ResourceAllocationDCI_1_3_r18_dynamicSwitch = 2, /**< ASN.1 dynamicSwitch */
} PDSCH_ConfigDCI_1_3_r18_ResourceAllocationDCI_1_3_r18;


/**
 * @brief 枚举 PDSCH_ConfigDCI_1_3_r18_Rbg_SizeDCI_1_3_r18（ASN.1 rbg-SizeDCI-1-3-r18，源文件第 9540 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_ConfigDCI_1_3_r18_Rbg_SizeDCI_1_3_r18 {
    PDSCH_ConfigDCI_1_3_r18_Rbg_SizeDCI_1_3_r18_config1 = 0, /**< ASN.1 config1 */
    PDSCH_ConfigDCI_1_3_r18_Rbg_SizeDCI_1_3_r18_config2 = 1, /**< ASN.1 config2 */
    PDSCH_ConfigDCI_1_3_r18_Rbg_SizeDCI_1_3_r18_config3 = 2, /**< ASN.1 config3 */
    PDSCH_ConfigDCI_1_3_r18_Rbg_SizeDCI_1_3_r18_spare1 = 3, /**< ASN.1 spare1 */
} PDSCH_ConfigDCI_1_3_r18_Rbg_SizeDCI_1_3_r18;


/**
 * @brief 枚举 PDSCH_ConfigDCI_1_3_r18_ResourceAllocationType1GranularityDCI_1_3_r18（ASN.1 resourceAllocationType1GranularityDCI-1-3-r18，源文件第 9541 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_ConfigDCI_1_3_r18_ResourceAllocationType1GranularityDCI_1_3_r18 {
    PDSCH_ConfigDCI_1_3_r18_ResourceAllocationType1GranularityDCI_1_3_r18_n2 = 0, /**< ASN.1 n2 */
    PDSCH_ConfigDCI_1_3_r18_ResourceAllocationType1GranularityDCI_1_3_r18_n4 = 1, /**< ASN.1 n4 */
    PDSCH_ConfigDCI_1_3_r18_ResourceAllocationType1GranularityDCI_1_3_r18_n8 = 2, /**< ASN.1 n8 */
    PDSCH_ConfigDCI_1_3_r18_ResourceAllocationType1GranularityDCI_1_3_r18_n16 = 3, /**< ASN.1 n16 */
} PDSCH_ConfigDCI_1_3_r18_ResourceAllocationType1GranularityDCI_1_3_r18;


/**
 * @brief 枚举 PDSCH_ServingCellConfig_XOverhead（ASN.1 xOverhead，源文件第 9559 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_ServingCellConfig_XOverhead {
    PDSCH_ServingCellConfig_XOverhead_xOh6 = 0, /**< ASN.1 xOh6 */
    PDSCH_ServingCellConfig_XOverhead_xOh12 = 1, /**< ASN.1 xOh12 */
    PDSCH_ServingCellConfig_XOverhead_xOh18 = 2, /**< ASN.1 xOh18 */
} PDSCH_ServingCellConfig_XOverhead;


/**
 * @brief 枚举 PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH（ASN.1 nrofHARQ-ProcessesForPDSCH，源文件第 9560 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH {
    PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH_n2 = 0, /**< ASN.1 n2 */
    PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH_n4 = 1, /**< ASN.1 n4 */
    PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH_n6 = 2, /**< ASN.1 n6 */
    PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH_n10 = 3, /**< ASN.1 n10 */
    PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH_n12 = 4, /**< ASN.1 n12 */
    PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH_n16 = 5, /**< ASN.1 n16 */
} PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH;


/**
 * @brief 枚举 PDSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPDSCH_v1700（ASN.1 nrofHARQ-ProcessesForPDSCH-v1700，源文件第 9572 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPDSCH_v1700 {
    PDSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPDSCH_v1700_n32 = 0, /**< ASN.1 n32 */
} PDSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPDSCH_v1700;


/**
 * @brief 枚举 PDSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock（ASN.1 maxCodeBlockGroupsPerTransportBlock，源文件第 9577 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock {
    PDSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock_n2 = 0, /**< ASN.1 n2 */
    PDSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock_n4 = 1, /**< ASN.1 n4 */
    PDSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock_n6 = 2, /**< ASN.1 n6 */
    PDSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock_n8 = 3, /**< ASN.1 n8 */
} PDSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock;


/**
 * @brief 枚举 PDSCH_TimeDomainResourceAllocation_MappingType（ASN.1 mappingType，源文件第 9594 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_TimeDomainResourceAllocation_MappingType {
    PDSCH_TimeDomainResourceAllocation_MappingType_typeA = 0, /**< ASN.1 typeA */
    PDSCH_TimeDomainResourceAllocation_MappingType_typeB = 1, /**< ASN.1 typeB */
} PDSCH_TimeDomainResourceAllocation_MappingType;


/**
 * @brief 枚举 PDSCH_TimeDomainResourceAllocation_r16_MappingType_r16（ASN.1 mappingType-r16，源文件第 9602 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_TimeDomainResourceAllocation_r16_MappingType_r16 {
    PDSCH_TimeDomainResourceAllocation_r16_MappingType_r16_typeA = 0, /**< ASN.1 typeA */
    PDSCH_TimeDomainResourceAllocation_r16_MappingType_r16_typeB = 1, /**< ASN.1 typeB */
} PDSCH_TimeDomainResourceAllocation_r16_MappingType_r16;


/**
 * @brief 枚举 PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16（ASN.1 repetitionNumber-r16，源文件第 9604 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16 {
    PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16_n2 = 0, /**< ASN.1 n2 */
    PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16_n3 = 1, /**< ASN.1 n3 */
    PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16_n4 = 2, /**< ASN.1 n4 */
    PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16_n5 = 3, /**< ASN.1 n5 */
    PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16_n6 = 4, /**< ASN.1 n6 */
    PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16_n7 = 5, /**< ASN.1 n7 */
    PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16_n8 = 6, /**< ASN.1 n8 */
    PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16_n16 = 7, /**< ASN.1 n16 */
} PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16;


/**
 * @brief 枚举 PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730（ASN.1 repetitionNumber-v1730，源文件第 9610 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730 {
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730_n2 = 0, /**< ASN.1 n2 */
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730_n3 = 1, /**< ASN.1 n3 */
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730_n4 = 2, /**< ASN.1 n4 */
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730_n5 = 3, /**< ASN.1 n5 */
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730_n6 = 4, /**< ASN.1 n6 */
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730_n7 = 5, /**< ASN.1 n7 */
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730_n8 = 6, /**< ASN.1 n8 */
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730_n16 = 7, /**< ASN.1 n16 */
} PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730;


/**
 * @brief 枚举 PHR_Config_Phr_PeriodicTimer（ASN.1 phr-PeriodicTimer，源文件第 9632 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PHR_Config_Phr_PeriodicTimer {
    PHR_Config_Phr_PeriodicTimer_sf10 = 0, /**< ASN.1 sf10 */
    PHR_Config_Phr_PeriodicTimer_sf20 = 1, /**< ASN.1 sf20 */
    PHR_Config_Phr_PeriodicTimer_sf50 = 2, /**< ASN.1 sf50 */
    PHR_Config_Phr_PeriodicTimer_sf100 = 3, /**< ASN.1 sf100 */
    PHR_Config_Phr_PeriodicTimer_sf200 = 4, /**< ASN.1 sf200 */
    PHR_Config_Phr_PeriodicTimer_sf500 = 5, /**< ASN.1 sf500 */
    PHR_Config_Phr_PeriodicTimer_sf1000 = 6, /**< ASN.1 sf1000 */
    PHR_Config_Phr_PeriodicTimer_infinity = 7, /**< ASN.1 infinity */
} PHR_Config_Phr_PeriodicTimer;


/**
 * @brief 枚举 PHR_Config_Phr_ProhibitTimer（ASN.1 phr-ProhibitTimer，源文件第 9633 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PHR_Config_Phr_ProhibitTimer {
    PHR_Config_Phr_ProhibitTimer_sf0 = 0, /**< ASN.1 sf0 */
    PHR_Config_Phr_ProhibitTimer_sf10 = 1, /**< ASN.1 sf10 */
    PHR_Config_Phr_ProhibitTimer_sf20 = 2, /**< ASN.1 sf20 */
    PHR_Config_Phr_ProhibitTimer_sf50 = 3, /**< ASN.1 sf50 */
    PHR_Config_Phr_ProhibitTimer_sf100 = 4, /**< ASN.1 sf100 */
    PHR_Config_Phr_ProhibitTimer_sf200 = 5, /**< ASN.1 sf200 */
    PHR_Config_Phr_ProhibitTimer_sf500 = 6, /**< ASN.1 sf500 */
    PHR_Config_Phr_ProhibitTimer_sf1000 = 7, /**< ASN.1 sf1000 */
} PHR_Config_Phr_ProhibitTimer;


/**
 * @brief 枚举 PHR_Config_Phr_Tx_PowerFactorChange（ASN.1 phr-Tx-PowerFactorChange，源文件第 9634 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PHR_Config_Phr_Tx_PowerFactorChange {
    PHR_Config_Phr_Tx_PowerFactorChange_dB1 = 0, /**< ASN.1 dB1 */
    PHR_Config_Phr_Tx_PowerFactorChange_dB3 = 1, /**< ASN.1 dB3 */
    PHR_Config_Phr_Tx_PowerFactorChange_dB6 = 2, /**< ASN.1 dB6 */
    PHR_Config_Phr_Tx_PowerFactorChange_infinity = 3, /**< ASN.1 infinity */
} PHR_Config_Phr_Tx_PowerFactorChange;


/**
 * @brief 枚举 PHR_Config_Phr_ModeOtherCG（ASN.1 phr-ModeOtherCG，源文件第 9638 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PHR_Config_Phr_ModeOtherCG {
    PHR_Config_Phr_ModeOtherCG_real = 0, /**< ASN.1 real */
    PHR_Config_Phr_ModeOtherCG_virtual_ = 1, /**< ASN.1 virtual */
} PHR_Config_Phr_ModeOtherCG;


/**
 * @brief 枚举 PHR_Config_ExtGroup2_TwoPHRMode_r17（ASN.1 twoPHRMode-r17，源文件第 9645 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PHR_Config_ExtGroup2_TwoPHRMode_r17 {
    PHR_Config_ExtGroup2_TwoPHRMode_r17_enabled = 0, /**< ASN.1 enabled */
} PHR_Config_ExtGroup2_TwoPHRMode_r17;


/**
 * @brief 枚举 PHR_Config_ExtGroup3_Phr_AssumedPUSCH_Reporting_r18（ASN.1 phr-AssumedPUSCH-Reporting-r18，源文件第 9648 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PHR_Config_ExtGroup3_Phr_AssumedPUSCH_Reporting_r18 {
    PHR_Config_ExtGroup3_Phr_AssumedPUSCH_Reporting_r18_enabled = 0, /**< ASN.1 enabled */
} PHR_Config_ExtGroup3_Phr_AssumedPUSCH_Reporting_r18;


/**
 * @brief 枚举 PHR_Config_ExtGroup3_Dpc_Reporting_FR1_r18（ASN.1 dpc-Reporting-FR1-r18，源文件第 9649 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PHR_Config_ExtGroup3_Dpc_Reporting_FR1_r18 {
    PHR_Config_ExtGroup3_Dpc_Reporting_FR1_r18_enabled = 0, /**< ASN.1 enabled */
} PHR_Config_ExtGroup3_Dpc_Reporting_FR1_r18;


/**
 * @brief 枚举 MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16（ASN.1 mpe-ProhibitTimer-r16，源文件第 9654 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16 {
    MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16_sf0 = 0, /**< ASN.1 sf0 */
    MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16_sf10 = 1, /**< ASN.1 sf10 */
    MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16_sf20 = 2, /**< ASN.1 sf20 */
    MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16_sf50 = 3, /**< ASN.1 sf50 */
    MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16_sf100 = 4, /**< ASN.1 sf100 */
    MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16_sf200 = 5, /**< ASN.1 sf200 */
    MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16_sf500 = 6, /**< ASN.1 sf500 */
    MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16_sf1000 = 7, /**< ASN.1 sf1000 */
} MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16;


/**
 * @brief 枚举 MPE_Config_FR2_r16_Mpe_Threshold_r16（ASN.1 mpe-Threshold-r16，源文件第 9655 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MPE_Config_FR2_r16_Mpe_Threshold_r16 {
    MPE_Config_FR2_r16_Mpe_Threshold_r16_dB3 = 0, /**< ASN.1 dB3 */
    MPE_Config_FR2_r16_Mpe_Threshold_r16_dB6 = 1, /**< ASN.1 dB6 */
    MPE_Config_FR2_r16_Mpe_Threshold_r16_dB9 = 2, /**< ASN.1 dB9 */
    MPE_Config_FR2_r16_Mpe_Threshold_r16_dB12 = 3, /**< ASN.1 dB12 */
} MPE_Config_FR2_r16_Mpe_Threshold_r16;


/**
 * @brief 枚举 MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17（ASN.1 mpe-ProhibitTimer-r17，源文件第 9659 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17 {
    MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17_sf0 = 0, /**< ASN.1 sf0 */
    MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17_sf10 = 1, /**< ASN.1 sf10 */
    MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17_sf20 = 2, /**< ASN.1 sf20 */
    MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17_sf50 = 3, /**< ASN.1 sf50 */
    MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17_sf100 = 4, /**< ASN.1 sf100 */
    MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17_sf200 = 5, /**< ASN.1 sf200 */
    MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17_sf500 = 6, /**< ASN.1 sf500 */
    MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17_sf1000 = 7, /**< ASN.1 sf1000 */
} MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17;


/**
 * @brief 枚举 MPE_Config_FR2_r17_Mpe_Threshold_r17（ASN.1 mpe-Threshold-r17，源文件第 9660 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MPE_Config_FR2_r17_Mpe_Threshold_r17 {
    MPE_Config_FR2_r17_Mpe_Threshold_r17_dB3 = 0, /**< ASN.1 dB3 */
    MPE_Config_FR2_r17_Mpe_Threshold_r17_dB6 = 1, /**< ASN.1 dB6 */
    MPE_Config_FR2_r17_Mpe_Threshold_r17_dB9 = 2, /**< ASN.1 dB9 */
    MPE_Config_FR2_r17_Mpe_Threshold_r17_dB12 = 3, /**< ASN.1 dB12 */
} MPE_Config_FR2_r17_Mpe_Threshold_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUCCH（ASN.1 harq-ACK-SpatialBundlingPUCCH，源文件第 9674 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUCCH {
    PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUCCH_trueVal = 0, /**< ASN.1 trueVal */
} PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUCCH;


/**
 * @brief 枚举 PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUSCH（ASN.1 harq-ACK-SpatialBundlingPUSCH，源文件第 9675 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUSCH {
    PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUSCH_trueVal = 0, /**< ASN.1 trueVal */
} PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUSCH;


/**
 * @brief 枚举 PhysicalCellGroupConfig_Pdsch_HARQ_ACK_Codebook（ASN.1 pdsch-HARQ-ACK-Codebook，源文件第 9677 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_Pdsch_HARQ_ACK_Codebook {
    PhysicalCellGroupConfig_Pdsch_HARQ_ACK_Codebook_semiStatic = 0, /**< ASN.1 semiStatic */
    PhysicalCellGroupConfig_Pdsch_HARQ_ACK_Codebook_dynamic = 1, /**< ASN.1 dynamic */
} PhysicalCellGroupConfig_Pdsch_HARQ_ACK_Codebook;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup2_XScale（ASN.1 xScale，源文件第 9689 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup2_XScale {
    PhysicalCellGroupConfig_ExtGroup2_XScale_dB0 = 0, /**< ASN.1 dB0 */
    PhysicalCellGroupConfig_ExtGroup2_XScale_dB6 = 1, /**< ASN.1 dB6 */
    PhysicalCellGroupConfig_ExtGroup2_XScale_spare2 = 2, /**< ASN.1 spare2 */
    PhysicalCellGroupConfig_ExtGroup2_XScale_spare1 = 3, /**< ASN.1 spare1 */
} PhysicalCellGroupConfig_ExtGroup2_XScale;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16（ASN.1 harq-ACK-SpatialBundlingPUCCH-secondaryPUCCHgroup-r16，源文件第 9696 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16_enabled = 0, /**< ASN.1 enabled */
    PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16_disabled = 1, /**< ASN.1 disabled */
} PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16（ASN.1 harq-ACK-SpatialBundlingPUSCH-secondaryPUCCHgroup-r16，源文件第 9697 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16_enabled = 0, /**< ASN.1 enabled */
    PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16_disabled = 1, /**< ASN.1 disabled */
} PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16（ASN.1 pdsch-HARQ-ACK-Codebook-secondaryPUCCHgroup-r16，源文件第 9698 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16_semiStatic = 0, /**< ASN.1 semiStatic */
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16_dynamic = 1, /**< ASN.1 dynamic */
} PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR1_r16（ASN.1 nrdc-PCmode-FR1-r16，源文件第 9701 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR1_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR1_r16_semi_static_mode1 = 0, /**< ASN.1 semi-static-mode1 */
    PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR1_r16_semi_static_mode2 = 1, /**< ASN.1 semi-static-mode2 */
    PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR1_r16_dynamic = 2, /**< ASN.1 dynamic */
} PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR1_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR2_r16（ASN.1 nrdc-PCmode-FR2-r16，源文件第 9702 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR2_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR2_r16_semi_static_mode1 = 0, /**< ASN.1 semi-static-mode1 */
    PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR2_r16_semi_static_mode2 = 1, /**< ASN.1 semi-static-mode2 */
    PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR2_r16_dynamic = 2, /**< ASN.1 dynamic */
} PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR2_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_r16（ASN.1 pdsch-HARQ-ACK-Codebook-r16，源文件第 9703 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_r16_enhancedDynamic = 0, /**< ASN.1 enhancedDynamic */
} PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Nfi_TotalDAI_Included_r16（ASN.1 nfi-TotalDAI-Included-r16，源文件第 9704 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Nfi_TotalDAI_Included_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Nfi_TotalDAI_Included_r16_trueVal = 0, /**< ASN.1 trueVal */
} PhysicalCellGroupConfig_ExtGroup4_Nfi_TotalDAI_Included_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Ul_TotalDAI_Included_r16（ASN.1 ul-TotalDAI-Included-r16，源文件第 9705 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Ul_TotalDAI_Included_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Ul_TotalDAI_Included_r16_trueVal = 0, /**< ASN.1 trueVal */
} PhysicalCellGroupConfig_ExtGroup4_Ul_TotalDAI_Included_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedback_r16（ASN.1 pdsch-HARQ-ACK-OneShotFeedback-r16，源文件第 9706 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedback_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedback_r16_trueVal = 0, /**< ASN.1 trueVal */
} PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedback_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackNDI_r16（ASN.1 pdsch-HARQ-ACK-OneShotFeedbackNDI-r16，源文件第 9707 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackNDI_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackNDI_r16_trueVal = 0, /**< ASN.1 trueVal */
} PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackNDI_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackCBG_r16（ASN.1 pdsch-HARQ-ACK-OneShotFeedbackCBG-r16，源文件第 9708 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackCBG_r16 {
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackCBG_r16_trueVal = 0, /**< ASN.1 trueVal */
} PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackCBG_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_0_2_r16（ASN.1 downlinkAssignmentIndexDCI-0-2-r16，源文件第 9709 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_0_2_r16 {
    PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_0_2_r16_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_0_2_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_1_2_r16（ASN.1 downlinkAssignmentIndexDCI-1-2-r16，源文件第 9710 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_1_2_r16 {
    PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_1_2_r16_n1 = 0, /**< ASN.1 n1 */
    PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_1_2_r16_n2 = 1, /**< ASN.1 n2 */
    PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_1_2_r16_n4 = 2, /**< ASN.1 n4 */
} PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_1_2_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_AckNackFeedbackMode_r16（ASN.1 ackNackFeedbackMode-r16，源文件第 9712 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_AckNackFeedbackMode_r16 {
    PhysicalCellGroupConfig_ExtGroup4_AckNackFeedbackMode_r16_joint = 0, /**< ASN.1 joint */
    PhysicalCellGroupConfig_ExtGroup4_AckNackFeedbackMode_r16_separate = 1, /**< ASN.1 separate */
} PhysicalCellGroupConfig_ExtGroup4_AckNackFeedbackMode_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup4_BdFactorR_r16（ASN.1 bdFactorR-r16，源文件第 9716 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup4_BdFactorR_r16 {
    PhysicalCellGroupConfig_ExtGroup4_BdFactorR_r16_n1 = 0, /**< ASN.1 n1 */
} PhysicalCellGroupConfig_ExtGroup4_BdFactorR_r16;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17（ASN.1 pdsch-HARQ-ACK-EnhType3DCI-FieldSecondaryPUCCHgroup-r17，源文件第 9728 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17 {
    PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_Field_r17（ASN.1 pdsch-HARQ-ACK-EnhType3DCI-Field-r17，源文件第 9729 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_Field_r17 {
    PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_Field_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_Field_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_Retx_r17（ASN.1 pdsch-HARQ-ACK-Retx-r17，源文件第 9733 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_Retx_r17 {
    PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_Retx_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_Retx_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17（ASN.1 pdsch-HARQ-ACK-RetxSecondaryPUCCHgroup-r17，源文件第 9734 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17 {
    PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDyn_r17（ASN.1 pucch-sSCellDyn-r17，源文件第 9740 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDyn_r17 {
    PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDyn_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDyn_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDynSecondaryPUCCHgroup_r17（ASN.1 pucch-sSCellDynSecondaryPUCCHgroup-r17，源文件第 9741 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDynSecondaryPUCCHgroup_r17 {
    PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDynSecondaryPUCCHgroup_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDynSecondaryPUCCHgroup_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrio_r17（ASN.1 uci-MuxWithDiffPrio-r17，源文件第 9746 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrio_r17 {
    PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrio_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrio_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17（ASN.1 uci-MuxWithDiffPrioSecondaryPUCCHgroup-r17，源文件第 9747 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17 {
    PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_r17（ASN.1 simultaneousPUCCH-PUSCH-r17，源文件第 9748 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_r17 {
    PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17（ASN.1 simultaneousPUCCH-PUSCH-SecondaryPUCCHgroup-r17，源文件第 9749 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17 {
    PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_PrioLowDG_HighCG_r17（ASN.1 prioLowDG-HighCG-r17，源文件第 9751 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_PrioLowDG_HighCG_r17 {
    PhysicalCellGroupConfig_ExtGroup5_PrioLowDG_HighCG_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_PrioLowDG_HighCG_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_PrioHighDG_LowCG_r17（ASN.1 prioHighDG-LowCG-r17，源文件第 9752 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_PrioHighDG_LowCG_r17 {
    PhysicalCellGroupConfig_ExtGroup5_PrioHighDG_LowCG_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_PrioHighDG_LowCG_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup5_TwoQCLTypeDforPDCCHRepetition_r17（ASN.1 twoQCLTypeDforPDCCHRepetition-r17，源文件第 9753 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup5_TwoQCLTypeDforPDCCHRepetition_r17 {
    PhysicalCellGroupConfig_ExtGroup5_TwoQCLTypeDforPDCCHRepetition_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup5_TwoQCLTypeDforPDCCHRepetition_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup6_SimultaneousSR_PUSCH_diffPUCCH_Groups_r17（ASN.1 simultaneousSR-PUSCH-diffPUCCH-Groups-r17，源文件第 9758 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup6_SimultaneousSR_PUSCH_diffPUCCH_Groups_r17 {
    PhysicalCellGroupConfig_ExtGroup6_SimultaneousSR_PUSCH_diffPUCCH_Groups_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup6_SimultaneousSR_PUSCH_diffPUCCH_Groups_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup7_IntraBandNC_PRACH_simulTx_r17（ASN.1 intraBandNC-PRACH-simulTx-r17，源文件第 9761 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup7_IntraBandNC_PRACH_simulTx_r17 {
    PhysicalCellGroupConfig_ExtGroup7_IntraBandNC_PRACH_simulTx_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup7_IntraBandNC_PRACH_simulTx_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_r17（ASN.1 simultaneousPUCCH-PUSCH-SamePriority-r17，源文件第 9767 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_r17 {
    PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17（ASN.1 simultaneousPUCCH-PUSCH-SamePriority-SecondaryPUCCHgroup-r17，源文件第 9768 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17 {
    PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup10_TwoQCL_TypeD_ForMultiDCI_r18（ASN.1 twoQCL-TypeD-ForMultiDCI-r18，源文件第 9773 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup10_TwoQCL_TypeD_ForMultiDCI_r18 {
    PhysicalCellGroupConfig_ExtGroup10_TwoQCL_TypeD_ForMultiDCI_r18_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup10_TwoQCL_TypeD_ForMultiDCI_r18;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup10_EnableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18（ASN.1 enableType1HARQ-ACK-MuxForDL-AssignmentAfterUL-Grant-r18，源文件第 9774 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup10_EnableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18 {
    PhysicalCellGroupConfig_ExtGroup10_EnableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup10_EnableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup10_EnableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18（ASN.1 enableType2HARQ-ACK-MuxForDL-AssignmentAfterUL-Grant-r18，源文件第 9775 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup10_EnableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18 {
    PhysicalCellGroupConfig_ExtGroup10_EnableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup10_EnableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup10_EnableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18（ASN.1 enableType3HARQ-ACK-MuxForDL-AssignmentAfterUL-Grant-r18，源文件第 9776 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup10_EnableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18 {
    PhysicalCellGroupConfig_ExtGroup10_EnableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup10_EnableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup10_EnableDiffPUCCH_Resource_r18（ASN.1 enableDiffPUCCH-Resource-r18，源文件第 9777 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup10_EnableDiffPUCCH_Resource_r18 {
    PhysicalCellGroupConfig_ExtGroup10_EnableDiffPUCCH_Resource_r18_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup10_EnableDiffPUCCH_Resource_r18;


/**
 * @brief 枚举 PhysicalCellGroupConfig_ExtGroup10_EnableDiffCB_Size_r18（ASN.1 enableDiffCB-Size-r18，源文件第 9778 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PhysicalCellGroupConfig_ExtGroup10_EnableDiffCB_Size_r18 {
    PhysicalCellGroupConfig_ExtGroup10_EnableDiffCB_Size_r18_enabled = 0, /**< ASN.1 enabled */
} PhysicalCellGroupConfig_ExtGroup10_EnableDiffCB_Size_r18;


/**
 * @brief 枚举 PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3NDI_r17（ASN.1 pdsch-HARQ-ACK-EnhType3NDI-r17，源文件第 9788 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3NDI_r17 {
    PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3NDI_r17_trueVal = 0, /**< ASN.1 trueVal */
} PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3NDI_r17;


/**
 * @brief 枚举 PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3CBG_r17（ASN.1 pdsch-HARQ-ACK-EnhType3CBG-r17，源文件第 9789 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3CBG_r17 {
    PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3CBG_r17_trueVal = 0, /**< ASN.1 trueVal */
} PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3CBG_r17;


/**
 * @brief 枚举 DCP_Config_r16_Ps_WakeUp_r16（ASN.1 ps-WakeUp-r16，源文件第 9805 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DCP_Config_r16_Ps_WakeUp_r16 {
    DCP_Config_r16_Ps_WakeUp_r16_trueVal = 0, /**< ASN.1 trueVal */
} DCP_Config_r16_Ps_WakeUp_r16;


/**
 * @brief 枚举 DCP_Config_r16_Ps_TransmitPeriodicL1_RSRP_r16（ASN.1 ps-TransmitPeriodicL1-RSRP-r16，源文件第 9806 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DCP_Config_r16_Ps_TransmitPeriodicL1_RSRP_r16 {
    DCP_Config_r16_Ps_TransmitPeriodicL1_RSRP_r16_trueVal = 0, /**< ASN.1 trueVal */
} DCP_Config_r16_Ps_TransmitPeriodicL1_RSRP_r16;


/**
 * @brief 枚举 DCP_Config_r16_Ps_TransmitOtherPeriodicCSI_r16（ASN.1 ps-TransmitOtherPeriodicCSI-r16，源文件第 9807 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DCP_Config_r16_Ps_TransmitOtherPeriodicCSI_r16 {
    DCP_Config_r16_Ps_TransmitOtherPeriodicCSI_r16_trueVal = 0, /**< ASN.1 trueVal */
} DCP_Config_r16_Ps_TransmitOtherPeriodicCSI_r16;


/**
 * @brief 枚举 PDSCH_HARQ_ACK_CodebookList_r16_Item（ASN.1 Item，源文件第 9810 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDSCH_HARQ_ACK_CodebookList_r16_Item {
    PDSCH_HARQ_ACK_CodebookList_r16_Item_semiStatic = 0, /**< ASN.1 semiStatic */
    PDSCH_HARQ_ACK_CodebookList_r16_Item_dynamic = 1, /**< ASN.1 dynamic */
} PDSCH_HARQ_ACK_CodebookList_r16_Item;


/**
 * @brief 枚举 MulticastConfig_r17_Type1CodebookGenerationMode_r17（ASN.1 type1CodebookGenerationMode-r17，源文件第 9825 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MulticastConfig_r17_Type1CodebookGenerationMode_r17 {
    MulticastConfig_r17_Type1CodebookGenerationMode_r17_mode1 = 0, /**< ASN.1 mode1 */
    MulticastConfig_r17_Type1CodebookGenerationMode_r17_mode2 = 1, /**< ASN.1 mode2 */
} MulticastConfig_r17_Type1CodebookGenerationMode_r17;


/**
 * @brief 枚举 PLMN_IdentityInfo_CellReservedForOperatorUse（ASN.1 cellReservedForOperatorUse，源文件第 9863 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PLMN_IdentityInfo_CellReservedForOperatorUse {
    PLMN_IdentityInfo_CellReservedForOperatorUse_reserved = 0, /**< ASN.1 reserved */
    PLMN_IdentityInfo_CellReservedForOperatorUse_notReserved = 1, /**< ASN.1 notReserved */
} PLMN_IdentityInfo_CellReservedForOperatorUse;


/**
 * @brief 枚举 PLMN_IdentityInfo_ExtGroup1_Iab_Support_r16（ASN.1 iab-Support-r16，源文件第 9866 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PLMN_IdentityInfo_ExtGroup1_Iab_Support_r16 {
    PLMN_IdentityInfo_ExtGroup1_Iab_Support_r16_trueVal = 0, /**< ASN.1 trueVal */
} PLMN_IdentityInfo_ExtGroup1_Iab_Support_r16;


/**
 * @brief 枚举 PLMN_IdentityInfo_ExtGroup3_MobileIAB_Support_r18（ASN.1 mobileIAB-Support-r18，源文件第 9873 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PLMN_IdentityInfo_ExtGroup3_MobileIAB_Support_r18 {
    PLMN_IdentityInfo_ExtGroup3_MobileIAB_Support_r18_trueVal = 0, /**< ASN.1 trueVal */
} PLMN_IdentityInfo_ExtGroup3_MobileIAB_Support_r18;


/**
 * @brief 枚举 PTRS_DownlinkConfig_ResourceElementOffset（ASN.1 resourceElementOffset，源文件第 9893 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PTRS_DownlinkConfig_ResourceElementOffset {
    PTRS_DownlinkConfig_ResourceElementOffset_offset01 = 0, /**< ASN.1 offset01 */
    PTRS_DownlinkConfig_ResourceElementOffset_offset10 = 1, /**< ASN.1 offset10 */
    PTRS_DownlinkConfig_ResourceElementOffset_offset11 = 2, /**< ASN.1 offset11 */
} PTRS_DownlinkConfig_ResourceElementOffset;


/**
 * @brief 枚举 PTRS_DownlinkConfig_ExtGroup1_MaxNrofPorts_r16（ASN.1 maxNrofPorts-r16，源文件第 9896 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PTRS_DownlinkConfig_ExtGroup1_MaxNrofPorts_r16 {
    PTRS_DownlinkConfig_ExtGroup1_MaxNrofPorts_r16_n1 = 0, /**< ASN.1 n1 */
    PTRS_DownlinkConfig_ExtGroup1_MaxNrofPorts_r16_n2 = 1, /**< ASN.1 n2 */
} PTRS_DownlinkConfig_ExtGroup1_MaxNrofPorts_r16;


/**
 * @brief 枚举 PTRS_UplinkConfig_TransformPrecoderDisabled_MaxNrofPorts（ASN.1 transformPrecoderDisabled/maxNrofPorts，源文件第 9908 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PTRS_UplinkConfig_TransformPrecoderDisabled_MaxNrofPorts {
    PTRS_UplinkConfig_TransformPrecoderDisabled_MaxNrofPorts_n1 = 0, /**< ASN.1 n1 */
    PTRS_UplinkConfig_TransformPrecoderDisabled_MaxNrofPorts_n2 = 1, /**< ASN.1 n2 */
} PTRS_UplinkConfig_TransformPrecoderDisabled_MaxNrofPorts;


/**
 * @brief 枚举 PTRS_UplinkConfig_TransformPrecoderDisabled_ResourceElementOffset（ASN.1 transformPrecoderDisabled/resourceElementOffset，源文件第 9909 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PTRS_UplinkConfig_TransformPrecoderDisabled_ResourceElementOffset {
    PTRS_UplinkConfig_TransformPrecoderDisabled_ResourceElementOffset_offset01 = 0, /**< ASN.1 offset01 */
    PTRS_UplinkConfig_TransformPrecoderDisabled_ResourceElementOffset_offset10 = 1, /**< ASN.1 offset10 */
    PTRS_UplinkConfig_TransformPrecoderDisabled_ResourceElementOffset_offset11 = 2, /**< ASN.1 offset11 */
} PTRS_UplinkConfig_TransformPrecoderDisabled_ResourceElementOffset;


/**
 * @brief 枚举 PTRS_UplinkConfig_TransformPrecoderDisabled_Ptrs_Power（ASN.1 transformPrecoderDisabled/ptrs-Power，源文件第 9910 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PTRS_UplinkConfig_TransformPrecoderDisabled_Ptrs_Power {
    PTRS_UplinkConfig_TransformPrecoderDisabled_Ptrs_Power_p00 = 0, /**< ASN.1 p00 */
    PTRS_UplinkConfig_TransformPrecoderDisabled_Ptrs_Power_p01 = 1, /**< ASN.1 p01 */
    PTRS_UplinkConfig_TransformPrecoderDisabled_Ptrs_Power_p10 = 2, /**< ASN.1 p10 */
    PTRS_UplinkConfig_TransformPrecoderDisabled_Ptrs_Power_p11 = 3, /**< ASN.1 p11 */
} PTRS_UplinkConfig_TransformPrecoderDisabled_Ptrs_Power;


/**
 * @brief 枚举 PTRS_UplinkConfig_TransformPrecoderEnabled_TimeDensityTransformPrecoding（ASN.1 transformPrecoderEnabled/timeDensityTransformPrecoding，源文件第 9914 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PTRS_UplinkConfig_TransformPrecoderEnabled_TimeDensityTransformPrecoding {
    PTRS_UplinkConfig_TransformPrecoderEnabled_TimeDensityTransformPrecoding_d2 = 0, /**< ASN.1 d2 */
} PTRS_UplinkConfig_TransformPrecoderEnabled_TimeDensityTransformPrecoding;


/**
 * @brief 枚举 PTRS_UplinkConfig_ExtGroup1_MaxNrofPorts_SDM_r18（ASN.1 maxNrofPorts-SDM-r18，源文件第 9918 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PTRS_UplinkConfig_ExtGroup1_MaxNrofPorts_SDM_r18 {
    PTRS_UplinkConfig_ExtGroup1_MaxNrofPorts_SDM_r18_n1 = 0, /**< ASN.1 n1 */
    PTRS_UplinkConfig_ExtGroup1_MaxNrofPorts_SDM_r18_n2 = 1, /**< ASN.1 n2 */
} PTRS_UplinkConfig_ExtGroup1_MaxNrofPorts_SDM_r18;


/**
 * @brief 枚举 PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_NormalCP_r16（ASN.1 subslotLengthForPUCCH-r16/normalCP-r16，源文件第 9951 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_NormalCP_r16 {
    PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_NormalCP_r16_n2 = 0, /**< ASN.1 n2 */
    PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_NormalCP_r16_n7 = 1, /**< ASN.1 n7 */
} PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_NormalCP_r16;


/**
 * @brief 枚举 PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_ExtendedCP_r16（ASN.1 subslotLengthForPUCCH-r16/extendedCP-r16，源文件第 9952 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_ExtendedCP_r16 {
    PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_ExtendedCP_r16_n2 = 0, /**< ASN.1 n2 */
    PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_ExtendedCP_r16_n6 = 1, /**< ASN.1 n6 */
} PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_ExtendedCP_r16;


/**
 * @brief 枚举 PUCCH_Config_ExtGroup1_Dmrs_UplinkTransformPrecodingPUCCH_r16（ASN.1 dmrs-UplinkTransformPrecodingPUCCH-r16，源文件第 9956 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Config_ExtGroup1_Dmrs_UplinkTransformPrecodingPUCCH_r16 {
    PUCCH_Config_ExtGroup1_Dmrs_UplinkTransformPrecodingPUCCH_r16_enabled = 0, /**< ASN.1 enabled */
} PUCCH_Config_ExtGroup1_Dmrs_UplinkTransformPrecodingPUCCH_r16;


/**
 * @brief 枚举 PUCCH_Config_ExtGroup2_MappingPattern_r17（ASN.1 mappingPattern-r17，源文件第 9979 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Config_ExtGroup2_MappingPattern_r17 {
    PUCCH_Config_ExtGroup2_MappingPattern_r17_cyclicMapping = 0, /**< ASN.1 cyclicMapping */
    PUCCH_Config_ExtGroup2_MappingPattern_r17_sequentialMapping = 1, /**< ASN.1 sequentialMapping */
} PUCCH_Config_ExtGroup2_MappingPattern_r17;


/**
 * @brief 枚举 PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_1_r17（ASN.1 secondTPCFieldDCI-1-1-r17，源文件第 9984 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_1_r17 {
    PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_1_r17_enabled = 0, /**< ASN.1 enabled */
} PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_1_r17;


/**
 * @brief 枚举 PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_2_r17（ASN.1 secondTPCFieldDCI-1-2-r17，源文件第 9985 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_2_r17 {
    PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_2_r17_enabled = 0, /**< ASN.1 enabled */
} PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_2_r17;


/**
 * @brief 枚举 PUCCH_FormatConfig_InterslotFrequencyHopping（ASN.1 interslotFrequencyHopping，源文件第 9999 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_FormatConfig_InterslotFrequencyHopping {
    PUCCH_FormatConfig_InterslotFrequencyHopping_enabled = 0, /**< ASN.1 enabled */
} PUCCH_FormatConfig_InterslotFrequencyHopping;


/**
 * @brief 枚举 PUCCH_FormatConfig_AdditionalDMRS（ASN.1 additionalDMRS，源文件第 10000 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_FormatConfig_AdditionalDMRS {
    PUCCH_FormatConfig_AdditionalDMRS_trueVal = 0, /**< ASN.1 trueVal */
} PUCCH_FormatConfig_AdditionalDMRS;


/**
 * @brief 枚举 PUCCH_FormatConfig_NrofSlots（ASN.1 nrofSlots，源文件第 10002 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_FormatConfig_NrofSlots {
    PUCCH_FormatConfig_NrofSlots_n2 = 0, /**< ASN.1 n2 */
    PUCCH_FormatConfig_NrofSlots_n4 = 1, /**< ASN.1 n4 */
    PUCCH_FormatConfig_NrofSlots_n8 = 2, /**< ASN.1 n8 */
} PUCCH_FormatConfig_NrofSlots;


/**
 * @brief 枚举 PUCCH_FormatConfig_Pi2BPSK（ASN.1 pi2BPSK，源文件第 10003 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_FormatConfig_Pi2BPSK {
    PUCCH_FormatConfig_Pi2BPSK_enabled = 0, /**< ASN.1 enabled */
} PUCCH_FormatConfig_Pi2BPSK;


/**
 * @brief 枚举 PUCCH_FormatConfig_SimultaneousHARQ_ACK_CSI（ASN.1 simultaneousHARQ-ACK-CSI，源文件第 10004 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_FormatConfig_SimultaneousHARQ_ACK_CSI {
    PUCCH_FormatConfig_SimultaneousHARQ_ACK_CSI_trueVal = 0, /**< ASN.1 trueVal */
} PUCCH_FormatConfig_SimultaneousHARQ_ACK_CSI;


/**
 * @brief 枚举 PUCCH_Resource_IntraSlotFrequencyHopping（ASN.1 intraSlotFrequencyHopping，源文件第 10026 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_Resource_IntraSlotFrequencyHopping {
    PUCCH_Resource_IntraSlotFrequencyHopping_enabled = 0, /**< ASN.1 enabled */
} PUCCH_Resource_IntraSlotFrequencyHopping;


/**
 * @brief 枚举 PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Length_v1610（ASN.1 format-v1610/occ-v1610/occ-Length-v1610，源文件第 10048 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Length_v1610 {
    PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Length_v1610_n2 = 0, /**< ASN.1 n2 */
    PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Length_v1610_n4 = 1, /**< ASN.1 n4 */
} PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Length_v1610;


/**
 * @brief 枚举 PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Index_v1610（ASN.1 format-v1610/occ-v1610/occ-Index-v1610，源文件第 10049 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Index_v1610 {
    PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Index_v1610_n0 = 0, /**< ASN.1 n0 */
    PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Index_v1610_n1 = 1, /**< ASN.1 n1 */
    PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Index_v1610_n2 = 2, /**< ASN.1 n2 */
    PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Index_v1610_n3 = 3, /**< ASN.1 n3 */
} PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Index_v1610;


/**
 * @brief 枚举 PUCCH_ResourceExt_v1610_ExtGroup1_Pucch_RepetitionNrofSlots_r17（ASN.1 pucch-RepetitionNrofSlots-r17，源文件第 10057 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_ResourceExt_v1610_ExtGroup1_Pucch_RepetitionNrofSlots_r17 {
    PUCCH_ResourceExt_v1610_ExtGroup1_Pucch_RepetitionNrofSlots_r17_n1 = 0, /**< ASN.1 n1 */
    PUCCH_ResourceExt_v1610_ExtGroup1_Pucch_RepetitionNrofSlots_r17_n2 = 1, /**< ASN.1 n2 */
    PUCCH_ResourceExt_v1610_ExtGroup1_Pucch_RepetitionNrofSlots_r17_n4 = 2, /**< ASN.1 n4 */
    PUCCH_ResourceExt_v1610_ExtGroup1_Pucch_RepetitionNrofSlots_r17_n8 = 3, /**< ASN.1 n8 */
} PUCCH_ResourceExt_v1610_ExtGroup1_Pucch_RepetitionNrofSlots_r17;


/**
 * @brief 枚举 PUCCH_ResourceExt_v1610_ExtGroup2_ApplyIndicatedTCI_State_r18（ASN.1 applyIndicatedTCI-State-r18，源文件第 10060 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_ResourceExt_v1610_ExtGroup2_ApplyIndicatedTCI_State_r18 {
    PUCCH_ResourceExt_v1610_ExtGroup2_ApplyIndicatedTCI_State_r18_first = 0, /**< ASN.1 first */
    PUCCH_ResourceExt_v1610_ExtGroup2_ApplyIndicatedTCI_State_r18_second = 1, /**< ASN.1 second */
    PUCCH_ResourceExt_v1610_ExtGroup2_ApplyIndicatedTCI_State_r18_both = 2, /**< ASN.1 both */
} PUCCH_ResourceExt_v1610_ExtGroup2_ApplyIndicatedTCI_State_r18;


/**
 * @brief 枚举 PUCCH_ResourceExt_v1610_ExtGroup2_MultipanelSFN_Scheme_r18（ASN.1 multipanelSFN-Scheme-r18，源文件第 10061 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_ResourceExt_v1610_ExtGroup2_MultipanelSFN_Scheme_r18 {
    PUCCH_ResourceExt_v1610_ExtGroup2_MultipanelSFN_Scheme_r18_enabled = 0, /**< ASN.1 enabled */
} PUCCH_ResourceExt_v1610_ExtGroup2_MultipanelSFN_Scheme_r18;


/**
 * @brief 枚举 PUCCH_format4_Occ_Length（ASN.1 occ-Length，源文件第 10095 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_format4_Occ_Length {
    PUCCH_format4_Occ_Length_n2 = 0, /**< ASN.1 n2 */
    PUCCH_format4_Occ_Length_n4 = 1, /**< ASN.1 n4 */
} PUCCH_format4_Occ_Length;


/**
 * @brief 枚举 PUCCH_format4_Occ_Index（ASN.1 occ-Index，源文件第 10096 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_format4_Occ_Index {
    PUCCH_format4_Occ_Index_n0 = 0, /**< ASN.1 n0 */
    PUCCH_format4_Occ_Index_n1 = 1, /**< ASN.1 n1 */
    PUCCH_format4_Occ_Index_n2 = 2, /**< ASN.1 n2 */
    PUCCH_format4_Occ_Index_n3 = 3, /**< ASN.1 n3 */
} PUCCH_format4_Occ_Index;


/**
 * @brief 枚举 PUCCH_ConfigCommon_Pucch_GroupHopping（ASN.1 pucch-GroupHopping，源文件第 10131 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_ConfigCommon_Pucch_GroupHopping {
    PUCCH_ConfigCommon_Pucch_GroupHopping_neither = 0, /**< ASN.1 neither */
    PUCCH_ConfigCommon_Pucch_GroupHopping_enable = 1, /**< ASN.1 enable */
    PUCCH_ConfigCommon_Pucch_GroupHopping_disable = 2, /**< ASN.1 disable */
} PUCCH_ConfigCommon_Pucch_GroupHopping;


/**
 * @brief 枚举 PUCCH_ConfigCommon_ExtGroup1_Intra_SlotFH_r17（ASN.1 intra-SlotFH-r17，源文件第 10137 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_ConfigCommon_ExtGroup1_Intra_SlotFH_r17 {
    PUCCH_ConfigCommon_ExtGroup1_Intra_SlotFH_r17_fromLowerEdge = 0, /**< ASN.1 fromLowerEdge */
    PUCCH_ConfigCommon_ExtGroup1_Intra_SlotFH_r17_fromUpperEdge = 1, /**< ASN.1 fromUpperEdge */
} PUCCH_ConfigCommon_ExtGroup1_Intra_SlotFH_r17;


/**
 * @brief 枚举 PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17（ASN.1 additionalPRBOffset-r17，源文件第 10139 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17 {
    PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17_n2 = 0, /**< ASN.1 n2 */
    PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17_n3 = 1, /**< ASN.1 n3 */
    PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17_n4 = 2, /**< ASN.1 n4 */
    PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17_n6 = 3, /**< ASN.1 n6 */
    PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17_n8 = 4, /**< ASN.1 n8 */
    PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17_n9 = 5, /**< ASN.1 n9 */
    PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17_n10 = 6, /**< ASN.1 n10 */
    PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17_n12 = 7, /**< ASN.1 n12 */
} PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17;


/**
 * @brief 枚举 PUCCH_PowerControl_TwoPUCCH_PC_AdjustmentStates（ASN.1 twoPUCCH-PC-AdjustmentStates，源文件第 10176 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_PowerControl_TwoPUCCH_PC_AdjustmentStates {
    PUCCH_PowerControl_TwoPUCCH_PC_AdjustmentStates_twoStates = 0, /**< ASN.1 twoStates */
} PUCCH_PowerControl_TwoPUCCH_PC_AdjustmentStates;


/**
 * @brief 枚举 PUCCH_PowerControlSetInfo_r17_Pucch_ClosedLoopIndex_r17（ASN.1 pucch-ClosedLoopIndex-r17，源文件第 10211 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_PowerControlSetInfo_r17_Pucch_ClosedLoopIndex_r17 {
    PUCCH_PowerControlSetInfo_r17_Pucch_ClosedLoopIndex_r17_i0 = 0, /**< ASN.1 i0 */
    PUCCH_PowerControlSetInfo_r17_Pucch_ClosedLoopIndex_r17_i1 = 1, /**< ASN.1 i1 */
} PUCCH_PowerControlSetInfo_r17_Pucch_ClosedLoopIndex_r17;


/**
 * @brief 枚举 PUCCH_SpatialRelationInfo_ClosedLoopIndex（ASN.1 closedLoopIndex，源文件第 10231 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUCCH_SpatialRelationInfo_ClosedLoopIndex {
    PUCCH_SpatialRelationInfo_ClosedLoopIndex_i0 = 0, /**< ASN.1 i0 */
    PUCCH_SpatialRelationInfo_ClosedLoopIndex_i1 = 1, /**< ASN.1 i1 */
} PUCCH_SpatialRelationInfo_ClosedLoopIndex;


/**
 * @brief 枚举 PUSCH_Config_TxConfig（ASN.1 txConfig，源文件第 10272 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_TxConfig {
    PUSCH_Config_TxConfig_codebook = 0, /**< ASN.1 codebook */
    PUSCH_Config_TxConfig_nonCodebook = 1, /**< ASN.1 nonCodebook */
} PUSCH_Config_TxConfig;


/**
 * @brief 枚举 PUSCH_Config_FrequencyHopping（ASN.1 frequencyHopping，源文件第 10276 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_FrequencyHopping {
    PUSCH_Config_FrequencyHopping_intraSlot = 0, /**< ASN.1 intraSlot */
    PUSCH_Config_FrequencyHopping_interSlot = 1, /**< ASN.1 interSlot */
} PUSCH_Config_FrequencyHopping;


/**
 * @brief 枚举 PUSCH_Config_ResourceAllocation（ASN.1 resourceAllocation，源文件第 10279 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ResourceAllocation {
    PUSCH_Config_ResourceAllocation_resourceAllocationType0 = 0, /**< ASN.1 resourceAllocationType0 */
    PUSCH_Config_ResourceAllocation_resourceAllocationType1 = 1, /**< ASN.1 resourceAllocationType1 */
    PUSCH_Config_ResourceAllocation_dynamicSwitch = 2, /**< ASN.1 dynamicSwitch */
} PUSCH_Config_ResourceAllocation;


/**
 * @brief 枚举 PUSCH_Config_Pusch_AggregationFactor（ASN.1 pusch-AggregationFactor，源文件第 10281 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_Pusch_AggregationFactor {
    PUSCH_Config_Pusch_AggregationFactor_n2 = 0, /**< ASN.1 n2 */
    PUSCH_Config_Pusch_AggregationFactor_n4 = 1, /**< ASN.1 n4 */
    PUSCH_Config_Pusch_AggregationFactor_n8 = 2, /**< ASN.1 n8 */
} PUSCH_Config_Pusch_AggregationFactor;


/**
 * @brief 枚举 PUSCH_Config_Mcs_Table（ASN.1 mcs-Table，源文件第 10282 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_Mcs_Table {
    PUSCH_Config_Mcs_Table_qam256 = 0, /**< ASN.1 qam256 */
    PUSCH_Config_Mcs_Table_qam64LowSE = 1, /**< ASN.1 qam64LowSE */
} PUSCH_Config_Mcs_Table;


/**
 * @brief 枚举 PUSCH_Config_Mcs_TableTransformPrecoder（ASN.1 mcs-TableTransformPrecoder，源文件第 10283 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_Mcs_TableTransformPrecoder {
    PUSCH_Config_Mcs_TableTransformPrecoder_qam256 = 0, /**< ASN.1 qam256 */
    PUSCH_Config_Mcs_TableTransformPrecoder_qam64LowSE = 1, /**< ASN.1 qam64LowSE */
} PUSCH_Config_Mcs_TableTransformPrecoder;


/**
 * @brief 枚举 PUSCH_Config_TransformPrecoder（ASN.1 transformPrecoder，源文件第 10284 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_TransformPrecoder {
    PUSCH_Config_TransformPrecoder_enabled = 0, /**< ASN.1 enabled */
    PUSCH_Config_TransformPrecoder_disabled = 1, /**< ASN.1 disabled */
} PUSCH_Config_TransformPrecoder;


/**
 * @brief 枚举 PUSCH_Config_CodebookSubset（ASN.1 codebookSubset，源文件第 10285 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_CodebookSubset {
    PUSCH_Config_CodebookSubset_fullyAndPartialAndNonCoherent = 0, /**< ASN.1 fullyAndPartialAndNonCoherent */
    PUSCH_Config_CodebookSubset_partialAndNonCoherent = 1, /**< ASN.1 partialAndNonCoherent */
    PUSCH_Config_CodebookSubset_nonCoherent = 2, /**< ASN.1 nonCoherent */
} PUSCH_Config_CodebookSubset;


/**
 * @brief 枚举 PUSCH_Config_Rbg_Size（ASN.1 rbg-Size，源文件第 10288 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_Rbg_Size {
    PUSCH_Config_Rbg_Size_config2 = 0, /**< ASN.1 config2 */
} PUSCH_Config_Rbg_Size;


/**
 * @brief 枚举 PUSCH_Config_Tp_pi2BPSK（ASN.1 tp-pi2BPSK，源文件第 10290 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_Tp_pi2BPSK {
    PUSCH_Config_Tp_pi2BPSK_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_Tp_pi2BPSK;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_0_2_r16（ASN.1 dmrs-SequenceInitializationDCI-0-2-r16，源文件第 10297 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_0_2_r16_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_0_2_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_0_2_r16（ASN.1 antennaPortsFieldPresenceDCI-0-2-r16，源文件第 10299 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_0_2_r16_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_0_2_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeA（ASN.1 frequencyHoppingDCI-0-2-r16/pusch-RepTypeA，源文件第 10303 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeA {
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeA_intraSlot = 0, /**< ASN.1 intraSlot */
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeA_interSlot = 1, /**< ASN.1 interSlot */
} PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeA;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeB（ASN.1 frequencyHoppingDCI-0-2-r16/pusch-RepTypeB，源文件第 10304 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeB {
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeB_interRepetition = 0, /**< ASN.1 interRepetition */
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeB_interSlot = 1, /**< ASN.1 interSlot */
} PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeB;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_CodebookSubsetDCI_0_2_r16（ASN.1 codebookSubsetDCI-0-2-r16，源文件第 10307 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_CodebookSubsetDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_CodebookSubsetDCI_0_2_r16_fullyAndPartialAndNonCoherent = 0, /**< ASN.1 fullyAndPartialAndNonCoherent */
    PUSCH_Config_ExtGroup1_CodebookSubsetDCI_0_2_r16_partialAndNonCoherent = 1, /**< ASN.1 partialAndNonCoherent */
    PUSCH_Config_ExtGroup1_CodebookSubsetDCI_0_2_r16_nonCoherent = 2, /**< ASN.1 nonCoherent */
} PUSCH_Config_ExtGroup1_CodebookSubsetDCI_0_2_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_2_r16（ASN.1 invalidSymbolPatternIndicatorDCI-0-2-r16，源文件第 10309 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_2_r16_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_2_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_Mcs_TableDCI_0_2_r16（ASN.1 mcs-TableDCI-0-2-r16，源文件第 10311 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_Mcs_TableDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_Mcs_TableDCI_0_2_r16_qam256 = 0, /**< ASN.1 qam256 */
    PUSCH_Config_ExtGroup1_Mcs_TableDCI_0_2_r16_qam64LowSE = 1, /**< ASN.1 qam64LowSE */
} PUSCH_Config_ExtGroup1_Mcs_TableDCI_0_2_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_Mcs_TableTransformPrecoderDCI_0_2_r16（ASN.1 mcs-TableTransformPrecoderDCI-0-2-r16，源文件第 10312 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_Mcs_TableTransformPrecoderDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_Mcs_TableTransformPrecoderDCI_0_2_r16_qam256 = 0, /**< ASN.1 qam256 */
    PUSCH_Config_ExtGroup1_Mcs_TableTransformPrecoderDCI_0_2_r16_qam64LowSE = 1, /**< ASN.1 qam64LowSE */
} PUSCH_Config_ExtGroup1_Mcs_TableTransformPrecoderDCI_0_2_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_2_r16（ASN.1 priorityIndicatorDCI-0-2-r16，源文件第 10313 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_2_r16_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_2_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_2_r16（ASN.1 pusch-RepTypeIndicatorDCI-0-2-r16，源文件第 10314 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_2_r16_pusch_RepTypeA = 0, /**< ASN.1 pusch-RepTypeA */
    PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_2_r16_pusch_RepTypeB = 1, /**< ASN.1 pusch-RepTypeB */
} PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_2_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_ResourceAllocationDCI_0_2_r16（ASN.1 resourceAllocationDCI-0-2-r16，源文件第 10315 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_ResourceAllocationDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_ResourceAllocationDCI_0_2_r16_resourceAllocationType0 = 0, /**< ASN.1 resourceAllocationType0 */
    PUSCH_Config_ExtGroup1_ResourceAllocationDCI_0_2_r16_resourceAllocationType1 = 1, /**< ASN.1 resourceAllocationType1 */
    PUSCH_Config_ExtGroup1_ResourceAllocationDCI_0_2_r16_dynamicSwitch = 2, /**< ASN.1 dynamicSwitch */
} PUSCH_Config_ExtGroup1_ResourceAllocationDCI_0_2_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_0_2_r16（ASN.1 resourceAllocationType1GranularityDCI-0-2-r16，源文件第 10317 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_0_2_r16_n2 = 0, /**< ASN.1 n2 */
    PUSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_0_2_r16_n4 = 1, /**< ASN.1 n4 */
    PUSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_0_2_r16_n8 = 2, /**< ASN.1 n8 */
    PUSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_0_2_r16_n16 = 3, /**< ASN.1 n16 */
} PUSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_0_2_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_1_r16（ASN.1 invalidSymbolPatternIndicatorDCI-0-1-r16，源文件第 10325 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_1_r16 {
    PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_1_r16_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_1_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_1_r16（ASN.1 priorityIndicatorDCI-0-1-r16，源文件第 10326 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_1_r16 {
    PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_1_r16_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_1_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_1_r16（ASN.1 pusch-RepTypeIndicatorDCI-0-1-r16，源文件第 10327 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_1_r16 {
    PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_1_r16_pusch_RepTypeA = 0, /**< ASN.1 pusch-RepTypeA */
    PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_1_r16_pusch_RepTypeB = 1, /**< ASN.1 pusch-RepTypeB */
} PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_1_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_1_r16（ASN.1 frequencyHoppingDCI-0-1-r16，源文件第 10328 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_1_r16 {
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_1_r16_interRepetition = 0, /**< ASN.1 interRepetition */
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_1_r16_interSlot = 1, /**< ASN.1 interSlot */
} PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_1_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup1_Ul_FullPowerTransmission_r16（ASN.1 ul-FullPowerTransmission-r16，源文件第 10333 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup1_Ul_FullPowerTransmission_r16 {
    PUSCH_Config_ExtGroup1_Ul_FullPowerTransmission_r16_fullpower = 0, /**< ASN.1 fullpower */
    PUSCH_Config_ExtGroup1_Ul_FullPowerTransmission_r16_fullpowerMode1 = 1, /**< ASN.1 fullpowerMode1 */
    PUSCH_Config_ExtGroup1_Ul_FullPowerTransmission_r16_fullpowerMode2 = 2, /**< ASN.1 fullpowerMode2 */
} PUSCH_Config_ExtGroup1_Ul_FullPowerTransmission_r16;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup2_MappingPattern_r17（ASN.1 mappingPattern-r17，源文件第 10344 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup2_MappingPattern_r17 {
    PUSCH_Config_ExtGroup2_MappingPattern_r17_cyclicMapping = 0, /**< ASN.1 cyclicMapping */
    PUSCH_Config_ExtGroup2_MappingPattern_r17_sequentialMapping = 1, /**< ASN.1 sequentialMapping */
} PUSCH_Config_ExtGroup2_MappingPattern_r17;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_1_r17（ASN.1 secondTPCFieldDCI-0-1-r17，源文件第 10345 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_1_r17 {
    PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_1_r17_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_1_r17;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_2_r17（ASN.1 secondTPCFieldDCI-0-2-r17，源文件第 10346 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_2_r17 {
    PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_2_r17_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_2_r17;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup2_AvailableSlotCounting_r17（ASN.1 availableSlotCounting-r17，源文件第 10350 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup2_AvailableSlotCounting_r17 {
    PUSCH_Config_ExtGroup2_AvailableSlotCounting_r17_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup2_AvailableSlotCounting_r17;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup3_STx_2Panel_r18（ASN.1 sTx-2Panel-r18，源文件第 10359 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup3_STx_2Panel_r18 {
    PUSCH_Config_ExtGroup3_STx_2Panel_r18_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup3_STx_2Panel_r18;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup3_ApplyIndicatedTCI_State_r18（ASN.1 applyIndicatedTCI-State-r18，源文件第 10363 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup3_ApplyIndicatedTCI_State_r18 {
    PUSCH_Config_ExtGroup3_ApplyIndicatedTCI_State_r18_first = 0, /**< ASN.1 first */
    PUSCH_Config_ExtGroup3_ApplyIndicatedTCI_State_r18_second = 1, /**< ASN.1 second */
} PUSCH_Config_ExtGroup3_ApplyIndicatedTCI_State_r18;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_1_r18（ASN.1 dynamicTransformPrecoderFieldPresenceDCI-0-1-r18，源文件第 10364 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_1_r18 {
    PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_1_r18_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_1_r18;


/**
 * @brief 枚举 PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_2_r18（ASN.1 dynamicTransformPrecoderFieldPresenceDCI-0-2-r18，源文件第 10365 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_2_r18 {
    PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_2_r18_enabled = 0, /**< ASN.1 enabled */
} PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_2_r18;


/**
 * @brief 枚举 UCI_OnPUSCH_Scaling（ASN.1 scaling，源文件第 10375 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UCI_OnPUSCH_Scaling {
    UCI_OnPUSCH_Scaling_f0p5 = 0, /**< ASN.1 f0p5 */
    UCI_OnPUSCH_Scaling_f0p65 = 1, /**< ASN.1 f0p65 */
    UCI_OnPUSCH_Scaling_f0p8 = 2, /**< ASN.1 f0p8 */
    UCI_OnPUSCH_Scaling_f1 = 3, /**< ASN.1 f1 */
} UCI_OnPUSCH_Scaling;


/**
 * @brief 枚举 UCI_OnPUSCH_DCI_0_2_r16_ScalingDCI_0_2_r16（ASN.1 scalingDCI-0-2-r16，源文件第 10390 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UCI_OnPUSCH_DCI_0_2_r16_ScalingDCI_0_2_r16 {
    UCI_OnPUSCH_DCI_0_2_r16_ScalingDCI_0_2_r16_f0p5 = 0, /**< ASN.1 f0p5 */
    UCI_OnPUSCH_DCI_0_2_r16_ScalingDCI_0_2_r16_f0p65 = 1, /**< ASN.1 f0p65 */
    UCI_OnPUSCH_DCI_0_2_r16_ScalingDCI_0_2_r16_f0p8 = 2, /**< ASN.1 f0p8 */
    UCI_OnPUSCH_DCI_0_2_r16_ScalingDCI_0_2_r16_f1 = 3, /**< ASN.1 f1 */
} UCI_OnPUSCH_DCI_0_2_r16_ScalingDCI_0_2_r16;


/**
 * @brief 枚举 CodebookTypeUL_r18_Codebook1_r18（ASN.1 codebook1-r18，源文件第 10443 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookTypeUL_r18_Codebook1_r18 {
    CodebookTypeUL_r18_Codebook1_r18_ng1n4n1 = 0, /**< ASN.1 ng1n4n1 */
    CodebookTypeUL_r18_Codebook1_r18_ng1n2n2 = 1, /**< ASN.1 ng1n2n2 */
} CodebookTypeUL_r18_Codebook1_r18;


/**
 * @brief 枚举 CodebookTypeUL_r18_Codebook2_r18（ASN.1 codebook2-r18，源文件第 10444 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookTypeUL_r18_Codebook2_r18 {
    CodebookTypeUL_r18_Codebook2_r18_ng2 = 0, /**< ASN.1 ng2 */
} CodebookTypeUL_r18_Codebook2_r18;


/**
 * @brief 枚举 CodebookTypeUL_r18_Codebook3_r18（ASN.1 codebook3-r18，源文件第 10445 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookTypeUL_r18_Codebook3_r18 {
    CodebookTypeUL_r18_Codebook3_r18_ng4 = 0, /**< ASN.1 ng4 */
} CodebookTypeUL_r18_Codebook3_r18;


/**
 * @brief 枚举 CodebookTypeUL_r18_Codebook4_r18（ASN.1 codebook4-r18，源文件第 10446 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CodebookTypeUL_r18_Codebook4_r18 {
    CodebookTypeUL_r18_Codebook4_r18_ng8 = 0, /**< ASN.1 ng8 */
} CodebookTypeUL_r18_Codebook4_r18;


/**
 * @brief 枚举 PUSCH_ConfigDCI_0_3_r18_ResourceAllocationDCI_0_3_r18（ASN.1 resourceAllocationDCI-0-3-r18，源文件第 10450 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_ConfigDCI_0_3_r18_ResourceAllocationDCI_0_3_r18 {
    PUSCH_ConfigDCI_0_3_r18_ResourceAllocationDCI_0_3_r18_resourceAllocationType0 = 0, /**< ASN.1 resourceAllocationType0 */
    PUSCH_ConfigDCI_0_3_r18_ResourceAllocationDCI_0_3_r18_resourceAllocationType1 = 1, /**< ASN.1 resourceAllocationType1 */
    PUSCH_ConfigDCI_0_3_r18_ResourceAllocationDCI_0_3_r18_dynamicSwitch = 2, /**< ASN.1 dynamicSwitch */
} PUSCH_ConfigDCI_0_3_r18_ResourceAllocationDCI_0_3_r18;


/**
 * @brief 枚举 PUSCH_ConfigDCI_0_3_r18_Rbg_SizeDCI_0_3_r18（ASN.1 rbg-SizeDCI-0-3-r18，源文件第 10452 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_ConfigDCI_0_3_r18_Rbg_SizeDCI_0_3_r18 {
    PUSCH_ConfigDCI_0_3_r18_Rbg_SizeDCI_0_3_r18_config2 = 0, /**< ASN.1 config2 */
    PUSCH_ConfigDCI_0_3_r18_Rbg_SizeDCI_0_3_r18_config3 = 1, /**< ASN.1 config3 */
} PUSCH_ConfigDCI_0_3_r18_Rbg_SizeDCI_0_3_r18;


/**
 * @brief 枚举 PUSCH_ConfigDCI_0_3_r18_ResourceAllocationType1GranularityDCI_0_3_r18（ASN.1 resourceAllocationType1GranularityDCI-0-3-r18，源文件第 10453 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_ConfigDCI_0_3_r18_ResourceAllocationType1GranularityDCI_0_3_r18 {
    PUSCH_ConfigDCI_0_3_r18_ResourceAllocationType1GranularityDCI_0_3_r18_n2 = 0, /**< ASN.1 n2 */
    PUSCH_ConfigDCI_0_3_r18_ResourceAllocationType1GranularityDCI_0_3_r18_n4 = 1, /**< ASN.1 n4 */
    PUSCH_ConfigDCI_0_3_r18_ResourceAllocationType1GranularityDCI_0_3_r18_n8 = 2, /**< ASN.1 n8 */
    PUSCH_ConfigDCI_0_3_r18_ResourceAllocationType1GranularityDCI_0_3_r18_n16 = 3, /**< ASN.1 n16 */
} PUSCH_ConfigDCI_0_3_r18_ResourceAllocationType1GranularityDCI_0_3_r18;


/**
 * @brief 枚举 PUSCH_ConfigCommon_GroupHoppingEnabledTransformPrecoding（ASN.1 groupHoppingEnabledTransformPrecoding，源文件第 10463 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_ConfigCommon_GroupHoppingEnabledTransformPrecoding {
    PUSCH_ConfigCommon_GroupHoppingEnabledTransformPrecoding_enabled = 0, /**< ASN.1 enabled */
} PUSCH_ConfigCommon_GroupHoppingEnabledTransformPrecoding;


/**
 * @brief 枚举 PUSCH_PowerControl_Tpc_Accumulation（ASN.1 tpc-Accumulation，源文件第 10474 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_PowerControl_Tpc_Accumulation {
    PUSCH_PowerControl_Tpc_Accumulation_disabled = 0, /**< ASN.1 disabled */
} PUSCH_PowerControl_Tpc_Accumulation;


/**
 * @brief 枚举 PUSCH_PowerControl_TwoPUSCH_PC_AdjustmentStates（ASN.1 twoPUSCH-PC-AdjustmentStates，源文件第 10482 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_PowerControl_TwoPUSCH_PC_AdjustmentStates {
    PUSCH_PowerControl_TwoPUSCH_PC_AdjustmentStates_twoStates = 0, /**< ASN.1 twoStates */
} PUSCH_PowerControl_TwoPUSCH_PC_AdjustmentStates;


/**
 * @brief 枚举 PUSCH_PowerControl_DeltaMCS（ASN.1 deltaMCS，源文件第 10483 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_PowerControl_DeltaMCS {
    PUSCH_PowerControl_DeltaMCS_enabled = 0, /**< ASN.1 enabled */
} PUSCH_PowerControl_DeltaMCS;


/**
 * @brief 枚举 SRI_PUSCH_PowerControl_Sri_PUSCH_ClosedLoopIndex（ASN.1 sri-PUSCH-ClosedLoopIndex，源文件第 10529 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRI_PUSCH_PowerControl_Sri_PUSCH_ClosedLoopIndex {
    SRI_PUSCH_PowerControl_Sri_PUSCH_ClosedLoopIndex_i0 = 0, /**< ASN.1 i0 */
    SRI_PUSCH_PowerControl_Sri_PUSCH_ClosedLoopIndex_i1 = 1, /**< ASN.1 i1 */
} SRI_PUSCH_PowerControl_Sri_PUSCH_ClosedLoopIndex;


/**
 * @brief 枚举 PUSCH_ServingCellConfig_RateMatching（ASN.1 rateMatching，源文件第 10569 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_ServingCellConfig_RateMatching {
    PUSCH_ServingCellConfig_RateMatching_limitedBufferRM = 0, /**< ASN.1 limitedBufferRM */
} PUSCH_ServingCellConfig_RateMatching;


/**
 * @brief 枚举 PUSCH_ServingCellConfig_XOverhead（ASN.1 xOverhead，源文件第 10570 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_ServingCellConfig_XOverhead {
    PUSCH_ServingCellConfig_XOverhead_xoh6 = 0, /**< ASN.1 xoh6 */
    PUSCH_ServingCellConfig_XOverhead_xoh12 = 1, /**< ASN.1 xoh12 */
    PUSCH_ServingCellConfig_XOverhead_xoh18 = 2, /**< ASN.1 xoh18 */
} PUSCH_ServingCellConfig_XOverhead;


/**
 * @brief 枚举 PUSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPUSCH_r17（ASN.1 nrofHARQ-ProcessesForPUSCH-r17，源文件第 10580 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPUSCH_r17 {
    PUSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPUSCH_r17_n32 = 0, /**< ASN.1 n32 */
} PUSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPUSCH_r17;


/**
 * @brief 枚举 PUSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock（ASN.1 maxCodeBlockGroupsPerTransportBlock，源文件第 10593 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock {
    PUSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock_n2 = 0, /**< ASN.1 n2 */
    PUSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock_n4 = 1, /**< ASN.1 n4 */
    PUSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock_n6 = 2, /**< ASN.1 n6 */
    PUSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock_n8 = 3, /**< ASN.1 n8 */
} PUSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock;


/**
 * @brief 枚举 PUSCH_TimeDomainResourceAllocation_MappingType（ASN.1 mappingType，源文件第 10608 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_TimeDomainResourceAllocation_MappingType {
    PUSCH_TimeDomainResourceAllocation_MappingType_typeA = 0, /**< ASN.1 typeA */
    PUSCH_TimeDomainResourceAllocation_MappingType_typeB = 1, /**< ASN.1 typeB */
} PUSCH_TimeDomainResourceAllocation_MappingType;


/**
 * @brief 枚举 PUSCH_Allocation_r16_MappingType_r16（ASN.1 mappingType-r16，源文件第 10621 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Allocation_r16_MappingType_r16 {
    PUSCH_Allocation_r16_MappingType_r16_typeA = 0, /**< ASN.1 typeA */
    PUSCH_Allocation_r16_MappingType_r16_typeB = 1, /**< ASN.1 typeB */
} PUSCH_Allocation_r16_MappingType_r16;


/**
 * @brief 枚举 PUSCH_Allocation_r16_NumberOfRepetitions_r16（ASN.1 numberOfRepetitions-r16，源文件第 10625 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Allocation_r16_NumberOfRepetitions_r16 {
    PUSCH_Allocation_r16_NumberOfRepetitions_r16_n1 = 0, /**< ASN.1 n1 */
    PUSCH_Allocation_r16_NumberOfRepetitions_r16_n2 = 1, /**< ASN.1 n2 */
    PUSCH_Allocation_r16_NumberOfRepetitions_r16_n3 = 2, /**< ASN.1 n3 */
    PUSCH_Allocation_r16_NumberOfRepetitions_r16_n4 = 3, /**< ASN.1 n4 */
    PUSCH_Allocation_r16_NumberOfRepetitions_r16_n7 = 4, /**< ASN.1 n7 */
    PUSCH_Allocation_r16_NumberOfRepetitions_r16_n8 = 5, /**< ASN.1 n8 */
    PUSCH_Allocation_r16_NumberOfRepetitions_r16_n12 = 6, /**< ASN.1 n12 */
    PUSCH_Allocation_r16_NumberOfRepetitions_r16_n16 = 7, /**< ASN.1 n16 */
} PUSCH_Allocation_r16_NumberOfRepetitions_r16;


/**
 * @brief 枚举 PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17（ASN.1 numberOfRepetitionsExt-r17，源文件第 10628 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17 {
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n1 = 0, /**< ASN.1 n1 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n2 = 1, /**< ASN.1 n2 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n3 = 2, /**< ASN.1 n3 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n4 = 3, /**< ASN.1 n4 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n7 = 4, /**< ASN.1 n7 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n8 = 5, /**< ASN.1 n8 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n12 = 6, /**< ASN.1 n12 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n16 = 7, /**< ASN.1 n16 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n20 = 8, /**< ASN.1 n20 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n24 = 9, /**< ASN.1 n24 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n28 = 10, /**< ASN.1 n28 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_n32 = 11, /**< ASN.1 n32 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_spare4 = 12, /**< ASN.1 spare4 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_spare3 = 13, /**< ASN.1 spare3 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_spare2 = 14, /**< ASN.1 spare2 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17_spare1 = 15, /**< ASN.1 spare1 */
} PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17;


/**
 * @brief 枚举 PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17（ASN.1 numberOfSlotsTBoMS-r17，源文件第 10630 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17 {
    PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17_n1 = 0, /**< ASN.1 n1 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17_n2 = 1, /**< ASN.1 n2 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17_n4 = 2, /**< ASN.1 n4 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17_n8 = 3, /**< ASN.1 n8 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17_spare4 = 4, /**< ASN.1 spare4 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17_spare3 = 5, /**< ASN.1 spare3 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17_spare2 = 6, /**< ASN.1 spare2 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17_spare1 = 7, /**< ASN.1 spare1 */
} PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17;


/**
 * @brief 枚举 RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth（ASN.1 ssb-perRACH-OccasionAndCB-PreamblesPerSSB/oneEighth，源文件第 10719 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth {
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n4 = 0, /**< ASN.1 n4 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n8 = 1, /**< ASN.1 n8 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n12 = 2, /**< ASN.1 n12 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n16 = 3, /**< ASN.1 n16 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n20 = 4, /**< ASN.1 n20 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n24 = 5, /**< ASN.1 n24 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n28 = 6, /**< ASN.1 n28 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n32 = 7, /**< ASN.1 n32 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n36 = 8, /**< ASN.1 n36 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n40 = 9, /**< ASN.1 n40 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n44 = 10, /**< ASN.1 n44 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n48 = 11, /**< ASN.1 n48 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n52 = 12, /**< ASN.1 n52 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n56 = 13, /**< ASN.1 n56 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n60 = 14, /**< ASN.1 n60 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth_n64 = 15, /**< ASN.1 n64 */
} RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth;


/**
 * @brief 枚举 RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth（ASN.1 ssb-perRACH-OccasionAndCB-PreamblesPerSSB/oneFourth，源文件第 10720 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth {
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n4 = 0, /**< ASN.1 n4 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n8 = 1, /**< ASN.1 n8 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n12 = 2, /**< ASN.1 n12 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n16 = 3, /**< ASN.1 n16 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n20 = 4, /**< ASN.1 n20 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n24 = 5, /**< ASN.1 n24 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n28 = 6, /**< ASN.1 n28 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n32 = 7, /**< ASN.1 n32 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n36 = 8, /**< ASN.1 n36 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n40 = 9, /**< ASN.1 n40 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n44 = 10, /**< ASN.1 n44 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n48 = 11, /**< ASN.1 n48 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n52 = 12, /**< ASN.1 n52 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n56 = 13, /**< ASN.1 n56 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n60 = 14, /**< ASN.1 n60 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth_n64 = 15, /**< ASN.1 n64 */
} RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth;


/**
 * @brief 枚举 RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf（ASN.1 ssb-perRACH-OccasionAndCB-PreamblesPerSSB/oneHalf，源文件第 10721 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf {
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n4 = 0, /**< ASN.1 n4 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n8 = 1, /**< ASN.1 n8 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n12 = 2, /**< ASN.1 n12 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n16 = 3, /**< ASN.1 n16 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n20 = 4, /**< ASN.1 n20 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n24 = 5, /**< ASN.1 n24 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n28 = 6, /**< ASN.1 n28 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n32 = 7, /**< ASN.1 n32 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n36 = 8, /**< ASN.1 n36 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n40 = 9, /**< ASN.1 n40 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n44 = 10, /**< ASN.1 n44 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n48 = 11, /**< ASN.1 n48 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n52 = 12, /**< ASN.1 n52 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n56 = 13, /**< ASN.1 n56 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n60 = 14, /**< ASN.1 n60 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf_n64 = 15, /**< ASN.1 n64 */
} RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf;


/**
 * @brief 枚举 RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One（ASN.1 ssb-perRACH-OccasionAndCB-PreamblesPerSSB/one，源文件第 10722 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One {
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n4 = 0, /**< ASN.1 n4 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n8 = 1, /**< ASN.1 n8 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n12 = 2, /**< ASN.1 n12 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n16 = 3, /**< ASN.1 n16 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n20 = 4, /**< ASN.1 n20 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n24 = 5, /**< ASN.1 n24 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n28 = 6, /**< ASN.1 n28 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n32 = 7, /**< ASN.1 n32 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n36 = 8, /**< ASN.1 n36 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n40 = 9, /**< ASN.1 n40 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n44 = 10, /**< ASN.1 n44 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n48 = 11, /**< ASN.1 n48 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n52 = 12, /**< ASN.1 n52 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n56 = 13, /**< ASN.1 n56 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n60 = 14, /**< ASN.1 n60 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One_n64 = 15, /**< ASN.1 n64 */
} RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One;


/**
 * @brief 枚举 RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two（ASN.1 ssb-perRACH-OccasionAndCB-PreamblesPerSSB/two，源文件第 10723 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two {
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two_n4 = 0, /**< ASN.1 n4 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two_n8 = 1, /**< ASN.1 n8 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two_n12 = 2, /**< ASN.1 n12 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two_n16 = 3, /**< ASN.1 n16 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two_n20 = 4, /**< ASN.1 n20 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two_n24 = 5, /**< ASN.1 n24 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two_n28 = 6, /**< ASN.1 n28 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two_n32 = 7, /**< ASN.1 n32 */
} RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two;


/**
 * @brief 枚举 RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA（ASN.1 groupBconfigured/ra-Msg3SizeGroupA，源文件第 10730 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA {
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b56 = 0, /**< ASN.1 b56 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b144 = 1, /**< ASN.1 b144 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b208 = 2, /**< ASN.1 b208 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b256 = 3, /**< ASN.1 b256 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b282 = 4, /**< ASN.1 b282 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b480 = 5, /**< ASN.1 b480 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b640 = 6, /**< ASN.1 b640 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b800 = 7, /**< ASN.1 b800 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b1000 = 8, /**< ASN.1 b1000 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_b72 = 9, /**< ASN.1 b72 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_spare6 = 10, /**< ASN.1 spare6 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_spare5 = 11, /**< ASN.1 spare5 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_spare4 = 12, /**< ASN.1 spare4 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_spare3 = 13, /**< ASN.1 spare3 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_spare2 = 14, /**< ASN.1 spare2 */
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA_spare1 = 15, /**< ASN.1 spare1 */
} RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA;


/**
 * @brief 枚举 RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB（ASN.1 groupBconfigured/messagePowerOffsetGroupB，源文件第 10732 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB {
    RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB_minusinfinity = 0, /**< ASN.1 minusinfinity */
    RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB_dB0 = 1, /**< ASN.1 dB0 */
    RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB_dB5 = 2, /**< ASN.1 dB5 */
    RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB_dB8 = 3, /**< ASN.1 dB8 */
    RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB_dB10 = 4, /**< ASN.1 dB10 */
    RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB_dB12 = 5, /**< ASN.1 dB12 */
    RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB_dB15 = 6, /**< ASN.1 dB15 */
    RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB_dB18 = 7, /**< ASN.1 dB18 */
} RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB;


/**
 * @brief 枚举 RACH_ConfigCommon_Ra_ContentionResolutionTimer（ASN.1 ra-ContentionResolutionTimer，源文件第 10735 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommon_Ra_ContentionResolutionTimer {
    RACH_ConfigCommon_Ra_ContentionResolutionTimer_sf8 = 0, /**< ASN.1 sf8 */
    RACH_ConfigCommon_Ra_ContentionResolutionTimer_sf16 = 1, /**< ASN.1 sf16 */
    RACH_ConfigCommon_Ra_ContentionResolutionTimer_sf24 = 2, /**< ASN.1 sf24 */
    RACH_ConfigCommon_Ra_ContentionResolutionTimer_sf32 = 3, /**< ASN.1 sf32 */
    RACH_ConfigCommon_Ra_ContentionResolutionTimer_sf40 = 4, /**< ASN.1 sf40 */
    RACH_ConfigCommon_Ra_ContentionResolutionTimer_sf48 = 5, /**< ASN.1 sf48 */
    RACH_ConfigCommon_Ra_ContentionResolutionTimer_sf56 = 6, /**< ASN.1 sf56 */
    RACH_ConfigCommon_Ra_ContentionResolutionTimer_sf64 = 7, /**< ASN.1 sf64 */
} RACH_ConfigCommon_Ra_ContentionResolutionTimer;


/**
 * @brief 枚举 RACH_ConfigCommon_RestrictedSetConfig（ASN.1 restrictedSetConfig，源文件第 10743 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommon_RestrictedSetConfig {
    RACH_ConfigCommon_RestrictedSetConfig_unrestrictedSet = 0, /**< ASN.1 unrestrictedSet */
    RACH_ConfigCommon_RestrictedSetConfig_restrictedSetTypeA = 1, /**< ASN.1 restrictedSetTypeA */
    RACH_ConfigCommon_RestrictedSetConfig_restrictedSetTypeB = 2, /**< ASN.1 restrictedSetTypeB */
} RACH_ConfigCommon_RestrictedSetConfig;


/**
 * @brief 枚举 RACH_ConfigCommon_Msg3_transformPrecoder（ASN.1 msg3-transformPrecoder，源文件第 10744 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommon_Msg3_transformPrecoder {
    RACH_ConfigCommon_Msg3_transformPrecoder_enabled = 0, /**< ASN.1 enabled */
} RACH_ConfigCommon_Msg3_transformPrecoder;


/**
 * @brief 枚举 RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth（ASN.1 msgA-SSB-PerRACH-OccasionAndCB-PreamblesPerSSB-r16/oneEighth，源文件第 10769 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n4 = 0, /**< ASN.1 n4 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n8 = 1, /**< ASN.1 n8 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n12 = 2, /**< ASN.1 n12 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n16 = 3, /**< ASN.1 n16 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n20 = 4, /**< ASN.1 n20 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n24 = 5, /**< ASN.1 n24 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n28 = 6, /**< ASN.1 n28 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n32 = 7, /**< ASN.1 n32 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n36 = 8, /**< ASN.1 n36 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n40 = 9, /**< ASN.1 n40 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n44 = 10, /**< ASN.1 n44 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n48 = 11, /**< ASN.1 n48 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n52 = 12, /**< ASN.1 n52 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n56 = 13, /**< ASN.1 n56 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n60 = 14, /**< ASN.1 n60 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth_n64 = 15, /**< ASN.1 n64 */
} RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth;


/**
 * @brief 枚举 RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth（ASN.1 msgA-SSB-PerRACH-OccasionAndCB-PreamblesPerSSB-r16/oneFourth，源文件第 10770 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n4 = 0, /**< ASN.1 n4 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n8 = 1, /**< ASN.1 n8 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n12 = 2, /**< ASN.1 n12 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n16 = 3, /**< ASN.1 n16 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n20 = 4, /**< ASN.1 n20 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n24 = 5, /**< ASN.1 n24 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n28 = 6, /**< ASN.1 n28 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n32 = 7, /**< ASN.1 n32 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n36 = 8, /**< ASN.1 n36 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n40 = 9, /**< ASN.1 n40 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n44 = 10, /**< ASN.1 n44 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n48 = 11, /**< ASN.1 n48 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n52 = 12, /**< ASN.1 n52 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n56 = 13, /**< ASN.1 n56 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n60 = 14, /**< ASN.1 n60 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth_n64 = 15, /**< ASN.1 n64 */
} RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth;


/**
 * @brief 枚举 RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf（ASN.1 msgA-SSB-PerRACH-OccasionAndCB-PreamblesPerSSB-r16/oneHalf，源文件第 10771 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n4 = 0, /**< ASN.1 n4 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n8 = 1, /**< ASN.1 n8 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n12 = 2, /**< ASN.1 n12 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n16 = 3, /**< ASN.1 n16 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n20 = 4, /**< ASN.1 n20 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n24 = 5, /**< ASN.1 n24 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n28 = 6, /**< ASN.1 n28 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n32 = 7, /**< ASN.1 n32 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n36 = 8, /**< ASN.1 n36 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n40 = 9, /**< ASN.1 n40 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n44 = 10, /**< ASN.1 n44 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n48 = 11, /**< ASN.1 n48 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n52 = 12, /**< ASN.1 n52 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n56 = 13, /**< ASN.1 n56 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n60 = 14, /**< ASN.1 n60 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf_n64 = 15, /**< ASN.1 n64 */
} RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf;


/**
 * @brief 枚举 RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One（ASN.1 msgA-SSB-PerRACH-OccasionAndCB-PreamblesPerSSB-r16/one，源文件第 10772 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n4 = 0, /**< ASN.1 n4 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n8 = 1, /**< ASN.1 n8 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n12 = 2, /**< ASN.1 n12 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n16 = 3, /**< ASN.1 n16 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n20 = 4, /**< ASN.1 n20 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n24 = 5, /**< ASN.1 n24 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n28 = 6, /**< ASN.1 n28 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n32 = 7, /**< ASN.1 n32 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n36 = 8, /**< ASN.1 n36 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n40 = 9, /**< ASN.1 n40 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n44 = 10, /**< ASN.1 n44 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n48 = 11, /**< ASN.1 n48 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n52 = 12, /**< ASN.1 n52 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n56 = 13, /**< ASN.1 n56 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n60 = 14, /**< ASN.1 n60 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One_n64 = 15, /**< ASN.1 n64 */
} RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One;


/**
 * @brief 枚举 RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two（ASN.1 msgA-SSB-PerRACH-OccasionAndCB-PreamblesPerSSB-r16/two，源文件第 10773 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two_n4 = 0, /**< ASN.1 n4 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two_n8 = 1, /**< ASN.1 n8 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two_n12 = 2, /**< ASN.1 n12 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two_n16 = 3, /**< ASN.1 n16 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two_n20 = 4, /**< ASN.1 n20 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two_n24 = 5, /**< ASN.1 n24 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two_n28 = 6, /**< ASN.1 n28 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two_n32 = 7, /**< ASN.1 n32 */
} RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two;


/**
 * @brief 枚举 RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16（ASN.1 msgA-TransMax-r16，源文件第 10787 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16 {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16_n1 = 0, /**< ASN.1 n1 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16_n2 = 1, /**< ASN.1 n2 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16_n4 = 2, /**< ASN.1 n4 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16_n6 = 3, /**< ASN.1 n6 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16_n8 = 4, /**< ASN.1 n8 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16_n10 = 5, /**< ASN.1 n10 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16_n20 = 6, /**< ASN.1 n20 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16_n50 = 7, /**< ASN.1 n50 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16_n100 = 8, /**< ASN.1 n100 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16_n200 = 9, /**< ASN.1 n200 */
} RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16;


/**
 * @brief 枚举 RACH_ConfigCommonTwoStepRA_r16_MsgA_RestrictedSetConfig_r16（ASN.1 msgA-RestrictedSetConfig-r16，源文件第 10791 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommonTwoStepRA_r16_MsgA_RestrictedSetConfig_r16 {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_RestrictedSetConfig_r16_unrestrictedSet = 0, /**< ASN.1 unrestrictedSet */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_RestrictedSetConfig_r16_restrictedSetTypeA = 1, /**< ASN.1 restrictedSetTypeA */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_RestrictedSetConfig_r16_restrictedSetTypeB = 2, /**< ASN.1 restrictedSetTypeB */
} RACH_ConfigCommonTwoStepRA_r16_MsgA_RestrictedSetConfig_r16;


/**
 * @brief 枚举 RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16（ASN.1 ra-ContentionResolutionTimer-r16，源文件第 10797 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16 {
    RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16_sf8 = 0, /**< ASN.1 sf8 */
    RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16_sf16 = 1, /**< ASN.1 sf16 */
    RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16_sf24 = 2, /**< ASN.1 sf24 */
    RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16_sf32 = 3, /**< ASN.1 sf32 */
    RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16_sf40 = 4, /**< ASN.1 sf40 */
    RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16_sf48 = 5, /**< ASN.1 sf48 */
    RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16_sf56 = 6, /**< ASN.1 sf56 */
    RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16_sf64 = 7, /**< ASN.1 sf64 */
} RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16;


/**
 * @brief 枚举 GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16（ASN.1 ra-MsgA-SizeGroupA-r16，源文件第 10806 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16 {
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b56 = 0, /**< ASN.1 b56 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b144 = 1, /**< ASN.1 b144 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b208 = 2, /**< ASN.1 b208 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b256 = 3, /**< ASN.1 b256 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b282 = 4, /**< ASN.1 b282 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b480 = 5, /**< ASN.1 b480 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b640 = 6, /**< ASN.1 b640 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b800 = 7, /**< ASN.1 b800 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b1000 = 8, /**< ASN.1 b1000 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_b72 = 9, /**< ASN.1 b72 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_spare6 = 10, /**< ASN.1 spare6 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_spare5 = 11, /**< ASN.1 spare5 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_spare4 = 12, /**< ASN.1 spare4 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_spare3 = 13, /**< ASN.1 spare3 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_spare2 = 14, /**< ASN.1 spare2 */
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16_spare1 = 15, /**< ASN.1 spare1 */
} GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16;


/**
 * @brief 枚举 GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16（ASN.1 messagePowerOffsetGroupB-r16，源文件第 10808 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16 {
    GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16_minusinfinity = 0, /**< ASN.1 minusinfinity */
    GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16_dB0 = 1, /**< ASN.1 dB0 */
    GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16_dB5 = 2, /**< ASN.1 dB5 */
    GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16_dB8 = 3, /**< ASN.1 dB8 */
    GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16_dB10 = 4, /**< ASN.1 dB10 */
    GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16_dB12 = 5, /**< ASN.1 dB12 */
    GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16_dB15 = 6, /**< ASN.1 dB15 */
    GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16_dB18 = 7, /**< ASN.1 dB18 */
} GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16;


/**
 * @brief 枚举 CFRA_Occasions_Ssb_perRACH_Occasion（ASN.1 occasions/ssb-perRACH-Occasion，源文件第 10829 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CFRA_Occasions_Ssb_perRACH_Occasion {
    CFRA_Occasions_Ssb_perRACH_Occasion_oneEighth = 0, /**< ASN.1 oneEighth */
    CFRA_Occasions_Ssb_perRACH_Occasion_oneFourth = 1, /**< ASN.1 oneFourth */
    CFRA_Occasions_Ssb_perRACH_Occasion_oneHalf = 2, /**< ASN.1 oneHalf */
    CFRA_Occasions_Ssb_perRACH_Occasion_one = 3, /**< ASN.1 one */
    CFRA_Occasions_Ssb_perRACH_Occasion_two = 4, /**< ASN.1 two */
    CFRA_Occasions_Ssb_perRACH_Occasion_four = 5, /**< ASN.1 four */
    CFRA_Occasions_Ssb_perRACH_Occasion_eight = 6, /**< ASN.1 eight */
    CFRA_Occasions_Ssb_perRACH_Occasion_sixteen = 7, /**< ASN.1 sixteen */
} CFRA_Occasions_Ssb_perRACH_Occasion;


/**
 * @brief 枚举 CFRA_ExtGroup2_Msg1_RepetitionNum_r18（ASN.1 msg1-RepetitionNum-r18，源文件第 10847 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CFRA_ExtGroup2_Msg1_RepetitionNum_r18 {
    CFRA_ExtGroup2_Msg1_RepetitionNum_r18_n2 = 0, /**< ASN.1 n2 */
    CFRA_ExtGroup2_Msg1_RepetitionNum_r18_n4 = 1, /**< ASN.1 n4 */
    CFRA_ExtGroup2_Msg1_RepetitionNum_r18_n8 = 2, /**< ASN.1 n8 */
    CFRA_ExtGroup2_Msg1_RepetitionNum_r18_spare1 = 3, /**< ASN.1 spare1 */
} CFRA_ExtGroup2_Msg1_RepetitionNum_r18;


/**
 * @brief 枚举 CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16（ASN.1 occasionsTwoStepRA-r16/ssb-PerRACH-OccasionTwoStepRA-r16，源文件第 10854 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16 {
    CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16_oneEighth = 0, /**< ASN.1 oneEighth */
    CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16_oneFourth = 1, /**< ASN.1 oneFourth */
    CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16_oneHalf = 2, /**< ASN.1 oneHalf */
    CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16_one = 3, /**< ASN.1 one */
    CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16_two = 4, /**< ASN.1 two */
    CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16_four = 5, /**< ASN.1 four */
    CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16_eight = 6, /**< ASN.1 eight */
    CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16_sixteen = 7, /**< ASN.1 sixteen */
} CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16;


/**
 * @brief 枚举 CFRA_TwoStep_r16_MsgA_TransMax_r16（ASN.1 msgA-TransMax-r16，源文件第 10858 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CFRA_TwoStep_r16_MsgA_TransMax_r16 {
    CFRA_TwoStep_r16_MsgA_TransMax_r16_n1 = 0, /**< ASN.1 n1 */
    CFRA_TwoStep_r16_MsgA_TransMax_r16_n2 = 1, /**< ASN.1 n2 */
    CFRA_TwoStep_r16_MsgA_TransMax_r16_n4 = 2, /**< ASN.1 n4 */
    CFRA_TwoStep_r16_MsgA_TransMax_r16_n6 = 3, /**< ASN.1 n6 */
    CFRA_TwoStep_r16_MsgA_TransMax_r16_n8 = 4, /**< ASN.1 n8 */
    CFRA_TwoStep_r16_MsgA_TransMax_r16_n10 = 5, /**< ASN.1 n10 */
    CFRA_TwoStep_r16_MsgA_TransMax_r16_n20 = 6, /**< ASN.1 n20 */
    CFRA_TwoStep_r16_MsgA_TransMax_r16_n50 = 7, /**< ASN.1 n50 */
    CFRA_TwoStep_r16_MsgA_TransMax_r16_n100 = 8, /**< ASN.1 n100 */
    CFRA_TwoStep_r16_MsgA_TransMax_r16_n200 = 9, /**< ASN.1 n200 */
} CFRA_TwoStep_r16_MsgA_TransMax_r16;


/**
 * @brief 枚举 RACH_ConfigGeneric_Msg1_FDM（ASN.1 msg1-FDM，源文件第 10888 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGeneric_Msg1_FDM {
    RACH_ConfigGeneric_Msg1_FDM_one = 0, /**< ASN.1 one */
    RACH_ConfigGeneric_Msg1_FDM_two = 1, /**< ASN.1 two */
    RACH_ConfigGeneric_Msg1_FDM_four = 2, /**< ASN.1 four */
    RACH_ConfigGeneric_Msg1_FDM_eight = 3, /**< ASN.1 eight */
} RACH_ConfigGeneric_Msg1_FDM;


/**
 * @brief 枚举 RACH_ConfigGeneric_PreambleTransMax（ASN.1 preambleTransMax，源文件第 10892 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGeneric_PreambleTransMax {
    RACH_ConfigGeneric_PreambleTransMax_n3 = 0, /**< ASN.1 n3 */
    RACH_ConfigGeneric_PreambleTransMax_n4 = 1, /**< ASN.1 n4 */
    RACH_ConfigGeneric_PreambleTransMax_n5 = 2, /**< ASN.1 n5 */
    RACH_ConfigGeneric_PreambleTransMax_n6 = 3, /**< ASN.1 n6 */
    RACH_ConfigGeneric_PreambleTransMax_n7 = 4, /**< ASN.1 n7 */
    RACH_ConfigGeneric_PreambleTransMax_n8 = 5, /**< ASN.1 n8 */
    RACH_ConfigGeneric_PreambleTransMax_n10 = 6, /**< ASN.1 n10 */
    RACH_ConfigGeneric_PreambleTransMax_n20 = 7, /**< ASN.1 n20 */
    RACH_ConfigGeneric_PreambleTransMax_n50 = 8, /**< ASN.1 n50 */
    RACH_ConfigGeneric_PreambleTransMax_n100 = 9, /**< ASN.1 n100 */
    RACH_ConfigGeneric_PreambleTransMax_n200 = 10, /**< ASN.1 n200 */
} RACH_ConfigGeneric_PreambleTransMax;


/**
 * @brief 枚举 RACH_ConfigGeneric_PowerRampingStep（ASN.1 powerRampingStep，源文件第 10893 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGeneric_PowerRampingStep {
    RACH_ConfigGeneric_PowerRampingStep_dB0 = 0, /**< ASN.1 dB0 */
    RACH_ConfigGeneric_PowerRampingStep_dB2 = 1, /**< ASN.1 dB2 */
    RACH_ConfigGeneric_PowerRampingStep_dB4 = 2, /**< ASN.1 dB4 */
    RACH_ConfigGeneric_PowerRampingStep_dB6 = 3, /**< ASN.1 dB6 */
} RACH_ConfigGeneric_PowerRampingStep;


/**
 * @brief 枚举 RACH_ConfigGeneric_Ra_ResponseWindow（ASN.1 ra-ResponseWindow，源文件第 10894 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGeneric_Ra_ResponseWindow {
    RACH_ConfigGeneric_Ra_ResponseWindow_sl1 = 0, /**< ASN.1 sl1 */
    RACH_ConfigGeneric_Ra_ResponseWindow_sl2 = 1, /**< ASN.1 sl2 */
    RACH_ConfigGeneric_Ra_ResponseWindow_sl4 = 2, /**< ASN.1 sl4 */
    RACH_ConfigGeneric_Ra_ResponseWindow_sl8 = 3, /**< ASN.1 sl8 */
    RACH_ConfigGeneric_Ra_ResponseWindow_sl10 = 4, /**< ASN.1 sl10 */
    RACH_ConfigGeneric_Ra_ResponseWindow_sl20 = 5, /**< ASN.1 sl20 */
    RACH_ConfigGeneric_Ra_ResponseWindow_sl40 = 6, /**< ASN.1 sl40 */
    RACH_ConfigGeneric_Ra_ResponseWindow_sl80 = 7, /**< ASN.1 sl80 */
} RACH_ConfigGeneric_Ra_ResponseWindow;


/**
 * @brief 枚举 RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16（ASN.1 prach-ConfigurationPeriodScaling-IAB-r16，源文件第 10897 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16 {
    RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16_scf1 = 0, /**< ASN.1 scf1 */
    RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16_scf2 = 1, /**< ASN.1 scf2 */
    RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16_scf4 = 2, /**< ASN.1 scf4 */
    RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16_scf8 = 3, /**< ASN.1 scf8 */
    RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16_scf16 = 4, /**< ASN.1 scf16 */
    RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16_scf32 = 5, /**< ASN.1 scf32 */
    RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16_scf64 = 6, /**< ASN.1 scf64 */
} RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16;


/**
 * @brief 枚举 RACH_ConfigGeneric_ExtGroup1_Ra_ResponseWindow_v1610（ASN.1 ra-ResponseWindow-v1610，源文件第 10900 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGeneric_ExtGroup1_Ra_ResponseWindow_v1610 {
    RACH_ConfigGeneric_ExtGroup1_Ra_ResponseWindow_v1610_sl60 = 0, /**< ASN.1 sl60 */
    RACH_ConfigGeneric_ExtGroup1_Ra_ResponseWindow_v1610_sl160 = 1, /**< ASN.1 sl160 */
} RACH_ConfigGeneric_ExtGroup1_Ra_ResponseWindow_v1610;


/**
 * @brief 枚举 RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700（ASN.1 ra-ResponseWindow-v1700，源文件第 10904 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700 {
    RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700_sl240 = 0, /**< ASN.1 sl240 */
    RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700_sl320 = 1, /**< ASN.1 sl320 */
    RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700_sl640 = 2, /**< ASN.1 sl640 */
    RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700_sl960 = 3, /**< ASN.1 sl960 */
    RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700_sl1280 = 4, /**< ASN.1 sl1280 */
    RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700_sl1920 = 5, /**< ASN.1 sl1920 */
    RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700_sl2560 = 6, /**< ASN.1 sl2560 */
} RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700;


/**
 * @brief 枚举 RACH_ConfigGenericTwoStepRA_r16_MsgA_RO_FDM_r16（ASN.1 msgA-RO-FDM-r16，源文件第 10913 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGenericTwoStepRA_r16_MsgA_RO_FDM_r16 {
    RACH_ConfigGenericTwoStepRA_r16_MsgA_RO_FDM_r16_one = 0, /**< ASN.1 one */
    RACH_ConfigGenericTwoStepRA_r16_MsgA_RO_FDM_r16_two = 1, /**< ASN.1 two */
    RACH_ConfigGenericTwoStepRA_r16_MsgA_RO_FDM_r16_four = 2, /**< ASN.1 four */
    RACH_ConfigGenericTwoStepRA_r16_MsgA_RO_FDM_r16_eight = 3, /**< ASN.1 eight */
} RACH_ConfigGenericTwoStepRA_r16_MsgA_RO_FDM_r16;


/**
 * @brief 枚举 RACH_ConfigGenericTwoStepRA_r16_MsgA_PreamblePowerRampingStep_r16（ASN.1 msgA-PreamblePowerRampingStep-r16，源文件第 10916 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGenericTwoStepRA_r16_MsgA_PreamblePowerRampingStep_r16 {
    RACH_ConfigGenericTwoStepRA_r16_MsgA_PreamblePowerRampingStep_r16_dB0 = 0, /**< ASN.1 dB0 */
    RACH_ConfigGenericTwoStepRA_r16_MsgA_PreamblePowerRampingStep_r16_dB2 = 1, /**< ASN.1 dB2 */
    RACH_ConfigGenericTwoStepRA_r16_MsgA_PreamblePowerRampingStep_r16_dB4 = 2, /**< ASN.1 dB4 */
    RACH_ConfigGenericTwoStepRA_r16_MsgA_PreamblePowerRampingStep_r16_dB6 = 3, /**< ASN.1 dB6 */
} RACH_ConfigGenericTwoStepRA_r16_MsgA_PreamblePowerRampingStep_r16;


/**
 * @brief 枚举 RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16（ASN.1 msgB-ResponseWindow-r16，源文件第 10918 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16 {
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16_sl1 = 0, /**< ASN.1 sl1 */
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16_sl2 = 1, /**< ASN.1 sl2 */
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16_sl4 = 2, /**< ASN.1 sl4 */
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16_sl8 = 3, /**< ASN.1 sl8 */
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16_sl10 = 4, /**< ASN.1 sl10 */
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16_sl20 = 5, /**< ASN.1 sl20 */
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16_sl40 = 6, /**< ASN.1 sl40 */
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16_sl80 = 7, /**< ASN.1 sl80 */
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16_sl160 = 8, /**< ASN.1 sl160 */
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16_sl320 = 9, /**< ASN.1 sl320 */
} RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16;


/**
 * @brief 枚举 RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16（ASN.1 preambleTransMax-r16，源文件第 10920 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16 {
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n3 = 0, /**< ASN.1 n3 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n4 = 1, /**< ASN.1 n4 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n5 = 2, /**< ASN.1 n5 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n6 = 3, /**< ASN.1 n6 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n7 = 4, /**< ASN.1 n7 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n8 = 5, /**< ASN.1 n8 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n10 = 6, /**< ASN.1 n10 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n20 = 7, /**< ASN.1 n20 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n50 = 8, /**< ASN.1 n50 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n100 = 9, /**< ASN.1 n100 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16_n200 = 10, /**< ASN.1 n200 */
} RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16;


/**
 * @brief 枚举 RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700（ASN.1 msgB-ResponseWindow-v1700，源文件第 10923 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700 {
    RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700_sl240 = 0, /**< ASN.1 sl240 */
    RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700_sl640 = 1, /**< ASN.1 sl640 */
    RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700_sl960 = 2, /**< ASN.1 sl960 */
    RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700_sl1280 = 3, /**< ASN.1 sl1280 */
    RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700_sl1920 = 4, /**< ASN.1 sl1920 */
    RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700_sl2560 = 5, /**< ASN.1 sl2560 */
} RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700;


/**
 * @brief 枚举 RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18（ASN.1 ssb-perRACH-Occasion-r18，源文件第 10933 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18 {
    RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18_oneEighth = 0, /**< ASN.1 oneEighth */
    RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18_oneFourth = 1, /**< ASN.1 oneFourth */
    RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18_oneHalf = 2, /**< ASN.1 oneHalf */
    RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18_one = 3, /**< ASN.1 one */
    RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18_two = 4, /**< ASN.1 two */
    RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18_four = 5, /**< ASN.1 four */
    RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18_eight = 6, /**< ASN.1 eight */
    RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18_sixteen = 7, /**< ASN.1 sixteen */
} RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18;


/**
 * @brief 枚举 RA_Prioritization_PowerRampingStepHighPriority（ASN.1 powerRampingStepHighPriority，源文件第 10948 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_Prioritization_PowerRampingStepHighPriority {
    RA_Prioritization_PowerRampingStepHighPriority_dB0 = 0, /**< ASN.1 dB0 */
    RA_Prioritization_PowerRampingStepHighPriority_dB2 = 1, /**< ASN.1 dB2 */
    RA_Prioritization_PowerRampingStepHighPriority_dB4 = 2, /**< ASN.1 dB4 */
    RA_Prioritization_PowerRampingStepHighPriority_dB6 = 3, /**< ASN.1 dB6 */
} RA_Prioritization_PowerRampingStepHighPriority;


/**
 * @brief 枚举 RA_Prioritization_ScalingFactorBI（ASN.1 scalingFactorBI，源文件第 10949 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RA_Prioritization_ScalingFactorBI {
    RA_Prioritization_ScalingFactorBI_zero = 0, /**< ASN.1 zero */
    RA_Prioritization_ScalingFactorBI_dot25 = 1, /**< ASN.1 dot25 */
    RA_Prioritization_ScalingFactorBI_dot5 = 2, /**< ASN.1 dot5 */
    RA_Prioritization_ScalingFactorBI_dot75 = 3, /**< ASN.1 dot75 */
} RA_Prioritization_ScalingFactorBI;


/**
 * @brief 枚举 RadioBearerConfig_Srb3_ToRelease（ASN.1 srb3-ToRelease，源文件第 10974 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RadioBearerConfig_Srb3_ToRelease {
    RadioBearerConfig_Srb3_ToRelease_trueVal = 0, /**< ASN.1 trueVal */
} RadioBearerConfig_Srb3_ToRelease;


/**
 * @brief 枚举 RadioBearerConfig_ExtGroup1_Srb4_ToRelease_r17（ASN.1 srb4-ToRelease-r17，源文件第 10983 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RadioBearerConfig_ExtGroup1_Srb4_ToRelease_r17 {
    RadioBearerConfig_ExtGroup1_Srb4_ToRelease_r17_trueVal = 0, /**< ASN.1 trueVal */
} RadioBearerConfig_ExtGroup1_Srb4_ToRelease_r17;


/**
 * @brief 枚举 RadioBearerConfig_ExtGroup2_Srb5_ToRelease_r18（ASN.1 srb5-ToRelease-r18，源文件第 10987 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RadioBearerConfig_ExtGroup2_Srb5_ToRelease_r18 {
    RadioBearerConfig_ExtGroup2_Srb5_ToRelease_r18_trueVal = 0, /**< ASN.1 trueVal */
} RadioBearerConfig_ExtGroup2_Srb5_ToRelease_r18;


/**
 * @brief 枚举 SRB_ToAddMod_ReestablishPDCP（ASN.1 reestablishPDCP，源文件第 10995 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRB_ToAddMod_ReestablishPDCP {
    SRB_ToAddMod_ReestablishPDCP_trueVal = 0, /**< ASN.1 trueVal */
} SRB_ToAddMod_ReestablishPDCP;


/**
 * @brief 枚举 SRB_ToAddMod_DiscardOnPDCP（ASN.1 discardOnPDCP，源文件第 10996 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRB_ToAddMod_DiscardOnPDCP {
    SRB_ToAddMod_DiscardOnPDCP_trueVal = 0, /**< ASN.1 trueVal */
} SRB_ToAddMod_DiscardOnPDCP;


/**
 * @brief 枚举 SRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18（ASN.1 n3c-BearerAssociated-r18，源文件第 11004 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18 {
    SRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18_trueVal = 0, /**< ASN.1 trueVal */
} SRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18;


/**
 * @brief 枚举 DRB_ToAddMod_ReestablishPDCP（ASN.1 reestablishPDCP，源文件第 11016 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRB_ToAddMod_ReestablishPDCP {
    DRB_ToAddMod_ReestablishPDCP_trueVal = 0, /**< ASN.1 trueVal */
} DRB_ToAddMod_ReestablishPDCP;


/**
 * @brief 枚举 DRB_ToAddMod_RecoverPDCP（ASN.1 recoverPDCP，源文件第 11017 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRB_ToAddMod_RecoverPDCP {
    DRB_ToAddMod_RecoverPDCP_trueVal = 0, /**< ASN.1 trueVal */
} DRB_ToAddMod_RecoverPDCP;


/**
 * @brief 枚举 DRB_ToAddMod_ExtGroup1_Daps_Config_r16（ASN.1 daps-Config-r16，源文件第 11021 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRB_ToAddMod_ExtGroup1_Daps_Config_r16 {
    DRB_ToAddMod_ExtGroup1_Daps_Config_r16_trueVal = 0, /**< ASN.1 trueVal */
} DRB_ToAddMod_ExtGroup1_Daps_Config_r16;


/**
 * @brief 枚举 DRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18（ASN.1 n3c-BearerAssociated-r18，源文件第 11024 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18 {
    DRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18_trueVal = 0, /**< ASN.1 trueVal */
} DRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18;


/**
 * @brief 枚举 SecurityConfig_KeyToUse（ASN.1 keyToUse，源文件第 11031 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SecurityConfig_KeyToUse {
    SecurityConfig_KeyToUse_master = 0, /**< ASN.1 master */
    SecurityConfig_KeyToUse_secondary = 1, /**< ASN.1 secondary */
} SecurityConfig_KeyToUse;


/**
 * @brief 枚举 MRB_ToAddMod_r17_ReestablishPDCP_r17（ASN.1 reestablishPDCP-r17，源文件第 11041 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRB_ToAddMod_r17_ReestablishPDCP_r17 {
    MRB_ToAddMod_r17_ReestablishPDCP_r17_trueVal = 0, /**< ASN.1 trueVal */
} MRB_ToAddMod_r17_ReestablishPDCP_r17;


/**
 * @brief 枚举 MRB_ToAddMod_r17_RecoverPDCP_r17（ASN.1 recoverPDCP-r17，源文件第 11042 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRB_ToAddMod_r17_RecoverPDCP_r17 {
    MRB_ToAddMod_r17_RecoverPDCP_r17_trueVal = 0, /**< ASN.1 trueVal */
} MRB_ToAddMod_r17_RecoverPDCP_r17;


/**
 * @brief 枚举 RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount（ASN.1 beamFailureInstanceMaxCount，源文件第 11057 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount {
    RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount_n1 = 0, /**< ASN.1 n1 */
    RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount_n2 = 1, /**< ASN.1 n2 */
    RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount_n3 = 2, /**< ASN.1 n3 */
    RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount_n4 = 3, /**< ASN.1 n4 */
    RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount_n5 = 4, /**< ASN.1 n5 */
    RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount_n6 = 5, /**< ASN.1 n6 */
    RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount_n8 = 6, /**< ASN.1 n8 */
    RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount_n10 = 7, /**< ASN.1 n10 */
} RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount;


/**
 * @brief 枚举 RadioLinkMonitoringConfig_BeamFailureDetectionTimer（ASN.1 beamFailureDetectionTimer，源文件第 11058 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RadioLinkMonitoringConfig_BeamFailureDetectionTimer {
    RadioLinkMonitoringConfig_BeamFailureDetectionTimer_pbfd1 = 0, /**< ASN.1 pbfd1 */
    RadioLinkMonitoringConfig_BeamFailureDetectionTimer_pbfd2 = 1, /**< ASN.1 pbfd2 */
    RadioLinkMonitoringConfig_BeamFailureDetectionTimer_pbfd3 = 2, /**< ASN.1 pbfd3 */
    RadioLinkMonitoringConfig_BeamFailureDetectionTimer_pbfd4 = 3, /**< ASN.1 pbfd4 */
    RadioLinkMonitoringConfig_BeamFailureDetectionTimer_pbfd5 = 4, /**< ASN.1 pbfd5 */
    RadioLinkMonitoringConfig_BeamFailureDetectionTimer_pbfd6 = 5, /**< ASN.1 pbfd6 */
    RadioLinkMonitoringConfig_BeamFailureDetectionTimer_pbfd8 = 6, /**< ASN.1 pbfd8 */
    RadioLinkMonitoringConfig_BeamFailureDetectionTimer_pbfd10 = 7, /**< ASN.1 pbfd10 */
} RadioLinkMonitoringConfig_BeamFailureDetectionTimer;


/**
 * @brief 枚举 RadioLinkMonitoringRS_Purpose（ASN.1 purpose，源文件第 11073 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RadioLinkMonitoringRS_Purpose {
    RadioLinkMonitoringRS_Purpose_beamFailure = 0, /**< ASN.1 beamFailure */
    RadioLinkMonitoringRS_Purpose_rlf = 1, /**< ASN.1 rlf */
    RadioLinkMonitoringRS_Purpose_both = 2, /**< ASN.1 both */
} RadioLinkMonitoringRS_Purpose;


/**
 * @brief 枚举 BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17（ASN.1 beamFailureInstanceMaxCount-r17，源文件第 11086 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17 {
    BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17_n1 = 0, /**< ASN.1 n1 */
    BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17_n2 = 1, /**< ASN.1 n2 */
    BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17_n3 = 2, /**< ASN.1 n3 */
    BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17_n4 = 3, /**< ASN.1 n4 */
    BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17_n5 = 4, /**< ASN.1 n5 */
    BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17_n6 = 5, /**< ASN.1 n6 */
    BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17_n8 = 6, /**< ASN.1 n8 */
    BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17_n10 = 7, /**< ASN.1 n10 */
} BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17;


/**
 * @brief 枚举 BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17（ASN.1 beamFailureDetectionTimer-r17，源文件第 11087 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17 {
    BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17_pbfd1 = 0, /**< ASN.1 pbfd1 */
    BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17_pbfd2 = 1, /**< ASN.1 pbfd2 */
    BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17_pbfd3 = 2, /**< ASN.1 pbfd3 */
    BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17_pbfd4 = 3, /**< ASN.1 pbfd4 */
    BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17_pbfd5 = 4, /**< ASN.1 pbfd5 */
    BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17_pbfd6 = 5, /**< ASN.1 pbfd6 */
    BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17_pbfd8 = 6, /**< ASN.1 pbfd8 */
    BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17_pbfd10 = 7, /**< ASN.1 pbfd10 */
} BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17;


/**
 * @brief 枚举 RateMatchPattern_Dummy（ASN.1 dummy，源文件第 11139 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RateMatchPattern_Dummy {
    RateMatchPattern_Dummy_dynamic = 0, /**< ASN.1 dynamic */
    RateMatchPattern_Dummy_semiStatic = 1, /**< ASN.1 semiStatic */
} RateMatchPattern_Dummy;


/**
 * @brief 枚举 RateMatchPatternLTE_CRS_CarrierBandwidthDL（ASN.1 carrierBandwidthDL，源文件第 11158 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RateMatchPatternLTE_CRS_CarrierBandwidthDL {
    RateMatchPatternLTE_CRS_CarrierBandwidthDL_n6 = 0, /**< ASN.1 n6 */
    RateMatchPatternLTE_CRS_CarrierBandwidthDL_n15 = 1, /**< ASN.1 n15 */
    RateMatchPatternLTE_CRS_CarrierBandwidthDL_n25 = 2, /**< ASN.1 n25 */
    RateMatchPatternLTE_CRS_CarrierBandwidthDL_n50 = 3, /**< ASN.1 n50 */
    RateMatchPatternLTE_CRS_CarrierBandwidthDL_n75 = 4, /**< ASN.1 n75 */
    RateMatchPatternLTE_CRS_CarrierBandwidthDL_n100 = 5, /**< ASN.1 n100 */
    RateMatchPatternLTE_CRS_CarrierBandwidthDL_spare2 = 6, /**< ASN.1 spare2 */
    RateMatchPatternLTE_CRS_CarrierBandwidthDL_spare1 = 7, /**< ASN.1 spare1 */
} RateMatchPatternLTE_CRS_CarrierBandwidthDL;


/**
 * @brief 枚举 RateMatchPatternLTE_CRS_NrofCRS_Ports（ASN.1 nrofCRS-Ports，源文件第 11160 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RateMatchPatternLTE_CRS_NrofCRS_Ports {
    RateMatchPatternLTE_CRS_NrofCRS_Ports_n1 = 0, /**< ASN.1 n1 */
    RateMatchPatternLTE_CRS_NrofCRS_Ports_n2 = 1, /**< ASN.1 n2 */
    RateMatchPatternLTE_CRS_NrofCRS_Ports_n4 = 2, /**< ASN.1 n4 */
} RateMatchPatternLTE_CRS_NrofCRS_Ports;


/**
 * @brief 枚举 RateMatchPatternLTE_CRS_V_Shift（ASN.1 v-Shift，源文件第 11161 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RateMatchPatternLTE_CRS_V_Shift {
    RateMatchPatternLTE_CRS_V_Shift_n0 = 0, /**< ASN.1 n0 */
    RateMatchPatternLTE_CRS_V_Shift_n1 = 1, /**< ASN.1 n1 */
    RateMatchPatternLTE_CRS_V_Shift_n2 = 2, /**< ASN.1 n2 */
    RateMatchPatternLTE_CRS_V_Shift_n3 = 3, /**< ASN.1 n3 */
    RateMatchPatternLTE_CRS_V_Shift_n4 = 4, /**< ASN.1 n4 */
    RateMatchPatternLTE_CRS_V_Shift_n5 = 5, /**< ASN.1 n5 */
} RateMatchPatternLTE_CRS_V_Shift;


/**
 * @brief 枚举 ReferenceTimeInfo_r16_TimeInfoType_r16（ASN.1 timeInfoType-r16，源文件第 11183 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReferenceTimeInfo_r16_TimeInfoType_r16 {
    ReferenceTimeInfo_r16_TimeInfoType_r16_localClock = 0, /**< ASN.1 localClock */
} ReferenceTimeInfo_r16_TimeInfoType_r16;


/**
 * @brief 枚举 FDM_TDM_r16_RepetitionScheme_r16（ASN.1 repetitionScheme-r16，源文件第 11212 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FDM_TDM_r16_RepetitionScheme_r16 {
    FDM_TDM_r16_RepetitionScheme_r16_fdmSchemeA = 0, /**< ASN.1 fdmSchemeA */
    FDM_TDM_r16_RepetitionScheme_r16_fdmSchemeB = 1, /**< ASN.1 fdmSchemeB */
    FDM_TDM_r16_RepetitionScheme_r16_tdmSchemeA = 2, /**< ASN.1 tdmSchemeA */
} FDM_TDM_r16_RepetitionScheme_r16;


/**
 * @brief 枚举 SlotBased_r16_TciMapping_r16（ASN.1 tciMapping-r16，源文件第 11217 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SlotBased_r16_TciMapping_r16 {
    SlotBased_r16_TciMapping_r16_cyclicMapping = 0, /**< ASN.1 cyclicMapping */
    SlotBased_r16_TciMapping_r16_sequentialMapping = 1, /**< ASN.1 sequentialMapping */
} SlotBased_r16_TciMapping_r16;


/**
 * @brief 枚举 SlotBased_v1630_TciMapping_r16（ASN.1 tciMapping-r16，源文件第 11222 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SlotBased_v1630_TciMapping_r16 {
    SlotBased_v1630_TciMapping_r16_cyclicMapping = 0, /**< ASN.1 cyclicMapping */
    SlotBased_v1630_TciMapping_r16_sequentialMapping = 1, /**< ASN.1 sequentialMapping */
} SlotBased_v1630_TciMapping_r16;


/**
 * @brief 枚举 ReportCGI_EUTRA_ExtGroup1_UseAutonomousGaps_r16（ASN.1 useAutonomousGaps-r16，源文件第 11248 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReportCGI_EUTRA_ExtGroup1_UseAutonomousGaps_r16 {
    ReportCGI_EUTRA_ExtGroup1_UseAutonomousGaps_r16_setup = 0, /**< ASN.1 setup */
} ReportCGI_EUTRA_ExtGroup1_UseAutonomousGaps_r16;


/**
 * @brief 枚举 EventTriggerConfigInterRAT_ReportAmount（ASN.1 reportAmount，源文件第 11327 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EventTriggerConfigInterRAT_ReportAmount {
    EventTriggerConfigInterRAT_ReportAmount_r1 = 0, /**< ASN.1 r1 */
    EventTriggerConfigInterRAT_ReportAmount_r2 = 1, /**< ASN.1 r2 */
    EventTriggerConfigInterRAT_ReportAmount_r4 = 2, /**< ASN.1 r4 */
    EventTriggerConfigInterRAT_ReportAmount_r8 = 3, /**< ASN.1 r8 */
    EventTriggerConfigInterRAT_ReportAmount_r16 = 4, /**< ASN.1 r16 */
    EventTriggerConfigInterRAT_ReportAmount_r32 = 5, /**< ASN.1 r32 */
    EventTriggerConfigInterRAT_ReportAmount_r64 = 6, /**< ASN.1 r64 */
    EventTriggerConfigInterRAT_ReportAmount_infinity = 7, /**< ASN.1 infinity */
} EventTriggerConfigInterRAT_ReportAmount;


/**
 * @brief 枚举 EventTriggerConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16（ASN.1 includeCommonLocationInfo-r16，源文件第 11335 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EventTriggerConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16 {
    EventTriggerConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16_trueVal = 0, /**< ASN.1 trueVal */
} EventTriggerConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16;


/**
 * @brief 枚举 PeriodicalReportConfigInterRAT_ReportAmount（ASN.1 reportAmount，源文件第 11350 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PeriodicalReportConfigInterRAT_ReportAmount {
    PeriodicalReportConfigInterRAT_ReportAmount_r1 = 0, /**< ASN.1 r1 */
    PeriodicalReportConfigInterRAT_ReportAmount_r2 = 1, /**< ASN.1 r2 */
    PeriodicalReportConfigInterRAT_ReportAmount_r4 = 2, /**< ASN.1 r4 */
    PeriodicalReportConfigInterRAT_ReportAmount_r8 = 3, /**< ASN.1 r8 */
    PeriodicalReportConfigInterRAT_ReportAmount_r16 = 4, /**< ASN.1 r16 */
    PeriodicalReportConfigInterRAT_ReportAmount_r32 = 5, /**< ASN.1 r32 */
    PeriodicalReportConfigInterRAT_ReportAmount_r64 = 6, /**< ASN.1 r64 */
    PeriodicalReportConfigInterRAT_ReportAmount_infinity = 7, /**< ASN.1 infinity */
} PeriodicalReportConfigInterRAT_ReportAmount;


/**
 * @brief 枚举 PeriodicalReportConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16（ASN.1 includeCommonLocationInfo-r16，源文件第 11358 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PeriodicalReportConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16 {
    PeriodicalReportConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16_trueVal = 0, /**< ASN.1 trueVal */
} PeriodicalReportConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16;


/**
 * @brief 枚举 ReportCGI_ExtGroup1_UseAutonomousGaps_r16（ASN.1 useAutonomousGaps-r16，源文件第 11407 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReportCGI_ExtGroup1_UseAutonomousGaps_r16 {
    ReportCGI_ExtGroup1_UseAutonomousGaps_r16_setup = 0, /**< ASN.1 setup */
} ReportCGI_ExtGroup1_UseAutonomousGaps_r16;


/**
 * @brief 枚举 ReportSFTD_NR_ExtGroup1_ReportSFTD_NeighMeas（ASN.1 reportSFTD-NeighMeas，源文件第 11417 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReportSFTD_NR_ExtGroup1_ReportSFTD_NeighMeas {
    ReportSFTD_NR_ExtGroup1_ReportSFTD_NeighMeas_trueVal = 0, /**< ASN.1 trueVal */
} ReportSFTD_NR_ExtGroup1_ReportSFTD_NeighMeas;


/**
 * @brief 枚举 ReportSFTD_NR_ExtGroup1_Drx_SFTD_NeighMeas（ASN.1 drx-SFTD-NeighMeas，源文件第 11418 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ReportSFTD_NR_ExtGroup1_Drx_SFTD_NeighMeas {
    ReportSFTD_NR_ExtGroup1_Drx_SFTD_NeighMeas_trueVal = 0, /**< ASN.1 trueVal */
} ReportSFTD_NR_ExtGroup1_Drx_SFTD_NeighMeas;


/**
 * @brief 枚举 CondTriggerConfig_r16_ExtGroup1_NesEvent_r18（ASN.1 nesEvent-r18，源文件第 11465 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CondTriggerConfig_r16_ExtGroup1_NesEvent_r18 {
    CondTriggerConfig_r16_ExtGroup1_NesEvent_r18_trueVal = 0, /**< ASN.1 trueVal */
} CondTriggerConfig_r16_ExtGroup1_NesEvent_r18;


/**
 * @brief 枚举 EventTriggerConfig_ReportAmount（ASN.1 reportAmount，源文件第 11636 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EventTriggerConfig_ReportAmount {
    EventTriggerConfig_ReportAmount_r1 = 0, /**< ASN.1 r1 */
    EventTriggerConfig_ReportAmount_r2 = 1, /**< ASN.1 r2 */
    EventTriggerConfig_ReportAmount_r4 = 2, /**< ASN.1 r4 */
    EventTriggerConfig_ReportAmount_r8 = 3, /**< ASN.1 r8 */
    EventTriggerConfig_ReportAmount_r16 = 4, /**< ASN.1 r16 */
    EventTriggerConfig_ReportAmount_r32 = 5, /**< ASN.1 r32 */
    EventTriggerConfig_ReportAmount_r64 = 6, /**< ASN.1 r64 */
    EventTriggerConfig_ReportAmount_infinity = 7, /**< ASN.1 infinity */
} EventTriggerConfig_ReportAmount;


/**
 * @brief 枚举 EventTriggerConfig_ReportAddNeighMeas（ASN.1 reportAddNeighMeas，源文件第 11642 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EventTriggerConfig_ReportAddNeighMeas {
    EventTriggerConfig_ReportAddNeighMeas_setup = 0, /**< ASN.1 setup */
} EventTriggerConfig_ReportAddNeighMeas;


/**
 * @brief 枚举 EventTriggerConfig_ExtGroup1_IncludeCommonLocationInfo_r16（ASN.1 includeCommonLocationInfo-r16，源文件第 11647 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EventTriggerConfig_ExtGroup1_IncludeCommonLocationInfo_r16 {
    EventTriggerConfig_ExtGroup1_IncludeCommonLocationInfo_r16_trueVal = 0, /**< ASN.1 trueVal */
} EventTriggerConfig_ExtGroup1_IncludeCommonLocationInfo_r16;


/**
 * @brief 枚举 EventTriggerConfig_ExtGroup2_CoarseLocationRequest_r17（ASN.1 coarseLocationRequest-r17，源文件第 11653 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EventTriggerConfig_ExtGroup2_CoarseLocationRequest_r17 {
    EventTriggerConfig_ExtGroup2_CoarseLocationRequest_r17_trueVal = 0, /**< ASN.1 trueVal */
} EventTriggerConfig_ExtGroup2_CoarseLocationRequest_r17;


/**
 * @brief 枚举 PeriodicalReportConfig_ReportAmount（ASN.1 reportAmount，源文件第 11668 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PeriodicalReportConfig_ReportAmount {
    PeriodicalReportConfig_ReportAmount_r1 = 0, /**< ASN.1 r1 */
    PeriodicalReportConfig_ReportAmount_r2 = 1, /**< ASN.1 r2 */
    PeriodicalReportConfig_ReportAmount_r4 = 2, /**< ASN.1 r4 */
    PeriodicalReportConfig_ReportAmount_r8 = 3, /**< ASN.1 r8 */
    PeriodicalReportConfig_ReportAmount_r16 = 4, /**< ASN.1 r16 */
    PeriodicalReportConfig_ReportAmount_r32 = 5, /**< ASN.1 r32 */
    PeriodicalReportConfig_ReportAmount_r64 = 6, /**< ASN.1 r64 */
    PeriodicalReportConfig_ReportAmount_infinity = 7, /**< ASN.1 infinity */
} PeriodicalReportConfig_ReportAmount;


/**
 * @brief 枚举 PeriodicalReportConfig_ExtGroup1_IncludeCommonLocationInfo_r16（ASN.1 includeCommonLocationInfo-r16，源文件第 11678 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PeriodicalReportConfig_ExtGroup1_IncludeCommonLocationInfo_r16 {
    PeriodicalReportConfig_ExtGroup1_IncludeCommonLocationInfo_r16_trueVal = 0, /**< ASN.1 trueVal */
} PeriodicalReportConfig_ExtGroup1_IncludeCommonLocationInfo_r16;


/**
 * @brief 枚举 PeriodicalReportConfig_ExtGroup1_ReportAddNeighMeas_r16（ASN.1 reportAddNeighMeas-r16，源文件第 11683 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PeriodicalReportConfig_ExtGroup1_ReportAddNeighMeas_r16 {
    PeriodicalReportConfig_ExtGroup1_ReportAddNeighMeas_r16_setup = 0, /**< ASN.1 setup */
} PeriodicalReportConfig_ExtGroup1_ReportAddNeighMeas_r16;


/**
 * @brief 枚举 PeriodicalReportConfig_ExtGroup2_CoarseLocationRequest_r17（ASN.1 coarseLocationRequest-r17，源文件第 11687 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PeriodicalReportConfig_ExtGroup2_CoarseLocationRequest_r17 {
    PeriodicalReportConfig_ExtGroup2_CoarseLocationRequest_r17_trueVal = 0, /**< ASN.1 trueVal */
} PeriodicalReportConfig_ExtGroup2_CoarseLocationRequest_r17;


/**
 * @brief 枚举 CLI_EventTriggerConfig_r16_ReportAmount_r16（ASN.1 reportAmount-r16，源文件第 11728 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CLI_EventTriggerConfig_r16_ReportAmount_r16 {
    CLI_EventTriggerConfig_r16_ReportAmount_r16_r1 = 0, /**< ASN.1 r1 */
    CLI_EventTriggerConfig_r16_ReportAmount_r16_r2 = 1, /**< ASN.1 r2 */
    CLI_EventTriggerConfig_r16_ReportAmount_r16_r4 = 2, /**< ASN.1 r4 */
    CLI_EventTriggerConfig_r16_ReportAmount_r16_r8 = 3, /**< ASN.1 r8 */
    CLI_EventTriggerConfig_r16_ReportAmount_r16_r16 = 4, /**< ASN.1 r16 */
    CLI_EventTriggerConfig_r16_ReportAmount_r16_r32 = 5, /**< ASN.1 r32 */
    CLI_EventTriggerConfig_r16_ReportAmount_r16_r64 = 6, /**< ASN.1 r64 */
    CLI_EventTriggerConfig_r16_ReportAmount_r16_infinity = 7, /**< ASN.1 infinity */
} CLI_EventTriggerConfig_r16_ReportAmount_r16;


/**
 * @brief 枚举 CLI_PeriodicalReportConfig_r16_ReportAmount_r16（ASN.1 reportAmount-r16，源文件第 11735 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CLI_PeriodicalReportConfig_r16_ReportAmount_r16 {
    CLI_PeriodicalReportConfig_r16_ReportAmount_r16_r1 = 0, /**< ASN.1 r1 */
    CLI_PeriodicalReportConfig_r16_ReportAmount_r16_r2 = 1, /**< ASN.1 r2 */
    CLI_PeriodicalReportConfig_r16_ReportAmount_r16_r4 = 2, /**< ASN.1 r4 */
    CLI_PeriodicalReportConfig_r16_ReportAmount_r16_r8 = 3, /**< ASN.1 r8 */
    CLI_PeriodicalReportConfig_r16_ReportAmount_r16_r16 = 4, /**< ASN.1 r16 */
    CLI_PeriodicalReportConfig_r16_ReportAmount_r16_r32 = 5, /**< ASN.1 r32 */
    CLI_PeriodicalReportConfig_r16_ReportAmount_r16_r64 = 6, /**< ASN.1 r64 */
    CLI_PeriodicalReportConfig_r16_ReportAmount_r16_infinity = 7, /**< ASN.1 infinity */
} CLI_PeriodicalReportConfig_r16_ReportAmount_r16;


/**
 * @brief 枚举 RxTxPeriodical_r17_ReportAmount_r17（ASN.1 reportAmount-r17，源文件第 11743 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RxTxPeriodical_r17_ReportAmount_r17 {
    RxTxPeriodical_r17_ReportAmount_r17_r1 = 0, /**< ASN.1 r1 */
    RxTxPeriodical_r17_ReportAmount_r17_infinity = 1, /**< ASN.1 infinity */
    RxTxPeriodical_r17_ReportAmount_r17_spare6 = 2, /**< ASN.1 spare6 */
    RxTxPeriodical_r17_ReportAmount_r17_spare5 = 3, /**< ASN.1 spare5 */
    RxTxPeriodical_r17_ReportAmount_r17_spare4 = 4, /**< ASN.1 spare4 */
    RxTxPeriodical_r17_ReportAmount_r17_spare3 = 5, /**< ASN.1 spare3 */
    RxTxPeriodical_r17_ReportAmount_r17_spare2 = 6, /**< ASN.1 spare2 */
    RxTxPeriodical_r17_ReportAmount_r17_spare1 = 7, /**< ASN.1 spare1 */
} RxTxPeriodical_r17_ReportAmount_r17;


/**
 * @brief 枚举 EventTriggerConfigNR_SL_r16_ReportAmount_r16（ASN.1 reportAmount-r16，源文件第 11793 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EventTriggerConfigNR_SL_r16_ReportAmount_r16 {
    EventTriggerConfigNR_SL_r16_ReportAmount_r16_r1 = 0, /**< ASN.1 r1 */
    EventTriggerConfigNR_SL_r16_ReportAmount_r16_r2 = 1, /**< ASN.1 r2 */
    EventTriggerConfigNR_SL_r16_ReportAmount_r16_r4 = 2, /**< ASN.1 r4 */
    EventTriggerConfigNR_SL_r16_ReportAmount_r16_r8 = 3, /**< ASN.1 r8 */
    EventTriggerConfigNR_SL_r16_ReportAmount_r16_r16 = 4, /**< ASN.1 r16 */
    EventTriggerConfigNR_SL_r16_ReportAmount_r16_r32 = 5, /**< ASN.1 r32 */
    EventTriggerConfigNR_SL_r16_ReportAmount_r16_r64 = 6, /**< ASN.1 r64 */
    EventTriggerConfigNR_SL_r16_ReportAmount_r16_infinity = 7, /**< ASN.1 infinity */
} EventTriggerConfigNR_SL_r16_ReportAmount_r16;


/**
 * @brief 枚举 PeriodicalReportConfigNR_SL_r16_ReportAmount_r16（ASN.1 reportAmount-r16，源文件第 11800 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PeriodicalReportConfigNR_SL_r16_ReportAmount_r16 {
    PeriodicalReportConfigNR_SL_r16_ReportAmount_r16_r1 = 0, /**< ASN.1 r1 */
    PeriodicalReportConfigNR_SL_r16_ReportAmount_r16_r2 = 1, /**< ASN.1 r2 */
    PeriodicalReportConfigNR_SL_r16_ReportAmount_r16_r4 = 2, /**< ASN.1 r4 */
    PeriodicalReportConfigNR_SL_r16_ReportAmount_r16_r8 = 3, /**< ASN.1 r8 */
    PeriodicalReportConfigNR_SL_r16_ReportAmount_r16_r16 = 4, /**< ASN.1 r16 */
    PeriodicalReportConfigNR_SL_r16_ReportAmount_r16_r32 = 5, /**< ASN.1 r32 */
    PeriodicalReportConfigNR_SL_r16_ReportAmount_r16_r64 = 6, /**< ASN.1 r64 */
    PeriodicalReportConfigNR_SL_r16_ReportAmount_r16_infinity = 7, /**< ASN.1 infinity */
} PeriodicalReportConfigNR_SL_r16_ReportAmount_r16;


/**
 * @brief 枚举 RLC_BearerConfig_ReestablishRLC（ASN.1 reestablishRLC，源文件第 11857 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLC_BearerConfig_ReestablishRLC {
    RLC_BearerConfig_ReestablishRLC_trueVal = 0, /**< ASN.1 trueVal */
} RLC_BearerConfig_ReestablishRLC;


/**
 * @brief 枚举 MulticastRLC_BearerConfig_r17_IsPTM_Entity_r17（ASN.1 isPTM-Entity-r17，源文件第 11874 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MulticastRLC_BearerConfig_r17_IsPTM_Entity_r17 {
    MulticastRLC_BearerConfig_r17_IsPTM_Entity_r17_trueVal = 0, /**< ASN.1 trueVal */
} MulticastRLC_BearerConfig_r17_IsPTM_Entity_r17;


/**
 * @brief 枚举 UL_AM_RLC_MaxRetxThreshold（ASN.1 maxRetxThreshold，源文件第 11905 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UL_AM_RLC_MaxRetxThreshold {
    UL_AM_RLC_MaxRetxThreshold_t1 = 0, /**< ASN.1 t1 */
    UL_AM_RLC_MaxRetxThreshold_t2 = 1, /**< ASN.1 t2 */
    UL_AM_RLC_MaxRetxThreshold_t3 = 2, /**< ASN.1 t3 */
    UL_AM_RLC_MaxRetxThreshold_t4 = 3, /**< ASN.1 t4 */
    UL_AM_RLC_MaxRetxThreshold_t6 = 4, /**< ASN.1 t6 */
    UL_AM_RLC_MaxRetxThreshold_t8 = 5, /**< ASN.1 t8 */
    UL_AM_RLC_MaxRetxThreshold_t16 = 6, /**< ASN.1 t16 */
    UL_AM_RLC_MaxRetxThreshold_t32 = 7, /**< ASN.1 t32 */
} UL_AM_RLC_MaxRetxThreshold;


/**
 * @brief 枚举 RLF_TimersAndConstants_T310（ASN.1 t310，源文件第 12006 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_TimersAndConstants_T310 {
    RLF_TimersAndConstants_T310_ms0 = 0, /**< ASN.1 ms0 */
    RLF_TimersAndConstants_T310_ms50 = 1, /**< ASN.1 ms50 */
    RLF_TimersAndConstants_T310_ms100 = 2, /**< ASN.1 ms100 */
    RLF_TimersAndConstants_T310_ms200 = 3, /**< ASN.1 ms200 */
    RLF_TimersAndConstants_T310_ms500 = 4, /**< ASN.1 ms500 */
    RLF_TimersAndConstants_T310_ms1000 = 5, /**< ASN.1 ms1000 */
    RLF_TimersAndConstants_T310_ms2000 = 6, /**< ASN.1 ms2000 */
    RLF_TimersAndConstants_T310_ms4000 = 7, /**< ASN.1 ms4000 */
    RLF_TimersAndConstants_T310_ms6000 = 8, /**< ASN.1 ms6000 */
} RLF_TimersAndConstants_T310;


/**
 * @brief 枚举 RLF_TimersAndConstants_N310（ASN.1 n310，源文件第 12007 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_TimersAndConstants_N310 {
    RLF_TimersAndConstants_N310_n1 = 0, /**< ASN.1 n1 */
    RLF_TimersAndConstants_N310_n2 = 1, /**< ASN.1 n2 */
    RLF_TimersAndConstants_N310_n3 = 2, /**< ASN.1 n3 */
    RLF_TimersAndConstants_N310_n4 = 3, /**< ASN.1 n4 */
    RLF_TimersAndConstants_N310_n6 = 4, /**< ASN.1 n6 */
    RLF_TimersAndConstants_N310_n8 = 5, /**< ASN.1 n8 */
    RLF_TimersAndConstants_N310_n10 = 6, /**< ASN.1 n10 */
    RLF_TimersAndConstants_N310_n20 = 7, /**< ASN.1 n20 */
} RLF_TimersAndConstants_N310;


/**
 * @brief 枚举 RLF_TimersAndConstants_N311（ASN.1 n311，源文件第 12008 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_TimersAndConstants_N311 {
    RLF_TimersAndConstants_N311_n1 = 0, /**< ASN.1 n1 */
    RLF_TimersAndConstants_N311_n2 = 1, /**< ASN.1 n2 */
    RLF_TimersAndConstants_N311_n3 = 2, /**< ASN.1 n3 */
    RLF_TimersAndConstants_N311_n4 = 3, /**< ASN.1 n4 */
    RLF_TimersAndConstants_N311_n5 = 4, /**< ASN.1 n5 */
    RLF_TimersAndConstants_N311_n6 = 5, /**< ASN.1 n6 */
    RLF_TimersAndConstants_N311_n8 = 6, /**< ASN.1 n8 */
    RLF_TimersAndConstants_N311_n10 = 7, /**< ASN.1 n10 */
} RLF_TimersAndConstants_N311;


/**
 * @brief 枚举 RLF_TimersAndConstants_ExtGroup1_T311（ASN.1 t311，源文件第 12011 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLF_TimersAndConstants_ExtGroup1_T311 {
    RLF_TimersAndConstants_ExtGroup1_T311_ms1000 = 0, /**< ASN.1 ms1000 */
    RLF_TimersAndConstants_ExtGroup1_T311_ms3000 = 1, /**< ASN.1 ms3000 */
    RLF_TimersAndConstants_ExtGroup1_T311_ms5000 = 2, /**< ASN.1 ms5000 */
    RLF_TimersAndConstants_ExtGroup1_T311_ms10000 = 3, /**< ASN.1 ms10000 */
    RLF_TimersAndConstants_ExtGroup1_T311_ms15000 = 4, /**< ASN.1 ms15000 */
    RLF_TimersAndConstants_ExtGroup1_T311_ms20000 = 5, /**< ASN.1 ms20000 */
    RLF_TimersAndConstants_ExtGroup1_T311_ms30000 = 6, /**< ASN.1 ms30000 */
} RLF_TimersAndConstants_ExtGroup1_T311;


/**
 * @brief 枚举 SchedulingRequestToAddMod_Sr_ProhibitTimer（ASN.1 sr-ProhibitTimer，源文件第 12076 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SchedulingRequestToAddMod_Sr_ProhibitTimer {
    SchedulingRequestToAddMod_Sr_ProhibitTimer_ms1 = 0, /**< ASN.1 ms1 */
    SchedulingRequestToAddMod_Sr_ProhibitTimer_ms2 = 1, /**< ASN.1 ms2 */
    SchedulingRequestToAddMod_Sr_ProhibitTimer_ms4 = 2, /**< ASN.1 ms4 */
    SchedulingRequestToAddMod_Sr_ProhibitTimer_ms8 = 3, /**< ASN.1 ms8 */
    SchedulingRequestToAddMod_Sr_ProhibitTimer_ms16 = 4, /**< ASN.1 ms16 */
    SchedulingRequestToAddMod_Sr_ProhibitTimer_ms32 = 5, /**< ASN.1 ms32 */
    SchedulingRequestToAddMod_Sr_ProhibitTimer_ms64 = 6, /**< ASN.1 ms64 */
    SchedulingRequestToAddMod_Sr_ProhibitTimer_ms128 = 7, /**< ASN.1 ms128 */
} SchedulingRequestToAddMod_Sr_ProhibitTimer;


/**
 * @brief 枚举 SchedulingRequestToAddMod_Sr_TransMax（ASN.1 sr-TransMax，源文件第 12077 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SchedulingRequestToAddMod_Sr_TransMax {
    SchedulingRequestToAddMod_Sr_TransMax_n4 = 0, /**< ASN.1 n4 */
    SchedulingRequestToAddMod_Sr_TransMax_n8 = 1, /**< ASN.1 n8 */
    SchedulingRequestToAddMod_Sr_TransMax_n16 = 2, /**< ASN.1 n16 */
    SchedulingRequestToAddMod_Sr_TransMax_n32 = 3, /**< ASN.1 n32 */
    SchedulingRequestToAddMod_Sr_TransMax_n64 = 4, /**< ASN.1 n64 */
    SchedulingRequestToAddMod_Sr_TransMax_spare3 = 5, /**< ASN.1 spare3 */
    SchedulingRequestToAddMod_Sr_TransMax_spare2 = 6, /**< ASN.1 spare2 */
    SchedulingRequestToAddMod_Sr_TransMax_spare1 = 7, /**< ASN.1 spare1 */
} SchedulingRequestToAddMod_Sr_TransMax;


/**
 * @brief 枚举 SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700（ASN.1 sr-ProhibitTimer-v1700，源文件第 12086 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700 {
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_ms192 = 0, /**< ASN.1 ms192 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_ms256 = 1, /**< ASN.1 ms256 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_ms320 = 2, /**< ASN.1 ms320 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_ms384 = 3, /**< ASN.1 ms384 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_ms448 = 4, /**< ASN.1 ms448 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_ms512 = 5, /**< ASN.1 ms512 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_ms576 = 6, /**< ASN.1 ms576 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_ms640 = 7, /**< ASN.1 ms640 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_ms1082 = 8, /**< ASN.1 ms1082 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_spare7 = 9, /**< ASN.1 spare7 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_spare6 = 10, /**< ASN.1 spare6 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_spare5 = 11, /**< ASN.1 spare5 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_spare4 = 12, /**< ASN.1 spare4 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_spare3 = 13, /**< ASN.1 spare3 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_spare2 = 14, /**< ASN.1 spare2 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700_spare1 = 15, /**< ASN.1 spare1 */
} SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700;


/**
 * @brief 枚举 SchedulingRequestResourceConfigExt_v1610_Phy_PriorityIndex_r16（ASN.1 phy-PriorityIndex-r16，源文件第 12122 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SchedulingRequestResourceConfigExt_v1610_Phy_PriorityIndex_r16 {
    SchedulingRequestResourceConfigExt_v1610_Phy_PriorityIndex_r16_p0 = 0, /**< ASN.1 p0 */
    SchedulingRequestResourceConfigExt_v1610_Phy_PriorityIndex_r16_p1 = 1, /**< ASN.1 p1 */
} SchedulingRequestResourceConfigExt_v1610_Phy_PriorityIndex_r16;


/**
 * @brief 枚举 SDAP_Config_Sdap_HeaderDL（ASN.1 sdap-HeaderDL，源文件第 12162 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDAP_Config_Sdap_HeaderDL {
    SDAP_Config_Sdap_HeaderDL_present = 0, /**< ASN.1 present */
    SDAP_Config_Sdap_HeaderDL_absent = 1, /**< ASN.1 absent */
} SDAP_Config_Sdap_HeaderDL;


/**
 * @brief 枚举 SDAP_Config_Sdap_HeaderUL（ASN.1 sdap-HeaderUL，源文件第 12163 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDAP_Config_Sdap_HeaderUL {
    SDAP_Config_Sdap_HeaderUL_present = 0, /**< ASN.1 present */
    SDAP_Config_Sdap_HeaderUL_absent = 1, /**< ASN.1 absent */
} SDAP_Config_Sdap_HeaderUL;


/**
 * @brief 枚举 SearchSpace_NrofCandidates_AggregationLevel1（ASN.1 nrofCandidates/aggregationLevel1，源文件第 12196 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpace_NrofCandidates_AggregationLevel1 {
    SearchSpace_NrofCandidates_AggregationLevel1_n0 = 0, /**< ASN.1 n0 */
    SearchSpace_NrofCandidates_AggregationLevel1_n1 = 1, /**< ASN.1 n1 */
    SearchSpace_NrofCandidates_AggregationLevel1_n2 = 2, /**< ASN.1 n2 */
    SearchSpace_NrofCandidates_AggregationLevel1_n3 = 3, /**< ASN.1 n3 */
    SearchSpace_NrofCandidates_AggregationLevel1_n4 = 4, /**< ASN.1 n4 */
    SearchSpace_NrofCandidates_AggregationLevel1_n5 = 5, /**< ASN.1 n5 */
    SearchSpace_NrofCandidates_AggregationLevel1_n6 = 6, /**< ASN.1 n6 */
    SearchSpace_NrofCandidates_AggregationLevel1_n8 = 7, /**< ASN.1 n8 */
} SearchSpace_NrofCandidates_AggregationLevel1;


/**
 * @brief 枚举 SearchSpace_NrofCandidates_AggregationLevel2（ASN.1 nrofCandidates/aggregationLevel2，源文件第 12197 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpace_NrofCandidates_AggregationLevel2 {
    SearchSpace_NrofCandidates_AggregationLevel2_n0 = 0, /**< ASN.1 n0 */
    SearchSpace_NrofCandidates_AggregationLevel2_n1 = 1, /**< ASN.1 n1 */
    SearchSpace_NrofCandidates_AggregationLevel2_n2 = 2, /**< ASN.1 n2 */
    SearchSpace_NrofCandidates_AggregationLevel2_n3 = 3, /**< ASN.1 n3 */
    SearchSpace_NrofCandidates_AggregationLevel2_n4 = 4, /**< ASN.1 n4 */
    SearchSpace_NrofCandidates_AggregationLevel2_n5 = 5, /**< ASN.1 n5 */
    SearchSpace_NrofCandidates_AggregationLevel2_n6 = 6, /**< ASN.1 n6 */
    SearchSpace_NrofCandidates_AggregationLevel2_n8 = 7, /**< ASN.1 n8 */
} SearchSpace_NrofCandidates_AggregationLevel2;


/**
 * @brief 枚举 SearchSpace_NrofCandidates_AggregationLevel4（ASN.1 nrofCandidates/aggregationLevel4，源文件第 12198 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpace_NrofCandidates_AggregationLevel4 {
    SearchSpace_NrofCandidates_AggregationLevel4_n0 = 0, /**< ASN.1 n0 */
    SearchSpace_NrofCandidates_AggregationLevel4_n1 = 1, /**< ASN.1 n1 */
    SearchSpace_NrofCandidates_AggregationLevel4_n2 = 2, /**< ASN.1 n2 */
    SearchSpace_NrofCandidates_AggregationLevel4_n3 = 3, /**< ASN.1 n3 */
    SearchSpace_NrofCandidates_AggregationLevel4_n4 = 4, /**< ASN.1 n4 */
    SearchSpace_NrofCandidates_AggregationLevel4_n5 = 5, /**< ASN.1 n5 */
    SearchSpace_NrofCandidates_AggregationLevel4_n6 = 6, /**< ASN.1 n6 */
    SearchSpace_NrofCandidates_AggregationLevel4_n8 = 7, /**< ASN.1 n8 */
} SearchSpace_NrofCandidates_AggregationLevel4;


/**
 * @brief 枚举 SearchSpace_NrofCandidates_AggregationLevel8（ASN.1 nrofCandidates/aggregationLevel8，源文件第 12199 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpace_NrofCandidates_AggregationLevel8 {
    SearchSpace_NrofCandidates_AggregationLevel8_n0 = 0, /**< ASN.1 n0 */
    SearchSpace_NrofCandidates_AggregationLevel8_n1 = 1, /**< ASN.1 n1 */
    SearchSpace_NrofCandidates_AggregationLevel8_n2 = 2, /**< ASN.1 n2 */
    SearchSpace_NrofCandidates_AggregationLevel8_n3 = 3, /**< ASN.1 n3 */
    SearchSpace_NrofCandidates_AggregationLevel8_n4 = 4, /**< ASN.1 n4 */
    SearchSpace_NrofCandidates_AggregationLevel8_n5 = 5, /**< ASN.1 n5 */
    SearchSpace_NrofCandidates_AggregationLevel8_n6 = 6, /**< ASN.1 n6 */
    SearchSpace_NrofCandidates_AggregationLevel8_n8 = 7, /**< ASN.1 n8 */
} SearchSpace_NrofCandidates_AggregationLevel8;


/**
 * @brief 枚举 SearchSpace_NrofCandidates_AggregationLevel16（ASN.1 nrofCandidates/aggregationLevel16，源文件第 12200 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpace_NrofCandidates_AggregationLevel16 {
    SearchSpace_NrofCandidates_AggregationLevel16_n0 = 0, /**< ASN.1 n0 */
    SearchSpace_NrofCandidates_AggregationLevel16_n1 = 1, /**< ASN.1 n1 */
    SearchSpace_NrofCandidates_AggregationLevel16_n2 = 2, /**< ASN.1 n2 */
    SearchSpace_NrofCandidates_AggregationLevel16_n3 = 3, /**< ASN.1 n3 */
    SearchSpace_NrofCandidates_AggregationLevel16_n4 = 4, /**< ASN.1 n4 */
    SearchSpace_NrofCandidates_AggregationLevel16_n5 = 5, /**< ASN.1 n5 */
    SearchSpace_NrofCandidates_AggregationLevel16_n6 = 6, /**< ASN.1 n6 */
    SearchSpace_NrofCandidates_AggregationLevel16_n8 = 7, /**< ASN.1 n8 */
} SearchSpace_NrofCandidates_AggregationLevel16;


/**
 * @brief 枚举 SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel1（ASN.1 searchSpaceType/common/dci-Format2-0/nrofCandidates-SFI/aggregationLevel1，源文件第 12209 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel1 {
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel1_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel1_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel1;


/**
 * @brief 枚举 SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel2（ASN.1 searchSpaceType/common/dci-Format2-0/nrofCandidates-SFI/aggregationLevel2，源文件第 12210 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel2 {
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel2_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel2_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel2;


/**
 * @brief 枚举 SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel4（ASN.1 searchSpaceType/common/dci-Format2-0/nrofCandidates-SFI/aggregationLevel4，源文件第 12211 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel4 {
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel4_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel4_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel4;


/**
 * @brief 枚举 SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel8（ASN.1 searchSpaceType/common/dci-Format2-0/nrofCandidates-SFI/aggregationLevel8，源文件第 12212 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel8 {
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel8_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel8_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel8;


/**
 * @brief 枚举 SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel16（ASN.1 searchSpaceType/common/dci-Format2-0/nrofCandidates-SFI/aggregationLevel16，源文件第 12213 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel16 {
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel16;


/**
 * @brief 枚举 SearchSpaceType_Common_Dci_Format2_3_Dummy1（ASN.1 searchSpaceType/common/dci-Format2-3/dummy1，源文件第 12224 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Common_Dci_Format2_3_Dummy1 {
    SearchSpaceType_Common_Dci_Format2_3_Dummy1_sl1 = 0, /**< ASN.1 sl1 */
    SearchSpaceType_Common_Dci_Format2_3_Dummy1_sl2 = 1, /**< ASN.1 sl2 */
    SearchSpaceType_Common_Dci_Format2_3_Dummy1_sl4 = 2, /**< ASN.1 sl4 */
    SearchSpaceType_Common_Dci_Format2_3_Dummy1_sl5 = 3, /**< ASN.1 sl5 */
    SearchSpaceType_Common_Dci_Format2_3_Dummy1_sl8 = 4, /**< ASN.1 sl8 */
    SearchSpaceType_Common_Dci_Format2_3_Dummy1_sl10 = 5, /**< ASN.1 sl10 */
    SearchSpaceType_Common_Dci_Format2_3_Dummy1_sl16 = 6, /**< ASN.1 sl16 */
    SearchSpaceType_Common_Dci_Format2_3_Dummy1_sl20 = 7, /**< ASN.1 sl20 */
} SearchSpaceType_Common_Dci_Format2_3_Dummy1;


/**
 * @brief 枚举 SearchSpaceType_Common_Dci_Format2_3_Dummy2（ASN.1 searchSpaceType/common/dci-Format2-3/dummy2，源文件第 12225 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Common_Dci_Format2_3_Dummy2 {
    SearchSpaceType_Common_Dci_Format2_3_Dummy2_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceType_Common_Dci_Format2_3_Dummy2_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceType_Common_Dci_Format2_3_Dummy2;


/**
 * @brief 枚举 SearchSpaceType_Ue_Specific_Dci_Formats（ASN.1 searchSpaceType/ue-Specific/dci-Formats，源文件第 12230 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Ue_Specific_Dci_Formats {
    SearchSpaceType_Ue_Specific_Dci_Formats_formats0_0_And_1_0 = 0, /**< ASN.1 formats0-0-And-1-0 */
    SearchSpaceType_Ue_Specific_Dci_Formats_formats0_1_And_1_1 = 1, /**< ASN.1 formats0-1-And-1-1 */
} SearchSpaceType_Ue_Specific_Dci_Formats;


/**
 * @brief 枚举 SearchSpaceType_Ue_Specific_ExtGroup1_Dci_Formats_MT_r16（ASN.1 searchSpaceType/ue-Specific/dci-Formats-MT-r16，源文件第 12233 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Ue_Specific_ExtGroup1_Dci_Formats_MT_r16 {
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_Formats_MT_r16_formats2_5 = 0, /**< ASN.1 formats2-5 */
} SearchSpaceType_Ue_Specific_ExtGroup1_Dci_Formats_MT_r16;


/**
 * @brief 枚举 SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsSL_r16（ASN.1 searchSpaceType/ue-Specific/dci-FormatsSL-r16，源文件第 12234 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsSL_r16 {
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsSL_r16_formats0_0_And_1_0 = 0, /**< ASN.1 formats0-0-And-1-0 */
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsSL_r16_formats0_1_And_1_1 = 1, /**< ASN.1 formats0-1-And-1-1 */
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsSL_r16_formats3_0 = 2, /**< ASN.1 formats3-0 */
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsSL_r16_formats3_1 = 3, /**< ASN.1 formats3-1 */
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsSL_r16_formats3_0_And_3_1 = 4, /**< ASN.1 formats3-0-And-3-1 */
} SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsSL_r16;


/**
 * @brief 枚举 SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsExt_r16（ASN.1 searchSpaceType/ue-Specific/dci-FormatsExt-r16，源文件第 12236 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsExt_r16 {
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsExt_r16_formats0_2_And_1_2 = 0, /**< ASN.1 formats0-2-And-1-2 */
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsExt_r16_formats0_1_And_1_1And_0_2_And_1_2 = 1, /**< ASN.1 formats0-1-And-1-1And-0-2-And-1-2 */
} SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsExt_r16;


/**
 * @brief 枚举 SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsMC（ASN.1 searchSpaceType/ue-Specific/dci-FormatsMC，源文件第 12240 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsMC {
    SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsMC_formats0_3 = 0, /**< ASN.1 formats0-3 */
    SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsMC_formats1_3 = 1, /**< ASN.1 formats1-3 */
    SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsMC_formats0_3_And_1_3 = 2, /**< ASN.1 formats0-3-And-1-3 */
} SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsMC;


/**
 * @brief 枚举 SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsNCR_r18（ASN.1 searchSpaceType/ue-Specific/dci-FormatsNCR-r18，源文件第 12241 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsNCR_r18 {
    SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsNCR_r18_formats2_8 = 0, /**< ASN.1 formats2-8 */
} SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsNCR_r18;


/**
 * @brief 枚举 SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel1_r16（ASN.1 searchSpaceType-r16/common-r16/dci-Format2-4-r16/nrofCandidates-CI-r16/aggregationLevel1-r16，源文件第 12253 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel1_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel1_r16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel1_r16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel1_r16;


/**
 * @brief 枚举 SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel2_r16（ASN.1 searchSpaceType-r16/common-r16/dci-Format2-4-r16/nrofCandidates-CI-r16/aggregationLevel2-r16，源文件第 12254 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel2_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel2_r16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel2_r16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel2_r16;


/**
 * @brief 枚举 SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel4_r16（ASN.1 searchSpaceType-r16/common-r16/dci-Format2-4-r16/nrofCandidates-CI-r16/aggregationLevel4-r16，源文件第 12255 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel4_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel4_r16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel4_r16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel4_r16;


/**
 * @brief 枚举 SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel8_r16（ASN.1 searchSpaceType-r16/common-r16/dci-Format2-4-r16/nrofCandidates-CI-r16/aggregationLevel8-r16，源文件第 12256 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel8_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel8_r16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel8_r16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel8_r16;


/**
 * @brief 枚举 SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel16_r16（ASN.1 searchSpaceType-r16/common-r16/dci-Format2-4-r16/nrofCandidates-CI-r16/aggregationLevel16-r16，源文件第 12257 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel16_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel16_r16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel16_r16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel16_r16;


/**
 * @brief 枚举 SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel1_r16（ASN.1 searchSpaceType-r16/common-r16/dci-Format2-5-r16/nrofCandidates-IAB-r16/aggregationLevel1-r16，源文件第 12263 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel1_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel1_r16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel1_r16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel1_r16;


/**
 * @brief 枚举 SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel2_r16（ASN.1 searchSpaceType-r16/common-r16/dci-Format2-5-r16/nrofCandidates-IAB-r16/aggregationLevel2-r16，源文件第 12264 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel2_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel2_r16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel2_r16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel2_r16;


/**
 * @brief 枚举 SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel4_r16（ASN.1 searchSpaceType-r16/common-r16/dci-Format2-5-r16/nrofCandidates-IAB-r16/aggregationLevel4-r16，源文件第 12265 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel4_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel4_r16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel4_r16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel4_r16;


/**
 * @brief 枚举 SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel8_r16（ASN.1 searchSpaceType-r16/common-r16/dci-Format2-5-r16/nrofCandidates-IAB-r16/aggregationLevel8-r16，源文件第 12266 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel8_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel8_r16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel8_r16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel8_r16;


/**
 * @brief 枚举 SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel16_r16（ASN.1 searchSpaceType-r16/common-r16/dci-Format2-5-r16/nrofCandidates-IAB-r16/aggregationLevel16-r16，源文件第 12267 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel16_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel16_r16_n1 = 0, /**< ASN.1 n1 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel16_r16_n2 = 1, /**< ASN.1 n2 */
} SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel16_r16;


/**
 * @brief 枚举 SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel4_r17（ASN.1 searchSpaceType-r17/common-r17/dci-Format2-7-r17/nrofCandidates-PEI-r17/aggregationLevel4-r17，源文件第 12312 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel4_r17 {
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel4_r17_n0 = 0, /**< ASN.1 n0 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel4_r17_n1 = 1, /**< ASN.1 n1 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel4_r17_n2 = 2, /**< ASN.1 n2 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel4_r17_n3 = 3, /**< ASN.1 n3 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel4_r17_n4 = 4, /**< ASN.1 n4 */
} SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel4_r17;


/**
 * @brief 枚举 SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel8_r17（ASN.1 searchSpaceType-r17/common-r17/dci-Format2-7-r17/nrofCandidates-PEI-r17/aggregationLevel8-r17，源文件第 12313 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel8_r17 {
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel8_r17_n0 = 0, /**< ASN.1 n0 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel8_r17_n1 = 1, /**< ASN.1 n1 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel8_r17_n2 = 2, /**< ASN.1 n2 */
} SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel8_r17;


/**
 * @brief 枚举 SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel16_r17（ASN.1 searchSpaceType-r17/common-r17/dci-Format2-7-r17/nrofCandidates-PEI-r17/aggregationLevel16-r17，源文件第 12314 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel16_r17 {
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel16_r17_n0 = 0, /**< ASN.1 n0 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel16_r17_n1 = 1, /**< ASN.1 n1 */
} SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel16_r17;


/**
 * @brief 枚举 SemiStaticChannelAccessConfig_r16_Period_r16（ASN.1 period-r16，源文件第 12375 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SemiStaticChannelAccessConfig_r16_Period_r16 {
    SemiStaticChannelAccessConfig_r16_Period_r16_ms1 = 0, /**< ASN.1 ms1 */
    SemiStaticChannelAccessConfig_r16_Period_r16_ms2 = 1, /**< ASN.1 ms2 */
    SemiStaticChannelAccessConfig_r16_Period_r16_ms2dot5 = 2, /**< ASN.1 ms2dot5 */
    SemiStaticChannelAccessConfig_r16_Period_r16_ms4 = 3, /**< ASN.1 ms4 */
    SemiStaticChannelAccessConfig_r16_Period_r16_ms5 = 4, /**< ASN.1 ms5 */
    SemiStaticChannelAccessConfig_r16_Period_r16_ms10 = 5, /**< ASN.1 ms10 */
} SemiStaticChannelAccessConfig_r16_Period_r16;


/**
 * @brief 枚举 SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17（ASN.1 periodUE-r17，源文件第 12382 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17 {
    SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17_ms1 = 0, /**< ASN.1 ms1 */
    SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17_ms2 = 1, /**< ASN.1 ms2 */
    SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17_ms2dot5 = 2, /**< ASN.1 ms2dot5 */
    SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17_ms4 = 3, /**< ASN.1 ms4 */
    SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17_ms5 = 4, /**< ASN.1 ms5 */
    SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17_ms10 = 5, /**< ASN.1 ms10 */
    SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17_spare2 = 6, /**< ASN.1 spare2 */
    SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17_spare1 = 7, /**< ASN.1 spare1 */
} SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17;


/**
 * @brief 枚举 ServingCellConfig_Bwp_InactivityTimer（ASN.1 bwp-InactivityTimer，源文件第 12417 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_Bwp_InactivityTimer {
    ServingCellConfig_Bwp_InactivityTimer_ms2 = 0, /**< ASN.1 ms2 */
    ServingCellConfig_Bwp_InactivityTimer_ms3 = 1, /**< ASN.1 ms3 */
    ServingCellConfig_Bwp_InactivityTimer_ms4 = 2, /**< ASN.1 ms4 */
    ServingCellConfig_Bwp_InactivityTimer_ms5 = 3, /**< ASN.1 ms5 */
    ServingCellConfig_Bwp_InactivityTimer_ms6 = 4, /**< ASN.1 ms6 */
    ServingCellConfig_Bwp_InactivityTimer_ms8 = 5, /**< ASN.1 ms8 */
    ServingCellConfig_Bwp_InactivityTimer_ms10 = 6, /**< ASN.1 ms10 */
    ServingCellConfig_Bwp_InactivityTimer_ms20 = 7, /**< ASN.1 ms20 */
    ServingCellConfig_Bwp_InactivityTimer_ms30 = 8, /**< ASN.1 ms30 */
    ServingCellConfig_Bwp_InactivityTimer_ms40 = 9, /**< ASN.1 ms40 */
    ServingCellConfig_Bwp_InactivityTimer_ms50 = 10, /**< ASN.1 ms50 */
    ServingCellConfig_Bwp_InactivityTimer_ms60 = 11, /**< ASN.1 ms60 */
    ServingCellConfig_Bwp_InactivityTimer_ms80 = 12, /**< ASN.1 ms80 */
    ServingCellConfig_Bwp_InactivityTimer_ms100 = 13, /**< ASN.1 ms100 */
    ServingCellConfig_Bwp_InactivityTimer_ms200 = 14, /**< ASN.1 ms200 */
    ServingCellConfig_Bwp_InactivityTimer_ms300 = 15, /**< ASN.1 ms300 */
    ServingCellConfig_Bwp_InactivityTimer_ms500 = 16, /**< ASN.1 ms500 */
    ServingCellConfig_Bwp_InactivityTimer_ms750 = 17, /**< ASN.1 ms750 */
    ServingCellConfig_Bwp_InactivityTimer_ms1280 = 18, /**< ASN.1 ms1280 */
    ServingCellConfig_Bwp_InactivityTimer_ms1920 = 19, /**< ASN.1 ms1920 */
    ServingCellConfig_Bwp_InactivityTimer_ms2560 = 20, /**< ASN.1 ms2560 */
    ServingCellConfig_Bwp_InactivityTimer_spare10 = 21, /**< ASN.1 spare10 */
    ServingCellConfig_Bwp_InactivityTimer_spare9 = 22, /**< ASN.1 spare9 */
    ServingCellConfig_Bwp_InactivityTimer_spare8 = 23, /**< ASN.1 spare8 */
    ServingCellConfig_Bwp_InactivityTimer_spare7 = 24, /**< ASN.1 spare7 */
    ServingCellConfig_Bwp_InactivityTimer_spare6 = 25, /**< ASN.1 spare6 */
    ServingCellConfig_Bwp_InactivityTimer_spare5 = 26, /**< ASN.1 spare5 */
    ServingCellConfig_Bwp_InactivityTimer_spare4 = 27, /**< ASN.1 spare4 */
    ServingCellConfig_Bwp_InactivityTimer_spare3 = 28, /**< ASN.1 spare3 */
    ServingCellConfig_Bwp_InactivityTimer_spare2 = 29, /**< ASN.1 spare2 */
    ServingCellConfig_Bwp_InactivityTimer_spare1 = 30, /**< ASN.1 spare1 */
} ServingCellConfig_Bwp_InactivityTimer;


/**
 * @brief 枚举 ServingCellConfig_SCellDeactivationTimer（ASN.1 sCellDeactivationTimer，源文件第 12427 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_SCellDeactivationTimer {
    ServingCellConfig_SCellDeactivationTimer_ms20 = 0, /**< ASN.1 ms20 */
    ServingCellConfig_SCellDeactivationTimer_ms40 = 1, /**< ASN.1 ms40 */
    ServingCellConfig_SCellDeactivationTimer_ms80 = 2, /**< ASN.1 ms80 */
    ServingCellConfig_SCellDeactivationTimer_ms160 = 3, /**< ASN.1 ms160 */
    ServingCellConfig_SCellDeactivationTimer_ms200 = 4, /**< ASN.1 ms200 */
    ServingCellConfig_SCellDeactivationTimer_ms240 = 5, /**< ASN.1 ms240 */
    ServingCellConfig_SCellDeactivationTimer_ms320 = 6, /**< ASN.1 ms320 */
    ServingCellConfig_SCellDeactivationTimer_ms400 = 7, /**< ASN.1 ms400 */
    ServingCellConfig_SCellDeactivationTimer_ms480 = 8, /**< ASN.1 ms480 */
    ServingCellConfig_SCellDeactivationTimer_ms520 = 9, /**< ASN.1 ms520 */
    ServingCellConfig_SCellDeactivationTimer_ms640 = 10, /**< ASN.1 ms640 */
    ServingCellConfig_SCellDeactivationTimer_ms720 = 11, /**< ASN.1 ms720 */
    ServingCellConfig_SCellDeactivationTimer_ms840 = 12, /**< ASN.1 ms840 */
    ServingCellConfig_SCellDeactivationTimer_ms1280 = 13, /**< ASN.1 ms1280 */
    ServingCellConfig_SCellDeactivationTimer_spare2 = 14, /**< ASN.1 spare2 */
    ServingCellConfig_SCellDeactivationTimer_spare1 = 15, /**< ASN.1 spare1 */
} ServingCellConfig_SCellDeactivationTimer;


/**
 * @brief 枚举 ServingCellConfig_Dummy1（ASN.1 dummy1，源文件第 12432 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_Dummy1 {
    ServingCellConfig_Dummy1_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_Dummy1;


/**
 * @brief 枚举 ServingCellConfig_PathlossReferenceLinking（ASN.1 pathlossReferenceLinking，源文件第 12433 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_PathlossReferenceLinking {
    ServingCellConfig_PathlossReferenceLinking_spCell = 0, /**< ASN.1 spCell */
    ServingCellConfig_PathlossReferenceLinking_sCell = 1, /**< ASN.1 sCell */
} ServingCellConfig_PathlossReferenceLinking;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup2_SupplementaryUplinkRelease_r16（ASN.1 supplementaryUplinkRelease-r16，源文件第 12443 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup2_SupplementaryUplinkRelease_r16 {
    ServingCellConfig_ExtGroup2_SupplementaryUplinkRelease_r16_trueVal = 0, /**< ASN.1 trueVal */
} ServingCellConfig_ExtGroup2_SupplementaryUplinkRelease_r16;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup2_Csi_RS_ValidationWithDCI_r16（ASN.1 csi-RS-ValidationWithDCI-r16，源文件第 12455 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup2_Csi_RS_ValidationWithDCI_r16 {
    ServingCellConfig_ExtGroup2_Csi_RS_ValidationWithDCI_r16_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup2_Csi_RS_ValidationWithDCI_r16;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup2_Crs_RateMatch_PerCORESETPoolIndex_r16（ASN.1 crs-RateMatch-PerCORESETPoolIndex-r16，源文件第 12458 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup2_Crs_RateMatch_PerCORESETPoolIndex_r16 {
    ServingCellConfig_ExtGroup2_Crs_RateMatch_PerCORESETPoolIndex_r16_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup2_Crs_RateMatch_PerCORESETPoolIndex_r16;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup2_EnableTwoDefaultTCI_States_r16（ASN.1 enableTwoDefaultTCI-States-r16，源文件第 12459 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup2_EnableTwoDefaultTCI_States_r16 {
    ServingCellConfig_ExtGroup2_EnableTwoDefaultTCI_States_r16_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup2_EnableTwoDefaultTCI_States_r16;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup2_EnableDefaultTCI_StatePerCoresetPoolIndex_r16（ASN.1 enableDefaultTCI-StatePerCoresetPoolIndex-r16，源文件第 12460 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup2_EnableDefaultTCI_StatePerCoresetPoolIndex_r16 {
    ServingCellConfig_ExtGroup2_EnableDefaultTCI_StatePerCoresetPoolIndex_r16_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup2_EnableDefaultTCI_StatePerCoresetPoolIndex_r16;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup2_EnableBeamSwitchTiming_r16（ASN.1 enableBeamSwitchTiming-r16，源文件第 12461 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup2_EnableBeamSwitchTiming_r16 {
    ServingCellConfig_ExtGroup2_EnableBeamSwitchTiming_r16_trueVal = 0, /**< ASN.1 trueVal */
} ServingCellConfig_ExtGroup2_EnableBeamSwitchTiming_r16;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType1_r16（ASN.1 cbg-TxDiffTBsProcessingType1-r16，源文件第 12462 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType1_r16 {
    ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType1_r16_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType1_r16;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType2_r16（ASN.1 cbg-TxDiffTBsProcessingType2-r16，源文件第 12463 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType2_r16 {
    ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType2_r16_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType2_r16;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup3_DirectionalCollisionHandling_r16（ASN.1 directionalCollisionHandling-r16，源文件第 12466 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup3_DirectionalCollisionHandling_r16 {
    ServingCellConfig_ExtGroup3_DirectionalCollisionHandling_r16_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup3_DirectionalCollisionHandling_r16;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup4_ChannelAccessMode2_r17（ASN.1 channelAccessMode2-r17，源文件第 12473 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup4_ChannelAccessMode2_r17 {
    ServingCellConfig_ExtGroup4_ChannelAccessMode2_r17_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup4_ChannelAccessMode2_r17;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup4_TimeDomainHARQ_BundlingType1_r17（ASN.1 timeDomainHARQ-BundlingType1-r17，源文件第 12474 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup4_TimeDomainHARQ_BundlingType1_r17 {
    ServingCellConfig_ExtGroup4_TimeDomainHARQ_BundlingType1_r17_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup4_TimeDomainHARQ_BundlingType1_r17;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup4_NrofHARQ_BundlingGroups_r17（ASN.1 nrofHARQ-BundlingGroups-r17，源文件第 12475 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup4_NrofHARQ_BundlingGroups_r17 {
    ServingCellConfig_ExtGroup4_NrofHARQ_BundlingGroups_r17_n1 = 0, /**< ASN.1 n1 */
    ServingCellConfig_ExtGroup4_NrofHARQ_BundlingGroups_r17_n2 = 1, /**< ASN.1 n2 */
    ServingCellConfig_ExtGroup4_NrofHARQ_BundlingGroups_r17_n4 = 2, /**< ASN.1 n4 */
} ServingCellConfig_ExtGroup4_NrofHARQ_BundlingGroups_r17;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup4_Fdmed_ReceptionMulticast_r17（ASN.1 fdmed-ReceptionMulticast-r17，源文件第 12476 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup4_Fdmed_ReceptionMulticast_r17 {
    ServingCellConfig_ExtGroup4_Fdmed_ReceptionMulticast_r17_trueVal = 0, /**< ASN.1 trueVal */
} ServingCellConfig_ExtGroup4_Fdmed_ReceptionMulticast_r17;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup4_MoreThanOneNackOnlyMode_r17（ASN.1 moreThanOneNackOnlyMode-r17，源文件第 12477 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup4_MoreThanOneNackOnlyMode_r17 {
    ServingCellConfig_ExtGroup4_MoreThanOneNackOnlyMode_r17_mode2 = 0, /**< ASN.1 mode2 */
} ServingCellConfig_ExtGroup4_MoreThanOneNackOnlyMode_r17;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup4_DirectionalCollisionHandling_DC_r17（ASN.1 directionalCollisionHandling-DC-r17，源文件第 12479 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup4_DirectionalCollisionHandling_DC_r17 {
    ServingCellConfig_ExtGroup4_DirectionalCollisionHandling_DC_r17_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup4_DirectionalCollisionHandling_DC_r17;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup5_Lte_NeighCellsCRS_Assumptions_r17（ASN.1 lte-NeighCellsCRS-Assumptions-r17，源文件第 12483 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup5_Lte_NeighCellsCRS_Assumptions_r17 {
    ServingCellConfig_ExtGroup5_Lte_NeighCellsCRS_Assumptions_r17_falseVal = 0, /**< ASN.1 falseVal */
} ServingCellConfig_ExtGroup5_Lte_NeighCellsCRS_Assumptions_r17;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup6_CrossCarrierSchedulingConfigRelease_r17（ASN.1 crossCarrierSchedulingConfigRelease-r17，源文件第 12486 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup6_CrossCarrierSchedulingConfigRelease_r17 {
    ServingCellConfig_ExtGroup6_CrossCarrierSchedulingConfigRelease_r17_trueVal = 0, /**< ASN.1 trueVal */
} ServingCellConfig_ExtGroup6_CrossCarrierSchedulingConfigRelease_r17;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup7_MultiPDSCH_PerSlotType1_CB_r17（ASN.1 multiPDSCH-PerSlotType1-CB-r17，源文件第 12489 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup7_MultiPDSCH_PerSlotType1_CB_r17 {
    ServingCellConfig_ExtGroup7_MultiPDSCH_PerSlotType1_CB_r17_enabled = 0, /**< ASN.1 enabled */
    ServingCellConfig_ExtGroup7_MultiPDSCH_PerSlotType1_CB_r17_disabled = 1, /**< ASN.1 disabled */
} ServingCellConfig_ExtGroup7_MultiPDSCH_PerSlotType1_CB_r17;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup8_Pdcch_CandidateReceptionWith_CRS_Overlap_r18（ASN.1 pdcch-CandidateReceptionWith-CRS-Overlap-r18，源文件第 12494 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup8_Pdcch_CandidateReceptionWith_CRS_Overlap_r18 {
    ServingCellConfig_ExtGroup8_Pdcch_CandidateReceptionWith_CRS_Overlap_r18_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup8_Pdcch_CandidateReceptionWith_CRS_Overlap_r18;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup8_Cjt_Scheme_PDSCH_r18（ASN.1 cjt-Scheme-PDSCH-r18，源文件第 12495 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup8_Cjt_Scheme_PDSCH_r18 {
    ServingCellConfig_ExtGroup8_Cjt_Scheme_PDSCH_r18_cjtSchemeA = 0, /**< ASN.1 cjtSchemeA */
    ServingCellConfig_ExtGroup8_Cjt_Scheme_PDSCH_r18_cjtSchemeB = 1, /**< ASN.1 cjtSchemeB */
} ServingCellConfig_ExtGroup8_Cjt_Scheme_PDSCH_r18;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup8_Tag2_r18_N_TimingAdvanceOffset2_r18（ASN.1 tag2-r18/n-TimingAdvanceOffset2-r18，源文件第 12499 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup8_Tag2_r18_N_TimingAdvanceOffset2_r18 {
    ServingCellConfig_ExtGroup8_Tag2_r18_N_TimingAdvanceOffset2_r18_n0 = 0, /**< ASN.1 n0 */
    ServingCellConfig_ExtGroup8_Tag2_r18_N_TimingAdvanceOffset2_r18_n25600 = 1, /**< ASN.1 n25600 */
    ServingCellConfig_ExtGroup8_Tag2_r18_N_TimingAdvanceOffset2_r18_n39936 = 2, /**< ASN.1 n39936 */
    ServingCellConfig_ExtGroup8_Tag2_r18_N_TimingAdvanceOffset2_r18_spare1 = 3, /**< ASN.1 spare1 */
} ServingCellConfig_ExtGroup8_Tag2_r18_N_TimingAdvanceOffset2_r18;


/**
 * @brief 枚举 ServingCellConfig_ExtGroup8_CellDTXDRX_L1activation_r18（ASN.1 cellDTXDRX-L1activation-r18，源文件第 12503 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfig_ExtGroup8_CellDTXDRX_L1activation_r18 {
    ServingCellConfig_ExtGroup8_CellDTXDRX_L1activation_r18_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfig_ExtGroup8_CellDTXDRX_L1activation_r18;


/**
 * @brief 枚举 UplinkConfig_ExtGroup2_EnablePL_RS_UpdateForPUSCH_SRS_r16（ASN.1 enablePL-RS-UpdateForPUSCH-SRS-r16，源文件第 12522 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkConfig_ExtGroup2_EnablePL_RS_UpdateForPUSCH_SRS_r16 {
    UplinkConfig_ExtGroup2_EnablePL_RS_UpdateForPUSCH_SRS_r16_enabled = 0, /**< ASN.1 enabled */
} UplinkConfig_ExtGroup2_EnablePL_RS_UpdateForPUSCH_SRS_r16;


/**
 * @brief 枚举 UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUSCH0_0_r16（ASN.1 enableDefaultBeamPL-ForPUSCH0-0-r16，源文件第 12523 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUSCH0_0_r16 {
    UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUSCH0_0_r16_enabled = 0, /**< ASN.1 enabled */
} UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUSCH0_0_r16;


/**
 * @brief 枚举 UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUCCH_r16（ASN.1 enableDefaultBeamPL-ForPUCCH-r16，源文件第 12524 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUCCH_r16 {
    UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUCCH_r16_enabled = 0, /**< ASN.1 enabled */
} UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUCCH_r16;


/**
 * @brief 枚举 UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForSRS_r16（ASN.1 enableDefaultBeamPL-ForSRS-r16，源文件第 12525 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForSRS_r16 {
    UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForSRS_r16_enabled = 0, /**< ASN.1 enabled */
} UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForSRS_r16;


/**
 * @brief 枚举 UplinkConfig_ExtGroup2_Mpr_PowerBoost_FR2_r16（ASN.1 mpr-PowerBoost-FR2-r16，源文件第 12527 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkConfig_ExtGroup2_Mpr_PowerBoost_FR2_r16 {
    UplinkConfig_ExtGroup2_Mpr_PowerBoost_FR2_r16_trueVal = 0, /**< ASN.1 trueVal */
} UplinkConfig_ExtGroup2_Mpr_PowerBoost_FR2_r16;


/**
 * @brief 枚举 UplinkConfig_ExtGroup3_EnablePL_RS_UpdateForType1CG_PUSCH_r18（ASN.1 enablePL-RS-UpdateForType1CG-PUSCH-r18，源文件第 12531 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkConfig_ExtGroup3_EnablePL_RS_UpdateForType1CG_PUSCH_r18 {
    UplinkConfig_ExtGroup3_EnablePL_RS_UpdateForType1CG_PUSCH_r18_enabled = 0, /**< ASN.1 enabled */
} UplinkConfig_ExtGroup3_EnablePL_RS_UpdateForType1CG_PUSCH_r18;


/**
 * @brief 枚举 DummyJ_AbsenceOfAnyOtherTechnology_r16（ASN.1 absenceOfAnyOtherTechnology-r16，源文件第 12541 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyJ_AbsenceOfAnyOtherTechnology_r16 {
    DummyJ_AbsenceOfAnyOtherTechnology_r16_trueVal = 0, /**< ASN.1 trueVal */
} DummyJ_AbsenceOfAnyOtherTechnology_r16;


/**
 * @brief 枚举 ChannelAccessConfig_r16_AbsenceOfAnyOtherTechnology_r16（ASN.1 absenceOfAnyOtherTechnology-r16，源文件第 12550 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ChannelAccessConfig_r16_AbsenceOfAnyOtherTechnology_r16 {
    ChannelAccessConfig_r16_AbsenceOfAnyOtherTechnology_r16_trueVal = 0, /**< ASN.1 trueVal */
} ChannelAccessConfig_r16_AbsenceOfAnyOtherTechnology_r16;


/**
 * @brief 枚举 UplinkTxSwitching_r16_UplinkTxSwitchingCarrier_r16（ASN.1 uplinkTxSwitchingCarrier-r16，源文件第 12583 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UplinkTxSwitching_r16_UplinkTxSwitchingCarrier_r16 {
    UplinkTxSwitching_r16_UplinkTxSwitchingCarrier_r16_carrier1 = 0, /**< ASN.1 carrier1 */
    UplinkTxSwitching_r16_UplinkTxSwitchingCarrier_r16_carrier2 = 1, /**< ASN.1 carrier2 */
} UplinkTxSwitching_r16_UplinkTxSwitchingCarrier_r16;


/**
 * @brief 枚举 MIMOParam_r17_UnifiedTCI_StateType_r17（ASN.1 unifiedTCI-StateType-r17，源文件第 12589 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMOParam_r17_UnifiedTCI_StateType_r17 {
    MIMOParam_r17_UnifiedTCI_StateType_r17_separate = 0, /**< ASN.1 separate */
    MIMOParam_r17_UnifiedTCI_StateType_r17_joint = 1, /**< ASN.1 joint */
} MIMOParam_r17_UnifiedTCI_StateType_r17;


/**
 * @brief 枚举 MIMOParam_r17_SfnSchemePDCCH_r17（ASN.1 sfnSchemePDCCH-r17，源文件第 12592 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMOParam_r17_SfnSchemePDCCH_r17 {
    MIMOParam_r17_SfnSchemePDCCH_r17_sfnSchemeA = 0, /**< ASN.1 sfnSchemeA */
    MIMOParam_r17_SfnSchemePDCCH_r17_sfnSchemeB = 1, /**< ASN.1 sfnSchemeB */
} MIMOParam_r17_SfnSchemePDCCH_r17;


/**
 * @brief 枚举 MIMOParam_r17_SfnSchemePDSCH_r17（ASN.1 sfnSchemePDSCH-r17，源文件第 12593 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MIMOParam_r17_SfnSchemePDSCH_r17 {
    MIMOParam_r17_SfnSchemePDSCH_r17_sfnSchemeA = 0, /**< ASN.1 sfnSchemeA */
    MIMOParam_r17_SfnSchemePDSCH_r17_sfnSchemeB = 1, /**< ASN.1 sfnSchemeB */
} MIMOParam_r17_SfnSchemePDSCH_r17;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_AntennaPortsDCI1_3_r18（ASN.1 antennaPortsDCI1-3-r18，源文件第 12603 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_AntennaPortsDCI1_3_r18 {
    MC_DCI_SetOfCells_r18_AntennaPortsDCI1_3_r18_type1a = 0, /**< ASN.1 type1a */
    MC_DCI_SetOfCells_r18_AntennaPortsDCI1_3_r18_type2 = 1, /**< ASN.1 type2 */
} MC_DCI_SetOfCells_r18_AntennaPortsDCI1_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_AntennaPortsDCI0_3_r18（ASN.1 antennaPortsDCI0-3-r18，源文件第 12604 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_AntennaPortsDCI0_3_r18 {
    MC_DCI_SetOfCells_r18_AntennaPortsDCI0_3_r18_type1a = 0, /**< ASN.1 type1a */
    MC_DCI_SetOfCells_r18_AntennaPortsDCI0_3_r18_type2 = 1, /**< ASN.1 type2 */
} MC_DCI_SetOfCells_r18_AntennaPortsDCI0_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_Tpmi_DCI0_3_r18（ASN.1 tpmi-DCI0-3-r18，源文件第 12605 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_Tpmi_DCI0_3_r18 {
    MC_DCI_SetOfCells_r18_Tpmi_DCI0_3_r18_type1a = 0, /**< ASN.1 type1a */
    MC_DCI_SetOfCells_r18_Tpmi_DCI0_3_r18_type2 = 1, /**< ASN.1 type2 */
} MC_DCI_SetOfCells_r18_Tpmi_DCI0_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_Sri_DCI0_3_r18（ASN.1 sri-DCI0-3-r18，源文件第 12606 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_Sri_DCI0_3_r18 {
    MC_DCI_SetOfCells_r18_Sri_DCI0_3_r18_type1a = 0, /**< ASN.1 type1a */
    MC_DCI_SetOfCells_r18_Sri_DCI0_3_r18_type2 = 1, /**< ASN.1 type2 */
} MC_DCI_SetOfCells_r18_Sri_DCI0_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_1_3_r18（ASN.1 priorityIndicatorDCI-1-3-r18，源文件第 12607 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_1_3_r18 {
    MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_1_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_1_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_0_3_r18（ASN.1 priorityIndicatorDCI-0-3-r18，源文件第 12608 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_0_3_r18 {
    MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_0_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_0_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_DormancyDCI_1_3_r18（ASN.1 dormancyDCI-1-3-r18，源文件第 12609 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_DormancyDCI_1_3_r18 {
    MC_DCI_SetOfCells_r18_DormancyDCI_1_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_DormancyDCI_1_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_DormancyDCI_0_3_r18（ASN.1 dormancyDCI-0-3-r18，源文件第 12610 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_DormancyDCI_0_3_r18 {
    MC_DCI_SetOfCells_r18_DormancyDCI_0_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_DormancyDCI_0_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_1_3_r18（ASN.1 pdcchMonAdaptDCI-1-3-r18，源文件第 12611 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_1_3_r18 {
    MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_1_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_1_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_0_3_r18（ASN.1 pdcchMonAdaptDCI-0-3-r18，源文件第 12612 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_0_3_r18 {
    MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_0_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_0_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_1_3_r18（ASN.1 minimumSchedulingOffsetK0DCI-1-3-r18，源文件第 12613 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_1_3_r18 {
    MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_1_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_1_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_0_3_r18（ASN.1 minimumSchedulingOffsetK0DCI-0-3-r18，源文件第 12614 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_0_3_r18 {
    MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_0_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_0_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18（ASN.1 pdsch-HARQ-ACK-OneShotFeedbackDCI-1-3-r18，源文件第 12615 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18 {
    MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCI_1_3_r18（ASN.1 pdsch-HARQ-ACK-enhType3DCI-1-3-r18，源文件第 12616 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCI_1_3_r18 {
    MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCI_1_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCI_1_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18（ASN.1 pdsch-HARQ-ACK-enhType3DCIfieldDCI-1-3-r18，源文件第 12617 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18 {
    MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_retxDCI_1_3_r18（ASN.1 pdsch-HARQ-ACK-retxDCI-1-3-r18，源文件第 12618 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_retxDCI_1_3_r18 {
    MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_retxDCI_1_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_retxDCI_1_3_r18;


/**
 * @brief 枚举 MC_DCI_SetOfCells_r18_Pucch_sSCellDynDCI_1_3_r18（ASN.1 pucch-sSCellDynDCI-1-3-r18，源文件第 12619 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MC_DCI_SetOfCells_r18_Pucch_sSCellDynDCI_1_3_r18 {
    MC_DCI_SetOfCells_r18_Pucch_sSCellDynDCI_1_3_r18_enabled = 0, /**< ASN.1 enabled */
} MC_DCI_SetOfCells_r18_Pucch_sSCellDynDCI_1_3_r18;


/**
 * @brief 枚举 ServingCellConfigCommon_N_TimingAdvanceOffset（ASN.1 n-TimingAdvanceOffset，源文件第 12657 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommon_N_TimingAdvanceOffset {
    ServingCellConfigCommon_N_TimingAdvanceOffset_n0 = 0, /**< ASN.1 n0 */
    ServingCellConfigCommon_N_TimingAdvanceOffset_n25600 = 1, /**< ASN.1 n25600 */
    ServingCellConfigCommon_N_TimingAdvanceOffset_n39936 = 2, /**< ASN.1 n39936 */
} ServingCellConfigCommon_N_TimingAdvanceOffset;


/**
 * @brief 枚举 ServingCellConfigCommon_Ssb_periodicityServingCell（ASN.1 ssb-periodicityServingCell，源文件第 12663 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommon_Ssb_periodicityServingCell {
    ServingCellConfigCommon_Ssb_periodicityServingCell_ms5 = 0, /**< ASN.1 ms5 */
    ServingCellConfigCommon_Ssb_periodicityServingCell_ms10 = 1, /**< ASN.1 ms10 */
    ServingCellConfigCommon_Ssb_periodicityServingCell_ms20 = 2, /**< ASN.1 ms20 */
    ServingCellConfigCommon_Ssb_periodicityServingCell_ms40 = 3, /**< ASN.1 ms40 */
    ServingCellConfigCommon_Ssb_periodicityServingCell_ms80 = 4, /**< ASN.1 ms80 */
    ServingCellConfigCommon_Ssb_periodicityServingCell_ms160 = 5, /**< ASN.1 ms160 */
    ServingCellConfigCommon_Ssb_periodicityServingCell_spare2 = 6, /**< ASN.1 spare2 */
    ServingCellConfigCommon_Ssb_periodicityServingCell_spare1 = 7, /**< ASN.1 spare1 */
} ServingCellConfigCommon_Ssb_periodicityServingCell;


/**
 * @brief 枚举 ServingCellConfigCommon_Dmrs_TypeA_Position（ASN.1 dmrs-TypeA-Position，源文件第 12664 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommon_Dmrs_TypeA_Position {
    ServingCellConfigCommon_Dmrs_TypeA_Position_pos2 = 0, /**< ASN.1 pos2 */
    ServingCellConfigCommon_Dmrs_TypeA_Position_pos3 = 1, /**< ASN.1 pos3 */
} ServingCellConfigCommon_Dmrs_TypeA_Position;


/**
 * @brief 枚举 ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16（ASN.1 discoveryBurstWindowLength-r16，源文件第 12677 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16 {
    ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16_ms0dot5 = 0, /**< ASN.1 ms0dot5 */
    ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16_ms1 = 1, /**< ASN.1 ms1 */
    ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16_ms2 = 2, /**< ASN.1 ms2 */
    ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16_ms3 = 3, /**< ASN.1 ms3 */
    ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16_ms4 = 4, /**< ASN.1 ms4 */
    ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16_ms5 = 5, /**< ASN.1 ms5 */
} ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16;


/**
 * @brief 枚举 ServingCellConfigCommon_ExtGroup2_ChannelAccessMode2_r17（ASN.1 channelAccessMode2-r17，源文件第 12683 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommon_ExtGroup2_ChannelAccessMode2_r17 {
    ServingCellConfigCommon_ExtGroup2_ChannelAccessMode2_r17_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfigCommon_ExtGroup2_ChannelAccessMode2_r17;


/**
 * @brief 枚举 ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17（ASN.1 discoveryBurstWindowLength-r17，源文件第 12684 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17 {
    ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17_ms0dot125 = 0, /**< ASN.1 ms0dot125 */
    ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17_ms0dot25 = 1, /**< ASN.1 ms0dot25 */
    ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17_ms0dot5 = 2, /**< ASN.1 ms0dot5 */
    ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17_ms0dot75 = 3, /**< ASN.1 ms0dot75 */
    ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17_ms1 = 4, /**< ASN.1 ms1 */
    ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17_ms1dot25 = 5, /**< ASN.1 ms1dot25 */
} ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17;


/**
 * @brief 枚举 ServingCellConfigCommon_ExtGroup4_Ra_ChannelAccess_r17（ASN.1 ra-ChannelAccess-r17，源文件第 12699 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommon_ExtGroup4_Ra_ChannelAccess_r17 {
    ServingCellConfigCommon_ExtGroup4_Ra_ChannelAccess_r17_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfigCommon_ExtGroup4_Ra_ChannelAccess_r17;


/**
 * @brief 枚举 ServingCellConfigCommonSIB_N_TimingAdvanceOffset（ASN.1 n-TimingAdvanceOffset，源文件第 12717 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommonSIB_N_TimingAdvanceOffset {
    ServingCellConfigCommonSIB_N_TimingAdvanceOffset_n0 = 0, /**< ASN.1 n0 */
    ServingCellConfigCommonSIB_N_TimingAdvanceOffset_n25600 = 1, /**< ASN.1 n25600 */
    ServingCellConfigCommonSIB_N_TimingAdvanceOffset_n39936 = 2, /**< ASN.1 n39936 */
} ServingCellConfigCommonSIB_N_TimingAdvanceOffset;


/**
 * @brief 枚举 ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell（ASN.1 ssb-PeriodicityServingCell，源文件第 12722 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell {
    ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell_ms5 = 0, /**< ASN.1 ms5 */
    ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell_ms10 = 1, /**< ASN.1 ms10 */
    ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell_ms20 = 2, /**< ASN.1 ms20 */
    ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell_ms40 = 3, /**< ASN.1 ms40 */
    ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell_ms80 = 4, /**< ASN.1 ms80 */
    ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell_ms160 = 5, /**< ASN.1 ms160 */
} ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell;


/**
 * @brief 枚举 ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16（ASN.1 discoveryBurstWindowLength-r16，源文件第 12731 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16 {
    ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16_ms0dot5 = 0, /**< ASN.1 ms0dot5 */
    ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16_ms1 = 1, /**< ASN.1 ms1 */
    ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16_ms2 = 2, /**< ASN.1 ms2 */
    ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16_ms3 = 3, /**< ASN.1 ms3 */
    ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16_ms4 = 4, /**< ASN.1 ms4 */
    ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16_ms5 = 5, /**< ASN.1 ms5 */
} ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16;


/**
 * @brief 枚举 ServingCellConfigCommonSIB_ExtGroup2_ChannelAccessMode2_r17（ASN.1 channelAccessMode2-r17，源文件第 12735 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommonSIB_ExtGroup2_ChannelAccessMode2_r17 {
    ServingCellConfigCommonSIB_ExtGroup2_ChannelAccessMode2_r17_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfigCommonSIB_ExtGroup2_ChannelAccessMode2_r17;


/**
 * @brief 枚举 ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700（ASN.1 discoveryBurstWindowLength-v1700，源文件第 12736 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700 {
    ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700_ms0dot125 = 0, /**< ASN.1 ms0dot125 */
    ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700_ms0dot25 = 1, /**< ASN.1 ms0dot25 */
    ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700_ms0dot5 = 2, /**< ASN.1 ms0dot5 */
    ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700_ms0dot75 = 3, /**< ASN.1 ms0dot75 */
    ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700_ms1 = 4, /**< ASN.1 ms1 */
    ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700_ms1dot25 = 5, /**< ASN.1 ms1dot25 */
} ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700;


/**
 * @brief 枚举 ServingCellConfigCommonSIB_ExtGroup3_EnhancedMeasurementLEO_r17（ASN.1 enhancedMeasurementLEO-r17，源文件第 12741 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommonSIB_ExtGroup3_EnhancedMeasurementLEO_r17 {
    ServingCellConfigCommonSIB_ExtGroup3_EnhancedMeasurementLEO_r17_trueVal = 0, /**< ASN.1 trueVal */
} ServingCellConfigCommonSIB_ExtGroup3_EnhancedMeasurementLEO_r17;


/**
 * @brief 枚举 ServingCellConfigCommonSIB_ExtGroup4_Ra_ChannelAccess_r17（ASN.1 ra-ChannelAccess-r17，源文件第 12744 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ServingCellConfigCommonSIB_ExtGroup4_Ra_ChannelAccess_r17 {
    ServingCellConfigCommonSIB_ExtGroup4_Ra_ChannelAccess_r17_enabled = 0, /**< ASN.1 enabled */
} ServingCellConfigCommonSIB_ExtGroup4_Ra_ChannelAccess_r17;


/**
 * @brief 枚举 SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion（ASN.1 rach-OccasionsSI/ssb-perRACH-Occasion，源文件第 12773 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion {
    SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion_oneEighth = 0, /**< ASN.1 oneEighth */
    SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion_oneFourth = 1, /**< ASN.1 oneFourth */
    SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion_oneHalf = 2, /**< ASN.1 oneHalf */
    SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion_one = 3, /**< ASN.1 one */
    SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion_two = 4, /**< ASN.1 two */
    SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion_four = 5, /**< ASN.1 four */
    SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion_eight = 6, /**< ASN.1 eight */
    SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion_sixteen = 7, /**< ASN.1 sixteen */
} SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion;


/**
 * @brief 枚举 SI_RequestConfig_Si_RequestPeriod（ASN.1 si-RequestPeriod，源文件第 12775 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SI_RequestConfig_Si_RequestPeriod {
    SI_RequestConfig_Si_RequestPeriod_one = 0, /**< ASN.1 one */
    SI_RequestConfig_Si_RequestPeriod_two = 1, /**< ASN.1 two */
    SI_RequestConfig_Si_RequestPeriod_four = 2, /**< ASN.1 four */
    SI_RequestConfig_Si_RequestPeriod_six = 3, /**< ASN.1 six */
    SI_RequestConfig_Si_RequestPeriod_eight = 4, /**< ASN.1 eight */
    SI_RequestConfig_Si_RequestPeriod_ten = 5, /**< ASN.1 ten */
    SI_RequestConfig_Si_RequestPeriod_twelve = 6, /**< ASN.1 twelve */
    SI_RequestConfig_Si_RequestPeriod_sixteen = 7, /**< ASN.1 sixteen */
} SI_RequestConfig_Si_RequestPeriod;


/**
 * @brief 枚举 SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18（ASN.1 rach-OccasionsSI-r18/ssb-perRACH-Occasion-r18，源文件第 12791 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18 {
    SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18_oneEighth = 0, /**< ASN.1 oneEighth */
    SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18_oneFourth = 1, /**< ASN.1 oneFourth */
    SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18_oneHalf = 2, /**< ASN.1 oneHalf */
    SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18_one = 3, /**< ASN.1 one */
    SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18_two = 4, /**< ASN.1 two */
    SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18_four = 5, /**< ASN.1 four */
    SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18_eight = 6, /**< ASN.1 eight */
    SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18_sixteen = 7, /**< ASN.1 sixteen */
} SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18;


/**
 * @brief 枚举 SI_SchedulingInfo_Si_WindowLength（ASN.1 si-WindowLength，源文件第 12809 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SI_SchedulingInfo_Si_WindowLength {
    SI_SchedulingInfo_Si_WindowLength_s5 = 0, /**< ASN.1 s5 */
    SI_SchedulingInfo_Si_WindowLength_s10 = 1, /**< ASN.1 s10 */
    SI_SchedulingInfo_Si_WindowLength_s20 = 2, /**< ASN.1 s20 */
    SI_SchedulingInfo_Si_WindowLength_s40 = 3, /**< ASN.1 s40 */
    SI_SchedulingInfo_Si_WindowLength_s80 = 4, /**< ASN.1 s80 */
    SI_SchedulingInfo_Si_WindowLength_s160 = 5, /**< ASN.1 s160 */
    SI_SchedulingInfo_Si_WindowLength_s320 = 6, /**< ASN.1 s320 */
    SI_SchedulingInfo_Si_WindowLength_s640 = 7, /**< ASN.1 s640 */
    SI_SchedulingInfo_Si_WindowLength_s1280 = 8, /**< ASN.1 s1280 */
    SI_SchedulingInfo_Si_WindowLength_s2560_v1710 = 9, /**< ASN.1 s2560-v1710 */
    SI_SchedulingInfo_Si_WindowLength_s5120_v1710 = 10, /**< ASN.1 s5120-v1710 */
} SI_SchedulingInfo_Si_WindowLength;


/**
 * @brief 枚举 SchedulingInfo_Si_BroadcastStatus（ASN.1 si-BroadcastStatus，源文件第 12817 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SchedulingInfo_Si_BroadcastStatus {
    SchedulingInfo_Si_BroadcastStatus_broadcasting = 0, /**< ASN.1 broadcasting */
    SchedulingInfo_Si_BroadcastStatus_notBroadcasting = 1, /**< ASN.1 notBroadcasting */
} SchedulingInfo_Si_BroadcastStatus;


/**
 * @brief 枚举 SchedulingInfo_Si_Periodicity（ASN.1 si-Periodicity，源文件第 12818 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SchedulingInfo_Si_Periodicity {
    SchedulingInfo_Si_Periodicity_rf8 = 0, /**< ASN.1 rf8 */
    SchedulingInfo_Si_Periodicity_rf16 = 1, /**< ASN.1 rf16 */
    SchedulingInfo_Si_Periodicity_rf32 = 2, /**< ASN.1 rf32 */
    SchedulingInfo_Si_Periodicity_rf64 = 3, /**< ASN.1 rf64 */
    SchedulingInfo_Si_Periodicity_rf128 = 4, /**< ASN.1 rf128 */
    SchedulingInfo_Si_Periodicity_rf256 = 5, /**< ASN.1 rf256 */
    SchedulingInfo_Si_Periodicity_rf512 = 6, /**< ASN.1 rf512 */
} SchedulingInfo_Si_Periodicity;


/**
 * @brief 枚举 SchedulingInfo2_r17_Si_BroadcastStatus_r17（ASN.1 si-BroadcastStatus-r17，源文件第 12838 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SchedulingInfo2_r17_Si_BroadcastStatus_r17 {
    SchedulingInfo2_r17_Si_BroadcastStatus_r17_broadcasting = 0, /**< ASN.1 broadcasting */
    SchedulingInfo2_r17_Si_BroadcastStatus_r17_notBroadcasting = 1, /**< ASN.1 notBroadcasting */
} SchedulingInfo2_r17_Si_BroadcastStatus_r17;


/**
 * @brief 枚举 SchedulingInfo2_r17_Si_Periodicity_r17（ASN.1 si-Periodicity-r17，源文件第 12840 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SchedulingInfo2_r17_Si_Periodicity_r17 {
    SchedulingInfo2_r17_Si_Periodicity_r17_rf8 = 0, /**< ASN.1 rf8 */
    SchedulingInfo2_r17_Si_Periodicity_r17_rf16 = 1, /**< ASN.1 rf16 */
    SchedulingInfo2_r17_Si_Periodicity_r17_rf32 = 2, /**< ASN.1 rf32 */
    SchedulingInfo2_r17_Si_Periodicity_r17_rf64 = 3, /**< ASN.1 rf64 */
    SchedulingInfo2_r17_Si_Periodicity_r17_rf128 = 4, /**< ASN.1 rf128 */
    SchedulingInfo2_r17_Si_Periodicity_r17_rf256 = 5, /**< ASN.1 rf256 */
    SchedulingInfo2_r17_Si_Periodicity_r17_rf512 = 6, /**< ASN.1 rf512 */
} SchedulingInfo2_r17_Si_Periodicity_r17;


/**
 * @brief 枚举 SIB_TypeInfo_Type（ASN.1 type，源文件第 12849 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t SIB_TypeInfo_Type;
#define SIB_TypeInfo_Type_sibType2 0 /**< ASN.1 sibType2 */
#define SIB_TypeInfo_Type_sibType3 1 /**< ASN.1 sibType3 */
#define SIB_TypeInfo_Type_sibType4 2 /**< ASN.1 sibType4 */
#define SIB_TypeInfo_Type_sibType5 3 /**< ASN.1 sibType5 */
#define SIB_TypeInfo_Type_sibType6 4 /**< ASN.1 sibType6 */
#define SIB_TypeInfo_Type_sibType7 5 /**< ASN.1 sibType7 */
#define SIB_TypeInfo_Type_sibType8 6 /**< ASN.1 sibType8 */
#define SIB_TypeInfo_Type_sibType9 7 /**< ASN.1 sibType9 */
#define SIB_TypeInfo_Type_sibType10_v1610 8 /**< ASN.1 sibType10-v1610 */
#define SIB_TypeInfo_Type_sibType11_v1610 9 /**< ASN.1 sibType11-v1610 */
#define SIB_TypeInfo_Type_sibType12_v1610 10 /**< ASN.1 sibType12-v1610 */
#define SIB_TypeInfo_Type_sibType13_v1610 11 /**< ASN.1 sibType13-v1610 */
#define SIB_TypeInfo_Type_sibType14_v1610 12 /**< ASN.1 sibType14-v1610 */
#define SIB_TypeInfo_Type_spare3 13 /**< ASN.1 spare3 */
#define SIB_TypeInfo_Type_spare2 14 /**< ASN.1 spare2 */
#define SIB_TypeInfo_Type_spare1 15 /**< ASN.1 spare1 */


/**
 * @brief 枚举 SIB_TypeInfo_AreaScope（ASN.1 areaScope，源文件第 12853 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SIB_TypeInfo_AreaScope {
    SIB_TypeInfo_AreaScope_trueVal = 0, /**< ASN.1 trueVal */
} SIB_TypeInfo_AreaScope;


/**
 * @brief 枚举 SIB_TypeInfo_v1700_SibType_r17_Type1_r17（ASN.1 sibType-r17/type1-r17，源文件第 12858 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t SIB_TypeInfo_v1700_SibType_r17_Type1_r17;
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType15 0 /**< ASN.1 sibType15 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType16 1 /**< ASN.1 sibType16 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType17 2 /**< ASN.1 sibType17 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType18 3 /**< ASN.1 sibType18 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType19 4 /**< ASN.1 sibType19 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType20 5 /**< ASN.1 sibType20 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType21 6 /**< ASN.1 sibType21 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType22_v1800 7 /**< ASN.1 sibType22-v1800 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType23_v1800 8 /**< ASN.1 sibType23-v1800 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType24_v1800 9 /**< ASN.1 sibType24-v1800 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_sibType25_v1800 10 /**< ASN.1 sibType25-v1800 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_spare5 11 /**< ASN.1 spare5 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_spare4 12 /**< ASN.1 spare4 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_spare3 13 /**< ASN.1 spare3 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_spare2 14 /**< ASN.1 spare2 */
#define SIB_TypeInfo_v1700_SibType_r17_Type1_r17_spare1 15 /**< ASN.1 spare1 */


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART005_H */
