/* ============================================================================
 * types/rrc_types_part009.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART009_H
#define RRC_CODEC_TYPES_PART009_H

#include "rrc_types_part000.h"
#include "rrc_types_part001.h"
#include "rrc_types_part002.h"
#include "rrc_types_part003.h"
#include "rrc_types_part004.h"
#include "rrc_types_part005.h"
#include "rrc_types_part006.h"
#include "rrc_types_part007.h"
#include "rrc_types_part008.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 枚举 DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx（ASN.1 maxNumberSSB-CSI-RS-ResourceTwoTx，源文件第 18424 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx {
    DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx_n0 = 0, /**< ASN.1 n0 */
    DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx_n4 = 1, /**< ASN.1 n4 */
    DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx_n8 = 2, /**< ASN.1 n8 */
    DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx_n16 = 3, /**< ASN.1 n16 */
    DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx_n32 = 4, /**< ASN.1 n32 */
    DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx_n64 = 5, /**< ASN.1 n64 */
} DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx;


/**
 * @brief 枚举 DummyG_SupportedCSI_RS_Density（ASN.1 supportedCSI-RS-Density，源文件第 18425 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyG_SupportedCSI_RS_Density {
    DummyG_SupportedCSI_RS_Density_one = 0, /**< ASN.1 one */
    DummyG_SupportedCSI_RS_Density_three = 1, /**< ASN.1 three */
    DummyG_SupportedCSI_RS_Density_oneAndThree = 2, /**< ASN.1 oneAndThree */
} DummyG_SupportedCSI_RS_Density;


/**
 * @brief 枚举 BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx（ASN.1 maxNumberSSB-CSI-RS-ResourceOneTx，源文件第 18429 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx {
    BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx_n0 = 0, /**< ASN.1 n0 */
    BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx_n8 = 1, /**< ASN.1 n8 */
    BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx_n16 = 2, /**< ASN.1 n16 */
    BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx_n32 = 3, /**< ASN.1 n32 */
    BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx_n64 = 4, /**< ASN.1 n64 */
} BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx;


/**
 * @brief 枚举 BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource（ASN.1 maxNumberCSI-RS-Resource，源文件第 18430 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource {
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource_n0 = 0, /**< ASN.1 n0 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource_n4 = 1, /**< ASN.1 n4 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource_n8 = 2, /**< ASN.1 n8 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource_n16 = 3, /**< ASN.1 n16 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource_n32 = 4, /**< ASN.1 n32 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource_n64 = 5, /**< ASN.1 n64 */
} BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource;


/**
 * @brief 枚举 BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx（ASN.1 maxNumberCSI-RS-ResourceTwoTx，源文件第 18431 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx {
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx_n0 = 0, /**< ASN.1 n0 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx_n4 = 1, /**< ASN.1 n4 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx_n8 = 2, /**< ASN.1 n8 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx_n16 = 3, /**< ASN.1 n16 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx_n32 = 4, /**< ASN.1 n32 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx_n64 = 5, /**< ASN.1 n64 */
} BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx;


/**
 * @brief 枚举 BeamManagementSSB_CSI_RS_SupportedCSI_RS_Density（ASN.1 supportedCSI-RS-Density，源文件第 18432 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamManagementSSB_CSI_RS_SupportedCSI_RS_Density {
    BeamManagementSSB_CSI_RS_SupportedCSI_RS_Density_one = 0, /**< ASN.1 one */
    BeamManagementSSB_CSI_RS_SupportedCSI_RS_Density_three = 1, /**< ASN.1 three */
    BeamManagementSSB_CSI_RS_SupportedCSI_RS_Density_oneAndThree = 2, /**< ASN.1 oneAndThree */
} BeamManagementSSB_CSI_RS_SupportedCSI_RS_Density;


/**
 * @brief 枚举 BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource（ASN.1 maxNumberAperiodicCSI-RS-Resource，源文件第 18433 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource {
    BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource_n0 = 0, /**< ASN.1 n0 */
    BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource_n1 = 1, /**< ASN.1 n1 */
    BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource_n4 = 2, /**< ASN.1 n4 */
    BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource_n8 = 3, /**< ASN.1 n8 */
    BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource_n16 = 4, /**< ASN.1 n16 */
    BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource_n32 = 5, /**< ASN.1 n32 */
    BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource_n64 = 6, /**< ASN.1 n64 */
} BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource;


/**
 * @brief 枚举 CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC（ASN.1 maxConfigNumberCSI-IM-PerCC，源文件第 18453 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC {
    CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC_n1 = 0, /**< ASN.1 n1 */
    CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC_n2 = 1, /**< ASN.1 n2 */
    CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC_n4 = 2, /**< ASN.1 n4 */
    CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC_n8 = 3, /**< ASN.1 n8 */
    CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC_n16 = 4, /**< ASN.1 n16 */
    CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC_n32 = 5, /**< ASN.1 n32 */
} CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC;


/**
 * @brief 枚举 CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC（ASN.1 maxNumberAperiodicCSI-triggeringStatePerCC，源文件第 18471 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC {
    CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC_n3 = 0, /**< ASN.1 n3 */
    CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC_n7 = 1, /**< ASN.1 n7 */
    CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC_n15 = 2, /**< ASN.1 n15 */
    CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC_n31 = 3, /**< ASN.1 n31 */
    CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC_n63 = 4, /**< ASN.1 n63 */
    CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC_n128 = 5, /**< ASN.1 n128 */
} CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC;


/**
 * @brief 枚举 SpatialRelations_MaxNumberConfiguredSpatialRelations（ASN.1 maxNumberConfiguredSpatialRelations，源文件第 18502 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpatialRelations_MaxNumberConfiguredSpatialRelations {
    SpatialRelations_MaxNumberConfiguredSpatialRelations_n4 = 0, /**< ASN.1 n4 */
    SpatialRelations_MaxNumberConfiguredSpatialRelations_n8 = 1, /**< ASN.1 n8 */
    SpatialRelations_MaxNumberConfiguredSpatialRelations_n16 = 2, /**< ASN.1 n16 */
    SpatialRelations_MaxNumberConfiguredSpatialRelations_n32 = 3, /**< ASN.1 n32 */
    SpatialRelations_MaxNumberConfiguredSpatialRelations_n64 = 4, /**< ASN.1 n64 */
    SpatialRelations_MaxNumberConfiguredSpatialRelations_n96 = 5, /**< ASN.1 n96 */
} SpatialRelations_MaxNumberConfiguredSpatialRelations;


/**
 * @brief 枚举 SpatialRelations_MaxNumberActiveSpatialRelations（ASN.1 maxNumberActiveSpatialRelations，源文件第 18503 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpatialRelations_MaxNumberActiveSpatialRelations {
    SpatialRelations_MaxNumberActiveSpatialRelations_n1 = 0, /**< ASN.1 n1 */
    SpatialRelations_MaxNumberActiveSpatialRelations_n2 = 1, /**< ASN.1 n2 */
    SpatialRelations_MaxNumberActiveSpatialRelations_n4 = 2, /**< ASN.1 n4 */
    SpatialRelations_MaxNumberActiveSpatialRelations_n8 = 3, /**< ASN.1 n8 */
    SpatialRelations_MaxNumberActiveSpatialRelations_n14 = 4, /**< ASN.1 n14 */
} SpatialRelations_MaxNumberActiveSpatialRelations;


/**
 * @brief 枚举 SpatialRelations_AdditionalActiveSpatialRelationPUCCH（ASN.1 additionalActiveSpatialRelationPUCCH，源文件第 18504 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpatialRelations_AdditionalActiveSpatialRelationPUCCH {
    SpatialRelations_AdditionalActiveSpatialRelationPUCCH_supported = 0, /**< ASN.1 supported */
} SpatialRelations_AdditionalActiveSpatialRelationPUCCH;


/**
 * @brief 枚举 SpatialRelations_MaxNumberDL_RS_QCL_TypeD（ASN.1 maxNumberDL-RS-QCL-TypeD，源文件第 18505 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpatialRelations_MaxNumberDL_RS_QCL_TypeD {
    SpatialRelations_MaxNumberDL_RS_QCL_TypeD_n1 = 0, /**< ASN.1 n1 */
    SpatialRelations_MaxNumberDL_RS_QCL_TypeD_n2 = 1, /**< ASN.1 n2 */
    SpatialRelations_MaxNumberDL_RS_QCL_TypeD_n4 = 2, /**< ASN.1 n4 */
    SpatialRelations_MaxNumberDL_RS_QCL_TypeD_n8 = 3, /**< ASN.1 n8 */
    SpatialRelations_MaxNumberDL_RS_QCL_TypeD_n14 = 4, /**< ASN.1 n14 */
} SpatialRelations_MaxNumberDL_RS_QCL_TypeD;


/**
 * @brief 枚举 DummyI_SupportedSRS_TxPortSwitch（ASN.1 supportedSRS-TxPortSwitch，源文件第 18509 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyI_SupportedSRS_TxPortSwitch {
    DummyI_SupportedSRS_TxPortSwitch_t1r2 = 0, /**< ASN.1 t1r2 */
    DummyI_SupportedSRS_TxPortSwitch_t1r4 = 1, /**< ASN.1 t1r4 */
    DummyI_SupportedSRS_TxPortSwitch_t2r4 = 2, /**< ASN.1 t2r4 */
    DummyI_SupportedSRS_TxPortSwitch_t1r4_t2r4 = 3, /**< ASN.1 t1r4-t2r4 */
    DummyI_SupportedSRS_TxPortSwitch_tr_equal = 4, /**< ASN.1 tr-equal */
} DummyI_SupportedSRS_TxPortSwitch;


/**
 * @brief 枚举 DummyI_TxSwitchImpactToRx（ASN.1 txSwitchImpactToRx，源文件第 18510 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyI_TxSwitchImpactToRx {
    DummyI_TxSwitchImpactToRx_trueVal = 0, /**< ASN.1 trueVal */
} DummyI_TxSwitchImpactToRx;


/**
 * @brief 枚举 CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17（ASN.1 maxNumTx-Ports-r17，源文件第 18514 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17 {
    CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17_n2 = 0, /**< ASN.1 n2 */
    CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17_n4 = 1, /**< ASN.1 n4 */
    CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17_n8 = 2, /**< ASN.1 n8 */
    CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17_n12 = 3, /**< ASN.1 n12 */
    CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17_n16 = 4, /**< ASN.1 n16 */
    CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17_n24 = 5, /**< ASN.1 n24 */
    CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17_n32 = 6, /**< ASN.1 n32 */
} CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17;


/**
 * @brief 枚举 MRDC_Parameters_SingleUL_Transmission（ASN.1 singleUL-Transmission，源文件第 18528 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_SingleUL_Transmission {
    MRDC_Parameters_SingleUL_Transmission_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_SingleUL_Transmission;


/**
 * @brief 枚举 MRDC_Parameters_DynamicPowerSharingENDC（ASN.1 dynamicPowerSharingENDC，源文件第 18529 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_DynamicPowerSharingENDC {
    MRDC_Parameters_DynamicPowerSharingENDC_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_DynamicPowerSharingENDC;


/**
 * @brief 枚举 MRDC_Parameters_Tdm_Pattern（ASN.1 tdm-Pattern，源文件第 18530 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_Tdm_Pattern {
    MRDC_Parameters_Tdm_Pattern_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_Tdm_Pattern;


/**
 * @brief 枚举 MRDC_Parameters_Ul_SharingEUTRA_NR（ASN.1 ul-SharingEUTRA-NR，源文件第 18531 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_Ul_SharingEUTRA_NR {
    MRDC_Parameters_Ul_SharingEUTRA_NR_tdm = 0, /**< ASN.1 tdm */
    MRDC_Parameters_Ul_SharingEUTRA_NR_fdm = 1, /**< ASN.1 fdm */
    MRDC_Parameters_Ul_SharingEUTRA_NR_both = 2, /**< ASN.1 both */
} MRDC_Parameters_Ul_SharingEUTRA_NR;


/**
 * @brief 枚举 MRDC_Parameters_Ul_SwitchingTimeEUTRA_NR（ASN.1 ul-SwitchingTimeEUTRA-NR，源文件第 18532 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_Ul_SwitchingTimeEUTRA_NR {
    MRDC_Parameters_Ul_SwitchingTimeEUTRA_NR_type1 = 0, /**< ASN.1 type1 */
    MRDC_Parameters_Ul_SwitchingTimeEUTRA_NR_type2 = 1, /**< ASN.1 type2 */
} MRDC_Parameters_Ul_SwitchingTimeEUTRA_NR;


/**
 * @brief 枚举 MRDC_Parameters_SimultaneousRxTxInterBandENDC（ASN.1 simultaneousRxTxInterBandENDC，源文件第 18533 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_SimultaneousRxTxInterBandENDC {
    MRDC_Parameters_SimultaneousRxTxInterBandENDC_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_SimultaneousRxTxInterBandENDC;


/**
 * @brief 枚举 MRDC_Parameters_AsyncIntraBandENDC（ASN.1 asyncIntraBandENDC，源文件第 18534 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_AsyncIntraBandENDC {
    MRDC_Parameters_AsyncIntraBandENDC_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_AsyncIntraBandENDC;


/**
 * @brief 枚举 MRDC_Parameters_ExtGroup1_DualPA_Architecture（ASN.1 dualPA-Architecture，源文件第 18537 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_ExtGroup1_DualPA_Architecture {
    MRDC_Parameters_ExtGroup1_DualPA_Architecture_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_ExtGroup1_DualPA_Architecture;


/**
 * @brief 枚举 MRDC_Parameters_ExtGroup1_IntraBandENDC_Support（ASN.1 intraBandENDC-Support，源文件第 18538 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_ExtGroup1_IntraBandENDC_Support {
    MRDC_Parameters_ExtGroup1_IntraBandENDC_Support_non_contiguous = 0, /**< ASN.1 non-contiguous */
    MRDC_Parameters_ExtGroup1_IntraBandENDC_Support_both = 1, /**< ASN.1 both */
} MRDC_Parameters_ExtGroup1_IntraBandENDC_Support;


/**
 * @brief 枚举 MRDC_Parameters_ExtGroup1_Ul_TimingAlignmentEUTRA_NR（ASN.1 ul-TimingAlignmentEUTRA-NR，源文件第 18539 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_ExtGroup1_Ul_TimingAlignmentEUTRA_NR {
    MRDC_Parameters_ExtGroup1_Ul_TimingAlignmentEUTRA_NR_required = 0, /**< ASN.1 required */
} MRDC_Parameters_ExtGroup1_Ul_TimingAlignmentEUTRA_NR;


/**
 * @brief 枚举 MRDC_Parameters_v1580_DynamicPowerSharingNEDC（ASN.1 dynamicPowerSharingNEDC，源文件第 18544 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1580_DynamicPowerSharingNEDC {
    MRDC_Parameters_v1580_DynamicPowerSharingNEDC_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1580_DynamicPowerSharingNEDC;


/**
 * @brief 枚举 MRDC_Parameters_v1590_InterBandContiguousMRDC（ASN.1 interBandContiguousMRDC，源文件第 18548 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1590_InterBandContiguousMRDC {
    MRDC_Parameters_v1590_InterBandContiguousMRDC_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1590_InterBandContiguousMRDC;


/**
 * @brief 枚举 MRDC_Parameters_v15n0_IntraBandENDC_Support_UL（ASN.1 intraBandENDC-Support-UL，源文件第 18556 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v15n0_IntraBandENDC_Support_UL {
    MRDC_Parameters_v15n0_IntraBandENDC_Support_UL_non_contiguous = 0, /**< ASN.1 non-contiguous */
    MRDC_Parameters_v15n0_IntraBandENDC_Support_UL_both = 1, /**< ASN.1 both */
} MRDC_Parameters_v15n0_IntraBandENDC_Support_UL;


/**
 * @brief 枚举 MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16（ASN.1 maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16/eutra-TDD-Config0-r16，源文件第 18561 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16 {
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16_n20 = 0, /**< ASN.1 n20 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16_n40 = 1, /**< ASN.1 n40 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16_n50 = 2, /**< ASN.1 n50 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16_n60 = 3, /**< ASN.1 n60 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16_n70 = 4, /**< ASN.1 n70 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16_n80 = 5, /**< ASN.1 n80 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16_n90 = 6, /**< ASN.1 n90 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16_n100 = 7, /**< ASN.1 n100 */
} MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16（ASN.1 maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16/eutra-TDD-Config1-r16，源文件第 18562 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16 {
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16_n20 = 0, /**< ASN.1 n20 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16_n40 = 1, /**< ASN.1 n40 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16_n50 = 2, /**< ASN.1 n50 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16_n60 = 3, /**< ASN.1 n60 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16_n70 = 4, /**< ASN.1 n70 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16_n80 = 5, /**< ASN.1 n80 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16_n90 = 6, /**< ASN.1 n90 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16_n100 = 7, /**< ASN.1 n100 */
} MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16（ASN.1 maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16/eutra-TDD-Config2-r16，源文件第 18563 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16 {
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16_n20 = 0, /**< ASN.1 n20 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16_n40 = 1, /**< ASN.1 n40 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16_n50 = 2, /**< ASN.1 n50 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16_n60 = 3, /**< ASN.1 n60 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16_n70 = 4, /**< ASN.1 n70 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16_n80 = 5, /**< ASN.1 n80 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16_n90 = 6, /**< ASN.1 n90 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16_n100 = 7, /**< ASN.1 n100 */
} MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16（ASN.1 maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16/eutra-TDD-Config3-r16，源文件第 18564 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16 {
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16_n20 = 0, /**< ASN.1 n20 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16_n40 = 1, /**< ASN.1 n40 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16_n50 = 2, /**< ASN.1 n50 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16_n60 = 3, /**< ASN.1 n60 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16_n70 = 4, /**< ASN.1 n70 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16_n80 = 5, /**< ASN.1 n80 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16_n90 = 6, /**< ASN.1 n90 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16_n100 = 7, /**< ASN.1 n100 */
} MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16（ASN.1 maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16/eutra-TDD-Config4-r16，源文件第 18565 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16 {
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16_n20 = 0, /**< ASN.1 n20 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16_n40 = 1, /**< ASN.1 n40 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16_n50 = 2, /**< ASN.1 n50 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16_n60 = 3, /**< ASN.1 n60 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16_n70 = 4, /**< ASN.1 n70 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16_n80 = 5, /**< ASN.1 n80 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16_n90 = 6, /**< ASN.1 n90 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16_n100 = 7, /**< ASN.1 n100 */
} MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16（ASN.1 maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16/eutra-TDD-Config5-r16，源文件第 18566 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16 {
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16_n20 = 0, /**< ASN.1 n20 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16_n40 = 1, /**< ASN.1 n40 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16_n50 = 2, /**< ASN.1 n50 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16_n60 = 3, /**< ASN.1 n60 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16_n70 = 4, /**< ASN.1 n70 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16_n80 = 5, /**< ASN.1 n80 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16_n90 = 6, /**< ASN.1 n90 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16_n100 = 7, /**< ASN.1 n100 */
} MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16（ASN.1 maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16/eutra-TDD-Config6-r16，源文件第 18567 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16 {
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16_n20 = 0, /**< ASN.1 n20 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16_n40 = 1, /**< ASN.1 n40 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16_n50 = 2, /**< ASN.1 n50 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16_n60 = 3, /**< ASN.1 n60 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16_n70 = 4, /**< ASN.1 n70 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16_n80 = 5, /**< ASN.1 n80 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16_n90 = 6, /**< ASN.1 n90 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16_n100 = 7, /**< ASN.1 n100 */
} MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1620_Tdm_restrictionTDD_endc_r16（ASN.1 tdm-restrictionTDD-endc-r16，源文件第 18570 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_Tdm_restrictionTDD_endc_r16 {
    MRDC_Parameters_v1620_Tdm_restrictionTDD_endc_r16_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1620_Tdm_restrictionTDD_endc_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1620_Tdm_restrictionFDD_endc_r16（ASN.1 tdm-restrictionFDD-endc-r16，源文件第 18572 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_Tdm_restrictionFDD_endc_r16 {
    MRDC_Parameters_v1620_Tdm_restrictionFDD_endc_r16_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1620_Tdm_restrictionFDD_endc_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1620_SingleUL_HARQ_offsetTDD_PCell_r16（ASN.1 singleUL-HARQ-offsetTDD-PCell-r16，源文件第 18574 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_SingleUL_HARQ_offsetTDD_PCell_r16 {
    MRDC_Parameters_v1620_SingleUL_HARQ_offsetTDD_PCell_r16_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1620_SingleUL_HARQ_offsetTDD_PCell_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1620_Tdm_restrictionDualTX_FDD_endc_r16（ASN.1 tdm-restrictionDualTX-FDD-endc-r16，源文件第 18576 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1620_Tdm_restrictionDualTX_FDD_endc_r16 {
    MRDC_Parameters_v1620_Tdm_restrictionDualTX_FDD_endc_r16_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1620_Tdm_restrictionDualTX_FDD_endc_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16（ASN.1 maxUplinkDutyCycle-interBandENDC-FDD-TDD-PC2-r16/maxUplinkDutyCycle-FDD-TDD-EN-DC1-r16，源文件第 18582 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16 {
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_n30 = 0, /**< ASN.1 n30 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_n40 = 1, /**< ASN.1 n40 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_n50 = 2, /**< ASN.1 n50 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_n60 = 3, /**< ASN.1 n60 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_n70 = 4, /**< ASN.1 n70 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_n80 = 5, /**< ASN.1 n80 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_n90 = 6, /**< ASN.1 n90 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_n100 = 7, /**< ASN.1 n100 */
} MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16（ASN.1 maxUplinkDutyCycle-interBandENDC-FDD-TDD-PC2-r16/maxUplinkDutyCycle-FDD-TDD-EN-DC2-r16，源文件第 18583 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16 {
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_n30 = 0, /**< ASN.1 n30 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_n40 = 1, /**< ASN.1 n40 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_n50 = 2, /**< ASN.1 n50 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_n60 = 3, /**< ASN.1 n60 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_n70 = 4, /**< ASN.1 n70 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_n80 = 5, /**< ASN.1 n80 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_n90 = 6, /**< ASN.1 n90 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_n100 = 7, /**< ASN.1 n100 */
} MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1630_InterBandMRDC_WithOverlapDL_Bands_r16（ASN.1 interBandMRDC-WithOverlapDL-Bands-r16，源文件第 18587 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1630_InterBandMRDC_WithOverlapDL_Bands_r16 {
    MRDC_Parameters_v1630_InterBandMRDC_WithOverlapDL_Bands_r16_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1630_InterBandMRDC_WithOverlapDL_Bands_r16;


/**
 * @brief 枚举 MRDC_Parameters_v1700_CondPSCellAdditionENDC_r17（ASN.1 condPSCellAdditionENDC-r17，源文件第 18591 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1700_CondPSCellAdditionENDC_r17 {
    MRDC_Parameters_v1700_CondPSCellAdditionENDC_r17_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1700_CondPSCellAdditionENDC_r17;


/**
 * @brief 枚举 MRDC_Parameters_v1700_Scg_ActivationDeactivationENDC_r17（ASN.1 scg-ActivationDeactivationENDC-r17，源文件第 18592 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1700_Scg_ActivationDeactivationENDC_r17 {
    MRDC_Parameters_v1700_Scg_ActivationDeactivationENDC_r17_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1700_Scg_ActivationDeactivationENDC_r17;


/**
 * @brief 枚举 MRDC_Parameters_v1700_Scg_ActivationDeactivationResumeENDC_r17（ASN.1 scg-ActivationDeactivationResumeENDC-r17，源文件第 18593 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1700_Scg_ActivationDeactivationResumeENDC_r17 {
    MRDC_Parameters_v1700_Scg_ActivationDeactivationResumeENDC_r17_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1700_Scg_ActivationDeactivationResumeENDC_r17;


/**
 * @brief 枚举 MRDC_Parameters_v1770_HigherPowerLimitMRDC_r17（ASN.1 higherPowerLimitMRDC-r17，源文件第 18598 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MRDC_Parameters_v1770_HigherPowerLimitMRDC_r17 {
    MRDC_Parameters_v1770_HigherPowerLimitMRDC_r17_supported = 0, /**< ASN.1 supported */
} MRDC_Parameters_v1770_HigherPowerLimitMRDC_r17;


/**
 * @brief 枚举 NCR_Parameters_r18_InactiveStateNCR_r18（ASN.1 inactiveStateNCR-r18，源文件第 18605 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NCR_Parameters_r18_InactiveStateNCR_r18 {
    NCR_Parameters_r18_InactiveStateNCR_r18_supported = 0, /**< ASN.1 supported */
} NCR_Parameters_r18_InactiveStateNCR_r18;


/**
 * @brief 枚举 NCR_Parameters_r18_SupportedNumberOfDRBs_NCR_r18（ASN.1 supportedNumberOfDRBs-NCR-r18，源文件第 18606 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NCR_Parameters_r18_SupportedNumberOfDRBs_NCR_r18 {
    NCR_Parameters_r18_SupportedNumberOfDRBs_NCR_r18_n1 = 0, /**< ASN.1 n1 */
    NCR_Parameters_r18_SupportedNumberOfDRBs_NCR_r18_n16 = 1, /**< ASN.1 n16 */
} NCR_Parameters_r18_SupportedNumberOfDRBs_NCR_r18;


/**
 * @brief 枚举 NCR_Parameters_r18_NonDRB_NCR_r18（ASN.1 nonDRB-NCR-r18，源文件第 18607 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NCR_Parameters_r18_NonDRB_NCR_r18 {
    NCR_Parameters_r18_NonDRB_NCR_r18_supported = 0, /**< ASN.1 supported */
} NCR_Parameters_r18_NonDRB_NCR_r18;


/**
 * @brief 枚举 NRDC_Parameters_v1570_Sfn_SyncNRDC（ASN.1 sfn-SyncNRDC，源文件第 18625 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NRDC_Parameters_v1570_Sfn_SyncNRDC {
    NRDC_Parameters_v1570_Sfn_SyncNRDC_supported = 0, /**< ASN.1 supported */
} NRDC_Parameters_v1570_Sfn_SyncNRDC;


/**
 * @brief 枚举 NRDC_Parameters_v15c0_Pdcp_DuplicationSplitSRB（ASN.1 pdcp-DuplicationSplitSRB，源文件第 18629 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NRDC_Parameters_v15c0_Pdcp_DuplicationSplitSRB {
    NRDC_Parameters_v15c0_Pdcp_DuplicationSplitSRB_supported = 0, /**< ASN.1 supported */
} NRDC_Parameters_v15c0_Pdcp_DuplicationSplitSRB;


/**
 * @brief 枚举 NRDC_Parameters_v15c0_Pdcp_DuplicationSplitDRB（ASN.1 pdcp-DuplicationSplitDRB，源文件第 18630 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NRDC_Parameters_v15c0_Pdcp_DuplicationSplitDRB {
    NRDC_Parameters_v15c0_Pdcp_DuplicationSplitDRB_supported = 0, /**< ASN.1 supported */
} NRDC_Parameters_v15c0_Pdcp_DuplicationSplitDRB;


/**
 * @brief 枚举 NRDC_Parameters_v1700_F1c_OverNR_RRC_r17（ASN.1 f1c-OverNR-RRC-r17，源文件第 18638 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NRDC_Parameters_v1700_F1c_OverNR_RRC_r17 {
    NRDC_Parameters_v1700_F1c_OverNR_RRC_r17_supported = 0, /**< ASN.1 supported */
} NRDC_Parameters_v1700_F1c_OverNR_RRC_r17;


/**
 * @brief 枚举 NTN_Parameters_r17_InactiveStateNTN_r17（ASN.1 inactiveStateNTN-r17，源文件第 18646 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NTN_Parameters_r17_InactiveStateNTN_r17 {
    NTN_Parameters_r17_InactiveStateNTN_r17_supported = 0, /**< ASN.1 supported */
} NTN_Parameters_r17_InactiveStateNTN_r17;


/**
 * @brief 枚举 NTN_Parameters_r17_Ra_SDT_NTN_r17（ASN.1 ra-SDT-NTN-r17，源文件第 18647 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NTN_Parameters_r17_Ra_SDT_NTN_r17 {
    NTN_Parameters_r17_Ra_SDT_NTN_r17_supported = 0, /**< ASN.1 supported */
} NTN_Parameters_r17_Ra_SDT_NTN_r17;


/**
 * @brief 枚举 NTN_Parameters_r17_Srb_SDT_NTN_r17（ASN.1 srb-SDT-NTN-r17，源文件第 18648 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NTN_Parameters_r17_Srb_SDT_NTN_r17 {
    NTN_Parameters_r17_Srb_SDT_NTN_r17_supported = 0, /**< ASN.1 supported */
} NTN_Parameters_r17_Srb_SDT_NTN_r17;


/**
 * @brief 枚举 OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Serving_r16（ASN.1 olpc-SRS-PosBasedOnPRS-Serving-r16，源文件第 18662 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Serving_r16 {
    OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Serving_r16_supported = 0, /**< ASN.1 supported */
} OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Serving_r16;


/**
 * @brief 枚举 OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnSSB_Neigh_r16（ASN.1 olpc-SRS-PosBasedOnSSB-Neigh-r16，源文件第 18663 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnSSB_Neigh_r16 {
    OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnSSB_Neigh_r16_supported = 0, /**< ASN.1 supported */
} OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnSSB_Neigh_r16;


/**
 * @brief 枚举 OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Neigh_r16（ASN.1 olpc-SRS-PosBasedOnPRS-Neigh-r16，源文件第 18664 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Neigh_r16 {
    OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Neigh_r16_supported = 0, /**< ASN.1 supported */
} OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Neigh_r16;


/**
 * @brief 枚举 OLPC_SRS_Pos_r16_MaxNumberPathLossEstimatePerServing_r16（ASN.1 maxNumberPathLossEstimatePerServing-r16，源文件第 18665 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum OLPC_SRS_Pos_r16_MaxNumberPathLossEstimatePerServing_r16 {
    OLPC_SRS_Pos_r16_MaxNumberPathLossEstimatePerServing_r16_n1 = 0, /**< ASN.1 n1 */
    OLPC_SRS_Pos_r16_MaxNumberPathLossEstimatePerServing_r16_n4 = 1, /**< ASN.1 n4 */
    OLPC_SRS_Pos_r16_MaxNumberPathLossEstimatePerServing_r16_n8 = 2, /**< ASN.1 n8 */
    OLPC_SRS_Pos_r16_MaxNumberPathLossEstimatePerServing_r16_n16 = 3, /**< ASN.1 n16 */
} OLPC_SRS_Pos_r16_MaxNumberPathLossEstimatePerServing_r16;


/**
 * @brief 枚举 PDCP_Parameters_MaxNumberROHC_ContextSessions（ASN.1 maxNumberROHC-ContextSessions，源文件第 18684 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_MaxNumberROHC_ContextSessions {
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs2 = 0, /**< ASN.1 cs2 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs4 = 1, /**< ASN.1 cs4 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs8 = 2, /**< ASN.1 cs8 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs12 = 3, /**< ASN.1 cs12 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs16 = 4, /**< ASN.1 cs16 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs24 = 5, /**< ASN.1 cs24 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs32 = 6, /**< ASN.1 cs32 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs48 = 7, /**< ASN.1 cs48 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs64 = 8, /**< ASN.1 cs64 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs128 = 9, /**< ASN.1 cs128 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs256 = 10, /**< ASN.1 cs256 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs512 = 11, /**< ASN.1 cs512 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs1024 = 12, /**< ASN.1 cs1024 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_cs16384 = 13, /**< ASN.1 cs16384 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_spare2 = 14, /**< ASN.1 spare2 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions_spare1 = 15, /**< ASN.1 spare1 */
} PDCP_Parameters_MaxNumberROHC_ContextSessions;


/**
 * @brief 枚举 PDCP_Parameters_UplinkOnlyROHC_Profiles（ASN.1 uplinkOnlyROHC-Profiles，源文件第 18686 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_UplinkOnlyROHC_Profiles {
    PDCP_Parameters_UplinkOnlyROHC_Profiles_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_UplinkOnlyROHC_Profiles;


/**
 * @brief 枚举 PDCP_Parameters_ContinueROHC_Context（ASN.1 continueROHC-Context，源文件第 18687 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ContinueROHC_Context {
    PDCP_Parameters_ContinueROHC_Context_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ContinueROHC_Context;


/**
 * @brief 枚举 PDCP_Parameters_OutOfOrderDelivery（ASN.1 outOfOrderDelivery，源文件第 18688 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_OutOfOrderDelivery {
    PDCP_Parameters_OutOfOrderDelivery_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_OutOfOrderDelivery;


/**
 * @brief 枚举 PDCP_Parameters_ShortSN（ASN.1 shortSN，源文件第 18689 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ShortSN {
    PDCP_Parameters_ShortSN_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ShortSN;


/**
 * @brief 枚举 PDCP_Parameters_Pdcp_DuplicationSRB（ASN.1 pdcp-DuplicationSRB，源文件第 18690 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_Pdcp_DuplicationSRB {
    PDCP_Parameters_Pdcp_DuplicationSRB_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_Pdcp_DuplicationSRB;


/**
 * @brief 枚举 PDCP_Parameters_Pdcp_DuplicationMCG_OrSCG_DRB（ASN.1 pdcp-DuplicationMCG-OrSCG-DRB，源文件第 18691 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_Pdcp_DuplicationMCG_OrSCG_DRB {
    PDCP_Parameters_Pdcp_DuplicationMCG_OrSCG_DRB_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_Pdcp_DuplicationMCG_OrSCG_DRB;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup1_Drb_IAB_r16（ASN.1 drb-IAB-r16，源文件第 18694 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup1_Drb_IAB_r16 {
    PDCP_Parameters_ExtGroup1_Drb_IAB_r16_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup1_Drb_IAB_r16;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup1_Non_DRB_IAB_r16（ASN.1 non-DRB-IAB-r16，源文件第 18695 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup1_Non_DRB_IAB_r16 {
    PDCP_Parameters_ExtGroup1_Non_DRB_IAB_r16_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup1_Non_DRB_IAB_r16;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup1_ExtendedDiscardTimer_r16（ASN.1 extendedDiscardTimer-r16，源文件第 18696 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup1_ExtendedDiscardTimer_r16 {
    PDCP_Parameters_ExtGroup1_ExtendedDiscardTimer_r16_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup1_ExtendedDiscardTimer_r16;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup1_ContinueEHC_Context_r16（ASN.1 continueEHC-Context-r16，源文件第 18697 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup1_ContinueEHC_Context_r16 {
    PDCP_Parameters_ExtGroup1_ContinueEHC_Context_r16_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup1_ContinueEHC_Context_r16;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup1_Ehc_r16（ASN.1 ehc-r16，源文件第 18698 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup1_Ehc_r16 {
    PDCP_Parameters_ExtGroup1_Ehc_r16_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup1_Ehc_r16;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16（ASN.1 maxNumberEHC-Contexts-r16，源文件第 18699 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16 {
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs2 = 0, /**< ASN.1 cs2 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs4 = 1, /**< ASN.1 cs4 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs8 = 2, /**< ASN.1 cs8 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs16 = 3, /**< ASN.1 cs16 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs32 = 4, /**< ASN.1 cs32 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs64 = 5, /**< ASN.1 cs64 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs128 = 6, /**< ASN.1 cs128 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs256 = 7, /**< ASN.1 cs256 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs512 = 8, /**< ASN.1 cs512 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs1024 = 9, /**< ASN.1 cs1024 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs2048 = 10, /**< ASN.1 cs2048 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs4096 = 11, /**< ASN.1 cs4096 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs8192 = 12, /**< ASN.1 cs8192 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs16384 = 13, /**< ASN.1 cs16384 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs32768 = 14, /**< ASN.1 cs32768 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16_cs65536 = 15, /**< ASN.1 cs65536 */
} PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup1_JointEHC_ROHC_Config_r16（ASN.1 jointEHC-ROHC-Config-r16，源文件第 18701 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup1_JointEHC_ROHC_Config_r16 {
    PDCP_Parameters_ExtGroup1_JointEHC_ROHC_Config_r16_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup1_JointEHC_ROHC_Config_r16;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup1_Pdcp_DuplicationMoreThanTwoRLC_r16（ASN.1 pdcp-DuplicationMoreThanTwoRLC-r16，源文件第 18702 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup1_Pdcp_DuplicationMoreThanTwoRLC_r16 {
    PDCP_Parameters_ExtGroup1_Pdcp_DuplicationMoreThanTwoRLC_r16_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup1_Pdcp_DuplicationMoreThanTwoRLC_r16;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup2_LongSN_RedCap_r17（ASN.1 longSN-RedCap-r17，源文件第 18705 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup2_LongSN_RedCap_r17 {
    PDCP_Parameters_ExtGroup2_LongSN_RedCap_r17_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup2_LongSN_RedCap_r17;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup2_Udc_r17_StandardDictionary_r17（ASN.1 udc-r17/standardDictionary-r17，源文件第 18707 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup2_Udc_r17_StandardDictionary_r17 {
    PDCP_Parameters_ExtGroup2_Udc_r17_StandardDictionary_r17_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup2_Udc_r17_StandardDictionary_r17;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup2_Udc_r17_ContinueUDC_r17（ASN.1 udc-r17/continueUDC-r17，源文件第 18712 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup2_Udc_r17_ContinueUDC_r17 {
    PDCP_Parameters_ExtGroup2_Udc_r17_ContinueUDC_r17_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup2_Udc_r17_ContinueUDC_r17;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup2_Udc_r17_SupportOfBufferSize_r17（ASN.1 udc-r17/supportOfBufferSize-r17，源文件第 18713 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup2_Udc_r17_SupportOfBufferSize_r17 {
    PDCP_Parameters_ExtGroup2_Udc_r17_SupportOfBufferSize_r17_kbyte4 = 0, /**< ASN.1 kbyte4 */
    PDCP_Parameters_ExtGroup2_Udc_r17_SupportOfBufferSize_r17_kbyte8 = 1, /**< ASN.1 kbyte8 */
} PDCP_Parameters_ExtGroup2_Udc_r17_SupportOfBufferSize_r17;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup3_LongSN_NCR_r18（ASN.1 longSN-NCR-r18，源文件第 18717 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup3_LongSN_NCR_r18 {
    PDCP_Parameters_ExtGroup3_LongSN_NCR_r18_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup3_LongSN_NCR_r18;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup3_Pdu_SetDiscard_r18（ASN.1 pdu-SetDiscard-r18，源文件第 18718 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup3_Pdu_SetDiscard_r18 {
    PDCP_Parameters_ExtGroup3_Pdu_SetDiscard_r18_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup3_Pdu_SetDiscard_r18;


/**
 * @brief 枚举 PDCP_Parameters_ExtGroup3_Psi_BasedDiscard_r18（ASN.1 psi-BasedDiscard-r18，源文件第 18719 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_Parameters_ExtGroup3_Psi_BasedDiscard_r18 {
    PDCP_Parameters_ExtGroup3_Psi_BasedDiscard_r18_supported = 0, /**< ASN.1 supported */
} PDCP_Parameters_ExtGroup3_Psi_BasedDiscard_r18;


/**
 * @brief 枚举 PDCP_ParametersMRDC_Pdcp_DuplicationSplitSRB（ASN.1 pdcp-DuplicationSplitSRB，源文件第 18727 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_ParametersMRDC_Pdcp_DuplicationSplitSRB {
    PDCP_ParametersMRDC_Pdcp_DuplicationSplitSRB_supported = 0, /**< ASN.1 supported */
} PDCP_ParametersMRDC_Pdcp_DuplicationSplitSRB;


/**
 * @brief 枚举 PDCP_ParametersMRDC_Pdcp_DuplicationSplitDRB（ASN.1 pdcp-DuplicationSplitDRB，源文件第 18728 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_ParametersMRDC_Pdcp_DuplicationSplitDRB {
    PDCP_ParametersMRDC_Pdcp_DuplicationSplitDRB_supported = 0, /**< ASN.1 supported */
} PDCP_ParametersMRDC_Pdcp_DuplicationSplitDRB;


/**
 * @brief 枚举 PDCP_ParametersMRDC_v1610_Scg_DRB_NR_IAB_r16（ASN.1 scg-DRB-NR-IAB-r16，源文件第 18732 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_ParametersMRDC_v1610_Scg_DRB_NR_IAB_r16 {
    PDCP_ParametersMRDC_v1610_Scg_DRB_NR_IAB_r16_supported = 0, /**< ASN.1 supported */
} PDCP_ParametersMRDC_v1610_Scg_DRB_NR_IAB_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_Csi_RS_CFRA_ForHO（ASN.1 csi-RS-CFRA-ForHO，源文件第 18751 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Csi_RS_CFRA_ForHO {
    Phy_ParametersCommon_Csi_RS_CFRA_ForHO_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Csi_RS_CFRA_ForHO;


/**
 * @brief 枚举 Phy_ParametersCommon_DynamicPRB_BundlingDL（ASN.1 dynamicPRB-BundlingDL，源文件第 18752 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_DynamicPRB_BundlingDL {
    Phy_ParametersCommon_DynamicPRB_BundlingDL_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_DynamicPRB_BundlingDL;


/**
 * @brief 枚举 Phy_ParametersCommon_Sp_CSI_ReportPUCCH（ASN.1 sp-CSI-ReportPUCCH，源文件第 18753 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Sp_CSI_ReportPUCCH {
    Phy_ParametersCommon_Sp_CSI_ReportPUCCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Sp_CSI_ReportPUCCH;


/**
 * @brief 枚举 Phy_ParametersCommon_Sp_CSI_ReportPUSCH（ASN.1 sp-CSI-ReportPUSCH，源文件第 18754 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Sp_CSI_ReportPUSCH {
    Phy_ParametersCommon_Sp_CSI_ReportPUSCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Sp_CSI_ReportPUSCH;


/**
 * @brief 枚举 Phy_ParametersCommon_Nzp_CSI_RS_IntefMgmt（ASN.1 nzp-CSI-RS-IntefMgmt，源文件第 18755 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Nzp_CSI_RS_IntefMgmt {
    Phy_ParametersCommon_Nzp_CSI_RS_IntefMgmt_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Nzp_CSI_RS_IntefMgmt;


/**
 * @brief 枚举 Phy_ParametersCommon_Type2_SP_CSI_Feedback_LongPUCCH（ASN.1 type2-SP-CSI-Feedback-LongPUCCH，源文件第 18756 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Type2_SP_CSI_Feedback_LongPUCCH {
    Phy_ParametersCommon_Type2_SP_CSI_Feedback_LongPUCCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Type2_SP_CSI_Feedback_LongPUCCH;


/**
 * @brief 枚举 Phy_ParametersCommon_PrecoderGranularityCORESET（ASN.1 precoderGranularityCORESET，源文件第 18757 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_PrecoderGranularityCORESET {
    Phy_ParametersCommon_PrecoderGranularityCORESET_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_PrecoderGranularityCORESET;


/**
 * @brief 枚举 Phy_ParametersCommon_DynamicHARQ_ACK_Codebook（ASN.1 dynamicHARQ-ACK-Codebook，源文件第 18758 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_DynamicHARQ_ACK_Codebook {
    Phy_ParametersCommon_DynamicHARQ_ACK_Codebook_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_DynamicHARQ_ACK_Codebook;


/**
 * @brief 枚举 Phy_ParametersCommon_SemiStaticHARQ_ACK_Codebook（ASN.1 semiStaticHARQ-ACK-Codebook，源文件第 18759 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_SemiStaticHARQ_ACK_Codebook {
    Phy_ParametersCommon_SemiStaticHARQ_ACK_Codebook_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_SemiStaticHARQ_ACK_Codebook;


/**
 * @brief 枚举 Phy_ParametersCommon_SpatialBundlingHARQ_ACK（ASN.1 spatialBundlingHARQ-ACK，源文件第 18760 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_SpatialBundlingHARQ_ACK {
    Phy_ParametersCommon_SpatialBundlingHARQ_ACK_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_SpatialBundlingHARQ_ACK;


/**
 * @brief 枚举 Phy_ParametersCommon_DynamicBetaOffsetInd_HARQ_ACK_CSI（ASN.1 dynamicBetaOffsetInd-HARQ-ACK-CSI，源文件第 18761 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_DynamicBetaOffsetInd_HARQ_ACK_CSI {
    Phy_ParametersCommon_DynamicBetaOffsetInd_HARQ_ACK_CSI_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_DynamicBetaOffsetInd_HARQ_ACK_CSI;


/**
 * @brief 枚举 Phy_ParametersCommon_Pucch_Repetition_F1_3_4（ASN.1 pucch-Repetition-F1-3-4，源文件第 18762 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Pucch_Repetition_F1_3_4 {
    Phy_ParametersCommon_Pucch_Repetition_F1_3_4_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Pucch_Repetition_F1_3_4;


/**
 * @brief 枚举 Phy_ParametersCommon_Ra_Type0_PUSCH（ASN.1 ra-Type0-PUSCH，源文件第 18763 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Ra_Type0_PUSCH {
    Phy_ParametersCommon_Ra_Type0_PUSCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Ra_Type0_PUSCH;


/**
 * @brief 枚举 Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PDSCH（ASN.1 dynamicSwitchRA-Type0-1-PDSCH，源文件第 18764 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PDSCH {
    Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PDSCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PDSCH;


/**
 * @brief 枚举 Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PUSCH（ASN.1 dynamicSwitchRA-Type0-1-PUSCH，源文件第 18765 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PUSCH {
    Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PUSCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PUSCH;


/**
 * @brief 枚举 Phy_ParametersCommon_Pdsch_MappingTypeA（ASN.1 pdsch-MappingTypeA，源文件第 18766 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Pdsch_MappingTypeA {
    Phy_ParametersCommon_Pdsch_MappingTypeA_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Pdsch_MappingTypeA;


/**
 * @brief 枚举 Phy_ParametersCommon_Pdsch_MappingTypeB（ASN.1 pdsch-MappingTypeB，源文件第 18767 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Pdsch_MappingTypeB {
    Phy_ParametersCommon_Pdsch_MappingTypeB_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Pdsch_MappingTypeB;


/**
 * @brief 枚举 Phy_ParametersCommon_InterleavingVRB_ToPRB_PDSCH（ASN.1 interleavingVRB-ToPRB-PDSCH，源文件第 18768 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_InterleavingVRB_ToPRB_PDSCH {
    Phy_ParametersCommon_InterleavingVRB_ToPRB_PDSCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_InterleavingVRB_ToPRB_PDSCH;


/**
 * @brief 枚举 Phy_ParametersCommon_InterSlotFreqHopping_PUSCH（ASN.1 interSlotFreqHopping-PUSCH，源文件第 18769 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_InterSlotFreqHopping_PUSCH {
    Phy_ParametersCommon_InterSlotFreqHopping_PUSCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_InterSlotFreqHopping_PUSCH;


/**
 * @brief 枚举 Phy_ParametersCommon_Type1_PUSCH_RepetitionMultiSlots（ASN.1 type1-PUSCH-RepetitionMultiSlots，源文件第 18770 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Type1_PUSCH_RepetitionMultiSlots {
    Phy_ParametersCommon_Type1_PUSCH_RepetitionMultiSlots_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Type1_PUSCH_RepetitionMultiSlots;


/**
 * @brief 枚举 Phy_ParametersCommon_Type2_PUSCH_RepetitionMultiSlots（ASN.1 type2-PUSCH-RepetitionMultiSlots，源文件第 18771 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Type2_PUSCH_RepetitionMultiSlots {
    Phy_ParametersCommon_Type2_PUSCH_RepetitionMultiSlots_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Type2_PUSCH_RepetitionMultiSlots;


/**
 * @brief 枚举 Phy_ParametersCommon_Pusch_RepetitionMultiSlots（ASN.1 pusch-RepetitionMultiSlots，源文件第 18772 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Pusch_RepetitionMultiSlots {
    Phy_ParametersCommon_Pusch_RepetitionMultiSlots_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Pusch_RepetitionMultiSlots;


/**
 * @brief 枚举 Phy_ParametersCommon_Pdsch_RepetitionMultiSlots（ASN.1 pdsch-RepetitionMultiSlots，源文件第 18773 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Pdsch_RepetitionMultiSlots {
    Phy_ParametersCommon_Pdsch_RepetitionMultiSlots_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Pdsch_RepetitionMultiSlots;


/**
 * @brief 枚举 Phy_ParametersCommon_DownlinkSPS（ASN.1 downlinkSPS，源文件第 18774 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_DownlinkSPS {
    Phy_ParametersCommon_DownlinkSPS_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_DownlinkSPS;


/**
 * @brief 枚举 Phy_ParametersCommon_ConfiguredUL_GrantType1（ASN.1 configuredUL-GrantType1，源文件第 18775 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ConfiguredUL_GrantType1 {
    Phy_ParametersCommon_ConfiguredUL_GrantType1_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ConfiguredUL_GrantType1;


/**
 * @brief 枚举 Phy_ParametersCommon_ConfiguredUL_GrantType2（ASN.1 configuredUL-GrantType2，源文件第 18776 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ConfiguredUL_GrantType2 {
    Phy_ParametersCommon_ConfiguredUL_GrantType2_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ConfiguredUL_GrantType2;


/**
 * @brief 枚举 Phy_ParametersCommon_Pre_EmptIndication_DL（ASN.1 pre-EmptIndication-DL，源文件第 18777 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Pre_EmptIndication_DL {
    Phy_ParametersCommon_Pre_EmptIndication_DL_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Pre_EmptIndication_DL;


/**
 * @brief 枚举 Phy_ParametersCommon_Cbg_TransIndication_DL（ASN.1 cbg-TransIndication-DL，源文件第 18778 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Cbg_TransIndication_DL {
    Phy_ParametersCommon_Cbg_TransIndication_DL_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Cbg_TransIndication_DL;


/**
 * @brief 枚举 Phy_ParametersCommon_Cbg_TransIndication_UL（ASN.1 cbg-TransIndication-UL，源文件第 18779 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Cbg_TransIndication_UL {
    Phy_ParametersCommon_Cbg_TransIndication_UL_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Cbg_TransIndication_UL;


/**
 * @brief 枚举 Phy_ParametersCommon_Cbg_FlushIndication_DL（ASN.1 cbg-FlushIndication-DL，源文件第 18780 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Cbg_FlushIndication_DL {
    Phy_ParametersCommon_Cbg_FlushIndication_DL_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_Cbg_FlushIndication_DL;


/**
 * @brief 枚举 Phy_ParametersCommon_DynamicHARQ_ACK_CodeB_CBG_Retx_DL（ASN.1 dynamicHARQ-ACK-CodeB-CBG-Retx-DL，源文件第 18781 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_DynamicHARQ_ACK_CodeB_CBG_Retx_DL {
    Phy_ParametersCommon_DynamicHARQ_ACK_CodeB_CBG_Retx_DL_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_DynamicHARQ_ACK_CodeB_CBG_Retx_DL;


/**
 * @brief 枚举 Phy_ParametersCommon_RateMatchingResrcSetSemi_Static（ASN.1 rateMatchingResrcSetSemi-Static，源文件第 18782 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_RateMatchingResrcSetSemi_Static {
    Phy_ParametersCommon_RateMatchingResrcSetSemi_Static_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_RateMatchingResrcSetSemi_Static;


/**
 * @brief 枚举 Phy_ParametersCommon_RateMatchingResrcSetDynamic（ASN.1 rateMatchingResrcSetDynamic，源文件第 18783 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_RateMatchingResrcSetDynamic {
    Phy_ParametersCommon_RateMatchingResrcSetDynamic_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_RateMatchingResrcSetDynamic;


/**
 * @brief 枚举 Phy_ParametersCommon_Bwp_SwitchingDelay（ASN.1 bwp-SwitchingDelay，源文件第 18784 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_Bwp_SwitchingDelay {
    Phy_ParametersCommon_Bwp_SwitchingDelay_type1 = 0, /**< ASN.1 type1 */
    Phy_ParametersCommon_Bwp_SwitchingDelay_type2 = 1, /**< ASN.1 type2 */
} Phy_ParametersCommon_Bwp_SwitchingDelay;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup1_Dummy（ASN.1 dummy，源文件第 18787 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup1_Dummy {
    Phy_ParametersCommon_ExtGroup1_Dummy_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup1_Dummy;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup2_MaxNumberSearchSpaces（ASN.1 maxNumberSearchSpaces，源文件第 18790 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup2_MaxNumberSearchSpaces {
    Phy_ParametersCommon_ExtGroup2_MaxNumberSearchSpaces_n10 = 0, /**< ASN.1 n10 */
} Phy_ParametersCommon_ExtGroup2_MaxNumberSearchSpaces;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup2_RateMatchingCtrlResrcSetDynamic（ASN.1 rateMatchingCtrlResrcSetDynamic，源文件第 18791 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup2_RateMatchingCtrlResrcSetDynamic {
    Phy_ParametersCommon_ExtGroup2_RateMatchingCtrlResrcSetDynamic_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup2_RateMatchingCtrlResrcSetDynamic;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup2_MaxLayersMIMO_Indication（ASN.1 maxLayersMIMO-Indication，源文件第 18792 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup2_MaxLayersMIMO_Indication {
    Phy_ParametersCommon_ExtGroup2_MaxLayersMIMO_Indication_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup2_MaxLayersMIMO_Indication;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_TwoStepRACH_r16（ASN.1 twoStepRACH-r16，源文件第 18799 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_TwoStepRACH_r16 {
    Phy_ParametersCommon_ExtGroup4_TwoStepRACH_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_TwoStepRACH_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Dci_Format1_2And0_2_r16（ASN.1 dci-Format1-2And0-2-r16，源文件第 18801 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Dci_Format1_2And0_2_r16 {
    Phy_ParametersCommon_ExtGroup4_Dci_Format1_2And0_2_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Dci_Format1_2And0_2_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_MonitoringDCI_SameSearchSpace_r16（ASN.1 monitoringDCI-SameSearchSpace-r16，源文件第 18803 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_MonitoringDCI_SameSearchSpace_r16 {
    Phy_ParametersCommon_ExtGroup4_MonitoringDCI_SameSearchSpace_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_MonitoringDCI_SameSearchSpace_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_1_r16（ASN.1 type2-CG-ReleaseDCI-0-1-r16，源文件第 18805 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_1_r16 {
    Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_1_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_1_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_2_r16（ASN.1 type2-CG-ReleaseDCI-0-2-r16，源文件第 18807 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_2_r16 {
    Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_2_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_2_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_1_r16（ASN.1 sps-ReleaseDCI-1-1-r16，源文件第 18809 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_1_r16 {
    Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_1_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_1_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_2_r16（ASN.1 sps-ReleaseDCI-1-2-r16，源文件第 18811 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_2_r16 {
    Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_2_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_2_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Csi_TriggerStateNon_ActiveBWP_r16（ASN.1 csi-TriggerStateNon-ActiveBWP-r16，源文件第 18813 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Csi_TriggerStateNon_ActiveBWP_r16 {
    Phy_ParametersCommon_ExtGroup4_Csi_TriggerStateNon_ActiveBWP_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Csi_TriggerStateNon_ActiveBWP_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_SeparateSMTC_InterIAB_Support_r16（ASN.1 separateSMTC-InterIAB-Support-r16，源文件第 18815 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_SeparateSMTC_InterIAB_Support_r16 {
    Phy_ParametersCommon_ExtGroup4_SeparateSMTC_InterIAB_Support_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_SeparateSMTC_InterIAB_Support_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_SeparateRACH_IAB_Support_r16（ASN.1 separateRACH-IAB-Support-r16，源文件第 18817 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_SeparateRACH_IAB_Support_r16 {
    Phy_ParametersCommon_ExtGroup4_SeparateRACH_IAB_Support_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_SeparateRACH_IAB_Support_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatSemiStatic_IAB_r16（ASN.1 ul-flexibleDL-SlotFormatSemiStatic-IAB-r16，源文件第 18819 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatSemiStatic_IAB_r16 {
    Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatSemiStatic_IAB_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatSemiStatic_IAB_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatDynamics_IAB_r16（ASN.1 ul-flexibleDL-SlotFormatDynamics-IAB-r16，源文件第 18821 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatDynamics_IAB_r16 {
    Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatDynamics_IAB_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatDynamics_IAB_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Dft_S_OFDM_WaveformUL_IAB_r16（ASN.1 dft-S-OFDM-WaveformUL-IAB-r16，源文件第 18822 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Dft_S_OFDM_WaveformUL_IAB_r16 {
    Phy_ParametersCommon_ExtGroup4_Dft_S_OFDM_WaveformUL_IAB_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Dft_S_OFDM_WaveformUL_IAB_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Dci_25_AI_RNTI_Support_IAB_r16（ASN.1 dci-25-AI-RNTI-Support-IAB-r16，源文件第 18824 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Dci_25_AI_RNTI_Support_IAB_r16 {
    Phy_ParametersCommon_ExtGroup4_Dci_25_AI_RNTI_Support_IAB_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Dci_25_AI_RNTI_Support_IAB_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_T_DeltaReceptionSupport_IAB_r16（ASN.1 t-DeltaReceptionSupport-IAB-r16，源文件第 18826 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_T_DeltaReceptionSupport_IAB_r16 {
    Phy_ParametersCommon_ExtGroup4_T_DeltaReceptionSupport_IAB_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_T_DeltaReceptionSupport_IAB_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_GuardSymbolReportReception_IAB_r16（ASN.1 guardSymbolReportReception-IAB-r16，源文件第 18828 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_GuardSymbolReportReception_IAB_r16 {
    Phy_ParametersCommon_ExtGroup4_GuardSymbolReportReception_IAB_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_GuardSymbolReportReception_IAB_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_HarqACK_CB_SpatialBundlingPUCCH_Group_r16（ASN.1 harqACK-CB-SpatialBundlingPUCCH-Group-r16，源文件第 18830 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_HarqACK_CB_SpatialBundlingPUCCH_Group_r16 {
    Phy_ParametersCommon_ExtGroup4_HarqACK_CB_SpatialBundlingPUCCH_Group_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_HarqACK_CB_SpatialBundlingPUCCH_Group_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_Non_SharedSpectrumChAccess_r16（ASN.1 crossSlotScheduling-r16/non-SharedSpectrumChAccess-r16，源文件第 18833 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_Non_SharedSpectrumChAccess_r16 {
    Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_Non_SharedSpectrumChAccess_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_Non_SharedSpectrumChAccess_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_SharedSpectrumChAccess_r16（ASN.1 crossSlotScheduling-r16/sharedSpectrumChAccess-r16，源文件第 18834 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_SharedSpectrumChAccess_r16 {
    Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_SharedSpectrumChAccess_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_SharedSpectrumChAccess_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_MaxNumberSRS_PosPathLossEstimateAllServingCells_r16（ASN.1 maxNumberSRS-PosPathLossEstimateAllServingCells-r16，源文件第 18836 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_MaxNumberSRS_PosPathLossEstimateAllServingCells_r16 {
    Phy_ParametersCommon_ExtGroup4_MaxNumberSRS_PosPathLossEstimateAllServingCells_r16_n1 = 0, /**< ASN.1 n1 */
    Phy_ParametersCommon_ExtGroup4_MaxNumberSRS_PosPathLossEstimateAllServingCells_r16_n4 = 1, /**< ASN.1 n4 */
    Phy_ParametersCommon_ExtGroup4_MaxNumberSRS_PosPathLossEstimateAllServingCells_r16_n8 = 2, /**< ASN.1 n8 */
    Phy_ParametersCommon_ExtGroup4_MaxNumberSRS_PosPathLossEstimateAllServingCells_r16_n16 = 3, /**< ASN.1 n16 */
} Phy_ParametersCommon_ExtGroup4_MaxNumberSRS_PosPathLossEstimateAllServingCells_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_ExtendedCG_Periodicities_r16（ASN.1 extendedCG-Periodicities-r16，源文件第 18837 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_ExtendedCG_Periodicities_r16 {
    Phy_ParametersCommon_ExtGroup4_ExtendedCG_Periodicities_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_ExtendedCG_Periodicities_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_ExtendedSPS_Periodicities_r16（ASN.1 extendedSPS-Periodicities-r16，源文件第 18838 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_ExtendedSPS_Periodicities_r16 {
    Phy_ParametersCommon_ExtGroup4_ExtendedSPS_Periodicities_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_ExtendedSPS_Periodicities_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_SharedSpectrumChAccess_r16（ASN.1 pusch-RepetitionTypeA-r16/sharedSpectrumChAccess-r16，源文件第 18842 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_SharedSpectrumChAccess_r16 {
    Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_SharedSpectrumChAccess_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_SharedSpectrumChAccess_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_Non_SharedSpectrumChAccess_r16（ASN.1 pusch-RepetitionTypeA-r16/non-SharedSpectrumChAccess-r16，源文件第 18843 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_Non_SharedSpectrumChAccess_r16 {
    Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_Non_SharedSpectrumChAccess_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_Non_SharedSpectrumChAccess_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Dci_DL_PriorityIndicator_r16（ASN.1 dci-DL-PriorityIndicator-r16，源文件第 18846 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Dci_DL_PriorityIndicator_r16 {
    Phy_ParametersCommon_ExtGroup4_Dci_DL_PriorityIndicator_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Dci_DL_PriorityIndicator_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Dci_UL_PriorityIndicator_r16（ASN.1 dci-UL-PriorityIndicator-r16，源文件第 18848 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Dci_UL_PriorityIndicator_r16 {
    Phy_ParametersCommon_ExtGroup4_Dci_UL_PriorityIndicator_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Dci_UL_PriorityIndicator_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_MaxNumberPathlossRS_Update_r16（ASN.1 maxNumberPathlossRS-Update-r16，源文件第 18850 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_MaxNumberPathlossRS_Update_r16 {
    Phy_ParametersCommon_ExtGroup4_MaxNumberPathlossRS_Update_r16_n4 = 0, /**< ASN.1 n4 */
    Phy_ParametersCommon_ExtGroup4_MaxNumberPathlossRS_Update_r16_n8 = 1, /**< ASN.1 n8 */
    Phy_ParametersCommon_ExtGroup4_MaxNumberPathlossRS_Update_r16_n16 = 2, /**< ASN.1 n16 */
    Phy_ParametersCommon_ExtGroup4_MaxNumberPathlossRS_Update_r16_n32 = 3, /**< ASN.1 n32 */
    Phy_ParametersCommon_ExtGroup4_MaxNumberPathlossRS_Update_r16_n64 = 4, /**< ASN.1 n64 */
} Phy_ParametersCommon_ExtGroup4_MaxNumberPathlossRS_Update_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Type2_HARQ_ACK_Codebook_r16（ASN.1 type2-HARQ-ACK-Codebook-r16，源文件第 18853 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Type2_HARQ_ACK_Codebook_r16 {
    Phy_ParametersCommon_ExtGroup4_Type2_HARQ_ACK_Codebook_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_Type2_HARQ_ACK_Codebook_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16（ASN.1 maxTotalResourcesForAcrossFreqRanges-r16/maxNumberResWithinSlotAcrossCC-AcrossFR-r16，源文件第 18856 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16 {
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16_n2 = 0, /**< ASN.1 n2 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16_n4 = 1, /**< ASN.1 n4 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16_n8 = 2, /**< ASN.1 n8 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16_n12 = 3, /**< ASN.1 n12 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16_n16 = 4, /**< ASN.1 n16 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16_n32 = 5, /**< ASN.1 n32 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16_n64 = 6, /**< ASN.1 n64 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16_n128 = 7, /**< ASN.1 n128 */
} Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16（ASN.1 maxTotalResourcesForAcrossFreqRanges-r16/maxNumberResAcrossCC-AcrossFR-r16，源文件第 18857 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16 {
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n2 = 0, /**< ASN.1 n2 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n4 = 1, /**< ASN.1 n4 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n8 = 2, /**< ASN.1 n8 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n12 = 3, /**< ASN.1 n12 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n16 = 4, /**< ASN.1 n16 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n32 = 5, /**< ASN.1 n32 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n40 = 6, /**< ASN.1 n40 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n48 = 7, /**< ASN.1 n48 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n64 = 8, /**< ASN.1 n64 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n72 = 9, /**< ASN.1 n72 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n80 = 10, /**< ASN.1 n80 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n96 = 11, /**< ASN.1 n96 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n128 = 12, /**< ASN.1 n128 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16_n256 = 13, /**< ASN.1 n256 */
} Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16_MaxNumberLongPUCCHs_r16（ASN.1 harqACK-separateMultiDCI-MultiTRP-r16/maxNumberLongPUCCHs-r16，源文件第 18862 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16_MaxNumberLongPUCCHs_r16 {
    Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16_MaxNumberLongPUCCHs_r16_longAndLong = 0, /**< ASN.1 longAndLong */
    Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16_MaxNumberLongPUCCHs_r16_longAndShort = 1, /**< ASN.1 longAndShort */
    Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16_MaxNumberLongPUCCHs_r16_shortAndShort = 2, /**< ASN.1 shortAndShort */
} Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16_MaxNumberLongPUCCHs_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_HarqACK_jointMultiDCI_MultiTRP_r16（ASN.1 harqACK-jointMultiDCI-MultiTRP-r16，源文件第 18865 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_HarqACK_jointMultiDCI_MultiTRP_r16 {
    Phy_ParametersCommon_ExtGroup4_HarqACK_jointMultiDCI_MultiTRP_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup4_HarqACK_jointMultiDCI_MultiTRP_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type1_r16（ASN.1 bwp-SwitchingMultiCCs-r16/type1-r16，源文件第 18868 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type1_r16 {
    Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type1_r16_us100 = 0, /**< ASN.1 us100 */
    Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type1_r16_us200 = 1, /**< ASN.1 us200 */
} Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type1_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type2_r16（ASN.1 bwp-SwitchingMultiCCs-r16/type2-r16，源文件第 18869 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type2_r16 {
    Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type2_r16_us200 = 0, /**< ASN.1 us200 */
    Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type2_r16_us400 = 1, /**< ASN.1 us400 */
    Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type2_r16_us800 = 2, /**< ASN.1 us800 */
    Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type2_r16_us1000 = 3, /**< ASN.1 us1000 */
} Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type2_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup5_TargetSMTC_SCG_r16（ASN.1 targetSMTC-SCG-r16，源文件第 18873 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup5_TargetSMTC_SCG_r16 {
    Phy_ParametersCommon_ExtGroup5_TargetSMTC_SCG_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup5_TargetSMTC_SCG_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup5_SupportRepetitionZeroOffsetRV_r16（ASN.1 supportRepetitionZeroOffsetRV-r16，源文件第 18874 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup5_SupportRepetitionZeroOffsetRV_r16 {
    Phy_ParametersCommon_ExtGroup5_SupportRepetitionZeroOffsetRV_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup5_SupportRepetitionZeroOffsetRV_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup5_Cbg_TransInOrderPUSCH_UL_r16（ASN.1 cbg-TransInOrderPUSCH-UL-r16，源文件第 18876 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup5_Cbg_TransInOrderPUSCH_UL_r16 {
    Phy_ParametersCommon_ExtGroup5_Cbg_TransInOrderPUSCH_UL_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup5_Cbg_TransInOrderPUSCH_UL_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type1_r16（ASN.1 bwp-SwitchingMultiDormancyCCs-r16/type1-r16，源文件第 18881 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type1_r16 {
    Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type1_r16_us100 = 0, /**< ASN.1 us100 */
    Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type1_r16_us200 = 1, /**< ASN.1 us200 */
} Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type1_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type2_r16（ASN.1 bwp-SwitchingMultiDormancyCCs-r16/type2-r16，源文件第 18882 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type2_r16 {
    Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type2_r16_us200 = 0, /**< ASN.1 us200 */
    Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type2_r16_us400 = 1, /**< ASN.1 us400 */
    Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type2_r16_us800 = 2, /**< ASN.1 us800 */
    Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type2_r16_us1000 = 3, /**< ASN.1 us1000 */
} Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type2_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup6_SupportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16（ASN.1 supportRetx-Diff-CoresetPool-Multi-DCI-TRP-r16，源文件第 18885 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup6_SupportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16 {
    Phy_ParametersCommon_ExtGroup6_SupportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16_notSupported = 0, /**< ASN.1 notSupported */
} Phy_ParametersCommon_ExtGroup6_SupportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup6_Pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16（ASN.1 pdcch-MonitoringAnyOccasionsWithSpanGapCrossCarrierSch-r16，源文件第 18887 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup6_Pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16 {
    Phy_ParametersCommon_ExtGroup6_Pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16_mode2 = 0, /**< ASN.1 mode2 */
    Phy_ParametersCommon_ExtGroup6_Pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16_mode3 = 1, /**< ASN.1 mode3 */
} Phy_ParametersCommon_ExtGroup6_Pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup7_NewBeamIdentifications2PortCSI_RS_r16（ASN.1 newBeamIdentifications2PortCSI-RS-r16，源文件第 18891 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup7_NewBeamIdentifications2PortCSI_RS_r16 {
    Phy_ParametersCommon_ExtGroup7_NewBeamIdentifications2PortCSI_RS_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup7_NewBeamIdentifications2PortCSI_RS_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup7_PathlossEstimation2PortCSI_RS_r16（ASN.1 pathlossEstimation2PortCSI-RS-r16，源文件第 18893 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup7_PathlossEstimation2PortCSI_RS_r16 {
    Phy_ParametersCommon_ExtGroup7_PathlossEstimation2PortCSI_RS_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup7_PathlossEstimation2PortCSI_RS_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup8_Mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16（ASN.1 mux-HARQ-ACK-withoutPUCCH-onPUSCH-r16，源文件第 18896 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup8_Mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16 {
    Phy_ParametersCommon_ExtGroup8_Mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup8_Mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_GuardSymbolReportReception_IAB_r17（ASN.1 guardSymbolReportReception-IAB-r17，源文件第 18900 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_GuardSymbolReportReception_IAB_r17 {
    Phy_ParametersCommon_ExtGroup9_GuardSymbolReportReception_IAB_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_GuardSymbolReportReception_IAB_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Restricted_IAB_DU_BeamReception_r17（ASN.1 restricted-IAB-DU-BeamReception-r17，源文件第 18902 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Restricted_IAB_DU_BeamReception_r17 {
    Phy_ParametersCommon_ExtGroup9_Restricted_IAB_DU_BeamReception_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Restricted_IAB_DU_BeamReception_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Recommended_IAB_MT_BeamTransmission_r17（ASN.1 recommended-IAB-MT-BeamTransmission-r17，源文件第 18904 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Recommended_IAB_MT_BeamTransmission_r17 {
    Phy_ParametersCommon_ExtGroup9_Recommended_IAB_MT_BeamTransmission_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Recommended_IAB_MT_BeamTransmission_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Case6_TimingAlignmentReception_IAB_r17（ASN.1 case6-TimingAlignmentReception-IAB-r17，源文件第 18906 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Case6_TimingAlignmentReception_IAB_r17 {
    Phy_ParametersCommon_ExtGroup9_Case6_TimingAlignmentReception_IAB_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Case6_TimingAlignmentReception_IAB_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Case7_TimingAlignmentReception_IAB_r17（ASN.1 case7-TimingAlignmentReception-IAB-r17，源文件第 18908 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Case7_TimingAlignmentReception_IAB_r17 {
    Phy_ParametersCommon_ExtGroup9_Case7_TimingAlignmentReception_IAB_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Case7_TimingAlignmentReception_IAB_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Dl_tx_PowerAdjustment_IAB_r17（ASN.1 dl-tx-PowerAdjustment-IAB-r17，源文件第 18910 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Dl_tx_PowerAdjustment_IAB_r17 {
    Phy_ParametersCommon_ExtGroup9_Dl_tx_PowerAdjustment_IAB_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Dl_tx_PowerAdjustment_IAB_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Desired_ul_tx_PowerAdjustment_r17（ASN.1 desired-ul-tx-PowerAdjustment-r17，源文件第 18912 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Desired_ul_tx_PowerAdjustment_r17 {
    Phy_ParametersCommon_ExtGroup9_Desired_ul_tx_PowerAdjustment_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Desired_ul_tx_PowerAdjustment_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Fdm_SoftResourceAvailability_DynamicIndication_r17（ASN.1 fdm-SoftResourceAvailability-DynamicIndication-r17，源文件第 18914 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Fdm_SoftResourceAvailability_DynamicIndication_r17 {
    Phy_ParametersCommon_ExtGroup9_Fdm_SoftResourceAvailability_DynamicIndication_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Fdm_SoftResourceAvailability_DynamicIndication_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Updated_T_DeltaRangeReception_r17（ASN.1 updated-T-DeltaRangeReception-r17，源文件第 18916 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Updated_T_DeltaRangeReception_r17 {
    Phy_ParametersCommon_ExtGroup9_Updated_T_DeltaRangeReception_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Updated_T_DeltaRangeReception_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_SlotBasedDynamicPUCCH_Rep_r17（ASN.1 slotBasedDynamicPUCCH-Rep-r17，源文件第 18918 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_SlotBasedDynamicPUCCH_Rep_r17 {
    Phy_ParametersCommon_ExtGroup9_SlotBasedDynamicPUCCH_Rep_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_SlotBasedDynamicPUCCH_Rep_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_Non_SharedSpectrumChAccess_r17（ASN.1 sps-HARQ-ACK-Deferral-r17/non-SharedSpectrumChAccess-r17，源文件第 18921 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_Non_SharedSpectrumChAccess_r17 {
    Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_Non_SharedSpectrumChAccess_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_Non_SharedSpectrumChAccess_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_SharedSpectrumChAccess_r17（ASN.1 sps-HARQ-ACK-Deferral-r17/sharedSpectrumChAccess-r17，源文件第 18922 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_SharedSpectrumChAccess_r17 {
    Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_SharedSpectrumChAccess_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_SharedSpectrumChAccess_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_MTRP_PDCCH_singleSpan_r17（ASN.1 mTRP-PDCCH-singleSpan-r17，源文件第 18927 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_MTRP_PDCCH_singleSpan_r17 {
    Phy_ParametersCommon_ExtGroup9_MTRP_PDCCH_singleSpan_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_MTRP_PDCCH_singleSpan_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_SupportedActivatedPRS_ProcessingWindow_r17（ASN.1 supportedActivatedPRS-ProcessingWindow-r17，源文件第 18929 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_SupportedActivatedPRS_ProcessingWindow_r17 {
    Phy_ParametersCommon_ExtGroup9_SupportedActivatedPRS_ProcessingWindow_r17_n2 = 0, /**< ASN.1 n2 */
    Phy_ParametersCommon_ExtGroup9_SupportedActivatedPRS_ProcessingWindow_r17_n3 = 1, /**< ASN.1 n3 */
    Phy_ParametersCommon_ExtGroup9_SupportedActivatedPRS_ProcessingWindow_r17_n4 = 2, /**< ASN.1 n4 */
} Phy_ParametersCommon_ExtGroup9_SupportedActivatedPRS_ProcessingWindow_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup9_Cg_TimeDomainAllocationExtension_r17（ASN.1 cg-TimeDomainAllocationExtension-r17，源文件第 18930 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup9_Cg_TimeDomainAllocationExtension_r17 {
    Phy_ParametersCommon_ExtGroup9_Cg_TimeDomainAllocationExtension_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup9_Cg_TimeDomainAllocationExtension_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup10_Ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17（ASN.1 ta-BasedPDC-TN-NonSharedSpectrumChAccess-r17，源文件第 18934 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup10_Ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17 {
    Phy_ParametersCommon_ExtGroup10_Ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup10_Ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup10_DirectionalCollisionDC_IAB_r17（ASN.1 directionalCollisionDC-IAB-r17，源文件第 18936 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup10_DirectionalCollisionDC_IAB_r17 {
    Phy_ParametersCommon_ExtGroup10_DirectionalCollisionDC_IAB_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup10_DirectionalCollisionDC_IAB_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup11_Dummy1（ASN.1 dummy1，源文件第 18939 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup11_Dummy1 {
    Phy_ParametersCommon_ExtGroup11_Dummy1_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup11_Dummy1;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup11_Dummy2（ASN.1 dummy2，源文件第 18940 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup11_Dummy2 {
    Phy_ParametersCommon_ExtGroup11_Dummy2_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup11_Dummy2;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup11_Dummy3（ASN.1 dummy3，源文件第 18941 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup11_Dummy3 {
    Phy_ParametersCommon_ExtGroup11_Dummy3_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup11_Dummy3;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup11_Dummy4（ASN.1 dummy4，源文件第 18942 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup11_Dummy4 {
    Phy_ParametersCommon_ExtGroup11_Dummy4_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup11_Dummy4;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup11_Srs_AdditionalRepetition_r17（ASN.1 srs-AdditionalRepetition-r17，源文件第 18943 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup11_Srs_AdditionalRepetition_r17 {
    Phy_ParametersCommon_ExtGroup11_Srs_AdditionalRepetition_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup11_Srs_AdditionalRepetition_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup11_Pusch_Repetition_CG_SDT_r17（ASN.1 pusch-Repetition-CG-SDT-r17，源文件第 18944 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup11_Pusch_Repetition_CG_SDT_r17 {
    Phy_ParametersCommon_ExtGroup11_Pusch_Repetition_CG_SDT_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup11_Pusch_Repetition_CG_SDT_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup12_MultiPDSCH_PerSlotType1_CB_Support_r17（ASN.1 multiPDSCH-PerSlotType1-CB-Support-r17，源文件第 18947 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup12_MultiPDSCH_PerSlotType1_CB_Support_r17 {
    Phy_ParametersCommon_ExtGroup12_MultiPDSCH_PerSlotType1_CB_Support_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup12_MultiPDSCH_PerSlotType1_CB_Support_r17;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_JointPowerSpatialAdaptation_r18（ASN.1 jointPowerSpatialAdaptation-r18，源文件第 18951 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_JointPowerSpatialAdaptation_r18 {
    Phy_ParametersCommon_ExtGroup13_JointPowerSpatialAdaptation_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_JointPowerSpatialAdaptation_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_Ncr_Semi_PersistentBeamInd_AccessLink_r18（ASN.1 ncr-Semi-PersistentBeamInd-AccessLink-r18，源文件第 18960 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_Ncr_Semi_PersistentBeamInd_AccessLink_r18 {
    Phy_ParametersCommon_ExtGroup13_Ncr_Semi_PersistentBeamInd_AccessLink_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_Ncr_Semi_PersistentBeamInd_AccessLink_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_Ncr_SimultaneousUL_BackhaulAndC_Link_r18（ASN.1 ncr-SimultaneousUL-BackhaulAndC-Link-r18，源文件第 18962 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_Ncr_SimultaneousUL_BackhaulAndC_Link_r18 {
    Phy_ParametersCommon_ExtGroup13_Ncr_SimultaneousUL_BackhaulAndC_Link_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_Ncr_SimultaneousUL_BackhaulAndC_Link_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_Ncr_BackhaulBeamInd_r18（ASN.1 ncr-BackhaulBeamInd-r18，源文件第 18964 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_Ncr_BackhaulBeamInd_r18 {
    Phy_ParametersCommon_ExtGroup13_Ncr_BackhaulBeamInd_r18_nonUnifiedTCI = 0, /**< ASN.1 nonUnifiedTCI */
    Phy_ParametersCommon_ExtGroup13_Ncr_BackhaulBeamInd_r18_unifiedTCI = 1, /**< ASN.1 unifiedTCI */
    Phy_ParametersCommon_ExtGroup13_Ncr_BackhaulBeamInd_r18_both = 2, /**< ASN.1 both */
} Phy_ParametersCommon_ExtGroup13_Ncr_BackhaulBeamInd_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_Ncr_AdaptiveBeamBackhaulAndC_Link_r18（ASN.1 ncr-AdaptiveBeamBackhaulAndC-Link-r18，源文件第 18966 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_Ncr_AdaptiveBeamBackhaulAndC_Link_r18 {
    Phy_ParametersCommon_ExtGroup13_Ncr_AdaptiveBeamBackhaulAndC_Link_r18_nonUnifiedTCI = 0, /**< ASN.1 nonUnifiedTCI */
    Phy_ParametersCommon_ExtGroup13_Ncr_AdaptiveBeamBackhaulAndC_Link_r18_unifiedTCI = 1, /**< ASN.1 unifiedTCI */
    Phy_ParametersCommon_ExtGroup13_Ncr_AdaptiveBeamBackhaulAndC_Link_r18_both = 2, /**< ASN.1 both */
} Phy_ParametersCommon_ExtGroup13_Ncr_AdaptiveBeamBackhaulAndC_Link_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18（ASN.1 nominalRBG-SizeOfConfig-3-FDRA-Type-0-DCI-1-3-r18，源文件第 18969 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18 {
    Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18（ASN.1 nominalRBG-SizeOfConfig-3-FDRA-Type-0-DCI-0-3-r18，源文件第 18971 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18 {
    Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_ConfigurableType_1A_FieldsForDCI_0_3_And_1_3_r18（ASN.1 configurableType-1A-FieldsForDCI-0-3-And-1-3-r18，源文件第 18973 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_ConfigurableType_1A_FieldsForDCI_0_3_And_1_3_r18 {
    Phy_ParametersCommon_ExtGroup13_ConfigurableType_1A_FieldsForDCI_0_3_And_1_3_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_ConfigurableType_1A_FieldsForDCI_0_3_And_1_3_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_Fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18（ASN.1 fdra-Type-1-Gty-2-4-8-16-RBs-RIV-DCI-1-3-And-0-3-r18，源文件第 18975 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_Fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18 {
    Phy_ParametersCommon_ExtGroup13_Fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_Fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_1_r18（ASN.1 multiPUSCH-DCI-0-1-r18，源文件第 18977 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_1_r18 {
    Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_1_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_1_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_2_r18（ASN.1 multiPUSCH-DCI-0-2-r18，源文件第 18979 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_2_r18 {
    Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_2_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_2_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_Support_5MHz_ChannelBW_20PRB_CORESET0_r18（ASN.1 support-5MHz-ChannelBW-20PRB-CORESET0-r18，源文件第 18981 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_Support_5MHz_ChannelBW_20PRB_CORESET0_r18 {
    Phy_ParametersCommon_ExtGroup13_Support_5MHz_ChannelBW_20PRB_CORESET0_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_Support_5MHz_ChannelBW_20PRB_CORESET0_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_30kHz_r18（ASN.1 additionalSR-Periodicities-r18/scs-30kHz-r18，源文件第 18985 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_30kHz_r18 {
    Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_30kHz_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_30kHz_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_120kHz_r18（ASN.1 additionalSR-Periodicities-r18/scs-120kHz-r18，源文件第 18986 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_120kHz_r18 {
    Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_120kHz_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_120kHz_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_ExtGroup13_PathlossRS_UpdateForType1CG_PUSCH_r18（ASN.1 pathlossRS-UpdateForType1CG-PUSCH-r18，源文件第 18989 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_ExtGroup13_PathlossRS_UpdateForType1CG_PUSCH_r18 {
    Phy_ParametersCommon_ExtGroup13_PathlossRS_UpdateForType1CG_PUSCH_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_ExtGroup13_PathlossRS_UpdateForType1CG_PUSCH_r18;


/**
 * @brief 枚举 Phy_ParametersCommon_v16a0_Srs_PeriodicityAndOffsetExt_r16（ASN.1 srs-PeriodicityAndOffsetExt-r16，源文件第 18994 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersCommon_v16a0_Srs_PeriodicityAndOffsetExt_r16 {
    Phy_ParametersCommon_v16a0_Srs_PeriodicityAndOffsetExt_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersCommon_v16a0_Srs_PeriodicityAndOffsetExt_r16;


/**
 * @brief 枚举 Phy_ParametersXDD_Diff_DynamicSFI（ASN.1 dynamicSFI，源文件第 18998 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersXDD_Diff_DynamicSFI {
    Phy_ParametersXDD_Diff_DynamicSFI_supported = 0, /**< ASN.1 supported */
} Phy_ParametersXDD_Diff_DynamicSFI;


/**
 * @brief 枚举 Phy_ParametersXDD_Diff_TwoPUCCH_F0_2_ConsecSymbols（ASN.1 twoPUCCH-F0-2-ConsecSymbols，源文件第 18999 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersXDD_Diff_TwoPUCCH_F0_2_ConsecSymbols {
    Phy_ParametersXDD_Diff_TwoPUCCH_F0_2_ConsecSymbols_supported = 0, /**< ASN.1 supported */
} Phy_ParametersXDD_Diff_TwoPUCCH_F0_2_ConsecSymbols;


/**
 * @brief 枚举 Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUSCH（ASN.1 twoDifferentTPC-Loop-PUSCH，源文件第 19000 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUSCH {
    Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUSCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUSCH;


/**
 * @brief 枚举 Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUCCH（ASN.1 twoDifferentTPC-Loop-PUCCH，源文件第 19001 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUCCH {
    Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUCCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUCCH;


/**
 * @brief 枚举 Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA（ASN.1 dl-SchedulingOffset-PDSCH-TypeA，源文件第 19004 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA {
    Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA_supported = 0, /**< ASN.1 supported */
} Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA;


/**
 * @brief 枚举 Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB（ASN.1 dl-SchedulingOffset-PDSCH-TypeB，源文件第 19005 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB {
    Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB_supported = 0, /**< ASN.1 supported */
} Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB;


/**
 * @brief 枚举 Phy_ParametersXDD_Diff_ExtGroup1_Ul_SchedulingOffset（ASN.1 ul-SchedulingOffset，源文件第 19006 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersXDD_Diff_ExtGroup1_Ul_SchedulingOffset {
    Phy_ParametersXDD_Diff_ExtGroup1_Ul_SchedulingOffset_supported = 0, /**< ASN.1 supported */
} Phy_ParametersXDD_Diff_ExtGroup1_Ul_SchedulingOffset;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_DynamicSFI（ASN.1 dynamicSFI，源文件第 19011 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_DynamicSFI {
    Phy_ParametersFRX_Diff_DynamicSFI_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_DynamicSFI;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_SupportedDMRS_TypeDL（ASN.1 supportedDMRS-TypeDL，源文件第 19016 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_SupportedDMRS_TypeDL {
    Phy_ParametersFRX_Diff_SupportedDMRS_TypeDL_type1 = 0, /**< ASN.1 type1 */
    Phy_ParametersFRX_Diff_SupportedDMRS_TypeDL_type1And2 = 1, /**< ASN.1 type1And2 */
} Phy_ParametersFRX_Diff_SupportedDMRS_TypeDL;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_SupportedDMRS_TypeUL（ASN.1 supportedDMRS-TypeUL，源文件第 19017 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_SupportedDMRS_TypeUL {
    Phy_ParametersFRX_Diff_SupportedDMRS_TypeUL_type1 = 0, /**< ASN.1 type1 */
    Phy_ParametersFRX_Diff_SupportedDMRS_TypeUL_type1And2 = 1, /**< ASN.1 type1And2 */
} Phy_ParametersFRX_Diff_SupportedDMRS_TypeUL;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_SemiOpenLoopCSI（ASN.1 semiOpenLoopCSI，源文件第 19018 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_SemiOpenLoopCSI {
    Phy_ParametersFRX_Diff_SemiOpenLoopCSI_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_SemiOpenLoopCSI;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Csi_ReportWithoutPMI（ASN.1 csi-ReportWithoutPMI，源文件第 19019 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Csi_ReportWithoutPMI {
    Phy_ParametersFRX_Diff_Csi_ReportWithoutPMI_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Csi_ReportWithoutPMI;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Csi_ReportWithoutCQI（ASN.1 csi-ReportWithoutCQI，源文件第 19020 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Csi_ReportWithoutCQI {
    Phy_ParametersFRX_Diff_Csi_ReportWithoutCQI_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Csi_ReportWithoutCQI;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_TwoPUCCH_F0_2_ConsecSymbols（ASN.1 twoPUCCH-F0-2-ConsecSymbols，源文件第 19022 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_TwoPUCCH_F0_2_ConsecSymbols {
    Phy_ParametersFRX_Diff_TwoPUCCH_F0_2_ConsecSymbols_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_TwoPUCCH_F0_2_ConsecSymbols;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Pucch_F2_WithFH（ASN.1 pucch-F2-WithFH，源文件第 19023 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Pucch_F2_WithFH {
    Phy_ParametersFRX_Diff_Pucch_F2_WithFH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Pucch_F2_WithFH;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Pucch_F3_WithFH（ASN.1 pucch-F3-WithFH，源文件第 19024 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Pucch_F3_WithFH {
    Phy_ParametersFRX_Diff_Pucch_F3_WithFH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Pucch_F3_WithFH;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Pucch_F4_WithFH（ASN.1 pucch-F4-WithFH，源文件第 19025 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Pucch_F4_WithFH {
    Phy_ParametersFRX_Diff_Pucch_F4_WithFH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Pucch_F4_WithFH;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Pucch_F0_2WithoutFH（ASN.1 pucch-F0-2WithoutFH，源文件第 19026 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Pucch_F0_2WithoutFH {
    Phy_ParametersFRX_Diff_Pucch_F0_2WithoutFH_notSupported = 0, /**< ASN.1 notSupported */
} Phy_ParametersFRX_Diff_Pucch_F0_2WithoutFH;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Pucch_F1_3_4WithoutFH（ASN.1 pucch-F1-3-4WithoutFH，源文件第 19027 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Pucch_F1_3_4WithoutFH {
    Phy_ParametersFRX_Diff_Pucch_F1_3_4WithoutFH_notSupported = 0, /**< ASN.1 notSupported */
} Phy_ParametersFRX_Diff_Pucch_F1_3_4WithoutFH;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot（ASN.1 mux-SR-HARQ-ACK-CSI-PUCCH-MultiPerSlot，源文件第 19028 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot {
    Phy_ParametersFRX_Diff_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Uci_CodeBlockSegmentation（ASN.1 uci-CodeBlockSegmentation，源文件第 19029 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Uci_CodeBlockSegmentation {
    Phy_ParametersFRX_Diff_Uci_CodeBlockSegmentation_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Uci_CodeBlockSegmentation;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_OnePUCCH_LongAndShortFormat（ASN.1 onePUCCH-LongAndShortFormat，源文件第 19030 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_OnePUCCH_LongAndShortFormat {
    Phy_ParametersFRX_Diff_OnePUCCH_LongAndShortFormat_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_OnePUCCH_LongAndShortFormat;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_TwoPUCCH_AnyOthersInSlot（ASN.1 twoPUCCH-AnyOthersInSlot，源文件第 19031 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_TwoPUCCH_AnyOthersInSlot {
    Phy_ParametersFRX_Diff_TwoPUCCH_AnyOthersInSlot_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_TwoPUCCH_AnyOthersInSlot;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_IntraSlotFreqHopping_PUSCH（ASN.1 intraSlotFreqHopping-PUSCH，源文件第 19032 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_IntraSlotFreqHopping_PUSCH {
    Phy_ParametersFRX_Diff_IntraSlotFreqHopping_PUSCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_IntraSlotFreqHopping_PUSCH;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Pusch_LBRM（ASN.1 pusch-LBRM，源文件第 19033 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Pusch_LBRM {
    Phy_ParametersFRX_Diff_Pusch_LBRM_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Pusch_LBRM;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Tpc_PUSCH_RNTI（ASN.1 tpc-PUSCH-RNTI，源文件第 19035 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Tpc_PUSCH_RNTI {
    Phy_ParametersFRX_Diff_Tpc_PUSCH_RNTI_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Tpc_PUSCH_RNTI;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Tpc_PUCCH_RNTI（ASN.1 tpc-PUCCH-RNTI，源文件第 19036 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Tpc_PUCCH_RNTI {
    Phy_ParametersFRX_Diff_Tpc_PUCCH_RNTI_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Tpc_PUCCH_RNTI;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Tpc_SRS_RNTI（ASN.1 tpc-SRS-RNTI，源文件第 19037 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Tpc_SRS_RNTI {
    Phy_ParametersFRX_Diff_Tpc_SRS_RNTI_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Tpc_SRS_RNTI;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_AbsoluteTPC_Command（ASN.1 absoluteTPC-Command，源文件第 19038 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_AbsoluteTPC_Command {
    Phy_ParametersFRX_Diff_AbsoluteTPC_Command_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_AbsoluteTPC_Command;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUSCH（ASN.1 twoDifferentTPC-Loop-PUSCH，源文件第 19039 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUSCH {
    Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUSCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUSCH;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUCCH（ASN.1 twoDifferentTPC-Loop-PUCCH，源文件第 19040 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUCCH {
    Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUCCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUCCH;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Pusch_HalfPi_BPSK（ASN.1 pusch-HalfPi-BPSK，源文件第 19041 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Pusch_HalfPi_BPSK {
    Phy_ParametersFRX_Diff_Pusch_HalfPi_BPSK_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Pusch_HalfPi_BPSK;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Pucch_F3_4_HalfPi_BPSK（ASN.1 pucch-F3-4-HalfPi-BPSK，源文件第 19042 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Pucch_F3_4_HalfPi_BPSK {
    Phy_ParametersFRX_Diff_Pucch_F3_4_HalfPi_BPSK_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Pucch_F3_4_HalfPi_BPSK;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_AlmostContiguousCP_OFDM_UL（ASN.1 almostContiguousCP-OFDM-UL，源文件第 19043 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_AlmostContiguousCP_OFDM_UL {
    Phy_ParametersFRX_Diff_AlmostContiguousCP_OFDM_UL_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_AlmostContiguousCP_OFDM_UL;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Sp_CSI_RS（ASN.1 sp-CSI-RS，源文件第 19044 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Sp_CSI_RS {
    Phy_ParametersFRX_Diff_Sp_CSI_RS_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Sp_CSI_RS;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Sp_CSI_IM（ASN.1 sp-CSI-IM，源文件第 19045 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Sp_CSI_IM {
    Phy_ParametersFRX_Diff_Sp_CSI_IM_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Sp_CSI_IM;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_Tdd_MultiDL_UL_SwitchPerSlot（ASN.1 tdd-MultiDL-UL-SwitchPerSlot，源文件第 19046 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_Tdd_MultiDL_UL_SwitchPerSlot {
    Phy_ParametersFRX_Diff_Tdd_MultiDL_UL_SwitchPerSlot_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_Tdd_MultiDL_UL_SwitchPerSlot;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_MultipleCORESET（ASN.1 multipleCORESET，源文件第 19047 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_MultipleCORESET {
    Phy_ParametersFRX_Diff_MultipleCORESET_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_MultipleCORESET;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_SameSymbol（ASN.1 mux-SR-HARQ-ACK-CSI-PUCCH-OncePerSlot/sameSymbol，源文件第 19054 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_SameSymbol {
    Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_SameSymbol_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_SameSymbol;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_DiffSymbol（ASN.1 mux-SR-HARQ-ACK-CSI-PUCCH-OncePerSlot/diffSymbol，源文件第 19055 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_DiffSymbol {
    Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_DiffSymbol_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_DiffSymbol;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_PUCCH（ASN.1 mux-SR-HARQ-ACK-PUCCH，源文件第 19057 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_PUCCH {
    Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_PUCCH_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_PUCCH;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_Mux_MultipleGroupCtrlCH_Overlap（ASN.1 mux-MultipleGroupCtrlCH-Overlap，源文件第 19058 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_Mux_MultipleGroupCtrlCH_Overlap {
    Phy_ParametersFRX_Diff_ExtGroup1_Mux_MultipleGroupCtrlCH_Overlap_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_Mux_MultipleGroupCtrlCH_Overlap;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA（ASN.1 dl-SchedulingOffset-PDSCH-TypeA，源文件第 19059 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA {
    Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB（ASN.1 dl-SchedulingOffset-PDSCH-TypeB，源文件第 19060 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB {
    Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_Ul_SchedulingOffset（ASN.1 ul-SchedulingOffset，源文件第 19061 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_Ul_SchedulingOffset {
    Phy_ParametersFRX_Diff_ExtGroup1_Ul_SchedulingOffset_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_Ul_SchedulingOffset;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_Dl_64QAM_MCS_TableAlt（ASN.1 dl-64QAM-MCS-TableAlt，源文件第 19062 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_Dl_64QAM_MCS_TableAlt {
    Phy_ParametersFRX_Diff_ExtGroup1_Dl_64QAM_MCS_TableAlt_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_Dl_64QAM_MCS_TableAlt;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_Ul_64QAM_MCS_TableAlt（ASN.1 ul-64QAM-MCS-TableAlt，源文件第 19063 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_Ul_64QAM_MCS_TableAlt {
    Phy_ParametersFRX_Diff_ExtGroup1_Ul_64QAM_MCS_TableAlt_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_Ul_64QAM_MCS_TableAlt;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_Cqi_TableAlt（ASN.1 cqi-TableAlt，源文件第 19064 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_Cqi_TableAlt {
    Phy_ParametersFRX_Diff_ExtGroup1_Cqi_TableAlt_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_Cqi_TableAlt;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_TwoAdditionalDMRS_UL（ASN.1 oneFL-DMRS-TwoAdditionalDMRS-UL，源文件第 19065 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_TwoAdditionalDMRS_UL {
    Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_TwoAdditionalDMRS_UL_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_TwoAdditionalDMRS_UL;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_TwoFL_DMRS_TwoAdditionalDMRS_UL（ASN.1 twoFL-DMRS-TwoAdditionalDMRS-UL，源文件第 19066 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_TwoFL_DMRS_TwoAdditionalDMRS_UL {
    Phy_ParametersFRX_Diff_ExtGroup1_TwoFL_DMRS_TwoAdditionalDMRS_UL_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_TwoFL_DMRS_TwoAdditionalDMRS_UL;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_ThreeAdditionalDMRS_UL（ASN.1 oneFL-DMRS-ThreeAdditionalDMRS-UL，源文件第 19067 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_ThreeAdditionalDMRS_UL {
    Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_ThreeAdditionalDMRS_UL_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_ThreeAdditionalDMRS_UL;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup2_Mux_HARQ_ACK_PUSCH_DiffSymbol（ASN.1 mux-HARQ-ACK-PUSCH-DiffSymbol，源文件第 19074 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup2_Mux_HARQ_ACK_PUSCH_DiffSymbol {
    Phy_ParametersFRX_Diff_ExtGroup2_Mux_HARQ_ACK_PUSCH_DiffSymbol_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup2_Mux_HARQ_ACK_PUSCH_DiffSymbol;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup3_Type1_HARQ_ACK_Codebook_r16（ASN.1 type1-HARQ-ACK-Codebook-r16，源文件第 19078 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup3_Type1_HARQ_ACK_Codebook_r16 {
    Phy_ParametersFRX_Diff_ExtGroup3_Type1_HARQ_ACK_Codebook_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup3_Type1_HARQ_ACK_Codebook_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup3_EnhancedPowerControl_r16（ASN.1 enhancedPowerControl-r16，源文件第 19080 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup3_EnhancedPowerControl_r16 {
    Phy_ParametersFRX_Diff_ExtGroup3_EnhancedPowerControl_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup3_EnhancedPowerControl_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousTCI_ActMultipleCC_r16（ASN.1 simultaneousTCI-ActMultipleCC-r16，源文件第 19082 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousTCI_ActMultipleCC_r16 {
    Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousTCI_ActMultipleCC_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousTCI_ActMultipleCC_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousSpatialRelationMultipleCC_r16（ASN.1 simultaneousSpatialRelationMultipleCC-r16，源文件第 19084 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousSpatialRelationMultipleCC_r16 {
    Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousSpatialRelationMultipleCC_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousSpatialRelationMultipleCC_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup3_Cli_RSSI_FDM_DL_r16（ASN.1 cli-RSSI-FDM-DL-r16，源文件第 19085 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup3_Cli_RSSI_FDM_DL_r16 {
    Phy_ParametersFRX_Diff_ExtGroup3_Cli_RSSI_FDM_DL_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup3_Cli_RSSI_FDM_DL_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup3_Cli_SRS_RSRP_FDM_DL_r16（ASN.1 cli-SRS-RSRP-FDM-DL-r16，源文件第 19086 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup3_Cli_SRS_RSRP_FDM_DL_r16 {
    Phy_ParametersFRX_Diff_ExtGroup3_Cli_SRS_RSRP_FDM_DL_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup3_Cli_SRS_RSRP_FDM_DL_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup3_MaxLayersMIMO_Adaptation_r16（ASN.1 maxLayersMIMO-Adaptation-r16，源文件第 19088 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup3_MaxLayersMIMO_Adaptation_r16 {
    Phy_ParametersFRX_Diff_ExtGroup3_MaxLayersMIMO_Adaptation_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup3_MaxLayersMIMO_Adaptation_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup3_AggregationFactorSPS_DL_r16（ASN.1 aggregationFactorSPS-DL-r16，源文件第 19090 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup3_AggregationFactorSPS_DL_r16 {
    Phy_ParametersFRX_Diff_ExtGroup3_AggregationFactorSPS_DL_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup3_AggregationFactorSPS_DL_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16（ASN.1 maxTotalResourcesForOneFreqRange-r16/maxNumberResWithinSlotAcrossCC-OneFR-r16，源文件第 19093 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16 {
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16_n2 = 0, /**< ASN.1 n2 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16_n4 = 1, /**< ASN.1 n4 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16_n8 = 2, /**< ASN.1 n8 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16_n12 = 3, /**< ASN.1 n12 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16_n16 = 4, /**< ASN.1 n16 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16_n32 = 5, /**< ASN.1 n32 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16_n64 = 6, /**< ASN.1 n64 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16_n128 = 7, /**< ASN.1 n128 */
} Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16（ASN.1 maxTotalResourcesForOneFreqRange-r16/maxNumberResAcrossCC-OneFR-r16，源文件第 19094 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16 {
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n2 = 0, /**< ASN.1 n2 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n4 = 1, /**< ASN.1 n4 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n8 = 2, /**< ASN.1 n8 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n12 = 3, /**< ASN.1 n12 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n16 = 4, /**< ASN.1 n16 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n32 = 5, /**< ASN.1 n32 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n40 = 6, /**< ASN.1 n40 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n48 = 7, /**< ASN.1 n48 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n64 = 8, /**< ASN.1 n64 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n72 = 9, /**< ASN.1 n72 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n80 = 10, /**< ASN.1 n80 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n96 = 11, /**< ASN.1 n96 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n128 = 12, /**< ASN.1 n128 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16_n256 = 13, /**< ASN.1 n256 */
} Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup4_TwoTCI_Act_servingCellInCC_List_r16（ASN.1 twoTCI-Act-servingCellInCC-List-r16，源文件第 19101 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup4_TwoTCI_Act_servingCellInCC_List_r16 {
    Phy_ParametersFRX_Diff_ExtGroup4_TwoTCI_Act_servingCellInCC_List_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup4_TwoTCI_Act_servingCellInCC_List_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup5_Cri_RI_CQI_WithoutNon_PMI_PortInd_r16（ASN.1 cri-RI-CQI-WithoutNon-PMI-PortInd-r16，源文件第 19105 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup5_Cri_RI_CQI_WithoutNon_PMI_PortInd_r16 {
    Phy_ParametersFRX_Diff_ExtGroup5_Cri_RI_CQI_WithoutNon_PMI_PortInd_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup5_Cri_RI_CQI_WithoutNon_PMI_PortInd_r16;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup6_Cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17（ASN.1 cqi-4-BitsSubbandTN-NonSharedSpectrumChAccess-r17，源文件第 19109 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup6_Cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17 {
    Phy_ParametersFRX_Diff_ExtGroup6_Cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup6_Cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17;


/**
 * @brief 枚举 Phy_ParametersFRX_Diff_ExtGroup7_MultipleCORESET_RedCap_r17（ASN.1 multipleCORESET-RedCap-r17，源文件第 19112 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFRX_Diff_ExtGroup7_MultipleCORESET_RedCap_r17 {
    Phy_ParametersFRX_Diff_ExtGroup7_MultipleCORESET_RedCap_r17_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFRX_Diff_ExtGroup7_MultipleCORESET_RedCap_r17;


/**
 * @brief 枚举 Phy_ParametersFR1_Pdcch_MonitoringSingleOccasion（ASN.1 pdcch-MonitoringSingleOccasion，源文件第 19117 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_Pdcch_MonitoringSingleOccasion {
    Phy_ParametersFR1_Pdcch_MonitoringSingleOccasion_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR1_Pdcch_MonitoringSingleOccasion;


/**
 * @brief 枚举 Phy_ParametersFR1_Scs_60kHz（ASN.1 scs-60kHz，源文件第 19118 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_Scs_60kHz {
    Phy_ParametersFR1_Scs_60kHz_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR1_Scs_60kHz;


/**
 * @brief 枚举 Phy_ParametersFR1_Pdsch_256QAM_FR1（ASN.1 pdsch-256QAM-FR1，源文件第 19119 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_Pdsch_256QAM_FR1 {
    Phy_ParametersFR1_Pdsch_256QAM_FR1_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR1_Pdsch_256QAM_FR1;


/**
 * @brief 枚举 Phy_ParametersFR1_Pdsch_RE_MappingFR1_PerSymbol（ASN.1 pdsch-RE-MappingFR1-PerSymbol，源文件第 19120 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_Pdsch_RE_MappingFR1_PerSymbol {
    Phy_ParametersFR1_Pdsch_RE_MappingFR1_PerSymbol_n10 = 0, /**< ASN.1 n10 */
    Phy_ParametersFR1_Pdsch_RE_MappingFR1_PerSymbol_n20 = 1, /**< ASN.1 n20 */
} Phy_ParametersFR1_Pdsch_RE_MappingFR1_PerSymbol;


/**
 * @brief 枚举 Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot（ASN.1 pdsch-RE-MappingFR1-PerSlot，源文件第 19123 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot {
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n16 = 0, /**< ASN.1 n16 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n32 = 1, /**< ASN.1 n32 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n48 = 2, /**< ASN.1 n48 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n64 = 3, /**< ASN.1 n64 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n80 = 4, /**< ASN.1 n80 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n96 = 5, /**< ASN.1 n96 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n112 = 6, /**< ASN.1 n112 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n128 = 7, /**< ASN.1 n128 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n144 = 8, /**< ASN.1 n144 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n160 = 9, /**< ASN.1 n160 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n176 = 10, /**< ASN.1 n176 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n192 = 11, /**< ASN.1 n192 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n208 = 12, /**< ASN.1 n208 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n224 = 13, /**< ASN.1 n224 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n240 = 14, /**< ASN.1 n240 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot_n256 = 15, /**< ASN.1 n256 */
} Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot;


/**
 * @brief 枚举 Phy_ParametersFR1_ExtGroup2_Pdcch_MonitoringSingleSpanFirst4Sym_r16（ASN.1 pdcch-MonitoringSingleSpanFirst4Sym-r16，源文件第 19129 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_ExtGroup2_Pdcch_MonitoringSingleSpanFirst4Sym_r16 {
    Phy_ParametersFR1_ExtGroup2_Pdcch_MonitoringSingleSpanFirst4Sym_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR1_ExtGroup2_Pdcch_MonitoringSingleSpanFirst4Sym_r16;


/**
 * @brief 枚举 Phy_ParametersFR1_ExtGroup3_K1_RangeExtensionATG_r18（ASN.1 k1-RangeExtensionATG-r18，源文件第 19133 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_ExtGroup3_K1_RangeExtensionATG_r18 {
    Phy_ParametersFR1_ExtGroup3_K1_RangeExtensionATG_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR1_ExtGroup3_K1_RangeExtensionATG_r18;


/**
 * @brief 枚举 Phy_ParametersFR1_ExtGroup3_MaxHARQ_ProcessNumberATG_r18（ASN.1 maxHARQ-ProcessNumberATG-r18，源文件第 19135 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_ExtGroup3_MaxHARQ_ProcessNumberATG_r18 {
    Phy_ParametersFR1_ExtGroup3_MaxHARQ_ProcessNumberATG_r18_u16d32 = 0, /**< ASN.1 u16d32 */
    Phy_ParametersFR1_ExtGroup3_MaxHARQ_ProcessNumberATG_r18_u32d16 = 1, /**< ASN.1 u32d16 */
    Phy_ParametersFR1_ExtGroup3_MaxHARQ_ProcessNumberATG_r18_u32d32 = 2, /**< ASN.1 u32d32 */
} Phy_ParametersFR1_ExtGroup3_MaxHARQ_ProcessNumberATG_r18;


/**
 * @brief 枚举 Phy_ParametersFR1_ExtGroup3_UplinkPreCompensationATG_r18（ASN.1 uplinkPreCompensationATG-r18，源文件第 19137 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_ExtGroup3_UplinkPreCompensationATG_r18 {
    Phy_ParametersFR1_ExtGroup3_UplinkPreCompensationATG_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR1_ExtGroup3_UplinkPreCompensationATG_r18;


/**
 * @brief 枚举 Phy_ParametersFR1_ExtGroup3_AdvReceiver_MU_MIMO_r18（ASN.1 advReceiver-MU-MIMO-r18，源文件第 19139 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_ExtGroup3_AdvReceiver_MU_MIMO_r18 {
    Phy_ParametersFR1_ExtGroup3_AdvReceiver_MU_MIMO_r18_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR1_ExtGroup3_AdvReceiver_MU_MIMO_r18;


/**
 * @brief 枚举 Phy_ParametersFR1_ExtGroup3_DeltaPowerClassReporting_r18（ASN.1 deltaPowerClassReporting-r18，源文件第 19141 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR1_ExtGroup3_DeltaPowerClassReporting_r18 {
    Phy_ParametersFR1_ExtGroup3_DeltaPowerClassReporting_r18_type1 = 0, /**< ASN.1 type1 */
    Phy_ParametersFR1_ExtGroup3_DeltaPowerClassReporting_r18_type2 = 1, /**< ASN.1 type2 */
} Phy_ParametersFR1_ExtGroup3_DeltaPowerClassReporting_r18;


/**
 * @brief 枚举 Phy_ParametersFR2_Dummy（ASN.1 dummy，源文件第 19146 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR2_Dummy {
    Phy_ParametersFR2_Dummy_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR2_Dummy;


/**
 * @brief 枚举 Phy_ParametersFR2_Pdsch_RE_MappingFR2_PerSymbol（ASN.1 pdsch-RE-MappingFR2-PerSymbol，源文件第 19147 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR2_Pdsch_RE_MappingFR2_PerSymbol {
    Phy_ParametersFR2_Pdsch_RE_MappingFR2_PerSymbol_n6 = 0, /**< ASN.1 n6 */
    Phy_ParametersFR2_Pdsch_RE_MappingFR2_PerSymbol_n20 = 1, /**< ASN.1 n20 */
} Phy_ParametersFR2_Pdsch_RE_MappingFR2_PerSymbol;


/**
 * @brief 枚举 Phy_ParametersFR2_ExtGroup1_PCell_FR2（ASN.1 pCell-FR2，源文件第 19150 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR2_ExtGroup1_PCell_FR2 {
    Phy_ParametersFR2_ExtGroup1_PCell_FR2_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR2_ExtGroup1_PCell_FR2;


/**
 * @brief 枚举 Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot（ASN.1 pdsch-RE-MappingFR2-PerSlot，源文件第 19151 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot {
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n16 = 0, /**< ASN.1 n16 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n32 = 1, /**< ASN.1 n32 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n48 = 2, /**< ASN.1 n48 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n64 = 3, /**< ASN.1 n64 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n80 = 4, /**< ASN.1 n80 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n96 = 5, /**< ASN.1 n96 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n112 = 6, /**< ASN.1 n112 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n128 = 7, /**< ASN.1 n128 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n144 = 8, /**< ASN.1 n144 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n160 = 9, /**< ASN.1 n160 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n176 = 10, /**< ASN.1 n176 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n192 = 11, /**< ASN.1 n192 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n208 = 12, /**< ASN.1 n208 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n224 = 13, /**< ASN.1 n224 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n240 = 14, /**< ASN.1 n240 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot_n256 = 15, /**< ASN.1 n256 */
} Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot;


/**
 * @brief 枚举 Phy_ParametersFR2_ExtGroup2_DefaultSpatialRelationPathlossRS_r16（ASN.1 defaultSpatialRelationPathlossRS-r16，源文件第 19156 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR2_ExtGroup2_DefaultSpatialRelationPathlossRS_r16 {
    Phy_ParametersFR2_ExtGroup2_DefaultSpatialRelationPathlossRS_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR2_ExtGroup2_DefaultSpatialRelationPathlossRS_r16;


/**
 * @brief 枚举 Phy_ParametersFR2_ExtGroup2_SpatialRelationUpdateAP_SRS_r16（ASN.1 spatialRelationUpdateAP-SRS-r16，源文件第 19158 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR2_ExtGroup2_SpatialRelationUpdateAP_SRS_r16 {
    Phy_ParametersFR2_ExtGroup2_SpatialRelationUpdateAP_SRS_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersFR2_ExtGroup2_SpatialRelationUpdateAP_SRS_r16;


/**
 * @brief 枚举 Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16（ASN.1 maxNumberSRS-PosSpatialRelationsAllServingCells-r16，源文件第 19159 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16 {
    Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16_n0 = 0, /**< ASN.1 n0 */
    Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16_n1 = 1, /**< ASN.1 n1 */
    Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16_n2 = 2, /**< ASN.1 n2 */
    Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16_n4 = 3, /**< ASN.1 n4 */
    Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16_n8 = 4, /**< ASN.1 n8 */
    Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16_n16 = 5, /**< ASN.1 n16 */
} Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16;


/**
 * @brief 枚举 Phy_ParametersMRDC_ExtGroup2_Tdd_PCellUL_TX_AllUL_Subframe_r16（ASN.1 tdd-PCellUL-TX-AllUL-Subframe-r16，源文件第 19174 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersMRDC_ExtGroup2_Tdd_PCellUL_TX_AllUL_Subframe_r16 {
    Phy_ParametersMRDC_ExtGroup2_Tdd_PCellUL_TX_AllUL_Subframe_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersMRDC_ExtGroup2_Tdd_PCellUL_TX_AllUL_Subframe_r16;


/**
 * @brief 枚举 Phy_ParametersMRDC_ExtGroup2_Fdd_PCellUL_TX_AllUL_Subframe_r16（ASN.1 fdd-PCellUL-TX-AllUL-Subframe-r16，源文件第 19176 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersMRDC_ExtGroup2_Fdd_PCellUL_TX_AllUL_Subframe_r16 {
    Phy_ParametersMRDC_ExtGroup2_Fdd_PCellUL_TX_AllUL_Subframe_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersMRDC_ExtGroup2_Fdd_PCellUL_TX_AllUL_Subframe_r16;


/**
 * @brief 枚举 NAICS_Capability_Entry_NumberOfAggregatedPRB（ASN.1 numberOfAggregatedPRB，源文件第 19182 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum NAICS_Capability_Entry_NumberOfAggregatedPRB {
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n50 = 0, /**< ASN.1 n50 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n75 = 1, /**< ASN.1 n75 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n100 = 2, /**< ASN.1 n100 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n125 = 3, /**< ASN.1 n125 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n150 = 4, /**< ASN.1 n150 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n175 = 5, /**< ASN.1 n175 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n200 = 6, /**< ASN.1 n200 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n225 = 7, /**< ASN.1 n225 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n250 = 8, /**< ASN.1 n250 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n275 = 9, /**< ASN.1 n275 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n300 = 10, /**< ASN.1 n300 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n350 = 11, /**< ASN.1 n350 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n400 = 12, /**< ASN.1 n400 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n450 = 13, /**< ASN.1 n450 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_n500 = 14, /**< ASN.1 n500 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB_spare = 15, /**< ASN.1 spare */
} NAICS_Capability_Entry_NumberOfAggregatedPRB;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Ss_SINR_Meas_r16（ASN.1 ss-SINR-Meas-r16，源文件第 19192 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Ss_SINR_Meas_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Ss_SINR_Meas_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Ss_SINR_Meas_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUCCH_r16（ASN.1 sp-CSI-ReportPUCCH-r16，源文件第 19194 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUCCH_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUCCH_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUCCH_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUSCH_r16（ASN.1 sp-CSI-ReportPUSCH-r16，源文件第 19196 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUSCH_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUSCH_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUSCH_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_DynamicSFI_r16（ASN.1 dynamicSFI-r16，源文件第 19198 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_DynamicSFI_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_DynamicSFI_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_DynamicSFI_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_SameSymbol_r16（ASN.1 mux-SR-HARQ-ACK-CSI-PUCCH-OncePerSlot-r16/sameSymbol-r16，源文件第 19204 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_SameSymbol_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_SameSymbol_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_SameSymbol_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_DiffSymbol_r16（ASN.1 mux-SR-HARQ-ACK-CSI-PUCCH-OncePerSlot-r16/diffSymbol-r16，源文件第 19205 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_DiffSymbol_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_DiffSymbol_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_DiffSymbol_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_PUCCH_r16（ASN.1 mux-SR-HARQ-ACK-PUCCH-r16，源文件第 19208 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_PUCCH_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_PUCCH_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_PUCCH_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16（ASN.1 mux-SR-HARQ-ACK-CSI-PUCCH-MultiPerSlot-r16，源文件第 19211 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Mux_HARQ_ACK_PUSCH_DiffSymbol_r16（ASN.1 mux-HARQ-ACK-PUSCH-DiffSymbol-r16，源文件第 19213 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Mux_HARQ_ACK_PUSCH_DiffSymbol_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_HARQ_ACK_PUSCH_DiffSymbol_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Mux_HARQ_ACK_PUSCH_DiffSymbol_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Pucch_Repetition_F1_3_4_r16（ASN.1 pucch-Repetition-F1-3-4-r16，源文件第 19215 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Pucch_Repetition_F1_3_4_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Pucch_Repetition_F1_3_4_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Pucch_Repetition_F1_3_4_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Type1_PUSCH_RepetitionMultiSlots_r16（ASN.1 type1-PUSCH-RepetitionMultiSlots-r16，源文件第 19217 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Type1_PUSCH_RepetitionMultiSlots_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Type1_PUSCH_RepetitionMultiSlots_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Type1_PUSCH_RepetitionMultiSlots_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Type2_PUSCH_RepetitionMultiSlots_r16（ASN.1 type2-PUSCH-RepetitionMultiSlots-r16，源文件第 19219 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Type2_PUSCH_RepetitionMultiSlots_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Type2_PUSCH_RepetitionMultiSlots_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Type2_PUSCH_RepetitionMultiSlots_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Pusch_RepetitionMultiSlots_r16（ASN.1 pusch-RepetitionMultiSlots-r16，源文件第 19221 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Pusch_RepetitionMultiSlots_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Pusch_RepetitionMultiSlots_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Pusch_RepetitionMultiSlots_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Pdsch_RepetitionMultiSlots_r16（ASN.1 pdsch-RepetitionMultiSlots-r16，源文件第 19223 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Pdsch_RepetitionMultiSlots_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Pdsch_RepetitionMultiSlots_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Pdsch_RepetitionMultiSlots_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_DownlinkSPS_r16（ASN.1 downlinkSPS-r16，源文件第 19225 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_DownlinkSPS_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_DownlinkSPS_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_DownlinkSPS_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType1_r16（ASN.1 configuredUL-GrantType1-r16，源文件第 19227 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType1_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType1_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType1_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType2_r16（ASN.1 configuredUL-GrantType2-r16，源文件第 19229 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType2_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType2_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType2_r16;


/**
 * @brief 枚举 Phy_ParametersSharedSpectrumChAccess_r16_Pre_EmptIndication_DL_r16（ASN.1 pre-EmptIndication-DL-r16，源文件第 19231 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum Phy_ParametersSharedSpectrumChAccess_r16_Pre_EmptIndication_DL_r16 {
    Phy_ParametersSharedSpectrumChAccess_r16_Pre_EmptIndication_DL_r16_supported = 0, /**< ASN.1 supported */
} Phy_ParametersSharedSpectrumChAccess_r16_Pre_EmptIndication_DL_r16;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_NumOfCarriersIntraBandContiguous_r18（ASN.1 numOfCarriersIntraBandContiguous-r18，源文件第 19239 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_NumOfCarriersIntraBandContiguous_r18 {
    PosSRS_BWA_RRC_Inactive_r18_NumOfCarriersIntraBandContiguous_r18_two = 0, /**< ASN.1 two */
    PosSRS_BWA_RRC_Inactive_r18_NumOfCarriersIntraBandContiguous_r18_three = 1, /**< ASN.1 three */
    PosSRS_BWA_RRC_Inactive_r18_NumOfCarriersIntraBandContiguous_r18_twoandthree = 2, /**< ASN.1 twoandthree */
} PosSRS_BWA_RRC_Inactive_r18_NumOfCarriersIntraBandContiguous_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR1_r18（ASN.1 maximumAggregatedBW-TwoCarriersFR1-r18，源文件第 19240 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR1_r18 {
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz80 = 0, /**< ASN.1 mhz80 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz160 = 2, /**< ASN.1 mhz160 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz200 = 3, /**< ASN.1 mhz200 */
} PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR1_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18（ASN.1 maximumAggregatedBW-TwoCarriersFR2-r18，源文件第 19241 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18 {
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz50 = 0, /**< ASN.1 mhz50 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz200 = 2, /**< ASN.1 mhz200 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz400 = 3, /**< ASN.1 mhz400 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz600 = 4, /**< ASN.1 mhz600 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz800 = 5, /**< ASN.1 mhz800 */
} PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18（ASN.1 maximumAggregatedBW-ThreeCarriersFR1-r18，源文件第 19242 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18 {
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz80 = 0, /**< ASN.1 mhz80 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz160 = 2, /**< ASN.1 mhz160 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz200 = 3, /**< ASN.1 mhz200 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz300 = 4, /**< ASN.1 mhz300 */
} PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18（ASN.1 maximumAggregatedBW-ThreeCarriersFR2-r18，源文件第 19243 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18 {
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz50 = 0, /**< ASN.1 mhz50 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz200 = 2, /**< ASN.1 mhz200 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz400 = 3, /**< ASN.1 mhz400 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz600 = 4, /**< ASN.1 mhz600 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz800 = 5, /**< ASN.1 mhz800 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz1000 = 6, /**< ASN.1 mhz1000 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz1200 = 7, /**< ASN.1 mhz1200 */
} PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18（ASN.1 maximumAggregatedResourceSet-r18，源文件第 19244 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18 {
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18_n4 = 2, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18_n8 = 3, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18_n12 = 4, /**< ASN.1 n12 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18_n16 = 5, /**< ASN.1 n16 */
} PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18（ASN.1 maximumAggregatedResourcePeriodic-r18，源文件第 19245 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18 {
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18_n4 = 2, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18_n8 = 3, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18_n16 = 4, /**< ASN.1 n16 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18_n32 = 5, /**< ASN.1 n32 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18_n64 = 6, /**< ASN.1 n64 */
} PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18（ASN.1 maximumAggregatedResourceSemi-r18，源文件第 19246 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18 {
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18_n8 = 4, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18_n16 = 5, /**< ASN.1 n16 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18_n32 = 6, /**< ASN.1 n32 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18_n64 = 7, /**< ASN.1 n64 */
} PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18（ASN.1 maximumAggregatedResourcePeriodicPerSlot-r18，源文件第 19247 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18 {
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n3 = 2, /**< ASN.1 n3 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n5 = 4, /**< ASN.1 n5 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n6 = 5, /**< ASN.1 n6 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n8 = 6, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n10 = 7, /**< ASN.1 n10 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n12 = 8, /**< ASN.1 n12 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n14 = 9, /**< ASN.1 n14 */
} PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18（ASN.1 maximumAggregatedResourceSemiPerSlot-r18，源文件第 19248 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18 {
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n3 = 3, /**< ASN.1 n3 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n4 = 4, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n5 = 5, /**< ASN.1 n5 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n6 = 6, /**< ASN.1 n6 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n8 = 7, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n10 = 8, /**< ASN.1 n10 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n12 = 9, /**< ASN.1 n12 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18_n14 = 10, /**< ASN.1 n14 */
} PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_SupportOfSameSRS_PowerReduction_r18（ASN.1 supportOfSameSRS-PowerReduction-r18，源文件第 19249 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_SupportOfSameSRS_PowerReduction_r18 {
    PosSRS_BWA_RRC_Inactive_r18_SupportOfSameSRS_PowerReduction_r18_supported = 0, /**< ASN.1 supported */
} PosSRS_BWA_RRC_Inactive_r18_SupportOfSameSRS_PowerReduction_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Inactive_r18_GuardPeriod_r18（ASN.1 guardPeriod-r18，源文件第 19250 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Inactive_r18_GuardPeriod_r18 {
    PosSRS_BWA_RRC_Inactive_r18_GuardPeriod_r18_ms0 = 0, /**< ASN.1 ms0 */
    PosSRS_BWA_RRC_Inactive_r18_GuardPeriod_r18_ms30 = 1, /**< ASN.1 ms30 */
    PosSRS_BWA_RRC_Inactive_r18_GuardPeriod_r18_ms100 = 2, /**< ASN.1 ms100 */
    PosSRS_BWA_RRC_Inactive_r18_GuardPeriod_r18_ms140 = 3, /**< ASN.1 ms140 */
    PosSRS_BWA_RRC_Inactive_r18_GuardPeriod_r18_ms200 = 4, /**< ASN.1 ms200 */
} PosSRS_BWA_RRC_Inactive_r18_GuardPeriod_r18;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17（ASN.1 maxSRSposBandwidthForEachSCS-withinCC-FR1-r17，源文件第 19259 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz5 = 0, /**< ASN.1 mhz5 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz10 = 1, /**< ASN.1 mhz10 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz15 = 2, /**< ASN.1 mhz15 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz20 = 3, /**< ASN.1 mhz20 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz25 = 4, /**< ASN.1 mhz25 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz30 = 5, /**< ASN.1 mhz30 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz35 = 6, /**< ASN.1 mhz35 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz40 = 7, /**< ASN.1 mhz40 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz45 = 8, /**< ASN.1 mhz45 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz50 = 9, /**< ASN.1 mhz50 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz60 = 10, /**< ASN.1 mhz60 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz70 = 11, /**< ASN.1 mhz70 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz80 = 12, /**< ASN.1 mhz80 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz90 = 13, /**< ASN.1 mhz90 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17_mhz100 = 14, /**< ASN.1 mhz100 */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR2_r17（ASN.1 maxSRSposBandwidthForEachSCS-withinCC-FR2-r17，源文件第 19261 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR2_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR2_r17_mhz50 = 0, /**< ASN.1 mhz50 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR2_r17_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR2_r17_mhz200 = 2, /**< ASN.1 mhz200 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR2_r17_mhz400 = 3, /**< ASN.1 mhz400 */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR2_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17（ASN.1 maxNumOfSRSposResourceSets-r17，源文件第 19262 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17_n1 = 0, /**< ASN.1 n1 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17_n2 = 1, /**< ASN.1 n2 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17_n4 = 2, /**< ASN.1 n4 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17_n8 = 3, /**< ASN.1 n8 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17_n12 = 4, /**< ASN.1 n12 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17_n16 = 5, /**< ASN.1 n16 */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17（ASN.1 maxNumOfPeriodicSRSposResources-r17，源文件第 19263 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17_n1 = 0, /**< ASN.1 n1 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17_n2 = 1, /**< ASN.1 n2 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17_n4 = 2, /**< ASN.1 n4 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17_n8 = 3, /**< ASN.1 n8 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17_n16 = 4, /**< ASN.1 n16 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17_n32 = 5, /**< ASN.1 n32 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17_n64 = 6, /**< ASN.1 n64 */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17（ASN.1 maxNumOfPeriodicSRSposResourcesPerSlot-r17，源文件第 19264 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17_n1 = 0, /**< ASN.1 n1 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17_n2 = 1, /**< ASN.1 n2 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17_n3 = 2, /**< ASN.1 n3 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17_n4 = 3, /**< ASN.1 n4 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17_n5 = 4, /**< ASN.1 n5 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17_n6 = 5, /**< ASN.1 n6 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17_n8 = 6, /**< ASN.1 n8 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17_n10 = 7, /**< ASN.1 n10 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17_n12 = 8, /**< ASN.1 n12 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17_n14 = 9, /**< ASN.1 n14 */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentNumerologyBetweenSRSposAndInitialBWP_r17（ASN.1 differentNumerologyBetweenSRSposAndInitialBWP-r17，源文件第 19265 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentNumerologyBetweenSRSposAndInitialBWP_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentNumerologyBetweenSRSposAndInitialBWP_r17_supported = 0, /**< ASN.1 supported */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentNumerologyBetweenSRSposAndInitialBWP_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SrsPosWithoutRestrictionOnBWP_r17（ASN.1 srsPosWithoutRestrictionOnBWP-r17，源文件第 19266 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SrsPosWithoutRestrictionOnBWP_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SrsPosWithoutRestrictionOnBWP_r17_supported = 0, /**< ASN.1 supported */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SrsPosWithoutRestrictionOnBWP_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17（ASN.1 maxNumOfPeriodicAndSemipersistentSRSposResources-r17，源文件第 19267 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17_n1 = 0, /**< ASN.1 n1 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17_n2 = 1, /**< ASN.1 n2 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17_n4 = 2, /**< ASN.1 n4 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17_n8 = 3, /**< ASN.1 n8 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17_n16 = 4, /**< ASN.1 n16 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17_n32 = 5, /**< ASN.1 n32 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17_n64 = 6, /**< ASN.1 n64 */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17（ASN.1 maxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot-r17，源文件第 19268 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17_n1 = 0, /**< ASN.1 n1 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17_n2 = 1, /**< ASN.1 n2 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17_n3 = 2, /**< ASN.1 n3 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17_n4 = 3, /**< ASN.1 n4 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17_n5 = 4, /**< ASN.1 n5 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17_n6 = 5, /**< ASN.1 n6 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17_n8 = 6, /**< ASN.1 n8 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17_n10 = 7, /**< ASN.1 n10 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17_n12 = 8, /**< ASN.1 n12 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17_n14 = 9, /**< ASN.1 n14 */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentCenterFreqBetweenSRSposAndInitialBWP_r17（ASN.1 differentCenterFreqBetweenSRSposAndInitialBWP-r17，源文件第 19269 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentCenterFreqBetweenSRSposAndInitialBWP_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentCenterFreqBetweenSRSposAndInitialBWP_r17_supported = 0, /**< ASN.1 supported */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentCenterFreqBetweenSRSposAndInitialBWP_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SwitchingTimeSRS_TX_OtherTX_r17（ASN.1 switchingTimeSRS-TX-OtherTX-r17，源文件第 19270 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SwitchingTimeSRS_TX_OtherTX_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SwitchingTimeSRS_TX_OtherTX_r17_us100 = 0, /**< ASN.1 us100 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SwitchingTimeSRS_TX_OtherTX_r17_us140 = 1, /**< ASN.1 us140 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SwitchingTimeSRS_TX_OtherTX_r17_us200 = 2, /**< ASN.1 us200 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SwitchingTimeSRS_TX_OtherTX_r17_us300 = 3, /**< ASN.1 us300 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SwitchingTimeSRS_TX_OtherTX_r17_us500 = 4, /**< ASN.1 us500 */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SwitchingTimeSRS_TX_OtherTX_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17（ASN.1 maxNumOfSemiPersistentSRSposResources-r17，源文件第 19272 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17_n1 = 0, /**< ASN.1 n1 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17_n2 = 1, /**< ASN.1 n2 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17_n4 = 2, /**< ASN.1 n4 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17_n8 = 3, /**< ASN.1 n8 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17_n16 = 4, /**< ASN.1 n16 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17_n32 = 5, /**< ASN.1 n32 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17_n64 = 6, /**< ASN.1 n64 */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17;


/**
 * @brief 枚举 PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17（ASN.1 maxNumOfSemiPersistentSRSposResourcesPerSlot-r17，源文件第 19273 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17 {
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n1 = 0, /**< ASN.1 n1 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n2 = 1, /**< ASN.1 n2 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n3 = 2, /**< ASN.1 n3 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n4 = 3, /**< ASN.1 n4 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n5 = 4, /**< ASN.1 n5 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n6 = 5, /**< ASN.1 n6 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n8 = 6, /**< ASN.1 n8 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n10 = 7, /**< ASN.1 n10 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n12 = 8, /**< ASN.1 n12 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n14 = 9, /**< ASN.1 n14 */
} PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR1_r18（ASN.1 maximumSRS-BandwidthAcrossAllHopsFR1-r18，源文件第 19281 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR1_r18 {
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR1_r18_mhz40 = 0, /**< ASN.1 mhz40 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR1_r18_mhz50 = 1, /**< ASN.1 mhz50 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR1_r18_mhz80 = 2, /**< ASN.1 mhz80 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR1_r18_mhz100 = 3, /**< ASN.1 mhz100 */
} PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR1_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR2_r18（ASN.1 maximumSRS-BandwidthAcrossAllHopsFR2-r18，源文件第 19282 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR2_r18 {
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR2_r18_mhz100 = 0, /**< ASN.1 mhz100 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR2_r18_mhz200 = 1, /**< ASN.1 mhz200 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR2_r18_mhz400 = 2, /**< ASN.1 mhz400 */
} PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR2_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumTxFH_Hops_r18（ASN.1 maximumTxFH-Hops-r18，源文件第 19283 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumTxFH_Hops_r18 {
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumTxFH_Hops_r18_n2 = 0, /**< ASN.1 n2 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumTxFH_Hops_r18_n3 = 1, /**< ASN.1 n3 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumTxFH_Hops_r18_n4 = 2, /**< ASN.1 n4 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumTxFH_Hops_r18_n5 = 3, /**< ASN.1 n5 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumTxFH_Hops_r18_n6 = 4, /**< ASN.1 n6 */
} PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumTxFH_Hops_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR1_r18（ASN.1 rf-TxRetunTimeFR1-r18，源文件第 19284 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR1_r18 {
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR1_r18_n70 = 0, /**< ASN.1 n70 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR1_r18_n140 = 1, /**< ASN.1 n140 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR1_r18_n210 = 2, /**< ASN.1 n210 */
} PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR1_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR2_r18（ASN.1 rf-TxRetunTimeFR2-r18，源文件第 19285 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR2_r18 {
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR2_r18_n35 = 0, /**< ASN.1 n35 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR2_r18_n70 = 1, /**< ASN.1 n70 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR2_r18_n140 = 2, /**< ASN.1 n140 */
} PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR2_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Connected_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_r18（ASN.1 switchTimeBetweenActiveBWP-FrequencyHop-r18，源文件第 19286 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Connected_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_r18 {
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_r18_n100 = 0, /**< ASN.1 n100 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_r18_n140 = 1, /**< ASN.1 n140 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_r18_n200 = 2, /**< ASN.1 n200 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_r18_n300 = 3, /**< ASN.1 n300 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_r18_n500 = 4, /**< ASN.1 n500 */
} PosSRS_TxFrequencyHoppingRRC_Connected_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Connected_r18_NumOfOverlappingPRB_r18（ASN.1 numOfOverlappingPRB-r18，源文件第 19287 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Connected_r18_NumOfOverlappingPRB_r18 {
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_NumOfOverlappingPRB_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_NumOfOverlappingPRB_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_NumOfOverlappingPRB_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_NumOfOverlappingPRB_r18_n4 = 3, /**< ASN.1 n4 */
} PosSRS_TxFrequencyHoppingRRC_Connected_r18_NumOfOverlappingPRB_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18（ASN.1 maximumSRS-ResourcePeriodic-r18，源文件第 19288 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18 {
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18_n4 = 2, /**< ASN.1 n4 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18_n8 = 3, /**< ASN.1 n8 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18_n16 = 4, /**< ASN.1 n16 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18_n32 = 5, /**< ASN.1 n32 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18_n64 = 6, /**< ASN.1 n64 */
} PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18（ASN.1 maximumSRS-ResourceAperiodic-r18，源文件第 19289 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18 {
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18_n8 = 4, /**< ASN.1 n8 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18_n16 = 5, /**< ASN.1 n16 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18_n32 = 6, /**< ASN.1 n32 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18_n64 = 7, /**< ASN.1 n64 */
} PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18（ASN.1 maximumSRS-ResourceSemipersistent-r18，源文件第 19290 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18 {
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18_n8 = 4, /**< ASN.1 n8 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18_n16 = 5, /**< ASN.1 n16 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18_n32 = 6, /**< ASN.1 n32 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18_n64 = 7, /**< ASN.1 n64 */
} PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR1_r18（ASN.1 maximumSRS-BandwidthAcrossAllHops-FR1-r18，源文件第 19298 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR1_r18 {
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR1_r18_mhz40 = 0, /**< ASN.1 mhz40 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR1_r18_mhz50 = 1, /**< ASN.1 mhz50 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR1_r18_mhz80 = 2, /**< ASN.1 mhz80 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR1_r18_mhz100 = 3, /**< ASN.1 mhz100 */
} PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR1_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR2_r18（ASN.1 maximumSRS-BandwidthAcrossAllHops-FR2-r18，源文件第 19299 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR2_r18 {
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR2_r18_mhz100 = 0, /**< ASN.1 mhz100 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR2_r18_mhz200 = 1, /**< ASN.1 mhz200 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR2_r18_mhz400 = 2, /**< ASN.1 mhz400 */
} PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR2_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumTxFH_Hops_r18（ASN.1 maximumTxFH-Hops-r18，源文件第 19300 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumTxFH_Hops_r18 {
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumTxFH_Hops_r18_n2 = 0, /**< ASN.1 n2 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumTxFH_Hops_r18_n3 = 1, /**< ASN.1 n3 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumTxFH_Hops_r18_n4 = 2, /**< ASN.1 n4 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumTxFH_Hops_r18_n5 = 3, /**< ASN.1 n5 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumTxFH_Hops_r18_n6 = 4, /**< ASN.1 n6 */
} PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumTxFH_Hops_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR1_r18（ASN.1 rf-TxRetunTimeFR1-r18，源文件第 19301 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR1_r18 {
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR1_r18_n70 = 0, /**< ASN.1 n70 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR1_r18_n140 = 1, /**< ASN.1 n140 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR1_r18_n210 = 2, /**< ASN.1 n210 */
} PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR1_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR2_r18（ASN.1 rf-TxRetunTimeFR2-r18，源文件第 19302 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR2_r18 {
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR2_r18_n35 = 0, /**< ASN.1 n35 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR2_r18_n70 = 1, /**< ASN.1 n70 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR2_r18_n140 = 2, /**< ASN.1 n140 */
} PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR2_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Inactive_r18_SwitchTimeBetweenActiveBWP_FrequencyHop（ASN.1 switchTimeBetweenActiveBWP-FrequencyHop，源文件第 19303 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Inactive_r18_SwitchTimeBetweenActiveBWP_FrequencyHop {
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_n100 = 0, /**< ASN.1 n100 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_n140 = 1, /**< ASN.1 n140 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_n200 = 2, /**< ASN.1 n200 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_n300 = 3, /**< ASN.1 n300 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_n500 = 4, /**< ASN.1 n500 */
} PosSRS_TxFrequencyHoppingRRC_Inactive_r18_SwitchTimeBetweenActiveBWP_FrequencyHop;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Inactive_r18_NumOfOverlappingPRB_r18（ASN.1 numOfOverlappingPRB-r18，源文件第 19304 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Inactive_r18_NumOfOverlappingPRB_r18 {
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_NumOfOverlappingPRB_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_NumOfOverlappingPRB_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_NumOfOverlappingPRB_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_NumOfOverlappingPRB_r18_n4 = 3, /**< ASN.1 n4 */
} PosSRS_TxFrequencyHoppingRRC_Inactive_r18_NumOfOverlappingPRB_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18（ASN.1 maximumSRS-Resource-Periodic-r18，源文件第 19305 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18 {
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18_n4 = 2, /**< ASN.1 n4 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18_n8 = 3, /**< ASN.1 n8 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18_n16 = 4, /**< ASN.1 n16 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18_n32 = 5, /**< ASN.1 n32 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18_n64 = 6, /**< ASN.1 n64 */
} PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18;


/**
 * @brief 枚举 PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18（ASN.1 maximumSRS-Resource-Semipersistent-r18，源文件第 19306 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18 {
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18_n8 = 4, /**< ASN.1 n8 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18_n16 = 5, /**< ASN.1 n16 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18_n32 = 6, /**< ASN.1 n32 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18_n64 = 7, /**< ASN.1 n64 */
} PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18;


/**
 * @brief 枚举 PowSav_ParametersCommon_r16_Drx_Preference_r16（ASN.1 drx-Preference-r16，源文件第 19325 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PowSav_ParametersCommon_r16_Drx_Preference_r16 {
    PowSav_ParametersCommon_r16_Drx_Preference_r16_supported = 0, /**< ASN.1 supported */
} PowSav_ParametersCommon_r16_Drx_Preference_r16;


/**
 * @brief 枚举 PowSav_ParametersCommon_r16_MaxCC_Preference_r16（ASN.1 maxCC-Preference-r16，源文件第 19326 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PowSav_ParametersCommon_r16_MaxCC_Preference_r16 {
    PowSav_ParametersCommon_r16_MaxCC_Preference_r16_supported = 0, /**< ASN.1 supported */
} PowSav_ParametersCommon_r16_MaxCC_Preference_r16;


/**
 * @brief 枚举 PowSav_ParametersCommon_r16_ReleasePreference_r16（ASN.1 releasePreference-r16，源文件第 19327 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PowSav_ParametersCommon_r16_ReleasePreference_r16 {
    PowSav_ParametersCommon_r16_ReleasePreference_r16_supported = 0, /**< ASN.1 supported */
} PowSav_ParametersCommon_r16_ReleasePreference_r16;


/**
 * @brief 枚举 PowSav_ParametersCommon_r16_MinSchedulingOffsetPreference_r16（ASN.1 minSchedulingOffsetPreference-r16，源文件第 19329 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PowSav_ParametersCommon_r16_MinSchedulingOffsetPreference_r16 {
    PowSav_ParametersCommon_r16_MinSchedulingOffsetPreference_r16_supported = 0, /**< ASN.1 supported */
} PowSav_ParametersCommon_r16_MinSchedulingOffsetPreference_r16;


/**
 * @brief 枚举 PowSav_ParametersFRX_Diff_r16_MaxBW_Preference_r16（ASN.1 maxBW-Preference-r16，源文件第 19334 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PowSav_ParametersFRX_Diff_r16_MaxBW_Preference_r16 {
    PowSav_ParametersFRX_Diff_r16_MaxBW_Preference_r16_supported = 0, /**< ASN.1 supported */
} PowSav_ParametersFRX_Diff_r16_MaxBW_Preference_r16;


/**
 * @brief 枚举 PowSav_ParametersFRX_Diff_r16_MaxMIMO_LayerPreference_r16（ASN.1 maxMIMO-LayerPreference-r16，源文件第 19335 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PowSav_ParametersFRX_Diff_r16_MaxMIMO_LayerPreference_r16 {
    PowSav_ParametersFRX_Diff_r16_MaxMIMO_LayerPreference_r16_supported = 0, /**< ASN.1 supported */
} PowSav_ParametersFRX_Diff_r16_MaxMIMO_LayerPreference_r16;


/**
 * @brief 枚举 PowSav_ParametersFR2_2_r17_MaxBW_Preference_r17（ASN.1 maxBW-Preference-r17，源文件第 19340 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PowSav_ParametersFR2_2_r17_MaxBW_Preference_r17 {
    PowSav_ParametersFR2_2_r17_MaxBW_Preference_r17_supported = 0, /**< ASN.1 supported */
} PowSav_ParametersFR2_2_r17_MaxBW_Preference_r17;


/**
 * @brief 枚举 PowSav_ParametersFR2_2_r17_MaxMIMO_LayerPreference_r17（ASN.1 maxMIMO-LayerPreference-r17，源文件第 19341 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PowSav_ParametersFR2_2_r17_MaxMIMO_LayerPreference_r17 {
    PowSav_ParametersFR2_2_r17_MaxMIMO_LayerPreference_r17_supported = 0, /**< ASN.1 supported */
} PowSav_ParametersFR2_2_r17_MaxMIMO_LayerPreference_r17;


/**
 * @brief 枚举 ProcessingParameters_Fallback（ASN.1 fallback，源文件第 19349 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ProcessingParameters_Fallback {
    ProcessingParameters_Fallback_sc = 0, /**< ASN.1 sc */
    ProcessingParameters_Fallback_cap1_only = 1, /**< ASN.1 cap1-only */
} ProcessingParameters_Fallback;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_PrsProcessingType_r17（ASN.1 prsProcessingType-r17，源文件第 19364 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_PrsProcessingType_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_PrsProcessingType_r17_type1A = 0, /**< ASN.1 type1A */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_PrsProcessingType_r17_type1B = 1, /**< ASN.1 type1B */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_PrsProcessingType_r17_type2 = 2, /**< ASN.1 type2 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_PrsProcessingType_r17;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_dl_PRS_BufferType_r17（ASN.1 ppw-dl-PRS-BufferType-r17，源文件第 19365 行）。
 * @note 可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留。
 */
typedef int32_t PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_dl_PRS_BufferType_r17;
#define PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_dl_PRS_BufferType_r17_type1 0 /**< ASN.1 type1 */
#define PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_dl_PRS_BufferType_r17_type2 1 /**< ASN.1 type2 */


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb（ASN.1 ppw-durationOfPRS-Processing-r17/ppw-durationOfPRS-Processing1-r17/ppw-durationOfPRS-ProcessingSymbolsN-r17，源文件第 19368 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_msDot125 = 0, /**< ASN.1 msDot125 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_msDot25 = 1, /**< ASN.1 msDot25 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_msDot5 = 2, /**< ASN.1 msDot5 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms1 = 3, /**< ASN.1 ms1 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms2 = 4, /**< ASN.1 ms2 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms4 = 5, /**< ASN.1 ms4 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms6 = 6, /**< ASN.1 ms6 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms8 = 7, /**< ASN.1 ms8 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms12 = 8, /**< ASN.1 ms12 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms16 = 9, /**< ASN.1 ms16 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms20 = 10, /**< ASN.1 ms20 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms25 = 11, /**< ASN.1 ms25 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms30 = 12, /**< ASN.1 ms30 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms32 = 13, /**< ASN.1 ms32 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms35 = 14, /**< ASN.1 ms35 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms40 = 15, /**< ASN.1 ms40 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms45 = 16, /**< ASN.1 ms45 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb_ms50 = 17, /**< ASN.1 ms50 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43（ASN.1 ppw-durationOfPRS-Processing-r17/ppw-durationOfPRS-Processing1-r17/ppw-durationOfPRS-ProcessingSymbolsT-r17，源文件第 19370 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms1 = 0, /**< ASN.1 ms1 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms2 = 1, /**< ASN.1 ms2 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms4 = 2, /**< ASN.1 ms4 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms8 = 3, /**< ASN.1 ms8 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms16 = 4, /**< ASN.1 ms16 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms20 = 5, /**< ASN.1 ms20 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms30 = 6, /**< ASN.1 ms30 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms40 = 7, /**< ASN.1 ms40 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms80 = 8, /**< ASN.1 ms80 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms160 = 9, /**< ASN.1 ms160 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms320 = 10, /**< ASN.1 ms320 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms640 = 11, /**< ASN.1 ms640 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43_ms1280 = 12, /**< ASN.1 ms1280 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07（ASN.1 ppw-durationOfPRS-Processing-r17/ppw-durationOfPRS-Processing2-r17/ppw-durationOfPRS-ProcessingSymbolsN2-r17，源文件第 19374 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_msDot125 = 0, /**< ASN.1 msDot125 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_msDot25 = 1, /**< ASN.1 msDot25 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_msDot5 = 2, /**< ASN.1 msDot5 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_ms1 = 3, /**< ASN.1 ms1 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_ms2 = 4, /**< ASN.1 ms2 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_ms3 = 5, /**< ASN.1 ms3 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_ms4 = 6, /**< ASN.1 ms4 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_ms5 = 7, /**< ASN.1 ms5 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_ms6 = 8, /**< ASN.1 ms6 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_ms8 = 9, /**< ASN.1 ms8 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07_ms12 = 10, /**< ASN.1 ms12 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_5fc2046e（ASN.1 ppw-durationOfPRS-Processing-r17/ppw-durationOfPRS-Processing2-r17/ppw-durationOfPRS-ProcessingSymbolsT2-r17，源文件第 19376 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_5fc2046e {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_5fc2046e_ms4 = 0, /**< ASN.1 ms4 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_5fc2046e_ms5 = 1, /**< ASN.1 ms5 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_5fc2046e_ms6 = 2, /**< ASN.1 ms6 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_5fc2046e_ms8 = 3, /**< ASN.1 ms8 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_5fc2046e;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17（ASN.1 ppw-maxNumOfDL-PRS-ResProcessedPerSlot-r17/scs15-r17，源文件第 19380 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n1 = 0, /**< ASN.1 n1 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n2 = 1, /**< ASN.1 n2 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n4 = 2, /**< ASN.1 n4 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n6 = 3, /**< ASN.1 n6 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n8 = 4, /**< ASN.1 n8 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n12 = 5, /**< ASN.1 n12 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n16 = 6, /**< ASN.1 n16 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n24 = 7, /**< ASN.1 n24 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n32 = 8, /**< ASN.1 n32 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n48 = 9, /**< ASN.1 n48 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17_n64 = 10, /**< ASN.1 n64 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17（ASN.1 ppw-maxNumOfDL-PRS-ResProcessedPerSlot-r17/scs30-r17，源文件第 19381 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n1 = 0, /**< ASN.1 n1 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n2 = 1, /**< ASN.1 n2 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n4 = 2, /**< ASN.1 n4 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n6 = 3, /**< ASN.1 n6 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n8 = 4, /**< ASN.1 n8 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n12 = 5, /**< ASN.1 n12 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n16 = 6, /**< ASN.1 n16 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n24 = 7, /**< ASN.1 n24 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n32 = 8, /**< ASN.1 n32 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n48 = 9, /**< ASN.1 n48 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17_n64 = 10, /**< ASN.1 n64 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17（ASN.1 ppw-maxNumOfDL-PRS-ResProcessedPerSlot-r17/scs60-r17，源文件第 19382 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n1 = 0, /**< ASN.1 n1 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n2 = 1, /**< ASN.1 n2 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n4 = 2, /**< ASN.1 n4 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n6 = 3, /**< ASN.1 n6 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n8 = 4, /**< ASN.1 n8 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n12 = 5, /**< ASN.1 n12 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n16 = 6, /**< ASN.1 n16 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n24 = 7, /**< ASN.1 n24 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n32 = 8, /**< ASN.1 n32 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n48 = 9, /**< ASN.1 n48 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17_n64 = 10, /**< ASN.1 n64 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17（ASN.1 ppw-maxNumOfDL-PRS-ResProcessedPerSlot-r17/scs120-r17，源文件第 19383 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n1 = 0, /**< ASN.1 n1 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n2 = 1, /**< ASN.1 n2 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n4 = 2, /**< ASN.1 n4 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n6 = 3, /**< ASN.1 n6 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n8 = 4, /**< ASN.1 n8 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n12 = 5, /**< ASN.1 n12 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n16 = 6, /**< ASN.1 n16 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n24 = 7, /**< ASN.1 n24 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n32 = 8, /**< ASN.1 n32 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n48 = 9, /**< ASN.1 n48 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17_n64 = 10, /**< ASN.1 n64 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17（ASN.1 ppw-maxNumOfDL-Bandwidth-r17/fr1-r17，源文件第 19387 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17_mhz5 = 0, /**< ASN.1 mhz5 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17_mhz10 = 1, /**< ASN.1 mhz10 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17_mhz20 = 2, /**< ASN.1 mhz20 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17_mhz40 = 3, /**< ASN.1 mhz40 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17_mhz50 = 4, /**< ASN.1 mhz50 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17_mhz80 = 5, /**< ASN.1 mhz80 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17_mhz100 = 6, /**< ASN.1 mhz100 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17;


/**
 * @brief 枚举 PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr2_r17（ASN.1 ppw-maxNumOfDL-Bandwidth-r17/fr2-r17，源文件第 19388 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr2_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr2_r17_mhz50 = 0, /**< ASN.1 mhz50 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr2_r17_mhz100 = 1, /**< ASN.1 mhz100 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr2_r17_mhz200 = 2, /**< ASN.1 mhz200 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr2_r17_mhz400 = 3, /**< ASN.1 mhz400 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr2_r17;


/**
 * @brief 枚举 RedCapParameters_r17_SupportOfRedCap_r17（ASN.1 supportOfRedCap-r17，源文件第 19402 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RedCapParameters_r17_SupportOfRedCap_r17 {
    RedCapParameters_r17_SupportOfRedCap_r17_supported = 0, /**< ASN.1 supported */
} RedCapParameters_r17_SupportOfRedCap_r17;


/**
 * @brief 枚举 RedCapParameters_r17_SupportOf16DRB_RedCap_r17（ASN.1 supportOf16DRB-RedCap-r17，源文件第 19403 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RedCapParameters_r17_SupportOf16DRB_RedCap_r17 {
    RedCapParameters_r17_SupportOf16DRB_RedCap_r17_supported = 0, /**< ASN.1 supported */
} RedCapParameters_r17_SupportOf16DRB_RedCap_r17;


/**
 * @brief 枚举 RedCapParameters_v1740_Ncd_SSB_ForRedCapInitialBWP_SDT_r17（ASN.1 ncd-SSB-ForRedCapInitialBWP-SDT-r17，源文件第 19407 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RedCapParameters_v1740_Ncd_SSB_ForRedCapInitialBWP_SDT_r17 {
    RedCapParameters_v1740_Ncd_SSB_ForRedCapInitialBWP_SDT_r17_supported = 0, /**< ASN.1 supported */
} RedCapParameters_v1740_Ncd_SSB_ForRedCapInitialBWP_SDT_r17;


/**
 * @brief 枚举 RF_Parameters_ExtGroup1_Srs_SwitchingTimeRequested（ASN.1 srs-SwitchingTimeRequested，源文件第 19420 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RF_Parameters_ExtGroup1_Srs_SwitchingTimeRequested {
    RF_Parameters_ExtGroup1_Srs_SwitchingTimeRequested_trueVal = 0, /**< ASN.1 trueVal */
} RF_Parameters_ExtGroup1_Srs_SwitchingTimeRequested;


/**
 * @brief 枚举 RF_Parameters_ExtGroup8_ExtendedBand_n77_r16（ASN.1 extendedBand-n77-r16，源文件第 19447 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RF_Parameters_ExtGroup8_ExtendedBand_n77_r16 {
    RF_Parameters_ExtGroup8_ExtendedBand_n77_r16_supported = 0, /**< ASN.1 supported */
} RF_Parameters_ExtGroup8_ExtendedBand_n77_r16;


/**
 * @brief 枚举 RF_Parameters_ExtGroup12_SidelinkRequested_r17（ASN.1 sidelinkRequested-r17，源文件第 19465 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RF_Parameters_ExtGroup12_SidelinkRequested_r17 {
    RF_Parameters_ExtGroup12_SidelinkRequested_r17_trueVal = 0, /**< ASN.1 trueVal */
} RF_Parameters_ExtGroup12_SidelinkRequested_r17;


/**
 * @brief 枚举 RF_Parameters_ExtGroup12_ExtendedBand_n77_2_r17（ASN.1 extendedBand-n77-2-r17，源文件第 19466 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RF_Parameters_ExtGroup12_ExtendedBand_n77_2_r17 {
    RF_Parameters_ExtGroup12_ExtendedBand_n77_2_r17_supported = 0, /**< ASN.1 supported */
} RF_Parameters_ExtGroup12_ExtendedBand_n77_2_r17;


/**
 * @brief 枚举 BandNR_ExtendedCP（ASN.1 extendedCP，源文件第 19522 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtendedCP {
    BandNR_ExtendedCP_supported = 0, /**< ASN.1 supported */
} BandNR_ExtendedCP;


/**
 * @brief 枚举 BandNR_MultipleTCI（ASN.1 multipleTCI，源文件第 19523 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_MultipleTCI {
    BandNR_MultipleTCI_supported = 0, /**< ASN.1 supported */
} BandNR_MultipleTCI;


/**
 * @brief 枚举 BandNR_Bwp_WithoutRestriction（ASN.1 bwp-WithoutRestriction，源文件第 19524 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_Bwp_WithoutRestriction {
    BandNR_Bwp_WithoutRestriction_supported = 0, /**< ASN.1 supported */
} BandNR_Bwp_WithoutRestriction;


/**
 * @brief 枚举 BandNR_Bwp_SameNumerology（ASN.1 bwp-SameNumerology，源文件第 19525 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_Bwp_SameNumerology {
    BandNR_Bwp_SameNumerology_upto2 = 0, /**< ASN.1 upto2 */
    BandNR_Bwp_SameNumerology_upto4 = 1, /**< ASN.1 upto4 */
} BandNR_Bwp_SameNumerology;


/**
 * @brief 枚举 BandNR_Bwp_DiffNumerology（ASN.1 bwp-DiffNumerology，源文件第 19526 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_Bwp_DiffNumerology {
    BandNR_Bwp_DiffNumerology_upto4 = 0, /**< ASN.1 upto4 */
} BandNR_Bwp_DiffNumerology;


/**
 * @brief 枚举 BandNR_CrossCarrierScheduling_SameSCS（ASN.1 crossCarrierScheduling-SameSCS，源文件第 19527 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_CrossCarrierScheduling_SameSCS {
    BandNR_CrossCarrierScheduling_SameSCS_supported = 0, /**< ASN.1 supported */
} BandNR_CrossCarrierScheduling_SameSCS;


/**
 * @brief 枚举 BandNR_Pdsch_256QAM_FR2（ASN.1 pdsch-256QAM-FR2，源文件第 19528 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_Pdsch_256QAM_FR2 {
    BandNR_Pdsch_256QAM_FR2_supported = 0, /**< ASN.1 supported */
} BandNR_Pdsch_256QAM_FR2;


/**
 * @brief 枚举 BandNR_Pusch_256QAM（ASN.1 pusch-256QAM，源文件第 19529 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_Pusch_256QAM {
    BandNR_Pusch_256QAM_supported = 0, /**< ASN.1 supported */
} BandNR_Pusch_256QAM;


/**
 * @brief 枚举 BandNR_Ue_PowerClass（ASN.1 ue-PowerClass，源文件第 19530 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_Ue_PowerClass {
    BandNR_Ue_PowerClass_pc1 = 0, /**< ASN.1 pc1 */
    BandNR_Ue_PowerClass_pc2 = 1, /**< ASN.1 pc2 */
    BandNR_Ue_PowerClass_pc3 = 2, /**< ASN.1 pc3 */
    BandNR_Ue_PowerClass_pc4 = 3, /**< ASN.1 pc4 */
} BandNR_Ue_PowerClass;


/**
 * @brief 枚举 BandNR_RateMatchingLTE_CRS（ASN.1 rateMatchingLTE-CRS，源文件第 19531 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_RateMatchingLTE_CRS {
    BandNR_RateMatchingLTE_CRS_supported = 0, /**< ASN.1 supported */
} BandNR_RateMatchingLTE_CRS;


/**
 * @brief 枚举 BandNR_ExtGroup1_MaxUplinkDutyCycle_PC2_FR1（ASN.1 maxUplinkDutyCycle-PC2-FR1，源文件第 19556 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup1_MaxUplinkDutyCycle_PC2_FR1 {
    BandNR_ExtGroup1_MaxUplinkDutyCycle_PC2_FR1_n60 = 0, /**< ASN.1 n60 */
    BandNR_ExtGroup1_MaxUplinkDutyCycle_PC2_FR1_n70 = 1, /**< ASN.1 n70 */
    BandNR_ExtGroup1_MaxUplinkDutyCycle_PC2_FR1_n80 = 2, /**< ASN.1 n80 */
    BandNR_ExtGroup1_MaxUplinkDutyCycle_PC2_FR1_n90 = 3, /**< ASN.1 n90 */
    BandNR_ExtGroup1_MaxUplinkDutyCycle_PC2_FR1_n100 = 4, /**< ASN.1 n100 */
} BandNR_ExtGroup1_MaxUplinkDutyCycle_PC2_FR1;


/**
 * @brief 枚举 BandNR_ExtGroup2_Pucch_SpatialRelInfoMAC_CE（ASN.1 pucch-SpatialRelInfoMAC-CE，源文件第 19559 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup2_Pucch_SpatialRelInfoMAC_CE {
    BandNR_ExtGroup2_Pucch_SpatialRelInfoMAC_CE_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup2_Pucch_SpatialRelInfoMAC_CE;


/**
 * @brief 枚举 BandNR_ExtGroup2_PowerBoosting_pi2BPSK（ASN.1 powerBoosting-pi2BPSK，源文件第 19560 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup2_PowerBoosting_pi2BPSK {
    BandNR_ExtGroup2_PowerBoosting_pi2BPSK_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup2_PowerBoosting_pi2BPSK;


/**
 * @brief 枚举 BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2（ASN.1 maxUplinkDutyCycle-FR2，源文件第 19563 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2 {
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n15 = 0, /**< ASN.1 n15 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n20 = 1, /**< ASN.1 n20 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n25 = 2, /**< ASN.1 n25 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n30 = 3, /**< ASN.1 n30 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n40 = 4, /**< ASN.1 n40 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n50 = 5, /**< ASN.1 n50 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n60 = 6, /**< ASN.1 n60 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n70 = 7, /**< ASN.1 n70 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n80 = 8, /**< ASN.1 n80 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n90 = 9, /**< ASN.1 n90 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2_n100 = 10, /**< ASN.1 n100 */
} BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2;


/**
 * @brief 枚举 BandNR_ExtGroup6_CancelOverlappingPUSCH_r16（ASN.1 cancelOverlappingPUSCH-r16，源文件第 19596 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_CancelOverlappingPUSCH_r16 {
    BandNR_ExtGroup6_CancelOverlappingPUSCH_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_CancelOverlappingPUSCH_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_OverlapRateMatchingEUTRA_CRS_r16（ASN.1 overlapRateMatchingEUTRA-CRS-r16，源文件第 19603 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_OverlapRateMatchingEUTRA_CRS_r16 {
    BandNR_ExtGroup6_OverlapRateMatchingEUTRA_CRS_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_OverlapRateMatchingEUTRA_CRS_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_Pdsch_MappingTypeB_Alt_r16（ASN.1 pdsch-MappingTypeB-Alt-r16，源文件第 19605 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_Pdsch_MappingTypeB_Alt_r16 {
    BandNR_ExtGroup6_Pdsch_MappingTypeB_Alt_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_Pdsch_MappingTypeB_Alt_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_OneSlotPeriodicTRS_r16（ASN.1 oneSlotPeriodicTRS-r16，源文件第 19607 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_OneSlotPeriodicTRS_r16 {
    BandNR_ExtGroup6_OneSlotPeriodicTRS_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_OneSlotPeriodicTRS_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_SimulSRS_MIMO_TransWithinBand_r16（ASN.1 simulSRS-MIMO-TransWithinBand-r16，源文件第 19610 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_SimulSRS_MIMO_TransWithinBand_r16 {
    BandNR_ExtGroup6_SimulSRS_MIMO_TransWithinBand_r16_n2 = 0, /**< ASN.1 n2 */
} BandNR_ExtGroup6_SimulSRS_MIMO_TransWithinBand_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_15kHz（ASN.1 channelBW-DL-IAB-r16/fr1-100mhz/scs-15kHz，源文件第 19613 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_15kHz {
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_15kHz_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_15kHz;


/**
 * @brief 枚举 BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_30kHz（ASN.1 channelBW-DL-IAB-r16/fr1-100mhz/scs-30kHz，源文件第 19614 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_30kHz {
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_30kHz_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_30kHz;


/**
 * @brief 枚举 BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_60kHz（ASN.1 channelBW-DL-IAB-r16/fr1-100mhz/scs-60kHz，源文件第 19615 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_60kHz {
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_60kHz_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_60kHz;


/**
 * @brief 枚举 BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_60kHz（ASN.1 channelBW-DL-IAB-r16/fr2-200mhz/scs-60kHz，源文件第 19618 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_60kHz {
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_60kHz_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_60kHz;


/**
 * @brief 枚举 BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_120kHz（ASN.1 channelBW-DL-IAB-r16/fr2-200mhz/scs-120kHz，源文件第 19619 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_120kHz {
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_120kHz_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_120kHz;


/**
 * @brief 枚举 BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_15kHz（ASN.1 channelBW-UL-IAB-r16/fr1-100mhz/scs-15kHz，源文件第 19624 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_15kHz {
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_15kHz_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_15kHz;


/**
 * @brief 枚举 BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_30kHz（ASN.1 channelBW-UL-IAB-r16/fr1-100mhz/scs-30kHz，源文件第 19625 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_30kHz {
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_30kHz_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_30kHz;


/**
 * @brief 枚举 BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_60kHz（ASN.1 channelBW-UL-IAB-r16/fr1-100mhz/scs-60kHz，源文件第 19626 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_60kHz {
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_60kHz_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_60kHz;


/**
 * @brief 枚举 BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_60kHz（ASN.1 channelBW-UL-IAB-r16/fr2-200mhz/scs-60kHz，源文件第 19629 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_60kHz {
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_60kHz_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_60kHz;


/**
 * @brief 枚举 BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_120kHz（ASN.1 channelBW-UL-IAB-r16/fr2-200mhz/scs-120kHz，源文件第 19630 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_120kHz {
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_120kHz_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_120kHz;


/**
 * @brief 枚举 BandNR_ExtGroup6_RasterShift7dot5_IAB_r16（ASN.1 rasterShift7dot5-IAB-r16，源文件第 19633 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_RasterShift7dot5_IAB_r16 {
    BandNR_ExtGroup6_RasterShift7dot5_IAB_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_RasterShift7dot5_IAB_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_Ue_PowerClass_v1610（ASN.1 ue-PowerClass-v1610，源文件第 19634 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_Ue_PowerClass_v1610 {
    BandNR_ExtGroup6_Ue_PowerClass_v1610_pc1dot5 = 0, /**< ASN.1 pc1dot5 */
} BandNR_ExtGroup6_Ue_PowerClass_v1610;


/**
 * @brief 枚举 BandNR_ExtGroup6_CondHandover_r16（ASN.1 condHandover-r16，源文件第 19635 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_CondHandover_r16 {
    BandNR_ExtGroup6_CondHandover_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_CondHandover_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_CondHandoverFailure_r16（ASN.1 condHandoverFailure-r16，源文件第 19636 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_CondHandoverFailure_r16 {
    BandNR_ExtGroup6_CondHandoverFailure_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_CondHandoverFailure_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_CondHandoverTwoTriggerEvents_r16（ASN.1 condHandoverTwoTriggerEvents-r16，源文件第 19637 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_CondHandoverTwoTriggerEvents_r16 {
    BandNR_ExtGroup6_CondHandoverTwoTriggerEvents_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_CondHandoverTwoTriggerEvents_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_CondPSCellChange_r16（ASN.1 condPSCellChange-r16，源文件第 19638 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_CondPSCellChange_r16 {
    BandNR_ExtGroup6_CondPSCellChange_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_CondPSCellChange_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_CondPSCellChangeTwoTriggerEvents_r16（ASN.1 condPSCellChangeTwoTriggerEvents-r16，源文件第 19639 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_CondPSCellChangeTwoTriggerEvents_r16 {
    BandNR_ExtGroup6_CondPSCellChangeTwoTriggerEvents_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_CondPSCellChangeTwoTriggerEvents_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_Mpr_PowerBoost_FR2_r16（ASN.1 mpr-PowerBoost-FR2-r16，源文件第 19640 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_Mpr_PowerBoost_FR2_r16 {
    BandNR_ExtGroup6_Mpr_PowerBoost_FR2_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_Mpr_PowerBoost_FR2_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16（ASN.1 activeConfiguredGrant-r16/maxNumberConfigsPerBWP-r16，源文件第 19644 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16 {
    BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16_n8 = 3, /**< ASN.1 n8 */
    BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16_n12 = 4, /**< ASN.1 n12 */
} BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_JointReleaseConfiguredGrantType2_r16（ASN.1 jointReleaseConfiguredGrantType2-r16，源文件第 19648 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_JointReleaseConfiguredGrantType2_r16 {
    BandNR_ExtGroup6_JointReleaseConfiguredGrantType2_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_JointReleaseConfiguredGrantType2_r16;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART009_H */
