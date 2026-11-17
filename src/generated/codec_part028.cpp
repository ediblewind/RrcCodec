/* ============================================================================
 * src/generated/codec_part028.cpp — 生成的编解码函数
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#include "codec_internal.h"

#include <cstdlib>
#include <cstring>
#include <vector>

namespace rrc {
namespace v1810 {

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicSRS_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicSRS_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSemiPersistentSRS_r18), 0, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousSRS_PerCC_r18), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousCSI_RS_NonCB_r18), 1, 2);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberPeriodicSRS_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberAperiodicSRS_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.maxNumberSemiPersistentSRS_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.simultaneousSRS_PerCC_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.simultaneousCSI_RS_NonCB_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18(MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicSRS_Resource_PerBWP_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicSRS_Resource_PerBWP_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSemiPersistentSRS_ResourcePerBWP_r18), 0, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.valueY_SRS_ResourceAssociate_r18), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.valueX_CSI_RS_ResourceAssociate_r18), 1, 2);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberPeriodicSRS_Resource_PerBWP_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberAperiodicSRS_Resource_PerBWP_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.maxNumberSemiPersistentSRS_ResourcePerBWP_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.valueY_SRS_ResourceAssociate_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.valueX_CSI_RS_ResourceAssociate_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18(MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.groupL1_RSRP_Reporting_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberBeamGroups_r18), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResWithinSlotAcrossCC_r18), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResAcrossCC_r18), 0, 4);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.groupL1_RSRP_Reporting_r18 = (MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_GroupL1_RSRP_Reporting_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberBeamGroups_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberResWithinSlotAcrossCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberResAcrossCC_r18 = (MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18(MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_ExtGroup10(Encoder& enc, const MIMO_ParametersPerBand_ExtGroup10& value)
{
    (void)value;
    enc.WriteBit(value.has_codebookParametersetype2DopplerCSI_r18);
    enc.WriteBit(value.has_codebookParametersfetype2DopplerCSI_r18);
    enc.WriteBit(value.has_codebookParametersetype2CJT_r18);
    enc.WriteBit(value.has_codebookParametersfetype2CJT_r18);
    enc.WriteBit(value.has_codebookComboParametersCJT_r18);
    enc.WriteBit(value.has_codebookParametersHARQ_ACK_PUSCH_r18);
    enc.WriteBit(value.has_tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18);
    enc.WriteBit(value.has_tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18);
    enc.WriteBit(value.has_tci_SelectionDCI_r18);
    enc.WriteBit(value.has_tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18);
    enc.WriteBit(value.has_tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18);
    enc.WriteBit(value.has_tci_SelectionAperiodicCSI_RS_r18);
    enc.WriteBit(value.has_twoTCI_StatePDSCH_CJT_TxScheme_r18);
    enc.WriteBit(value.has_tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18);
    enc.WriteBit(value.has_tci_JointTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18);
    enc.WriteBit(value.has_tci_TRP_BFR_r18);
    enc.WriteBit(value.has_tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18);
    enc.WriteBit(value.has_tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18);
    enc.WriteBit(value.has_commonTCI_SingleDCI_r18);
    enc.WriteBit(value.has_commonTCI_MultiDCI_r18);
    enc.WriteBit(value.has_spCell_TAG_Ind_r18);
    enc.WriteBit(value.has_interCellCrossTRP_PDCCH_OrderCFRA_r18);
    enc.WriteBit(value.has_intraCellCrossTRP_PDCCH_OrderCFRA_r18);
    enc.WriteBit(value.has_overlapUL_TransReduction_r18);
    enc.WriteBit(value.has_tdcp_Report_r18);
    enc.WriteBit(value.has_tdcp_Resource_r18);
    enc.WriteBit(value.has_timelineRelax_CJT_CSI_r18);
    enc.WriteBit(value.has_jointConfigDMRSPortDynamicSwitching_r18);
    enc.WriteBit(value.has_srs_combOffsetHopping_r18);
    enc.WriteBit(value.has_srs_combOffsetInTime_r18);
    enc.WriteBit(value.has_srs_combOffsetCombinedGroupSequence_r18);
    enc.WriteBit(value.has_srs_combOffsetHoppingWithinSubset_r18);
    enc.WriteBit(value.has_srs_cyclicShiftHopping_r18);
    enc.WriteBit(value.has_srs_cyclicShiftHoppingSmallGranularity_r18);
    enc.WriteBit(value.has_srs_cyclicShiftCombinedGroupSequence_r18);
    enc.WriteBit(value.has_cyclicShiftHoppingWithinSubset_r18);
    enc.WriteBit(value.has_srs_cyclicShiftCombinedCombOffset_r18);
    enc.WriteBit(value.has_pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18);
    enc.WriteBit(value.has_pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18);
    enc.WriteBit(value.has_pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18);
    enc.WriteBit(value.has_twoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18);
    enc.WriteBit(value.has_dmrs_PortEntrySingleDCI_SDM_r18);
    enc.WriteBit(value.has_pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18);
    enc.WriteBit(value.has_pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18);
    enc.WriteBit(value.has_pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18);
    enc.WriteBit(value.has_twoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18);
    enc.WriteBit(value.has_twoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18);
    enc.WriteBit(value.has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18);
    enc.WriteBit(value.has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18);
    enc.WriteBit(value.has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18);
    enc.WriteBit(value.has_twoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18);
    enc.WriteBit(value.has_twoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18);
    enc.WriteBit(value.has_twoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18);
    enc.WriteBit(value.has_twoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18);
    enc.WriteBit(value.has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18);
    enc.WriteBit(value.has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18);
    enc.WriteBit(value.has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18);
    enc.WriteBit(value.has_twoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18);
    enc.WriteBit(value.has_twoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18);
    enc.WriteBit(value.has_pucch_RepetitionDynamicIndicationSFN_r18);
    enc.WriteBit(value.has_groupBeamReporting_STx2P_r18);
    if (value.has_codebookParametersetype2DopplerCSI_r18) {
        Encode_CodebookParametersetype2DopplerCSI_r18(enc, value.codebookParametersetype2DopplerCSI_r18);
    }
    if (value.has_codebookParametersfetype2DopplerCSI_r18) {
        Encode_CodebookParametersfetype2DopplerCSI_r18(enc, value.codebookParametersfetype2DopplerCSI_r18);
    }
    if (value.has_codebookParametersetype2CJT_r18) {
        Encode_CodebookParametersetype2CJT_r18(enc, value.codebookParametersetype2CJT_r18);
    }
    if (value.has_codebookParametersfetype2CJT_r18) {
        Encode_CodebookParametersfetype2CJT_r18(enc, value.codebookParametersfetype2CJT_r18);
    }
    if (value.has_codebookComboParametersCJT_r18) {
        Encode_CodebookComboParametersCJT_r18(enc, value.codebookComboParametersCJT_r18);
    }
    if (value.has_codebookParametersHARQ_ACK_PUSCH_r18) {
        Encode_CodebookParametersHARQ_ACK_PUSCH_r18(enc, value.codebookParametersHARQ_ACK_PUSCH_r18);
    }
    if (value.has_tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18(enc, value.tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18);
    }
    if (value.has_tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18(enc, value.tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18);
    }
    if (value.has_tci_SelectionDCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tci_SelectionDCI_r18), 0, 0);
    }
    if (value.has_tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18(enc, value.tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18);
    }
    if (value.has_tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18(enc, value.tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18);
    }
    if (value.has_tci_SelectionAperiodicCSI_RS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tci_SelectionAperiodicCSI_RS_r18), 0, 2);
    }
    if (value.has_twoTCI_StatePDSCH_CJT_TxScheme_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoTCI_StatePDSCH_CJT_TxScheme_r18), 0, 2);
    }
    if (value.has_tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(enc, value.tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18);
    }
    if (value.has_tci_JointTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tci_JointTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18), 2, 8);
    }
    if (value.has_tci_TRP_BFR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tci_TRP_BFR_r18), 0, 0);
    }
    if (value.has_tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(enc, value.tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18);
    }
    if (value.has_tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18(enc, value.tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18);
    }
    if (value.has_commonTCI_SingleDCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.commonTCI_SingleDCI_r18), 1, 4);
    }
    if (value.has_commonTCI_MultiDCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.commonTCI_MultiDCI_r18), 1, 4);
    }
    if (value.has_spCell_TAG_Ind_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spCell_TAG_Ind_r18), 0, 0);
    }
    if (value.has_interCellCrossTRP_PDCCH_OrderCFRA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interCellCrossTRP_PDCCH_OrderCFRA_r18), 0, 0);
    }
    if (value.has_intraCellCrossTRP_PDCCH_OrderCFRA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraCellCrossTRP_PDCCH_OrderCFRA_r18), 0, 0);
    }
    if (value.has_overlapUL_TransReduction_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.overlapUL_TransReduction_r18), 0, 0);
    }
    if (value.has_tdcp_Report_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18(enc, value.tdcp_Report_r18);
    }
    if (value.has_tdcp_Resource_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18(enc, value.tdcp_Resource_r18);
    }
    if (value.has_timelineRelax_CJT_CSI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timelineRelax_CJT_CSI_r18), 0, 1);
    }
    if (value.has_jointConfigDMRSPortDynamicSwitching_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.jointConfigDMRSPortDynamicSwitching_r18), 0, 0);
    }
    if (value.has_srs_combOffsetHopping_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_combOffsetHopping_r18), 0, 0);
    }
    if (value.has_srs_combOffsetInTime_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_combOffsetInTime_r18), 0, 2);
    }
    if (value.has_srs_combOffsetCombinedGroupSequence_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_combOffsetCombinedGroupSequence_r18), 0, 0);
    }
    if (value.has_srs_combOffsetHoppingWithinSubset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_combOffsetHoppingWithinSubset_r18), 0, 0);
    }
    if (value.has_srs_cyclicShiftHopping_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_cyclicShiftHopping_r18), 0, 0);
    }
    if (value.has_srs_cyclicShiftHoppingSmallGranularity_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_cyclicShiftHoppingSmallGranularity_r18), 0, 0);
    }
    if (value.has_srs_cyclicShiftCombinedGroupSequence_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_cyclicShiftCombinedGroupSequence_r18), 0, 0);
    }
    if (value.has_cyclicShiftHoppingWithinSubset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cyclicShiftHoppingWithinSubset_r18), 0, 0);
    }
    if (value.has_srs_cyclicShiftCombinedCombOffset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_cyclicShiftCombinedCombOffset_r18), 0, 0);
    }
    if (value.has_pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18), 0, 0);
    }
    if (value.has_pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18), 0, 0);
    }
    if (value.has_pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18(enc, value.pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18);
    }
    if (value.has_twoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18(enc, value.twoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18);
    }
    if (value.has_dmrs_PortEntrySingleDCI_SDM_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_PortEntrySingleDCI_SDM_r18), 0, 0);
    }
    if (value.has_pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18), 0, 0);
    }
    if (value.has_pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18), 0, 0);
    }
    if (value.has_pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18(enc, value.pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18);
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18), 0, 0);
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18), 0, 0);
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18), 0, 0);
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18), 0, 0);
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18), 0, 0);
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18), 0, 0);
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18), 0, 0);
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18), 0, 0);
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18), 0, 0);
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18), 0, 0);
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18), 0, 0);
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18), 0, 0);
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18), 0, 0);
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18), 0, 0);
    }
    if (value.has_pucch_RepetitionDynamicIndicationSFN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_RepetitionDynamicIndicationSFN_r18), 0, 0);
    }
    if (value.has_groupBeamReporting_STx2P_r18) {
        Encode_MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18(enc, value.groupBeamReporting_STx2P_r18);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_ExtGroup10(Decoder& dec, MIMO_ParametersPerBand_ExtGroup10& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    bool present_17 = false;
    bool present_18 = false;
    bool present_19 = false;
    bool present_20 = false;
    bool present_21 = false;
    bool present_22 = false;
    bool present_23 = false;
    bool present_24 = false;
    bool present_25 = false;
    bool present_26 = false;
    bool present_27 = false;
    bool present_28 = false;
    bool present_29 = false;
    bool present_30 = false;
    bool present_31 = false;
    bool present_32 = false;
    bool present_33 = false;
    bool present_34 = false;
    bool present_35 = false;
    bool present_36 = false;
    bool present_37 = false;
    bool present_38 = false;
    bool present_39 = false;
    bool present_40 = false;
    bool present_41 = false;
    bool present_42 = false;
    bool present_43 = false;
    bool present_44 = false;
    bool present_45 = false;
    bool present_46 = false;
    bool present_47 = false;
    bool present_48 = false;
    bool present_49 = false;
    bool present_50 = false;
    bool present_51 = false;
    bool present_52 = false;
    bool present_53 = false;
    bool present_54 = false;
    bool present_55 = false;
    bool present_56 = false;
    bool present_57 = false;
    bool present_58 = false;
    bool present_59 = false;
    bool present_60 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (!dec.ReadBit(present_17)) { goto fail; }
    if (!dec.ReadBit(present_18)) { goto fail; }
    if (!dec.ReadBit(present_19)) { goto fail; }
    if (!dec.ReadBit(present_20)) { goto fail; }
    if (!dec.ReadBit(present_21)) { goto fail; }
    if (!dec.ReadBit(present_22)) { goto fail; }
    if (!dec.ReadBit(present_23)) { goto fail; }
    if (!dec.ReadBit(present_24)) { goto fail; }
    if (!dec.ReadBit(present_25)) { goto fail; }
    if (!dec.ReadBit(present_26)) { goto fail; }
    if (!dec.ReadBit(present_27)) { goto fail; }
    if (!dec.ReadBit(present_28)) { goto fail; }
    if (!dec.ReadBit(present_29)) { goto fail; }
    if (!dec.ReadBit(present_30)) { goto fail; }
    if (!dec.ReadBit(present_31)) { goto fail; }
    if (!dec.ReadBit(present_32)) { goto fail; }
    if (!dec.ReadBit(present_33)) { goto fail; }
    if (!dec.ReadBit(present_34)) { goto fail; }
    if (!dec.ReadBit(present_35)) { goto fail; }
    if (!dec.ReadBit(present_36)) { goto fail; }
    if (!dec.ReadBit(present_37)) { goto fail; }
    if (!dec.ReadBit(present_38)) { goto fail; }
    if (!dec.ReadBit(present_39)) { goto fail; }
    if (!dec.ReadBit(present_40)) { goto fail; }
    if (!dec.ReadBit(present_41)) { goto fail; }
    if (!dec.ReadBit(present_42)) { goto fail; }
    if (!dec.ReadBit(present_43)) { goto fail; }
    if (!dec.ReadBit(present_44)) { goto fail; }
    if (!dec.ReadBit(present_45)) { goto fail; }
    if (!dec.ReadBit(present_46)) { goto fail; }
    if (!dec.ReadBit(present_47)) { goto fail; }
    if (!dec.ReadBit(present_48)) { goto fail; }
    if (!dec.ReadBit(present_49)) { goto fail; }
    if (!dec.ReadBit(present_50)) { goto fail; }
    if (!dec.ReadBit(present_51)) { goto fail; }
    if (!dec.ReadBit(present_52)) { goto fail; }
    if (!dec.ReadBit(present_53)) { goto fail; }
    if (!dec.ReadBit(present_54)) { goto fail; }
    if (!dec.ReadBit(present_55)) { goto fail; }
    if (!dec.ReadBit(present_56)) { goto fail; }
    if (!dec.ReadBit(present_57)) { goto fail; }
    if (!dec.ReadBit(present_58)) { goto fail; }
    if (!dec.ReadBit(present_59)) { goto fail; }
    if (!dec.ReadBit(present_60)) { goto fail; }
    if (present_0) {
        if (Decode_CodebookParametersetype2DopplerCSI_r18(dec, value.codebookParametersetype2DopplerCSI_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CodebookParametersfetype2DopplerCSI_r18(dec, value.codebookParametersfetype2DopplerCSI_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CodebookParametersetype2CJT_r18(dec, value.codebookParametersetype2CJT_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_CodebookParametersfetype2CJT_r18(dec, value.codebookParametersfetype2CJT_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_CodebookComboParametersCJT_r18(dec, value.codebookComboParametersCJT_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_CodebookParametersHARQ_ACK_PUSCH_r18(dec, value.codebookParametersHARQ_ACK_PUSCH_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18(dec, value.tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18(dec, value.tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        value.tci_SelectionDCI_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionDCI_r18)0;
    }
    if (present_9) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18(dec, value.tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18(dec, value.tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.tci_SelectionAperiodicCSI_RS_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_SelectionAperiodicCSI_RS_r18)tmp_value;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.twoTCI_StatePDSCH_CJT_TxScheme_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoTCI_StatePDSCH_CJT_TxScheme_r18)tmp_value;
    }
    if (present_13) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(dec, value.tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.tci_JointTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18 = (int64_t)tmp_value;
    }
    if (present_15) {
        value.tci_TRP_BFR_r18 = (MIMO_ParametersPerBand_ExtGroup10_Tci_TRP_BFR_r18)0;
    }
    if (present_16) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(dec, value.tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_17) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18(dec, value.tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_18) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.commonTCI_SingleDCI_r18 = (int64_t)tmp_value;
    }
    if (present_19) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.commonTCI_MultiDCI_r18 = (int64_t)tmp_value;
    }
    if (present_20) {
        value.spCell_TAG_Ind_r18 = (MIMO_ParametersPerBand_ExtGroup10_SpCell_TAG_Ind_r18)0;
    }
    if (present_21) {
        value.interCellCrossTRP_PDCCH_OrderCFRA_r18 = (MIMO_ParametersPerBand_ExtGroup10_InterCellCrossTRP_PDCCH_OrderCFRA_r18)0;
    }
    if (present_22) {
        value.intraCellCrossTRP_PDCCH_OrderCFRA_r18 = (MIMO_ParametersPerBand_ExtGroup10_IntraCellCrossTRP_PDCCH_OrderCFRA_r18)0;
    }
    if (present_23) {
        value.overlapUL_TransReduction_r18 = (MIMO_ParametersPerBand_ExtGroup10_OverlapUL_TransReduction_r18)0;
    }
    if (present_24) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18(dec, value.tdcp_Report_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_25) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18(dec, value.tdcp_Resource_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_26) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.timelineRelax_CJT_CSI_r18 = (MIMO_ParametersPerBand_ExtGroup10_TimelineRelax_CJT_CSI_r18)tmp_value;
    }
    if (present_27) {
        value.jointConfigDMRSPortDynamicSwitching_r18 = (MIMO_ParametersPerBand_ExtGroup10_JointConfigDMRSPortDynamicSwitching_r18)0;
    }
    if (present_28) {
        value.srs_combOffsetHopping_r18 = (MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHopping_r18)0;
    }
    if (present_29) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.srs_combOffsetInTime_r18 = (MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetInTime_r18)tmp_value;
    }
    if (present_30) {
        value.srs_combOffsetCombinedGroupSequence_r18 = (MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetCombinedGroupSequence_r18)0;
    }
    if (present_31) {
        value.srs_combOffsetHoppingWithinSubset_r18 = (MIMO_ParametersPerBand_ExtGroup10_Srs_combOffsetHoppingWithinSubset_r18)0;
    }
    if (present_32) {
        value.srs_cyclicShiftHopping_r18 = (MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHopping_r18)0;
    }
    if (present_33) {
        value.srs_cyclicShiftHoppingSmallGranularity_r18 = (MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftHoppingSmallGranularity_r18)0;
    }
    if (present_34) {
        value.srs_cyclicShiftCombinedGroupSequence_r18 = (MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedGroupSequence_r18)0;
    }
    if (present_35) {
        value.cyclicShiftHoppingWithinSubset_r18 = (MIMO_ParametersPerBand_ExtGroup10_CyclicShiftHoppingWithinSubset_r18)0;
    }
    if (present_36) {
        value.srs_cyclicShiftCombinedCombOffset_r18 = (MIMO_ParametersPerBand_ExtGroup10_Srs_cyclicShiftCombinedCombOffset_r18)0;
    }
    if (present_37) {
        value.pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18 = (MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18)0;
    }
    if (present_38) {
        value.pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18 = (MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18)0;
    }
    if (present_39) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18(dec, value.pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_40) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18(dec, value.twoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_41) {
        value.dmrs_PortEntrySingleDCI_SDM_r18 = (MIMO_ParametersPerBand_ExtGroup10_Dmrs_PortEntrySingleDCI_SDM_r18)0;
    }
    if (present_42) {
        value.pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18 = (MIMO_ParametersPerBand_ExtGroup10_Pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18)0;
    }
    if (present_43) {
        value.pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18 = (MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18)0;
    }
    if (present_44) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18(dec, value.pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_45) {
        value.twoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18)0;
    }
    if (present_46) {
        value.twoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18)0;
    }
    if (present_47) {
        value.twoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18)0;
    }
    if (present_48) {
        value.twoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18)0;
    }
    if (present_49) {
        value.twoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18)0;
    }
    if (present_50) {
        value.twoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18)0;
    }
    if (present_51) {
        value.twoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18)0;
    }
    if (present_52) {
        value.twoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18)0;
    }
    if (present_53) {
        value.twoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18)0;
    }
    if (present_54) {
        value.twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18)0;
    }
    if (present_55) {
        value.twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18)0;
    }
    if (present_56) {
        value.twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18)0;
    }
    if (present_57) {
        value.twoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18)0;
    }
    if (present_58) {
        value.twoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18 = (MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18)0;
    }
    if (present_59) {
        value.pucch_RepetitionDynamicIndicationSFN_r18 = (MIMO_ParametersPerBand_ExtGroup10_Pucch_RepetitionDynamicIndicationSFN_r18)0;
    }
    if (present_60) {
        if (Decode_MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18(dec, value.groupBeamReporting_STx2P_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_ExtGroup10(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_ExtGroup10(MIMO_ParametersPerBand_ExtGroup10& value)
{
    if (value.has_codebookParametersetype2DopplerCSI_r18) {
        Free_CodebookParametersetype2DopplerCSI_r18(value.codebookParametersetype2DopplerCSI_r18);
    }
    if (value.has_codebookParametersfetype2DopplerCSI_r18) {
        Free_CodebookParametersfetype2DopplerCSI_r18(value.codebookParametersfetype2DopplerCSI_r18);
    }
    if (value.has_codebookParametersetype2CJT_r18) {
        Free_CodebookParametersetype2CJT_r18(value.codebookParametersetype2CJT_r18);
    }
    if (value.has_codebookParametersfetype2CJT_r18) {
        Free_CodebookParametersfetype2CJT_r18(value.codebookParametersfetype2CJT_r18);
    }
    if (value.has_codebookComboParametersCJT_r18) {
        Free_CodebookComboParametersCJT_r18(value.codebookComboParametersCJT_r18);
    }
    if (value.has_codebookParametersHARQ_ACK_PUSCH_r18) {
        Free_CodebookParametersHARQ_ACK_PUSCH_r18(value.codebookParametersHARQ_ACK_PUSCH_r18);
    }
    if (value.has_tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18(value.tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18);
    }
    if (value.has_tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18(value.tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18);
    }
    if (value.has_tci_SelectionDCI_r18) {
    }
    if (value.has_tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18(value.tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18);
    }
    if (value.has_tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18(value.tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18);
    }
    if (value.has_tci_SelectionAperiodicCSI_RS_r18) {
    }
    if (value.has_twoTCI_StatePDSCH_CJT_TxScheme_r18) {
    }
    if (value.has_tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(value.tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18);
    }
    if (value.has_tci_JointTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18) {
    }
    if (value.has_tci_TRP_BFR_r18) {
    }
    if (value.has_tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18(value.tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18);
    }
    if (value.has_tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18(value.tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18);
    }
    if (value.has_commonTCI_SingleDCI_r18) {
    }
    if (value.has_commonTCI_MultiDCI_r18) {
    }
    if (value.has_spCell_TAG_Ind_r18) {
    }
    if (value.has_interCellCrossTRP_PDCCH_OrderCFRA_r18) {
    }
    if (value.has_intraCellCrossTRP_PDCCH_OrderCFRA_r18) {
    }
    if (value.has_overlapUL_TransReduction_r18) {
    }
    if (value.has_tdcp_Report_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18(value.tdcp_Report_r18);
    }
    if (value.has_tdcp_Resource_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18(value.tdcp_Resource_r18);
    }
    if (value.has_timelineRelax_CJT_CSI_r18) {
    }
    if (value.has_jointConfigDMRSPortDynamicSwitching_r18) {
    }
    if (value.has_srs_combOffsetHopping_r18) {
    }
    if (value.has_srs_combOffsetInTime_r18) {
    }
    if (value.has_srs_combOffsetCombinedGroupSequence_r18) {
    }
    if (value.has_srs_combOffsetHoppingWithinSubset_r18) {
    }
    if (value.has_srs_cyclicShiftHopping_r18) {
    }
    if (value.has_srs_cyclicShiftHoppingSmallGranularity_r18) {
    }
    if (value.has_srs_cyclicShiftCombinedGroupSequence_r18) {
    }
    if (value.has_cyclicShiftHoppingWithinSubset_r18) {
    }
    if (value.has_srs_cyclicShiftCombinedCombOffset_r18) {
    }
    if (value.has_pusch_CB_2PTRS_SingleDCI_STx2P_SDM_r18) {
    }
    if (value.has_pusch_NonCB_2PTRS_SingleDCI_STx2P_SDM_r18) {
    }
    if (value.has_pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18(value.pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18);
    }
    if (value.has_twoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18(value.twoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18);
    }
    if (value.has_dmrs_PortEntrySingleDCI_SDM_r18) {
    }
    if (value.has_pusch_CB_2PTRS_SingleDCI_STx2P_SFN_r18) {
    }
    if (value.has_pusch_NonCB_2PTRS_SingleDCI_STx2P_SFN_r18) {
    }
    if (value.has_pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18(value.pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18);
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18) {
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18) {
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18) {
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18) {
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18) {
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_CG_CG_r18) {
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_CG_DG_r18) {
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_FullTimeFullFreqOverlap_r18) {
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_FullTimePartialFreqOverlap_r18) {
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeFullFreqOverlap_r18) {
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimePartialFreqOverlap_r18) {
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_PartialTimeNonFreqOverlap_r18) {
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_CG_CG_r18) {
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_CG_DG_r18) {
    }
    if (value.has_pucch_RepetitionDynamicIndicationSFN_r18) {
    }
    if (value.has_groupBeamReporting_STx2P_r18) {
        Free_MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18(value.groupBeamReporting_STx2P_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DummyG(Encoder& enc, const DummyG& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSSB_CSI_RS_ResourceOneTx), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSSB_CSI_RS_ResourceTwoTx), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_Density), 0, 2);
    return enc.Error();
}

ErrorCode Decode_DummyG(Decoder& dec, DummyG& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberSSB_CSI_RS_ResourceOneTx = (DummyG_MaxNumberSSB_CSI_RS_ResourceOneTx)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberSSB_CSI_RS_ResourceTwoTx = (DummyG_MaxNumberSSB_CSI_RS_ResourceTwoTx)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.supportedCSI_RS_Density = (DummyG_SupportedCSI_RS_Density)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyG(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyG(DummyG& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DummyH(Encoder& enc, const DummyH& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.burstLength), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxSimultaneousResourceSetsPerCC), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxConfiguredResourceSetsPerCC), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxConfiguredResourceSetsAllCC), 1, 128);
    return enc.Error();
}

ErrorCode Decode_DummyH(Decoder& dec, DummyH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.burstLength = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxSimultaneousResourceSetsPerCC = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxConfiguredResourceSetsPerCC = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 128, tmp_value)) { goto fail; }
        value.maxConfiguredResourceSetsAllCC = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyH(DummyH& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_Tci_StatePDSCH(Encoder& enc, const MIMO_ParametersPerBand_Tci_StatePDSCH& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumberConfiguredTCI_StatesPerCC);
    enc.WriteBit(value.has_maxNumberActiveTCI_PerBWP);
    if (value.has_maxNumberConfiguredTCI_StatesPerCC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfiguredTCI_StatesPerCC), 0, 5);
    }
    if (value.has_maxNumberActiveTCI_PerBWP) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberActiveTCI_PerBWP), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_Tci_StatePDSCH(Decoder& dec, MIMO_ParametersPerBand_Tci_StatePDSCH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberConfiguredTCI_StatesPerCC = (MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberConfiguredTCI_StatesPerCC)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberActiveTCI_PerBWP = (MIMO_ParametersPerBand_Tci_StatePDSCH_MaxNumberActiveTCI_PerBWP)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_Tci_StatePDSCH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_Tci_StatePDSCH(MIMO_ParametersPerBand_Tci_StatePDSCH& value)
{
    if (value.has_maxNumberConfiguredTCI_StatesPerCC) {
    }
    if (value.has_maxNumberActiveTCI_PerBWP) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL(Encoder& enc, const MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    enc.WriteBit(value.has_scs_240kHz);
    if (value.has_scs_15kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz), 0, 2);
    }
    if (value.has_scs_30kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz), 0, 2);
    }
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 2);
    }
    if (value.has_scs_120kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz), 0, 2);
    }
    if (value.has_scs_240kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_240kHz), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL(Decoder& dec, MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_15kHz = (MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_15kHz)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_30kHz = (MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_30kHz)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_60kHz = (MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_60kHz)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_120kHz = (MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_120kHz)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_240kHz = (MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL_Scs_240kHz)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL(MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL& value)
{
    if (value.has_scs_15kHz) {
    }
    if (value.has_scs_30kHz) {
    }
    if (value.has_scs_60kHz) {
    }
    if (value.has_scs_120kHz) {
    }
    if (value.has_scs_240kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_UplinkBeamManagement(Encoder& enc, const MIMO_ParametersPerBand_UplinkBeamManagement& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcePerSet_BM), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourceSet), 1, 8);
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_UplinkBeamManagement(Decoder& dec, MIMO_ParametersPerBand_UplinkBeamManagement& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcePerSet_BM = (MIMO_ParametersPerBand_UplinkBeamManagement_MaxNumberSRS_ResourcePerSet_BM)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourceSet = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_UplinkBeamManagement(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_UplinkBeamManagement(MIMO_ParametersPerBand_UplinkBeamManagement& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_BeamReportTiming(Encoder& enc, const MIMO_ParametersPerBand_BeamReportTiming& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_15kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz), 0, 2);
    }
    if (value.has_scs_30kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz), 0, 3);
    }
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 2);
    }
    if (value.has_scs_120kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_BeamReportTiming(Decoder& dec, MIMO_ParametersPerBand_BeamReportTiming& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_15kHz = (MIMO_ParametersPerBand_BeamReportTiming_Scs_15kHz)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_30kHz = (MIMO_ParametersPerBand_BeamReportTiming_Scs_30kHz)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_60kHz = (MIMO_ParametersPerBand_BeamReportTiming_Scs_60kHz)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_120kHz = (MIMO_ParametersPerBand_BeamReportTiming_Scs_120kHz)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_BeamReportTiming(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_BeamReportTiming(MIMO_ParametersPerBand_BeamReportTiming& value)
{
    if (value.has_scs_15kHz) {
    }
    if (value.has_scs_30kHz) {
    }
    if (value.has_scs_60kHz) {
    }
    if (value.has_scs_120kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PTRS_DensityRecommendationDL(Encoder& enc, const PTRS_DensityRecommendationDL& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.frequencyDensity1), 1, 276);
    enc.WriteConstrainedInteger((std::int64_t)(value.frequencyDensity2), 1, 276);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDensity1), 0, 29);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDensity2), 0, 29);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDensity3), 0, 29);
    return enc.Error();
}

ErrorCode Decode_PTRS_DensityRecommendationDL(Decoder& dec, PTRS_DensityRecommendationDL& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
        value.frequencyDensity1 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
        value.frequencyDensity2 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.timeDensity1 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.timeDensity2 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.timeDensity3 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PTRS_DensityRecommendationDL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PTRS_DensityRecommendationDL(PTRS_DensityRecommendationDL& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL(Encoder& enc, const MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_15kHz) {
        Encode_PTRS_DensityRecommendationDL(enc, value.scs_15kHz);
    }
    if (value.has_scs_30kHz) {
        Encode_PTRS_DensityRecommendationDL(enc, value.scs_30kHz);
    }
    if (value.has_scs_60kHz) {
        Encode_PTRS_DensityRecommendationDL(enc, value.scs_60kHz);
    }
    if (value.has_scs_120kHz) {
        Encode_PTRS_DensityRecommendationDL(enc, value.scs_120kHz);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL(Decoder& dec, MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        if (Decode_PTRS_DensityRecommendationDL(dec, value.scs_15kHz) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PTRS_DensityRecommendationDL(dec, value.scs_30kHz) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_PTRS_DensityRecommendationDL(dec, value.scs_60kHz) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_PTRS_DensityRecommendationDL(dec, value.scs_120kHz) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL(MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL& value)
{
    if (value.has_scs_15kHz) {
        Free_PTRS_DensityRecommendationDL(value.scs_15kHz);
    }
    if (value.has_scs_30kHz) {
        Free_PTRS_DensityRecommendationDL(value.scs_30kHz);
    }
    if (value.has_scs_60kHz) {
        Free_PTRS_DensityRecommendationDL(value.scs_60kHz);
    }
    if (value.has_scs_120kHz) {
        Free_PTRS_DensityRecommendationDL(value.scs_120kHz);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PTRS_DensityRecommendationUL(Encoder& enc, const PTRS_DensityRecommendationUL& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.frequencyDensity1), 1, 276);
    enc.WriteConstrainedInteger((std::int64_t)(value.frequencyDensity2), 1, 276);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDensity1), 0, 29);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDensity2), 0, 29);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDensity3), 0, 29);
    enc.WriteConstrainedInteger((std::int64_t)(value.sampleDensity1), 1, 276);
    enc.WriteConstrainedInteger((std::int64_t)(value.sampleDensity2), 1, 276);
    enc.WriteConstrainedInteger((std::int64_t)(value.sampleDensity3), 1, 276);
    enc.WriteConstrainedInteger((std::int64_t)(value.sampleDensity4), 1, 276);
    enc.WriteConstrainedInteger((std::int64_t)(value.sampleDensity5), 1, 276);
    return enc.Error();
}

ErrorCode Decode_PTRS_DensityRecommendationUL(Decoder& dec, PTRS_DensityRecommendationUL& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
        value.frequencyDensity1 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
        value.frequencyDensity2 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.timeDensity1 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.timeDensity2 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.timeDensity3 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
        value.sampleDensity1 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
        value.sampleDensity2 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
        value.sampleDensity3 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
        value.sampleDensity4 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
        value.sampleDensity5 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PTRS_DensityRecommendationUL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PTRS_DensityRecommendationUL(PTRS_DensityRecommendationUL& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL(Encoder& enc, const MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_15kHz) {
        Encode_PTRS_DensityRecommendationUL(enc, value.scs_15kHz);
    }
    if (value.has_scs_30kHz) {
        Encode_PTRS_DensityRecommendationUL(enc, value.scs_30kHz);
    }
    if (value.has_scs_60kHz) {
        Encode_PTRS_DensityRecommendationUL(enc, value.scs_60kHz);
    }
    if (value.has_scs_120kHz) {
        Encode_PTRS_DensityRecommendationUL(enc, value.scs_120kHz);
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL(Decoder& dec, MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        if (Decode_PTRS_DensityRecommendationUL(dec, value.scs_15kHz) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PTRS_DensityRecommendationUL(dec, value.scs_30kHz) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_PTRS_DensityRecommendationUL(dec, value.scs_60kHz) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_PTRS_DensityRecommendationUL(dec, value.scs_120kHz) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL(MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL& value)
{
    if (value.has_scs_15kHz) {
        Free_PTRS_DensityRecommendationUL(value.scs_15kHz);
    }
    if (value.has_scs_30kHz) {
        Free_PTRS_DensityRecommendationUL(value.scs_30kHz);
    }
    if (value.has_scs_60kHz) {
        Free_PTRS_DensityRecommendationUL(value.scs_60kHz);
    }
    if (value.has_scs_120kHz) {
        Free_PTRS_DensityRecommendationUL(value.scs_120kHz);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMO_ParametersPerBand(Encoder& enc, const MIMO_ParametersPerBand& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7 || value.has_extGroup8 || value.has_extGroup9 || value.has_extGroup10;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_tci_StatePDSCH);
    enc.WriteBit(value.has_additionalActiveTCI_StatePDCCH);
    enc.WriteBit(value.has_pusch_TransCoherence);
    enc.WriteBit(value.has_beamCorrespondenceWithoutUL_BeamSweeping);
    enc.WriteBit(value.has_periodicBeamReport);
    enc.WriteBit(value.has_aperiodicBeamReport);
    enc.WriteBit(value.has_sp_BeamReportPUCCH);
    enc.WriteBit(value.has_sp_BeamReportPUSCH);
    enc.WriteBit(value.has_dummy1);
    enc.WriteBit(value.has_maxNumberRxBeam);
    enc.WriteBit(value.has_maxNumberRxTxBeamSwitchDL);
    enc.WriteBit(value.has_maxNumberNonGroupBeamReporting);
    enc.WriteBit(value.has_groupBeamReporting);
    enc.WriteBit(value.has_uplinkBeamManagement);
    enc.WriteBit(value.has_maxNumberCSI_RS_BFD);
    enc.WriteBit(value.has_maxNumberSSB_BFD);
    enc.WriteBit(value.has_maxNumberCSI_RS_SSB_CBD);
    enc.WriteBit(value.has_dummy2);
    enc.WriteBit(value.has_twoPortsPTRS_UL);
    enc.WriteBit(value.has_dummy5);
    enc.WriteBit(value.has_dummy3);
    enc.WriteBit(value.has_beamReportTiming);
    enc.WriteBit(value.has_ptrs_DensityRecommendationSetDL);
    enc.WriteBit(value.has_ptrs_DensityRecommendationSetUL);
    enc.WriteBit(value.has_dummy4);
    enc.WriteBit(value.has_aperiodicTRS);
    if (value.has_tci_StatePDSCH) {
        Encode_MIMO_ParametersPerBand_Tci_StatePDSCH(enc, value.tci_StatePDSCH);
    }
    if (value.has_additionalActiveTCI_StatePDCCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalActiveTCI_StatePDCCH), 0, 0);
    }
    if (value.has_pusch_TransCoherence) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_TransCoherence), 0, 2);
    }
    if (value.has_beamCorrespondenceWithoutUL_BeamSweeping) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamCorrespondenceWithoutUL_BeamSweeping), 0, 0);
    }
    if (value.has_periodicBeamReport) {
        enc.WriteConstrainedInteger((std::int64_t)(value.periodicBeamReport), 0, 0);
    }
    if (value.has_aperiodicBeamReport) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicBeamReport), 0, 0);
    }
    if (value.has_sp_BeamReportPUCCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_BeamReportPUCCH), 0, 0);
    }
    if (value.has_sp_BeamReportPUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_BeamReportPUSCH), 0, 0);
    }
    if (value.has_dummy1) {
        Encode_DummyG(enc, value.dummy1);
    }
    if (value.has_maxNumberRxBeam) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberRxBeam), 2, 8);
    }
    if (value.has_maxNumberRxTxBeamSwitchDL) {
        Encode_MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL(enc, value.maxNumberRxTxBeamSwitchDL);
    }
    if (value.has_maxNumberNonGroupBeamReporting) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberNonGroupBeamReporting), 0, 2);
    }
    if (value.has_groupBeamReporting) {
        enc.WriteConstrainedInteger((std::int64_t)(value.groupBeamReporting), 0, 0);
    }
    if (value.has_uplinkBeamManagement) {
        Encode_MIMO_ParametersPerBand_UplinkBeamManagement(enc, value.uplinkBeamManagement);
    }
    if (value.has_maxNumberCSI_RS_BFD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_BFD), 1, 64);
    }
    if (value.has_maxNumberSSB_BFD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSSB_BFD), 1, 64);
    }
    if (value.has_maxNumberCSI_RS_SSB_CBD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_SSB_CBD), 1, 256);
    }
    if (value.has_dummy2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy2), 0, 0);
    }
    if (value.has_twoPortsPTRS_UL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPortsPTRS_UL), 0, 0);
    }
    if (value.has_dummy5) {
        Encode_SRS_Resources(enc, value.dummy5);
    }
    if (value.has_dummy3) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy3), 1, 4);
    }
    if (value.has_beamReportTiming) {
        Encode_MIMO_ParametersPerBand_BeamReportTiming(enc, value.beamReportTiming);
    }
    if (value.has_ptrs_DensityRecommendationSetDL) {
        Encode_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL(enc, value.ptrs_DensityRecommendationSetDL);
    }
    if (value.has_ptrs_DensityRecommendationSetUL) {
        Encode_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL(enc, value.ptrs_DensityRecommendationSetUL);
    }
    if (value.has_dummy4) {
        Encode_DummyH(enc, value.dummy4);
    }
    if (value.has_aperiodicTRS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicTRS), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(10u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        enc.WriteBit(value.has_extGroup6);
        enc.WriteBit(value.has_extGroup7);
        enc.WriteBit(value.has_extGroup8);
        enc.WriteBit(value.has_extGroup9);
        enc.WriteBit(value.has_extGroup10);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MIMO_ParametersPerBand_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MIMO_ParametersPerBand_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_MIMO_ParametersPerBand_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_MIMO_ParametersPerBand_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_MIMO_ParametersPerBand_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_MIMO_ParametersPerBand_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_MIMO_ParametersPerBand_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup8) {
    Encoder sub;
    Encode_MIMO_ParametersPerBand_ExtGroup8(sub, value.extGroup8);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup9) {
    Encoder sub;
    Encode_MIMO_ParametersPerBand_ExtGroup9(sub, value.extGroup9);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup10) {
    Encoder sub;
    Encode_MIMO_ParametersPerBand_ExtGroup10(sub, value.extGroup10);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MIMO_ParametersPerBand(Decoder& dec, MIMO_ParametersPerBand& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    bool present_17 = false;
    bool present_18 = false;
    bool present_19 = false;
    bool present_20 = false;
    bool present_21 = false;
    bool present_22 = false;
    bool present_23 = false;
    bool present_24 = false;
    bool present_25 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (!dec.ReadBit(present_17)) { goto fail; }
    if (!dec.ReadBit(present_18)) { goto fail; }
    if (!dec.ReadBit(present_19)) { goto fail; }
    if (!dec.ReadBit(present_20)) { goto fail; }
    if (!dec.ReadBit(present_21)) { goto fail; }
    if (!dec.ReadBit(present_22)) { goto fail; }
    if (!dec.ReadBit(present_23)) { goto fail; }
    if (!dec.ReadBit(present_24)) { goto fail; }
    if (!dec.ReadBit(present_25)) { goto fail; }
    if (present_0) {
        if (Decode_MIMO_ParametersPerBand_Tci_StatePDSCH(dec, value.tci_StatePDSCH) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.additionalActiveTCI_StatePDCCH = (MIMO_ParametersPerBand_AdditionalActiveTCI_StatePDCCH)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pusch_TransCoherence = (MIMO_ParametersPerBand_Pusch_TransCoherence)tmp_value;
    }
    if (present_3) {
        value.beamCorrespondenceWithoutUL_BeamSweeping = (MIMO_ParametersPerBand_BeamCorrespondenceWithoutUL_BeamSweeping)0;
    }
    if (present_4) {
        value.periodicBeamReport = (MIMO_ParametersPerBand_PeriodicBeamReport)0;
    }
    if (present_5) {
        value.aperiodicBeamReport = (MIMO_ParametersPerBand_AperiodicBeamReport)0;
    }
    if (present_6) {
        value.sp_BeamReportPUCCH = (MIMO_ParametersPerBand_Sp_BeamReportPUCCH)0;
    }
    if (present_7) {
        value.sp_BeamReportPUSCH = (MIMO_ParametersPerBand_Sp_BeamReportPUSCH)0;
    }
    if (present_8) {
        if (Decode_DummyG(dec, value.dummy1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxNumberRxBeam = (int64_t)tmp_value;
    }
    if (present_10) {
        if (Decode_MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL(dec, value.maxNumberRxTxBeamSwitchDL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberNonGroupBeamReporting = (MIMO_ParametersPerBand_MaxNumberNonGroupBeamReporting)tmp_value;
    }
    if (present_12) {
        value.groupBeamReporting = (MIMO_ParametersPerBand_GroupBeamReporting)0;
    }
    if (present_13) {
        if (Decode_MIMO_ParametersPerBand_UplinkBeamManagement(dec, value.uplinkBeamManagement) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_BFD = (int64_t)tmp_value;
    }
    if (present_15) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberSSB_BFD = (int64_t)tmp_value;
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_SSB_CBD = (int64_t)tmp_value;
    }
    if (present_17) {
        value.dummy2 = (MIMO_ParametersPerBand_Dummy2)0;
    }
    if (present_18) {
        value.twoPortsPTRS_UL = (MIMO_ParametersPerBand_TwoPortsPTRS_UL)0;
    }
    if (present_19) {
        if (Decode_SRS_Resources(dec, value.dummy5) != ErrorCode_Ok) { goto fail; }
    }
    if (present_20) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.dummy3 = (int64_t)tmp_value;
    }
    if (present_21) {
        if (Decode_MIMO_ParametersPerBand_BeamReportTiming(dec, value.beamReportTiming) != ErrorCode_Ok) { goto fail; }
    }
    if (present_22) {
        if (Decode_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL(dec, value.ptrs_DensityRecommendationSetDL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_23) {
        if (Decode_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL(dec, value.ptrs_DensityRecommendationSetUL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_24) {
        if (Decode_DummyH(dec, value.dummy4) != ErrorCode_Ok) { goto fail; }
    }
    if (present_25) {
        value.aperiodicTRS = (MIMO_ParametersPerBand_AperiodicTRS)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 10u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[10] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MIMO_ParametersPerBand_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MIMO_ParametersPerBand_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MIMO_ParametersPerBand_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup3 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[3]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MIMO_ParametersPerBand_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup4 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[4]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MIMO_ParametersPerBand_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup5 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[5]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MIMO_ParametersPerBand_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup6 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[6]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MIMO_ParametersPerBand_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup7 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[7]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MIMO_ParametersPerBand_ExtGroup8(sub, value.extGroup8) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup8 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[8]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MIMO_ParametersPerBand_ExtGroup9(sub, value.extGroup9) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup9 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[9]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MIMO_ParametersPerBand_ExtGroup10(sub, value.extGroup10) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup10 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMO_ParametersPerBand(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMO_ParametersPerBand(MIMO_ParametersPerBand& value)
{
    if (value.has_tci_StatePDSCH) {
        Free_MIMO_ParametersPerBand_Tci_StatePDSCH(value.tci_StatePDSCH);
    }
    if (value.has_additionalActiveTCI_StatePDCCH) {
    }
    if (value.has_pusch_TransCoherence) {
    }
    if (value.has_beamCorrespondenceWithoutUL_BeamSweeping) {
    }
    if (value.has_periodicBeamReport) {
    }
    if (value.has_aperiodicBeamReport) {
    }
    if (value.has_sp_BeamReportPUCCH) {
    }
    if (value.has_sp_BeamReportPUSCH) {
    }
    if (value.has_dummy1) {
        Free_DummyG(value.dummy1);
    }
    if (value.has_maxNumberRxBeam) {
    }
    if (value.has_maxNumberRxTxBeamSwitchDL) {
        Free_MIMO_ParametersPerBand_MaxNumberRxTxBeamSwitchDL(value.maxNumberRxTxBeamSwitchDL);
    }
    if (value.has_maxNumberNonGroupBeamReporting) {
    }
    if (value.has_groupBeamReporting) {
    }
    if (value.has_uplinkBeamManagement) {
        Free_MIMO_ParametersPerBand_UplinkBeamManagement(value.uplinkBeamManagement);
    }
    if (value.has_maxNumberCSI_RS_BFD) {
    }
    if (value.has_maxNumberSSB_BFD) {
    }
    if (value.has_maxNumberCSI_RS_SSB_CBD) {
    }
    if (value.has_dummy2) {
    }
    if (value.has_twoPortsPTRS_UL) {
    }
    if (value.has_dummy5) {
        Free_SRS_Resources(value.dummy5);
    }
    if (value.has_dummy3) {
    }
    if (value.has_beamReportTiming) {
        Free_MIMO_ParametersPerBand_BeamReportTiming(value.beamReportTiming);
    }
    if (value.has_ptrs_DensityRecommendationSetDL) {
        Free_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetDL(value.ptrs_DensityRecommendationSetDL);
    }
    if (value.has_ptrs_DensityRecommendationSetUL) {
        Free_MIMO_ParametersPerBand_Ptrs_DensityRecommendationSetUL(value.ptrs_DensityRecommendationSetUL);
    }
    if (value.has_dummy4) {
        Free_DummyH(value.dummy4);
    }
    if (value.has_aperiodicTRS) {
    }
    if (value.has_extGroup1) {
        Free_MIMO_ParametersPerBand_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MIMO_ParametersPerBand_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_MIMO_ParametersPerBand_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_MIMO_ParametersPerBand_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_MIMO_ParametersPerBand_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_MIMO_ParametersPerBand_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_MIMO_ParametersPerBand_ExtGroup7(value.extGroup7);
    }
    if (value.has_extGroup8) {
        Free_MIMO_ParametersPerBand_ExtGroup8(value.extGroup8);
    }
    if (value.has_extGroup9) {
        Free_MIMO_ParametersPerBand_ExtGroup9(value.extGroup9);
    }
    if (value.has_extGroup10) {
        Free_MIMO_ParametersPerBand_ExtGroup10(value.extGroup10);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_MultiTRP_SupportedCombinations_r17(Encoder& enc, const CSI_MultiTRP_SupportedCombinations_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumTx_Ports_r17), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxTotalNumCMR_r17), 2, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxTotalNumTx_PortsNZP_CSI_RS_r17), 2, 256);
    return enc.Error();
}

ErrorCode Decode_CSI_MultiTRP_SupportedCombinations_r17(Decoder& dec, CSI_MultiTRP_SupportedCombinations_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumTx_Ports_r17 = (CSI_MultiTRP_SupportedCombinations_r17_MaxNumTx_Ports_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 64, tmp_value)) { goto fail; }
        value.maxTotalNumCMR_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 256, tmp_value)) { goto fail; }
        value.maxTotalNumTx_PortsNZP_CSI_RS_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_MultiTRP_SupportedCombinations_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_MultiTRP_SupportedCombinations_r17(CSI_MultiTRP_SupportedCombinations_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NCR_Parameters_r18(Encoder& enc, const NCR_Parameters_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_inactiveStateNCR_r18);
    enc.WriteBit(value.has_supportedNumberOfDRBs_NCR_r18);
    enc.WriteBit(value.has_nonDRB_NCR_r18);
    if (value.has_inactiveStateNCR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inactiveStateNCR_r18), 0, 0);
    }
    if (value.has_supportedNumberOfDRBs_NCR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportedNumberOfDRBs_NCR_r18), 0, 1);
    }
    if (value.has_nonDRB_NCR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nonDRB_NCR_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_NCR_Parameters_r18(Decoder& dec, NCR_Parameters_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        value.inactiveStateNCR_r18 = (NCR_Parameters_r18_InactiveStateNCR_r18)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.supportedNumberOfDRBs_NCR_r18 = (NCR_Parameters_r18_SupportedNumberOfDRBs_NCR_r18)tmp_value;
    }
    if (present_2) {
        value.nonDRB_NCR_r18 = (NCR_Parameters_r18_NonDRB_NCR_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_Parameters_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_Parameters_r18(NCR_Parameters_r18& value)
{
    if (value.has_inactiveStateNCR_r18) {
    }
    if (value.has_supportedNumberOfDRBs_NCR_r18) {
    }
    if (value.has_nonDRB_NCR_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_GeneralParametersMRDC_XDD_Diff(Encoder& enc, const GeneralParametersMRDC_XDD_Diff& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_splitSRB_WithOneUL_Path);
    enc.WriteBit(value.has_splitDRB_withUL_Both_MCG_SCG);
    enc.WriteBit(value.has_srb3);
    enc.WriteBit(value.has_dummy);
    if (value.has_splitSRB_WithOneUL_Path) {
        enc.WriteConstrainedInteger((std::int64_t)(value.splitSRB_WithOneUL_Path), 0, 0);
    }
    if (value.has_splitDRB_withUL_Both_MCG_SCG) {
        enc.WriteConstrainedInteger((std::int64_t)(value.splitDRB_withUL_Both_MCG_SCG), 0, 0);
    }
    if (value.has_srb3) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srb3), 0, 0);
    }
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_GeneralParametersMRDC_XDD_Diff(Decoder& dec, GeneralParametersMRDC_XDD_Diff& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.splitSRB_WithOneUL_Path = (GeneralParametersMRDC_XDD_Diff_SplitSRB_WithOneUL_Path)0;
    }
    if (present_1) {
        value.splitDRB_withUL_Both_MCG_SCG = (GeneralParametersMRDC_XDD_Diff_SplitDRB_withUL_Both_MCG_SCG)0;
    }
    if (present_2) {
        value.srb3 = (GeneralParametersMRDC_XDD_Diff_Srb3)0;
    }
    if (present_3) {
        value.dummy = (GeneralParametersMRDC_XDD_Diff_Dummy)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GeneralParametersMRDC_XDD_Diff(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GeneralParametersMRDC_XDD_Diff(GeneralParametersMRDC_XDD_Diff& value)
{
    if (value.has_splitSRB_WithOneUL_Path) {
    }
    if (value.has_splitDRB_withUL_Both_MCG_SCG) {
    }
    if (value.has_srb3) {
    }
    if (value.has_dummy) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_CapabilityAddXDD_Mode(Encoder& enc, const UE_MRDC_CapabilityAddXDD_Mode& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC_XDD_Diff);
    enc.WriteBit(value.has_generalParametersMRDC_XDD_Diff);
    if (value.has_measAndMobParametersMRDC_XDD_Diff) {
        Encode_MeasAndMobParametersMRDC_XDD_Diff(enc, value.measAndMobParametersMRDC_XDD_Diff);
    }
    if (value.has_generalParametersMRDC_XDD_Diff) {
        Encode_GeneralParametersMRDC_XDD_Diff(enc, value.generalParametersMRDC_XDD_Diff);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_CapabilityAddXDD_Mode(Decoder& dec, UE_MRDC_CapabilityAddXDD_Mode& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_XDD_Diff(dec, value.measAndMobParametersMRDC_XDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_GeneralParametersMRDC_XDD_Diff(dec, value.generalParametersMRDC_XDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_CapabilityAddXDD_Mode(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_CapabilityAddXDD_Mode(UE_MRDC_CapabilityAddXDD_Mode& value)
{
    if (value.has_measAndMobParametersMRDC_XDD_Diff) {
        Free_MeasAndMobParametersMRDC_XDD_Diff(value.measAndMobParametersMRDC_XDD_Diff);
    }
    if (value.has_generalParametersMRDC_XDD_Diff) {
        Free_GeneralParametersMRDC_XDD_Diff(value.generalParametersMRDC_XDD_Diff);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_CapabilityAddFRX_Mode(Encoder& enc, const UE_MRDC_CapabilityAddFRX_Mode& value)
{
    (void)value;
    Encode_MeasAndMobParametersMRDC_FRX_Diff(enc, value.measAndMobParametersMRDC_FRX_Diff);
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_CapabilityAddFRX_Mode(Decoder& dec, UE_MRDC_CapabilityAddFRX_Mode& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasAndMobParametersMRDC_FRX_Diff(dec, value.measAndMobParametersMRDC_FRX_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_CapabilityAddFRX_Mode(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_CapabilityAddFRX_Mode(UE_MRDC_CapabilityAddFRX_Mode& value)
{
    Free_MeasAndMobParametersMRDC_FRX_Diff(value.measAndMobParametersMRDC_FRX_Diff);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NRDC_Parameters_Dummy(Encoder& enc, const NRDC_Parameters_Dummy& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_NRDC_Parameters_Dummy(Decoder& dec, NRDC_Parameters_Dummy& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NRDC_Parameters_Dummy(NRDC_Parameters_Dummy& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NRDC_Parameters(Encoder& enc, const NRDC_Parameters& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersNRDC);
    enc.WriteBit(value.has_generalParametersNRDC);
    enc.WriteBit(value.has_fdd_Add_UE_NRDC_Capabilities);
    enc.WriteBit(value.has_tdd_Add_UE_NRDC_Capabilities);
    enc.WriteBit(value.has_fr1_Add_UE_NRDC_Capabilities);
    enc.WriteBit(value.has_fr2_Add_UE_NRDC_Capabilities);
    enc.WriteBit(value.has_dummy2);
    enc.WriteBit(value.has_dummy);
    if (value.has_measAndMobParametersNRDC) {
        Encode_MeasAndMobParametersMRDC(enc, value.measAndMobParametersNRDC);
    }
    if (value.has_generalParametersNRDC) {
        Encode_GeneralParametersMRDC_XDD_Diff(enc, value.generalParametersNRDC);
    }
    if (value.has_fdd_Add_UE_NRDC_Capabilities) {
        Encode_UE_MRDC_CapabilityAddXDD_Mode(enc, value.fdd_Add_UE_NRDC_Capabilities);
    }
    if (value.has_tdd_Add_UE_NRDC_Capabilities) {
        Encode_UE_MRDC_CapabilityAddXDD_Mode(enc, value.tdd_Add_UE_NRDC_Capabilities);
    }
    if (value.has_fr1_Add_UE_NRDC_Capabilities) {
        Encode_UE_MRDC_CapabilityAddFRX_Mode(enc, value.fr1_Add_UE_NRDC_Capabilities);
    }
    if (value.has_fr2_Add_UE_NRDC_Capabilities) {
        Encode_UE_MRDC_CapabilityAddFRX_Mode(enc, value.fr2_Add_UE_NRDC_Capabilities);
    }
    if (value.has_dummy2) {
        enc.WriteSemiConstrainedOctetString(value.dummy2.bytes, value.dummy2.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_dummy) {
        Encode_NRDC_Parameters_Dummy(enc, value.dummy);
    }
    return enc.Error();
}

ErrorCode Decode_NRDC_Parameters(Decoder& dec, NRDC_Parameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC(dec, value.measAndMobParametersNRDC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_GeneralParametersMRDC_XDD_Diff(dec, value.generalParametersNRDC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_UE_MRDC_CapabilityAddXDD_Mode(dec, value.fdd_Add_UE_NRDC_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_UE_MRDC_CapabilityAddXDD_Mode(dec, value.tdd_Add_UE_NRDC_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_UE_MRDC_CapabilityAddFRX_Mode(dec, value.fr1_Add_UE_NRDC_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_UE_MRDC_CapabilityAddFRX_Mode(dec, value.fr2_Add_UE_NRDC_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.dummy2.bytes = string_bytes;
        value.dummy2.length = string_length;
    }
    if (present_7) {
        if (Decode_NRDC_Parameters_Dummy(dec, value.dummy) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NRDC_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NRDC_Parameters(NRDC_Parameters& value)
{
    if (value.has_measAndMobParametersNRDC) {
        Free_MeasAndMobParametersMRDC(value.measAndMobParametersNRDC);
    }
    if (value.has_generalParametersNRDC) {
        Free_GeneralParametersMRDC_XDD_Diff(value.generalParametersNRDC);
    }
    if (value.has_fdd_Add_UE_NRDC_Capabilities) {
        Free_UE_MRDC_CapabilityAddXDD_Mode(value.fdd_Add_UE_NRDC_Capabilities);
    }
    if (value.has_tdd_Add_UE_NRDC_Capabilities) {
        Free_UE_MRDC_CapabilityAddXDD_Mode(value.tdd_Add_UE_NRDC_Capabilities);
    }
    if (value.has_fr1_Add_UE_NRDC_Capabilities) {
        Free_UE_MRDC_CapabilityAddFRX_Mode(value.fr1_Add_UE_NRDC_Capabilities);
    }
    if (value.has_fr2_Add_UE_NRDC_Capabilities) {
        Free_UE_MRDC_CapabilityAddFRX_Mode(value.fr2_Add_UE_NRDC_Capabilities);
    }
    if (value.has_dummy2) {
        std::free(value.dummy2.bytes);
        value.dummy2.bytes = nullptr;
        value.dummy2.length = 0;
    }
    if (value.has_dummy) {
        Free_NRDC_Parameters_Dummy(value.dummy);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NRDC_Parameters_v1570(Encoder& enc, const NRDC_Parameters_v1570& value)
{
    (void)value;
    enc.WriteBit(value.has_sfn_SyncNRDC);
    if (value.has_sfn_SyncNRDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_SyncNRDC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_NRDC_Parameters_v1570(Decoder& dec, NRDC_Parameters_v1570& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.sfn_SyncNRDC = (NRDC_Parameters_v1570_Sfn_SyncNRDC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NRDC_Parameters_v1570(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NRDC_Parameters_v1570(NRDC_Parameters_v1570& value)
{
    if (value.has_sfn_SyncNRDC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NRDC_Parameters_v15c0(Encoder& enc, const NRDC_Parameters_v15c0& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcp_DuplicationSplitSRB);
    enc.WriteBit(value.has_pdcp_DuplicationSplitDRB);
    if (value.has_pdcp_DuplicationSplitSRB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationSplitSRB), 0, 0);
    }
    if (value.has_pdcp_DuplicationSplitDRB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationSplitDRB), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_NRDC_Parameters_v15c0(Decoder& dec, NRDC_Parameters_v15c0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.pdcp_DuplicationSplitSRB = (NRDC_Parameters_v15c0_Pdcp_DuplicationSplitSRB)0;
    }
    if (present_1) {
        value.pdcp_DuplicationSplitDRB = (NRDC_Parameters_v15c0_Pdcp_DuplicationSplitDRB)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NRDC_Parameters_v15c0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NRDC_Parameters_v15c0(NRDC_Parameters_v15c0& value)
{
    if (value.has_pdcp_DuplicationSplitSRB) {
    }
    if (value.has_pdcp_DuplicationSplitDRB) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NRDC_Parameters_v1610(Encoder& enc, const NRDC_Parameters_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersNRDC_v1610);
    if (value.has_measAndMobParametersNRDC_v1610) {
        Encode_MeasAndMobParametersMRDC_v1610(enc, value.measAndMobParametersNRDC_v1610);
    }
    return enc.Error();
}

ErrorCode Decode_NRDC_Parameters_v1610(Decoder& dec, NRDC_Parameters_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_v1610(dec, value.measAndMobParametersNRDC_v1610) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NRDC_Parameters_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NRDC_Parameters_v1610(NRDC_Parameters_v1610& value)
{
    if (value.has_measAndMobParametersNRDC_v1610) {
        Free_MeasAndMobParametersMRDC_v1610(value.measAndMobParametersNRDC_v1610);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NRDC_Parameters_v1700(Encoder& enc, const NRDC_Parameters_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_f1c_OverNR_RRC_r17);
    if (value.has_f1c_OverNR_RRC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.f1c_OverNR_RRC_r17), 0, 0);
    }
    Encode_MeasAndMobParametersMRDC_v1700(enc, value.measAndMobParametersNRDC_v1700);
    return enc.Error();
}

ErrorCode Decode_NRDC_Parameters_v1700(Decoder& dec, NRDC_Parameters_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.f1c_OverNR_RRC_r17 = (NRDC_Parameters_v1700_F1c_OverNR_RRC_r17)0;
    }
    {
        if (Decode_MeasAndMobParametersMRDC_v1700(dec, value.measAndMobParametersNRDC_v1700) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NRDC_Parameters_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NRDC_Parameters_v1700(NRDC_Parameters_v1700& value)
{
    if (value.has_f1c_OverNR_RRC_r17) {
    }
    Free_MeasAndMobParametersMRDC_v1700(value.measAndMobParametersNRDC_v1700);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup8(Encoder& enc, const Phy_ParametersCommon_ExtGroup8& value)
{
    (void)value;
    enc.WriteBit(value.has_mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16);
    if (value.has_mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup8(Decoder& dec, Phy_ParametersCommon_ExtGroup8& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16 = (Phy_ParametersCommon_ExtGroup8_Mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup8(Phy_ParametersCommon_ExtGroup8& value)
{
    if (value.has_mux_HARQ_ACK_withoutPUCCH_onPUSCH_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17(Encoder& enc, const Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_non_SharedSpectrumChAccess_r17);
    enc.WriteBit(value.has_sharedSpectrumChAccess_r17);
    if (value.has_non_SharedSpectrumChAccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.non_SharedSpectrumChAccess_r17), 0, 0);
    }
    if (value.has_sharedSpectrumChAccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sharedSpectrumChAccess_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17(Decoder& dec, Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.non_SharedSpectrumChAccess_r17 = (Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_Non_SharedSpectrumChAccess_r17)0;
    }
    if (present_1) {
        value.sharedSpectrumChAccess_r17 = (Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17_SharedSpectrumChAccess_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17(Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17& value)
{
    if (value.has_non_SharedSpectrumChAccess_r17) {
    }
    if (value.has_sharedSpectrumChAccess_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup9(Encoder& enc, const Phy_ParametersCommon_ExtGroup9& value)
{
    (void)value;
    enc.WriteBit(value.has_guardSymbolReportReception_IAB_r17);
    enc.WriteBit(value.has_restricted_IAB_DU_BeamReception_r17);
    enc.WriteBit(value.has_recommended_IAB_MT_BeamTransmission_r17);
    enc.WriteBit(value.has_case6_TimingAlignmentReception_IAB_r17);
    enc.WriteBit(value.has_case7_TimingAlignmentReception_IAB_r17);
    enc.WriteBit(value.has_dl_tx_PowerAdjustment_IAB_r17);
    enc.WriteBit(value.has_desired_ul_tx_PowerAdjustment_r17);
    enc.WriteBit(value.has_fdm_SoftResourceAvailability_DynamicIndication_r17);
    enc.WriteBit(value.has_updated_T_DeltaRangeReception_r17);
    enc.WriteBit(value.has_slotBasedDynamicPUCCH_Rep_r17);
    enc.WriteBit(value.has_sps_HARQ_ACK_Deferral_r17);
    enc.WriteBit(value.has_unifiedJointTCI_commonUpdate_r17);
    enc.WriteBit(value.has_mTRP_PDCCH_singleSpan_r17);
    enc.WriteBit(value.has_supportedActivatedPRS_ProcessingWindow_r17);
    enc.WriteBit(value.has_cg_TimeDomainAllocationExtension_r17);
    if (value.has_guardSymbolReportReception_IAB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.guardSymbolReportReception_IAB_r17), 0, 0);
    }
    if (value.has_restricted_IAB_DU_BeamReception_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.restricted_IAB_DU_BeamReception_r17), 0, 0);
    }
    if (value.has_recommended_IAB_MT_BeamTransmission_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.recommended_IAB_MT_BeamTransmission_r17), 0, 0);
    }
    if (value.has_case6_TimingAlignmentReception_IAB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.case6_TimingAlignmentReception_IAB_r17), 0, 0);
    }
    if (value.has_case7_TimingAlignmentReception_IAB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.case7_TimingAlignmentReception_IAB_r17), 0, 0);
    }
    if (value.has_dl_tx_PowerAdjustment_IAB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_tx_PowerAdjustment_IAB_r17), 0, 0);
    }
    if (value.has_desired_ul_tx_PowerAdjustment_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.desired_ul_tx_PowerAdjustment_r17), 0, 0);
    }
    if (value.has_fdm_SoftResourceAvailability_DynamicIndication_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fdm_SoftResourceAvailability_DynamicIndication_r17), 0, 0);
    }
    if (value.has_updated_T_DeltaRangeReception_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.updated_T_DeltaRangeReception_r17), 0, 0);
    }
    if (value.has_slotBasedDynamicPUCCH_Rep_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.slotBasedDynamicPUCCH_Rep_r17), 0, 0);
    }
    if (value.has_sps_HARQ_ACK_Deferral_r17) {
        Encode_Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17(enc, value.sps_HARQ_ACK_Deferral_r17);
    }
    if (value.has_unifiedJointTCI_commonUpdate_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedJointTCI_commonUpdate_r17), 1, 4);
    }
    if (value.has_mTRP_PDCCH_singleSpan_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PDCCH_singleSpan_r17), 0, 0);
    }
    if (value.has_supportedActivatedPRS_ProcessingWindow_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportedActivatedPRS_ProcessingWindow_r17), 0, 2);
    }
    if (value.has_cg_TimeDomainAllocationExtension_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_TimeDomainAllocationExtension_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup9(Decoder& dec, Phy_ParametersCommon_ExtGroup9& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (present_0) {
        value.guardSymbolReportReception_IAB_r17 = (Phy_ParametersCommon_ExtGroup9_GuardSymbolReportReception_IAB_r17)0;
    }
    if (present_1) {
        value.restricted_IAB_DU_BeamReception_r17 = (Phy_ParametersCommon_ExtGroup9_Restricted_IAB_DU_BeamReception_r17)0;
    }
    if (present_2) {
        value.recommended_IAB_MT_BeamTransmission_r17 = (Phy_ParametersCommon_ExtGroup9_Recommended_IAB_MT_BeamTransmission_r17)0;
    }
    if (present_3) {
        value.case6_TimingAlignmentReception_IAB_r17 = (Phy_ParametersCommon_ExtGroup9_Case6_TimingAlignmentReception_IAB_r17)0;
    }
    if (present_4) {
        value.case7_TimingAlignmentReception_IAB_r17 = (Phy_ParametersCommon_ExtGroup9_Case7_TimingAlignmentReception_IAB_r17)0;
    }
    if (present_5) {
        value.dl_tx_PowerAdjustment_IAB_r17 = (Phy_ParametersCommon_ExtGroup9_Dl_tx_PowerAdjustment_IAB_r17)0;
    }
    if (present_6) {
        value.desired_ul_tx_PowerAdjustment_r17 = (Phy_ParametersCommon_ExtGroup9_Desired_ul_tx_PowerAdjustment_r17)0;
    }
    if (present_7) {
        value.fdm_SoftResourceAvailability_DynamicIndication_r17 = (Phy_ParametersCommon_ExtGroup9_Fdm_SoftResourceAvailability_DynamicIndication_r17)0;
    }
    if (present_8) {
        value.updated_T_DeltaRangeReception_r17 = (Phy_ParametersCommon_ExtGroup9_Updated_T_DeltaRangeReception_r17)0;
    }
    if (present_9) {
        value.slotBasedDynamicPUCCH_Rep_r17 = (Phy_ParametersCommon_ExtGroup9_SlotBasedDynamicPUCCH_Rep_r17)0;
    }
    if (present_10) {
        if (Decode_Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17(dec, value.sps_HARQ_ACK_Deferral_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.unifiedJointTCI_commonUpdate_r17 = (int64_t)tmp_value;
    }
    if (present_12) {
        value.mTRP_PDCCH_singleSpan_r17 = (Phy_ParametersCommon_ExtGroup9_MTRP_PDCCH_singleSpan_r17)0;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.supportedActivatedPRS_ProcessingWindow_r17 = (Phy_ParametersCommon_ExtGroup9_SupportedActivatedPRS_ProcessingWindow_r17)tmp_value;
    }
    if (present_14) {
        value.cg_TimeDomainAllocationExtension_r17 = (Phy_ParametersCommon_ExtGroup9_Cg_TimeDomainAllocationExtension_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup9(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup9(Phy_ParametersCommon_ExtGroup9& value)
{
    if (value.has_guardSymbolReportReception_IAB_r17) {
    }
    if (value.has_restricted_IAB_DU_BeamReception_r17) {
    }
    if (value.has_recommended_IAB_MT_BeamTransmission_r17) {
    }
    if (value.has_case6_TimingAlignmentReception_IAB_r17) {
    }
    if (value.has_case7_TimingAlignmentReception_IAB_r17) {
    }
    if (value.has_dl_tx_PowerAdjustment_IAB_r17) {
    }
    if (value.has_desired_ul_tx_PowerAdjustment_r17) {
    }
    if (value.has_fdm_SoftResourceAvailability_DynamicIndication_r17) {
    }
    if (value.has_updated_T_DeltaRangeReception_r17) {
    }
    if (value.has_slotBasedDynamicPUCCH_Rep_r17) {
    }
    if (value.has_sps_HARQ_ACK_Deferral_r17) {
        Free_Phy_ParametersCommon_ExtGroup9_Sps_HARQ_ACK_Deferral_r17(value.sps_HARQ_ACK_Deferral_r17);
    }
    if (value.has_unifiedJointTCI_commonUpdate_r17) {
    }
    if (value.has_mTRP_PDCCH_singleSpan_r17) {
    }
    if (value.has_supportedActivatedPRS_ProcessingWindow_r17) {
    }
    if (value.has_cg_TimeDomainAllocationExtension_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup10(Encoder& enc, const Phy_ParametersCommon_ExtGroup10& value)
{
    (void)value;
    enc.WriteBit(value.has_ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17);
    enc.WriteBit(value.has_directionalCollisionDC_IAB_r17);
    if (value.has_ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17), 0, 0);
    }
    if (value.has_directionalCollisionDC_IAB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directionalCollisionDC_IAB_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup10(Decoder& dec, Phy_ParametersCommon_ExtGroup10& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17 = (Phy_ParametersCommon_ExtGroup10_Ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17)0;
    }
    if (present_1) {
        value.directionalCollisionDC_IAB_r17 = (Phy_ParametersCommon_ExtGroup10_DirectionalCollisionDC_IAB_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup10(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup10(Phy_ParametersCommon_ExtGroup10& value)
{
    if (value.has_ta_BasedPDC_TN_NonSharedSpectrumChAccess_r17) {
    }
    if (value.has_directionalCollisionDC_IAB_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup11(Encoder& enc, const Phy_ParametersCommon_ExtGroup11& value)
{
    (void)value;
    enc.WriteBit(value.has_dummy1);
    enc.WriteBit(value.has_dummy2);
    enc.WriteBit(value.has_dummy3);
    enc.WriteBit(value.has_dummy4);
    enc.WriteBit(value.has_srs_AdditionalRepetition_r17);
    enc.WriteBit(value.has_pusch_Repetition_CG_SDT_r17);
    if (value.has_dummy1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy1), 0, 0);
    }
    if (value.has_dummy2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy2), 0, 0);
    }
    if (value.has_dummy3) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy3), 0, 0);
    }
    if (value.has_dummy4) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy4), 0, 0);
    }
    if (value.has_srs_AdditionalRepetition_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_AdditionalRepetition_r17), 0, 0);
    }
    if (value.has_pusch_Repetition_CG_SDT_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_Repetition_CG_SDT_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup11(Decoder& dec, Phy_ParametersCommon_ExtGroup11& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (present_0) {
        value.dummy1 = (Phy_ParametersCommon_ExtGroup11_Dummy1)0;
    }
    if (present_1) {
        value.dummy2 = (Phy_ParametersCommon_ExtGroup11_Dummy2)0;
    }
    if (present_2) {
        value.dummy3 = (Phy_ParametersCommon_ExtGroup11_Dummy3)0;
    }
    if (present_3) {
        value.dummy4 = (Phy_ParametersCommon_ExtGroup11_Dummy4)0;
    }
    if (present_4) {
        value.srs_AdditionalRepetition_r17 = (Phy_ParametersCommon_ExtGroup11_Srs_AdditionalRepetition_r17)0;
    }
    if (present_5) {
        value.pusch_Repetition_CG_SDT_r17 = (Phy_ParametersCommon_ExtGroup11_Pusch_Repetition_CG_SDT_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup11(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup11(Phy_ParametersCommon_ExtGroup11& value)
{
    if (value.has_dummy1) {
    }
    if (value.has_dummy2) {
    }
    if (value.has_dummy3) {
    }
    if (value.has_dummy4) {
    }
    if (value.has_srs_AdditionalRepetition_r17) {
    }
    if (value.has_pusch_Repetition_CG_SDT_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup12(Encoder& enc, const Phy_ParametersCommon_ExtGroup12& value)
{
    (void)value;
    enc.WriteBit(value.has_multiPDSCH_PerSlotType1_CB_Support_r17);
    if (value.has_multiPDSCH_PerSlotType1_CB_Support_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPDSCH_PerSlotType1_CB_Support_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup12(Decoder& dec, Phy_ParametersCommon_ExtGroup12& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.multiPDSCH_PerSlotType1_CB_Support_r17 = (Phy_ParametersCommon_ExtGroup12_MultiPDSCH_PerSlotType1_CB_Support_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup12(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup12(Phy_ParametersCommon_ExtGroup12& value)
{
    if (value.has_multiPDSCH_PerSlotType1_CB_Support_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18(Encoder& enc, const Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r18);
    enc.WriteBit(value.has_scs_30kHz_r18);
    enc.WriteBit(value.has_scs_60kHz_r18);
    enc.WriteBit(value.has_scs_120kHz_r18);
    if (value.has_scs_15kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r18), 0, 1);
    }
    if (value.has_scs_30kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r18), 0, 1);
    }
    if (value.has_scs_60kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r18), 0, 2);
    }
    if (value.has_scs_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r18), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18(Decoder& dec, Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_15kHz_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_30kHz_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_60kHz_r18 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_120kHz_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18(Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18& value)
{
    if (value.has_scs_15kHz_r18) {
    }
    if (value.has_scs_30kHz_r18) {
    }
    if (value.has_scs_60kHz_r18) {
    }
    if (value.has_scs_120kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18(Encoder& enc, const Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_30kHz_r18);
    enc.WriteBit(value.has_scs_120kHz_r18);
    if (value.has_scs_30kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r18), 0, 0);
    }
    if (value.has_scs_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18(Decoder& dec, Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.scs_30kHz_r18 = (Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_30kHz_r18)0;
    }
    if (present_1) {
        value.scs_120kHz_r18 = (Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18_Scs_120kHz_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18(Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18& value)
{
    if (value.has_scs_30kHz_r18) {
    }
    if (value.has_scs_120kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup13(Encoder& enc, const Phy_ParametersCommon_ExtGroup13& value)
{
    (void)value;
    enc.WriteBit(value.has_jointPowerSpatialAdaptation_r18);
    enc.WriteBit(value.has_ncr_AperiodicBeamInd_AccessLink_r18);
    enc.WriteBit(value.has_ncr_Semi_PersistentBeamInd_AccessLink_r18);
    enc.WriteBit(value.has_ncr_SimultaneousUL_BackhaulAndC_Link_r18);
    enc.WriteBit(value.has_ncr_BackhaulBeamInd_r18);
    enc.WriteBit(value.has_ncr_AdaptiveBeamBackhaulAndC_Link_r18);
    enc.WriteBit(value.has_nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18);
    enc.WriteBit(value.has_nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18);
    enc.WriteBit(value.has_configurableType_1A_FieldsForDCI_0_3_And_1_3_r18);
    enc.WriteBit(value.has_fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18);
    enc.WriteBit(value.has_multiPUSCH_DCI_0_1_r18);
    enc.WriteBit(value.has_multiPUSCH_DCI_0_2_r18);
    enc.WriteBit(value.has_support_5MHz_ChannelBW_20PRB_CORESET0_r18);
    enc.WriteBit(value.has_additionalSR_Periodicities_r18);
    enc.WriteBit(value.has_pathlossRS_UpdateForType1CG_PUSCH_r18);
    if (value.has_jointPowerSpatialAdaptation_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.jointPowerSpatialAdaptation_r18), 0, 0);
    }
    if (value.has_ncr_AperiodicBeamInd_AccessLink_r18) {
        Encode_Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18(enc, value.ncr_AperiodicBeamInd_AccessLink_r18);
    }
    if (value.has_ncr_Semi_PersistentBeamInd_AccessLink_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncr_Semi_PersistentBeamInd_AccessLink_r18), 0, 0);
    }
    if (value.has_ncr_SimultaneousUL_BackhaulAndC_Link_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncr_SimultaneousUL_BackhaulAndC_Link_r18), 0, 0);
    }
    if (value.has_ncr_BackhaulBeamInd_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncr_BackhaulBeamInd_r18), 0, 2);
    }
    if (value.has_ncr_AdaptiveBeamBackhaulAndC_Link_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncr_AdaptiveBeamBackhaulAndC_Link_r18), 0, 2);
    }
    if (value.has_nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18), 0, 0);
    }
    if (value.has_nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18), 0, 0);
    }
    if (value.has_configurableType_1A_FieldsForDCI_0_3_And_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configurableType_1A_FieldsForDCI_0_3_And_1_3_r18), 0, 0);
    }
    if (value.has_fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18), 0, 0);
    }
    if (value.has_multiPUSCH_DCI_0_1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPUSCH_DCI_0_1_r18), 0, 0);
    }
    if (value.has_multiPUSCH_DCI_0_2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPUSCH_DCI_0_2_r18), 0, 0);
    }
    if (value.has_support_5MHz_ChannelBW_20PRB_CORESET0_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.support_5MHz_ChannelBW_20PRB_CORESET0_r18), 0, 0);
    }
    if (value.has_additionalSR_Periodicities_r18) {
        Encode_Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18(enc, value.additionalSR_Periodicities_r18);
    }
    if (value.has_pathlossRS_UpdateForType1CG_PUSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pathlossRS_UpdateForType1CG_PUSCH_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup13(Decoder& dec, Phy_ParametersCommon_ExtGroup13& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (present_0) {
        value.jointPowerSpatialAdaptation_r18 = (Phy_ParametersCommon_ExtGroup13_JointPowerSpatialAdaptation_r18)0;
    }
    if (present_1) {
        if (Decode_Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18(dec, value.ncr_AperiodicBeamInd_AccessLink_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.ncr_Semi_PersistentBeamInd_AccessLink_r18 = (Phy_ParametersCommon_ExtGroup13_Ncr_Semi_PersistentBeamInd_AccessLink_r18)0;
    }
    if (present_3) {
        value.ncr_SimultaneousUL_BackhaulAndC_Link_r18 = (Phy_ParametersCommon_ExtGroup13_Ncr_SimultaneousUL_BackhaulAndC_Link_r18)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ncr_BackhaulBeamInd_r18 = (Phy_ParametersCommon_ExtGroup13_Ncr_BackhaulBeamInd_r18)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ncr_AdaptiveBeamBackhaulAndC_Link_r18 = (Phy_ParametersCommon_ExtGroup13_Ncr_AdaptiveBeamBackhaulAndC_Link_r18)tmp_value;
    }
    if (present_6) {
        value.nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18 = (Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18)0;
    }
    if (present_7) {
        value.nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18 = (Phy_ParametersCommon_ExtGroup13_NominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18)0;
    }
    if (present_8) {
        value.configurableType_1A_FieldsForDCI_0_3_And_1_3_r18 = (Phy_ParametersCommon_ExtGroup13_ConfigurableType_1A_FieldsForDCI_0_3_And_1_3_r18)0;
    }
    if (present_9) {
        value.fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18 = (Phy_ParametersCommon_ExtGroup13_Fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18)0;
    }
    if (present_10) {
        value.multiPUSCH_DCI_0_1_r18 = (Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_1_r18)0;
    }
    if (present_11) {
        value.multiPUSCH_DCI_0_2_r18 = (Phy_ParametersCommon_ExtGroup13_MultiPUSCH_DCI_0_2_r18)0;
    }
    if (present_12) {
        value.support_5MHz_ChannelBW_20PRB_CORESET0_r18 = (Phy_ParametersCommon_ExtGroup13_Support_5MHz_ChannelBW_20PRB_CORESET0_r18)0;
    }
    if (present_13) {
        if (Decode_Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18(dec, value.additionalSR_Periodicities_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
        value.pathlossRS_UpdateForType1CG_PUSCH_r18 = (Phy_ParametersCommon_ExtGroup13_PathlossRS_UpdateForType1CG_PUSCH_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup13(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup13(Phy_ParametersCommon_ExtGroup13& value)
{
    if (value.has_jointPowerSpatialAdaptation_r18) {
    }
    if (value.has_ncr_AperiodicBeamInd_AccessLink_r18) {
        Free_Phy_ParametersCommon_ExtGroup13_Ncr_AperiodicBeamInd_AccessLink_r18(value.ncr_AperiodicBeamInd_AccessLink_r18);
    }
    if (value.has_ncr_Semi_PersistentBeamInd_AccessLink_r18) {
    }
    if (value.has_ncr_SimultaneousUL_BackhaulAndC_Link_r18) {
    }
    if (value.has_ncr_BackhaulBeamInd_r18) {
    }
    if (value.has_ncr_AdaptiveBeamBackhaulAndC_Link_r18) {
    }
    if (value.has_nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_1_3_r18) {
    }
    if (value.has_nominalRBG_SizeOfConfig_3_FDRA_Type_0_DCI_0_3_r18) {
    }
    if (value.has_configurableType_1A_FieldsForDCI_0_3_And_1_3_r18) {
    }
    if (value.has_fdra_Type_1_Gty_2_4_8_16_RBs_RIV_DCI_1_3_And_0_3_r18) {
    }
    if (value.has_multiPUSCH_DCI_0_1_r18) {
    }
    if (value.has_multiPUSCH_DCI_0_2_r18) {
    }
    if (value.has_support_5MHz_ChannelBW_20PRB_CORESET0_r18) {
    }
    if (value.has_additionalSR_Periodicities_r18) {
        Free_Phy_ParametersCommon_ExtGroup13_AdditionalSR_Periodicities_r18(value.additionalSR_Periodicities_r18);
    }
    if (value.has_pathlossRS_UpdateForType1CG_PUSCH_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup1(Encoder& enc, const Phy_ParametersCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_dummy);
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup1(Decoder& dec, Phy_ParametersCommon_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.dummy = (Phy_ParametersCommon_ExtGroup1_Dummy)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup1(Phy_ParametersCommon_ExtGroup1& value)
{
    if (value.has_dummy) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup2(Encoder& enc, const Phy_ParametersCommon_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumberSearchSpaces);
    enc.WriteBit(value.has_rateMatchingCtrlResrcSetDynamic);
    enc.WriteBit(value.has_maxLayersMIMO_Indication);
    if (value.has_maxNumberSearchSpaces) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSearchSpaces), 0, 0);
    }
    if (value.has_rateMatchingCtrlResrcSetDynamic) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rateMatchingCtrlResrcSetDynamic), 0, 0);
    }
    if (value.has_maxLayersMIMO_Indication) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxLayersMIMO_Indication), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup2(Decoder& dec, Phy_ParametersCommon_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        value.maxNumberSearchSpaces = (Phy_ParametersCommon_ExtGroup2_MaxNumberSearchSpaces)0;
    }
    if (present_1) {
        value.rateMatchingCtrlResrcSetDynamic = (Phy_ParametersCommon_ExtGroup2_RateMatchingCtrlResrcSetDynamic)0;
    }
    if (present_2) {
        value.maxLayersMIMO_Indication = (Phy_ParametersCommon_ExtGroup2_MaxLayersMIMO_Indication)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup2(Phy_ParametersCommon_ExtGroup2& value)
{
    if (value.has_maxNumberSearchSpaces) {
    }
    if (value.has_rateMatchingCtrlResrcSetDynamic) {
    }
    if (value.has_maxLayersMIMO_Indication) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup3(Encoder& enc, const Phy_ParametersCommon_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_spCellPlacement);
    if (value.has_spCellPlacement) {
        Encode_CarrierAggregationVariant(enc, value.spCellPlacement);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup3(Decoder& dec, Phy_ParametersCommon_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CarrierAggregationVariant(dec, value.spCellPlacement) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup3(Phy_ParametersCommon_ExtGroup3& value)
{
    if (value.has_spCellPlacement) {
        Free_CarrierAggregationVariant(value.spCellPlacement);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16(Encoder& enc, const Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_non_SharedSpectrumChAccess_r16);
    enc.WriteBit(value.has_sharedSpectrumChAccess_r16);
    if (value.has_non_SharedSpectrumChAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.non_SharedSpectrumChAccess_r16), 0, 0);
    }
    if (value.has_sharedSpectrumChAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sharedSpectrumChAccess_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16(Decoder& dec, Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.non_SharedSpectrumChAccess_r16 = (Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_Non_SharedSpectrumChAccess_r16)0;
    }
    if (present_1) {
        value.sharedSpectrumChAccess_r16 = (Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16_SharedSpectrumChAccess_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16(Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16& value)
{
    if (value.has_non_SharedSpectrumChAccess_r16) {
    }
    if (value.has_sharedSpectrumChAccess_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16(Encoder& enc, const Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_sharedSpectrumChAccess_r16);
    enc.WriteBit(value.has_non_SharedSpectrumChAccess_r16);
    if (value.has_sharedSpectrumChAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sharedSpectrumChAccess_r16), 0, 0);
    }
    if (value.has_non_SharedSpectrumChAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.non_SharedSpectrumChAccess_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16(Decoder& dec, Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.sharedSpectrumChAccess_r16 = (Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_SharedSpectrumChAccess_r16)0;
    }
    if (present_1) {
        value.non_SharedSpectrumChAccess_r16 = (Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16_Non_SharedSpectrumChAccess_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16(Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16& value)
{
    if (value.has_sharedSpectrumChAccess_r16) {
    }
    if (value.has_non_SharedSpectrumChAccess_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16(Encoder& enc, const Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumberResWithinSlotAcrossCC_AcrossFR_r16);
    enc.WriteBit(value.has_maxNumberResAcrossCC_AcrossFR_r16);
    if (value.has_maxNumberResWithinSlotAcrossCC_AcrossFR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResWithinSlotAcrossCC_AcrossFR_r16), 0, 7);
    }
    if (value.has_maxNumberResAcrossCC_AcrossFR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResAcrossCC_AcrossFR_r16), 0, 13);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16(Decoder& dec, Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumberResWithinSlotAcrossCC_AcrossFR_r16 = (Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResWithinSlotAcrossCC_AcrossFR_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.maxNumberResAcrossCC_AcrossFR_r16 = (Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16_MaxNumberResAcrossCC_AcrossFR_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16(Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16& value)
{
    if (value.has_maxNumberResWithinSlotAcrossCC_AcrossFR_r16) {
    }
    if (value.has_maxNumberResAcrossCC_AcrossFR_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16(Encoder& enc, const Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumberLongPUCCHs_r16);
    if (value.has_maxNumberLongPUCCHs_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLongPUCCHs_r16), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16(Decoder& dec, Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberLongPUCCHs_r16 = (Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16_MaxNumberLongPUCCHs_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16(Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16& value)
{
    if (value.has_maxNumberLongPUCCHs_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16(Encoder& enc, const Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag_type1_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.type1_r16), 0, 1);
        break;
    case Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag_type2_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.type2_r16), 0, 3);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16(Decoder& dec, Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag)root_index;
    switch (value.tag) {
    case Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag_type1_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.type1_r16 = (Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type1_r16)tmp_value;
        break;
    }
    case Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag_type2_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.type2_r16 = (Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Type2_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16(Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16& value)
{
    switch (value.tag) {
    case Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag_type1_r16:
        break;
    case Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16_Tag_type2_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup4(Encoder& enc, const Phy_ParametersCommon_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_twoStepRACH_r16);
    enc.WriteBit(value.has_dci_Format1_2And0_2_r16);
    enc.WriteBit(value.has_monitoringDCI_SameSearchSpace_r16);
    enc.WriteBit(value.has_type2_CG_ReleaseDCI_0_1_r16);
    enc.WriteBit(value.has_type2_CG_ReleaseDCI_0_2_r16);
    enc.WriteBit(value.has_sps_ReleaseDCI_1_1_r16);
    enc.WriteBit(value.has_sps_ReleaseDCI_1_2_r16);
    enc.WriteBit(value.has_csi_TriggerStateNon_ActiveBWP_r16);
    enc.WriteBit(value.has_separateSMTC_InterIAB_Support_r16);
    enc.WriteBit(value.has_separateRACH_IAB_Support_r16);
    enc.WriteBit(value.has_ul_flexibleDL_SlotFormatSemiStatic_IAB_r16);
    enc.WriteBit(value.has_ul_flexibleDL_SlotFormatDynamics_IAB_r16);
    enc.WriteBit(value.has_dft_S_OFDM_WaveformUL_IAB_r16);
    enc.WriteBit(value.has_dci_25_AI_RNTI_Support_IAB_r16);
    enc.WriteBit(value.has_t_DeltaReceptionSupport_IAB_r16);
    enc.WriteBit(value.has_guardSymbolReportReception_IAB_r16);
    enc.WriteBit(value.has_harqACK_CB_SpatialBundlingPUCCH_Group_r16);
    enc.WriteBit(value.has_crossSlotScheduling_r16);
    enc.WriteBit(value.has_maxNumberSRS_PosPathLossEstimateAllServingCells_r16);
    enc.WriteBit(value.has_extendedCG_Periodicities_r16);
    enc.WriteBit(value.has_extendedSPS_Periodicities_r16);
    enc.WriteBit(value.has_codebookVariantsList_r16);
    enc.WriteBit(value.has_pusch_RepetitionTypeA_r16);
    enc.WriteBit(value.has_dci_DL_PriorityIndicator_r16);
    enc.WriteBit(value.has_dci_UL_PriorityIndicator_r16);
    enc.WriteBit(value.has_maxNumberPathlossRS_Update_r16);
    enc.WriteBit(value.has_type2_HARQ_ACK_Codebook_r16);
    enc.WriteBit(value.has_maxTotalResourcesForAcrossFreqRanges_r16);
    enc.WriteBit(value.has_harqACK_separateMultiDCI_MultiTRP_r16);
    enc.WriteBit(value.has_harqACK_jointMultiDCI_MultiTRP_r16);
    enc.WriteBit(value.has_bwp_SwitchingMultiCCs_r16);
    if (value.has_twoStepRACH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoStepRACH_r16), 0, 0);
    }
    if (value.has_dci_Format1_2And0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_Format1_2And0_2_r16), 0, 0);
    }
    if (value.has_monitoringDCI_SameSearchSpace_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.monitoringDCI_SameSearchSpace_r16), 0, 0);
    }
    if (value.has_type2_CG_ReleaseDCI_0_1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_CG_ReleaseDCI_0_1_r16), 0, 0);
    }
    if (value.has_type2_CG_ReleaseDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_CG_ReleaseDCI_0_2_r16), 0, 0);
    }
    if (value.has_sps_ReleaseDCI_1_1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sps_ReleaseDCI_1_1_r16), 0, 0);
    }
    if (value.has_sps_ReleaseDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sps_ReleaseDCI_1_2_r16), 0, 0);
    }
    if (value.has_csi_TriggerStateNon_ActiveBWP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_TriggerStateNon_ActiveBWP_r16), 0, 0);
    }
    if (value.has_separateSMTC_InterIAB_Support_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.separateSMTC_InterIAB_Support_r16), 0, 0);
    }
    if (value.has_separateRACH_IAB_Support_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.separateRACH_IAB_Support_r16), 0, 0);
    }
    if (value.has_ul_flexibleDL_SlotFormatSemiStatic_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_flexibleDL_SlotFormatSemiStatic_IAB_r16), 0, 0);
    }
    if (value.has_ul_flexibleDL_SlotFormatDynamics_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_flexibleDL_SlotFormatDynamics_IAB_r16), 0, 0);
    }
    if (value.has_dft_S_OFDM_WaveformUL_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dft_S_OFDM_WaveformUL_IAB_r16), 0, 0);
    }
    if (value.has_dci_25_AI_RNTI_Support_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_25_AI_RNTI_Support_IAB_r16), 0, 0);
    }
    if (value.has_t_DeltaReceptionSupport_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_DeltaReceptionSupport_IAB_r16), 0, 0);
    }
    if (value.has_guardSymbolReportReception_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.guardSymbolReportReception_IAB_r16), 0, 0);
    }
    if (value.has_harqACK_CB_SpatialBundlingPUCCH_Group_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harqACK_CB_SpatialBundlingPUCCH_Group_r16), 0, 0);
    }
    if (value.has_crossSlotScheduling_r16) {
        Encode_Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16(enc, value.crossSlotScheduling_r16);
    }
    if (value.has_maxNumberSRS_PosPathLossEstimateAllServingCells_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_PosPathLossEstimateAllServingCells_r16), 0, 3);
    }
    if (value.has_extendedCG_Periodicities_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedCG_Periodicities_r16), 0, 0);
    }
    if (value.has_extendedSPS_Periodicities_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedSPS_Periodicities_r16), 0, 0);
    }
    if (value.has_codebookVariantsList_r16) {
        Encode_CodebookVariantsList_r16(enc, value.codebookVariantsList_r16);
    }
    if (value.has_pusch_RepetitionTypeA_r16) {
        Encode_Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16(enc, value.pusch_RepetitionTypeA_r16);
    }
    if (value.has_dci_DL_PriorityIndicator_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_DL_PriorityIndicator_r16), 0, 0);
    }
    if (value.has_dci_UL_PriorityIndicator_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_UL_PriorityIndicator_r16), 0, 0);
    }
    if (value.has_maxNumberPathlossRS_Update_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPathlossRS_Update_r16), 0, 4);
    }
    if (value.has_type2_HARQ_ACK_Codebook_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_HARQ_ACK_Codebook_r16), 0, 0);
    }
    if (value.has_maxTotalResourcesForAcrossFreqRanges_r16) {
        Encode_Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16(enc, value.maxTotalResourcesForAcrossFreqRanges_r16);
    }
    if (value.has_harqACK_separateMultiDCI_MultiTRP_r16) {
        Encode_Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16(enc, value.harqACK_separateMultiDCI_MultiTRP_r16);
    }
    if (value.has_harqACK_jointMultiDCI_MultiTRP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harqACK_jointMultiDCI_MultiTRP_r16), 0, 0);
    }
    if (value.has_bwp_SwitchingMultiCCs_r16) {
        Encode_Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16(enc, value.bwp_SwitchingMultiCCs_r16);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup4(Decoder& dec, Phy_ParametersCommon_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    bool present_17 = false;
    bool present_18 = false;
    bool present_19 = false;
    bool present_20 = false;
    bool present_21 = false;
    bool present_22 = false;
    bool present_23 = false;
    bool present_24 = false;
    bool present_25 = false;
    bool present_26 = false;
    bool present_27 = false;
    bool present_28 = false;
    bool present_29 = false;
    bool present_30 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (!dec.ReadBit(present_17)) { goto fail; }
    if (!dec.ReadBit(present_18)) { goto fail; }
    if (!dec.ReadBit(present_19)) { goto fail; }
    if (!dec.ReadBit(present_20)) { goto fail; }
    if (!dec.ReadBit(present_21)) { goto fail; }
    if (!dec.ReadBit(present_22)) { goto fail; }
    if (!dec.ReadBit(present_23)) { goto fail; }
    if (!dec.ReadBit(present_24)) { goto fail; }
    if (!dec.ReadBit(present_25)) { goto fail; }
    if (!dec.ReadBit(present_26)) { goto fail; }
    if (!dec.ReadBit(present_27)) { goto fail; }
    if (!dec.ReadBit(present_28)) { goto fail; }
    if (!dec.ReadBit(present_29)) { goto fail; }
    if (!dec.ReadBit(present_30)) { goto fail; }
    if (present_0) {
        value.twoStepRACH_r16 = (Phy_ParametersCommon_ExtGroup4_TwoStepRACH_r16)0;
    }
    if (present_1) {
        value.dci_Format1_2And0_2_r16 = (Phy_ParametersCommon_ExtGroup4_Dci_Format1_2And0_2_r16)0;
    }
    if (present_2) {
        value.monitoringDCI_SameSearchSpace_r16 = (Phy_ParametersCommon_ExtGroup4_MonitoringDCI_SameSearchSpace_r16)0;
    }
    if (present_3) {
        value.type2_CG_ReleaseDCI_0_1_r16 = (Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_1_r16)0;
    }
    if (present_4) {
        value.type2_CG_ReleaseDCI_0_2_r16 = (Phy_ParametersCommon_ExtGroup4_Type2_CG_ReleaseDCI_0_2_r16)0;
    }
    if (present_5) {
        value.sps_ReleaseDCI_1_1_r16 = (Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_1_r16)0;
    }
    if (present_6) {
        value.sps_ReleaseDCI_1_2_r16 = (Phy_ParametersCommon_ExtGroup4_Sps_ReleaseDCI_1_2_r16)0;
    }
    if (present_7) {
        value.csi_TriggerStateNon_ActiveBWP_r16 = (Phy_ParametersCommon_ExtGroup4_Csi_TriggerStateNon_ActiveBWP_r16)0;
    }
    if (present_8) {
        value.separateSMTC_InterIAB_Support_r16 = (Phy_ParametersCommon_ExtGroup4_SeparateSMTC_InterIAB_Support_r16)0;
    }
    if (present_9) {
        value.separateRACH_IAB_Support_r16 = (Phy_ParametersCommon_ExtGroup4_SeparateRACH_IAB_Support_r16)0;
    }
    if (present_10) {
        value.ul_flexibleDL_SlotFormatSemiStatic_IAB_r16 = (Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatSemiStatic_IAB_r16)0;
    }
    if (present_11) {
        value.ul_flexibleDL_SlotFormatDynamics_IAB_r16 = (Phy_ParametersCommon_ExtGroup4_Ul_flexibleDL_SlotFormatDynamics_IAB_r16)0;
    }
    if (present_12) {
        value.dft_S_OFDM_WaveformUL_IAB_r16 = (Phy_ParametersCommon_ExtGroup4_Dft_S_OFDM_WaveformUL_IAB_r16)0;
    }
    if (present_13) {
        value.dci_25_AI_RNTI_Support_IAB_r16 = (Phy_ParametersCommon_ExtGroup4_Dci_25_AI_RNTI_Support_IAB_r16)0;
    }
    if (present_14) {
        value.t_DeltaReceptionSupport_IAB_r16 = (Phy_ParametersCommon_ExtGroup4_T_DeltaReceptionSupport_IAB_r16)0;
    }
    if (present_15) {
        value.guardSymbolReportReception_IAB_r16 = (Phy_ParametersCommon_ExtGroup4_GuardSymbolReportReception_IAB_r16)0;
    }
    if (present_16) {
        value.harqACK_CB_SpatialBundlingPUCCH_Group_r16 = (Phy_ParametersCommon_ExtGroup4_HarqACK_CB_SpatialBundlingPUCCH_Group_r16)0;
    }
    if (present_17) {
        if (Decode_Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16(dec, value.crossSlotScheduling_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_18) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberSRS_PosPathLossEstimateAllServingCells_r16 = (Phy_ParametersCommon_ExtGroup4_MaxNumberSRS_PosPathLossEstimateAllServingCells_r16)tmp_value;
    }
    if (present_19) {
        value.extendedCG_Periodicities_r16 = (Phy_ParametersCommon_ExtGroup4_ExtendedCG_Periodicities_r16)0;
    }
    if (present_20) {
        value.extendedSPS_Periodicities_r16 = (Phy_ParametersCommon_ExtGroup4_ExtendedSPS_Periodicities_r16)0;
    }
    if (present_21) {
        if (Decode_CodebookVariantsList_r16(dec, value.codebookVariantsList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_22) {
        if (Decode_Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16(dec, value.pusch_RepetitionTypeA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_23) {
        value.dci_DL_PriorityIndicator_r16 = (Phy_ParametersCommon_ExtGroup4_Dci_DL_PriorityIndicator_r16)0;
    }
    if (present_24) {
        value.dci_UL_PriorityIndicator_r16 = (Phy_ParametersCommon_ExtGroup4_Dci_UL_PriorityIndicator_r16)0;
    }
    if (present_25) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberPathlossRS_Update_r16 = (Phy_ParametersCommon_ExtGroup4_MaxNumberPathlossRS_Update_r16)tmp_value;
    }
    if (present_26) {
        value.type2_HARQ_ACK_Codebook_r16 = (Phy_ParametersCommon_ExtGroup4_Type2_HARQ_ACK_Codebook_r16)0;
    }
    if (present_27) {
        if (Decode_Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16(dec, value.maxTotalResourcesForAcrossFreqRanges_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_28) {
        if (Decode_Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16(dec, value.harqACK_separateMultiDCI_MultiTRP_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_29) {
        value.harqACK_jointMultiDCI_MultiTRP_r16 = (Phy_ParametersCommon_ExtGroup4_HarqACK_jointMultiDCI_MultiTRP_r16)0;
    }
    if (present_30) {
        if (Decode_Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16(dec, value.bwp_SwitchingMultiCCs_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup4(Phy_ParametersCommon_ExtGroup4& value)
{
    if (value.has_twoStepRACH_r16) {
    }
    if (value.has_dci_Format1_2And0_2_r16) {
    }
    if (value.has_monitoringDCI_SameSearchSpace_r16) {
    }
    if (value.has_type2_CG_ReleaseDCI_0_1_r16) {
    }
    if (value.has_type2_CG_ReleaseDCI_0_2_r16) {
    }
    if (value.has_sps_ReleaseDCI_1_1_r16) {
    }
    if (value.has_sps_ReleaseDCI_1_2_r16) {
    }
    if (value.has_csi_TriggerStateNon_ActiveBWP_r16) {
    }
    if (value.has_separateSMTC_InterIAB_Support_r16) {
    }
    if (value.has_separateRACH_IAB_Support_r16) {
    }
    if (value.has_ul_flexibleDL_SlotFormatSemiStatic_IAB_r16) {
    }
    if (value.has_ul_flexibleDL_SlotFormatDynamics_IAB_r16) {
    }
    if (value.has_dft_S_OFDM_WaveformUL_IAB_r16) {
    }
    if (value.has_dci_25_AI_RNTI_Support_IAB_r16) {
    }
    if (value.has_t_DeltaReceptionSupport_IAB_r16) {
    }
    if (value.has_guardSymbolReportReception_IAB_r16) {
    }
    if (value.has_harqACK_CB_SpatialBundlingPUCCH_Group_r16) {
    }
    if (value.has_crossSlotScheduling_r16) {
        Free_Phy_ParametersCommon_ExtGroup4_CrossSlotScheduling_r16(value.crossSlotScheduling_r16);
    }
    if (value.has_maxNumberSRS_PosPathLossEstimateAllServingCells_r16) {
    }
    if (value.has_extendedCG_Periodicities_r16) {
    }
    if (value.has_extendedSPS_Periodicities_r16) {
    }
    if (value.has_codebookVariantsList_r16) {
        Free_CodebookVariantsList_r16(value.codebookVariantsList_r16);
    }
    if (value.has_pusch_RepetitionTypeA_r16) {
        Free_Phy_ParametersCommon_ExtGroup4_Pusch_RepetitionTypeA_r16(value.pusch_RepetitionTypeA_r16);
    }
    if (value.has_dci_DL_PriorityIndicator_r16) {
    }
    if (value.has_dci_UL_PriorityIndicator_r16) {
    }
    if (value.has_maxNumberPathlossRS_Update_r16) {
    }
    if (value.has_type2_HARQ_ACK_Codebook_r16) {
    }
    if (value.has_maxTotalResourcesForAcrossFreqRanges_r16) {
        Free_Phy_ParametersCommon_ExtGroup4_MaxTotalResourcesForAcrossFreqRanges_r16(value.maxTotalResourcesForAcrossFreqRanges_r16);
    }
    if (value.has_harqACK_separateMultiDCI_MultiTRP_r16) {
        Free_Phy_ParametersCommon_ExtGroup4_HarqACK_separateMultiDCI_MultiTRP_r16(value.harqACK_separateMultiDCI_MultiTRP_r16);
    }
    if (value.has_harqACK_jointMultiDCI_MultiTRP_r16) {
    }
    if (value.has_bwp_SwitchingMultiCCs_r16) {
        Free_Phy_ParametersCommon_ExtGroup4_Bwp_SwitchingMultiCCs_r16(value.bwp_SwitchingMultiCCs_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup5(Encoder& enc, const Phy_ParametersCommon_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_targetSMTC_SCG_r16);
    enc.WriteBit(value.has_supportRepetitionZeroOffsetRV_r16);
    enc.WriteBit(value.has_cbg_TransInOrderPUSCH_UL_r16);
    if (value.has_targetSMTC_SCG_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.targetSMTC_SCG_r16), 0, 0);
    }
    if (value.has_supportRepetitionZeroOffsetRV_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportRepetitionZeroOffsetRV_r16), 0, 0);
    }
    if (value.has_cbg_TransInOrderPUSCH_UL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cbg_TransInOrderPUSCH_UL_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup5(Decoder& dec, Phy_ParametersCommon_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        value.targetSMTC_SCG_r16 = (Phy_ParametersCommon_ExtGroup5_TargetSMTC_SCG_r16)0;
    }
    if (present_1) {
        value.supportRepetitionZeroOffsetRV_r16 = (Phy_ParametersCommon_ExtGroup5_SupportRepetitionZeroOffsetRV_r16)0;
    }
    if (present_2) {
        value.cbg_TransInOrderPUSCH_UL_r16 = (Phy_ParametersCommon_ExtGroup5_Cbg_TransInOrderPUSCH_UL_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup5(Phy_ParametersCommon_ExtGroup5& value)
{
    if (value.has_targetSMTC_SCG_r16) {
    }
    if (value.has_supportRepetitionZeroOffsetRV_r16) {
    }
    if (value.has_cbg_TransInOrderPUSCH_UL_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16(Encoder& enc, const Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag_type1_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.type1_r16), 0, 1);
        break;
    case Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag_type2_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.type2_r16), 0, 3);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16(Decoder& dec, Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag)root_index;
    switch (value.tag) {
    case Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag_type1_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.type1_r16 = (Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type1_r16)tmp_value;
        break;
    }
    case Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag_type2_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.type2_r16 = (Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Type2_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16(Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16& value)
{
    switch (value.tag) {
    case Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag_type1_r16:
        break;
    case Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16_Tag_type2_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup6(Encoder& enc, const Phy_ParametersCommon_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_bwp_SwitchingMultiDormancyCCs_r16);
    enc.WriteBit(value.has_supportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16);
    enc.WriteBit(value.has_pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16);
    if (value.has_bwp_SwitchingMultiDormancyCCs_r16) {
        Encode_Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16(enc, value.bwp_SwitchingMultiDormancyCCs_r16);
    }
    if (value.has_supportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16), 0, 0);
    }
    if (value.has_pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup6(Decoder& dec, Phy_ParametersCommon_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        if (Decode_Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16(dec, value.bwp_SwitchingMultiDormancyCCs_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.supportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16 = (Phy_ParametersCommon_ExtGroup6_SupportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16 = (Phy_ParametersCommon_ExtGroup6_Pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup6(Phy_ParametersCommon_ExtGroup6& value)
{
    if (value.has_bwp_SwitchingMultiDormancyCCs_r16) {
        Free_Phy_ParametersCommon_ExtGroup6_Bwp_SwitchingMultiDormancyCCs_r16(value.bwp_SwitchingMultiDormancyCCs_r16);
    }
    if (value.has_supportRetx_Diff_CoresetPool_Multi_DCI_TRP_r16) {
    }
    if (value.has_pdcch_MonitoringAnyOccasionsWithSpanGapCrossCarrierSch_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_ExtGroup7(Encoder& enc, const Phy_ParametersCommon_ExtGroup7& value)
{
    (void)value;
    enc.WriteBit(value.has_newBeamIdentifications2PortCSI_RS_r16);
    enc.WriteBit(value.has_pathlossEstimation2PortCSI_RS_r16);
    if (value.has_newBeamIdentifications2PortCSI_RS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.newBeamIdentifications2PortCSI_RS_r16), 0, 0);
    }
    if (value.has_pathlossEstimation2PortCSI_RS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pathlossEstimation2PortCSI_RS_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_ExtGroup7(Decoder& dec, Phy_ParametersCommon_ExtGroup7& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.newBeamIdentifications2PortCSI_RS_r16 = (Phy_ParametersCommon_ExtGroup7_NewBeamIdentifications2PortCSI_RS_r16)0;
    }
    if (present_1) {
        value.pathlossEstimation2PortCSI_RS_r16 = (Phy_ParametersCommon_ExtGroup7_PathlossEstimation2PortCSI_RS_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_ExtGroup7(Phy_ParametersCommon_ExtGroup7& value)
{
    if (value.has_newBeamIdentifications2PortCSI_RS_r16) {
    }
    if (value.has_pathlossEstimation2PortCSI_RS_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon(Encoder& enc, const Phy_ParametersCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7 || value.has_extGroup8 || value.has_extGroup9 || value.has_extGroup10 || value.has_extGroup11 || value.has_extGroup12 || value.has_extGroup13;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_csi_RS_CFRA_ForHO);
    enc.WriteBit(value.has_dynamicPRB_BundlingDL);
    enc.WriteBit(value.has_sp_CSI_ReportPUCCH);
    enc.WriteBit(value.has_sp_CSI_ReportPUSCH);
    enc.WriteBit(value.has_nzp_CSI_RS_IntefMgmt);
    enc.WriteBit(value.has_type2_SP_CSI_Feedback_LongPUCCH);
    enc.WriteBit(value.has_precoderGranularityCORESET);
    enc.WriteBit(value.has_dynamicHARQ_ACK_Codebook);
    enc.WriteBit(value.has_semiStaticHARQ_ACK_Codebook);
    enc.WriteBit(value.has_spatialBundlingHARQ_ACK);
    enc.WriteBit(value.has_dynamicBetaOffsetInd_HARQ_ACK_CSI);
    enc.WriteBit(value.has_pucch_Repetition_F1_3_4);
    enc.WriteBit(value.has_ra_Type0_PUSCH);
    enc.WriteBit(value.has_dynamicSwitchRA_Type0_1_PDSCH);
    enc.WriteBit(value.has_dynamicSwitchRA_Type0_1_PUSCH);
    enc.WriteBit(value.has_pdsch_MappingTypeA);
    enc.WriteBit(value.has_pdsch_MappingTypeB);
    enc.WriteBit(value.has_interleavingVRB_ToPRB_PDSCH);
    enc.WriteBit(value.has_interSlotFreqHopping_PUSCH);
    enc.WriteBit(value.has_type1_PUSCH_RepetitionMultiSlots);
    enc.WriteBit(value.has_type2_PUSCH_RepetitionMultiSlots);
    enc.WriteBit(value.has_pusch_RepetitionMultiSlots);
    enc.WriteBit(value.has_pdsch_RepetitionMultiSlots);
    enc.WriteBit(value.has_downlinkSPS);
    enc.WriteBit(value.has_configuredUL_GrantType1);
    enc.WriteBit(value.has_configuredUL_GrantType2);
    enc.WriteBit(value.has_pre_EmptIndication_DL);
    enc.WriteBit(value.has_cbg_TransIndication_DL);
    enc.WriteBit(value.has_cbg_TransIndication_UL);
    enc.WriteBit(value.has_cbg_FlushIndication_DL);
    enc.WriteBit(value.has_dynamicHARQ_ACK_CodeB_CBG_Retx_DL);
    enc.WriteBit(value.has_rateMatchingResrcSetSemi_Static);
    enc.WriteBit(value.has_rateMatchingResrcSetDynamic);
    enc.WriteBit(value.has_bwp_SwitchingDelay);
    if (value.has_csi_RS_CFRA_ForHO) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_CFRA_ForHO), 0, 0);
    }
    if (value.has_dynamicPRB_BundlingDL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicPRB_BundlingDL), 0, 0);
    }
    if (value.has_sp_CSI_ReportPUCCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_CSI_ReportPUCCH), 0, 0);
    }
    if (value.has_sp_CSI_ReportPUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_CSI_ReportPUSCH), 0, 0);
    }
    if (value.has_nzp_CSI_RS_IntefMgmt) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_IntefMgmt), 0, 0);
    }
    if (value.has_type2_SP_CSI_Feedback_LongPUCCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_SP_CSI_Feedback_LongPUCCH), 0, 0);
    }
    if (value.has_precoderGranularityCORESET) {
        enc.WriteConstrainedInteger((std::int64_t)(value.precoderGranularityCORESET), 0, 0);
    }
    if (value.has_dynamicHARQ_ACK_Codebook) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicHARQ_ACK_Codebook), 0, 0);
    }
    if (value.has_semiStaticHARQ_ACK_Codebook) {
        enc.WriteConstrainedInteger((std::int64_t)(value.semiStaticHARQ_ACK_Codebook), 0, 0);
    }
    if (value.has_spatialBundlingHARQ_ACK) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spatialBundlingHARQ_ACK), 0, 0);
    }
    if (value.has_dynamicBetaOffsetInd_HARQ_ACK_CSI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicBetaOffsetInd_HARQ_ACK_CSI), 0, 0);
    }
    if (value.has_pucch_Repetition_F1_3_4) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_Repetition_F1_3_4), 0, 0);
    }
    if (value.has_ra_Type0_PUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_Type0_PUSCH), 0, 0);
    }
    if (value.has_dynamicSwitchRA_Type0_1_PDSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicSwitchRA_Type0_1_PDSCH), 0, 0);
    }
    if (value.has_dynamicSwitchRA_Type0_1_PUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicSwitchRA_Type0_1_PUSCH), 0, 0);
    }
    if (value.has_pdsch_MappingTypeA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_MappingTypeA), 0, 0);
    }
    if (value.has_pdsch_MappingTypeB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_MappingTypeB), 0, 0);
    }
    if (value.has_interleavingVRB_ToPRB_PDSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interleavingVRB_ToPRB_PDSCH), 0, 0);
    }
    if (value.has_interSlotFreqHopping_PUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interSlotFreqHopping_PUSCH), 0, 0);
    }
    if (value.has_type1_PUSCH_RepetitionMultiSlots) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type1_PUSCH_RepetitionMultiSlots), 0, 0);
    }
    if (value.has_type2_PUSCH_RepetitionMultiSlots) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_PUSCH_RepetitionMultiSlots), 0, 0);
    }
    if (value.has_pusch_RepetitionMultiSlots) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_RepetitionMultiSlots), 0, 0);
    }
    if (value.has_pdsch_RepetitionMultiSlots) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_RepetitionMultiSlots), 0, 0);
    }
    if (value.has_downlinkSPS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.downlinkSPS), 0, 0);
    }
    if (value.has_configuredUL_GrantType1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredUL_GrantType1), 0, 0);
    }
    if (value.has_configuredUL_GrantType2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredUL_GrantType2), 0, 0);
    }
    if (value.has_pre_EmptIndication_DL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pre_EmptIndication_DL), 0, 0);
    }
    if (value.has_cbg_TransIndication_DL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cbg_TransIndication_DL), 0, 0);
    }
    if (value.has_cbg_TransIndication_UL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cbg_TransIndication_UL), 0, 0);
    }
    if (value.has_cbg_FlushIndication_DL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cbg_FlushIndication_DL), 0, 0);
    }
    if (value.has_dynamicHARQ_ACK_CodeB_CBG_Retx_DL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicHARQ_ACK_CodeB_CBG_Retx_DL), 0, 0);
    }
    if (value.has_rateMatchingResrcSetSemi_Static) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rateMatchingResrcSetSemi_Static), 0, 0);
    }
    if (value.has_rateMatchingResrcSetDynamic) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rateMatchingResrcSetDynamic), 0, 0);
    }
    if (value.has_bwp_SwitchingDelay) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bwp_SwitchingDelay), 0, 1);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(13u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        enc.WriteBit(value.has_extGroup6);
        enc.WriteBit(value.has_extGroup7);
        enc.WriteBit(value.has_extGroup8);
        enc.WriteBit(value.has_extGroup9);
        enc.WriteBit(value.has_extGroup10);
        enc.WriteBit(value.has_extGroup11);
        enc.WriteBit(value.has_extGroup12);
        enc.WriteBit(value.has_extGroup13);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup8) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup8(sub, value.extGroup8);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup9) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup9(sub, value.extGroup9);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup10) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup10(sub, value.extGroup10);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup11) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup11(sub, value.extGroup11);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup12) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup12(sub, value.extGroup12);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup13) {
    Encoder sub;
    Encode_Phy_ParametersCommon_ExtGroup13(sub, value.extGroup13);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon(Decoder& dec, Phy_ParametersCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    bool present_17 = false;
    bool present_18 = false;
    bool present_19 = false;
    bool present_20 = false;
    bool present_21 = false;
    bool present_22 = false;
    bool present_23 = false;
    bool present_24 = false;
    bool present_25 = false;
    bool present_26 = false;
    bool present_27 = false;
    bool present_28 = false;
    bool present_29 = false;
    bool present_30 = false;
    bool present_31 = false;
    bool present_32 = false;
    bool present_33 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (!dec.ReadBit(present_17)) { goto fail; }
    if (!dec.ReadBit(present_18)) { goto fail; }
    if (!dec.ReadBit(present_19)) { goto fail; }
    if (!dec.ReadBit(present_20)) { goto fail; }
    if (!dec.ReadBit(present_21)) { goto fail; }
    if (!dec.ReadBit(present_22)) { goto fail; }
    if (!dec.ReadBit(present_23)) { goto fail; }
    if (!dec.ReadBit(present_24)) { goto fail; }
    if (!dec.ReadBit(present_25)) { goto fail; }
    if (!dec.ReadBit(present_26)) { goto fail; }
    if (!dec.ReadBit(present_27)) { goto fail; }
    if (!dec.ReadBit(present_28)) { goto fail; }
    if (!dec.ReadBit(present_29)) { goto fail; }
    if (!dec.ReadBit(present_30)) { goto fail; }
    if (!dec.ReadBit(present_31)) { goto fail; }
    if (!dec.ReadBit(present_32)) { goto fail; }
    if (!dec.ReadBit(present_33)) { goto fail; }
    if (present_0) {
        value.csi_RS_CFRA_ForHO = (Phy_ParametersCommon_Csi_RS_CFRA_ForHO)0;
    }
    if (present_1) {
        value.dynamicPRB_BundlingDL = (Phy_ParametersCommon_DynamicPRB_BundlingDL)0;
    }
    if (present_2) {
        value.sp_CSI_ReportPUCCH = (Phy_ParametersCommon_Sp_CSI_ReportPUCCH)0;
    }
    if (present_3) {
        value.sp_CSI_ReportPUSCH = (Phy_ParametersCommon_Sp_CSI_ReportPUSCH)0;
    }
    if (present_4) {
        value.nzp_CSI_RS_IntefMgmt = (Phy_ParametersCommon_Nzp_CSI_RS_IntefMgmt)0;
    }
    if (present_5) {
        value.type2_SP_CSI_Feedback_LongPUCCH = (Phy_ParametersCommon_Type2_SP_CSI_Feedback_LongPUCCH)0;
    }
    if (present_6) {
        value.precoderGranularityCORESET = (Phy_ParametersCommon_PrecoderGranularityCORESET)0;
    }
    if (present_7) {
        value.dynamicHARQ_ACK_Codebook = (Phy_ParametersCommon_DynamicHARQ_ACK_Codebook)0;
    }
    if (present_8) {
        value.semiStaticHARQ_ACK_Codebook = (Phy_ParametersCommon_SemiStaticHARQ_ACK_Codebook)0;
    }
    if (present_9) {
        value.spatialBundlingHARQ_ACK = (Phy_ParametersCommon_SpatialBundlingHARQ_ACK)0;
    }
    if (present_10) {
        value.dynamicBetaOffsetInd_HARQ_ACK_CSI = (Phy_ParametersCommon_DynamicBetaOffsetInd_HARQ_ACK_CSI)0;
    }
    if (present_11) {
        value.pucch_Repetition_F1_3_4 = (Phy_ParametersCommon_Pucch_Repetition_F1_3_4)0;
    }
    if (present_12) {
        value.ra_Type0_PUSCH = (Phy_ParametersCommon_Ra_Type0_PUSCH)0;
    }
    if (present_13) {
        value.dynamicSwitchRA_Type0_1_PDSCH = (Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PDSCH)0;
    }
    if (present_14) {
        value.dynamicSwitchRA_Type0_1_PUSCH = (Phy_ParametersCommon_DynamicSwitchRA_Type0_1_PUSCH)0;
    }
    if (present_15) {
        value.pdsch_MappingTypeA = (Phy_ParametersCommon_Pdsch_MappingTypeA)0;
    }
    if (present_16) {
        value.pdsch_MappingTypeB = (Phy_ParametersCommon_Pdsch_MappingTypeB)0;
    }
    if (present_17) {
        value.interleavingVRB_ToPRB_PDSCH = (Phy_ParametersCommon_InterleavingVRB_ToPRB_PDSCH)0;
    }
    if (present_18) {
        value.interSlotFreqHopping_PUSCH = (Phy_ParametersCommon_InterSlotFreqHopping_PUSCH)0;
    }
    if (present_19) {
        value.type1_PUSCH_RepetitionMultiSlots = (Phy_ParametersCommon_Type1_PUSCH_RepetitionMultiSlots)0;
    }
    if (present_20) {
        value.type2_PUSCH_RepetitionMultiSlots = (Phy_ParametersCommon_Type2_PUSCH_RepetitionMultiSlots)0;
    }
    if (present_21) {
        value.pusch_RepetitionMultiSlots = (Phy_ParametersCommon_Pusch_RepetitionMultiSlots)0;
    }
    if (present_22) {
        value.pdsch_RepetitionMultiSlots = (Phy_ParametersCommon_Pdsch_RepetitionMultiSlots)0;
    }
    if (present_23) {
        value.downlinkSPS = (Phy_ParametersCommon_DownlinkSPS)0;
    }
    if (present_24) {
        value.configuredUL_GrantType1 = (Phy_ParametersCommon_ConfiguredUL_GrantType1)0;
    }
    if (present_25) {
        value.configuredUL_GrantType2 = (Phy_ParametersCommon_ConfiguredUL_GrantType2)0;
    }
    if (present_26) {
        value.pre_EmptIndication_DL = (Phy_ParametersCommon_Pre_EmptIndication_DL)0;
    }
    if (present_27) {
        value.cbg_TransIndication_DL = (Phy_ParametersCommon_Cbg_TransIndication_DL)0;
    }
    if (present_28) {
        value.cbg_TransIndication_UL = (Phy_ParametersCommon_Cbg_TransIndication_UL)0;
    }
    if (present_29) {
        value.cbg_FlushIndication_DL = (Phy_ParametersCommon_Cbg_FlushIndication_DL)0;
    }
    if (present_30) {
        value.dynamicHARQ_ACK_CodeB_CBG_Retx_DL = (Phy_ParametersCommon_DynamicHARQ_ACK_CodeB_CBG_Retx_DL)0;
    }
    if (present_31) {
        value.rateMatchingResrcSetSemi_Static = (Phy_ParametersCommon_RateMatchingResrcSetSemi_Static)0;
    }
    if (present_32) {
        value.rateMatchingResrcSetDynamic = (Phy_ParametersCommon_RateMatchingResrcSetDynamic)0;
    }
    if (present_33) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.bwp_SwitchingDelay = (Phy_ParametersCommon_Bwp_SwitchingDelay)tmp_value;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 13u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[13] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup3 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[3]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup4 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[4]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup5 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[5]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup6 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[6]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup7 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[7]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup8(sub, value.extGroup8) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup8 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[8]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup9(sub, value.extGroup9) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup9 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[9]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup10(sub, value.extGroup10) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup10 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[10]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup11(sub, value.extGroup11) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup11 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[11]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup12(sub, value.extGroup12) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup12 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[12]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersCommon_ExtGroup13(sub, value.extGroup13) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup13 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon(Phy_ParametersCommon& value)
{
    if (value.has_csi_RS_CFRA_ForHO) {
    }
    if (value.has_dynamicPRB_BundlingDL) {
    }
    if (value.has_sp_CSI_ReportPUCCH) {
    }
    if (value.has_sp_CSI_ReportPUSCH) {
    }
    if (value.has_nzp_CSI_RS_IntefMgmt) {
    }
    if (value.has_type2_SP_CSI_Feedback_LongPUCCH) {
    }
    if (value.has_precoderGranularityCORESET) {
    }
    if (value.has_dynamicHARQ_ACK_Codebook) {
    }
    if (value.has_semiStaticHARQ_ACK_Codebook) {
    }
    if (value.has_spatialBundlingHARQ_ACK) {
    }
    if (value.has_dynamicBetaOffsetInd_HARQ_ACK_CSI) {
    }
    if (value.has_pucch_Repetition_F1_3_4) {
    }
    if (value.has_ra_Type0_PUSCH) {
    }
    if (value.has_dynamicSwitchRA_Type0_1_PDSCH) {
    }
    if (value.has_dynamicSwitchRA_Type0_1_PUSCH) {
    }
    if (value.has_pdsch_MappingTypeA) {
    }
    if (value.has_pdsch_MappingTypeB) {
    }
    if (value.has_interleavingVRB_ToPRB_PDSCH) {
    }
    if (value.has_interSlotFreqHopping_PUSCH) {
    }
    if (value.has_type1_PUSCH_RepetitionMultiSlots) {
    }
    if (value.has_type2_PUSCH_RepetitionMultiSlots) {
    }
    if (value.has_pusch_RepetitionMultiSlots) {
    }
    if (value.has_pdsch_RepetitionMultiSlots) {
    }
    if (value.has_downlinkSPS) {
    }
    if (value.has_configuredUL_GrantType1) {
    }
    if (value.has_configuredUL_GrantType2) {
    }
    if (value.has_pre_EmptIndication_DL) {
    }
    if (value.has_cbg_TransIndication_DL) {
    }
    if (value.has_cbg_TransIndication_UL) {
    }
    if (value.has_cbg_FlushIndication_DL) {
    }
    if (value.has_dynamicHARQ_ACK_CodeB_CBG_Retx_DL) {
    }
    if (value.has_rateMatchingResrcSetSemi_Static) {
    }
    if (value.has_rateMatchingResrcSetDynamic) {
    }
    if (value.has_bwp_SwitchingDelay) {
    }
    if (value.has_extGroup1) {
        Free_Phy_ParametersCommon_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_Phy_ParametersCommon_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_Phy_ParametersCommon_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_Phy_ParametersCommon_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_Phy_ParametersCommon_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_Phy_ParametersCommon_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_Phy_ParametersCommon_ExtGroup7(value.extGroup7);
    }
    if (value.has_extGroup8) {
        Free_Phy_ParametersCommon_ExtGroup8(value.extGroup8);
    }
    if (value.has_extGroup9) {
        Free_Phy_ParametersCommon_ExtGroup9(value.extGroup9);
    }
    if (value.has_extGroup10) {
        Free_Phy_ParametersCommon_ExtGroup10(value.extGroup10);
    }
    if (value.has_extGroup11) {
        Free_Phy_ParametersCommon_ExtGroup11(value.extGroup11);
    }
    if (value.has_extGroup12) {
        Free_Phy_ParametersCommon_ExtGroup12(value.extGroup12);
    }
    if (value.has_extGroup13) {
        Free_Phy_ParametersCommon_ExtGroup13(value.extGroup13);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersXDD_Diff_ExtGroup1(Encoder& enc, const Phy_ParametersXDD_Diff_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_dl_SchedulingOffset_PDSCH_TypeA);
    enc.WriteBit(value.has_dl_SchedulingOffset_PDSCH_TypeB);
    enc.WriteBit(value.has_ul_SchedulingOffset);
    if (value.has_dl_SchedulingOffset_PDSCH_TypeA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_SchedulingOffset_PDSCH_TypeA), 0, 0);
    }
    if (value.has_dl_SchedulingOffset_PDSCH_TypeB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_SchedulingOffset_PDSCH_TypeB), 0, 0);
    }
    if (value.has_ul_SchedulingOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_SchedulingOffset), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersXDD_Diff_ExtGroup1(Decoder& dec, Phy_ParametersXDD_Diff_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        value.dl_SchedulingOffset_PDSCH_TypeA = (Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA)0;
    }
    if (present_1) {
        value.dl_SchedulingOffset_PDSCH_TypeB = (Phy_ParametersXDD_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB)0;
    }
    if (present_2) {
        value.ul_SchedulingOffset = (Phy_ParametersXDD_Diff_ExtGroup1_Ul_SchedulingOffset)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersXDD_Diff_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersXDD_Diff_ExtGroup1(Phy_ParametersXDD_Diff_ExtGroup1& value)
{
    if (value.has_dl_SchedulingOffset_PDSCH_TypeA) {
    }
    if (value.has_dl_SchedulingOffset_PDSCH_TypeB) {
    }
    if (value.has_ul_SchedulingOffset) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersXDD_Diff(Encoder& enc, const Phy_ParametersXDD_Diff& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dynamicSFI);
    enc.WriteBit(value.has_twoPUCCH_F0_2_ConsecSymbols);
    enc.WriteBit(value.has_twoDifferentTPC_Loop_PUSCH);
    enc.WriteBit(value.has_twoDifferentTPC_Loop_PUCCH);
    if (value.has_dynamicSFI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicSFI), 0, 0);
    }
    if (value.has_twoPUCCH_F0_2_ConsecSymbols) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_F0_2_ConsecSymbols), 0, 0);
    }
    if (value.has_twoDifferentTPC_Loop_PUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoDifferentTPC_Loop_PUSCH), 0, 0);
    }
    if (value.has_twoDifferentTPC_Loop_PUCCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoDifferentTPC_Loop_PUCCH), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_Phy_ParametersXDD_Diff_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersXDD_Diff(Decoder& dec, Phy_ParametersXDD_Diff& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.dynamicSFI = (Phy_ParametersXDD_Diff_DynamicSFI)0;
    }
    if (present_1) {
        value.twoPUCCH_F0_2_ConsecSymbols = (Phy_ParametersXDD_Diff_TwoPUCCH_F0_2_ConsecSymbols)0;
    }
    if (present_2) {
        value.twoDifferentTPC_Loop_PUSCH = (Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUSCH)0;
    }
    if (present_3) {
        value.twoDifferentTPC_Loop_PUCCH = (Phy_ParametersXDD_Diff_TwoDifferentTPC_Loop_PUCCH)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 1u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[1] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersXDD_Diff_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersXDD_Diff(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersXDD_Diff(Phy_ParametersXDD_Diff& value)
{
    if (value.has_dynamicSFI) {
    }
    if (value.has_twoPUCCH_F0_2_ConsecSymbols) {
    }
    if (value.has_twoDifferentTPC_Loop_PUSCH) {
    }
    if (value.has_twoDifferentTPC_Loop_PUCCH) {
    }
    if (value.has_extGroup1) {
        Free_Phy_ParametersXDD_Diff_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot(Encoder& enc, const Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot& value)
{
    (void)value;
    enc.WriteBit(value.has_sameSymbol);
    enc.WriteBit(value.has_diffSymbol);
    if (value.has_sameSymbol) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sameSymbol), 0, 0);
    }
    if (value.has_diffSymbol) {
        enc.WriteConstrainedInteger((std::int64_t)(value.diffSymbol), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot(Decoder& dec, Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.sameSymbol = (Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_SameSymbol)0;
    }
    if (present_1) {
        value.diffSymbol = (Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_DiffSymbol)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot(Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot& value)
{
    if (value.has_sameSymbol) {
    }
    if (value.has_diffSymbol) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff_ExtGroup1(Encoder& enc, const Phy_ParametersFRX_Diff_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_csi_RS_IM_ReceptionForFeedback);
    enc.WriteBit(value.has_csi_RS_ProcFrameworkForSRS);
    enc.WriteBit(value.has_csi_ReportFramework);
    enc.WriteBit(value.has_mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot);
    enc.WriteBit(value.has_mux_SR_HARQ_ACK_PUCCH);
    enc.WriteBit(value.has_mux_MultipleGroupCtrlCH_Overlap);
    enc.WriteBit(value.has_dl_SchedulingOffset_PDSCH_TypeA);
    enc.WriteBit(value.has_dl_SchedulingOffset_PDSCH_TypeB);
    enc.WriteBit(value.has_ul_SchedulingOffset);
    enc.WriteBit(value.has_dl_64QAM_MCS_TableAlt);
    enc.WriteBit(value.has_ul_64QAM_MCS_TableAlt);
    enc.WriteBit(value.has_cqi_TableAlt);
    enc.WriteBit(value.has_oneFL_DMRS_TwoAdditionalDMRS_UL);
    enc.WriteBit(value.has_twoFL_DMRS_TwoAdditionalDMRS_UL);
    enc.WriteBit(value.has_oneFL_DMRS_ThreeAdditionalDMRS_UL);
    if (value.has_csi_RS_IM_ReceptionForFeedback) {
        Encode_CSI_RS_IM_ReceptionForFeedback(enc, value.csi_RS_IM_ReceptionForFeedback);
    }
    if (value.has_csi_RS_ProcFrameworkForSRS) {
        Encode_CSI_RS_ProcFrameworkForSRS(enc, value.csi_RS_ProcFrameworkForSRS);
    }
    if (value.has_csi_ReportFramework) {
        Encode_CSI_ReportFramework(enc, value.csi_ReportFramework);
    }
    if (value.has_mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot) {
        Encode_Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot(enc, value.mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot);
    }
    if (value.has_mux_SR_HARQ_ACK_PUCCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_SR_HARQ_ACK_PUCCH), 0, 0);
    }
    if (value.has_mux_MultipleGroupCtrlCH_Overlap) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_MultipleGroupCtrlCH_Overlap), 0, 0);
    }
    if (value.has_dl_SchedulingOffset_PDSCH_TypeA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_SchedulingOffset_PDSCH_TypeA), 0, 0);
    }
    if (value.has_dl_SchedulingOffset_PDSCH_TypeB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_SchedulingOffset_PDSCH_TypeB), 0, 0);
    }
    if (value.has_ul_SchedulingOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_SchedulingOffset), 0, 0);
    }
    if (value.has_dl_64QAM_MCS_TableAlt) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_64QAM_MCS_TableAlt), 0, 0);
    }
    if (value.has_ul_64QAM_MCS_TableAlt) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_64QAM_MCS_TableAlt), 0, 0);
    }
    if (value.has_cqi_TableAlt) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cqi_TableAlt), 0, 0);
    }
    if (value.has_oneFL_DMRS_TwoAdditionalDMRS_UL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.oneFL_DMRS_TwoAdditionalDMRS_UL), 0, 0);
    }
    if (value.has_twoFL_DMRS_TwoAdditionalDMRS_UL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoFL_DMRS_TwoAdditionalDMRS_UL), 0, 0);
    }
    if (value.has_oneFL_DMRS_ThreeAdditionalDMRS_UL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.oneFL_DMRS_ThreeAdditionalDMRS_UL), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff_ExtGroup1(Decoder& dec, Phy_ParametersFRX_Diff_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (present_0) {
        if (Decode_CSI_RS_IM_ReceptionForFeedback(dec, value.csi_RS_IM_ReceptionForFeedback) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CSI_RS_ProcFrameworkForSRS(dec, value.csi_RS_ProcFrameworkForSRS) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CSI_ReportFramework(dec, value.csi_ReportFramework) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot(dec, value.mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        value.mux_SR_HARQ_ACK_PUCCH = (Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_PUCCH)0;
    }
    if (present_5) {
        value.mux_MultipleGroupCtrlCH_Overlap = (Phy_ParametersFRX_Diff_ExtGroup1_Mux_MultipleGroupCtrlCH_Overlap)0;
    }
    if (present_6) {
        value.dl_SchedulingOffset_PDSCH_TypeA = (Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeA)0;
    }
    if (present_7) {
        value.dl_SchedulingOffset_PDSCH_TypeB = (Phy_ParametersFRX_Diff_ExtGroup1_Dl_SchedulingOffset_PDSCH_TypeB)0;
    }
    if (present_8) {
        value.ul_SchedulingOffset = (Phy_ParametersFRX_Diff_ExtGroup1_Ul_SchedulingOffset)0;
    }
    if (present_9) {
        value.dl_64QAM_MCS_TableAlt = (Phy_ParametersFRX_Diff_ExtGroup1_Dl_64QAM_MCS_TableAlt)0;
    }
    if (present_10) {
        value.ul_64QAM_MCS_TableAlt = (Phy_ParametersFRX_Diff_ExtGroup1_Ul_64QAM_MCS_TableAlt)0;
    }
    if (present_11) {
        value.cqi_TableAlt = (Phy_ParametersFRX_Diff_ExtGroup1_Cqi_TableAlt)0;
    }
    if (present_12) {
        value.oneFL_DMRS_TwoAdditionalDMRS_UL = (Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_TwoAdditionalDMRS_UL)0;
    }
    if (present_13) {
        value.twoFL_DMRS_TwoAdditionalDMRS_UL = (Phy_ParametersFRX_Diff_ExtGroup1_TwoFL_DMRS_TwoAdditionalDMRS_UL)0;
    }
    if (present_14) {
        value.oneFL_DMRS_ThreeAdditionalDMRS_UL = (Phy_ParametersFRX_Diff_ExtGroup1_OneFL_DMRS_ThreeAdditionalDMRS_UL)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff_ExtGroup1(Phy_ParametersFRX_Diff_ExtGroup1& value)
{
    if (value.has_csi_RS_IM_ReceptionForFeedback) {
        Free_CSI_RS_IM_ReceptionForFeedback(value.csi_RS_IM_ReceptionForFeedback);
    }
    if (value.has_csi_RS_ProcFrameworkForSRS) {
        Free_CSI_RS_ProcFrameworkForSRS(value.csi_RS_ProcFrameworkForSRS);
    }
    if (value.has_csi_ReportFramework) {
        Free_CSI_ReportFramework(value.csi_ReportFramework);
    }
    if (value.has_mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot) {
        Free_Phy_ParametersFRX_Diff_ExtGroup1_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot(value.mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot);
    }
    if (value.has_mux_SR_HARQ_ACK_PUCCH) {
    }
    if (value.has_mux_MultipleGroupCtrlCH_Overlap) {
    }
    if (value.has_dl_SchedulingOffset_PDSCH_TypeA) {
    }
    if (value.has_dl_SchedulingOffset_PDSCH_TypeB) {
    }
    if (value.has_ul_SchedulingOffset) {
    }
    if (value.has_dl_64QAM_MCS_TableAlt) {
    }
    if (value.has_ul_64QAM_MCS_TableAlt) {
    }
    if (value.has_cqi_TableAlt) {
    }
    if (value.has_oneFL_DMRS_TwoAdditionalDMRS_UL) {
    }
    if (value.has_twoFL_DMRS_TwoAdditionalDMRS_UL) {
    }
    if (value.has_oneFL_DMRS_ThreeAdditionalDMRS_UL) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC(Encoder& enc, const Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionMCG_UE), 1, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionSCG_UE), 1, 15);
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC(Decoder& dec, Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionMCG_UE = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionSCG_UE = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC(Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff_ExtGroup2(Encoder& enc, const Phy_ParametersFRX_Diff_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcch_BlindDetectionNRDC);
    enc.WriteBit(value.has_mux_HARQ_ACK_PUSCH_DiffSymbol);
    if (value.has_pdcch_BlindDetectionNRDC) {
        Encode_Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC(enc, value.pdcch_BlindDetectionNRDC);
    }
    if (value.has_mux_HARQ_ACK_PUSCH_DiffSymbol) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_HARQ_ACK_PUSCH_DiffSymbol), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff_ExtGroup2(Decoder& dec, Phy_ParametersFRX_Diff_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC(dec, value.pdcch_BlindDetectionNRDC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.mux_HARQ_ACK_PUSCH_DiffSymbol = (Phy_ParametersFRX_Diff_ExtGroup2_Mux_HARQ_ACK_PUSCH_DiffSymbol)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff_ExtGroup2(Phy_ParametersFRX_Diff_ExtGroup2& value)
{
    if (value.has_pdcch_BlindDetectionNRDC) {
        Free_Phy_ParametersFRX_Diff_ExtGroup2_Pdcch_BlindDetectionNRDC(value.pdcch_BlindDetectionNRDC);
    }
    if (value.has_mux_HARQ_ACK_PUSCH_DiffSymbol) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16(Encoder& enc, const Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumberResWithinSlotAcrossCC_OneFR_r16);
    enc.WriteBit(value.has_maxNumberResAcrossCC_OneFR_r16);
    if (value.has_maxNumberResWithinSlotAcrossCC_OneFR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResWithinSlotAcrossCC_OneFR_r16), 0, 7);
    }
    if (value.has_maxNumberResAcrossCC_OneFR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResAcrossCC_OneFR_r16), 0, 13);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16(Decoder& dec, Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumberResWithinSlotAcrossCC_OneFR_r16 = (Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResWithinSlotAcrossCC_OneFR_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.maxNumberResAcrossCC_OneFR_r16 = (Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16_MaxNumberResAcrossCC_OneFR_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16(Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16& value)
{
    if (value.has_maxNumberResWithinSlotAcrossCC_OneFR_r16) {
    }
    if (value.has_maxNumberResAcrossCC_OneFR_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff_ExtGroup3(Encoder& enc, const Phy_ParametersFRX_Diff_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_type1_HARQ_ACK_Codebook_r16);
    enc.WriteBit(value.has_enhancedPowerControl_r16);
    enc.WriteBit(value.has_simultaneousTCI_ActMultipleCC_r16);
    enc.WriteBit(value.has_simultaneousSpatialRelationMultipleCC_r16);
    enc.WriteBit(value.has_cli_RSSI_FDM_DL_r16);
    enc.WriteBit(value.has_cli_SRS_RSRP_FDM_DL_r16);
    enc.WriteBit(value.has_maxLayersMIMO_Adaptation_r16);
    enc.WriteBit(value.has_aggregationFactorSPS_DL_r16);
    enc.WriteBit(value.has_maxTotalResourcesForOneFreqRange_r16);
    enc.WriteBit(value.has_csi_ReportFrameworkExt_r16);
    if (value.has_type1_HARQ_ACK_Codebook_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type1_HARQ_ACK_Codebook_r16), 0, 0);
    }
    if (value.has_enhancedPowerControl_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedPowerControl_r16), 0, 0);
    }
    if (value.has_simultaneousTCI_ActMultipleCC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousTCI_ActMultipleCC_r16), 0, 0);
    }
    if (value.has_simultaneousSpatialRelationMultipleCC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousSpatialRelationMultipleCC_r16), 0, 0);
    }
    if (value.has_cli_RSSI_FDM_DL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cli_RSSI_FDM_DL_r16), 0, 0);
    }
    if (value.has_cli_SRS_RSRP_FDM_DL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cli_SRS_RSRP_FDM_DL_r16), 0, 0);
    }
    if (value.has_maxLayersMIMO_Adaptation_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxLayersMIMO_Adaptation_r16), 0, 0);
    }
    if (value.has_aggregationFactorSPS_DL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationFactorSPS_DL_r16), 0, 0);
    }
    if (value.has_maxTotalResourcesForOneFreqRange_r16) {
        Encode_Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16(enc, value.maxTotalResourcesForOneFreqRange_r16);
    }
    if (value.has_csi_ReportFrameworkExt_r16) {
        Encode_CSI_ReportFrameworkExt_r16(enc, value.csi_ReportFrameworkExt_r16);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff_ExtGroup3(Decoder& dec, Phy_ParametersFRX_Diff_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (present_0) {
        value.type1_HARQ_ACK_Codebook_r16 = (Phy_ParametersFRX_Diff_ExtGroup3_Type1_HARQ_ACK_Codebook_r16)0;
    }
    if (present_1) {
        value.enhancedPowerControl_r16 = (Phy_ParametersFRX_Diff_ExtGroup3_EnhancedPowerControl_r16)0;
    }
    if (present_2) {
        value.simultaneousTCI_ActMultipleCC_r16 = (Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousTCI_ActMultipleCC_r16)0;
    }
    if (present_3) {
        value.simultaneousSpatialRelationMultipleCC_r16 = (Phy_ParametersFRX_Diff_ExtGroup3_SimultaneousSpatialRelationMultipleCC_r16)0;
    }
    if (present_4) {
        value.cli_RSSI_FDM_DL_r16 = (Phy_ParametersFRX_Diff_ExtGroup3_Cli_RSSI_FDM_DL_r16)0;
    }
    if (present_5) {
        value.cli_SRS_RSRP_FDM_DL_r16 = (Phy_ParametersFRX_Diff_ExtGroup3_Cli_SRS_RSRP_FDM_DL_r16)0;
    }
    if (present_6) {
        value.maxLayersMIMO_Adaptation_r16 = (Phy_ParametersFRX_Diff_ExtGroup3_MaxLayersMIMO_Adaptation_r16)0;
    }
    if (present_7) {
        value.aggregationFactorSPS_DL_r16 = (Phy_ParametersFRX_Diff_ExtGroup3_AggregationFactorSPS_DL_r16)0;
    }
    if (present_8) {
        if (Decode_Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16(dec, value.maxTotalResourcesForOneFreqRange_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_CSI_ReportFrameworkExt_r16(dec, value.csi_ReportFrameworkExt_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff_ExtGroup3(Phy_ParametersFRX_Diff_ExtGroup3& value)
{
    if (value.has_type1_HARQ_ACK_Codebook_r16) {
    }
    if (value.has_enhancedPowerControl_r16) {
    }
    if (value.has_simultaneousTCI_ActMultipleCC_r16) {
    }
    if (value.has_simultaneousSpatialRelationMultipleCC_r16) {
    }
    if (value.has_cli_RSSI_FDM_DL_r16) {
    }
    if (value.has_cli_SRS_RSRP_FDM_DL_r16) {
    }
    if (value.has_maxLayersMIMO_Adaptation_r16) {
    }
    if (value.has_aggregationFactorSPS_DL_r16) {
    }
    if (value.has_maxTotalResourcesForOneFreqRange_r16) {
        Free_Phy_ParametersFRX_Diff_ExtGroup3_MaxTotalResourcesForOneFreqRange_r16(value.maxTotalResourcesForOneFreqRange_r16);
    }
    if (value.has_csi_ReportFrameworkExt_r16) {
        Free_CSI_ReportFrameworkExt_r16(value.csi_ReportFrameworkExt_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff_ExtGroup4(Encoder& enc, const Phy_ParametersFRX_Diff_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_twoTCI_Act_servingCellInCC_List_r16);
    if (value.has_twoTCI_Act_servingCellInCC_List_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoTCI_Act_servingCellInCC_List_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff_ExtGroup4(Decoder& dec, Phy_ParametersFRX_Diff_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.twoTCI_Act_servingCellInCC_List_r16 = (Phy_ParametersFRX_Diff_ExtGroup4_TwoTCI_Act_servingCellInCC_List_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff_ExtGroup4(Phy_ParametersFRX_Diff_ExtGroup4& value)
{
    if (value.has_twoTCI_Act_servingCellInCC_List_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff_ExtGroup5(Encoder& enc, const Phy_ParametersFRX_Diff_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_cri_RI_CQI_WithoutNon_PMI_PortInd_r16);
    if (value.has_cri_RI_CQI_WithoutNon_PMI_PortInd_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cri_RI_CQI_WithoutNon_PMI_PortInd_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff_ExtGroup5(Decoder& dec, Phy_ParametersFRX_Diff_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.cri_RI_CQI_WithoutNon_PMI_PortInd_r16 = (Phy_ParametersFRX_Diff_ExtGroup5_Cri_RI_CQI_WithoutNon_PMI_PortInd_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff_ExtGroup5(Phy_ParametersFRX_Diff_ExtGroup5& value)
{
    if (value.has_cri_RI_CQI_WithoutNon_PMI_PortInd_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff_ExtGroup6(Encoder& enc, const Phy_ParametersFRX_Diff_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17);
    if (value.has_cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff_ExtGroup6(Decoder& dec, Phy_ParametersFRX_Diff_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17 = (Phy_ParametersFRX_Diff_ExtGroup6_Cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff_ExtGroup6(Phy_ParametersFRX_Diff_ExtGroup6& value)
{
    if (value.has_cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff_ExtGroup7(Encoder& enc, const Phy_ParametersFRX_Diff_ExtGroup7& value)
{
    (void)value;
    enc.WriteBit(value.has_multipleCORESET_RedCap_r17);
    if (value.has_multipleCORESET_RedCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipleCORESET_RedCap_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff_ExtGroup7(Decoder& dec, Phy_ParametersFRX_Diff_ExtGroup7& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.multipleCORESET_RedCap_r17 = (Phy_ParametersFRX_Diff_ExtGroup7_MultipleCORESET_RedCap_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff_ExtGroup7(Phy_ParametersFRX_Diff_ExtGroup7& value)
{
    if (value.has_multipleCORESET_RedCap_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFRX_Diff(Encoder& enc, const Phy_ParametersFRX_Diff& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dynamicSFI);
    enc.WriteBit(value.has_dummy1);
    enc.WriteBit(value.has_twoFL_DMRS);
    enc.WriteBit(value.has_dummy2);
    enc.WriteBit(value.has_dummy3);
    enc.WriteBit(value.has_supportedDMRS_TypeDL);
    enc.WriteBit(value.has_supportedDMRS_TypeUL);
    enc.WriteBit(value.has_semiOpenLoopCSI);
    enc.WriteBit(value.has_csi_ReportWithoutPMI);
    enc.WriteBit(value.has_csi_ReportWithoutCQI);
    enc.WriteBit(value.has_onePortsPTRS);
    enc.WriteBit(value.has_twoPUCCH_F0_2_ConsecSymbols);
    enc.WriteBit(value.has_pucch_F2_WithFH);
    enc.WriteBit(value.has_pucch_F3_WithFH);
    enc.WriteBit(value.has_pucch_F4_WithFH);
    enc.WriteBit(value.has_pucch_F0_2WithoutFH);
    enc.WriteBit(value.has_pucch_F1_3_4WithoutFH);
    enc.WriteBit(value.has_mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot);
    enc.WriteBit(value.has_uci_CodeBlockSegmentation);
    enc.WriteBit(value.has_onePUCCH_LongAndShortFormat);
    enc.WriteBit(value.has_twoPUCCH_AnyOthersInSlot);
    enc.WriteBit(value.has_intraSlotFreqHopping_PUSCH);
    enc.WriteBit(value.has_pusch_LBRM);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA);
    enc.WriteBit(value.has_tpc_PUSCH_RNTI);
    enc.WriteBit(value.has_tpc_PUCCH_RNTI);
    enc.WriteBit(value.has_tpc_SRS_RNTI);
    enc.WriteBit(value.has_absoluteTPC_Command);
    enc.WriteBit(value.has_twoDifferentTPC_Loop_PUSCH);
    enc.WriteBit(value.has_twoDifferentTPC_Loop_PUCCH);
    enc.WriteBit(value.has_pusch_HalfPi_BPSK);
    enc.WriteBit(value.has_pucch_F3_4_HalfPi_BPSK);
    enc.WriteBit(value.has_almostContiguousCP_OFDM_UL);
    enc.WriteBit(value.has_sp_CSI_RS);
    enc.WriteBit(value.has_sp_CSI_IM);
    enc.WriteBit(value.has_tdd_MultiDL_UL_SwitchPerSlot);
    enc.WriteBit(value.has_multipleCORESET);
    if (value.has_dynamicSFI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicSFI), 0, 0);
    }
    if (value.has_dummy1) {
        enc.WriteFixedBitString(value.dummy1.bytes, value.dummy1.bitLength, 2, 2);
    }
    if (value.has_twoFL_DMRS) {
        enc.WriteFixedBitString(value.twoFL_DMRS.bytes, value.twoFL_DMRS.bitLength, 2, 2);
    }
    if (value.has_dummy2) {
        enc.WriteFixedBitString(value.dummy2.bytes, value.dummy2.bitLength, 2, 2);
    }
    if (value.has_dummy3) {
        enc.WriteFixedBitString(value.dummy3.bytes, value.dummy3.bitLength, 2, 2);
    }
    if (value.has_supportedDMRS_TypeDL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportedDMRS_TypeDL), 0, 1);
    }
    if (value.has_supportedDMRS_TypeUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportedDMRS_TypeUL), 0, 1);
    }
    if (value.has_semiOpenLoopCSI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.semiOpenLoopCSI), 0, 0);
    }
    if (value.has_csi_ReportWithoutPMI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_ReportWithoutPMI), 0, 0);
    }
    if (value.has_csi_ReportWithoutCQI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_ReportWithoutCQI), 0, 0);
    }
    if (value.has_onePortsPTRS) {
        enc.WriteFixedBitString(value.onePortsPTRS.bytes, value.onePortsPTRS.bitLength, 2, 2);
    }
    if (value.has_twoPUCCH_F0_2_ConsecSymbols) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_F0_2_ConsecSymbols), 0, 0);
    }
    if (value.has_pucch_F2_WithFH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_F2_WithFH), 0, 0);
    }
    if (value.has_pucch_F3_WithFH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_F3_WithFH), 0, 0);
    }
    if (value.has_pucch_F4_WithFH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_F4_WithFH), 0, 0);
    }
    if (value.has_pucch_F0_2WithoutFH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_F0_2WithoutFH), 0, 0);
    }
    if (value.has_pucch_F1_3_4WithoutFH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_F1_3_4WithoutFH), 0, 0);
    }
    if (value.has_mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot), 0, 0);
    }
    if (value.has_uci_CodeBlockSegmentation) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uci_CodeBlockSegmentation), 0, 0);
    }
    if (value.has_onePUCCH_LongAndShortFormat) {
        enc.WriteConstrainedInteger((std::int64_t)(value.onePUCCH_LongAndShortFormat), 0, 0);
    }
    if (value.has_twoPUCCH_AnyOthersInSlot) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_AnyOthersInSlot), 0, 0);
    }
    if (value.has_intraSlotFreqHopping_PUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraSlotFreqHopping_PUSCH), 0, 0);
    }
    if (value.has_pusch_LBRM) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_LBRM), 0, 0);
    }
    if (value.has_pdcch_BlindDetectionCA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA), 4, 16);
    }
    if (value.has_tpc_PUSCH_RNTI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_PUSCH_RNTI), 0, 0);
    }
    if (value.has_tpc_PUCCH_RNTI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_PUCCH_RNTI), 0, 0);
    }
    if (value.has_tpc_SRS_RNTI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_SRS_RNTI), 0, 0);
    }
    if (value.has_absoluteTPC_Command) {
        enc.WriteConstrainedInteger((std::int64_t)(value.absoluteTPC_Command), 0, 0);
    }
    if (value.has_twoDifferentTPC_Loop_PUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoDifferentTPC_Loop_PUSCH), 0, 0);
    }
    if (value.has_twoDifferentTPC_Loop_PUCCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoDifferentTPC_Loop_PUCCH), 0, 0);
    }
    if (value.has_pusch_HalfPi_BPSK) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_HalfPi_BPSK), 0, 0);
    }
    if (value.has_pucch_F3_4_HalfPi_BPSK) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_F3_4_HalfPi_BPSK), 0, 0);
    }
    if (value.has_almostContiguousCP_OFDM_UL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.almostContiguousCP_OFDM_UL), 0, 0);
    }
    if (value.has_sp_CSI_RS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_CSI_RS), 0, 0);
    }
    if (value.has_sp_CSI_IM) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_CSI_IM), 0, 0);
    }
    if (value.has_tdd_MultiDL_UL_SwitchPerSlot) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tdd_MultiDL_UL_SwitchPerSlot), 0, 0);
    }
    if (value.has_multipleCORESET) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipleCORESET), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(7u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        enc.WriteBit(value.has_extGroup6);
        enc.WriteBit(value.has_extGroup7);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_Phy_ParametersFRX_Diff_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_Phy_ParametersFRX_Diff_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_Phy_ParametersFRX_Diff_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_Phy_ParametersFRX_Diff_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_Phy_ParametersFRX_Diff_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_Phy_ParametersFRX_Diff_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_Phy_ParametersFRX_Diff_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFRX_Diff(Decoder& dec, Phy_ParametersFRX_Diff& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    bool present_17 = false;
    bool present_18 = false;
    bool present_19 = false;
    bool present_20 = false;
    bool present_21 = false;
    bool present_22 = false;
    bool present_23 = false;
    bool present_24 = false;
    bool present_25 = false;
    bool present_26 = false;
    bool present_27 = false;
    bool present_28 = false;
    bool present_29 = false;
    bool present_30 = false;
    bool present_31 = false;
    bool present_32 = false;
    bool present_33 = false;
    bool present_34 = false;
    bool present_35 = false;
    bool present_36 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (!dec.ReadBit(present_17)) { goto fail; }
    if (!dec.ReadBit(present_18)) { goto fail; }
    if (!dec.ReadBit(present_19)) { goto fail; }
    if (!dec.ReadBit(present_20)) { goto fail; }
    if (!dec.ReadBit(present_21)) { goto fail; }
    if (!dec.ReadBit(present_22)) { goto fail; }
    if (!dec.ReadBit(present_23)) { goto fail; }
    if (!dec.ReadBit(present_24)) { goto fail; }
    if (!dec.ReadBit(present_25)) { goto fail; }
    if (!dec.ReadBit(present_26)) { goto fail; }
    if (!dec.ReadBit(present_27)) { goto fail; }
    if (!dec.ReadBit(present_28)) { goto fail; }
    if (!dec.ReadBit(present_29)) { goto fail; }
    if (!dec.ReadBit(present_30)) { goto fail; }
    if (!dec.ReadBit(present_31)) { goto fail; }
    if (!dec.ReadBit(present_32)) { goto fail; }
    if (!dec.ReadBit(present_33)) { goto fail; }
    if (!dec.ReadBit(present_34)) { goto fail; }
    if (!dec.ReadBit(present_35)) { goto fail; }
    if (!dec.ReadBit(present_36)) { goto fail; }
    if (present_0) {
        value.dynamicSFI = (Phy_ParametersFRX_Diff_DynamicSFI)0;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.dummy1.bytes = string_bytes;
        value.dummy1.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.twoFL_DMRS.bytes = string_bytes;
        value.twoFL_DMRS.bitLength = string_length;
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.dummy2.bytes = string_bytes;
        value.dummy2.bitLength = string_length;
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.dummy3.bytes = string_bytes;
        value.dummy3.bitLength = string_length;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.supportedDMRS_TypeDL = (Phy_ParametersFRX_Diff_SupportedDMRS_TypeDL)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.supportedDMRS_TypeUL = (Phy_ParametersFRX_Diff_SupportedDMRS_TypeUL)tmp_value;
    }
    if (present_7) {
        value.semiOpenLoopCSI = (Phy_ParametersFRX_Diff_SemiOpenLoopCSI)0;
    }
    if (present_8) {
        value.csi_ReportWithoutPMI = (Phy_ParametersFRX_Diff_Csi_ReportWithoutPMI)0;
    }
    if (present_9) {
        value.csi_ReportWithoutCQI = (Phy_ParametersFRX_Diff_Csi_ReportWithoutCQI)0;
    }
    if (present_10) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.onePortsPTRS.bytes = string_bytes;
        value.onePortsPTRS.bitLength = string_length;
    }
    if (present_11) {
        value.twoPUCCH_F0_2_ConsecSymbols = (Phy_ParametersFRX_Diff_TwoPUCCH_F0_2_ConsecSymbols)0;
    }
    if (present_12) {
        value.pucch_F2_WithFH = (Phy_ParametersFRX_Diff_Pucch_F2_WithFH)0;
    }
    if (present_13) {
        value.pucch_F3_WithFH = (Phy_ParametersFRX_Diff_Pucch_F3_WithFH)0;
    }
    if (present_14) {
        value.pucch_F4_WithFH = (Phy_ParametersFRX_Diff_Pucch_F4_WithFH)0;
    }
    if (present_15) {
        value.pucch_F0_2WithoutFH = (Phy_ParametersFRX_Diff_Pucch_F0_2WithoutFH)0;
    }
    if (present_16) {
        value.pucch_F1_3_4WithoutFH = (Phy_ParametersFRX_Diff_Pucch_F1_3_4WithoutFH)0;
    }
    if (present_17) {
        value.mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot = (Phy_ParametersFRX_Diff_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot)0;
    }
    if (present_18) {
        value.uci_CodeBlockSegmentation = (Phy_ParametersFRX_Diff_Uci_CodeBlockSegmentation)0;
    }
    if (present_19) {
        value.onePUCCH_LongAndShortFormat = (Phy_ParametersFRX_Diff_OnePUCCH_LongAndShortFormat)0;
    }
    if (present_20) {
        value.twoPUCCH_AnyOthersInSlot = (Phy_ParametersFRX_Diff_TwoPUCCH_AnyOthersInSlot)0;
    }
    if (present_21) {
        value.intraSlotFreqHopping_PUSCH = (Phy_ParametersFRX_Diff_IntraSlotFreqHopping_PUSCH)0;
    }
    if (present_22) {
        value.pusch_LBRM = (Phy_ParametersFRX_Diff_Pusch_LBRM)0;
    }
    if (present_23) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 16, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA = (int64_t)tmp_value;
    }
    if (present_24) {
        value.tpc_PUSCH_RNTI = (Phy_ParametersFRX_Diff_Tpc_PUSCH_RNTI)0;
    }
    if (present_25) {
        value.tpc_PUCCH_RNTI = (Phy_ParametersFRX_Diff_Tpc_PUCCH_RNTI)0;
    }
    if (present_26) {
        value.tpc_SRS_RNTI = (Phy_ParametersFRX_Diff_Tpc_SRS_RNTI)0;
    }
    if (present_27) {
        value.absoluteTPC_Command = (Phy_ParametersFRX_Diff_AbsoluteTPC_Command)0;
    }
    if (present_28) {
        value.twoDifferentTPC_Loop_PUSCH = (Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUSCH)0;
    }
    if (present_29) {
        value.twoDifferentTPC_Loop_PUCCH = (Phy_ParametersFRX_Diff_TwoDifferentTPC_Loop_PUCCH)0;
    }
    if (present_30) {
        value.pusch_HalfPi_BPSK = (Phy_ParametersFRX_Diff_Pusch_HalfPi_BPSK)0;
    }
    if (present_31) {
        value.pucch_F3_4_HalfPi_BPSK = (Phy_ParametersFRX_Diff_Pucch_F3_4_HalfPi_BPSK)0;
    }
    if (present_32) {
        value.almostContiguousCP_OFDM_UL = (Phy_ParametersFRX_Diff_AlmostContiguousCP_OFDM_UL)0;
    }
    if (present_33) {
        value.sp_CSI_RS = (Phy_ParametersFRX_Diff_Sp_CSI_RS)0;
    }
    if (present_34) {
        value.sp_CSI_IM = (Phy_ParametersFRX_Diff_Sp_CSI_IM)0;
    }
    if (present_35) {
        value.tdd_MultiDL_UL_SwitchPerSlot = (Phy_ParametersFRX_Diff_Tdd_MultiDL_UL_SwitchPerSlot)0;
    }
    if (present_36) {
        value.multipleCORESET = (Phy_ParametersFRX_Diff_MultipleCORESET)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 7u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[7] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFRX_Diff_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFRX_Diff_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFRX_Diff_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup3 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[3]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFRX_Diff_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup4 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[4]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFRX_Diff_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup5 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[5]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFRX_Diff_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup6 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[6]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFRX_Diff_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup7 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFRX_Diff(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFRX_Diff(Phy_ParametersFRX_Diff& value)
{
    if (value.has_dynamicSFI) {
    }
    if (value.has_dummy1) {
        std::free(value.dummy1.bytes);
        value.dummy1.bytes = nullptr;
        value.dummy1.bitLength = 0;
    }
    if (value.has_twoFL_DMRS) {
        std::free(value.twoFL_DMRS.bytes);
        value.twoFL_DMRS.bytes = nullptr;
        value.twoFL_DMRS.bitLength = 0;
    }
    if (value.has_dummy2) {
        std::free(value.dummy2.bytes);
        value.dummy2.bytes = nullptr;
        value.dummy2.bitLength = 0;
    }
    if (value.has_dummy3) {
        std::free(value.dummy3.bytes);
        value.dummy3.bytes = nullptr;
        value.dummy3.bitLength = 0;
    }
    if (value.has_supportedDMRS_TypeDL) {
    }
    if (value.has_supportedDMRS_TypeUL) {
    }
    if (value.has_semiOpenLoopCSI) {
    }
    if (value.has_csi_ReportWithoutPMI) {
    }
    if (value.has_csi_ReportWithoutCQI) {
    }
    if (value.has_onePortsPTRS) {
        std::free(value.onePortsPTRS.bytes);
        value.onePortsPTRS.bytes = nullptr;
        value.onePortsPTRS.bitLength = 0;
    }
    if (value.has_twoPUCCH_F0_2_ConsecSymbols) {
    }
    if (value.has_pucch_F2_WithFH) {
    }
    if (value.has_pucch_F3_WithFH) {
    }
    if (value.has_pucch_F4_WithFH) {
    }
    if (value.has_pucch_F0_2WithoutFH) {
    }
    if (value.has_pucch_F1_3_4WithoutFH) {
    }
    if (value.has_mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot) {
    }
    if (value.has_uci_CodeBlockSegmentation) {
    }
    if (value.has_onePUCCH_LongAndShortFormat) {
    }
    if (value.has_twoPUCCH_AnyOthersInSlot) {
    }
    if (value.has_intraSlotFreqHopping_PUSCH) {
    }
    if (value.has_pusch_LBRM) {
    }
    if (value.has_pdcch_BlindDetectionCA) {
    }
    if (value.has_tpc_PUSCH_RNTI) {
    }
    if (value.has_tpc_PUCCH_RNTI) {
    }
    if (value.has_tpc_SRS_RNTI) {
    }
    if (value.has_absoluteTPC_Command) {
    }
    if (value.has_twoDifferentTPC_Loop_PUSCH) {
    }
    if (value.has_twoDifferentTPC_Loop_PUCCH) {
    }
    if (value.has_pusch_HalfPi_BPSK) {
    }
    if (value.has_pucch_F3_4_HalfPi_BPSK) {
    }
    if (value.has_almostContiguousCP_OFDM_UL) {
    }
    if (value.has_sp_CSI_RS) {
    }
    if (value.has_sp_CSI_IM) {
    }
    if (value.has_tdd_MultiDL_UL_SwitchPerSlot) {
    }
    if (value.has_multipleCORESET) {
    }
    if (value.has_extGroup1) {
        Free_Phy_ParametersFRX_Diff_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_Phy_ParametersFRX_Diff_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_Phy_ParametersFRX_Diff_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_Phy_ParametersFRX_Diff_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_Phy_ParametersFRX_Diff_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_Phy_ParametersFRX_Diff_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_Phy_ParametersFRX_Diff_ExtGroup7(value.extGroup7);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFR1_ExtGroup1(Encoder& enc, const Phy_ParametersFR1_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_pdsch_RE_MappingFR1_PerSlot);
    if (value.has_pdsch_RE_MappingFR1_PerSlot) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_RE_MappingFR1_PerSlot), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFR1_ExtGroup1(Decoder& dec, Phy_ParametersFR1_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdsch_RE_MappingFR1_PerSlot = (Phy_ParametersFR1_ExtGroup1_Pdsch_RE_MappingFR1_PerSlot)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFR1_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFR1_ExtGroup1(Phy_ParametersFR1_ExtGroup1& value)
{
    if (value.has_pdsch_RE_MappingFR1_PerSlot) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFR1_ExtGroup2(Encoder& enc, const Phy_ParametersFR1_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcch_MonitoringSingleSpanFirst4Sym_r16);
    if (value.has_pdcch_MonitoringSingleSpanFirst4Sym_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringSingleSpanFirst4Sym_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFR1_ExtGroup2(Decoder& dec, Phy_ParametersFR1_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.pdcch_MonitoringSingleSpanFirst4Sym_r16 = (Phy_ParametersFR1_ExtGroup2_Pdcch_MonitoringSingleSpanFirst4Sym_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFR1_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFR1_ExtGroup2(Phy_ParametersFR1_ExtGroup2& value)
{
    if (value.has_pdcch_MonitoringSingleSpanFirst4Sym_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFR1_ExtGroup3(Encoder& enc, const Phy_ParametersFR1_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_k1_RangeExtensionATG_r18);
    enc.WriteBit(value.has_maxHARQ_ProcessNumberATG_r18);
    enc.WriteBit(value.has_uplinkPreCompensationATG_r18);
    enc.WriteBit(value.has_advReceiver_MU_MIMO_r18);
    enc.WriteBit(value.has_deltaPowerClassReporting_r18);
    if (value.has_k1_RangeExtensionATG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.k1_RangeExtensionATG_r18), 0, 0);
    }
    if (value.has_maxHARQ_ProcessNumberATG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxHARQ_ProcessNumberATG_r18), 0, 2);
    }
    if (value.has_uplinkPreCompensationATG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkPreCompensationATG_r18), 0, 0);
    }
    if (value.has_advReceiver_MU_MIMO_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.advReceiver_MU_MIMO_r18), 0, 0);
    }
    if (value.has_deltaPowerClassReporting_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.deltaPowerClassReporting_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFR1_ExtGroup3(Decoder& dec, Phy_ParametersFR1_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (present_0) {
        value.k1_RangeExtensionATG_r18 = (Phy_ParametersFR1_ExtGroup3_K1_RangeExtensionATG_r18)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxHARQ_ProcessNumberATG_r18 = (Phy_ParametersFR1_ExtGroup3_MaxHARQ_ProcessNumberATG_r18)tmp_value;
    }
    if (present_2) {
        value.uplinkPreCompensationATG_r18 = (Phy_ParametersFR1_ExtGroup3_UplinkPreCompensationATG_r18)0;
    }
    if (present_3) {
        value.advReceiver_MU_MIMO_r18 = (Phy_ParametersFR1_ExtGroup3_AdvReceiver_MU_MIMO_r18)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.deltaPowerClassReporting_r18 = (Phy_ParametersFR1_ExtGroup3_DeltaPowerClassReporting_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFR1_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFR1_ExtGroup3(Phy_ParametersFR1_ExtGroup3& value)
{
    if (value.has_k1_RangeExtensionATG_r18) {
    }
    if (value.has_maxHARQ_ProcessNumberATG_r18) {
    }
    if (value.has_uplinkPreCompensationATG_r18) {
    }
    if (value.has_advReceiver_MU_MIMO_r18) {
    }
    if (value.has_deltaPowerClassReporting_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFR1(Encoder& enc, const Phy_ParametersFR1& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pdcch_MonitoringSingleOccasion);
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_pdsch_256QAM_FR1);
    enc.WriteBit(value.has_pdsch_RE_MappingFR1_PerSymbol);
    if (value.has_pdcch_MonitoringSingleOccasion) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringSingleOccasion), 0, 0);
    }
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 0);
    }
    if (value.has_pdsch_256QAM_FR1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_256QAM_FR1), 0, 0);
    }
    if (value.has_pdsch_RE_MappingFR1_PerSymbol) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_RE_MappingFR1_PerSymbol), 0, 1);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_Phy_ParametersFR1_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_Phy_ParametersFR1_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_Phy_ParametersFR1_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFR1(Decoder& dec, Phy_ParametersFR1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.pdcch_MonitoringSingleOccasion = (Phy_ParametersFR1_Pdcch_MonitoringSingleOccasion)0;
    }
    if (present_1) {
        value.scs_60kHz = (Phy_ParametersFR1_Scs_60kHz)0;
    }
    if (present_2) {
        value.pdsch_256QAM_FR1 = (Phy_ParametersFR1_Pdsch_256QAM_FR1)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdsch_RE_MappingFR1_PerSymbol = (Phy_ParametersFR1_Pdsch_RE_MappingFR1_PerSymbol)tmp_value;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 3u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[3] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFR1_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFR1_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFR1_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup3 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFR1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFR1(Phy_ParametersFR1& value)
{
    if (value.has_pdcch_MonitoringSingleOccasion) {
    }
    if (value.has_scs_60kHz) {
    }
    if (value.has_pdsch_256QAM_FR1) {
    }
    if (value.has_pdsch_RE_MappingFR1_PerSymbol) {
    }
    if (value.has_extGroup1) {
        Free_Phy_ParametersFR1_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_Phy_ParametersFR1_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_Phy_ParametersFR1_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFR2_ExtGroup1(Encoder& enc, const Phy_ParametersFR2_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_pCell_FR2);
    enc.WriteBit(value.has_pdsch_RE_MappingFR2_PerSlot);
    if (value.has_pCell_FR2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pCell_FR2), 0, 0);
    }
    if (value.has_pdsch_RE_MappingFR2_PerSlot) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_RE_MappingFR2_PerSlot), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFR2_ExtGroup1(Decoder& dec, Phy_ParametersFR2_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.pCell_FR2 = (Phy_ParametersFR2_ExtGroup1_PCell_FR2)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdsch_RE_MappingFR2_PerSlot = (Phy_ParametersFR2_ExtGroup1_Pdsch_RE_MappingFR2_PerSlot)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFR2_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFR2_ExtGroup1(Phy_ParametersFR2_ExtGroup1& value)
{
    if (value.has_pCell_FR2) {
    }
    if (value.has_pdsch_RE_MappingFR2_PerSlot) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFR2_ExtGroup2(Encoder& enc, const Phy_ParametersFR2_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_defaultSpatialRelationPathlossRS_r16);
    enc.WriteBit(value.has_spatialRelationUpdateAP_SRS_r16);
    enc.WriteBit(value.has_maxNumberSRS_PosSpatialRelationsAllServingCells_r16);
    if (value.has_defaultSpatialRelationPathlossRS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.defaultSpatialRelationPathlossRS_r16), 0, 0);
    }
    if (value.has_spatialRelationUpdateAP_SRS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spatialRelationUpdateAP_SRS_r16), 0, 0);
    }
    if (value.has_maxNumberSRS_PosSpatialRelationsAllServingCells_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_PosSpatialRelationsAllServingCells_r16), 0, 5);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFR2_ExtGroup2(Decoder& dec, Phy_ParametersFR2_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        value.defaultSpatialRelationPathlossRS_r16 = (Phy_ParametersFR2_ExtGroup2_DefaultSpatialRelationPathlossRS_r16)0;
    }
    if (present_1) {
        value.spatialRelationUpdateAP_SRS_r16 = (Phy_ParametersFR2_ExtGroup2_SpatialRelationUpdateAP_SRS_r16)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberSRS_PosSpatialRelationsAllServingCells_r16 = (Phy_ParametersFR2_ExtGroup2_MaxNumberSRS_PosSpatialRelationsAllServingCells_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFR2_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFR2_ExtGroup2(Phy_ParametersFR2_ExtGroup2& value)
{
    if (value.has_defaultSpatialRelationPathlossRS_r16) {
    }
    if (value.has_spatialRelationUpdateAP_SRS_r16) {
    }
    if (value.has_maxNumberSRS_PosSpatialRelationsAllServingCells_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersFR2(Encoder& enc, const Phy_ParametersFR2& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_pdsch_RE_MappingFR2_PerSymbol);
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    if (value.has_pdsch_RE_MappingFR2_PerSymbol) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_RE_MappingFR2_PerSymbol), 0, 1);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_Phy_ParametersFR2_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_Phy_ParametersFR2_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersFR2(Decoder& dec, Phy_ParametersFR2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.dummy = (Phy_ParametersFR2_Dummy)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdsch_RE_MappingFR2_PerSymbol = (Phy_ParametersFR2_Pdsch_RE_MappingFR2_PerSymbol)tmp_value;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 2u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[2] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFR2_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersFR2_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersFR2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersFR2(Phy_ParametersFR2& value)
{
    if (value.has_dummy) {
    }
    if (value.has_pdsch_RE_MappingFR2_PerSymbol) {
    }
    if (value.has_extGroup1) {
        Free_Phy_ParametersFR2_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_Phy_ParametersFR2_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_Parameters(Encoder& enc, const Phy_Parameters& value)
{
    (void)value;
    enc.WriteBit(value.has_phy_ParametersCommon);
    enc.WriteBit(value.has_phy_ParametersXDD_Diff);
    enc.WriteBit(value.has_phy_ParametersFRX_Diff);
    enc.WriteBit(value.has_phy_ParametersFR1);
    enc.WriteBit(value.has_phy_ParametersFR2);
    if (value.has_phy_ParametersCommon) {
        Encode_Phy_ParametersCommon(enc, value.phy_ParametersCommon);
    }
    if (value.has_phy_ParametersXDD_Diff) {
        Encode_Phy_ParametersXDD_Diff(enc, value.phy_ParametersXDD_Diff);
    }
    if (value.has_phy_ParametersFRX_Diff) {
        Encode_Phy_ParametersFRX_Diff(enc, value.phy_ParametersFRX_Diff);
    }
    if (value.has_phy_ParametersFR1) {
        Encode_Phy_ParametersFR1(enc, value.phy_ParametersFR1);
    }
    if (value.has_phy_ParametersFR2) {
        Encode_Phy_ParametersFR2(enc, value.phy_ParametersFR2);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_Parameters(Decoder& dec, Phy_Parameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (present_0) {
        if (Decode_Phy_ParametersCommon(dec, value.phy_ParametersCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_Phy_ParametersXDD_Diff(dec, value.phy_ParametersXDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_Phy_ParametersFRX_Diff(dec, value.phy_ParametersFRX_Diff) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_Phy_ParametersFR1(dec, value.phy_ParametersFR1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_Phy_ParametersFR2(dec, value.phy_ParametersFR2) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_Parameters(Phy_Parameters& value)
{
    if (value.has_phy_ParametersCommon) {
        Free_Phy_ParametersCommon(value.phy_ParametersCommon);
    }
    if (value.has_phy_ParametersXDD_Diff) {
        Free_Phy_ParametersXDD_Diff(value.phy_ParametersXDD_Diff);
    }
    if (value.has_phy_ParametersFRX_Diff) {
        Free_Phy_ParametersFRX_Diff(value.phy_ParametersFRX_Diff);
    }
    if (value.has_phy_ParametersFR1) {
        Free_Phy_ParametersFR1(value.phy_ParametersFR1);
    }
    if (value.has_phy_ParametersFR2) {
        Free_Phy_ParametersFR2(value.phy_ParametersFR2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SON_Parameters_r16_ExtGroup1(Encoder& enc, const SON_Parameters_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_rlfReportCHO_r17);
    enc.WriteBit(value.has_rlfReportDAPS_r17);
    enc.WriteBit(value.has_success_HO_Report_r17);
    enc.WriteBit(value.has_twoStepRACH_Report_r17);
    enc.WriteBit(value.has_pscell_MHI_Report_r17);
    enc.WriteBit(value.has_onDemandSI_Report_r17);
    if (value.has_rlfReportCHO_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rlfReportCHO_r17), 0, 0);
    }
    if (value.has_rlfReportDAPS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rlfReportDAPS_r17), 0, 0);
    }
    if (value.has_success_HO_Report_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.success_HO_Report_r17), 0, 0);
    }
    if (value.has_twoStepRACH_Report_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoStepRACH_Report_r17), 0, 0);
    }
    if (value.has_pscell_MHI_Report_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pscell_MHI_Report_r17), 0, 0);
    }
    if (value.has_onDemandSI_Report_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.onDemandSI_Report_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SON_Parameters_r16_ExtGroup1(Decoder& dec, SON_Parameters_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (present_0) {
        value.rlfReportCHO_r17 = (SON_Parameters_r16_ExtGroup1_RlfReportCHO_r17)0;
    }
    if (present_1) {
        value.rlfReportDAPS_r17 = (SON_Parameters_r16_ExtGroup1_RlfReportDAPS_r17)0;
    }
    if (present_2) {
        value.success_HO_Report_r17 = (SON_Parameters_r16_ExtGroup1_Success_HO_Report_r17)0;
    }
    if (present_3) {
        value.twoStepRACH_Report_r17 = (SON_Parameters_r16_ExtGroup1_TwoStepRACH_Report_r17)0;
    }
    if (present_4) {
        value.pscell_MHI_Report_r17 = (SON_Parameters_r16_ExtGroup1_Pscell_MHI_Report_r17)0;
    }
    if (present_5) {
        value.onDemandSI_Report_r17 = (SON_Parameters_r16_ExtGroup1_OnDemandSI_Report_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SON_Parameters_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SON_Parameters_r16_ExtGroup1(SON_Parameters_r16_ExtGroup1& value)
{
    if (value.has_rlfReportCHO_r17) {
    }
    if (value.has_rlfReportDAPS_r17) {
    }
    if (value.has_success_HO_Report_r17) {
    }
    if (value.has_twoStepRACH_Report_r17) {
    }
    if (value.has_pscell_MHI_Report_r17) {
    }
    if (value.has_onDemandSI_Report_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SON_Parameters_r16_ExtGroup2(Encoder& enc, const SON_Parameters_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_spr_Report_r18);
    enc.WriteBit(value.has_successIRAT_HO_Report_r18);
    if (value.has_spr_Report_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spr_Report_r18), 0, 0);
    }
    if (value.has_successIRAT_HO_Report_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.successIRAT_HO_Report_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SON_Parameters_r16_ExtGroup2(Decoder& dec, SON_Parameters_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.spr_Report_r18 = (SON_Parameters_r16_ExtGroup2_Spr_Report_r18)0;
    }
    if (present_1) {
        value.successIRAT_HO_Report_r18 = (SON_Parameters_r16_ExtGroup2_SuccessIRAT_HO_Report_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SON_Parameters_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SON_Parameters_r16_ExtGroup2(SON_Parameters_r16_ExtGroup2& value)
{
    if (value.has_spr_Report_r18) {
    }
    if (value.has_successIRAT_HO_Report_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SON_Parameters_r16(Encoder& enc, const SON_Parameters_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rach_Report_r16);
    if (value.has_rach_Report_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rach_Report_r16), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SON_Parameters_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SON_Parameters_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SON_Parameters_r16(Decoder& dec, SON_Parameters_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.rach_Report_r16 = (SON_Parameters_r16_Rach_Report_r16)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 2u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[2] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_SON_Parameters_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_SON_Parameters_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SON_Parameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SON_Parameters_r16(SON_Parameters_r16& value)
{
    if (value.has_rach_Report_r16) {
    }
    if (value.has_extGroup1) {
        Free_SON_Parameters_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SON_Parameters_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_BasedPerfMeas_Parameters_r16_ExtGroup1(Encoder& enc, const UE_BasedPerfMeas_Parameters_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_sigBasedLogMDT_OverrideProtect_r17);
    enc.WriteBit(value.has_multipleCEF_Report_r17);
    enc.WriteBit(value.has_excessPacketDelay_r17);
    enc.WriteBit(value.has_earlyMeasLog_r17);
    if (value.has_sigBasedLogMDT_OverrideProtect_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sigBasedLogMDT_OverrideProtect_r17), 0, 0);
    }
    if (value.has_multipleCEF_Report_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipleCEF_Report_r17), 0, 0);
    }
    if (value.has_excessPacketDelay_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.excessPacketDelay_r17), 0, 0);
    }
    if (value.has_earlyMeasLog_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.earlyMeasLog_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_UE_BasedPerfMeas_Parameters_r16_ExtGroup1(Decoder& dec, UE_BasedPerfMeas_Parameters_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.sigBasedLogMDT_OverrideProtect_r17 = (UE_BasedPerfMeas_Parameters_r16_ExtGroup1_SigBasedLogMDT_OverrideProtect_r17)0;
    }
    if (present_1) {
        value.multipleCEF_Report_r17 = (UE_BasedPerfMeas_Parameters_r16_ExtGroup1_MultipleCEF_Report_r17)0;
    }
    if (present_2) {
        value.excessPacketDelay_r17 = (UE_BasedPerfMeas_Parameters_r16_ExtGroup1_ExcessPacketDelay_r17)0;
    }
    if (present_3) {
        value.earlyMeasLog_r17 = (UE_BasedPerfMeas_Parameters_r16_ExtGroup1_EarlyMeasLog_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_BasedPerfMeas_Parameters_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_BasedPerfMeas_Parameters_r16_ExtGroup1(UE_BasedPerfMeas_Parameters_r16_ExtGroup1& value)
{
    if (value.has_sigBasedLogMDT_OverrideProtect_r17) {
    }
    if (value.has_multipleCEF_Report_r17) {
    }
    if (value.has_excessPacketDelay_r17) {
    }
    if (value.has_earlyMeasLog_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_BasedPerfMeas_Parameters_r16_ExtGroup2(Encoder& enc, const UE_BasedPerfMeas_Parameters_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_loggedMDT_PNI_NPN_r18);
    enc.WriteBit(value.has_loggedMDT_SNPN_r18);
    if (value.has_loggedMDT_PNI_NPN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.loggedMDT_PNI_NPN_r18), 0, 0);
    }
    if (value.has_loggedMDT_SNPN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.loggedMDT_SNPN_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_UE_BasedPerfMeas_Parameters_r16_ExtGroup2(Decoder& dec, UE_BasedPerfMeas_Parameters_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.loggedMDT_PNI_NPN_r18 = (UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_PNI_NPN_r18)0;
    }
    if (present_1) {
        value.loggedMDT_SNPN_r18 = (UE_BasedPerfMeas_Parameters_r16_ExtGroup2_LoggedMDT_SNPN_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_BasedPerfMeas_Parameters_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_BasedPerfMeas_Parameters_r16_ExtGroup2(UE_BasedPerfMeas_Parameters_r16_ExtGroup2& value)
{
    if (value.has_loggedMDT_PNI_NPN_r18) {
    }
    if (value.has_loggedMDT_SNPN_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_BasedPerfMeas_Parameters_r16(Encoder& enc, const UE_BasedPerfMeas_Parameters_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_barometerMeasReport_r16);
    enc.WriteBit(value.has_immMeasBT_r16);
    enc.WriteBit(value.has_immMeasWLAN_r16);
    enc.WriteBit(value.has_loggedMeasBT_r16);
    enc.WriteBit(value.has_loggedMeasurements_r16);
    enc.WriteBit(value.has_loggedMeasWLAN_r16);
    enc.WriteBit(value.has_orientationMeasReport_r16);
    enc.WriteBit(value.has_speedMeasReport_r16);
    enc.WriteBit(value.has_gnss_Location_r16);
    enc.WriteBit(value.has_ulPDCP_Delay_r16);
    if (value.has_barometerMeasReport_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.barometerMeasReport_r16), 0, 0);
    }
    if (value.has_immMeasBT_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.immMeasBT_r16), 0, 0);
    }
    if (value.has_immMeasWLAN_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.immMeasWLAN_r16), 0, 0);
    }
    if (value.has_loggedMeasBT_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.loggedMeasBT_r16), 0, 0);
    }
    if (value.has_loggedMeasurements_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.loggedMeasurements_r16), 0, 0);
    }
    if (value.has_loggedMeasWLAN_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.loggedMeasWLAN_r16), 0, 0);
    }
    if (value.has_orientationMeasReport_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.orientationMeasReport_r16), 0, 0);
    }
    if (value.has_speedMeasReport_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.speedMeasReport_r16), 0, 0);
    }
    if (value.has_gnss_Location_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gnss_Location_r16), 0, 0);
    }
    if (value.has_ulPDCP_Delay_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ulPDCP_Delay_r16), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_UE_BasedPerfMeas_Parameters_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_UE_BasedPerfMeas_Parameters_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_UE_BasedPerfMeas_Parameters_r16(Decoder& dec, UE_BasedPerfMeas_Parameters_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (present_0) {
        value.barometerMeasReport_r16 = (UE_BasedPerfMeas_Parameters_r16_BarometerMeasReport_r16)0;
    }
    if (present_1) {
        value.immMeasBT_r16 = (UE_BasedPerfMeas_Parameters_r16_ImmMeasBT_r16)0;
    }
    if (present_2) {
        value.immMeasWLAN_r16 = (UE_BasedPerfMeas_Parameters_r16_ImmMeasWLAN_r16)0;
    }
    if (present_3) {
        value.loggedMeasBT_r16 = (UE_BasedPerfMeas_Parameters_r16_LoggedMeasBT_r16)0;
    }
    if (present_4) {
        value.loggedMeasurements_r16 = (UE_BasedPerfMeas_Parameters_r16_LoggedMeasurements_r16)0;
    }
    if (present_5) {
        value.loggedMeasWLAN_r16 = (UE_BasedPerfMeas_Parameters_r16_LoggedMeasWLAN_r16)0;
    }
    if (present_6) {
        value.orientationMeasReport_r16 = (UE_BasedPerfMeas_Parameters_r16_OrientationMeasReport_r16)0;
    }
    if (present_7) {
        value.speedMeasReport_r16 = (UE_BasedPerfMeas_Parameters_r16_SpeedMeasReport_r16)0;
    }
    if (present_8) {
        value.gnss_Location_r16 = (UE_BasedPerfMeas_Parameters_r16_Gnss_Location_r16)0;
    }
    if (present_9) {
        value.ulPDCP_Delay_r16 = (UE_BasedPerfMeas_Parameters_r16_UlPDCP_Delay_r16)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 2u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[2] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_UE_BasedPerfMeas_Parameters_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_UE_BasedPerfMeas_Parameters_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_BasedPerfMeas_Parameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_BasedPerfMeas_Parameters_r16(UE_BasedPerfMeas_Parameters_r16& value)
{
    if (value.has_barometerMeasReport_r16) {
    }
    if (value.has_immMeasBT_r16) {
    }
    if (value.has_immMeasWLAN_r16) {
    }
    if (value.has_loggedMeasBT_r16) {
    }
    if (value.has_loggedMeasurements_r16) {
    }
    if (value.has_loggedMeasWLAN_r16) {
    }
    if (value.has_orientationMeasReport_r16) {
    }
    if (value.has_speedMeasReport_r16) {
    }
    if (value.has_gnss_Location_r16) {
    }
    if (value.has_ulPDCP_Delay_r16) {
    }
    if (value.has_extGroup1) {
        Free_UE_BasedPerfMeas_Parameters_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_UE_BasedPerfMeas_Parameters_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_CapabilityAddXDD_Mode(Encoder& enc, const UE_NR_CapabilityAddXDD_Mode& value)
{
    (void)value;
    enc.WriteBit(value.has_phy_ParametersXDD_Diff);
    enc.WriteBit(value.has_mac_ParametersXDD_Diff);
    enc.WriteBit(value.has_measAndMobParametersXDD_Diff);
    if (value.has_phy_ParametersXDD_Diff) {
        Encode_Phy_ParametersXDD_Diff(enc, value.phy_ParametersXDD_Diff);
    }
    if (value.has_mac_ParametersXDD_Diff) {
        Encode_MAC_ParametersXDD_Diff(enc, value.mac_ParametersXDD_Diff);
    }
    if (value.has_measAndMobParametersXDD_Diff) {
        Encode_MeasAndMobParametersXDD_Diff(enc, value.measAndMobParametersXDD_Diff);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_CapabilityAddXDD_Mode(Decoder& dec, UE_NR_CapabilityAddXDD_Mode& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        if (Decode_Phy_ParametersXDD_Diff(dec, value.phy_ParametersXDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MAC_ParametersXDD_Diff(dec, value.mac_ParametersXDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MeasAndMobParametersXDD_Diff(dec, value.measAndMobParametersXDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_CapabilityAddXDD_Mode(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_CapabilityAddXDD_Mode(UE_NR_CapabilityAddXDD_Mode& value)
{
    if (value.has_phy_ParametersXDD_Diff) {
        Free_Phy_ParametersXDD_Diff(value.phy_ParametersXDD_Diff);
    }
    if (value.has_mac_ParametersXDD_Diff) {
        Free_MAC_ParametersXDD_Diff(value.mac_ParametersXDD_Diff);
    }
    if (value.has_measAndMobParametersXDD_Diff) {
        Free_MeasAndMobParametersXDD_Diff(value.measAndMobParametersXDD_Diff);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_CapabilityAddFRX_Mode(Encoder& enc, const UE_NR_CapabilityAddFRX_Mode& value)
{
    (void)value;
    enc.WriteBit(value.has_phy_ParametersFRX_Diff);
    enc.WriteBit(value.has_measAndMobParametersFRX_Diff);
    if (value.has_phy_ParametersFRX_Diff) {
        Encode_Phy_ParametersFRX_Diff(enc, value.phy_ParametersFRX_Diff);
    }
    if (value.has_measAndMobParametersFRX_Diff) {
        Encode_MeasAndMobParametersFRX_Diff(enc, value.measAndMobParametersFRX_Diff);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_CapabilityAddFRX_Mode(Decoder& dec, UE_NR_CapabilityAddFRX_Mode& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_Phy_ParametersFRX_Diff(dec, value.phy_ParametersFRX_Diff) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasAndMobParametersFRX_Diff(dec, value.measAndMobParametersFRX_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_CapabilityAddFRX_Mode(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_CapabilityAddFRX_Mode(UE_NR_CapabilityAddFRX_Mode& value)
{
    if (value.has_phy_ParametersFRX_Diff) {
        Free_Phy_ParametersFRX_Diff(value.phy_ParametersFRX_Diff);
    }
    if (value.has_measAndMobParametersFRX_Diff) {
        Free_MeasAndMobParametersFRX_Diff(value.measAndMobParametersFRX_Diff);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NTN_Parameters_r17(Encoder& enc, const NTN_Parameters_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_inactiveStateNTN_r17);
    enc.WriteBit(value.has_ra_SDT_NTN_r17);
    enc.WriteBit(value.has_srb_SDT_NTN_r17);
    enc.WriteBit(value.has_measAndMobParametersNTN_r17);
    enc.WriteBit(value.has_mac_ParametersNTN_r17);
    enc.WriteBit(value.has_phy_ParametersNTN_r17);
    enc.WriteBit(value.has_fdd_Add_UE_NR_CapabilitiesNTN_r17);
    enc.WriteBit(value.has_fr1_Add_UE_NR_CapabilitiesNTN_r17);
    enc.WriteBit(value.has_ue_BasedPerfMeas_ParametersNTN_r17);
    enc.WriteBit(value.has_son_ParametersNTN_r17);
    if (value.has_inactiveStateNTN_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inactiveStateNTN_r17), 0, 0);
    }
    if (value.has_ra_SDT_NTN_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_SDT_NTN_r17), 0, 0);
    }
    if (value.has_srb_SDT_NTN_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srb_SDT_NTN_r17), 0, 0);
    }
    if (value.has_measAndMobParametersNTN_r17) {
        Encode_MeasAndMobParameters(enc, value.measAndMobParametersNTN_r17);
    }
    if (value.has_mac_ParametersNTN_r17) {
        Encode_MAC_Parameters(enc, value.mac_ParametersNTN_r17);
    }
    if (value.has_phy_ParametersNTN_r17) {
        Encode_Phy_Parameters(enc, value.phy_ParametersNTN_r17);
    }
    if (value.has_fdd_Add_UE_NR_CapabilitiesNTN_r17) {
        Encode_UE_NR_CapabilityAddXDD_Mode(enc, value.fdd_Add_UE_NR_CapabilitiesNTN_r17);
    }
    if (value.has_fr1_Add_UE_NR_CapabilitiesNTN_r17) {
        Encode_UE_NR_CapabilityAddFRX_Mode(enc, value.fr1_Add_UE_NR_CapabilitiesNTN_r17);
    }
    if (value.has_ue_BasedPerfMeas_ParametersNTN_r17) {
        Encode_UE_BasedPerfMeas_Parameters_r16(enc, value.ue_BasedPerfMeas_ParametersNTN_r17);
    }
    if (value.has_son_ParametersNTN_r17) {
        Encode_SON_Parameters_r16(enc, value.son_ParametersNTN_r17);
    }
    return enc.Error();
}

ErrorCode Decode_NTN_Parameters_r17(Decoder& dec, NTN_Parameters_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (present_0) {
        value.inactiveStateNTN_r17 = (NTN_Parameters_r17_InactiveStateNTN_r17)0;
    }
    if (present_1) {
        value.ra_SDT_NTN_r17 = (NTN_Parameters_r17_Ra_SDT_NTN_r17)0;
    }
    if (present_2) {
        value.srb_SDT_NTN_r17 = (NTN_Parameters_r17_Srb_SDT_NTN_r17)0;
    }
    if (present_3) {
        if (Decode_MeasAndMobParameters(dec, value.measAndMobParametersNTN_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_MAC_Parameters(dec, value.mac_ParametersNTN_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_Phy_Parameters(dec, value.phy_ParametersNTN_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_UE_NR_CapabilityAddXDD_Mode(dec, value.fdd_Add_UE_NR_CapabilitiesNTN_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_UE_NR_CapabilityAddFRX_Mode(dec, value.fr1_Add_UE_NR_CapabilitiesNTN_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_UE_BasedPerfMeas_Parameters_r16(dec, value.ue_BasedPerfMeas_ParametersNTN_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_SON_Parameters_r16(dec, value.son_ParametersNTN_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NTN_Parameters_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NTN_Parameters_r17(NTN_Parameters_r17& value)
{
    if (value.has_inactiveStateNTN_r17) {
    }
    if (value.has_ra_SDT_NTN_r17) {
    }
    if (value.has_srb_SDT_NTN_r17) {
    }
    if (value.has_measAndMobParametersNTN_r17) {
        Free_MeasAndMobParameters(value.measAndMobParametersNTN_r17);
    }
    if (value.has_mac_ParametersNTN_r17) {
        Free_MAC_Parameters(value.mac_ParametersNTN_r17);
    }
    if (value.has_phy_ParametersNTN_r17) {
        Free_Phy_Parameters(value.phy_ParametersNTN_r17);
    }
    if (value.has_fdd_Add_UE_NR_CapabilitiesNTN_r17) {
        Free_UE_NR_CapabilityAddXDD_Mode(value.fdd_Add_UE_NR_CapabilitiesNTN_r17);
    }
    if (value.has_fr1_Add_UE_NR_CapabilitiesNTN_r17) {
        Free_UE_NR_CapabilityAddFRX_Mode(value.fr1_Add_UE_NR_CapabilitiesNTN_r17);
    }
    if (value.has_ue_BasedPerfMeas_ParametersNTN_r17) {
        Free_UE_BasedPerfMeas_Parameters_r16(value.ue_BasedPerfMeas_ParametersNTN_r17);
    }
    if (value.has_son_ParametersNTN_r17) {
        Free_SON_Parameters_r16(value.son_ParametersNTN_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_OLPC_SRS_Pos_r16(Encoder& enc, const OLPC_SRS_Pos_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_olpc_SRS_PosBasedOnPRS_Serving_r16);
    enc.WriteBit(value.has_olpc_SRS_PosBasedOnSSB_Neigh_r16);
    enc.WriteBit(value.has_olpc_SRS_PosBasedOnPRS_Neigh_r16);
    enc.WriteBit(value.has_maxNumberPathLossEstimatePerServing_r16);
    if (value.has_olpc_SRS_PosBasedOnPRS_Serving_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.olpc_SRS_PosBasedOnPRS_Serving_r16), 0, 0);
    }
    if (value.has_olpc_SRS_PosBasedOnSSB_Neigh_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.olpc_SRS_PosBasedOnSSB_Neigh_r16), 0, 0);
    }
    if (value.has_olpc_SRS_PosBasedOnPRS_Neigh_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.olpc_SRS_PosBasedOnPRS_Neigh_r16), 0, 0);
    }
    if (value.has_maxNumberPathLossEstimatePerServing_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPathLossEstimatePerServing_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_OLPC_SRS_Pos_r16(Decoder& dec, OLPC_SRS_Pos_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.olpc_SRS_PosBasedOnPRS_Serving_r16 = (OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Serving_r16)0;
    }
    if (present_1) {
        value.olpc_SRS_PosBasedOnSSB_Neigh_r16 = (OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnSSB_Neigh_r16)0;
    }
    if (present_2) {
        value.olpc_SRS_PosBasedOnPRS_Neigh_r16 = (OLPC_SRS_Pos_r16_Olpc_SRS_PosBasedOnPRS_Neigh_r16)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberPathLossEstimatePerServing_r16 = (OLPC_SRS_Pos_r16_MaxNumberPathLossEstimatePerServing_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OLPC_SRS_Pos_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OLPC_SRS_Pos_r16(OLPC_SRS_Pos_r16& value)
{
    if (value.has_olpc_SRS_PosBasedOnPRS_Serving_r16) {
    }
    if (value.has_olpc_SRS_PosBasedOnSSB_Neigh_r16) {
    }
    if (value.has_olpc_SRS_PosBasedOnPRS_Neigh_r16) {
    }
    if (value.has_maxNumberPathLossEstimatePerServing_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCP_Parameters_ExtGroup1(Encoder& enc, const PDCP_Parameters_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_drb_IAB_r16);
    enc.WriteBit(value.has_non_DRB_IAB_r16);
    enc.WriteBit(value.has_extendedDiscardTimer_r16);
    enc.WriteBit(value.has_continueEHC_Context_r16);
    enc.WriteBit(value.has_ehc_r16);
    enc.WriteBit(value.has_maxNumberEHC_Contexts_r16);
    enc.WriteBit(value.has_jointEHC_ROHC_Config_r16);
    enc.WriteBit(value.has_pdcp_DuplicationMoreThanTwoRLC_r16);
    if (value.has_drb_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drb_IAB_r16), 0, 0);
    }
    if (value.has_non_DRB_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.non_DRB_IAB_r16), 0, 0);
    }
    if (value.has_extendedDiscardTimer_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedDiscardTimer_r16), 0, 0);
    }
    if (value.has_continueEHC_Context_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.continueEHC_Context_r16), 0, 0);
    }
    if (value.has_ehc_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ehc_r16), 0, 0);
    }
    if (value.has_maxNumberEHC_Contexts_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberEHC_Contexts_r16), 0, 15);
    }
    if (value.has_jointEHC_ROHC_Config_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.jointEHC_ROHC_Config_r16), 0, 0);
    }
    if (value.has_pdcp_DuplicationMoreThanTwoRLC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationMoreThanTwoRLC_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Parameters_ExtGroup1(Decoder& dec, PDCP_Parameters_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (present_0) {
        value.drb_IAB_r16 = (PDCP_Parameters_ExtGroup1_Drb_IAB_r16)0;
    }
    if (present_1) {
        value.non_DRB_IAB_r16 = (PDCP_Parameters_ExtGroup1_Non_DRB_IAB_r16)0;
    }
    if (present_2) {
        value.extendedDiscardTimer_r16 = (PDCP_Parameters_ExtGroup1_ExtendedDiscardTimer_r16)0;
    }
    if (present_3) {
        value.continueEHC_Context_r16 = (PDCP_Parameters_ExtGroup1_ContinueEHC_Context_r16)0;
    }
    if (present_4) {
        value.ehc_r16 = (PDCP_Parameters_ExtGroup1_Ehc_r16)0;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.maxNumberEHC_Contexts_r16 = (PDCP_Parameters_ExtGroup1_MaxNumberEHC_Contexts_r16)tmp_value;
    }
    if (present_6) {
        value.jointEHC_ROHC_Config_r16 = (PDCP_Parameters_ExtGroup1_JointEHC_ROHC_Config_r16)0;
    }
    if (present_7) {
        value.pdcp_DuplicationMoreThanTwoRLC_r16 = (PDCP_Parameters_ExtGroup1_Pdcp_DuplicationMoreThanTwoRLC_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Parameters_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Parameters_ExtGroup1(PDCP_Parameters_ExtGroup1& value)
{
    if (value.has_drb_IAB_r16) {
    }
    if (value.has_non_DRB_IAB_r16) {
    }
    if (value.has_extendedDiscardTimer_r16) {
    }
    if (value.has_continueEHC_Context_r16) {
    }
    if (value.has_ehc_r16) {
    }
    if (value.has_maxNumberEHC_Contexts_r16) {
    }
    if (value.has_jointEHC_ROHC_Config_r16) {
    }
    if (value.has_pdcp_DuplicationMoreThanTwoRLC_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17(Encoder& enc, const PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.versionOfDictionary_r17), 0, 15);
    Encode_PLMN_Identity(enc, value.associatedPLMN_ID_r17);
    return enc.Error();
}

ErrorCode Decode_PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17(Decoder& dec, PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.versionOfDictionary_r17 = (int64_t)tmp_value;
    }
    {
        if (Decode_PLMN_Identity(dec, value.associatedPLMN_ID_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17(PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17& value)
{
    Free_PLMN_Identity(value.associatedPLMN_ID_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCP_Parameters_ExtGroup2_Udc_r17(Encoder& enc, const PDCP_Parameters_ExtGroup2_Udc_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_standardDictionary_r17);
    enc.WriteBit(value.has_operatorDictionary_r17);
    enc.WriteBit(value.has_continueUDC_r17);
    enc.WriteBit(value.has_supportOfBufferSize_r17);
    if (value.has_standardDictionary_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.standardDictionary_r17), 0, 0);
    }
    if (value.has_operatorDictionary_r17) {
        Encode_PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17(enc, value.operatorDictionary_r17);
    }
    if (value.has_continueUDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.continueUDC_r17), 0, 0);
    }
    if (value.has_supportOfBufferSize_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportOfBufferSize_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Parameters_ExtGroup2_Udc_r17(Decoder& dec, PDCP_Parameters_ExtGroup2_Udc_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.standardDictionary_r17 = (PDCP_Parameters_ExtGroup2_Udc_r17_StandardDictionary_r17)0;
    }
    if (present_1) {
        if (Decode_PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17(dec, value.operatorDictionary_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.continueUDC_r17 = (PDCP_Parameters_ExtGroup2_Udc_r17_ContinueUDC_r17)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.supportOfBufferSize_r17 = (PDCP_Parameters_ExtGroup2_Udc_r17_SupportOfBufferSize_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Parameters_ExtGroup2_Udc_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Parameters_ExtGroup2_Udc_r17(PDCP_Parameters_ExtGroup2_Udc_r17& value)
{
    if (value.has_standardDictionary_r17) {
    }
    if (value.has_operatorDictionary_r17) {
        Free_PDCP_Parameters_ExtGroup2_Udc_r17_OperatorDictionary_r17(value.operatorDictionary_r17);
    }
    if (value.has_continueUDC_r17) {
    }
    if (value.has_supportOfBufferSize_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCP_Parameters_ExtGroup2(Encoder& enc, const PDCP_Parameters_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_longSN_RedCap_r17);
    enc.WriteBit(value.has_udc_r17);
    if (value.has_longSN_RedCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.longSN_RedCap_r17), 0, 0);
    }
    if (value.has_udc_r17) {
        Encode_PDCP_Parameters_ExtGroup2_Udc_r17(enc, value.udc_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Parameters_ExtGroup2(Decoder& dec, PDCP_Parameters_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.longSN_RedCap_r17 = (PDCP_Parameters_ExtGroup2_LongSN_RedCap_r17)0;
    }
    if (present_1) {
        if (Decode_PDCP_Parameters_ExtGroup2_Udc_r17(dec, value.udc_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Parameters_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Parameters_ExtGroup2(PDCP_Parameters_ExtGroup2& value)
{
    if (value.has_longSN_RedCap_r17) {
    }
    if (value.has_udc_r17) {
        Free_PDCP_Parameters_ExtGroup2_Udc_r17(value.udc_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCP_Parameters_ExtGroup3(Encoder& enc, const PDCP_Parameters_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_longSN_NCR_r18);
    enc.WriteBit(value.has_pdu_SetDiscard_r18);
    enc.WriteBit(value.has_psi_BasedDiscard_r18);
    if (value.has_longSN_NCR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.longSN_NCR_r18), 0, 0);
    }
    if (value.has_pdu_SetDiscard_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdu_SetDiscard_r18), 0, 0);
    }
    if (value.has_psi_BasedDiscard_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.psi_BasedDiscard_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Parameters_ExtGroup3(Decoder& dec, PDCP_Parameters_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        value.longSN_NCR_r18 = (PDCP_Parameters_ExtGroup3_LongSN_NCR_r18)0;
    }
    if (present_1) {
        value.pdu_SetDiscard_r18 = (PDCP_Parameters_ExtGroup3_Pdu_SetDiscard_r18)0;
    }
    if (present_2) {
        value.psi_BasedDiscard_r18 = (PDCP_Parameters_ExtGroup3_Psi_BasedDiscard_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Parameters_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Parameters_ExtGroup3(PDCP_Parameters_ExtGroup3& value)
{
    if (value.has_longSN_NCR_r18) {
    }
    if (value.has_pdu_SetDiscard_r18) {
    }
    if (value.has_psi_BasedDiscard_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCP_Parameters_SupportedROHC_Profiles(Encoder& enc, const PDCP_Parameters_SupportedROHC_Profiles& value)
{
    (void)value;
    enc.WriteBool(value.profile0x0000);
    enc.WriteBool(value.profile0x0001);
    enc.WriteBool(value.profile0x0002);
    enc.WriteBool(value.profile0x0003);
    enc.WriteBool(value.profile0x0004);
    enc.WriteBool(value.profile0x0006);
    enc.WriteBool(value.profile0x0101);
    enc.WriteBool(value.profile0x0102);
    enc.WriteBool(value.profile0x0103);
    enc.WriteBool(value.profile0x0104);
    return enc.Error();
}

ErrorCode Decode_PDCP_Parameters_SupportedROHC_Profiles(Decoder& dec, PDCP_Parameters_SupportedROHC_Profiles& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0000 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0001 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0002 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0003 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0004 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0006 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0101 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0102 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0103 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0104 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Parameters_SupportedROHC_Profiles(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Parameters_SupportedROHC_Profiles(PDCP_Parameters_SupportedROHC_Profiles& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCP_Parameters(Encoder& enc, const PDCP_Parameters& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_uplinkOnlyROHC_Profiles);
    enc.WriteBit(value.has_continueROHC_Context);
    enc.WriteBit(value.has_outOfOrderDelivery);
    enc.WriteBit(value.has_shortSN);
    enc.WriteBit(value.has_pdcp_DuplicationSRB);
    enc.WriteBit(value.has_pdcp_DuplicationMCG_OrSCG_DRB);
    Encode_PDCP_Parameters_SupportedROHC_Profiles(enc, value.supportedROHC_Profiles);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberROHC_ContextSessions), 0, 15);
    if (value.has_uplinkOnlyROHC_Profiles) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkOnlyROHC_Profiles), 0, 0);
    }
    if (value.has_continueROHC_Context) {
        enc.WriteConstrainedInteger((std::int64_t)(value.continueROHC_Context), 0, 0);
    }
    if (value.has_outOfOrderDelivery) {
        enc.WriteConstrainedInteger((std::int64_t)(value.outOfOrderDelivery), 0, 0);
    }
    if (value.has_shortSN) {
        enc.WriteConstrainedInteger((std::int64_t)(value.shortSN), 0, 0);
    }
    if (value.has_pdcp_DuplicationSRB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationSRB), 0, 0);
    }
    if (value.has_pdcp_DuplicationMCG_OrSCG_DRB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationMCG_OrSCG_DRB), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PDCP_Parameters_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PDCP_Parameters_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PDCP_Parameters_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Parameters(Decoder& dec, PDCP_Parameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    {
        if (Decode_PDCP_Parameters_SupportedROHC_Profiles(dec, value.supportedROHC_Profiles) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.maxNumberROHC_ContextSessions = (PDCP_Parameters_MaxNumberROHC_ContextSessions)tmp_value;
    }
    if (present_0) {
        value.uplinkOnlyROHC_Profiles = (PDCP_Parameters_UplinkOnlyROHC_Profiles)0;
    }
    if (present_1) {
        value.continueROHC_Context = (PDCP_Parameters_ContinueROHC_Context)0;
    }
    if (present_2) {
        value.outOfOrderDelivery = (PDCP_Parameters_OutOfOrderDelivery)0;
    }
    if (present_3) {
        value.shortSN = (PDCP_Parameters_ShortSN)0;
    }
    if (present_4) {
        value.pdcp_DuplicationSRB = (PDCP_Parameters_Pdcp_DuplicationSRB)0;
    }
    if (present_5) {
        value.pdcp_DuplicationMCG_OrSCG_DRB = (PDCP_Parameters_Pdcp_DuplicationMCG_OrSCG_DRB)0;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 3u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[3] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_PDCP_Parameters_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_PDCP_Parameters_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_PDCP_Parameters_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup3 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Parameters(PDCP_Parameters& value)
{
    Free_PDCP_Parameters_SupportedROHC_Profiles(value.supportedROHC_Profiles);
    if (value.has_uplinkOnlyROHC_Profiles) {
    }
    if (value.has_continueROHC_Context) {
    }
    if (value.has_outOfOrderDelivery) {
    }
    if (value.has_shortSN) {
    }
    if (value.has_pdcp_DuplicationSRB) {
    }
    if (value.has_pdcp_DuplicationMCG_OrSCG_DRB) {
    }
    if (value.has_extGroup1) {
        Free_PDCP_Parameters_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PDCP_Parameters_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PDCP_Parameters_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCP_ParametersMRDC(Encoder& enc, const PDCP_ParametersMRDC& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcp_DuplicationSplitSRB);
    enc.WriteBit(value.has_pdcp_DuplicationSplitDRB);
    if (value.has_pdcp_DuplicationSplitSRB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationSplitSRB), 0, 0);
    }
    if (value.has_pdcp_DuplicationSplitDRB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationSplitDRB), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_ParametersMRDC(Decoder& dec, PDCP_ParametersMRDC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.pdcp_DuplicationSplitSRB = (PDCP_ParametersMRDC_Pdcp_DuplicationSplitSRB)0;
    }
    if (present_1) {
        value.pdcp_DuplicationSplitDRB = (PDCP_ParametersMRDC_Pdcp_DuplicationSplitDRB)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_ParametersMRDC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_ParametersMRDC(PDCP_ParametersMRDC& value)
{
    if (value.has_pdcp_DuplicationSplitSRB) {
    }
    if (value.has_pdcp_DuplicationSplitDRB) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCP_ParametersMRDC_v1610(Encoder& enc, const PDCP_ParametersMRDC_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_scg_DRB_NR_IAB_r16);
    if (value.has_scg_DRB_NR_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scg_DRB_NR_IAB_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_ParametersMRDC_v1610(Decoder& dec, PDCP_ParametersMRDC_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.scg_DRB_NR_IAB_r16 = (PDCP_ParametersMRDC_v1610_Scg_DRB_NR_IAB_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_ParametersMRDC_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_ParametersMRDC_v1610(PDCP_ParametersMRDC_v1610& value)
{
    if (value.has_scg_DRB_NR_IAB_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersCommon_v16a0(Encoder& enc, const Phy_ParametersCommon_v16a0& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_PeriodicityAndOffsetExt_r16);
    if (value.has_srs_PeriodicityAndOffsetExt_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_PeriodicityAndOffsetExt_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersCommon_v16a0(Decoder& dec, Phy_ParametersCommon_v16a0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.srs_PeriodicityAndOffsetExt_r16 = (Phy_ParametersCommon_v16a0_Srs_PeriodicityAndOffsetExt_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersCommon_v16a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersCommon_v16a0(Phy_ParametersCommon_v16a0& value)
{
    if (value.has_srs_PeriodicityAndOffsetExt_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_Parameters_v16a0(Encoder& enc, const Phy_Parameters_v16a0& value)
{
    (void)value;
    enc.WriteBit(value.has_phy_ParametersCommon_v16a0);
    if (value.has_phy_ParametersCommon_v16a0) {
        Encode_Phy_ParametersCommon_v16a0(enc, value.phy_ParametersCommon_v16a0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_Parameters_v16a0(Decoder& dec, Phy_Parameters_v16a0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_Phy_ParametersCommon_v16a0(dec, value.phy_ParametersCommon_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_Parameters_v16a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_Parameters_v16a0(Phy_Parameters_v16a0& value)
{
    if (value.has_phy_ParametersCommon_v16a0) {
        Free_Phy_ParametersCommon_v16a0(value.phy_ParametersCommon_v16a0);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersMRDC_ExtGroup1(Encoder& enc, const Phy_ParametersMRDC_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_spCellPlacement);
    if (value.has_spCellPlacement) {
        Encode_CarrierAggregationVariant(enc, value.spCellPlacement);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersMRDC_ExtGroup1(Decoder& dec, Phy_ParametersMRDC_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CarrierAggregationVariant(dec, value.spCellPlacement) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersMRDC_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersMRDC_ExtGroup1(Phy_ParametersMRDC_ExtGroup1& value)
{
    if (value.has_spCellPlacement) {
        Free_CarrierAggregationVariant(value.spCellPlacement);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersMRDC_ExtGroup2(Encoder& enc, const Phy_ParametersMRDC_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_tdd_PCellUL_TX_AllUL_Subframe_r16);
    enc.WriteBit(value.has_fdd_PCellUL_TX_AllUL_Subframe_r16);
    if (value.has_tdd_PCellUL_TX_AllUL_Subframe_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tdd_PCellUL_TX_AllUL_Subframe_r16), 0, 0);
    }
    if (value.has_fdd_PCellUL_TX_AllUL_Subframe_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fdd_PCellUL_TX_AllUL_Subframe_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersMRDC_ExtGroup2(Decoder& dec, Phy_ParametersMRDC_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.tdd_PCellUL_TX_AllUL_Subframe_r16 = (Phy_ParametersMRDC_ExtGroup2_Tdd_PCellUL_TX_AllUL_Subframe_r16)0;
    }
    if (present_1) {
        value.fdd_PCellUL_TX_AllUL_Subframe_r16 = (Phy_ParametersMRDC_ExtGroup2_Fdd_PCellUL_TX_AllUL_Subframe_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersMRDC_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersMRDC_ExtGroup2(Phy_ParametersMRDC_ExtGroup2& value)
{
    if (value.has_tdd_PCellUL_TX_AllUL_Subframe_r16) {
    }
    if (value.has_fdd_PCellUL_TX_AllUL_Subframe_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersMRDC(Encoder& enc, const Phy_ParametersMRDC& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_naics_Capability_List);
    if (value.has_naics_Capability_List) {
enc.WriteConstrainedLength(value.naics_Capability_List_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.naics_Capability_List_count; ++i) {
    Encode_NAICS_Capability_Entry(enc, value.naics_Capability_List_items[i]);
}
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_Phy_ParametersMRDC_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_Phy_ParametersMRDC_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersMRDC(Decoder& dec, Phy_ParametersMRDC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.naics_Capability_List_count)) { goto fail; }
if (value.naics_Capability_List_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.naics_Capability_List_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.naics_Capability_List_count > 0u) {
    value.naics_Capability_List_items = (NAICS_Capability_Entry*)std::malloc((std::size_t)value.naics_Capability_List_count * sizeof(NAICS_Capability_Entry));
    if (value.naics_Capability_List_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.naics_Capability_List_items, 0, (std::size_t)value.naics_Capability_List_count * sizeof(NAICS_Capability_Entry));
}
for (std::uint32_t i = 0; i < value.naics_Capability_List_count; ++i) {
    if (Decode_NAICS_Capability_Entry(dec, value.naics_Capability_List_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 2u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[2] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersMRDC_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_Phy_ParametersMRDC_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup2 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersMRDC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersMRDC(Phy_ParametersMRDC& value)
{
    if (value.has_naics_Capability_List) {
        if (value.naics_Capability_List_items != nullptr) {
            for (std::uint32_t i = 0; i < value.naics_Capability_List_count; ++i) {
                Free_NAICS_Capability_Entry(value.naics_Capability_List_items[i]);
            }
            std::free(value.naics_Capability_List_items);
            value.naics_Capability_List_items = nullptr;
        }
        value.naics_Capability_List_count = 0;
    }
    if (value.has_extGroup1) {
        Free_Phy_ParametersMRDC_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_Phy_ParametersMRDC_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NAICS_Capability_Entry(Encoder& enc, const NAICS_Capability_Entry& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfNAICS_CapableCC), 1, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfAggregatedPRB), 0, 15);
    return enc.Error();
}

ErrorCode Decode_NAICS_Capability_Entry(Decoder& dec, NAICS_Capability_Entry& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 5, tmp_value)) { goto fail; }
        value.numberOfNAICS_CapableCC = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.numberOfAggregatedPRB = (NAICS_Capability_Entry_NumberOfAggregatedPRB)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NAICS_Capability_Entry(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NAICS_Capability_Entry(NAICS_Capability_Entry& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16(Encoder& enc, const Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_sameSymbol_r16);
    enc.WriteBit(value.has_diffSymbol_r16);
    if (value.has_sameSymbol_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sameSymbol_r16), 0, 0);
    }
    if (value.has_diffSymbol_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.diffSymbol_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16(Decoder& dec, Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.sameSymbol_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_SameSymbol_r16)0;
    }
    if (present_1) {
        value.diffSymbol_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16_DiffSymbol_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16(Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16& value)
{
    if (value.has_sameSymbol_r16) {
    }
    if (value.has_diffSymbol_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Phy_ParametersSharedSpectrumChAccess_r16(Encoder& enc, const Phy_ParametersSharedSpectrumChAccess_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ss_SINR_Meas_r16);
    enc.WriteBit(value.has_sp_CSI_ReportPUCCH_r16);
    enc.WriteBit(value.has_sp_CSI_ReportPUSCH_r16);
    enc.WriteBit(value.has_dynamicSFI_r16);
    enc.WriteBit(value.has_mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16);
    enc.WriteBit(value.has_mux_SR_HARQ_ACK_PUCCH_r16);
    enc.WriteBit(value.has_mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16);
    enc.WriteBit(value.has_mux_HARQ_ACK_PUSCH_DiffSymbol_r16);
    enc.WriteBit(value.has_pucch_Repetition_F1_3_4_r16);
    enc.WriteBit(value.has_type1_PUSCH_RepetitionMultiSlots_r16);
    enc.WriteBit(value.has_type2_PUSCH_RepetitionMultiSlots_r16);
    enc.WriteBit(value.has_pusch_RepetitionMultiSlots_r16);
    enc.WriteBit(value.has_pdsch_RepetitionMultiSlots_r16);
    enc.WriteBit(value.has_downlinkSPS_r16);
    enc.WriteBit(value.has_configuredUL_GrantType1_r16);
    enc.WriteBit(value.has_configuredUL_GrantType2_r16);
    enc.WriteBit(value.has_pre_EmptIndication_DL_r16);
    if (value.has_ss_SINR_Meas_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ss_SINR_Meas_r16), 0, 0);
    }
    if (value.has_sp_CSI_ReportPUCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_CSI_ReportPUCCH_r16), 0, 0);
    }
    if (value.has_sp_CSI_ReportPUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_CSI_ReportPUSCH_r16), 0, 0);
    }
    if (value.has_dynamicSFI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicSFI_r16), 0, 0);
    }
    if (value.has_mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16) {
        Encode_Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16(enc, value.mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16);
    }
    if (value.has_mux_SR_HARQ_ACK_PUCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_SR_HARQ_ACK_PUCCH_r16), 0, 0);
    }
    if (value.has_mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16), 0, 0);
    }
    if (value.has_mux_HARQ_ACK_PUSCH_DiffSymbol_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_HARQ_ACK_PUSCH_DiffSymbol_r16), 0, 0);
    }
    if (value.has_pucch_Repetition_F1_3_4_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_Repetition_F1_3_4_r16), 0, 0);
    }
    if (value.has_type1_PUSCH_RepetitionMultiSlots_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type1_PUSCH_RepetitionMultiSlots_r16), 0, 0);
    }
    if (value.has_type2_PUSCH_RepetitionMultiSlots_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_PUSCH_RepetitionMultiSlots_r16), 0, 0);
    }
    if (value.has_pusch_RepetitionMultiSlots_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_RepetitionMultiSlots_r16), 0, 0);
    }
    if (value.has_pdsch_RepetitionMultiSlots_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_RepetitionMultiSlots_r16), 0, 0);
    }
    if (value.has_downlinkSPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.downlinkSPS_r16), 0, 0);
    }
    if (value.has_configuredUL_GrantType1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredUL_GrantType1_r16), 0, 0);
    }
    if (value.has_configuredUL_GrantType2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredUL_GrantType2_r16), 0, 0);
    }
    if (value.has_pre_EmptIndication_DL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pre_EmptIndication_DL_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Phy_ParametersSharedSpectrumChAccess_r16(Decoder& dec, Phy_ParametersSharedSpectrumChAccess_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    bool present_13 = false;
    bool present_14 = false;
    bool present_15 = false;
    bool present_16 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (!dec.ReadBit(present_13)) { goto fail; }
    if (!dec.ReadBit(present_14)) { goto fail; }
    if (!dec.ReadBit(present_15)) { goto fail; }
    if (!dec.ReadBit(present_16)) { goto fail; }
    if (present_0) {
        value.ss_SINR_Meas_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Ss_SINR_Meas_r16)0;
    }
    if (present_1) {
        value.sp_CSI_ReportPUCCH_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUCCH_r16)0;
    }
    if (present_2) {
        value.sp_CSI_ReportPUSCH_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Sp_CSI_ReportPUSCH_r16)0;
    }
    if (present_3) {
        value.dynamicSFI_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_DynamicSFI_r16)0;
    }
    if (present_4) {
        if (Decode_Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16(dec, value.mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        value.mux_SR_HARQ_ACK_PUCCH_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_PUCCH_r16)0;
    }
    if (present_6) {
        value.mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16)0;
    }
    if (present_7) {
        value.mux_HARQ_ACK_PUSCH_DiffSymbol_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Mux_HARQ_ACK_PUSCH_DiffSymbol_r16)0;
    }
    if (present_8) {
        value.pucch_Repetition_F1_3_4_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Pucch_Repetition_F1_3_4_r16)0;
    }
    if (present_9) {
        value.type1_PUSCH_RepetitionMultiSlots_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Type1_PUSCH_RepetitionMultiSlots_r16)0;
    }
    if (present_10) {
        value.type2_PUSCH_RepetitionMultiSlots_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Type2_PUSCH_RepetitionMultiSlots_r16)0;
    }
    if (present_11) {
        value.pusch_RepetitionMultiSlots_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Pusch_RepetitionMultiSlots_r16)0;
    }
    if (present_12) {
        value.pdsch_RepetitionMultiSlots_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Pdsch_RepetitionMultiSlots_r16)0;
    }
    if (present_13) {
        value.downlinkSPS_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_DownlinkSPS_r16)0;
    }
    if (present_14) {
        value.configuredUL_GrantType1_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType1_r16)0;
    }
    if (present_15) {
        value.configuredUL_GrantType2_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_ConfiguredUL_GrantType2_r16)0;
    }
    if (present_16) {
        value.pre_EmptIndication_DL_r16 = (Phy_ParametersSharedSpectrumChAccess_r16_Pre_EmptIndication_DL_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Phy_ParametersSharedSpectrumChAccess_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Phy_ParametersSharedSpectrumChAccess_r16(Phy_ParametersSharedSpectrumChAccess_r16& value)
{
    if (value.has_ss_SINR_Meas_r16) {
    }
    if (value.has_sp_CSI_ReportPUCCH_r16) {
    }
    if (value.has_sp_CSI_ReportPUSCH_r16) {
    }
    if (value.has_dynamicSFI_r16) {
    }
    if (value.has_mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16) {
        Free_Phy_ParametersSharedSpectrumChAccess_r16_Mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16(value.mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot_r16);
    }
    if (value.has_mux_SR_HARQ_ACK_PUCCH_r16) {
    }
    if (value.has_mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_r16) {
    }
    if (value.has_mux_HARQ_ACK_PUSCH_DiffSymbol_r16) {
    }
    if (value.has_pucch_Repetition_F1_3_4_r16) {
    }
    if (value.has_type1_PUSCH_RepetitionMultiSlots_r16) {
    }
    if (value.has_type2_PUSCH_RepetitionMultiSlots_r16) {
    }
    if (value.has_pusch_RepetitionMultiSlots_r16) {
    }
    if (value.has_pdsch_RepetitionMultiSlots_r16) {
    }
    if (value.has_downlinkSPS_r16) {
    }
    if (value.has_configuredUL_GrantType1_r16) {
    }
    if (value.has_configuredUL_GrantType2_r16) {
    }
    if (value.has_pre_EmptIndication_DL_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PosSRS_BWA_RRC_Inactive_r18(Encoder& enc, const PosSRS_BWA_RRC_Inactive_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_numOfCarriersIntraBandContiguous_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_TwoCarriersFR1_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_TwoCarriersFR2_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_ThreeCarriersFR1_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_ThreeCarriersFR2_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceSet_r18);
    enc.WriteBit(value.has_maximumAggregatedResourcePeriodic_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceSemi_r18);
    enc.WriteBit(value.has_maximumAggregatedResourcePeriodicPerSlot_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceSemiPerSlot_r18);
    enc.WriteBit(value.has_supportOfSameSRS_PowerReduction_r18);
    enc.WriteBit(value.has_guardPeriod_r18);
    if (value.has_numOfCarriersIntraBandContiguous_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numOfCarriersIntraBandContiguous_r18), 0, 2);
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_TwoCarriersFR1_r18), 0, 3);
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_TwoCarriersFR2_r18), 0, 5);
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_ThreeCarriersFR1_r18), 0, 4);
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_ThreeCarriersFR2_r18), 0, 7);
    }
    if (value.has_maximumAggregatedResourceSet_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceSet_r18), 0, 5);
    }
    if (value.has_maximumAggregatedResourcePeriodic_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourcePeriodic_r18), 0, 6);
    }
    if (value.has_maximumAggregatedResourceSemi_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceSemi_r18), 0, 7);
    }
    if (value.has_maximumAggregatedResourcePeriodicPerSlot_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourcePeriodicPerSlot_r18), 0, 9);
    }
    if (value.has_maximumAggregatedResourceSemiPerSlot_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceSemiPerSlot_r18), 0, 10);
    }
    if (value.has_supportOfSameSRS_PowerReduction_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportOfSameSRS_PowerReduction_r18), 0, 0);
    }
    if (value.has_guardPeriod_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.guardPeriod_r18), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_PosSRS_BWA_RRC_Inactive_r18(Decoder& dec, PosSRS_BWA_RRC_Inactive_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.numOfCarriersIntraBandContiguous_r18 = (PosSRS_BWA_RRC_Inactive_r18_NumOfCarriersIntraBandContiguous_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_TwoCarriersFR1_r18 = (PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR1_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_TwoCarriersFR2_r18 = (PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_TwoCarriersFR2_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_ThreeCarriersFR1_r18 = (PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_ThreeCarriersFR2_r18 = (PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceSet_r18 = (PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSet_r18)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maximumAggregatedResourcePeriodic_r18 = (PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodic_r18)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceSemi_r18 = (PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemi_r18)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maximumAggregatedResourcePeriodicPerSlot_r18 = (PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourcePeriodicPerSlot_r18)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceSemiPerSlot_r18 = (PosSRS_BWA_RRC_Inactive_r18_MaximumAggregatedResourceSemiPerSlot_r18)tmp_value;
    }
    if (present_10) {
        value.supportOfSameSRS_PowerReduction_r18 = (PosSRS_BWA_RRC_Inactive_r18_SupportOfSameSRS_PowerReduction_r18)0;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.guardPeriod_r18 = (PosSRS_BWA_RRC_Inactive_r18_GuardPeriod_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSRS_BWA_RRC_Inactive_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSRS_BWA_RRC_Inactive_r18(PosSRS_BWA_RRC_Inactive_r18& value)
{
    if (value.has_numOfCarriersIntraBandContiguous_r18) {
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR1_r18) {
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR2_r18) {
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR1_r18) {
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR2_r18) {
    }
    if (value.has_maximumAggregatedResourceSet_r18) {
    }
    if (value.has_maximumAggregatedResourcePeriodic_r18) {
    }
    if (value.has_maximumAggregatedResourceSemi_r18) {
    }
    if (value.has_maximumAggregatedResourcePeriodicPerSlot_r18) {
    }
    if (value.has_maximumAggregatedResourceSemiPerSlot_r18) {
    }
    if (value.has_supportOfSameSRS_PowerReduction_r18) {
    }
    if (value.has_guardPeriod_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17(Encoder& enc, const PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_maxSRSposBandwidthForEachSCS_withinCC_FR1_r17);
    enc.WriteBit(value.has_maxSRSposBandwidthForEachSCS_withinCC_FR2_r17);
    enc.WriteBit(value.has_maxNumOfSRSposResourceSets_r17);
    enc.WriteBit(value.has_maxNumOfPeriodicSRSposResources_r17);
    enc.WriteBit(value.has_maxNumOfPeriodicSRSposResourcesPerSlot_r17);
    enc.WriteBit(value.has_differentNumerologyBetweenSRSposAndInitialBWP_r17);
    enc.WriteBit(value.has_srsPosWithoutRestrictionOnBWP_r17);
    enc.WriteBit(value.has_maxNumOfPeriodicAndSemipersistentSRSposResources_r17);
    enc.WriteBit(value.has_maxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17);
    enc.WriteBit(value.has_differentCenterFreqBetweenSRSposAndInitialBWP_r17);
    enc.WriteBit(value.has_switchingTimeSRS_TX_OtherTX_r17);
    enc.WriteBit(value.has_maxNumOfSemiPersistentSRSposResources_r17);
    enc.WriteBit(value.has_maxNumOfSemiPersistentSRSposResourcesPerSlot_r17);
    if (value.has_maxSRSposBandwidthForEachSCS_withinCC_FR1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxSRSposBandwidthForEachSCS_withinCC_FR1_r17), 0, 14);
    }
    if (value.has_maxSRSposBandwidthForEachSCS_withinCC_FR2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxSRSposBandwidthForEachSCS_withinCC_FR2_r17), 0, 3);
    }
    if (value.has_maxNumOfSRSposResourceSets_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumOfSRSposResourceSets_r17), 0, 5);
    }
    if (value.has_maxNumOfPeriodicSRSposResources_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumOfPeriodicSRSposResources_r17), 0, 6);
    }
    if (value.has_maxNumOfPeriodicSRSposResourcesPerSlot_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumOfPeriodicSRSposResourcesPerSlot_r17), 0, 9);
    }
    if (value.has_differentNumerologyBetweenSRSposAndInitialBWP_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.differentNumerologyBetweenSRSposAndInitialBWP_r17), 0, 0);
    }
    if (value.has_srsPosWithoutRestrictionOnBWP_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srsPosWithoutRestrictionOnBWP_r17), 0, 0);
    }
    if (value.has_maxNumOfPeriodicAndSemipersistentSRSposResources_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumOfPeriodicAndSemipersistentSRSposResources_r17), 0, 6);
    }
    if (value.has_maxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17), 0, 9);
    }
    if (value.has_differentCenterFreqBetweenSRSposAndInitialBWP_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.differentCenterFreqBetweenSRSposAndInitialBWP_r17), 0, 0);
    }
    if (value.has_switchingTimeSRS_TX_OtherTX_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switchingTimeSRS_TX_OtherTX_r17), 0, 4);
    }
    if (value.has_maxNumOfSemiPersistentSRSposResources_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumOfSemiPersistentSRSposResources_r17), 0, 6);
    }
    if (value.has_maxNumOfSemiPersistentSRSposResourcesPerSlot_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumOfSemiPersistentSRSposResourcesPerSlot_r17), 0, 9);
    }
    return enc.Error();
}

ErrorCode Decode_PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17(Decoder& dec, PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    bool present_10 = false;
    bool present_11 = false;
    bool present_12 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (!dec.ReadBit(present_11)) { goto fail; }
    if (!dec.ReadBit(present_12)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 14, tmp_value)) { goto fail; }
        value.maxSRSposBandwidthForEachSCS_withinCC_FR1_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR1_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxSRSposBandwidthForEachSCS_withinCC_FR2_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxSRSposBandwidthForEachSCS_withinCC_FR2_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumOfSRSposResourceSets_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSRSposResourceSets_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumOfPeriodicSRSposResources_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResources_r17)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumOfPeriodicSRSposResourcesPerSlot_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicSRSposResourcesPerSlot_r17)tmp_value;
    }
    if (present_5) {
        value.differentNumerologyBetweenSRSposAndInitialBWP_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentNumerologyBetweenSRSposAndInitialBWP_r17)0;
    }
    if (present_6) {
        value.srsPosWithoutRestrictionOnBWP_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SrsPosWithoutRestrictionOnBWP_r17)0;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumOfPeriodicAndSemipersistentSRSposResources_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResources_r17)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17)tmp_value;
    }
    if (present_9) {
        value.differentCenterFreqBetweenSRSposAndInitialBWP_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_DifferentCenterFreqBetweenSRSposAndInitialBWP_r17)0;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.switchingTimeSRS_TX_OtherTX_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_SwitchingTimeSRS_TX_OtherTX_r17)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumOfSemiPersistentSRSposResources_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResources_r17)tmp_value;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumOfSemiPersistentSRSposResourcesPerSlot_r17 = (PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17(PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17& value)
{
    if (value.has_maxSRSposBandwidthForEachSCS_withinCC_FR1_r17) {
    }
    if (value.has_maxSRSposBandwidthForEachSCS_withinCC_FR2_r17) {
    }
    if (value.has_maxNumOfSRSposResourceSets_r17) {
    }
    if (value.has_maxNumOfPeriodicSRSposResources_r17) {
    }
    if (value.has_maxNumOfPeriodicSRSposResourcesPerSlot_r17) {
    }
    if (value.has_differentNumerologyBetweenSRSposAndInitialBWP_r17) {
    }
    if (value.has_srsPosWithoutRestrictionOnBWP_r17) {
    }
    if (value.has_maxNumOfPeriodicAndSemipersistentSRSposResources_r17) {
    }
    if (value.has_maxNumOfPeriodicAndSemipersistentSRSposResourcesPerSlot_r17) {
    }
    if (value.has_differentCenterFreqBetweenSRSposAndInitialBWP_r17) {
    }
    if (value.has_switchingTimeSRS_TX_OtherTX_r17) {
    }
    if (value.has_maxNumOfSemiPersistentSRSposResources_r17) {
    }
    if (value.has_maxNumOfSemiPersistentSRSposResourcesPerSlot_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PosSRS_TxFrequencyHoppingRRC_Connected_r18(Encoder& enc, const PosSRS_TxFrequencyHoppingRRC_Connected_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_maximumSRS_BandwidthAcrossAllHopsFR1_r18);
    enc.WriteBit(value.has_maximumSRS_BandwidthAcrossAllHopsFR2_r18);
    enc.WriteBit(value.has_maximumTxFH_Hops_r18);
    enc.WriteBit(value.has_rf_TxRetunTimeFR1_r18);
    enc.WriteBit(value.has_rf_TxRetunTimeFR2_r18);
    enc.WriteBit(value.has_switchTimeBetweenActiveBWP_FrequencyHop_r18);
    enc.WriteBit(value.has_numOfOverlappingPRB_r18);
    enc.WriteBit(value.has_maximumSRS_ResourcePeriodic_r18);
    enc.WriteBit(value.has_maximumSRS_ResourceAperiodic_r18);
    enc.WriteBit(value.has_maximumSRS_ResourceSemipersistent_r18);
    if (value.has_maximumSRS_BandwidthAcrossAllHopsFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumSRS_BandwidthAcrossAllHopsFR1_r18), 0, 3);
    }
    if (value.has_maximumSRS_BandwidthAcrossAllHopsFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumSRS_BandwidthAcrossAllHopsFR2_r18), 0, 2);
    }
    if (value.has_maximumTxFH_Hops_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumTxFH_Hops_r18), 0, 4);
    }
    if (value.has_rf_TxRetunTimeFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rf_TxRetunTimeFR1_r18), 0, 2);
    }
    if (value.has_rf_TxRetunTimeFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rf_TxRetunTimeFR2_r18), 0, 2);
    }
    if (value.has_switchTimeBetweenActiveBWP_FrequencyHop_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switchTimeBetweenActiveBWP_FrequencyHop_r18), 0, 4);
    }
    if (value.has_numOfOverlappingPRB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numOfOverlappingPRB_r18), 0, 3);
    }
    if (value.has_maximumSRS_ResourcePeriodic_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumSRS_ResourcePeriodic_r18), 0, 6);
    }
    if (value.has_maximumSRS_ResourceAperiodic_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumSRS_ResourceAperiodic_r18), 0, 7);
    }
    if (value.has_maximumSRS_ResourceSemipersistent_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumSRS_ResourceSemipersistent_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_PosSRS_TxFrequencyHoppingRRC_Connected_r18(Decoder& dec, PosSRS_TxFrequencyHoppingRRC_Connected_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    bool present_9 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maximumSRS_BandwidthAcrossAllHopsFR1_r18 = (PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR1_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maximumSRS_BandwidthAcrossAllHopsFR2_r18 = (PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_BandwidthAcrossAllHopsFR2_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maximumTxFH_Hops_r18 = (PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumTxFH_Hops_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.rf_TxRetunTimeFR1_r18 = (PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR1_r18)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.rf_TxRetunTimeFR2_r18 = (PosSRS_TxFrequencyHoppingRRC_Connected_r18_Rf_TxRetunTimeFR2_r18)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.switchTimeBetweenActiveBWP_FrequencyHop_r18 = (PosSRS_TxFrequencyHoppingRRC_Connected_r18_SwitchTimeBetweenActiveBWP_FrequencyHop_r18)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.numOfOverlappingPRB_r18 = (PosSRS_TxFrequencyHoppingRRC_Connected_r18_NumOfOverlappingPRB_r18)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maximumSRS_ResourcePeriodic_r18 = (PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourcePeriodic_r18)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumSRS_ResourceAperiodic_r18 = (PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceAperiodic_r18)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumSRS_ResourceSemipersistent_r18 = (PosSRS_TxFrequencyHoppingRRC_Connected_r18_MaximumSRS_ResourceSemipersistent_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSRS_TxFrequencyHoppingRRC_Connected_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSRS_TxFrequencyHoppingRRC_Connected_r18(PosSRS_TxFrequencyHoppingRRC_Connected_r18& value)
{
    if (value.has_maximumSRS_BandwidthAcrossAllHopsFR1_r18) {
    }
    if (value.has_maximumSRS_BandwidthAcrossAllHopsFR2_r18) {
    }
    if (value.has_maximumTxFH_Hops_r18) {
    }
    if (value.has_rf_TxRetunTimeFR1_r18) {
    }
    if (value.has_rf_TxRetunTimeFR2_r18) {
    }
    if (value.has_switchTimeBetweenActiveBWP_FrequencyHop_r18) {
    }
    if (value.has_numOfOverlappingPRB_r18) {
    }
    if (value.has_maximumSRS_ResourcePeriodic_r18) {
    }
    if (value.has_maximumSRS_ResourceAperiodic_r18) {
    }
    if (value.has_maximumSRS_ResourceSemipersistent_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PosSRS_TxFrequencyHoppingRRC_Inactive_r18(Encoder& enc, const PosSRS_TxFrequencyHoppingRRC_Inactive_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_maximumSRS_BandwidthAcrossAllHops_FR1_r18);
    enc.WriteBit(value.has_maximumSRS_BandwidthAcrossAllHops_FR2_r18);
    enc.WriteBit(value.has_maximumTxFH_Hops_r18);
    enc.WriteBit(value.has_rf_TxRetunTimeFR1_r18);
    enc.WriteBit(value.has_rf_TxRetunTimeFR2_r18);
    enc.WriteBit(value.has_switchTimeBetweenActiveBWP_FrequencyHop);
    enc.WriteBit(value.has_numOfOverlappingPRB_r18);
    enc.WriteBit(value.has_maximumSRS_Resource_Periodic_r18);
    enc.WriteBit(value.has_maximumSRS_Resource_Semipersistent_r18);
    if (value.has_maximumSRS_BandwidthAcrossAllHops_FR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumSRS_BandwidthAcrossAllHops_FR1_r18), 0, 3);
    }
    if (value.has_maximumSRS_BandwidthAcrossAllHops_FR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumSRS_BandwidthAcrossAllHops_FR2_r18), 0, 2);
    }
    if (value.has_maximumTxFH_Hops_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumTxFH_Hops_r18), 0, 4);
    }
    if (value.has_rf_TxRetunTimeFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rf_TxRetunTimeFR1_r18), 0, 2);
    }
    if (value.has_rf_TxRetunTimeFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rf_TxRetunTimeFR2_r18), 0, 2);
    }
    if (value.has_switchTimeBetweenActiveBWP_FrequencyHop) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switchTimeBetweenActiveBWP_FrequencyHop), 0, 4);
    }
    if (value.has_numOfOverlappingPRB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numOfOverlappingPRB_r18), 0, 3);
    }
    if (value.has_maximumSRS_Resource_Periodic_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumSRS_Resource_Periodic_r18), 0, 6);
    }
    if (value.has_maximumSRS_Resource_Semipersistent_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumSRS_Resource_Semipersistent_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_PosSRS_TxFrequencyHoppingRRC_Inactive_r18(Decoder& dec, PosSRS_TxFrequencyHoppingRRC_Inactive_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    bool present_5 = false;
    bool present_6 = false;
    bool present_7 = false;
    bool present_8 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maximumSRS_BandwidthAcrossAllHops_FR1_r18 = (PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR1_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maximumSRS_BandwidthAcrossAllHops_FR2_r18 = (PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_BandwidthAcrossAllHops_FR2_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maximumTxFH_Hops_r18 = (PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumTxFH_Hops_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.rf_TxRetunTimeFR1_r18 = (PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR1_r18)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.rf_TxRetunTimeFR2_r18 = (PosSRS_TxFrequencyHoppingRRC_Inactive_r18_Rf_TxRetunTimeFR2_r18)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.switchTimeBetweenActiveBWP_FrequencyHop = (PosSRS_TxFrequencyHoppingRRC_Inactive_r18_SwitchTimeBetweenActiveBWP_FrequencyHop)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.numOfOverlappingPRB_r18 = (PosSRS_TxFrequencyHoppingRRC_Inactive_r18_NumOfOverlappingPRB_r18)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maximumSRS_Resource_Periodic_r18 = (PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Periodic_r18)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumSRS_Resource_Semipersistent_r18 = (PosSRS_TxFrequencyHoppingRRC_Inactive_r18_MaximumSRS_Resource_Semipersistent_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSRS_TxFrequencyHoppingRRC_Inactive_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSRS_TxFrequencyHoppingRRC_Inactive_r18(PosSRS_TxFrequencyHoppingRRC_Inactive_r18& value)
{
    if (value.has_maximumSRS_BandwidthAcrossAllHops_FR1_r18) {
    }
    if (value.has_maximumSRS_BandwidthAcrossAllHops_FR2_r18) {
    }
    if (value.has_maximumTxFH_Hops_r18) {
    }
    if (value.has_rf_TxRetunTimeFR1_r18) {
    }
    if (value.has_rf_TxRetunTimeFR2_r18) {
    }
    if (value.has_switchTimeBetweenActiveBWP_FrequencyHop) {
    }
    if (value.has_numOfOverlappingPRB_r18) {
    }
    if (value.has_maximumSRS_Resource_Periodic_r18) {
    }
    if (value.has_maximumSRS_Resource_Semipersistent_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PowSav_ParametersCommon_r16(Encoder& enc, const PowSav_ParametersCommon_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_drx_Preference_r16);
    enc.WriteBit(value.has_maxCC_Preference_r16);
    enc.WriteBit(value.has_releasePreference_r16);
    enc.WriteBit(value.has_minSchedulingOffsetPreference_r16);
    if (value.has_drx_Preference_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drx_Preference_r16), 0, 0);
    }
    if (value.has_maxCC_Preference_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCC_Preference_r16), 0, 0);
    }
    if (value.has_releasePreference_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.releasePreference_r16), 0, 0);
    }
    if (value.has_minSchedulingOffsetPreference_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.minSchedulingOffsetPreference_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PowSav_ParametersCommon_r16(Decoder& dec, PowSav_ParametersCommon_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        value.drx_Preference_r16 = (PowSav_ParametersCommon_r16_Drx_Preference_r16)0;
    }
    if (present_1) {
        value.maxCC_Preference_r16 = (PowSav_ParametersCommon_r16_MaxCC_Preference_r16)0;
    }
    if (present_2) {
        value.releasePreference_r16 = (PowSav_ParametersCommon_r16_ReleasePreference_r16)0;
    }
    if (present_3) {
        value.minSchedulingOffsetPreference_r16 = (PowSav_ParametersCommon_r16_MinSchedulingOffsetPreference_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PowSav_ParametersCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PowSav_ParametersCommon_r16(PowSav_ParametersCommon_r16& value)
{
    if (value.has_drx_Preference_r16) {
    }
    if (value.has_maxCC_Preference_r16) {
    }
    if (value.has_releasePreference_r16) {
    }
    if (value.has_minSchedulingOffsetPreference_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PowSav_ParametersFRX_Diff_r16(Encoder& enc, const PowSav_ParametersFRX_Diff_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_maxBW_Preference_r16);
    enc.WriteBit(value.has_maxMIMO_LayerPreference_r16);
    if (value.has_maxBW_Preference_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxBW_Preference_r16), 0, 0);
    }
    if (value.has_maxMIMO_LayerPreference_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_LayerPreference_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PowSav_ParametersFRX_Diff_r16(Decoder& dec, PowSav_ParametersFRX_Diff_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.maxBW_Preference_r16 = (PowSav_ParametersFRX_Diff_r16_MaxBW_Preference_r16)0;
    }
    if (present_1) {
        value.maxMIMO_LayerPreference_r16 = (PowSav_ParametersFRX_Diff_r16_MaxMIMO_LayerPreference_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PowSav_ParametersFRX_Diff_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PowSav_ParametersFRX_Diff_r16(PowSav_ParametersFRX_Diff_r16& value)
{
    if (value.has_maxBW_Preference_r16) {
    }
    if (value.has_maxMIMO_LayerPreference_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PowSav_Parameters_r16(Encoder& enc, const PowSav_Parameters_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_powSav_ParametersCommon_r16);
    enc.WriteBit(value.has_powSav_ParametersFRX_Diff_r16);
    if (value.has_powSav_ParametersCommon_r16) {
        Encode_PowSav_ParametersCommon_r16(enc, value.powSav_ParametersCommon_r16);
    }
    if (value.has_powSav_ParametersFRX_Diff_r16) {
        Encode_PowSav_ParametersFRX_Diff_r16(enc, value.powSav_ParametersFRX_Diff_r16);
    }
    return enc.Error();
}

ErrorCode Decode_PowSav_Parameters_r16(Decoder& dec, PowSav_Parameters_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PowSav_ParametersCommon_r16(dec, value.powSav_ParametersCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PowSav_ParametersFRX_Diff_r16(dec, value.powSav_ParametersFRX_Diff_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PowSav_Parameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PowSav_Parameters_r16(PowSav_Parameters_r16& value)
{
    if (value.has_powSav_ParametersCommon_r16) {
        Free_PowSav_ParametersCommon_r16(value.powSav_ParametersCommon_r16);
    }
    if (value.has_powSav_ParametersFRX_Diff_r16) {
        Free_PowSav_ParametersFRX_Diff_r16(value.powSav_ParametersFRX_Diff_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PowSav_ParametersFR2_2_r17(Encoder& enc, const PowSav_ParametersFR2_2_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_maxBW_Preference_r17);
    enc.WriteBit(value.has_maxMIMO_LayerPreference_r17);
    if (value.has_maxBW_Preference_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxBW_Preference_r17), 0, 0);
    }
    if (value.has_maxMIMO_LayerPreference_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_LayerPreference_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PowSav_ParametersFR2_2_r17(Decoder& dec, PowSav_ParametersFR2_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.maxBW_Preference_r17 = (PowSav_ParametersFR2_2_r17_MaxBW_Preference_r17)0;
    }
    if (present_1) {
        value.maxMIMO_LayerPreference_r17 = (PowSav_ParametersFR2_2_r17_MaxMIMO_LayerPreference_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PowSav_ParametersFR2_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PowSav_ParametersFR2_2_r17(PowSav_ParametersFR2_2_r17& value)
{
    if (value.has_maxBW_Preference_r17) {
    }
    if (value.has_maxMIMO_LayerPreference_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PowSav_Parameters_v1700(Encoder& enc, const PowSav_Parameters_v1700& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_powSav_ParametersFR2_2_r17);
    if (value.has_powSav_ParametersFR2_2_r17) {
        Encode_PowSav_ParametersFR2_2_r17(enc, value.powSav_ParametersFR2_2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PowSav_Parameters_v1700(Decoder& dec, PowSav_Parameters_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_PowSav_ParametersFR2_2_r17(dec, value.powSav_ParametersFR2_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PowSav_Parameters_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PowSav_Parameters_v1700(PowSav_Parameters_v1700& value)
{
    if (value.has_powSav_ParametersFR2_2_r17) {
        Free_PowSav_ParametersFR2_2_r17(value.powSav_ParametersFR2_2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17(Encoder& enc, const PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.ppw_durationOfPRS_ProcessingSymbolsN_r17), 0, 17);
    enc.WriteConstrainedInteger((std::int64_t)(value.ppw_durationOfPRS_ProcessingSymbolsT_r17), 0, 12);
    return enc.Error();
}

ErrorCode Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17(Decoder& dec, PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 17, tmp_value)) { goto fail; }
        value.ppw_durationOfPRS_ProcessingSymbolsN_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_a60eabdb)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 12, tmp_value)) { goto fail; }
        value.ppw_durationOfPRS_ProcessingSymbolsT_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_c961df43)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17(Encoder& enc, const PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.ppw_durationOfPRS_ProcessingSymbolsN2_r17), 0, 10);
    enc.WriteConstrainedInteger((std::int64_t)(value.ppw_durationOfPRS_ProcessingSymbolsT2_r17), 0, 3);
    return enc.Error();
}

ErrorCode Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17(Decoder& dec, PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.ppw_durationOfPRS_ProcessingSymbolsN2_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_d5e0ae07)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ppw_durationOfPRS_ProcessingSymbolsT2_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_5fc2046e)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17(Encoder& enc, const PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag_ppw_durationOfPRS_Processing1_r17:
        Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17(enc, value.u.ppw_durationOfPRS_Processing1_r17);
        break;
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag_ppw_durationOfPRS_Processing2_r17:
        Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17(enc, value.u.ppw_durationOfPRS_Processing2_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17(Decoder& dec, PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag)root_index;
    switch (value.tag) {
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag_ppw_durationOfPRS_Processing1_r17: {
        if (Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17(dec, value.u.ppw_durationOfPRS_Processing1_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag_ppw_durationOfPRS_Processing2_r17: {
        if (Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17(dec, value.u.ppw_durationOfPRS_Processing2_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17& value)
{
    switch (value.tag) {
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag_ppw_durationOfPRS_Processing1_r17:
        Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing1_r17(value.u.ppw_durationOfPRS_Processing1_r17);
        break;
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Tag_ppw_durationOfPRS_Processing2_r17:
        Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17_Ppw_durationOfPRS_Processing2_r17(value.u.ppw_durationOfPRS_Processing2_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17(Encoder& enc, const PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_scs15_r17);
    enc.WriteBit(value.has_scs30_r17);
    enc.WriteBit(value.has_scs60_r17);
    enc.WriteBit(value.has_scs120_r17);
    if (value.has_scs15_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs15_r17), 0, 10);
    }
    if (value.has_scs30_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs30_r17), 0, 10);
    }
    if (value.has_scs60_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs60_r17), 0, 10);
    }
    if (value.has_scs120_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs120_r17), 0, 10);
    }
    return enc.Error();
}

ErrorCode Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17(Decoder& dec, PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs15_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs15_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs30_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs30_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs60_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs60_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs120_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17_Scs120_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17& value)
{
    if (value.has_scs15_r17) {
    }
    if (value.has_scs30_r17) {
    }
    if (value.has_scs60_r17) {
    }
    if (value.has_scs120_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17(Encoder& enc, const PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag_fr1_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.fr1_r17), 0, 6);
        break;
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag_fr2_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.fr2_r17), 0, 3);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17(Decoder& dec, PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag)root_index;
    switch (value.tag) {
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag_fr1_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.u.fr1_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr1_r17)tmp_value;
        break;
    }
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag_fr2_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.fr2_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Fr2_r17)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17& value)
{
    switch (value.tag) {
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag_fr1_r17:
        break;
    case PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17_Tag_fr2_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17(Encoder& enc, const PRS_ProcessingCapabilityOutsideMGinPPWperType_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_ppw_durationOfPRS_Processing_r17);
    enc.WriteBit(value.has_ppw_maxNumOfDL_Bandwidth_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.prsProcessingType_r17), 0, 2);
    {
        const std::int64_t enum_value = (std::int64_t)(value.ppw_dl_PRS_BufferType_r17);
        if (enum_value < 0) {
            return enc.Fail(ErrorCode_InvalidEnumValue);
        }
        if (enum_value < 2) {
            enc.WriteBit(false);
            enc.WriteConstrainedInteger(enum_value, 0, 1);
        } else {
            enc.WriteBit(true);
            enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 2));
        }
    }
    if (value.has_ppw_durationOfPRS_Processing_r17) {
        Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17(enc, value.ppw_durationOfPRS_Processing_r17);
    }
    Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17(enc, value.ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17);
    if (value.has_ppw_maxNumOfDL_Bandwidth_r17) {
        Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17(enc, value.ppw_maxNumOfDL_Bandwidth_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17(Decoder& dec, PRS_ProcessingCapabilityOutsideMGinPPWperType_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.prsProcessingType_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_PrsProcessingType_r17)tmp_value;
    }
    {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)2 + (std::int64_t)extension_index;
        }
        value.ppw_dl_PRS_BufferType_r17 = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_dl_PRS_BufferType_r17)enum_value;
    }
    if (present_0) {
        if (Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17(dec, value.ppw_durationOfPRS_Processing_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17(dec, value.ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17(dec, value.ppw_maxNumOfDL_Bandwidth_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17& value)
{
    if (value.has_ppw_durationOfPRS_Processing_r17) {
        Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_durationOfPRS_Processing_r17(value.ppw_durationOfPRS_Processing_r17);
    }
    Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17(value.ppw_maxNumOfDL_PRS_ResProcessedPerSlot_r17);
    if (value.has_ppw_maxNumOfDL_Bandwidth_r17) {
        Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17_Ppw_maxNumOfDL_Bandwidth_r17(value.ppw_maxNumOfDL_Bandwidth_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RedCapParameters_r17(Encoder& enc, const RedCapParameters_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_supportOfRedCap_r17);
    enc.WriteBit(value.has_supportOf16DRB_RedCap_r17);
    if (value.has_supportOfRedCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportOfRedCap_r17), 0, 0);
    }
    if (value.has_supportOf16DRB_RedCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportOf16DRB_RedCap_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RedCapParameters_r17(Decoder& dec, RedCapParameters_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.supportOfRedCap_r17 = (RedCapParameters_r17_SupportOfRedCap_r17)0;
    }
    if (present_1) {
        value.supportOf16DRB_RedCap_r17 = (RedCapParameters_r17_SupportOf16DRB_RedCap_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RedCapParameters_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RedCapParameters_r17(RedCapParameters_r17& value)
{
    if (value.has_supportOfRedCap_r17) {
    }
    if (value.has_supportOf16DRB_RedCap_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RedCapParameters_v1740(Encoder& enc, const RedCapParameters_v1740& value)
{
    (void)value;
    enc.WriteBit(value.has_ncd_SSB_ForRedCapInitialBWP_SDT_r17);
    if (value.has_ncd_SSB_ForRedCapInitialBWP_SDT_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncd_SSB_ForRedCapInitialBWP_SDT_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RedCapParameters_v1740(Decoder& dec, RedCapParameters_v1740& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.ncd_SSB_ForRedCapInitialBWP_SDT_r17 = (RedCapParameters_v1740_Ncd_SSB_ForRedCapInitialBWP_SDT_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RedCapParameters_v1740(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RedCapParameters_v1740(RedCapParameters_v1740& value)
{
    if (value.has_ncd_SSB_ForRedCapInitialBWP_SDT_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RF_Parameters_ExtGroup1(Encoder& enc, const RF_Parameters_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1540);
    enc.WriteBit(value.has_srs_SwitchingTimeRequested);
    if (value.has_supportedBandCombinationList_v1540) {
        Encode_BandCombinationList_v1540(enc, value.supportedBandCombinationList_v1540);
    }
    if (value.has_srs_SwitchingTimeRequested) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_SwitchingTimeRequested), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup1(Decoder& dec, RF_Parameters_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1540(dec, value.supportedBandCombinationList_v1540) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.srs_SwitchingTimeRequested = (RF_Parameters_ExtGroup1_Srs_SwitchingTimeRequested)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup1(RF_Parameters_ExtGroup1& value)
{
    if (value.has_supportedBandCombinationList_v1540) {
        Free_BandCombinationList_v1540(value.supportedBandCombinationList_v1540);
    }
    if (value.has_srs_SwitchingTimeRequested) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RF_Parameters_ExtGroup2(Encoder& enc, const RF_Parameters_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1550);
    if (value.has_supportedBandCombinationList_v1550) {
        Encode_BandCombinationList_v1550(enc, value.supportedBandCombinationList_v1550);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup2(Decoder& dec, RF_Parameters_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1550(dec, value.supportedBandCombinationList_v1550) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup2(RF_Parameters_ExtGroup2& value)
{
    if (value.has_supportedBandCombinationList_v1550) {
        Free_BandCombinationList_v1550(value.supportedBandCombinationList_v1550);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RF_Parameters_ExtGroup3(Encoder& enc, const RF_Parameters_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1560);
    if (value.has_supportedBandCombinationList_v1560) {
        Encode_BandCombinationList_v1560(enc, value.supportedBandCombinationList_v1560);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup3(Decoder& dec, RF_Parameters_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1560(dec, value.supportedBandCombinationList_v1560) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup3(RF_Parameters_ExtGroup3& value)
{
    if (value.has_supportedBandCombinationList_v1560) {
        Free_BandCombinationList_v1560(value.supportedBandCombinationList_v1560);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RF_Parameters_ExtGroup4(Encoder& enc, const RF_Parameters_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1610);
    enc.WriteBit(value.has_supportedBandCombinationListSidelinkEUTRA_NR_r16);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_r16);
    if (value.has_supportedBandCombinationList_v1610) {
        Encode_BandCombinationList_v1610(enc, value.supportedBandCombinationList_v1610);
    }
    if (value.has_supportedBandCombinationListSidelinkEUTRA_NR_r16) {
        Encode_BandCombinationListSidelinkEUTRA_NR_r16(enc, value.supportedBandCombinationListSidelinkEUTRA_NR_r16);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_r16) {
        Encode_BandCombinationList_UplinkTxSwitch_r16(enc, value.supportedBandCombinationList_UplinkTxSwitch_r16);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup4(Decoder& dec, RF_Parameters_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1610(dec, value.supportedBandCombinationList_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationListSidelinkEUTRA_NR_r16(dec, value.supportedBandCombinationListSidelinkEUTRA_NR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationList_UplinkTxSwitch_r16(dec, value.supportedBandCombinationList_UplinkTxSwitch_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup4(RF_Parameters_ExtGroup4& value)
{
    if (value.has_supportedBandCombinationList_v1610) {
        Free_BandCombinationList_v1610(value.supportedBandCombinationList_v1610);
    }
    if (value.has_supportedBandCombinationListSidelinkEUTRA_NR_r16) {
        Free_BandCombinationListSidelinkEUTRA_NR_r16(value.supportedBandCombinationListSidelinkEUTRA_NR_r16);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_r16) {
        Free_BandCombinationList_UplinkTxSwitch_r16(value.supportedBandCombinationList_UplinkTxSwitch_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RF_Parameters_ExtGroup5(Encoder& enc, const RF_Parameters_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1630);
    enc.WriteBit(value.has_supportedBandCombinationListSidelinkEUTRA_NR_v1630);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1630);
    if (value.has_supportedBandCombinationList_v1630) {
        Encode_BandCombinationList_v1630(enc, value.supportedBandCombinationList_v1630);
    }
    if (value.has_supportedBandCombinationListSidelinkEUTRA_NR_v1630) {
        Encode_BandCombinationListSidelinkEUTRA_NR_v1630(enc, value.supportedBandCombinationListSidelinkEUTRA_NR_v1630);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1630) {
        Encode_BandCombinationList_UplinkTxSwitch_v1630(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1630);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup5(Decoder& dec, RF_Parameters_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1630(dec, value.supportedBandCombinationList_v1630) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationListSidelinkEUTRA_NR_v1630(dec, value.supportedBandCombinationListSidelinkEUTRA_NR_v1630) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1630(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1630) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup5(RF_Parameters_ExtGroup5& value)
{
    if (value.has_supportedBandCombinationList_v1630) {
        Free_BandCombinationList_v1630(value.supportedBandCombinationList_v1630);
    }
    if (value.has_supportedBandCombinationListSidelinkEUTRA_NR_v1630) {
        Free_BandCombinationListSidelinkEUTRA_NR_v1630(value.supportedBandCombinationListSidelinkEUTRA_NR_v1630);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1630) {
        Free_BandCombinationList_UplinkTxSwitch_v1630(value.supportedBandCombinationList_UplinkTxSwitch_v1630);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RF_Parameters_ExtGroup6(Encoder& enc, const RF_Parameters_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1640);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1640);
    if (value.has_supportedBandCombinationList_v1640) {
        Encode_BandCombinationList_v1640(enc, value.supportedBandCombinationList_v1640);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1640) {
        Encode_BandCombinationList_UplinkTxSwitch_v1640(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1640);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup6(Decoder& dec, RF_Parameters_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1640(dec, value.supportedBandCombinationList_v1640) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1640(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1640) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup6(RF_Parameters_ExtGroup6& value)
{
    if (value.has_supportedBandCombinationList_v1640) {
        Free_BandCombinationList_v1640(value.supportedBandCombinationList_v1640);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1640) {
        Free_BandCombinationList_UplinkTxSwitch_v1640(value.supportedBandCombinationList_UplinkTxSwitch_v1640);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
