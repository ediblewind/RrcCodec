/* ============================================================================
 * types/rrc_types_part023.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART023_H
#define RRC_CODEC_TYPES_PART023_H

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
#include "rrc_types_part021.h"
#include "rrc_types_part022.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief MIMO_ParametersPerBand_ExtGroup10
 * @note ASN.1：MIMO_ParametersPerBand_ExtGroup10；源文件第 18230 行。
 */
struct MIMO_ParametersPerBand_ExtGroup10 {
    bool has_codebookParametersetype2DopplerCSI_r18; /**< codebookParametersetype2DopplerCSI-r18 是否存在。 */
    CodebookParametersetype2DopplerCSI_r18 codebookParametersetype2DopplerCSI_r18; /**< ASN.1 codebookParametersetype2DopplerCSI-r18；结构体；OPTIONAL。 */
    bool has_codebookParametersfetype2DopplerCSI_r18; /**< codebookParametersfetype2DopplerCSI-r18 是否存在。 */
    CodebookParametersfetype2DopplerCSI_r18 codebookParametersfetype2DopplerCSI_r18; /**< ASN.1 codebookParametersfetype2DopplerCSI-r18；结构体；OPTIONAL。 */
    bool has_codebookParametersetype2CJT_r18; /**< codebookParametersetype2CJT-r18 是否存在。 */
    CodebookParametersetype2CJT_r18 codebookParametersetype2CJT_r18; /**< ASN.1 codebookParametersetype2CJT-r18；结构体；OPTIONAL。 */
    bool has_codebookParametersfetype2CJT_r18; /**< codebookParametersfetype2CJT-r18 是否存在。 */
    CodebookParametersfetype2CJT_r18 codebookParametersfetype2CJT_r18; /**< ASN.1 codebookParametersfetype2CJT-r18；结构体；OPTIONAL。 */
    bool has_codebookComboParametersCJT_r18; /**< codebookComboParametersCJT-r18 是否存在。 */
    CodebookComboParametersCJT_r18 codebookComboParametersCJT_r18; /**< ASN.1 codebookComboParametersCJT-r18；结构体；OPTIONAL。 */
    bool has_codebookParametersHARQ_ACK_PUSCH_r18; /**< codebookParametersHARQ-ACK-PUSCH-r18 是否存在。 */
    CodebookParametersHARQ_ACK_PUSCH_r18 codebookParametersHARQ_ACK_PUSCH_r18; /**< ASN.1 codebookParametersHARQ-ACK-PUSCH-r18；结构体；OPTIONAL。 */
    bool has_tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18; /**< tci-JointTCI-UpdateSingleActiveTCI-PerCC-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18 tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18; /**< ASN.1 tci-JointTCI-UpdateSingleActiveTCI-PerCC-r18；结构体；OPTIONAL。 */
    bool has_tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18; /**< tci-JointTCI-UpdateMultiActiveTCI-PerCC-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18 tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18; /**< ASN.1 tci-JointTCI-UpdateMultiActiveTCI-PerCC-r18；结构体；OPTIONAL。 */
    bool has_tci_SelectionDCI_r18; /**< tci-SelectionDCI-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionDCI_r18 tci_SelectionDCI_r18; /**< ASN.1 tci-SelectionDCI-r18；枚举；OPTIONAL。 */
    bool has_tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18; /**< tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18 tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18; /**< ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-r18；结构体；OPTIONAL。 */
    bool has_tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18; /**< tci-SeparateTCI-UpdateMultiActiveTCI-PerCC-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18 tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18; /**< ASN.1 tci-SeparateTCI-UpdateMultiActiveTCI-PerCC-r18；结构体；OPTIONAL。 */
    bool has_tci_SelectionAperiodicCSI_RS_r18; /**< tci-SelectionAperiodicCSI-RS-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionAperiodicCSI_RS_r18 tci_SelectionAperiodicCSI_RS_r18; /**< ASN.1 tci-SelectionAperiodicCSI-RS-r18；枚举；OPTIONAL。 */
    bool has_twoTCI_StatePDSCH_CJT_TxScheme_r18; /**< twoTCI-StatePDSCH-CJT-TxScheme-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoTCI_StatePDSCH_CJT_TxScheme_r18 twoTCI_StatePDSCH_CJT_TxScheme_r18; /**< ASN.1 twoTCI-StatePDSCH-CJT-TxScheme-r18；枚举；OPTIONAL。 */
    bool has_tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18; /**< tci-JointTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18 tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18; /**< ASN.1 tci-JointTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18；结构体；OPTIONAL。 */
    bool has_tci_JointTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18; /**< tci-JointTCI-UpdateMultiActiveTCI-PerCC-PerCORESET-r18 是否存在。 */
    int64_t tci_JointTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18; /**< ASN.1 tci-JointTCI-UpdateMultiActiveTCI-PerCC-PerCORESET-r18；INTEGER (2..8)，位宽 3 bit；OPTIONAL。 */
    bool has_tci_TRP_BFR_r18; /**< tci-TRP-BFR-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_TRP_BFR_r18 tci_TRP_BFR_r18; /**< ASN.1 tci-TRP-BFR-r18；枚举；OPTIONAL。 */
    bool has_tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18; /**< tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18 tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18; /**< ASN.1 tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18；结构体；OPTIONAL。 */
    bool has_tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18; /**< tci-SeparateTCI-UpdateMultiActiveTCI-PerCC-PerCORESET-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18 tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18; /**< ASN.1 tci-SeparateTCI-UpdateMultiActiveTCI-PerCC-PerCORESET-r18；结构体；OPTIONAL。 */
    bool has_commonTCI_SingleDCI_r18; /**< commonTCI-SingleDCI-r18 是否存在。 */
    int64_t commonTCI_SingleDCI_r18; /**< ASN.1 commonTCI-SingleDCI-r18；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_commonTCI_MultiDCI_r18; /**< commonTCI-MultiDCI-r18 是否存在。 */
    int64_t commonTCI_MultiDCI_r18; /**< ASN.1 commonTCI-MultiDCI-r18；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_spCell_TAG_Ind_r18; /**< spCell-TAG-Ind-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_SpCell_TAG_Ind_r18 spCell_TAG_Ind_r18; /**< ASN.1 spCell-TAG-Ind-r18；枚举；OPTIONAL。 */
    bool has_interCellCrossTRP_PDCCH_OrderCFRA_r18; /**< interCellCrossTRP-PDCCH-OrderCFRA-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_InterCellCrossTRP_PDCCH_OrderCFRA_r18 interCellCrossTRP_PDCCH_OrderCFRA_r18; /**< ASN.1 interCellCrossTRP-PDCCH-OrderCFRA-r18；枚举；OPTIONAL。 */
    bool has_intraCellCrossTRP_PDCCH_OrderCFRA_r18; /**< intraCellCrossTRP-PDCCH-OrderCFRA-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_IntraCellCrossTRP_PDCCH_OrderCFRA_r18 intraCellCrossTRP_PDCCH_OrderCFRA_r18; /**< ASN.1 intraCellCrossTRP-PDCCH-OrderCFRA-r18；枚举；OPTIONAL。 */
    bool has_overlapUL_TransReduction_r18; /**< overlapUL-TransReduction-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_OverlapUL_TransReduction_r18 overlapUL_TransReduction_r18; /**< ASN.1 overlapUL-TransReduction-r18；枚举；OPTIONAL。 */
    bool has_tdcp_Report_r18; /**< tdcp-Report-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18 tdcp_Report_r18; /**< ASN.1 tdcp-Report-r18；结构体；OPTIONAL。 */
    bool has_tdcp_Resource_r18; /**< tdcp-Resource-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18 tdcp_Resource_r18; /**< ASN.1 tdcp-Resource-r18；结构体；OPTIONAL。 */
    bool has_timelineRelax_CJT_CSI_r18; /**< timelineRelax-CJT-CSI-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TimelineRelax_CJT_CSI_r18 timelineRelax_CJT_CSI_r18; /**< ASN.1 timelineRelax-CJT-CSI-r18；枚举；OPTIONAL。 */
    bool has_jointConfigDMRSPortDynamicSwitching_r18; /**< jointConfigDMRSPortDynamicSwitching-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_JointConfigDMRSPortDynamicSwitching_r18 jointConfigDMRSPortDynamicSwitching_r18; /**< ASN.1 jointConfigDMRSPortDynamicSwitching-r18；枚举；OPTIONAL。 */
    bool has_srs_combOffsetHopping_r18; /**< srs-combOffsetHopping-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHopping_r18 srs_combOffsetHopping_r18; /**< ASN.1 srs-combOffsetHopping-r18；枚举；OPTIONAL。 */
    bool has_srs_combOffsetInTime_r18; /**< srs-combOffsetInTime-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetInTime_r18 srs_combOffsetInTime_r18; /**< ASN.1 srs-combOffsetInTime-r18；枚举；OPTIONAL。 */
    bool has_srs_combOffsetCombinedGroupSequence_r18; /**< srs-combOffsetCombinedGroupSequence-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetCombinedGroupSequence_r18 srs_combOffsetCombinedGroupSequence_r18; /**< ASN.1 srs-combOffsetCombinedGroupSequence-r18；枚举；OPTIONAL。 */
    bool has_srs_combOffsetHoppingWithinSubset_r18; /**< srs-combOffsetHoppingWithinSubset-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHoppingWithinSubset_r18 srs_combOffsetHoppingWithinSubset_r18; /**< ASN.1 srs-combOffsetHoppingWithinSubset-r18；枚举；OPTIONAL。 */
    bool has_srs_cyclicShiftHopping_r18; /**< srs-cyclicShiftHopping-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHopping_r18 srs_cyclicShiftHopping_r18; /**< ASN.1 srs-cyclicShiftHopping-r18；枚举；OPTIONAL。 */
    bool has_srs_cyclicShiftHoppingSmallGranularity_r18; /**< srs-cyclicShiftHoppingSmallGranularity-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHoppingSmallGranularity_r18 srs_cyclicShiftHoppingSmallGranularity_r18; /**< ASN.1 srs-cyclicShiftHoppingSmallGranularity-r18；枚举；OPTIONAL。 */
    bool has_srs_cyclicShiftCombinedGroupSequence_r18; /**< srs-cyclicShiftCombinedGroupSequence-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedGroupSequence_r18 srs_cyclicShiftCombinedGroupSequence_r18; /**< ASN.1 srs-cyclicShiftCombinedGroupSequence-r18；枚举；OPTIONAL。 */
    bool has_cyclicShiftHoppingWithinSubset_r18; /**< cyclicShiftHoppingWithinSubset-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_CyclicShiftHoppingWithinSubset_r18 cyclicShiftHoppingWithinSubset_r18; /**< ASN.1 cyclicShiftHoppingWithinSubset-r18；枚举；OPTIONAL。 */
    bool has_srs_cyclicShiftCombinedCombOffset_r18; /**< srs-cyclicShiftCombinedCombOffset-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedCombOffset_r18 srs_cyclicShiftCombinedCombOffset_r18; /**< ASN.1 srs-cyclicShiftCombinedCombOffset-r18；枚举；OPTIONAL。 */
    bool has_pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18; /**< pusch-CB-2PTRS-SingleDCI-STx2P-SDM-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18 pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18; /**< ASN.1 pusch-CB-2PTRS-SingleDCI-STx2P-SDM-r18；枚举；OPTIONAL。 */
    bool has_pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18; /**< pusch-NonCB-2PTRS-SingleDCI-STx2P-SDM-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18 pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18; /**< ASN.1 pusch-NonCB-2PTRS-SingleDCI-STx2P-SDM-r18；枚举；OPTIONAL。 */
    bool has_pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18; /**< pusch-NonCB-SingleDCI-STx2P-SDM-CSI-RS-SRS-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18 pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18; /**< ASN.1 pusch-NonCB-SingleDCI-STx2P-SDM-CSI-RS-SRS-r18；结构体；OPTIONAL。 */
    bool has_twoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18; /**< twoPUSCH-NonCB-Multi-DCI-STx2P-CSI-RS-Resource-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18 twoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18; /**< ASN.1 twoPUSCH-NonCB-Multi-DCI-STx2P-CSI-RS-Resource-r18；结构体；OPTIONAL。 */
    bool has_dmrs_PortEntrySingleDCI_SDM_r18; /**< dmrs-PortEntrySingleDCI-SDM-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Dmrs_PortEntrySingleDCI_SDM_r18 dmrs_PortEntrySingleDCI_SDM_r18; /**< ASN.1 dmrs-PortEntrySingleDCI-SDM-r18；枚举；OPTIONAL。 */
    bool has_pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18; /**< pusch-CB-2PTRS-SingleDCI-STx2P-SFN-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18 pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18; /**< ASN.1 pusch-CB-2PTRS-SingleDCI-STx2P-SFN-r18；枚举；OPTIONAL。 */
    bool has_pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18; /**< pusch-NonCB-2PTRS-SingleDCI-STx2P-SFN-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18 pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18; /**< ASN.1 pusch-NonCB-2PTRS-SingleDCI-STx2P-SFN-r18；枚举；OPTIONAL。 */
    bool has_pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18; /**< pusch-NonCB-SingleDCI-STx2P-SFN-CSI-RS-SRS-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18 pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18; /**< ASN.1 pusch-NonCB-SingleDCI-STx2P-SFN-CSI-RS-SRS-r18；结构体；OPTIONAL。 */
    bool has_twoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18; /**< twoPUSCH-CB-MultiDCI-STx2P-FullTimeFullFreqOverlap-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18 twoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18; /**< ASN.1 twoPUSCH-CB-MultiDCI-STx2P-FullTimeFullFreqOverlap-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18; /**< twoPUSCH-CB-MultiDCI-STx2P-FullTimePartialFreqOverlap-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18 twoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18; /**< ASN.1 twoPUSCH-CB-MultiDCI-STx2P-FullTimePartialFreqOverlap-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18; /**< twoPUSCH-CB-MultiDCI-STx2P-PartialTimeFullFreqOverlap-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18 twoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18; /**< ASN.1 twoPUSCH-CB-MultiDCI-STx2P-PartialTimeFullFreqOverlap-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18; /**< twoPUSCH-CB-MultiDCI-STx2P-PartialTimePartialFreqOverlap-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18 twoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18; /**< ASN.1 twoPUSCH-CB-MultiDCI-STx2P-PartialTimePartialFreqOverlap-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18; /**< twoPUSCH-CB-MultiDCI-STx2P-PartialTimeNonFreqOverlap-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18 twoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18; /**< ASN.1 twoPUSCH-CB-MultiDCI-STx2P-PartialTimeNonFreqOverlap-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18; /**< twoPUSCH-CB-MultiDCI-STx2P-CG-CG-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18 twoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18; /**< ASN.1 twoPUSCH-CB-MultiDCI-STx2P-CG-CG-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18; /**< twoPUSCH-CB-MultiDCI-STx2P-CG-DG-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18 twoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18; /**< ASN.1 twoPUSCH-CB-MultiDCI-STx2P-CG-DG-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18; /**< twoPUSCH-NonCB-MultiDCI-STx2P-FullTimeFullFreqOverlap-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18 twoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18; /**< ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-FullTimeFullFreqOverlap-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18; /**< twoPUSCH-NonCB-MultiDCI-STx2P-FullTimePartialFreqOverlap-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18 twoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18; /**< ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-FullTimePartialFreqOverlap-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18; /**< twoPUSCH-NonCB-MultiDCI-STx2P-PartialTimeFullFreqOverlap-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18 twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18; /**< ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-PartialTimeFullFreqOverlap-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18; /**< twoPUSCH-NonCB-MultiDCI-STx2P-PartialTimePartialFreqOverlap-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18 twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18; /**< ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-PartialTimePartialFreqOverlap-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18; /**< twoPUSCH-NonCB-MultiDCI-STx2P-PartialTimeNonFreqOverlap-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18 twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18; /**< ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-PartialTimeNonFreqOverlap-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18; /**< twoPUSCH-NonCB-MultiDCI-STx2P-CG-CG-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18 twoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18; /**< ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-CG-CG-r18；枚举；OPTIONAL。 */
    bool has_twoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18; /**< twoPUSCH-NonCB-MultiDCI-STx2P-CG-DG-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18 twoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18; /**< ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-CG-DG-r18；枚举；OPTIONAL。 */
    bool has_pucch_RepetitionDynamicIndicationSFN_r18; /**< pucch-RepetitionDynamicIndicationSFN-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_Pucch_RepetitionDynamicIndicationSFN_r18 pucch_RepetitionDynamicIndicationSFN_r18; /**< ASN.1 pucch-RepetitionDynamicIndicationSFN-r18；枚举；OPTIONAL。 */
    bool has_groupBeamReporting_STx2P_r18; /**< groupBeamReporting-STx2P-r18 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18 groupBeamReporting_STx2P_r18; /**< ASN.1 groupBeamReporting-STx2P-r18；结构体；OPTIONAL。 */
};


/**
 * @brief DummyG
 * @note ASN.1：DummyG；源文件第 18422 行。
 * @note DummyG ::= SEQUENCE { maxNumberSSB-CSI-RS-ResourceOneTx, maxNumberSSB-CSI-RS-ResourceTwo...
 */
struct DummyG {
    DummyG_MaxNumberSSB_CSI_RS_ResourceOneTx maxNumberSSB_CSI_RS_ResourceOneTx; /**< ASN.1 maxNumberSSB-CSI-RS-ResourceOneTx；枚举。 */
    DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx maxNumberSSB_CSI_RS_ResourceTwoTx; /**< ASN.1 maxNumberSSB-CSI-RS-ResourceTwoTx；枚举。 */
    DummyG_SupportedCSI_RS_Density supportedCSI_RS_Density; /**< ASN.1 supportedCSI-RS-Density；枚举。 */
};


/**
 * @brief DummyH
 * @note ASN.1：DummyH；源文件第 18436 行。
 * @note DummyH ::= SEQUENCE { burstLength, maxSimultaneousResourceSetsPerCC, maxConfiguredResour...
 */
struct DummyH {
    int64_t burstLength; /**< ASN.1 burstLength；INTEGER (1..2)，位宽 1 bit。 */
    int64_t maxSimultaneousResourceSetsPerCC; /**< ASN.1 maxSimultaneousResourceSetsPerCC；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxConfiguredResourceSetsPerCC; /**< ASN.1 maxConfiguredResourceSetsPerCC；INTEGER (1..64)，位宽 6 bit。 */
    int64_t maxConfiguredResourceSetsAllCC; /**< ASN.1 maxConfiguredResourceSetsAllCC；INTEGER (1..128)，位宽 7 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_Tci_StatePDSCH
 * @note ASN.1：tci-StatePDSCH；源文件第 17830 行。
 * @note SEQUENCE { maxNumberConfiguredTCI-StatesPerCC, maxNumberActiveTCI-PerBWP }
 */
struct MIMO_ParametersPerBand_Tci_StatePDSCH {
    bool has_maxNumberConfiguredTCI_StatesPerCC; /**< maxNumberConfiguredTCI-StatesPerCC 是否存在。 */
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC maxNumberConfiguredTCI_StatesPerCC; /**< ASN.1 maxNumberConfiguredTCI-StatesPerCC；枚举；OPTIONAL。 */
    bool has_maxNumberActiveTCI_PerBWP; /**< maxNumberActiveTCI-PerBWP 是否存在。 */
    MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberActiveTCI_PerBWP maxNumberActiveTCI_PerBWP; /**< ASN.1 maxNumberActiveTCI-PerBWP；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL
 * @note ASN.1：maxNumberRxTxBeamSwitchDL；源文件第 17843 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz, scs-120kHz, scs-240kHz }
 */
struct MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_15kHz scs_15kHz; /**< ASN.1 scs-15kHz；枚举；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_30kHz scs_30kHz; /**< ASN.1 scs-30kHz；枚举；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_120kHz scs_120kHz; /**< ASN.1 scs-120kHz；枚举；OPTIONAL。 */
    bool has_scs_240kHz; /**< scs-240kHz 是否存在。 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_240kHz scs_240kHz; /**< ASN.1 scs-240kHz；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_UplinkBeamManagement
 * @note ASN.1：uplinkBeamManagement；源文件第 17852 行。
 * @note SEQUENCE { maxNumberSRS-ResourcePerSet-BM, maxNumberSRS-ResourceSet }
 */
struct MIMO_ParametersPerBand_UplinkBeamManagement {
    MIMO_ParametersPerBand_UplinkBeamManagement_MaxNumberSRS_ResourcePerSet_BM maxNumberSRS_ResourcePerSet_BM; /**< ASN.1 maxNumberSRS-ResourcePerSet-BM；枚举。 */
    int64_t maxNumberSRS_ResourceSet; /**< ASN.1 maxNumberSRS-ResourceSet；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_BeamReportTiming
 * @note ASN.1：beamReportTiming；源文件第 17863 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz, scs-120kHz }
 */
struct MIMO_ParametersPerBand_BeamReportTiming {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_15kHz scs_15kHz; /**< ASN.1 scs-15kHz；枚举；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_30kHz scs_30kHz; /**< ASN.1 scs-30kHz；枚举；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    MIMO_ParametersPerBand_BeamReportTiming_Scs_120kHz scs_120kHz; /**< ASN.1 scs-120kHz；枚举；OPTIONAL。 */
};


/**
 * @brief PTRS_DensityRecommendationDL
 * @note ASN.1：PTRS-DensityRecommendationDL；源文件第 18480 行。
 * @note PTRS-DensityRecommendationDL ::= SEQUENCE { frequencyDensity1, frequencyDensity2, timeDensity1, timeDensity2, ...
 */
struct PTRS_DensityRecommendationDL {
    int64_t frequencyDensity1; /**< ASN.1 frequencyDensity1；INTEGER (1..276)，位宽 9 bit。 */
    int64_t frequencyDensity2; /**< ASN.1 frequencyDensity2；INTEGER (1..276)，位宽 9 bit。 */
    int64_t timeDensity1; /**< ASN.1 timeDensity1；INTEGER (0..29)，位宽 5 bit。 */
    int64_t timeDensity2; /**< ASN.1 timeDensity2；INTEGER (0..29)，位宽 5 bit。 */
    int64_t timeDensity3; /**< ASN.1 timeDensity3；INTEGER (0..29)，位宽 5 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL
 * @note ASN.1：ptrs-DensityRecommendationSetDL；源文件第 17869 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz, scs-120kHz }
 */
struct MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    PTRS_DensityRecommendationDL scs_15kHz; /**< ASN.1 scs-15kHz；结构体；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    PTRS_DensityRecommendationDL scs_30kHz; /**< ASN.1 scs-30kHz；结构体；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    PTRS_DensityRecommendationDL scs_60kHz; /**< ASN.1 scs-60kHz；结构体；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    PTRS_DensityRecommendationDL scs_120kHz; /**< ASN.1 scs-120kHz；结构体；OPTIONAL。 */
};


/**
 * @brief PTRS_DensityRecommendationUL
 * @note ASN.1：PTRS-DensityRecommendationUL；源文件第 18488 行。
 * @note PTRS-DensityRecommendationUL ::= SEQUENCE { frequencyDensity1, frequencyDensity2, timeDensity1, timeDensity2, ...
 */
struct PTRS_DensityRecommendationUL {
    int64_t frequencyDensity1; /**< ASN.1 frequencyDensity1；INTEGER (1..276)，位宽 9 bit。 */
    int64_t frequencyDensity2; /**< ASN.1 frequencyDensity2；INTEGER (1..276)，位宽 9 bit。 */
    int64_t timeDensity1; /**< ASN.1 timeDensity1；INTEGER (0..29)，位宽 5 bit。 */
    int64_t timeDensity2; /**< ASN.1 timeDensity2；INTEGER (0..29)，位宽 5 bit。 */
    int64_t timeDensity3; /**< ASN.1 timeDensity3；INTEGER (0..29)，位宽 5 bit。 */
    int64_t sampleDensity1; /**< ASN.1 sampleDensity1；INTEGER (1..276)，位宽 9 bit。 */
    int64_t sampleDensity2; /**< ASN.1 sampleDensity2；INTEGER (1..276)，位宽 9 bit。 */
    int64_t sampleDensity3; /**< ASN.1 sampleDensity3；INTEGER (1..276)，位宽 9 bit。 */
    int64_t sampleDensity4; /**< ASN.1 sampleDensity4；INTEGER (1..276)，位宽 9 bit。 */
    int64_t sampleDensity5; /**< ASN.1 sampleDensity5；INTEGER (1..276)，位宽 9 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL
 * @note ASN.1：ptrs-DensityRecommendationSetUL；源文件第 17875 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz, scs-120kHz }
 */
struct MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    PTRS_DensityRecommendationUL scs_15kHz; /**< ASN.1 scs-15kHz；结构体；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    PTRS_DensityRecommendationUL scs_30kHz; /**< ASN.1 scs-30kHz；结构体；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    PTRS_DensityRecommendationUL scs_60kHz; /**< ASN.1 scs-60kHz；结构体；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    PTRS_DensityRecommendationUL scs_120kHz; /**< ASN.1 scs-120kHz；结构体；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand
 * @note ASN.1：MIMO-ParametersPerBand；源文件第 17829 行。
 * @note MIMO-ParametersPerBand ::= SEQUENCE { tci-StatePDSCH, additionalActiveTCI-StatePDCCH, pusch-TransCoheren...
 */
struct MIMO_ParametersPerBand {
    bool has_tci_StatePDSCH; /**< tci-StatePDSCH 是否存在。 */
    MIMO_ParametersPerBand_Tci_StatePDSCH tci_StatePDSCH; /**< ASN.1 tci-StatePDSCH；结构体；OPTIONAL。 */
    bool has_additionalActiveTCI_StatePDCCH; /**< additionalActiveTCI-StatePDCCH 是否存在。 */
    MIMO_ParametersPerBand_AdditionalActiveTCI_StatePDCCH additionalActiveTCI_StatePDCCH; /**< ASN.1 additionalActiveTCI-StatePDCCH；枚举；OPTIONAL。 */
    bool has_pusch_TransCoherence; /**< pusch-TransCoherence 是否存在。 */
    MIMO_ParametersPerBand_Pusch_TransCoherence pusch_TransCoherence; /**< ASN.1 pusch-TransCoherence；枚举；OPTIONAL。 */
    bool has_beamCorrespondenceWithoutUL_BeamSweeping; /**< beamCorrespondenceWithoutUL-BeamSweeping 是否存在。 */
    MIMO_ParametersPerBand_BeamCorrespondenceWithoutUL_BeamSweeping beamCorrespondenceWithoutUL_BeamSweeping; /**< ASN.1 beamCorrespondenceWithoutUL-BeamSweeping；枚举；OPTIONAL。 */
    bool has_periodicBeamReport; /**< periodicBeamReport 是否存在。 */
    MIMO_ParametersPerBand_PeriodicBeamReport periodicBeamReport; /**< ASN.1 periodicBeamReport；枚举；OPTIONAL。 */
    bool has_aperiodicBeamReport; /**< aperiodicBeamReport 是否存在。 */
    MIMO_ParametersPerBand_AperiodicBeamReport aperiodicBeamReport; /**< ASN.1 aperiodicBeamReport；枚举；OPTIONAL。 */
    bool has_sp_BeamReportPUCCH; /**< sp-BeamReportPUCCH 是否存在。 */
    MIMO_ParametersPerBand_Sp_BeamReportPUCCH sp_BeamReportPUCCH; /**< ASN.1 sp-BeamReportPUCCH；枚举；OPTIONAL。 */
    bool has_sp_BeamReportPUSCH; /**< sp-BeamReportPUSCH 是否存在。 */
    MIMO_ParametersPerBand_Sp_BeamReportPUSCH sp_BeamReportPUSCH; /**< ASN.1 sp-BeamReportPUSCH；枚举；OPTIONAL。 */
    bool has_dummy1; /**< dummy1 是否存在。 */
    DummyG dummy1; /**< ASN.1 dummy1；结构体；OPTIONAL。 */
    bool has_maxNumberRxBeam; /**< maxNumberRxBeam 是否存在。 */
    int64_t maxNumberRxBeam; /**< ASN.1 maxNumberRxBeam；INTEGER (2..8)，位宽 3 bit；OPTIONAL。 */
    bool has_maxNumberRxTxBeamSwitchDL; /**< maxNumberRxTxBeamSwitchDL 是否存在。 */
    MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL maxNumberRxTxBeamSwitchDL; /**< ASN.1 maxNumberRxTxBeamSwitchDL；结构体；OPTIONAL。 */
    bool has_maxNumberNonGroupBeamReporting; /**< maxNumberNonGroupBeamReporting 是否存在。 */
    MIMO_ParametersPerBand_MaxNumberNonGroupBeamReporting maxNumberNonGroupBeamReporting; /**< ASN.1 maxNumberNonGroupBeamReporting；枚举；OPTIONAL。 */
    bool has_groupBeamReporting; /**< groupBeamReporting 是否存在。 */
    MIMO_ParametersPerBand_GroupBeamReporting groupBeamReporting; /**< ASN.1 groupBeamReporting；枚举；OPTIONAL。 */
    bool has_uplinkBeamManagement; /**< uplinkBeamManagement 是否存在。 */
    MIMO_ParametersPerBand_UplinkBeamManagement uplinkBeamManagement; /**< ASN.1 uplinkBeamManagement；结构体；OPTIONAL。 */
    bool has_maxNumberCSI_RS_BFD; /**< maxNumberCSI-RS-BFD 是否存在。 */
    int64_t maxNumberCSI_RS_BFD; /**< ASN.1 maxNumberCSI-RS-BFD；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_maxNumberSSB_BFD; /**< maxNumberSSB-BFD 是否存在。 */
    int64_t maxNumberSSB_BFD; /**< ASN.1 maxNumberSSB-BFD；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_maxNumberCSI_RS_SSB_CBD; /**< maxNumberCSI-RS-SSB-CBD 是否存在。 */
    int64_t maxNumberCSI_RS_SSB_CBD; /**< ASN.1 maxNumberCSI-RS-SSB-CBD；INTEGER (1..256)，位宽 8 bit；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    MIMO_ParametersPerBand_Dummy2 dummy2; /**< ASN.1 dummy2；枚举；OPTIONAL。 */
    bool has_twoPortsPTRS_UL; /**< twoPortsPTRS-UL 是否存在。 */
    MIMO_ParametersPerBand_TwoPortsPTRS_UL twoPortsPTRS_UL; /**< ASN.1 twoPortsPTRS-UL；枚举；OPTIONAL。 */
    bool has_dummy5; /**< dummy5 是否存在。 */
    SRS_Resources dummy5; /**< ASN.1 dummy5；结构体；OPTIONAL。 */
    bool has_dummy3; /**< dummy3 是否存在。 */
    int64_t dummy3; /**< ASN.1 dummy3；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_beamReportTiming; /**< beamReportTiming 是否存在。 */
    MIMO_ParametersPerBand_BeamReportTiming beamReportTiming; /**< ASN.1 beamReportTiming；结构体；OPTIONAL。 */
    bool has_ptrs_DensityRecommendationSetDL; /**< ptrs-DensityRecommendationSetDL 是否存在。 */
    MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL ptrs_DensityRecommendationSetDL; /**< ASN.1 ptrs-DensityRecommendationSetDL；结构体；OPTIONAL。 */
    bool has_ptrs_DensityRecommendationSetUL; /**< ptrs-DensityRecommendationSetUL 是否存在。 */
    MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL ptrs_DensityRecommendationSetUL; /**< ASN.1 ptrs-DensityRecommendationSetUL；结构体；OPTIONAL。 */
    bool has_dummy4; /**< dummy4 是否存在。 */
    DummyH dummy4; /**< ASN.1 dummy4；结构体；OPTIONAL。 */
    bool has_aperiodicTRS; /**< aperiodicTRS 是否存在。 */
    MIMO_ParametersPerBand_AperiodicTRS aperiodicTRS; /**< ASN.1 aperiodicTRS；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MIMO_ParametersPerBand_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MIMO_ParametersPerBand_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    MIMO_ParametersPerBand_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    MIMO_ParametersPerBand_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    MIMO_ParametersPerBand_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    MIMO_ParametersPerBand_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    MIMO_ParametersPerBand_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup8; /**< 第 8 组是否出现。 */
    MIMO_ParametersPerBand_ExtGroup8 extGroup8; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup9; /**< 第 9 组是否出现。 */
    MIMO_ParametersPerBand_ExtGroup9 extGroup9; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup10; /**< 第 10 组是否出现。 */
    MIMO_ParametersPerBand_ExtGroup10 extGroup10; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CSI_MultiTRP_SupportedCombinations_r17
 * @note ASN.1：CSI-MultiTRP-SupportedCombinations-r17；源文件第 18513 行。
 * @note CSI-MultiTRP-SupportedCombinations-r17 ::= SEQUENCE { maxNumTx-Ports-r17, maxTotalNumCMR-r17, maxTotalNumTx-PortsNZP-CSI...
 */
struct CSI_MultiTRP_SupportedCombinations_r17 {
    CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17 maxNumTx_Ports_r17; /**< ASN.1 maxNumTx-Ports-r17；枚举。 */
    int64_t maxTotalNumCMR_r17; /**< ASN.1 maxTotalNumCMR-r17；INTEGER (2..64)，位宽 6 bit。 */
    int64_t maxTotalNumTx_PortsNZP_CSI_RS_r17; /**< ASN.1 maxTotalNumTx-PortsNZP-CSI-RS-r17；INTEGER (2..256)，位宽 8 bit。 */
};


/**
 * @brief NCR_Parameters_r18
 * @note ASN.1：NCR-Parameters-r18；源文件第 18604 行。
 * @note NCR-Parameters-r18 ::= SEQUENCE { inactiveStateNCR-r18, supportedNumberOfDRBs-NCR-r18, nonDRB-NCR-r18 }
 */
struct NCR_Parameters_r18 {
    bool has_inactiveStateNCR_r18; /**< inactiveStateNCR-r18 是否存在。 */
    NCR_Parameters_r18_InactiveStateNCR_r18 inactiveStateNCR_r18; /**< ASN.1 inactiveStateNCR-r18；枚举；OPTIONAL。 */
    bool has_supportedNumberOfDRBs_NCR_r18; /**< supportedNumberOfDRBs-NCR-r18 是否存在。 */
    NCR_Parameters_r18_SupportedNumberOfDRBs_NCR_r18 supportedNumberOfDRBs_NCR_r18; /**< ASN.1 supportedNumberOfDRBs-NCR-r18；枚举；OPTIONAL。 */
    bool has_nonDRB_NCR_r18; /**< nonDRB-NCR-r18 是否存在。 */
    NCR_Parameters_r18_NonDRB_NCR_r18 nonDRB_NCR_r18; /**< ASN.1 nonDRB-NCR-r18；枚举；OPTIONAL。 */
};


/**
 * @brief GeneralParametersMRDC_XDD_Diff
 * @note ASN.1：GeneralParametersMRDC-XDD-Diff；源文件第 20992 行。
 * @note GeneralParametersMRDC-XDD-Diff ::= SEQUENCE { splitSRB-WithOneUL-Path, splitDRB-withUL-Both-MCG-SCG, srb3, dummy }
 */
struct GeneralParametersMRDC_XDD_Diff {
    bool has_splitSRB_WithOneUL_Path; /**< splitSRB-WithOneUL-Path 是否存在。 */
    GeneralParametersMRDC_XDD_Diff_SplitSRB_WithOneUL_Path splitSRB_WithOneUL_Path; /**< ASN.1 splitSRB-WithOneUL-Path；枚举；OPTIONAL。 */
    bool has_splitDRB_withUL_Both_MCG_SCG; /**< splitDRB-withUL-Both-MCG-SCG 是否存在。 */
    GeneralParametersMRDC_XDD_Diff_SplitDRB_withUL_Both_MCG_SCG splitDRB_withUL_Both_MCG_SCG; /**< ASN.1 splitDRB-withUL-Both-MCG-SCG；枚举；OPTIONAL。 */
    bool has_srb3; /**< srb3 是否存在。 */
    GeneralParametersMRDC_XDD_Diff_Srb3 srb3; /**< ASN.1 srb3；枚举；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    GeneralParametersMRDC_XDD_Diff_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_CapabilityAddXDD_Mode
 * @note ASN.1：UE-MRDC-CapabilityAddXDD-Mode；源文件第 20978 行。
 * @note UE-MRDC-CapabilityAddXDD-Mode ::= SEQUENCE { measAndMobParametersMRDC-XDD-Diff, generalParametersMRDC-XDD-Diff }
 */
struct UE_MRDC_CapabilityAddXDD_Mode {
    bool has_measAndMobParametersMRDC_XDD_Diff; /**< measAndMobParametersMRDC-XDD-Diff 是否存在。 */
    MeasAndMobParametersMRDC_XDD_Diff measAndMobParametersMRDC_XDD_Diff; /**< ASN.1 measAndMobParametersMRDC-XDD-Diff；结构体；OPTIONAL。 */
    bool has_generalParametersMRDC_XDD_Diff; /**< generalParametersMRDC-XDD-Diff 是否存在。 */
    GeneralParametersMRDC_XDD_Diff generalParametersMRDC_XDD_Diff; /**< ASN.1 generalParametersMRDC-XDD-Diff；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_CapabilityAddFRX_Mode
 * @note ASN.1：UE-MRDC-CapabilityAddFRX-Mode；源文件第 20987 行。
 * @note UE-MRDC-CapabilityAddFRX-Mode ::= SEQUENCE { measAndMobParametersMRDC-FRX-Diff }
 */
struct UE_MRDC_CapabilityAddFRX_Mode {
    MeasAndMobParametersMRDC_FRX_Diff measAndMobParametersMRDC_FRX_Diff; /**< ASN.1 measAndMobParametersMRDC-FRX-Diff；结构体。 */
};


/**
 * @brief NRDC_Parameters_Dummy
 * @note ASN.1：dummy；源文件第 18621 行。
 * @note SEQUENCE { }
 */
struct NRDC_Parameters_Dummy {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief NRDC_Parameters
 * @note ASN.1：NRDC-Parameters；源文件第 18613 行。
 * @note NRDC-Parameters ::= SEQUENCE { measAndMobParametersNRDC, generalParametersNRDC, fdd-Add-UE-NRDC-C...
 */
struct NRDC_Parameters {
    bool has_measAndMobParametersNRDC; /**< measAndMobParametersNRDC 是否存在。 */
    MeasAndMobParametersMRDC measAndMobParametersNRDC; /**< ASN.1 measAndMobParametersNRDC；结构体；OPTIONAL。 */
    bool has_generalParametersNRDC; /**< generalParametersNRDC 是否存在。 */
    GeneralParametersMRDC_XDD_Diff generalParametersNRDC; /**< ASN.1 generalParametersNRDC；结构体；OPTIONAL。 */
    bool has_fdd_Add_UE_NRDC_Capabilities; /**< fdd-Add-UE-NRDC-Capabilities 是否存在。 */
    UE_MRDC_CapabilityAddXDD_Mode fdd_Add_UE_NRDC_Capabilities; /**< ASN.1 fdd-Add-UE-NRDC-Capabilities；结构体；OPTIONAL。 */
    bool has_tdd_Add_UE_NRDC_Capabilities; /**< tdd-Add-UE-NRDC-Capabilities 是否存在。 */
    UE_MRDC_CapabilityAddXDD_Mode tdd_Add_UE_NRDC_Capabilities; /**< ASN.1 tdd-Add-UE-NRDC-Capabilities；结构体；OPTIONAL。 */
    bool has_fr1_Add_UE_NRDC_Capabilities; /**< fr1-Add-UE-NRDC-Capabilities 是否存在。 */
    UE_MRDC_CapabilityAddFRX_Mode fr1_Add_UE_NRDC_Capabilities; /**< ASN.1 fr1-Add-UE-NRDC-Capabilities；结构体；OPTIONAL。 */
    bool has_fr2_Add_UE_NRDC_Capabilities; /**< fr2-Add-UE-NRDC-Capabilities 是否存在。 */
    UE_MRDC_CapabilityAddFRX_Mode fr2_Add_UE_NRDC_Capabilities; /**< ASN.1 fr2-Add-UE-NRDC-Capabilities；结构体；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    OctetString dummy2; /**< ASN.1 dummy2；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    NRDC_Parameters_Dummy dummy; /**< ASN.1 dummy；结构体；OPTIONAL。 */
};


/**
 * @brief NRDC_Parameters_v1570
 * @note ASN.1：NRDC-Parameters-v1570；源文件第 18624 行。
 * @note NRDC-Parameters-v1570 ::= SEQUENCE { sfn-SyncNRDC }
 */
struct NRDC_Parameters_v1570 {
    bool has_sfn_SyncNRDC; /**< sfn-SyncNRDC 是否存在。 */
    NRDC_Parameters_v1570_Sfn_SyncNRDC sfn_SyncNRDC; /**< ASN.1 sfn-SyncNRDC；枚举；OPTIONAL。 */
};


/**
 * @brief NRDC_Parameters_v15c0
 * @note ASN.1：NRDC-Parameters-v15c0；源文件第 18628 行。
 * @note NRDC-Parameters-v15c0 ::= SEQUENCE { pdcp-DuplicationSplitSRB, pdcp-DuplicationSplitDRB }
 */
struct NRDC_Parameters_v15c0 {
    bool has_pdcp_DuplicationSplitSRB; /**< pdcp-DuplicationSplitSRB 是否存在。 */
    NRDC_Parameters_v15c0_Pdcp_DuplicationSplitSRB pdcp_DuplicationSplitSRB; /**< ASN.1 pdcp-DuplicationSplitSRB；枚举；OPTIONAL。 */
    bool has_pdcp_DuplicationSplitDRB; /**< pdcp-DuplicationSplitDRB 是否存在。 */
    NRDC_Parameters_v15c0_Pdcp_DuplicationSplitDRB pdcp_DuplicationSplitDRB; /**< ASN.1 pdcp-DuplicationSplitDRB；枚举；OPTIONAL。 */
};


/**
 * @brief NRDC_Parameters_v1610
 * @note ASN.1：NRDC-Parameters-v1610；源文件第 18633 行。
 * @note NRDC-Parameters-v1610 ::= SEQUENCE { measAndMobParametersNRDC-v1610 }
 */
struct NRDC_Parameters_v1610 {
    bool has_measAndMobParametersNRDC_v1610; /**< measAndMobParametersNRDC-v1610 是否存在。 */
    MeasAndMobParametersMRDC_v1610 measAndMobParametersNRDC_v1610; /**< ASN.1 measAndMobParametersNRDC-v1610；结构体；OPTIONAL。 */
};


/**
 * @brief NRDC_Parameters_v1700
 * @note ASN.1：NRDC-Parameters-v1700；源文件第 18637 行。
 * @note NRDC-Parameters-v1700 ::= SEQUENCE { f1c-OverNR-RRC-r17, measAndMobParametersNRDC-v1700 }
 */
struct NRDC_Parameters_v1700 {
    bool has_f1c_OverNR_RRC_r17; /**< f1c-OverNR-RRC-r17 是否存在。 */
    NRDC_Parameters_v1700_F1c_OverNR_RRC_r17 f1c_OverNR_RRC_r17; /**< ASN.1 f1c-OverNR-RRC-r17；枚举；OPTIONAL。 */
    MeasAndMobParametersMRDC_v1700 measAndMobParametersNRDC_v1700; /**< ASN.1 measAndMobParametersNRDC-v1700；结构体。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup8
 * @note ASN.1：Phy_ParametersCommon_ExtGroup8；源文件第 18895 行。
 */
struct Phy_ParametersCommon_ExtGroup8 {
    bool has_mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16; /**< mux-HARQ-ACK-withoutPUCCH-onPUSCH-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup8_Mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16 mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16; /**< ASN.1 mux-HARQ-ACK-withoutPUCCH-onPUSCH-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17
 * @note ASN.1：sps-HARQ-ACK-Deferral-r17；源文件第 18920 行。
 * @note SEQUENCE { non-SharedSpectrumChAccess-r17, sharedSpectrumChAccess-r17 }
 */
struct Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17 {
    bool has_non_SharedSpectrumChAccess_r17; /**< non-SharedSpectrumChAccess-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_Non_SharedSpectrumChAccess_r17 non_SharedSpectrumChAccess_r17; /**< ASN.1 non-SharedSpectrumChAccess-r17；枚举；OPTIONAL。 */
    bool has_sharedSpectrumChAccess_r17; /**< sharedSpectrumChAccess-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_SharedSpectrumChAccess_r17 sharedSpectrumChAccess_r17; /**< ASN.1 sharedSpectrumChAccess-r17；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup9
 * @note ASN.1：Phy_ParametersCommon_ExtGroup9；源文件第 18898 行。
 */
struct Phy_ParametersCommon_ExtGroup9 {
    bool has_guardSymbolReportReception_IAB_r17; /**< guardSymbolReportReception-IAB-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_GuardSymbolReportReception_IAB_r17 guardSymbolReportReception_IAB_r17; /**< ASN.1 guardSymbolReportReception-IAB-r17；枚举；OPTIONAL。 */
    bool has_restricted_IAB_DU_BeamReception_r17; /**< restricted-IAB-DU-BeamReception-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Restricted_IAB_DU_BeamReception_r17 restricted_IAB_DU_BeamReception_r17; /**< ASN.1 restricted-IAB-DU-BeamReception-r17；枚举；OPTIONAL。 */
    bool has_recommended_IAB_MT_BeamTransmission_r17; /**< recommended-IAB-MT-BeamTransmission-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Recommended_IAB_MT_BeamTransmission_r17 recommended_IAB_MT_BeamTransmission_r17; /**< ASN.1 recommended-IAB-MT-BeamTransmission-r17；枚举；OPTIONAL。 */
    bool has_case6_TimingAlignmentReception_IAB_r17; /**< case6-TimingAlignmentReception-IAB-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Case6_TimingAlignmentReception_IAB_r17 case6_TimingAlignmentReception_IAB_r17; /**< ASN.1 case6-TimingAlignmentReception-IAB-r17；枚举；OPTIONAL。 */
    bool has_case7_TimingAlignmentReception_IAB_r17; /**< case7-TimingAlignmentReception-IAB-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Case7_TimingAlignmentReception_IAB_r17 case7_TimingAlignmentReception_IAB_r17; /**< ASN.1 case7-TimingAlignmentReception-IAB-r17；枚举；OPTIONAL。 */
    bool has_dl_tx_PowerAdjustment_IAB_r17; /**< dl-tx-PowerAdjustment-IAB-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Dl_tx_PowerAdjustment_IAB_r17 dl_tx_PowerAdjustment_IAB_r17; /**< ASN.1 dl-tx-PowerAdjustment-IAB-r17；枚举；OPTIONAL。 */
    bool has_desired_ul_tx_PowerAdjustment_r17; /**< desired-ul-tx-PowerAdjustment-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Desired_ul_tx_PowerAdjustment_r17 desired_ul_tx_PowerAdjustment_r17; /**< ASN.1 desired-ul-tx-PowerAdjustment-r17；枚举；OPTIONAL。 */
    bool has_fdm_SoftResourceAvailability_DynamicIndication_r17; /**< fdm-SoftResourceAvailability-DynamicIndication-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Fdm_SoftResourceAvailability_DynamicIndication_r17 fdm_SoftResourceAvailability_DynamicIndication_r17; /**< ASN.1 fdm-SoftResourceAvailability-DynamicIndication-r17；枚举；OPTIONAL。 */
    bool has_updated_T_DeltaRangeReception_r17; /**< updated-T-DeltaRangeReception-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Updated_T_DeltaRangeReception_r17 updated_T_DeltaRangeReception_r17; /**< ASN.1 updated-T-DeltaRangeReception-r17；枚举；OPTIONAL。 */
    bool has_slotBasedDynamicPUCCH_Rep_r17; /**< slotBasedDynamicPUCCH-Rep-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_SlotBasedDynamicPUCCH_Rep_r17 slotBasedDynamicPUCCH_Rep_r17; /**< ASN.1 slotBasedDynamicPUCCH-Rep-r17；枚举；OPTIONAL。 */
    bool has_sps_HARQ_ACK_Deferral_r17; /**< sps-HARQ-ACK-Deferral-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17 sps_HARQ_ACK_Deferral_r17; /**< ASN.1 sps-HARQ-ACK-Deferral-r17；结构体；OPTIONAL。 */
    bool has_unifiedJointTCI_commonUpdate_r17; /**< unifiedJointTCI-commonUpdate-r17 是否存在。 */
    int64_t unifiedJointTCI_commonUpdate_r17; /**< ASN.1 unifiedJointTCI-commonUpdate-r17；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_mTRP_PDCCH_singleSpan_r17; /**< mTRP-PDCCH-singleSpan-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_MTRP_PDCCH_singleSpan_r17 mTRP_PDCCH_singleSpan_r17; /**< ASN.1 mTRP-PDCCH-singleSpan-r17；枚举；OPTIONAL。 */
    bool has_supportedActivatedPRS_ProcessingWindow_r17; /**< supportedActivatedPRS-ProcessingWindow-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_SupportedActivatedPRS_ProcessingWindow_r17 supportedActivatedPRS_ProcessingWindow_r17; /**< ASN.1 supportedActivatedPRS-ProcessingWindow-r17；枚举；OPTIONAL。 */
    bool has_cg_TimeDomainAllocationExtension_r17; /**< cg-TimeDomainAllocationExtension-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup9_Cg_TimeDomainAllocationExtension_r17 cg_TimeDomainAllocationExtension_r17; /**< ASN.1 cg-TimeDomainAllocationExtension-r17；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup10
 * @note ASN.1：Phy_ParametersCommon_ExtGroup10；源文件第 18932 行。
 */
struct Phy_ParametersCommon_ExtGroup10 {
    bool has_ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17; /**< ta-BasedPDC-TN-NonSharedSpectrumChAccess-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup10_Ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17 ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17; /**< ASN.1 ta-BasedPDC-TN-NonSharedSpectrumChAccess-r17；枚举；OPTIONAL。 */
    bool has_directionalCollisionDC_IAB_r17; /**< directionalCollisionDC-IAB-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup10_DirectionalCollisionDC_IAB_r17 directionalCollisionDC_IAB_r17; /**< ASN.1 directionalCollisionDC-IAB-r17；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup11
 * @note ASN.1：Phy_ParametersCommon_ExtGroup11；源文件第 18938 行。
 */
struct Phy_ParametersCommon_ExtGroup11 {
    bool has_dummy1; /**< dummy1 是否存在。 */
    Phy_ParametersCommon_ExtGroup11_Dummy1 dummy1; /**< ASN.1 dummy1；枚举；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    Phy_ParametersCommon_ExtGroup11_Dummy2 dummy2; /**< ASN.1 dummy2；枚举；OPTIONAL。 */
    bool has_dummy3; /**< dummy3 是否存在。 */
    Phy_ParametersCommon_ExtGroup11_Dummy3 dummy3; /**< ASN.1 dummy3；枚举；OPTIONAL。 */
    bool has_dummy4; /**< dummy4 是否存在。 */
    Phy_ParametersCommon_ExtGroup11_Dummy4 dummy4; /**< ASN.1 dummy4；枚举；OPTIONAL。 */
    bool has_srs_AdditionalRepetition_r17; /**< srs-AdditionalRepetition-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup11_Srs_AdditionalRepetition_r17 srs_AdditionalRepetition_r17; /**< ASN.1 srs-AdditionalRepetition-r17；枚举；OPTIONAL。 */
    bool has_pusch_Repetition_CG_SDT_r17; /**< pusch-Repetition-CG-SDT-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup11_Pusch_Repetition_CG_SDT_r17 pusch_Repetition_CG_SDT_r17; /**< ASN.1 pusch-Repetition-CG-SDT-r17；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup12
 * @note ASN.1：Phy_ParametersCommon_ExtGroup12；源文件第 18946 行。
 */
struct Phy_ParametersCommon_ExtGroup12 {
    bool has_multiPDSCH_PerSlotType1_CB_Support_r17; /**< multiPDSCH-PerSlotType1-CB-Support-r17 是否存在。 */
    Phy_ParametersCommon_ExtGroup12_MultiPDSCH_PerSlotType1_CB_Support_r17 multiPDSCH_PerSlotType1_CB_Support_r17; /**< ASN.1 multiPDSCH-PerSlotType1-CB-Support-r17；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18
 * @note ASN.1：ncr-AperiodicBeamInd-AccessLink-r18；源文件第 18953 行。
 * @note SEQUENCE { scs-15kHz-r18, scs-30kHz-r18, scs-60kHz-r18, scs-120kHz-r18 }
 */
struct Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18 {
    bool has_scs_15kHz_r18; /**< scs-15kHz-r18 是否存在。 */
    int64_t scs_15kHz_r18; /**< ASN.1 scs-15kHz-r18；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    bool has_scs_30kHz_r18; /**< scs-30kHz-r18 是否存在。 */
    int64_t scs_30kHz_r18; /**< ASN.1 scs-30kHz-r18；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    bool has_scs_60kHz_r18; /**< scs-60kHz-r18 是否存在。 */
    int64_t scs_60kHz_r18; /**< ASN.1 scs-60kHz-r18；INTEGER (0..2)，位宽 2 bit；OPTIONAL。 */
    bool has_scs_120kHz_r18; /**< scs-120kHz-r18 是否存在。 */
    int64_t scs_120kHz_r18; /**< ASN.1 scs-120kHz-r18；INTEGER (0..2)，位宽 2 bit；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18
 * @note ASN.1：additionalSR-Periodicities-r18；源文件第 18984 行。
 * @note SEQUENCE { scs-30kHz-r18, scs-120kHz-r18 }
 */
struct Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18 {
    bool has_scs_30kHz_r18; /**< scs-30kHz-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_30kHz_r18 scs_30kHz_r18; /**< ASN.1 scs-30kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r18; /**< scs-120kHz-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_120kHz_r18 scs_120kHz_r18; /**< ASN.1 scs-120kHz-r18；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup13
 * @note ASN.1：Phy_ParametersCommon_ExtGroup13；源文件第 18949 行。
 */
struct Phy_ParametersCommon_ExtGroup13 {
    bool has_jointPowerSpatialAdaptation_r18; /**< jointPowerSpatialAdaptation-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_JointPowerSpatialAdaptation_r18 jointPowerSpatialAdaptation_r18; /**< ASN.1 jointPowerSpatialAdaptation-r18；枚举；OPTIONAL。 */
    bool has_ncr_AperiodicBeamInd_AccessLink_r18; /**< ncr-AperiodicBeamInd-AccessLink-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18 ncr_AperiodicBeamInd_AccessLink_r18; /**< ASN.1 ncr-AperiodicBeamInd-AccessLink-r18；结构体；OPTIONAL。 */
    bool has_ncr_Semi_PersistentBeamInd_AccessLink_r18; /**< ncr-Semi-PersistentBeamInd-AccessLink-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_Ncr_Semi_PersistentBeamInd_AccessLink_r18 ncr_Semi_PersistentBeamInd_AccessLink_r18; /**< ASN.1 ncr-Semi-PersistentBeamInd-AccessLink-r18；枚举；OPTIONAL。 */
    bool has_ncr_SimultaneousUL_BackhaulAndC_Link_r18; /**< ncr-SimultaneousUL-BackhaulAndC-Link-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_Ncr_SimultaneousUL_BackhaulAndC_Link_r18 ncr_SimultaneousUL_BackhaulAndC_Link_r18; /**< ASN.1 ncr-SimultaneousUL-BackhaulAndC-Link-r18；枚举；OPTIONAL。 */
    bool has_ncr_BackhaulBeamInd_r18; /**< ncr-BackhaulBeamInd-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_Ncr_BackhaulBeamInd_r18 ncr_BackhaulBeamInd_r18; /**< ASN.1 ncr-BackhaulBeamInd-r18；枚举；OPTIONAL。 */
    bool has_ncr_AdaptiveBeamBackhaulAndC_Link_r18; /**< ncr-AdaptiveBeamBackhaulAndC-Link-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_Ncr_AdaptiveBeamBackhaulAndC_Link_r18 ncr_AdaptiveBeamBackhaulAndC_Link_r18; /**< ASN.1 ncr-AdaptiveBeamBackhaulAndC-Link-r18；枚举；OPTIONAL。 */
    bool has_nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18; /**< nominalRBG-SizeOfConfig-3-FDRA-Type-0-DCI-1-3-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18 nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18; /**< ASN.1 nominalRBG-SizeOfConfig-3-FDRA-Type-0-DCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18; /**< nominalRBG-SizeOfConfig-3-FDRA-Type-0-DCI-0-3-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18 nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18; /**< ASN.1 nominalRBG-SizeOfConfig-3-FDRA-Type-0-DCI-0-3-r18；枚举；OPTIONAL。 */
    bool has_configurableType_1A_FieldsForDCI_0_3_And_1_3_r18; /**< configurableType-1A-FieldsForDCI-0-3-And-1-3-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_ConfigurableType_1A_FieldsForDCI_0_3_And_1_3_r18 configurableType_1A_FieldsForDCI_0_3_And_1_3_r18; /**< ASN.1 configurableType-1A-FieldsForDCI-0-3-And-1-3-r18；枚举；OPTIONAL。 */
    bool has_fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18; /**< fdra-Type-1-Gty-2-4-8-16-RBs-RIV-DCI-1-3-And-0-3-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_Fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18 fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18; /**< ASN.1 fdra-Type-1-Gty-2-4-8-16-RBs-RIV-DCI-1-3-And-0-3-r18；枚举；OPTIONAL。 */
    bool has_multiPUSCH_DCI_0_1_r18; /**< multiPUSCH-DCI-0-1-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_1_r18 multiPUSCH_DCI_0_1_r18; /**< ASN.1 multiPUSCH-DCI-0-1-r18；枚举；OPTIONAL。 */
    bool has_multiPUSCH_DCI_0_2_r18; /**< multiPUSCH-DCI-0-2-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_2_r18 multiPUSCH_DCI_0_2_r18; /**< ASN.1 multiPUSCH-DCI-0-2-r18；枚举；OPTIONAL。 */
    bool has_support_5MHz_ChannelBW_20PRB_CORESET0_r18; /**< support-5MHz-ChannelBW-20PRB-CORESET0-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_Support_5MHz_ChannelBW_20PRB_CORESET0_r18 support_5MHz_ChannelBW_20PRB_CORESET0_r18; /**< ASN.1 support-5MHz-ChannelBW-20PRB-CORESET0-r18；枚举；OPTIONAL。 */
    bool has_additionalSR_Periodicities_r18; /**< additionalSR-Periodicities-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18 additionalSR_Periodicities_r18; /**< ASN.1 additionalSR-Periodicities-r18；结构体；OPTIONAL。 */
    bool has_pathlossRS_UpdateForType1CG_PUSCH_r18; /**< pathlossRS-UpdateForType1CG-PUSCH-r18 是否存在。 */
    Phy_ParametersCommon_ExtGroup13_PathlossRS_UpdateForType1CG_PUSCH_r18 pathlossRS_UpdateForType1CG_PUSCH_r18; /**< ASN.1 pathlossRS-UpdateForType1CG-PUSCH-r18；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup1
 * @note ASN.1：Phy_ParametersCommon_ExtGroup1；源文件第 18786 行。
 */
struct Phy_ParametersCommon_ExtGroup1 {
    bool has_dummy; /**< dummy 是否存在。 */
    Phy_ParametersCommon_ExtGroup1_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup2
 * @note ASN.1：Phy_ParametersCommon_ExtGroup2；源文件第 18789 行。
 */
struct Phy_ParametersCommon_ExtGroup2 {
    bool has_maxNumberSearchSpaces; /**< maxNumberSearchSpaces 是否存在。 */
    Phy_ParametersCommon_ExtGroup2_MaxNumberSearchSpaces maxNumberSearchSpaces; /**< ASN.1 maxNumberSearchSpaces；枚举；OPTIONAL。 */
    bool has_rateMatchingCtrlResrcSetDynamic; /**< rateMatchingCtrlResrcSetDynamic 是否存在。 */
    Phy_ParametersCommon_ExtGroup2_RateMatchingCtrlResrcSetDynamic rateMatchingCtrlResrcSetDynamic; /**< ASN.1 rateMatchingCtrlResrcSetDynamic；枚举；OPTIONAL。 */
    bool has_maxLayersMIMO_Indication; /**< maxLayersMIMO-Indication 是否存在。 */
    Phy_ParametersCommon_ExtGroup2_MaxLayersMIMO_Indication maxLayersMIMO_Indication; /**< ASN.1 maxLayersMIMO-Indication；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup3
 * @note ASN.1：Phy_ParametersCommon_ExtGroup3；源文件第 18794 行。
 */
struct Phy_ParametersCommon_ExtGroup3 {
    bool has_spCellPlacement; /**< spCellPlacement 是否存在。 */
    CarrierAggregationVariant spCellPlacement; /**< ASN.1 spCellPlacement；结构体；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16
 * @note ASN.1：crossSlotScheduling-r16；源文件第 18832 行。
 * @note SEQUENCE { non-SharedSpectrumChAccess-r16, sharedSpectrumChAccess-r16 }
 */
struct Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16 {
    bool has_non_SharedSpectrumChAccess_r16; /**< non-SharedSpectrumChAccess-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_Non_SharedSpectrumChAccess_r16 non_SharedSpectrumChAccess_r16; /**< ASN.1 non-SharedSpectrumChAccess-r16；枚举；OPTIONAL。 */
    bool has_sharedSpectrumChAccess_r16; /**< sharedSpectrumChAccess-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_SharedSpectrumChAccess_r16 sharedSpectrumChAccess_r16; /**< ASN.1 sharedSpectrumChAccess-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16
 * @note ASN.1：pusch-RepetitionTypeA-r16；源文件第 18841 行。
 * @note SEQUENCE { sharedSpectrumChAccess-r16, non-SharedSpectrumChAccess-r16 }
 */
struct Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16 {
    bool has_sharedSpectrumChAccess_r16; /**< sharedSpectrumChAccess-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_SharedSpectrumChAccess_r16 sharedSpectrumChAccess_r16; /**< ASN.1 sharedSpectrumChAccess-r16；枚举；OPTIONAL。 */
    bool has_non_SharedSpectrumChAccess_r16; /**< non-SharedSpectrumChAccess-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_Non_SharedSpectrumChAccess_r16 non_SharedSpectrumChAccess_r16; /**< ASN.1 non-SharedSpectrumChAccess-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16
 * @note ASN.1：maxTotalResourcesForAcrossFreqRanges-r16；源文件第 18855 行。
 * @note SEQUENCE { maxNumberResWithinSlotAcrossCC-AcrossFR-r16, maxNumberResAcrossCC-...
 */
struct Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16 {
    bool has_maxNumberResWithinSlotAcrossCC_AcrossFR_r16; /**< maxNumberResWithinSlotAcrossCC-AcrossFR-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16 maxNumberResWithinSlotAcrossCC_AcrossFR_r16; /**< ASN.1 maxNumberResWithinSlotAcrossCC-AcrossFR-r16；枚举；OPTIONAL。 */
    bool has_maxNumberResAcrossCC_AcrossFR_r16; /**< maxNumberResAcrossCC-AcrossFR-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16 maxNumberResAcrossCC_AcrossFR_r16; /**< ASN.1 maxNumberResAcrossCC-AcrossFR-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16
 * @note ASN.1：harqACK-separateMultiDCI-MultiTRP-r16；源文件第 18861 行。
 * @note SEQUENCE { maxNumberLongPUCCHs-r16 }
 */
struct Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16 {
    bool has_maxNumberLongPUCCHs_r16; /**< maxNumberLongPUCCHs-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16_MaxNumberLongPUCCHs_r16 maxNumberLongPUCCHs_r16; /**< ASN.1 maxNumberLongPUCCHs-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16
 * @note ASN.1：bwp-SwitchingMultiCCs-r16；源文件第 18867 行。
 * @note CHOICE { type1-r16, type2-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag {
    Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag_type1_r16 = 0, /**< ASN.1 type1-r16 */
    Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag_type2_r16 = 1, /**< ASN.1 type2-r16 */
} Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag;

struct Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16 {
    Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type1_r16 type1_r16; /**< ASN.1 type1-r16 */
        Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type2_r16 type2_r16; /**< ASN.1 type2-r16 */
    } u;
};


/**
 * @brief Phy_ParametersCommon_ExtGroup4
 * @note ASN.1：Phy_ParametersCommon_ExtGroup4；源文件第 18797 行。
 */
struct Phy_ParametersCommon_ExtGroup4 {
    bool has_twoStepRACH_r16; /**< twoStepRACH-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_TwoStepRACH_r16 twoStepRACH_r16; /**< ASN.1 twoStepRACH-r16；枚举；OPTIONAL。 */
    bool has_dci_Format1_2And0_2_r16; /**< dci-Format1-2And0-2-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Dci_Format1_2And0_2_r16 dci_Format1_2And0_2_r16; /**< ASN.1 dci-Format1-2And0-2-r16；枚举；OPTIONAL。 */
    bool has_monitoringDCI_SameSearchSpace_r16; /**< monitoringDCI-SameSearchSpace-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_MonitoringDCI_SameSearchSpace_r16 monitoringDCI_SameSearchSpace_r16; /**< ASN.1 monitoringDCI-SameSearchSpace-r16；枚举；OPTIONAL。 */
    bool has_type2_CG_ReleaseDCI_0_1_r16; /**< type2-CG-ReleaseDCI-0-1-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_1_r16 type2_CG_ReleaseDCI_0_1_r16; /**< ASN.1 type2-CG-ReleaseDCI-0-1-r16；枚举；OPTIONAL。 */
    bool has_type2_CG_ReleaseDCI_0_2_r16; /**< type2-CG-ReleaseDCI-0-2-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_2_r16 type2_CG_ReleaseDCI_0_2_r16; /**< ASN.1 type2-CG-ReleaseDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_sps_ReleaseDCI_1_1_r16; /**< sps-ReleaseDCI-1-1-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_1_r16 sps_ReleaseDCI_1_1_r16; /**< ASN.1 sps-ReleaseDCI-1-1-r16；枚举；OPTIONAL。 */
    bool has_sps_ReleaseDCI_1_2_r16; /**< sps-ReleaseDCI-1-2-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_2_r16 sps_ReleaseDCI_1_2_r16; /**< ASN.1 sps-ReleaseDCI-1-2-r16；枚举；OPTIONAL。 */
    bool has_csi_TriggerStateNon_ActiveBWP_r16; /**< csi-TriggerStateNon-ActiveBWP-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Csi_TriggerStateNon_ActiveBWP_r16 csi_TriggerStateNon_ActiveBWP_r16; /**< ASN.1 csi-TriggerStateNon-ActiveBWP-r16；枚举；OPTIONAL。 */
    bool has_separateSMTC_InterIAB_Support_r16; /**< separateSMTC-InterIAB-Support-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_SeparateSMTC_InterIAB_Support_r16 separateSMTC_InterIAB_Support_r16; /**< ASN.1 separateSMTC-InterIAB-Support-r16；枚举；OPTIONAL。 */
    bool has_separateRACH_IAB_Support_r16; /**< separateRACH-IAB-Support-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_SeparateRACH_IAB_Support_r16 separateRACH_IAB_Support_r16; /**< ASN.1 separateRACH-IAB-Support-r16；枚举；OPTIONAL。 */
    bool has_ul_flexibleDL_SlotFormatSemiStatic_IAB_r16; /**< ul-flexibleDL-SlotFormatSemiStatic-IAB-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatSemiStatic_IAB_r16 ul_flexibleDL_SlotFormatSemiStatic_IAB_r16; /**< ASN.1 ul-flexibleDL-SlotFormatSemiStatic-IAB-r16；枚举；OPTIONAL。 */
    bool has_ul_flexibleDL_SlotFormatDynamics_IAB_r16; /**< ul-flexibleDL-SlotFormatDynamics-IAB-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatDynamics_IAB_r16 ul_flexibleDL_SlotFormatDynamics_IAB_r16; /**< ASN.1 ul-flexibleDL-SlotFormatDynamics-IAB-r16；枚举；OPTIONAL。 */
    bool has_dft_S_OFDM_WaveformUL_IAB_r16; /**< dft-S-OFDM-WaveformUL-IAB-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Dft_S_OFDM_WaveformUL_IAB_r16 dft_S_OFDM_WaveformUL_IAB_r16; /**< ASN.1 dft-S-OFDM-WaveformUL-IAB-r16；枚举；OPTIONAL。 */
    bool has_dci_25_AI_RNTI_Support_IAB_r16; /**< dci-25-AI-RNTI-Support-IAB-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Dci_25_AI_RNTI_Support_IAB_r16 dci_25_AI_RNTI_Support_IAB_r16; /**< ASN.1 dci-25-AI-RNTI-Support-IAB-r16；枚举；OPTIONAL。 */
    bool has_t_DeltaReceptionSupport_IAB_r16; /**< t-DeltaReceptionSupport-IAB-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_T_DeltaReceptionSupport_IAB_r16 t_DeltaReceptionSupport_IAB_r16; /**< ASN.1 t-DeltaReceptionSupport-IAB-r16；枚举；OPTIONAL。 */
    bool has_guardSymbolReportReception_IAB_r16; /**< guardSymbolReportReception-IAB-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_GuardSymbolReportReception_IAB_r16 guardSymbolReportReception_IAB_r16; /**< ASN.1 guardSymbolReportReception-IAB-r16；枚举；OPTIONAL。 */
    bool has_harqACK_CB_SpatialBundlingPUCCH_Group_r16; /**< harqACK-CB-SpatialBundlingPUCCH-Group-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_HarqACK_CB_SpatialBundlingPUCCH_Group_r16 harqACK_CB_SpatialBundlingPUCCH_Group_r16; /**< ASN.1 harqACK-CB-SpatialBundlingPUCCH-Group-r16；枚举；OPTIONAL。 */
    bool has_crossSlotScheduling_r16; /**< crossSlotScheduling-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16 crossSlotScheduling_r16; /**< ASN.1 crossSlotScheduling-r16；结构体；OPTIONAL。 */
    bool has_maxNumberSRS_PosPathLossEstimateAllServingCells_r16; /**< maxNumberSRS-PosPathLossEstimateAllServingCells-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_MaxNumberSRS_PosPathLossEstimateAllServingCells_r16 maxNumberSRS_PosPathLossEstimateAllServingCells_r16; /**< ASN.1 maxNumberSRS-PosPathLossEstimateAllServingCells-r16；枚举；OPTIONAL。 */
    bool has_extendedCG_Periodicities_r16; /**< extendedCG-Periodicities-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_ExtendedCG_Periodicities_r16 extendedCG_Periodicities_r16; /**< ASN.1 extendedCG-Periodicities-r16；枚举；OPTIONAL。 */
    bool has_extendedSPS_Periodicities_r16; /**< extendedSPS-Periodicities-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_ExtendedSPS_Periodicities_r16 extendedSPS_Periodicities_r16; /**< ASN.1 extendedSPS-Periodicities-r16；枚举；OPTIONAL。 */
    bool has_codebookVariantsList_r16; /**< codebookVariantsList-r16 是否存在。 */
    CodebookVariantsList_r16 codebookVariantsList_r16; /**< ASN.1 codebookVariantsList-r16；SEQUENCE OF SupportedCSI_RS_Resource，SIZE (1..512)；OPTIONAL。 */
    bool has_pusch_RepetitionTypeA_r16; /**< pusch-RepetitionTypeA-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16 pusch_RepetitionTypeA_r16; /**< ASN.1 pusch-RepetitionTypeA-r16；结构体；OPTIONAL。 */
    bool has_dci_DL_PriorityIndicator_r16; /**< dci-DL-PriorityIndicator-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Dci_DL_PriorityIndicator_r16 dci_DL_PriorityIndicator_r16; /**< ASN.1 dci-DL-PriorityIndicator-r16；枚举；OPTIONAL。 */
    bool has_dci_UL_PriorityIndicator_r16; /**< dci-UL-PriorityIndicator-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Dci_UL_PriorityIndicator_r16 dci_UL_PriorityIndicator_r16; /**< ASN.1 dci-UL-PriorityIndicator-r16；枚举；OPTIONAL。 */
    bool has_maxNumberPathlossRS_Update_r16; /**< maxNumberPathlossRS-Update-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_MaxNumberPathlossRS_Update_r16 maxNumberPathlossRS_Update_r16; /**< ASN.1 maxNumberPathlossRS-Update-r16；枚举；OPTIONAL。 */
    bool has_type2_HARQ_ACK_Codebook_r16; /**< type2-HARQ-ACK-Codebook-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Type2_HARQ_ACK_Codebook_r16 type2_HARQ_ACK_Codebook_r16; /**< ASN.1 type2-HARQ-ACK-Codebook-r16；枚举；OPTIONAL。 */
    bool has_maxTotalResourcesForAcrossFreqRanges_r16; /**< maxTotalResourcesForAcrossFreqRanges-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16 maxTotalResourcesForAcrossFreqRanges_r16; /**< ASN.1 maxTotalResourcesForAcrossFreqRanges-r16；结构体；OPTIONAL。 */
    bool has_harqACK_separateMultiDCI_MultiTRP_r16; /**< harqACK-separateMultiDCI-MultiTRP-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16 harqACK_separateMultiDCI_MultiTRP_r16; /**< ASN.1 harqACK-separateMultiDCI-MultiTRP-r16；结构体；OPTIONAL。 */
    bool has_harqACK_jointMultiDCI_MultiTRP_r16; /**< harqACK-jointMultiDCI-MultiTRP-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_HarqACK_jointMultiDCI_MultiTRP_r16 harqACK_jointMultiDCI_MultiTRP_r16; /**< ASN.1 harqACK-jointMultiDCI-MultiTRP-r16；枚举；OPTIONAL。 */
    bool has_bwp_SwitchingMultiCCs_r16; /**< bwp-SwitchingMultiCCs-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16 bwp_SwitchingMultiCCs_r16; /**< ASN.1 bwp-SwitchingMultiCCs-r16；结构体；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup5
 * @note ASN.1：Phy_ParametersCommon_ExtGroup5；源文件第 18872 行。
 */
struct Phy_ParametersCommon_ExtGroup5 {
    bool has_targetSMTC_SCG_r16; /**< targetSMTC-SCG-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup5_TargetSMTC_SCG_r16 targetSMTC_SCG_r16; /**< ASN.1 targetSMTC-SCG-r16；枚举；OPTIONAL。 */
    bool has_supportRepetitionZeroOffsetRV_r16; /**< supportRepetitionZeroOffsetRV-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup5_SupportRepetitionZeroOffsetRV_r16 supportRepetitionZeroOffsetRV_r16; /**< ASN.1 supportRepetitionZeroOffsetRV-r16；枚举；OPTIONAL。 */
    bool has_cbg_TransInOrderPUSCH_UL_r16; /**< cbg-TransInOrderPUSCH-UL-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup5_Cbg_TransInOrderPUSCH_UL_r16 cbg_TransInOrderPUSCH_UL_r16; /**< ASN.1 cbg-TransInOrderPUSCH-UL-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16
 * @note ASN.1：bwp-SwitchingMultiDormancyCCs-r16；源文件第 18880 行。
 * @note CHOICE { type1-r16, type2-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag {
    Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag_type1_r16 = 0, /**< ASN.1 type1-r16 */
    Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag_type2_r16 = 1, /**< ASN.1 type2-r16 */
} Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag;

struct Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16 {
    Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type1_r16 type1_r16; /**< ASN.1 type1-r16 */
        Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type2_r16 type2_r16; /**< ASN.1 type2-r16 */
    } u;
};


/**
 * @brief Phy_ParametersCommon_ExtGroup6
 * @note ASN.1：Phy_ParametersCommon_ExtGroup6；源文件第 18878 行。
 */
struct Phy_ParametersCommon_ExtGroup6 {
    bool has_bwp_SwitchingMultiDormancyCCs_r16; /**< bwp-SwitchingMultiDormancyCCs-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16 bwp_SwitchingMultiDormancyCCs_r16; /**< ASN.1 bwp-SwitchingMultiDormancyCCs-r16；结构体；OPTIONAL。 */
    bool has_supportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16; /**< supportRetx-Diff-CoresetPool-Multi-DCI-TRP-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup6_SupportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16 supportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16; /**< ASN.1 supportRetx-Diff-CoresetPool-Multi-DCI-TRP-r16；枚举；OPTIONAL。 */
    bool has_pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16; /**< pdcch-MonitoringAnyOccasionsWithSpanGapCrossCarrierSch-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup6_Pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16 pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16; /**< ASN.1 pdcch-MonitoringAnyOccasionsWithSpanGapCrossCarrierSch-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_ExtGroup7
 * @note ASN.1：Phy_ParametersCommon_ExtGroup7；源文件第 18889 行。
 */
struct Phy_ParametersCommon_ExtGroup7 {
    bool has_newBeamIdentifications2PortCSI_RS_r16; /**< newBeamIdentifications2PortCSI-RS-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup7_NewBeamIdentifications2PortCSI_RS_r16 newBeamIdentifications2PortCSI_RS_r16; /**< ASN.1 newBeamIdentifications2PortCSI-RS-r16；枚举；OPTIONAL。 */
    bool has_pathlossEstimation2PortCSI_RS_r16; /**< pathlossEstimation2PortCSI-RS-r16 是否存在。 */
    Phy_ParametersCommon_ExtGroup7_PathlossEstimation2PortCSI_RS_r16 pathlossEstimation2PortCSI_RS_r16; /**< ASN.1 pathlossEstimation2PortCSI-RS-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon
 * @note ASN.1：Phy-ParametersCommon；源文件第 18750 行。
 * @note Phy-ParametersCommon ::= SEQUENCE { csi-RS-CFRA-ForHO, dynamicPRB-BundlingDL, sp-CSI-ReportPUCCH, sp-C...
 */
struct Phy_ParametersCommon {
    bool has_csi_RS_CFRA_ForHO; /**< csi-RS-CFRA-ForHO 是否存在。 */
    Phy_ParametersCommon_Csi_RS_CFRA_ForHO csi_RS_CFRA_ForHO; /**< ASN.1 csi-RS-CFRA-ForHO；枚举；OPTIONAL。 */
    bool has_dynamicPRB_BundlingDL; /**< dynamicPRB-BundlingDL 是否存在。 */
    Phy_ParametersCommon_DynamicPRB_BundlingDL dynamicPRB_BundlingDL; /**< ASN.1 dynamicPRB-BundlingDL；枚举；OPTIONAL。 */
    bool has_sp_CSI_ReportPUCCH; /**< sp-CSI-ReportPUCCH 是否存在。 */
    Phy_ParametersCommon_Sp_CSI_ReportPUCCH sp_CSI_ReportPUCCH; /**< ASN.1 sp-CSI-ReportPUCCH；枚举；OPTIONAL。 */
    bool has_sp_CSI_ReportPUSCH; /**< sp-CSI-ReportPUSCH 是否存在。 */
    Phy_ParametersCommon_Sp_CSI_ReportPUSCH sp_CSI_ReportPUSCH; /**< ASN.1 sp-CSI-ReportPUSCH；枚举；OPTIONAL。 */
    bool has_nzp_CSI_RS_IntefMgmt; /**< nzp-CSI-RS-IntefMgmt 是否存在。 */
    Phy_ParametersCommon_Nzp_CSI_RS_IntefMgmt nzp_CSI_RS_IntefMgmt; /**< ASN.1 nzp-CSI-RS-IntefMgmt；枚举；OPTIONAL。 */
    bool has_type2_SP_CSI_Feedback_LongPUCCH; /**< type2-SP-CSI-Feedback-LongPUCCH 是否存在。 */
    Phy_ParametersCommon_Type2_SP_CSI_Feedback_LongPUCCH type2_SP_CSI_Feedback_LongPUCCH; /**< ASN.1 type2-SP-CSI-Feedback-LongPUCCH；枚举；OPTIONAL。 */
    bool has_precoderGranularityCORESET; /**< precoderGranularityCORESET 是否存在。 */
    Phy_ParametersCommon_PrecoderGranularityCORESET precoderGranularityCORESET; /**< ASN.1 precoderGranularityCORESET；枚举；OPTIONAL。 */
    bool has_dynamicHARQ_ACK_Codebook; /**< dynamicHARQ-ACK-Codebook 是否存在。 */
    Phy_ParametersCommon_DynamicHARQ_ACK_Codebook dynamicHARQ_ACK_Codebook; /**< ASN.1 dynamicHARQ-ACK-Codebook；枚举；OPTIONAL。 */
    bool has_semiStaticHARQ_ACK_Codebook; /**< semiStaticHARQ-ACK-Codebook 是否存在。 */
    Phy_ParametersCommon_SemiStaticHARQ_ACK_Codebook semiStaticHARQ_ACK_Codebook; /**< ASN.1 semiStaticHARQ-ACK-Codebook；枚举；OPTIONAL。 */
    bool has_spatialBundlingHARQ_ACK; /**< spatialBundlingHARQ-ACK 是否存在。 */
    Phy_ParametersCommon_SpatialBundlingHARQ_ACK spatialBundlingHARQ_ACK; /**< ASN.1 spatialBundlingHARQ-ACK；枚举；OPTIONAL。 */
    bool has_dynamicBetaOffsetInd_HARQ_ACK_CSI; /**< dynamicBetaOffsetInd-HARQ-ACK-CSI 是否存在。 */
    Phy_ParametersCommon_DynamicBetaOffsetInd_HARQ_ACK_CSI dynamicBetaOffsetInd_HARQ_ACK_CSI; /**< ASN.1 dynamicBetaOffsetInd-HARQ-ACK-CSI；枚举；OPTIONAL。 */
    bool has_pucch_Repetition_F1_3_4; /**< pucch-Repetition-F1-3-4 是否存在。 */
    Phy_ParametersCommon_Pucch_Repetition_F1_3_4 pucch_Repetition_F1_3_4; /**< ASN.1 pucch-Repetition-F1-3-4；枚举；OPTIONAL。 */
    bool has_ra_Type0_PUSCH; /**< ra-Type0-PUSCH 是否存在。 */
    Phy_ParametersCommon_Ra_Type0_PUSCH ra_Type0_PUSCH; /**< ASN.1 ra-Type0-PUSCH；枚举；OPTIONAL。 */
    bool has_dynamicSwitchRA_Type0_1_PDSCH; /**< dynamicSwitchRA-Type0-1-PDSCH 是否存在。 */
    Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PDSCH dynamicSwitchRA_Type0_1_PDSCH; /**< ASN.1 dynamicSwitchRA-Type0-1-PDSCH；枚举；OPTIONAL。 */
    bool has_dynamicSwitchRA_Type0_1_PUSCH; /**< dynamicSwitchRA-Type0-1-PUSCH 是否存在。 */
    Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PUSCH dynamicSwitchRA_Type0_1_PUSCH; /**< ASN.1 dynamicSwitchRA-Type0-1-PUSCH；枚举；OPTIONAL。 */
    bool has_pdsch_MappingTypeA; /**< pdsch-MappingTypeA 是否存在。 */
    Phy_ParametersCommon_Pdsch_MappingTypeA pdsch_MappingTypeA; /**< ASN.1 pdsch-MappingTypeA；枚举；OPTIONAL。 */
    bool has_pdsch_MappingTypeB; /**< pdsch-MappingTypeB 是否存在。 */
    Phy_ParametersCommon_Pdsch_MappingTypeB pdsch_MappingTypeB; /**< ASN.1 pdsch-MappingTypeB；枚举；OPTIONAL。 */
    bool has_interleavingVRB_ToPRB_PDSCH; /**< interleavingVRB-ToPRB-PDSCH 是否存在。 */
    Phy_ParametersCommon_InterleavingVRB_ToPRB_PDSCH interleavingVRB_ToPRB_PDSCH; /**< ASN.1 interleavingVRB-ToPRB-PDSCH；枚举；OPTIONAL。 */
    bool has_interSlotFreqHopping_PUSCH; /**< interSlotFreqHopping-PUSCH 是否存在。 */
    Phy_ParametersCommon_InterSlotFreqHopping_PUSCH interSlotFreqHopping_PUSCH; /**< ASN.1 interSlotFreqHopping-PUSCH；枚举；OPTIONAL。 */
    bool has_type1_PUSCH_RepetitionMultiSlots; /**< type1-PUSCH-RepetitionMultiSlots 是否存在。 */
    Phy_ParametersCommon_Type1_PUSCH_RepetitionMultiSlots type1_PUSCH_RepetitionMultiSlots; /**< ASN.1 type1-PUSCH-RepetitionMultiSlots；枚举；OPTIONAL。 */
    bool has_type2_PUSCH_RepetitionMultiSlots; /**< type2-PUSCH-RepetitionMultiSlots 是否存在。 */
    Phy_ParametersCommon_Type2_PUSCH_RepetitionMultiSlots type2_PUSCH_RepetitionMultiSlots; /**< ASN.1 type2-PUSCH-RepetitionMultiSlots；枚举；OPTIONAL。 */
    bool has_pusch_RepetitionMultiSlots; /**< pusch-RepetitionMultiSlots 是否存在。 */
    Phy_ParametersCommon_Pusch_RepetitionMultiSlots pusch_RepetitionMultiSlots; /**< ASN.1 pusch-RepetitionMultiSlots；枚举；OPTIONAL。 */
    bool has_pdsch_RepetitionMultiSlots; /**< pdsch-RepetitionMultiSlots 是否存在。 */
    Phy_ParametersCommon_Pdsch_RepetitionMultiSlots pdsch_RepetitionMultiSlots; /**< ASN.1 pdsch-RepetitionMultiSlots；枚举；OPTIONAL。 */
    bool has_downlinkSPS; /**< downlinkSPS 是否存在。 */
    Phy_ParametersCommon_DownlinkSPS downlinkSPS; /**< ASN.1 downlinkSPS；枚举；OPTIONAL。 */
    bool has_configuredUL_GrantType1; /**< configuredUL-GrantType1 是否存在。 */
    Phy_ParametersCommon_ConfiguredUL_GrantType1 configuredUL_GrantType1; /**< ASN.1 configuredUL-GrantType1；枚举；OPTIONAL。 */
    bool has_configuredUL_GrantType2; /**< configuredUL-GrantType2 是否存在。 */
    Phy_ParametersCommon_ConfiguredUL_GrantType2 configuredUL_GrantType2; /**< ASN.1 configuredUL-GrantType2；枚举；OPTIONAL。 */
    bool has_pre_EmptIndication_DL; /**< pre-EmptIndication-DL 是否存在。 */
    Phy_ParametersCommon_Pre_EmptIndication_DL pre_EmptIndication_DL; /**< ASN.1 pre-EmptIndication-DL；枚举；OPTIONAL。 */
    bool has_cbg_TransIndication_DL; /**< cbg-TransIndication-DL 是否存在。 */
    Phy_ParametersCommon_Cbg_TransIndication_DL cbg_TransIndication_DL; /**< ASN.1 cbg-TransIndication-DL；枚举；OPTIONAL。 */
    bool has_cbg_TransIndication_UL; /**< cbg-TransIndication-UL 是否存在。 */
    Phy_ParametersCommon_Cbg_TransIndication_UL cbg_TransIndication_UL; /**< ASN.1 cbg-TransIndication-UL；枚举；OPTIONAL。 */
    bool has_cbg_FlushIndication_DL; /**< cbg-FlushIndication-DL 是否存在。 */
    Phy_ParametersCommon_Cbg_FlushIndication_DL cbg_FlushIndication_DL; /**< ASN.1 cbg-FlushIndication-DL；枚举；OPTIONAL。 */
    bool has_dynamicHARQ_ACK_CodeB_CBG_Retx_DL; /**< dynamicHARQ-ACK-CodeB-CBG-Retx-DL 是否存在。 */
    Phy_ParametersCommon_DynamicHARQ_ACK_CodeB_CBG_Retx_DL dynamicHARQ_ACK_CodeB_CBG_Retx_DL; /**< ASN.1 dynamicHARQ-ACK-CodeB-CBG-Retx-DL；枚举；OPTIONAL。 */
    bool has_rateMatchingResrcSetSemi_Static; /**< rateMatchingResrcSetSemi-Static 是否存在。 */
    Phy_ParametersCommon_RateMatchingResrcSetSemi_Static rateMatchingResrcSetSemi_Static; /**< ASN.1 rateMatchingResrcSetSemi-Static；枚举；OPTIONAL。 */
    bool has_rateMatchingResrcSetDynamic; /**< rateMatchingResrcSetDynamic 是否存在。 */
    Phy_ParametersCommon_RateMatchingResrcSetDynamic rateMatchingResrcSetDynamic; /**< ASN.1 rateMatchingResrcSetDynamic；枚举；OPTIONAL。 */
    bool has_bwp_SwitchingDelay; /**< bwp-SwitchingDelay 是否存在。 */
    Phy_ParametersCommon_Bwp_SwitchingDelay bwp_SwitchingDelay; /**< ASN.1 bwp-SwitchingDelay；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    Phy_ParametersCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    Phy_ParametersCommon_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    Phy_ParametersCommon_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    Phy_ParametersCommon_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    Phy_ParametersCommon_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    Phy_ParametersCommon_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    Phy_ParametersCommon_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup8; /**< 第 8 组是否出现。 */
    Phy_ParametersCommon_ExtGroup8 extGroup8; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup9; /**< 第 9 组是否出现。 */
    Phy_ParametersCommon_ExtGroup9 extGroup9; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup10; /**< 第 10 组是否出现。 */
    Phy_ParametersCommon_ExtGroup10 extGroup10; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup11; /**< 第 11 组是否出现。 */
    Phy_ParametersCommon_ExtGroup11 extGroup11; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup12; /**< 第 12 组是否出现。 */
    Phy_ParametersCommon_ExtGroup12 extGroup12; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup13; /**< 第 13 组是否出现。 */
    Phy_ParametersCommon_ExtGroup13 extGroup13; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief Phy_ParametersXDD_Diff_ExtGroup1
 * @note ASN.1：Phy_ParametersXDD_Diff_ExtGroup1；源文件第 19003 行。
 */
struct Phy_ParametersXDD_Diff_ExtGroup1 {
    bool has_dl_SchedulingOffset_PDSCH_TypeA; /**< dl-SchedulingOffset-PDSCH-TypeA 是否存在。 */
    Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA dl_SchedulingOffset_PDSCH_TypeA; /**< ASN.1 dl-SchedulingOffset-PDSCH-TypeA；枚举；OPTIONAL。 */
    bool has_dl_SchedulingOffset_PDSCH_TypeB; /**< dl-SchedulingOffset-PDSCH-TypeB 是否存在。 */
    Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB dl_SchedulingOffset_PDSCH_TypeB; /**< ASN.1 dl-SchedulingOffset-PDSCH-TypeB；枚举；OPTIONAL。 */
    bool has_ul_SchedulingOffset; /**< ul-SchedulingOffset 是否存在。 */
    Phy_ParametersXDD_Diff_ExtGroup1_Ul_SchedulingOffset ul_SchedulingOffset; /**< ASN.1 ul-SchedulingOffset；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersXDD_Diff
 * @note ASN.1：Phy-ParametersXDD-Diff；源文件第 18997 行。
 * @note Phy-ParametersXDD-Diff ::= SEQUENCE { dynamicSFI, twoPUCCH-F0-2-ConsecSymbols, twoDifferentTPC-Loop-PUSC...
 */
struct Phy_ParametersXDD_Diff {
    bool has_dynamicSFI; /**< dynamicSFI 是否存在。 */
    Phy_ParametersXDD_Diff_DynamicSFI dynamicSFI; /**< ASN.1 dynamicSFI；枚举；OPTIONAL。 */
    bool has_twoPUCCH_F0_2_ConsecSymbols; /**< twoPUCCH-F0-2-ConsecSymbols 是否存在。 */
    Phy_ParametersXDD_Diff_TwoPUCCH_F0_2_ConsecSymbols twoPUCCH_F0_2_ConsecSymbols; /**< ASN.1 twoPUCCH-F0-2-ConsecSymbols；枚举；OPTIONAL。 */
    bool has_twoDifferentTPC_Loop_PUSCH; /**< twoDifferentTPC-Loop-PUSCH 是否存在。 */
    Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUSCH twoDifferentTPC_Loop_PUSCH; /**< ASN.1 twoDifferentTPC-Loop-PUSCH；枚举；OPTIONAL。 */
    bool has_twoDifferentTPC_Loop_PUCCH; /**< twoDifferentTPC-Loop-PUCCH 是否存在。 */
    Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUCCH twoDifferentTPC_Loop_PUCCH; /**< ASN.1 twoDifferentTPC-Loop-PUCCH；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    Phy_ParametersXDD_Diff_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot
 * @note ASN.1：mux-SR-HARQ-ACK-CSI-PUCCH-OncePerSlot；源文件第 19053 行。
 * @note SEQUENCE { sameSymbol, diffSymbol }
 */
struct Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot {
    bool has_sameSymbol; /**< sameSymbol 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_SameSymbol sameSymbol; /**< ASN.1 sameSymbol；枚举；OPTIONAL。 */
    bool has_diffSymbol; /**< diffSymbol 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_DiffSymbol diffSymbol; /**< ASN.1 diffSymbol；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFRX_Diff_ExtGroup1
 * @note ASN.1：Phy_ParametersFRX_Diff_ExtGroup1；源文件第 19049 行。
 */
struct Phy_ParametersFRX_Diff_ExtGroup1 {
    bool has_csi_RS_IM_ReceptionForFeedback; /**< csi-RS-IM-ReceptionForFeedback 是否存在。 */
    CSI_RS_IM_ReceptionForFeedback csi_RS_IM_ReceptionForFeedback; /**< ASN.1 csi-RS-IM-ReceptionForFeedback；结构体；OPTIONAL。 */
    bool has_csi_RS_ProcFrameworkForSRS; /**< csi-RS-ProcFrameworkForSRS 是否存在。 */
    CSI_RS_ProcFrameworkForSRS csi_RS_ProcFrameworkForSRS; /**< ASN.1 csi-RS-ProcFrameworkForSRS；结构体；OPTIONAL。 */
    bool has_csi_ReportFramework; /**< csi-ReportFramework 是否存在。 */
    CSI_ReportFramework csi_ReportFramework; /**< ASN.1 csi-ReportFramework；结构体；OPTIONAL。 */
    bool has_mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot; /**< mux-SR-HARQ-ACK-CSI-PUCCH-OncePerSlot 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot; /**< ASN.1 mux-SR-HARQ-ACK-CSI-PUCCH-OncePerSlot；结构体；OPTIONAL。 */
    bool has_mux_SR_HARQ_ACK_PUCCH; /**< mux-SR-HARQ-ACK-PUCCH 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_PUCCH mux_SR_HARQ_ACK_PUCCH; /**< ASN.1 mux-SR-HARQ-ACK-PUCCH；枚举；OPTIONAL。 */
    bool has_mux_MultipleGroupCtrlCH_Overlap; /**< mux-MultipleGroupCtrlCH-Overlap 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Mux_MultipleGroupCtrlCH_Overlap mux_MultipleGroupCtrlCH_Overlap; /**< ASN.1 mux-MultipleGroupCtrlCH-Overlap；枚举；OPTIONAL。 */
    bool has_dl_SchedulingOffset_PDSCH_TypeA; /**< dl-SchedulingOffset-PDSCH-TypeA 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA dl_SchedulingOffset_PDSCH_TypeA; /**< ASN.1 dl-SchedulingOffset-PDSCH-TypeA；枚举；OPTIONAL。 */
    bool has_dl_SchedulingOffset_PDSCH_TypeB; /**< dl-SchedulingOffset-PDSCH-TypeB 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB dl_SchedulingOffset_PDSCH_TypeB; /**< ASN.1 dl-SchedulingOffset-PDSCH-TypeB；枚举；OPTIONAL。 */
    bool has_ul_SchedulingOffset; /**< ul-SchedulingOffset 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Ul_SchedulingOffset ul_SchedulingOffset; /**< ASN.1 ul-SchedulingOffset；枚举；OPTIONAL。 */
    bool has_dl_64QAM_MCS_TableAlt; /**< dl-64QAM-MCS-TableAlt 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Dl_64QAM_MCS_TableAlt dl_64QAM_MCS_TableAlt; /**< ASN.1 dl-64QAM-MCS-TableAlt；枚举；OPTIONAL。 */
    bool has_ul_64QAM_MCS_TableAlt; /**< ul-64QAM-MCS-TableAlt 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Ul_64QAM_MCS_TableAlt ul_64QAM_MCS_TableAlt; /**< ASN.1 ul-64QAM-MCS-TableAlt；枚举；OPTIONAL。 */
    bool has_cqi_TableAlt; /**< cqi-TableAlt 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_Cqi_TableAlt cqi_TableAlt; /**< ASN.1 cqi-TableAlt；枚举；OPTIONAL。 */
    bool has_oneFL_DMRS_TwoAdditionalDMRS_UL; /**< oneFL-DMRS-TwoAdditionalDMRS-UL 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_TwoAdditionalDMRS_UL oneFL_DMRS_TwoAdditionalDMRS_UL; /**< ASN.1 oneFL-DMRS-TwoAdditionalDMRS-UL；枚举；OPTIONAL。 */
    bool has_twoFL_DMRS_TwoAdditionalDMRS_UL; /**< twoFL-DMRS-TwoAdditionalDMRS-UL 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_TwoFL_DMRS_TwoAdditionalDMRS_UL twoFL_DMRS_TwoAdditionalDMRS_UL; /**< ASN.1 twoFL-DMRS-TwoAdditionalDMRS-UL；枚举；OPTIONAL。 */
    bool has_oneFL_DMRS_ThreeAdditionalDMRS_UL; /**< oneFL-DMRS-ThreeAdditionalDMRS-UL 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_ThreeAdditionalDMRS_UL oneFL_DMRS_ThreeAdditionalDMRS_UL; /**< ASN.1 oneFL-DMRS-ThreeAdditionalDMRS-UL；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC
 * @note ASN.1：pdcch-BlindDetectionNRDC；源文件第 19070 行。
 * @note SEQUENCE { pdcch-BlindDetectionMCG-UE, pdcch-BlindDetectionSCG-UE }
 */
struct Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC {
    int64_t pdcch_BlindDetectionMCG_UE; /**< ASN.1 pdcch-BlindDetectionMCG-UE；INTEGER (1..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionSCG_UE; /**< ASN.1 pdcch-BlindDetectionSCG-UE；INTEGER (1..15)，位宽 4 bit。 */
};


/**
 * @brief Phy_ParametersFRX_Diff_ExtGroup2
 * @note ASN.1：Phy_ParametersFRX_Diff_ExtGroup2；源文件第 19069 行。
 */
struct Phy_ParametersFRX_Diff_ExtGroup2 {
    bool has_pdcch_BlindDetectionNRDC; /**< pdcch-BlindDetectionNRDC 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC pdcch_BlindDetectionNRDC; /**< ASN.1 pdcch-BlindDetectionNRDC；结构体；OPTIONAL。 */
    bool has_mux_HARQ_ACK_PUSCH_DiffSymbol; /**< mux-HARQ-ACK-PUSCH-DiffSymbol 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup2_Mux_HARQ_ACK_PUSCH_DiffSymbol mux_HARQ_ACK_PUSCH_DiffSymbol; /**< ASN.1 mux-HARQ-ACK-PUSCH-DiffSymbol；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16
 * @note ASN.1：maxTotalResourcesForOneFreqRange-r16；源文件第 19092 行。
 * @note SEQUENCE { maxNumberResWithinSlotAcrossCC-OneFR-r16, maxNumberResAcrossCC-One...
 */
struct Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16 {
    bool has_maxNumberResWithinSlotAcrossCC_OneFR_r16; /**< maxNumberResWithinSlotAcrossCC-OneFR-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16 maxNumberResWithinSlotAcrossCC_OneFR_r16; /**< ASN.1 maxNumberResWithinSlotAcrossCC-OneFR-r16；枚举；OPTIONAL。 */
    bool has_maxNumberResAcrossCC_OneFR_r16; /**< maxNumberResAcrossCC-OneFR-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16 maxNumberResAcrossCC_OneFR_r16; /**< ASN.1 maxNumberResAcrossCC-OneFR-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFRX_Diff_ExtGroup3
 * @note ASN.1：Phy_ParametersFRX_Diff_ExtGroup3；源文件第 19076 行。
 */
struct Phy_ParametersFRX_Diff_ExtGroup3 {
    bool has_type1_HARQ_ACK_Codebook_r16; /**< type1-HARQ-ACK-Codebook-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_Type1_HARQ_ACK_Codebook_r16 type1_HARQ_ACK_Codebook_r16; /**< ASN.1 type1-HARQ-ACK-Codebook-r16；枚举；OPTIONAL。 */
    bool has_enhancedPowerControl_r16; /**< enhancedPowerControl-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_EnhancedPowerControl_r16 enhancedPowerControl_r16; /**< ASN.1 enhancedPowerControl-r16；枚举；OPTIONAL。 */
    bool has_simultaneousTCI_ActMultipleCC_r16; /**< simultaneousTCI-ActMultipleCC-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousTCI_ActMultipleCC_r16 simultaneousTCI_ActMultipleCC_r16; /**< ASN.1 simultaneousTCI-ActMultipleCC-r16；枚举；OPTIONAL。 */
    bool has_simultaneousSpatialRelationMultipleCC_r16; /**< simultaneousSpatialRelationMultipleCC-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousSpatialRelationMultipleCC_r16 simultaneousSpatialRelationMultipleCC_r16; /**< ASN.1 simultaneousSpatialRelationMultipleCC-r16；枚举；OPTIONAL。 */
    bool has_cli_RSSI_FDM_DL_r16; /**< cli-RSSI-FDM-DL-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_Cli_RSSI_FDM_DL_r16 cli_RSSI_FDM_DL_r16; /**< ASN.1 cli-RSSI-FDM-DL-r16；枚举；OPTIONAL。 */
    bool has_cli_SRS_RSRP_FDM_DL_r16; /**< cli-SRS-RSRP-FDM-DL-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_Cli_SRS_RSRP_FDM_DL_r16 cli_SRS_RSRP_FDM_DL_r16; /**< ASN.1 cli-SRS-RSRP-FDM-DL-r16；枚举；OPTIONAL。 */
    bool has_maxLayersMIMO_Adaptation_r16; /**< maxLayersMIMO-Adaptation-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxLayersMIMO_Adaptation_r16 maxLayersMIMO_Adaptation_r16; /**< ASN.1 maxLayersMIMO-Adaptation-r16；枚举；OPTIONAL。 */
    bool has_aggregationFactorSPS_DL_r16; /**< aggregationFactorSPS-DL-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_AggregationFactorSPS_DL_r16 aggregationFactorSPS_DL_r16; /**< ASN.1 aggregationFactorSPS-DL-r16；枚举；OPTIONAL。 */
    bool has_maxTotalResourcesForOneFreqRange_r16; /**< maxTotalResourcesForOneFreqRange-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16 maxTotalResourcesForOneFreqRange_r16; /**< ASN.1 maxTotalResourcesForOneFreqRange-r16；结构体；OPTIONAL。 */
    bool has_csi_ReportFrameworkExt_r16; /**< csi-ReportFrameworkExt-r16 是否存在。 */
    CSI_ReportFrameworkExt_r16 csi_ReportFrameworkExt_r16; /**< ASN.1 csi-ReportFrameworkExt-r16；结构体；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFRX_Diff_ExtGroup4
 * @note ASN.1：Phy_ParametersFRX_Diff_ExtGroup4；源文件第 19100 行。
 */
struct Phy_ParametersFRX_Diff_ExtGroup4 {
    bool has_twoTCI_Act_servingCellInCC_List_r16; /**< twoTCI-Act-servingCellInCC-List-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup4_TwoTCI_Act_servingCellInCC_List_r16 twoTCI_Act_servingCellInCC_List_r16; /**< ASN.1 twoTCI-Act-servingCellInCC-List-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFRX_Diff_ExtGroup5
 * @note ASN.1：Phy_ParametersFRX_Diff_ExtGroup5；源文件第 19103 行。
 */
struct Phy_ParametersFRX_Diff_ExtGroup5 {
    bool has_cri_RI_CQI_WithoutNon_PMI_PortInd_r16; /**< cri-RI-CQI-WithoutNon-PMI-PortInd-r16 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup5_Cri_RI_CQI_WithoutNon_PMI_PortInd_r16 cri_RI_CQI_WithoutNon_PMI_PortInd_r16; /**< ASN.1 cri-RI-CQI-WithoutNon-PMI-PortInd-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFRX_Diff_ExtGroup6
 * @note ASN.1：Phy_ParametersFRX_Diff_ExtGroup6；源文件第 19107 行。
 */
struct Phy_ParametersFRX_Diff_ExtGroup6 {
    bool has_cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17; /**< cqi-4-BitsSubbandTN-NonSharedSpectrumChAccess-r17 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup6_Cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17 cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17; /**< ASN.1 cqi-4-BitsSubbandTN-NonSharedSpectrumChAccess-r17；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFRX_Diff_ExtGroup7
 * @note ASN.1：Phy_ParametersFRX_Diff_ExtGroup7；源文件第 19111 行。
 */
struct Phy_ParametersFRX_Diff_ExtGroup7 {
    bool has_multipleCORESET_RedCap_r17; /**< multipleCORESET-RedCap-r17 是否存在。 */
    Phy_ParametersFRX_Diff_ExtGroup7_MultipleCORESET_RedCap_r17 multipleCORESET_RedCap_r17; /**< ASN.1 multipleCORESET-RedCap-r17；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFRX_Diff
 * @note ASN.1：Phy-ParametersFRX-Diff；源文件第 19010 行。
 * @note Phy-ParametersFRX-Diff ::= SEQUENCE { dynamicSFI, dummy1, twoFL-DMRS, dummy2, dummy3, supportedDMRS-Type...
 */
struct Phy_ParametersFRX_Diff {
    bool has_dynamicSFI; /**< dynamicSFI 是否存在。 */
    Phy_ParametersFRX_Diff_DynamicSFI dynamicSFI; /**< ASN.1 dynamicSFI；枚举；OPTIONAL。 */
    bool has_dummy1; /**< dummy1 是否存在。 */
    BitString dummy1; /**< ASN.1 dummy1；SIZE (2)，定长；OPTIONAL。 */
    bool has_twoFL_DMRS; /**< twoFL-DMRS 是否存在。 */
    BitString twoFL_DMRS; /**< ASN.1 twoFL-DMRS；SIZE (2)，定长；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    BitString dummy2; /**< ASN.1 dummy2；SIZE (2)，定长；OPTIONAL。 */
    bool has_dummy3; /**< dummy3 是否存在。 */
    BitString dummy3; /**< ASN.1 dummy3；SIZE (2)，定长；OPTIONAL。 */
    bool has_supportedDMRS_TypeDL; /**< supportedDMRS-TypeDL 是否存在。 */
    Phy_ParametersFRX_Diff_SupportedDMRS_TypeDL supportedDMRS_TypeDL; /**< ASN.1 supportedDMRS-TypeDL；枚举；OPTIONAL。 */
    bool has_supportedDMRS_TypeUL; /**< supportedDMRS-TypeUL 是否存在。 */
    Phy_ParametersFRX_Diff_SupportedDMRS_TypeUL supportedDMRS_TypeUL; /**< ASN.1 supportedDMRS-TypeUL；枚举；OPTIONAL。 */
    bool has_semiOpenLoopCSI; /**< semiOpenLoopCSI 是否存在。 */
    Phy_ParametersFRX_Diff_SemiOpenLoopCSI semiOpenLoopCSI; /**< ASN.1 semiOpenLoopCSI；枚举；OPTIONAL。 */
    bool has_csi_ReportWithoutPMI; /**< csi-ReportWithoutPMI 是否存在。 */
    Phy_ParametersFRX_Diff_Csi_ReportWithoutPMI csi_ReportWithoutPMI; /**< ASN.1 csi-ReportWithoutPMI；枚举；OPTIONAL。 */
    bool has_csi_ReportWithoutCQI; /**< csi-ReportWithoutCQI 是否存在。 */
    Phy_ParametersFRX_Diff_Csi_ReportWithoutCQI csi_ReportWithoutCQI; /**< ASN.1 csi-ReportWithoutCQI；枚举；OPTIONAL。 */
    bool has_onePortsPTRS; /**< onePortsPTRS 是否存在。 */
    BitString onePortsPTRS; /**< ASN.1 onePortsPTRS；SIZE (2)，定长；OPTIONAL。 */
    bool has_twoPUCCH_F0_2_ConsecSymbols; /**< twoPUCCH-F0-2-ConsecSymbols 是否存在。 */
    Phy_ParametersFRX_Diff_TwoPUCCH_F0_2_ConsecSymbols twoPUCCH_F0_2_ConsecSymbols; /**< ASN.1 twoPUCCH-F0-2-ConsecSymbols；枚举；OPTIONAL。 */
    bool has_pucch_F2_WithFH; /**< pucch-F2-WithFH 是否存在。 */
    Phy_ParametersFRX_Diff_Pucch_F2_WithFH pucch_F2_WithFH; /**< ASN.1 pucch-F2-WithFH；枚举；OPTIONAL。 */
    bool has_pucch_F3_WithFH; /**< pucch-F3-WithFH 是否存在。 */
    Phy_ParametersFRX_Diff_Pucch_F3_WithFH pucch_F3_WithFH; /**< ASN.1 pucch-F3-WithFH；枚举；OPTIONAL。 */
    bool has_pucch_F4_WithFH; /**< pucch-F4-WithFH 是否存在。 */
    Phy_ParametersFRX_Diff_Pucch_F4_WithFH pucch_F4_WithFH; /**< ASN.1 pucch-F4-WithFH；枚举；OPTIONAL。 */
    bool has_pucch_F0_2WithoutFH; /**< pucch-F0-2WithoutFH 是否存在。 */
    Phy_ParametersFRX_Diff_Pucch_F0_2WithoutFH pucch_F0_2WithoutFH; /**< ASN.1 pucch-F0-2WithoutFH；枚举；OPTIONAL。 */
    bool has_pucch_F1_3_4WithoutFH; /**< pucch-F1-3-4WithoutFH 是否存在。 */
    Phy_ParametersFRX_Diff_Pucch_F1_3_4WithoutFH pucch_F1_3_4WithoutFH; /**< ASN.1 pucch-F1-3-4WithoutFH；枚举；OPTIONAL。 */
    bool has_mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot; /**< mux-SR-HARQ-ACK-CSI-PUCCH-MultiPerSlot 是否存在。 */
    Phy_ParametersFRX_Diff_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot; /**< ASN.1 mux-SR-HARQ-ACK-CSI-PUCCH-MultiPerSlot；枚举；OPTIONAL。 */
    bool has_uci_CodeBlockSegmentation; /**< uci-CodeBlockSegmentation 是否存在。 */
    Phy_ParametersFRX_Diff_Uci_CodeBlockSegmentation uci_CodeBlockSegmentation; /**< ASN.1 uci-CodeBlockSegmentation；枚举；OPTIONAL。 */
    bool has_onePUCCH_LongAndShortFormat; /**< onePUCCH-LongAndShortFormat 是否存在。 */
    Phy_ParametersFRX_Diff_OnePUCCH_LongAndShortFormat onePUCCH_LongAndShortFormat; /**< ASN.1 onePUCCH-LongAndShortFormat；枚举；OPTIONAL。 */
    bool has_twoPUCCH_AnyOthersInSlot; /**< twoPUCCH-AnyOthersInSlot 是否存在。 */
    Phy_ParametersFRX_Diff_TwoPUCCH_AnyOthersInSlot twoPUCCH_AnyOthersInSlot; /**< ASN.1 twoPUCCH-AnyOthersInSlot；枚举；OPTIONAL。 */
    bool has_intraSlotFreqHopping_PUSCH; /**< intraSlotFreqHopping-PUSCH 是否存在。 */
    Phy_ParametersFRX_Diff_IntraSlotFreqHopping_PUSCH intraSlotFreqHopping_PUSCH; /**< ASN.1 intraSlotFreqHopping-PUSCH；枚举；OPTIONAL。 */
    bool has_pusch_LBRM; /**< pusch-LBRM 是否存在。 */
    Phy_ParametersFRX_Diff_Pusch_LBRM pusch_LBRM; /**< ASN.1 pusch-LBRM；枚举；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCA; /**< pdcch-BlindDetectionCA 是否存在。 */
    int64_t pdcch_BlindDetectionCA; /**< ASN.1 pdcch-BlindDetectionCA；INTEGER (4..16)，位宽 4 bit；OPTIONAL。 */
    bool has_tpc_PUSCH_RNTI; /**< tpc-PUSCH-RNTI 是否存在。 */
    Phy_ParametersFRX_Diff_Tpc_PUSCH_RNTI tpc_PUSCH_RNTI; /**< ASN.1 tpc-PUSCH-RNTI；枚举；OPTIONAL。 */
    bool has_tpc_PUCCH_RNTI; /**< tpc-PUCCH-RNTI 是否存在。 */
    Phy_ParametersFRX_Diff_Tpc_PUCCH_RNTI tpc_PUCCH_RNTI; /**< ASN.1 tpc-PUCCH-RNTI；枚举；OPTIONAL。 */
    bool has_tpc_SRS_RNTI; /**< tpc-SRS-RNTI 是否存在。 */
    Phy_ParametersFRX_Diff_Tpc_SRS_RNTI tpc_SRS_RNTI; /**< ASN.1 tpc-SRS-RNTI；枚举；OPTIONAL。 */
    bool has_absoluteTPC_Command; /**< absoluteTPC-Command 是否存在。 */
    Phy_ParametersFRX_Diff_AbsoluteTPC_Command absoluteTPC_Command; /**< ASN.1 absoluteTPC-Command；枚举；OPTIONAL。 */
    bool has_twoDifferentTPC_Loop_PUSCH; /**< twoDifferentTPC-Loop-PUSCH 是否存在。 */
    Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUSCH twoDifferentTPC_Loop_PUSCH; /**< ASN.1 twoDifferentTPC-Loop-PUSCH；枚举；OPTIONAL。 */
    bool has_twoDifferentTPC_Loop_PUCCH; /**< twoDifferentTPC-Loop-PUCCH 是否存在。 */
    Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUCCH twoDifferentTPC_Loop_PUCCH; /**< ASN.1 twoDifferentTPC-Loop-PUCCH；枚举；OPTIONAL。 */
    bool has_pusch_HalfPi_BPSK; /**< pusch-HalfPi-BPSK 是否存在。 */
    Phy_ParametersFRX_Diff_Pusch_HalfPi_BPSK pusch_HalfPi_BPSK; /**< ASN.1 pusch-HalfPi-BPSK；枚举；OPTIONAL。 */
    bool has_pucch_F3_4_HalfPi_BPSK; /**< pucch-F3-4-HalfPi-BPSK 是否存在。 */
    Phy_ParametersFRX_Diff_Pucch_F3_4_HalfPi_BPSK pucch_F3_4_HalfPi_BPSK; /**< ASN.1 pucch-F3-4-HalfPi-BPSK；枚举；OPTIONAL。 */
    bool has_almostContiguousCP_OFDM_UL; /**< almostContiguousCP-OFDM-UL 是否存在。 */
    Phy_ParametersFRX_Diff_AlmostContiguousCP_OFDM_UL almostContiguousCP_OFDM_UL; /**< ASN.1 almostContiguousCP-OFDM-UL；枚举；OPTIONAL。 */
    bool has_sp_CSI_RS; /**< sp-CSI-RS 是否存在。 */
    Phy_ParametersFRX_Diff_Sp_CSI_RS sp_CSI_RS; /**< ASN.1 sp-CSI-RS；枚举；OPTIONAL。 */
    bool has_sp_CSI_IM; /**< sp-CSI-IM 是否存在。 */
    Phy_ParametersFRX_Diff_Sp_CSI_IM sp_CSI_IM; /**< ASN.1 sp-CSI-IM；枚举；OPTIONAL。 */
    bool has_tdd_MultiDL_UL_SwitchPerSlot; /**< tdd-MultiDL-UL-SwitchPerSlot 是否存在。 */
    Phy_ParametersFRX_Diff_Tdd_MultiDL_UL_SwitchPerSlot tdd_MultiDL_UL_SwitchPerSlot; /**< ASN.1 tdd-MultiDL-UL-SwitchPerSlot；枚举；OPTIONAL。 */
    bool has_multipleCORESET; /**< multipleCORESET 是否存在。 */
    Phy_ParametersFRX_Diff_MultipleCORESET multipleCORESET; /**< ASN.1 multipleCORESET；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    Phy_ParametersFRX_Diff_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    Phy_ParametersFRX_Diff_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    Phy_ParametersFRX_Diff_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    Phy_ParametersFRX_Diff_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    Phy_ParametersFRX_Diff_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    Phy_ParametersFRX_Diff_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    Phy_ParametersFRX_Diff_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief Phy_ParametersFR1_ExtGroup1
 * @note ASN.1：Phy_ParametersFR1_ExtGroup1；源文件第 19122 行。
 */
struct Phy_ParametersFR1_ExtGroup1 {
    bool has_pdsch_RE_MappingFR1_PerSlot; /**< pdsch-RE-MappingFR1-PerSlot 是否存在。 */
    Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot pdsch_RE_MappingFR1_PerSlot; /**< ASN.1 pdsch-RE-MappingFR1-PerSlot；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFR1_ExtGroup2
 * @note ASN.1：Phy_ParametersFR1_ExtGroup2；源文件第 19126 行。
 */
struct Phy_ParametersFR1_ExtGroup2 {
    bool has_pdcch_MonitoringSingleSpanFirst4Sym_r16; /**< pdcch-MonitoringSingleSpanFirst4Sym-r16 是否存在。 */
    Phy_ParametersFR1_ExtGroup2_Pdcch_MonitoringSingleSpanFirst4Sym_r16 pdcch_MonitoringSingleSpanFirst4Sym_r16; /**< ASN.1 pdcch-MonitoringSingleSpanFirst4Sym-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFR1_ExtGroup3
 * @note ASN.1：Phy_ParametersFR1_ExtGroup3；源文件第 19131 行。
 */
struct Phy_ParametersFR1_ExtGroup3 {
    bool has_k1_RangeExtensionATG_r18; /**< k1-RangeExtensionATG-r18 是否存在。 */
    Phy_ParametersFR1_ExtGroup3_K1_RangeExtensionATG_r18 k1_RangeExtensionATG_r18; /**< ASN.1 k1-RangeExtensionATG-r18；枚举；OPTIONAL。 */
    bool has_maxHARQ_ProcessNumberATG_r18; /**< maxHARQ-ProcessNumberATG-r18 是否存在。 */
    Phy_ParametersFR1_ExtGroup3_MaxHARQ_ProcessNumberATG_r18 maxHARQ_ProcessNumberATG_r18; /**< ASN.1 maxHARQ-ProcessNumberATG-r18；枚举；OPTIONAL。 */
    bool has_uplinkPreCompensationATG_r18; /**< uplinkPreCompensationATG-r18 是否存在。 */
    Phy_ParametersFR1_ExtGroup3_UplinkPreCompensationATG_r18 uplinkPreCompensationATG_r18; /**< ASN.1 uplinkPreCompensationATG-r18；枚举；OPTIONAL。 */
    bool has_advReceiver_MU_MIMO_r18; /**< advReceiver-MU-MIMO-r18 是否存在。 */
    Phy_ParametersFR1_ExtGroup3_AdvReceiver_MU_MIMO_r18 advReceiver_MU_MIMO_r18; /**< ASN.1 advReceiver-MU-MIMO-r18；枚举；OPTIONAL。 */
    bool has_deltaPowerClassReporting_r18; /**< deltaPowerClassReporting-r18 是否存在。 */
    Phy_ParametersFR1_ExtGroup3_DeltaPowerClassReporting_r18 deltaPowerClassReporting_r18; /**< ASN.1 deltaPowerClassReporting-r18；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFR1
 * @note ASN.1：Phy-ParametersFR1；源文件第 19116 行。
 * @note Phy-ParametersFR1 ::= SEQUENCE { pdcch-MonitoringSingleOccasion, scs-60kHz, pdsch-256QAM-FR1, pdsch...
 */
struct Phy_ParametersFR1 {
    bool has_pdcch_MonitoringSingleOccasion; /**< pdcch-MonitoringSingleOccasion 是否存在。 */
    Phy_ParametersFR1_Pdcch_MonitoringSingleOccasion pdcch_MonitoringSingleOccasion; /**< ASN.1 pdcch-MonitoringSingleOccasion；枚举；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    Phy_ParametersFR1_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
    bool has_pdsch_256QAM_FR1; /**< pdsch-256QAM-FR1 是否存在。 */
    Phy_ParametersFR1_Pdsch_256QAM_FR1 pdsch_256QAM_FR1; /**< ASN.1 pdsch-256QAM-FR1；枚举；OPTIONAL。 */
    bool has_pdsch_RE_MappingFR1_PerSymbol; /**< pdsch-RE-MappingFR1-PerSymbol 是否存在。 */
    Phy_ParametersFR1_Pdsch_RE_MappingFR1_PerSymbol pdsch_RE_MappingFR1_PerSymbol; /**< ASN.1 pdsch-RE-MappingFR1-PerSymbol；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    Phy_ParametersFR1_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    Phy_ParametersFR1_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    Phy_ParametersFR1_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief Phy_ParametersFR2_ExtGroup1
 * @note ASN.1：Phy_ParametersFR2_ExtGroup1；源文件第 19149 行。
 */
struct Phy_ParametersFR2_ExtGroup1 {
    bool has_pCell_FR2; /**< pCell-FR2 是否存在。 */
    Phy_ParametersFR2_ExtGroup1_PCell_FR2 pCell_FR2; /**< ASN.1 pCell-FR2；枚举；OPTIONAL。 */
    bool has_pdsch_RE_MappingFR2_PerSlot; /**< pdsch-RE-MappingFR2-PerSlot 是否存在。 */
    Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot pdsch_RE_MappingFR2_PerSlot; /**< ASN.1 pdsch-RE-MappingFR2-PerSlot；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFR2_ExtGroup2
 * @note ASN.1：Phy_ParametersFR2_ExtGroup2；源文件第 19154 行。
 */
struct Phy_ParametersFR2_ExtGroup2 {
    bool has_defaultSpatialRelationPathlossRS_r16; /**< defaultSpatialRelationPathlossRS-r16 是否存在。 */
    Phy_ParametersFR2_ExtGroup2_DefaultSpatialRelationPathlossRS_r16 defaultSpatialRelationPathlossRS_r16; /**< ASN.1 defaultSpatialRelationPathlossRS-r16；枚举；OPTIONAL。 */
    bool has_spatialRelationUpdateAP_SRS_r16; /**< spatialRelationUpdateAP-SRS-r16 是否存在。 */
    Phy_ParametersFR2_ExtGroup2_SpatialRelationUpdateAP_SRS_r16 spatialRelationUpdateAP_SRS_r16; /**< ASN.1 spatialRelationUpdateAP-SRS-r16；枚举；OPTIONAL。 */
    bool has_maxNumberSRS_PosSpatialRelationsAllServingCells_r16; /**< maxNumberSRS-PosSpatialRelationsAllServingCells-r16 是否存在。 */
    Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16 maxNumberSRS_PosSpatialRelationsAllServingCells_r16; /**< ASN.1 maxNumberSRS-PosSpatialRelationsAllServingCells-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersFR2
 * @note ASN.1：Phy-ParametersFR2；源文件第 19145 行。
 * @note Phy-ParametersFR2 ::= SEQUENCE { dummy, pdsch-RE-MappingFR2-PerSymbol, pCell-FR2, pdsch-RE-MappingF...
 */
struct Phy_ParametersFR2 {
    bool has_dummy; /**< dummy 是否存在。 */
    Phy_ParametersFR2_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
    bool has_pdsch_RE_MappingFR2_PerSymbol; /**< pdsch-RE-MappingFR2-PerSymbol 是否存在。 */
    Phy_ParametersFR2_Pdsch_RE_MappingFR2_PerSymbol pdsch_RE_MappingFR2_PerSymbol; /**< ASN.1 pdsch-RE-MappingFR2-PerSymbol；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    Phy_ParametersFR2_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    Phy_ParametersFR2_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief Phy_Parameters
 * @note ASN.1：Phy-Parameters；源文件第 18738 行。
 * @note Phy-Parameters ::= SEQUENCE { phy-ParametersCommon, phy-ParametersXDD-Diff, phy-ParametersFRX-Di...
 */
struct Phy_Parameters {
    bool has_phy_ParametersCommon; /**< phy-ParametersCommon 是否存在。 */
    Phy_ParametersCommon phy_ParametersCommon; /**< ASN.1 phy-ParametersCommon；结构体；OPTIONAL。 */
    bool has_phy_ParametersXDD_Diff; /**< phy-ParametersXDD-Diff 是否存在。 */
    Phy_ParametersXDD_Diff phy_ParametersXDD_Diff; /**< ASN.1 phy-ParametersXDD-Diff；结构体；OPTIONAL。 */
    bool has_phy_ParametersFRX_Diff; /**< phy-ParametersFRX-Diff 是否存在。 */
    Phy_ParametersFRX_Diff phy_ParametersFRX_Diff; /**< ASN.1 phy-ParametersFRX-Diff；结构体；OPTIONAL。 */
    bool has_phy_ParametersFR1; /**< phy-ParametersFR1 是否存在。 */
    Phy_ParametersFR1 phy_ParametersFR1; /**< ASN.1 phy-ParametersFR1；结构体；OPTIONAL。 */
    bool has_phy_ParametersFR2; /**< phy-ParametersFR2 是否存在。 */
    Phy_ParametersFR2 phy_ParametersFR2; /**< ASN.1 phy-ParametersFR2；结构体；OPTIONAL。 */
};


/**
 * @brief SON_Parameters_r16_ExtGroup1
 * @note ASN.1：SON_Parameters_r16_ExtGroup1；源文件第 20718 行。
 */
struct SON_Parameters_r16_ExtGroup1 {
    bool has_rlfReportCHO_r17; /**< rlfReportCHO-r17 是否存在。 */
    SON_Parameters_r16_ExtGroup1_RlfReportCHO_r17 rlfReportCHO_r17; /**< ASN.1 rlfReportCHO-r17；枚举；OPTIONAL。 */
    bool has_rlfReportDAPS_r17; /**< rlfReportDAPS-r17 是否存在。 */
    SON_Parameters_r16_ExtGroup1_RlfReportDAPS_r17 rlfReportDAPS_r17; /**< ASN.1 rlfReportDAPS-r17；枚举；OPTIONAL。 */
    bool has_success_HO_Report_r17; /**< success-HO-Report-r17 是否存在。 */
    SON_Parameters_r16_ExtGroup1_Success_HO_Report_r17 success_HO_Report_r17; /**< ASN.1 success-HO-Report-r17；枚举；OPTIONAL。 */
    bool has_twoStepRACH_Report_r17; /**< twoStepRACH-Report-r17 是否存在。 */
    SON_Parameters_r16_ExtGroup1_TwoStepRACH_Report_r17 twoStepRACH_Report_r17; /**< ASN.1 twoStepRACH-Report-r17；枚举；OPTIONAL。 */
    bool has_pscell_MHI_Report_r17; /**< pscell-MHI-Report-r17 是否存在。 */
    SON_Parameters_r16_ExtGroup1_Pscell_MHI_Report_r17 pscell_MHI_Report_r17; /**< ASN.1 pscell-MHI-Report-r17；枚举；OPTIONAL。 */
    bool has_onDemandSI_Report_r17; /**< onDemandSI-Report-r17 是否存在。 */
    SON_Parameters_r16_ExtGroup1_OnDemandSI_Report_r17 onDemandSI_Report_r17; /**< ASN.1 onDemandSI-Report-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SON_Parameters_r16_ExtGroup2
 * @note ASN.1：SON_Parameters_r16_ExtGroup2；源文件第 20726 行。
 */
struct SON_Parameters_r16_ExtGroup2 {
    bool has_spr_Report_r18; /**< spr-Report-r18 是否存在。 */
    SON_Parameters_r16_ExtGroup2_Spr_Report_r18 spr_Report_r18; /**< ASN.1 spr-Report-r18；枚举；OPTIONAL。 */
    bool has_successIRAT_HO_Report_r18; /**< successIRAT-HO-Report-r18 是否存在。 */
    SON_Parameters_r16_ExtGroup2_SuccessIRAT_HO_Report_r18 successIRAT_HO_Report_r18; /**< ASN.1 successIRAT-HO-Report-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SON_Parameters_r16
 * @note ASN.1：SON-Parameters-r16；源文件第 20715 行。
 * @note SON-Parameters-r16 ::= SEQUENCE { rach-Report-r16, rlfReportCHO-r17, rlfReportDAPS-r17, success-HO-R...
 */
struct SON_Parameters_r16 {
    bool has_rach_Report_r16; /**< rach-Report-r16 是否存在。 */
    SON_Parameters_r16_Rach_Report_r16 rach_Report_r16; /**< ASN.1 rach-Report-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SON_Parameters_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SON_Parameters_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief UE_BasedPerfMeas_Parameters_r16_ExtGroup1
 * @note ASN.1：UE_BasedPerfMeas_Parameters_r16_ExtGroup1；源文件第 20817 行。
 */
struct UE_BasedPerfMeas_Parameters_r16_ExtGroup1 {
    bool has_sigBasedLogMDT_OverrideProtect_r17; /**< sigBasedLogMDT-OverrideProtect-r17 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_ExtGroup1_SigBasedLogMDT_OverrideProtect_r17 sigBasedLogMDT_OverrideProtect_r17; /**< ASN.1 sigBasedLogMDT-OverrideProtect-r17；枚举；OPTIONAL。 */
    bool has_multipleCEF_Report_r17; /**< multipleCEF-Report-r17 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_ExtGroup1_MultipleCEF_Report_r17 multipleCEF_Report_r17; /**< ASN.1 multipleCEF-Report-r17；枚举；OPTIONAL。 */
    bool has_excessPacketDelay_r17; /**< excessPacketDelay-r17 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_ExtGroup1_ExcessPacketDelay_r17 excessPacketDelay_r17; /**< ASN.1 excessPacketDelay-r17；枚举；OPTIONAL。 */
    bool has_earlyMeasLog_r17; /**< earlyMeasLog-r17 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_ExtGroup1_EarlyMeasLog_r17 earlyMeasLog_r17; /**< ASN.1 earlyMeasLog-r17；枚举；OPTIONAL。 */
};


/**
 * @brief UE_BasedPerfMeas_Parameters_r16_ExtGroup2
 * @note ASN.1：UE_BasedPerfMeas_Parameters_r16_ExtGroup2；源文件第 20823 行。
 */
struct UE_BasedPerfMeas_Parameters_r16_ExtGroup2 {
    bool has_loggedMDT_PNI_NPN_r18; /**< loggedMDT-PNI-NPN-r18 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_PNI_NPN_r18 loggedMDT_PNI_NPN_r18; /**< ASN.1 loggedMDT-PNI-NPN-r18；枚举；OPTIONAL。 */
    bool has_loggedMDT_SNPN_r18; /**< loggedMDT-SNPN-r18 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_SNPN_r18 loggedMDT_SNPN_r18; /**< ASN.1 loggedMDT-SNPN-r18；枚举；OPTIONAL。 */
};


/**
 * @brief UE_BasedPerfMeas_Parameters_r16
 * @note ASN.1：UE-BasedPerfMeas-Parameters-r16；源文件第 20805 行。
 * @note UE-BasedPerfMeas-Parameters-r16 ::= SEQUENCE { barometerMeasReport-r16, immMeasBT-r16, immMeasWLAN-r16, loggedMea...
 */
struct UE_BasedPerfMeas_Parameters_r16 {
    bool has_barometerMeasReport_r16; /**< barometerMeasReport-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_BarometerMeasReport_r16 barometerMeasReport_r16; /**< ASN.1 barometerMeasReport-r16；枚举；OPTIONAL。 */
    bool has_immMeasBT_r16; /**< immMeasBT-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_ImmMeasBT_r16 immMeasBT_r16; /**< ASN.1 immMeasBT-r16；枚举；OPTIONAL。 */
    bool has_immMeasWLAN_r16; /**< immMeasWLAN-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_ImmMeasWLAN_r16 immMeasWLAN_r16; /**< ASN.1 immMeasWLAN-r16；枚举；OPTIONAL。 */
    bool has_loggedMeasBT_r16; /**< loggedMeasBT-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_LoggedMeasBT_r16 loggedMeasBT_r16; /**< ASN.1 loggedMeasBT-r16；枚举；OPTIONAL。 */
    bool has_loggedMeasurements_r16; /**< loggedMeasurements-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_LoggedMeasurements_r16 loggedMeasurements_r16; /**< ASN.1 loggedMeasurements-r16；枚举；OPTIONAL。 */
    bool has_loggedMeasWLAN_r16; /**< loggedMeasWLAN-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_LoggedMeasWLAN_r16 loggedMeasWLAN_r16; /**< ASN.1 loggedMeasWLAN-r16；枚举；OPTIONAL。 */
    bool has_orientationMeasReport_r16; /**< orientationMeasReport-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_OrientationMeasReport_r16 orientationMeasReport_r16; /**< ASN.1 orientationMeasReport-r16；枚举；OPTIONAL。 */
    bool has_speedMeasReport_r16; /**< speedMeasReport-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_SpeedMeasReport_r16 speedMeasReport_r16; /**< ASN.1 speedMeasReport-r16；枚举；OPTIONAL。 */
    bool has_gnss_Location_r16; /**< gnss-Location-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_Gnss_Location_r16 gnss_Location_r16; /**< ASN.1 gnss-Location-r16；枚举；OPTIONAL。 */
    bool has_ulPDCP_Delay_r16; /**< ulPDCP-Delay-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16_UlPDCP_Delay_r16 ulPDCP_Delay_r16; /**< ASN.1 ulPDCP-Delay-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    UE_BasedPerfMeas_Parameters_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    UE_BasedPerfMeas_Parameters_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief UE_NR_CapabilityAddXDD_Mode
 * @note ASN.1：UE-NR-CapabilityAddXDD-Mode；源文件第 21204 行。
 * @note UE-NR-CapabilityAddXDD-Mode ::= SEQUENCE { phy-ParametersXDD-Diff, mac-ParametersXDD-Diff, measAndMobParamete...
 */
struct UE_NR_CapabilityAddXDD_Mode {
    bool has_phy_ParametersXDD_Diff; /**< phy-ParametersXDD-Diff 是否存在。 */
    Phy_ParametersXDD_Diff phy_ParametersXDD_Diff; /**< ASN.1 phy-ParametersXDD-Diff；结构体；OPTIONAL。 */
    bool has_mac_ParametersXDD_Diff; /**< mac-ParametersXDD-Diff 是否存在。 */
    MAC_ParametersXDD_Diff mac_ParametersXDD_Diff; /**< ASN.1 mac-ParametersXDD-Diff；结构体；OPTIONAL。 */
    bool has_measAndMobParametersXDD_Diff; /**< measAndMobParametersXDD-Diff 是否存在。 */
    MeasAndMobParametersXDD_Diff measAndMobParametersXDD_Diff; /**< ASN.1 measAndMobParametersXDD-Diff；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_CapabilityAddFRX_Mode
 * @note ASN.1：UE-NR-CapabilityAddFRX-Mode；源文件第 21214 行。
 * @note UE-NR-CapabilityAddFRX-Mode ::= SEQUENCE { phy-ParametersFRX-Diff, measAndMobParametersFRX-Diff }
 */
struct UE_NR_CapabilityAddFRX_Mode {
    bool has_phy_ParametersFRX_Diff; /**< phy-ParametersFRX-Diff 是否存在。 */
    Phy_ParametersFRX_Diff phy_ParametersFRX_Diff; /**< ASN.1 phy-ParametersFRX-Diff；结构体；OPTIONAL。 */
    bool has_measAndMobParametersFRX_Diff; /**< measAndMobParametersFRX-Diff 是否存在。 */
    MeasAndMobParametersFRX_Diff measAndMobParametersFRX_Diff; /**< ASN.1 measAndMobParametersFRX-Diff；结构体；OPTIONAL。 */
};


/**
 * @brief NTN_Parameters_r17
 * @note ASN.1：NTN-Parameters-r17；源文件第 18645 行。
 * @note NTN-Parameters-r17 ::= SEQUENCE { inactiveStateNTN-r17, ra-SDT-NTN-r17, srb-SDT-NTN-r17, measAndMobP...
 */
struct NTN_Parameters_r17 {
    bool has_inactiveStateNTN_r17; /**< inactiveStateNTN-r17 是否存在。 */
    NTN_Parameters_r17_InactiveStateNTN_r17 inactiveStateNTN_r17; /**< ASN.1 inactiveStateNTN-r17；枚举；OPTIONAL。 */
    bool has_ra_SDT_NTN_r17; /**< ra-SDT-NTN-r17 是否存在。 */
    NTN_Parameters_r17_Ra_SDT_NTN_r17 ra_SDT_NTN_r17; /**< ASN.1 ra-SDT-NTN-r17；枚举；OPTIONAL。 */
    bool has_srb_SDT_NTN_r17; /**< srb-SDT-NTN-r17 是否存在。 */
    NTN_Parameters_r17_Srb_SDT_NTN_r17 srb_SDT_NTN_r17; /**< ASN.1 srb-SDT-NTN-r17；枚举；OPTIONAL。 */
    bool has_measAndMobParametersNTN_r17; /**< measAndMobParametersNTN-r17 是否存在。 */
    MeasAndMobParameters measAndMobParametersNTN_r17; /**< ASN.1 measAndMobParametersNTN-r17；结构体；OPTIONAL。 */
    bool has_mac_ParametersNTN_r17; /**< mac-ParametersNTN-r17 是否存在。 */
    MAC_Parameters mac_ParametersNTN_r17; /**< ASN.1 mac-ParametersNTN-r17；结构体；OPTIONAL。 */
    bool has_phy_ParametersNTN_r17; /**< phy-ParametersNTN-r17 是否存在。 */
    Phy_Parameters phy_ParametersNTN_r17; /**< ASN.1 phy-ParametersNTN-r17；结构体；OPTIONAL。 */
    bool has_fdd_Add_UE_NR_CapabilitiesNTN_r17; /**< fdd-Add-UE-NR-CapabilitiesNTN-r17 是否存在。 */
    UE_NR_CapabilityAddXDD_Mode fdd_Add_UE_NR_CapabilitiesNTN_r17; /**< ASN.1 fdd-Add-UE-NR-CapabilitiesNTN-r17；结构体；OPTIONAL。 */
    bool has_fr1_Add_UE_NR_CapabilitiesNTN_r17; /**< fr1-Add-UE-NR-CapabilitiesNTN-r17 是否存在。 */
    UE_NR_CapabilityAddFRX_Mode fr1_Add_UE_NR_CapabilitiesNTN_r17; /**< ASN.1 fr1-Add-UE-NR-CapabilitiesNTN-r17；结构体；OPTIONAL。 */
    bool has_ue_BasedPerfMeas_ParametersNTN_r17; /**< ue-BasedPerfMeas-ParametersNTN-r17 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16 ue_BasedPerfMeas_ParametersNTN_r17; /**< ASN.1 ue-BasedPerfMeas-ParametersNTN-r17；结构体；OPTIONAL。 */
    bool has_son_ParametersNTN_r17; /**< son-ParametersNTN-r17 是否存在。 */
    SON_Parameters_r16 son_ParametersNTN_r17; /**< ASN.1 son-ParametersNTN-r17；结构体；OPTIONAL。 */
};


/**
 * @brief OLPC_SRS_Pos_r16
 * @note ASN.1：OLPC-SRS-Pos-r16；源文件第 18661 行。
 * @note OLPC-SRS-Pos-r16 ::= SEQUENCE { olpc-SRS-PosBasedOnPRS-Serving-r16, olpc-SRS-PosBasedOnSSB-Neigh-r...
 */
struct OLPC_SRS_Pos_r16 {
    bool has_olpc_SRS_PosBasedOnPRS_Serving_r16; /**< olpc-SRS-PosBasedOnPRS-Serving-r16 是否存在。 */
    OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Serving_r16 olpc_SRS_PosBasedOnPRS_Serving_r16; /**< ASN.1 olpc-SRS-PosBasedOnPRS-Serving-r16；枚举；OPTIONAL。 */
    bool has_olpc_SRS_PosBasedOnSSB_Neigh_r16; /**< olpc-SRS-PosBasedOnSSB-Neigh-r16 是否存在。 */
    OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnSSB_Neigh_r16 olpc_SRS_PosBasedOnSSB_Neigh_r16; /**< ASN.1 olpc-SRS-PosBasedOnSSB-Neigh-r16；枚举；OPTIONAL。 */
    bool has_olpc_SRS_PosBasedOnPRS_Neigh_r16; /**< olpc-SRS-PosBasedOnPRS-Neigh-r16 是否存在。 */
    OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Neigh_r16 olpc_SRS_PosBasedOnPRS_Neigh_r16; /**< ASN.1 olpc-SRS-PosBasedOnPRS-Neigh-r16；枚举；OPTIONAL。 */
    bool has_maxNumberPathLossEstimatePerServing_r16; /**< maxNumberPathLossEstimatePerServing-r16 是否存在。 */
    OLPC_SRS_Pos_r16_MaxNumberPathLossEstimatePerServing_r16 maxNumberPathLossEstimatePerServing_r16; /**< ASN.1 maxNumberPathLossEstimatePerServing-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PDCP_Parameters_ExtGroup1
 * @note ASN.1：PDCP_Parameters_ExtGroup1；源文件第 18693 行。
 */
struct PDCP_Parameters_ExtGroup1 {
    bool has_drb_IAB_r16; /**< drb-IAB-r16 是否存在。 */
    PDCP_Parameters_ExtGroup1_Drb_IAB_r16 drb_IAB_r16; /**< ASN.1 drb-IAB-r16；枚举；OPTIONAL。 */
    bool has_non_DRB_IAB_r16; /**< non-DRB-IAB-r16 是否存在。 */
    PDCP_Parameters_ExtGroup1_Non_DRB_IAB_r16 non_DRB_IAB_r16; /**< ASN.1 non-DRB-IAB-r16；枚举；OPTIONAL。 */
    bool has_extendedDiscardTimer_r16; /**< extendedDiscardTimer-r16 是否存在。 */
    PDCP_Parameters_ExtGroup1_ExtendedDiscardTimer_r16 extendedDiscardTimer_r16; /**< ASN.1 extendedDiscardTimer-r16；枚举；OPTIONAL。 */
    bool has_continueEHC_Context_r16; /**< continueEHC-Context-r16 是否存在。 */
    PDCP_Parameters_ExtGroup1_ContinueEHC_Context_r16 continueEHC_Context_r16; /**< ASN.1 continueEHC-Context-r16；枚举；OPTIONAL。 */
    bool has_ehc_r16; /**< ehc-r16 是否存在。 */
    PDCP_Parameters_ExtGroup1_Ehc_r16 ehc_r16; /**< ASN.1 ehc-r16；枚举；OPTIONAL。 */
    bool has_maxNumberEHC_Contexts_r16; /**< maxNumberEHC-Contexts-r16 是否存在。 */
    PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16 maxNumberEHC_Contexts_r16; /**< ASN.1 maxNumberEHC-Contexts-r16；枚举；OPTIONAL。 */
    bool has_jointEHC_ROHC_Config_r16; /**< jointEHC-ROHC-Config-r16 是否存在。 */
    PDCP_Parameters_ExtGroup1_JointEHC_ROHC_Config_r16 jointEHC_ROHC_Config_r16; /**< ASN.1 jointEHC-ROHC-Config-r16；枚举；OPTIONAL。 */
    bool has_pdcp_DuplicationMoreThanTwoRLC_r16; /**< pdcp-DuplicationMoreThanTwoRLC-r16 是否存在。 */
    PDCP_Parameters_ExtGroup1_Pdcp_DuplicationMoreThanTwoRLC_r16 pdcp_DuplicationMoreThanTwoRLC_r16; /**< ASN.1 pdcp-DuplicationMoreThanTwoRLC-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17
 * @note ASN.1：udc-r17/operatorDictionary-r17；源文件第 18708 行。
 * @note SEQUENCE { versionOfDictionary-r17, associatedPLMN-ID-r17 }
 */
struct PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17 {
    int64_t versionOfDictionary_r17; /**< ASN.1 versionOfDictionary-r17；INTEGER (0..15)，位宽 4 bit。 */
    PLMN_Identity associatedPLMN_ID_r17; /**< ASN.1 associatedPLMN-ID-r17；结构体。 */
};


/**
 * @brief PDCP_Parameters_ExtGroup2_Udc_r17
 * @note ASN.1：udc-r17；源文件第 18706 行。
 * @note SEQUENCE { standardDictionary-r17, operatorDictionary-r17, continueUDC-r17, s...
 */
struct PDCP_Parameters_ExtGroup2_Udc_r17 {
    bool has_standardDictionary_r17; /**< standardDictionary-r17 是否存在。 */
    PDCP_Parameters_ExtGroup2_Udc_r17_StandardDictionary_r17 standardDictionary_r17; /**< ASN.1 standardDictionary-r17；枚举；OPTIONAL。 */
    bool has_operatorDictionary_r17; /**< operatorDictionary-r17 是否存在。 */
    PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17 operatorDictionary_r17; /**< ASN.1 operatorDictionary-r17；结构体；OPTIONAL。 */
    bool has_continueUDC_r17; /**< continueUDC-r17 是否存在。 */
    PDCP_Parameters_ExtGroup2_Udc_r17_ContinueUDC_r17 continueUDC_r17; /**< ASN.1 continueUDC-r17；枚举；OPTIONAL。 */
    bool has_supportOfBufferSize_r17; /**< supportOfBufferSize-r17 是否存在。 */
    PDCP_Parameters_ExtGroup2_Udc_r17_SupportOfBufferSize_r17 supportOfBufferSize_r17; /**< ASN.1 supportOfBufferSize-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PDCP_Parameters_ExtGroup2
 * @note ASN.1：PDCP_Parameters_ExtGroup2；源文件第 18704 行。
 */
struct PDCP_Parameters_ExtGroup2 {
    bool has_longSN_RedCap_r17; /**< longSN-RedCap-r17 是否存在。 */
    PDCP_Parameters_ExtGroup2_LongSN_RedCap_r17 longSN_RedCap_r17; /**< ASN.1 longSN-RedCap-r17；枚举；OPTIONAL。 */
    bool has_udc_r17; /**< udc-r17 是否存在。 */
    PDCP_Parameters_ExtGroup2_Udc_r17 udc_r17; /**< ASN.1 udc-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PDCP_Parameters_ExtGroup3
 * @note ASN.1：PDCP_Parameters_ExtGroup3；源文件第 18716 行。
 */
struct PDCP_Parameters_ExtGroup3 {
    bool has_longSN_NCR_r18; /**< longSN-NCR-r18 是否存在。 */
    PDCP_Parameters_ExtGroup3_LongSN_NCR_r18 longSN_NCR_r18; /**< ASN.1 longSN-NCR-r18；枚举；OPTIONAL。 */
    bool has_pdu_SetDiscard_r18; /**< pdu-SetDiscard-r18 是否存在。 */
    PDCP_Parameters_ExtGroup3_Pdu_SetDiscard_r18 pdu_SetDiscard_r18; /**< ASN.1 pdu-SetDiscard-r18；枚举；OPTIONAL。 */
    bool has_psi_BasedDiscard_r18; /**< psi-BasedDiscard-r18 是否存在。 */
    PDCP_Parameters_ExtGroup3_Psi_BasedDiscard_r18 psi_BasedDiscard_r18; /**< ASN.1 psi-BasedDiscard-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PDCP_Parameters_SupportedROHC_Profiles
 * @note ASN.1：supportedROHC-Profiles；源文件第 18672 行。
 * @note SEQUENCE { profile0x0000, profile0x0001, profile0x0002, profile0x0003, profil...
 */
struct PDCP_Parameters_SupportedROHC_Profiles {
    bool profile0x0000; /**< ASN.1 profile0x0000；BOOLEAN，1 bit。 */
    bool profile0x0001; /**< ASN.1 profile0x0001；BOOLEAN，1 bit。 */
    bool profile0x0002; /**< ASN.1 profile0x0002；BOOLEAN，1 bit。 */
    bool profile0x0003; /**< ASN.1 profile0x0003；BOOLEAN，1 bit。 */
    bool profile0x0004; /**< ASN.1 profile0x0004；BOOLEAN，1 bit。 */
    bool profile0x0006; /**< ASN.1 profile0x0006；BOOLEAN，1 bit。 */
    bool profile0x0101; /**< ASN.1 profile0x0101；BOOLEAN，1 bit。 */
    bool profile0x0102; /**< ASN.1 profile0x0102；BOOLEAN，1 bit。 */
    bool profile0x0103; /**< ASN.1 profile0x0103；BOOLEAN，1 bit。 */
    bool profile0x0104; /**< ASN.1 profile0x0104；BOOLEAN，1 bit。 */
};


/**
 * @brief PDCP_Parameters
 * @note ASN.1：PDCP-Parameters；源文件第 18671 行。
 * @note PDCP-Parameters ::= SEQUENCE { supportedROHC-Profiles, maxNumberROHC-ContextSessions, uplinkOnlyR...
 */
struct PDCP_Parameters {
    PDCP_Parameters_SupportedROHC_Profiles supportedROHC_Profiles; /**< ASN.1 supportedROHC-Profiles；结构体。 */
    PDCP_Parameters_MaxNumberROHC_ContextSessions maxNumberROHC_ContextSessions; /**< ASN.1 maxNumberROHC-ContextSessions；枚举。 */
    bool has_uplinkOnlyROHC_Profiles; /**< uplinkOnlyROHC-Profiles 是否存在。 */
    PDCP_Parameters_UplinkOnlyROHC_Profiles uplinkOnlyROHC_Profiles; /**< ASN.1 uplinkOnlyROHC-Profiles；枚举；OPTIONAL。 */
    bool has_continueROHC_Context; /**< continueROHC-Context 是否存在。 */
    PDCP_Parameters_ContinueROHC_Context continueROHC_Context; /**< ASN.1 continueROHC-Context；枚举；OPTIONAL。 */
    bool has_outOfOrderDelivery; /**< outOfOrderDelivery 是否存在。 */
    PDCP_Parameters_OutOfOrderDelivery outOfOrderDelivery; /**< ASN.1 outOfOrderDelivery；枚举；OPTIONAL。 */
    bool has_shortSN; /**< shortSN 是否存在。 */
    PDCP_Parameters_ShortSN shortSN; /**< ASN.1 shortSN；枚举；OPTIONAL。 */
    bool has_pdcp_DuplicationSRB; /**< pdcp-DuplicationSRB 是否存在。 */
    PDCP_Parameters_Pdcp_DuplicationSRB pdcp_DuplicationSRB; /**< ASN.1 pdcp-DuplicationSRB；枚举；OPTIONAL。 */
    bool has_pdcp_DuplicationMCG_OrSCG_DRB; /**< pdcp-DuplicationMCG-OrSCG-DRB 是否存在。 */
    PDCP_Parameters_Pdcp_DuplicationMCG_OrSCG_DRB pdcp_DuplicationMCG_OrSCG_DRB; /**< ASN.1 pdcp-DuplicationMCG-OrSCG-DRB；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PDCP_Parameters_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PDCP_Parameters_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PDCP_Parameters_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PDCP_ParametersMRDC
 * @note ASN.1：PDCP-ParametersMRDC；源文件第 18726 行。
 * @note PDCP-ParametersMRDC ::= SEQUENCE { pdcp-DuplicationSplitSRB, pdcp-DuplicationSplitDRB }
 */
struct PDCP_ParametersMRDC {
    bool has_pdcp_DuplicationSplitSRB; /**< pdcp-DuplicationSplitSRB 是否存在。 */
    PDCP_ParametersMRDC_Pdcp_DuplicationSplitSRB pdcp_DuplicationSplitSRB; /**< ASN.1 pdcp-DuplicationSplitSRB；枚举；OPTIONAL。 */
    bool has_pdcp_DuplicationSplitDRB; /**< pdcp-DuplicationSplitDRB 是否存在。 */
    PDCP_ParametersMRDC_Pdcp_DuplicationSplitDRB pdcp_DuplicationSplitDRB; /**< ASN.1 pdcp-DuplicationSplitDRB；枚举；OPTIONAL。 */
};


/**
 * @brief PDCP_ParametersMRDC_v1610
 * @note ASN.1：PDCP-ParametersMRDC-v1610；源文件第 18731 行。
 * @note PDCP-ParametersMRDC-v1610 ::= SEQUENCE { scg-DRB-NR-IAB-r16 }
 */
struct PDCP_ParametersMRDC_v1610 {
    bool has_scg_DRB_NR_IAB_r16; /**< scg-DRB-NR-IAB-r16 是否存在。 */
    PDCP_ParametersMRDC_v1610_Scg_DRB_NR_IAB_r16 scg_DRB_NR_IAB_r16; /**< ASN.1 scg-DRB-NR-IAB-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersCommon_v16a0
 * @note ASN.1：Phy-ParametersCommon-v16a0；源文件第 18993 行。
 * @note Phy-ParametersCommon-v16a0 ::= SEQUENCE { srs-PeriodicityAndOffsetExt-r16 }
 */
struct Phy_ParametersCommon_v16a0 {
    bool has_srs_PeriodicityAndOffsetExt_r16; /**< srs-PeriodicityAndOffsetExt-r16 是否存在。 */
    Phy_ParametersCommon_v16a0_Srs_PeriodicityAndOffsetExt_r16 srs_PeriodicityAndOffsetExt_r16; /**< ASN.1 srs-PeriodicityAndOffsetExt-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_Parameters_v16a0
 * @note ASN.1：Phy-Parameters-v16a0；源文件第 18746 行。
 * @note Phy-Parameters-v16a0 ::= SEQUENCE { phy-ParametersCommon-v16a0 }
 */
struct Phy_Parameters_v16a0 {
    bool has_phy_ParametersCommon_v16a0; /**< phy-ParametersCommon-v16a0 是否存在。 */
    Phy_ParametersCommon_v16a0 phy_ParametersCommon_v16a0; /**< ASN.1 phy-ParametersCommon-v16a0；结构体；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersMRDC_ExtGroup1
 * @note ASN.1：Phy_ParametersMRDC_ExtGroup1；源文件第 19169 行。
 */
struct Phy_ParametersMRDC_ExtGroup1 {
    bool has_spCellPlacement; /**< spCellPlacement 是否存在。 */
    CarrierAggregationVariant spCellPlacement; /**< ASN.1 spCellPlacement；结构体；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersMRDC_ExtGroup2
 * @note ASN.1：Phy_ParametersMRDC_ExtGroup2；源文件第 19172 行。
 */
struct Phy_ParametersMRDC_ExtGroup2 {
    bool has_tdd_PCellUL_TX_AllUL_Subframe_r16; /**< tdd-PCellUL-TX-AllUL-Subframe-r16 是否存在。 */
    Phy_ParametersMRDC_ExtGroup2_Tdd_PCellUL_TX_AllUL_Subframe_r16 tdd_PCellUL_TX_AllUL_Subframe_r16; /**< ASN.1 tdd-PCellUL-TX-AllUL-Subframe-r16；枚举；OPTIONAL。 */
    bool has_fdd_PCellUL_TX_AllUL_Subframe_r16; /**< fdd-PCellUL-TX-AllUL-Subframe-r16 是否存在。 */
    Phy_ParametersMRDC_ExtGroup2_Fdd_PCellUL_TX_AllUL_Subframe_r16 fdd_PCellUL_TX_AllUL_Subframe_r16; /**< ASN.1 fdd-PCellUL-TX-AllUL-Subframe-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersMRDC
 * @note ASN.1：Phy-ParametersMRDC；源文件第 19166 行。
 * @note Phy-ParametersMRDC ::= SEQUENCE { naics-Capability-List, spCellPlacement, tdd-PCellUL-TX-AllUL-Subfr...
 */
struct Phy_ParametersMRDC {
    bool has_naics_Capability_List; /**< naics-Capability-List 是否存在。 */
    NAICS_Capability_Entry* naics_Capability_List_items; /**< ASN.1 naics-Capability-List；SEQUENCE OF NAICS_Capability_Entry，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t naics_Capability_List_count; /**< naics-Capability-List 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    Phy_ParametersMRDC_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    Phy_ParametersMRDC_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief NAICS_Capability_Entry
 * @note ASN.1：NAICS-Capability-Entry；源文件第 19180 行。
 * @note NAICS-Capability-Entry ::= SEQUENCE { numberOfNAICS-CapableCC, numberOfAggregatedPRB }
 */
struct NAICS_Capability_Entry {
    int64_t numberOfNAICS_CapableCC; /**< ASN.1 numberOfNAICS-CapableCC；INTEGER (1..5)，位宽 3 bit。 */
    NAICS_Capability_Entry_NumberOfAggregatedPRB numberOfAggregatedPRB; /**< ASN.1 numberOfAggregatedPRB；枚举。 */
};


/**
 * @brief Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16
 * @note ASN.1：mux-SR-HARQ-ACK-CSI-PUCCH-OncePerSlot-r16；源文件第 19203 行。
 * @note SEQUENCE { sameSymbol-r16, diffSymbol-r16 }
 */
struct Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16 {
    bool has_sameSymbol_r16; /**< sameSymbol-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_SameSymbol_r16 sameSymbol_r16; /**< ASN.1 sameSymbol-r16；枚举；OPTIONAL。 */
    bool has_diffSymbol_r16; /**< diffSymbol-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_DiffSymbol_r16 diffSymbol_r16; /**< ASN.1 diffSymbol-r16；枚举；OPTIONAL。 */
};


/**
 * @brief Phy_ParametersSharedSpectrumChAccess_r16
 * @note ASN.1：Phy-ParametersSharedSpectrumChAccess-r16；源文件第 19190 行。
 * @note Phy-ParametersSharedSpectrumChAccess-r16 ::= SEQUENCE { ss-SINR-Meas-r16, sp-CSI-ReportPUCCH-r16, sp-CSI-ReportPUSCH-r16, ...
 */
struct Phy_ParametersSharedSpectrumChAccess_r16 {
    bool has_ss_SINR_Meas_r16; /**< ss-SINR-Meas-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Ss_SINR_Meas_r16 ss_SINR_Meas_r16; /**< ASN.1 ss-SINR-Meas-r16；枚举；OPTIONAL。 */
    bool has_sp_CSI_ReportPUCCH_r16; /**< sp-CSI-ReportPUCCH-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUCCH_r16 sp_CSI_ReportPUCCH_r16; /**< ASN.1 sp-CSI-ReportPUCCH-r16；枚举；OPTIONAL。 */
    bool has_sp_CSI_ReportPUSCH_r16; /**< sp-CSI-ReportPUSCH-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUSCH_r16 sp_CSI_ReportPUSCH_r16; /**< ASN.1 sp-CSI-ReportPUSCH-r16；枚举；OPTIONAL。 */
    bool has_dynamicSFI_r16; /**< dynamicSFI-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_DynamicSFI_r16 dynamicSFI_r16; /**< ASN.1 dynamicSFI-r16；枚举；OPTIONAL。 */
    bool has_mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16; /**< mux-SR-HARQ-ACK-CSI-PUCCH-OncePerSlot-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16 mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16; /**< ASN.1 mux-SR-HARQ-ACK-CSI-PUCCH-OncePerSlot-r16；结构体；OPTIONAL。 */
    bool has_mux_SR_HARQ_ACK_PUCCH_r16; /**< mux-SR-HARQ-ACK-PUCCH-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_PUCCH_r16 mux_SR_HARQ_ACK_PUCCH_r16; /**< ASN.1 mux-SR-HARQ-ACK-PUCCH-r16；枚举；OPTIONAL。 */
    bool has_mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16; /**< mux-SR-HARQ-ACK-CSI-PUCCH-MultiPerSlot-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16 mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16; /**< ASN.1 mux-SR-HARQ-ACK-CSI-PUCCH-MultiPerSlot-r16；枚举；OPTIONAL。 */
    bool has_mux_HARQ_ACK_PUSCH_DiffSymbol_r16; /**< mux-HARQ-ACK-PUSCH-DiffSymbol-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Mux_HARQ_ACK_PUSCH_DiffSymbol_r16 mux_HARQ_ACK_PUSCH_DiffSymbol_r16; /**< ASN.1 mux-HARQ-ACK-PUSCH-DiffSymbol-r16；枚举；OPTIONAL。 */
    bool has_pucch_Repetition_F1_3_4_r16; /**< pucch-Repetition-F1-3-4-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Pucch_Repetition_F1_3_4_r16 pucch_Repetition_F1_3_4_r16; /**< ASN.1 pucch-Repetition-F1-3-4-r16；枚举；OPTIONAL。 */
    bool has_type1_PUSCH_RepetitionMultiSlots_r16; /**< type1-PUSCH-RepetitionMultiSlots-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Type1_PUSCH_RepetitionMultiSlots_r16 type1_PUSCH_RepetitionMultiSlots_r16; /**< ASN.1 type1-PUSCH-RepetitionMultiSlots-r16；枚举；OPTIONAL。 */
    bool has_type2_PUSCH_RepetitionMultiSlots_r16; /**< type2-PUSCH-RepetitionMultiSlots-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Type2_PUSCH_RepetitionMultiSlots_r16 type2_PUSCH_RepetitionMultiSlots_r16; /**< ASN.1 type2-PUSCH-RepetitionMultiSlots-r16；枚举；OPTIONAL。 */
    bool has_pusch_RepetitionMultiSlots_r16; /**< pusch-RepetitionMultiSlots-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Pusch_RepetitionMultiSlots_r16 pusch_RepetitionMultiSlots_r16; /**< ASN.1 pusch-RepetitionMultiSlots-r16；枚举；OPTIONAL。 */
    bool has_pdsch_RepetitionMultiSlots_r16; /**< pdsch-RepetitionMultiSlots-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Pdsch_RepetitionMultiSlots_r16 pdsch_RepetitionMultiSlots_r16; /**< ASN.1 pdsch-RepetitionMultiSlots-r16；枚举；OPTIONAL。 */
    bool has_downlinkSPS_r16; /**< downlinkSPS-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_DownlinkSPS_r16 downlinkSPS_r16; /**< ASN.1 downlinkSPS-r16；枚举；OPTIONAL。 */
    bool has_configuredUL_GrantType1_r16; /**< configuredUL-GrantType1-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType1_r16 configuredUL_GrantType1_r16; /**< ASN.1 configuredUL-GrantType1-r16；枚举；OPTIONAL。 */
    bool has_configuredUL_GrantType2_r16; /**< configuredUL-GrantType2-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType2_r16 configuredUL_GrantType2_r16; /**< ASN.1 configuredUL-GrantType2-r16；枚举；OPTIONAL。 */
    bool has_pre_EmptIndication_DL_r16; /**< pre-EmptIndication-DL-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16_Pre_EmptIndication_DL_r16 pre_EmptIndication_DL_r16; /**< ASN.1 pre-EmptIndication-DL-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PosSRS_BWA_RRC_Inactive_r18
 * @note ASN.1：PosSRS-BWA-RRC-Inactive-r18；源文件第 19238 行。
 * @note PosSRS-BWA-RRC-Inactive-r18 ::= SEQUENCE { numOfCarriersIntraBandContiguous-r18, maximumAggregatedBW-TwoCarri...
 */
struct PosSRS_BWA_RRC_Inactive_r18 {
    bool has_numOfCarriersIntraBandContiguous_r18; /**< numOfCarriersIntraBandContiguous-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_NumOfCarriersIntraBandContiguous_r18 numOfCarriersIntraBandContiguous_r18; /**< ASN.1 numOfCarriersIntraBandContiguous-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_TwoCarriersFR1_r18; /**< maximumAggregatedBW-TwoCarriersFR1-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR1_r18 maximumAggregatedBW_TwoCarriersFR1_r18; /**< ASN.1 maximumAggregatedBW-TwoCarriersFR1-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_TwoCarriersFR2_r18; /**< maximumAggregatedBW-TwoCarriersFR2-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18 maximumAggregatedBW_TwoCarriersFR2_r18; /**< ASN.1 maximumAggregatedBW-TwoCarriersFR2-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_ThreeCarriersFR1_r18; /**< maximumAggregatedBW-ThreeCarriersFR1-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18 maximumAggregatedBW_ThreeCarriersFR1_r18; /**< ASN.1 maximumAggregatedBW-ThreeCarriersFR1-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_ThreeCarriersFR2_r18; /**< maximumAggregatedBW-ThreeCarriersFR2-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18 maximumAggregatedBW_ThreeCarriersFR2_r18; /**< ASN.1 maximumAggregatedBW-ThreeCarriersFR2-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceSet_r18; /**< maximumAggregatedResourceSet-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18 maximumAggregatedResourceSet_r18; /**< ASN.1 maximumAggregatedResourceSet-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourcePeriodic_r18; /**< maximumAggregatedResourcePeriodic-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18 maximumAggregatedResourcePeriodic_r18; /**< ASN.1 maximumAggregatedResourcePeriodic-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceSemi_r18; /**< maximumAggregatedResourceSemi-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18 maximumAggregatedResourceSemi_r18; /**< ASN.1 maximumAggregatedResourceSemi-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourcePeriodicPerSlot_r18; /**< maximumAggregatedResourcePeriodicPerSlot-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18 maximumAggregatedResourcePeriodicPerSlot_r18; /**< ASN.1 maximumAggregatedResourcePeriodicPerSlot-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceSemiPerSlot_r18; /**< maximumAggregatedResourceSemiPerSlot-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18 maximumAggregatedResourceSemiPerSlot_r18; /**< ASN.1 maximumAggregatedResourceSemiPerSlot-r18；枚举；OPTIONAL。 */
    bool has_supportOfSameSRS_PowerReduction_r18; /**< supportOfSameSRS-PowerReduction-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_SupportOfSameSRS_PowerReduction_r18 supportOfSameSRS_PowerReduction_r18; /**< ASN.1 supportOfSameSRS-PowerReduction-r18；枚举；OPTIONAL。 */
    bool has_guardPeriod_r18; /**< guardPeriod-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18_GuardPeriod_r18 guardPeriod_r18; /**< ASN.1 guardPeriod-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17
 * @note ASN.1：PosSRS-RRC-Inactive-OutsideInitialUL-BWP-r17；源文件第 19257 行。
 * @note PosSRS-RRC-Inactive-OutsideInitialUL-BWP-r17 ::= SEQUENCE { maxSRSposBandwidthForEachSCS-withinCC-FR1-r17, maxSRSposBandwidthF...
 */
struct PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17 {
    bool has_maxSRSposBandwidthForEachSCS_withinCC_FR1_r17; /**< maxSRSposBandwidthForEachSCS-withinCC-FR1-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17 maxSRSposBandwidthForEachSCS_withinCC_FR1_r17; /**< ASN.1 maxSRSposBandwidthForEachSCS-withinCC-FR1-r17；枚举；OPTIONAL。 */
    bool has_maxSRSposBandwidthForEachSCS_withinCC_FR2_r17; /**< maxSRSposBandwidthForEachSCS-withinCC-FR2-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR2_r17 maxSRSposBandwidthForEachSCS_withinCC_FR2_r17; /**< ASN.1 maxSRSposBandwidthForEachSCS-withinCC-FR2-r17；枚举；OPTIONAL。 */
    bool has_maxNumOfSRSposResourceSets_r17; /**< maxNumOfSRSposResourceSets-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17 maxNumOfSRSposResourceSets_r17; /**< ASN.1 maxNumOfSRSposResourceSets-r17；枚举；OPTIONAL。 */
    bool has_maxNumOfPeriodicSRSposResources_r17; /**< maxNumOfPeriodicSRSposResources-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17 maxNumOfPeriodicSRSposResources_r17; /**< ASN.1 maxNumOfPeriodicSRSposResources-r17；枚举；OPTIONAL。 */
    bool has_maxNumOfPeriodicSRSposResourcesPerSlot_r17; /**< maxNumOfPeriodicSRSposResourcesPerSlot-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17 maxNumOfPeriodicSRSposResourcesPerSlot_r17; /**< ASN.1 maxNumOfPeriodicSRSposResourcesPerSlot-r17；枚举；OPTIONAL。 */
    bool has_differentNumerologyBetweenSRSposAndInitialBWP_r17; /**< differentNumerologyBetweenSRSposAndInitialBWP-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentNumerologyBetweenSRSposAndInitialBWP_r17 differentNumerologyBetweenSRSposAndInitialBWP_r17; /**< ASN.1 differentNumerologyBetweenSRSposAndInitialBWP-r17；枚举；OPTIONAL。 */
    bool has_srsPosWithoutRestrictionOnBWP_r17; /**< srsPosWithoutRestrictionOnBWP-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SrsPosWithoutRestrictionOnBWP_r17 srsPosWithoutRestrictionOnBWP_r17; /**< ASN.1 srsPosWithoutRestrictionOnBWP-r17；枚举；OPTIONAL。 */
    bool has_maxNumOfPeriodicAndSemipersistentSRSposResources_r17; /**< maxNumOfPeriodicAndSemipersistentSRSposResources-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17 maxNumOfPeriodicAndSemipersistentSRSposResources_r17; /**< ASN.1 maxNumOfPeriodicAndSemipersistentSRSposResources-r17；枚举；OPTIONAL。 */
    bool has_maxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17; /**< maxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17 maxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17; /**< ASN.1 maxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot-r17；枚举；OPTIONAL。 */
    bool has_differentCenterFreqBetweenSRSposAndInitialBWP_r17; /**< differentCenterFreqBetweenSRSposAndInitialBWP-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentCenterFreqBetweenSRSposAndInitialBWP_r17 differentCenterFreqBetweenSRSposAndInitialBWP_r17; /**< ASN.1 differentCenterFreqBetweenSRSposAndInitialBWP-r17；枚举；OPTIONAL。 */
    bool has_switchingTimeSRS_TX_OtherTX_r17; /**< switchingTimeSRS-TX-OtherTX-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SwitchingTimeSRS_TX_OtherTX_r17 switchingTimeSRS_TX_OtherTX_r17; /**< ASN.1 switchingTimeSRS-TX-OtherTX-r17；枚举；OPTIONAL。 */
    bool has_maxNumOfSemiPersistentSRSposResources_r17; /**< maxNumOfSemiPersistentSRSposResources-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17 maxNumOfSemiPersistentSRSposResources_r17; /**< ASN.1 maxNumOfSemiPersistentSRSposResources-r17；枚举；OPTIONAL。 */
    bool has_maxNumOfSemiPersistentSRSposResourcesPerSlot_r17; /**< maxNumOfSemiPersistentSRSposResourcesPerSlot-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17 maxNumOfSemiPersistentSRSposResourcesPerSlot_r17; /**< ASN.1 maxNumOfSemiPersistentSRSposResourcesPerSlot-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PosSRS_TxFrequencyHoppingRRC_Connected_r18
 * @note ASN.1：PosSRS-TxFrequencyHoppingRRC-Connected-r18；源文件第 19280 行。
 * @note PosSRS-TxFrequencyHoppingRRC-Connected-r18 ::= SEQUENCE { maximumSRS-BandwidthAcrossAllHopsFR1-r18, maximumSRS-BandwidthAcro...
 */
struct PosSRS_TxFrequencyHoppingRRC_Connected_r18 {
    bool has_maximumSRS_BandwidthAcrossAllHopsFR1_r18; /**< maximumSRS-BandwidthAcrossAllHopsFR1-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR1_r18 maximumSRS_BandwidthAcrossAllHopsFR1_r18; /**< ASN.1 maximumSRS-BandwidthAcrossAllHopsFR1-r18；枚举；OPTIONAL。 */
    bool has_maximumSRS_BandwidthAcrossAllHopsFR2_r18; /**< maximumSRS-BandwidthAcrossAllHopsFR2-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR2_r18 maximumSRS_BandwidthAcrossAllHopsFR2_r18; /**< ASN.1 maximumSRS-BandwidthAcrossAllHopsFR2-r18；枚举；OPTIONAL。 */
    bool has_maximumTxFH_Hops_r18; /**< maximumTxFH-Hops-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumTxFH_Hops_r18 maximumTxFH_Hops_r18; /**< ASN.1 maximumTxFH-Hops-r18；枚举；OPTIONAL。 */
    bool has_rf_TxRetunTimeFR1_r18; /**< rf-TxRetunTimeFR1-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR1_r18 rf_TxRetunTimeFR1_r18; /**< ASN.1 rf-TxRetunTimeFR1-r18；枚举；OPTIONAL。 */
    bool has_rf_TxRetunTimeFR2_r18; /**< rf-TxRetunTimeFR2-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR2_r18 rf_TxRetunTimeFR2_r18; /**< ASN.1 rf-TxRetunTimeFR2-r18；枚举；OPTIONAL。 */
    bool has_switchTimeBetweenActiveBWP_FrequencyHop_r18; /**< switchTimeBetweenActiveBWP-FrequencyHop-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_r18 switchTimeBetweenActiveBWP_FrequencyHop_r18; /**< ASN.1 switchTimeBetweenActiveBWP-FrequencyHop-r18；枚举；OPTIONAL。 */
    bool has_numOfOverlappingPRB_r18; /**< numOfOverlappingPRB-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_NumOfOverlappingPRB_r18 numOfOverlappingPRB_r18; /**< ASN.1 numOfOverlappingPRB-r18；枚举；OPTIONAL。 */
    bool has_maximumSRS_ResourcePeriodic_r18; /**< maximumSRS-ResourcePeriodic-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18 maximumSRS_ResourcePeriodic_r18; /**< ASN.1 maximumSRS-ResourcePeriodic-r18；枚举；OPTIONAL。 */
    bool has_maximumSRS_ResourceAperiodic_r18; /**< maximumSRS-ResourceAperiodic-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18 maximumSRS_ResourceAperiodic_r18; /**< ASN.1 maximumSRS-ResourceAperiodic-r18；枚举；OPTIONAL。 */
    bool has_maximumSRS_ResourceSemipersistent_r18; /**< maximumSRS-ResourceSemipersistent-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18 maximumSRS_ResourceSemipersistent_r18; /**< ASN.1 maximumSRS-ResourceSemipersistent-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PosSRS_TxFrequencyHoppingRRC_Inactive_r18
 * @note ASN.1：PosSRS-TxFrequencyHoppingRRC-Inactive-r18；源文件第 19297 行。
 * @note PosSRS-TxFrequencyHoppingRRC-Inactive-r18 ::= SEQUENCE { maximumSRS-BandwidthAcrossAllHops-FR1-r18, maximumSRS-BandwidthAcr...
 */
struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18 {
    bool has_maximumSRS_BandwidthAcrossAllHops_FR1_r18; /**< maximumSRS-BandwidthAcrossAllHops-FR1-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR1_r18 maximumSRS_BandwidthAcrossAllHops_FR1_r18; /**< ASN.1 maximumSRS-BandwidthAcrossAllHops-FR1-r18；枚举；OPTIONAL。 */
    bool has_maximumSRS_BandwidthAcrossAllHops_FR2_r18; /**< maximumSRS-BandwidthAcrossAllHops-FR2-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR2_r18 maximumSRS_BandwidthAcrossAllHops_FR2_r18; /**< ASN.1 maximumSRS-BandwidthAcrossAllHops-FR2-r18；枚举；OPTIONAL。 */
    bool has_maximumTxFH_Hops_r18; /**< maximumTxFH-Hops-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumTxFH_Hops_r18 maximumTxFH_Hops_r18; /**< ASN.1 maximumTxFH-Hops-r18；枚举；OPTIONAL。 */
    bool has_rf_TxRetunTimeFR1_r18; /**< rf-TxRetunTimeFR1-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR1_r18 rf_TxRetunTimeFR1_r18; /**< ASN.1 rf-TxRetunTimeFR1-r18；枚举；OPTIONAL。 */
    bool has_rf_TxRetunTimeFR2_r18; /**< rf-TxRetunTimeFR2-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR2_r18 rf_TxRetunTimeFR2_r18; /**< ASN.1 rf-TxRetunTimeFR2-r18；枚举；OPTIONAL。 */
    bool has_switchTimeBetweenActiveBWP_FrequencyHop; /**< switchTimeBetweenActiveBWP-FrequencyHop 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_SwitchTimeBetweenActiveBWP_FrequencyHop switchTimeBetweenActiveBWP_FrequencyHop; /**< ASN.1 switchTimeBetweenActiveBWP-FrequencyHop；枚举；OPTIONAL。 */
    bool has_numOfOverlappingPRB_r18; /**< numOfOverlappingPRB-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_NumOfOverlappingPRB_r18 numOfOverlappingPRB_r18; /**< ASN.1 numOfOverlappingPRB-r18；枚举；OPTIONAL。 */
    bool has_maximumSRS_Resource_Periodic_r18; /**< maximumSRS-Resource-Periodic-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18 maximumSRS_Resource_Periodic_r18; /**< ASN.1 maximumSRS-Resource-Periodic-r18；枚举；OPTIONAL。 */
    bool has_maximumSRS_Resource_Semipersistent_r18; /**< maximumSRS-Resource-Semipersistent-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18 maximumSRS_Resource_Semipersistent_r18; /**< ASN.1 maximumSRS-Resource-Semipersistent-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PowSav_ParametersCommon_r16
 * @note ASN.1：PowSav-ParametersCommon-r16；源文件第 19324 行。
 * @note PowSav-ParametersCommon-r16 ::= SEQUENCE { drx-Preference-r16, maxCC-Preference-r16, releasePreference-r16, m...
 */
struct PowSav_ParametersCommon_r16 {
    bool has_drx_Preference_r16; /**< drx-Preference-r16 是否存在。 */
    PowSav_ParametersCommon_r16_Drx_Preference_r16 drx_Preference_r16; /**< ASN.1 drx-Preference-r16；枚举；OPTIONAL。 */
    bool has_maxCC_Preference_r16; /**< maxCC-Preference-r16 是否存在。 */
    PowSav_ParametersCommon_r16_MaxCC_Preference_r16 maxCC_Preference_r16; /**< ASN.1 maxCC-Preference-r16；枚举；OPTIONAL。 */
    bool has_releasePreference_r16; /**< releasePreference-r16 是否存在。 */
    PowSav_ParametersCommon_r16_ReleasePreference_r16 releasePreference_r16; /**< ASN.1 releasePreference-r16；枚举；OPTIONAL。 */
    bool has_minSchedulingOffsetPreference_r16; /**< minSchedulingOffsetPreference-r16 是否存在。 */
    PowSav_ParametersCommon_r16_MinSchedulingOffsetPreference_r16 minSchedulingOffsetPreference_r16; /**< ASN.1 minSchedulingOffsetPreference-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PowSav_ParametersFRX_Diff_r16
 * @note ASN.1：PowSav-ParametersFRX-Diff-r16；源文件第 19333 行。
 * @note PowSav-ParametersFRX-Diff-r16 ::= SEQUENCE { maxBW-Preference-r16, maxMIMO-LayerPreference-r16 }
 */
struct PowSav_ParametersFRX_Diff_r16 {
    bool has_maxBW_Preference_r16; /**< maxBW-Preference-r16 是否存在。 */
    PowSav_ParametersFRX_Diff_r16_MaxBW_Preference_r16 maxBW_Preference_r16; /**< ASN.1 maxBW-Preference-r16；枚举；OPTIONAL。 */
    bool has_maxMIMO_LayerPreference_r16; /**< maxMIMO-LayerPreference-r16 是否存在。 */
    PowSav_ParametersFRX_Diff_r16_MaxMIMO_LayerPreference_r16 maxMIMO_LayerPreference_r16; /**< ASN.1 maxMIMO-LayerPreference-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PowSav_Parameters_r16
 * @note ASN.1：PowSav-Parameters-r16；源文件第 19313 行。
 * @note PowSav-Parameters-r16 ::= SEQUENCE { powSav-ParametersCommon-r16, powSav-ParametersFRX-Diff-r16 }
 */
struct PowSav_Parameters_r16 {
    bool has_powSav_ParametersCommon_r16; /**< powSav-ParametersCommon-r16 是否存在。 */
    PowSav_ParametersCommon_r16 powSav_ParametersCommon_r16; /**< ASN.1 powSav-ParametersCommon-r16；结构体；OPTIONAL。 */
    bool has_powSav_ParametersFRX_Diff_r16; /**< powSav-ParametersFRX-Diff-r16 是否存在。 */
    PowSav_ParametersFRX_Diff_r16 powSav_ParametersFRX_Diff_r16; /**< ASN.1 powSav-ParametersFRX-Diff-r16；结构体；OPTIONAL。 */
};


/**
 * @brief PowSav_ParametersFR2_2_r17
 * @note ASN.1：PowSav-ParametersFR2-2-r17；源文件第 19339 行。
 * @note PowSav-ParametersFR2-2-r17 ::= SEQUENCE { maxBW-Preference-r17, maxMIMO-LayerPreference-r17 }
 */
struct PowSav_ParametersFR2_2_r17 {
    bool has_maxBW_Preference_r17; /**< maxBW-Preference-r17 是否存在。 */
    PowSav_ParametersFR2_2_r17_MaxBW_Preference_r17 maxBW_Preference_r17; /**< ASN.1 maxBW-Preference-r17；枚举；OPTIONAL。 */
    bool has_maxMIMO_LayerPreference_r17; /**< maxMIMO-LayerPreference-r17 是否存在。 */
    PowSav_ParametersFR2_2_r17_MaxMIMO_LayerPreference_r17 maxMIMO_LayerPreference_r17; /**< ASN.1 maxMIMO-LayerPreference-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PowSav_Parameters_v1700
 * @note ASN.1：PowSav-Parameters-v1700；源文件第 19319 行。
 * @note PowSav-Parameters-v1700 ::= SEQUENCE { powSav-ParametersFR2-2-r17 }
 */
struct PowSav_Parameters_v1700 {
    bool has_powSav_ParametersFR2_2_r17; /**< powSav-ParametersFR2-2-r17 是否存在。 */
    PowSav_ParametersFR2_2_r17 powSav_ParametersFR2_2_r17; /**< ASN.1 powSav-ParametersFR2-2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17
 * @note ASN.1：ppw-durationOfPRS-Processing-r17/ppw-durationOfPRS-Processing1-r17；源文件第 19367 行。
 * @note SEQUENCE { ppw-durationOfPRS-ProcessingSymbolsN-r17, ppw-durationOfPRS-Proces...
 */
struct PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb ppw_durationOfPRS_ProcessingSymbolsN_r17; /**< ASN.1 ppw-durationOfPRS-ProcessingSymbolsN-r17；枚举。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43 ppw_durationOfPRS_ProcessingSymbolsT_r17; /**< ASN.1 ppw-durationOfPRS-ProcessingSymbolsT-r17；枚举。 */
};


/**
 * @brief PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17
 * @note ASN.1：ppw-durationOfPRS-Processing-r17/ppw-durationOfPRS-Processing2-r17；源文件第 19373 行。
 * @note SEQUENCE { ppw-durationOfPRS-ProcessingSymbolsN2-r17, ppw-durationOfPRS-Proce...
 */
struct PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07 ppw_durationOfPRS_ProcessingSymbolsN2_r17; /**< ASN.1 ppw-durationOfPRS-ProcessingSymbolsN2-r17；枚举。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_5fc2046e ppw_durationOfPRS_ProcessingSymbolsT2_r17; /**< ASN.1 ppw-durationOfPRS-ProcessingSymbolsT2-r17；枚举。 */
};


/**
 * @brief PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17
 * @note ASN.1：ppw-durationOfPRS-Processing-r17；源文件第 19366 行。
 * @note CHOICE { ppw-durationOfPRS-Processing1-r17, ppw-durationOfPRS-Processing2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag_ppw_durationOfPRS_Processing1_r17 = 0, /**< ASN.1 ppw-durationOfPRS-Processing1-r17 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag_ppw_durationOfPRS_Processing2_r17 = 1, /**< ASN.1 ppw-durationOfPRS-Processing2-r17 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag;

struct PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17 ppw_durationOfPRS_Processing1_r17; /**< ASN.1 ppw-durationOfPRS-Processing1-r17 */
        PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17 ppw_durationOfPRS_Processing2_r17; /**< ASN.1 ppw-durationOfPRS-Processing2-r17 */
    } u;
};


/**
 * @brief PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17
 * @note ASN.1：ppw-maxNumOfDL-PRS-ResProcessedPerSlot-r17；源文件第 19379 行。
 * @note SEQUENCE { scs15-r17, scs30-r17, scs60-r17, scs120-r17 }
 */
struct PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17 {
    bool has_scs15_r17; /**< scs15-r17 是否存在。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17 scs15_r17; /**< ASN.1 scs15-r17；枚举；OPTIONAL。 */
    bool has_scs30_r17; /**< scs30-r17 是否存在。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17 scs30_r17; /**< ASN.1 scs30-r17；枚举；OPTIONAL。 */
    bool has_scs60_r17; /**< scs60-r17 是否存在。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17 scs60_r17; /**< ASN.1 scs60-r17；枚举；OPTIONAL。 */
    bool has_scs120_r17; /**< scs120-r17 是否存在。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17 scs120_r17; /**< ASN.1 scs120-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17
 * @note ASN.1：ppw-maxNumOfDL-Bandwidth-r17；源文件第 19386 行。
 * @note CHOICE { fr1-r17, fr2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag_fr1_r17 = 0, /**< ASN.1 fr1-r17 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag_fr2_r17 = 1, /**< ASN.1 fr2-r17 */
} PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag;

struct PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17 fr1_r17; /**< ASN.1 fr1-r17 */
        PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr2_r17 fr2_r17; /**< ASN.1 fr2-r17 */
    } u;
};


/**
 * @brief PRS_ProcessingCapabilityOutsideMGinPPWperType_r17
 * @note ASN.1：PRS-ProcessingCapabilityOutsideMGinPPWperType-r17；源文件第 19363 行。
 * @note PRS-ProcessingCapabilityOutsideMGinPPWperType-r17 ::= SEQUENCE { prsProcessingType-r17, ppw-dl-PRS-BufferType-r17, ppw-durationOfPR...
 */
struct PRS_ProcessingCapabilityOutsideMGinPPWperType_r17 {
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_PrsProcessingType_r17 prsProcessingType_r17; /**< ASN.1 prsProcessingType-r17；枚举。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_dl_PRS_BufferType_r17 ppw_dl_PRS_BufferType_r17; /**< ASN.1 ppw-dl-PRS-BufferType-r17；枚举。 */
    bool has_ppw_durationOfPRS_Processing_r17; /**< ppw-durationOfPRS-Processing-r17 是否存在。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17 ppw_durationOfPRS_Processing_r17; /**< ASN.1 ppw-durationOfPRS-Processing-r17；结构体；OPTIONAL。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17 ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17; /**< ASN.1 ppw-maxNumOfDL-PRS-ResProcessedPerSlot-r17；结构体。 */
    bool has_ppw_maxNumOfDL_Bandwidth_r17; /**< ppw-maxNumOfDL-Bandwidth-r17 是否存在。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17 ppw_maxNumOfDL_Bandwidth_r17; /**< ASN.1 ppw-maxNumOfDL-Bandwidth-r17；结构体；OPTIONAL。 */
};


/**
 * @brief RedCapParameters_r17
 * @note ASN.1：RedCapParameters-r17；源文件第 19400 行。
 * @note RedCapParameters-r17 ::= SEQUENCE { supportOfRedCap-r17, supportOf16DRB-RedCap-r17 }
 */
struct RedCapParameters_r17 {
    bool has_supportOfRedCap_r17; /**< supportOfRedCap-r17 是否存在。 */
    RedCapParameters_r17_SupportOfRedCap_r17 supportOfRedCap_r17; /**< ASN.1 supportOfRedCap-r17；枚举；OPTIONAL。 */
    bool has_supportOf16DRB_RedCap_r17; /**< supportOf16DRB-RedCap-r17 是否存在。 */
    RedCapParameters_r17_SupportOf16DRB_RedCap_r17 supportOf16DRB_RedCap_r17; /**< ASN.1 supportOf16DRB-RedCap-r17；枚举；OPTIONAL。 */
};


/**
 * @brief RedCapParameters_v1740
 * @note ASN.1：RedCapParameters-v1740；源文件第 19406 行。
 * @note RedCapParameters-v1740 ::= SEQUENCE { ncd-SSB-ForRedCapInitialBWP-SDT-r17 }
 */
struct RedCapParameters_v1740 {
    bool has_ncd_SSB_ForRedCapInitialBWP_SDT_r17; /**< ncd-SSB-ForRedCapInitialBWP-SDT-r17 是否存在。 */
    RedCapParameters_v1740_Ncd_SSB_ForRedCapInitialBWP_SDT_r17 ncd_SSB_ForRedCapInitialBWP_SDT_r17; /**< ASN.1 ncd-SSB-ForRedCapInitialBWP-SDT-r17；枚举；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup1
 * @note ASN.1：RF_Parameters_ExtGroup1；源文件第 19418 行。
 */
struct RF_Parameters_ExtGroup1 {
    bool has_supportedBandCombinationList_v1540; /**< supportedBandCombinationList-v1540 是否存在。 */
    BandCombinationList_v1540 supportedBandCombinationList_v1540; /**< ASN.1 supportedBandCombinationList-v1540；SEQUENCE OF BandCombination_v1540，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_srs_SwitchingTimeRequested; /**< srs-SwitchingTimeRequested 是否存在。 */
    RF_Parameters_ExtGroup1_Srs_SwitchingTimeRequested srs_SwitchingTimeRequested; /**< ASN.1 srs-SwitchingTimeRequested；枚举；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup2
 * @note ASN.1：RF_Parameters_ExtGroup2；源文件第 19422 行。
 */
struct RF_Parameters_ExtGroup2 {
    bool has_supportedBandCombinationList_v1550; /**< supportedBandCombinationList-v1550 是否存在。 */
    BandCombinationList_v1550 supportedBandCombinationList_v1550; /**< ASN.1 supportedBandCombinationList-v1550；SEQUENCE OF BandCombination_v1550，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup3
 * @note ASN.1：RF_Parameters_ExtGroup3；源文件第 19425 行。
 */
struct RF_Parameters_ExtGroup3 {
    bool has_supportedBandCombinationList_v1560; /**< supportedBandCombinationList-v1560 是否存在。 */
    BandCombinationList_v1560 supportedBandCombinationList_v1560; /**< ASN.1 supportedBandCombinationList-v1560；SEQUENCE OF BandCombination_v1560，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup4
 * @note ASN.1：RF_Parameters_ExtGroup4；源文件第 19428 行。
 */
struct RF_Parameters_ExtGroup4 {
    bool has_supportedBandCombinationList_v1610; /**< supportedBandCombinationList-v1610 是否存在。 */
    BandCombinationList_v1610 supportedBandCombinationList_v1610; /**< ASN.1 supportedBandCombinationList-v1610；SEQUENCE OF BandCombination_v1610，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListSidelinkEUTRA_NR_r16; /**< supportedBandCombinationListSidelinkEUTRA-NR-r16 是否存在。 */
    BandCombinationListSidelinkEUTRA_NR_r16 supportedBandCombinationListSidelinkEUTRA_NR_r16; /**< ASN.1 supportedBandCombinationListSidelinkEUTRA-NR-r16；SEQUENCE OF BandCombinationParametersSidelinkEUTRA_NR_r16，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_r16; /**< supportedBandCombinationList-UplinkTxSwitch-r16 是否存在。 */
    BandCombinationList_UplinkTxSwitch_r16 supportedBandCombinationList_UplinkTxSwitch_r16; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-r16；SEQUENCE OF BandCombination_UplinkTxSwitch_r16，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup5
 * @note ASN.1：RF_Parameters_ExtGroup5；源文件第 19433 行。
 */
struct RF_Parameters_ExtGroup5 {
    bool has_supportedBandCombinationList_v1630; /**< supportedBandCombinationList-v1630 是否存在。 */
    BandCombinationList_v1630 supportedBandCombinationList_v1630; /**< ASN.1 supportedBandCombinationList-v1630；SEQUENCE OF BandCombination_v1630，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListSidelinkEUTRA_NR_v1630; /**< supportedBandCombinationListSidelinkEUTRA-NR-v1630 是否存在。 */
    BandCombinationListSidelinkEUTRA_NR_v1630 supportedBandCombinationListSidelinkEUTRA_NR_v1630; /**< ASN.1 supportedBandCombinationListSidelinkEUTRA-NR-v1630；SEQUENCE OF BandCombinationParametersSidelinkEUTRA_NR_v1630，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1630; /**< supportedBandCombinationList-UplinkTxSwitch-v1630 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1630 supportedBandCombinationList_UplinkTxSwitch_v1630; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1630；SEQUENCE OF BandCombination_UplinkTxSwitch_v1630，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup6
 * @note ASN.1：RF_Parameters_ExtGroup6；源文件第 19438 行。
 */
struct RF_Parameters_ExtGroup6 {
    bool has_supportedBandCombinationList_v1640; /**< supportedBandCombinationList-v1640 是否存在。 */
    BandCombinationList_v1640 supportedBandCombinationList_v1640; /**< ASN.1 supportedBandCombinationList-v1640；SEQUENCE OF BandCombination_v1640，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1640; /**< supportedBandCombinationList-UplinkTxSwitch-v1640 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1640 supportedBandCombinationList_UplinkTxSwitch_v1640; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1640；SEQUENCE OF BandCombination_UplinkTxSwitch_v1640，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup7
 * @note ASN.1：RF_Parameters_ExtGroup7；源文件第 19442 行。
 */
struct RF_Parameters_ExtGroup7 {
    bool has_supportedBandCombinationList_v1650; /**< supportedBandCombinationList-v1650 是否存在。 */
    BandCombinationList_v1650 supportedBandCombinationList_v1650; /**< ASN.1 supportedBandCombinationList-v1650；SEQUENCE OF BandCombination_v1650，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1650; /**< supportedBandCombinationList-UplinkTxSwitch-v1650 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1650 supportedBandCombinationList_UplinkTxSwitch_v1650; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1650；SEQUENCE OF BandCombination_UplinkTxSwitch_v1650，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup8
 * @note ASN.1：RF_Parameters_ExtGroup8；源文件第 19446 行。
 */
struct RF_Parameters_ExtGroup8 {
    bool has_extendedBand_n77_r16; /**< extendedBand-n77-r16 是否存在。 */
    RF_Parameters_ExtGroup8_ExtendedBand_n77_r16 extendedBand_n77_r16; /**< ASN.1 extendedBand-n77-r16；枚举；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup9
 * @note ASN.1：RF_Parameters_ExtGroup9；源文件第 19449 行。
 */
struct RF_Parameters_ExtGroup9 {
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1670; /**< supportedBandCombinationList-UplinkTxSwitch-v1670 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1670 supportedBandCombinationList_UplinkTxSwitch_v1670; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1670；SEQUENCE OF BandCombination_UplinkTxSwitch_v1670，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup10
 * @note ASN.1：RF_Parameters_ExtGroup10；源文件第 19452 行。
 */
struct RF_Parameters_ExtGroup10 {
    bool has_supportedBandCombinationList_v1680; /**< supportedBandCombinationList-v1680 是否存在。 */
    BandCombinationList_v1680 supportedBandCombinationList_v1680; /**< ASN.1 supportedBandCombinationList-v1680；SEQUENCE OF BandCombination_v1680，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup11
 * @note ASN.1：RF_Parameters_ExtGroup11；源文件第 19455 行。
 */
struct RF_Parameters_ExtGroup11 {
    bool has_supportedBandCombinationList_v1690; /**< supportedBandCombinationList-v1690 是否存在。 */
    BandCombinationList_v1690 supportedBandCombinationList_v1690; /**< ASN.1 supportedBandCombinationList-v1690；SEQUENCE OF BandCombination_v1690，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1690; /**< supportedBandCombinationList-UplinkTxSwitch-v1690 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1690 supportedBandCombinationList_UplinkTxSwitch_v1690; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1690；SEQUENCE OF BandCombination_UplinkTxSwitch_v1690，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup12
 * @note ASN.1：RF_Parameters_ExtGroup12；源文件第 19459 行。
 */
struct RF_Parameters_ExtGroup12 {
    bool has_supportedBandCombinationList_v1700; /**< supportedBandCombinationList-v1700 是否存在。 */
    BandCombinationList_v1700 supportedBandCombinationList_v1700; /**< ASN.1 supportedBandCombinationList-v1700；SEQUENCE OF BandCombination_v1700，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1700; /**< supportedBandCombinationList-UplinkTxSwitch-v1700 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1700 supportedBandCombinationList_UplinkTxSwitch_v1700; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1700；SEQUENCE OF BandCombination_UplinkTxSwitch_v1700，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListSL_RelayDiscovery_r17; /**< supportedBandCombinationListSL-RelayDiscovery-r17 是否存在。 */
    OctetString supportedBandCombinationListSL_RelayDiscovery_r17; /**< ASN.1 supportedBandCombinationListSL-RelayDiscovery-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListSL_NonRelayDiscovery_r17; /**< supportedBandCombinationListSL-NonRelayDiscovery-r17 是否存在。 */
    OctetString supportedBandCombinationListSL_NonRelayDiscovery_r17; /**< ASN.1 supportedBandCombinationListSL-NonRelayDiscovery-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListSidelinkEUTRA_NR_v1710; /**< supportedBandCombinationListSidelinkEUTRA-NR-v1710 是否存在。 */
    BandCombinationListSidelinkEUTRA_NR_v1710 supportedBandCombinationListSidelinkEUTRA_NR_v1710; /**< ASN.1 supportedBandCombinationListSidelinkEUTRA-NR-v1710；SEQUENCE OF BandCombinationParametersSidelinkEUTRA_NR_v1710，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_sidelinkRequested_r17; /**< sidelinkRequested-r17 是否存在。 */
    RF_Parameters_ExtGroup12_SidelinkRequested_r17 sidelinkRequested_r17; /**< ASN.1 sidelinkRequested-r17；枚举；OPTIONAL。 */
    bool has_extendedBand_n77_2_r17; /**< extendedBand-n77-2-r17 是否存在。 */
    RF_Parameters_ExtGroup12_ExtendedBand_n77_2_r17 extendedBand_n77_2_r17; /**< ASN.1 extendedBand-n77-2-r17；枚举；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup13
 * @note ASN.1：RF_Parameters_ExtGroup13；源文件第 19468 行。
 */
struct RF_Parameters_ExtGroup13 {
    bool has_supportedBandCombinationList_v1720; /**< supportedBandCombinationList-v1720 是否存在。 */
    BandCombinationList_v1720 supportedBandCombinationList_v1720; /**< ASN.1 supportedBandCombinationList-v1720；SEQUENCE OF BandCombination_v1720，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1720; /**< supportedBandCombinationList-UplinkTxSwitch-v1720 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1720 supportedBandCombinationList_UplinkTxSwitch_v1720; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1720；SEQUENCE OF BandCombination_UplinkTxSwitch_v1720，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup14
 * @note ASN.1：RF_Parameters_ExtGroup14；源文件第 19472 行。
 */
struct RF_Parameters_ExtGroup14 {
    bool has_supportedBandCombinationList_v1730; /**< supportedBandCombinationList-v1730 是否存在。 */
    BandCombinationList_v1730 supportedBandCombinationList_v1730; /**< ASN.1 supportedBandCombinationList-v1730；SEQUENCE OF BandCombination_v1730，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1730; /**< supportedBandCombinationList-UplinkTxSwitch-v1730 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1730 supportedBandCombinationList_UplinkTxSwitch_v1730; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1730；SEQUENCE OF BandCombination_UplinkTxSwitch_v1730，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListSL_RelayDiscovery_v1730; /**< supportedBandCombinationListSL-RelayDiscovery-v1730 是否存在。 */
    BandCombinationListSL_Discovery_r17 supportedBandCombinationListSL_RelayDiscovery_v1730; /**< ASN.1 supportedBandCombinationListSL-RelayDiscovery-v1730；SEQUENCE OF BandParametersSidelinkDiscovery_r17，SIZE (1..32)；OPTIONAL。 */
    bool has_supportedBandCombinationListSL_NonRelayDiscovery_v1730; /**< supportedBandCombinationListSL-NonRelayDiscovery-v1730 是否存在。 */
    BandCombinationListSL_Discovery_r17 supportedBandCombinationListSL_NonRelayDiscovery_v1730; /**< ASN.1 supportedBandCombinationListSL-NonRelayDiscovery-v1730；SEQUENCE OF BandParametersSidelinkDiscovery_r17，SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup15
 * @note ASN.1：RF_Parameters_ExtGroup15；源文件第 19478 行。
 */
struct RF_Parameters_ExtGroup15 {
    bool has_supportedBandCombinationList_v1740; /**< supportedBandCombinationList-v1740 是否存在。 */
    BandCombinationList_v1740 supportedBandCombinationList_v1740; /**< ASN.1 supportedBandCombinationList-v1740；SEQUENCE OF BandCombination_v1740，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1740; /**< supportedBandCombinationList-UplinkTxSwitch-v1740 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1740 supportedBandCombinationList_UplinkTxSwitch_v1740; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1740；SEQUENCE OF BandCombination_UplinkTxSwitch_v1740，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup16
 * @note ASN.1：RF_Parameters_ExtGroup16；源文件第 19482 行。
 */
struct RF_Parameters_ExtGroup16 {
    bool has_supportedBandCombinationList_v1760; /**< supportedBandCombinationList-v1760 是否存在。 */
    BandCombinationList_v1760 supportedBandCombinationList_v1760; /**< ASN.1 supportedBandCombinationList-v1760；SEQUENCE OF BandCombination_v1760，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1760; /**< supportedBandCombinationList-UplinkTxSwitch-v1760 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1760 supportedBandCombinationList_UplinkTxSwitch_v1760; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1760；SEQUENCE OF BandCombination_UplinkTxSwitch_v1760，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup17
 * @note ASN.1：RF_Parameters_ExtGroup17；源文件第 19486 行。
 */
struct RF_Parameters_ExtGroup17 {
    bool has_dummy1; /**< dummy1 是否存在。 */
    BandCombinationList_v1770 dummy1; /**< ASN.1 dummy1；SEQUENCE OF BandCombination_v1770，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1770 dummy2; /**< ASN.1 dummy2；SEQUENCE OF BandCombination_UplinkTxSwitch_v1770，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup18
 * @note ASN.1：RF_Parameters_ExtGroup18；源文件第 19490 行。
 */
struct RF_Parameters_ExtGroup18 {
    bool has_supportedBandCombinationList_v1780; /**< supportedBandCombinationList-v1780 是否存在。 */
    BandCombinationList_v1780 supportedBandCombinationList_v1780; /**< ASN.1 supportedBandCombinationList-v1780；SEQUENCE OF BandCombination_v1780，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1780; /**< supportedBandCombinationList-UplinkTxSwitch-v1780 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1780 supportedBandCombinationList_UplinkTxSwitch_v1780; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1780；SEQUENCE OF BandCombination_UplinkTxSwitch_v1780，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18
 * @note ASN.1：supportedBandCombinationListSL-U2U-Relay-r18；源文件第 19497 行。
 * @note SEQUENCE { supportedBandCombinationListSL-U2U-RelayDiscovery-r18, supportedBa...
 */
struct RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18 {
    bool has_supportedBandCombinationListSL_U2U_RelayDiscovery_r18; /**< supportedBandCombinationListSL-U2U-RelayDiscovery-r18 是否存在。 */
    OctetString supportedBandCombinationListSL_U2U_RelayDiscovery_r18; /**< ASN.1 supportedBandCombinationListSL-U2U-RelayDiscovery-r18；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListSL_U2U_DiscoveryExt; /**< supportedBandCombinationListSL-U2U-DiscoveryExt 是否存在。 */
    BandCombinationListSL_Discovery_r17 supportedBandCombinationListSL_U2U_DiscoveryExt; /**< ASN.1 supportedBandCombinationListSL-U2U-DiscoveryExt；SEQUENCE OF BandParametersSidelinkDiscovery_r17，SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_ExtGroup19
 * @note ASN.1：RF_Parameters_ExtGroup19；源文件第 19494 行。
 */
struct RF_Parameters_ExtGroup19 {
    bool has_supportedBandCombinationList_v1800; /**< supportedBandCombinationList-v1800 是否存在。 */
    BandCombinationList_v1800 supportedBandCombinationList_v1800; /**< ASN.1 supportedBandCombinationList-v1800；SEQUENCE OF BandCombination_v1800，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1800; /**< supportedBandCombinationList-UplinkTxSwitch-v1800 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1800 supportedBandCombinationList_UplinkTxSwitch_v1800; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1800；SEQUENCE OF BandCombination_UplinkTxSwitch_v1800，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListSL_U2U_Relay_r18; /**< supportedBandCombinationListSL-U2U-Relay-r18 是否存在。 */
    RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18 supportedBandCombinationListSL_U2U_Relay_r18; /**< ASN.1 supportedBandCombinationListSL-U2U-Relay-r18；结构体；OPTIONAL。 */
};


/**
 * @brief RF_Parameters
 * @note ASN.1：RF-Parameters；源文件第 19413 行。
 * @note RF-Parameters ::= SEQUENCE { supportedBandListNR, supportedBandCombinationList, appliedFreqBand...
 */
struct RF_Parameters {
    BandNR* supportedBandListNR_items; /**< ASN.1 supportedBandListNR；SEQUENCE OF BandNR，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedBandListNR_count; /**< supportedBandListNR 元素个数。 */
    bool has_supportedBandCombinationList; /**< supportedBandCombinationList 是否存在。 */
    BandCombinationList supportedBandCombinationList; /**< ASN.1 supportedBandCombinationList；SEQUENCE OF BandCombination，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_appliedFreqBandListFilter; /**< appliedFreqBandListFilter 是否存在。 */
    FreqBandList appliedFreqBandListFilter; /**< ASN.1 appliedFreqBandListFilter；SEQUENCE OF FreqBandInformation，SIZE (1..1280)；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RF_Parameters_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    RF_Parameters_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    RF_Parameters_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    RF_Parameters_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    RF_Parameters_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    RF_Parameters_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    RF_Parameters_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup8; /**< 第 8 组是否出现。 */
    RF_Parameters_ExtGroup8 extGroup8; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup9; /**< 第 9 组是否出现。 */
    RF_Parameters_ExtGroup9 extGroup9; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup10; /**< 第 10 组是否出现。 */
    RF_Parameters_ExtGroup10 extGroup10; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup11; /**< 第 11 组是否出现。 */
    RF_Parameters_ExtGroup11 extGroup11; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup12; /**< 第 12 组是否出现。 */
    RF_Parameters_ExtGroup12 extGroup12; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup13; /**< 第 13 组是否出现。 */
    RF_Parameters_ExtGroup13 extGroup13; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup14; /**< 第 14 组是否出现。 */
    RF_Parameters_ExtGroup14 extGroup14; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup15; /**< 第 15 组是否出现。 */
    RF_Parameters_ExtGroup15 extGroup15; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup16; /**< 第 16 组是否出现。 */
    RF_Parameters_ExtGroup16 extGroup16; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup17; /**< 第 17 组是否出现。 */
    RF_Parameters_ExtGroup17 extGroup17; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup18; /**< 第 18 组是否出现。 */
    RF_Parameters_ExtGroup18 extGroup18; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup19; /**< 第 19 组是否出现。 */
    RF_Parameters_ExtGroup19 extGroup19; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RF_Parameters_v15g0
 * @note ASN.1：RF-Parameters-v15g0；源文件第 19505 行。
 * @note RF-Parameters-v15g0 ::= SEQUENCE { supportedBandCombinationList-v15g0 }
 */
struct RF_Parameters_v15g0 {
    bool has_supportedBandCombinationList_v15g0; /**< supportedBandCombinationList-v15g0 是否存在。 */
    BandCombinationList_v15g0 supportedBandCombinationList_v15g0; /**< ASN.1 supportedBandCombinationList-v15g0；SEQUENCE OF BandCombination_v15g0，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_v16a0
 * @note ASN.1：RF-Parameters-v16a0；源文件第 19509 行。
 * @note RF-Parameters-v16a0 ::= SEQUENCE { supportedBandCombinationList-v16a0, supportedBandCombinationList-U...
 */
struct RF_Parameters_v16a0 {
    bool has_supportedBandCombinationList_v16a0; /**< supportedBandCombinationList-v16a0 是否存在。 */
    BandCombinationList_v16a0 supportedBandCombinationList_v16a0; /**< ASN.1 supportedBandCombinationList-v16a0；SEQUENCE OF BandCombination_v16a0，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v16a0; /**< supportedBandCombinationList-UplinkTxSwitch-v16a0 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v16a0 supportedBandCombinationList_UplinkTxSwitch_v16a0; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v16a0；SEQUENCE OF BandCombination_UplinkTxSwitch_v16a0，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_Parameters_v16c0
 * @note ASN.1：RF-Parameters-v16c0；源文件第 19514 行。
 * @note RF-Parameters-v16c0 ::= SEQUENCE { supportedBandListNR-v16c0 }
 */
struct RF_Parameters_v16c0 {
    BandNR_v16c0* supportedBandListNR_v16c0_items; /**< ASN.1 supportedBandListNR-v16c0；SEQUENCE OF BandNR_v16c0，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedBandListNR_v16c0_count; /**< supportedBandListNR-v16c0 元素个数。 */
};


/**
 * @brief BandNR_ExtGroup1
 * @note ASN.1：BandNR_ExtGroup1；源文件第 19555 行。
 */
struct BandNR_ExtGroup1 {
    bool has_maxUplinkDutyCycle_PC2_FR1; /**< maxUplinkDutyCycle-PC2-FR1 是否存在。 */
    BandNR_ExtGroup1_MaxUplinkDutyCycle_PC2_FR1 maxUplinkDutyCycle_PC2_FR1; /**< ASN.1 maxUplinkDutyCycle-PC2-FR1；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup2
 * @note ASN.1：BandNR_ExtGroup2；源文件第 19558 行。
 */
struct BandNR_ExtGroup2 {
    bool has_pucch_SpatialRelInfoMAC_CE; /**< pucch-SpatialRelInfoMAC-CE 是否存在。 */
    BandNR_ExtGroup2_Pucch_SpatialRelInfoMAC_CE pucch_SpatialRelInfoMAC_CE; /**< ASN.1 pucch-SpatialRelInfoMAC-CE；枚举；OPTIONAL。 */
    bool has_powerBoosting_pi2BPSK; /**< powerBoosting-pi2BPSK 是否存在。 */
    BandNR_ExtGroup2_PowerBoosting_pi2BPSK powerBoosting_pi2BPSK; /**< ASN.1 powerBoosting-pi2BPSK；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup3
 * @note ASN.1：BandNR_ExtGroup3；源文件第 19562 行。
 */
struct BandNR_ExtGroup3 {
    bool has_maxUplinkDutyCycle_FR2; /**< maxUplinkDutyCycle-FR2 是否存在。 */
    BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2 maxUplinkDutyCycle_FR2; /**< ASN.1 maxUplinkDutyCycle-FR2；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1
 * @note ASN.1：channelBWs-DL-v1590/fr1；源文件第 19567 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz }
 */
struct BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1 {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    BitString scs_15kHz; /**< ASN.1 scs-15kHz；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    BitString scs_30kHz; /**< ASN.1 scs-30kHz；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BitString scs_60kHz; /**< ASN.1 scs-60kHz；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2
 * @note ASN.1：channelBWs-DL-v1590/fr2；源文件第 19572 行。
 * @note SEQUENCE { scs-60kHz, scs-120kHz }
 */
struct BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2 {
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BitString scs_60kHz; /**< ASN.1 scs-60kHz；SIZE (8)，定长；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    BitString scs_120kHz; /**< ASN.1 scs-120kHz；SIZE (8)，定长；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup4_ChannelBWs_DL_v1590
 * @note ASN.1：channelBWs-DL-v1590；源文件第 19566 行。
 * @note CHOICE { fr1, fr2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag {
    BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag_fr1 = 0, /**< ASN.1 fr1 */
    BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag_fr2 = 1, /**< ASN.1 fr2 */
} BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag;

struct BandNR_ExtGroup4_ChannelBWs_DL_v1590 {
    BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1 fr1; /**< ASN.1 fr1 */
        BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2 fr2; /**< ASN.1 fr2 */
    } u;
};


/**
 * @brief BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1
 * @note ASN.1：channelBWs-UL-v1590/fr1；源文件第 19578 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz }
 */
struct BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1 {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    BitString scs_15kHz; /**< ASN.1 scs-15kHz；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    BitString scs_30kHz; /**< ASN.1 scs-30kHz；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BitString scs_60kHz; /**< ASN.1 scs-60kHz；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2
 * @note ASN.1：channelBWs-UL-v1590/fr2；源文件第 19583 行。
 * @note SEQUENCE { scs-60kHz, scs-120kHz }
 */
struct BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2 {
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BitString scs_60kHz; /**< ASN.1 scs-60kHz；SIZE (8)，定长；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    BitString scs_120kHz; /**< ASN.1 scs-120kHz；SIZE (8)，定长；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup4_ChannelBWs_UL_v1590
 * @note ASN.1：channelBWs-UL-v1590；源文件第 19577 行。
 * @note CHOICE { fr1, fr2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag {
    BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag_fr1 = 0, /**< ASN.1 fr1 */
    BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag_fr2 = 1, /**< ASN.1 fr2 */
} BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag;

struct BandNR_ExtGroup4_ChannelBWs_UL_v1590 {
    BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1 fr1; /**< ASN.1 fr1 */
        BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2 fr2; /**< ASN.1 fr2 */
    } u;
};


/**
 * @brief BandNR_ExtGroup4
 * @note ASN.1：BandNR_ExtGroup4；源文件第 19565 行。
 */
struct BandNR_ExtGroup4 {
    bool has_channelBWs_DL_v1590; /**< channelBWs-DL-v1590 是否存在。 */
    BandNR_ExtGroup4_ChannelBWs_DL_v1590 channelBWs_DL_v1590; /**< ASN.1 channelBWs-DL-v1590；结构体；OPTIONAL。 */
    bool has_channelBWs_UL_v1590; /**< channelBWs-UL-v1590 是否存在。 */
    BandNR_ExtGroup4_ChannelBWs_UL_v1590 channelBWs_UL_v1590; /**< ASN.1 channelBWs-UL-v1590；结构体；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup5
 * @note ASN.1：BandNR_ExtGroup5；源文件第 19589 行。
 */
struct BandNR_ExtGroup5 {
    bool has_asymmetricBandwidthCombinationSet; /**< asymmetricBandwidthCombinationSet 是否存在。 */
    BitString asymmetricBandwidthCombinationSet; /**< ASN.1 asymmetricBandwidthCombinationSet；SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief SharedSpectrumChAccessParamsPerBand_r16
 * @note ASN.1：SharedSpectrumChAccessParamsPerBand-r16；源文件第 20324 行。
 * @note SharedSpectrumChAccessParamsPerBand-r16 ::= SEQUENCE { ul-DynamicChAccess-r16, ul-Semi-StaticChAccess-r16, ssb-RRM-Dynami...
 */
struct SharedSpectrumChAccessParamsPerBand_r16 {
    bool has_ul_DynamicChAccess_r16; /**< ul-DynamicChAccess-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ul_DynamicChAccess_r16 ul_DynamicChAccess_r16; /**< ASN.1 ul-DynamicChAccess-r16；枚举；OPTIONAL。 */
    bool has_ul_Semi_StaticChAccess_r16; /**< ul-Semi-StaticChAccess-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ul_Semi_StaticChAccess_r16 ul_Semi_StaticChAccess_r16; /**< ASN.1 ul-Semi-StaticChAccess-r16；枚举；OPTIONAL。 */
    bool has_ssb_RRM_DynamicChAccess_r16; /**< ssb-RRM-DynamicChAccess-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_DynamicChAccess_r16 ssb_RRM_DynamicChAccess_r16; /**< ASN.1 ssb-RRM-DynamicChAccess-r16；枚举；OPTIONAL。 */
    bool has_ssb_RRM_Semi_StaticChAccess_r16; /**< ssb-RRM-Semi-StaticChAccess-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_Semi_StaticChAccess_r16 ssb_RRM_Semi_StaticChAccess_r16; /**< ASN.1 ssb-RRM-Semi-StaticChAccess-r16；枚举；OPTIONAL。 */
    bool has_mib_Acquisition_r16; /**< mib-Acquisition-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Mib_Acquisition_r16 mib_Acquisition_r16; /**< ASN.1 mib-Acquisition-r16；枚举；OPTIONAL。 */
    bool has_ssb_RLM_DynamicChAccess_r16; /**< ssb-RLM-DynamicChAccess-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_DynamicChAccess_r16 ssb_RLM_DynamicChAccess_r16; /**< ASN.1 ssb-RLM-DynamicChAccess-r16；枚举；OPTIONAL。 */
    bool has_ssb_RLM_Semi_StaticChAccess_r16; /**< ssb-RLM-Semi-StaticChAccess-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_Semi_StaticChAccess_r16 ssb_RLM_Semi_StaticChAccess_r16; /**< ASN.1 ssb-RLM-Semi-StaticChAccess-r16；枚举；OPTIONAL。 */
    bool has_sib1_Acquisition_r16; /**< sib1-Acquisition-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Sib1_Acquisition_r16 sib1_Acquisition_r16; /**< ASN.1 sib1-Acquisition-r16；枚举；OPTIONAL。 */
    bool has_extRA_ResponseWindow_r16; /**< extRA-ResponseWindow-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_ExtRA_ResponseWindow_r16 extRA_ResponseWindow_r16; /**< ASN.1 extRA-ResponseWindow-r16；枚举；OPTIONAL。 */
    bool has_ssb_BFD_CBD_dynamicChannelAccess_r16; /**< ssb-BFD-CBD-dynamicChannelAccess-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_dynamicChannelAccess_r16 ssb_BFD_CBD_dynamicChannelAccess_r16; /**< ASN.1 ssb-BFD-CBD-dynamicChannelAccess-r16；枚举；OPTIONAL。 */
    bool has_ssb_BFD_CBD_semi_staticChannelAccess_r16; /**< ssb-BFD-CBD-semi-staticChannelAccess-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_semi_staticChannelAccess_r16 ssb_BFD_CBD_semi_staticChannelAccess_r16; /**< ASN.1 ssb-BFD-CBD-semi-staticChannelAccess-r16；枚举；OPTIONAL。 */
    bool has_csi_RS_BFD_CBD_r16; /**< csi-RS-BFD-CBD-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_BFD_CBD_r16 csi_RS_BFD_CBD_r16; /**< ASN.1 csi-RS-BFD-CBD-r16；枚举；OPTIONAL。 */
    bool has_ul_ChannelBW_SCell_10mhz_r16; /**< ul-ChannelBW-SCell-10mhz-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ul_ChannelBW_SCell_10mhz_r16 ul_ChannelBW_SCell_10mhz_r16; /**< ASN.1 ul-ChannelBW-SCell-10mhz-r16；枚举；OPTIONAL。 */
    bool has_rssi_ChannelOccupancyReporting_r16; /**< rssi-ChannelOccupancyReporting-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Rssi_ChannelOccupancyReporting_r16 rssi_ChannelOccupancyReporting_r16; /**< ASN.1 rssi-ChannelOccupancyReporting-r16；枚举；OPTIONAL。 */
    bool has_srs_StartAnyOFDM_Symbol_r16; /**< srs-StartAnyOFDM-Symbol-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Srs_StartAnyOFDM_Symbol_r16 srs_StartAnyOFDM_Symbol_r16; /**< ASN.1 srs-StartAnyOFDM-Symbol-r16；枚举；OPTIONAL。 */
    bool has_searchSpaceFreqMonitorLocation_r16; /**< searchSpaceFreqMonitorLocation-r16 是否存在。 */
    int64_t searchSpaceFreqMonitorLocation_r16; /**< ASN.1 searchSpaceFreqMonitorLocation-r16；INTEGER (1..5)，位宽 3 bit；OPTIONAL。 */
    bool has_coreset_RB_Offset_r16; /**< coreset-RB-Offset-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Coreset_RB_Offset_r16 coreset_RB_Offset_r16; /**< ASN.1 coreset-RB-Offset-r16；枚举；OPTIONAL。 */
    bool has_cgi_Acquisition_r16; /**< cgi-Acquisition-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Cgi_Acquisition_r16 cgi_Acquisition_r16; /**< ASN.1 cgi-Acquisition-r16；枚举；OPTIONAL。 */
    bool has_configuredUL_Tx_r16; /**< configuredUL-Tx-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_ConfiguredUL_Tx_r16 configuredUL_Tx_r16; /**< ASN.1 configuredUL-Tx-r16；枚举；OPTIONAL。 */
    bool has_prach_Wideband_r16; /**< prach-Wideband-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Prach_Wideband_r16 prach_Wideband_r16; /**< ASN.1 prach-Wideband-r16；枚举；OPTIONAL。 */
    bool has_dci_AvailableRB_Set_r16; /**< dci-AvailableRB-Set-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Dci_AvailableRB_Set_r16 dci_AvailableRB_Set_r16; /**< ASN.1 dci-AvailableRB-Set-r16；枚举；OPTIONAL。 */
    bool has_dci_ChOccupancyDuration_r16; /**< dci-ChOccupancyDuration-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Dci_ChOccupancyDuration_r16 dci_ChOccupancyDuration_r16; /**< ASN.1 dci-ChOccupancyDuration-r16；枚举；OPTIONAL。 */
    bool has_typeB_PDSCH_length_r16; /**< typeB-PDSCH-length-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_TypeB_PDSCH_length_r16 typeB_PDSCH_length_r16; /**< ASN.1 typeB-PDSCH-length-r16；枚举；OPTIONAL。 */
    bool has_searchSpaceSwitchWithDCI_r16; /**< searchSpaceSwitchWithDCI-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithDCI_r16 searchSpaceSwitchWithDCI_r16; /**< ASN.1 searchSpaceSwitchWithDCI-r16；枚举；OPTIONAL。 */
    bool has_searchSpaceSwitchWithoutDCI_r16; /**< searchSpaceSwitchWithoutDCI-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithoutDCI_r16 searchSpaceSwitchWithoutDCI_r16; /**< ASN.1 searchSpaceSwitchWithoutDCI-r16；枚举；OPTIONAL。 */
    bool has_searchSpaceSwitchCapability2_r16; /**< searchSpaceSwitchCapability2-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchCapability2_r16 searchSpaceSwitchCapability2_r16; /**< ASN.1 searchSpaceSwitchCapability2-r16；枚举；OPTIONAL。 */
    bool has_non_numericalPDSCH_HARQ_timing_r16; /**< non-numericalPDSCH-HARQ-timing-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Non_numericalPDSCH_HARQ_timing_r16 non_numericalPDSCH_HARQ_timing_r16; /**< ASN.1 non-numericalPDSCH-HARQ-timing-r16；枚举；OPTIONAL。 */
    bool has_enhancedDynamicHARQ_codebook_r16; /**< enhancedDynamicHARQ-codebook-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_EnhancedDynamicHARQ_codebook_r16 enhancedDynamicHARQ_codebook_r16; /**< ASN.1 enhancedDynamicHARQ-codebook-r16；枚举；OPTIONAL。 */
    bool has_oneShotHARQ_feedback_r16; /**< oneShotHARQ-feedback-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_OneShotHARQ_feedback_r16 oneShotHARQ_feedback_r16; /**< ASN.1 oneShotHARQ-feedback-r16；枚举；OPTIONAL。 */
    bool has_multiPUSCH_UL_grant_r16; /**< multiPUSCH-UL-grant-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_MultiPUSCH_UL_grant_r16 multiPUSCH_UL_grant_r16; /**< ASN.1 multiPUSCH-UL-grant-r16；枚举；OPTIONAL。 */
    bool has_csi_RS_RLM_r16; /**< csi-RS-RLM-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_RLM_r16 csi_RS_RLM_r16; /**< ASN.1 csi-RS-RLM-r16；枚举；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
    bool has_periodicAndSemi_PersistentCSI_RS_r16; /**< periodicAndSemi-PersistentCSI-RS-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_PeriodicAndSemi_PersistentCSI_RS_r16 periodicAndSemi_PersistentCSI_RS_r16; /**< ASN.1 periodicAndSemi-PersistentCSI-RS-r16；枚举；OPTIONAL。 */
    bool has_pusch_PRB_interlace_r16; /**< pusch-PRB-interlace-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Pusch_PRB_interlace_r16 pusch_PRB_interlace_r16; /**< ASN.1 pusch-PRB-interlace-r16；枚举；OPTIONAL。 */
    bool has_pucch_F0_F1_PRB_Interlace_r16; /**< pucch-F0-F1-PRB-Interlace-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Pucch_F0_F1_PRB_Interlace_r16 pucch_F0_F1_PRB_Interlace_r16; /**< ASN.1 pucch-F0-F1-PRB-Interlace-r16；枚举；OPTIONAL。 */
    bool has_occ_PRB_PF2_PF3_r16; /**< occ-PRB-PF2-PF3-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Occ_PRB_PF2_PF3_r16 occ_PRB_PF2_PF3_r16; /**< ASN.1 occ-PRB-PF2-PF3-r16；枚举；OPTIONAL。 */
    bool has_extCP_rangeCG_PUSCH_r16; /**< extCP-rangeCG-PUSCH-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_ExtCP_rangeCG_PUSCH_r16 extCP_rangeCG_PUSCH_r16; /**< ASN.1 extCP-rangeCG-PUSCH-r16；枚举；OPTIONAL。 */
    bool has_configuredGrantWithReTx_r16; /**< configuredGrantWithReTx-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_ConfiguredGrantWithReTx_r16 configuredGrantWithReTx_r16; /**< ASN.1 configuredGrantWithReTx-r16；枚举；OPTIONAL。 */
    bool has_ed_Threshold_r16; /**< ed-Threshold-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ed_Threshold_r16 ed_Threshold_r16; /**< ASN.1 ed-Threshold-r16；枚举；OPTIONAL。 */
    bool has_ul_DL_COT_Sharing_r16; /**< ul-DL-COT-Sharing-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Ul_DL_COT_Sharing_r16 ul_DL_COT_Sharing_r16; /**< ASN.1 ul-DL-COT-Sharing-r16；枚举；OPTIONAL。 */
    bool has_mux_CG_UCI_HARQ_ACK_r16; /**< mux-CG-UCI-HARQ-ACK-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Mux_CG_UCI_HARQ_ACK_r16 mux_CG_UCI_HARQ_ACK_r16; /**< ASN.1 mux-CG-UCI-HARQ-ACK-r16；枚举；OPTIONAL。 */
    bool has_cg_resourceConfig_r16; /**< cg-resourceConfig-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16_Cg_resourceConfig_r16 cg_resourceConfig_r16; /**< ASN.1 cg-resourceConfig-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SpatialRelationsSRS_Pos_r16
 * @note ASN.1：SpatialRelationsSRS-Pos-r16；源文件第 20735 行。
 * @note SpatialRelationsSRS-Pos-r16 ::= SEQUENCE { spatialRelation-SRS-PosBasedOnSSB-Serving-r16, spatialRelation-SRS...
 */
struct SpatialRelationsSRS_Pos_r16 {
    bool has_spatialRelation_SRS_PosBasedOnSSB_Serving_r16; /**< spatialRelation-SRS-PosBasedOnSSB-Serving-r16 是否存在。 */
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Serving_r16 spatialRelation_SRS_PosBasedOnSSB_Serving_r16; /**< ASN.1 spatialRelation-SRS-PosBasedOnSSB-Serving-r16；枚举；OPTIONAL。 */
    bool has_spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16; /**< spatialRelation-SRS-PosBasedOnCSI-RS-Serving-r16 是否存在。 */
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16 spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16; /**< ASN.1 spatialRelation-SRS-PosBasedOnCSI-RS-Serving-r16；枚举；OPTIONAL。 */
    bool has_spatialRelation_SRS_PosBasedOnPRS_Serving_r16; /**< spatialRelation-SRS-PosBasedOnPRS-Serving-r16 是否存在。 */
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Serving_r16 spatialRelation_SRS_PosBasedOnPRS_Serving_r16; /**< ASN.1 spatialRelation-SRS-PosBasedOnPRS-Serving-r16；枚举；OPTIONAL。 */
    bool has_spatialRelation_SRS_PosBasedOnSRS_r16; /**< spatialRelation-SRS-PosBasedOnSRS-r16 是否存在。 */
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSRS_r16 spatialRelation_SRS_PosBasedOnSRS_r16; /**< ASN.1 spatialRelation-SRS-PosBasedOnSRS-r16；枚举；OPTIONAL。 */
    bool has_spatialRelation_SRS_PosBasedOnSSB_Neigh_r16; /**< spatialRelation-SRS-PosBasedOnSSB-Neigh-r16 是否存在。 */
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Neigh_r16 spatialRelation_SRS_PosBasedOnSSB_Neigh_r16; /**< ASN.1 spatialRelation-SRS-PosBasedOnSSB-Neigh-r16；枚举；OPTIONAL。 */
    bool has_spatialRelation_SRS_PosBasedOnPRS_Neigh_r16; /**< spatialRelation-SRS-PosBasedOnPRS-Neigh-r16 是否存在。 */
    SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Neigh_r16 spatialRelation_SRS_PosBasedOnPRS_Neigh_r16; /**< ASN.1 spatialRelation-SRS-PosBasedOnPRS-Neigh-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16
 * @note ASN.1：multipleRateMatchingEUTRA-CRS-r16；源文件第 19598 行。
 * @note SEQUENCE { maxNumberPatterns-r16, maxNumberNon-OverlapPatterns-r16 }
 */
struct BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16 {
    int64_t maxNumberPatterns_r16; /**< ASN.1 maxNumberPatterns-r16；INTEGER (2..6)，位宽 3 bit。 */
    int64_t maxNumberNon_OverlapPatterns_r16; /**< ASN.1 maxNumberNon-OverlapPatterns-r16；INTEGER (1..3)，位宽 2 bit。 */
};


/**
 * @brief BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz
 * @note ASN.1：channelBW-DL-IAB-r16/fr1-100mhz；源文件第 19612 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz }
 */
struct BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_15kHz scs_15kHz; /**< ASN.1 scs-15kHz；枚举；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_30kHz scs_30kHz; /**< ASN.1 scs-30kHz；枚举；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz
 * @note ASN.1：channelBW-DL-IAB-r16/fr2-200mhz；源文件第 19617 行。
 * @note SEQUENCE { scs-60kHz, scs-120kHz }
 */
struct BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz {
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_120kHz scs_120kHz; /**< ASN.1 scs-120kHz；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup6_ChannelBW_DL_IAB_r16
 * @note ASN.1：channelBW-DL-IAB-r16；源文件第 19611 行。
 * @note CHOICE { fr1-100mhz, fr2-200mhz }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag {
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag_fr1_100mhz = 0, /**< ASN.1 fr1-100mhz */
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag_fr2_200mhz = 1, /**< ASN.1 fr2-200mhz */
} BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag;

struct BandNR_ExtGroup6_ChannelBW_DL_IAB_r16 {
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz fr1_100mhz; /**< ASN.1 fr1-100mhz */
        BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz fr2_200mhz; /**< ASN.1 fr2-200mhz */
    } u;
};


/**
 * @brief BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz
 * @note ASN.1：channelBW-UL-IAB-r16/fr1-100mhz；源文件第 19623 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz }
 */
struct BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_15kHz scs_15kHz; /**< ASN.1 scs-15kHz；枚举；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_30kHz scs_30kHz; /**< ASN.1 scs-30kHz；枚举；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz
 * @note ASN.1：channelBW-UL-IAB-r16/fr2-200mhz；源文件第 19628 行。
 * @note SEQUENCE { scs-60kHz, scs-120kHz }
 */
struct BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz {
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_120kHz scs_120kHz; /**< ASN.1 scs-120kHz；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup6_ChannelBW_UL_IAB_r16
 * @note ASN.1：channelBW-UL-IAB-r16；源文件第 19622 行。
 * @note CHOICE { fr1-100mhz, fr2-200mhz }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag {
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag_fr1_100mhz = 0, /**< ASN.1 fr1-100mhz */
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag_fr2_200mhz = 1, /**< ASN.1 fr2-200mhz */
} BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag;

struct BandNR_ExtGroup6_ChannelBW_UL_IAB_r16 {
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz fr1_100mhz; /**< ASN.1 fr1-100mhz */
        BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz fr2_200mhz; /**< ASN.1 fr2-200mhz */
    } u;
};


/**
 * @brief BandNR_ExtGroup6_ActiveConfiguredGrant_r16
 * @note ASN.1：activeConfiguredGrant-r16；源文件第 19643 行。
 * @note SEQUENCE { maxNumberConfigsPerBWP-r16, maxNumberConfigsAllCC-r16 }
 */
struct BandNR_ExtGroup6_ActiveConfiguredGrant_r16 {
    BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16 maxNumberConfigsPerBWP_r16; /**< ASN.1 maxNumberConfigsPerBWP-r16；枚举。 */
    int64_t maxNumberConfigsAllCC_r16; /**< ASN.1 maxNumberConfigsAllCC-r16；INTEGER (2..32)，位宽 5 bit。 */
};


/**
 * @brief BandNR_ExtGroup6_Sps_r16
 * @note ASN.1：sps-r16；源文件第 19650 行。
 * @note SEQUENCE { maxNumberConfigsPerBWP-r16, maxNumberConfigsAllCC-r16 }
 */
struct BandNR_ExtGroup6_Sps_r16 {
    int64_t maxNumberConfigsPerBWP_r16; /**< ASN.1 maxNumberConfigsPerBWP-r16；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberConfigsAllCC_r16; /**< ASN.1 maxNumberConfigsAllCC-r16；INTEGER (2..32)，位宽 5 bit。 */
};


/**
 * @brief BandNR_ExtGroup6
 * @note ASN.1：BandNR_ExtGroup6；源文件第 19592 行。
 */
struct BandNR_ExtGroup6 {
    bool has_sharedSpectrumChAccessParamsPerBand_r16; /**< sharedSpectrumChAccessParamsPerBand-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_r16 sharedSpectrumChAccessParamsPerBand_r16; /**< ASN.1 sharedSpectrumChAccessParamsPerBand-r16；结构体；OPTIONAL。 */
    bool has_cancelOverlappingPUSCH_r16; /**< cancelOverlappingPUSCH-r16 是否存在。 */
    BandNR_ExtGroup6_CancelOverlappingPUSCH_r16 cancelOverlappingPUSCH_r16; /**< ASN.1 cancelOverlappingPUSCH-r16；枚举；OPTIONAL。 */
    bool has_multipleRateMatchingEUTRA_CRS_r16; /**< multipleRateMatchingEUTRA-CRS-r16 是否存在。 */
    BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16 multipleRateMatchingEUTRA_CRS_r16; /**< ASN.1 multipleRateMatchingEUTRA-CRS-r16；结构体；OPTIONAL。 */
    bool has_overlapRateMatchingEUTRA_CRS_r16; /**< overlapRateMatchingEUTRA-CRS-r16 是否存在。 */
    BandNR_ExtGroup6_OverlapRateMatchingEUTRA_CRS_r16 overlapRateMatchingEUTRA_CRS_r16; /**< ASN.1 overlapRateMatchingEUTRA-CRS-r16；枚举；OPTIONAL。 */
    bool has_pdsch_MappingTypeB_Alt_r16; /**< pdsch-MappingTypeB-Alt-r16 是否存在。 */
    BandNR_ExtGroup6_Pdsch_MappingTypeB_Alt_r16 pdsch_MappingTypeB_Alt_r16; /**< ASN.1 pdsch-MappingTypeB-Alt-r16；枚举；OPTIONAL。 */
    bool has_oneSlotPeriodicTRS_r16; /**< oneSlotPeriodicTRS-r16 是否存在。 */
    BandNR_ExtGroup6_OneSlotPeriodicTRS_r16 oneSlotPeriodicTRS_r16; /**< ASN.1 oneSlotPeriodicTRS-r16；枚举；OPTIONAL。 */
    bool has_olpc_SRS_Pos_r16; /**< olpc-SRS-Pos-r16 是否存在。 */
    OLPC_SRS_Pos_r16 olpc_SRS_Pos_r16; /**< ASN.1 olpc-SRS-Pos-r16；结构体；OPTIONAL。 */
    bool has_spatialRelationsSRS_Pos_r16; /**< spatialRelationsSRS-Pos-r16 是否存在。 */
    SpatialRelationsSRS_Pos_r16 spatialRelationsSRS_Pos_r16; /**< ASN.1 spatialRelationsSRS-Pos-r16；结构体；OPTIONAL。 */
    bool has_simulSRS_MIMO_TransWithinBand_r16; /**< simulSRS-MIMO-TransWithinBand-r16 是否存在。 */
    BandNR_ExtGroup6_SimulSRS_MIMO_TransWithinBand_r16 simulSRS_MIMO_TransWithinBand_r16; /**< ASN.1 simulSRS-MIMO-TransWithinBand-r16；枚举；OPTIONAL。 */
    bool has_channelBW_DL_IAB_r16; /**< channelBW-DL-IAB-r16 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_DL_IAB_r16 channelBW_DL_IAB_r16; /**< ASN.1 channelBW-DL-IAB-r16；结构体；OPTIONAL。 */
    bool has_channelBW_UL_IAB_r16; /**< channelBW-UL-IAB-r16 是否存在。 */
    BandNR_ExtGroup6_ChannelBW_UL_IAB_r16 channelBW_UL_IAB_r16; /**< ASN.1 channelBW-UL-IAB-r16；结构体；OPTIONAL。 */
    bool has_rasterShift7dot5_IAB_r16; /**< rasterShift7dot5-IAB-r16 是否存在。 */
    BandNR_ExtGroup6_RasterShift7dot5_IAB_r16 rasterShift7dot5_IAB_r16; /**< ASN.1 rasterShift7dot5-IAB-r16；枚举；OPTIONAL。 */
    bool has_ue_PowerClass_v1610; /**< ue-PowerClass-v1610 是否存在。 */
    BandNR_ExtGroup6_Ue_PowerClass_v1610 ue_PowerClass_v1610; /**< ASN.1 ue-PowerClass-v1610；枚举；OPTIONAL。 */
    bool has_condHandover_r16; /**< condHandover-r16 是否存在。 */
    BandNR_ExtGroup6_CondHandover_r16 condHandover_r16; /**< ASN.1 condHandover-r16；枚举；OPTIONAL。 */
    bool has_condHandoverFailure_r16; /**< condHandoverFailure-r16 是否存在。 */
    BandNR_ExtGroup6_CondHandoverFailure_r16 condHandoverFailure_r16; /**< ASN.1 condHandoverFailure-r16；枚举；OPTIONAL。 */
    bool has_condHandoverTwoTriggerEvents_r16; /**< condHandoverTwoTriggerEvents-r16 是否存在。 */
    BandNR_ExtGroup6_CondHandoverTwoTriggerEvents_r16 condHandoverTwoTriggerEvents_r16; /**< ASN.1 condHandoverTwoTriggerEvents-r16；枚举；OPTIONAL。 */
    bool has_condPSCellChange_r16; /**< condPSCellChange-r16 是否存在。 */
    BandNR_ExtGroup6_CondPSCellChange_r16 condPSCellChange_r16; /**< ASN.1 condPSCellChange-r16；枚举；OPTIONAL。 */
    bool has_condPSCellChangeTwoTriggerEvents_r16; /**< condPSCellChangeTwoTriggerEvents-r16 是否存在。 */
    BandNR_ExtGroup6_CondPSCellChangeTwoTriggerEvents_r16 condPSCellChangeTwoTriggerEvents_r16; /**< ASN.1 condPSCellChangeTwoTriggerEvents-r16；枚举；OPTIONAL。 */
    bool has_mpr_PowerBoost_FR2_r16; /**< mpr-PowerBoost-FR2-r16 是否存在。 */
    BandNR_ExtGroup6_Mpr_PowerBoost_FR2_r16 mpr_PowerBoost_FR2_r16; /**< ASN.1 mpr-PowerBoost-FR2-r16；枚举；OPTIONAL。 */
    bool has_activeConfiguredGrant_r16; /**< activeConfiguredGrant-r16 是否存在。 */
    BandNR_ExtGroup6_ActiveConfiguredGrant_r16 activeConfiguredGrant_r16; /**< ASN.1 activeConfiguredGrant-r16；结构体；OPTIONAL。 */
    bool has_jointReleaseConfiguredGrantType2_r16; /**< jointReleaseConfiguredGrantType2-r16 是否存在。 */
    BandNR_ExtGroup6_JointReleaseConfiguredGrantType2_r16 jointReleaseConfiguredGrantType2_r16; /**< ASN.1 jointReleaseConfiguredGrantType2-r16；枚举；OPTIONAL。 */
    bool has_sps_r16; /**< sps-r16 是否存在。 */
    BandNR_ExtGroup6_Sps_r16 sps_r16; /**< ASN.1 sps-r16；结构体；OPTIONAL。 */
    bool has_jointReleaseSPS_r16; /**< jointReleaseSPS-r16 是否存在。 */
    BandNR_ExtGroup6_JointReleaseSPS_r16 jointReleaseSPS_r16; /**< ASN.1 jointReleaseSPS-r16；枚举；OPTIONAL。 */
    bool has_simulSRS_TransWithinBand_r16; /**< simulSRS-TransWithinBand-r16 是否存在。 */
    BandNR_ExtGroup6_SimulSRS_TransWithinBand_r16 simulSRS_TransWithinBand_r16; /**< ASN.1 simulSRS-TransWithinBand-r16；枚举；OPTIONAL。 */
    bool has_trs_AdditionalBandwidth_r16; /**< trs-AdditionalBandwidth-r16 是否存在。 */
    BandNR_ExtGroup6_Trs_AdditionalBandwidth_r16 trs_AdditionalBandwidth_r16; /**< ASN.1 trs-AdditionalBandwidth-r16；枚举；OPTIONAL。 */
    bool has_handoverIntraF_IAB_r16; /**< handoverIntraF-IAB-r16 是否存在。 */
    BandNR_ExtGroup6_HandoverIntraF_IAB_r16 handoverIntraF_IAB_r16; /**< ASN.1 handoverIntraF-IAB-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SharedSpectrumChAccessParamsPerBand_v1630
 * @note ASN.1：SharedSpectrumChAccessParamsPerBand-v1630；源文件第 20411 行。
 * @note SharedSpectrumChAccessParamsPerBand-v1630 ::= SEQUENCE { dl-ReceptionIntraCellGuardband-r16, dl-ReceptionLBT-subsetRB-r16 }
 */
struct SharedSpectrumChAccessParamsPerBand_v1630 {
    bool has_dl_ReceptionIntraCellGuardband_r16; /**< dl-ReceptionIntraCellGuardband-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionIntraCellGuardband_r16 dl_ReceptionIntraCellGuardband_r16; /**< ASN.1 dl-ReceptionIntraCellGuardband-r16；枚举；OPTIONAL。 */
    bool has_dl_ReceptionLBT_subsetRB_r16; /**< dl-ReceptionLBT-subsetRB-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionLBT_subsetRB_r16 dl_ReceptionLBT_subsetRB_r16; /**< ASN.1 dl-ReceptionLBT-subsetRB-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup7
 * @note ASN.1：BandNR_ExtGroup7；源文件第 19661 行。
 */
struct BandNR_ExtGroup7 {
    bool has_simulTX_SRS_AntSwitchingIntraBandUL_CA_r16; /**< simulTX-SRS-AntSwitchingIntraBandUL-CA-r16 是否存在。 */
    SimulSRS_ForAntennaSwitching_r16 simulTX_SRS_AntSwitchingIntraBandUL_CA_r16; /**< ASN.1 simulTX-SRS-AntSwitchingIntraBandUL-CA-r16；结构体；OPTIONAL。 */
    bool has_sharedSpectrumChAccessParamsPerBand_v1630; /**< sharedSpectrumChAccessParamsPerBand-v1630 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1630 sharedSpectrumChAccessParamsPerBand_v1630; /**< ASN.1 sharedSpectrumChAccessParamsPerBand-v1630；结构体；OPTIONAL。 */
};


/**
 * @brief SharedSpectrumChAccessParamsPerBand_v1640
 * @note ASN.1：SharedSpectrumChAccessParamsPerBand-v1640；源文件第 20418 行。
 * @note SharedSpectrumChAccessParamsPerBand-v1640 ::= SEQUENCE { csi-RSRP-AndRSRQ-MeasWithSSB-r16, csi-RSRP-AndRSRQ-MeasWithoutSSB-...
 */
struct SharedSpectrumChAccessParamsPerBand_v1640 {
    bool has_csi_RSRP_AndRSRQ_MeasWithSSB_r16; /**< csi-RSRP-AndRSRQ-MeasWithSSB-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithSSB_r16 csi_RSRP_AndRSRQ_MeasWithSSB_r16; /**< ASN.1 csi-RSRP-AndRSRQ-MeasWithSSB-r16；枚举；OPTIONAL。 */
    bool has_csi_RSRP_AndRSRQ_MeasWithoutSSB_r16; /**< csi-RSRP-AndRSRQ-MeasWithoutSSB-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithoutSSB_r16 csi_RSRP_AndRSRQ_MeasWithoutSSB_r16; /**< ASN.1 csi-RSRP-AndRSRQ-MeasWithoutSSB-r16；枚举；OPTIONAL。 */
    bool has_csi_SINR_Meas_r16; /**< csi-SINR-Meas-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1640_Csi_SINR_Meas_r16 csi_SINR_Meas_r16; /**< ASN.1 csi-SINR-Meas-r16；枚举；OPTIONAL。 */
    bool has_ssb_AndCSI_RS_RLM_r16; /**< ssb-AndCSI-RS-RLM-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1640_Ssb_AndCSI_RS_RLM_r16 ssb_AndCSI_RS_RLM_r16; /**< ASN.1 ssb-AndCSI-RS-RLM-r16；枚举；OPTIONAL。 */
    bool has_csi_RS_CFRA_ForHO_r16; /**< csi-RS-CFRA-ForHO-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1640_Csi_RS_CFRA_ForHO_r16 csi_RS_CFRA_ForHO_r16; /**< ASN.1 csi-RS-CFRA-ForHO-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup8
 * @note ASN.1：BandNR_ExtGroup8；源文件第 19668 行。
 */
struct BandNR_ExtGroup8 {
    bool has_handoverUTRA_FDD_r16; /**< handoverUTRA-FDD-r16 是否存在。 */
    BandNR_ExtGroup8_HandoverUTRA_FDD_r16 handoverUTRA_FDD_r16; /**< ASN.1 handoverUTRA-FDD-r16；枚举；OPTIONAL。 */
    bool has_enhancedUL_TransientPeriod_r16; /**< enhancedUL-TransientPeriod-r16 是否存在。 */
    BandNR_ExtGroup8_EnhancedUL_TransientPeriod_r16 enhancedUL_TransientPeriod_r16; /**< ASN.1 enhancedUL-TransientPeriod-r16；枚举；OPTIONAL。 */
    bool has_sharedSpectrumChAccessParamsPerBand_v1640; /**< sharedSpectrumChAccessParamsPerBand-v1640 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1640 sharedSpectrumChAccessParamsPerBand_v1640; /**< ASN.1 sharedSpectrumChAccessParamsPerBand-v1640；结构体；OPTIONAL。 */
};


/**
 * @brief SharedSpectrumChAccessParamsPerBand_v1650
 * @note ASN.1：SharedSpectrumChAccessParamsPerBand-v1650；源文件第 20431 行。
 * @note SharedSpectrumChAccessParamsPerBand-v1650 ::= SEQUENCE { extendedSearchSpaceSwitchWithDCI-r16 }
 */
struct SharedSpectrumChAccessParamsPerBand_v1650 {
    bool has_extendedSearchSpaceSwitchWithDCI_r16; /**< extendedSearchSpaceSwitchWithDCI-r16 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1650_ExtendedSearchSpaceSwitchWithDCI_r16 extendedSearchSpaceSwitchWithDCI_r16; /**< ASN.1 extendedSearchSpaceSwitchWithDCI-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup9
 * @note ASN.1：BandNR_ExtGroup9；源文件第 19674 行。
 */
struct BandNR_ExtGroup9 {
    bool has_type1_PUSCH_RepetitionMultiSlots_v1650; /**< type1-PUSCH-RepetitionMultiSlots-v1650 是否存在。 */
    BandNR_ExtGroup9_Type1_PUSCH_RepetitionMultiSlots_v1650 type1_PUSCH_RepetitionMultiSlots_v1650; /**< ASN.1 type1-PUSCH-RepetitionMultiSlots-v1650；枚举；OPTIONAL。 */
    bool has_type2_PUSCH_RepetitionMultiSlots_v1650; /**< type2-PUSCH-RepetitionMultiSlots-v1650 是否存在。 */
    BandNR_ExtGroup9_Type2_PUSCH_RepetitionMultiSlots_v1650 type2_PUSCH_RepetitionMultiSlots_v1650; /**< ASN.1 type2-PUSCH-RepetitionMultiSlots-v1650；枚举；OPTIONAL。 */
    bool has_pusch_RepetitionMultiSlots_v1650; /**< pusch-RepetitionMultiSlots-v1650 是否存在。 */
    BandNR_ExtGroup9_Pusch_RepetitionMultiSlots_v1650 pusch_RepetitionMultiSlots_v1650; /**< ASN.1 pusch-RepetitionMultiSlots-v1650；枚举；OPTIONAL。 */
    bool has_configuredUL_GrantType1_v1650; /**< configuredUL-GrantType1-v1650 是否存在。 */
    BandNR_ExtGroup9_ConfiguredUL_GrantType1_v1650 configuredUL_GrantType1_v1650; /**< ASN.1 configuredUL-GrantType1-v1650；枚举；OPTIONAL。 */
    bool has_configuredUL_GrantType2_v1650; /**< configuredUL-GrantType2-v1650 是否存在。 */
    BandNR_ExtGroup9_ConfiguredUL_GrantType2_v1650 configuredUL_GrantType2_v1650; /**< ASN.1 configuredUL-GrantType2-v1650；枚举；OPTIONAL。 */
    bool has_sharedSpectrumChAccessParamsPerBand_v1650; /**< sharedSpectrumChAccessParamsPerBand-v1650 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1650 sharedSpectrumChAccessParamsPerBand_v1650; /**< ASN.1 sharedSpectrumChAccessParamsPerBand-v1650；结构体；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup10
 * @note ASN.1：BandNR_ExtGroup10；源文件第 19682 行。
 */
struct BandNR_ExtGroup10 {
    bool has_enhancedSkipUplinkTxConfigured_v1660; /**< enhancedSkipUplinkTxConfigured-v1660 是否存在。 */
    BandNR_ExtGroup10_EnhancedSkipUplinkTxConfigured_v1660 enhancedSkipUplinkTxConfigured_v1660; /**< ASN.1 enhancedSkipUplinkTxConfigured-v1660；枚举；OPTIONAL。 */
    bool has_enhancedSkipUplinkTxDynamic_v1660; /**< enhancedSkipUplinkTxDynamic-v1660 是否存在。 */
    BandNR_ExtGroup10_EnhancedSkipUplinkTxDynamic_v1660 enhancedSkipUplinkTxDynamic_v1660; /**< ASN.1 enhancedSkipUplinkTxDynamic-v1660；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup11
 * @note ASN.1：BandNR_ExtGroup11；源文件第 19686 行。
 */
struct BandNR_ExtGroup11 {
    bool has_maxUplinkDutyCycle_PC1dot5_MPE_FR1_r16; /**< maxUplinkDutyCycle-PC1dot5-MPE-FR1-r16 是否存在。 */
    BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16 maxUplinkDutyCycle_PC1dot5_MPE_FR1_r16; /**< ASN.1 maxUplinkDutyCycle-PC1dot5-MPE-FR1-r16；枚举；OPTIONAL。 */
    bool has_txDiversity_r16; /**< txDiversity-r16 是否存在。 */
    BandNR_ExtGroup11_TxDiversity_r16 txDiversity_r16; /**< ASN.1 txDiversity-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SharedSpectrumChAccessParamsPerBand_v1710
 * @note ASN.1：SharedSpectrumChAccessParamsPerBand-v1710；源文件第 20436 行。
 * @note SharedSpectrumChAccessParamsPerBand-v1710 ::= SEQUENCE { ul-Semi-StaticChAccessDependentConfig-r17, ul-Semi-StaticChAccessI...
 */
struct SharedSpectrumChAccessParamsPerBand_v1710 {
    bool has_ul_Semi_StaticChAccessDependentConfig_r17; /**< ul-Semi-StaticChAccessDependentConfig-r17 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessDependentConfig_r17 ul_Semi_StaticChAccessDependentConfig_r17; /**< ASN.1 ul-Semi-StaticChAccessDependentConfig-r17；枚举；OPTIONAL。 */
    bool has_ul_Semi_StaticChAccessIndependentConfig_r17; /**< ul-Semi-StaticChAccessIndependentConfig-r17 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessIndependentConfig_r17 ul_Semi_StaticChAccessIndependentConfig_r17; /**< ASN.1 ul-Semi-StaticChAccessIndependentConfig-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17
 * @note ASN.1：srs-PosResourcesRRC-Inactive-r17；源文件第 20748 行。
 * @note SEQUENCE { maxNumberSRS-PosResourceSetPerBWP-r17, maxNumberSRS-PosResourcesPe...
 */
struct SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17 {
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17 maxNumberSRS_PosResourceSetPerBWP_r17; /**< ASN.1 maxNumberSRS-PosResourceSetPerBWP-r17；枚举。 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17 maxNumberSRS_PosResourcesPerBWP_r17; /**< ASN.1 maxNumberSRS-PosResourcesPerBWP-r17；枚举。 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17 maxNumberSRS_ResourcesPerBWP_PerSlot_r17; /**< ASN.1 maxNumberSRS-ResourcesPerBWP-PerSlot-r17；枚举。 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17 maxNumberPeriodicSRS_PosResourcesPerBWP_r17; /**< ASN.1 maxNumberPeriodicSRS-PosResourcesPerBWP-r17；枚举。 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17 maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17; /**< ASN.1 maxNumberPeriodicSRS-PosResourcesPerBWP-PerSlot-r17；枚举。 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1 dummy1; /**< ASN.1 dummy1；枚举。 */
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2 dummy2; /**< ASN.1 dummy2；枚举。 */
};


/**
 * @brief SRS_AllPosResourcesRRC_Inactive_r17
 * @note ASN.1：SRS-AllPosResourcesRRC-Inactive-r17；源文件第 20747 行。
 * @note SRS-AllPosResourcesRRC-Inactive-r17 ::= SEQUENCE { srs-PosResourcesRRC-Inactive-r17 }
 */
struct SRS_AllPosResourcesRRC_Inactive_r17 {
    SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17 srs_PosResourcesRRC_Inactive_r17; /**< ASN.1 srs-PosResourcesRRC-Inactive-r17；结构体。 */
};


/**
 * @brief BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17
 * @note ASN.1：maxDurationDMRS-Bundling-r17；源文件第 19758 行。
 * @note SEQUENCE { fdd-r17, tdd-r17 }
 */
struct BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17 {
    bool has_fdd_r17; /**< fdd-r17 是否存在。 */
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Fdd_r17 fdd_r17; /**< ASN.1 fdd-r17；枚举；OPTIONAL。 */
    bool has_tdd_r17; /**< tdd-r17 是否存在。 */
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Tdd_r17 tdd_r17; /**< ASN.1 tdd-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17
 * @note ASN.1：aperiodicCSI-RS-FastScellActivation-r17；源文件第 19773 行。
 * @note SEQUENCE { maxNumberAperiodicCSI-RS-PerCC-r17, maxNumberAperiodicCSI-RS-Acros...
 */
struct BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17 {
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17 maxNumberAperiodicCSI_RS_PerCC_r17; /**< ASN.1 maxNumberAperiodicCSI-RS-PerCC-r17；枚举。 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17 maxNumberAperiodicCSI_RS_AcrossCCs_r17; /**< ASN.1 maxNumberAperiodicCSI-RS-AcrossCCs-r17；枚举。 */
};


/**
 * @brief BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17
 * @note ASN.1：enhancedType3-HARQ-CodebookFeedback-r17；源文件第 19798 行。
 * @note SEQUENCE { enhancedType3-HARQ-Codebooks-r17, maxNumberPUCCH-Transmissions-r17 }
 */
struct BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17 {
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_EnhancedType3_HARQ_Codebooks_r17 enhancedType3_HARQ_Codebooks_r17; /**< ASN.1 enhancedType3-HARQ-Codebooks-r17；枚举。 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17 maxNumberPUCCH_Transmissions_r17; /**< ASN.1 maxNumberPUCCH-Transmissions-r17；枚举。 */
};


/**
 * @brief BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17
 * @note ASN.1：triggeredHARQ-CodebookRetx-r17；源文件第 19803 行。
 * @note SEQUENCE { minHARQ-Retx-Offset-r17, maxHARQ-Retx-Offset-r17 }
 */
struct BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17 {
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17 minHARQ_Retx_Offset_r17; /**< ASN.1 minHARQ-Retx-Offset-r17；枚举。 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17 maxHARQ_Retx_Offset_r17; /**< ASN.1 maxHARQ-Retx-Offset-r17；枚举。 */
};


/**
 * @brief BandNR_ExtGroup12
 * @note ASN.1：BandNR_ExtGroup12；源文件第 19690 行。
 */
struct BandNR_ExtGroup12 {
    bool has_pdsch_1024QAM_FR1_r17; /**< pdsch-1024QAM-FR1-r17 是否存在。 */
    BandNR_ExtGroup12_Pdsch_1024QAM_FR1_r17 pdsch_1024QAM_FR1_r17; /**< ASN.1 pdsch-1024QAM-FR1-r17；枚举；OPTIONAL。 */
    bool has_ue_PowerClass_v1700; /**< ue-PowerClass-v1700 是否存在。 */
    BandNR_ExtGroup12_Ue_PowerClass_v1700 ue_PowerClass_v1700; /**< ASN.1 ue-PowerClass-v1700；枚举；OPTIONAL。 */
    bool has_fr2_2_AccessParamsPerBand_r17; /**< fr2-2-AccessParamsPerBand-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17 fr2_2_AccessParamsPerBand_r17; /**< ASN.1 fr2-2-AccessParamsPerBand-r17；结构体；OPTIONAL。 */
    bool has_rlm_Relaxation_r17; /**< rlm-Relaxation-r17 是否存在。 */
    BandNR_ExtGroup12_Rlm_Relaxation_r17 rlm_Relaxation_r17; /**< ASN.1 rlm-Relaxation-r17；枚举；OPTIONAL。 */
    bool has_bfd_Relaxation_r17; /**< bfd-Relaxation-r17 是否存在。 */
    BandNR_ExtGroup12_Bfd_Relaxation_r17 bfd_Relaxation_r17; /**< ASN.1 bfd-Relaxation-r17；枚举；OPTIONAL。 */
    bool has_cg_SDT_r17; /**< cg-SDT-r17 是否存在。 */
    BandNR_ExtGroup12_Cg_SDT_r17 cg_SDT_r17; /**< ASN.1 cg-SDT-r17；枚举；OPTIONAL。 */
    bool has_locationBasedCondHandover_r17; /**< locationBasedCondHandover-r17 是否存在。 */
    BandNR_ExtGroup12_LocationBasedCondHandover_r17 locationBasedCondHandover_r17; /**< ASN.1 locationBasedCondHandover-r17；枚举；OPTIONAL。 */
    bool has_timeBasedCondHandover_r17; /**< timeBasedCondHandover-r17 是否存在。 */
    BandNR_ExtGroup12_TimeBasedCondHandover_r17 timeBasedCondHandover_r17; /**< ASN.1 timeBasedCondHandover-r17；枚举；OPTIONAL。 */
    bool has_eventA4BasedCondHandover_r17; /**< eventA4BasedCondHandover-r17 是否存在。 */
    BandNR_ExtGroup12_EventA4BasedCondHandover_r17 eventA4BasedCondHandover_r17; /**< ASN.1 eventA4BasedCondHandover-r17；枚举；OPTIONAL。 */
    bool has_mn_InitiatedCondPSCellChangeNRDC_r17; /**< mn-InitiatedCondPSCellChangeNRDC-r17 是否存在。 */
    BandNR_ExtGroup12_Mn_InitiatedCondPSCellChangeNRDC_r17 mn_InitiatedCondPSCellChangeNRDC_r17; /**< ASN.1 mn-InitiatedCondPSCellChangeNRDC-r17；枚举；OPTIONAL。 */
    bool has_sn_InitiatedCondPSCellChangeNRDC_r17; /**< sn-InitiatedCondPSCellChangeNRDC-r17 是否存在。 */
    BandNR_ExtGroup12_Sn_InitiatedCondPSCellChangeNRDC_r17 sn_InitiatedCondPSCellChangeNRDC_r17; /**< ASN.1 sn-InitiatedCondPSCellChangeNRDC-r17；枚举；OPTIONAL。 */
    bool has_pdcch_SkippingWithoutSSSG_r17; /**< pdcch-SkippingWithoutSSSG-r17 是否存在。 */
    BandNR_ExtGroup12_Pdcch_SkippingWithoutSSSG_r17 pdcch_SkippingWithoutSSSG_r17; /**< ASN.1 pdcch-SkippingWithoutSSSG-r17；枚举；OPTIONAL。 */
    bool has_sssg_Switching_1BitInd_r17; /**< sssg-Switching-1BitInd-r17 是否存在。 */
    BandNR_ExtGroup12_Sssg_Switching_1BitInd_r17 sssg_Switching_1BitInd_r17; /**< ASN.1 sssg-Switching-1BitInd-r17；枚举；OPTIONAL。 */
    bool has_sssg_Switching_2BitInd_r17; /**< sssg-Switching-2BitInd-r17 是否存在。 */
    BandNR_ExtGroup12_Sssg_Switching_2BitInd_r17 sssg_Switching_2BitInd_r17; /**< ASN.1 sssg-Switching-2BitInd-r17；枚举；OPTIONAL。 */
    bool has_pdcch_SkippingWithSSSG_r17; /**< pdcch-SkippingWithSSSG-r17 是否存在。 */
    BandNR_ExtGroup12_Pdcch_SkippingWithSSSG_r17 pdcch_SkippingWithSSSG_r17; /**< ASN.1 pdcch-SkippingWithSSSG-r17；枚举；OPTIONAL。 */
    bool has_searchSpaceSetGrp_switchCap2_r17; /**< searchSpaceSetGrp-switchCap2-r17 是否存在。 */
    BandNR_ExtGroup12_SearchSpaceSetGrp_switchCap2_r17 searchSpaceSetGrp_switchCap2_r17; /**< ASN.1 searchSpaceSetGrp-switchCap2-r17；枚举；OPTIONAL。 */
    bool has_uplinkPreCompensation_r17; /**< uplinkPreCompensation-r17 是否存在。 */
    BandNR_ExtGroup12_UplinkPreCompensation_r17 uplinkPreCompensation_r17; /**< ASN.1 uplinkPreCompensation-r17；枚举；OPTIONAL。 */
    bool has_uplink_TA_Reporting_r17; /**< uplink-TA-Reporting-r17 是否存在。 */
    BandNR_ExtGroup12_Uplink_TA_Reporting_r17 uplink_TA_Reporting_r17; /**< ASN.1 uplink-TA-Reporting-r17；枚举；OPTIONAL。 */
    bool has_max_HARQ_ProcessNumber_r17; /**< max-HARQ-ProcessNumber-r17 是否存在。 */
    BandNR_ExtGroup12_Max_HARQ_ProcessNumber_r17 max_HARQ_ProcessNumber_r17; /**< ASN.1 max-HARQ-ProcessNumber-r17；枚举；OPTIONAL。 */
    bool has_type2_HARQ_Codebook_r17; /**< type2-HARQ-Codebook-r17 是否存在。 */
    BandNR_ExtGroup12_Type2_HARQ_Codebook_r17 type2_HARQ_Codebook_r17; /**< ASN.1 type2-HARQ-Codebook-r17；枚举；OPTIONAL。 */
    bool has_type1_HARQ_Codebook_r17; /**< type1-HARQ-Codebook-r17 是否存在。 */
    BandNR_ExtGroup12_Type1_HARQ_Codebook_r17 type1_HARQ_Codebook_r17; /**< ASN.1 type1-HARQ-Codebook-r17；枚举；OPTIONAL。 */
    bool has_type3_HARQ_Codebook_r17; /**< type3-HARQ-Codebook-r17 是否存在。 */
    BandNR_ExtGroup12_Type3_HARQ_Codebook_r17 type3_HARQ_Codebook_r17; /**< ASN.1 type3-HARQ-Codebook-r17；枚举；OPTIONAL。 */
    bool has_ue_specific_K_Offset_r17; /**< ue-specific-K-Offset-r17 是否存在。 */
    BandNR_ExtGroup12_Ue_specific_K_Offset_r17 ue_specific_K_Offset_r17; /**< ASN.1 ue-specific-K-Offset-r17；枚举；OPTIONAL。 */
    bool has_multiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17; /**< multiPDSCH-SingleDCI-FR2-1-SCS-120kHz-r17 是否存在。 */
    BandNR_ExtGroup12_MultiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17 multiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17; /**< ASN.1 multiPDSCH-SingleDCI-FR2-1-SCS-120kHz-r17；枚举；OPTIONAL。 */
    bool has_multiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17; /**< multiPUSCH-SingleDCI-FR2-1-SCS-120kHz-r17 是否存在。 */
    BandNR_ExtGroup12_MultiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17 multiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17; /**< ASN.1 multiPUSCH-SingleDCI-FR2-1-SCS-120kHz-r17；枚举；OPTIONAL。 */
    bool has_parallelPRS_MeasRRC_Inactive_r17; /**< parallelPRS-MeasRRC-Inactive-r17 是否存在。 */
    BandNR_ExtGroup12_ParallelPRS_MeasRRC_Inactive_r17 parallelPRS_MeasRRC_Inactive_r17; /**< ASN.1 parallelPRS-MeasRRC-Inactive-r17；枚举；OPTIONAL。 */
    bool has_nr_UE_TxTEG_ID_MaxSupport_r17; /**< nr-UE-TxTEG-ID-MaxSupport-r17 是否存在。 */
    BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17 nr_UE_TxTEG_ID_MaxSupport_r17; /**< ASN.1 nr-UE-TxTEG-ID-MaxSupport-r17；枚举；OPTIONAL。 */
    bool has_prs_ProcessingRRC_Inactive_r17; /**< prs-ProcessingRRC-Inactive-r17 是否存在。 */
    BandNR_ExtGroup12_Prs_ProcessingRRC_Inactive_r17 prs_ProcessingRRC_Inactive_r17; /**< ASN.1 prs-ProcessingRRC-Inactive-r17；枚举；OPTIONAL。 */
    bool has_prs_ProcessingWindowType1A_r17; /**< prs-ProcessingWindowType1A-r17 是否存在。 */
    BandNR_ExtGroup12_Prs_ProcessingWindowType1A_r17 prs_ProcessingWindowType1A_r17; /**< ASN.1 prs-ProcessingWindowType1A-r17；枚举；OPTIONAL。 */
    bool has_prs_ProcessingWindowType1B_r17; /**< prs-ProcessingWindowType1B-r17 是否存在。 */
    BandNR_ExtGroup12_Prs_ProcessingWindowType1B_r17 prs_ProcessingWindowType1B_r17; /**< ASN.1 prs-ProcessingWindowType1B-r17；枚举；OPTIONAL。 */
    bool has_prs_ProcessingWindowType2_r17; /**< prs-ProcessingWindowType2-r17 是否存在。 */
    BandNR_ExtGroup12_Prs_ProcessingWindowType2_r17 prs_ProcessingWindowType2_r17; /**< ASN.1 prs-ProcessingWindowType2-r17；枚举；OPTIONAL。 */
    bool has_srs_AllPosResourcesRRC_Inactive_r17; /**< srs-AllPosResourcesRRC-Inactive-r17 是否存在。 */
    SRS_AllPosResourcesRRC_Inactive_r17 srs_AllPosResourcesRRC_Inactive_r17; /**< ASN.1 srs-AllPosResourcesRRC-Inactive-r17；结构体；OPTIONAL。 */
    bool has_olpc_SRS_PosRRC_Inactive_r17; /**< olpc-SRS-PosRRC-Inactive-r17 是否存在。 */
    OLPC_SRS_Pos_r16 olpc_SRS_PosRRC_Inactive_r17; /**< ASN.1 olpc-SRS-PosRRC-Inactive-r17；结构体；OPTIONAL。 */
    bool has_spatialRelationsSRS_PosRRC_Inactive_r17; /**< spatialRelationsSRS-PosRRC-Inactive-r17 是否存在。 */
    SpatialRelationsSRS_Pos_r16 spatialRelationsSRS_PosRRC_Inactive_r17; /**< ASN.1 spatialRelationsSRS-PosRRC-Inactive-r17；结构体；OPTIONAL。 */
    bool has_maxNumberPUSCH_TypeA_Repetition_r17; /**< maxNumberPUSCH-TypeA-Repetition-r17 是否存在。 */
    BandNR_ExtGroup12_MaxNumberPUSCH_TypeA_Repetition_r17 maxNumberPUSCH_TypeA_Repetition_r17; /**< ASN.1 maxNumberPUSCH-TypeA-Repetition-r17；枚举；OPTIONAL。 */
    bool has_puschTypeA_RepetitionsAvailSlot_r17; /**< puschTypeA-RepetitionsAvailSlot-r17 是否存在。 */
    BandNR_ExtGroup12_PuschTypeA_RepetitionsAvailSlot_r17 puschTypeA_RepetitionsAvailSlot_r17; /**< ASN.1 puschTypeA-RepetitionsAvailSlot-r17；枚举；OPTIONAL。 */
    bool has_tb_ProcessingMultiSlotPUSCH_r17; /**< tb-ProcessingMultiSlotPUSCH-r17 是否存在。 */
    BandNR_ExtGroup12_Tb_ProcessingMultiSlotPUSCH_r17 tb_ProcessingMultiSlotPUSCH_r17; /**< ASN.1 tb-ProcessingMultiSlotPUSCH-r17；枚举；OPTIONAL。 */
    bool has_tb_ProcessingRepMultiSlotPUSCH_r17; /**< tb-ProcessingRepMultiSlotPUSCH-r17 是否存在。 */
    BandNR_ExtGroup12_Tb_ProcessingRepMultiSlotPUSCH_r17 tb_ProcessingRepMultiSlotPUSCH_r17; /**< ASN.1 tb-ProcessingRepMultiSlotPUSCH-r17；枚举；OPTIONAL。 */
    bool has_maxDurationDMRS_Bundling_r17; /**< maxDurationDMRS-Bundling-r17 是否存在。 */
    BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17 maxDurationDMRS_Bundling_r17; /**< ASN.1 maxDurationDMRS-Bundling-r17；结构体；OPTIONAL。 */
    bool has_pusch_RepetitionMsg3_r17; /**< pusch-RepetitionMsg3-r17 是否存在。 */
    BandNR_ExtGroup12_Pusch_RepetitionMsg3_r17 pusch_RepetitionMsg3_r17; /**< ASN.1 pusch-RepetitionMsg3-r17；枚举；OPTIONAL。 */
    bool has_sharedSpectrumChAccessParamsPerBand_v1710; /**< sharedSpectrumChAccessParamsPerBand-v1710 是否存在。 */
    SharedSpectrumChAccessParamsPerBand_v1710 sharedSpectrumChAccessParamsPerBand_v1710; /**< ASN.1 sharedSpectrumChAccessParamsPerBand-v1710；结构体；OPTIONAL。 */
    bool has_parallelMeasurementWithoutRestriction_r17; /**< parallelMeasurementWithoutRestriction-r17 是否存在。 */
    BandNR_ExtGroup12_ParallelMeasurementWithoutRestriction_r17 parallelMeasurementWithoutRestriction_r17; /**< ASN.1 parallelMeasurementWithoutRestriction-r17；枚举；OPTIONAL。 */
    bool has_maxNumber_NGSO_SatellitesWithinOneSMTC_r17; /**< maxNumber-NGSO-SatellitesWithinOneSMTC-r17 是否存在。 */
    BandNR_ExtGroup12_MaxNumber_NGSO_SatellitesWithinOneSMTC_r17 maxNumber_NGSO_SatellitesWithinOneSMTC_r17; /**< ASN.1 maxNumber-NGSO-SatellitesWithinOneSMTC-r17；枚举；OPTIONAL。 */
    bool has_k1_RangeExtension_r17; /**< k1-RangeExtension-r17 是否存在。 */
    BandNR_ExtGroup12_K1_RangeExtension_r17 k1_RangeExtension_r17; /**< ASN.1 k1-RangeExtension-r17；枚举；OPTIONAL。 */
    bool has_aperiodicCSI_RS_FastScellActivation_r17; /**< aperiodicCSI-RS-FastScellActivation-r17 是否存在。 */
    BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17 aperiodicCSI_RS_FastScellActivation_r17; /**< ASN.1 aperiodicCSI-RS-FastScellActivation-r17；结构体；OPTIONAL。 */
    bool has_aperiodicCSI_RS_AdditionalBandwidth_r17; /**< aperiodicCSI-RS-AdditionalBandwidth-r17 是否存在。 */
    BandNR_ExtGroup12_AperiodicCSI_RS_AdditionalBandwidth_r17 aperiodicCSI_RS_AdditionalBandwidth_r17; /**< ASN.1 aperiodicCSI-RS-AdditionalBandwidth-r17；枚举；OPTIONAL。 */
    bool has_bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17; /**< bwp-WithoutCD-SSB-OrNCD-SSB-RedCap-r17 是否存在。 */
    BandNR_ExtGroup12_Bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17 bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17; /**< ASN.1 bwp-WithoutCD-SSB-OrNCD-SSB-RedCap-r17；枚举；OPTIONAL。 */
    bool has_halfDuplexFDD_TypeA_RedCap_r17; /**< halfDuplexFDD-TypeA-RedCap-r17 是否存在。 */
    BandNR_ExtGroup12_HalfDuplexFDD_TypeA_RedCap_r17 halfDuplexFDD_TypeA_RedCap_r17; /**< ASN.1 halfDuplexFDD-TypeA-RedCap-r17；枚举；OPTIONAL。 */
    bool has_posSRS_RRC_Inactive_OutsideInitialUL_BWP_r17; /**< posSRS-RRC-Inactive-OutsideInitialUL-BWP-r17 是否存在。 */
    PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17 posSRS_RRC_Inactive_OutsideInitialUL_BWP_r17; /**< ASN.1 posSRS-RRC-Inactive-OutsideInitialUL-BWP-r17；结构体；OPTIONAL。 */
    bool has_channelBWs_DL_SCS_480kHz_FR2_2_r17; /**< channelBWs-DL-SCS-480kHz-FR2-2-r17 是否存在。 */
    BitString channelBWs_DL_SCS_480kHz_FR2_2_r17; /**< ASN.1 channelBWs-DL-SCS-480kHz-FR2-2-r17；SIZE (8)，定长；OPTIONAL。 */
    bool has_channelBWs_UL_SCS_480kHz_FR2_2_r17; /**< channelBWs-UL-SCS-480kHz-FR2-2-r17 是否存在。 */
    BitString channelBWs_UL_SCS_480kHz_FR2_2_r17; /**< ASN.1 channelBWs-UL-SCS-480kHz-FR2-2-r17；SIZE (8)，定长；OPTIONAL。 */
    bool has_channelBWs_DL_SCS_960kHz_FR2_2_r17; /**< channelBWs-DL-SCS-960kHz-FR2-2-r17 是否存在。 */
    BitString channelBWs_DL_SCS_960kHz_FR2_2_r17; /**< ASN.1 channelBWs-DL-SCS-960kHz-FR2-2-r17；SIZE (8)，定长；OPTIONAL。 */
    bool has_channelBWs_UL_SCS_960kHz_FR2_2_r17; /**< channelBWs-UL-SCS-960kHz-FR2-2-r17 是否存在。 */
    BitString channelBWs_UL_SCS_960kHz_FR2_2_r17; /**< ASN.1 channelBWs-UL-SCS-960kHz-FR2-2-r17；SIZE (8)，定长；OPTIONAL。 */
    bool has_ul_GapFR2_r17; /**< ul-GapFR2-r17 是否存在。 */
    BandNR_ExtGroup12_Ul_GapFR2_r17 ul_GapFR2_r17; /**< ASN.1 ul-GapFR2-r17；枚举；OPTIONAL。 */
    bool has_oneShotHARQ_feedbackTriggeredByDCI_1_2_r17; /**< oneShotHARQ-feedbackTriggeredByDCI-1-2-r17 是否存在。 */
    BandNR_ExtGroup12_OneShotHARQ_feedbackTriggeredByDCI_1_2_r17 oneShotHARQ_feedbackTriggeredByDCI_1_2_r17; /**< ASN.1 oneShotHARQ-feedbackTriggeredByDCI-1-2-r17；枚举；OPTIONAL。 */
    bool has_oneShotHARQ_feedbackPhy_Priority_r17; /**< oneShotHARQ-feedbackPhy-Priority-r17 是否存在。 */
    BandNR_ExtGroup12_OneShotHARQ_feedbackPhy_Priority_r17 oneShotHARQ_feedbackPhy_Priority_r17; /**< ASN.1 oneShotHARQ-feedbackPhy-Priority-r17；枚举；OPTIONAL。 */
    bool has_enhancedType3_HARQ_CodebookFeedback_r17; /**< enhancedType3-HARQ-CodebookFeedback-r17 是否存在。 */
    BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17 enhancedType3_HARQ_CodebookFeedback_r17; /**< ASN.1 enhancedType3-HARQ-CodebookFeedback-r17；结构体；OPTIONAL。 */
    bool has_triggeredHARQ_CodebookRetx_r17; /**< triggeredHARQ-CodebookRetx-r17 是否存在。 */
    BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17 triggeredHARQ_CodebookRetx_r17; /**< ASN.1 triggeredHARQ-CodebookRetx-r17；结构体；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17
 * @note ASN.1：maxModulationOrderForMulticast-r17；源文件第 19826 行。
 * @note CHOICE { fr1-r17, fr2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag {
    BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag_fr1_r17 = 0, /**< ASN.1 fr1-r17 */
    BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag_fr2_r17 = 1, /**< ASN.1 fr2-r17 */
} BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag;

struct BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17 {
    BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr1_r17 fr1_r17; /**< ASN.1 fr1-r17 */
        BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr2_r17 fr2_r17; /**< ASN.1 fr2-r17 */
    } u;
};


/**
 * @brief BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17
 * @note ASN.1：srs-SemiPersistent-PosResourcesRRC-Inactive-r17；源文件第 19851 行。
 * @note SEQUENCE { maxNumOfSemiPersistentSRSposResources-r17, maxNumOfSemiPersistentS...
 */
struct BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17 {
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17 maxNumOfSemiPersistentSRSposResources_r17; /**< ASN.1 maxNumOfSemiPersistentSRSposResources-r17；枚举。 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17 maxNumOfSemiPersistentSRSposResourcesPerSlot_r17; /**< ASN.1 maxNumOfSemiPersistentSRSposResourcesPerSlot-r17；枚举。 */
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART023_H */
