/* ============================================================================
 * types/rrc_types_part010.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART010_H
#define RRC_CODEC_TYPES_PART010_H

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

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 枚举 BandNR_ExtGroup6_JointReleaseSPS_r16（ASN.1 jointReleaseSPS-r16，源文件第 19655 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_JointReleaseSPS_r16 {
    BandNR_ExtGroup6_JointReleaseSPS_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_JointReleaseSPS_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_SimulSRS_TransWithinBand_r16（ASN.1 simulSRS-TransWithinBand-r16，源文件第 19657 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_SimulSRS_TransWithinBand_r16 {
    BandNR_ExtGroup6_SimulSRS_TransWithinBand_r16_n2 = 0, /**< ASN.1 n2 */
} BandNR_ExtGroup6_SimulSRS_TransWithinBand_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_Trs_AdditionalBandwidth_r16（ASN.1 trs-AdditionalBandwidth-r16，源文件第 19658 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_Trs_AdditionalBandwidth_r16 {
    BandNR_ExtGroup6_Trs_AdditionalBandwidth_r16_trs_AddBW_Set1 = 0, /**< ASN.1 trs-AddBW-Set1 */
    BandNR_ExtGroup6_Trs_AdditionalBandwidth_r16_trs_AddBW_Set2 = 1, /**< ASN.1 trs-AddBW-Set2 */
} BandNR_ExtGroup6_Trs_AdditionalBandwidth_r16;


/**
 * @brief 枚举 BandNR_ExtGroup6_HandoverIntraF_IAB_r16（ASN.1 handoverIntraF-IAB-r16，源文件第 19659 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup6_HandoverIntraF_IAB_r16 {
    BandNR_ExtGroup6_HandoverIntraF_IAB_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup6_HandoverIntraF_IAB_r16;


/**
 * @brief 枚举 BandNR_ExtGroup8_HandoverUTRA_FDD_r16（ASN.1 handoverUTRA-FDD-r16，源文件第 19669 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup8_HandoverUTRA_FDD_r16 {
    BandNR_ExtGroup8_HandoverUTRA_FDD_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup8_HandoverUTRA_FDD_r16;


/**
 * @brief 枚举 BandNR_ExtGroup8_EnhancedUL_TransientPeriod_r16（ASN.1 enhancedUL-TransientPeriod-r16，源文件第 19671 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup8_EnhancedUL_TransientPeriod_r16 {
    BandNR_ExtGroup8_EnhancedUL_TransientPeriod_r16_us2 = 0, /**< ASN.1 us2 */
    BandNR_ExtGroup8_EnhancedUL_TransientPeriod_r16_us4 = 1, /**< ASN.1 us4 */
    BandNR_ExtGroup8_EnhancedUL_TransientPeriod_r16_us7 = 2, /**< ASN.1 us7 */
} BandNR_ExtGroup8_EnhancedUL_TransientPeriod_r16;


/**
 * @brief 枚举 BandNR_ExtGroup9_Type1_PUSCH_RepetitionMultiSlots_v1650（ASN.1 type1-PUSCH-RepetitionMultiSlots-v1650，源文件第 19675 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup9_Type1_PUSCH_RepetitionMultiSlots_v1650 {
    BandNR_ExtGroup9_Type1_PUSCH_RepetitionMultiSlots_v1650_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup9_Type1_PUSCH_RepetitionMultiSlots_v1650;


/**
 * @brief 枚举 BandNR_ExtGroup9_Type2_PUSCH_RepetitionMultiSlots_v1650（ASN.1 type2-PUSCH-RepetitionMultiSlots-v1650，源文件第 19676 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup9_Type2_PUSCH_RepetitionMultiSlots_v1650 {
    BandNR_ExtGroup9_Type2_PUSCH_RepetitionMultiSlots_v1650_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup9_Type2_PUSCH_RepetitionMultiSlots_v1650;


/**
 * @brief 枚举 BandNR_ExtGroup9_Pusch_RepetitionMultiSlots_v1650（ASN.1 pusch-RepetitionMultiSlots-v1650，源文件第 19677 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup9_Pusch_RepetitionMultiSlots_v1650 {
    BandNR_ExtGroup9_Pusch_RepetitionMultiSlots_v1650_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup9_Pusch_RepetitionMultiSlots_v1650;


/**
 * @brief 枚举 BandNR_ExtGroup9_ConfiguredUL_GrantType1_v1650（ASN.1 configuredUL-GrantType1-v1650，源文件第 19678 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup9_ConfiguredUL_GrantType1_v1650 {
    BandNR_ExtGroup9_ConfiguredUL_GrantType1_v1650_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup9_ConfiguredUL_GrantType1_v1650;


/**
 * @brief 枚举 BandNR_ExtGroup9_ConfiguredUL_GrantType2_v1650（ASN.1 configuredUL-GrantType2-v1650，源文件第 19679 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup9_ConfiguredUL_GrantType2_v1650 {
    BandNR_ExtGroup9_ConfiguredUL_GrantType2_v1650_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup9_ConfiguredUL_GrantType2_v1650;


/**
 * @brief 枚举 BandNR_ExtGroup10_EnhancedSkipUplinkTxConfigured_v1660（ASN.1 enhancedSkipUplinkTxConfigured-v1660，源文件第 19683 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup10_EnhancedSkipUplinkTxConfigured_v1660 {
    BandNR_ExtGroup10_EnhancedSkipUplinkTxConfigured_v1660_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup10_EnhancedSkipUplinkTxConfigured_v1660;


/**
 * @brief 枚举 BandNR_ExtGroup10_EnhancedSkipUplinkTxDynamic_v1660（ASN.1 enhancedSkipUplinkTxDynamic-v1660，源文件第 19684 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup10_EnhancedSkipUplinkTxDynamic_v1660 {
    BandNR_ExtGroup10_EnhancedSkipUplinkTxDynamic_v1660_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup10_EnhancedSkipUplinkTxDynamic_v1660;


/**
 * @brief 枚举 BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16（ASN.1 maxUplinkDutyCycle-PC1dot5-MPE-FR1-r16，源文件第 19687 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16 {
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n10 = 0, /**< ASN.1 n10 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n15 = 1, /**< ASN.1 n15 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n20 = 2, /**< ASN.1 n20 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n25 = 3, /**< ASN.1 n25 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n30 = 4, /**< ASN.1 n30 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n40 = 5, /**< ASN.1 n40 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n50 = 6, /**< ASN.1 n50 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n60 = 7, /**< ASN.1 n60 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n70 = 8, /**< ASN.1 n70 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n80 = 9, /**< ASN.1 n80 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n90 = 10, /**< ASN.1 n90 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16_n100 = 11, /**< ASN.1 n100 */
} BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16;


/**
 * @brief 枚举 BandNR_ExtGroup11_TxDiversity_r16（ASN.1 txDiversity-r16，源文件第 19688 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup11_TxDiversity_r16 {
    BandNR_ExtGroup11_TxDiversity_r16_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup11_TxDiversity_r16;


/**
 * @brief 枚举 BandNR_ExtGroup12_Pdsch_1024QAM_FR1_r17（ASN.1 pdsch-1024QAM-FR1-r17，源文件第 19692 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Pdsch_1024QAM_FR1_r17 {
    BandNR_ExtGroup12_Pdsch_1024QAM_FR1_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Pdsch_1024QAM_FR1_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Ue_PowerClass_v1700（ASN.1 ue-PowerClass-v1700，源文件第 19694 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Ue_PowerClass_v1700 {
    BandNR_ExtGroup12_Ue_PowerClass_v1700_pc5 = 0, /**< ASN.1 pc5 */
    BandNR_ExtGroup12_Ue_PowerClass_v1700_pc6 = 1, /**< ASN.1 pc6 */
    BandNR_ExtGroup12_Ue_PowerClass_v1700_pc7 = 2, /**< ASN.1 pc7 */
} BandNR_ExtGroup12_Ue_PowerClass_v1700;


/**
 * @brief 枚举 BandNR_ExtGroup12_Rlm_Relaxation_r17（ASN.1 rlm-Relaxation-r17，源文件第 19697 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Rlm_Relaxation_r17 {
    BandNR_ExtGroup12_Rlm_Relaxation_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Rlm_Relaxation_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Bfd_Relaxation_r17（ASN.1 bfd-Relaxation-r17，源文件第 19698 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Bfd_Relaxation_r17 {
    BandNR_ExtGroup12_Bfd_Relaxation_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Bfd_Relaxation_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Cg_SDT_r17（ASN.1 cg-SDT-r17，源文件第 19699 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Cg_SDT_r17 {
    BandNR_ExtGroup12_Cg_SDT_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Cg_SDT_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_LocationBasedCondHandover_r17（ASN.1 locationBasedCondHandover-r17，源文件第 19700 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_LocationBasedCondHandover_r17 {
    BandNR_ExtGroup12_LocationBasedCondHandover_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_LocationBasedCondHandover_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_TimeBasedCondHandover_r17（ASN.1 timeBasedCondHandover-r17，源文件第 19701 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_TimeBasedCondHandover_r17 {
    BandNR_ExtGroup12_TimeBasedCondHandover_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_TimeBasedCondHandover_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_EventA4BasedCondHandover_r17（ASN.1 eventA4BasedCondHandover-r17，源文件第 19702 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_EventA4BasedCondHandover_r17 {
    BandNR_ExtGroup12_EventA4BasedCondHandover_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_EventA4BasedCondHandover_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Mn_InitiatedCondPSCellChangeNRDC_r17（ASN.1 mn-InitiatedCondPSCellChangeNRDC-r17，源文件第 19703 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Mn_InitiatedCondPSCellChangeNRDC_r17 {
    BandNR_ExtGroup12_Mn_InitiatedCondPSCellChangeNRDC_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Mn_InitiatedCondPSCellChangeNRDC_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Sn_InitiatedCondPSCellChangeNRDC_r17（ASN.1 sn-InitiatedCondPSCellChangeNRDC-r17，源文件第 19704 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Sn_InitiatedCondPSCellChangeNRDC_r17 {
    BandNR_ExtGroup12_Sn_InitiatedCondPSCellChangeNRDC_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Sn_InitiatedCondPSCellChangeNRDC_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Pdcch_SkippingWithoutSSSG_r17（ASN.1 pdcch-SkippingWithoutSSSG-r17，源文件第 19706 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Pdcch_SkippingWithoutSSSG_r17 {
    BandNR_ExtGroup12_Pdcch_SkippingWithoutSSSG_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Pdcch_SkippingWithoutSSSG_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Sssg_Switching_1BitInd_r17（ASN.1 sssg-Switching-1BitInd-r17，源文件第 19708 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Sssg_Switching_1BitInd_r17 {
    BandNR_ExtGroup12_Sssg_Switching_1BitInd_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Sssg_Switching_1BitInd_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Sssg_Switching_2BitInd_r17（ASN.1 sssg-Switching-2BitInd-r17，源文件第 19710 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Sssg_Switching_2BitInd_r17 {
    BandNR_ExtGroup12_Sssg_Switching_2BitInd_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Sssg_Switching_2BitInd_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Pdcch_SkippingWithSSSG_r17（ASN.1 pdcch-SkippingWithSSSG-r17，源文件第 19712 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Pdcch_SkippingWithSSSG_r17 {
    BandNR_ExtGroup12_Pdcch_SkippingWithSSSG_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Pdcch_SkippingWithSSSG_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_SearchSpaceSetGrp_switchCap2_r17（ASN.1 searchSpaceSetGrp-switchCap2-r17，源文件第 19714 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_SearchSpaceSetGrp_switchCap2_r17 {
    BandNR_ExtGroup12_SearchSpaceSetGrp_switchCap2_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_SearchSpaceSetGrp_switchCap2_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_UplinkPreCompensation_r17（ASN.1 uplinkPreCompensation-r17，源文件第 19716 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_UplinkPreCompensation_r17 {
    BandNR_ExtGroup12_UplinkPreCompensation_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_UplinkPreCompensation_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Uplink_TA_Reporting_r17（ASN.1 uplink-TA-Reporting-r17，源文件第 19718 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Uplink_TA_Reporting_r17 {
    BandNR_ExtGroup12_Uplink_TA_Reporting_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Uplink_TA_Reporting_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Max_HARQ_ProcessNumber_r17（ASN.1 max-HARQ-ProcessNumber-r17，源文件第 19720 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Max_HARQ_ProcessNumber_r17 {
    BandNR_ExtGroup12_Max_HARQ_ProcessNumber_r17_u16d32 = 0, /**< ASN.1 u16d32 */
    BandNR_ExtGroup12_Max_HARQ_ProcessNumber_r17_u32d16 = 1, /**< ASN.1 u32d16 */
    BandNR_ExtGroup12_Max_HARQ_ProcessNumber_r17_u32d32 = 2, /**< ASN.1 u32d32 */
} BandNR_ExtGroup12_Max_HARQ_ProcessNumber_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Type2_HARQ_Codebook_r17（ASN.1 type2-HARQ-Codebook-r17，源文件第 19722 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Type2_HARQ_Codebook_r17 {
    BandNR_ExtGroup12_Type2_HARQ_Codebook_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Type2_HARQ_Codebook_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Type1_HARQ_Codebook_r17（ASN.1 type1-HARQ-Codebook-r17，源文件第 19724 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Type1_HARQ_Codebook_r17 {
    BandNR_ExtGroup12_Type1_HARQ_Codebook_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Type1_HARQ_Codebook_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Type3_HARQ_Codebook_r17（ASN.1 type3-HARQ-Codebook-r17，源文件第 19726 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Type3_HARQ_Codebook_r17 {
    BandNR_ExtGroup12_Type3_HARQ_Codebook_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Type3_HARQ_Codebook_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Ue_specific_K_Offset_r17（ASN.1 ue-specific-K-Offset-r17，源文件第 19728 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Ue_specific_K_Offset_r17 {
    BandNR_ExtGroup12_Ue_specific_K_Offset_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Ue_specific_K_Offset_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_MultiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17（ASN.1 multiPDSCH-SingleDCI-FR2-1-SCS-120kHz-r17，源文件第 19730 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_MultiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17 {
    BandNR_ExtGroup12_MultiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_MultiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_MultiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17（ASN.1 multiPUSCH-SingleDCI-FR2-1-SCS-120kHz-r17，源文件第 19732 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_MultiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17 {
    BandNR_ExtGroup12_MultiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_MultiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_ParallelPRS_MeasRRC_Inactive_r17（ASN.1 parallelPRS-MeasRRC-Inactive-r17，源文件第 19734 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_ParallelPRS_MeasRRC_Inactive_r17 {
    BandNR_ExtGroup12_ParallelPRS_MeasRRC_Inactive_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_ParallelPRS_MeasRRC_Inactive_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17（ASN.1 nr-UE-TxTEG-ID-MaxSupport-r17，源文件第 19736 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17 {
    BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17_n3 = 2, /**< ASN.1 n3 */
    BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17_n4 = 3, /**< ASN.1 n4 */
    BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17_n6 = 4, /**< ASN.1 n6 */
    BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17_n8 = 5, /**< ASN.1 n8 */
} BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Prs_ProcessingRRC_Inactive_r17（ASN.1 prs-ProcessingRRC-Inactive-r17，源文件第 19738 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Prs_ProcessingRRC_Inactive_r17 {
    BandNR_ExtGroup12_Prs_ProcessingRRC_Inactive_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Prs_ProcessingRRC_Inactive_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Prs_ProcessingWindowType1A_r17（ASN.1 prs-ProcessingWindowType1A-r17，源文件第 19740 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Prs_ProcessingWindowType1A_r17 {
    BandNR_ExtGroup12_Prs_ProcessingWindowType1A_r17_option1 = 0, /**< ASN.1 option1 */
    BandNR_ExtGroup12_Prs_ProcessingWindowType1A_r17_option2 = 1, /**< ASN.1 option2 */
    BandNR_ExtGroup12_Prs_ProcessingWindowType1A_r17_option3 = 2, /**< ASN.1 option3 */
} BandNR_ExtGroup12_Prs_ProcessingWindowType1A_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Prs_ProcessingWindowType1B_r17（ASN.1 prs-ProcessingWindowType1B-r17，源文件第 19741 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Prs_ProcessingWindowType1B_r17 {
    BandNR_ExtGroup12_Prs_ProcessingWindowType1B_r17_option1 = 0, /**< ASN.1 option1 */
    BandNR_ExtGroup12_Prs_ProcessingWindowType1B_r17_option2 = 1, /**< ASN.1 option2 */
    BandNR_ExtGroup12_Prs_ProcessingWindowType1B_r17_option3 = 2, /**< ASN.1 option3 */
} BandNR_ExtGroup12_Prs_ProcessingWindowType1B_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Prs_ProcessingWindowType2_r17（ASN.1 prs-ProcessingWindowType2-r17，源文件第 19742 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Prs_ProcessingWindowType2_r17 {
    BandNR_ExtGroup12_Prs_ProcessingWindowType2_r17_option1 = 0, /**< ASN.1 option1 */
    BandNR_ExtGroup12_Prs_ProcessingWindowType2_r17_option2 = 1, /**< ASN.1 option2 */
    BandNR_ExtGroup12_Prs_ProcessingWindowType2_r17_option3 = 2, /**< ASN.1 option3 */
} BandNR_ExtGroup12_Prs_ProcessingWindowType2_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_MaxNumberPUSCH_TypeA_Repetition_r17（ASN.1 maxNumberPUSCH-TypeA-Repetition-r17，源文件第 19750 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_MaxNumberPUSCH_TypeA_Repetition_r17 {
    BandNR_ExtGroup12_MaxNumberPUSCH_TypeA_Repetition_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_MaxNumberPUSCH_TypeA_Repetition_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_PuschTypeA_RepetitionsAvailSlot_r17（ASN.1 puschTypeA-RepetitionsAvailSlot-r17，源文件第 19752 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_PuschTypeA_RepetitionsAvailSlot_r17 {
    BandNR_ExtGroup12_PuschTypeA_RepetitionsAvailSlot_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_PuschTypeA_RepetitionsAvailSlot_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Tb_ProcessingMultiSlotPUSCH_r17（ASN.1 tb-ProcessingMultiSlotPUSCH-r17，源文件第 19754 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Tb_ProcessingMultiSlotPUSCH_r17 {
    BandNR_ExtGroup12_Tb_ProcessingMultiSlotPUSCH_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Tb_ProcessingMultiSlotPUSCH_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Tb_ProcessingRepMultiSlotPUSCH_r17（ASN.1 tb-ProcessingRepMultiSlotPUSCH-r17，源文件第 19756 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Tb_ProcessingRepMultiSlotPUSCH_r17 {
    BandNR_ExtGroup12_Tb_ProcessingRepMultiSlotPUSCH_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Tb_ProcessingRepMultiSlotPUSCH_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Fdd_r17（ASN.1 maxDurationDMRS-Bundling-r17/fdd-r17，源文件第 19759 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Fdd_r17 {
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Fdd_r17_n4 = 0, /**< ASN.1 n4 */
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Fdd_r17_n8 = 1, /**< ASN.1 n8 */
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Fdd_r17_n16 = 2, /**< ASN.1 n16 */
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Fdd_r17_n32 = 3, /**< ASN.1 n32 */
} BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Fdd_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Tdd_r17（ASN.1 maxDurationDMRS-Bundling-r17/tdd-r17，源文件第 19760 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Tdd_r17 {
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Tdd_r17_n2 = 0, /**< ASN.1 n2 */
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Tdd_r17_n4 = 1, /**< ASN.1 n4 */
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Tdd_r17_n8 = 2, /**< ASN.1 n8 */
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Tdd_r17_n16 = 3, /**< ASN.1 n16 */
} BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Tdd_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Pusch_RepetitionMsg3_r17（ASN.1 pusch-RepetitionMsg3-r17，源文件第 19763 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Pusch_RepetitionMsg3_r17 {
    BandNR_ExtGroup12_Pusch_RepetitionMsg3_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Pusch_RepetitionMsg3_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_ParallelMeasurementWithoutRestriction_r17（ASN.1 parallelMeasurementWithoutRestriction-r17，源文件第 19767 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_ParallelMeasurementWithoutRestriction_r17 {
    BandNR_ExtGroup12_ParallelMeasurementWithoutRestriction_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_ParallelMeasurementWithoutRestriction_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_MaxNumber_NGSO_SatellitesWithinOneSMTC_r17（ASN.1 maxNumber-NGSO-SatellitesWithinOneSMTC-r17，源文件第 19769 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_MaxNumber_NGSO_SatellitesWithinOneSMTC_r17 {
    BandNR_ExtGroup12_MaxNumber_NGSO_SatellitesWithinOneSMTC_r17_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup12_MaxNumber_NGSO_SatellitesWithinOneSMTC_r17_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup12_MaxNumber_NGSO_SatellitesWithinOneSMTC_r17_n3 = 2, /**< ASN.1 n3 */
    BandNR_ExtGroup12_MaxNumber_NGSO_SatellitesWithinOneSMTC_r17_n4 = 3, /**< ASN.1 n4 */
} BandNR_ExtGroup12_MaxNumber_NGSO_SatellitesWithinOneSMTC_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_K1_RangeExtension_r17（ASN.1 k1-RangeExtension-r17，源文件第 19771 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_K1_RangeExtension_r17 {
    BandNR_ExtGroup12_K1_RangeExtension_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_K1_RangeExtension_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17（ASN.1 aperiodicCSI-RS-FastScellActivation-r17/maxNumberAperiodicCSI-RS-PerCC-r17，源文件第 19774 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17 {
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17_n16 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17_n32 = 2, /**< ASN.1 n32 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17_n48 = 3, /**< ASN.1 n48 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17_n64 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17_n128 = 5, /**< ASN.1 n128 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17_n255 = 6, /**< ASN.1 n255 */
} BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17（ASN.1 aperiodicCSI-RS-FastScellActivation-r17/maxNumberAperiodicCSI-RS-AcrossCCs-r17，源文件第 19775 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17 {
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17_n16 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17_n32 = 2, /**< ASN.1 n32 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17_n64 = 3, /**< ASN.1 n64 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17_n128 = 4, /**< ASN.1 n128 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17_n256 = 5, /**< ASN.1 n256 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17_n512 = 6, /**< ASN.1 n512 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17_n1024 = 7, /**< ASN.1 n1024 */
} BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_AperiodicCSI_RS_AdditionalBandwidth_r17（ASN.1 aperiodicCSI-RS-AdditionalBandwidth-r17，源文件第 19778 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_AperiodicCSI_RS_AdditionalBandwidth_r17 {
    BandNR_ExtGroup12_AperiodicCSI_RS_AdditionalBandwidth_r17_addBW_Set1 = 0, /**< ASN.1 addBW-Set1 */
    BandNR_ExtGroup12_AperiodicCSI_RS_AdditionalBandwidth_r17_addBW_Set2 = 1, /**< ASN.1 addBW-Set2 */
} BandNR_ExtGroup12_AperiodicCSI_RS_AdditionalBandwidth_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17（ASN.1 bwp-WithoutCD-SSB-OrNCD-SSB-RedCap-r17，源文件第 19780 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17 {
    BandNR_ExtGroup12_Bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_HalfDuplexFDD_TypeA_RedCap_r17（ASN.1 halfDuplexFDD-TypeA-RedCap-r17，源文件第 19782 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_HalfDuplexFDD_TypeA_RedCap_r17 {
    BandNR_ExtGroup12_HalfDuplexFDD_TypeA_RedCap_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_HalfDuplexFDD_TypeA_RedCap_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_Ul_GapFR2_r17（ASN.1 ul-GapFR2-r17，源文件第 19792 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_Ul_GapFR2_r17 {
    BandNR_ExtGroup12_Ul_GapFR2_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_Ul_GapFR2_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_OneShotHARQ_feedbackTriggeredByDCI_1_2_r17（ASN.1 oneShotHARQ-feedbackTriggeredByDCI-1-2-r17，源文件第 19794 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_OneShotHARQ_feedbackTriggeredByDCI_1_2_r17 {
    BandNR_ExtGroup12_OneShotHARQ_feedbackTriggeredByDCI_1_2_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_OneShotHARQ_feedbackTriggeredByDCI_1_2_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_OneShotHARQ_feedbackPhy_Priority_r17（ASN.1 oneShotHARQ-feedbackPhy-Priority-r17，源文件第 19796 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_OneShotHARQ_feedbackPhy_Priority_r17 {
    BandNR_ExtGroup12_OneShotHARQ_feedbackPhy_Priority_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup12_OneShotHARQ_feedbackPhy_Priority_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_EnhancedType3_HARQ_Codebooks_r17（ASN.1 enhancedType3-HARQ-CodebookFeedback-r17/enhancedType3-HARQ-Codebooks-r17，源文件第 19799 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_EnhancedType3_HARQ_Codebooks_r17 {
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_EnhancedType3_HARQ_Codebooks_r17_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_EnhancedType3_HARQ_Codebooks_r17_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_EnhancedType3_HARQ_Codebooks_r17_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_EnhancedType3_HARQ_Codebooks_r17_n8 = 3, /**< ASN.1 n8 */
} BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_EnhancedType3_HARQ_Codebooks_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17（ASN.1 enhancedType3-HARQ-CodebookFeedback-r17/maxNumberPUCCH-Transmissions-r17，源文件第 19800 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17 {
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17_n3 = 2, /**< ASN.1 n3 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17_n4 = 3, /**< ASN.1 n4 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17_n5 = 4, /**< ASN.1 n5 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17_n6 = 5, /**< ASN.1 n6 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17_n7 = 6, /**< ASN.1 n7 */
} BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17（ASN.1 triggeredHARQ-CodebookRetx-r17/minHARQ-Retx-Offset-r17，源文件第 19804 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17 {
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17_n_7 = 0, /**< ASN.1 n-7 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17_n_5 = 1, /**< ASN.1 n-5 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17_n_3 = 2, /**< ASN.1 n-3 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17_n_1 = 3, /**< ASN.1 n-1 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17_n1 = 4, /**< ASN.1 n1 */
} BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17;


/**
 * @brief 枚举 BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17（ASN.1 triggeredHARQ-CodebookRetx-r17/maxHARQ-Retx-Offset-r17，源文件第 19805 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17 {
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n4 = 0, /**< ASN.1 n4 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n6 = 1, /**< ASN.1 n6 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n8 = 2, /**< ASN.1 n8 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n10 = 3, /**< ASN.1 n10 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n12 = 4, /**< ASN.1 n12 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n14 = 5, /**< ASN.1 n14 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n16 = 6, /**< ASN.1 n16 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n18 = 7, /**< ASN.1 n18 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n20 = 8, /**< ASN.1 n20 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n22 = 9, /**< ASN.1 n22 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17_n24 = 10, /**< ASN.1 n24 */
} BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Ue_OneShotUL_TimingAdj_r17（ASN.1 ue-OneShotUL-TimingAdj-r17，源文件第 19810 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Ue_OneShotUL_TimingAdj_r17 {
    BandNR_ExtGroup13_Ue_OneShotUL_TimingAdj_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_Ue_OneShotUL_TimingAdj_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Pucch_Repetition_F0_2_r17（ASN.1 pucch-Repetition-F0-2-r17，源文件第 19812 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Pucch_Repetition_F0_2_r17 {
    BandNR_ExtGroup13_Pucch_Repetition_F0_2_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_Pucch_Repetition_F0_2_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17（ASN.1 cqi-4-BitsSubbandNTN-SharedSpectrumChAccess-r17，源文件第 19814 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17 {
    BandNR_ExtGroup13_Cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_Cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Mux_HARQ_ACK_DiffPriorities_r17（ASN.1 mux-HARQ-ACK-DiffPriorities-r17，源文件第 19816 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Mux_HARQ_ACK_DiffPriorities_r17 {
    BandNR_ExtGroup13_Mux_HARQ_ACK_DiffPriorities_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_Mux_HARQ_ACK_DiffPriorities_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Ta_BasedPDC_NTN_SharedSpectrumChAccess_r17（ASN.1 ta-BasedPDC-NTN-SharedSpectrumChAccess-r17，源文件第 19818 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Ta_BasedPDC_NTN_SharedSpectrumChAccess_r17 {
    BandNR_ExtGroup13_Ta_BasedPDC_NTN_SharedSpectrumChAccess_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_Ta_BasedPDC_NTN_SharedSpectrumChAccess_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17（ASN.1 ack-NACK-FeedbackForMulticastWithDCI-Enabler-r17，源文件第 19820 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17 {
    BandNR_ExtGroup13_Ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_Ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_DynamicMulticastDCI_Format4_2_r17（ASN.1 dynamicMulticastDCI-Format4-2-r17，源文件第 19824 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_DynamicMulticastDCI_Format4_2_r17 {
    BandNR_ExtGroup13_DynamicMulticastDCI_Format4_2_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_DynamicMulticastDCI_Format4_2_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr1_r17（ASN.1 maxModulationOrderForMulticast-r17/fr1-r17，源文件第 19827 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr1_r17 {
    BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr1_r17_qam256 = 0, /**< ASN.1 qam256 */
    BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr1_r17_qam1024 = 1, /**< ASN.1 qam1024 */
} BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr1_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr2_r17（ASN.1 maxModulationOrderForMulticast-r17/fr2-r17，源文件第 19828 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr2_r17 {
    BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr2_r17_qam64 = 0, /**< ASN.1 qam64 */
    BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr2_r17_qam256 = 1, /**< ASN.1 qam256 */
} BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr2_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_DynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17（ASN.1 dynamicSlotRepetitionMulticastTN-NonSharedSpectrumChAccess-r17，源文件第 19831 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_DynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17 {
    BandNR_ExtGroup13_DynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup13_DynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17_n16 = 1, /**< ASN.1 n16 */
} BandNR_ExtGroup13_DynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_DynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17（ASN.1 dynamicSlotRepetitionMulticastNTN-SharedSpectrumChAccess-r17，源文件第 19833 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_DynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17 {
    BandNR_ExtGroup13_DynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup13_DynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17_n16 = 1, /**< ASN.1 n16 */
} BandNR_ExtGroup13_DynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17（ASN.1 nack-OnlyFeedbackForMulticastWithDCI-Enabler-r17，源文件第 19835 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17 {
    BandNR_ExtGroup13_Nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_Nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17（ASN.1 ack-NACK-FeedbackForSPS-MulticastWithDCI-Enabler-r17，源文件第 19837 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17 {
    BandNR_ExtGroup13_Ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_Ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Re_LevelRateMatchingForMulticast_r17（ASN.1 re-LevelRateMatchingForMulticast-r17，源文件第 19841 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Re_LevelRateMatchingForMulticast_r17 {
    BandNR_ExtGroup13_Re_LevelRateMatchingForMulticast_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_Re_LevelRateMatchingForMulticast_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Pdsch_1024QAM_2MIMO_FR1_r17（ASN.1 pdsch-1024QAM-2MIMO-FR1-r17，源文件第 19843 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Pdsch_1024QAM_2MIMO_FR1_r17 {
    BandNR_ExtGroup13_Pdsch_1024QAM_2MIMO_FR1_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup13_Pdsch_1024QAM_2MIMO_FR1_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Prs_MeasurementWithoutMG_r17（ASN.1 prs-MeasurementWithoutMG-r17，源文件第 19845 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Prs_MeasurementWithoutMG_r17 {
    BandNR_ExtGroup13_Prs_MeasurementWithoutMG_r17_cpLength = 0, /**< ASN.1 cpLength */
    BandNR_ExtGroup13_Prs_MeasurementWithoutMG_r17_quarterSymbol = 1, /**< ASN.1 quarterSymbol */
    BandNR_ExtGroup13_Prs_MeasurementWithoutMG_r17_halfSymbol = 2, /**< ASN.1 halfSymbol */
    BandNR_ExtGroup13_Prs_MeasurementWithoutMG_r17_halfSlot = 3, /**< ASN.1 halfSlot */
} BandNR_ExtGroup13_Prs_MeasurementWithoutMG_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17（ASN.1 srs-SemiPersistent-PosResourcesRRC-Inactive-r17/maxNumOfSemiPersistentSRSposResources-r17，源文件第 19852 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17 {
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17_n8 = 3, /**< ASN.1 n8 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17_n16 = 4, /**< ASN.1 n16 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17_n32 = 5, /**< ASN.1 n32 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17_n64 = 6, /**< ASN.1 n64 */
} BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17;


/**
 * @brief 枚举 BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17（ASN.1 srs-SemiPersistent-PosResourcesRRC-Inactive-r17/maxNumOfSemiPersistentSRSposResourcesPerSlot-r17，源文件第 19853 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17 {
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n3 = 2, /**< ASN.1 n3 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n4 = 3, /**< ASN.1 n4 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n5 = 4, /**< ASN.1 n5 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n6 = 5, /**< ASN.1 n6 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n8 = 6, /**< ASN.1 n8 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n10 = 7, /**< ASN.1 n10 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n12 = 8, /**< ASN.1 n12 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17_n14 = 9, /**< ASN.1 n14 */
} BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17;


/**
 * @brief 枚举 BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeA_r17（ASN.1 dmrs-BundlingPUSCH-RepTypeA-r17，源文件第 19861 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeA_r17 {
    BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeA_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeA_r17;


/**
 * @brief 枚举 BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeB_r17（ASN.1 dmrs-BundlingPUSCH-RepTypeB-r17，源文件第 19863 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeB_r17 {
    BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeB_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeB_r17;


/**
 * @brief 枚举 BandNR_ExtGroup14_Dmrs_BundlingPUSCH_multiSlot_r17（ASN.1 dmrs-BundlingPUSCH-multiSlot-r17，源文件第 19865 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup14_Dmrs_BundlingPUSCH_multiSlot_r17 {
    BandNR_ExtGroup14_Dmrs_BundlingPUSCH_multiSlot_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup14_Dmrs_BundlingPUSCH_multiSlot_r17;


/**
 * @brief 枚举 BandNR_ExtGroup14_Dmrs_BundlingPUCCH_Rep_r17（ASN.1 dmrs-BundlingPUCCH-Rep-r17，源文件第 19867 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup14_Dmrs_BundlingPUCCH_Rep_r17 {
    BandNR_ExtGroup14_Dmrs_BundlingPUCCH_Rep_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup14_Dmrs_BundlingPUCCH_Rep_r17;


/**
 * @brief 枚举 BandNR_ExtGroup14_InterSlotFreqHopInterSlotBundlingPUSCH_r17（ASN.1 interSlotFreqHopInterSlotBundlingPUSCH-r17，源文件第 19869 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup14_InterSlotFreqHopInterSlotBundlingPUSCH_r17 {
    BandNR_ExtGroup14_InterSlotFreqHopInterSlotBundlingPUSCH_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup14_InterSlotFreqHopInterSlotBundlingPUSCH_r17;


/**
 * @brief 枚举 BandNR_ExtGroup14_InterSlotFreqHopPUCCH_r17（ASN.1 interSlotFreqHopPUCCH-r17，源文件第 19871 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup14_InterSlotFreqHopPUCCH_r17 {
    BandNR_ExtGroup14_InterSlotFreqHopPUCCH_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup14_InterSlotFreqHopPUCCH_r17;


/**
 * @brief 枚举 BandNR_ExtGroup14_Dmrs_BundlingRestart_r17（ASN.1 dmrs-BundlingRestart-r17，源文件第 19873 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup14_Dmrs_BundlingRestart_r17 {
    BandNR_ExtGroup14_Dmrs_BundlingRestart_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup14_Dmrs_BundlingRestart_r17;


/**
 * @brief 枚举 BandNR_ExtGroup14_Dmrs_BundlingNonBackToBackTX_r17（ASN.1 dmrs-BundlingNonBackToBackTX-r17，源文件第 19875 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup14_Dmrs_BundlingNonBackToBackTX_r17 {
    BandNR_ExtGroup14_Dmrs_BundlingNonBackToBackTX_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup14_Dmrs_BundlingNonBackToBackTX_r17;


/**
 * @brief 枚举 BandNR_ExtGroup15_MaxDynamicSlotRepetitionForSPS_Multicast_r17（ASN.1 maxDynamicSlotRepetitionForSPS-Multicast-r17，源文件第 19879 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup15_MaxDynamicSlotRepetitionForSPS_Multicast_r17 {
    BandNR_ExtGroup15_MaxDynamicSlotRepetitionForSPS_Multicast_r17_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup15_MaxDynamicSlotRepetitionForSPS_Multicast_r17_n16 = 1, /**< ASN.1 n16 */
} BandNR_ExtGroup15_MaxDynamicSlotRepetitionForSPS_Multicast_r17;


/**
 * @brief 枚举 BandNR_ExtGroup15_Nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17（ASN.1 nack-OnlyFeedbackForSPS-MulticastWithDCI-Enabler-r17，源文件第 19881 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup15_Nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17 {
    BandNR_ExtGroup15_Nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup15_Nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17;


/**
 * @brief 枚举 BandNR_ExtGroup15_Sps_MulticastDCI_Format4_2_r17（ASN.1 sps-MulticastDCI-Format4-2-r17，源文件第 19883 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup15_Sps_MulticastDCI_Format4_2_r17 {
    BandNR_ExtGroup15_Sps_MulticastDCI_Format4_2_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup15_Sps_MulticastDCI_Format4_2_r17;


/**
 * @brief 枚举 BandNR_ExtGroup15_PriorityIndicatorInDCI_Multicast_r17（ASN.1 priorityIndicatorInDCI-Multicast-r17，源文件第 19887 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup15_PriorityIndicatorInDCI_Multicast_r17 {
    BandNR_ExtGroup15_PriorityIndicatorInDCI_Multicast_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup15_PriorityIndicatorInDCI_Multicast_r17;


/**
 * @brief 枚举 BandNR_ExtGroup15_PriorityIndicatorInDCI_SPS_Multicast_r17（ASN.1 priorityIndicatorInDCI-SPS-Multicast-r17，源文件第 19889 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup15_PriorityIndicatorInDCI_SPS_Multicast_r17 {
    BandNR_ExtGroup15_PriorityIndicatorInDCI_SPS_Multicast_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup15_PriorityIndicatorInDCI_SPS_Multicast_r17;


/**
 * @brief 枚举 BandNR_ExtGroup15_TwoHARQ_ACK_CodebookForUnicastAndMulticast_r17（ASN.1 twoHARQ-ACK-CodebookForUnicastAndMulticast-r17，源文件第 19892 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup15_TwoHARQ_ACK_CodebookForUnicastAndMulticast_r17 {
    BandNR_ExtGroup15_TwoHARQ_ACK_CodebookForUnicastAndMulticast_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup15_TwoHARQ_ACK_CodebookForUnicastAndMulticast_r17;


/**
 * @brief 枚举 BandNR_ExtGroup15_MultiPUCCH_HARQ_ACK_ForMulticastUnicast_r17（ASN.1 multiPUCCH-HARQ-ACK-ForMulticastUnicast-r17，源文件第 19894 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup15_MultiPUCCH_HARQ_ACK_ForMulticastUnicast_r17 {
    BandNR_ExtGroup15_MultiPUCCH_HARQ_ACK_ForMulticastUnicast_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup15_MultiPUCCH_HARQ_ACK_ForMulticastUnicast_r17;


/**
 * @brief 枚举 BandNR_ExtGroup15_ReleaseSPS_MulticastWithCS_RNTI_r17（ASN.1 releaseSPS-MulticastWithCS-RNTI-r17，源文件第 19896 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup15_ReleaseSPS_MulticastWithCS_RNTI_r17 {
    BandNR_ExtGroup15_ReleaseSPS_MulticastWithCS_RNTI_r17_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup15_ReleaseSPS_MulticastWithCS_RNTI_r17;


/**
 * @brief 枚举 BandNR_ExtGroup16_PosUE_TA_AutoAdjustment_r18（ASN.1 posUE-TA-AutoAdjustment-r18，源文件第 19900 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_PosUE_TA_AutoAdjustment_r18 {
    BandNR_ExtGroup16_PosUE_TA_AutoAdjustment_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_PosUE_TA_AutoAdjustment_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18（ASN.1 posSRS-ValidityAreaRRC-InactiveInitialUL-BWP-r18，源文件第 19902 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18 {
    BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18（ASN.1 posSRS-ValidityAreaRRC-InactiveOutsideInitialUL-BWP-r18，源文件第 19905 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18 {
    BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_PosJointTriggerBySingleDCI_RRC_Connected_r18（ASN.1 posJointTriggerBySingleDCI-RRC-Connected-r18，源文件第 19916 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_PosJointTriggerBySingleDCI_RRC_Connected_r18 {
    BandNR_ExtGroup16_PosJointTriggerBySingleDCI_RRC_Connected_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_PosJointTriggerBySingleDCI_RRC_Connected_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18（ASN.1 dl-PRS-MeasurementWithRxFH-RRC-InactiveforRedCap-r18，源文件第 19918 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18 {
    BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18（ASN.1 dl-PRS-MeasurementWithRxFH-RRC-IdleforRedCap-r18，源文件第 19920 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18 {
    BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_CsiFeedbackType_r18（ASN.1 spatialAdaptation-CSI-Feedback-r18/csiFeedbackType-r18，源文件第 19923 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_CsiFeedbackType_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_CsiFeedbackType_r18_sdType1 = 0, /**< ASN.1 sdType1 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_CsiFeedbackType_r18_sdType2 = 1, /**< ASN.1 sdType2 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_CsiFeedbackType_r18_both = 2, /**< ASN.1 both */
} BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_CsiFeedbackType_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18（ASN.1 spatialAdaptation-CSI-Feedback-r18/maxNumberTotalCSI-ResourcePerCC-r18/sdType1-Resource-r18，源文件第 19930 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18_n16 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18_n24 = 2, /**< ASN.1 n24 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18_n32 = 3, /**< ASN.1 n32 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18_n64 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18_n128 = 5, /**< ASN.1 n128 */
} BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18（ASN.1 spatialAdaptation-CSI-Feedback-r18/maxNumberTotalCSI-ResourcePerCC-r18/sdType2-Resource-r18，源文件第 19931 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18_n16 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18_n24 = 2, /**< ASN.1 n24 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18_n32 = 3, /**< ASN.1 n32 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18_n64 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18_n128 = 5, /**< ASN.1 n128 */
} BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_CsiFeedbackType_r18（ASN.1 spatialAdaptation-CSI-FeedbackPUSCH-r18/csiFeedbackType-r18，源文件第 19938 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_CsiFeedbackType_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_CsiFeedbackType_r18_sdType1 = 0, /**< ASN.1 sdType1 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_CsiFeedbackType_r18_sdType2 = 1, /**< ASN.1 sdType2 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_CsiFeedbackType_r18_both = 2, /**< ASN.1 both */
} BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_CsiFeedbackType_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18（ASN.1 spatialAdaptation-CSI-FeedbackPUSCH-r18/maxNumberTotalCSI-ResourcePerCC-r18，源文件第 19942 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n16 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n24 = 2, /**< ASN.1 n24 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n32 = 3, /**< ASN.1 n32 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n64 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n128 = 5, /**< ASN.1 n128 */
} BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_CsiFeedbackType_r18（ASN.1 spatialAdaptation-CSI-FeedbackAperiodic-r18/csiFeedbackType-r18，源文件第 19947 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_CsiFeedbackType_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_CsiFeedbackType_r18_sdType1 = 0, /**< ASN.1 sdType1 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_CsiFeedbackType_r18_sdType2 = 1, /**< ASN.1 sdType2 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_CsiFeedbackType_r18_both = 2, /**< ASN.1 both */
} BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_CsiFeedbackType_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18（ASN.1 spatialAdaptation-CSI-FeedbackAperiodic-r18/maxNumberTotalCSI-ResourcePerCC-r18/sdType1-Resource-r18，源文件第 19955 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_94441945 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_8a1195a4 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_9125f8b3 = 2, /**< ASN.1 n24 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_baf1b102 = 3, /**< ASN.1 n32 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_e70ff383 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_e33a3a24 = 5, /**< ASN.1 n128 */
} BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18（ASN.1 spatialAdaptation-CSI-FeedbackAperiodic-r18/maxNumberTotalCSI-ResourcePerCC-r18/sdType2-Resource-r18，源文件第 19956 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_844dd2a3 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_a3a9b26e = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_f8e44020 = 2, /**< ASN.1 n24 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_1efabfc8 = 3, /**< ASN.1 n32 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_d138e343 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_Sd_4997cb12 = 5, /**< ASN.1 n128 */
} BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_CsiFeedbackType_r18（ASN.1 spatialAdaptation-CSI-FeedbackPUCCH-r18/csiFeedbackType-r18，源文件第 19963 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_CsiFeedbackType_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_CsiFeedbackType_r18_sdType1 = 0, /**< ASN.1 sdType1 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_CsiFeedbackType_r18_sdType2 = 1, /**< ASN.1 sdType2 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_CsiFeedbackType_r18_both = 2, /**< ASN.1 both */
} BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_CsiFeedbackType_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18（ASN.1 spatialAdaptation-CSI-FeedbackPUCCH-r18/maxNumberTotalCSI-ResourcePerCC-r18，源文件第 19967 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n16 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n24 = 2, /**< ASN.1 n24 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n32 = 3, /**< ASN.1 n32 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n64 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n128 = 5, /**< ASN.1 n128 */
} BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18（ASN.1 powerAdaptation-CSI-Feedback-r18/maxNumberTotalCSI-ResourcePerCC-r18，源文件第 19974 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18 {
    BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n16 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n24 = 2, /**< ASN.1 n24 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n32 = 3, /**< ASN.1 n32 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n64 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n128 = 5, /**< ASN.1 n128 */
} BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18（ASN.1 powerAdaptation-CSI-FeedbackPUSCH-r18/maxNumberTotalCSI-ResourcePerCC-r18，源文件第 19983 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18 {
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n16 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n24 = 2, /**< ASN.1 n24 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n32 = 3, /**< ASN.1 n32 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n64 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n128 = 5, /**< ASN.1 n128 */
} BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18（ASN.1 powerAdaptation-CSI-FeedbackAperiodic-r18/maxNumberTotalCSI-ResourcePerCC-r18，源文件第 19991 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18 {
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n16 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n24 = 2, /**< ASN.1 n24 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n32 = 3, /**< ASN.1 n32 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n64 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n128 = 5, /**< ASN.1 n128 */
} BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18（ASN.1 powerAdaptation-CSI-FeedbackPUCCH-r18/maxNumberTotalCSI-ResourcePerCC-r18，源文件第 20000 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18 {
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n16 = 1, /**< ASN.1 n16 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n24 = 2, /**< ASN.1 n24 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n32 = 3, /**< ASN.1 n32 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n64 = 4, /**< ASN.1 n64 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18_n128 = 5, /**< ASN.1 n128 */
} BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Nes_CellDTX_DRX_r18（ASN.1 nes-CellDTX-DRX-r18，源文件第 20004 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Nes_CellDTX_DRX_r18 {
    BandNR_ExtGroup16_Nes_CellDTX_DRX_r18_cellDTXonly = 0, /**< ASN.1 cellDTXonly */
    BandNR_ExtGroup16_Nes_CellDTX_DRX_r18_cellDRXonly = 1, /**< ASN.1 cellDRXonly */
    BandNR_ExtGroup16_Nes_CellDTX_DRX_r18_both = 2, /**< ASN.1 both */
} BandNR_ExtGroup16_Nes_CellDTX_DRX_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Nes_CellDTX_DRX_DCI2_9_r18（ASN.1 nes-CellDTX-DRX-DCI2-9-r18，源文件第 20006 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Nes_CellDTX_DRX_DCI2_9_r18 {
    BandNR_ExtGroup16_Nes_CellDTX_DRX_DCI2_9_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Nes_CellDTX_DRX_DCI2_9_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_MixCodeBookSpatialAdaptation_r18（ASN.1 mixCodeBookSpatialAdaptation-r18，源文件第 20009 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_MixCodeBookSpatialAdaptation_r18 {
    BandNR_ExtGroup16_MixCodeBookSpatialAdaptation_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_MixCodeBookSpatialAdaptation_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ntn_DMRS_BundlingNGSO_r18（ASN.1 ntn-DMRS-BundlingNGSO-r18，源文件第 20011 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ntn_DMRS_BundlingNGSO_r18 {
    BandNR_ExtGroup16_Ntn_DMRS_BundlingNGSO_r18_n4 = 0, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Ntn_DMRS_BundlingNGSO_r18_n8 = 1, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Ntn_DMRS_BundlingNGSO_r18_n16 = 2, /**< ASN.1 n16 */
    BandNR_ExtGroup16_Ntn_DMRS_BundlingNGSO_r18_n32 = 3, /**< ASN.1 n32 */
} BandNR_ExtGroup16_Ntn_DMRS_BundlingNGSO_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18（ASN.1 ltm-BeamIndicationJointTCI-r18/maxNumberJointTCI-PerCell-r18，源文件第 20014 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18 {
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18_n8 = 0, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18_n12 = 1, /**< ASN.1 n12 */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18_n16 = 2, /**< ASN.1 n16 */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18_n24 = 3, /**< ASN.1 n24 */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18_n32 = 4, /**< ASN.1 n32 */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18_n48 = 5, /**< ASN.1 n48 */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18_n64 = 6, /**< ASN.1 n64 */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18_n128 = 7, /**< ASN.1 n128 */
} BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_Qcl_Resource_r18（ASN.1 ltm-BeamIndicationJointTCI-r18/qcl-Resource-r18，源文件第 20015 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_Qcl_Resource_r18 {
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_Qcl_Resource_r18_srs = 0, /**< ASN.1 srs */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_Qcl_Resource_r18_trs = 1, /**< ASN.1 trs */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_Qcl_Resource_r18_both = 2, /**< ASN.1 both */
} BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_Qcl_Resource_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_Qcl_Resource_r18（ASN.1 ltm-MAC-CE-JointTCI-r18/qcl-Resource-r18，源文件第 20021 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_Qcl_Resource_r18 {
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_Qcl_Resource_r18_srs = 0, /**< ASN.1 srs */
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_Qcl_Resource_r18_trs = 1, /**< ASN.1 trs */
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_Qcl_Resource_r18_both = 2, /**< ASN.1 both */
} BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_Qcl_Resource_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18（ASN.1 ltm-MAC-CE-JointTCI-r18/maxNumberJointTCI-AcrossCells-r18，源文件第 20023 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18 {
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18_n3 = 2, /**< ASN.1 n3 */
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18_n4 = 3, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18_n8 = 4, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18_n16 = 5, /**< ASN.1 n16 */
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18_n32 = 6, /**< ASN.1 n32 */
} BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18（ASN.1 ltm-BeamIndicationSeparateTCI-r18/maxNumberDL-TCI-PerCell-r18，源文件第 20027 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18 {
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18_n4 = 0, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18_n8 = 1, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18_n12 = 2, /**< ASN.1 n12 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18_n16 = 3, /**< ASN.1 n16 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18_n24 = 4, /**< ASN.1 n24 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18_n32 = 5, /**< ASN.1 n32 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18_n48 = 6, /**< ASN.1 n48 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18_n64 = 7, /**< ASN.1 n64 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18_n128 = 8, /**< ASN.1 n128 */
} BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18（ASN.1 ltm-BeamIndicationSeparateTCI-r18/maxNumberUL-TCI-PerCell-r18，源文件第 20028 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18 {
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18_n4 = 0, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18_n8 = 1, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18_n12 = 2, /**< ASN.1 n12 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18_n16 = 3, /**< ASN.1 n16 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18_n24 = 4, /**< ASN.1 n24 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18_n32 = 5, /**< ASN.1 n32 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18_n48 = 6, /**< ASN.1 n48 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18_n64 = 7, /**< ASN.1 n64 */
} BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_Qcl_Resource_r18（ASN.1 ltm-BeamIndicationSeparateTCI-r18/qcl-Resource-r18，源文件第 20029 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_Qcl_Resource_r18 {
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_Qcl_Resource_r18_srs = 0, /**< ASN.1 srs */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_Qcl_Resource_r18_trs = 1, /**< ASN.1 trs */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_Qcl_Resource_r18_both = 2, /**< ASN.1 both */
} BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_Qcl_Resource_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_Qcl_Resource_r18（ASN.1 ltm-MAC-CE-SeparateTCI-r18/qcl-Resource-r18，源文件第 20036 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_Qcl_Resource_r18 {
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_Qcl_Resource_r18_srs = 0, /**< ASN.1 srs */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_Qcl_Resource_r18_trs = 1, /**< ASN.1 trs */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_Qcl_Resource_r18_both = 2, /**< ASN.1 both */
} BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_Qcl_Resource_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18（ASN.1 ltm-MAC-CE-SeparateTCI-r18/maxNumberDL-TCI-AcrossCells-r18，源文件第 20039 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18 {
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18_n8 = 3, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18_n16 = 4, /**< ASN.1 n16 */
} BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18（ASN.1 ltm-MAC-CE-SeparateTCI-r18/maxNumberUL-TCI-AcrossCells-r18，源文件第 20040 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18 {
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18_n8 = 3, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18_n16 = 4, /**< ASN.1 n16 */
} BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ta_IndicationCellSwitch_r18（ASN.1 ta-IndicationCellSwitch-r18，源文件第 20047 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ta_IndicationCellSwitch_r18 {
    BandNR_ExtGroup16_Ta_IndicationCellSwitch_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Ta_IndicationCellSwitch_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_MultiPUSCH_CG_r18（ASN.1 multiPUSCH-CG-r18，源文件第 20050 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_MultiPUSCH_CG_r18 {
    BandNR_ExtGroup16_MultiPUSCH_CG_r18_n16 = 0, /**< ASN.1 n16 */
    BandNR_ExtGroup16_MultiPUSCH_CG_r18_n32 = 1, /**< ASN.1 n32 */
} BandNR_ExtGroup16_MultiPUSCH_CG_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP（ASN.1 multiPUSCH-ActiveConfiguredGrant-r18/maxNumberConfigsPerBWP，源文件第 20053 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP {
    BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP_n8 = 3, /**< ASN.1 n8 */
    BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP_n12 = 4, /**< ASN.1 n12 */
} BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP;


/**
 * @brief 枚举 BandNR_ExtGroup16_JointReleaseDCI_r18（ASN.1 jointReleaseDCI-r18，源文件第 20059 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_JointReleaseDCI_r18 {
    BandNR_ExtGroup16_JointReleaseDCI_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_JointReleaseDCI_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Cg_PUSCH_UTO_UCI_Ind_r18（ASN.1 cg-PUSCH-UTO-UCI-Ind-r18，源文件第 20061 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Cg_PUSCH_UTO_UCI_Ind_r18 {
    BandNR_ExtGroup16_Cg_PUSCH_UTO_UCI_Ind_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Cg_PUSCH_UTO_UCI_Ind_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Pdcch_MonitoringResumptionAfterUL_NACK_r18（ASN.1 pdcch-MonitoringResumptionAfterUL-NACK-r18，源文件第 20063 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Pdcch_MonitoringResumptionAfterUL_NACK_r18 {
    BandNR_ExtGroup16_Pdcch_MonitoringResumptionAfterUL_NACK_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Pdcch_MonitoringResumptionAfterUL_NACK_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Support_3MHz_ChannelBW_r18（ASN.1 support-3MHz-ChannelBW-r18，源文件第 20066 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Support_3MHz_ChannelBW_r18 {
    BandNR_ExtGroup16_Support_3MHz_ChannelBW_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Support_3MHz_ChannelBW_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Support_12PRB_CORESET0_r18（ASN.1 support-12PRB-CORESET0-r18，源文件第 20068 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Support_12PRB_CORESET0_r18 {
    BandNR_ExtGroup16_Support_12PRB_CORESET0_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Support_12PRB_CORESET0_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInRE_r18（ASN.1 nr-PDCCH-OverlapLTE-CRS-RE-r18/overlapInRE-r18，源文件第 20072 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInRE_r18 {
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInRE_r18_oneSymbolNoOverlap = 0, /**< ASN.1 oneSymbolNoOverlap */
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInRE_r18_someOrAllSymOverlap = 1, /**< ASN.1 someOrAllSymOverlap */
} BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInRE_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInSymbol_r18（ASN.1 nr-PDCCH-OverlapLTE-CRS-RE-r18/overlapInSymbol-r18，源文件第 20073 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInSymbol_r18 {
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInSymbol_r18_symbol2 = 0, /**< ASN.1 symbol2 */
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInSymbol_r18_symbol1And2 = 1, /**< ASN.1 symbol1And2 */
} BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInSymbol_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18（ASN.1 nr-PDCCH-OverlapLTE-CRS-RE-MultiPatterns-r18，源文件第 20078 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18 {
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18（ASN.1 nr-PDCCH-OverlapLTE-CRS-RE-Span-3-4-r18，源文件第 20081 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18 {
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_OverlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18（ASN.1 overlapRateMatchingEUTRA-CRS-Patterns-3-4-Diff-CS-Pool-r18，源文件第 20090 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_OverlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18 {
    BandNR_ExtGroup16_OverlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_OverlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Ncd_SSB_BWP_Wor_r18（ASN.1 ncd-SSB-BWP-Wor-r18，源文件第 20094 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Ncd_SSB_BWP_Wor_r18 {
    BandNR_ExtGroup16_Ncd_SSB_BWP_Wor_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Ncd_SSB_BWP_Wor_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18（ASN.1 rlm-BM-BFD-CSI-RS-OutsideActiveBWP-r18，源文件第 20096 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18 {
    BandNR_ExtGroup16_Rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Prach_CoverageEnh_r18（ASN.1 prach-CoverageEnh-r18，源文件第 20098 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Prach_CoverageEnh_r18 {
    BandNR_ExtGroup16_Prach_CoverageEnh_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Prach_CoverageEnh_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Prach_Repetition_r18（ASN.1 prach-Repetition-r18，源文件第 20100 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Prach_Repetition_r18 {
    BandNR_ExtGroup16_Prach_Repetition_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Prach_Repetition_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_DynamicWaveformSwitch_r18（ASN.1 dynamicWaveformSwitch-r18，源文件第 20102 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_DynamicWaveformSwitch_r18 {
    BandNR_ExtGroup16_DynamicWaveformSwitch_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_DynamicWaveformSwitch_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_DynamicWaveformSwitchPHR_r18（ASN.1 dynamicWaveformSwitchPHR-r18，源文件第 20104 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_DynamicWaveformSwitchPHR_r18 {
    BandNR_ExtGroup16_DynamicWaveformSwitchPHR_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_DynamicWaveformSwitchPHR_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_MultiPUSCH_SingleDCI_NonConsSlots_r18（ASN.1 multiPUSCH-SingleDCI-NonConsSlots-r18，源文件第 20109 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_MultiPUSCH_SingleDCI_NonConsSlots_r18 {
    BandNR_ExtGroup16_MultiPUSCH_SingleDCI_NonConsSlots_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_MultiPUSCH_SingleDCI_NonConsSlots_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18（ASN.1 pdc-maxNumberPRS-ResourceProcessedPerSlot-r18/fr1-r18/scs-15kHz-r18，源文件第 20113 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18 {
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n6 = 3, /**< ASN.1 n6 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n8 = 4, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n12 = 5, /**< ASN.1 n12 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n16 = 6, /**< ASN.1 n16 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n24 = 7, /**< ASN.1 n24 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n32 = 8, /**< ASN.1 n32 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n48 = 9, /**< ASN.1 n48 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18_n64 = 10, /**< ASN.1 n64 */
} BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18（ASN.1 pdc-maxNumberPRS-ResourceProcessedPerSlot-r18/fr1-r18/scs-30kHz-r18，源文件第 20114 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18 {
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n6 = 3, /**< ASN.1 n6 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n8 = 4, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n12 = 5, /**< ASN.1 n12 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n16 = 6, /**< ASN.1 n16 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n24 = 7, /**< ASN.1 n24 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n32 = 8, /**< ASN.1 n32 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n48 = 9, /**< ASN.1 n48 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18_n64 = 10, /**< ASN.1 n64 */
} BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18（ASN.1 pdc-maxNumberPRS-ResourceProcessedPerSlot-r18/fr1-r18/scs-60kHz-r18，源文件第 20115 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18 {
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n6 = 3, /**< ASN.1 n6 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n8 = 4, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n12 = 5, /**< ASN.1 n12 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n16 = 6, /**< ASN.1 n16 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n24 = 7, /**< ASN.1 n24 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n32 = 8, /**< ASN.1 n32 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n48 = 9, /**< ASN.1 n48 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18_n64 = 10, /**< ASN.1 n64 */
} BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18（ASN.1 pdc-maxNumberPRS-ResourceProcessedPerSlot-r18/fr2-r18/scs-60kHz-r18，源文件第 20118 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18 {
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n6 = 3, /**< ASN.1 n6 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n8 = 4, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n12 = 5, /**< ASN.1 n12 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n16 = 6, /**< ASN.1 n16 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n24 = 7, /**< ASN.1 n24 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n32 = 8, /**< ASN.1 n32 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n48 = 9, /**< ASN.1 n48 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18_n64 = 10, /**< ASN.1 n64 */
} BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18（ASN.1 pdc-maxNumberPRS-ResourceProcessedPerSlot-r18/fr2-r18/scs-120kHz-r18，源文件第 20119 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18 {
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n6 = 3, /**< ASN.1 n6 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n8 = 4, /**< ASN.1 n8 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n12 = 5, /**< ASN.1 n12 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n16 = 6, /**< ASN.1 n16 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n24 = 7, /**< ASN.1 n24 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n32 = 8, /**< ASN.1 n32 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n48 = 9, /**< ASN.1 n48 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18_n64 = 10, /**< ASN.1 n64 */
} BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_EnhancedChannelRaster_r18（ASN.1 enhancedChannelRaster-r18，源文件第 20127 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_EnhancedChannelRaster_r18 {
    BandNR_ExtGroup16_EnhancedChannelRaster_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_EnhancedChannelRaster_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_BeamSweepingFactorReduction_r18_ReduceForCellDetection（ASN.1 beamSweepingFactorReduction-r18/reduceForCellDetection，源文件第 20130 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_BeamSweepingFactorReduction_r18_ReduceForCellDetection {
    BandNR_ExtGroup16_BeamSweepingFactorReduction_r18_ReduceForCellDetection_n1 = 0, /**< ASN.1 n1 */
    BandNR_ExtGroup16_BeamSweepingFactorReduction_r18_ReduceForCellDetection_n2 = 1, /**< ASN.1 n2 */
    BandNR_ExtGroup16_BeamSweepingFactorReduction_r18_ReduceForCellDetection_n4 = 2, /**< ASN.1 n4 */
    BandNR_ExtGroup16_BeamSweepingFactorReduction_r18_ReduceForCellDetection_n6 = 3, /**< ASN.1 n6 */
} BandNR_ExtGroup16_BeamSweepingFactorReduction_r18_ReduceForCellDetection;


/**
 * @brief 枚举 BandNR_ExtGroup16_SimultaneousReceptionTwoQCL_r18（ASN.1 simultaneousReceptionTwoQCL-r18，源文件第 20134 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SimultaneousReceptionTwoQCL_r18 {
    BandNR_ExtGroup16_SimultaneousReceptionTwoQCL_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_SimultaneousReceptionTwoQCL_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_MeasEnhCAInterFreqFR2_r18（ASN.1 measEnhCAInterFreqFR2-r18，源文件第 20136 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_MeasEnhCAInterFreqFR2_r18 {
    BandNR_ExtGroup16_MeasEnhCAInterFreqFR2_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_MeasEnhCAInterFreqFR2_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Tci_StateSwitchInd_r18（ASN.1 tci-StateSwitchInd-r18，源文件第 20138 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Tci_StateSwitchInd_r18 {
    BandNR_ExtGroup16_Tci_StateSwitchInd_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Tci_StateSwitchInd_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_AntennaArrayType_r18（ASN.1 antennaArrayType-r18，源文件第 20140 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_AntennaArrayType_r18 {
    BandNR_ExtGroup16_AntennaArrayType_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_AntennaArrayType_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_LocationBasedCondHandoverATG_r18（ASN.1 locationBasedCondHandoverATG-r18，源文件第 20141 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_LocationBasedCondHandoverATG_r18 {
    BandNR_ExtGroup16_LocationBasedCondHandoverATG_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_LocationBasedCondHandoverATG_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_EventA4BasedCondHandoverNES_r18（ASN.1 eventA4BasedCondHandoverNES-r18，源文件第 20146 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_EventA4BasedCondHandoverNES_r18 {
    BandNR_ExtGroup16_EventA4BasedCondHandoverNES_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_EventA4BasedCondHandoverNES_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_NesBasedCondHandoverWithDCI_r18（ASN.1 nesBasedCondHandoverWithDCI-r18，源文件第 20147 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_NesBasedCondHandoverWithDCI_r18 {
    BandNR_ExtGroup16_NesBasedCondHandoverWithDCI_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_NesBasedCondHandoverWithDCI_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_RachLessHandoverNTN_r18（ASN.1 rachLessHandoverNTN-r18，源文件第 20148 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_RachLessHandoverNTN_r18 {
    BandNR_ExtGroup16_RachLessHandoverNTN_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_RachLessHandoverNTN_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_LocationBasedCondHandoverEMC_r18（ASN.1 locationBasedCondHandoverEMC-r18，源文件第 20149 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_LocationBasedCondHandoverEMC_r18 {
    BandNR_ExtGroup16_LocationBasedCondHandoverEMC_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_LocationBasedCondHandoverEMC_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Mt_CG_SDT_r18（ASN.1 mt-CG-SDT-r18，源文件第 20150 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Mt_CG_SDT_r18 {
    BandNR_ExtGroup16_Mt_CG_SDT_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Mt_CG_SDT_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18（ASN.1 posSRS-PreconfigureRRC-InactiveInitialUL-BWP-r18，源文件第 20151 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18 {
    BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18（ASN.1 posSRS-PreconfigureRRC-InactiveOutsideInitialUL-BWP-r18，源文件第 20152 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18 {
    BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_Cg_SDT_PeriodicityExt_r18（ASN.1 cg-SDT-PeriodicityExt-r18，源文件第 20153 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_Cg_SDT_PeriodicityExt_r18 {
    BandNR_ExtGroup16_Cg_SDT_PeriodicityExt_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_Cg_SDT_PeriodicityExt_r18;


/**
 * @brief 枚举 BandNR_ExtGroup16_SupportOf2RxXR_r18（ASN.1 supportOf2RxXR-r18，源文件第 20155 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_ExtGroup16_SupportOf2RxXR_r18 {
    BandNR_ExtGroup16_SupportOf2RxXR_r18_supported = 0, /**< ASN.1 supported */
} BandNR_ExtGroup16_SupportOf2RxXR_r18;


/**
 * @brief 枚举 BandNR_v16c0_Pusch_RepetitionTypeA_v16c0（ASN.1 pusch-RepetitionTypeA-v16c0，源文件第 20160 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandNR_v16c0_Pusch_RepetitionTypeA_v16c0 {
    BandNR_v16c0_Pusch_RepetitionTypeA_v16c0_supported = 0, /**< ASN.1 supported */
} BandNR_v16c0_Pusch_RepetitionTypeA_v16c0;


/**
 * @brief 枚举 MSD_Information_r18_Msd_Type_r18（ASN.1 msd-Type-r18，源文件第 20174 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MSD_Information_r18_Msd_Type_r18 {
    MSD_Information_r18_Msd_Type_r18_harmonic = 0, /**< ASN.1 harmonic */
    MSD_Information_r18_Msd_Type_r18_harmonicMixing = 1, /**< ASN.1 harmonicMixing */
    MSD_Information_r18_Msd_Type_r18_crossBandIsolation = 2, /**< ASN.1 crossBandIsolation */
    MSD_Information_r18_Msd_Type_r18_imd2 = 3, /**< ASN.1 imd2 */
    MSD_Information_r18_Msd_Type_r18_imd3 = 4, /**< ASN.1 imd3 */
    MSD_Information_r18_Msd_Type_r18_imd4 = 5, /**< ASN.1 imd4 */
    MSD_Information_r18_Msd_Type_r18_imd5 = 6, /**< ASN.1 imd5 */
    MSD_Information_r18_Msd_Type_r18_all = 7, /**< ASN.1 all */
    MSD_Information_r18_Msd_Type_r18_spare8 = 8, /**< ASN.1 spare8 */
    MSD_Information_r18_Msd_Type_r18_spare7 = 9, /**< ASN.1 spare7 */
    MSD_Information_r18_Msd_Type_r18_spare6 = 10, /**< ASN.1 spare6 */
    MSD_Information_r18_Msd_Type_r18_spare5 = 11, /**< ASN.1 spare5 */
    MSD_Information_r18_Msd_Type_r18_spare4 = 12, /**< ASN.1 spare4 */
    MSD_Information_r18_Msd_Type_r18_spare3 = 13, /**< ASN.1 spare3 */
    MSD_Information_r18_Msd_Type_r18_spare2 = 14, /**< ASN.1 spare2 */
    MSD_Information_r18_Msd_Type_r18_spare1 = 15, /**< ASN.1 spare1 */
} MSD_Information_r18_Msd_Type_r18;


/**
 * @brief 枚举 MSD_Information_r18_Msd_PowerClass_r18（ASN.1 msd-PowerClass-r18，源文件第 20176 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MSD_Information_r18_Msd_PowerClass_r18 {
    MSD_Information_r18_Msd_PowerClass_r18_pc1dot5 = 0, /**< ASN.1 pc1dot5 */
    MSD_Information_r18_Msd_PowerClass_r18_pc2 = 1, /**< ASN.1 pc2 */
    MSD_Information_r18_Msd_PowerClass_r18_pc3 = 2, /**< ASN.1 pc3 */
} MSD_Information_r18_Msd_PowerClass_r18;


/**
 * @brief 枚举 MSD_Information_r18_Msd_Class_r18（ASN.1 msd-Class-r18，源文件第 20177 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MSD_Information_r18_Msd_Class_r18 {
    MSD_Information_r18_Msd_Class_r18_classI = 0, /**< ASN.1 classI */
    MSD_Information_r18_Msd_Class_r18_classII = 1, /**< ASN.1 classII */
    MSD_Information_r18_Msd_Class_r18_classIII = 2, /**< ASN.1 classIII */
    MSD_Information_r18_Msd_Class_r18_classIV = 3, /**< ASN.1 classIV */
    MSD_Information_r18_Msd_Class_r18_classV = 4, /**< ASN.1 classV */
    MSD_Information_r18_Msd_Class_r18_classVI = 5, /**< ASN.1 classVI */
    MSD_Information_r18_Msd_Class_r18_classVII = 6, /**< ASN.1 classVII */
    MSD_Information_r18_Msd_Class_r18_classVIII = 7, /**< ASN.1 classVIII */
} MSD_Information_r18_Msd_Class_r18;


/**
 * @brief 枚举 RF_ParametersMRDC_ExtGroup1_Srs_SwitchingTimeRequested（ASN.1 srs-SwitchingTimeRequested，源文件第 20188 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RF_ParametersMRDC_ExtGroup1_Srs_SwitchingTimeRequested {
    RF_ParametersMRDC_ExtGroup1_Srs_SwitchingTimeRequested_trueVal = 0, /**< ASN.1 trueVal */
} RF_ParametersMRDC_ExtGroup1_Srs_SwitchingTimeRequested;


/**
 * @brief 枚举 RLC_Parameters_Am_WithShortSN（ASN.1 am-WithShortSN，源文件第 20289 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLC_Parameters_Am_WithShortSN {
    RLC_Parameters_Am_WithShortSN_supported = 0, /**< ASN.1 supported */
} RLC_Parameters_Am_WithShortSN;


/**
 * @brief 枚举 RLC_Parameters_Um_WithShortSN（ASN.1 um-WithShortSN，源文件第 20290 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLC_Parameters_Um_WithShortSN {
    RLC_Parameters_Um_WithShortSN_supported = 0, /**< ASN.1 supported */
} RLC_Parameters_Um_WithShortSN;


/**
 * @brief 枚举 RLC_Parameters_Um_WithLongSN（ASN.1 um-WithLongSN，源文件第 20291 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLC_Parameters_Um_WithLongSN {
    RLC_Parameters_Um_WithLongSN_supported = 0, /**< ASN.1 supported */
} RLC_Parameters_Um_WithLongSN;


/**
 * @brief 枚举 RLC_Parameters_ExtGroup1_ExtendedT_PollRetransmit_r16（ASN.1 extendedT-PollRetransmit-r16，源文件第 20294 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLC_Parameters_ExtGroup1_ExtendedT_PollRetransmit_r16 {
    RLC_Parameters_ExtGroup1_ExtendedT_PollRetransmit_r16_supported = 0, /**< ASN.1 supported */
} RLC_Parameters_ExtGroup1_ExtendedT_PollRetransmit_r16;


/**
 * @brief 枚举 RLC_Parameters_ExtGroup1_ExtendedT_StatusProhibit_r16（ASN.1 extendedT-StatusProhibit-r16，源文件第 20295 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLC_Parameters_ExtGroup1_ExtendedT_StatusProhibit_r16 {
    RLC_Parameters_ExtGroup1_ExtendedT_StatusProhibit_r16_supported = 0, /**< ASN.1 supported */
} RLC_Parameters_ExtGroup1_ExtendedT_StatusProhibit_r16;


/**
 * @brief 枚举 RLC_Parameters_ExtGroup2_Am_WithLongSN_RedCap_r17（ASN.1 am-WithLongSN-RedCap-r17，源文件第 20298 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLC_Parameters_ExtGroup2_Am_WithLongSN_RedCap_r17 {
    RLC_Parameters_ExtGroup2_Am_WithLongSN_RedCap_r17_supported = 0, /**< ASN.1 supported */
} RLC_Parameters_ExtGroup2_Am_WithLongSN_RedCap_r17;


/**
 * @brief 枚举 RLC_Parameters_ExtGroup3_Am_WithLongSN_NCR_r18（ASN.1 am-WithLongSN-NCR-r18，源文件第 20301 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLC_Parameters_ExtGroup3_Am_WithLongSN_NCR_r18 {
    RLC_Parameters_ExtGroup3_Am_WithLongSN_NCR_r18_supported = 0, /**< ASN.1 supported */
} RLC_Parameters_ExtGroup3_Am_WithLongSN_NCR_r18;


/**
 * @brief 枚举 SDAP_Parameters_As_ReflectiveQoS（ASN.1 as-ReflectiveQoS，源文件第 20309 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDAP_Parameters_As_ReflectiveQoS {
    SDAP_Parameters_As_ReflectiveQoS_trueVal = 0, /**< ASN.1 trueVal */
} SDAP_Parameters_As_ReflectiveQoS;


/**
 * @brief 枚举 SDAP_Parameters_ExtGroup1_Sdap_QOS_IAB_r16（ASN.1 sdap-QOS-IAB-r16，源文件第 20312 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDAP_Parameters_ExtGroup1_Sdap_QOS_IAB_r16 {
    SDAP_Parameters_ExtGroup1_Sdap_QOS_IAB_r16_supported = 0, /**< ASN.1 supported */
} SDAP_Parameters_ExtGroup1_Sdap_QOS_IAB_r16;


/**
 * @brief 枚举 SDAP_Parameters_ExtGroup1_SdapHeaderIAB_r16（ASN.1 sdapHeaderIAB-r16，源文件第 20313 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDAP_Parameters_ExtGroup1_SdapHeaderIAB_r16 {
    SDAP_Parameters_ExtGroup1_SdapHeaderIAB_r16_supported = 0, /**< ASN.1 supported */
} SDAP_Parameters_ExtGroup1_SdapHeaderIAB_r16;


/**
 * @brief 枚举 SDAP_Parameters_ExtGroup2_Sdap_QOS_NCR_r18（ASN.1 sdap-QOS-NCR-r18，源文件第 20316 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDAP_Parameters_ExtGroup2_Sdap_QOS_NCR_r18 {
    SDAP_Parameters_ExtGroup2_Sdap_QOS_NCR_r18_supported = 0, /**< ASN.1 supported */
} SDAP_Parameters_ExtGroup2_Sdap_QOS_NCR_r18;


/**
 * @brief 枚举 SDAP_Parameters_ExtGroup2_Sdap_HeaderNCR_r18（ASN.1 sdap-HeaderNCR-r18，源文件第 20317 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SDAP_Parameters_ExtGroup2_Sdap_HeaderNCR_r18 {
    SDAP_Parameters_ExtGroup2_Sdap_HeaderNCR_r18_supported = 0, /**< ASN.1 supported */
} SDAP_Parameters_ExtGroup2_Sdap_HeaderNCR_r18;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ul_DynamicChAccess_r16（ASN.1 ul-DynamicChAccess-r16，源文件第 20327 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ul_DynamicChAccess_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ul_DynamicChAccess_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ul_DynamicChAccess_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ul_Semi_StaticChAccess_r16（ASN.1 ul-Semi-StaticChAccess-r16，源文件第 20329 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ul_Semi_StaticChAccess_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ul_Semi_StaticChAccess_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ul_Semi_StaticChAccess_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_DynamicChAccess_r16（ASN.1 ssb-RRM-DynamicChAccess-r16，源文件第 20331 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_DynamicChAccess_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_DynamicChAccess_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_DynamicChAccess_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_Semi_StaticChAccess_r16（ASN.1 ssb-RRM-Semi-StaticChAccess-r16，源文件第 20333 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_Semi_StaticChAccess_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_Semi_StaticChAccess_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_Semi_StaticChAccess_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Mib_Acquisition_r16（ASN.1 mib-Acquisition-r16，源文件第 20335 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Mib_Acquisition_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Mib_Acquisition_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Mib_Acquisition_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_DynamicChAccess_r16（ASN.1 ssb-RLM-DynamicChAccess-r16，源文件第 20337 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_DynamicChAccess_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_DynamicChAccess_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_DynamicChAccess_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_Semi_StaticChAccess_r16（ASN.1 ssb-RLM-Semi-StaticChAccess-r16，源文件第 20339 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_Semi_StaticChAccess_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_Semi_StaticChAccess_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_Semi_StaticChAccess_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Sib1_Acquisition_r16（ASN.1 sib1-Acquisition-r16，源文件第 20341 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Sib1_Acquisition_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Sib1_Acquisition_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Sib1_Acquisition_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_ExtRA_ResponseWindow_r16（ASN.1 extRA-ResponseWindow-r16，源文件第 20343 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_ExtRA_ResponseWindow_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_ExtRA_ResponseWindow_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_ExtRA_ResponseWindow_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_dynamicChannelAccess_r16（ASN.1 ssb-BFD-CBD-dynamicChannelAccess-r16，源文件第 20345 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_dynamicChannelAccess_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_dynamicChannelAccess_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_dynamicChannelAccess_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_semi_staticChannelAccess_r16（ASN.1 ssb-BFD-CBD-semi-staticChannelAccess-r16，源文件第 20347 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_semi_staticChannelAccess_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_semi_staticChannelAccess_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_semi_staticChannelAccess_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_BFD_CBD_r16（ASN.1 csi-RS-BFD-CBD-r16，源文件第 20349 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_BFD_CBD_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_BFD_CBD_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_BFD_CBD_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ul_ChannelBW_SCell_10mhz_r16（ASN.1 ul-ChannelBW-SCell-10mhz-r16，源文件第 20351 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ul_ChannelBW_SCell_10mhz_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ul_ChannelBW_SCell_10mhz_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ul_ChannelBW_SCell_10mhz_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Rssi_ChannelOccupancyReporting_r16（ASN.1 rssi-ChannelOccupancyReporting-r16，源文件第 20353 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Rssi_ChannelOccupancyReporting_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Rssi_ChannelOccupancyReporting_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Rssi_ChannelOccupancyReporting_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Srs_StartAnyOFDM_Symbol_r16（ASN.1 srs-StartAnyOFDM-Symbol-r16，源文件第 20355 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Srs_StartAnyOFDM_Symbol_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Srs_StartAnyOFDM_Symbol_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Srs_StartAnyOFDM_Symbol_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Coreset_RB_Offset_r16（ASN.1 coreset-RB-Offset-r16，源文件第 20359 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Coreset_RB_Offset_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Coreset_RB_Offset_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Coreset_RB_Offset_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Cgi_Acquisition_r16（ASN.1 cgi-Acquisition-r16，源文件第 20361 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Cgi_Acquisition_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Cgi_Acquisition_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Cgi_Acquisition_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_ConfiguredUL_Tx_r16（ASN.1 configuredUL-Tx-r16，源文件第 20363 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_ConfiguredUL_Tx_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_ConfiguredUL_Tx_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_ConfiguredUL_Tx_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Prach_Wideband_r16（ASN.1 prach-Wideband-r16，源文件第 20365 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Prach_Wideband_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Prach_Wideband_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Prach_Wideband_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Dci_AvailableRB_Set_r16（ASN.1 dci-AvailableRB-Set-r16，源文件第 20367 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Dci_AvailableRB_Set_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Dci_AvailableRB_Set_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Dci_AvailableRB_Set_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Dci_ChOccupancyDuration_r16（ASN.1 dci-ChOccupancyDuration-r16，源文件第 20369 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Dci_ChOccupancyDuration_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Dci_ChOccupancyDuration_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Dci_ChOccupancyDuration_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_TypeB_PDSCH_length_r16（ASN.1 typeB-PDSCH-length-r16，源文件第 20371 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_TypeB_PDSCH_length_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_TypeB_PDSCH_length_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_TypeB_PDSCH_length_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithDCI_r16（ASN.1 searchSpaceSwitchWithDCI-r16，源文件第 20373 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithDCI_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithDCI_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithDCI_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithoutDCI_r16（ASN.1 searchSpaceSwitchWithoutDCI-r16，源文件第 20375 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithoutDCI_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithoutDCI_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithoutDCI_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchCapability2_r16（ASN.1 searchSpaceSwitchCapability2-r16，源文件第 20377 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchCapability2_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchCapability2_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchCapability2_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Non_numericalPDSCH_HARQ_timing_r16（ASN.1 non-numericalPDSCH-HARQ-timing-r16，源文件第 20379 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Non_numericalPDSCH_HARQ_timing_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Non_numericalPDSCH_HARQ_timing_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Non_numericalPDSCH_HARQ_timing_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_EnhancedDynamicHARQ_codebook_r16（ASN.1 enhancedDynamicHARQ-codebook-r16，源文件第 20381 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_EnhancedDynamicHARQ_codebook_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_EnhancedDynamicHARQ_codebook_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_EnhancedDynamicHARQ_codebook_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_OneShotHARQ_feedback_r16（ASN.1 oneShotHARQ-feedback-r16，源文件第 20383 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_OneShotHARQ_feedback_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_OneShotHARQ_feedback_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_OneShotHARQ_feedback_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_MultiPUSCH_UL_grant_r16（ASN.1 multiPUSCH-UL-grant-r16，源文件第 20385 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_MultiPUSCH_UL_grant_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_MultiPUSCH_UL_grant_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_MultiPUSCH_UL_grant_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_RLM_r16（ASN.1 csi-RS-RLM-r16，源文件第 20387 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_RLM_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_RLM_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_RLM_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Dummy（ASN.1 dummy，源文件第 20388 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Dummy {
    SharedSpectrumChAccessParamsPerBand_r16_Dummy_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Dummy;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_PeriodicAndSemi_PersistentCSI_RS_r16（ASN.1 periodicAndSemi-PersistentCSI-RS-r16，源文件第 20390 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_PeriodicAndSemi_PersistentCSI_RS_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_PeriodicAndSemi_PersistentCSI_RS_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_PeriodicAndSemi_PersistentCSI_RS_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Pusch_PRB_interlace_r16（ASN.1 pusch-PRB-interlace-r16，源文件第 20392 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Pusch_PRB_interlace_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Pusch_PRB_interlace_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Pusch_PRB_interlace_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Pucch_F0_F1_PRB_Interlace_r16（ASN.1 pucch-F0-F1-PRB-Interlace-r16，源文件第 20394 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Pucch_F0_F1_PRB_Interlace_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Pucch_F0_F1_PRB_Interlace_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Pucch_F0_F1_PRB_Interlace_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Occ_PRB_PF2_PF3_r16（ASN.1 occ-PRB-PF2-PF3-r16，源文件第 20396 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Occ_PRB_PF2_PF3_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Occ_PRB_PF2_PF3_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Occ_PRB_PF2_PF3_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_ExtCP_rangeCG_PUSCH_r16（ASN.1 extCP-rangeCG-PUSCH-r16，源文件第 20398 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_ExtCP_rangeCG_PUSCH_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_ExtCP_rangeCG_PUSCH_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_ExtCP_rangeCG_PUSCH_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_ConfiguredGrantWithReTx_r16（ASN.1 configuredGrantWithReTx-r16，源文件第 20400 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_ConfiguredGrantWithReTx_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_ConfiguredGrantWithReTx_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_ConfiguredGrantWithReTx_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ed_Threshold_r16（ASN.1 ed-Threshold-r16，源文件第 20402 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ed_Threshold_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ed_Threshold_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ed_Threshold_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Ul_DL_COT_Sharing_r16（ASN.1 ul-DL-COT-Sharing-r16，源文件第 20404 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Ul_DL_COT_Sharing_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Ul_DL_COT_Sharing_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Ul_DL_COT_Sharing_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Mux_CG_UCI_HARQ_ACK_r16（ASN.1 mux-CG-UCI-HARQ-ACK-r16，源文件第 20406 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Mux_CG_UCI_HARQ_ACK_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Mux_CG_UCI_HARQ_ACK_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Mux_CG_UCI_HARQ_ACK_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_r16_Cg_resourceConfig_r16（ASN.1 cg-resourceConfig-r16，源文件第 20408 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_r16_Cg_resourceConfig_r16 {
    SharedSpectrumChAccessParamsPerBand_r16_Cg_resourceConfig_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_r16_Cg_resourceConfig_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionIntraCellGuardband_r16（ASN.1 dl-ReceptionIntraCellGuardband-r16，源文件第 20413 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionIntraCellGuardband_r16 {
    SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionIntraCellGuardband_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionIntraCellGuardband_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionLBT_subsetRB_r16（ASN.1 dl-ReceptionLBT-subsetRB-r16，源文件第 20415 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionLBT_subsetRB_r16 {
    SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionLBT_subsetRB_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionLBT_subsetRB_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithSSB_r16（ASN.1 csi-RSRP-AndRSRQ-MeasWithSSB-r16，源文件第 20420 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithSSB_r16 {
    SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithSSB_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithSSB_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithoutSSB_r16（ASN.1 csi-RSRP-AndRSRQ-MeasWithoutSSB-r16，源文件第 20422 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithoutSSB_r16 {
    SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithoutSSB_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithoutSSB_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_v1640_Csi_SINR_Meas_r16（ASN.1 csi-SINR-Meas-r16，源文件第 20424 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_v1640_Csi_SINR_Meas_r16 {
    SharedSpectrumChAccessParamsPerBand_v1640_Csi_SINR_Meas_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_v1640_Csi_SINR_Meas_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_v1640_Ssb_AndCSI_RS_RLM_r16（ASN.1 ssb-AndCSI-RS-RLM-r16，源文件第 20426 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_v1640_Ssb_AndCSI_RS_RLM_r16 {
    SharedSpectrumChAccessParamsPerBand_v1640_Ssb_AndCSI_RS_RLM_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_v1640_Ssb_AndCSI_RS_RLM_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_v1640_Csi_RS_CFRA_ForHO_r16（ASN.1 csi-RS-CFRA-ForHO-r16，源文件第 20428 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_v1640_Csi_RS_CFRA_ForHO_r16 {
    SharedSpectrumChAccessParamsPerBand_v1640_Csi_RS_CFRA_ForHO_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_v1640_Csi_RS_CFRA_ForHO_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_v1650_ExtendedSearchSpaceSwitchWithDCI_r16（ASN.1 extendedSearchSpaceSwitchWithDCI-r16，源文件第 20433 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_v1650_ExtendedSearchSpaceSwitchWithDCI_r16 {
    SharedSpectrumChAccessParamsPerBand_v1650_ExtendedSearchSpaceSwitchWithDCI_r16_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_v1650_ExtendedSearchSpaceSwitchWithDCI_r16;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessDependentConfig_r17（ASN.1 ul-Semi-StaticChAccessDependentConfig-r17，源文件第 20438 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessDependentConfig_r17 {
    SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessDependentConfig_r17_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessDependentConfig_r17;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessIndependentConfig_r17（ASN.1 ul-Semi-StaticChAccessIndependentConfig-r17，源文件第 20440 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessIndependentConfig_r17 {
    SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessIndependentConfig_r17_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessIndependentConfig_r17;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_DynamicChannelAccess_r18（ASN.1 sl-DynamicChannelAccess-r18，源文件第 20448 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_DynamicChannelAccess_r18 {
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_DynamicChannelAccess_r18_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_DynamicChannelAccess_r18;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option1_r18（ASN.1 sl-LBT-Option1-r18，源文件第 20450 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option1_r18 {
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option1_r18_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option1_r18;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option2_r18（ASN.1 sl-LBT-Option2-r18，源文件第 20452 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option2_r18 {
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option2_r18_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option2_r18;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_Interlace_RB_TxRx_r18（ASN.1 sl-Interlace-RB-TxRx-r18，源文件第 20454 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_Interlace_RB_TxRx_r18 {
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_Interlace_RB_TxRx_r18_supported = 0, /**< ASN.1 supported */
} SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_Interlace_RB_TxRx_r18;


/**
 * @brief 枚举 SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18（ASN.1 sl-PowerClassUnlicensed-r18，源文件第 20456 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18 {
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18_pc5 = 0, /**< ASN.1 pc5 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18_spare7 = 1, /**< ASN.1 spare7 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18_spare6 = 2, /**< ASN.1 spare6 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18_spare5 = 3, /**< ASN.1 spare5 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18_spare4 = 4, /**< ASN.1 spare4 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18_spare3 = 5, /**< ASN.1 spare3 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18_spare2 = 6, /**< ASN.1 spare2 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18_spare1 = 7, /**< ASN.1 spare1 */
} SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18;


/**
 * @brief 枚举 SidelinkParametersNR_r16_ExtGroup2_P0_OLPC_Sidelink_r17（ASN.1 p0-OLPC-Sidelink-r17，源文件第 20480 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SidelinkParametersNR_r16_ExtGroup2_P0_OLPC_Sidelink_r17 {
    SidelinkParametersNR_r16_ExtGroup2_P0_OLPC_Sidelink_r17_supported = 0, /**< ASN.1 supported */
} SidelinkParametersNR_r16_ExtGroup2_P0_OLPC_Sidelink_r17;


/**
 * @brief 枚举 RLC_ParametersSidelink_r16_Am_WithLongSN_Sidelink_r16（ASN.1 am-WithLongSN-Sidelink-r16，源文件第 20496 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLC_ParametersSidelink_r16_Am_WithLongSN_Sidelink_r16 {
    RLC_ParametersSidelink_r16_Am_WithLongSN_Sidelink_r16_supported = 0, /**< ASN.1 supported */
} RLC_ParametersSidelink_r16_Am_WithLongSN_Sidelink_r16;


/**
 * @brief 枚举 RLC_ParametersSidelink_r16_Um_WithLongSN_Sidelink_r16（ASN.1 um-WithLongSN-Sidelink-r16，源文件第 20497 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RLC_ParametersSidelink_r16_Um_WithLongSN_Sidelink_r16 {
    RLC_ParametersSidelink_r16_Um_WithLongSN_Sidelink_r16_supported = 0, /**< ASN.1 supported */
} RLC_ParametersSidelink_r16_Um_WithLongSN_Sidelink_r16;


/**
 * @brief 枚举 MAC_ParametersSidelinkCommon_r16_Lcp_RestrictionSidelink_r16（ASN.1 lcp-RestrictionSidelink-r16，源文件第 20512 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersSidelinkCommon_r16_Lcp_RestrictionSidelink_r16 {
    MAC_ParametersSidelinkCommon_r16_Lcp_RestrictionSidelink_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersSidelinkCommon_r16_Lcp_RestrictionSidelink_r16;


/**
 * @brief 枚举 MAC_ParametersSidelinkCommon_r16_MultipleConfiguredGrantsSidelink_r16（ASN.1 multipleConfiguredGrantsSidelink-r16，源文件第 20513 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersSidelinkCommon_r16_MultipleConfiguredGrantsSidelink_r16 {
    MAC_ParametersSidelinkCommon_r16_MultipleConfiguredGrantsSidelink_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersSidelinkCommon_r16_MultipleConfiguredGrantsSidelink_r16;


/**
 * @brief 枚举 MAC_ParametersSidelinkCommon_r16_ExtGroup1_Drx_OnSidelink_r17（ASN.1 drx-OnSidelink-r17，源文件第 20516 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersSidelinkCommon_r16_ExtGroup1_Drx_OnSidelink_r17 {
    MAC_ParametersSidelinkCommon_r16_ExtGroup1_Drx_OnSidelink_r17_supported = 0, /**< ASN.1 supported */
} MAC_ParametersSidelinkCommon_r16_ExtGroup1_Drx_OnSidelink_r17;


/**
 * @brief 枚举 MAC_ParametersSidelinkCommon_r16_ExtGroup2_Sl_LBT_FailureDectectionRecovery_r18（ASN.1 sl-LBT-FailureDectectionRecovery-r18，源文件第 20519 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersSidelinkCommon_r16_ExtGroup2_Sl_LBT_FailureDectectionRecovery_r18 {
    MAC_ParametersSidelinkCommon_r16_ExtGroup2_Sl_LBT_FailureDectectionRecovery_r18_supported = 0, /**< ASN.1 supported */
} MAC_ParametersSidelinkCommon_r16_ExtGroup2_Sl_LBT_FailureDectectionRecovery_r18;


/**
 * @brief 枚举 MAC_ParametersSidelinkXDD_Diff_r16_MultipleSR_ConfigurationsSidelink_r16（ASN.1 multipleSR-ConfigurationsSidelink-r16，源文件第 20524 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersSidelinkXDD_Diff_r16_MultipleSR_ConfigurationsSidelink_r16 {
    MAC_ParametersSidelinkXDD_Diff_r16_MultipleSR_ConfigurationsSidelink_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersSidelinkXDD_Diff_r16_MultipleSR_ConfigurationsSidelink_r16;


/**
 * @brief 枚举 MAC_ParametersSidelinkXDD_Diff_r16_LogicalChannelSR_DelayTimerSidelink_r16（ASN.1 logicalChannelSR-DelayTimerSidelink-r16，源文件第 20525 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MAC_ParametersSidelinkXDD_Diff_r16_LogicalChannelSR_DelayTimerSidelink_r16 {
    MAC_ParametersSidelinkXDD_Diff_r16_LogicalChannelSR_DelayTimerSidelink_r16_supported = 0, /**< ASN.1 supported */
} MAC_ParametersSidelinkXDD_Diff_r16_LogicalChannelSR_DelayTimerSidelink_r16;


/**
 * @brief 枚举 BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16（ASN.1 gnb-ScheduledMode3SidelinkEUTRA-r16/gnb-ScheduledMode3DelaySidelinkEUTRA-r16，源文件第 20533 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16 {
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms0 = 0, /**< ASN.1 ms0 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms0dot25 = 1, /**< ASN.1 ms0dot25 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms0dot5 = 2, /**< ASN.1 ms0dot5 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms0dot625 = 3, /**< ASN.1 ms0dot625 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms0dot75 = 4, /**< ASN.1 ms0dot75 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms1 = 5, /**< ASN.1 ms1 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms1dot25 = 6, /**< ASN.1 ms1dot25 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms1dot5 = 7, /**< ASN.1 ms1dot5 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms1dot75 = 8, /**< ASN.1 ms1dot75 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms2 = 9, /**< ASN.1 ms2 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms2dot5 = 10, /**< ASN.1 ms2dot5 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms3 = 11, /**< ASN.1 ms3 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms4 = 12, /**< ASN.1 ms4 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms5 = 13, /**< ASN.1 ms5 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms6 = 14, /**< ASN.1 ms6 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms8 = 15, /**< ASN.1 ms8 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms10 = 16, /**< ASN.1 ms10 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16_ms20 = 17, /**< ASN.1 ms20 */
} BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16;


/**
 * @brief 枚举 BandSidelinkEUTRA_r16_Gnb_ScheduledMode4SidelinkEUTRA_r16（ASN.1 gnb-ScheduledMode4SidelinkEUTRA-r16，源文件第 20538 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelinkEUTRA_r16_Gnb_ScheduledMode4SidelinkEUTRA_r16 {
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode4SidelinkEUTRA_r16_supported = 0, /**< ASN.1 supported */
} BandSidelinkEUTRA_r16_Gnb_ScheduledMode4SidelinkEUTRA_r16;


/**
 * @brief 枚举 BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16（ASN.1 sl-Reception-r16/harq-RxProcessSidelink-r16，源文件第 20545 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16 {
    BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16_n16 = 0, /**< ASN.1 n16 */
    BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16_n24 = 1, /**< ASN.1 n24 */
    BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16_n32 = 2, /**< ASN.1 n32 */
    BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16_n48 = 3, /**< ASN.1 n48 */
    BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16_n64 = 4, /**< ASN.1 n64 */
} BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_Sl_Reception_r16_Pscch_RxSidelink_r16（ASN.1 sl-Reception-r16/pscch-RxSidelink-r16，源文件第 20546 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Sl_Reception_r16_Pscch_RxSidelink_r16 {
    BandSidelink_r16_Sl_Reception_r16_Pscch_RxSidelink_r16_value1 = 0, /**< ASN.1 value1 */
    BandSidelink_r16_Sl_Reception_r16_Pscch_RxSidelink_r16_value2 = 1, /**< ASN.1 value2 */
} BandSidelink_r16_Sl_Reception_r16_Pscch_RxSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_Sl_Reception_r16_ExtendedCP_RxSidelink_r16（ASN.1 sl-Reception-r16/extendedCP-RxSidelink-r16，源文件第 20558 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Sl_Reception_r16_ExtendedCP_RxSidelink_r16 {
    BandSidelink_r16_Sl_Reception_r16_ExtendedCP_RxSidelink_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_Sl_Reception_r16_ExtendedCP_RxSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_TxProcessModeOneSidelink_r16（ASN.1 sl-TransmissionMode1-r16/harq-TxProcessModeOneSidelink-r16，源文件第 20562 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_TxProcessModeOneSidelink_r16 {
    BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_TxProcessModeOneSidelink_r16_n8 = 0, /**< ASN.1 n8 */
    BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_TxProcessModeOneSidelink_r16_n16 = 1, /**< ASN.1 n16 */
} BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_TxProcessModeOneSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_Sl_TransmissionMode1_r16_ExtendedCP_TxSidelink_r16（ASN.1 sl-TransmissionMode1-r16/extendedCP-TxSidelink-r16，源文件第 20574 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Sl_TransmissionMode1_r16_ExtendedCP_TxSidelink_r16 {
    BandSidelink_r16_Sl_TransmissionMode1_r16_ExtendedCP_TxSidelink_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_Sl_TransmissionMode1_r16_ExtendedCP_TxSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_ReportOnPUCCH_r16（ASN.1 sl-TransmissionMode1-r16/harq-ReportOnPUCCH-r16，源文件第 20575 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_ReportOnPUCCH_r16 {
    BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_ReportOnPUCCH_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_ReportOnPUCCH_r16;


/**
 * @brief 枚举 BandSidelink_r16_Sync_Sidelink_r16_GNB_Sync_r16（ASN.1 sync-Sidelink-r16/gNB-Sync-r16，源文件第 20579 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Sync_Sidelink_r16_GNB_Sync_r16 {
    BandSidelink_r16_Sync_Sidelink_r16_GNB_Sync_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_Sync_Sidelink_r16_GNB_Sync_r16;


/**
 * @brief 枚举 BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16（ASN.1 sync-Sidelink-r16/gNB-GNSS-UE-SyncWithPriorityOnGNB-ENB-r16，源文件第 20580 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16 {
    BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16;


/**
 * @brief 枚举 BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r16（ASN.1 sync-Sidelink-r16/gNB-GNSS-UE-SyncWithPriorityOnGNSS-r16，源文件第 20581 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r16 {
    BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r16;


/**
 * @brief 枚举 BandSidelink_r16_Sl_Tx_256QAM_r16（ASN.1 sl-Tx-256QAM-r16，源文件第 20584 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Sl_Tx_256QAM_r16 {
    BandSidelink_r16_Sl_Tx_256QAM_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_Sl_Tx_256QAM_r16;


/**
 * @brief 枚举 BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber（ASN.1 psfch-FormatZeroSidelink-r16/psfch-RxNumber，源文件第 20587 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber {
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber_n5 = 0, /**< ASN.1 n5 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber_n15 = 1, /**< ASN.1 n15 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber_n25 = 2, /**< ASN.1 n25 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber_n32 = 3, /**< ASN.1 n32 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber_n35 = 4, /**< ASN.1 n35 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber_n45 = 5, /**< ASN.1 n45 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber_n50 = 6, /**< ASN.1 n50 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber_n64 = 7, /**< ASN.1 n64 */
} BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber;


/**
 * @brief 枚举 BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_TxNumber（ASN.1 psfch-FormatZeroSidelink-r16/psfch-TxNumber，源文件第 20588 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_TxNumber {
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_TxNumber_n4 = 0, /**< ASN.1 n4 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_TxNumber_n8 = 1, /**< ASN.1 n8 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_TxNumber_n16 = 2, /**< ASN.1 n16 */
} BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_TxNumber;


/**
 * @brief 枚举 BandSidelink_r16_LowSE_64QAM_MCS_TableSidelink_r16（ASN.1 lowSE-64QAM-MCS-TableSidelink-r16，源文件第 20591 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_LowSE_64QAM_MCS_TableSidelink_r16 {
    BandSidelink_r16_LowSE_64QAM_MCS_TableSidelink_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_LowSE_64QAM_MCS_TableSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_Enb_sync_Sidelink_r16（ASN.1 enb-sync-Sidelink-r16，源文件第 20593 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_Enb_sync_Sidelink_r16 {
    BandSidelink_r16_Enb_sync_Sidelink_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_Enb_sync_Sidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Harq_TxProcessModeTwoSidelink_r16（ASN.1 sl-TransmissionMode2-r16/harq-TxProcessModeTwoSidelink-r16，源文件第 20598 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Harq_TxProcessModeTwoSidelink_r16 {
    BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Harq_TxProcessModeTwoSidelink_r16_n8 = 0, /**< ASN.1 n8 */
    BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Harq_TxProcessModeTwoSidelink_r16_n16 = 1, /**< ASN.1 n16 */
} BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Harq_TxProcessModeTwoSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Scs_CP_PatternTxSidelinkModeTwo_r16（ASN.1 sl-TransmissionMode2-r16/scs-CP-PatternTxSidelinkModeTwo-r16，源文件第 20599 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Scs_CP_PatternTxSidelinkModeTwo_r16 {
    BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Scs_CP_PatternTxSidelinkModeTwo_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Scs_CP_PatternTxSidelinkModeTwo_r16;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Dl_openLoopPC_Sidelink_r16（ASN.1 sl-TransmissionMode2-r16/dl-openLoopPC-Sidelink-r16，源文件第 20600 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Dl_openLoopPC_Sidelink_r16 {
    BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Dl_openLoopPC_Sidelink_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Dl_openLoopPC_Sidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_ReportSidelink_r16（ASN.1 congestionControlSidelink-r16/cbr-ReportSidelink-r16，源文件第 20604 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_ReportSidelink_r16 {
    BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_ReportSidelink_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_ReportSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_CR_TimeLimitSidelink_r16（ASN.1 congestionControlSidelink-r16/cbr-CR-TimeLimitSidelink-r16，源文件第 20605 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_CR_TimeLimitSidelink_r16 {
    BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_CR_TimeLimitSidelink_r16_time1 = 0, /**< ASN.1 time1 */
    BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_CR_TimeLimitSidelink_r16_time2 = 1, /**< ASN.1 time2 */
} BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_CR_TimeLimitSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup1_FewerSymbolSlotSidelink_r16（ASN.1 fewerSymbolSlotSidelink-r16，源文件第 20608 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup1_FewerSymbolSlotSidelink_r16 {
    BandSidelink_r16_ExtGroup1_FewerSymbolSlotSidelink_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup1_FewerSymbolSlotSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup1_Sl_openLoopPC_RSRP_ReportSidelink_r16（ASN.1 sl-openLoopPC-RSRP-ReportSidelink-r16，源文件第 20610 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup1_Sl_openLoopPC_RSRP_ReportSidelink_r16 {
    BandSidelink_r16_ExtGroup1_Sl_openLoopPC_RSRP_ReportSidelink_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup1_Sl_openLoopPC_RSRP_ReportSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup1_Sl_Rx_256QAM_r16（ASN.1 sl-Rx-256QAM-r16，源文件第 20612 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup1_Sl_Rx_256QAM_r16 {
    BandSidelink_r16_ExtGroup1_Sl_Rx_256QAM_r16_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup1_Sl_Rx_256QAM_r16;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16（ASN.1 ue-PowerClassSidelink-r16，源文件第 20615 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16 {
    BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16_pc2 = 0, /**< ASN.1 pc2 */
    BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16_pc3 = 1, /**< ASN.1 pc3 */
    BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16_spare6 = 2, /**< ASN.1 spare6 */
    BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16_spare5 = 3, /**< ASN.1 spare5 */
    BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16_spare4 = 4, /**< ASN.1 spare4 */
    BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16_spare3 = 5, /**< ASN.1 spare3 */
    BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16_spare2 = 6, /**< ASN.1 spare2 */
    BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16_spare1 = 7, /**< ASN.1 spare1 */
} BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Harq_TxProcessModeTwoSidelink_r17（ASN.1 sl-TransmissionMode2-RandomResourceSelection-r17/harq-TxProcessModeTwoSidelink-r17，源文件第 20621 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Harq_TxProcessModeTwoSidelink_r17 {
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Harq_TxProcessModeTwoSidelink_r17_n8 = 0, /**< ASN.1 n8 */
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Harq_TxProcessModeTwoSidelink_r17_n16 = 1, /**< ASN.1 n16 */
} BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Harq_TxProcessModeTwoSidelink_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_ExtendedCP_Mode2Random_r17（ASN.1 sl-TransmissionMode2-RandomResourceSelection-r17/extendedCP-Mode2Random-r17，源文件第 20633 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_ExtendedCP_Mode2Random_r17 {
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_ExtendedCP_Mode2Random_r17_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_ExtendedCP_Mode2Random_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Dl_openLoopPC_Sidelink_r17（ASN.1 sl-TransmissionMode2-RandomResourceSelection-r17/dl-openLoopPC-Sidelink-r17，源文件第 20634 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Dl_openLoopPC_Sidelink_r17 {
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Dl_openLoopPC_Sidelink_r17_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Dl_openLoopPC_Sidelink_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_Sync_GNSS_r17（ASN.1 sync-Sidelink-v1710/sync-GNSS-r17，源文件第 20638 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_Sync_GNSS_r17 {
    BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_Sync_GNSS_r17_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_Sync_GNSS_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_Sync_r17（ASN.1 sync-Sidelink-v1710/gNB-Sync-r17，源文件第 20639 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_Sync_r17 {
    BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_Sync_r17_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_Sync_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17（ASN.1 sync-Sidelink-v1710/gNB-GNSS-UE-SyncWithPriorityOnGNB-ENB-r17，源文件第 20640 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17 {
    BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r17（ASN.1 sync-Sidelink-v1710/gNB-GNSS-UE-SyncWithPriorityOnGNSS-r17，源文件第 20641 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r17 {
    BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r17_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Enb_sync_Sidelink_v1710（ASN.1 enb-sync-Sidelink-v1710，源文件第 20644 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Enb_sync_Sidelink_v1710 {
    BandSidelink_r16_ExtGroup3_Enb_sync_Sidelink_v1710_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Enb_sync_Sidelink_v1710;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_PreferredMode2Sidelink_r17（ASN.1 rx-IUC-Scheme1-PreferredMode2Sidelink-r17，源文件第 20646 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_PreferredMode2Sidelink_r17 {
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_PreferredMode2Sidelink_r17_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_PreferredMode2Sidelink_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17（ASN.1 rx-IUC-Scheme1-NonPreferredMode2Sidelink-r17，源文件第 20648 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17 {
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17（ASN.1 rx-IUC-Scheme2-Mode2Sidelink-r17，源文件第 20650 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17 {
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17_n5 = 0, /**< ASN.1 n5 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17_n15 = 1, /**< ASN.1 n15 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17_n25 = 2, /**< ASN.1 n25 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17_n32 = 3, /**< ASN.1 n32 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17_n35 = 4, /**< ASN.1 n35 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17_n45 = 5, /**< ASN.1 n45 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17_n50 = 6, /**< ASN.1 n50 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17_n64 = 7, /**< ASN.1 n64 */
} BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_r17（ASN.1 rx-IUC-Scheme1-SCI-r17，源文件第 20652 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_r17 {
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_r17_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_ExplicitReq_r17（ASN.1 rx-IUC-Scheme1-SCI-ExplicitReq-r17，源文件第 20654 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_ExplicitReq_r17 {
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_ExplicitReq_r17_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_ExplicitReq_r17;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup4_Sl_PRS_RxInSharedResourcePool_r18（ASN.1 sl-PRS-RxInSharedResourcePool-r18，源文件第 20659 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup4_Sl_PRS_RxInSharedResourcePool_r18 {
    BandSidelink_r16_ExtGroup4_Sl_PRS_RxInSharedResourcePool_r18_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup4_Sl_PRS_RxInSharedResourcePool_r18;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup4_Sl_PRS_RxInDedicatedResourcePool_r18（ASN.1 sl-PRS-RxInDedicatedResourcePool-r18，源文件第 20661 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup4_Sl_PRS_RxInDedicatedResourcePool_r18 {
    BandSidelink_r16_ExtGroup4_Sl_PRS_RxInDedicatedResourcePool_r18_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup4_Sl_PRS_RxInDedicatedResourcePool_r18;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup4_Sl_PRS_TxInSharedResourcePool_r18（ASN.1 sl-PRS-TxInSharedResourcePool-r18，源文件第 20663 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup4_Sl_PRS_TxInSharedResourcePool_r18 {
    BandSidelink_r16_ExtGroup4_Sl_PRS_TxInSharedResourcePool_r18_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup4_Sl_PRS_TxInSharedResourcePool_r18;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme1InDedicatedResourcePool_r18（ASN.1 sl-PRS-TxScheme1InDedicatedResourcePool-r18，源文件第 20665 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme1InDedicatedResourcePool_r18 {
    BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme1InDedicatedResourcePool_r18_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme1InDedicatedResourcePool_r18;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme2InDedicatedResourcePool_r18（ASN.1 sl-PRS-TxScheme2InDedicatedResourcePool-r18，源文件第 20667 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme2InDedicatedResourcePool_r18 {
    BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme2InDedicatedResourcePool_r18_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme2InDedicatedResourcePool_r18;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup4_Sl_PRS_CongestionCtrl_r18（ASN.1 sl-PRS-CongestionCtrl-r18，源文件第 20669 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup4_Sl_PRS_CongestionCtrl_r18 {
    BandSidelink_r16_ExtGroup4_Sl_PRS_CongestionCtrl_r18_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup4_Sl_PRS_CongestionCtrl_r18;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup4_Sl_PRS_TxRandomSelection_r18（ASN.1 sl-PRS-TxRandomSelection-r18，源文件第 20671 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup4_Sl_PRS_TxRandomSelection_r18 {
    BandSidelink_r16_ExtGroup4_Sl_PRS_TxRandomSelection_r18_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup4_Sl_PRS_TxRandomSelection_r18;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup4_Sl_DynamicSharingTxRx_r18（ASN.1 sl-DynamicSharingTxRx-r18，源文件第 20673 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup4_Sl_DynamicSharingTxRx_r18 {
    BandSidelink_r16_ExtGroup4_Sl_DynamicSharingTxRx_r18_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup4_Sl_DynamicSharingTxRx_r18;


/**
 * @brief 枚举 BandSidelink_r16_ExtGroup4_Sl_ReceptionIntraCarrierGuardBand_r18（ASN.1 sl-ReceptionIntraCarrierGuardBand-r18，源文件第 20675 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BandSidelink_r16_ExtGroup4_Sl_ReceptionIntraCarrierGuardBand_r18 {
    BandSidelink_r16_ExtGroup4_Sl_ReceptionIntraCarrierGuardBand_r18_supported = 0, /**< ASN.1 supported */
} BandSidelink_r16_ExtGroup4_Sl_ReceptionIntraCarrierGuardBand_r18;


/**
 * @brief 枚举 RelayParameters_r17_RelayUE_Operation_L2_r17（ASN.1 relayUE-Operation-L2-r17，源文件第 20680 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_RelayUE_Operation_L2_r17 {
    RelayParameters_r17_RelayUE_Operation_L2_r17_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_RelayUE_Operation_L2_r17;


/**
 * @brief 枚举 RelayParameters_r17_RemoteUE_Operation_L2_r17（ASN.1 remoteUE-Operation-L2-r17，源文件第 20681 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_RemoteUE_Operation_L2_r17 {
    RelayParameters_r17_RemoteUE_Operation_L2_r17_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_RemoteUE_Operation_L2_r17;


/**
 * @brief 枚举 RelayParameters_r17_RemoteUE_PathSwitchToIdleInactiveRelay_r17（ASN.1 remoteUE-PathSwitchToIdleInactiveRelay-r17，源文件第 20682 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_RemoteUE_PathSwitchToIdleInactiveRelay_r17 {
    RelayParameters_r17_RemoteUE_PathSwitchToIdleInactiveRelay_r17_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_RemoteUE_PathSwitchToIdleInactiveRelay_r17;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_RelayUE_U2U_OperationL2_r18（ASN.1 relayUE-U2U-OperationL2-r18，源文件第 20685 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_RelayUE_U2U_OperationL2_r18 {
    RelayParameters_r17_ExtGroup1_RelayUE_U2U_OperationL2_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_RelayUE_U2U_OperationL2_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_RemoteUE_U2U_OperationL2_r18（ASN.1 remoteUE-U2U-OperationL2-r18，源文件第 20686 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_RemoteUE_U2U_OperationL2_r18 {
    RelayParameters_r17_ExtGroup1_RemoteUE_U2U_OperationL2_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_RemoteUE_U2U_OperationL2_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_RemoteUE_U2N_PathSwitchOperationL2_r18（ASN.1 remoteUE-U2N-PathSwitchOperationL2-r18，源文件第 20687 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_RemoteUE_U2N_PathSwitchOperationL2_r18 {
    RelayParameters_r17_ExtGroup1_RemoteUE_U2N_PathSwitchOperationL2_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_RemoteUE_U2N_PathSwitchOperationL2_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_MultipathRemoteUE_PC5L2_r18（ASN.1 multipathRemoteUE-PC5L2-r18，源文件第 20688 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_MultipathRemoteUE_PC5L2_r18 {
    RelayParameters_r17_ExtGroup1_MultipathRemoteUE_PC5L2_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_MultipathRemoteUE_PC5L2_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_MultipathRelayUE_N3C_r18（ASN.1 multipathRelayUE-N3C-r18，源文件第 20689 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_MultipathRelayUE_N3C_r18 {
    RelayParameters_r17_ExtGroup1_MultipathRelayUE_N3C_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_MultipathRelayUE_N3C_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_MultipathRemoteUE_N3C_r18（ASN.1 multipathRemoteUE-N3C-r18，源文件第 20690 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_MultipathRemoteUE_N3C_r18 {
    RelayParameters_r17_ExtGroup1_MultipathRemoteUE_N3C_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_MultipathRemoteUE_N3C_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_RemoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18（ASN.1 remoteUE-IndirectPathAddChangeToIdleInactiveRelay-r18，源文件第 20691 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_RemoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18 {
    RelayParameters_r17_ExtGroup1_RemoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_RemoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMoreThanOneUuRLC_r18（ASN.1 pdcp-DuplicationMoreThanOneUuRLC-r18，源文件第 20692 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMoreThanOneUuRLC_r18 {
    RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMoreThanOneUuRLC_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMoreThanOneUuRLC_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_DRB_r18（ASN.1 pdcp-CADuplicationDirectpath-DRB-r18，源文件第 20693 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_DRB_r18 {
    RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_DRB_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_DRB_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_SRB_r18（ASN.1 pdcp-CADuplicationDirectpath-SRB-r18，源文件第 20694 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_SRB_r18 {
    RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_SRB_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_SRB_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitDRB_r18（ASN.1 pdcp-DuplicationMP-SplitDRB-r18，源文件第 20695 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitDRB_r18 {
    RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitDRB_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitDRB_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitSRB_r18（ASN.1 pdcp-DuplicationMP-SplitSRB-r18，源文件第 20696 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitSRB_r18 {
    RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitSRB_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitSRB_r18;


/**
 * @brief 枚举 RelayParameters_r17_ExtGroup1_DirectpathRLF_RecoveryViaSRB1_r18（ASN.1 directpathRLF-RecoveryViaSRB1-r18，源文件第 20697 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum RelayParameters_r17_ExtGroup1_DirectpathRLF_RecoveryViaSRB1_r18 {
    RelayParameters_r17_ExtGroup1_DirectpathRLF_RecoveryViaSRB1_r18_supported = 0, /**< ASN.1 supported */
} RelayParameters_r17_ExtGroup1_DirectpathRLF_RecoveryViaSRB1_r18;


/**
 * @brief 枚举 PDCP_ParametersSidelink_r18_Pdcp_DuplicationSRB_sidelink_r18（ASN.1 pdcp-DuplicationSRB-sidelink-r18，源文件第 20702 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_ParametersSidelink_r18_Pdcp_DuplicationSRB_sidelink_r18 {
    PDCP_ParametersSidelink_r18_Pdcp_DuplicationSRB_sidelink_r18_supported = 0, /**< ASN.1 supported */
} PDCP_ParametersSidelink_r18_Pdcp_DuplicationSRB_sidelink_r18;


/**
 * @brief 枚举 PDCP_ParametersSidelink_r18_Pdcp_DuplicationDRB_sidelink_r18（ASN.1 pdcp-DuplicationDRB-sidelink-r18，源文件第 20703 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCP_ParametersSidelink_r18_Pdcp_DuplicationDRB_sidelink_r18 {
    PDCP_ParametersSidelink_r18_Pdcp_DuplicationDRB_sidelink_r18_supported = 0, /**< ASN.1 supported */
} PDCP_ParametersSidelink_r18_Pdcp_DuplicationDRB_sidelink_r18;


/**
 * @brief 枚举 SON_Parameters_r16_Rach_Report_r16（ASN.1 rach-Report-r16，源文件第 20716 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SON_Parameters_r16_Rach_Report_r16 {
    SON_Parameters_r16_Rach_Report_r16_supported = 0, /**< ASN.1 supported */
} SON_Parameters_r16_Rach_Report_r16;


/**
 * @brief 枚举 SON_Parameters_r16_ExtGroup1_RlfReportCHO_r17（ASN.1 rlfReportCHO-r17，源文件第 20719 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SON_Parameters_r16_ExtGroup1_RlfReportCHO_r17 {
    SON_Parameters_r16_ExtGroup1_RlfReportCHO_r17_supported = 0, /**< ASN.1 supported */
} SON_Parameters_r16_ExtGroup1_RlfReportCHO_r17;


/**
 * @brief 枚举 SON_Parameters_r16_ExtGroup1_RlfReportDAPS_r17（ASN.1 rlfReportDAPS-r17，源文件第 20720 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SON_Parameters_r16_ExtGroup1_RlfReportDAPS_r17 {
    SON_Parameters_r16_ExtGroup1_RlfReportDAPS_r17_supported = 0, /**< ASN.1 supported */
} SON_Parameters_r16_ExtGroup1_RlfReportDAPS_r17;


/**
 * @brief 枚举 SON_Parameters_r16_ExtGroup1_Success_HO_Report_r17（ASN.1 success-HO-Report-r17，源文件第 20721 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SON_Parameters_r16_ExtGroup1_Success_HO_Report_r17 {
    SON_Parameters_r16_ExtGroup1_Success_HO_Report_r17_supported = 0, /**< ASN.1 supported */
} SON_Parameters_r16_ExtGroup1_Success_HO_Report_r17;


/**
 * @brief 枚举 SON_Parameters_r16_ExtGroup1_TwoStepRACH_Report_r17（ASN.1 twoStepRACH-Report-r17，源文件第 20722 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SON_Parameters_r16_ExtGroup1_TwoStepRACH_Report_r17 {
    SON_Parameters_r16_ExtGroup1_TwoStepRACH_Report_r17_supported = 0, /**< ASN.1 supported */
} SON_Parameters_r16_ExtGroup1_TwoStepRACH_Report_r17;


/**
 * @brief 枚举 SON_Parameters_r16_ExtGroup1_Pscell_MHI_Report_r17（ASN.1 pscell-MHI-Report-r17，源文件第 20723 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SON_Parameters_r16_ExtGroup1_Pscell_MHI_Report_r17 {
    SON_Parameters_r16_ExtGroup1_Pscell_MHI_Report_r17_supported = 0, /**< ASN.1 supported */
} SON_Parameters_r16_ExtGroup1_Pscell_MHI_Report_r17;


/**
 * @brief 枚举 SON_Parameters_r16_ExtGroup1_OnDemandSI_Report_r17（ASN.1 onDemandSI-Report-r17，源文件第 20724 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SON_Parameters_r16_ExtGroup1_OnDemandSI_Report_r17 {
    SON_Parameters_r16_ExtGroup1_OnDemandSI_Report_r17_supported = 0, /**< ASN.1 supported */
} SON_Parameters_r16_ExtGroup1_OnDemandSI_Report_r17;


/**
 * @brief 枚举 SON_Parameters_r16_ExtGroup2_Spr_Report_r18（ASN.1 spr-Report-r18，源文件第 20727 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SON_Parameters_r16_ExtGroup2_Spr_Report_r18 {
    SON_Parameters_r16_ExtGroup2_Spr_Report_r18_supported = 0, /**< ASN.1 supported */
} SON_Parameters_r16_ExtGroup2_Spr_Report_r18;


/**
 * @brief 枚举 SON_Parameters_r16_ExtGroup2_SuccessIRAT_HO_Report_r18（ASN.1 successIRAT-HO-Report-r18，源文件第 20728 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SON_Parameters_r16_ExtGroup2_SuccessIRAT_HO_Report_r18 {
    SON_Parameters_r16_ExtGroup2_SuccessIRAT_HO_Report_r18_supported = 0, /**< ASN.1 supported */
} SON_Parameters_r16_ExtGroup2_SuccessIRAT_HO_Report_r18;


/**
 * @brief 枚举 SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Serving_r16（ASN.1 spatialRelation-SRS-PosBasedOnSSB-Serving-r16，源文件第 20736 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Serving_r16 {
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Serving_r16_supported = 0, /**< ASN.1 supported */
} SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Serving_r16;


/**
 * @brief 枚举 SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16（ASN.1 spatialRelation-SRS-PosBasedOnCSI-RS-Serving-r16，源文件第 20737 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16 {
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16_supported = 0, /**< ASN.1 supported */
} SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16;


/**
 * @brief 枚举 SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Serving_r16（ASN.1 spatialRelation-SRS-PosBasedOnPRS-Serving-r16，源文件第 20738 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Serving_r16 {
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Serving_r16_supported = 0, /**< ASN.1 supported */
} SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Serving_r16;


/**
 * @brief 枚举 SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSRS_r16（ASN.1 spatialRelation-SRS-PosBasedOnSRS-r16，源文件第 20739 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSRS_r16 {
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSRS_r16_supported = 0, /**< ASN.1 supported */
} SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSRS_r16;


/**
 * @brief 枚举 SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Neigh_r16（ASN.1 spatialRelation-SRS-PosBasedOnSSB-Neigh-r16，源文件第 20740 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Neigh_r16 {
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Neigh_r16_supported = 0, /**< ASN.1 supported */
} SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Neigh_r16;


/**
 * @brief 枚举 SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Neigh_r16（ASN.1 spatialRelation-SRS-PosBasedOnPRS-Neigh-r16，源文件第 20741 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Neigh_r16 {
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Neigh_r16_supported = 0, /**< ASN.1 supported */
} SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Neigh_r16;


/**
 * @brief 枚举 SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17（ASN.1 srs-PosResourcesRRC-Inactive-r17/maxNumberSRS-PosResourceSetPerBWP-r17，源文件第 20750 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17 {
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17_n1 = 0, /**< ASN.1 n1 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17_n2 = 1, /**< ASN.1 n2 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17_n4 = 2, /**< ASN.1 n4 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17_n8 = 3, /**< ASN.1 n8 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17_n12 = 4, /**< ASN.1 n12 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17_n16 = 5, /**< ASN.1 n16 */
} SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17;


/**
 * @brief 枚举 SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17（ASN.1 srs-PosResourcesRRC-Inactive-r17/maxNumberSRS-PosResourcesPerBWP-r17，源文件第 20751 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17 {
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17_n1 = 0, /**< ASN.1 n1 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17_n2 = 1, /**< ASN.1 n2 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17_n4 = 2, /**< ASN.1 n4 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17_n8 = 3, /**< ASN.1 n8 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17_n16 = 4, /**< ASN.1 n16 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17_n32 = 5, /**< ASN.1 n32 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17_n64 = 6, /**< ASN.1 n64 */
} SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17;


/**
 * @brief 枚举 SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17（ASN.1 srs-PosResourcesRRC-Inactive-r17/maxNumberSRS-ResourcesPerBWP-PerSlot-r17，源文件第 20752 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17 {
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n1 = 0, /**< ASN.1 n1 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n2 = 1, /**< ASN.1 n2 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n3 = 2, /**< ASN.1 n3 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n4 = 3, /**< ASN.1 n4 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n5 = 4, /**< ASN.1 n5 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n6 = 5, /**< ASN.1 n6 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n8 = 6, /**< ASN.1 n8 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n10 = 7, /**< ASN.1 n10 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n12 = 8, /**< ASN.1 n12 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17_n14 = 9, /**< ASN.1 n14 */
} SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17;


/**
 * @brief 枚举 SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17（ASN.1 srs-PosResourcesRRC-Inactive-r17/maxNumberPeriodicSRS-PosResourcesPerBWP-r17，源文件第 20753 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17 {
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17_n1 = 0, /**< ASN.1 n1 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17_n2 = 1, /**< ASN.1 n2 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17_n4 = 2, /**< ASN.1 n4 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17_n8 = 3, /**< ASN.1 n8 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17_n16 = 4, /**< ASN.1 n16 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17_n32 = 5, /**< ASN.1 n32 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17_n64 = 6, /**< ASN.1 n64 */
} SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17;


/**
 * @brief 枚举 SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17（ASN.1 srs-PosResourcesRRC-Inactive-r17/maxNumberPeriodicSRS-PosResourcesPerBWP-PerSlot-r17，源文件第 20754 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17 {
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_c9c38ded = 0, /**< ASN.1 n1 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_6d83560a = 1, /**< ASN.1 n2 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_bc725af7 = 2, /**< ASN.1 n3 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_5d035be1 = 3, /**< ASN.1 n4 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_a2a9a9aa = 4, /**< ASN.1 n5 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_c7a91dee = 5, /**< ASN.1 n6 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_e8605dbf = 6, /**< ASN.1 n8 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_de83c9f9 = 7, /**< ASN.1 n10 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_a1965692 = 8, /**< ASN.1 n12 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourc_1e2a6706 = 9, /**< ASN.1 n14 */
} SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17;


/**
 * @brief 枚举 SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1（ASN.1 srs-PosResourcesRRC-Inactive-r17/dummy1，源文件第 20755 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1 {
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1_n1 = 0, /**< ASN.1 n1 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1_n2 = 1, /**< ASN.1 n2 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1_n4 = 2, /**< ASN.1 n4 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1_n8 = 3, /**< ASN.1 n8 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1_n16 = 4, /**< ASN.1 n16 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1_n32 = 5, /**< ASN.1 n32 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1_n64 = 6, /**< ASN.1 n64 */
} SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1;


/**
 * @brief 枚举 SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2（ASN.1 srs-PosResourcesRRC-Inactive-r17/dummy2，源文件第 20756 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2 {
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n1 = 0, /**< ASN.1 n1 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n2 = 1, /**< ASN.1 n2 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n3 = 2, /**< ASN.1 n3 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n4 = 3, /**< ASN.1 n4 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n5 = 4, /**< ASN.1 n5 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n6 = 5, /**< ASN.1 n6 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n8 = 6, /**< ASN.1 n8 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n10 = 7, /**< ASN.1 n10 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n12 = 8, /**< ASN.1 n12 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2_n14 = 9, /**< ASN.1 n14 */
} SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2;


/**
 * @brief 枚举 SRS_SwitchingTimeNR_SwitchingTimeDL（ASN.1 switchingTimeDL，源文件第 20764 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_SwitchingTimeNR_SwitchingTimeDL {
    SRS_SwitchingTimeNR_SwitchingTimeDL_n0us = 0, /**< ASN.1 n0us */
    SRS_SwitchingTimeNR_SwitchingTimeDL_n30us = 1, /**< ASN.1 n30us */
    SRS_SwitchingTimeNR_SwitchingTimeDL_n100us = 2, /**< ASN.1 n100us */
    SRS_SwitchingTimeNR_SwitchingTimeDL_n140us = 3, /**< ASN.1 n140us */
    SRS_SwitchingTimeNR_SwitchingTimeDL_n200us = 4, /**< ASN.1 n200us */
    SRS_SwitchingTimeNR_SwitchingTimeDL_n300us = 5, /**< ASN.1 n300us */
    SRS_SwitchingTimeNR_SwitchingTimeDL_n500us = 6, /**< ASN.1 n500us */
    SRS_SwitchingTimeNR_SwitchingTimeDL_n900us = 7, /**< ASN.1 n900us */
} SRS_SwitchingTimeNR_SwitchingTimeDL;


/**
 * @brief 枚举 SRS_SwitchingTimeNR_SwitchingTimeUL（ASN.1 switchingTimeUL，源文件第 20765 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_SwitchingTimeNR_SwitchingTimeUL {
    SRS_SwitchingTimeNR_SwitchingTimeUL_n0us = 0, /**< ASN.1 n0us */
    SRS_SwitchingTimeNR_SwitchingTimeUL_n30us = 1, /**< ASN.1 n30us */
    SRS_SwitchingTimeNR_SwitchingTimeUL_n100us = 2, /**< ASN.1 n100us */
    SRS_SwitchingTimeNR_SwitchingTimeUL_n140us = 3, /**< ASN.1 n140us */
    SRS_SwitchingTimeNR_SwitchingTimeUL_n200us = 4, /**< ASN.1 n200us */
    SRS_SwitchingTimeNR_SwitchingTimeUL_n300us = 5, /**< ASN.1 n300us */
    SRS_SwitchingTimeNR_SwitchingTimeUL_n500us = 6, /**< ASN.1 n500us */
    SRS_SwitchingTimeNR_SwitchingTimeUL_n900us = 7, /**< ASN.1 n900us */
} SRS_SwitchingTimeNR_SwitchingTimeUL;


/**
 * @brief 枚举 SRS_SwitchingTimeEUTRA_SwitchingTimeDL（ASN.1 switchingTimeDL，源文件第 20772 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_SwitchingTimeEUTRA_SwitchingTimeDL {
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n0 = 0, /**< ASN.1 n0 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n0dot5 = 1, /**< ASN.1 n0dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n1 = 2, /**< ASN.1 n1 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n1dot5 = 3, /**< ASN.1 n1dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n2 = 4, /**< ASN.1 n2 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n2dot5 = 5, /**< ASN.1 n2dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n3 = 6, /**< ASN.1 n3 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n3dot5 = 7, /**< ASN.1 n3dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n4 = 8, /**< ASN.1 n4 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n4dot5 = 9, /**< ASN.1 n4dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n5 = 10, /**< ASN.1 n5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n5dot5 = 11, /**< ASN.1 n5dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n6 = 12, /**< ASN.1 n6 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n6dot5 = 13, /**< ASN.1 n6dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL_n7 = 14, /**< ASN.1 n7 */
} SRS_SwitchingTimeEUTRA_SwitchingTimeDL;


/**
 * @brief 枚举 SRS_SwitchingTimeEUTRA_SwitchingTimeUL（ASN.1 switchingTimeUL，源文件第 20774 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_SwitchingTimeEUTRA_SwitchingTimeUL {
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n0 = 0, /**< ASN.1 n0 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n0dot5 = 1, /**< ASN.1 n0dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n1 = 2, /**< ASN.1 n1 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n1dot5 = 3, /**< ASN.1 n1dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n2 = 4, /**< ASN.1 n2 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n2dot5 = 5, /**< ASN.1 n2dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n3 = 6, /**< ASN.1 n3 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n3dot5 = 7, /**< ASN.1 n3dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n4 = 8, /**< ASN.1 n4 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n4dot5 = 9, /**< ASN.1 n4dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n5 = 10, /**< ASN.1 n5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n5dot5 = 11, /**< ASN.1 n5dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n6 = 12, /**< ASN.1 n6 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n6dot5 = 13, /**< ASN.1 n6dot5 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL_n7 = 14, /**< ASN.1 n7 */
} SRS_SwitchingTimeEUTRA_SwitchingTimeUL;


/**
 * @brief 枚举 SupportedAggBandwidth_r17_Fr1_r17（ASN.1 fr1-r17，源文件第 20781 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SupportedAggBandwidth_r17_Fr1_r17 {
    SupportedAggBandwidth_r17_Fr1_r17_mhz20 = 0, /**< ASN.1 mhz20 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz30 = 1, /**< ASN.1 mhz30 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz35 = 2, /**< ASN.1 mhz35 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz40 = 3, /**< ASN.1 mhz40 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz50 = 4, /**< ASN.1 mhz50 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz60 = 5, /**< ASN.1 mhz60 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz70 = 6, /**< ASN.1 mhz70 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz80 = 7, /**< ASN.1 mhz80 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz90 = 8, /**< ASN.1 mhz90 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz100 = 9, /**< ASN.1 mhz100 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz110 = 10, /**< ASN.1 mhz110 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz120 = 11, /**< ASN.1 mhz120 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz130 = 12, /**< ASN.1 mhz130 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz140 = 13, /**< ASN.1 mhz140 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz150 = 14, /**< ASN.1 mhz150 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz160 = 15, /**< ASN.1 mhz160 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz180 = 16, /**< ASN.1 mhz180 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz200 = 17, /**< ASN.1 mhz200 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz220 = 18, /**< ASN.1 mhz220 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz230 = 19, /**< ASN.1 mhz230 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz250 = 20, /**< ASN.1 mhz250 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz280 = 21, /**< ASN.1 mhz280 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz290 = 22, /**< ASN.1 mhz290 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz300 = 23, /**< ASN.1 mhz300 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz350 = 24, /**< ASN.1 mhz350 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz400 = 25, /**< ASN.1 mhz400 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz450 = 26, /**< ASN.1 mhz450 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz500 = 27, /**< ASN.1 mhz500 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz600 = 28, /**< ASN.1 mhz600 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz700 = 29, /**< ASN.1 mhz700 */
    SupportedAggBandwidth_r17_Fr1_r17_mhz800 = 30, /**< ASN.1 mhz800 */
    SupportedAggBandwidth_r17_Fr1_r17_spare1 = 31, /**< ASN.1 spare1 */
} SupportedAggBandwidth_r17_Fr1_r17;


/**
 * @brief 枚举 SupportedAggBandwidth_r17_Fr2_r17（ASN.1 fr2-r17，源文件第 20784 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SupportedAggBandwidth_r17_Fr2_r17 {
    SupportedAggBandwidth_r17_Fr2_r17_mhz200 = 0, /**< ASN.1 mhz200 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz300 = 1, /**< ASN.1 mhz300 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz400 = 2, /**< ASN.1 mhz400 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz500 = 3, /**< ASN.1 mhz500 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz600 = 4, /**< ASN.1 mhz600 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz700 = 5, /**< ASN.1 mhz700 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz800 = 6, /**< ASN.1 mhz800 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz900 = 7, /**< ASN.1 mhz900 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz1000 = 8, /**< ASN.1 mhz1000 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz1100 = 9, /**< ASN.1 mhz1100 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz1200 = 10, /**< ASN.1 mhz1200 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz1300 = 11, /**< ASN.1 mhz1300 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz1400 = 12, /**< ASN.1 mhz1400 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz1500 = 13, /**< ASN.1 mhz1500 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz1600 = 14, /**< ASN.1 mhz1600 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz1700 = 15, /**< ASN.1 mhz1700 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz1800 = 16, /**< ASN.1 mhz1800 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz1900 = 17, /**< ASN.1 mhz1900 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz2000 = 18, /**< ASN.1 mhz2000 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz2100 = 19, /**< ASN.1 mhz2100 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz2200 = 20, /**< ASN.1 mhz2200 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz2300 = 21, /**< ASN.1 mhz2300 */
    SupportedAggBandwidth_r17_Fr2_r17_mhz2400 = 22, /**< ASN.1 mhz2400 */
    SupportedAggBandwidth_r17_Fr2_r17_spare9 = 23, /**< ASN.1 spare9 */
    SupportedAggBandwidth_r17_Fr2_r17_spare8 = 24, /**< ASN.1 spare8 */
    SupportedAggBandwidth_r17_Fr2_r17_spare7 = 25, /**< ASN.1 spare7 */
    SupportedAggBandwidth_r17_Fr2_r17_spare6 = 26, /**< ASN.1 spare6 */
    SupportedAggBandwidth_r17_Fr2_r17_spare5 = 27, /**< ASN.1 spare5 */
    SupportedAggBandwidth_r17_Fr2_r17_spare4 = 28, /**< ASN.1 spare4 */
    SupportedAggBandwidth_r17_Fr2_r17_spare3 = 29, /**< ASN.1 spare3 */
    SupportedAggBandwidth_r17_Fr2_r17_spare2 = 30, /**< ASN.1 spare2 */
    SupportedAggBandwidth_r17_Fr2_r17_spare1 = 31, /**< ASN.1 spare1 */
} SupportedAggBandwidth_r17_Fr2_r17;


/**
 * @brief 枚举 SupportedBandwidth_Fr1（ASN.1 fr1，源文件第 20793 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SupportedBandwidth_Fr1 {
    SupportedBandwidth_Fr1_mhz5 = 0, /**< ASN.1 mhz5 */
    SupportedBandwidth_Fr1_mhz10 = 1, /**< ASN.1 mhz10 */
    SupportedBandwidth_Fr1_mhz15 = 2, /**< ASN.1 mhz15 */
    SupportedBandwidth_Fr1_mhz20 = 3, /**< ASN.1 mhz20 */
    SupportedBandwidth_Fr1_mhz25 = 4, /**< ASN.1 mhz25 */
    SupportedBandwidth_Fr1_mhz30 = 5, /**< ASN.1 mhz30 */
    SupportedBandwidth_Fr1_mhz40 = 6, /**< ASN.1 mhz40 */
    SupportedBandwidth_Fr1_mhz50 = 7, /**< ASN.1 mhz50 */
    SupportedBandwidth_Fr1_mhz60 = 8, /**< ASN.1 mhz60 */
    SupportedBandwidth_Fr1_mhz80 = 9, /**< ASN.1 mhz80 */
    SupportedBandwidth_Fr1_mhz100 = 10, /**< ASN.1 mhz100 */
} SupportedBandwidth_Fr1;


/**
 * @brief 枚举 SupportedBandwidth_Fr2（ASN.1 fr2，源文件第 20794 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SupportedBandwidth_Fr2 {
    SupportedBandwidth_Fr2_mhz50 = 0, /**< ASN.1 mhz50 */
    SupportedBandwidth_Fr2_mhz100 = 1, /**< ASN.1 mhz100 */
    SupportedBandwidth_Fr2_mhz200 = 2, /**< ASN.1 mhz200 */
    SupportedBandwidth_Fr2_mhz400 = 3, /**< ASN.1 mhz400 */
} SupportedBandwidth_Fr2;


/**
 * @brief 枚举 SupportedBandwidth_v1700_Fr1_r17（ASN.1 fr1-r17，源文件第 20798 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SupportedBandwidth_v1700_Fr1_r17 {
    SupportedBandwidth_v1700_Fr1_r17_mhz5 = 0, /**< ASN.1 mhz5 */
    SupportedBandwidth_v1700_Fr1_r17_mhz10 = 1, /**< ASN.1 mhz10 */
    SupportedBandwidth_v1700_Fr1_r17_mhz15 = 2, /**< ASN.1 mhz15 */
    SupportedBandwidth_v1700_Fr1_r17_mhz20 = 3, /**< ASN.1 mhz20 */
    SupportedBandwidth_v1700_Fr1_r17_mhz25 = 4, /**< ASN.1 mhz25 */
    SupportedBandwidth_v1700_Fr1_r17_mhz30 = 5, /**< ASN.1 mhz30 */
    SupportedBandwidth_v1700_Fr1_r17_mhz35 = 6, /**< ASN.1 mhz35 */
    SupportedBandwidth_v1700_Fr1_r17_mhz40 = 7, /**< ASN.1 mhz40 */
    SupportedBandwidth_v1700_Fr1_r17_mhz45 = 8, /**< ASN.1 mhz45 */
    SupportedBandwidth_v1700_Fr1_r17_mhz50 = 9, /**< ASN.1 mhz50 */
    SupportedBandwidth_v1700_Fr1_r17_mhz60 = 10, /**< ASN.1 mhz60 */
    SupportedBandwidth_v1700_Fr1_r17_mhz70 = 11, /**< ASN.1 mhz70 */
    SupportedBandwidth_v1700_Fr1_r17_mhz80 = 12, /**< ASN.1 mhz80 */
    SupportedBandwidth_v1700_Fr1_r17_mhz90 = 13, /**< ASN.1 mhz90 */
    SupportedBandwidth_v1700_Fr1_r17_mhz100 = 14, /**< ASN.1 mhz100 */
} SupportedBandwidth_v1700_Fr1_r17;


/**
 * @brief 枚举 SupportedBandwidth_v1700_Fr2_r17（ASN.1 fr2-r17，源文件第 20799 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SupportedBandwidth_v1700_Fr2_r17 {
    SupportedBandwidth_v1700_Fr2_r17_mhz50 = 0, /**< ASN.1 mhz50 */
    SupportedBandwidth_v1700_Fr2_r17_mhz100 = 1, /**< ASN.1 mhz100 */
    SupportedBandwidth_v1700_Fr2_r17_mhz200 = 2, /**< ASN.1 mhz200 */
    SupportedBandwidth_v1700_Fr2_r17_mhz400 = 3, /**< ASN.1 mhz400 */
    SupportedBandwidth_v1700_Fr2_r17_mhz800 = 4, /**< ASN.1 mhz800 */
    SupportedBandwidth_v1700_Fr2_r17_mhz1600 = 5, /**< ASN.1 mhz1600 */
    SupportedBandwidth_v1700_Fr2_r17_mhz2000 = 6, /**< ASN.1 mhz2000 */
} SupportedBandwidth_v1700_Fr2_r17;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_BarometerMeasReport_r16（ASN.1 barometerMeasReport-r16，源文件第 20806 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_BarometerMeasReport_r16 {
    UE_BasedPerfMeas_Parameters_r16_BarometerMeasReport_r16_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_BarometerMeasReport_r16;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_ImmMeasBT_r16（ASN.1 immMeasBT-r16，源文件第 20807 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_ImmMeasBT_r16 {
    UE_BasedPerfMeas_Parameters_r16_ImmMeasBT_r16_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_ImmMeasBT_r16;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_ImmMeasWLAN_r16（ASN.1 immMeasWLAN-r16，源文件第 20808 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_ImmMeasWLAN_r16 {
    UE_BasedPerfMeas_Parameters_r16_ImmMeasWLAN_r16_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_ImmMeasWLAN_r16;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_LoggedMeasBT_r16（ASN.1 loggedMeasBT-r16，源文件第 20809 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_LoggedMeasBT_r16 {
    UE_BasedPerfMeas_Parameters_r16_LoggedMeasBT_r16_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_LoggedMeasBT_r16;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_LoggedMeasurements_r16（ASN.1 loggedMeasurements-r16，源文件第 20810 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_LoggedMeasurements_r16 {
    UE_BasedPerfMeas_Parameters_r16_LoggedMeasurements_r16_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_LoggedMeasurements_r16;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_LoggedMeasWLAN_r16（ASN.1 loggedMeasWLAN-r16，源文件第 20811 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_LoggedMeasWLAN_r16 {
    UE_BasedPerfMeas_Parameters_r16_LoggedMeasWLAN_r16_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_LoggedMeasWLAN_r16;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_OrientationMeasReport_r16（ASN.1 orientationMeasReport-r16，源文件第 20812 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_OrientationMeasReport_r16 {
    UE_BasedPerfMeas_Parameters_r16_OrientationMeasReport_r16_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_OrientationMeasReport_r16;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_SpeedMeasReport_r16（ASN.1 speedMeasReport-r16，源文件第 20813 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_SpeedMeasReport_r16 {
    UE_BasedPerfMeas_Parameters_r16_SpeedMeasReport_r16_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_SpeedMeasReport_r16;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_Gnss_Location_r16（ASN.1 gnss-Location-r16，源文件第 20814 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_Gnss_Location_r16 {
    UE_BasedPerfMeas_Parameters_r16_Gnss_Location_r16_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_Gnss_Location_r16;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_UlPDCP_Delay_r16（ASN.1 ulPDCP-Delay-r16，源文件第 20815 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_UlPDCP_Delay_r16 {
    UE_BasedPerfMeas_Parameters_r16_UlPDCP_Delay_r16_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_UlPDCP_Delay_r16;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_ExtGroup1_SigBasedLogMDT_OverrideProtect_r17（ASN.1 sigBasedLogMDT-OverrideProtect-r17，源文件第 20818 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_ExtGroup1_SigBasedLogMDT_OverrideProtect_r17 {
    UE_BasedPerfMeas_Parameters_r16_ExtGroup1_SigBasedLogMDT_OverrideProtect_r17_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_ExtGroup1_SigBasedLogMDT_OverrideProtect_r17;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_ExtGroup1_MultipleCEF_Report_r17（ASN.1 multipleCEF-Report-r17，源文件第 20819 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_ExtGroup1_MultipleCEF_Report_r17 {
    UE_BasedPerfMeas_Parameters_r16_ExtGroup1_MultipleCEF_Report_r17_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_ExtGroup1_MultipleCEF_Report_r17;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_ExtGroup1_ExcessPacketDelay_r17（ASN.1 excessPacketDelay-r17，源文件第 20820 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_ExtGroup1_ExcessPacketDelay_r17 {
    UE_BasedPerfMeas_Parameters_r16_ExtGroup1_ExcessPacketDelay_r17_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_ExtGroup1_ExcessPacketDelay_r17;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_ExtGroup1_EarlyMeasLog_r17（ASN.1 earlyMeasLog-r17，源文件第 20821 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_ExtGroup1_EarlyMeasLog_r17 {
    UE_BasedPerfMeas_Parameters_r16_ExtGroup1_EarlyMeasLog_r17_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_ExtGroup1_EarlyMeasLog_r17;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_PNI_NPN_r18（ASN.1 loggedMDT-PNI-NPN-r18，源文件第 20824 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_PNI_NPN_r18 {
    UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_PNI_NPN_r18_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_PNI_NPN_r18;


/**
 * @brief 枚举 UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_SNPN_r18（ASN.1 loggedMDT-SNPN-r18，源文件第 20825 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_SNPN_r18 {
    UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_SNPN_r18_supported = 0, /**< ASN.1 supported */
} UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_SNPN_r18;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_Mrdc_Request_OmitEN_DC（ASN.1 mrdc-Request/omitEN-DC，源文件第 20855 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_Mrdc_Request_OmitEN_DC {
    UE_CapabilityRequestFilterCommon_Mrdc_Request_OmitEN_DC_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_Mrdc_Request_OmitEN_DC;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNR_DC（ASN.1 mrdc-Request/includeNR-DC，源文件第 20856 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNR_DC {
    UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNR_DC_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNR_DC;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNE_DC（ASN.1 mrdc-Request/includeNE-DC，源文件第 20857 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNE_DC {
    UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNE_DC_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNE_DC;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_SinglePanel_r16（ASN.1 codebookTypeRequest-r16/type1-SinglePanel-r16，源文件第 20862 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_SinglePanel_r16 {
    UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_SinglePanel_r16_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_SinglePanel_r16;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_MultiPanel_r16（ASN.1 codebookTypeRequest-r16/type1-MultiPanel-r16，源文件第 20863 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_MultiPanel_r16 {
    UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_MultiPanel_r16_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_MultiPanel_r16;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_r16（ASN.1 codebookTypeRequest-r16/type2-r16，源文件第 20864 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_r16 {
    UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_r16_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_r16;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_PortSelection_r16（ASN.1 codebookTypeRequest-r16/type2-PortSelection-r16，源文件第 20865 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_PortSelection_r16 {
    UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_PortSelection_r16_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_PortSelection_r16;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_ExtGroup1_UplinkTxSwitchRequest_r16（ASN.1 uplinkTxSwitchRequest-r16，源文件第 20867 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_ExtGroup1_UplinkTxSwitchRequest_r16 {
    UE_CapabilityRequestFilterCommon_ExtGroup1_UplinkTxSwitchRequest_r16_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_ExtGroup1_UplinkTxSwitchRequest_r16;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_ExtGroup3_FallbackGroupFiveRequest_r17（ASN.1 fallbackGroupFiveRequest-r17，源文件第 20873 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_ExtGroup3_FallbackGroupFiveRequest_r17 {
    UE_CapabilityRequestFilterCommon_ExtGroup3_FallbackGroupFiveRequest_r17_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_ExtGroup3_FallbackGroupFiveRequest_r17;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc1dot5_r18（ASN.1 lowerMSDRequest-r18/pc1dot5-r18，源文件第 20877 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc1dot5_r18 {
    UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc1dot5_r18_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc1dot5_r18;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc2_r18（ASN.1 lowerMSDRequest-r18/pc2-r18，源文件第 20878 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc2_r18 {
    UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc2_r18_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc2_r18;


/**
 * @brief 枚举 UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc3_r18（ASN.1 lowerMSDRequest-r18/pc3-r18，源文件第 20879 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc3_r18 {
    UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc3_r18_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc3_r18;


/**
 * @brief 枚举 CellGrouping_r16_Mode_r16（ASN.1 mode-r16，源文件第 20887 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CellGrouping_r16_Mode_r16 {
    CellGrouping_r16_Mode_r16_sync = 0, /**< ASN.1 sync */
    CellGrouping_r16_Mode_r16_async = 1, /**< ASN.1 async */
} CellGrouping_r16_Mode_r16;


/**
 * @brief 枚举 UE_CapabilityRequestFilterNR_v1540_Srs_SwitchingTimeRequest（ASN.1 srs-SwitchingTimeRequest，源文件第 20900 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterNR_v1540_Srs_SwitchingTimeRequest {
    UE_CapabilityRequestFilterNR_v1540_Srs_SwitchingTimeRequest_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterNR_v1540_Srs_SwitchingTimeRequest;


/**
 * @brief 枚举 UE_CapabilityRequestFilterNR_v1710_SidelinkRequest_r17（ASN.1 sidelinkRequest-r17，源文件第 20905 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_CapabilityRequestFilterNR_v1710_SidelinkRequest_r17 {
    UE_CapabilityRequestFilterNR_v1710_SidelinkRequest_r17_trueVal = 0, /**< ASN.1 trueVal */
} UE_CapabilityRequestFilterNR_v1710_SidelinkRequest_r17;


/**
 * @brief 枚举 UE_MRDC_Capability_v1800_RequirementTypeIndication_r18（ASN.1 requirementTypeIndication-r18，源文件第 20955 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_MRDC_Capability_v1800_RequirementTypeIndication_r18 {
    UE_MRDC_Capability_v1800_RequirementTypeIndication_r18_supported = 0, /**< ASN.1 supported */
} UE_MRDC_Capability_v1800_RequirementTypeIndication_r18;


/**
 * @brief 枚举 GeneralParametersMRDC_XDD_Diff_SplitSRB_WithOneUL_Path（ASN.1 splitSRB-WithOneUL-Path，源文件第 20993 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GeneralParametersMRDC_XDD_Diff_SplitSRB_WithOneUL_Path {
    GeneralParametersMRDC_XDD_Diff_SplitSRB_WithOneUL_Path_supported = 0, /**< ASN.1 supported */
} GeneralParametersMRDC_XDD_Diff_SplitSRB_WithOneUL_Path;


/**
 * @brief 枚举 GeneralParametersMRDC_XDD_Diff_SplitDRB_withUL_Both_MCG_SCG（ASN.1 splitDRB-withUL-Both-MCG-SCG，源文件第 20994 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GeneralParametersMRDC_XDD_Diff_SplitDRB_withUL_Both_MCG_SCG {
    GeneralParametersMRDC_XDD_Diff_SplitDRB_withUL_Both_MCG_SCG_supported = 0, /**< ASN.1 supported */
} GeneralParametersMRDC_XDD_Diff_SplitDRB_withUL_Both_MCG_SCG;


/**
 * @brief 枚举 GeneralParametersMRDC_XDD_Diff_Srb3（ASN.1 srb3，源文件第 20995 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GeneralParametersMRDC_XDD_Diff_Srb3 {
    GeneralParametersMRDC_XDD_Diff_Srb3_supported = 0, /**< ASN.1 supported */
} GeneralParametersMRDC_XDD_Diff_Srb3;


/**
 * @brief 枚举 GeneralParametersMRDC_XDD_Diff_Dummy（ASN.1 dummy，源文件第 20996 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GeneralParametersMRDC_XDD_Diff_Dummy {
    GeneralParametersMRDC_XDD_Diff_Dummy_supported = 0, /**< ASN.1 supported */
} GeneralParametersMRDC_XDD_Diff_Dummy;


/**
 * @brief 枚举 GeneralParametersMRDC_v1610_F1c_OverEUTRA_r16（ASN.1 f1c-OverEUTRA-r16，源文件第 21001 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum GeneralParametersMRDC_v1610_F1c_OverEUTRA_r16 {
    GeneralParametersMRDC_v1610_F1c_OverEUTRA_r16_supported = 0, /**< ASN.1 supported */
} GeneralParametersMRDC_v1610_F1c_OverEUTRA_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1530_Dummy（ASN.1 dummy，源文件第 21029 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1530_Dummy {
    UE_NR_Capability_v1530_Dummy_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1530_Dummy;


/**
 * @brief 枚举 UE_NR_Capability_v1530_InactiveState（ASN.1 inactiveState，源文件第 21031 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1530_InactiveState {
    UE_NR_Capability_v1530_InactiveState_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1530_InactiveState;


/**
 * @brief 枚举 UE_NR_Capability_v1530_DelayBudgetReporting（ASN.1 delayBudgetReporting，源文件第 21032 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1530_DelayBudgetReporting {
    UE_NR_Capability_v1530_DelayBudgetReporting_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1530_DelayBudgetReporting;


/**
 * @brief 枚举 UE_NR_Capability_v1540_OverheatingInd（ASN.1 overheatingInd，源文件第 21038 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1540_OverheatingInd {
    UE_NR_Capability_v1540_OverheatingInd_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1540_OverheatingInd;


/**
 * @brief 枚举 UE_NR_Capability_v1550_ReducedCP_Latency（ASN.1 reducedCP-Latency，源文件第 21047 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1550_ReducedCP_Latency {
    UE_NR_Capability_v1550_ReducedCP_Latency_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1550_ReducedCP_Latency;


/**
 * @brief 枚举 UE_NR_Capability_v15c0_PartialFR2_FallbackRX_Req（ASN.1 partialFR2-FallbackRX-Req，源文件第 21065 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v15c0_PartialFR2_FallbackRX_Req {
    UE_NR_Capability_v15c0_PartialFR2_FallbackRX_Req_trueVal = 0, /**< ASN.1 trueVal */
} UE_NR_Capability_v15c0_PartialFR2_FallbackRX_Req;


/**
 * @brief 枚举 UE_NR_Capability_v1610_InDeviceCoexInd_r16（ASN.1 inDeviceCoexInd-r16，源文件第 21082 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1610_InDeviceCoexInd_r16 {
    UE_NR_Capability_v1610_InDeviceCoexInd_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1610_InDeviceCoexInd_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1610_Dl_DedicatedMessageSegmentation_r16（ASN.1 dl-DedicatedMessageSegmentation-r16，源文件第 21083 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1610_Dl_DedicatedMessageSegmentation_r16 {
    UE_NR_Capability_v1610_Dl_DedicatedMessageSegmentation_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1610_Dl_DedicatedMessageSegmentation_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1610_Bh_RLF_Indication_r16（ASN.1 bh-RLF-Indication-r16，源文件第 21088 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1610_Bh_RLF_Indication_r16 {
    UE_NR_Capability_v1610_Bh_RLF_Indication_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1610_Bh_RLF_Indication_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1610_DirectSN_AdditionFirstRRC_IAB_r16（ASN.1 directSN-AdditionFirstRRC-IAB-r16，源文件第 21089 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1610_DirectSN_AdditionFirstRRC_IAB_r16 {
    UE_NR_Capability_v1610_DirectSN_AdditionFirstRRC_IAB_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1610_DirectSN_AdditionFirstRRC_IAB_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1610_ReferenceTimeProvision_r16（ASN.1 referenceTimeProvision-r16，源文件第 21091 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1610_ReferenceTimeProvision_r16 {
    UE_NR_Capability_v1610_ReferenceTimeProvision_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1610_ReferenceTimeProvision_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1610_McgRLF_RecoveryViaSCG_r16（ASN.1 mcgRLF-RecoveryViaSCG-r16，源文件第 21095 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1610_McgRLF_RecoveryViaSCG_r16 {
    UE_NR_Capability_v1610_McgRLF_RecoveryViaSCG_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1610_McgRLF_RecoveryViaSCG_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1610_ResumeWithStoredMCG_SCells_r16（ASN.1 resumeWithStoredMCG-SCells-r16，源文件第 21096 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1610_ResumeWithStoredMCG_SCells_r16 {
    UE_NR_Capability_v1610_ResumeWithStoredMCG_SCells_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1610_ResumeWithStoredMCG_SCells_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1610_ResumeWithStoredSCG_r16（ASN.1 resumeWithStoredSCG-r16，源文件第 21097 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1610_ResumeWithStoredSCG_r16 {
    UE_NR_Capability_v1610_ResumeWithStoredSCG_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1610_ResumeWithStoredSCG_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1610_ResumeWithSCG_Config_r16（ASN.1 resumeWithSCG-Config-r16，源文件第 21098 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1610_ResumeWithSCG_Config_r16 {
    UE_NR_Capability_v1610_ResumeWithSCG_Config_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1610_ResumeWithSCG_Config_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1610_OnDemandSIB_Connected_r16（ASN.1 onDemandSIB-Connected-r16，源文件第 21101 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1610_OnDemandSIB_Connected_r16 {
    UE_NR_Capability_v1610_OnDemandSIB_Connected_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1610_OnDemandSIB_Connected_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1640_RedirectAtResumeByNAS_r16（ASN.1 redirectAtResumeByNAS-r16，源文件第 21106 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1640_RedirectAtResumeByNAS_r16 {
    UE_NR_Capability_v1640_RedirectAtResumeByNAS_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1640_RedirectAtResumeByNAS_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1650_MpsPriorityIndication_r16（ASN.1 mpsPriorityIndication-r16，源文件第 21112 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1650_MpsPriorityIndication_r16 {
    UE_NR_Capability_v1650_MpsPriorityIndication_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1650_MpsPriorityIndication_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1690_Ul_RRC_Segmentation_r16（ASN.1 ul-RRC-Segmentation-r16，源文件第 21118 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1690_Ul_RRC_Segmentation_r16 {
    UE_NR_Capability_v1690_Ul_RRC_Segmentation_r16_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1690_Ul_RRC_Segmentation_r16;


/**
 * @brief 枚举 UE_NR_Capability_v1700_InactiveStatePO_Determination_r17（ASN.1 inactiveStatePO-Determination-r17，源文件第 21141 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1700_InactiveStatePO_Determination_r17 {
    UE_NR_Capability_v1700_InactiveStatePO_Determination_r17_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1700_InactiveStatePO_Determination_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1700_Ra_SDT_r17（ASN.1 ra-SDT-r17，源文件第 21149 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1700_Ra_SDT_r17 {
    UE_NR_Capability_v1700_Ra_SDT_r17_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1700_Ra_SDT_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1700_Srb_SDT_r17（ASN.1 srb-SDT-r17，源文件第 21150 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1700_Srb_SDT_r17 {
    UE_NR_Capability_v1700_Srb_SDT_r17_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1700_Srb_SDT_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1700_GNB_SideRTT_BasedPDC_r17（ASN.1 gNB-SideRTT-BasedPDC-r17，源文件第 21151 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1700_GNB_SideRTT_BasedPDC_r17 {
    UE_NR_Capability_v1700_GNB_SideRTT_BasedPDC_r17_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1700_GNB_SideRTT_BasedPDC_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1700_Bh_RLF_DetectionRecovery_Indication_r17（ASN.1 bh-RLF-DetectionRecovery-Indication-r17，源文件第 21152 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1700_Bh_RLF_DetectionRecovery_Indication_r17 {
    UE_NR_Capability_v1700_Bh_RLF_DetectionRecovery_Indication_r17_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1700_Bh_RLF_DetectionRecovery_Indication_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1700_Musim_GapPreference_r17（ASN.1 musim-GapPreference-r17，源文件第 21155 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1700_Musim_GapPreference_r17 {
    UE_NR_Capability_v1700_Musim_GapPreference_r17_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1700_Musim_GapPreference_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1700_MusimLeaveConnected_r17（ASN.1 musimLeaveConnected-r17，源文件第 21156 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1700_MusimLeaveConnected_r17 {
    UE_NR_Capability_v1700_MusimLeaveConnected_r17_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1700_MusimLeaveConnected_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1700_NonTerrestrialNetwork_r17（ASN.1 nonTerrestrialNetwork-r17，源文件第 21158 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1700_NonTerrestrialNetwork_r17 {
    UE_NR_Capability_v1700_NonTerrestrialNetwork_r17_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1700_NonTerrestrialNetwork_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1700_Ntn_ScenarioSupport_r17（ASN.1 ntn-ScenarioSupport-r17，源文件第 21159 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1700_Ntn_ScenarioSupport_r17 {
    UE_NR_Capability_v1700_Ntn_ScenarioSupport_r17_gso = 0, /**< ASN.1 gso */
    UE_NR_Capability_v1700_Ntn_ScenarioSupport_r17_ngso = 1, /**< ASN.1 ngso */
} UE_NR_Capability_v1700_Ntn_ScenarioSupport_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1700_SliceInfoforCellReselection_r17（ASN.1 sliceInfoforCellReselection-r17，源文件第 21160 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1700_SliceInfoforCellReselection_r17 {
    UE_NR_Capability_v1700_SliceInfoforCellReselection_r17_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1700_SliceInfoforCellReselection_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1750_CrossCarrierSchedulingConfigurationRelease_r17（ASN.1 crossCarrierSchedulingConfigurationRelease-r17，源文件第 21174 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1750_CrossCarrierSchedulingConfigurationRelease_r17 {
    UE_NR_Capability_v1750_CrossCarrierSchedulingConfigurationRelease_r17_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1750_CrossCarrierSchedulingConfigurationRelease_r17;


/**
 * @brief 枚举 UE_NR_Capability_v1800_AirToGroundNetwork_r18（ASN.1 airToGroundNetwork-r18，源文件第 21180 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_AirToGroundNetwork_r18 {
    UE_NR_Capability_v1800_AirToGroundNetwork_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_AirToGroundNetwork_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_SoftSatelliteSwitchResyncNTN_r18（ASN.1 softSatelliteSwitchResyncNTN-r18，源文件第 21183 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_SoftSatelliteSwitchResyncNTN_r18 {
    UE_NR_Capability_v1800_SoftSatelliteSwitchResyncNTN_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_SoftSatelliteSwitchResyncNTN_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_HardSatelliteSwitchResyncNTN_r18（ASN.1 hardSatelliteSwitchResyncNTN-r18，源文件第 21184 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_HardSatelliteSwitchResyncNTN_r18 {
    UE_NR_Capability_v1800_HardSatelliteSwitchResyncNTN_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_HardSatelliteSwitchResyncNTN_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_Mt_SDT_r18（ASN.1 mt-SDT-r18，源文件第 21185 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_Mt_SDT_r18 {
    UE_NR_Capability_v1800_Mt_SDT_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_Mt_SDT_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_Mt_SDT_NTN_r18（ASN.1 mt-SDT-NTN-r18，源文件第 21186 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_Mt_SDT_NTN_r18 {
    UE_NR_Capability_v1800_Mt_SDT_NTN_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_Mt_SDT_NTN_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_InDeviceCoexIndAutonomousDenial_r18（ASN.1 inDeviceCoexIndAutonomousDenial-r18，源文件第 21187 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_InDeviceCoexIndAutonomousDenial_r18 {
    UE_NR_Capability_v1800_InDeviceCoexIndAutonomousDenial_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_InDeviceCoexIndAutonomousDenial_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_InDeviceCoexIndFDM_r18（ASN.1 inDeviceCoexIndFDM-r18，源文件第 21188 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_InDeviceCoexIndFDM_r18 {
    UE_NR_Capability_v1800_InDeviceCoexIndFDM_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_InDeviceCoexIndFDM_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_InDeviceCoexIndTDM_r18（ASN.1 inDeviceCoexIndTDM-r18，源文件第 21189 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_InDeviceCoexIndTDM_r18 {
    UE_NR_Capability_v1800_InDeviceCoexIndTDM_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_InDeviceCoexIndTDM_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_Musim_GapPriorityPreference_r18（ASN.1 musim-GapPriorityPreference-r18，源文件第 21190 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_Musim_GapPriorityPreference_r18 {
    UE_NR_Capability_v1800_Musim_GapPriorityPreference_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_Musim_GapPriorityPreference_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_Musim_CapabilityRestriction_r18（ASN.1 musim-CapabilityRestriction-r18，源文件第 21191 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_Musim_CapabilityRestriction_r18 {
    UE_NR_Capability_v1800_Musim_CapabilityRestriction_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_Musim_CapabilityRestriction_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_MultiRx_FR2_Preference_r18（ASN.1 multiRx-FR2-Preference-r18，源文件第 21192 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_MultiRx_FR2_Preference_r18 {
    UE_NR_Capability_v1800_MultiRx_FR2_Preference_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_MultiRx_FR2_Preference_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_Ra_InsteadCG_SDT_r18（ASN.1 ra-InsteadCG-SDT-r18，源文件第 21193 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_Ra_InsteadCG_SDT_r18 {
    UE_NR_Capability_v1800_Ra_InsteadCG_SDT_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_Ra_InsteadCG_SDT_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_ResumeAfterSDT_Release_r18（ASN.1 resumeAfterSDT-Release-r18，源文件第 21194 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_ResumeAfterSDT_Release_r18 {
    UE_NR_Capability_v1800_ResumeAfterSDT_Release_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_ResumeAfterSDT_Release_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_Ul_TrafficInfo_r18（ASN.1 ul-TrafficInfo-r18，源文件第 21195 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_Ul_TrafficInfo_r18 {
    UE_NR_Capability_v1800_Ul_TrafficInfo_r18_supported = 0, /**< ASN.1 supported */
} UE_NR_Capability_v1800_Ul_TrafficInfo_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_Ntn_VSAT_AntennaType_r18（ASN.1 ntn-VSAT-AntennaType-r18，源文件第 21198 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_Ntn_VSAT_AntennaType_r18 {
    UE_NR_Capability_v1800_Ntn_VSAT_AntennaType_r18_electronic = 0, /**< ASN.1 electronic */
    UE_NR_Capability_v1800_Ntn_VSAT_AntennaType_r18_mechanical = 1, /**< ASN.1 mechanical */
} UE_NR_Capability_v1800_Ntn_VSAT_AntennaType_r18;


/**
 * @brief 枚举 UE_NR_Capability_v1800_Ntn_VSAT_MobilityType_r18（ASN.1 ntn-VSAT-MobilityType-r18，源文件第 21200 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum UE_NR_Capability_v1800_Ntn_VSAT_MobilityType_r18 {
    UE_NR_Capability_v1800_Ntn_VSAT_MobilityType_r18_fixed = 0, /**< ASN.1 fixed */
    UE_NR_Capability_v1800_Ntn_VSAT_MobilityType_r18_mobile = 1, /**< ASN.1 mobile */
} UE_NR_Capability_v1800_Ntn_VSAT_MobilityType_r18;


/**
 * @brief 枚举 BAP_Parameters_r16_FlowControlBH_RLC_ChannelBased_r16（ASN.1 flowControlBH-RLC-ChannelBased-r16，源文件第 21229 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BAP_Parameters_r16_FlowControlBH_RLC_ChannelBased_r16 {
    BAP_Parameters_r16_FlowControlBH_RLC_ChannelBased_r16_supported = 0, /**< ASN.1 supported */
} BAP_Parameters_r16_FlowControlBH_RLC_ChannelBased_r16;


/**
 * @brief 枚举 BAP_Parameters_r16_FlowControlRouting_ID_Based_r16（ASN.1 flowControlRouting-ID-Based-r16，源文件第 21230 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BAP_Parameters_r16_FlowControlRouting_ID_Based_r16 {
    BAP_Parameters_r16_FlowControlRouting_ID_Based_r16_supported = 0, /**< ASN.1 supported */
} BAP_Parameters_r16_FlowControlRouting_ID_Based_r16;


/**
 * @brief 枚举 BAP_Parameters_v1700_BapHeaderRewriting_Rerouting_r17（ASN.1 bapHeaderRewriting-Rerouting-r17，源文件第 21234 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BAP_Parameters_v1700_BapHeaderRewriting_Rerouting_r17 {
    BAP_Parameters_v1700_BapHeaderRewriting_Rerouting_r17_supported = 0, /**< ASN.1 supported */
} BAP_Parameters_v1700_BapHeaderRewriting_Rerouting_r17;


/**
 * @brief 枚举 BAP_Parameters_v1700_BapHeaderRewriting_Routing_r17（ASN.1 bapHeaderRewriting-Routing-r17，源文件第 21235 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum BAP_Parameters_v1700_BapHeaderRewriting_Routing_r17 {
    BAP_Parameters_v1700_BapHeaderRewriting_Routing_r17_supported = 0, /**< ASN.1 supported */
} BAP_Parameters_v1700_BapHeaderRewriting_Routing_r17;


/**
 * @brief 枚举 AppLayerIdleInactiveConfig_r18_ServiceType_r18（ASN.1 serviceType-r18，源文件第 21261 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerIdleInactiveConfig_r18_ServiceType_r18 {
    AppLayerIdleInactiveConfig_r18_ServiceType_r18_streaming = 0, /**< ASN.1 streaming */
    AppLayerIdleInactiveConfig_r18_ServiceType_r18_mtsi = 1, /**< ASN.1 mtsi */
    AppLayerIdleInactiveConfig_r18_ServiceType_r18_vr = 2, /**< ASN.1 vr */
    AppLayerIdleInactiveConfig_r18_ServiceType_r18_spare5 = 3, /**< ASN.1 spare5 */
    AppLayerIdleInactiveConfig_r18_ServiceType_r18_spare4 = 4, /**< ASN.1 spare4 */
    AppLayerIdleInactiveConfig_r18_ServiceType_r18_spare3 = 5, /**< ASN.1 spare3 */
    AppLayerIdleInactiveConfig_r18_ServiceType_r18_spare2 = 6, /**< ASN.1 spare2 */
    AppLayerIdleInactiveConfig_r18_ServiceType_r18_spare1 = 7, /**< ASN.1 spare1 */
} AppLayerIdleInactiveConfig_r18_ServiceType_r18;


/**
 * @brief 枚举 AppLayerIdleInactiveConfig_r18_Qoe_MeasurementType_r18（ASN.1 qoe-MeasurementType-r18，源文件第 21264 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AppLayerIdleInactiveConfig_r18_Qoe_MeasurementType_r18 {
    AppLayerIdleInactiveConfig_r18_Qoe_MeasurementType_r18_sbased = 0, /**< ASN.1 sbased */
    AppLayerIdleInactiveConfig_r18_Qoe_MeasurementType_r18_mbased = 1, /**< ASN.1 mbased */
} AppLayerIdleInactiveConfig_r18_Qoe_MeasurementType_r18;


/**
 * @brief 枚举 AvailableRAN_VisibleMetrics_r18_AppLayerBufferLevelList_r18（ASN.1 appLayerBufferLevelList-r18，源文件第 21280 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AvailableRAN_VisibleMetrics_r18_AppLayerBufferLevelList_r18 {
    AvailableRAN_VisibleMetrics_r18_AppLayerBufferLevelList_r18_trueVal = 0, /**< ASN.1 trueVal */
} AvailableRAN_VisibleMetrics_r18_AppLayerBufferLevelList_r18;


/**
 * @brief 枚举 AvailableRAN_VisibleMetrics_r18_PlayoutDelayForMediaStartup_r18（ASN.1 playoutDelayForMediaStartup-r18，源文件第 21281 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum AvailableRAN_VisibleMetrics_r18_PlayoutDelayForMediaStartup_r18 {
    AvailableRAN_VisibleMetrics_r18_PlayoutDelayForMediaStartup_r18_trueVal = 0, /**< ASN.1 trueVal */
} AvailableRAN_VisibleMetrics_r18_PlayoutDelayForMediaStartup_r18;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART010_H */
