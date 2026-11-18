/* ============================================================================
 * types/rrc_types_part021.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART021_H
#define RRC_CODEC_TYPES_PART021_H

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
#include "rrc_types_part011.h"
#include "rrc_types_part012.h"
#include "rrc_types_part013.h"
#include "rrc_types_part014.h"
#include "rrc_types_part015.h"
#include "rrc_types_part016.h"
#include "rrc_types_part017.h"
#include "rrc_types_part018.h"
#include "rrc_types_part019.h"
#include "rrc_types_part020.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief CA_ParametersNR_v1780_SupportedAggBW_FR1_r17
 * @note ASN.1：supportedAggBW-FR1-r17；源文件第 15097 行。
 * @note SEQUENCE { scalingFactorSCS-r17, supportedAggBW-FDD-DL-r17, supportedAggBW-FD...
 */
struct CA_ParametersNR_v1780_SupportedAggBW_FR1_r17 {
    bool has_scalingFactorSCS_r17; /**< scalingFactorSCS-r17 是否存在。 */
    CA_ParametersNR_v1780_SupportedAggBW_FR1_r17_ScalingFactorSCS_r17 scalingFactorSCS_r17; /**< ASN.1 scalingFactorSCS-r17；枚举；OPTIONAL。 */
    bool has_supportedAggBW_FDD_DL_r17; /**< supportedAggBW-FDD-DL-r17 是否存在。 */
    SupportedAggBandwidth_r17 supportedAggBW_FDD_DL_r17; /**< ASN.1 supportedAggBW-FDD-DL-r17；结构体；OPTIONAL。 */
    bool has_supportedAggBW_FDD_UL_r17; /**< supportedAggBW-FDD-UL-r17 是否存在。 */
    SupportedAggBandwidth_r17 supportedAggBW_FDD_UL_r17; /**< ASN.1 supportedAggBW-FDD-UL-r17；结构体；OPTIONAL。 */
    bool has_supportedAggBW_TDD_DL_r17; /**< supportedAggBW-TDD-DL-r17 是否存在。 */
    SupportedAggBandwidth_r17 supportedAggBW_TDD_DL_r17; /**< ASN.1 supportedAggBW-TDD-DL-r17；结构体；OPTIONAL。 */
    bool has_supportedAggBW_TDD_UL_r17; /**< supportedAggBW-TDD-UL-r17 是否存在。 */
    SupportedAggBandwidth_r17 supportedAggBW_TDD_UL_r17; /**< ASN.1 supportedAggBW-TDD-UL-r17；结构体；OPTIONAL。 */
    bool has_supportedAggBW_TotalDL_r17; /**< supportedAggBW-TotalDL-r17 是否存在。 */
    SupportedAggBandwidth_r17 supportedAggBW_TotalDL_r17; /**< ASN.1 supportedAggBW-TotalDL-r17；结构体；OPTIONAL。 */
    bool has_supportedAggBW_TotalUL_r17; /**< supportedAggBW-TotalUL-r17 是否存在。 */
    SupportedAggBandwidth_r17 supportedAggBW_TotalUL_r17; /**< ASN.1 supportedAggBW-TotalUL-r17；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1780
 * @note ASN.1：CA-ParametersNR-v1780；源文件第 15095 行。
 * @note CA-ParametersNR-v1780 ::= SEQUENCE { parallelTxPUCCH-PUSCH-SamePriority-r17, supportedAggBW-FR1-r17 }
 */
struct CA_ParametersNR_v1780 {
    bool has_parallelTxPUCCH_PUSCH_SamePriority_r17; /**< parallelTxPUCCH-PUSCH-SamePriority-r17 是否存在。 */
    CA_ParametersNR_v1780_ParallelTxPUCCH_PUSCH_SamePriority_r17 parallelTxPUCCH_PUSCH_SamePriority_r17; /**< ASN.1 parallelTxPUCCH-PUSCH-SamePriority-r17；枚举；OPTIONAL。 */
    bool has_supportedAggBW_FR1_r17; /**< supportedAggBW-FR1-r17 是否存在。 */
    CA_ParametersNR_v1780_SupportedAggBW_FR1_r17 supportedAggBW_FR1_r17; /**< ASN.1 supportedAggBW-FR1-r17；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC_v1780
 * @note ASN.1：CA-ParametersNRDC-v1780；源文件第 15518 行。
 * @note CA-ParametersNRDC-v1780 ::= SEQUENCE { ca-ParametersNR-ForDC-v1780 }
 */
struct CA_ParametersNRDC_v1780 {
    bool has_ca_ParametersNR_ForDC_v1780; /**< ca-ParametersNR-ForDC-v1780 是否存在。 */
    CA_ParametersNR_v1780 ca_ParametersNR_ForDC_v1780; /**< ASN.1 ca-ParametersNR-ForDC-v1780；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1780
 * @note ASN.1：BandCombination-v1780；源文件第 14374 行。
 * @note BandCombination-v1780 ::= SEQUENCE { ca-ParametersNR-v1780, ca-ParametersNRDC-v1780, bandList-v1780, mr...
 */
struct BandCombination_v1780 {
    bool has_ca_ParametersNR_v1780; /**< ca-ParametersNR-v1780 是否存在。 */
    CA_ParametersNR_v1780 ca_ParametersNR_v1780; /**< ASN.1 ca-ParametersNR-v1780；结构体；OPTIONAL。 */
    bool has_ca_ParametersNRDC_v1780; /**< ca-ParametersNRDC-v1780 是否存在。 */
    CA_ParametersNRDC_v1780 ca_ParametersNRDC_v1780; /**< ASN.1 ca-ParametersNRDC-v1780；结构体；OPTIONAL。 */
    bool has_bandList_v1780; /**< bandList-v1780 是否存在。 */
    BandParameters_v1780* bandList_v1780_items; /**< ASN.1 bandList-v1780；SEQUENCE OF BandParameters_v1780，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t bandList_v1780_count; /**< bandList-v1780 元素个数。 */
    bool has_mrdc_Parameters_v1780; /**< mrdc-Parameters-v1780 是否存在。 */
    MRDC_Parameters_v1770 mrdc_Parameters_v1780; /**< ASN.1 mrdc-Parameters-v1780；结构体；OPTIONAL。 */
};


/**
 * @brief CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18
 * @note ASN.1：eType2Doppler-r18；源文件第 15943 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceList-r18, valueY-P-SP-CSI-RS-r18, valueY-A...
 */
struct CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18 {
    int64_t* supportedCSI_RS_ResourceList_r18_items; /**< ASN.1 supportedCSI-RS-ResourceList-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceList_r18_count; /**< supportedCSI-RS-ResourceList-r18 元素个数。 */
    int64_t valueY_P_SP_CSI_RS_r18; /**< ASN.1 valueY-P-SP-CSI-RS-r18；INTEGER (1..3)，位宽 2 bit。 */
    int64_t valueY_A_CSI_RS_r18; /**< ASN.1 valueY-A-CSI-RS-r18；INTEGER (1..3)，位宽 2 bit。 */
    CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18_Scalingfactor_r18 scalingfactor_r18; /**< ASN.1 scalingfactor-r18；枚举。 */
};


/**
 * @brief CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18
 * @note ASN.1：eType2DopplerN4-r18；源文件第 15951 行。
 * @note SEQUENCE { supportedCSI-RS-ReportSettingList1-r18, supportedCSI-RS-ReportSett...
 */
struct CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18 {
    SupportedCSI_RS_ReportSetting_r18* supportedCSI_RS_ReportSettingList1_r18_items; /**< ASN.1 supportedCSI-RS-ReportSettingList1-r18；SEQUENCE OF SupportedCSI_RS_ReportSetting_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ReportSettingList1_r18_count; /**< supportedCSI-RS-ReportSettingList1-r18 元素个数。 */
    SupportedCSI_RS_ReportSetting_r18* supportedCSI_RS_ReportSettingList2_r18_items; /**< ASN.1 supportedCSI-RS-ReportSettingList2-r18；SEQUENCE OF SupportedCSI_RS_ReportSetting_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ReportSettingList2_r18_count; /**< supportedCSI-RS-ReportSettingList2-r18 元素个数。 */
};


/**
 * @brief CodebookParametersetype2DopplerCSI_r18
 * @note ASN.1：CodebookParametersetype2DopplerCSI-r18；源文件第 15941 行。
 * @note CodebookParametersetype2DopplerCSI-r18 ::= SEQUENCE { eType2Doppler-r18, eType2DopplerN4-r18, ddUnitSize-A-CSI-RS-CMR-r1...
 */
struct CodebookParametersetype2DopplerCSI_r18 {
    CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18 eType2Doppler_r18; /**< ASN.1 eType2Doppler-r18；结构体。 */
    bool has_eType2DopplerN4_r18; /**< eType2DopplerN4-r18 是否存在。 */
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18 eType2DopplerN4_r18; /**< ASN.1 eType2DopplerN4-r18；结构体；OPTIONAL。 */
    bool has_ddUnitSize_A_CSI_RS_CMR_r18; /**< ddUnitSize-A-CSI-RS-CMR-r18 是否存在。 */
    CodebookParametersetype2DopplerCSI_r18_DdUnitSize_A_CSI_RS_CMR_r18 ddUnitSize_A_CSI_RS_CMR_r18; /**< ASN.1 ddUnitSize-A-CSI-RS-CMR-r18；枚举；OPTIONAL。 */
    bool has_maxNumberAperiodicCSI_RS_Resource_r18; /**< maxNumberAperiodicCSI-RS-Resource-r18 是否存在。 */
    CodebookParametersetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18 maxNumberAperiodicCSI_RS_Resource_r18; /**< ASN.1 maxNumberAperiodicCSI-RS-Resource-r18；枚举；OPTIONAL。 */
    bool has_eType2DopplerR2_r18; /**< eType2DopplerR2-r18 是否存在。 */
    int64_t* eType2DopplerR2_r18_items; /**< ASN.1 eType2DopplerR2-r18；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t eType2DopplerR2_r18_count; /**< eType2DopplerR2-r18 元素个数。 */
    bool has_eType2DopplerX1_r18; /**< eType2DopplerX1-r18 是否存在。 */
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerX1_r18 eType2DopplerX1_r18; /**< ASN.1 eType2DopplerX1-r18；枚举；OPTIONAL。 */
    bool has_eType2DopplerX2_r18; /**< eType2DopplerX2-r18 是否存在。 */
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerX2_r18 eType2DopplerX2_r18; /**< ASN.1 eType2DopplerX2-r18；枚举；OPTIONAL。 */
    bool has_eType2DopplerL_N4D1_r18; /**< eType2DopplerL-N4D1-r18 是否存在。 */
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerL_N4D1_r18 eType2DopplerL_N4D1_r18; /**< ASN.1 eType2DopplerL-N4D1-r18；枚举；OPTIONAL。 */
    bool has_eType2DopplerL6_r18; /**< eType2DopplerL6-r18 是否存在。 */
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerL6_r18 eType2DopplerL6_r18; /**< ASN.1 eType2DopplerL6-r18；枚举；OPTIONAL。 */
    bool has_eType2DopplerR3R4_r18; /**< eType2DopplerR3R4-r18 是否存在。 */
    CodebookParametersetype2DopplerCSI_r18_EType2DopplerR3R4_r18 eType2DopplerR3R4_r18; /**< ASN.1 eType2DopplerR3R4-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18
 * @note ASN.1：feType2Doppler-r18；源文件第 15979 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceList-r18, valueY-A-CSI-RS-r18, scalingfact...
 */
struct CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18 {
    int64_t* supportedCSI_RS_ResourceList_r18_items; /**< ASN.1 supportedCSI-RS-ResourceList-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceList_r18_count; /**< supportedCSI-RS-ResourceList-r18 元素个数。 */
    int64_t valueY_A_CSI_RS_r18; /**< ASN.1 valueY-A-CSI-RS-r18；INTEGER (1..3)，位宽 2 bit。 */
    CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18_Scalingfactor_r18 scalingfactor_r18; /**< ASN.1 scalingfactor-r18；枚举。 */
};


/**
 * @brief CodebookParametersfetype2DopplerCSI_r18
 * @note ASN.1：CodebookParametersfetype2DopplerCSI-r18；源文件第 15977 行。
 * @note CodebookParametersfetype2DopplerCSI-r18 ::= SEQUENCE { feType2Doppler-r18, maxNumberAperiodicCSI-RS-Resource-r18, feType2...
 */
struct CodebookParametersfetype2DopplerCSI_r18 {
    CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18 feType2Doppler_r18; /**< ASN.1 feType2Doppler-r18；结构体。 */
    bool has_maxNumberAperiodicCSI_RS_Resource_r18; /**< maxNumberAperiodicCSI-RS-Resource-r18 是否存在。 */
    CodebookParametersfetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18 maxNumberAperiodicCSI_RS_Resource_r18; /**< ASN.1 maxNumberAperiodicCSI-RS-Resource-r18；枚举；OPTIONAL。 */
    bool has_feType2DopplerM2R1_r18; /**< feType2DopplerM2R1-r18 是否存在。 */
    int64_t* feType2DopplerM2R1_r18_items; /**< ASN.1 feType2DopplerM2R1-r18；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t feType2DopplerM2R1_r18_count; /**< feType2DopplerM2R1-r18 元素个数。 */
    bool has_feType2DopplerR2_r18; /**< feType2DopplerR2-r18 是否存在。 */
    int64_t* feType2DopplerR2_r18_items; /**< ASN.1 feType2DopplerR2-r18；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t feType2DopplerR2_r18_count; /**< feType2DopplerR2-r18 元素个数。 */
    bool has_feType2DopplerL_N4D1_r18; /**< feType2DopplerL-N4D1-r18 是否存在。 */
    CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerL_N4D1_r18 feType2DopplerL_N4D1_r18; /**< ASN.1 feType2DopplerL-N4D1-r18；枚举；OPTIONAL。 */
    bool has_feType2DopplerR3R4_r18; /**< feType2DopplerR3R4-r18 是否存在。 */
    CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerR3R4_r18 feType2DopplerR3R4_r18; /**< ASN.1 feType2DopplerR3R4-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CodebookParametersetype2CJT_r18_EType2CJT_r18
 * @note ASN.1：eType2CJT-r18；源文件第 16004 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceList-r18, scalingfactor-r18, maxNumberNZP-...
 */
struct CodebookParametersetype2CJT_r18_EType2CJT_r18 {
    int64_t* supportedCSI_RS_ResourceList_r18_items; /**< ASN.1 supportedCSI-RS-ResourceList-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceList_r18_count; /**< supportedCSI-RS-ResourceList-r18 元素个数。 */
    CodebookParametersetype2CJT_r18_EType2CJT_r18_Scalingfactor_r18 scalingfactor_r18; /**< ASN.1 scalingfactor-r18；枚举。 */
    int64_t maxNumberNZP_CSI_RS_MultiTRP_CJT_r18; /**< ASN.1 maxNumberNZP-CSI-RS-MultiTRP-CJT-r18；INTEGER (2..4)，位宽 2 bit。 */
};


/**
 * @brief CodebookParametersetype2CJT_r18
 * @note ASN.1：CodebookParametersetype2CJT-r18；源文件第 16002 行。
 * @note CodebookParametersetype2CJT-r18 ::= SEQUENCE { eType2CJT-r18, eType2CJT-FD-IO-r18, eType2CJT-FD-FO-r18, eType2CJT...
 */
struct CodebookParametersetype2CJT_r18 {
    CodebookParametersetype2CJT_r18_EType2CJT_r18 eType2CJT_r18; /**< ASN.1 eType2CJT-r18；结构体。 */
    bool has_eType2CJT_FD_IO_r18; /**< eType2CJT-FD-IO-r18 是否存在。 */
    int64_t* eType2CJT_FD_IO_r18_items; /**< ASN.1 eType2CJT-FD-IO-r18；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t eType2CJT_FD_IO_r18_count; /**< eType2CJT-FD-IO-r18 元素个数。 */
    bool has_eType2CJT_FD_FO_r18; /**< eType2CJT-FD-FO-r18 是否存在。 */
    CodebookParametersetype2CJT_r18_EType2CJT_FD_FO_r18 eType2CJT_FD_FO_r18; /**< ASN.1 eType2CJT-FD-FO-r18；枚举；OPTIONAL。 */
    bool has_eType2CJT_R2_r18; /**< eType2CJT-R2-r18 是否存在。 */
    int64_t* eType2CJT_R2_r18_items; /**< ASN.1 eType2CJT-R2-r18；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t eType2CJT_R2_r18_count; /**< eType2CJT-R2-r18 元素个数。 */
    bool has_eType2CJT_PV_Beta_r18; /**< eType2CJT-PV-Beta-r18 是否存在。 */
    CodebookParametersetype2CJT_r18_EType2CJT_PV_Beta_r18 eType2CJT_PV_Beta_r18; /**< ASN.1 eType2CJT-PV-Beta-r18；枚举；OPTIONAL。 */
    bool has_eType2CJT_2NN1N2_r18; /**< eType2CJT-2NN1N2-r18 是否存在。 */
    CodebookParametersetype2CJT_r18_EType2CJT_2NN1N2_r18 eType2CJT_2NN1N2_r18; /**< ASN.1 eType2CJT-2NN1N2-r18；枚举；OPTIONAL。 */
    bool has_eType2CJT_Rank3Rank4_r18; /**< eType2CJT-Rank3Rank4-r18 是否存在。 */
    CodebookParametersetype2CJT_r18_EType2CJT_Rank3Rank4_r18 eType2CJT_Rank3Rank4_r18; /**< ASN.1 eType2CJT-Rank3Rank4-r18；枚举；OPTIONAL。 */
    bool has_eType2CJT_L6_r18; /**< eType2CJT-L6-r18 是否存在。 */
    CodebookParametersetype2CJT_r18_EType2CJT_L6_r18 eType2CJT_L6_r18; /**< ASN.1 eType2CJT-L6-r18；枚举；OPTIONAL。 */
    bool has_eType2CJT_NN_r18; /**< eType2CJT-NN-r18 是否存在。 */
    CodebookParametersetype2CJT_r18_EType2CJT_NN_r18 eType2CJT_NN_r18; /**< ASN.1 eType2CJT-NN-r18；枚举；OPTIONAL。 */
    bool has_eType2CJT_NL_SD_r18; /**< eType2CJT-NL-SD-r18 是否存在。 */
    CodebookParametersetype2CJT_r18_EType2CJT_NL_SD_r18 eType2CJT_NL_SD_r18; /**< ASN.1 eType2CJT-NL-SD-r18；枚举；OPTIONAL。 */
    bool has_eType2CJT_Unequal_r18; /**< eType2CJT-Unequal-r18 是否存在。 */
    CodebookParametersetype2CJT_r18_EType2CJT_Unequal_r18 eType2CJT_Unequal_r18; /**< ASN.1 eType2CJT-Unequal-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CodebookParametersfetype2CJT_r18_FeType2CJT_r18
 * @note ASN.1：feType2CJT-r18；源文件第 16037 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceList-r18, scalingfactor-r18, maxNumberNZP-...
 */
struct CodebookParametersfetype2CJT_r18_FeType2CJT_r18 {
    int64_t* supportedCSI_RS_ResourceList_r18_items; /**< ASN.1 supportedCSI-RS-ResourceList-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceList_r18_count; /**< supportedCSI-RS-ResourceList-r18 元素个数。 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_r18_Scalingfactor_r18 scalingfactor_r18; /**< ASN.1 scalingfactor-r18；枚举。 */
    int64_t maxNumberNZP_CSI_RS_MultiTRP_CJT_r18; /**< ASN.1 maxNumberNZP-CSI-RS-MultiTRP-CJT-r18；INTEGER (2..4)，位宽 2 bit。 */
};


/**
 * @brief CodebookParametersfetype2CJT_r18
 * @note ASN.1：CodebookParametersfetype2CJT-r18；源文件第 16035 行。
 * @note CodebookParametersfetype2CJT-r18 ::= SEQUENCE { feType2CJT-r18, feType2CJT-FD-IO-r18, feType2CJT-FD-FO-r18, feType...
 */
struct CodebookParametersfetype2CJT_r18 {
    CodebookParametersfetype2CJT_r18_FeType2CJT_r18 feType2CJT_r18; /**< ASN.1 feType2CJT-r18；结构体。 */
    bool has_feType2CJT_FD_IO_r18; /**< feType2CJT-FD-IO-r18 是否存在。 */
    int64_t* feType2CJT_FD_IO_r18_items; /**< ASN.1 feType2CJT-FD-IO-r18；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t feType2CJT_FD_IO_r18_count; /**< feType2CJT-FD-IO-r18 元素个数。 */
    bool has_feType2CJT_FD_FO_r18; /**< feType2CJT-FD-FO-r18 是否存在。 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_FD_FO_r18 feType2CJT_FD_FO_r18; /**< ASN.1 feType2CJT-FD-FO-r18；枚举；OPTIONAL。 */
    bool has_feType2CJT_M2R1_r18; /**< feType2CJT-M2R1-r18 是否存在。 */
    int64_t* feType2CJT_M2R1_r18_items; /**< ASN.1 feType2CJT-M2R1-r18；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t feType2CJT_M2R1_r18_count; /**< feType2CJT-M2R1-r18 元素个数。 */
    bool has_feType2CJT_R2_r18; /**< feType2CJT-R2-r18 是否存在。 */
    int64_t* feType2CJT_R2_r18_items; /**< ASN.1 feType2CJT-R2-r18；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t feType2CJT_R2_r18_count; /**< feType2CJT-R2-r18 元素个数。 */
    bool has_feType2CJT_2NN1N2_r18; /**< feType2CJT-2NN1N2-r18 是否存在。 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_2NN1N2_r18 feType2CJT_2NN1N2_r18; /**< ASN.1 feType2CJT-2NN1N2-r18；枚举；OPTIONAL。 */
    bool has_feType2CJT_Rank3Rank4_r18; /**< feType2CJT-Rank3Rank4-r18 是否存在。 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_Rank3Rank4_r18 feType2CJT_Rank3Rank4_r18; /**< ASN.1 feType2CJT-Rank3Rank4-r18；枚举；OPTIONAL。 */
    bool has_feType2CJT_NN_r18; /**< feType2CJT-NN-r18 是否存在。 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_NN_r18 feType2CJT_NN_r18; /**< ASN.1 feType2CJT-NN-r18；枚举；OPTIONAL。 */
    bool has_feType2CJT_NL_r18; /**< feType2CJT-NL-r18 是否存在。 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_NL_r18 feType2CJT_NL_r18; /**< ASN.1 feType2CJT-NL-r18；枚举；OPTIONAL。 */
    bool has_feType2CJT_Unequal_r18; /**< feType2CJT-Unequal-r18 是否存在。 */
    CodebookParametersfetype2CJT_r18_FeType2CJT_Unequal_r18 feType2CJT_Unequal_r18; /**< ASN.1 feType2CJT-Unequal-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CodebookComboParametersCJT_r18
 * @note ASN.1：CodebookComboParametersCJT-r18；源文件第 16067 行。
 * @note CodebookComboParametersCJT-r18 ::= SEQUENCE { cjt-Type1SP-eType2R1-null, cjt-Type1SP-eType2R2-null, cjt-Type1SP-...
 */
struct CodebookComboParametersCJT_r18 {
    bool has_cjt_Type1SP_eType2R1_null; /**< cjt-Type1SP-eType2R1-null 是否存在。 */
    int64_t* cjt_Type1SP_eType2R1_null_items; /**< ASN.1 cjt-Type1SP-eType2R1-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cjt_Type1SP_eType2R1_null_count; /**< cjt-Type1SP-eType2R1-null 元素个数。 */
    bool has_cjt_Type1SP_eType2R2_null; /**< cjt-Type1SP-eType2R2-null 是否存在。 */
    int64_t* cjt_Type1SP_eType2R2_null_items; /**< ASN.1 cjt-Type1SP-eType2R2-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cjt_Type1SP_eType2R2_null_count; /**< cjt-Type1SP-eType2R2-null 元素个数。 */
    bool has_cjt_Type1SP_feType2R1M1_null; /**< cjt-Type1SP-feType2R1M1-null 是否存在。 */
    int64_t* cjt_Type1SP_feType2R1M1_null_items; /**< ASN.1 cjt-Type1SP-feType2R1M1-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cjt_Type1SP_feType2R1M1_null_count; /**< cjt-Type1SP-feType2R1M1-null 元素个数。 */
    bool has_cjt_Type1SP_feType2R1M2_null; /**< cjt-Type1SP-feType2R1M2-null 是否存在。 */
    int64_t* cjt_Type1SP_feType2R1M2_null_items; /**< ASN.1 cjt-Type1SP-feType2R1M2-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cjt_Type1SP_feType2R1M2_null_count; /**< cjt-Type1SP-feType2R1M2-null 元素个数。 */
    bool has_cjt_Type1SP_feType2R2M2_null; /**< cjt-Type1SP-feType2R2M2-null 是否存在。 */
    int64_t* cjt_Type1SP_feType2R2M2_null_items; /**< ASN.1 cjt-Type1SP-feType2R2M2-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cjt_Type1SP_feType2R2M2_null_count; /**< cjt-Type1SP-feType2R2M2-null 元素个数。 */
    bool has_cjt_Type1MP_eType2R1_null; /**< cjt-Type1MP-eType2R1-null 是否存在。 */
    int64_t* cjt_Type1MP_eType2R1_null_items; /**< ASN.1 cjt-Type1MP-eType2R1-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cjt_Type1MP_eType2R1_null_count; /**< cjt-Type1MP-eType2R1-null 元素个数。 */
    bool has_cjt_Type1MP_eType2R2_null; /**< cjt-Type1MP-eType2R2-null 是否存在。 */
    int64_t* cjt_Type1MP_eType2R2_null_items; /**< ASN.1 cjt-Type1MP-eType2R2-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cjt_Type1MP_eType2R2_null_count; /**< cjt-Type1MP-eType2R2-null 元素个数。 */
    bool has_cjt_Type1MP_feType2R1M1_null; /**< cjt-Type1MP-feType2R1M1-null 是否存在。 */
    int64_t* cjt_Type1MP_feType2R1M1_null_items; /**< ASN.1 cjt-Type1MP-feType2R1M1-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cjt_Type1MP_feType2R1M1_null_count; /**< cjt-Type1MP-feType2R1M1-null 元素个数。 */
    bool has_cjt_Type1MP_feType2R1M2_null; /**< cjt-Type1MP-feType2R1M2-null 是否存在。 */
    int64_t* cjt_Type1MP_feType2R1M2_null_items; /**< ASN.1 cjt-Type1MP-feType2R1M2-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cjt_Type1MP_feType2R1M2_null_count; /**< cjt-Type1MP-feType2R1M2-null 元素个数。 */
    bool has_cjt_Type1MP_feType2R2M2_null; /**< cjt-Type1MP-feType2R2M2-null 是否存在。 */
    int64_t* cjt_Type1MP_feType2R2M2_null_items; /**< ASN.1 cjt-Type1MP-feType2R2M2-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cjt_Type1MP_feType2R2M2_null_count; /**< cjt-Type1MP-feType2R2M2-null 元素个数。 */
};


/**
 * @brief CodebookParametersHARQ_ACK_PUSCH_r18
 * @note ASN.1：CodebookParametersHARQ-ACK-PUSCH-r18；源文件第 16093 行。
 * @note CodebookParametersHARQ-ACK-PUSCH-r18 ::= SEQUENCE { multiplexingType1-r18, multiplexingType2-r18, multiplexingType3-r1...
 */
struct CodebookParametersHARQ_ACK_PUSCH_r18 {
    bool has_multiplexingType1_r18; /**< multiplexingType1-r18 是否存在。 */
    CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType1_r18 multiplexingType1_r18; /**< ASN.1 multiplexingType1-r18；枚举；OPTIONAL。 */
    bool has_multiplexingType2_r18; /**< multiplexingType2-r18 是否存在。 */
    CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType2_r18 multiplexingType2_r18; /**< ASN.1 multiplexingType2-r18；枚举；OPTIONAL。 */
    bool has_multiplexingType3_r18; /**< multiplexingType3-r18 是否存在。 */
    CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType3_r18 multiplexingType3_r18; /**< ASN.1 multiplexingType3-r18；枚举；OPTIONAL。 */
    bool has_pucch_DiffResource_PDSCH_r18; /**< pucch-DiffResource-PDSCH-r18 是否存在。 */
    CodebookParametersHARQ_ACK_PUSCH_r18_Pucch_DiffResource_PDSCH_r18 pucch_DiffResource_PDSCH_r18; /**< ASN.1 pucch-DiffResource-PDSCH-r18；枚举；OPTIONAL。 */
    bool has_diffCB_Size_PDSCH_r18; /**< diffCB-Size-PDSCH-r18 是否存在。 */
    CodebookParametersHARQ_ACK_PUSCH_r18_DiffCB_Size_PDSCH_r18 diffCB_Size_PDSCH_r18; /**< ASN.1 diffCB-Size-PDSCH-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18
 * @note ASN.1：tdcp-ReportPerBC-r18；源文件第 15118 行。
 * @note SEQUENCE { valueX-r18, maxNumberActiveResource-r18 }
 */
struct CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18 {
    int64_t valueX_r18; /**< ASN.1 valueX-r18；INTEGER (1..2)，位宽 1 bit。 */
    int64_t maxNumberActiveResource_r18; /**< ASN.1 maxNumberActiveResource-r18；INTEGER (2..32)，位宽 5 bit。 */
};


/**
 * @brief CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18
 * @note ASN.1：tdcp-ResourcePerBC-r18；源文件第 15123 行。
 * @note SEQUENCE { maxNumberConfigPerCC-r18, maxNumberConfigAcrossCC-r18, maxNumberSi...
 */
struct CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18 {
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18 maxNumberConfigPerCC_r18; /**< ASN.1 maxNumberConfigPerCC-r18；枚举。 */
    int64_t maxNumberConfigAcrossCC_r18; /**< ASN.1 maxNumberConfigAcrossCC-r18；INTEGER (1..32)，位宽 5 bit。 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18 maxNumberSimultaneousPerCC_r18; /**< ASN.1 maxNumberSimultaneousPerCC-r18；枚举。 */
};


/**
 * @brief CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackPerBC-r18/maxNumberCSI-ResourceAcrossCC-r18；源文件第 15132 行。
 * @note SEQUENCE { sdType1-Resource-r18, sdType2-Resource-r18 }
 */
struct CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18 sdType1_Resource_r18; /**< ASN.1 sdType1-Resource-r18；枚举。 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18 sdType2_Resource_r18; /**< ASN.1 sdType2-Resource-r18；枚举。 */
};


/**
 * @brief CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackPerBC-r18/maxNumberPortsAcrossCC-r18；源文件第 15140 行。
 * @note SEQUENCE { sdType1-Resource-r18, sdType2-Resource-r18 }
 */
struct CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18 {
    int64_t sdType1_Resource_r18; /**< ASN.1 sdType1-Resource-r18；INTEGER (1..32)，位宽 5 bit。 */
    int64_t sdType2_Resource_r18; /**< ASN.1 sdType2-Resource-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackPerBC-r18；源文件第 15131 行。
 * @note SEQUENCE { maxNumberCSI-ResourceAcrossCC-r18, maxNumberPortsAcrossCC-r18 }
 */
struct CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 maxNumberCSI_ResourceAcrossCC_r18; /**< ASN.1 maxNumberCSI-ResourceAcrossCC-r18；结构体。 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18 maxNumberPortsAcrossCC_r18; /**< ASN.1 maxNumberPortsAcrossCC-r18；结构体。 */
};


/**
 * @brief CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackPUSCH-PerBC-r18；源文件第 15147 行。
 * @note SEQUENCE { maxNumberCSI-ResourceAcrossCC-r18, maxNumberPortsAcrossCC-r18 }
 */
struct CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 maxNumberCSI_ResourceAcrossCC_r18; /**< ASN.1 maxNumberCSI-ResourceAcrossCC-r18；枚举。 */
    int64_t maxNumberPortsAcrossCC_r18; /**< ASN.1 maxNumberPortsAcrossCC-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackAperiodicPerBC-r18/maxNumberCSI-ResourceAcrossCC-r18；源文件第 15155 行。
 * @note SEQUENCE { sdType1-Resource-r18, sdType2-Resource-r18 }
 */
struct CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6 sdType1_Resource_r18; /**< ASN.1 sdType1-Resource-r18；枚举。 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa sdType2_Resource_r18; /**< ASN.1 sdType2-Resource-r18；枚举。 */
};


/**
 * @brief CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackAperiodicPerBC-r18/maxNumberPortsAcrossCC-r18；源文件第 15163 行。
 * @note SEQUENCE { sdType1-Resource-r18, sdType2-Resource-r18 }
 */
struct CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18 {
    int64_t sdType1_Resource_r18; /**< ASN.1 sdType1-Resource-r18；INTEGER (1..32)，位宽 5 bit。 */
    int64_t sdType2_Resource_r18; /**< ASN.1 sdType2-Resource-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackAperiodicPerBC-r18；源文件第 15154 行。
 * @note SEQUENCE { maxNumberCSI-ResourceAcrossCC-r18, maxNumberPortsAcrossCC-r18 }
 */
struct CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 maxNumberCSI_ResourceAcrossCC_r18; /**< ASN.1 maxNumberCSI-ResourceAcrossCC-r18；结构体。 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18 maxNumberPortsAcrossCC_r18; /**< ASN.1 maxNumberPortsAcrossCC-r18；结构体。 */
};


/**
 * @brief CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackPUCCH-PerBC-r18；源文件第 15169 行。
 * @note SEQUENCE { maxNumberCSI-ResourceAcrossCC-r18, maxNumberPortsAcrossCC-r18 }
 */
struct CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18 {
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 maxNumberCSI_ResourceAcrossCC_r18; /**< ASN.1 maxNumberCSI-ResourceAcrossCC-r18；枚举。 */
    int64_t maxNumberPortsAcrossCC_r18; /**< ASN.1 maxNumberPortsAcrossCC-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18
 * @note ASN.1：powerAdaptation-CSI-FeedbackPerBC-r18；源文件第 15176 行。
 * @note SEQUENCE { maxNumberCSI-ResourceAcrossCC-r18, maxNumberPortsAcrossCC-r18 }
 */
struct CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18 {
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 maxNumberCSI_ResourceAcrossCC_r18; /**< ASN.1 maxNumberCSI-ResourceAcrossCC-r18；枚举。 */
    int64_t maxNumberPortsAcrossCC_r18; /**< ASN.1 maxNumberPortsAcrossCC-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18
 * @note ASN.1：powerAdaptation-CSI-FeedbackPUSCH-PerBC-r18；源文件第 15183 行。
 * @note SEQUENCE { maxNumberCSI-ResourceAcrossCC-r18, maxNumberPortsAcrossCC-r18 }
 */
struct CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18 {
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 maxNumberCSI_ResourceAcrossCC_r18; /**< ASN.1 maxNumberCSI-ResourceAcrossCC-r18；枚举。 */
    int64_t maxNumberPortsAcrossCC_r18; /**< ASN.1 maxNumberPortsAcrossCC-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18
 * @note ASN.1：powerAdaptation-CSI-FeedbackAperiodicPerBC-r18；源文件第 15190 行。
 * @note SEQUENCE { maxNumberCSI-ResourceAcrossCC-r18, maxNumberPortsAcrossCC-r18 }
 */
struct CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18 {
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 maxNumberCSI_ResourceAcrossCC_r18; /**< ASN.1 maxNumberCSI-ResourceAcrossCC-r18；枚举。 */
    int64_t maxNumberPortsAcrossCC_r18; /**< ASN.1 maxNumberPortsAcrossCC-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18
 * @note ASN.1：powerAdaptation-CSI-FeedbackPUCCH-PerBC-r18；源文件第 15198 行。
 * @note SEQUENCE { maxNumberCSI-ResourceAcrossCC-r18, maxNumberPortsAcrossCC-r18 }
 */
struct CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18 {
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 maxNumberCSI_ResourceAcrossCC_r18; /**< ASN.1 maxNumberCSI-ResourceAcrossCC-r18；枚举。 */
    int64_t maxNumberPortsAcrossCC_r18; /**< ASN.1 maxNumberPortsAcrossCC-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18
 * @note ASN.1：multiCell-PDSCH-DCI-1-3-SameSCS-r18/coScheduledCellSCS-r18；源文件第 15212 行。
 * @note SEQUENCE { nonSharedSpectrum-fdd-fr1, nonSharedSpectrum-tdd-fr1, sharedSpectr...
 */
struct CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18 {
    bool has_nonSharedSpectrum_fdd_fr1; /**< nonSharedSpectrum-fdd-fr1 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1 nonSharedSpectrum_fdd_fr1; /**< ASN.1 nonSharedSpectrum-fdd-fr1；枚举；OPTIONAL。 */
    bool has_nonSharedSpectrum_tdd_fr1; /**< nonSharedSpectrum-tdd-fr1 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1 nonSharedSpectrum_tdd_fr1; /**< ASN.1 nonSharedSpectrum-tdd-fr1；枚举；OPTIONAL。 */
    bool has_sharedSpectrum_tdd_fr1; /**< sharedSpectrum-tdd-fr1 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1 sharedSpectrum_tdd_fr1; /**< ASN.1 sharedSpectrum-tdd-fr1；枚举；OPTIONAL。 */
    bool has_fr2_1; /**< fr2-1 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1 fr2_1; /**< ASN.1 fr2-1；枚举；OPTIONAL。 */
    bool has_fr2_2; /**< fr2-2 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2 fr2_2; /**< ASN.1 fr2-2；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18
 * @note ASN.1：multiCell-PDSCH-DCI-1-3-SameSCS-r18；源文件第 15211 行。
 * @note SEQUENCE { coScheduledCellSCS-r18, maxNumberCoScheduledCell-r18, maxNumberSet...
 */
struct CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18 coScheduledCellSCS_r18; /**< ASN.1 coScheduledCellSCS-r18；结构体。 */
    int64_t maxNumberCoScheduledCell_r18; /**< ASN.1 maxNumberCoScheduledCell-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t maxNumberSetsOfCellAcrossPUCCH_Group_r18; /**< ASN.1 maxNumberSetsOfCellAcrossPUCCH-Group-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberSetsOfCellScheduling_r18; /**< ASN.1 maxNumberSetsOfCellScheduling-r18；INTEGER (1..4)，位宽 2 bit。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_HarqFeedbackType_r18 harqFeedbackType_r18; /**< ASN.1 harqFeedbackType-r18；枚举。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18 coScheduledCellIndicationScheme_r18; /**< ASN.1 coScheduledCellIndicationScheme-r18；枚举。 */
    bool has_supportOfSearchSpace_r18; /**< supportOfSearchSpace-r18 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_SupportOfSearchSpace_r18 supportOfSearchSpace_r18; /**< ASN.1 supportOfSearchSpace-r18；枚举；OPTIONAL。 */
    bool has_licensed_fdd_tdd_fr1_r18; /**< licensed-fdd-tdd-fr1-r18 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18 licensed_fdd_tdd_fr1_r18; /**< ASN.1 licensed-fdd-tdd-fr1-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18
 * @note ASN.1：multiCell-PDSCH-DCI-1-3-DiffSCS-r18；源文件第 15229 行。
 * @note SEQUENCE { coScheduledCellSCS-r18, combinationCarrierType-r18, maxNumberCoSch...
 */
struct CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18 {
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellSCS_r18 coScheduledCellSCS_r18; /**< ASN.1 coScheduledCellSCS-r18；枚举。 */
    CombinationCarrierType_r18* combinationCarrierType_r18_items; /**< ASN.1 combinationCarrierType-r18；SEQUENCE OF CombinationCarrierType_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t combinationCarrierType_r18_count; /**< combinationCarrierType-r18 元素个数。 */
    int64_t maxNumberCoScheduledCell_r18; /**< ASN.1 maxNumberCoScheduledCell-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t maxNumberSetsOfCellAcrossPUCCH_Group_r18; /**< ASN.1 maxNumberSetsOfCellAcrossPUCCH-Group-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberSetsOfCellScheduling_r18; /**< ASN.1 maxNumberSetsOfCellScheduling-r18；INTEGER (1..4)，位宽 2 bit。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_HarqFeedbackType_r18 harqFeedbackType_r18; /**< ASN.1 harqFeedbackType-r18；枚举。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18 coScheduledCellIndicationScheme_r18; /**< ASN.1 coScheduledCellIndicationScheme-r18；枚举。 */
};


/**
 * @brief CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18
 * @note ASN.1：multiCell-PUSCH-DCI-0-3-SameSCS-r18/coScheduledCellSCS-r18；源文件第 15242 行。
 * @note SEQUENCE { nonSharedSpectrum-fdd-fr1, nonSharedSpectrum-tdd-fr1, sharedSpectr...
 */
struct CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18 {
    bool has_nonSharedSpectrum_fdd_fr1; /**< nonSharedSpectrum-fdd-fr1 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1 nonSharedSpectrum_fdd_fr1; /**< ASN.1 nonSharedSpectrum-fdd-fr1；枚举；OPTIONAL。 */
    bool has_nonSharedSpectrum_tdd_fr1; /**< nonSharedSpectrum-tdd-fr1 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1 nonSharedSpectrum_tdd_fr1; /**< ASN.1 nonSharedSpectrum-tdd-fr1；枚举；OPTIONAL。 */
    bool has_sharedSpectrum_tdd_fr1; /**< sharedSpectrum-tdd-fr1 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1 sharedSpectrum_tdd_fr1; /**< ASN.1 sharedSpectrum-tdd-fr1；枚举；OPTIONAL。 */
    bool has_fr2_1; /**< fr2-1 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1 fr2_1; /**< ASN.1 fr2-1；枚举；OPTIONAL。 */
    bool has_fr2_2; /**< fr2-2 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2 fr2_2; /**< ASN.1 fr2-2；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18
 * @note ASN.1：multiCell-PUSCH-DCI-0-3-SameSCS-r18；源文件第 15241 行。
 * @note SEQUENCE { coScheduledCellSCS-r18, maxNumberCoScheduledCell-r18, maxNumberSet...
 */
struct CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18 coScheduledCellSCS_r18; /**< ASN.1 coScheduledCellSCS-r18；结构体。 */
    int64_t maxNumberCoScheduledCell_r18; /**< ASN.1 maxNumberCoScheduledCell-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t maxNumberSetsOfCellAcrossPUCCH_Group_r18; /**< ASN.1 maxNumberSetsOfCellAcrossPUCCH-Group-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberSetsOfCellScheduling_r18; /**< ASN.1 maxNumberSetsOfCellScheduling-r18；INTEGER (1..4)，位宽 2 bit。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18 coScheduledCellIndicationScheme_r18; /**< ASN.1 coScheduledCellIndicationScheme-r18；枚举。 */
    bool has_supportOfSearchSpace_r18; /**< supportOfSearchSpace-r18 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_SupportOfSearchSpace_r18 supportOfSearchSpace_r18; /**< ASN.1 supportOfSearchSpace-r18；枚举；OPTIONAL。 */
    bool has_licensed_fdd_tdd_fr1_r18; /**< licensed-fdd-tdd-fr1-r18 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18 licensed_fdd_tdd_fr1_r18; /**< ASN.1 licensed-fdd-tdd-fr1-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18
 * @note ASN.1：multiCell-PUSCH-DCI-0-3-DiffSCS-r18；源文件第 15257 行。
 * @note SEQUENCE { coScheduledCellSCS-r18, combinationCarrierType-r18, maxNumberCoSch...
 */
struct CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18 {
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellSCS_r18 coScheduledCellSCS_r18; /**< ASN.1 coScheduledCellSCS-r18；枚举。 */
    CombinationCarrierType_r18* combinationCarrierType_r18_items; /**< ASN.1 combinationCarrierType-r18；SEQUENCE OF CombinationCarrierType_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t combinationCarrierType_r18_count; /**< combinationCarrierType-r18 元素个数。 */
    int64_t maxNumberCoScheduledCell_r18; /**< ASN.1 maxNumberCoScheduledCell-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t maxNumberSetsOfCellAcrossPUCCH_Group_r18; /**< ASN.1 maxNumberSetsOfCellAcrossPUCCH-Group-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberSetsOfCellScheduling_r18; /**< ASN.1 maxNumberSetsOfCellScheduling-r18；INTEGER (1..4)，位宽 2 bit。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18 coScheduledCellIndicationScheme_r18; /**< ASN.1 coScheduledCellIndicationScheme-r18；枚举。 */
};


/**
 * @brief CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18
 * @note ASN.1：advUnicastDCI-DL-r18；源文件第 15267 行。
 * @note SEQUENCE { scs-15kHz-120kHz-r18, scs-15kHz-60kHz-r18, scs-30kHz-120kHz-r18, s...
 */
struct CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18 {
    bool has_scs_15kHz_120kHz_r18; /**< scs-15kHz-120kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_120kHz_r18 scs_15kHz_120kHz_r18; /**< ASN.1 scs-15kHz-120kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_15kHz_60kHz_r18; /**< scs-15kHz-60kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_60kHz_r18 scs_15kHz_60kHz_r18; /**< ASN.1 scs-15kHz-60kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_30kHz_120kHz_r18; /**< scs-30kHz-120kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_120kHz_r18 scs_30kHz_120kHz_r18; /**< ASN.1 scs-30kHz-120kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_15kHz_30kHz_r18; /**< scs-15kHz-30kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_30kHz_r18 scs_15kHz_30kHz_r18; /**< ASN.1 scs-15kHz-30kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_30kHz_60kHz_r18; /**< scs-30kHz-60kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_60kHz_r18 scs_30kHz_60kHz_r18; /**< ASN.1 scs-30kHz-60kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_60kHz_120kHz_r18; /**< scs-60kHz-120kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_60kHz_120kHz_r18 scs_60kHz_120kHz_r18; /**< ASN.1 scs-60kHz-120kHz-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18
 * @note ASN.1：advUnicastDCI-UL-r18；源文件第 15276 行。
 * @note SEQUENCE { scs-15kHz-120kHz-r18, scs-15kHz-60kHz-r18, scs-30kHz-120kHz-r18, s...
 */
struct CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18 {
    bool has_scs_15kHz_120kHz_r18; /**< scs-15kHz-120kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_120kHz_r18 scs_15kHz_120kHz_r18; /**< ASN.1 scs-15kHz-120kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_15kHz_60kHz_r18; /**< scs-15kHz-60kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_60kHz_r18 scs_15kHz_60kHz_r18; /**< ASN.1 scs-15kHz-60kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_30kHz_120kHz_r18; /**< scs-30kHz-120kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_120kHz_r18 scs_30kHz_120kHz_r18; /**< ASN.1 scs-30kHz-120kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_15kHz_30kHz_r18; /**< scs-15kHz-30kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_30kHz_r18 scs_15kHz_30kHz_r18; /**< ASN.1 scs-15kHz-30kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_30kHz_60kHz_r18; /**< scs-30kHz-60kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_60kHz_r18 scs_30kHz_60kHz_r18; /**< ASN.1 scs-30kHz-60kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_60kHz_120kHz_r18; /**< scs-60kHz-120kHz-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_60kHz_120kHz_r18 scs_60kHz_120kHz_r18; /**< ASN.1 scs-60kHz-120kHz-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18
 * @note ASN.1：type3EnhHARQ-CB-DCI-1-3-r18；源文件第 15287 行。
 * @note SEQUENCE { numberOfCodebook-r18, maxNumberPUCCH-Trans-r18 }
 */
struct CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18 {
    CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18_NumberOfCodebook_r18 numberOfCodebook_r18; /**< ASN.1 numberOfCodebook-r18；枚举。 */
    int64_t maxNumberPUCCH_Trans_r18; /**< ASN.1 maxNumberPUCCH-Trans-r18；INTEGER (1..7)，位宽 3 bit。 */
};


/**
 * @brief CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18
 * @note ASN.1：pdcch-MonitoringCA-r18；源文件第 15293 行。
 * @note SEQUENCE { maxNumberOfMonitoringCC-r18, supportedSpanArrangement-r18 }
 */
struct CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18 {
    int64_t maxNumberOfMonitoringCC_r18; /**< ASN.1 maxNumberOfMonitoringCC-r18；INTEGER (2..16)，位宽 4 bit。 */
    CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18_SupportedSpanArrangement_r18 supportedSpanArrangement_r18; /**< ASN.1 supportedSpanArrangement-r18；枚举。 */
};


/**
 * @brief CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18
 * @note ASN.1：pdcch-BlindDetectionCA-Mixed-r18；源文件第 15299 行。
 * @note SEQUENCE { blindDetectionCA-Mixed-r18, supportedSpanArrangement-r18 }
 */
struct CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18 {
    PDCCH_BlindDetectionCA_Mixed_r18* blindDetectionCA_Mixed_r18_items; /**< ASN.1 blindDetectionCA-Mixed-r18；SEQUENCE OF PDCCH_BlindDetectionCA_Mixed_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t blindDetectionCA_Mixed_r18_count; /**< blindDetectionCA-Mixed-r18 元素个数。 */
    CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18_SupportedSpanArrangement_r18 supportedSpanArrangement_r18; /**< ASN.1 supportedSpanArrangement-r18；枚举。 */
};


/**
 * @brief CA_ParametersNR_v1800
 * @note ASN.1：CA-ParametersNR-v1800；源文件第 15108 行。
 * @note CA-ParametersNR-v1800 ::= SEQUENCE { codebookParametersetype2DopplerCSI-PerBC-r18, codebookParametersfe...
 */
struct CA_ParametersNR_v1800 {
    bool has_codebookParametersetype2DopplerCSI_PerBC_r18; /**< codebookParametersetype2DopplerCSI-PerBC-r18 是否存在。 */
    CodebookParametersetype2DopplerCSI_r18 codebookParametersetype2DopplerCSI_PerBC_r18; /**< ASN.1 codebookParametersetype2DopplerCSI-PerBC-r18；结构体；OPTIONAL。 */
    bool has_codebookParametersfetype2DopplerCSI_PerBC_r18; /**< codebookParametersfetype2DopplerCSI-PerBC-r18 是否存在。 */
    CodebookParametersfetype2DopplerCSI_r18 codebookParametersfetype2DopplerCSI_PerBC_r18; /**< ASN.1 codebookParametersfetype2DopplerCSI-PerBC-r18；结构体；OPTIONAL。 */
    bool has_codebookParametersetype2CJT_PerBC_r18; /**< codebookParametersetype2CJT-PerBC-r18 是否存在。 */
    CodebookParametersetype2CJT_r18 codebookParametersetype2CJT_PerBC_r18; /**< ASN.1 codebookParametersetype2CJT-PerBC-r18；结构体；OPTIONAL。 */
    bool has_codebookParametersfetype2CJT_PerBC_r18; /**< codebookParametersfetype2CJT-PerBC-r18 是否存在。 */
    CodebookParametersfetype2CJT_r18 codebookParametersfetype2CJT_PerBC_r18; /**< ASN.1 codebookParametersfetype2CJT-PerBC-r18；结构体；OPTIONAL。 */
    bool has_codebookComboParametersCJT_PerBC_r18; /**< codebookComboParametersCJT-PerBC-r18 是否存在。 */
    CodebookComboParametersCJT_r18 codebookComboParametersCJT_PerBC_r18; /**< ASN.1 codebookComboParametersCJT-PerBC-r18；结构体；OPTIONAL。 */
    bool has_codebookParametersHARQ_ACK_PUSCH_PerBC_r18; /**< codebookParametersHARQ-ACK-PUSCH-PerBC-r18 是否存在。 */
    CodebookParametersHARQ_ACK_PUSCH_r18 codebookParametersHARQ_ACK_PUSCH_PerBC_r18; /**< ASN.1 codebookParametersHARQ-ACK-PUSCH-PerBC-r18；结构体；OPTIONAL。 */
    bool has_maxNumberTAG_AcrossCC_r18; /**< maxNumberTAG-AcrossCC-r18 是否存在。 */
    int64_t maxNumberTAG_AcrossCC_r18; /**< ASN.1 maxNumberTAG-AcrossCC-r18；INTEGER (2..4)，位宽 2 bit；OPTIONAL。 */
    bool has_tdcp_ReportPerBC_r18; /**< tdcp-ReportPerBC-r18 是否存在。 */
    CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18 tdcp_ReportPerBC_r18; /**< ASN.1 tdcp-ReportPerBC-r18；结构体；OPTIONAL。 */
    bool has_tdcp_ResourcePerBC_r18; /**< tdcp-ResourcePerBC-r18 是否存在。 */
    CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18 tdcp_ResourcePerBC_r18; /**< ASN.1 tdcp-ResourcePerBC-r18；结构体；OPTIONAL。 */
    bool has_timelineRelax_CJT_CSI_CA_r18; /**< timelineRelax-CJT-CSI-CA-r18 是否存在。 */
    CA_ParametersNR_v1800_TimelineRelax_CJT_CSI_CA_r18 timelineRelax_CJT_CSI_CA_r18; /**< ASN.1 timelineRelax-CJT-CSI-CA-r18；枚举；OPTIONAL。 */
    bool has_spatialAdaptation_CSI_FeedbackPerBC_r18; /**< spatialAdaptation-CSI-FeedbackPerBC-r18 是否存在。 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18 spatialAdaptation_CSI_FeedbackPerBC_r18; /**< ASN.1 spatialAdaptation-CSI-FeedbackPerBC-r18；结构体；OPTIONAL。 */
    bool has_spatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18; /**< spatialAdaptation-CSI-FeedbackPUSCH-PerBC-r18 是否存在。 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18 spatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18; /**< ASN.1 spatialAdaptation-CSI-FeedbackPUSCH-PerBC-r18；结构体；OPTIONAL。 */
    bool has_spatialAdaptation_CSI_FeedbackAperiodicPerBC_r18; /**< spatialAdaptation-CSI-FeedbackAperiodicPerBC-r18 是否存在。 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18 spatialAdaptation_CSI_FeedbackAperiodicPerBC_r18; /**< ASN.1 spatialAdaptation-CSI-FeedbackAperiodicPerBC-r18；结构体；OPTIONAL。 */
    bool has_spatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18; /**< spatialAdaptation-CSI-FeedbackPUCCH-PerBC-r18 是否存在。 */
    CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18 spatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18; /**< ASN.1 spatialAdaptation-CSI-FeedbackPUCCH-PerBC-r18；结构体；OPTIONAL。 */
    bool has_powerAdaptation_CSI_FeedbackPerBC_r18; /**< powerAdaptation-CSI-FeedbackPerBC-r18 是否存在。 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18 powerAdaptation_CSI_FeedbackPerBC_r18; /**< ASN.1 powerAdaptation-CSI-FeedbackPerBC-r18；结构体；OPTIONAL。 */
    bool has_powerAdaptation_CSI_FeedbackPUSCH_PerBC_r18; /**< powerAdaptation-CSI-FeedbackPUSCH-PerBC-r18 是否存在。 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18 powerAdaptation_CSI_FeedbackPUSCH_PerBC_r18; /**< ASN.1 powerAdaptation-CSI-FeedbackPUSCH-PerBC-r18；结构体；OPTIONAL。 */
    bool has_powerAdaptation_CSI_FeedbackAperiodicPerBC_r18; /**< powerAdaptation-CSI-FeedbackAperiodicPerBC-r18 是否存在。 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18 powerAdaptation_CSI_FeedbackAperiodicPerBC_r18; /**< ASN.1 powerAdaptation-CSI-FeedbackAperiodicPerBC-r18；结构体；OPTIONAL。 */
    bool has_powerAdaptation_CSI_FeedbackPUCCH_PerBC_r18; /**< powerAdaptation-CSI-FeedbackPUCCH-PerBC-r18 是否存在。 */
    CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18 powerAdaptation_CSI_FeedbackPUCCH_PerBC_r18; /**< ASN.1 powerAdaptation-CSI-FeedbackPUCCH-PerBC-r18；结构体；OPTIONAL。 */
    bool has_mixCodeBookSpatialAdaptationPerBC_r18; /**< mixCodeBookSpatialAdaptationPerBC-r18 是否存在。 */
    SupportedCSI_RS_Resource* mixCodeBookSpatialAdaptationPerBC_r18_items; /**< ASN.1 mixCodeBookSpatialAdaptationPerBC-r18；SEQUENCE OF SupportedCSI_RS_Resource，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t mixCodeBookSpatialAdaptationPerBC_r18_count; /**< mixCodeBookSpatialAdaptationPerBC-r18 元素个数。 */
    bool has_multiCell_PDSCH_DCI_1_3_SameSCS_r18; /**< multiCell-PDSCH-DCI-1-3-SameSCS-r18 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18 multiCell_PDSCH_DCI_1_3_SameSCS_r18; /**< ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18；结构体；OPTIONAL。 */
    bool has_multiCell_PDSCH_DCI_1_3_DiffSCS_r18; /**< multiCell-PDSCH-DCI-1-3-DiffSCS-r18 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18 multiCell_PDSCH_DCI_1_3_DiffSCS_r18; /**< ASN.1 multiCell-PDSCH-DCI-1-3-DiffSCS-r18；结构体；OPTIONAL。 */
    bool has_multiCell_PUSCH_DCI_0_3_SameSCS_r18; /**< multiCell-PUSCH-DCI-0-3-SameSCS-r18 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18 multiCell_PUSCH_DCI_0_3_SameSCS_r18; /**< ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18；结构体；OPTIONAL。 */
    bool has_multiCell_PUSCH_DCI_0_3_DiffSCS_r18; /**< multiCell-PUSCH-DCI-0-3-DiffSCS-r18 是否存在。 */
    CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18 multiCell_PUSCH_DCI_0_3_DiffSCS_r18; /**< ASN.1 multiCell-PUSCH-DCI-0-3-DiffSCS-r18；结构体；OPTIONAL。 */
    bool has_advUnicastDCI_DL_r18; /**< advUnicastDCI-DL-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18 advUnicastDCI_DL_r18; /**< ASN.1 advUnicastDCI-DL-r18；结构体；OPTIONAL。 */
    bool has_advUnicastDCI_UL_r18; /**< advUnicastDCI-UL-r18 是否存在。 */
    CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18 advUnicastDCI_UL_r18; /**< ASN.1 advUnicastDCI-UL-r18；结构体；OPTIONAL。 */
    bool has_type3HARQ_CB_DCI_1_3_r18; /**< type3HARQ-CB-DCI-1-3-r18 是否存在。 */
    CA_ParametersNR_v1800_Type3HARQ_CB_DCI_1_3_r18 type3HARQ_CB_DCI_1_3_r18; /**< ASN.1 type3HARQ-CB-DCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_type3EnhHARQ_CB_DCI_1_3_r18; /**< type3EnhHARQ-CB-DCI-1-3-r18 是否存在。 */
    CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18 type3EnhHARQ_CB_DCI_1_3_r18; /**< ASN.1 type3EnhHARQ-CB-DCI-1-3-r18；结构体；OPTIONAL。 */
    bool has_pdcch_MonitoringCA_r18; /**< pdcch-MonitoringCA-r18 是否存在。 */
    CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18 pdcch_MonitoringCA_r18; /**< ASN.1 pdcch-MonitoringCA-r18；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCA_Mixed_r18; /**< pdcch-BlindDetectionCA-Mixed-r18 是否存在。 */
    CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18 pdcch_BlindDetectionCA_Mixed_r18; /**< ASN.1 pdcch-BlindDetectionCA-Mixed-r18；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetectionMCG_SCG_List_r18; /**< pdcch-BlindDetectionMCG-SCG-List-r18 是否存在。 */
    PDCCH_BlindDetectionMCG_SCG_r18* pdcch_BlindDetectionMCG_SCG_List_r18_items; /**< ASN.1 pdcch-BlindDetectionMCG-SCG-List-r18；SEQUENCE OF PDCCH_BlindDetectionMCG_SCG_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdcch_BlindDetectionMCG_SCG_List_r18_count; /**< pdcch-BlindDetectionMCG-SCG-List-r18 元素个数。 */
    bool has_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18; /**< pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-r18 是否存在。 */
    PDCCH_BlindDetectionCA_Mixed_r18* pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_items; /**< ASN.1 pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-r18；SEQUENCE OF PDCCH_BlindDetectionCA_Mixed_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count; /**< pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-r18 元素个数。 */
    bool has_pdcch_MonitoringCA_NonAlignedSpan_r18; /**< pdcch-MonitoringCA-NonAlignedSpan-r18 是否存在。 */
    int64_t pdcch_MonitoringCA_NonAlignedSpan_r18; /**< ASN.1 pdcch-MonitoringCA-NonAlignedSpan-r18；INTEGER (2..16)，位宽 4 bit；OPTIONAL。 */
    bool has_intraBandNR_CA_non_collocated_r18; /**< intraBandNR-CA-non-collocated-r18 是否存在。 */
    CA_ParametersNR_v1800_IntraBandNR_CA_non_collocated_r18 intraBandNR_CA_non_collocated_r18; /**< ASN.1 intraBandNR-CA-non-collocated-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC_v1800
 * @note ASN.1：CA-ParametersNRDC-v1800；源文件第 15522 行。
 * @note CA-ParametersNRDC-v1800 ::= SEQUENCE { ca-ParametersNR-ForDC-v1800, pdcch-BlindDetectionNRDC-r18 }
 */
struct CA_ParametersNRDC_v1800 {
    bool has_ca_ParametersNR_ForDC_v1800; /**< ca-ParametersNR-ForDC-v1800 是否存在。 */
    CA_ParametersNR_v1800 ca_ParametersNR_ForDC_v1800; /**< ASN.1 ca-ParametersNR-ForDC-v1800；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetectionNRDC_r18; /**< pdcch-BlindDetectionNRDC-r18 是否存在。 */
    PDCCH_BlindDetectionMixed1_r18* pdcch_BlindDetectionNRDC_r18_items; /**< ASN.1 pdcch-BlindDetectionNRDC-r18；SEQUENCE OF PDCCH_BlindDetectionMixed1_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdcch_BlindDetectionNRDC_r18_count; /**< pdcch-BlindDetectionNRDC-r18 元素个数。 */
};


/**
 * @brief BandCombination_v1800
 * @note ASN.1：BandCombination-v1800；源文件第 14381 行。
 * @note BandCombination-v1800 ::= SEQUENCE { ca-ParametersNR-v1800, ca-ParametersNRDC-v1800, supportedBandCombL...
 */
struct BandCombination_v1800 {
    bool has_ca_ParametersNR_v1800; /**< ca-ParametersNR-v1800 是否存在。 */
    CA_ParametersNR_v1800 ca_ParametersNR_v1800; /**< ASN.1 ca-ParametersNR-v1800；结构体；OPTIONAL。 */
    bool has_ca_ParametersNRDC_v1800; /**< ca-ParametersNRDC-v1800 是否存在。 */
    CA_ParametersNRDC_v1800 ca_ParametersNRDC_v1800; /**< ASN.1 ca-ParametersNRDC-v1800；结构体；OPTIONAL。 */
    bool has_supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18; /**< supportedBandCombListPerBC-SL-U2U-RelayDiscovery-r18 是否存在。 */
    BitString supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18; /**< ASN.1 supportedBandCombListPerBC-SL-U2U-RelayDiscovery-r18；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_bandList_v1810; /**< bandList-v1810 是否存在。 */
    BandParameters_v1810* bandList_v1810_items; /**< ASN.1 bandList-v1810；SEQUENCE OF BandParameters_v1810，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t bandList_v1810_count; /**< bandList-v1810 元素个数。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_r16_ExtGroup1
 * @note ASN.1：BandCombination_UplinkTxSwitch_r16_ExtGroup1；源文件第 14400 行。
 */
struct BandCombination_UplinkTxSwitch_r16_ExtGroup1 {
    bool has_uplinkTxSwitching_PUSCH_TransCoherence_r16; /**< uplinkTxSwitching-PUSCH-TransCoherence-r16 是否存在。 */
    BandCombination_UplinkTxSwitch_r16_ExtGroup1_UplinkTxSwitching_PUSCH_TransCoherence_r16 uplinkTxSwitching_PUSCH_TransCoherence_r16; /**< ASN.1 uplinkTxSwitching-PUSCH-TransCoherence-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_r16
 * @note ASN.1：BandCombination-UplinkTxSwitch-r16；源文件第 14388 行。
 * @note BandCombination-UplinkTxSwitch-r16 ::= SEQUENCE { bandCombination-r16, bandCombination-v1540, bandCombination-v1560,...
 */
struct BandCombination_UplinkTxSwitch_r16 {
    BandCombination bandCombination_r16; /**< ASN.1 bandCombination-r16；结构体。 */
    bool has_bandCombination_v1540; /**< bandCombination-v1540 是否存在。 */
    BandCombination_v1540 bandCombination_v1540; /**< ASN.1 bandCombination-v1540；结构体；OPTIONAL。 */
    bool has_bandCombination_v1560; /**< bandCombination-v1560 是否存在。 */
    BandCombination_v1560 bandCombination_v1560; /**< ASN.1 bandCombination-v1560；结构体；OPTIONAL。 */
    bool has_bandCombination_v1570; /**< bandCombination-v1570 是否存在。 */
    BandCombination_v1570 bandCombination_v1570; /**< ASN.1 bandCombination-v1570；结构体；OPTIONAL。 */
    bool has_bandCombination_v1580; /**< bandCombination-v1580 是否存在。 */
    BandCombination_v1580 bandCombination_v1580; /**< ASN.1 bandCombination-v1580；结构体；OPTIONAL。 */
    bool has_bandCombination_v1590; /**< bandCombination-v1590 是否存在。 */
    BandCombination_v1590 bandCombination_v1590; /**< ASN.1 bandCombination-v1590；结构体；OPTIONAL。 */
    bool has_bandCombination_v1610; /**< bandCombination-v1610 是否存在。 */
    BandCombination_v1610 bandCombination_v1610; /**< ASN.1 bandCombination-v1610；结构体；OPTIONAL。 */
    ULTxSwitchingBandPair_r16* supportedBandPairListNR_r16_items; /**< ASN.1 supportedBandPairListNR-r16；SEQUENCE OF ULTxSwitchingBandPair_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedBandPairListNR_r16_count; /**< supportedBandPairListNR-r16 元素个数。 */
    bool has_uplinkTxSwitching_OptionSupport_r16; /**< uplinkTxSwitching-OptionSupport-r16 是否存在。 */
    BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_OptionSupport_r16 uplinkTxSwitching_OptionSupport_r16; /**< ASN.1 uplinkTxSwitching-OptionSupport-r16；枚举；OPTIONAL。 */
    bool has_uplinkTxSwitching_PowerBoosting_r16; /**< uplinkTxSwitching-PowerBoosting-r16 是否存在。 */
    BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_PowerBoosting_r16 uplinkTxSwitching_PowerBoosting_r16; /**< ASN.1 uplinkTxSwitching-PowerBoosting-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    BandCombination_UplinkTxSwitch_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1630
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1630；源文件第 14406 行。
 * @note BandCombination-UplinkTxSwitch-v1630 ::= SEQUENCE { bandCombination-v1630 }
 */
struct BandCombination_UplinkTxSwitch_v1630 {
    bool has_bandCombination_v1630; /**< bandCombination-v1630 是否存在。 */
    BandCombination_v1630 bandCombination_v1630; /**< ASN.1 bandCombination-v1630；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1640
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1640；源文件第 14410 行。
 * @note BandCombination-UplinkTxSwitch-v1640 ::= SEQUENCE { bandCombination-v1640 }
 */
struct BandCombination_UplinkTxSwitch_v1640 {
    bool has_bandCombination_v1640; /**< bandCombination-v1640 是否存在。 */
    BandCombination_v1640 bandCombination_v1640; /**< ASN.1 bandCombination-v1640；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1650
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1650；源文件第 14414 行。
 * @note BandCombination-UplinkTxSwitch-v1650 ::= SEQUENCE { bandCombination-v1650 }
 */
struct BandCombination_UplinkTxSwitch_v1650 {
    bool has_bandCombination_v1650; /**< bandCombination-v1650 是否存在。 */
    BandCombination_v1650 bandCombination_v1650; /**< ASN.1 bandCombination-v1650；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1670
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1670；源文件第 14418 行。
 * @note BandCombination-UplinkTxSwitch-v1670 ::= SEQUENCE { bandCombination-v15g0 }
 */
struct BandCombination_UplinkTxSwitch_v1670 {
    bool has_bandCombination_v15g0; /**< bandCombination-v15g0 是否存在。 */
    BandCombination_v15g0 bandCombination_v15g0; /**< ASN.1 bandCombination-v15g0；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1690
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1690；源文件第 14422 行。
 * @note BandCombination-UplinkTxSwitch-v1690 ::= SEQUENCE { bandCombination-v1690 }
 */
struct BandCombination_UplinkTxSwitch_v1690 {
    bool has_bandCombination_v1690; /**< bandCombination-v1690 是否存在。 */
    BandCombination_v1690 bandCombination_v1690; /**< ASN.1 bandCombination-v1690；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v16a0
 * @note ASN.1：BandCombination-UplinkTxSwitch-v16a0；源文件第 14426 行。
 * @note BandCombination-UplinkTxSwitch-v16a0 ::= SEQUENCE { bandCombination-v16a0 }
 */
struct BandCombination_UplinkTxSwitch_v16a0 {
    bool has_bandCombination_v16a0; /**< bandCombination-v16a0 是否存在。 */
    BandCombination_v16a0 bandCombination_v16a0; /**< ASN.1 bandCombination-v16a0；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v16e0
 * @note ASN.1：BandCombination-UplinkTxSwitch-v16e0；源文件第 14430 行。
 * @note BandCombination-UplinkTxSwitch-v16e0 ::= SEQUENCE { bandCombination-v15n0 }
 */
struct BandCombination_UplinkTxSwitch_v16e0 {
    bool has_bandCombination_v15n0; /**< bandCombination-v15n0 是否存在。 */
    BandCombination_v15n0 bandCombination_v15n0; /**< ASN.1 bandCombination-v15n0；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1700
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1700；源文件第 14434 行。
 * @note BandCombination-UplinkTxSwitch-v1700 ::= SEQUENCE { bandCombination-v1700, supportedBandPairListNR-v1700, uplinkTxSwit...
 */
struct BandCombination_UplinkTxSwitch_v1700 {
    bool has_bandCombination_v1700; /**< bandCombination-v1700 是否存在。 */
    BandCombination_v1700 bandCombination_v1700; /**< ASN.1 bandCombination-v1700；结构体；OPTIONAL。 */
    bool has_supportedBandPairListNR_v1700; /**< supportedBandPairListNR-v1700 是否存在。 */
    ULTxSwitchingBandPair_v1700* supportedBandPairListNR_v1700_items; /**< ASN.1 supportedBandPairListNR-v1700；SEQUENCE OF ULTxSwitchingBandPair_v1700，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t supportedBandPairListNR_v1700_count; /**< supportedBandPairListNR-v1700 元素个数。 */
    bool has_uplinkTxSwitchingBandParametersList_v1700; /**< uplinkTxSwitchingBandParametersList-v1700 是否存在。 */
    UplinkTxSwitchingBandParameters_v1700* uplinkTxSwitchingBandParametersList_v1700_items; /**< ASN.1 uplinkTxSwitchingBandParametersList-v1700；SEQUENCE OF UplinkTxSwitchingBandParameters_v1700，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uplinkTxSwitchingBandParametersList_v1700_count; /**< uplinkTxSwitchingBandParametersList-v1700 元素个数。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1720
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1720；源文件第 14442 行。
 * @note BandCombination-UplinkTxSwitch-v1720 ::= SEQUENCE { bandCombination-v1720, uplinkTxSwitching-OptionSupport2T2T-r17 }
 */
struct BandCombination_UplinkTxSwitch_v1720 {
    bool has_bandCombination_v1720; /**< bandCombination-v1720 是否存在。 */
    BandCombination_v1720 bandCombination_v1720; /**< ASN.1 bandCombination-v1720；结构体；OPTIONAL。 */
    bool has_uplinkTxSwitching_OptionSupport2T2T_r17; /**< uplinkTxSwitching-OptionSupport2T2T-r17 是否存在。 */
    BandCombination_UplinkTxSwitch_v1720_UplinkTxSwitching_OptionSupport2T2T_r17 uplinkTxSwitching_OptionSupport2T2T_r17; /**< ASN.1 uplinkTxSwitching-OptionSupport2T2T-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1730
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1730；源文件第 14447 行。
 * @note BandCombination-UplinkTxSwitch-v1730 ::= SEQUENCE { bandCombination-v1730 }
 */
struct BandCombination_UplinkTxSwitch_v1730 {
    bool has_bandCombination_v1730; /**< bandCombination-v1730 是否存在。 */
    BandCombination_v1730 bandCombination_v1730; /**< ASN.1 bandCombination-v1730；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1740
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1740；源文件第 14451 行。
 * @note BandCombination-UplinkTxSwitch-v1740 ::= SEQUENCE { bandCombination-v1740 }
 */
struct BandCombination_UplinkTxSwitch_v1740 {
    bool has_bandCombination_v1740; /**< bandCombination-v1740 是否存在。 */
    BandCombination_v1740 bandCombination_v1740; /**< ASN.1 bandCombination-v1740；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1760
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1760；源文件第 14455 行。
 * @note BandCombination-UplinkTxSwitch-v1760 ::= SEQUENCE { bandCombination-v1760 }
 */
struct BandCombination_UplinkTxSwitch_v1760 {
    bool has_bandCombination_v1760; /**< bandCombination-v1760 是否存在。 */
    BandCombination_v1760 bandCombination_v1760; /**< ASN.1 bandCombination-v1760；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1770
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1770；源文件第 14459 行。
 * @note BandCombination-UplinkTxSwitch-v1770 ::= SEQUENCE { bandCombination-v1770 }
 */
struct BandCombination_UplinkTxSwitch_v1770 {
    bool has_bandCombination_v1770; /**< bandCombination-v1770 是否存在。 */
    BandCombination_v1770 bandCombination_v1770; /**< ASN.1 bandCombination-v1770；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1780
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1780；源文件第 14463 行。
 * @note BandCombination-UplinkTxSwitch-v1780 ::= SEQUENCE { bandCombination-v1780 }
 */
struct BandCombination_UplinkTxSwitch_v1780 {
    bool has_bandCombination_v1780; /**< bandCombination-v1780 是否存在。 */
    BandCombination_v1780 bandCombination_v1780; /**< ASN.1 bandCombination-v1780；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_UplinkTxSwitch_v1800
 * @note ASN.1：BandCombination-UplinkTxSwitch-v1800；源文件第 14467 行。
 * @note BandCombination-UplinkTxSwitch-v1800 ::= SEQUENCE { bandCombination-v1800, supportedBandPairListNR-r18, uplinkTxSwitch...
 */
struct BandCombination_UplinkTxSwitch_v1800 {
    bool has_bandCombination_v1800; /**< bandCombination-v1800 是否存在。 */
    BandCombination_v1800 bandCombination_v1800; /**< ASN.1 bandCombination-v1800；结构体；OPTIONAL。 */
    bool has_supportedBandPairListNR_r18; /**< supportedBandPairListNR-r18 是否存在。 */
    ULTxSwitchingBandPair_r18* supportedBandPairListNR_r18_items; /**< ASN.1 supportedBandPairListNR-r18；SEQUENCE OF ULTxSwitchingBandPair_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t supportedBandPairListNR_r18_count; /**< supportedBandPairListNR-r18 元素个数。 */
    bool has_uplinkTxSwitchingMinimumSeparationTime_r18; /**< uplinkTxSwitchingMinimumSeparationTime-r18 是否存在。 */
    BandCombination_UplinkTxSwitch_v1800_UplinkTxSwitchingMinimumSeparationTime_r18 uplinkTxSwitchingMinimumSeparationTime_r18; /**< ASN.1 uplinkTxSwitchingMinimumSeparationTime-r18；枚举；OPTIONAL。 */
    bool has_uplinkTxSwitchingAdditionalPeriodDualUL_List_r18; /**< uplinkTxSwitchingAdditionalPeriodDualUL-List-r18 是否存在。 */
    UplinkTxSwitchingAdditionalPeriodDualUL_r18* uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_items; /**< ASN.1 uplinkTxSwitchingAdditionalPeriodDualUL-List-r18；SEQUENCE OF UplinkTxSwitchingAdditionalPeriodDualUL_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count; /**< uplinkTxSwitchingAdditionalPeriodDualUL-List-r18 元素个数。 */
    bool has_switchingPeriodRestriction_r18; /**< switchingPeriodRestriction-r18 是否存在。 */
    BandCombination_UplinkTxSwitch_v1800_SwitchingPeriodRestriction_r18 switchingPeriodRestriction_r18; /**< ASN.1 switchingPeriodRestriction-r18；枚举；OPTIONAL。 */
};


/**
 * @brief ULTxSwitchingBandPair_r16
 * @note ASN.1：ULTxSwitchingBandPair-r16；源文件第 14478 行。
 * @note ULTxSwitchingBandPair-r16 ::= SEQUENCE { bandIndexUL1-r16, bandIndexUL2-r16, uplinkTxSwitchingPeriod-r16, u...
 */
struct ULTxSwitchingBandPair_r16 {
    int64_t bandIndexUL1_r16; /**< ASN.1 bandIndexUL1-r16；INTEGER (1..32)，位宽 5 bit。 */
    int64_t bandIndexUL2_r16; /**< ASN.1 bandIndexUL2-r16；INTEGER (1..32)，位宽 5 bit。 */
    ULTxSwitchingBandPair_r16_UplinkTxSwitchingPeriod_r16 uplinkTxSwitchingPeriod_r16; /**< ASN.1 uplinkTxSwitchingPeriod-r16；枚举。 */
    bool has_uplinkTxSwitching_DL_Interruption_r16; /**< uplinkTxSwitching-DL-Interruption-r16 是否存在。 */
    BitString uplinkTxSwitching_DL_Interruption_r16; /**< ASN.1 uplinkTxSwitching-DL-Interruption-r16；SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief ULTxSwitchingBandPair_v1700
 * @note ASN.1：ULTxSwitchingBandPair-v1700；源文件第 14485 行。
 * @note ULTxSwitchingBandPair-v1700 ::= SEQUENCE { uplinkTxSwitchingPeriod2T2T-r17 }
 */
struct ULTxSwitchingBandPair_v1700 {
    bool has_uplinkTxSwitchingPeriod2T2T_r17; /**< uplinkTxSwitchingPeriod2T2T-r17 是否存在。 */
    ULTxSwitchingBandPair_v1700_UplinkTxSwitchingPeriod2T2T_r17 uplinkTxSwitchingPeriod2T2T_r17; /**< ASN.1 uplinkTxSwitchingPeriod2T2T-r17；枚举；OPTIONAL。 */
};


/**
 * @brief ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18
 * @note ASN.1：uplinkTxSwitchingPeriodForBandPair-r18；源文件第 14495 行。
 * @note SEQUENCE { switchingPeriodFor2T-r18, switchingPeriodFor1T-r18 }
 */
struct ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18 {
    bool has_switchingPeriodFor2T_r18; /**< switchingPeriodFor2T-r18 是否存在。 */
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor2T_r18 switchingPeriodFor2T_r18; /**< ASN.1 switchingPeriodFor2T-r18；枚举；OPTIONAL。 */
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor1T_r18 switchingPeriodFor1T_r18; /**< ASN.1 switchingPeriodFor1T-r18；枚举。 */
};


/**
 * @brief ULTxSwitchingBandPair_r18
 * @note ASN.1：ULTxSwitchingBandPair-r18；源文件第 14489 行。
 * @note ULTxSwitchingBandPair-r18 ::= SEQUENCE { bandIndexUL1-r18, bandIndexUL2-r18, uplinkTxSwitchingOptionForBand...
 */
struct ULTxSwitchingBandPair_r18 {
    int64_t bandIndexUL1_r18; /**< ASN.1 bandIndexUL1-r18；INTEGER (1..32)，位宽 5 bit。 */
    int64_t bandIndexUL2_r18; /**< ASN.1 bandIndexUL2-r18；INTEGER (1..32)，位宽 5 bit。 */
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingOptionForBandPair_r18 uplinkTxSwitchingOptionForBandPair_r18; /**< ASN.1 uplinkTxSwitchingOptionForBandPair-r18；枚举。 */
    ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18 uplinkTxSwitchingPeriodForBandPair_r18; /**< ASN.1 uplinkTxSwitchingPeriodForBandPair-r18；结构体。 */
    bool has_uplinkTxSwitching_DL_Interruption_r18; /**< uplinkTxSwitching-DL-Interruption-r18 是否存在。 */
    BitString uplinkTxSwitching_DL_Interruption_r18; /**< ASN.1 uplinkTxSwitching-DL-Interruption-r18；SIZE (1..32)；OPTIONAL。 */
    bool has_uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18; /**< uplinkTxSwitchingPeriodUnaffectedBandDualUL-List-r18 是否存在。 */
    SwitchingPeriodUnaffectedBandDualUL_r18* uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_items; /**< ASN.1 uplinkTxSwitchingPeriodUnaffectedBandDualUL-List-r18；SEQUENCE OF SwitchingPeriodUnaffectedBandDualUL_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count; /**< uplinkTxSwitchingPeriodUnaffectedBandDualUL-List-r18 元素个数。 */
};


/**
 * @brief UplinkTxSwitchingBandParameters_v1700
 * @note ASN.1：UplinkTxSwitchingBandParameters-v1700；源文件第 14506 行。
 * @note UplinkTxSwitchingBandParameters-v1700 ::= SEQUENCE { bandIndex-r17, uplinkTxSwitching2T2T-PUSCH-TransCoherence-r17 }
 */
struct UplinkTxSwitchingBandParameters_v1700 {
    int64_t bandIndex_r17; /**< ASN.1 bandIndex-r17；INTEGER (1..32)，位宽 5 bit。 */
    bool has_uplinkTxSwitching2T2T_PUSCH_TransCoherence_r17; /**< uplinkTxSwitching2T2T-PUSCH-TransCoherence-r17 是否存在。 */
    UplinkTxSwitchingBandParameters_v1700_UplinkTxSwitching2T2T_PUSCH_TransCoherence_r17 uplinkTxSwitching2T2T_PUSCH_TransCoherence_r17; /**< ASN.1 uplinkTxSwitching2T2T-PUSCH-TransCoherence-r17；枚举；OPTIONAL。 */
};


/**
 * @brief UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18
 * @note ASN.1：uplinkTxSwitchingBetweenBandPairs-r18/anotherBandPairOrBand-r18；源文件第 14515 行。
 * @note CHOICE { bandPairIndex2-r18, bandIndex-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag {
    UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag_bandPairIndex2_r18 = 0, /**< ASN.1 bandPairIndex2-r18 */
    UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag_bandIndex_r18 = 1, /**< ASN.1 bandIndex-r18 */
} UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag;

struct UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18 {
    UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t bandPairIndex2_r18; /**< ASN.1 bandPairIndex2-r18 */
        int64_t bandIndex_r18; /**< ASN.1 bandIndex-r18 */
    } u;
};


/**
 * @brief UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18
 * @note ASN.1：uplinkTxSwitchingBetweenBandPairs-r18；源文件第 14513 行。
 * @note SEQUENCE { bandPairIndex1-r18, anotherBandPairOrBand-r18 }
 */
struct UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18 {
    int64_t bandPairIndex1_r18; /**< ASN.1 bandPairIndex1-r18；INTEGER (1..32)，位宽 5 bit。 */
    UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18 anotherBandPairOrBand_r18; /**< ASN.1 anotherBandPairOrBand-r18；结构体。 */
};


/**
 * @brief UplinkTxSwitchingAdditionalPeriodDualUL_r18
 * @note ASN.1：UplinkTxSwitchingAdditionalPeriodDualUL-r18；源文件第 14512 行。
 * @note UplinkTxSwitchingAdditionalPeriodDualUL-r18 ::= SEQUENCE { uplinkTxSwitchingBetweenBandPairs-r18, switchingAdditionalPeriodDu...
 */
struct UplinkTxSwitchingAdditionalPeriodDualUL_r18 {
    UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18 uplinkTxSwitchingBetweenBandPairs_r18; /**< ASN.1 uplinkTxSwitchingBetweenBandPairs-r18；结构体。 */
    UplinkTxSwitchingAdditionalPeriodDualUL_r18_SwitchingAdditionalPeriodDualUL_r18 switchingAdditionalPeriodDualUL_r18; /**< ASN.1 switchingAdditionalPeriodDualUL-r18；枚举。 */
};


/**
 * @brief SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18
 * @note ASN.1：periodUnaffectedBandDualUL-r18；源文件第 14526 行。
 * @note CHOICE { maintainedUL-Trans-r18, periodOnULBands-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag {
    SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag_maintainedUL_Trans_r18 = 0, /**< ASN.1 maintainedUL-Trans-r18 */
    SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag_periodOnULBands_r18 = 1, /**< ASN.1 periodOnULBands-r18 */
} SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag;

struct SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18 {
    SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null maintainedUL_Trans_r18; /**< ASN.1 maintainedUL-Trans-r18 */
        SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_PeriodOnULBands_r18 periodOnULBands_r18; /**< ASN.1 periodOnULBands-r18 */
    } u;
};


/**
 * @brief SwitchingPeriodUnaffectedBandDualUL_r18
 * @note ASN.1：SwitchingPeriodUnaffectedBandDualUL-r18；源文件第 14524 行。
 * @note SwitchingPeriodUnaffectedBandDualUL-r18 ::= SEQUENCE { bandIndexUnaffected-r18, periodUnaffectedBandDualUL-r18 }
 */
struct SwitchingPeriodUnaffectedBandDualUL_r18 {
    int64_t bandIndexUnaffected_r18; /**< ASN.1 bandIndexUnaffected-r18；INTEGER (1..32)，位宽 5 bit。 */
    SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18 periodUnaffectedBandDualUL_r18; /**< ASN.1 periodUnaffectedBandDualUL-r18；结构体。 */
};


/**
 * @brief BandParameters_Eutra
 * @note ASN.1：eutra；源文件第 14534 行。
 * @note SEQUENCE { bandEUTRA, ca-BandwidthClassDL-EUTRA, ca-BandwidthClassUL-EUTRA }
 */
struct BandParameters_Eutra {
    FreqBandIndicatorEUTRA bandEUTRA; /**< ASN.1 bandEUTRA；INTEGER (1..256)，位宽 8 bit。 */
    bool has_ca_BandwidthClassDL_EUTRA; /**< ca-BandwidthClassDL-EUTRA 是否存在。 */
    CA_BandwidthClassEUTRA ca_BandwidthClassDL_EUTRA; /**< ASN.1 ca-BandwidthClassDL-EUTRA；枚举；OPTIONAL。 */
    bool has_ca_BandwidthClassUL_EUTRA; /**< ca-BandwidthClassUL-EUTRA 是否存在。 */
    CA_BandwidthClassEUTRA ca_BandwidthClassUL_EUTRA; /**< ASN.1 ca-BandwidthClassUL-EUTRA；枚举；OPTIONAL。 */
};


/**
 * @brief BandParameters_Nr
 * @note ASN.1：nr；源文件第 14539 行。
 * @note SEQUENCE { bandNR, ca-BandwidthClassDL-NR, ca-BandwidthClassUL-NR }
 */
struct BandParameters_Nr {
    FreqBandIndicatorNR bandNR; /**< ASN.1 bandNR；INTEGER (1..1024)，位宽 10 bit。 */
    bool has_ca_BandwidthClassDL_NR; /**< ca-BandwidthClassDL-NR 是否存在。 */
    CA_BandwidthClassNR ca_BandwidthClassDL_NR; /**< ASN.1 ca-BandwidthClassDL-NR；枚举；OPTIONAL。 */
    bool has_ca_BandwidthClassUL_NR; /**< ca-BandwidthClassUL-NR 是否存在。 */
    CA_BandwidthClassNR ca_BandwidthClassUL_NR; /**< ASN.1 ca-BandwidthClassUL-NR；枚举；OPTIONAL。 */
};


/**
 * @brief BandParameters
 * @note ASN.1：BandParameters；源文件第 14533 行。
 * @note BandParameters ::= CHOICE { eutra, nr }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandParameters_Tag {
    BandParameters_Tag_eutra = 0, /**< ASN.1 eutra */
    BandParameters_Tag_nr = 1, /**< ASN.1 nr */
} BandParameters_Tag;

struct BandParameters {
    BandParameters_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandParameters_Eutra eutra; /**< ASN.1 eutra */
        BandParameters_Nr nr; /**< ASN.1 nr */
    } u;
};


/**
 * @brief BandParameters_v1540_Srs_CarrierSwitch_Nr
 * @note ASN.1：srs-CarrierSwitch/nr；源文件第 14548 行。
 * @note SEQUENCE { srs-SwitchingTimesListNR }
 */
struct BandParameters_v1540_Srs_CarrierSwitch_Nr {
    SRS_SwitchingTimeNR* srs_SwitchingTimesListNR_items; /**< ASN.1 srs-SwitchingTimesListNR；SEQUENCE OF SRS_SwitchingTimeNR，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t srs_SwitchingTimesListNR_count; /**< srs-SwitchingTimesListNR 元素个数。 */
};


/**
 * @brief BandParameters_v1540_Srs_CarrierSwitch_Eutra
 * @note ASN.1：srs-CarrierSwitch/eutra；源文件第 14551 行。
 * @note SEQUENCE { srs-SwitchingTimesListEUTRA }
 */
struct BandParameters_v1540_Srs_CarrierSwitch_Eutra {
    SRS_SwitchingTimeEUTRA* srs_SwitchingTimesListEUTRA_items; /**< ASN.1 srs-SwitchingTimesListEUTRA；SEQUENCE OF SRS_SwitchingTimeEUTRA，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t srs_SwitchingTimesListEUTRA_count; /**< srs-SwitchingTimesListEUTRA 元素个数。 */
};


/**
 * @brief BandParameters_v1540_Srs_CarrierSwitch
 * @note ASN.1：srs-CarrierSwitch；源文件第 14547 行。
 * @note CHOICE { nr, eutra }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandParameters_v1540_Srs_CarrierSwitch_Tag {
    BandParameters_v1540_Srs_CarrierSwitch_Tag_nr = 0, /**< ASN.1 nr */
    BandParameters_v1540_Srs_CarrierSwitch_Tag_eutra = 1, /**< ASN.1 eutra */
} BandParameters_v1540_Srs_CarrierSwitch_Tag;

struct BandParameters_v1540_Srs_CarrierSwitch {
    BandParameters_v1540_Srs_CarrierSwitch_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandParameters_v1540_Srs_CarrierSwitch_Nr nr; /**< ASN.1 nr */
        BandParameters_v1540_Srs_CarrierSwitch_Eutra eutra; /**< ASN.1 eutra */
    } u;
};


/**
 * @brief BandParameters_v1540_Srs_TxSwitch
 * @note ASN.1：srs-TxSwitch；源文件第 14555 行。
 * @note SEQUENCE { supportedSRS-TxPortSwitch, txSwitchImpactToRx, txSwitchWithAnother...
 */
struct BandParameters_v1540_Srs_TxSwitch {
    BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch supportedSRS_TxPortSwitch; /**< ASN.1 supportedSRS-TxPortSwitch；枚举。 */
    bool has_txSwitchImpactToRx; /**< txSwitchImpactToRx 是否存在。 */
    int64_t txSwitchImpactToRx; /**< ASN.1 txSwitchImpactToRx；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_txSwitchWithAnotherBand; /**< txSwitchWithAnotherBand 是否存在。 */
    int64_t txSwitchWithAnotherBand; /**< ASN.1 txSwitchWithAnotherBand；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief BandParameters_v1540
 * @note ASN.1：BandParameters-v1540；源文件第 14546 行。
 * @note BandParameters-v1540 ::= SEQUENCE { srs-CarrierSwitch, srs-TxSwitch }
 */
struct BandParameters_v1540 {
    bool has_srs_CarrierSwitch; /**< srs-CarrierSwitch 是否存在。 */
    BandParameters_v1540_Srs_CarrierSwitch srs_CarrierSwitch; /**< ASN.1 srs-CarrierSwitch；结构体；OPTIONAL。 */
    bool has_srs_TxSwitch; /**< srs-TxSwitch 是否存在。 */
    BandParameters_v1540_Srs_TxSwitch srs_TxSwitch; /**< ASN.1 srs-TxSwitch；结构体；OPTIONAL。 */
};


/**
 * @brief BandParameters_v1610_Srs_TxSwitch_v1610
 * @note ASN.1：srs-TxSwitch-v1610；源文件第 14563 行。
 * @note SEQUENCE { supportedSRS-TxPortSwitch-v1610 }
 */
struct BandParameters_v1610_Srs_TxSwitch_v1610 {
    BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610 supportedSRS_TxPortSwitch_v1610; /**< ASN.1 supportedSRS-TxPortSwitch-v1610；枚举。 */
};


/**
 * @brief BandParameters_v1610
 * @note ASN.1：BandParameters-v1610；源文件第 14562 行。
 * @note BandParameters-v1610 ::= SEQUENCE { srs-TxSwitch-v1610 }
 */
struct BandParameters_v1610 {
    bool has_srs_TxSwitch_v1610; /**< srs-TxSwitch-v1610 是否存在。 */
    BandParameters_v1610_Srs_TxSwitch_v1610 srs_TxSwitch_v1610; /**< ASN.1 srs-TxSwitch-v1610；结构体；OPTIONAL。 */
};


/**
 * @brief BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17
 * @note ASN.1：srs-AntennaSwitchingBeyond4RX-r17；源文件第 14571 行。
 * @note SEQUENCE { supportedSRS-TxPortSwitchBeyond4Rx-r17, entryNumberAffectBeyond4Rx...
 */
struct BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17 {
    BitString supportedSRS_TxPortSwitchBeyond4Rx_r17; /**< ASN.1 supportedSRS-TxPortSwitchBeyond4Rx-r17；SIZE (11)，定长。 */
    bool has_entryNumberAffectBeyond4Rx_r17; /**< entryNumberAffectBeyond4Rx-r17 是否存在。 */
    int64_t entryNumberAffectBeyond4Rx_r17; /**< ASN.1 entryNumberAffectBeyond4Rx-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_entryNumberSwitchBeyond4Rx_r17; /**< entryNumberSwitchBeyond4Rx-r17 是否存在。 */
    int64_t entryNumberSwitchBeyond4Rx_r17; /**< ASN.1 entryNumberSwitchBeyond4Rx-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief BandParameters_v1710
 * @note ASN.1：BandParameters-v1710；源文件第 14569 行。
 * @note BandParameters-v1710 ::= SEQUENCE { srs-AntennaSwitchingBeyond4RX-r17 }
 */
struct BandParameters_v1710 {
    bool has_srs_AntennaSwitchingBeyond4RX_r17; /**< srs-AntennaSwitchingBeyond4RX-r17 是否存在。 */
    BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17 srs_AntennaSwitchingBeyond4RX_r17; /**< ASN.1 srs-AntennaSwitchingBeyond4RX-r17；结构体；OPTIONAL。 */
};


/**
 * @brief BandParameters_v1730
 * @note ASN.1：BandParameters-v1730；源文件第 14581 行。
 * @note BandParameters-v1730 ::= SEQUENCE { srs-SwitchingAffectedBandsListNR-r17 }
 */
struct BandParameters_v1730 {
    SRS_SwitchingAffectedBandsNR_r17* srs_SwitchingAffectedBandsListNR_r17_items; /**< ASN.1 srs-SwitchingAffectedBandsListNR-r17；SEQUENCE OF SRS_SwitchingAffectedBandsNR_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t srs_SwitchingAffectedBandsListNR_r17_count; /**< srs-SwitchingAffectedBandsListNR-r17 元素个数。 */
};


/**
 * @brief BandParameters_v1770
 * @note ASN.1：BandParameters-v1770；源文件第 14586 行。
 * @note BandParameters-v1770 ::= SEQUENCE { ca-BandwidthClassDL-NR-r17, ca-BandwidthClassUL-NR-r17 }
 */
struct BandParameters_v1770 {
    bool has_ca_BandwidthClassDL_NR_r17; /**< ca-BandwidthClassDL-NR-r17 是否存在。 */
    CA_BandwidthClassNR_r17 ca_BandwidthClassDL_NR_r17; /**< ASN.1 ca-BandwidthClassDL-NR-r17；枚举；OPTIONAL。 */
    bool has_ca_BandwidthClassUL_NR_r17; /**< ca-BandwidthClassUL-NR-r17 是否存在。 */
    CA_BandwidthClassNR_r17 ca_BandwidthClassUL_NR_r17; /**< ASN.1 ca-BandwidthClassUL-NR-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandParameters_v1780_SupportedAggBW_FR2_r17
 * @note ASN.1：supportedAggBW-FR2-r17；源文件第 14594 行。
 * @note SEQUENCE { supportedAggBW-DL-r17, supportedAggBW-UL-r17 }
 */
struct BandParameters_v1780_SupportedAggBW_FR2_r17 {
    bool has_supportedAggBW_DL_r17; /**< supportedAggBW-DL-r17 是否存在。 */
    SupportedAggBandwidth_r17 supportedAggBW_DL_r17; /**< ASN.1 supportedAggBW-DL-r17；结构体；OPTIONAL。 */
    bool has_supportedAggBW_UL_r17; /**< supportedAggBW-UL-r17 是否存在。 */
    SupportedAggBandwidth_r17 supportedAggBW_UL_r17; /**< ASN.1 supportedAggBW-UL-r17；结构体；OPTIONAL。 */
};


/**
 * @brief BandParameters_v1780
 * @note ASN.1：BandParameters-v1780；源文件第 14591 行。
 * @note BandParameters-v1780 ::= SEQUENCE { ca-BandwidthClassDL-NR-r17, ca-BandwidthClassUL-NR-r17, supportedA...
 */
struct BandParameters_v1780 {
    bool has_ca_BandwidthClassDL_NR_r17; /**< ca-BandwidthClassDL-NR-r17 是否存在。 */
    CA_BandwidthClassNR_r17 ca_BandwidthClassDL_NR_r17; /**< ASN.1 ca-BandwidthClassDL-NR-r17；枚举；OPTIONAL。 */
    bool has_ca_BandwidthClassUL_NR_r17; /**< ca-BandwidthClassUL-NR-r17 是否存在。 */
    CA_BandwidthClassNR_r17 ca_BandwidthClassUL_NR_r17; /**< ASN.1 ca-BandwidthClassUL-NR-r17；枚举；OPTIONAL。 */
    bool has_supportedAggBW_FR2_r17; /**< supportedAggBW-FR2-r17 是否存在。 */
    BandParameters_v1780_SupportedAggBW_FR2_r17 supportedAggBW_FR2_r17; /**< ASN.1 supportedAggBW-FR2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18
 * @note ASN.1：srs-AntennaSwitching8T8R-r18/downgradeConfig-r18；源文件第 14604 行。
 * @note CHOICE { empty-r18, downgrade-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag {
    BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag_empty_r18 = 0, /**< ASN.1 empty-r18 */
    BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag_downgrade_r18 = 1, /**< ASN.1 downgrade-r18 */
} BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag;

struct BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18 {
    BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null empty_r18; /**< ASN.1 empty-r18 */
        BitString downgrade_r18; /**< ASN.1 downgrade-r18 */
    } u;
};


/**
 * @brief BandParameters_v1810_Srs_AntennaSwitching8T8R_r18
 * @note ASN.1：srs-AntennaSwitching8T8R-r18；源文件第 14602 行。
 * @note SEQUENCE { antennaSwitch8T8R-r18, downgradeConfig-r18, entryNumberAffect-r18,...
 */
struct BandParameters_v1810_Srs_AntennaSwitching8T8R_r18 {
    BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_AntennaSwitch8T8R_r18 antennaSwitch8T8R_r18; /**< ASN.1 antennaSwitch8T8R-r18；枚举。 */
    bool has_downgradeConfig_r18; /**< downgradeConfig-r18 是否存在。 */
    BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18 downgradeConfig_r18; /**< ASN.1 downgradeConfig-r18；结构体；OPTIONAL。 */
    int64_t entryNumberAffect_r18; /**< ASN.1 entryNumberAffect-r18；INTEGER (1..32)，位宽 5 bit。 */
    int64_t entryNumberSwtich_r18; /**< ASN.1 entryNumberSwtich-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief BandParameters_v1810
 * @note ASN.1：BandParameters-v1810；源文件第 14600 行。
 * @note BandParameters-v1810 ::= SEQUENCE { srs-AntennaSwitching8T8R-r18 }
 */
struct BandParameters_v1810 {
    bool has_srs_AntennaSwitching8T8R_r18; /**< srs-AntennaSwitching8T8R-r18 是否存在。 */
    BandParameters_v1810_Srs_AntennaSwitching8T8R_r18 srs_AntennaSwitching8T8R_r18; /**< ASN.1 srs-AntennaSwitching8T8R-r18；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombinationListSidelinkEUTRA_NR_r16
 * @note ASN.1：BandCombinationListSidelinkEUTRA-NR-r16；源文件第 14622 行。
 * @note BandCombinationListSidelinkEUTRA-NR-r16 ::= SEQUENCE OF (size 1..65536) OF BandCombinationParametersSidelinkEUTRA-NR-r16
 */
struct BandCombinationListSidelinkEUTRA_NR_r16 {
    BandCombinationParametersSidelinkEUTRA_NR_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationListSidelinkEUTRA_NR_v1630
 * @note ASN.1：BandCombinationListSidelinkEUTRA-NR-v1630；源文件第 14624 行。
 * @note BandCombinationListSidelinkEUTRA-NR-v1630 ::= SEQUENCE OF (size 1..65536) OF BandCombinationParametersSidelinkEUTRA-NR-v1630
 */
struct BandCombinationListSidelinkEUTRA_NR_v1630 {
    BandCombinationParametersSidelinkEUTRA_NR_v1630* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationListSidelinkEUTRA_NR_v1710
 * @note ASN.1：BandCombinationListSidelinkEUTRA-NR-v1710；源文件第 14626 行。
 * @note BandCombinationListSidelinkEUTRA-NR-v1710 ::= SEQUENCE OF (size 1..65536) OF BandCombinationParametersSidelinkEUTRA-NR-v1710
 */
struct BandCombinationListSidelinkEUTRA_NR_v1710 {
    BandCombinationParametersSidelinkEUTRA_NR_v1710* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationParametersSidelinkEUTRA_NR_r16
 * @note ASN.1：BandCombinationParametersSidelinkEUTRA-NR-r16；源文件第 14628 行。
 * @note BandCombinationParametersSidelinkEUTRA-NR-r16 ::= SEQUENCE OF (size 1..32) OF BandParametersSidelinkEUTRA-NR-r16
 */
struct BandCombinationParametersSidelinkEUTRA_NR_r16 {
    BandParametersSidelinkEUTRA_NR_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationParametersSidelinkEUTRA_NR_v1630
 * @note ASN.1：BandCombinationParametersSidelinkEUTRA-NR-v1630；源文件第 14630 行。
 * @note BandCombinationParametersSidelinkEUTRA-NR-v1630 ::= SEQUENCE OF (size 1..32) OF BandParametersSidelinkEUTRA-NR-v1630
 */
struct BandCombinationParametersSidelinkEUTRA_NR_v1630 {
    BandParametersSidelinkEUTRA_NR_v1630* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationParametersSidelinkEUTRA_NR_v1710
 * @note ASN.1：BandCombinationParametersSidelinkEUTRA-NR-v1710；源文件第 14632 行。
 * @note BandCombinationParametersSidelinkEUTRA-NR-v1710 ::= SEQUENCE OF (size 1..32) OF BandParametersSidelinkEUTRA-NR-v1710
 */
struct BandCombinationParametersSidelinkEUTRA_NR_v1710 {
    BandParametersSidelinkEUTRA_NR_v1710* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_r16_Eutra
 * @note ASN.1：eutra；源文件第 14635 行。
 * @note SEQUENCE { bandParametersSidelinkEUTRA1-r16, bandParametersSidelinkEUTRA2-r16 }
 */
struct BandParametersSidelinkEUTRA_NR_r16_Eutra {
    bool has_bandParametersSidelinkEUTRA1_r16; /**< bandParametersSidelinkEUTRA1-r16 是否存在。 */
    OctetString bandParametersSidelinkEUTRA1_r16; /**< ASN.1 bandParametersSidelinkEUTRA1-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_bandParametersSidelinkEUTRA2_r16; /**< bandParametersSidelinkEUTRA2-r16 是否存在。 */
    OctetString bandParametersSidelinkEUTRA2_r16; /**< ASN.1 bandParametersSidelinkEUTRA2-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief BandParametersSidelink_r16
 * @note ASN.1：BandParametersSidelink-r16；源文件第 14682 行。
 * @note BandParametersSidelink-r16 ::= SEQUENCE { freqBandSidelink-r16 }
 */
struct BandParametersSidelink_r16 {
    FreqBandIndicatorNR freqBandSidelink_r16; /**< ASN.1 freqBandSidelink-r16；INTEGER (1..1024)，位宽 10 bit。 */
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_r16_Nr
 * @note ASN.1：nr；源文件第 14639 行。
 * @note SEQUENCE { bandParametersSidelinkNR-r16 }
 */
struct BandParametersSidelinkEUTRA_NR_r16_Nr {
    BandParametersSidelink_r16 bandParametersSidelinkNR_r16; /**< ASN.1 bandParametersSidelinkNR-r16；结构体。 */
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_r16
 * @note ASN.1：BandParametersSidelinkEUTRA-NR-r16；源文件第 14634 行。
 * @note BandParametersSidelinkEUTRA-NR-r16 ::= CHOICE { eutra, nr }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandParametersSidelinkEUTRA_NR_r16_Tag {
    BandParametersSidelinkEUTRA_NR_r16_Tag_eutra = 0, /**< ASN.1 eutra */
    BandParametersSidelinkEUTRA_NR_r16_Tag_nr = 1, /**< ASN.1 nr */
} BandParametersSidelinkEUTRA_NR_r16_Tag;

struct BandParametersSidelinkEUTRA_NR_r16 {
    BandParametersSidelinkEUTRA_NR_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandParametersSidelinkEUTRA_NR_r16_Eutra eutra; /**< ASN.1 eutra */
        BandParametersSidelinkEUTRA_NR_r16_Nr nr; /**< ASN.1 nr */
    } u;
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_v1630_Nr
 * @note ASN.1：nr；源文件第 14646 行。
 * @note SEQUENCE { tx-Sidelink-r16, rx-Sidelink-r16, sl-CrossCarrierScheduling-r16 }
 */
struct BandParametersSidelinkEUTRA_NR_v1630_Nr {
    bool has_tx_Sidelink_r16; /**< tx-Sidelink-r16 是否存在。 */
    BandParametersSidelinkEUTRA_NR_v1630_Nr_Tx_Sidelink_r16 tx_Sidelink_r16; /**< ASN.1 tx-Sidelink-r16；枚举；OPTIONAL。 */
    bool has_rx_Sidelink_r16; /**< rx-Sidelink-r16 是否存在。 */
    BandParametersSidelinkEUTRA_NR_v1630_Nr_Rx_Sidelink_r16 rx_Sidelink_r16; /**< ASN.1 rx-Sidelink-r16；枚举；OPTIONAL。 */
    bool has_sl_CrossCarrierScheduling_r16; /**< sl-CrossCarrierScheduling-r16 是否存在。 */
    BandParametersSidelinkEUTRA_NR_v1630_Nr_Sl_CrossCarrierScheduling_r16 sl_CrossCarrierScheduling_r16; /**< ASN.1 sl-CrossCarrierScheduling-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_v1630
 * @note ASN.1：BandParametersSidelinkEUTRA-NR-v1630；源文件第 14644 行。
 * @note BandParametersSidelinkEUTRA-NR-v1630 ::= CHOICE { eutra, nr }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandParametersSidelinkEUTRA_NR_v1630_Tag {
    BandParametersSidelinkEUTRA_NR_v1630_Tag_eutra = 0, /**< ASN.1 eutra */
    BandParametersSidelinkEUTRA_NR_v1630_Tag_nr = 1, /**< ASN.1 nr */
} BandParametersSidelinkEUTRA_NR_v1630_Tag;

struct BandParametersSidelinkEUTRA_NR_v1630 {
    BandParametersSidelinkEUTRA_NR_v1630_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null eutra; /**< ASN.1 eutra */
        BandParametersSidelinkEUTRA_NR_v1630_Nr nr; /**< ASN.1 nr */
    } u;
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71
 * @note ASN.1：nr/sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17/fr1-r17；源文件第 14660 行。
 * @note SEQUENCE { scs-15kHz-r17, scs-30kHz-r17, scs-60kHz-r17 }
 */
struct BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71 {
    bool has_scs_15kHz_r17; /**< scs-15kHz-r17 是否存在。 */
    BitString scs_15kHz_r17; /**< ASN.1 scs-15kHz-r17；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_30kHz_r17; /**< scs-30kHz-r17 是否存在。 */
    BitString scs_30kHz_r17; /**< ASN.1 scs-30kHz-r17；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_60kHz_r17; /**< scs-60kHz-r17 是否存在。 */
    BitString scs_60kHz_r17; /**< ASN.1 scs-60kHz-r17；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6
 * @note ASN.1：nr/sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17/fr2-r17；源文件第 14665 行。
 * @note SEQUENCE { scs-60kHz-r17, scs-120kHz-r17 }
 */
struct BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6 {
    bool has_scs_60kHz_r17; /**< scs-60kHz-r17 是否存在。 */
    BitString scs_60kHz_r17; /**< ASN.1 scs-60kHz-r17；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_120kHz_r17; /**< scs-120kHz-r17 是否存在。 */
    BitString scs_120kHz_r17; /**< ASN.1 scs-120kHz-r17；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17
 * @note ASN.1：nr/sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17；源文件第 14659 行。
 * @note CHOICE { fr1-r17, fr2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag {
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17 = 0, /**< ASN.1 fr1-r17 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17 = 1, /**< ASN.1 fr2-r17 */
} BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag;

struct BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 {
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71 fr1_r17; /**< ASN.1 fr1-r17 */
        BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6 fr2_r17; /**< ASN.1 fr2-r17 */
    } u;
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17
 * @note ASN.1：nr/sl-TransmissionMode2-PartialSensing-r17；源文件第 14657 行。
 * @note SEQUENCE { harq-TxProcessModeTwoSidelink-r17, scs-CP-PatternTxSidelinkModeTwo...
 */
struct BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17 {
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17 harq_TxProcessModeTwoSidelink_r17; /**< ASN.1 harq-TxProcessModeTwoSidelink-r17；枚举。 */
    bool has_scs_CP_PatternTxSidelinkModeTwo_r17; /**< scs-CP-PatternTxSidelinkModeTwo-r17 是否存在。 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 scs_CP_PatternTxSidelinkModeTwo_r17; /**< ASN.1 scs-CP-PatternTxSidelinkModeTwo-r17；结构体；OPTIONAL。 */
    bool has_extendedCP_Mode2PartialSensing_r17; /**< extendedCP-Mode2PartialSensing-r17 是否存在。 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17 extendedCP_Mode2PartialSensing_r17; /**< ASN.1 extendedCP-Mode2PartialSensing-r17；枚举；OPTIONAL。 */
    bool has_dl_openLoopPC_Sidelink_r17; /**< dl-openLoopPC-Sidelink-r17 是否存在。 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17 dl_openLoopPC_Sidelink_r17; /**< ASN.1 dl-openLoopPC-Sidelink-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_v1710_Nr
 * @note ASN.1：nr；源文件第 14655 行。
 * @note SEQUENCE { sl-TransmissionMode2-PartialSensing-r17, rx-sidelinkPSFCH-r17, tx-...
 */
struct BandParametersSidelinkEUTRA_NR_v1710_Nr {
    bool has_sl_TransmissionMode2_PartialSensing_r17; /**< sl-TransmissionMode2-PartialSensing-r17 是否存在。 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17 sl_TransmissionMode2_PartialSensing_r17; /**< ASN.1 sl-TransmissionMode2-PartialSensing-r17；结构体；OPTIONAL。 */
    bool has_rx_sidelinkPSFCH_r17; /**< rx-sidelinkPSFCH-r17 是否存在。 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17 rx_sidelinkPSFCH_r17; /**< ASN.1 rx-sidelinkPSFCH-r17；枚举；OPTIONAL。 */
    bool has_tx_IUC_Scheme1_Mode2Sidelink_r17; /**< tx-IUC-Scheme1-Mode2Sidelink-r17 是否存在。 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme1_Mode2Sidelink_r17 tx_IUC_Scheme1_Mode2Sidelink_r17; /**< ASN.1 tx-IUC-Scheme1-Mode2Sidelink-r17；枚举；OPTIONAL。 */
    bool has_tx_IUC_Scheme2_Mode2Sidelink_r17; /**< tx-IUC-Scheme2-Mode2Sidelink-r17 是否存在。 */
    BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme2_Mode2Sidelink_r17 tx_IUC_Scheme2_Mode2Sidelink_r17; /**< ASN.1 tx-IUC-Scheme2-Mode2Sidelink-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandParametersSidelinkEUTRA_NR_v1710
 * @note ASN.1：BandParametersSidelinkEUTRA-NR-v1710；源文件第 14653 行。
 * @note BandParametersSidelinkEUTRA-NR-v1710 ::= CHOICE { eutra, nr }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandParametersSidelinkEUTRA_NR_v1710_Tag {
    BandParametersSidelinkEUTRA_NR_v1710_Tag_eutra = 0, /**< ASN.1 eutra */
    BandParametersSidelinkEUTRA_NR_v1710_Tag_nr = 1, /**< ASN.1 nr */
} BandParametersSidelinkEUTRA_NR_v1710_Tag;

struct BandParametersSidelinkEUTRA_NR_v1710 {
    BandParametersSidelinkEUTRA_NR_v1710_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null eutra; /**< ASN.1 eutra */
        BandParametersSidelinkEUTRA_NR_v1710_Nr nr; /**< ASN.1 nr */
    } u;
};


/**
 * @brief BandCombinationListSL_Discovery_r17
 * @note ASN.1：BandCombinationListSL-Discovery-r17；源文件第 14689 行。
 * @note BandCombinationListSL-Discovery-r17 ::= SEQUENCE OF (size 1..32) OF BandParametersSidelinkDiscovery-r17
 */
struct BandCombinationListSL_Discovery_r17 {
    BandParametersSidelinkDiscovery_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17
 * @note ASN.1：sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17/fr1-r17；源文件第 14697 行。
 * @note SEQUENCE { scs-15kHz-r17, scs-30kHz-r17, scs-60kHz-r17 }
 */
struct BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17 {
    bool has_scs_15kHz_r17; /**< scs-15kHz-r17 是否存在。 */
    BitString scs_15kHz_r17; /**< ASN.1 scs-15kHz-r17；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_30kHz_r17; /**< scs-30kHz-r17 是否存在。 */
    BitString scs_30kHz_r17; /**< ASN.1 scs-30kHz-r17；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_60kHz_r17; /**< scs-60kHz-r17 是否存在。 */
    BitString scs_60kHz_r17; /**< ASN.1 scs-60kHz-r17；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17
 * @note ASN.1：sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17/fr2-r17；源文件第 14702 行。
 * @note SEQUENCE { scs-60kHz-r17, scs-120kHz-r17 }
 */
struct BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17 {
    bool has_scs_60kHz_r17; /**< scs-60kHz-r17 是否存在。 */
    BitString scs_60kHz_r17; /**< ASN.1 scs-60kHz-r17；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_120kHz_r17; /**< scs-120kHz-r17 是否存在。 */
    BitString scs_120kHz_r17; /**< ASN.1 scs-120kHz-r17；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17
 * @note ASN.1：sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17；源文件第 14696 行。
 * @note CHOICE { fr1-r17, fr2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag {
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17 = 0, /**< ASN.1 fr1-r17 */
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17 = 1, /**< ASN.1 fr2-r17 */
} BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag;

struct BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 {
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17 fr1_r17; /**< ASN.1 fr1-r17 */
        BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17 fr2_r17; /**< ASN.1 fr2-r17 */
    } u;
};


/**
 * @brief BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17
 * @note ASN.1：sl-TransmissionMode2-PartialSensing-r17；源文件第 14694 行。
 * @note SEQUENCE { harq-TxProcessModeTwoSidelink-r17, scs-CP-PatternTxSidelinkModeTwo...
 */
struct BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17 {
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17 harq_TxProcessModeTwoSidelink_r17; /**< ASN.1 harq-TxProcessModeTwoSidelink-r17；枚举。 */
    bool has_scs_CP_PatternTxSidelinkModeTwo_r17; /**< scs-CP-PatternTxSidelinkModeTwo-r17 是否存在。 */
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 scs_CP_PatternTxSidelinkModeTwo_r17; /**< ASN.1 scs-CP-PatternTxSidelinkModeTwo-r17；结构体；OPTIONAL。 */
    bool has_extendedCP_Mode2PartialSensing_r17; /**< extendedCP-Mode2PartialSensing-r17 是否存在。 */
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17 extendedCP_Mode2PartialSensing_r17; /**< ASN.1 extendedCP-Mode2PartialSensing-r17；枚举；OPTIONAL。 */
    bool has_dl_openLoopPC_Sidelink_r17; /**< dl-openLoopPC-Sidelink-r17 是否存在。 */
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17 dl_openLoopPC_Sidelink_r17; /**< ASN.1 dl-openLoopPC-Sidelink-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandParametersSidelinkDiscovery_r17
 * @note ASN.1：BandParametersSidelinkDiscovery-r17；源文件第 14691 行。
 * @note BandParametersSidelinkDiscovery-r17 ::= SEQUENCE { sl-CrossCarrierScheduling-r17, sl-TransmissionMode2-PartialSensing...
 */
struct BandParametersSidelinkDiscovery_r17 {
    bool has_sl_CrossCarrierScheduling_r17; /**< sl-CrossCarrierScheduling-r17 是否存在。 */
    BandParametersSidelinkDiscovery_r17_Sl_CrossCarrierScheduling_r17 sl_CrossCarrierScheduling_r17; /**< ASN.1 sl-CrossCarrierScheduling-r17；枚举；OPTIONAL。 */
    bool has_sl_TransmissionMode2_PartialSensing_r17; /**< sl-TransmissionMode2-PartialSensing-r17 是否存在。 */
    BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17 sl_TransmissionMode2_PartialSensing_r17; /**< ASN.1 sl-TransmissionMode2-PartialSensing-r17；结构体；OPTIONAL。 */
    bool has_tx_IUC_Scheme1_Mode2Sidelink_r17; /**< tx-IUC-Scheme1-Mode2Sidelink-r17 是否存在。 */
    BandParametersSidelinkDiscovery_r17_Tx_IUC_Scheme1_Mode2Sidelink_r17 tx_IUC_Scheme1_Mode2Sidelink_r17; /**< ASN.1 tx-IUC-Scheme1-Mode2Sidelink-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PDCCH_BlindDetectionCA_MixedExt_r16
 * @note ASN.1：PDCCH-BlindDetectionCA-MixedExt-r16；源文件第 15342 行。
 * @note PDCCH-BlindDetectionCA-MixedExt-r16 ::= SEQUENCE { pdcch-BlindDetectionCA1-r16, pdcch-BlindDetectionCA2-r16 }
 */
struct PDCCH_BlindDetectionCA_MixedExt_r16 {
    int64_t pdcch_BlindDetectionCA1_r16; /**< ASN.1 pdcch-BlindDetectionCA1-r16；INTEGER (1..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionCA2_r16; /**< ASN.1 pdcch-BlindDetectionCA2-r16；INTEGER (1..15)，位宽 4 bit。 */
};


/**
 * @brief PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16
 * @note ASN.1：pdcch-BlindDetectionCA-MixedExt-r16；源文件第 15332 行。
 * @note CHOICE { pdcch-BlindDetectionCA-Mixed-v16a0, pdcch-BlindDetectionCA-Mixed-Non...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag {
    PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag_pdcch_BlindDetectionCA_Mixed_v16a0 = 0, /**< ASN.1 pdcch-BlindDetectionCA-Mixed-v16a0 */
    PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_v16a0 = 1, /**< ASN.1 pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-v16a0 */
} PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag;

struct PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16 {
    PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PDCCH_BlindDetectionCA_MixedExt_r16 pdcch_BlindDetectionCA_Mixed_v16a0; /**< ASN.1 pdcch-BlindDetectionCA-Mixed-v16a0 */
        PDCCH_BlindDetectionCA_MixedExt_r16 pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_v16a0; /**< ASN.1 pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-v16a0 */
    } u;
};


/**
 * @brief PDCCH_BlindDetectionCG_UE_MixedExt_r16
 * @note ASN.1：PDCCH-BlindDetectionCG-UE-MixedExt-r16；源文件第 15347 行。
 * @note PDCCH-BlindDetectionCG-UE-MixedExt-r16 ::= SEQUENCE { pdcch-BlindDetectionCG-UE1-r16, pdcch-BlindDetectionCG-UE2-r16 }
 */
struct PDCCH_BlindDetectionCG_UE_MixedExt_r16 {
    int64_t pdcch_BlindDetectionCG_UE1_r16; /**< ASN.1 pdcch-BlindDetectionCG-UE1-r16；INTEGER (0..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionCG_UE2_r16; /**< ASN.1 pdcch-BlindDetectionCG-UE2-r16；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16
 * @note ASN.1：pdcch-BlindDetectionCG-UE-MixedExt-r16；源文件第 15336 行。
 * @note SEQUENCE { pdcch-BlindDetectionMCG-UE-Mixed-v16a0, pdcch-BlindDetectionSCG-UE...
 */
struct PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16 {
    PDCCH_BlindDetectionCG_UE_MixedExt_r16 pdcch_BlindDetectionMCG_UE_Mixed_v16a0; /**< ASN.1 pdcch-BlindDetectionMCG-UE-Mixed-v16a0；结构体。 */
    PDCCH_BlindDetectionCG_UE_MixedExt_r16 pdcch_BlindDetectionSCG_UE_Mixed_v16a0; /**< ASN.1 pdcch-BlindDetectionSCG-UE-Mixed-v16a0；结构体。 */
};


/**
 * @brief PDCCH_BlindDetectionMixedList_r16
 * @note ASN.1：PDCCH-BlindDetectionMixedList-r16；源文件第 15331 行。
 * @note PDCCH-BlindDetectionMixedList-r16 ::= SEQUENCE { pdcch-BlindDetectionCA-MixedExt-r16, pdcch-BlindDetectionCG-UE-Mix...
 */
struct PDCCH_BlindDetectionMixedList_r16 {
    bool has_pdcch_BlindDetectionCA_MixedExt_r16; /**< pdcch-BlindDetectionCA-MixedExt-r16 是否存在。 */
    PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16 pdcch_BlindDetectionCA_MixedExt_r16; /**< ASN.1 pdcch-BlindDetectionCA-MixedExt-r16；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCG_UE_MixedExt_r16; /**< pdcch-BlindDetectionCG-UE-MixedExt-r16 是否存在。 */
    PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16 pdcch_BlindDetectionCG_UE_MixedExt_r16; /**< ASN.1 pdcch-BlindDetectionCG-UE-MixedExt-r16；结构体；OPTIONAL。 */
};


/**
 * @brief PDCCH_BlindDetectionMCG_SCG_r17
 * @note ASN.1：PDCCH-BlindDetectionMCG-SCG-r17；源文件第 15352 行。
 * @note PDCCH-BlindDetectionMCG-SCG-r17 ::= SEQUENCE { pdcch-BlindDetectionMCG-UE-r17, pdcch-BlindDetectionSCG-UE-r17 }
 */
struct PDCCH_BlindDetectionMCG_SCG_r17 {
    int64_t pdcch_BlindDetectionMCG_UE_r17; /**< ASN.1 pdcch-BlindDetectionMCG-UE-r17；INTEGER (1..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionSCG_UE_r17; /**< ASN.1 pdcch-BlindDetectionSCG-UE-r17；INTEGER (1..15)，位宽 4 bit。 */
};


/**
 * @brief PDCCH_BlindDetectionCA_Mixed_r17
 * @note ASN.1：PDCCH-BlindDetectionCA-Mixed-r17；源文件第 15370 行。
 * @note PDCCH-BlindDetectionCA-Mixed-r17 ::= SEQUENCE { pdcch-BlindDetectionCA1-r17, pdcch-BlindDetectionCA2-r17 }
 */
struct PDCCH_BlindDetectionCA_Mixed_r17 {
    bool has_pdcch_BlindDetectionCA1_r17; /**< pdcch-BlindDetectionCA1-r17 是否存在。 */
    int64_t pdcch_BlindDetectionCA1_r17; /**< ASN.1 pdcch-BlindDetectionCA1-r17；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCA2_r17; /**< pdcch-BlindDetectionCA2-r17 是否存在。 */
    int64_t pdcch_BlindDetectionCA2_r17; /**< ASN.1 pdcch-BlindDetectionCA2-r17；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief PDCCH_BlindDetectionCG_UE_Mixed_r17
 * @note ASN.1：PDCCH-BlindDetectionCG-UE-Mixed-r17；源文件第 15365 行。
 * @note PDCCH-BlindDetectionCG-UE-Mixed-r17 ::= SEQUENCE { pdcch-BlindDetectionCG-UE1-r17, pdcch-BlindDetectionCG-UE2-r17 }
 */
struct PDCCH_BlindDetectionCG_UE_Mixed_r17 {
    int64_t pdcch_BlindDetectionCG_UE1_r17; /**< ASN.1 pdcch-BlindDetectionCG-UE1-r17；INTEGER (0..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionCG_UE2_r17; /**< ASN.1 pdcch-BlindDetectionCG-UE2-r17；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17
 * @note ASN.1：pdcch-BlindDetectionCG-UE-Mixed-r17；源文件第 15359 行。
 * @note SEQUENCE { pdcch-BlindDetectionMCG-UE-Mixed-v17, pdcch-BlindDetectionSCG-UE-M...
 */
struct PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17 {
    PDCCH_BlindDetectionCG_UE_Mixed_r17 pdcch_BlindDetectionMCG_UE_Mixed_v17; /**< ASN.1 pdcch-BlindDetectionMCG-UE-Mixed-v17；结构体。 */
    PDCCH_BlindDetectionCG_UE_Mixed_r17 pdcch_BlindDetectionSCG_UE_Mixed_v17; /**< ASN.1 pdcch-BlindDetectionSCG-UE-Mixed-v17；结构体。 */
};


/**
 * @brief PDCCH_BlindDetectionMixed_r17
 * @note ASN.1：PDCCH-BlindDetectionMixed-r17；源文件第 15357 行。
 * @note PDCCH-BlindDetectionMixed-r17 ::= SEQUENCE { pdcch-BlindDetectionCA-Mixed-r17, pdcch-BlindDetectionCG-UE-Mixed-...
 */
struct PDCCH_BlindDetectionMixed_r17 {
    bool has_pdcch_BlindDetectionCA_Mixed_r17; /**< pdcch-BlindDetectionCA-Mixed-r17 是否存在。 */
    PDCCH_BlindDetectionCA_Mixed_r17 pdcch_BlindDetectionCA_Mixed_r17; /**< ASN.1 pdcch-BlindDetectionCA-Mixed-r17；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCG_UE_Mixed_r17; /**< pdcch-BlindDetectionCG-UE-Mixed-r17 是否存在。 */
    PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17 pdcch_BlindDetectionCG_UE_Mixed_r17; /**< ASN.1 pdcch-BlindDetectionCG-UE-Mixed-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PDCCH_BlindDetectionCA_Mixed1_r17
 * @note ASN.1：PDCCH-BlindDetectionCA-Mixed1-r17；源文件第 15388 行。
 * @note PDCCH-BlindDetectionCA-Mixed1-r17 ::= SEQUENCE { pdcch-BlindDetectionCA1-r17, pdcch-BlindDetectionCA2-r17, pdcch-Bl...
 */
struct PDCCH_BlindDetectionCA_Mixed1_r17 {
    bool has_pdcch_BlindDetectionCA1_r17; /**< pdcch-BlindDetectionCA1-r17 是否存在。 */
    int64_t pdcch_BlindDetectionCA1_r17; /**< ASN.1 pdcch-BlindDetectionCA1-r17；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCA2_r17; /**< pdcch-BlindDetectionCA2-r17 是否存在。 */
    int64_t pdcch_BlindDetectionCA2_r17; /**< ASN.1 pdcch-BlindDetectionCA2-r17；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCA3_r17; /**< pdcch-BlindDetectionCA3-r17 是否存在。 */
    int64_t pdcch_BlindDetectionCA3_r17; /**< ASN.1 pdcch-BlindDetectionCA3-r17；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief PDCCH_BlindDetectionCG_UE_Mixed1_r17
 * @note ASN.1：PDCCH-BlindDetectionCG-UE-Mixed1-r17；源文件第 15382 行。
 * @note PDCCH-BlindDetectionCG-UE-Mixed1-r17 ::= SEQUENCE { pdcch-BlindDetectionCG-UE1-r17, pdcch-BlindDetectionCG-UE2-r17, pd...
 */
struct PDCCH_BlindDetectionCG_UE_Mixed1_r17 {
    int64_t pdcch_BlindDetectionCG_UE1_r17; /**< ASN.1 pdcch-BlindDetectionCG-UE1-r17；INTEGER (0..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionCG_UE2_r17; /**< ASN.1 pdcch-BlindDetectionCG-UE2-r17；INTEGER (0..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionCG_UE3_r17; /**< ASN.1 pdcch-BlindDetectionCG-UE3-r17；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17
 * @note ASN.1：pdcch-BlindDetectionCG-UE-Mixed1-r17；源文件第 15376 行。
 * @note SEQUENCE { pdcch-BlindDetectionMCG-UE-Mixed1-v17, pdcch-BlindDetectionSCG-UE-...
 */
struct PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17 {
    PDCCH_BlindDetectionCG_UE_Mixed1_r17 pdcch_BlindDetectionMCG_UE_Mixed1_v17; /**< ASN.1 pdcch-BlindDetectionMCG-UE-Mixed1-v17；结构体。 */
    PDCCH_BlindDetectionCG_UE_Mixed1_r17 pdcch_BlindDetectionSCG_UE_Mixed1_v17; /**< ASN.1 pdcch-BlindDetectionSCG-UE-Mixed1-v17；结构体。 */
};


/**
 * @brief PDCCH_BlindDetectionMixed1_r17
 * @note ASN.1：PDCCH-BlindDetectionMixed1-r17；源文件第 15374 行。
 * @note PDCCH-BlindDetectionMixed1-r17 ::= SEQUENCE { pdcch-BlindDetectionCA-Mixed1-r17, pdcch-BlindDetectionCG-UE-Mixed...
 */
struct PDCCH_BlindDetectionMixed1_r17 {
    bool has_pdcch_BlindDetectionCA_Mixed1_r17; /**< pdcch-BlindDetectionCA-Mixed1-r17 是否存在。 */
    PDCCH_BlindDetectionCA_Mixed1_r17 pdcch_BlindDetectionCA_Mixed1_r17; /**< ASN.1 pdcch-BlindDetectionCA-Mixed1-r17；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCG_UE_Mixed1_r17; /**< pdcch-BlindDetectionCG-UE-Mixed1-r17 是否存在。 */
    PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17 pdcch_BlindDetectionCG_UE_Mixed1_r17; /**< ASN.1 pdcch-BlindDetectionCG-UE-Mixed1-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PDCCH_BlindDetectionCG_UE_Mixed_r18
 * @note ASN.1：PDCCH-BlindDetectionCG-UE-Mixed-r18；源文件第 15404 行。
 * @note PDCCH-BlindDetectionCG-UE-Mixed-r18 ::= SEQUENCE { pdcch-BlindDetectionCG-UE1-r18, pdcch-BlindDetectionCG-UE2-r18 }
 */
struct PDCCH_BlindDetectionCG_UE_Mixed_r18 {
    int64_t pdcch_BlindDetectionCG_UE1_r18; /**< ASN.1 pdcch-BlindDetectionCG-UE1-r18；INTEGER (0..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionCG_UE2_r18; /**< ASN.1 pdcch-BlindDetectionCG-UE2-r18；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief PDCCH_BlindDetectionMCG_SCG_r18
 * @note ASN.1：PDCCH-BlindDetectionMCG-SCG-r18；源文件第 15394 行。
 * @note PDCCH-BlindDetectionMCG-SCG-r18 ::= SEQUENCE { pdcch-BlindDetectionMCG-UE-Mixed-r18, pdcch-BlindDetectionSCG-UE-M...
 */
struct PDCCH_BlindDetectionMCG_SCG_r18 {
    PDCCH_BlindDetectionCG_UE_Mixed_r18 pdcch_BlindDetectionMCG_UE_Mixed_r18; /**< ASN.1 pdcch-BlindDetectionMCG-UE-Mixed-r18；结构体。 */
    PDCCH_BlindDetectionCG_UE_Mixed_r18 pdcch_BlindDetectionSCG_UE_Mixed_r18; /**< ASN.1 pdcch-BlindDetectionSCG-UE-Mixed-r18；结构体。 */
};


/**
 * @brief PDCCH_BlindDetectionCA_Mixed_r18
 * @note ASN.1：PDCCH-BlindDetectionCA-Mixed-r18；源文件第 15399 行。
 * @note PDCCH-BlindDetectionCA-Mixed-r18 ::= SEQUENCE { pdcch-BlindDetectionCA1-r18, pdcch-BlindDetectionCA2-r18 }
 */
struct PDCCH_BlindDetectionCA_Mixed_r18 {
    int64_t pdcch_BlindDetectionCA1_r18; /**< ASN.1 pdcch-BlindDetectionCA1-r18；INTEGER (1..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionCA2_r18; /**< ASN.1 pdcch-BlindDetectionCA2-r18；INTEGER (1..15)，位宽 4 bit。 */
};


/**
 * @brief TwoPUCCH_Grp_ConfigParams_r16
 * @note ASN.1：TwoPUCCH-Grp-ConfigParams-r16；源文件第 15425 行。
 * @note TwoPUCCH-Grp-ConfigParams-r16 ::= SEQUENCE { pucch-GroupMapping-r16, pucch-TX-r16 }
 */
struct TwoPUCCH_Grp_ConfigParams_r16 {
    PUCCH_Grp_CarrierTypes_r16 pucch_GroupMapping_r16; /**< ASN.1 pucch-GroupMapping-r16；结构体。 */
    PUCCH_Grp_CarrierTypes_r16 pucch_TX_r16; /**< ASN.1 pucch-TX-r16；结构体。 */
};


/**
 * @brief TwoPUCCH_Grp_Configurations_r16
 * @note ASN.1：TwoPUCCH-Grp-Configurations-r16；源文件第 15415 行。
 * @note TwoPUCCH-Grp-Configurations-r16 ::= SEQUENCE { pucch-PrimaryGroupMapping-r16, pucch-SecondaryGroupMapping-r16 }
 */
struct TwoPUCCH_Grp_Configurations_r16 {
    TwoPUCCH_Grp_ConfigParams_r16 pucch_PrimaryGroupMapping_r16; /**< ASN.1 pucch-PrimaryGroupMapping-r16；结构体。 */
    TwoPUCCH_Grp_ConfigParams_r16 pucch_SecondaryGroupMapping_r16; /**< ASN.1 pucch-SecondaryGroupMapping-r16；结构体。 */
};


/**
 * @brief TwoPUCCH_Grp_Configurations_r17
 * @note ASN.1：TwoPUCCH-Grp-Configurations-r17；源文件第 15420 行。
 * @note TwoPUCCH-Grp-Configurations-r17 ::= SEQUENCE { primaryPUCCH-GroupConfig-r17, secondaryPUCCH-GroupConfig-r17 }
 */
struct TwoPUCCH_Grp_Configurations_r17 {
    PUCCH_Group_Config_r17 primaryPUCCH_GroupConfig_r17; /**< ASN.1 primaryPUCCH-GroupConfig-r17；结构体。 */
    PUCCH_Group_Config_r17 secondaryPUCCH_GroupConfig_r17; /**< ASN.1 secondaryPUCCH-GroupConfig-r17；结构体。 */
};


/**
 * @brief CarrierTypePair_r16
 * @note ASN.1：CarrierTypePair-r16；源文件第 15431 行。
 * @note CarrierTypePair-r16 ::= SEQUENCE { carrierForCSI-Measurement-r16, carrierForCSI-Reporting-r16 }
 */
struct CarrierTypePair_r16 {
    PUCCH_Grp_CarrierTypes_r16 carrierForCSI_Measurement_r16; /**< ASN.1 carrierForCSI-Measurement-r16；结构体。 */
    PUCCH_Grp_CarrierTypes_r16 carrierForCSI_Reporting_r16; /**< ASN.1 carrierForCSI-Reporting-r16；结构体。 */
};


/**
 * @brief CombinationCarrierType_r18
 * @note ASN.1：CombinationCarrierType-r18；源文件第 15449 行。
 * @note CombinationCarrierType-r18 ::= SEQUENCE { schedulingCellCarrierType-r18, scheduledCellCarrierType-r18 }
 */
struct CombinationCarrierType_r18 {
    CombinationCarrierType_r18_SchedulingCellCarrierType_r18 schedulingCellCarrierType_r18; /**< ASN.1 schedulingCellCarrierType-r18；枚举。 */
    CombinationCarrierType_r18_ScheduledCellCarrierType_r18 scheduledCellCarrierType_r18; /**< ASN.1 scheduledCellCarrierType-r18；枚举。 */
};


/**
 * @brief PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18
 * @note ASN.1：pdcch-BlindDetectionCG-UE-Mixed-r18；源文件第 15531 行。
 * @note SEQUENCE { pdcch-BlindDetectionMCG-UE-Mixed-r18, pdcch-BlindDetectionSCG-UE-M...
 */
struct PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18 {
    PDCCH_BlindDetectionCG_UE_Mixed_r18 pdcch_BlindDetectionMCG_UE_Mixed_r18; /**< ASN.1 pdcch-BlindDetectionMCG-UE-Mixed-r18；结构体。 */
    PDCCH_BlindDetectionCG_UE_Mixed_r18 pdcch_BlindDetectionSCG_UE_Mixed_r18; /**< ASN.1 pdcch-BlindDetectionSCG-UE-Mixed-r18；结构体。 */
};


/**
 * @brief PDCCH_BlindDetectionMixed1_r18
 * @note ASN.1：PDCCH-BlindDetectionMixed1-r18；源文件第 15530 行。
 * @note PDCCH-BlindDetectionMixed1-r18 ::= SEQUENCE { pdcch-BlindDetectionCG-UE-Mixed-r18 }
 */
struct PDCCH_BlindDetectionMixed1_r18 {
    PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18 pdcch_BlindDetectionCG_UE_Mixed_r18; /**< ASN.1 pdcch-BlindDetectionCG-UE-Mixed-r18；结构体。 */
};


/**
 * @brief CarrierAggregationVariant
 * @note ASN.1：CarrierAggregationVariant；源文件第 15540 行。
 * @note CarrierAggregationVariant ::= SEQUENCE { fr1fdd-FR1TDD-CA-SpCellOnFR1FDD, fr1fdd-FR1TDD-CA-SpCellOnFR1TDD, ...
 */
struct CarrierAggregationVariant {
    bool has_fr1fdd_FR1TDD_CA_SpCellOnFR1FDD; /**< fr1fdd-FR1TDD-CA-SpCellOnFR1FDD 是否存在。 */
    CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1FDD fr1fdd_FR1TDD_CA_SpCellOnFR1FDD; /**< ASN.1 fr1fdd-FR1TDD-CA-SpCellOnFR1FDD；枚举；OPTIONAL。 */
    bool has_fr1fdd_FR1TDD_CA_SpCellOnFR1TDD; /**< fr1fdd-FR1TDD-CA-SpCellOnFR1TDD 是否存在。 */
    CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1TDD fr1fdd_FR1TDD_CA_SpCellOnFR1TDD; /**< ASN.1 fr1fdd-FR1TDD-CA-SpCellOnFR1TDD；枚举；OPTIONAL。 */
    bool has_fr1fdd_FR2TDD_CA_SpCellOnFR1FDD; /**< fr1fdd-FR2TDD-CA-SpCellOnFR1FDD 是否存在。 */
    CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR1FDD fr1fdd_FR2TDD_CA_SpCellOnFR1FDD; /**< ASN.1 fr1fdd-FR2TDD-CA-SpCellOnFR1FDD；枚举；OPTIONAL。 */
    bool has_fr1fdd_FR2TDD_CA_SpCellOnFR2TDD; /**< fr1fdd-FR2TDD-CA-SpCellOnFR2TDD 是否存在。 */
    CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR2TDD fr1fdd_FR2TDD_CA_SpCellOnFR2TDD; /**< ASN.1 fr1fdd-FR2TDD-CA-SpCellOnFR2TDD；枚举；OPTIONAL。 */
    bool has_fr1tdd_FR2TDD_CA_SpCellOnFR1TDD; /**< fr1tdd-FR2TDD-CA-SpCellOnFR1TDD 是否存在。 */
    CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR1TDD fr1tdd_FR2TDD_CA_SpCellOnFR1TDD; /**< ASN.1 fr1tdd-FR2TDD-CA-SpCellOnFR1TDD；枚举；OPTIONAL。 */
    bool has_fr1tdd_FR2TDD_CA_SpCellOnFR2TDD; /**< fr1tdd-FR2TDD-CA-SpCellOnFR2TDD 是否存在。 */
    CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR2TDD fr1tdd_FR2TDD_CA_SpCellOnFR2TDD; /**< ASN.1 fr1tdd-FR2TDD-CA-SpCellOnFR2TDD；枚举；OPTIONAL。 */
    bool has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD; /**< fr1fdd-FR1TDD-FR2TDD-CA-SpCellOnFR1FDD 是否存在。 */
    CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD; /**< ASN.1 fr1fdd-FR1TDD-FR2TDD-CA-SpCellOnFR1FDD；枚举；OPTIONAL。 */
    bool has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD; /**< fr1fdd-FR1TDD-FR2TDD-CA-SpCellOnFR1TDD 是否存在。 */
    CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD; /**< ASN.1 fr1fdd-FR1TDD-FR2TDD-CA-SpCellOnFR1TDD；枚举；OPTIONAL。 */
    bool has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD; /**< fr1fdd-FR1TDD-FR2TDD-CA-SpCellOnFR2TDD 是否存在。 */
    CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD; /**< ASN.1 fr1fdd-FR1TDD-FR2TDD-CA-SpCellOnFR2TDD；枚举；OPTIONAL。 */
};


/**
 * @brief CodebookParameters_Type1_SinglePanel
 * @note ASN.1：type1/singlePanel；源文件第 15557 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceList, modes, maxNumberCSI-RS-PerResourceSet }
 */
struct CodebookParameters_Type1_SinglePanel {
    SupportedCSI_RS_Resource* supportedCSI_RS_ResourceList_items; /**< ASN.1 supportedCSI-RS-ResourceList；SEQUENCE OF SupportedCSI_RS_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceList_count; /**< supportedCSI-RS-ResourceList 元素个数。 */
    CodebookParameters_Type1_SinglePanel_Modes modes; /**< ASN.1 modes；枚举。 */
    int64_t maxNumberCSI_RS_PerResourceSet; /**< ASN.1 maxNumberCSI-RS-PerResourceSet；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief CodebookParameters_Type1_MultiPanel
 * @note ASN.1：type1/multiPanel；源文件第 15562 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceList, modes, nrofPanels, maxNumberCSI-RS-P...
 */
struct CodebookParameters_Type1_MultiPanel {
    SupportedCSI_RS_Resource* supportedCSI_RS_ResourceList_items; /**< ASN.1 supportedCSI-RS-ResourceList；SEQUENCE OF SupportedCSI_RS_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceList_count; /**< supportedCSI-RS-ResourceList 元素个数。 */
    CodebookParameters_Type1_MultiPanel_Modes modes; /**< ASN.1 modes；枚举。 */
    CodebookParameters_Type1_MultiPanel_NrofPanels nrofPanels; /**< ASN.1 nrofPanels；枚举。 */
    int64_t maxNumberCSI_RS_PerResourceSet; /**< ASN.1 maxNumberCSI-RS-PerResourceSet；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief CodebookParameters_Type1
 * @note ASN.1：type1；源文件第 15556 行。
 * @note SEQUENCE { singlePanel, multiPanel }
 */
struct CodebookParameters_Type1 {
    CodebookParameters_Type1_SinglePanel singlePanel; /**< ASN.1 singlePanel；结构体。 */
    bool has_multiPanel; /**< multiPanel 是否存在。 */
    CodebookParameters_Type1_MultiPanel multiPanel; /**< ASN.1 multiPanel；结构体；OPTIONAL。 */
};


/**
 * @brief CodebookParameters_Type2
 * @note ASN.1：type2；源文件第 15569 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceList, parameterLx, amplitudeScalingType, a...
 */
struct CodebookParameters_Type2 {
    SupportedCSI_RS_Resource* supportedCSI_RS_ResourceList_items; /**< ASN.1 supportedCSI-RS-ResourceList；SEQUENCE OF SupportedCSI_RS_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceList_count; /**< supportedCSI-RS-ResourceList 元素个数。 */
    int64_t parameterLx; /**< ASN.1 parameterLx；INTEGER (2..4)，位宽 2 bit。 */
    CodebookParameters_Type2_AmplitudeScalingType amplitudeScalingType; /**< ASN.1 amplitudeScalingType；枚举。 */
    bool has_amplitudeSubsetRestriction; /**< amplitudeSubsetRestriction 是否存在。 */
    CodebookParameters_Type2_AmplitudeSubsetRestriction amplitudeSubsetRestriction; /**< ASN.1 amplitudeSubsetRestriction；枚举；OPTIONAL。 */
};


/**
 * @brief CodebookParameters_Type2_PortSelection
 * @note ASN.1：type2-PortSelection；源文件第 15575 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceList, parameterLx, amplitudeScalingType }
 */
struct CodebookParameters_Type2_PortSelection {
    SupportedCSI_RS_Resource* supportedCSI_RS_ResourceList_items; /**< ASN.1 supportedCSI-RS-ResourceList；SEQUENCE OF SupportedCSI_RS_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceList_count; /**< supportedCSI-RS-ResourceList 元素个数。 */
    int64_t parameterLx; /**< ASN.1 parameterLx；INTEGER (2..4)，位宽 2 bit。 */
    CodebookParameters_Type2_PortSelection_AmplitudeScalingType amplitudeScalingType; /**< ASN.1 amplitudeScalingType；枚举。 */
};


/**
 * @brief CodebookParameters
 * @note ASN.1：CodebookParameters；源文件第 15555 行。
 * @note CodebookParameters ::= SEQUENCE { type1, type2, type2-PortSelection }
 */
struct CodebookParameters {
    CodebookParameters_Type1 type1; /**< ASN.1 type1；结构体。 */
    bool has_type2; /**< type2 是否存在。 */
    CodebookParameters_Type2 type2; /**< ASN.1 type2；结构体；OPTIONAL。 */
    bool has_type2_PortSelection; /**< type2-PortSelection 是否存在。 */
    CodebookParameters_Type2_PortSelection type2_PortSelection; /**< ASN.1 type2-PortSelection；结构体；OPTIONAL。 */
};


/**
 * @brief CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16
 * @note ASN.1：etype2-r16/etype2R1-r16；源文件第 15594 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16
 * @note ASN.1：etype2-r16/etype2R2-r16；源文件第 15599 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookParametersAddition_r16_Etype2_r16
 * @note ASN.1：etype2-r16；源文件第 15592 行。
 * @note SEQUENCE { etype2R1-r16, etype2R2-r16, paramComb7-8-r16, rank3-4-r16, amplitu...
 */
struct CodebookParametersAddition_r16_Etype2_r16 {
    CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16 etype2R1_r16; /**< ASN.1 etype2R1-r16；结构体。 */
    bool has_etype2R2_r16; /**< etype2R2-r16 是否存在。 */
    CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16 etype2R2_r16; /**< ASN.1 etype2R2-r16；结构体；OPTIONAL。 */
    bool has_paramComb7_8_r16; /**< paramComb7-8-r16 是否存在。 */
    CodebookParametersAddition_r16_Etype2_r16_ParamComb7_8_r16 paramComb7_8_r16; /**< ASN.1 paramComb7-8-r16；枚举；OPTIONAL。 */
    bool has_rank3_4_r16; /**< rank3-4-r16 是否存在。 */
    CodebookParametersAddition_r16_Etype2_r16_Rank3_4_r16 rank3_4_r16; /**< ASN.1 rank3-4-r16；枚举；OPTIONAL。 */
    bool has_amplitudeSubsetRestriction_r16; /**< amplitudeSubsetRestriction-r16 是否存在。 */
    CodebookParametersAddition_r16_Etype2_r16_AmplitudeSubsetRestriction_r16 amplitudeSubsetRestriction_r16; /**< ASN.1 amplitudeSubsetRestriction-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16
 * @note ASN.1：etype2-PS-r16/etype2R1-PortSelection-r16；源文件第 15612 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16
 * @note ASN.1：etype2-PS-r16/etype2R2-PortSelection-r16；源文件第 15617 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookParametersAddition_r16_Etype2_PS_r16
 * @note ASN.1：etype2-PS-r16；源文件第 15610 行。
 * @note SEQUENCE { etype2R1-PortSelection-r16, etype2R2-PortSelection-r16, rank3-4-r16 }
 */
struct CodebookParametersAddition_r16_Etype2_PS_r16 {
    CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16 etype2R1_PortSelection_r16; /**< ASN.1 etype2R1-PortSelection-r16；结构体。 */
    bool has_etype2R2_PortSelection_r16; /**< etype2R2-PortSelection-r16 是否存在。 */
    CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16 etype2R2_PortSelection_r16; /**< ASN.1 etype2R2-PortSelection-r16；结构体；OPTIONAL。 */
    bool has_rank3_4_r16; /**< rank3-4-r16 是否存在。 */
    CodebookParametersAddition_r16_Etype2_PS_r16_Rank3_4_r16 rank3_4_r16; /**< ASN.1 rank3-4-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CodebookParametersAddition_r16
 * @note ASN.1：CodebookParametersAddition-r16；源文件第 15591 行。
 * @note CodebookParametersAddition-r16 ::= SEQUENCE { etype2-r16, etype2-PS-r16 }
 */
struct CodebookParametersAddition_r16 {
    bool has_etype2_r16; /**< etype2-r16 是否存在。 */
    CodebookParametersAddition_r16_Etype2_r16 etype2_r16; /**< ASN.1 etype2-r16；结构体；OPTIONAL。 */
    bool has_etype2_PS_r16; /**< etype2-PS-r16 是否存在。 */
    CodebookParametersAddition_r16_Etype2_PS_r16 etype2_PS_r16; /**< ASN.1 etype2-PS-r16；结构体；OPTIONAL。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16
 * @note ASN.1：type1SP-Type2-null-r16；源文件第 15628 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16
 * @note ASN.1：type1SP-Type2PS-null-r16；源文件第 15631 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16
 * @note ASN.1：type1SP-eType2R1-null-r16；源文件第 15634 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16
 * @note ASN.1：type1SP-eType2R2-null-r16；源文件第 15637 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16
 * @note ASN.1：type1SP-eType2R1PS-null-r16；源文件第 15640 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16
 * @note ASN.1：type1SP-eType2R2PS-null-r16；源文件第 15643 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16
 * @note ASN.1：type1SP-Type2-Type2PS-r16；源文件第 15646 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16
 * @note ASN.1：type1MP-Type2-null-r16；源文件第 15649 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16
 * @note ASN.1：type1MP-Type2PS-null-r16；源文件第 15652 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16
 * @note ASN.1：type1MP-eType2R1-null-r16；源文件第 15655 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16
 * @note ASN.1：type1MP-eType2R2-null-r16；源文件第 15658 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16
 * @note ASN.1：type1MP-eType2R1PS-null-r16；源文件第 15661 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16
 * @note ASN.1：type1MP-eType2R2PS-null-r16；源文件第 15664 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16
 * @note ASN.1：type1MP-Type2-Type2PS-r16；源文件第 15667 行。
 * @note SEQUENCE { supportedCSI-RS-ResourceListAdd-r16 }
 */
struct CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16 {
    int64_t* supportedCSI_RS_ResourceListAdd_r16_items; /**< ASN.1 supportedCSI-RS-ResourceListAdd-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedCSI_RS_ResourceListAdd_r16_count; /**< supportedCSI-RS-ResourceListAdd-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAddition_r16
 * @note ASN.1：CodebookComboParametersAddition-r16；源文件第 15626 行。
 * @note CodebookComboParametersAddition-r16 ::= SEQUENCE { type1SP-Type2-null-r16, type1SP-Type2PS-null-r16, type1SP-eType2R1...
 */
struct CodebookComboParametersAddition_r16 {
    bool has_type1SP_Type2_null_r16; /**< type1SP-Type2-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16 type1SP_Type2_null_r16; /**< ASN.1 type1SP-Type2-null-r16；结构体；OPTIONAL。 */
    bool has_type1SP_Type2PS_null_r16; /**< type1SP-Type2PS-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16 type1SP_Type2PS_null_r16; /**< ASN.1 type1SP-Type2PS-null-r16；结构体；OPTIONAL。 */
    bool has_type1SP_eType2R1_null_r16; /**< type1SP-eType2R1-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16 type1SP_eType2R1_null_r16; /**< ASN.1 type1SP-eType2R1-null-r16；结构体；OPTIONAL。 */
    bool has_type1SP_eType2R2_null_r16; /**< type1SP-eType2R2-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16 type1SP_eType2R2_null_r16; /**< ASN.1 type1SP-eType2R2-null-r16；结构体；OPTIONAL。 */
    bool has_type1SP_eType2R1PS_null_r16; /**< type1SP-eType2R1PS-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16 type1SP_eType2R1PS_null_r16; /**< ASN.1 type1SP-eType2R1PS-null-r16；结构体；OPTIONAL。 */
    bool has_type1SP_eType2R2PS_null_r16; /**< type1SP-eType2R2PS-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16 type1SP_eType2R2PS_null_r16; /**< ASN.1 type1SP-eType2R2PS-null-r16；结构体；OPTIONAL。 */
    bool has_type1SP_Type2_Type2PS_r16; /**< type1SP-Type2-Type2PS-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16 type1SP_Type2_Type2PS_r16; /**< ASN.1 type1SP-Type2-Type2PS-r16；结构体；OPTIONAL。 */
    bool has_type1MP_Type2_null_r16; /**< type1MP-Type2-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16 type1MP_Type2_null_r16; /**< ASN.1 type1MP-Type2-null-r16；结构体；OPTIONAL。 */
    bool has_type1MP_Type2PS_null_r16; /**< type1MP-Type2PS-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16 type1MP_Type2PS_null_r16; /**< ASN.1 type1MP-Type2PS-null-r16；结构体；OPTIONAL。 */
    bool has_type1MP_eType2R1_null_r16; /**< type1MP-eType2R1-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16 type1MP_eType2R1_null_r16; /**< ASN.1 type1MP-eType2R1-null-r16；结构体；OPTIONAL。 */
    bool has_type1MP_eType2R2_null_r16; /**< type1MP-eType2R2-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16 type1MP_eType2R2_null_r16; /**< ASN.1 type1MP-eType2R2-null-r16；结构体；OPTIONAL。 */
    bool has_type1MP_eType2R1PS_null_r16; /**< type1MP-eType2R1PS-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16 type1MP_eType2R1PS_null_r16; /**< ASN.1 type1MP-eType2R1PS-null-r16；结构体；OPTIONAL。 */
    bool has_type1MP_eType2R2PS_null_r16; /**< type1MP-eType2R2PS-null-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16 type1MP_eType2R2PS_null_r16; /**< ASN.1 type1MP-eType2R2PS-null-r16；结构体；OPTIONAL。 */
    bool has_type1MP_Type2_Type2PS_r16; /**< type1MP-Type2-Type2PS-r16 是否存在。 */
    CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16 type1MP_Type2_Type2PS_r16; /**< ASN.1 type1MP-Type2-Type2PS-r16；结构体；OPTIONAL。 */
};


/**
 * @brief CodebookParametersfetype2_r17
 * @note ASN.1：CodebookParametersfetype2-r17；源文件第 15672 行。
 * @note CodebookParametersfetype2-r17 ::= SEQUENCE { fetype2basic-r17, fetype2R1-r17, fetype2R2-r17, fetype2Rank3Rank4-...
 */
struct CodebookParametersfetype2_r17 {
    int64_t* fetype2basic_r17_items; /**< ASN.1 fetype2basic-r17；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t fetype2basic_r17_count; /**< fetype2basic-r17 元素个数。 */
    bool has_fetype2R1_r17; /**< fetype2R1-r17 是否存在。 */
    int64_t* fetype2R1_r17_items; /**< ASN.1 fetype2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t fetype2R1_r17_count; /**< fetype2R1-r17 元素个数。 */
    bool has_fetype2R2_r17; /**< fetype2R2-r17 是否存在。 */
    int64_t* fetype2R2_r17_items; /**< ASN.1 fetype2R2-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t fetype2R2_r17_count; /**< fetype2R2-r17 元素个数。 */
    bool has_fetype2Rank3Rank4_r17; /**< fetype2Rank3Rank4-r17 是否存在。 */
    CodebookParametersfetype2_r17_Fetype2Rank3Rank4_r17 fetype2Rank3Rank4_r17; /**< ASN.1 fetype2Rank3Rank4-r17；枚举；OPTIONAL。 */
};


/**
 * @brief CodebookComboParameterMixedType_r17
 * @note ASN.1：CodebookComboParameterMixedType-r17；源文件第 15685 行。
 * @note CodebookComboParameterMixedType-r17 ::= SEQUENCE { type1SP-feType2PS-null-r17, type1SP-feType2PS-M2R1-null-r17, type1...
 */
struct CodebookComboParameterMixedType_r17 {
    bool has_type1SP_feType2PS_null_r17; /**< type1SP-feType2PS-null-r17 是否存在。 */
    int64_t* type1SP_feType2PS_null_r17_items; /**< ASN.1 type1SP-feType2PS-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_feType2PS_null_r17_count; /**< type1SP-feType2PS-null-r17 元素个数。 */
    bool has_type1SP_feType2PS_M2R1_null_r17; /**< type1SP-feType2PS-M2R1-null-r17 是否存在。 */
    int64_t* type1SP_feType2PS_M2R1_null_r17_items; /**< ASN.1 type1SP-feType2PS-M2R1-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_feType2PS_M2R1_null_r17_count; /**< type1SP-feType2PS-M2R1-null-r17 元素个数。 */
    bool has_type1SP_feType2PS_M2R2_null_r1; /**< type1SP-feType2PS-M2R2-null-r1 是否存在。 */
    int64_t* type1SP_feType2PS_M2R2_null_r1_items; /**< ASN.1 type1SP-feType2PS-M2R2-null-r1；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_feType2PS_M2R2_null_r1_count; /**< type1SP-feType2PS-M2R2-null-r1 元素个数。 */
    bool has_type1SP_Type2_feType2_PS_M1_r17; /**< type1SP-Type2-feType2-PS-M1-r17 是否存在。 */
    int64_t* type1SP_Type2_feType2_PS_M1_r17_items; /**< ASN.1 type1SP-Type2-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_Type2_feType2_PS_M1_r17_count; /**< type1SP-Type2-feType2-PS-M1-r17 元素个数。 */
    bool has_type1SP_Type2_feType2_PS_M2R1_r17; /**< type1SP-Type2-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* type1SP_Type2_feType2_PS_M2R1_r17_items; /**< ASN.1 type1SP-Type2-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_Type2_feType2_PS_M2R1_r17_count; /**< type1SP-Type2-feType2-PS-M2R1-r17 元素个数。 */
    bool has_type1SP_eType2R1_feType2_PS_M1_r17; /**< type1SP-eType2R1-feType2-PS-M1-r17 是否存在。 */
    int64_t* type1SP_eType2R1_feType2_PS_M1_r17_items; /**< ASN.1 type1SP-eType2R1-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_eType2R1_feType2_PS_M1_r17_count; /**< type1SP-eType2R1-feType2-PS-M1-r17 元素个数。 */
    bool has_type1SP_eType2R1_feType2_PS_M2R1_r17; /**< type1SP-eType2R1-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* type1SP_eType2R1_feType2_PS_M2R1_r17_items; /**< ASN.1 type1SP-eType2R1-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_eType2R1_feType2_PS_M2R1_r17_count; /**< type1SP-eType2R1-feType2-PS-M2R1-r17 元素个数。 */
    bool has_type1MP_feType2PS_null_r17; /**< type1MP-feType2PS-null-r17 是否存在。 */
    int64_t* type1MP_feType2PS_null_r17_items; /**< ASN.1 type1MP-feType2PS-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_feType2PS_null_r17_count; /**< type1MP-feType2PS-null-r17 元素个数。 */
    bool has_type1MP_feType2PS_M2R1_null_r17; /**< type1MP-feType2PS-M2R1-null-r17 是否存在。 */
    int64_t* type1MP_feType2PS_M2R1_null_r17_items; /**< ASN.1 type1MP-feType2PS-M2R1-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_feType2PS_M2R1_null_r17_count; /**< type1MP-feType2PS-M2R1-null-r17 元素个数。 */
    bool has_type1MP_feType2PS_M2R2_null_r17; /**< type1MP-feType2PS-M2R2-null-r17 是否存在。 */
    int64_t* type1MP_feType2PS_M2R2_null_r17_items; /**< ASN.1 type1MP-feType2PS-M2R2-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_feType2PS_M2R2_null_r17_count; /**< type1MP-feType2PS-M2R2-null-r17 元素个数。 */
    bool has_type1MP_Type2_feType2_PS_M1_r17; /**< type1MP-Type2-feType2-PS-M1-r17 是否存在。 */
    int64_t* type1MP_Type2_feType2_PS_M1_r17_items; /**< ASN.1 type1MP-Type2-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_Type2_feType2_PS_M1_r17_count; /**< type1MP-Type2-feType2-PS-M1-r17 元素个数。 */
    bool has_type1MP_Type2_feType2_PS_M2R1_r17; /**< type1MP-Type2-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* type1MP_Type2_feType2_PS_M2R1_r17_items; /**< ASN.1 type1MP-Type2-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_Type2_feType2_PS_M2R1_r17_count; /**< type1MP-Type2-feType2-PS-M2R1-r17 元素个数。 */
    bool has_type1MP_eType2R1_feType2_PS_M1_r17; /**< type1MP-eType2R1-feType2-PS-M1-r17 是否存在。 */
    int64_t* type1MP_eType2R1_feType2_PS_M1_r17_items; /**< ASN.1 type1MP-eType2R1-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_eType2R1_feType2_PS_M1_r17_count; /**< type1MP-eType2R1-feType2-PS-M1-r17 元素个数。 */
    bool has_type1MP_eType2R1_feType2_PS_M2R1_r17; /**< type1MP-eType2R1-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* type1MP_eType2R1_feType2_PS_M2R1_r17_items; /**< ASN.1 type1MP-eType2R1-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_eType2R1_feType2_PS_M2R1_r17_count; /**< type1MP-eType2R1-feType2-PS-M2R1-r17 元素个数。 */
};


/**
 * @brief CodebookComboParameterMultiTRP_r17
 * @note ASN.1：CodebookComboParameterMultiTRP-r17；源文件第 15717 行。
 * @note CodebookComboParameterMultiTRP-r17 ::= SEQUENCE { nCJT-null-null, nCJT1SP-null-null, nCJT-Type2-null-r16, nCJT-Type2...
 */
struct CodebookComboParameterMultiTRP_r17 {
    bool has_nCJT_null_null; /**< nCJT-null-null 是否存在。 */
    int64_t* nCJT_null_null_items; /**< ASN.1 nCJT-null-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_null_null_count; /**< nCJT-null-null 元素个数。 */
    bool has_nCJT1SP_null_null; /**< nCJT1SP-null-null 是否存在。 */
    int64_t* nCJT1SP_null_null_items; /**< ASN.1 nCJT1SP-null-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_null_null_count; /**< nCJT1SP-null-null 元素个数。 */
    bool has_nCJT_Type2_null_r16; /**< nCJT-Type2-null-r16 是否存在。 */
    int64_t* nCJT_Type2_null_r16_items; /**< ASN.1 nCJT-Type2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_Type2_null_r16_count; /**< nCJT-Type2-null-r16 元素个数。 */
    bool has_nCJT_Type2PS_null_r16; /**< nCJT-Type2PS-null-r16 是否存在。 */
    int64_t* nCJT_Type2PS_null_r16_items; /**< ASN.1 nCJT-Type2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_Type2PS_null_r16_count; /**< nCJT-Type2PS-null-r16 元素个数。 */
    bool has_nCJT_eType2R1_null_r16; /**< nCJT-eType2R1-null-r16 是否存在。 */
    int64_t* nCJT_eType2R1_null_r16_items; /**< ASN.1 nCJT-eType2R1-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R1_null_r16_count; /**< nCJT-eType2R1-null-r16 元素个数。 */
    bool has_nCJT_eType2R2_null_r16; /**< nCJT-eType2R2-null-r16 是否存在。 */
    int64_t* nCJT_eType2R2_null_r16_items; /**< ASN.1 nCJT-eType2R2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R2_null_r16_count; /**< nCJT-eType2R2-null-r16 元素个数。 */
    bool has_nCJT_eType2R1PS_null_r16; /**< nCJT-eType2R1PS-null-r16 是否存在。 */
    int64_t* nCJT_eType2R1PS_null_r16_items; /**< ASN.1 nCJT-eType2R1PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R1PS_null_r16_count; /**< nCJT-eType2R1PS-null-r16 元素个数。 */
    bool has_nCJT_eType2R2PS_null_r16; /**< nCJT-eType2R2PS-null-r16 是否存在。 */
    int64_t* nCJT_eType2R2PS_null_r16_items; /**< ASN.1 nCJT-eType2R2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R2PS_null_r16_count; /**< nCJT-eType2R2PS-null-r16 元素个数。 */
    bool has_nCJT_Type2_Type2PS_r16; /**< nCJT-Type2-Type2PS-r16 是否存在。 */
    int64_t* nCJT_Type2_Type2PS_r16_items; /**< ASN.1 nCJT-Type2-Type2PS-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_Type2_Type2PS_r16_count; /**< nCJT-Type2-Type2PS-r16 元素个数。 */
    bool has_nCJT1SP_Type2_null_r16; /**< nCJT1SP-Type2-null-r16 是否存在。 */
    int64_t* nCJT1SP_Type2_null_r16_items; /**< ASN.1 nCJT1SP-Type2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_Type2_null_r16_count; /**< nCJT1SP-Type2-null-r16 元素个数。 */
    bool has_nCJT1SP_Type2PS_null_r16; /**< nCJT1SP-Type2PS-null-r16 是否存在。 */
    int64_t* nCJT1SP_Type2PS_null_r16_items; /**< ASN.1 nCJT1SP-Type2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_Type2PS_null_r16_count; /**< nCJT1SP-Type2PS-null-r16 元素个数。 */
    bool has_nCJT1SP_eType2R1_null_r16; /**< nCJT1SP-eType2R1-null-r16 是否存在。 */
    int64_t* nCJT1SP_eType2R1_null_r16_items; /**< ASN.1 nCJT1SP-eType2R1-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R1_null_r16_count; /**< nCJT1SP-eType2R1-null-r16 元素个数。 */
    bool has_nCJT1SP_eType2R2_null_r16; /**< nCJT1SP-eType2R2-null-r16 是否存在。 */
    int64_t* nCJT1SP_eType2R2_null_r16_items; /**< ASN.1 nCJT1SP-eType2R2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R2_null_r16_count; /**< nCJT1SP-eType2R2-null-r16 元素个数。 */
    bool has_nCJT1SP_eType2R1PS_null_r16; /**< nCJT1SP-eType2R1PS-null-r16 是否存在。 */
    int64_t* nCJT1SP_eType2R1PS_null_r16_items; /**< ASN.1 nCJT1SP-eType2R1PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R1PS_null_r16_count; /**< nCJT1SP-eType2R1PS-null-r16 元素个数。 */
    bool has_nCJT1SP_eType2R2PS_null_r16; /**< nCJT1SP-eType2R2PS-null-r16 是否存在。 */
    int64_t* nCJT1SP_eType2R2PS_null_r16_items; /**< ASN.1 nCJT1SP-eType2R2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R2PS_null_r16_count; /**< nCJT1SP-eType2R2PS-null-r16 元素个数。 */
    bool has_nCJT1SP_Type2_Type2PS_r16; /**< nCJT1SP-Type2-Type2PS-r16 是否存在。 */
    int64_t* nCJT1SP_Type2_Type2PS_r16_items; /**< ASN.1 nCJT1SP-Type2-Type2PS-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_Type2_Type2PS_r16_count; /**< nCJT1SP-Type2-Type2PS-r16 元素个数。 */
    bool has_nCJT_feType2PS_null_r17; /**< nCJT-feType2PS-null-r17 是否存在。 */
    int64_t* nCJT_feType2PS_null_r17_items; /**< ASN.1 nCJT-feType2PS-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_feType2PS_null_r17_count; /**< nCJT-feType2PS-null-r17 元素个数。 */
    bool has_nCJT_feType2PS_M2R1_null_r17; /**< nCJT-feType2PS-M2R1-null-r17 是否存在。 */
    int64_t* nCJT_feType2PS_M2R1_null_r17_items; /**< ASN.1 nCJT-feType2PS-M2R1-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_feType2PS_M2R1_null_r17_count; /**< nCJT-feType2PS-M2R1-null-r17 元素个数。 */
    bool has_nCJT_feType2PS_M2R2_null_r17; /**< nCJT-feType2PS-M2R2-null-r17 是否存在。 */
    int64_t* nCJT_feType2PS_M2R2_null_r17_items; /**< ASN.1 nCJT-feType2PS-M2R2-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_feType2PS_M2R2_null_r17_count; /**< nCJT-feType2PS-M2R2-null-r17 元素个数。 */
    bool has_nCJT_Type2_feType2_PS_M1_r17; /**< nCJT-Type2-feType2-PS-M1-r17 是否存在。 */
    int64_t* nCJT_Type2_feType2_PS_M1_r17_items; /**< ASN.1 nCJT-Type2-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_Type2_feType2_PS_M1_r17_count; /**< nCJT-Type2-feType2-PS-M1-r17 元素个数。 */
    bool has_nCJT_Type2_feType2_PS_M2R1_r17; /**< nCJT-Type2-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* nCJT_Type2_feType2_PS_M2R1_r17_items; /**< ASN.1 nCJT-Type2-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_Type2_feType2_PS_M2R1_r17_count; /**< nCJT-Type2-feType2-PS-M2R1-r17 元素个数。 */
    bool has_nCJT_eType2R1_feType2_PS_M1_r17; /**< nCJT-eType2R1-feType2-PS-M1-r17 是否存在。 */
    int64_t* nCJT_eType2R1_feType2_PS_M1_r17_items; /**< ASN.1 nCJT-eType2R1-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R1_feType2_PS_M1_r17_count; /**< nCJT-eType2R1-feType2-PS-M1-r17 元素个数。 */
    bool has_nCJT_eType2R1_feType2_PS_M2R1_r17; /**< nCJT-eType2R1-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* nCJT_eType2R1_feType2_PS_M2R1_r17_items; /**< ASN.1 nCJT-eType2R1-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R1_feType2_PS_M2R1_r17_count; /**< nCJT-eType2R1-feType2-PS-M2R1-r17 元素个数。 */
    bool has_nCJT1SP_feType2PS_null_r17; /**< nCJT1SP-feType2PS-null-r17 是否存在。 */
    int64_t* nCJT1SP_feType2PS_null_r17_items; /**< ASN.1 nCJT1SP-feType2PS-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_feType2PS_null_r17_count; /**< nCJT1SP-feType2PS-null-r17 元素个数。 */
    bool has_nCJT1SP_feType2PS_M2R1_null_r17; /**< nCJT1SP-feType2PS-M2R1-null-r17 是否存在。 */
    int64_t* nCJT1SP_feType2PS_M2R1_null_r17_items; /**< ASN.1 nCJT1SP-feType2PS-M2R1-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_feType2PS_M2R1_null_r17_count; /**< nCJT1SP-feType2PS-M2R1-null-r17 元素个数。 */
    bool has_nCJT1SP_feType2PS_M2R2_null_r1; /**< nCJT1SP-feType2PS-M2R2-null-r1 是否存在。 */
    int64_t* nCJT1SP_feType2PS_M2R2_null_r1_items; /**< ASN.1 nCJT1SP-feType2PS-M2R2-null-r1；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_feType2PS_M2R2_null_r1_count; /**< nCJT1SP-feType2PS-M2R2-null-r1 元素个数。 */
    bool has_nCJT1SP_Type2_feType2_PS_M1_r17; /**< nCJT1SP-Type2-feType2-PS-M1-r17 是否存在。 */
    int64_t* nCJT1SP_Type2_feType2_PS_M1_r17_items; /**< ASN.1 nCJT1SP-Type2-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_Type2_feType2_PS_M1_r17_count; /**< nCJT1SP-Type2-feType2-PS-M1-r17 元素个数。 */
    bool has_nCJT1SP_Type2_feType2_PS_M2R1_r17; /**< nCJT1SP-Type2-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* nCJT1SP_Type2_feType2_PS_M2R1_r17_items; /**< ASN.1 nCJT1SP-Type2-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_Type2_feType2_PS_M2R1_r17_count; /**< nCJT1SP-Type2-feType2-PS-M2R1-r17 元素个数。 */
    bool has_nCJT1SP_eType2R1_feType2_PS_M1_r17; /**< nCJT1SP-eType2R1-feType2-PS-M1-r17 是否存在。 */
    int64_t* nCJT1SP_eType2R1_feType2_PS_M1_r17_items; /**< ASN.1 nCJT1SP-eType2R1-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R1_feType2_PS_M1_r17_count; /**< nCJT1SP-eType2R1-feType2-PS-M1-r17 元素个数。 */
    bool has_nCJT1SP_eType2R1_feType2_PS_M2R1_r17; /**< nCJT1SP-eType2R1-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* nCJT1SP_eType2R1_feType2_PS_M2R1_r17_items; /**< ASN.1 nCJT1SP-eType2R1-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count; /**< nCJT1SP-eType2R1-feType2-PS-M2R1-r17 元素个数。 */
};


/**
 * @brief CodebookVariantsList_r16
 * @note ASN.1：CodebookVariantsList-r16；源文件第 16106 行。
 * @note CodebookVariantsList-r16 ::= SEQUENCE OF (size 1..512) OF SupportedCSI-RS-Resource
 */
struct CodebookVariantsList_r16 {
    SupportedCSI_RS_Resource* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SupportedCSI_RS_Resource
 * @note ASN.1：SupportedCSI-RS-Resource；源文件第 16108 行。
 * @note SupportedCSI-RS-Resource ::= SEQUENCE { maxNumberTxPortsPerResource, maxNumberResourcesPerBand, totalNumbe...
 */
struct SupportedCSI_RS_Resource {
    SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource maxNumberTxPortsPerResource; /**< ASN.1 maxNumberTxPortsPerResource；枚举。 */
    int64_t maxNumberResourcesPerBand; /**< ASN.1 maxNumberResourcesPerBand；INTEGER (1..64)，位宽 6 bit。 */
    int64_t totalNumberTxPortsPerBand; /**< ASN.1 totalNumberTxPortsPerBand；INTEGER (2..256)，位宽 8 bit。 */
};


/**
 * @brief SupportedCSI_RS_ReportSetting_r18
 * @note ASN.1：SupportedCSI-RS-ReportSetting-r18；源文件第 16114 行。
 * @note SupportedCSI-RS-ReportSetting-r18 ::= SEQUENCE { maxN4-r18, maxNumberTxPortsPerResource-r18, maxNumberResourcesPerB...
 */
struct SupportedCSI_RS_ReportSetting_r18 {
    SupportedCSI_RS_ReportSetting_r18_MaxN4_r18 maxN4_r18; /**< ASN.1 maxN4-r18；枚举。 */
    SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18 maxNumberTxPortsPerResource_r18; /**< ASN.1 maxNumberTxPortsPerResource-r18；枚举。 */
    int64_t maxNumberResourcesPerBand_r18; /**< ASN.1 maxNumberResourcesPerBand-r18；INTEGER (1..64)，位宽 6 bit。 */
    int64_t totalNumberTxPortsPerBand_r18; /**< ASN.1 totalNumberTxPortsPerBand-r18；INTEGER (2..256)，位宽 8 bit。 */
};


/**
 * @brief DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18
 * @note ASN.1：processingDuration-r18；源文件第 16128 行。
 * @note SEQUENCE { processingPRS-SymbolsDurationN3-r18, processingDurationT3-r18 }
 */
struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18 {
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18 processingPRS_SymbolsDurationN3_r18; /**< ASN.1 processingPRS-SymbolsDurationN3-r18；枚举。 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18 processingDurationT3_r18; /**< ASN.1 processingDurationT3-r18；枚举。 */
};


/**
 * @brief DL_PRS_MeasurementWithRxFH_RRC_Connected_r18
 * @note ASN.1：DL-PRS-MeasurementWithRxFH-RRC-Connected-r18；源文件第 16124 行。
 * @note DL-PRS-MeasurementWithRxFH-RRC-Connected-r18 ::= SEQUENCE { maximumPRS-BandwidthAcrossAllHopsFR1-r18, maximumPRS-BandwidthAcro...
 */
struct DL_PRS_MeasurementWithRxFH_RRC_Connected_r18 {
    bool has_maximumPRS_BandwidthAcrossAllHopsFR1_r18; /**< maximumPRS-BandwidthAcrossAllHopsFR1-r18 是否存在。 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR1_r18 maximumPRS_BandwidthAcrossAllHopsFR1_r18; /**< ASN.1 maximumPRS-BandwidthAcrossAllHopsFR1-r18；枚举；OPTIONAL。 */
    bool has_maximumPRS_BandwidthAcrossAllHopsFR2_r18; /**< maximumPRS-BandwidthAcrossAllHopsFR2-r18 是否存在。 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR2_r18 maximumPRS_BandwidthAcrossAllHopsFR2_r18; /**< ASN.1 maximumPRS-BandwidthAcrossAllHopsFR2-r18；枚举；OPTIONAL。 */
    bool has_maximumFH_Hops_r18; /**< maximumFH-Hops-r18 是否存在。 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumFH_Hops_r18 maximumFH_Hops_r18; /**< ASN.1 maximumFH-Hops-r18；枚举；OPTIONAL。 */
    bool has_processingDuration_r18; /**< processingDuration-r18 是否存在。 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18 processingDuration_r18; /**< ASN.1 processingDuration-r18；结构体；OPTIONAL。 */
    bool has_rf_RxRetunTimeFR1_r18; /**< rf-RxRetunTimeFR1-r18 是否存在。 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR1_r18 rf_RxRetunTimeFR1_r18; /**< ASN.1 rf-RxRetunTimeFR1-r18；枚举；OPTIONAL。 */
    bool has_rf_RxRetunTimeFR2_r18; /**< rf-RxRetunTimeFR2-r18 是否存在。 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR2_r18 rf_RxRetunTimeFR2_r18; /**< ASN.1 rf-RxRetunTimeFR2-r18；枚举；OPTIONAL。 */
    bool has_numOfOverlappingPRB_r18; /**< numOfOverlappingPRB-r18 是否存在。 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_NumOfOverlappingPRB_r18 numOfOverlappingPRB_r18; /**< ASN.1 numOfOverlappingPRB-r18；枚举；OPTIONAL。 */
};


/**
 * @brief ERedCapParameters_r18
 * @note ASN.1：ERedCapParameters-r18；源文件第 16142 行。
 * @note ERedCapParameters-r18 ::= SEQUENCE { supportOfERedCap-r18, eRedCapNotReducedBB-BW-r18, eRedCapIgnoreCap...
 */
struct ERedCapParameters_r18 {
    ERedCapParameters_r18_SupportOfERedCap_r18 supportOfERedCap_r18; /**< ASN.1 supportOfERedCap-r18；枚举。 */
    bool has_eRedCapNotReducedBB_BW_r18; /**< eRedCapNotReducedBB-BW-r18 是否存在。 */
    ERedCapParameters_r18_ERedCapNotReducedBB_BW_r18 eRedCapNotReducedBB_BW_r18; /**< ASN.1 eRedCapNotReducedBB-BW-r18；枚举；OPTIONAL。 */
    bool has_eRedCapIgnoreCapabilityFiltering_r18; /**< eRedCapIgnoreCapabilityFiltering-r18 是否存在。 */
    ERedCapParameters_r18_ERedCapIgnoreCapabilityFiltering_r18 eRedCapIgnoreCapabilityFiltering_r18; /**< ASN.1 eRedCapIgnoreCapabilityFiltering-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetCombination
 * @note ASN.1：FeatureSetCombination；源文件第 16153 行。
 * @note FeatureSetCombination ::= SEQUENCE OF (size 1..32) OF FeatureSetsPerBand
 */
struct FeatureSetCombination {
    FeatureSetsPerBand* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FeatureSetsPerBand
 * @note ASN.1：FeatureSetsPerBand；源文件第 16155 行。
 * @note FeatureSetsPerBand ::= SEQUENCE OF (size 1..128) OF FeatureSet
 */
struct FeatureSetsPerBand {
    FeatureSet* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FeatureSet_Eutra
 * @note ASN.1：eutra；源文件第 16158 行。
 * @note SEQUENCE { downlinkSetEUTRA, uplinkSetEUTRA }
 */
struct FeatureSet_Eutra {
    FeatureSetEUTRA_DownlinkId downlinkSetEUTRA; /**< ASN.1 downlinkSetEUTRA；INTEGER (0..256)，位宽 9 bit。 */
    FeatureSetEUTRA_UplinkId uplinkSetEUTRA; /**< ASN.1 uplinkSetEUTRA；INTEGER (0..256)，位宽 9 bit。 */
};


/**
 * @brief FeatureSet_Nr
 * @note ASN.1：nr；源文件第 16162 行。
 * @note SEQUENCE { downlinkSetNR, uplinkSetNR }
 */
struct FeatureSet_Nr {
    FeatureSetDownlinkId downlinkSetNR; /**< ASN.1 downlinkSetNR；INTEGER (0..1024)，位宽 11 bit。 */
    FeatureSetUplinkId uplinkSetNR; /**< ASN.1 uplinkSetNR；INTEGER (0..1024)，位宽 11 bit。 */
};


/**
 * @brief FeatureSet
 * @note ASN.1：FeatureSet；源文件第 16157 行。
 * @note FeatureSet ::= CHOICE { eutra, nr }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum FeatureSet_Tag {
    FeatureSet_Tag_eutra = 0, /**< ASN.1 eutra */
    FeatureSet_Tag_nr = 1, /**< ASN.1 nr */
} FeatureSet_Tag;

struct FeatureSet {
    FeatureSet_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        FeatureSet_Eutra eutra; /**< ASN.1 eutra */
        FeatureSet_Nr nr; /**< ASN.1 nr */
    } u;
};


/**
 * @brief DummyA
 * @note ASN.1：DummyA；源文件第 16431 行。
 * @note DummyA ::= SEQUENCE { maxNumberNZP-CSI-RS-PerCC, maxNumberPortsAcrossNZP-CSI-RS-PerCC, m...
 */
struct DummyA {
    int64_t maxNumberNZP_CSI_RS_PerCC; /**< ASN.1 maxNumberNZP-CSI-RS-PerCC；INTEGER (1..32)，位宽 5 bit。 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC maxNumberPortsAcrossNZP_CSI_RS_PerCC; /**< ASN.1 maxNumberPortsAcrossNZP-CSI-RS-PerCC；枚举。 */
    DummyA_MaxNumberCS_IM_PerCC maxNumberCS_IM_PerCC; /**< ASN.1 maxNumberCS-IM-PerCC；枚举。 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC maxNumberSimultaneousCSI_RS_ActBWP_AllCC; /**< ASN.1 maxNumberSimultaneousCSI-RS-ActBWP-AllCC；枚举。 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC; /**< ASN.1 totalNumberPortsSimultaneousCSI-RS-ActBWP-AllCC；枚举。 */
};


/**
 * @brief FeatureSetDownlink_TimeDurationForQCL
 * @note ASN.1：timeDurationForQCL；源文件第 16190 行。
 * @note SEQUENCE { scs-60kHz, scs-120kHz }
 */
struct FeatureSetDownlink_TimeDurationForQCL {
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    FeatureSetDownlink_TimeDurationForQCL_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    FeatureSetDownlink_TimeDurationForQCL_Scs_120kHz scs_120kHz; /**< ASN.1 scs-120kHz；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot
 * @note ASN.1：pdsch-ProcessingType1-DifferentTB-PerSlot；源文件第 16194 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz, scs-120kHz }
 */
struct FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz scs_15kHz; /**< ASN.1 scs-15kHz；枚举；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz scs_30kHz; /**< ASN.1 scs-30kHz；枚举；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz scs_120kHz; /**< ASN.1 scs-120kHz；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink
 * @note ASN.1：FeatureSetDownlink；源文件第 16176 行。
 * @note FeatureSetDownlink ::= SEQUENCE { featureSetListPerDownlinkCC, intraBandFreqSeparationDL, scalingFac...
 */
struct FeatureSetDownlink {
    FeatureSetDownlinkPerCC_Id* featureSetListPerDownlinkCC_items; /**< ASN.1 featureSetListPerDownlinkCC；SEQUENCE OF FeatureSetDownlinkPerCC_Id，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t featureSetListPerDownlinkCC_count; /**< featureSetListPerDownlinkCC 元素个数。 */
    bool has_intraBandFreqSeparationDL; /**< intraBandFreqSeparationDL 是否存在。 */
    FreqSeparationClass intraBandFreqSeparationDL; /**< ASN.1 intraBandFreqSeparationDL；枚举；OPTIONAL。 */
    bool has_scalingFactor; /**< scalingFactor 是否存在。 */
    FeatureSetDownlink_ScalingFactor scalingFactor; /**< ASN.1 scalingFactor；枚举；OPTIONAL。 */
    bool has_dummy8; /**< dummy8 是否存在。 */
    FeatureSetDownlink_Dummy8 dummy8; /**< ASN.1 dummy8；枚举；OPTIONAL。 */
    bool has_scellWithoutSSB; /**< scellWithoutSSB 是否存在。 */
    FeatureSetDownlink_ScellWithoutSSB scellWithoutSSB; /**< ASN.1 scellWithoutSSB；枚举；OPTIONAL。 */
    bool has_csi_RS_MeasSCellWithoutSSB; /**< csi-RS-MeasSCellWithoutSSB 是否存在。 */
    FeatureSetDownlink_Csi_RS_MeasSCellWithoutSSB csi_RS_MeasSCellWithoutSSB; /**< ASN.1 csi-RS-MeasSCellWithoutSSB；枚举；OPTIONAL。 */
    bool has_dummy1; /**< dummy1 是否存在。 */
    FeatureSetDownlink_Dummy1 dummy1; /**< ASN.1 dummy1；枚举；OPTIONAL。 */
    bool has_type1_3_CSS; /**< type1-3-CSS 是否存在。 */
    FeatureSetDownlink_Type1_3_CSS type1_3_CSS; /**< ASN.1 type1-3-CSS；枚举；OPTIONAL。 */
    bool has_pdcch_MonitoringAnyOccasions; /**< pdcch-MonitoringAnyOccasions 是否存在。 */
    FeatureSetDownlink_Pdcch_MonitoringAnyOccasions pdcch_MonitoringAnyOccasions; /**< ASN.1 pdcch-MonitoringAnyOccasions；枚举；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    FeatureSetDownlink_Dummy2 dummy2; /**< ASN.1 dummy2；枚举；OPTIONAL。 */
    bool has_ue_SpecificUL_DL_Assignment; /**< ue-SpecificUL-DL-Assignment 是否存在。 */
    FeatureSetDownlink_Ue_SpecificUL_DL_Assignment ue_SpecificUL_DL_Assignment; /**< ASN.1 ue-SpecificUL-DL-Assignment；枚举；OPTIONAL。 */
    bool has_searchSpaceSharingCA_DL; /**< searchSpaceSharingCA-DL 是否存在。 */
    FeatureSetDownlink_SearchSpaceSharingCA_DL searchSpaceSharingCA_DL; /**< ASN.1 searchSpaceSharingCA-DL；枚举；OPTIONAL。 */
    bool has_timeDurationForQCL; /**< timeDurationForQCL 是否存在。 */
    FeatureSetDownlink_TimeDurationForQCL timeDurationForQCL; /**< ASN.1 timeDurationForQCL；结构体；OPTIONAL。 */
    bool has_pdsch_ProcessingType1_DifferentTB_PerSlot; /**< pdsch-ProcessingType1-DifferentTB-PerSlot 是否存在。 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot pdsch_ProcessingType1_DifferentTB_PerSlot; /**< ASN.1 pdsch-ProcessingType1-DifferentTB-PerSlot；结构体；OPTIONAL。 */
    bool has_dummy3; /**< dummy3 是否存在。 */
    DummyA dummy3; /**< ASN.1 dummy3；结构体；OPTIONAL。 */
    bool has_dummy4; /**< dummy4 是否存在。 */
    DummyB* dummy4_items; /**< ASN.1 dummy4；SEQUENCE OF DummyB，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dummy4_count; /**< dummy4 元素个数。 */
    bool has_dummy5; /**< dummy5 是否存在。 */
    DummyC* dummy5_items; /**< ASN.1 dummy5；SEQUENCE OF DummyC，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dummy5_count; /**< dummy5 元素个数。 */
    bool has_dummy6; /**< dummy6 是否存在。 */
    DummyD* dummy6_items; /**< ASN.1 dummy6；SEQUENCE OF DummyD，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dummy6_count; /**< dummy6 元素个数。 */
    bool has_dummy7; /**< dummy7 是否存在。 */
    DummyE* dummy7_items; /**< ASN.1 dummy7；SEQUENCE OF DummyE，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dummy7_count; /**< dummy7 元素个数。 */
};


/**
 * @brief FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap
 * @note ASN.1：pdcch-MonitoringAnyOccasionsWithSpanGap；源文件第 16212 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz, scs-120kHz }
 */
struct FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_15kHz scs_15kHz; /**< ASN.1 scs-15kHz；枚举；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_30kHz scs_30kHz; /**< ASN.1 scs-30kHz；枚举；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_120kHz scs_120kHz; /**< ASN.1 scs-120kHz；枚举；OPTIONAL。 */
};


/**
 * @brief ProcessingParameters_DifferentTB_PerSlot
 * @note ASN.1：differentTB-PerSlot；源文件第 19350 行。
 * @note SEQUENCE { upto1, upto2, upto4, upto7 }
 */
struct ProcessingParameters_DifferentTB_PerSlot {
    bool has_upto1; /**< upto1 是否存在。 */
    NumberOfCarriers upto1; /**< ASN.1 upto1；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_upto2; /**< upto2 是否存在。 */
    NumberOfCarriers upto2; /**< ASN.1 upto2；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_upto4; /**< upto4 是否存在。 */
    NumberOfCarriers upto4; /**< ASN.1 upto4；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_upto7; /**< upto7 是否存在。 */
    NumberOfCarriers upto7; /**< ASN.1 upto7；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief ProcessingParameters
 * @note ASN.1：ProcessingParameters；源文件第 19348 行。
 * @note ProcessingParameters ::= SEQUENCE { fallback, differentTB-PerSlot }
 */
struct ProcessingParameters {
    ProcessingParameters_Fallback fallback; /**< ASN.1 fallback；枚举。 */
    bool has_differentTB_PerSlot; /**< differentTB-PerSlot 是否存在。 */
    ProcessingParameters_DifferentTB_PerSlot differentTB_PerSlot; /**< ASN.1 differentTB-PerSlot；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1540_Pdsch_ProcessingType2
 * @note ASN.1：pdsch-ProcessingType2；源文件第 16219 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz }
 */
struct FeatureSetDownlink_v1540_Pdsch_ProcessingType2 {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    ProcessingParameters scs_15kHz; /**< ASN.1 scs-15kHz；结构体；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    ProcessingParameters scs_30kHz; /**< ASN.1 scs-30kHz；结构体；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    ProcessingParameters scs_60kHz; /**< ASN.1 scs-60kHz；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited
 * @note ASN.1：pdsch-ProcessingType2-Limited；源文件第 16224 行。
 * @note SEQUENCE { differentTB-PerSlot-SCS-30kHz }
 */
struct FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited {
    FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited_DifferentTB_PerSlot_SCS_30kHz differentTB_PerSlot_SCS_30kHz; /**< ASN.1 differentTB-PerSlot-SCS-30kHz；枚举。 */
};


/**
 * @brief FeatureSetDownlink_v1540
 * @note ASN.1：FeatureSetDownlink-v1540；源文件第 16207 行。
 * @note FeatureSetDownlink-v1540 ::= SEQUENCE { oneFL-DMRS-TwoAdditionalDMRS-DL, additionalDMRS-DL-Alt, twoFL-DMRS...
 */
struct FeatureSetDownlink_v1540 {
    bool has_oneFL_DMRS_TwoAdditionalDMRS_DL; /**< oneFL-DMRS-TwoAdditionalDMRS-DL 是否存在。 */
    FeatureSetDownlink_v1540_OneFL_DMRS_TwoAdditionalDMRS_DL oneFL_DMRS_TwoAdditionalDMRS_DL; /**< ASN.1 oneFL-DMRS-TwoAdditionalDMRS-DL；枚举；OPTIONAL。 */
    bool has_additionalDMRS_DL_Alt; /**< additionalDMRS-DL-Alt 是否存在。 */
    FeatureSetDownlink_v1540_AdditionalDMRS_DL_Alt additionalDMRS_DL_Alt; /**< ASN.1 additionalDMRS-DL-Alt；枚举；OPTIONAL。 */
    bool has_twoFL_DMRS_TwoAdditionalDMRS_DL; /**< twoFL-DMRS-TwoAdditionalDMRS-DL 是否存在。 */
    FeatureSetDownlink_v1540_TwoFL_DMRS_TwoAdditionalDMRS_DL twoFL_DMRS_TwoAdditionalDMRS_DL; /**< ASN.1 twoFL-DMRS-TwoAdditionalDMRS-DL；枚举；OPTIONAL。 */
    bool has_oneFL_DMRS_ThreeAdditionalDMRS_DL; /**< oneFL-DMRS-ThreeAdditionalDMRS-DL 是否存在。 */
    FeatureSetDownlink_v1540_OneFL_DMRS_ThreeAdditionalDMRS_DL oneFL_DMRS_ThreeAdditionalDMRS_DL; /**< ASN.1 oneFL-DMRS-ThreeAdditionalDMRS-DL；枚举；OPTIONAL。 */
    bool has_pdcch_MonitoringAnyOccasionsWithSpanGap; /**< pdcch-MonitoringAnyOccasionsWithSpanGap 是否存在。 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap pdcch_MonitoringAnyOccasionsWithSpanGap; /**< ASN.1 pdcch-MonitoringAnyOccasionsWithSpanGap；结构体；OPTIONAL。 */
    bool has_pdsch_SeparationWithGap; /**< pdsch-SeparationWithGap 是否存在。 */
    FeatureSetDownlink_v1540_Pdsch_SeparationWithGap pdsch_SeparationWithGap; /**< ASN.1 pdsch-SeparationWithGap；枚举；OPTIONAL。 */
    bool has_pdsch_ProcessingType2; /**< pdsch-ProcessingType2 是否存在。 */
    FeatureSetDownlink_v1540_Pdsch_ProcessingType2 pdsch_ProcessingType2; /**< ASN.1 pdsch-ProcessingType2；结构体；OPTIONAL。 */
    bool has_pdsch_ProcessingType2_Limited; /**< pdsch-ProcessingType2-Limited 是否存在。 */
    FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited pdsch_ProcessingType2_Limited; /**< ASN.1 pdsch-ProcessingType2-Limited；结构体；OPTIONAL。 */
    bool has_dl_MCS_TableAlt_DynamicIndication; /**< dl-MCS-TableAlt-DynamicIndication 是否存在。 */
    FeatureSetDownlink_v1540_Dl_MCS_TableAlt_DynamicIndication dl_MCS_TableAlt_DynamicIndication; /**< ASN.1 dl-MCS-TableAlt-DynamicIndication；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_Resources
 * @note ASN.1：SRS-Resources；源文件第 16968 行。
 * @note SRS-Resources ::= SEQUENCE { maxNumberAperiodicSRS-PerBWP, maxNumberAperiodicSRS-PerBWP-PerSlot...
 */
struct SRS_Resources {
    SRS_Resources_MaxNumberAperiodicSRS_PerBWP maxNumberAperiodicSRS_PerBWP; /**< ASN.1 maxNumberAperiodicSRS-PerBWP；枚举。 */
    int64_t maxNumberAperiodicSRS_PerBWP_PerSlot; /**< ASN.1 maxNumberAperiodicSRS-PerBWP-PerSlot；INTEGER (1..6)，位宽 3 bit。 */
    SRS_Resources_MaxNumberPeriodicSRS_PerBWP maxNumberPeriodicSRS_PerBWP; /**< ASN.1 maxNumberPeriodicSRS-PerBWP；枚举。 */
    int64_t maxNumberPeriodicSRS_PerBWP_PerSlot; /**< ASN.1 maxNumberPeriodicSRS-PerBWP-PerSlot；INTEGER (1..6)，位宽 3 bit。 */
    SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP maxNumberSemiPersistentSRS_PerBWP; /**< ASN.1 maxNumberSemiPersistentSRS-PerBWP；枚举。 */
    int64_t maxNumberSemiPersistentSRS_PerBWP_PerSlot; /**< ASN.1 maxNumberSemiPersistentSRS-PerBWP-PerSlot；INTEGER (1..6)，位宽 3 bit。 */
    SRS_Resources_MaxNumberSRS_Ports_PerResource maxNumberSRS_Ports_PerResource; /**< ASN.1 maxNumberSRS-Ports-PerResource；枚举。 */
};


/**
 * @brief FeatureSetDownlink_v15a0
 * @note ASN.1：FeatureSetDownlink-v15a0；源文件第 16230 行。
 * @note FeatureSetDownlink-v15a0 ::= SEQUENCE { supportedSRS-Resources }
 */
struct FeatureSetDownlink_v15a0 {
    bool has_supportedSRS_Resources; /**< supportedSRS-Resources 是否存在。 */
    SRS_Resources supportedSRS_Resources; /**< ASN.1 supportedSRS-Resources；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16
 * @note ASN.1：cbgPDSCH-ProcessingType1-DifferentTB-PerSlot-r16；源文件第 16236 行。
 * @note SEQUENCE { scs-15kHz-r16, scs-30kHz-r16, scs-60kHz-r16, scs-120kHz-r16 }
 */
struct FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16 {
    bool has_scs_15kHz_r16; /**< scs-15kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16 scs_15kHz_r16; /**< ASN.1 scs-15kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r16; /**< scs-30kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16 scs_30kHz_r16; /**< ASN.1 scs-30kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16 scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r16; /**< scs-120kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16 scs_120kHz_r16; /**< ASN.1 scs-120kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16
 * @note ASN.1：cbgPDSCH-ProcessingType2-DifferentTB-PerSlot-r16；源文件第 16244 行。
 * @note SEQUENCE { scs-15kHz-r16, scs-30kHz-r16, scs-60kHz-r16, scs-120kHz-r16 }
 */
struct FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16 {
    bool has_scs_15kHz_r16; /**< scs-15kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16 scs_15kHz_r16; /**< ASN.1 scs-15kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r16; /**< scs-30kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16 scs_30kHz_r16; /**< ASN.1 scs-30kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16 scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r16; /**< scs-120kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16 scs_120kHz_r16; /**< ASN.1 scs-120kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1610_IntraFreqDAPS_r16
 * @note ASN.1：intraFreqDAPS-r16；源文件第 16250 行。
 * @note SEQUENCE { intraFreqDiffSCS-DAPS-r16, intraFreqAsyncDAPS-r16 }
 */
struct FeatureSetDownlink_v1610_IntraFreqDAPS_r16 {
    bool has_intraFreqDiffSCS_DAPS_r16; /**< intraFreqDiffSCS-DAPS-r16 是否存在。 */
    FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqDiffSCS_DAPS_r16 intraFreqDiffSCS_DAPS_r16; /**< ASN.1 intraFreqDiffSCS-DAPS-r16；枚举；OPTIONAL。 */
    bool has_intraFreqAsyncDAPS_r16; /**< intraFreqAsyncDAPS-r16 是否存在。 */
    FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqAsyncDAPS_r16 intraFreqAsyncDAPS_r16; /**< ASN.1 intraFreqAsyncDAPS-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PDCCH_MonitoringOccasions_r16
 * @note ASN.1：PDCCH-MonitoringOccasions-r16；源文件第 16419 行。
 * @note PDCCH-MonitoringOccasions-r16 ::= SEQUENCE { period7span3-r16, period4span3-r16, period2span2-r16 }
 */
struct PDCCH_MonitoringOccasions_r16 {
    bool has_period7span3_r16; /**< period7span3-r16 是否存在。 */
    PDCCH_MonitoringOccasions_r16_Period7span3_r16 period7span3_r16; /**< ASN.1 period7span3-r16；枚举；OPTIONAL。 */
    bool has_period4span3_r16; /**< period4span3-r16 是否存在。 */
    PDCCH_MonitoringOccasions_r16_Period4span3_r16 period4span3_r16; /**< ASN.1 period4span3-r16；枚举；OPTIONAL。 */
    bool has_period2span2_r16; /**< period2span2-r16 是否存在。 */
    PDCCH_MonitoringOccasions_r16_Period2span2_r16 period2span2_r16; /**< ASN.1 period2span2-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16
 * @note ASN.1：pdcch-Monitoring-r16/pdsch-ProcessingType1-r16；源文件第 16259 行。
 * @note SEQUENCE { scs-15kHz-r16, scs-30kHz-r16 }
 */
struct FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16 {
    bool has_scs_15kHz_r16; /**< scs-15kHz-r16 是否存在。 */
    PDCCH_MonitoringOccasions_r16 scs_15kHz_r16; /**< ASN.1 scs-15kHz-r16；结构体；OPTIONAL。 */
    bool has_scs_30kHz_r16; /**< scs-30kHz-r16 是否存在。 */
    PDCCH_MonitoringOccasions_r16 scs_30kHz_r16; /**< ASN.1 scs-30kHz-r16；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16
 * @note ASN.1：pdcch-Monitoring-r16/pdsch-ProcessingType2-r16；源文件第 16263 行。
 * @note SEQUENCE { scs-15kHz-r16, scs-30kHz-r16 }
 */
struct FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16 {
    bool has_scs_15kHz_r16; /**< scs-15kHz-r16 是否存在。 */
    PDCCH_MonitoringOccasions_r16 scs_15kHz_r16; /**< ASN.1 scs-15kHz-r16；结构体；OPTIONAL。 */
    bool has_scs_30kHz_r16; /**< scs-30kHz-r16 是否存在。 */
    PDCCH_MonitoringOccasions_r16 scs_30kHz_r16; /**< ASN.1 scs-30kHz-r16；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1610_Pdcch_Monitoring_r16
 * @note ASN.1：pdcch-Monitoring-r16；源文件第 16258 行。
 * @note SEQUENCE { pdsch-ProcessingType1-r16, pdsch-ProcessingType2-r16 }
 */
struct FeatureSetDownlink_v1610_Pdcch_Monitoring_r16 {
    bool has_pdsch_ProcessingType1_r16; /**< pdsch-ProcessingType1-r16 是否存在。 */
    FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16 pdsch_ProcessingType1_r16; /**< ASN.1 pdsch-ProcessingType1-r16；结构体；OPTIONAL。 */
    bool has_pdsch_ProcessingType2_r16; /**< pdsch-ProcessingType2-r16 是否存在。 */
    FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16 pdsch_ProcessingType2_r16; /**< ASN.1 pdsch-ProcessingType2-r16；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16
 * @note ASN.1：crossCarrierSchedulingProcessing-DiffSCS-r16；源文件第 16273 行。
 * @note SEQUENCE { scs-15kHz-120kHz-r16, scs-15kHz-60kHz-r16, scs-30kHz-120kHz-r16, s...
 */
struct FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16 {
    bool has_scs_15kHz_120kHz_r16; /**< scs-15kHz-120kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16 scs_15kHz_120kHz_r16; /**< ASN.1 scs-15kHz-120kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_15kHz_60kHz_r16; /**< scs-15kHz-60kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16 scs_15kHz_60kHz_r16; /**< ASN.1 scs-15kHz-60kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_120kHz_r16; /**< scs-30kHz-120kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16 scs_30kHz_120kHz_r16; /**< ASN.1 scs-30kHz-120kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_15kHz_30kHz_r16; /**< scs-15kHz-30kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16 scs_15kHz_30kHz_r16; /**< ASN.1 scs-15kHz-30kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_60kHz_r16; /**< scs-30kHz-60kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16 scs_30kHz_60kHz_r16; /**< ASN.1 scs-30kHz-60kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_60kHz_120kHz_r16; /**< scs-60kHz-120kHz-r16 是否存在。 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16 scs_60kHz_120kHz_r16; /**< ASN.1 scs-60kHz-120kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1610
 * @note ASN.1：FeatureSetDownlink-v1610；源文件第 16234 行。
 * @note FeatureSetDownlink-v1610 ::= SEQUENCE { cbgPDSCH-ProcessingType1-DifferentTB-PerSlot-r16, cbgPDSCH-Process...
 */
struct FeatureSetDownlink_v1610 {
    bool has_cbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16; /**< cbgPDSCH-ProcessingType1-DifferentTB-PerSlot-r16 是否存在。 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16 cbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16; /**< ASN.1 cbgPDSCH-ProcessingType1-DifferentTB-PerSlot-r16；结构体；OPTIONAL。 */
    bool has_cbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16; /**< cbgPDSCH-ProcessingType2-DifferentTB-PerSlot-r16 是否存在。 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16 cbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16; /**< ASN.1 cbgPDSCH-ProcessingType2-DifferentTB-PerSlot-r16；结构体；OPTIONAL。 */
    bool has_intraFreqDAPS_r16; /**< intraFreqDAPS-r16 是否存在。 */
    FeatureSetDownlink_v1610_IntraFreqDAPS_r16 intraFreqDAPS_r16; /**< ASN.1 intraFreqDAPS-r16；结构体；OPTIONAL。 */
    bool has_intraBandFreqSeparationDL_v1620; /**< intraBandFreqSeparationDL-v1620 是否存在。 */
    FreqSeparationClassDL_v1620 intraBandFreqSeparationDL_v1620; /**< ASN.1 intraBandFreqSeparationDL-v1620；枚举；OPTIONAL。 */
    bool has_intraBandFreqSeparationDL_Only_r16; /**< intraBandFreqSeparationDL-Only-r16 是否存在。 */
    FreqSeparationClassDL_Only_r16 intraBandFreqSeparationDL_Only_r16; /**< ASN.1 intraBandFreqSeparationDL-Only-r16；枚举；OPTIONAL。 */
    bool has_pdcch_Monitoring_r16; /**< pdcch-Monitoring-r16 是否存在。 */
    FeatureSetDownlink_v1610_Pdcch_Monitoring_r16 pdcch_Monitoring_r16; /**< ASN.1 pdcch-Monitoring-r16；结构体；OPTIONAL。 */
    bool has_pdcch_MonitoringMixed_r16; /**< pdcch-MonitoringMixed-r16 是否存在。 */
    FeatureSetDownlink_v1610_Pdcch_MonitoringMixed_r16 pdcch_MonitoringMixed_r16; /**< ASN.1 pdcch-MonitoringMixed-r16；枚举；OPTIONAL。 */
    bool has_crossCarrierSchedulingProcessing_DiffSCS_r16; /**< crossCarrierSchedulingProcessing-DiffSCS-r16 是否存在。 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16 crossCarrierSchedulingProcessing_DiffSCS_r16; /**< ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16；结构体；OPTIONAL。 */
    bool has_singleDCI_SDM_scheme_r16; /**< singleDCI-SDM-scheme-r16 是否存在。 */
    FeatureSetDownlink_v1610_SingleDCI_SDM_scheme_r16 singleDCI_SDM_scheme_r16; /**< ASN.1 singleDCI-SDM-scheme-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1700_TimeDurationForQCL_v1710
 * @note ASN.1：timeDurationForQCL-v1710；源文件第 16290 行。
 * @note SEQUENCE { scs-480kHz, scs-960kHz }
 */
struct FeatureSetDownlink_v1700_TimeDurationForQCL_v1710 {
    bool has_scs_480kHz; /**< scs-480kHz 是否存在。 */
    FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_480kHz scs_480kHz; /**< ASN.1 scs-480kHz；枚举；OPTIONAL。 */
    bool has_scs_960kHz; /**< scs-960kHz 是否存在。 */
    FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_960kHz scs_960kHz; /**< ASN.1 scs-960kHz；枚举；OPTIONAL。 */
};


/**
 * @brief PDCCH_RepetitionParameters_r17
 * @note ASN.1：PDCCH-RepetitionParameters-r17；源文件第 16425 行。
 * @note PDCCH-RepetitionParameters-r17 ::= SEQUENCE { supportedMode-r17, limitX-PerCC-r17, limitX-AcrossCC-r17 }
 */
struct PDCCH_RepetitionParameters_r17 {
    PDCCH_RepetitionParameters_r17_SupportedMode_r17 supportedMode_r17; /**< ASN.1 supportedMode-r17；枚举。 */
    bool has_limitX_PerCC_r17; /**< limitX-PerCC-r17 是否存在。 */
    PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17 limitX_PerCC_r17; /**< ASN.1 limitX-PerCC-r17；枚举；OPTIONAL。 */
    bool has_limitX_AcrossCC_r17; /**< limitX-AcrossCC-r17 是否存在。 */
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17 limitX_AcrossCC_r17; /**< ASN.1 limitX-AcrossCC-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17
 * @note ASN.1：mTRP-PDCCH-Case2-1SpanGap-r17；源文件第 16309 行。
 * @note SEQUENCE { scs-15kHz-r17, scs-30kHz-r17, scs-60kHz-r17, scs-120kHz-r17 }
 */
struct FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17 {
    bool has_scs_15kHz_r17; /**< scs-15kHz-r17 是否存在。 */
    PDCCH_RepetitionParameters_r17 scs_15kHz_r17; /**< ASN.1 scs-15kHz-r17；结构体；OPTIONAL。 */
    bool has_scs_30kHz_r17; /**< scs-30kHz-r17 是否存在。 */
    PDCCH_RepetitionParameters_r17 scs_30kHz_r17; /**< ASN.1 scs-30kHz-r17；结构体；OPTIONAL。 */
    bool has_scs_60kHz_r17; /**< scs-60kHz-r17 是否存在。 */
    PDCCH_RepetitionParameters_r17 scs_60kHz_r17; /**< ASN.1 scs-60kHz-r17；结构体；OPTIONAL。 */
    bool has_scs_120kHz_r17; /**< scs-120kHz-r17 是否存在。 */
    PDCCH_RepetitionParameters_r17 scs_120kHz_r17; /**< ASN.1 scs-120kHz-r17；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17
 * @note ASN.1：mTRP-PDCCH-legacyMonitoring-r17；源文件第 16316 行。
 * @note SEQUENCE { scs-15kHz-r17, scs-30kHz-r17 }
 */
struct FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17 {
    bool has_scs_15kHz_r17; /**< scs-15kHz-r17 是否存在。 */
    PDCCH_RepetitionParameters_r17 scs_15kHz_r17; /**< ASN.1 scs-15kHz-r17；结构体；OPTIONAL。 */
    bool has_scs_30kHz_r17; /**< scs-30kHz-r17 是否存在。 */
    PDCCH_RepetitionParameters_r17 scs_30kHz_r17; /**< ASN.1 scs-30kHz-r17；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17
 * @note ASN.1：mTRP-PDCCH-Repetition-r17；源文件第 16325 行。
 * @note SEQUENCE { numBD-twoPDCCH-r17, maxNumOverlaps-r17 }
 */
struct FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17 {
    int64_t numBD_twoPDCCH_r17; /**< ASN.1 numBD-twoPDCCH-r17；INTEGER (2..3)，位宽 1 bit。 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17 maxNumOverlaps_r17; /**< ASN.1 maxNumOverlaps-r17；枚举。 */
};


/**
 * @brief FeatureSetDownlink_v1700
 * @note ASN.1：FeatureSetDownlink-v1700；源文件第 16286 行。
 * @note FeatureSetDownlink-v1700 ::= SEQUENCE { scalingFactor-1024QAM-FR1-r17, timeDurationForQCL-v1710, sfn-Schem...
 */
struct FeatureSetDownlink_v1700 {
    bool has_scalingFactor_1024QAM_FR1_r17; /**< scalingFactor-1024QAM-FR1-r17 是否存在。 */
    FeatureSetDownlink_v1700_ScalingFactor_1024QAM_FR1_r17 scalingFactor_1024QAM_FR1_r17; /**< ASN.1 scalingFactor-1024QAM-FR1-r17；枚举；OPTIONAL。 */
    bool has_timeDurationForQCL_v1710; /**< timeDurationForQCL-v1710 是否存在。 */
    FeatureSetDownlink_v1700_TimeDurationForQCL_v1710 timeDurationForQCL_v1710; /**< ASN.1 timeDurationForQCL-v1710；结构体；OPTIONAL。 */
    bool has_sfn_SchemeA_r17; /**< sfn-SchemeA-r17 是否存在。 */
    FeatureSetDownlink_v1700_Sfn_SchemeA_r17 sfn_SchemeA_r17; /**< ASN.1 sfn-SchemeA-r17；枚举；OPTIONAL。 */
    bool has_sfn_SchemeA_PDCCH_only_r17; /**< sfn-SchemeA-PDCCH-only-r17 是否存在。 */
    FeatureSetDownlink_v1700_Sfn_SchemeA_PDCCH_only_r17 sfn_SchemeA_PDCCH_only_r17; /**< ASN.1 sfn-SchemeA-PDCCH-only-r17；枚举；OPTIONAL。 */
    bool has_sfn_SchemeA_DynamicSwitching_r17; /**< sfn-SchemeA-DynamicSwitching-r17 是否存在。 */
    FeatureSetDownlink_v1700_Sfn_SchemeA_DynamicSwitching_r17 sfn_SchemeA_DynamicSwitching_r17; /**< ASN.1 sfn-SchemeA-DynamicSwitching-r17；枚举；OPTIONAL。 */
    bool has_sfn_SchemeA_PDSCH_only_r17; /**< sfn-SchemeA-PDSCH-only-r17 是否存在。 */
    FeatureSetDownlink_v1700_Sfn_SchemeA_PDSCH_only_r17 sfn_SchemeA_PDSCH_only_r17; /**< ASN.1 sfn-SchemeA-PDSCH-only-r17；枚举；OPTIONAL。 */
    bool has_sfn_SchemeB_r17; /**< sfn-SchemeB-r17 是否存在。 */
    FeatureSetDownlink_v1700_Sfn_SchemeB_r17 sfn_SchemeB_r17; /**< ASN.1 sfn-SchemeB-r17；枚举；OPTIONAL。 */
    bool has_sfn_SchemeB_DynamicSwitching_r17; /**< sfn-SchemeB-DynamicSwitching-r17 是否存在。 */
    FeatureSetDownlink_v1700_Sfn_SchemeB_DynamicSwitching_r17 sfn_SchemeB_DynamicSwitching_r17; /**< ASN.1 sfn-SchemeB-DynamicSwitching-r17；枚举；OPTIONAL。 */
    bool has_sfn_SchemeB_PDSCH_only_r17; /**< sfn-SchemeB-PDSCH-only-r17 是否存在。 */
    FeatureSetDownlink_v1700_Sfn_SchemeB_PDSCH_only_r17 sfn_SchemeB_PDSCH_only_r17; /**< ASN.1 sfn-SchemeB-PDSCH-only-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PDCCH_Case2_1SpanGap_r17; /**< mTRP-PDCCH-Case2-1SpanGap-r17 是否存在。 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17 mTRP_PDCCH_Case2_1SpanGap_r17; /**< ASN.1 mTRP-PDCCH-Case2-1SpanGap-r17；结构体；OPTIONAL。 */
    bool has_mTRP_PDCCH_legacyMonitoring_r17; /**< mTRP-PDCCH-legacyMonitoring-r17 是否存在。 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17 mTRP_PDCCH_legacyMonitoring_r17; /**< ASN.1 mTRP-PDCCH-legacyMonitoring-r17；结构体；OPTIONAL。 */
    bool has_mTRP_PDCCH_multiDCI_multiTRP_r17; /**< mTRP-PDCCH-multiDCI-multiTRP-r17 是否存在。 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_multiDCI_multiTRP_r17 mTRP_PDCCH_multiDCI_multiTRP_r17; /**< ASN.1 mTRP-PDCCH-multiDCI-multiTRP-r17；枚举；OPTIONAL。 */
    bool has_dynamicMulticastPCell_r17; /**< dynamicMulticastPCell-r17 是否存在。 */
    FeatureSetDownlink_v1700_DynamicMulticastPCell_r17 dynamicMulticastPCell_r17; /**< ASN.1 dynamicMulticastPCell-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PDCCH_Repetition_r17; /**< mTRP-PDCCH-Repetition-r17 是否存在。 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17 mTRP_PDCCH_Repetition_r17; /**< ASN.1 mTRP-PDCCH-Repetition-r17；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17
 * @note ASN.1：rtt-BasedPDC-PRS-r17/maxNumberPRS-ResourceProcessedPerSlot-r17；源文件第 16337 行。
 * @note SEQUENCE { scs-15kHz-r17, scs-30kHz-r17, scs-60kHz-r17, scs-120kHz-r17 }
 */
struct FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17 {
    bool has_scs_15kHz_r17; /**< scs-15kHz-r17 是否存在。 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17 scs_15kHz_r17; /**< ASN.1 scs-15kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r17; /**< scs-30kHz-r17 是否存在。 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17 scs_30kHz_r17; /**< ASN.1 scs-30kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_60kHz_r17; /**< scs-60kHz-r17 是否存在。 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17 scs_60kHz_r17; /**< ASN.1 scs-60kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r17; /**< scs-120kHz-r17 是否存在。 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17 scs_120kHz_r17; /**< ASN.1 scs-120kHz-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17
 * @note ASN.1：rtt-BasedPDC-PRS-r17；源文件第 16335 行。
 * @note SEQUENCE { maxNumberPRS-Resource-r17, maxNumberPRS-ResourceProcessedPerSlot-r...
 */
struct FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17 {
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17 maxNumberPRS_Resource_r17; /**< ASN.1 maxNumberPRS-Resource-r17；枚举。 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17 maxNumberPRS_ResourceProcessedPerSlot_r17; /**< ASN.1 maxNumberPRS-ResourceProcessedPerSlot-r17；结构体。 */
};


/**
 * @brief FeatureSetDownlink_v1720
 * @note ASN.1：FeatureSetDownlink-v1720；源文件第 16331 行。
 * @note FeatureSetDownlink-v1720 ::= SEQUENCE { rtt-BasedPDC-CSI-RS-ForTracking-r17, rtt-BasedPDC-PRS-r17, sps-Mul...
 */
struct FeatureSetDownlink_v1720 {
    bool has_rtt_BasedPDC_CSI_RS_ForTracking_r17; /**< rtt-BasedPDC-CSI-RS-ForTracking-r17 是否存在。 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_CSI_RS_ForTracking_r17 rtt_BasedPDC_CSI_RS_ForTracking_r17; /**< ASN.1 rtt-BasedPDC-CSI-RS-ForTracking-r17；枚举；OPTIONAL。 */
    bool has_rtt_BasedPDC_PRS_r17; /**< rtt-BasedPDC-PRS-r17 是否存在。 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17 rtt_BasedPDC_PRS_r17; /**< ASN.1 rtt-BasedPDC-PRS-r17；结构体；OPTIONAL。 */
    bool has_sps_Multicast_r17; /**< sps-Multicast-r17 是否存在。 */
    FeatureSetDownlink_v1720_Sps_Multicast_r17 sps_Multicast_r17; /**< ASN.1 sps-Multicast-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1730
 * @note ASN.1：FeatureSetDownlink-v1730；源文件第 16348 行。
 * @note FeatureSetDownlink-v1730 ::= SEQUENCE { prs-AsSpatialRelationRS-For-SRS-r17 }
 */
struct FeatureSetDownlink_v1730 {
    bool has_prs_AsSpatialRelationRS_For_SRS_r17; /**< prs-AsSpatialRelationRS-For-SRS-r17 是否存在。 */
    FeatureSetDownlink_v1730_Prs_AsSpatialRelationRS_For_SRS_r17 prs_AsSpatialRelationRS_For_SRS_r17; /**< ASN.1 prs-AsSpatialRelationRS-For-SRS-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18
 * @note ASN.1：simulDMRS-PDSCH-r18；源文件第 16391 行。
 * @note SEQUENCE { scs-15kHz-r18, scs-30kHz-r18, scs-60kHz-r18 }
 */
struct FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18 {
    bool has_scs_15kHz_r18; /**< scs-15kHz-r18 是否存在。 */
    int64_t scs_15kHz_r18; /**< ASN.1 scs-15kHz-r18；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_scs_30kHz_r18; /**< scs-30kHz-r18 是否存在。 */
    int64_t scs_30kHz_r18; /**< ASN.1 scs-30kHz-r18；INTEGER (0..5)，位宽 3 bit；OPTIONAL。 */
    bool has_scs_60kHz_r18; /**< scs-60kHz-r18 是否存在。 */
    int64_t scs_60kHz_r18; /**< ASN.1 scs-60kHz-r18；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18
 * @note ASN.1：pdcch-MonitoringSpan2-2-r18/pdsch-ProcessingType1-r18；源文件第 16402 行。
 * @note SEQUENCE { scs-15kHz-r18, scs-30kHz-r18 }
 */
struct FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18 {
    bool has_scs_15kHz_r18; /**< scs-15kHz-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_15kHz_r18 scs_15kHz_r18; /**< ASN.1 scs-15kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r18; /**< scs-30kHz-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_30kHz_r18 scs_30kHz_r18; /**< ASN.1 scs-30kHz-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18
 * @note ASN.1：pdcch-MonitoringSpan2-2-r18/pdsch-ProcessingType2-r18；源文件第 16406 行。
 * @note SEQUENCE { scs-15kHz-r18, scs-30kHz-r18 }
 */
struct FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18 {
    bool has_scs_15kHz_r18; /**< scs-15kHz-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_15kHz_r18 scs_15kHz_r18; /**< ASN.1 scs-15kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r18; /**< scs-30kHz-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_30kHz_r18 scs_30kHz_r18; /**< ASN.1 scs-30kHz-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18
 * @note ASN.1：pdcch-MonitoringSpan2-2-r18；源文件第 16401 行。
 * @note SEQUENCE { pdsch-ProcessingType1-r18, pdsch-ProcessingType2-r18 }
 */
struct FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18 {
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18 pdsch_ProcessingType1_r18; /**< ASN.1 pdsch-ProcessingType1-r18；结构体。 */
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18 pdsch_ProcessingType2_r18; /**< ASN.1 pdsch-ProcessingType2-r18；结构体。 */
};


/**
 * @brief FeatureSetDownlink_v1800
 * @note ASN.1：FeatureSetDownlink-v1800；源文件第 16353 行。
 * @note FeatureSetDownlink-v1800 ::= SEQUENCE { pdsch-TypeA-DMRS-r18, pdsch-TypeB-DMRS-r18, pdsch-1SymbolFL-DMRS-A...
 */
struct FeatureSetDownlink_v1800 {
    bool has_pdsch_TypeA_DMRS_r18; /**< pdsch-TypeA-DMRS-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_TypeA_DMRS_r18 pdsch_TypeA_DMRS_r18; /**< ASN.1 pdsch-TypeA-DMRS-r18；枚举；OPTIONAL。 */
    bool has_pdsch_TypeB_DMRS_r18; /**< pdsch-TypeB-DMRS-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_TypeB_DMRS_r18 pdsch_TypeB_DMRS_r18; /**< ASN.1 pdsch-TypeB-DMRS-r18；枚举；OPTIONAL。 */
    bool has_pdsch_1SymbolFL_DMRS_Addition2Symbol_r18; /**< pdsch-1SymbolFL-DMRS-Addition2Symbol-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition2Symbol_r18 pdsch_1SymbolFL_DMRS_Addition2Symbol_r18; /**< ASN.1 pdsch-1SymbolFL-DMRS-Addition2Symbol-r18；枚举；OPTIONAL。 */
    bool has_pdsch_AlternativeDMRS_Coexistence_r18; /**< pdsch-AlternativeDMRS-Coexistence-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_AlternativeDMRS_Coexistence_r18 pdsch_AlternativeDMRS_Coexistence_r18; /**< ASN.1 pdsch-AlternativeDMRS-Coexistence-r18；枚举；OPTIONAL。 */
    bool has_pdsch_2SymbolFL_DMRS_r18; /**< pdsch-2SymbolFL-DMRS-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_r18 pdsch_2SymbolFL_DMRS_r18; /**< ASN.1 pdsch-2SymbolFL-DMRS-r18；枚举；OPTIONAL。 */
    bool has_pdsch_2SymbolFL_DMRS_Addition2Symbol_r18; /**< pdsch-2SymbolFL-DMRS-Addition2Symbol-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_Addition2Symbol_r18 pdsch_2SymbolFL_DMRS_Addition2Symbol_r18; /**< ASN.1 pdsch-2SymbolFL-DMRS-Addition2Symbol-r18；枚举；OPTIONAL。 */
    bool has_pdsch_1SymbolFL_DMRS_Addition3Symbol_r18; /**< pdsch-1SymbolFL-DMRS-Addition3Symbol-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition3Symbol_r18 pdsch_1SymbolFL_DMRS_Addition3Symbol_r18; /**< ASN.1 pdsch-1SymbolFL-DMRS-Addition3Symbol-r18；枚举；OPTIONAL。 */
    bool has_pdsch_DMRS_Type_r18; /**< pdsch-DMRS-Type-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_DMRS_Type_r18 pdsch_DMRS_Type_r18; /**< ASN.1 pdsch-DMRS-Type-r18；枚举；OPTIONAL。 */
    bool has_pdsch_1PortDL_PTRS_r18; /**< pdsch-1PortDL-PTRS-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_1PortDL_PTRS_r18 pdsch_1PortDL_PTRS_r18; /**< ASN.1 pdsch-1PortDL-PTRS-r18；枚举；OPTIONAL。 */
    bool has_pdsch_2PortDL_PTRS_r18; /**< pdsch-2PortDL-PTRS-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_2PortDL_PTRS_r18 pdsch_2PortDL_PTRS_r18; /**< ASN.1 pdsch-2PortDL-PTRS-r18；枚举；OPTIONAL。 */
    bool has_mappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18; /**< mappingTypeA-1SymbolFL-DMRS-Addition2Symbol-r18 是否存在。 */
    FeatureSetDownlink_v1800_MappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18 mappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18; /**< ASN.1 mappingTypeA-1SymbolFL-DMRS-Addition2Symbol-r18；枚举；OPTIONAL。 */
    bool has_pdsch_ReceptionWithoutSchedulingRestriction_r18; /**< pdsch-ReceptionWithoutSchedulingRestriction-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_ReceptionWithoutSchedulingRestriction_r18 pdsch_ReceptionWithoutSchedulingRestriction_r18; /**< ASN.1 pdsch-ReceptionWithoutSchedulingRestriction-r18；枚举；OPTIONAL。 */
    bool has_pdsch_ReceptionSchemeA_r18; /**< pdsch-ReceptionSchemeA-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeA_r18 pdsch_ReceptionSchemeA_r18; /**< ASN.1 pdsch-ReceptionSchemeA-r18；枚举；OPTIONAL。 */
    bool has_pdsch_ReceptionSchemeB_r18; /**< pdsch-ReceptionSchemeB-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeB_r18 pdsch_ReceptionSchemeB_r18; /**< ASN.1 pdsch-ReceptionSchemeB-r18；枚举；OPTIONAL。 */
    bool has_dmrs_MultiTRP_SingleDCI_r18; /**< dmrs-MultiTRP-SingleDCI-r18 是否存在。 */
    FeatureSetDownlink_v1800_Dmrs_MultiTRP_SingleDCI_r18 dmrs_MultiTRP_SingleDCI_r18; /**< ASN.1 dmrs-MultiTRP-SingleDCI-r18；枚举；OPTIONAL。 */
    bool has_dmrs_MultiTRP_AddtionRows_r18; /**< dmrs-MultiTRP-AddtionRows-r18 是否存在。 */
    FeatureSetDownlink_v1800_Dmrs_MultiTRP_AddtionRows_r18 dmrs_MultiTRP_AddtionRows_r18; /**< ASN.1 dmrs-MultiTRP-AddtionRows-r18；枚举；OPTIONAL。 */
    bool has_dmrs_MultiTRP_MultiDCI_r18; /**< dmrs-MultiTRP-MultiDCI-r18 是否存在。 */
    FeatureSetDownlink_v1800_Dmrs_MultiTRP_MultiDCI_r18 dmrs_MultiTRP_MultiDCI_r18; /**< ASN.1 dmrs-MultiTRP-MultiDCI-r18；枚举；OPTIONAL。 */
    bool has_simulDMRS_PDSCH_r18; /**< simulDMRS-PDSCH-r18 是否存在。 */
    FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18 simulDMRS_PDSCH_r18; /**< ASN.1 simulDMRS-PDSCH-r18；结构体；OPTIONAL。 */
    bool has_bwpOperationMeasWithoutInterrupt_r18; /**< bwpOperationMeasWithoutInterrupt-r18 是否存在。 */
    FeatureSetDownlink_v1800_BwpOperationMeasWithoutInterrupt_r18 bwpOperationMeasWithoutInterrupt_r18; /**< ASN.1 bwpOperationMeasWithoutInterrupt-r18；枚举；OPTIONAL。 */
    bool has_pdcch_MonitoringSpan2_2_r18; /**< pdcch-MonitoringSpan2-2-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18 pdcch_MonitoringSpan2_2_r18; /**< ASN.1 pdcch-MonitoringSpan2-2-r18；结构体；OPTIONAL。 */
    bool has_pdcch_MonitoringMixed_r18; /**< pdcch-MonitoringMixed-r18 是否存在。 */
    FeatureSetDownlink_v1800_Pdcch_MonitoringMixed_r18 pdcch_MonitoringMixed_r18; /**< ASN.1 pdcch-MonitoringMixed-r18；枚举；OPTIONAL。 */
    bool has_scellWithoutSSB_InterBandCA_r18; /**< scellWithoutSSB-InterBandCA-r18 是否存在。 */
    FeatureSetDownlink_v1800_ScellWithoutSSB_InterBandCA_r18 scellWithoutSSB_InterBandCA_r18; /**< ASN.1 scellWithoutSSB-InterBandCA-r18；枚举；OPTIONAL。 */
    bool has_multicastInactive_r18; /**< multicastInactive-r18 是否存在。 */
    FeatureSetDownlink_v1800_MulticastInactive_r18 multicastInactive_r18; /**< ASN.1 multicastInactive-r18；枚举；OPTIONAL。 */
    bool has_thresholdBasedMulticastResume_r18; /**< thresholdBasedMulticastResume-r18 是否存在。 */
    FeatureSetDownlink_v1800_ThresholdBasedMulticastResume_r18 thresholdBasedMulticastResume_r18; /**< ASN.1 thresholdBasedMulticastResume-r18；枚举；OPTIONAL。 */
};


/**
 * @brief DummyB
 * @note ASN.1：DummyB；源文件第 16445 行。
 * @note DummyB ::= SEQUENCE { maxNumberTxPortsPerResource, maxNumberResources, totalNumberTxPort...
 */
struct DummyB {
    DummyB_MaxNumberTxPortsPerResource maxNumberTxPortsPerResource; /**< ASN.1 maxNumberTxPortsPerResource；枚举。 */
    int64_t maxNumberResources; /**< ASN.1 maxNumberResources；INTEGER (1..64)，位宽 6 bit。 */
    int64_t totalNumberTxPorts; /**< ASN.1 totalNumberTxPorts；INTEGER (2..256)，位宽 8 bit。 */
    DummyB_SupportedCodebookMode supportedCodebookMode; /**< ASN.1 supportedCodebookMode；枚举。 */
    int64_t maxNumberCSI_RS_PerResourceSet; /**< ASN.1 maxNumberCSI-RS-PerResourceSet；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief DummyC
 * @note ASN.1：DummyC；源文件第 16453 行。
 * @note DummyC ::= SEQUENCE { maxNumberTxPortsPerResource, maxNumberResources, totalNumberTxPort...
 */
struct DummyC {
    DummyC_MaxNumberTxPortsPerResource maxNumberTxPortsPerResource; /**< ASN.1 maxNumberTxPortsPerResource；枚举。 */
    int64_t maxNumberResources; /**< ASN.1 maxNumberResources；INTEGER (1..64)，位宽 6 bit。 */
    int64_t totalNumberTxPorts; /**< ASN.1 totalNumberTxPorts；INTEGER (2..256)，位宽 8 bit。 */
    DummyC_SupportedCodebookMode supportedCodebookMode; /**< ASN.1 supportedCodebookMode；枚举。 */
    DummyC_SupportedNumberPanels supportedNumberPanels; /**< ASN.1 supportedNumberPanels；枚举。 */
    int64_t maxNumberCSI_RS_PerResourceSet; /**< ASN.1 maxNumberCSI-RS-PerResourceSet；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief DummyD
 * @note ASN.1：DummyD；源文件第 16462 行。
 * @note DummyD ::= SEQUENCE { maxNumberTxPortsPerResource, maxNumberResources, totalNumberTxPort...
 */
struct DummyD {
    DummyD_MaxNumberTxPortsPerResource maxNumberTxPortsPerResource; /**< ASN.1 maxNumberTxPortsPerResource；枚举。 */
    int64_t maxNumberResources; /**< ASN.1 maxNumberResources；INTEGER (1..64)，位宽 6 bit。 */
    int64_t totalNumberTxPorts; /**< ASN.1 totalNumberTxPorts；INTEGER (2..256)，位宽 8 bit。 */
    int64_t parameterLx; /**< ASN.1 parameterLx；INTEGER (2..4)，位宽 2 bit。 */
    DummyD_AmplitudeScalingType amplitudeScalingType; /**< ASN.1 amplitudeScalingType；枚举。 */
    bool has_amplitudeSubsetRestriction; /**< amplitudeSubsetRestriction 是否存在。 */
    DummyD_AmplitudeSubsetRestriction amplitudeSubsetRestriction; /**< ASN.1 amplitudeSubsetRestriction；枚举；OPTIONAL。 */
    int64_t maxNumberCSI_RS_PerResourceSet; /**< ASN.1 maxNumberCSI-RS-PerResourceSet；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief DummyE
 * @note ASN.1：DummyE；源文件第 16472 行。
 * @note DummyE ::= SEQUENCE { maxNumberTxPortsPerResource, maxNumberResources, totalNumberTxPort...
 */
struct DummyE {
    DummyE_MaxNumberTxPortsPerResource maxNumberTxPortsPerResource; /**< ASN.1 maxNumberTxPortsPerResource；枚举。 */
    int64_t maxNumberResources; /**< ASN.1 maxNumberResources；INTEGER (1..64)，位宽 6 bit。 */
    int64_t totalNumberTxPorts; /**< ASN.1 totalNumberTxPorts；INTEGER (2..256)，位宽 8 bit。 */
    int64_t parameterLx; /**< ASN.1 parameterLx；INTEGER (2..4)，位宽 2 bit。 */
    DummyE_AmplitudeScalingType amplitudeScalingType; /**< ASN.1 amplitudeScalingType；枚举。 */
    int64_t maxNumberCSI_RS_PerResourceSet; /**< ASN.1 maxNumberCSI-RS-PerResourceSet；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief FeatureSetDownlinkPerCC
 * @note ASN.1：FeatureSetDownlinkPerCC；源文件第 16489 行。
 * @note FeatureSetDownlinkPerCC ::= SEQUENCE { supportedSubcarrierSpacingDL, supportedBandwidthDL, channelBW-90mh...
 */
struct FeatureSetDownlinkPerCC {
    SubcarrierSpacing supportedSubcarrierSpacingDL; /**< ASN.1 supportedSubcarrierSpacingDL；枚举。 */
    SupportedBandwidth supportedBandwidthDL; /**< ASN.1 supportedBandwidthDL；结构体。 */
    bool has_channelBW_90mhz; /**< channelBW-90mhz 是否存在。 */
    FeatureSetDownlinkPerCC_ChannelBW_90mhz channelBW_90mhz; /**< ASN.1 channelBW-90mhz；枚举；OPTIONAL。 */
    bool has_maxNumberMIMO_LayersPDSCH; /**< maxNumberMIMO-LayersPDSCH 是否存在。 */
    MIMO_LayersDL maxNumberMIMO_LayersPDSCH; /**< ASN.1 maxNumberMIMO-LayersPDSCH；枚举；OPTIONAL。 */
    bool has_supportedModulationOrderDL; /**< supportedModulationOrderDL 是否存在。 */
    ModulationOrder supportedModulationOrderDL; /**< ASN.1 supportedModulationOrderDL；枚举；OPTIONAL。 */
};


/**
 * @brief MultiDCI_MultiTRP_r16
 * @note ASN.1：MultiDCI-MultiTRP-r16；源文件第 16556 行。
 * @note MultiDCI-MultiTRP-r16 ::= SEQUENCE { maxNumberCORESET-r16, maxNumberCORESETPerPoolIndex-r16, maxNumberU...
 */
struct MultiDCI_MultiTRP_r16 {
    MultiDCI_MultiTRP_r16_MaxNumberCORESET_r16 maxNumberCORESET_r16; /**< ASN.1 maxNumberCORESET-r16；枚举。 */
    int64_t maxNumberCORESETPerPoolIndex_r16; /**< ASN.1 maxNumberCORESETPerPoolIndex-r16；INTEGER (1..3)，位宽 2 bit。 */
    MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16 maxNumberUnicastPDSCH_PerPool_r16; /**< ASN.1 maxNumberUnicastPDSCH-PerPool-r16；枚举。 */
};


/**
 * @brief FeatureSetDownlinkPerCC_v1620
 * @note ASN.1：FeatureSetDownlinkPerCC-v1620；源文件第 16497 行。
 * @note FeatureSetDownlinkPerCC-v1620 ::= SEQUENCE { multiDCI-MultiTRP-r16, supportFDM-SchemeB-r16 }
 */
struct FeatureSetDownlinkPerCC_v1620 {
    bool has_multiDCI_MultiTRP_r16; /**< multiDCI-MultiTRP-r16 是否存在。 */
    MultiDCI_MultiTRP_r16 multiDCI_MultiTRP_r16; /**< ASN.1 multiDCI-MultiTRP-r16；结构体；OPTIONAL。 */
    bool has_supportFDM_SchemeB_r16; /**< supportFDM-SchemeB-r16 是否存在。 */
    FeatureSetDownlinkPerCC_v1620_SupportFDM_SchemeB_r16 supportFDM_SchemeB_r16; /**< ASN.1 supportFDM-SchemeB-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CRS_InterfMitigation_r17
 * @note ASN.1：CRS-InterfMitigation-r17；源文件第 16562 行。
 * @note CRS-InterfMitigation-r17 ::= SEQUENCE { crs-IM-DSS-15kHzSCS-r17, crs-IM-nonDSS-15kHzSCS-r17, crs-IM-nonDSS...
 */
struct CRS_InterfMitigation_r17 {
    bool has_crs_IM_DSS_15kHzSCS_r17; /**< crs-IM-DSS-15kHzSCS-r17 是否存在。 */
    CRS_InterfMitigation_r17_Crs_IM_DSS_15kHzSCS_r17 crs_IM_DSS_15kHzSCS_r17; /**< ASN.1 crs-IM-DSS-15kHzSCS-r17；枚举；OPTIONAL。 */
    bool has_crs_IM_nonDSS_15kHzSCS_r17; /**< crs-IM-nonDSS-15kHzSCS-r17 是否存在。 */
    CRS_InterfMitigation_r17_Crs_IM_nonDSS_15kHzSCS_r17 crs_IM_nonDSS_15kHzSCS_r17; /**< ASN.1 crs-IM-nonDSS-15kHzSCS-r17；枚举；OPTIONAL。 */
    bool has_crs_IM_nonDSS_NWA_15kHzSCS_r17; /**< crs-IM-nonDSS-NWA-15kHzSCS-r17 是否存在。 */
    CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_15kHzSCS_r17 crs_IM_nonDSS_NWA_15kHzSCS_r17; /**< ASN.1 crs-IM-nonDSS-NWA-15kHzSCS-r17；枚举；OPTIONAL。 */
    bool has_crs_IM_nonDSS_30kHzSCS_r17; /**< crs-IM-nonDSS-30kHzSCS-r17 是否存在。 */
    CRS_InterfMitigation_r17_Crs_IM_nonDSS_30kHzSCS_r17 crs_IM_nonDSS_30kHzSCS_r17; /**< ASN.1 crs-IM-nonDSS-30kHzSCS-r17；枚举；OPTIONAL。 */
    bool has_crs_IM_nonDSS_NWA_30kHzSCS_r17; /**< crs-IM-nonDSS-NWA-30kHzSCS-r17 是否存在。 */
    CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_30kHzSCS_r17 crs_IM_nonDSS_NWA_30kHzSCS_r17; /**< ASN.1 crs-IM-nonDSS-NWA-30kHzSCS-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SupportedBandwidth_v1700
 * @note ASN.1：SupportedBandwidth-v1700；源文件第 20797 行。
 * @note SupportedBandwidth-v1700 ::= CHOICE { fr1-r17, fr2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SupportedBandwidth_v1700_Tag {
    SupportedBandwidth_v1700_Tag_fr1_r17 = 0, /**< ASN.1 fr1-r17 */
    SupportedBandwidth_v1700_Tag_fr2_r17 = 1, /**< ASN.1 fr2-r17 */
} SupportedBandwidth_v1700_Tag;

struct SupportedBandwidth_v1700 {
    SupportedBandwidth_v1700_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SupportedBandwidth_v1700_Fr1_r17 fr1_r17; /**< ASN.1 fr1-r17 */
        SupportedBandwidth_v1700_Fr2_r17 fr2_r17; /**< ASN.1 fr2-r17 */
    } u;
};


/**
 * @brief FeatureSetDownlinkPerCC_v1700
 * @note ASN.1：FeatureSetDownlinkPerCC-v1700；源文件第 16504 行。
 * @note FeatureSetDownlinkPerCC-v1700 ::= SEQUENCE { supportedMinBandwidthDL-r17, broadcastSCell-r17, maxNumberMIMO-Lay...
 */
struct FeatureSetDownlinkPerCC_v1700 {
    bool has_supportedMinBandwidthDL_r17; /**< supportedMinBandwidthDL-r17 是否存在。 */
    SupportedBandwidth_v1700 supportedMinBandwidthDL_r17; /**< ASN.1 supportedMinBandwidthDL-r17；结构体；OPTIONAL。 */
    bool has_broadcastSCell_r17; /**< broadcastSCell-r17 是否存在。 */
    FeatureSetDownlinkPerCC_v1700_BroadcastSCell_r17 broadcastSCell_r17; /**< ASN.1 broadcastSCell-r17；枚举；OPTIONAL。 */
    bool has_maxNumberMIMO_LayersMulticastPDSCH_r17; /**< maxNumberMIMO-LayersMulticastPDSCH-r17 是否存在。 */
    FeatureSetDownlinkPerCC_v1700_MaxNumberMIMO_LayersMulticastPDSCH_r17 maxNumberMIMO_LayersMulticastPDSCH_r17; /**< ASN.1 maxNumberMIMO-LayersMulticastPDSCH-r17；枚举；OPTIONAL。 */
    bool has_dynamicMulticastSCell_r17; /**< dynamicMulticastSCell-r17 是否存在。 */
    FeatureSetDownlinkPerCC_v1700_DynamicMulticastSCell_r17 dynamicMulticastSCell_r17; /**< ASN.1 dynamicMulticastSCell-r17；枚举；OPTIONAL。 */
    bool has_supportedBandwidthDL_v1710; /**< supportedBandwidthDL-v1710 是否存在。 */
    SupportedBandwidth_v1700 supportedBandwidthDL_v1710; /**< ASN.1 supportedBandwidthDL-v1710；结构体；OPTIONAL。 */
    bool has_supportedCRS_InterfMitigation_r17; /**< supportedCRS-InterfMitigation-r17 是否存在。 */
    CRS_InterfMitigation_r17 supportedCRS_InterfMitigation_r17; /**< ASN.1 supportedCRS-InterfMitigation-r17；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlinkPerCC_v1720
 * @note ASN.1：FeatureSetDownlinkPerCC-v1720；源文件第 16516 行。
 * @note FeatureSetDownlinkPerCC-v1720 ::= SEQUENCE { maxModulationOrderForMulticastDataRateCalculation-r17, fdm-Broadca...
 */
struct FeatureSetDownlinkPerCC_v1720 {
    bool has_maxModulationOrderForMulticastDataRateCalculation_r17; /**< maxModulationOrderForMulticastDataRateCalculation-r17 是否存在。 */
    FeatureSetDownlinkPerCC_v1720_MaxModulationOrderForMulticastDataRateCalculation_r17 maxModulationOrderForMulticastDataRateCalculation_r17; /**< ASN.1 maxModulationOrderForMulticastDataRateCalculation-r17；枚举；OPTIONAL。 */
    bool has_fdm_BroadcastUnicast_r17; /**< fdm-BroadcastUnicast-r17 是否存在。 */
    FeatureSetDownlinkPerCC_v1720_Fdm_BroadcastUnicast_r17 fdm_BroadcastUnicast_r17; /**< ASN.1 fdm-BroadcastUnicast-r17；枚举；OPTIONAL。 */
    bool has_fdm_MulticastUnicast_r17; /**< fdm-MulticastUnicast-r17 是否存在。 */
    FeatureSetDownlinkPerCC_v1720_Fdm_MulticastUnicast_r17 fdm_MulticastUnicast_r17; /**< ASN.1 fdm-MulticastUnicast-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlinkPerCC_v1730
 * @note ASN.1：FeatureSetDownlinkPerCC-v1730；源文件第 16525 行。
 * @note FeatureSetDownlinkPerCC-v1730 ::= SEQUENCE { intraSlotTDM-UnicastGroupCommonPDSCH-r17, sps-MulticastSCell-r17, ...
 */
struct FeatureSetDownlinkPerCC_v1730 {
    bool has_intraSlotTDM_UnicastGroupCommonPDSCH_r17; /**< intraSlotTDM-UnicastGroupCommonPDSCH-r17 是否存在。 */
    FeatureSetDownlinkPerCC_v1730_IntraSlotTDM_UnicastGroupCommonPDSCH_r17 intraSlotTDM_UnicastGroupCommonPDSCH_r17; /**< ASN.1 intraSlotTDM-UnicastGroupCommonPDSCH-r17；枚举；OPTIONAL。 */
    bool has_sps_MulticastSCell_r17; /**< sps-MulticastSCell-r17 是否存在。 */
    FeatureSetDownlinkPerCC_v1730_Sps_MulticastSCell_r17 sps_MulticastSCell_r17; /**< ASN.1 sps-MulticastSCell-r17；枚举；OPTIONAL。 */
    bool has_sps_MulticastSCellMultiConfig_r17; /**< sps-MulticastSCellMultiConfig-r17 是否存在。 */
    int64_t sps_MulticastSCellMultiConfig_r17; /**< ASN.1 sps-MulticastSCellMultiConfig-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_dci_BroadcastWith16Repetitions_r17; /**< dci-BroadcastWith16Repetitions-r17 是否存在。 */
    FeatureSetDownlinkPerCC_v1730_Dci_BroadcastWith16Repetitions_r17 dci_BroadcastWith16Repetitions_r17; /**< ASN.1 dci-BroadcastWith16Repetitions-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlinkPerCC_v1780
 * @note ASN.1：FeatureSetDownlinkPerCC-v1780；源文件第 16536 行。
 * @note FeatureSetDownlinkPerCC-v1780 ::= SEQUENCE { supportedBandwidthDL-v1780 }
 */
struct FeatureSetDownlinkPerCC_v1780 {
    bool has_supportedBandwidthDL_v1780; /**< supportedBandwidthDL-v1780 是否存在。 */
    SupportedBandwidth_v1700 supportedBandwidthDL_v1780; /**< ASN.1 supportedBandwidthDL-v1780；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetDownlinkPerCC_v1800
 * @note ASN.1：FeatureSetDownlinkPerCC-v1800；源文件第 16540 行。
 * @note FeatureSetDownlinkPerCC-v1800 ::= SEQUENCE { multiDCI-IntraCellMultiTRP-TwoTA-r18, multiDCI-InterCellMultiTRP-T...
 */
struct FeatureSetDownlinkPerCC_v1800 {
    bool has_multiDCI_IntraCellMultiTRP_TwoTA_r18; /**< multiDCI-IntraCellMultiTRP-TwoTA-r18 是否存在。 */
    FeatureSetDownlinkPerCC_v1800_MultiDCI_IntraCellMultiTRP_TwoTA_r18 multiDCI_IntraCellMultiTRP_TwoTA_r18; /**< ASN.1 multiDCI-IntraCellMultiTRP-TwoTA-r18；枚举；OPTIONAL。 */
    bool has_multiDCI_InterCellMultiTRP_TwoTA_r18; /**< multiDCI-InterCellMultiTRP-TwoTA-r18 是否存在。 */
    int64_t multiDCI_InterCellMultiTRP_TwoTA_r18; /**< ASN.1 multiDCI-InterCellMultiTRP-TwoTA-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_rxTimingDiff_r18; /**< rxTimingDiff-r18 是否存在。 */
    FeatureSetDownlinkPerCC_v1800_RxTimingDiff_r18 rxTimingDiff_r18; /**< ASN.1 rxTimingDiff-r18；枚举；OPTIONAL。 */
    bool has_multiDCI_MultiTRP_CORESET_Monitoring_r18; /**< multiDCI-MultiTRP-CORESET-Monitoring-r18 是否存在。 */
    FeatureSetDownlinkPerCC_v1800_MultiDCI_MultiTRP_CORESET_Monitoring_r18 multiDCI_MultiTRP_CORESET_Monitoring_r18; /**< ASN.1 multiDCI-MultiTRP-CORESET-Monitoring-r18；枚举；OPTIONAL。 */
    bool has_broadcastNonServingCell_r18; /**< broadcastNonServingCell-r18 是否存在。 */
    FeatureSetDownlinkPerCC_v1800_BroadcastNonServingCell_r18 broadcastNonServingCell_r18; /**< ASN.1 broadcastNonServingCell-r18；枚举；OPTIONAL。 */
    bool has_schedulingMeasurementRelaxation_r18; /**< schedulingMeasurementRelaxation-r18 是否存在。 */
    FeatureSetDownlinkPerCC_v1800_SchedulingMeasurementRelaxation_r18 schedulingMeasurementRelaxation_r18; /**< ASN.1 schedulingMeasurementRelaxation-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSets_ExtGroup8
 * @note ASN.1：FeatureSets_ExtGroup8；源文件第 16629 行。
 */
struct FeatureSets_ExtGroup8 {
    bool has_featureSetsDownlink_v1730; /**< featureSetsDownlink-v1730 是否存在。 */
    FeatureSetDownlink_v1730* featureSetsDownlink_v1730_items; /**< ASN.1 featureSetsDownlink-v1730；SEQUENCE OF FeatureSetDownlink_v1730，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlink_v1730_count; /**< featureSetsDownlink-v1730 元素个数。 */
    bool has_featureSetsDownlinkPerCC_v1730; /**< featureSetsDownlinkPerCC-v1730 是否存在。 */
    FeatureSetDownlinkPerCC_v1730* featureSetsDownlinkPerCC_v1730_items; /**< ASN.1 featureSetsDownlinkPerCC-v1730；SEQUENCE OF FeatureSetDownlinkPerCC_v1730，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlinkPerCC_v1730_count; /**< featureSetsDownlinkPerCC-v1730 元素个数。 */
};


/**
 * @brief FeatureSets_ExtGroup9
 * @note ASN.1：FeatureSets_ExtGroup9；源文件第 16633 行。
 */
struct FeatureSets_ExtGroup9 {
    bool has_featureSetsDownlinkPerCC_v1780; /**< featureSetsDownlinkPerCC-v1780 是否存在。 */
    FeatureSetDownlinkPerCC_v1780* featureSetsDownlinkPerCC_v1780_items; /**< ASN.1 featureSetsDownlinkPerCC-v1780；SEQUENCE OF FeatureSetDownlinkPerCC_v1780，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlinkPerCC_v1780_count; /**< featureSetsDownlinkPerCC-v1780 元素个数。 */
    bool has_featureSetsUplinkPerCC_v1780; /**< featureSetsUplinkPerCC-v1780 是否存在。 */
    FeatureSetUplinkPerCC_v1780* featureSetsUplinkPerCC_v1780_items; /**< ASN.1 featureSetsUplinkPerCC-v1780；SEQUENCE OF FeatureSetUplinkPerCC_v1780，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplinkPerCC_v1780_count; /**< featureSetsUplinkPerCC-v1780 元素个数。 */
};


/**
 * @brief FeatureSets_ExtGroup10
 * @note ASN.1：FeatureSets_ExtGroup10；源文件第 16637 行。
 */
struct FeatureSets_ExtGroup10 {
    bool has_featureSetsDownlink_v1800; /**< featureSetsDownlink-v1800 是否存在。 */
    FeatureSetDownlink_v1800* featureSetsDownlink_v1800_items; /**< ASN.1 featureSetsDownlink-v1800；SEQUENCE OF FeatureSetDownlink_v1800，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlink_v1800_count; /**< featureSetsDownlink-v1800 元素个数。 */
    bool has_featureSetsDownlinkPerCC_v1800; /**< featureSetsDownlinkPerCC-v1800 是否存在。 */
    FeatureSetDownlinkPerCC_v1800* featureSetsDownlinkPerCC_v1800_items; /**< ASN.1 featureSetsDownlinkPerCC-v1800；SEQUENCE OF FeatureSetDownlinkPerCC_v1800，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlinkPerCC_v1800_count; /**< featureSetsDownlinkPerCC-v1800 元素个数。 */
    bool has_featureSetsUplink_v1800; /**< featureSetsUplink-v1800 是否存在。 */
    FeatureSetUplink_v1800* featureSetsUplink_v1800_items; /**< ASN.1 featureSetsUplink-v1800；SEQUENCE OF FeatureSetUplink_v1800，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplink_v1800_count; /**< featureSetsUplink-v1800 元素个数。 */
    bool has_featureSetsUplinkPerCC_v1800; /**< featureSetsUplinkPerCC-v1800 是否存在。 */
    FeatureSetUplinkPerCC_v1800* featureSetsUplinkPerCC_v1800_items; /**< ASN.1 featureSetsUplinkPerCC-v1800；SEQUENCE OF FeatureSetUplinkPerCC_v1800，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplinkPerCC_v1800_count; /**< featureSetsUplinkPerCC-v1800 元素个数。 */
};


/**
 * @brief FeatureSets_ExtGroup1
 * @note ASN.1：FeatureSets_ExtGroup1；源文件第 16599 行。
 */
struct FeatureSets_ExtGroup1 {
    bool has_featureSetsDownlink_v1540; /**< featureSetsDownlink-v1540 是否存在。 */
    FeatureSetDownlink_v1540* featureSetsDownlink_v1540_items; /**< ASN.1 featureSetsDownlink-v1540；SEQUENCE OF FeatureSetDownlink_v1540，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlink_v1540_count; /**< featureSetsDownlink-v1540 元素个数。 */
    bool has_featureSetsUplink_v1540; /**< featureSetsUplink-v1540 是否存在。 */
    FeatureSetUplink_v1540* featureSetsUplink_v1540_items; /**< ASN.1 featureSetsUplink-v1540；SEQUENCE OF FeatureSetUplink_v1540，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplink_v1540_count; /**< featureSetsUplink-v1540 元素个数。 */
    bool has_featureSetsUplinkPerCC_v1540; /**< featureSetsUplinkPerCC-v1540 是否存在。 */
    FeatureSetUplinkPerCC_v1540* featureSetsUplinkPerCC_v1540_items; /**< ASN.1 featureSetsUplinkPerCC-v1540；SEQUENCE OF FeatureSetUplinkPerCC_v1540，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplinkPerCC_v1540_count; /**< featureSetsUplinkPerCC-v1540 元素个数。 */
};


/**
 * @brief FeatureSets_ExtGroup2
 * @note ASN.1：FeatureSets_ExtGroup2；源文件第 16604 行。
 */
struct FeatureSets_ExtGroup2 {
    bool has_featureSetsDownlink_v15a0; /**< featureSetsDownlink-v15a0 是否存在。 */
    FeatureSetDownlink_v15a0* featureSetsDownlink_v15a0_items; /**< ASN.1 featureSetsDownlink-v15a0；SEQUENCE OF FeatureSetDownlink_v15a0，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlink_v15a0_count; /**< featureSetsDownlink-v15a0 元素个数。 */
};


/**
 * @brief FeatureSets_ExtGroup3
 * @note ASN.1：FeatureSets_ExtGroup3；源文件第 16607 行。
 */
struct FeatureSets_ExtGroup3 {
    bool has_featureSetsDownlink_v1610; /**< featureSetsDownlink-v1610 是否存在。 */
    FeatureSetDownlink_v1610* featureSetsDownlink_v1610_items; /**< ASN.1 featureSetsDownlink-v1610；SEQUENCE OF FeatureSetDownlink_v1610，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlink_v1610_count; /**< featureSetsDownlink-v1610 元素个数。 */
    bool has_featureSetsUplink_v1610; /**< featureSetsUplink-v1610 是否存在。 */
    FeatureSetUplink_v1610* featureSetsUplink_v1610_items; /**< ASN.1 featureSetsUplink-v1610；SEQUENCE OF FeatureSetUplink_v1610，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplink_v1610_count; /**< featureSetsUplink-v1610 元素个数。 */
    bool has_featureSetDownlinkPerCC_v1620; /**< featureSetDownlinkPerCC-v1620 是否存在。 */
    FeatureSetDownlinkPerCC_v1620* featureSetDownlinkPerCC_v1620_items; /**< ASN.1 featureSetDownlinkPerCC-v1620；SEQUENCE OF FeatureSetDownlinkPerCC_v1620，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetDownlinkPerCC_v1620_count; /**< featureSetDownlinkPerCC-v1620 元素个数。 */
};


/**
 * @brief FeatureSets_ExtGroup4
 * @note ASN.1：FeatureSets_ExtGroup4；源文件第 16612 行。
 */
struct FeatureSets_ExtGroup4 {
    bool has_featureSetsUplink_v1630; /**< featureSetsUplink-v1630 是否存在。 */
    FeatureSetUplink_v1630* featureSetsUplink_v1630_items; /**< ASN.1 featureSetsUplink-v1630；SEQUENCE OF FeatureSetUplink_v1630，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplink_v1630_count; /**< featureSetsUplink-v1630 元素个数。 */
};


/**
 * @brief FeatureSets_ExtGroup5
 * @note ASN.1：FeatureSets_ExtGroup5；源文件第 16615 行。
 */
struct FeatureSets_ExtGroup5 {
    bool has_featureSetsUplink_v1640; /**< featureSetsUplink-v1640 是否存在。 */
    FeatureSetUplink_v1640* featureSetsUplink_v1640_items; /**< ASN.1 featureSetsUplink-v1640；SEQUENCE OF FeatureSetUplink_v1640，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplink_v1640_count; /**< featureSetsUplink-v1640 元素个数。 */
};


/**
 * @brief FeatureSets_ExtGroup6
 * @note ASN.1：FeatureSets_ExtGroup6；源文件第 16618 行。
 */
struct FeatureSets_ExtGroup6 {
    bool has_featureSetsDownlink_v1700; /**< featureSetsDownlink-v1700 是否存在。 */
    FeatureSetDownlink_v1700* featureSetsDownlink_v1700_items; /**< ASN.1 featureSetsDownlink-v1700；SEQUENCE OF FeatureSetDownlink_v1700，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlink_v1700_count; /**< featureSetsDownlink-v1700 元素个数。 */
    bool has_featureSetsDownlinkPerCC_v1700; /**< featureSetsDownlinkPerCC-v1700 是否存在。 */
    FeatureSetDownlinkPerCC_v1700* featureSetsDownlinkPerCC_v1700_items; /**< ASN.1 featureSetsDownlinkPerCC-v1700；SEQUENCE OF FeatureSetDownlinkPerCC_v1700，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlinkPerCC_v1700_count; /**< featureSetsDownlinkPerCC-v1700 元素个数。 */
    bool has_featureSetsUplink_v1710; /**< featureSetsUplink-v1710 是否存在。 */
    FeatureSetUplink_v1710* featureSetsUplink_v1710_items; /**< ASN.1 featureSetsUplink-v1710；SEQUENCE OF FeatureSetUplink_v1710，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplink_v1710_count; /**< featureSetsUplink-v1710 元素个数。 */
    bool has_featureSetsUplinkPerCC_v1700; /**< featureSetsUplinkPerCC-v1700 是否存在。 */
    FeatureSetUplinkPerCC_v1700* featureSetsUplinkPerCC_v1700_items; /**< ASN.1 featureSetsUplinkPerCC-v1700；SEQUENCE OF FeatureSetUplinkPerCC_v1700，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplinkPerCC_v1700_count; /**< featureSetsUplinkPerCC-v1700 元素个数。 */
};


/**
 * @brief FeatureSets_ExtGroup7
 * @note ASN.1：FeatureSets_ExtGroup7；源文件第 16624 行。
 */
struct FeatureSets_ExtGroup7 {
    bool has_featureSetsDownlink_v1720; /**< featureSetsDownlink-v1720 是否存在。 */
    FeatureSetDownlink_v1720* featureSetsDownlink_v1720_items; /**< ASN.1 featureSetsDownlink-v1720；SEQUENCE OF FeatureSetDownlink_v1720，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlink_v1720_count; /**< featureSetsDownlink-v1720 元素个数。 */
    bool has_featureSetsDownlinkPerCC_v1720; /**< featureSetsDownlinkPerCC-v1720 是否存在。 */
    FeatureSetDownlinkPerCC_v1720* featureSetsDownlinkPerCC_v1720_items; /**< ASN.1 featureSetsDownlinkPerCC-v1720；SEQUENCE OF FeatureSetDownlinkPerCC_v1720，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlinkPerCC_v1720_count; /**< featureSetsDownlinkPerCC-v1720 元素个数。 */
    bool has_featureSetsUplink_v1720; /**< featureSetsUplink-v1720 是否存在。 */
    FeatureSetUplink_v1720* featureSetsUplink_v1720_items; /**< ASN.1 featureSetsUplink-v1720；SEQUENCE OF FeatureSetUplink_v1720，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplink_v1720_count; /**< featureSetsUplink-v1720 元素个数。 */
};


/**
 * @brief FeatureSets
 * @note ASN.1：FeatureSets；源文件第 16593 行。
 * @note FeatureSets ::= SEQUENCE { featureSetsDownlink, featureSetsDownlinkPerCC, featureSetsUplink, ...
 */
struct FeatureSets {
    bool has_featureSetsDownlink; /**< featureSetsDownlink 是否存在。 */
    FeatureSetDownlink* featureSetsDownlink_items; /**< ASN.1 featureSetsDownlink；SEQUENCE OF FeatureSetDownlink，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlink_count; /**< featureSetsDownlink 元素个数。 */
    bool has_featureSetsDownlinkPerCC; /**< featureSetsDownlinkPerCC 是否存在。 */
    FeatureSetDownlinkPerCC* featureSetsDownlinkPerCC_items; /**< ASN.1 featureSetsDownlinkPerCC；SEQUENCE OF FeatureSetDownlinkPerCC，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsDownlinkPerCC_count; /**< featureSetsDownlinkPerCC 元素个数。 */
    bool has_featureSetsUplink; /**< featureSetsUplink 是否存在。 */
    FeatureSetUplink* featureSetsUplink_items; /**< ASN.1 featureSetsUplink；SEQUENCE OF FeatureSetUplink，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplink_count; /**< featureSetsUplink 元素个数。 */
    bool has_featureSetsUplinkPerCC; /**< featureSetsUplinkPerCC 是否存在。 */
    FeatureSetUplinkPerCC* featureSetsUplinkPerCC_items; /**< ASN.1 featureSetsUplinkPerCC；SEQUENCE OF FeatureSetUplinkPerCC，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplinkPerCC_count; /**< featureSetsUplinkPerCC 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    FeatureSets_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    FeatureSets_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    FeatureSets_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    FeatureSets_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    FeatureSets_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    FeatureSets_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    FeatureSets_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup8; /**< 第 8 组是否出现。 */
    FeatureSets_ExtGroup8 extGroup8; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup9; /**< 第 9 组是否出现。 */
    FeatureSets_ExtGroup9 extGroup9; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup10; /**< 第 10 组是否出现。 */
    FeatureSets_ExtGroup10 extGroup10; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief FeatureSets_v16d0
 * @note ASN.1：FeatureSets-v16d0；源文件第 16645 行。
 * @note FeatureSets-v16d0 ::= SEQUENCE { featureSetsUplink-v16d0 }
 */
struct FeatureSets_v16d0 {
    bool has_featureSetsUplink_v16d0; /**< featureSetsUplink-v16d0 是否存在。 */
    FeatureSetUplink_v16d0* featureSetsUplink_v16d0_items; /**< ASN.1 featureSetsUplink-v16d0；SEQUENCE OF FeatureSetUplink_v16d0，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetsUplink_v16d0_count; /**< featureSetsUplink-v16d0 元素个数。 */
};


/**
 * @brief DummyF
 * @note ASN.1：DummyF；源文件第 16978 行。
 * @note DummyF ::= SEQUENCE { maxNumberPeriodicCSI-ReportPerBWP, maxNumberAperiodicCSI-ReportPer...
 */
struct DummyF {
    int64_t maxNumberPeriodicCSI_ReportPerBWP; /**< ASN.1 maxNumberPeriodicCSI-ReportPerBWP；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberAperiodicCSI_ReportPerBWP; /**< ASN.1 maxNumberAperiodicCSI-ReportPerBWP；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberSemiPersistentCSI_ReportPerBWP; /**< ASN.1 maxNumberSemiPersistentCSI-ReportPerBWP；INTEGER (0..4)，位宽 3 bit。 */
    int64_t simultaneousCSI_ReportsAllCC; /**< ASN.1 simultaneousCSI-ReportsAllCC；INTEGER (5..32)，位宽 5 bit。 */
};


/**
 * @brief DummyI
 * @note ASN.1：DummyI；源文件第 18508 行。
 * @note DummyI ::= SEQUENCE { supportedSRS-TxPortSwitch, txSwitchImpactToRx }
 */
struct DummyI {
    DummyI_SupportedSRS_TxPortSwitch supportedSRS_TxPortSwitch; /**< ASN.1 supportedSRS-TxPortSwitch；枚举。 */
    bool has_txSwitchImpactToRx; /**< txSwitchImpactToRx 是否存在。 */
    DummyI_TxSwitchImpactToRx txSwitchImpactToRx; /**< ASN.1 txSwitchImpactToRx；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot
 * @note ASN.1：pusch-ProcessingType1-DifferentTB-PerSlot；源文件第 16663 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz, scs-120kHz }
 */
struct FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz scs_15kHz; /**< ASN.1 scs-15kHz；枚举；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz scs_30kHz; /**< ASN.1 scs-30kHz；枚举；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz scs_120kHz; /**< ASN.1 scs-120kHz；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink
 * @note ASN.1：FeatureSetUplink；源文件第 16652 行。
 * @note FeatureSetUplink ::= SEQUENCE { featureSetListPerUplinkCC, scalingFactor, dummy3, intraBandFreqSep...
 */
struct FeatureSetUplink {
    FeatureSetUplinkPerCC_Id* featureSetListPerUplinkCC_items; /**< ASN.1 featureSetListPerUplinkCC；SEQUENCE OF FeatureSetUplinkPerCC_Id，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t featureSetListPerUplinkCC_count; /**< featureSetListPerUplinkCC 元素个数。 */
    bool has_scalingFactor; /**< scalingFactor 是否存在。 */
    FeatureSetUplink_ScalingFactor scalingFactor; /**< ASN.1 scalingFactor；枚举；OPTIONAL。 */
    bool has_dummy3; /**< dummy3 是否存在。 */
    FeatureSetUplink_Dummy3 dummy3; /**< ASN.1 dummy3；枚举；OPTIONAL。 */
    bool has_intraBandFreqSeparationUL; /**< intraBandFreqSeparationUL 是否存在。 */
    FreqSeparationClass intraBandFreqSeparationUL; /**< ASN.1 intraBandFreqSeparationUL；枚举；OPTIONAL。 */
    bool has_searchSpaceSharingCA_UL; /**< searchSpaceSharingCA-UL 是否存在。 */
    FeatureSetUplink_SearchSpaceSharingCA_UL searchSpaceSharingCA_UL; /**< ASN.1 searchSpaceSharingCA-UL；枚举；OPTIONAL。 */
    bool has_dummy1; /**< dummy1 是否存在。 */
    DummyI dummy1; /**< ASN.1 dummy1；结构体；OPTIONAL。 */
    bool has_supportedSRS_Resources; /**< supportedSRS-Resources 是否存在。 */
    SRS_Resources supportedSRS_Resources; /**< ASN.1 supportedSRS-Resources；结构体；OPTIONAL。 */
    bool has_twoPUCCH_Group; /**< twoPUCCH-Group 是否存在。 */
    FeatureSetUplink_TwoPUCCH_Group twoPUCCH_Group; /**< ASN.1 twoPUCCH-Group；枚举；OPTIONAL。 */
    bool has_dynamicSwitchSUL; /**< dynamicSwitchSUL 是否存在。 */
    FeatureSetUplink_DynamicSwitchSUL dynamicSwitchSUL; /**< ASN.1 dynamicSwitchSUL；枚举；OPTIONAL。 */
    bool has_simultaneousTxSUL_NonSUL; /**< simultaneousTxSUL-NonSUL 是否存在。 */
    FeatureSetUplink_SimultaneousTxSUL_NonSUL simultaneousTxSUL_NonSUL; /**< ASN.1 simultaneousTxSUL-NonSUL；枚举；OPTIONAL。 */
    bool has_pusch_ProcessingType1_DifferentTB_PerSlot; /**< pusch-ProcessingType1-DifferentTB-PerSlot 是否存在。 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot pusch_ProcessingType1_DifferentTB_PerSlot; /**< ASN.1 pusch-ProcessingType1-DifferentTB-PerSlot；结构体；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    DummyF dummy2; /**< ASN.1 dummy2；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1540_Pusch_ProcessingType2
 * @note ASN.1：pusch-ProcessingType2；源文件第 16676 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz }
 */
struct FeatureSetUplink_v1540_Pusch_ProcessingType2 {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    ProcessingParameters scs_15kHz; /**< ASN.1 scs-15kHz；结构体；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    ProcessingParameters scs_30kHz; /**< ASN.1 scs-30kHz；结构体；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    ProcessingParameters scs_60kHz; /**< ASN.1 scs-60kHz；结构体；OPTIONAL。 */
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART021_H */
