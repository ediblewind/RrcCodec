/* ============================================================================
 * src/generated/codec_part007.cpp — 生成的编解码函数
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

// --------------------------------------------------------------------------
// SetupRelease_DMRS_BundlingPUSCH_Config_r17：ASN.1 SetupRelease<DMRS-BundlingPUSCH-Config-r17>；源文件第 10351 行；CHOICE。
// Encode_SetupRelease_DMRS_BundlingPUSCH_Config_r17 只读不分配；Decode_SetupRelease_DMRS_BundlingPUSCH_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DMRS_BundlingPUSCH_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DMRS_BundlingPUSCH_Config_r17(Encoder& enc, const SetupRelease_DMRS_BundlingPUSCH_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag_setup:
        Encode_DMRS_BundlingPUSCH_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DMRS_BundlingPUSCH_Config_r17(Decoder& dec, SetupRelease_DMRS_BundlingPUSCH_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag_setup: {
        if (Decode_DMRS_BundlingPUSCH_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DMRS_BundlingPUSCH_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DMRS_BundlingPUSCH_Config_r17(SetupRelease_DMRS_BundlingPUSCH_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag_release:
        break;
    case SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag_setup:
        Free_DMRS_BundlingPUSCH_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_Config_ExtGroup2：ASN.1 PUSCH_Config_ExtGroup2；源文件第 10338 行；扩展添加组 [[ ]]。
// Encode_PUSCH_Config_ExtGroup2 只读不分配；Decode_PUSCH_Config_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_Config_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_Config_ExtGroup2(Encoder& enc, const PUSCH_Config_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_ul_AccessConfigListDCI_0_2_r17);
    enc.WriteBit(value.has_betaOffsetsCrossPri0_r17);
    enc.WriteBit(value.has_betaOffsetsCrossPri1_r17);
    enc.WriteBit(value.has_betaOffsetsCrossPri0DCI_0_2_r17);
    enc.WriteBit(value.has_betaOffsetsCrossPri1DCI_0_2_r17);
    enc.WriteBit(value.has_mappingPattern_r17);
    enc.WriteBit(value.has_secondTPCFieldDCI_0_1_r17);
    enc.WriteBit(value.has_secondTPCFieldDCI_0_2_r17);
    enc.WriteBit(value.has_sequenceOffsetForRV_r17);
    enc.WriteBit(value.has_ul_AccessConfigListDCI_0_1_r17);
    enc.WriteBit(value.has_minimumSchedulingOffsetK2_r17);
    enc.WriteBit(value.has_availableSlotCounting_r17);
    enc.WriteBit(value.has_dmrs_BundlingPUSCH_Config_r17);
    enc.WriteBit(value.has_harq_ProcessNumberSizeDCI_0_2_v1700);
    enc.WriteBit(value.has_harq_ProcessNumberSizeDCI_0_1_r17);
    enc.WriteBit(value.has_mpe_ResourcePoolToAddModList_r17);
    enc.WriteBit(value.has_mpe_ResourcePoolToReleaseList_r17);
    if (value.has_ul_AccessConfigListDCI_0_2_r17) {
        Encode_SetupRelease_UL_AccessConfigListDCI_0_2_r17(enc, value.ul_AccessConfigListDCI_0_2_r17);
    }
    if (value.has_betaOffsetsCrossPri0_r17) {
        Encode_SetupRelease_BetaOffsetsCrossPriSel_r17(enc, value.betaOffsetsCrossPri0_r17);
    }
    if (value.has_betaOffsetsCrossPri1_r17) {
        Encode_SetupRelease_BetaOffsetsCrossPriSel_r17(enc, value.betaOffsetsCrossPri1_r17);
    }
    if (value.has_betaOffsetsCrossPri0DCI_0_2_r17) {
        Encode_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(enc, value.betaOffsetsCrossPri0DCI_0_2_r17);
    }
    if (value.has_betaOffsetsCrossPri1DCI_0_2_r17) {
        Encode_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(enc, value.betaOffsetsCrossPri1DCI_0_2_r17);
    }
    if (value.has_mappingPattern_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mappingPattern_r17), 0, 1);
    }
    if (value.has_secondTPCFieldDCI_0_1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.secondTPCFieldDCI_0_1_r17), 0, 0);
    }
    if (value.has_secondTPCFieldDCI_0_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.secondTPCFieldDCI_0_2_r17), 0, 0);
    }
    if (value.has_sequenceOffsetForRV_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sequenceOffsetForRV_r17), 0, 3);
    }
    if (value.has_ul_AccessConfigListDCI_0_1_r17) {
        Encode_SetupRelease_UL_AccessConfigListDCI_0_1_r17(enc, value.ul_AccessConfigListDCI_0_1_r17);
    }
    if (value.has_minimumSchedulingOffsetK2_r17) {
        Encode_SetupRelease_MinSchedulingOffsetK2_Values_r17(enc, value.minimumSchedulingOffsetK2_r17);
    }
    if (value.has_availableSlotCounting_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.availableSlotCounting_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingPUSCH_Config_r17) {
        Encode_SetupRelease_DMRS_BundlingPUSCH_Config_r17(enc, value.dmrs_BundlingPUSCH_Config_r17);
    }
    if (value.has_harq_ProcessNumberSizeDCI_0_2_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcessNumberSizeDCI_0_2_v1700), 5, 5);
    }
    if (value.has_harq_ProcessNumberSizeDCI_0_1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcessNumberSizeDCI_0_1_r17), 5, 5);
    }
    if (value.has_mpe_ResourcePoolToAddModList_r17) {
enc.WriteConstrainedLength(value.mpe_ResourcePoolToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.mpe_ResourcePoolToAddModList_r17_count; ++i) {
    Encode_MPE_Resource_r17(enc, value.mpe_ResourcePoolToAddModList_r17_items[i]);
}
    }
    if (value.has_mpe_ResourcePoolToReleaseList_r17) {
enc.WriteConstrainedLength(value.mpe_ResourcePoolToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.mpe_ResourcePoolToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.mpe_ResourcePoolToReleaseList_r17_items[i]), 1, 64);
}
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_Config_ExtGroup2(Decoder& dec, PUSCH_Config_ExtGroup2& value)
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
        if (Decode_SetupRelease_UL_AccessConfigListDCI_0_2_r17(dec, value.ul_AccessConfigListDCI_0_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_BetaOffsetsCrossPriSel_r17(dec, value.betaOffsetsCrossPri0_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_BetaOffsetsCrossPriSel_r17(dec, value.betaOffsetsCrossPri1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(dec, value.betaOffsetsCrossPri0DCI_0_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(dec, value.betaOffsetsCrossPri1DCI_0_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mappingPattern_r17 = (PUSCH_Config_ExtGroup2_MappingPattern_r17)tmp_value;
    }
    if (present_6) {
        value.secondTPCFieldDCI_0_1_r17 = (PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_1_r17)0;
    }
    if (present_7) {
        value.secondTPCFieldDCI_0_2_r17 = (PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_2_r17)0;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sequenceOffsetForRV_r17 = (int64_t)tmp_value;
    }
    if (present_9) {
        if (Decode_SetupRelease_UL_AccessConfigListDCI_0_1_r17(dec, value.ul_AccessConfigListDCI_0_1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_SetupRelease_MinSchedulingOffsetK2_Values_r17(dec, value.minimumSchedulingOffsetK2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        value.availableSlotCounting_r17 = (PUSCH_Config_ExtGroup2_AvailableSlotCounting_r17)0;
    }
    if (present_12) {
        if (Decode_SetupRelease_DMRS_BundlingPUSCH_Config_r17(dec, value.dmrs_BundlingPUSCH_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(5, 5, tmp_value)) { goto fail; }
        value.harq_ProcessNumberSizeDCI_0_2_v1700 = (int64_t)tmp_value;
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(5, 5, tmp_value)) { goto fail; }
        value.harq_ProcessNumberSizeDCI_0_1_r17 = (int64_t)tmp_value;
    }
    if (present_15) {
if (!dec.ReadConstrainedLength(0u, 0u, value.mpe_ResourcePoolToAddModList_r17_count)) { goto fail; }
if (value.mpe_ResourcePoolToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.mpe_ResourcePoolToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.mpe_ResourcePoolToAddModList_r17_count > 0u) {
    value.mpe_ResourcePoolToAddModList_r17_items = (MPE_Resource_r17*)std::malloc((std::size_t)value.mpe_ResourcePoolToAddModList_r17_count * sizeof(MPE_Resource_r17));
    if (value.mpe_ResourcePoolToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.mpe_ResourcePoolToAddModList_r17_items, 0, (std::size_t)value.mpe_ResourcePoolToAddModList_r17_count * sizeof(MPE_Resource_r17));
}
for (std::uint32_t i = 0; i < value.mpe_ResourcePoolToAddModList_r17_count; ++i) {
    if (Decode_MPE_Resource_r17(dec, value.mpe_ResourcePoolToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_16) {
if (!dec.ReadConstrainedLength(0u, 0u, value.mpe_ResourcePoolToReleaseList_r17_count)) { goto fail; }
if (value.mpe_ResourcePoolToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.mpe_ResourcePoolToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.mpe_ResourcePoolToReleaseList_r17_count > 0u) {
    value.mpe_ResourcePoolToReleaseList_r17_items = (MPE_ResourceId_r17*)std::malloc((std::size_t)value.mpe_ResourcePoolToReleaseList_r17_count * sizeof(MPE_ResourceId_r17));
    if (value.mpe_ResourcePoolToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.mpe_ResourcePoolToReleaseList_r17_items, 0, (std::size_t)value.mpe_ResourcePoolToReleaseList_r17_count * sizeof(MPE_ResourceId_r17));
}
for (std::uint32_t i = 0; i < value.mpe_ResourcePoolToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.mpe_ResourcePoolToReleaseList_r17_items[i] = (MPE_ResourceId_r17)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_Config_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_Config_ExtGroup2(PUSCH_Config_ExtGroup2& value)
{
    if (value.has_ul_AccessConfigListDCI_0_2_r17) {
        Free_SetupRelease_UL_AccessConfigListDCI_0_2_r17(value.ul_AccessConfigListDCI_0_2_r17);
    }
    if (value.has_betaOffsetsCrossPri0_r17) {
        Free_SetupRelease_BetaOffsetsCrossPriSel_r17(value.betaOffsetsCrossPri0_r17);
    }
    if (value.has_betaOffsetsCrossPri1_r17) {
        Free_SetupRelease_BetaOffsetsCrossPriSel_r17(value.betaOffsetsCrossPri1_r17);
    }
    if (value.has_betaOffsetsCrossPri0DCI_0_2_r17) {
        Free_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(value.betaOffsetsCrossPri0DCI_0_2_r17);
    }
    if (value.has_betaOffsetsCrossPri1DCI_0_2_r17) {
        Free_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(value.betaOffsetsCrossPri1DCI_0_2_r17);
    }
    if (value.has_mappingPattern_r17) {
    }
    if (value.has_secondTPCFieldDCI_0_1_r17) {
    }
    if (value.has_secondTPCFieldDCI_0_2_r17) {
    }
    if (value.has_sequenceOffsetForRV_r17) {
    }
    if (value.has_ul_AccessConfigListDCI_0_1_r17) {
        Free_SetupRelease_UL_AccessConfigListDCI_0_1_r17(value.ul_AccessConfigListDCI_0_1_r17);
    }
    if (value.has_minimumSchedulingOffsetK2_r17) {
        Free_SetupRelease_MinSchedulingOffsetK2_Values_r17(value.minimumSchedulingOffsetK2_r17);
    }
    if (value.has_availableSlotCounting_r17) {
    }
    if (value.has_dmrs_BundlingPUSCH_Config_r17) {
        Free_SetupRelease_DMRS_BundlingPUSCH_Config_r17(value.dmrs_BundlingPUSCH_Config_r17);
    }
    if (value.has_harq_ProcessNumberSizeDCI_0_2_v1700) {
    }
    if (value.has_harq_ProcessNumberSizeDCI_0_1_r17) {
    }
    if (value.has_mpe_ResourcePoolToAddModList_r17) {
        if (value.mpe_ResourcePoolToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.mpe_ResourcePoolToAddModList_r17_count; ++i) {
                Free_MPE_Resource_r17(value.mpe_ResourcePoolToAddModList_r17_items[i]);
            }
            std::free(value.mpe_ResourcePoolToAddModList_r17_items);
            value.mpe_ResourcePoolToAddModList_r17_items = nullptr;
        }
        value.mpe_ResourcePoolToAddModList_r17_count = 0;
    }
    if (value.has_mpe_ResourcePoolToReleaseList_r17) {
        if (value.mpe_ResourcePoolToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.mpe_ResourcePoolToReleaseList_r17_count; ++i) {
            }
            std::free(value.mpe_ResourcePoolToReleaseList_r17_items);
            value.mpe_ResourcePoolToReleaseList_r17_items = nullptr;
        }
        value.mpe_ResourcePoolToReleaseList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_PowerControl：ASN.1 PUSCH-PowerControl；源文件第 10473 行；SEQUENCE。
// Encode_PUSCH_PowerControl 只读不分配；Decode_PUSCH_PowerControl 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_PowerControl 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_PowerControl(Encoder& enc, const PUSCH_PowerControl& value)
{
    (void)value;
    enc.WriteBit(value.has_tpc_Accumulation);
    enc.WriteBit(value.has_msg3_Alpha);
    enc.WriteBit(value.has_p0_NominalWithoutGrant);
    enc.WriteBit(value.has_p0_AlphaSets);
    enc.WriteBit(value.has_pathlossReferenceRSToAddModList);
    enc.WriteBit(value.has_pathlossReferenceRSToReleaseList);
    enc.WriteBit(value.has_twoPUSCH_PC_AdjustmentStates);
    enc.WriteBit(value.has_deltaMCS);
    enc.WriteBit(value.has_sri_PUSCH_MappingToAddModList);
    enc.WriteBit(value.has_sri_PUSCH_MappingToReleaseList);
    if (value.has_tpc_Accumulation) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_Accumulation), 0, 0);
    }
    if (value.has_msg3_Alpha) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg3_Alpha), 0, 7);
    }
    if (value.has_p0_NominalWithoutGrant) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p0_NominalWithoutGrant), -202, 24);
    }
    if (value.has_p0_AlphaSets) {
enc.WriteConstrainedLength(value.p0_AlphaSets_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.p0_AlphaSets_count; ++i) {
    Encode_P0_PUSCH_AlphaSet(enc, value.p0_AlphaSets_items[i]);
}
    }
    if (value.has_pathlossReferenceRSToAddModList) {
enc.WriteConstrainedLength(value.pathlossReferenceRSToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToAddModList_count; ++i) {
    Encode_PUSCH_PathlossReferenceRS(enc, value.pathlossReferenceRSToAddModList_items[i]);
}
    }
    if (value.has_pathlossReferenceRSToReleaseList) {
enc.WriteConstrainedLength(value.pathlossReferenceRSToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceRSToReleaseList_items[i]), 0, 3);
}
    }
    if (value.has_twoPUSCH_PC_AdjustmentStates) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_PC_AdjustmentStates), 0, 0);
    }
    if (value.has_deltaMCS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.deltaMCS), 0, 0);
    }
    if (value.has_sri_PUSCH_MappingToAddModList) {
enc.WriteConstrainedLength(value.sri_PUSCH_MappingToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToAddModList_count; ++i) {
    Encode_SRI_PUSCH_PowerControl(enc, value.sri_PUSCH_MappingToAddModList_items[i]);
}
    }
    if (value.has_sri_PUSCH_MappingToReleaseList) {
enc.WriteConstrainedLength(value.sri_PUSCH_MappingToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sri_PUSCH_MappingToReleaseList_items[i]), 0, 15);
}
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_PowerControl(Decoder& dec, PUSCH_PowerControl& value)
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
        value.tpc_Accumulation = (PUSCH_PowerControl_Tpc_Accumulation)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msg3_Alpha = (Alpha)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.p0_NominalWithoutGrant = (int64_t)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.p0_AlphaSets_count)) { goto fail; }
if (value.p0_AlphaSets_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.p0_AlphaSets_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.p0_AlphaSets_count > 0u) {
    value.p0_AlphaSets_items = (P0_PUSCH_AlphaSet*)std::malloc((std::size_t)value.p0_AlphaSets_count * sizeof(P0_PUSCH_AlphaSet));
    if (value.p0_AlphaSets_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.p0_AlphaSets_items, 0, (std::size_t)value.p0_AlphaSets_count * sizeof(P0_PUSCH_AlphaSet));
}
for (std::uint32_t i = 0; i < value.p0_AlphaSets_count; ++i) {
    if (Decode_P0_PUSCH_AlphaSet(dec, value.p0_AlphaSets_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pathlossReferenceRSToAddModList_count)) { goto fail; }
if (value.pathlossReferenceRSToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pathlossReferenceRSToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pathlossReferenceRSToAddModList_count > 0u) {
    value.pathlossReferenceRSToAddModList_items = (PUSCH_PathlossReferenceRS*)std::malloc((std::size_t)value.pathlossReferenceRSToAddModList_count * sizeof(PUSCH_PathlossReferenceRS));
    if (value.pathlossReferenceRSToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pathlossReferenceRSToAddModList_items, 0, (std::size_t)value.pathlossReferenceRSToAddModList_count * sizeof(PUSCH_PathlossReferenceRS));
}
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToAddModList_count; ++i) {
    if (Decode_PUSCH_PathlossReferenceRS(dec, value.pathlossReferenceRSToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pathlossReferenceRSToReleaseList_count)) { goto fail; }
if (value.pathlossReferenceRSToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pathlossReferenceRSToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pathlossReferenceRSToReleaseList_count > 0u) {
    value.pathlossReferenceRSToReleaseList_items = (PUSCH_PathlossReferenceRS_Id*)std::malloc((std::size_t)value.pathlossReferenceRSToReleaseList_count * sizeof(PUSCH_PathlossReferenceRS_Id));
    if (value.pathlossReferenceRSToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pathlossReferenceRSToReleaseList_items, 0, (std::size_t)value.pathlossReferenceRSToReleaseList_count * sizeof(PUSCH_PathlossReferenceRS_Id));
}
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.pathlossReferenceRSToReleaseList_items[i] = (PUSCH_PathlossReferenceRS_Id)tmp_value;
}
    }
    if (present_6) {
        value.twoPUSCH_PC_AdjustmentStates = (PUSCH_PowerControl_TwoPUSCH_PC_AdjustmentStates)0;
    }
    if (present_7) {
        value.deltaMCS = (PUSCH_PowerControl_DeltaMCS)0;
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sri_PUSCH_MappingToAddModList_count)) { goto fail; }
if (value.sri_PUSCH_MappingToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sri_PUSCH_MappingToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sri_PUSCH_MappingToAddModList_count > 0u) {
    value.sri_PUSCH_MappingToAddModList_items = (SRI_PUSCH_PowerControl*)std::malloc((std::size_t)value.sri_PUSCH_MappingToAddModList_count * sizeof(SRI_PUSCH_PowerControl));
    if (value.sri_PUSCH_MappingToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sri_PUSCH_MappingToAddModList_items, 0, (std::size_t)value.sri_PUSCH_MappingToAddModList_count * sizeof(SRI_PUSCH_PowerControl));
}
for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToAddModList_count; ++i) {
    if (Decode_SRI_PUSCH_PowerControl(dec, value.sri_PUSCH_MappingToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sri_PUSCH_MappingToReleaseList_count)) { goto fail; }
if (value.sri_PUSCH_MappingToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sri_PUSCH_MappingToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sri_PUSCH_MappingToReleaseList_count > 0u) {
    value.sri_PUSCH_MappingToReleaseList_items = (SRI_PUSCH_PowerControlId*)std::malloc((std::size_t)value.sri_PUSCH_MappingToReleaseList_count * sizeof(SRI_PUSCH_PowerControlId));
    if (value.sri_PUSCH_MappingToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sri_PUSCH_MappingToReleaseList_items, 0, (std::size_t)value.sri_PUSCH_MappingToReleaseList_count * sizeof(SRI_PUSCH_PowerControlId));
}
for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.sri_PUSCH_MappingToReleaseList_items[i] = (SRI_PUSCH_PowerControlId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_PowerControl(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_PowerControl(PUSCH_PowerControl& value)
{
    if (value.has_tpc_Accumulation) {
    }
    if (value.has_msg3_Alpha) {
    }
    if (value.has_p0_NominalWithoutGrant) {
    }
    if (value.has_p0_AlphaSets) {
        if (value.p0_AlphaSets_items != nullptr) {
            for (std::uint32_t i = 0; i < value.p0_AlphaSets_count; ++i) {
                Free_P0_PUSCH_AlphaSet(value.p0_AlphaSets_items[i]);
            }
            std::free(value.p0_AlphaSets_items);
            value.p0_AlphaSets_items = nullptr;
        }
        value.p0_AlphaSets_count = 0;
    }
    if (value.has_pathlossReferenceRSToAddModList) {
        if (value.pathlossReferenceRSToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pathlossReferenceRSToAddModList_count; ++i) {
                Free_PUSCH_PathlossReferenceRS(value.pathlossReferenceRSToAddModList_items[i]);
            }
            std::free(value.pathlossReferenceRSToAddModList_items);
            value.pathlossReferenceRSToAddModList_items = nullptr;
        }
        value.pathlossReferenceRSToAddModList_count = 0;
    }
    if (value.has_pathlossReferenceRSToReleaseList) {
        if (value.pathlossReferenceRSToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pathlossReferenceRSToReleaseList_count; ++i) {
            }
            std::free(value.pathlossReferenceRSToReleaseList_items);
            value.pathlossReferenceRSToReleaseList_items = nullptr;
        }
        value.pathlossReferenceRSToReleaseList_count = 0;
    }
    if (value.has_twoPUSCH_PC_AdjustmentStates) {
    }
    if (value.has_deltaMCS) {
    }
    if (value.has_sri_PUSCH_MappingToAddModList) {
        if (value.sri_PUSCH_MappingToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToAddModList_count; ++i) {
                Free_SRI_PUSCH_PowerControl(value.sri_PUSCH_MappingToAddModList_items[i]);
            }
            std::free(value.sri_PUSCH_MappingToAddModList_items);
            value.sri_PUSCH_MappingToAddModList_items = nullptr;
        }
        value.sri_PUSCH_MappingToAddModList_count = 0;
    }
    if (value.has_sri_PUSCH_MappingToReleaseList) {
        if (value.sri_PUSCH_MappingToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToReleaseList_count; ++i) {
            }
            std::free(value.sri_PUSCH_MappingToReleaseList_items);
            value.sri_PUSCH_MappingToReleaseList_items = nullptr;
        }
        value.sri_PUSCH_MappingToReleaseList_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_TimeDomainResourceAllocationList：ASN.1 PUSCH-TimeDomainResourceAllocationList；源文件第 10604 行；SEQUENCE OF。
// Encode_PUSCH_TimeDomainResourceAllocationList 只读不分配；Decode_PUSCH_TimeDomainResourceAllocationList 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_TimeDomainResourceAllocationList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_TimeDomainResourceAllocationList(Encoder& enc, const PUSCH_TimeDomainResourceAllocationList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PUSCH_TimeDomainResourceAllocation(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_TimeDomainResourceAllocationList(Decoder& dec, PUSCH_TimeDomainResourceAllocationList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PUSCH_TimeDomainResourceAllocation*)std::malloc((std::size_t)value.count * sizeof(PUSCH_TimeDomainResourceAllocation));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PUSCH_TimeDomainResourceAllocation));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PUSCH_TimeDomainResourceAllocation(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_TimeDomainResourceAllocationList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_TimeDomainResourceAllocationList(PUSCH_TimeDomainResourceAllocationList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PUSCH_TimeDomainResourceAllocation(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUSCH_TimeDomainResourceAllocationList：ASN.1 SetupRelease<PUSCH-TimeDomainResourceAllocationList>；源文件第 10280 行；CHOICE。
// Encode_SetupRelease_PUSCH_TimeDomainResourceAllocationList 只读不分配；Decode_SetupRelease_PUSCH_TimeDomainResourceAllocationList 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUSCH_TimeDomainResourceAllocationList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUSCH_TimeDomainResourceAllocationList(Encoder& enc, const SetupRelease_PUSCH_TimeDomainResourceAllocationList& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag_setup:
        Encode_PUSCH_TimeDomainResourceAllocationList(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUSCH_TimeDomainResourceAllocationList(Decoder& dec, SetupRelease_PUSCH_TimeDomainResourceAllocationList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag_setup: {
        if (Decode_PUSCH_TimeDomainResourceAllocationList(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUSCH_TimeDomainResourceAllocationList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUSCH_TimeDomainResourceAllocationList(SetupRelease_PUSCH_TimeDomainResourceAllocationList& value)
{
    switch (value.tag) {
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag_release:
        break;
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag_setup:
        Free_PUSCH_TimeDomainResourceAllocationList(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BetaOffsets：ASN.1 BetaOffsets；源文件第 4447 行；SEQUENCE。
// Encode_BetaOffsets 只读不分配；Decode_BetaOffsets 可能 malloc（失败时内部已释放并清零）；Free_BetaOffsets 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BetaOffsets(Encoder& enc, const BetaOffsets& value)
{
    (void)value;
    enc.WriteBit(value.has_betaOffsetACK_Index1);
    enc.WriteBit(value.has_betaOffsetACK_Index2);
    enc.WriteBit(value.has_betaOffsetACK_Index3);
    enc.WriteBit(value.has_betaOffsetCSI_Part1_Index1);
    enc.WriteBit(value.has_betaOffsetCSI_Part1_Index2);
    enc.WriteBit(value.has_betaOffsetCSI_Part2_Index1);
    enc.WriteBit(value.has_betaOffsetCSI_Part2_Index2);
    if (value.has_betaOffsetACK_Index1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.betaOffsetACK_Index1), 0, 31);
    }
    if (value.has_betaOffsetACK_Index2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.betaOffsetACK_Index2), 0, 31);
    }
    if (value.has_betaOffsetACK_Index3) {
        enc.WriteConstrainedInteger((std::int64_t)(value.betaOffsetACK_Index3), 0, 31);
    }
    if (value.has_betaOffsetCSI_Part1_Index1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.betaOffsetCSI_Part1_Index1), 0, 31);
    }
    if (value.has_betaOffsetCSI_Part1_Index2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.betaOffsetCSI_Part1_Index2), 0, 31);
    }
    if (value.has_betaOffsetCSI_Part2_Index1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.betaOffsetCSI_Part2_Index1), 0, 31);
    }
    if (value.has_betaOffsetCSI_Part2_Index2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.betaOffsetCSI_Part2_Index2), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_BetaOffsets(Decoder& dec, BetaOffsets& value)
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
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.betaOffsetACK_Index1 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.betaOffsetACK_Index2 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.betaOffsetACK_Index3 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.betaOffsetCSI_Part1_Index1 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.betaOffsetCSI_Part1_Index2 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.betaOffsetCSI_Part2_Index1 = (int64_t)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.betaOffsetCSI_Part2_Index2 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BetaOffsets(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BetaOffsets(BetaOffsets& value)
{
    if (value.has_betaOffsetACK_Index1) {
    }
    if (value.has_betaOffsetACK_Index2) {
    }
    if (value.has_betaOffsetACK_Index3) {
    }
    if (value.has_betaOffsetCSI_Part1_Index1) {
    }
    if (value.has_betaOffsetCSI_Part1_Index2) {
    }
    if (value.has_betaOffsetCSI_Part2_Index1) {
    }
    if (value.has_betaOffsetCSI_Part2_Index2) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UCI_OnPUSCH_BetaOffsets_Dynamic：ASN.1 betaOffsets/dynamic；源文件第 10372 行；SEQUENCE OF。
// Encode_UCI_OnPUSCH_BetaOffsets_Dynamic 只读不分配；Decode_UCI_OnPUSCH_BetaOffsets_Dynamic 可能 malloc（失败时内部已释放并清零）；Free_UCI_OnPUSCH_BetaOffsets_Dynamic 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UCI_OnPUSCH_BetaOffsets_Dynamic(Encoder& enc, const UCI_OnPUSCH_BetaOffsets_Dynamic& value)
{
    (void)value;
    if (value.count != 4u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Encode_BetaOffsets(enc, value.items[i]);
        }
    }
    return enc.Error();
}

ErrorCode Decode_UCI_OnPUSCH_BetaOffsets_Dynamic(Decoder& dec, UCI_OnPUSCH_BetaOffsets_Dynamic& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 4u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (BetaOffsets*)std::malloc((std::size_t)value.count * sizeof(BetaOffsets));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsets));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_BetaOffsets(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UCI_OnPUSCH_BetaOffsets_Dynamic(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UCI_OnPUSCH_BetaOffsets_Dynamic(UCI_OnPUSCH_BetaOffsets_Dynamic& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BetaOffsets(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UCI_OnPUSCH_BetaOffsets：ASN.1 betaOffsets；源文件第 10371 行；CHOICE。
// Encode_UCI_OnPUSCH_BetaOffsets 只读不分配；Decode_UCI_OnPUSCH_BetaOffsets 可能 malloc（失败时内部已释放并清零）；Free_UCI_OnPUSCH_BetaOffsets 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UCI_OnPUSCH_BetaOffsets(Encoder& enc, const UCI_OnPUSCH_BetaOffsets& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UCI_OnPUSCH_BetaOffsets_Tag_dynamic:
        Encode_UCI_OnPUSCH_BetaOffsets_Dynamic(enc, value.u.dynamic);
        break;
    case UCI_OnPUSCH_BetaOffsets_Tag_semiStatic:
        Encode_BetaOffsets(enc, value.u.semiStatic);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UCI_OnPUSCH_BetaOffsets(Decoder& dec, UCI_OnPUSCH_BetaOffsets& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UCI_OnPUSCH_BetaOffsets_Tag)root_index;
    switch (value.tag) {
    case UCI_OnPUSCH_BetaOffsets_Tag_dynamic: {
        if (Decode_UCI_OnPUSCH_BetaOffsets_Dynamic(dec, value.u.dynamic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UCI_OnPUSCH_BetaOffsets_Tag_semiStatic: {
        if (Decode_BetaOffsets(dec, value.u.semiStatic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UCI_OnPUSCH_BetaOffsets(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UCI_OnPUSCH_BetaOffsets(UCI_OnPUSCH_BetaOffsets& value)
{
    switch (value.tag) {
    case UCI_OnPUSCH_BetaOffsets_Tag_dynamic:
        Free_UCI_OnPUSCH_BetaOffsets_Dynamic(value.u.dynamic);
        break;
    case UCI_OnPUSCH_BetaOffsets_Tag_semiStatic:
        Free_BetaOffsets(value.u.semiStatic);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UCI_OnPUSCH：ASN.1 UCI-OnPUSCH；源文件第 10370 行；SEQUENCE。
// Encode_UCI_OnPUSCH 只读不分配；Decode_UCI_OnPUSCH 可能 malloc（失败时内部已释放并清零）；Free_UCI_OnPUSCH 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UCI_OnPUSCH(Encoder& enc, const UCI_OnPUSCH& value)
{
    (void)value;
    enc.WriteBit(value.has_betaOffsets);
    if (value.has_betaOffsets) {
        Encode_UCI_OnPUSCH_BetaOffsets(enc, value.betaOffsets);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.scaling), 0, 3);
    return enc.Error();
}

ErrorCode Decode_UCI_OnPUSCH(Decoder& dec, UCI_OnPUSCH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_UCI_OnPUSCH_BetaOffsets(dec, value.betaOffsets) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scaling = (UCI_OnPUSCH_Scaling)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UCI_OnPUSCH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UCI_OnPUSCH(UCI_OnPUSCH& value)
{
    if (value.has_betaOffsets) {
        Free_UCI_OnPUSCH_BetaOffsets(value.betaOffsets);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UCI_OnPUSCH：ASN.1 SetupRelease<UCI-OnPUSCH>；源文件第 10289 行；CHOICE。
// Encode_SetupRelease_UCI_OnPUSCH 只读不分配；Decode_SetupRelease_UCI_OnPUSCH 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UCI_OnPUSCH 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UCI_OnPUSCH(Encoder& enc, const SetupRelease_UCI_OnPUSCH& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UCI_OnPUSCH_Tag_release:
        (void)0;
        break;
    case SetupRelease_UCI_OnPUSCH_Tag_setup:
        Encode_UCI_OnPUSCH(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UCI_OnPUSCH(Decoder& dec, SetupRelease_UCI_OnPUSCH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UCI_OnPUSCH_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UCI_OnPUSCH_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UCI_OnPUSCH_Tag_setup: {
        if (Decode_UCI_OnPUSCH(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UCI_OnPUSCH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UCI_OnPUSCH(SetupRelease_UCI_OnPUSCH& value)
{
    switch (value.tag) {
    case SetupRelease_UCI_OnPUSCH_Tag_release:
        break;
    case SetupRelease_UCI_OnPUSCH_Tag_setup:
        Free_UCI_OnPUSCH(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_Config：ASN.1 PUSCH-Config；源文件第 10270 行；SEQUENCE。
// Encode_PUSCH_Config 只读不分配；Decode_PUSCH_Config 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_Config(Encoder& enc, const PUSCH_Config& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dataScramblingIdentityPUSCH);
    enc.WriteBit(value.has_txConfig);
    enc.WriteBit(value.has_dmrs_UplinkForPUSCH_MappingTypeA);
    enc.WriteBit(value.has_dmrs_UplinkForPUSCH_MappingTypeB);
    enc.WriteBit(value.has_pusch_PowerControl);
    enc.WriteBit(value.has_frequencyHopping);
    enc.WriteBit(value.has_frequencyHoppingOffsetLists);
    enc.WriteBit(value.has_pusch_TimeDomainAllocationList);
    enc.WriteBit(value.has_pusch_AggregationFactor);
    enc.WriteBit(value.has_mcs_Table);
    enc.WriteBit(value.has_mcs_TableTransformPrecoder);
    enc.WriteBit(value.has_transformPrecoder);
    enc.WriteBit(value.has_codebookSubset);
    enc.WriteBit(value.has_maxRank);
    enc.WriteBit(value.has_rbg_Size);
    enc.WriteBit(value.has_uci_OnPUSCH);
    enc.WriteBit(value.has_tp_pi2BPSK);
    if (value.has_dataScramblingIdentityPUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dataScramblingIdentityPUSCH), 0, 1023);
    }
    if (value.has_txConfig) {
        enc.WriteConstrainedInteger((std::int64_t)(value.txConfig), 0, 1);
    }
    if (value.has_dmrs_UplinkForPUSCH_MappingTypeA) {
        Encode_SetupRelease_DMRS_UplinkConfig(enc, value.dmrs_UplinkForPUSCH_MappingTypeA);
    }
    if (value.has_dmrs_UplinkForPUSCH_MappingTypeB) {
        Encode_SetupRelease_DMRS_UplinkConfig(enc, value.dmrs_UplinkForPUSCH_MappingTypeB);
    }
    if (value.has_pusch_PowerControl) {
        Encode_PUSCH_PowerControl(enc, value.pusch_PowerControl);
    }
    if (value.has_frequencyHopping) {
        enc.WriteConstrainedInteger((std::int64_t)(value.frequencyHopping), 0, 1);
    }
    if (value.has_frequencyHoppingOffsetLists) {
enc.WriteConstrainedLength(value.frequencyHoppingOffsetLists_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.frequencyHoppingOffsetLists_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.frequencyHoppingOffsetLists_items[i]), 1, 274);
}
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocation), 0, 2);
    if (value.has_pusch_TimeDomainAllocationList) {
        Encode_SetupRelease_PUSCH_TimeDomainResourceAllocationList(enc, value.pusch_TimeDomainAllocationList);
    }
    if (value.has_pusch_AggregationFactor) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_AggregationFactor), 0, 2);
    }
    if (value.has_mcs_Table) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_Table), 0, 1);
    }
    if (value.has_mcs_TableTransformPrecoder) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_TableTransformPrecoder), 0, 1);
    }
    if (value.has_transformPrecoder) {
        enc.WriteConstrainedInteger((std::int64_t)(value.transformPrecoder), 0, 1);
    }
    if (value.has_codebookSubset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.codebookSubset), 0, 2);
    }
    if (value.has_maxRank) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxRank), 1, 4);
    }
    if (value.has_rbg_Size) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rbg_Size), 0, 0);
    }
    if (value.has_uci_OnPUSCH) {
        Encode_SetupRelease_UCI_OnPUSCH(enc, value.uci_OnPUSCH);
    }
    if (value.has_tp_pi2BPSK) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tp_pi2BPSK), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PUSCH_Config_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PUSCH_Config_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PUSCH_Config_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_Config(Decoder& dec, PUSCH_Config& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.dataScramblingIdentityPUSCH = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.txConfig = (PUSCH_Config_TxConfig)tmp_value;
    }
    if (present_2) {
        if (Decode_SetupRelease_DMRS_UplinkConfig(dec, value.dmrs_UplinkForPUSCH_MappingTypeA) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_DMRS_UplinkConfig(dec, value.dmrs_UplinkForPUSCH_MappingTypeB) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_PUSCH_PowerControl(dec, value.pusch_PowerControl) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.frequencyHopping = (PUSCH_Config_FrequencyHopping)tmp_value;
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.frequencyHoppingOffsetLists_count)) { goto fail; }
if (value.frequencyHoppingOffsetLists_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.frequencyHoppingOffsetLists_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.frequencyHoppingOffsetLists_count > 0u) {
    value.frequencyHoppingOffsetLists_items = (int64_t*)std::malloc((std::size_t)value.frequencyHoppingOffsetLists_count * sizeof(int64_t));
    if (value.frequencyHoppingOffsetLists_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.frequencyHoppingOffsetLists_items, 0, (std::size_t)value.frequencyHoppingOffsetLists_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.frequencyHoppingOffsetLists_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 274, tmp_value)) { goto fail; }
    value.frequencyHoppingOffsetLists_items[i] = (int64_t)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.resourceAllocation = (PUSCH_Config_ResourceAllocation)tmp_value;
    }
    if (present_7) {
        if (Decode_SetupRelease_PUSCH_TimeDomainResourceAllocationList(dec, value.pusch_TimeDomainAllocationList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pusch_AggregationFactor = (PUSCH_Config_Pusch_AggregationFactor)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mcs_Table = (PUSCH_Config_Mcs_Table)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mcs_TableTransformPrecoder = (PUSCH_Config_Mcs_TableTransformPrecoder)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.transformPrecoder = (PUSCH_Config_TransformPrecoder)tmp_value;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.codebookSubset = (PUSCH_Config_CodebookSubset)tmp_value;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxRank = (int64_t)tmp_value;
    }
    if (present_14) {
        value.rbg_Size = (PUSCH_Config_Rbg_Size)0;
    }
    if (present_15) {
        if (Decode_SetupRelease_UCI_OnPUSCH(dec, value.uci_OnPUSCH) != ErrorCode_Ok) { goto fail; }
    }
    if (present_16) {
        value.tp_pi2BPSK = (PUSCH_Config_Tp_pi2BPSK)0;
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
    if (Decode_PUSCH_Config_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PUSCH_Config_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PUSCH_Config_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_PUSCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_Config(PUSCH_Config& value)
{
    if (value.has_dataScramblingIdentityPUSCH) {
    }
    if (value.has_txConfig) {
    }
    if (value.has_dmrs_UplinkForPUSCH_MappingTypeA) {
        Free_SetupRelease_DMRS_UplinkConfig(value.dmrs_UplinkForPUSCH_MappingTypeA);
    }
    if (value.has_dmrs_UplinkForPUSCH_MappingTypeB) {
        Free_SetupRelease_DMRS_UplinkConfig(value.dmrs_UplinkForPUSCH_MappingTypeB);
    }
    if (value.has_pusch_PowerControl) {
        Free_PUSCH_PowerControl(value.pusch_PowerControl);
    }
    if (value.has_frequencyHopping) {
    }
    if (value.has_frequencyHoppingOffsetLists) {
        if (value.frequencyHoppingOffsetLists_items != nullptr) {
            for (std::uint32_t i = 0; i < value.frequencyHoppingOffsetLists_count; ++i) {
            }
            std::free(value.frequencyHoppingOffsetLists_items);
            value.frequencyHoppingOffsetLists_items = nullptr;
        }
        value.frequencyHoppingOffsetLists_count = 0;
    }
    if (value.has_pusch_TimeDomainAllocationList) {
        Free_SetupRelease_PUSCH_TimeDomainResourceAllocationList(value.pusch_TimeDomainAllocationList);
    }
    if (value.has_pusch_AggregationFactor) {
    }
    if (value.has_mcs_Table) {
    }
    if (value.has_mcs_TableTransformPrecoder) {
    }
    if (value.has_transformPrecoder) {
    }
    if (value.has_codebookSubset) {
    }
    if (value.has_maxRank) {
    }
    if (value.has_rbg_Size) {
    }
    if (value.has_uci_OnPUSCH) {
        Free_SetupRelease_UCI_OnPUSCH(value.uci_OnPUSCH);
    }
    if (value.has_tp_pi2BPSK) {
    }
    if (value.has_extGroup1) {
        Free_PUSCH_Config_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PUSCH_Config_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PUSCH_Config_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUSCH_Config：ASN.1 SetupRelease<PUSCH-Config>；源文件第 1333 行；CHOICE。
// Encode_SetupRelease_PUSCH_Config 只读不分配；Decode_SetupRelease_PUSCH_Config 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUSCH_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUSCH_Config(Encoder& enc, const SetupRelease_PUSCH_Config& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUSCH_Config_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUSCH_Config_Tag_setup:
        Encode_PUSCH_Config(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUSCH_Config(Decoder& dec, SetupRelease_PUSCH_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUSCH_Config_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUSCH_Config_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUSCH_Config_Tag_setup: {
        if (Decode_PUSCH_Config(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUSCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUSCH_Config(SetupRelease_PUSCH_Config& value)
{
    switch (value.tag) {
    case SetupRelease_PUSCH_Config_Tag_release:
        break;
    case SetupRelease_PUSCH_Config_Tag_setup:
        Free_PUSCH_Config(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_UplinkDedicatedSDT_r17：ASN.1 BWP-UplinkDedicatedSDT-r17；源文件第 1332 行；SEQUENCE。
// Encode_BWP_UplinkDedicatedSDT_r17 只读不分配；Decode_BWP_UplinkDedicatedSDT_r17 可能 malloc（失败时内部已释放并清零）；Free_BWP_UplinkDedicatedSDT_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_UplinkDedicatedSDT_r17(Encoder& enc, const BWP_UplinkDedicatedSDT_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pusch_Config_r17);
    enc.WriteBit(value.has_configuredGrantConfigToAddModList_r17);
    enc.WriteBit(value.has_configuredGrantConfigToReleaseList_r17);
    if (value.has_pusch_Config_r17) {
        Encode_SetupRelease_PUSCH_Config(enc, value.pusch_Config_r17);
    }
    if (value.has_configuredGrantConfigToAddModList_r17) {
        Encode_ConfiguredGrantConfigToAddModList_r16(enc, value.configuredGrantConfigToAddModList_r17);
    }
    if (value.has_configuredGrantConfigToReleaseList_r17) {
        Encode_ConfiguredGrantConfigToReleaseList_r16(enc, value.configuredGrantConfigToReleaseList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkDedicatedSDT_r17(Decoder& dec, BWP_UplinkDedicatedSDT_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_PUSCH_Config(dec, value.pusch_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ConfiguredGrantConfigToAddModList_r16(dec, value.configuredGrantConfigToAddModList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_ConfiguredGrantConfigToReleaseList_r16(dec, value.configuredGrantConfigToReleaseList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_UplinkDedicatedSDT_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkDedicatedSDT_r17(BWP_UplinkDedicatedSDT_r17& value)
{
    if (value.has_pusch_Config_r17) {
        Free_SetupRelease_PUSCH_Config(value.pusch_Config_r17);
    }
    if (value.has_configuredGrantConfigToAddModList_r17) {
        Free_ConfiguredGrantConfigToAddModList_r16(value.configuredGrantConfigToAddModList_r17);
    }
    if (value.has_configuredGrantConfigToReleaseList_r17) {
        Free_ConfiguredGrantConfigToReleaseList_r16(value.configuredGrantConfigToReleaseList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_BWP_UplinkDedicatedSDT_r17：ASN.1 SetupRelease<BWP-UplinkDedicatedSDT-r17>；源文件第 1303 行；CHOICE。
// Encode_SetupRelease_BWP_UplinkDedicatedSDT_r17 只读不分配；Decode_SetupRelease_BWP_UplinkDedicatedSDT_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_BWP_UplinkDedicatedSDT_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_BWP_UplinkDedicatedSDT_r17(Encoder& enc, const SetupRelease_BWP_UplinkDedicatedSDT_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag_setup:
        Encode_BWP_UplinkDedicatedSDT_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_BWP_UplinkDedicatedSDT_r17(Decoder& dec, SetupRelease_BWP_UplinkDedicatedSDT_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag_setup: {
        if (Decode_BWP_UplinkDedicatedSDT_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_BWP_UplinkDedicatedSDT_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_BWP_UplinkDedicatedSDT_r17(SetupRelease_BWP_UplinkDedicatedSDT_r17& value)
{
    switch (value.tag) {
    case SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag_release:
        break;
    case SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag_setup:
        Free_BWP_UplinkDedicatedSDT_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_SDT_TA_ValidationConfig_r17：ASN.1 CG-SDT-TA-ValidationConfig-r17；源文件第 1321 行；SEQUENCE。
// Encode_CG_SDT_TA_ValidationConfig_r17 只读不分配；Decode_CG_SDT_TA_ValidationConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_CG_SDT_TA_ValidationConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_SDT_TA_ValidationConfig_r17(Encoder& enc, const CG_SDT_TA_ValidationConfig_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.cg_SDT_RSRP_ChangeThreshold_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CG_SDT_TA_ValidationConfig_r17(Decoder& dec, CG_SDT_TA_ValidationConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.cg_SDT_RSRP_ChangeThreshold_r17 = (CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_SDT_TA_ValidationConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_SDT_TA_ValidationConfig_r17(CG_SDT_TA_ValidationConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_CG_SDT_TA_ValidationConfig_r17：ASN.1 SetupRelease<CG-SDT-TA-ValidationConfig-r17>；源文件第 1308 行；CHOICE。
// Encode_SetupRelease_CG_SDT_TA_ValidationConfig_r17 只读不分配；Decode_SetupRelease_CG_SDT_TA_ValidationConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_CG_SDT_TA_ValidationConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_CG_SDT_TA_ValidationConfig_r17(Encoder& enc, const SetupRelease_CG_SDT_TA_ValidationConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag_setup:
        Encode_CG_SDT_TA_ValidationConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CG_SDT_TA_ValidationConfig_r17(Decoder& dec, SetupRelease_CG_SDT_TA_ValidationConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag_setup: {
        if (Decode_CG_SDT_TA_ValidationConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CG_SDT_TA_ValidationConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CG_SDT_TA_ValidationConfig_r17(SetupRelease_CG_SDT_TA_ValidationConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag_release:
        break;
    case SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag_setup:
        Free_CG_SDT_TA_ValidationConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SDT_MAC_PHY_CG_Config_r17：ASN.1 SDT-MAC-PHY-CG-Config-r17；源文件第 1299 行；SEQUENCE。
// Encode_SDT_MAC_PHY_CG_Config_r17 只读不分配；Decode_SDT_MAC_PHY_CG_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SDT_MAC_PHY_CG_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SDT_MAC_PHY_CG_Config_r17(Encoder& enc, const SDT_MAC_PHY_CG_Config_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_cg_SDT_ConfigLCH_RestrictionToAddModList_r17);
    enc.WriteBit(value.has_cg_SDT_ConfigLCH_RestrictionToReleaseList_r17);
    enc.WriteBit(value.has_cg_SDT_ConfigInitialBWP_NUL_r17);
    enc.WriteBit(value.has_cg_SDT_ConfigInitialBWP_SUL_r17);
    enc.WriteBit(value.has_cg_SDT_ConfigInitialBWP_DL_r17);
    enc.WriteBit(value.has_cg_SDT_TimeAlignmentTimer_r17);
    enc.WriteBit(value.has_cg_SDT_RSRP_ThresholdSSB_r17);
    enc.WriteBit(value.has_cg_SDT_TA_ValidationConfig_r17);
    enc.WriteBit(value.has_cg_SDT_CS_RNTI_r17);
    if (value.has_cg_SDT_ConfigLCH_RestrictionToAddModList_r17) {
enc.WriteConstrainedLength(value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count; ++i) {
    Encode_CG_SDT_ConfigLCH_Restriction_r17(enc, value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_items[i]);
}
    }
    if (value.has_cg_SDT_ConfigLCH_RestrictionToReleaseList_r17) {
enc.WriteConstrainedLength(value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_items[i]), 1, 32);
}
    }
    if (value.has_cg_SDT_ConfigInitialBWP_NUL_r17) {
        Encode_SetupRelease_BWP_UplinkDedicatedSDT_r17(enc, value.cg_SDT_ConfigInitialBWP_NUL_r17);
    }
    if (value.has_cg_SDT_ConfigInitialBWP_SUL_r17) {
        Encode_SetupRelease_BWP_UplinkDedicatedSDT_r17(enc, value.cg_SDT_ConfigInitialBWP_SUL_r17);
    }
    if (value.has_cg_SDT_ConfigInitialBWP_DL_r17) {
        Encode_BWP_DownlinkDedicatedSDT_r17(enc, value.cg_SDT_ConfigInitialBWP_DL_r17);
    }
    if (value.has_cg_SDT_TimeAlignmentTimer_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_SDT_TimeAlignmentTimer_r17), 0, 7);
    }
    if (value.has_cg_SDT_RSRP_ThresholdSSB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_SDT_RSRP_ThresholdSSB_r17), 0, 127);
    }
    if (value.has_cg_SDT_TA_ValidationConfig_r17) {
        Encode_SetupRelease_CG_SDT_TA_ValidationConfig_r17(enc, value.cg_SDT_TA_ValidationConfig_r17);
    }
    if (value.has_cg_SDT_CS_RNTI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_SDT_CS_RNTI_r17), 0, 65535);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SDT_MAC_PHY_CG_Config_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SDT_MAC_PHY_CG_Config_r17(Decoder& dec, SDT_MAC_PHY_CG_Config_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count)) { goto fail; }
if (value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count > 0u) {
    value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_items = (CG_SDT_ConfigLCH_Restriction_r17*)std::malloc((std::size_t)value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count * sizeof(CG_SDT_ConfigLCH_Restriction_r17));
    if (value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_items, 0, (std::size_t)value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count * sizeof(CG_SDT_ConfigLCH_Restriction_r17));
}
for (std::uint32_t i = 0; i < value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count; ++i) {
    if (Decode_CG_SDT_ConfigLCH_Restriction_r17(dec, value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count)) { goto fail; }
if (value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count > 0u) {
    value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_items = (LogicalChannelIdentity*)std::malloc((std::size_t)value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count * sizeof(LogicalChannelIdentity));
    if (value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_items, 0, (std::size_t)value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count * sizeof(LogicalChannelIdentity));
}
for (std::uint32_t i = 0; i < value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_items[i] = (LogicalChannelIdentity)tmp_value;
}
    }
    if (present_2) {
        if (Decode_SetupRelease_BWP_UplinkDedicatedSDT_r17(dec, value.cg_SDT_ConfigInitialBWP_NUL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_BWP_UplinkDedicatedSDT_r17(dec, value.cg_SDT_ConfigInitialBWP_SUL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_BWP_DownlinkDedicatedSDT_r17(dec, value.cg_SDT_ConfigInitialBWP_DL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.cg_SDT_TimeAlignmentTimer_r17 = (TimeAlignmentTimer)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.cg_SDT_RSRP_ThresholdSSB_r17 = (RSRP_Range)tmp_value;
    }
    if (present_7) {
        if (Decode_SetupRelease_CG_SDT_TA_ValidationConfig_r17(dec, value.cg_SDT_TA_ValidationConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.cg_SDT_CS_RNTI_r17 = (RNTI_Value)tmp_value;
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
    if (Decode_SDT_MAC_PHY_CG_Config_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SDT_MAC_PHY_CG_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SDT_MAC_PHY_CG_Config_r17(SDT_MAC_PHY_CG_Config_r17& value)
{
    if (value.has_cg_SDT_ConfigLCH_RestrictionToAddModList_r17) {
        if (value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count; ++i) {
                Free_CG_SDT_ConfigLCH_Restriction_r17(value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_items[i]);
            }
            std::free(value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_items);
            value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_items = nullptr;
        }
        value.cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count = 0;
    }
    if (value.has_cg_SDT_ConfigLCH_RestrictionToReleaseList_r17) {
        if (value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count; ++i) {
            }
            std::free(value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_items);
            value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_items = nullptr;
        }
        value.cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count = 0;
    }
    if (value.has_cg_SDT_ConfigInitialBWP_NUL_r17) {
        Free_SetupRelease_BWP_UplinkDedicatedSDT_r17(value.cg_SDT_ConfigInitialBWP_NUL_r17);
    }
    if (value.has_cg_SDT_ConfigInitialBWP_SUL_r17) {
        Free_SetupRelease_BWP_UplinkDedicatedSDT_r17(value.cg_SDT_ConfigInitialBWP_SUL_r17);
    }
    if (value.has_cg_SDT_ConfigInitialBWP_DL_r17) {
        Free_BWP_DownlinkDedicatedSDT_r17(value.cg_SDT_ConfigInitialBWP_DL_r17);
    }
    if (value.has_cg_SDT_TimeAlignmentTimer_r17) {
    }
    if (value.has_cg_SDT_RSRP_ThresholdSSB_r17) {
    }
    if (value.has_cg_SDT_TA_ValidationConfig_r17) {
        Free_SetupRelease_CG_SDT_TA_ValidationConfig_r17(value.cg_SDT_TA_ValidationConfig_r17);
    }
    if (value.has_cg_SDT_CS_RNTI_r17) {
    }
    if (value.has_extGroup1) {
        Free_SDT_MAC_PHY_CG_Config_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_SDT_ConfigLCH_Restriction_r17：ASN.1 CG-SDT-ConfigLCH-Restriction-r17；源文件第 1339 行；SEQUENCE。
// Encode_CG_SDT_ConfigLCH_Restriction_r17 只读不分配；Decode_CG_SDT_ConfigLCH_Restriction_r17 可能 malloc（失败时内部已释放并清零）；Free_CG_SDT_ConfigLCH_Restriction_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_SDT_ConfigLCH_Restriction_r17(Encoder& enc, const CG_SDT_ConfigLCH_Restriction_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_configuredGrantType1Allowed_r17);
    enc.WriteBit(value.has_allowedCG_List_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannelIdentity_r17), 1, 32);
    if (value.has_configuredGrantType1Allowed_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredGrantType1Allowed_r17), 0, 0);
    }
    if (value.has_allowedCG_List_r17) {
enc.WriteConstrainedLength(value.allowedCG_List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.allowedCG_List_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.allowedCG_List_r17_items[i]), 0, 31);
}
    }
    return enc.Error();
}

ErrorCode Decode_CG_SDT_ConfigLCH_Restriction_r17(Decoder& dec, CG_SDT_ConfigLCH_Restriction_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.logicalChannelIdentity_r17 = (LogicalChannelIdentity)tmp_value;
    }
    if (present_0) {
        value.configuredGrantType1Allowed_r17 = (CG_SDT_ConfigLCH_Restriction_r17_ConfiguredGrantType1Allowed_r17)0;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.allowedCG_List_r17_count)) { goto fail; }
if (value.allowedCG_List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.allowedCG_List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.allowedCG_List_r17_count > 0u) {
    value.allowedCG_List_r17_items = (ConfiguredGrantConfigIndexMAC_r16*)std::malloc((std::size_t)value.allowedCG_List_r17_count * sizeof(ConfiguredGrantConfigIndexMAC_r16));
    if (value.allowedCG_List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.allowedCG_List_r17_items, 0, (std::size_t)value.allowedCG_List_r17_count * sizeof(ConfiguredGrantConfigIndexMAC_r16));
}
for (std::uint32_t i = 0; i < value.allowedCG_List_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.allowedCG_List_r17_items[i] = (ConfiguredGrantConfigIndexMAC_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_SDT_ConfigLCH_Restriction_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_SDT_ConfigLCH_Restriction_r17(CG_SDT_ConfigLCH_Restriction_r17& value)
{
    if (value.has_configuredGrantType1Allowed_r17) {
    }
    if (value.has_allowedCG_List_r17) {
        if (value.allowedCG_List_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.allowedCG_List_r17_count; ++i) {
            }
            std::free(value.allowedCG_List_r17_items);
            value.allowedCG_List_r17_items = nullptr;
        }
        value.allowedCG_List_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_SDT_ConfigLCH_Restriction_v1800：ASN.1 CG-SDT-ConfigLCH-Restriction-v1800；源文件第 1346 行；SEQUENCE。
// Encode_CG_SDT_ConfigLCH_Restriction_v1800 只读不分配；Decode_CG_SDT_ConfigLCH_Restriction_v1800 可能 malloc（失败时内部已释放并清零）；Free_CG_SDT_ConfigLCH_Restriction_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_SDT_ConfigLCH_Restriction_v1800(Encoder& enc, const CG_SDT_ConfigLCH_Restriction_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_cg_SDT_MaxDurationToNext_CG_Occasion_r18);
    if (value.has_cg_SDT_MaxDurationToNext_CG_Occasion_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_SDT_MaxDurationToNext_CG_Occasion_r18), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_CG_SDT_ConfigLCH_Restriction_v1800(Decoder& dec, CG_SDT_ConfigLCH_Restriction_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.cg_SDT_MaxDurationToNext_CG_Occasion_r18 = (CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_SDT_ConfigLCH_Restriction_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_SDT_ConfigLCH_Restriction_v1800(CG_SDT_ConfigLCH_Restriction_v1800& value)
{
    if (value.has_cg_SDT_MaxDurationToNext_CG_Occasion_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosRRC_InactiveConfig_r17：ASN.1 SRS-PosRRC-InactiveConfig-r17；源文件第 1355 行；SEQUENCE。
// Encode_SRS_PosRRC_InactiveConfig_r17 只读不分配；Decode_SRS_PosRRC_InactiveConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosRRC_InactiveConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosRRC_InactiveConfig_r17(Encoder& enc, const SRS_PosRRC_InactiveConfig_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_PosConfigNUL_r17);
    enc.WriteBit(value.has_srs_PosConfigSUL_r17);
    enc.WriteBit(value.has_bwp_NUL_r17);
    enc.WriteBit(value.has_bwp_SUL_r17);
    enc.WriteBit(value.has_inactivePosSRS_TimeAlignmentTimer_r17);
    enc.WriteBit(value.has_inactivePosSRS_RSRP_ChangeThreshold_r17);
    if (value.has_srs_PosConfigNUL_r17) {
        Encode_SRS_PosConfig_r17(enc, value.srs_PosConfigNUL_r17);
    }
    if (value.has_srs_PosConfigSUL_r17) {
        Encode_SRS_PosConfig_r17(enc, value.srs_PosConfigSUL_r17);
    }
    if (value.has_bwp_NUL_r17) {
        Encode_BWP(enc, value.bwp_NUL_r17);
    }
    if (value.has_bwp_SUL_r17) {
        Encode_BWP(enc, value.bwp_SUL_r17);
    }
    if (value.has_inactivePosSRS_TimeAlignmentTimer_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inactivePosSRS_TimeAlignmentTimer_r17), 0, 7);
    }
    if (value.has_inactivePosSRS_RSRP_ChangeThreshold_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inactivePosSRS_RSRP_ChangeThreshold_r17), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosRRC_InactiveConfig_r17(Decoder& dec, SRS_PosRRC_InactiveConfig_r17& value)
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
        if (Decode_SRS_PosConfig_r17(dec, value.srs_PosConfigNUL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SRS_PosConfig_r17(dec, value.srs_PosConfigSUL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BWP(dec, value.bwp_NUL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_BWP(dec, value.bwp_SUL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.inactivePosSRS_TimeAlignmentTimer_r17 = (TimeAlignmentTimer)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.inactivePosSRS_RSRP_ChangeThreshold_r17 = (RSRP_ChangeThreshold_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosRRC_InactiveConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosRRC_InactiveConfig_r17(SRS_PosRRC_InactiveConfig_r17& value)
{
    if (value.has_srs_PosConfigNUL_r17) {
        Free_SRS_PosConfig_r17(value.srs_PosConfigNUL_r17);
    }
    if (value.has_srs_PosConfigSUL_r17) {
        Free_SRS_PosConfig_r17(value.srs_PosConfigSUL_r17);
    }
    if (value.has_bwp_NUL_r17) {
        Free_BWP(value.bwp_NUL_r17);
    }
    if (value.has_bwp_SUL_r17) {
        Free_BWP(value.bwp_SUL_r17);
    }
    if (value.has_inactivePosSRS_TimeAlignmentTimer_r17) {
    }
    if (value.has_inactivePosSRS_RSRP_ChangeThreshold_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResume_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1466 行；空 SEQUENCE{}。
// Encode_RRCResume_v1800_IEs_NonCriticalExtension 只读不分配；Decode_RRCResume_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_RRCResume_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResume_v1800_IEs_NonCriticalExtension(Encoder& enc, const RRCResume_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCResume_v1800_IEs_NonCriticalExtension(Decoder& dec, RRCResume_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResume_v1800_IEs_NonCriticalExtension(RRCResume_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResume_v1800_IEs：ASN.1 RRCResume-v1800-IEs；源文件第 1463 行；SEQUENCE。
// Encode_RRCResume_v1800_IEs 只读不分配；Decode_RRCResume_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResume_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResume_v1800_IEs(Encoder& enc, const RRCResume_v1800_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_needForInterruptionConfigNR_r18);
    enc.WriteBit(value.has_reselectionMeasurementReq_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_needForInterruptionConfigNR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.needForInterruptionConfigNR_r18), 0, 1);
    }
    if (value.has_reselectionMeasurementReq_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reselectionMeasurementReq_r18), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResume_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResume_v1800_IEs(Decoder& dec, RRCResume_v1800_IEs& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.needForInterruptionConfigNR_r18 = (RRCResume_v1800_IEs_NeedForInterruptionConfigNR_r18)tmp_value;
    }
    if (present_1) {
        value.reselectionMeasurementReq_r18 = (RRCResume_v1800_IEs_ReselectionMeasurementReq_r18)0;
    }
    if (present_2) {
        if (Decode_RRCResume_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResume_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResume_v1800_IEs(RRCResume_v1800_IEs& value)
{
    if (value.has_needForInterruptionConfigNR_r18) {
    }
    if (value.has_reselectionMeasurementReq_r18) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResume_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResume_v1700_IEs：ASN.1 RRCResume-v1700-IEs；源文件第 1453 行；SEQUENCE。
// Encode_RRCResume_v1700_IEs 只读不分配；Decode_RRCResume_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResume_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResume_v1700_IEs(Encoder& enc, const RRCResume_v1700_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_ConfigDedicatedNR_r17);
    enc.WriteBit(value.has_sl_L2RemoteUE_Config_r17);
    enc.WriteBit(value.has_needForGapNCSG_ConfigNR_r17);
    enc.WriteBit(value.has_needForGapNCSG_ConfigEUTRA_r17);
    enc.WriteBit(value.has_scg_State_r17);
    enc.WriteBit(value.has_appLayerMeasConfig_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_sl_ConfigDedicatedNR_r17) {
        Encode_SetupRelease_SL_ConfigDedicatedNR_r16(enc, value.sl_ConfigDedicatedNR_r17);
    }
    if (value.has_sl_L2RemoteUE_Config_r17) {
        Encode_SetupRelease_SL_L2RemoteUE_Config_r17(enc, value.sl_L2RemoteUE_Config_r17);
    }
    if (value.has_needForGapNCSG_ConfigNR_r17) {
        Encode_SetupRelease_NeedForGapNCSG_ConfigNR_r17(enc, value.needForGapNCSG_ConfigNR_r17);
    }
    if (value.has_needForGapNCSG_ConfigEUTRA_r17) {
        Encode_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(enc, value.needForGapNCSG_ConfigEUTRA_r17);
    }
    if (value.has_scg_State_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scg_State_r17), 0, 0);
    }
    if (value.has_appLayerMeasConfig_r17) {
        Encode_AppLayerMeasConfig_r17(enc, value.appLayerMeasConfig_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResume_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResume_v1700_IEs(Decoder& dec, RRCResume_v1700_IEs& value)
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
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SL_ConfigDedicatedNR_r16(dec, value.sl_ConfigDedicatedNR_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SL_L2RemoteUE_Config_r17(dec, value.sl_L2RemoteUE_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_NeedForGapNCSG_ConfigNR_r17(dec, value.needForGapNCSG_ConfigNR_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(dec, value.needForGapNCSG_ConfigEUTRA_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        value.scg_State_r17 = (RRCResume_v1700_IEs_Scg_State_r17)0;
    }
    if (present_5) {
        if (Decode_AppLayerMeasConfig_r17(dec, value.appLayerMeasConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_RRCResume_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResume_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResume_v1700_IEs(RRCResume_v1700_IEs& value)
{
    if (value.has_sl_ConfigDedicatedNR_r17) {
        Free_SetupRelease_SL_ConfigDedicatedNR_r16(value.sl_ConfigDedicatedNR_r17);
    }
    if (value.has_sl_L2RemoteUE_Config_r17) {
        Free_SetupRelease_SL_L2RemoteUE_Config_r17(value.sl_L2RemoteUE_Config_r17);
    }
    if (value.has_needForGapNCSG_ConfigNR_r17) {
        Free_SetupRelease_NeedForGapNCSG_ConfigNR_r17(value.needForGapNCSG_ConfigNR_r17);
    }
    if (value.has_needForGapNCSG_ConfigEUTRA_r17) {
        Free_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(value.needForGapNCSG_ConfigEUTRA_r17);
    }
    if (value.has_scg_State_r17) {
    }
    if (value.has_appLayerMeasConfig_r17) {
        Free_AppLayerMeasConfig_r17(value.appLayerMeasConfig_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResume_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16：ASN.1 mrdc-SecondaryCellGroup-r16；源文件第 1445 行；CHOICE。
// Encode_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16 只读不分配；Decode_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16 可能 malloc（失败时内部已释放并清零）；Free_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16(Encoder& enc, const RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag_nr_SCG_r16:
        if (value.u.nr_SCG_r16 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_RRCReconfiguration(enc, *value.u.nr_SCG_r16);
        }
        break;
    case RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag_eutra_SCG_r16:
        enc.WriteSemiConstrainedOctetString(value.u.eutra_SCG_r16.bytes, value.u.eutra_SCG_r16.length, 0, 0xFFFFFFFFu);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16(Decoder& dec, RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag)root_index;
    switch (value.tag) {
    case RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag_nr_SCG_r16: {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
            dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        RRCReconfiguration* containing_value = (RRCReconfiguration*)std::malloc(sizeof(RRCReconfiguration));
        if (containing_value == nullptr) {
            dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_RRCReconfiguration(containing_sub, *containing_value) != ErrorCode_Ok) {
            Free_RRCReconfiguration(*containing_value);
            std::free(containing_value);
            dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
            Free_RRCReconfiguration(*containing_value);
            std::free(containing_value);
            dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.u.nr_SCG_r16 = containing_value;
        break;
    }
    case RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag_eutra_SCG_r16: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.u.eutra_SCG_r16.bytes = string_bytes;
        value.u.eutra_SCG_r16.length = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16(RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16& value)
{
    switch (value.tag) {
    case RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag_nr_SCG_r16:
        if (value.u.nr_SCG_r16 != nullptr) {
            Free_RRCReconfiguration(*value.u.nr_SCG_r16);
            std::free(value.u.nr_SCG_r16);
        }
        break;
    case RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag_eutra_SCG_r16:
        std::free(value.u.eutra_SCG_r16.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResume_v1610_IEs：ASN.1 RRCResume-v1610-IEs；源文件第 1441 行；SEQUENCE。
// Encode_RRCResume_v1610_IEs 只读不分配；Decode_RRCResume_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResume_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResume_v1610_IEs(Encoder& enc, const RRCResume_v1610_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_idleModeMeasurementReq_r16);
    enc.WriteBit(value.has_restoreMCG_SCells_r16);
    enc.WriteBit(value.has_restoreSCG_r16);
    enc.WriteBit(value.has_mrdc_SecondaryCellGroup_r16);
    enc.WriteBit(value.has_needForGapsConfigNR_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_idleModeMeasurementReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleModeMeasurementReq_r16), 0, 0);
    }
    if (value.has_restoreMCG_SCells_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.restoreMCG_SCells_r16), 0, 0);
    }
    if (value.has_restoreSCG_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.restoreSCG_r16), 0, 0);
    }
    if (value.has_mrdc_SecondaryCellGroup_r16) {
        Encode_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16(enc, value.mrdc_SecondaryCellGroup_r16);
    }
    if (value.has_needForGapsConfigNR_r16) {
        Encode_SetupRelease_NeedForGapsConfigNR_r16(enc, value.needForGapsConfigNR_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResume_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResume_v1610_IEs(Decoder& dec, RRCResume_v1610_IEs& value)
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
        value.idleModeMeasurementReq_r16 = (RRCResume_v1610_IEs_IdleModeMeasurementReq_r16)0;
    }
    if (present_1) {
        value.restoreMCG_SCells_r16 = (RRCResume_v1610_IEs_RestoreMCG_SCells_r16)0;
    }
    if (present_2) {
        value.restoreSCG_r16 = (RRCResume_v1610_IEs_RestoreSCG_r16)0;
    }
    if (present_3) {
        if (Decode_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16(dec, value.mrdc_SecondaryCellGroup_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_NeedForGapsConfigNR_r16(dec, value.needForGapsConfigNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_RRCResume_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResume_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResume_v1610_IEs(RRCResume_v1610_IEs& value)
{
    if (value.has_idleModeMeasurementReq_r16) {
    }
    if (value.has_restoreMCG_SCells_r16) {
    }
    if (value.has_restoreSCG_r16) {
    }
    if (value.has_mrdc_SecondaryCellGroup_r16) {
        Free_RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16(value.mrdc_SecondaryCellGroup_r16);
    }
    if (value.has_needForGapsConfigNR_r16) {
        Free_SetupRelease_NeedForGapsConfigNR_r16(value.needForGapsConfigNR_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResume_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResume_v1560_IEs：ASN.1 RRCResume-v1560-IEs；源文件第 1435 行；SEQUENCE。
// Encode_RRCResume_v1560_IEs 只读不分配；Decode_RRCResume_v1560_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResume_v1560_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResume_v1560_IEs(Encoder& enc, const RRCResume_v1560_IEs& value)
{
    (void)value;
    enc.WriteBit(value.radioBearerConfig2 != nullptr);
    enc.WriteBit(value.has_sk_Counter);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.radioBearerConfig2 != nullptr) {
        if (value.radioBearerConfig2 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_RadioBearerConfig(enc, *value.radioBearerConfig2);
        }
    }
    if (value.has_sk_Counter) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sk_Counter), 0, 65535);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResume_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResume_v1560_IEs(Decoder& dec, RRCResume_v1560_IEs& value)
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
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        RadioBearerConfig* containing_value = (RadioBearerConfig*)std::malloc(sizeof(RadioBearerConfig));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_RadioBearerConfig(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_RadioBearerConfig(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_RadioBearerConfig(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.radioBearerConfig2 = containing_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.sk_Counter = (SK_Counter)tmp_value;
    }
    if (present_2) {
        if (Decode_RRCResume_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResume_v1560_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResume_v1560_IEs(RRCResume_v1560_IEs& value)
{
    if (value.radioBearerConfig2 != nullptr) {
        if (value.radioBearerConfig2 != nullptr) {
            Free_RadioBearerConfig(*value.radioBearerConfig2);
            std::free(value.radioBearerConfig2);
            value.radioBearerConfig2 = nullptr;
        }
    }
    if (value.has_sk_Counter) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResume_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResume_IEs：ASN.1 RRCResume-IEs；源文件第 1426 行；SEQUENCE。
// Encode_RRCResume_IEs 只读不分配；Decode_RRCResume_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResume_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResume_IEs(Encoder& enc, const RRCResume_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_radioBearerConfig);
    enc.WriteBit(value.masterCellGroup != nullptr);
    enc.WriteBit(value.has_measConfig);
    enc.WriteBit(value.has_fullConfig);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_radioBearerConfig) {
        Encode_RadioBearerConfig(enc, value.radioBearerConfig);
    }
    if (value.masterCellGroup != nullptr) {
        if (value.masterCellGroup == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_CellGroupConfig(enc, *value.masterCellGroup);
        }
    }
    if (value.has_measConfig) {
        Encode_MeasConfig(enc, value.measConfig);
    }
    if (value.has_fullConfig) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fullConfig), 0, 0);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResume_v1560_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResume_IEs(Decoder& dec, RRCResume_IEs& value)
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
        if (Decode_RadioBearerConfig(dec, value.radioBearerConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        CellGroupConfig* containing_value = (CellGroupConfig*)std::malloc(sizeof(CellGroupConfig));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_CellGroupConfig(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_CellGroupConfig(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_CellGroupConfig(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.masterCellGroup = containing_value;
    }
    if (present_2) {
        if (Decode_MeasConfig(dec, value.measConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.fullConfig = (RRCResume_IEs_FullConfig)0;
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_5) {
        if (Decode_RRCResume_v1560_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResume_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResume_IEs(RRCResume_IEs& value)
{
    if (value.has_radioBearerConfig) {
        Free_RadioBearerConfig(value.radioBearerConfig);
    }
    if (value.masterCellGroup != nullptr) {
        if (value.masterCellGroup != nullptr) {
            Free_CellGroupConfig(*value.masterCellGroup);
            std::free(value.masterCellGroup);
            value.masterCellGroup = nullptr;
        }
    }
    if (value.has_measConfig) {
        Free_MeasConfig(value.measConfig);
    }
    if (value.has_fullConfig) {
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResume_v1560_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResume_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1422 行；空 SEQUENCE{}。
// Encode_RRCResume_CriticalExtensionsFuture 只读不分配；Decode_RRCResume_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCResume_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResume_CriticalExtensionsFuture(Encoder& enc, const RRCResume_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCResume_CriticalExtensionsFuture(Decoder& dec, RRCResume_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResume_CriticalExtensionsFuture(RRCResume_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResume_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1420 行；CHOICE。
// Encode_RRCResume_CriticalExtensions 只读不分配；Decode_RRCResume_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCResume_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResume_CriticalExtensions(Encoder& enc, const RRCResume_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCResume_CriticalExtensions_Tag_rrcResume:
        Encode_RRCResume_IEs(enc, value.u.rrcResume);
        break;
    case RRCResume_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_RRCResume_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResume_CriticalExtensions(Decoder& dec, RRCResume_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCResume_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCResume_CriticalExtensions_Tag_rrcResume: {
        if (Decode_RRCResume_IEs(dec, value.u.rrcResume) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCResume_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_RRCResume_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResume_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResume_CriticalExtensions(RRCResume_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCResume_CriticalExtensions_Tag_rrcResume:
        Free_RRCResume_IEs(value.u.rrcResume);
        break;
    case RRCResume_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_RRCResume_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResume：ASN.1 RRCResume；源文件第 1418 行；SEQUENCE。
// Encode_RRCResume 只读不分配；Decode_RRCResume 可能 malloc（失败时内部已释放并清零）；Free_RRCResume 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResume(Encoder& enc, const RRCResume& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_RRCResume_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCResume(Decoder& dec, RRCResume& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_RRCResume_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResume(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResume(RRCResume& value)
{
    Free_RRCResume_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ResultsPerSSB_IndexList_r16：ASN.1 ResultsPerSSB-IndexList-r16；源文件第 8217 行；SEQUENCE OF。
// Encode_ResultsPerSSB_IndexList_r16 只读不分配；Decode_ResultsPerSSB_IndexList_r16 可能 malloc（失败时内部已释放并清零）；Free_ResultsPerSSB_IndexList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ResultsPerSSB_IndexList_r16(Encoder& enc, const ResultsPerSSB_IndexList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_ResultsPerSSB_IndexIdle_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ResultsPerSSB_IndexList_r16(Decoder& dec, ResultsPerSSB_IndexList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ResultsPerSSB_IndexIdle_r16*)std::malloc((std::size_t)value.count * sizeof(ResultsPerSSB_IndexIdle_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ResultsPerSSB_IndexIdle_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_ResultsPerSSB_IndexIdle_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ResultsPerSSB_IndexList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ResultsPerSSB_IndexList_r16(ResultsPerSSB_IndexList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_ResultsPerSSB_IndexIdle_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultIdleNR_r16_MeasResultServingCell_r16：ASN.1 measResultServingCell-r16；源文件第 8188 行；SEQUENCE。
// Encode_MeasResultIdleNR_r16_MeasResultServingCell_r16 只读不分配；Decode_MeasResultIdleNR_r16_MeasResultServingCell_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultIdleNR_r16_MeasResultServingCell_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultIdleNR_r16_MeasResultServingCell_r16(Encoder& enc, const MeasResultIdleNR_r16_MeasResultServingCell_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_rsrp_Result_r16);
    enc.WriteBit(value.has_rsrq_Result_r16);
    enc.WriteBit(value.has_resultsSSB_Indexes_r16);
    if (value.has_rsrp_Result_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_Result_r16), 0, 127);
    }
    if (value.has_rsrq_Result_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrq_Result_r16), 0, 127);
    }
    if (value.has_resultsSSB_Indexes_r16) {
        Encode_ResultsPerSSB_IndexList_r16(enc, value.resultsSSB_Indexes_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultIdleNR_r16_MeasResultServingCell_r16(Decoder& dec, MeasResultIdleNR_r16_MeasResultServingCell_r16& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_Result_r16 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrq_Result_r16 = (RSRQ_Range)tmp_value;
    }
    if (present_2) {
        if (Decode_ResultsPerSSB_IndexList_r16(dec, value.resultsSSB_Indexes_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultIdleNR_r16_MeasResultServingCell_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultIdleNR_r16_MeasResultServingCell_r16(MeasResultIdleNR_r16_MeasResultServingCell_r16& value)
{
    if (value.has_rsrp_Result_r16) {
    }
    if (value.has_rsrq_Result_r16) {
    }
    if (value.has_resultsSSB_Indexes_r16) {
        Free_ResultsPerSSB_IndexList_r16(value.resultsSSB_Indexes_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultIdleNR_r16：ASN.1 MeasResultIdleNR-r16；源文件第 8187 行；SEQUENCE。
// Encode_MeasResultIdleNR_r16 只读不分配；Decode_MeasResultIdleNR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultIdleNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultIdleNR_r16(Encoder& enc, const MeasResultIdleNR_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measResultsPerCarrierListIdleNR_r16);
    Encode_MeasResultIdleNR_r16_MeasResultServingCell_r16(enc, value.measResultServingCell_r16);
    if (value.has_measResultsPerCarrierListIdleNR_r16) {
enc.WriteConstrainedLength(value.measResultsPerCarrierListIdleNR_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measResultsPerCarrierListIdleNR_r16_count; ++i) {
    Encode_MeasResultsPerCarrierIdleNR_r16(enc, value.measResultsPerCarrierListIdleNR_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultIdleNR_r16(Decoder& dec, MeasResultIdleNR_r16& value)
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
    {
        if (Decode_MeasResultIdleNR_r16_MeasResultServingCell_r16(dec, value.measResultServingCell_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.measResultsPerCarrierListIdleNR_r16_count)) { goto fail; }
if (value.measResultsPerCarrierListIdleNR_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measResultsPerCarrierListIdleNR_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measResultsPerCarrierListIdleNR_r16_count > 0u) {
    value.measResultsPerCarrierListIdleNR_r16_items = (MeasResultsPerCarrierIdleNR_r16*)std::malloc((std::size_t)value.measResultsPerCarrierListIdleNR_r16_count * sizeof(MeasResultsPerCarrierIdleNR_r16));
    if (value.measResultsPerCarrierListIdleNR_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measResultsPerCarrierListIdleNR_r16_items, 0, (std::size_t)value.measResultsPerCarrierListIdleNR_r16_count * sizeof(MeasResultsPerCarrierIdleNR_r16));
}
for (std::uint32_t i = 0; i < value.measResultsPerCarrierListIdleNR_r16_count; ++i) {
    if (Decode_MeasResultsPerCarrierIdleNR_r16(dec, value.measResultsPerCarrierListIdleNR_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultIdleNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultIdleNR_r16(MeasResultIdleNR_r16& value)
{
    Free_MeasResultIdleNR_r16_MeasResultServingCell_r16(value.measResultServingCell_r16);
    if (value.has_measResultsPerCarrierListIdleNR_r16) {
        if (value.measResultsPerCarrierListIdleNR_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.measResultsPerCarrierListIdleNR_r16_count; ++i) {
                Free_MeasResultsPerCarrierIdleNR_r16(value.measResultsPerCarrierListIdleNR_r16_items[i]);
            }
            std::free(value.measResultsPerCarrierListIdleNR_r16_items);
            value.measResultsPerCarrierListIdleNR_r16_items = nullptr;
        }
        value.measResultsPerCarrierListIdleNR_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1526 行；空 SEQUENCE{}。
// Encode_RRCResumeComplete_v1800_IEs_NonCriticalExtension 只读不分配；Decode_RRCResumeComplete_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete_v1800_IEs_NonCriticalExtension(Encoder& enc, const RRCResumeComplete_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete_v1800_IEs_NonCriticalExtension(Decoder& dec, RRCResumeComplete_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete_v1800_IEs_NonCriticalExtension(RRCResumeComplete_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete_v1800_IEs：ASN.1 RRCResumeComplete-v1800-IEs；源文件第 1519 行；SEQUENCE。
// Encode_RRCResumeComplete_v1800_IEs 只读不分配；Decode_RRCResumeComplete_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete_v1800_IEs(Encoder& enc, const RRCResumeComplete_v1800_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_needForInterruptionInfoNR_r18);
    enc.WriteBit(value.has_musim_CapRestrictionInd_r18);
    enc.WriteBit(value.has_flightPathInfoAvailable_r18);
    enc.WriteBit(value.has_measConfigReportAppLayerAvailable_r18);
    enc.WriteBit(value.has_measResultReselectionNR_r18);
    enc.WriteBit(value.has_reselectionMeasAvailable_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_needForInterruptionInfoNR_r18) {
        Encode_NeedForInterruptionInfoNR_r18(enc, value.needForInterruptionInfoNR_r18);
    }
    if (value.has_musim_CapRestrictionInd_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_CapRestrictionInd_r18), 0, 0);
    }
    if (value.has_flightPathInfoAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.flightPathInfoAvailable_r18), 0, 0);
    }
    if (value.has_measConfigReportAppLayerAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measConfigReportAppLayerAvailable_r18), 0, 0);
    }
    if (value.has_measResultReselectionNR_r18) {
        Encode_MeasResultIdleNR_r16(enc, value.measResultReselectionNR_r18);
    }
    if (value.has_reselectionMeasAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reselectionMeasAvailable_r18), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResumeComplete_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete_v1800_IEs(Decoder& dec, RRCResumeComplete_v1800_IEs& value)
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
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (present_0) {
        if (Decode_NeedForInterruptionInfoNR_r18(dec, value.needForInterruptionInfoNR_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.musim_CapRestrictionInd_r18 = (RRCResumeComplete_v1800_IEs_Musim_CapRestrictionInd_r18)0;
    }
    if (present_2) {
        value.flightPathInfoAvailable_r18 = (RRCResumeComplete_v1800_IEs_FlightPathInfoAvailable_r18)0;
    }
    if (present_3) {
        value.measConfigReportAppLayerAvailable_r18 = (RRCResumeComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18)0;
    }
    if (present_4) {
        if (Decode_MeasResultIdleNR_r16(dec, value.measResultReselectionNR_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        value.reselectionMeasAvailable_r18 = (RRCResumeComplete_v1800_IEs_ReselectionMeasAvailable_r18)0;
    }
    if (present_6) {
        if (Decode_RRCResumeComplete_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeComplete_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete_v1800_IEs(RRCResumeComplete_v1800_IEs& value)
{
    if (value.has_needForInterruptionInfoNR_r18) {
        Free_NeedForInterruptionInfoNR_r18(value.needForInterruptionInfoNR_r18);
    }
    if (value.has_musim_CapRestrictionInd_r18) {
    }
    if (value.has_flightPathInfoAvailable_r18) {
    }
    if (value.has_measConfigReportAppLayerAvailable_r18) {
    }
    if (value.has_measResultReselectionNR_r18) {
        Free_MeasResultIdleNR_r16(value.measResultReselectionNR_r18);
    }
    if (value.has_reselectionMeasAvailable_r18) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResumeComplete_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete_v1720_IEs：ASN.1 RRCResumeComplete-v1720-IEs；源文件第 1514 行；SEQUENCE。
// Encode_RRCResumeComplete_v1720_IEs 只读不分配；Decode_RRCResumeComplete_v1720_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete_v1720_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete_v1720_IEs(Encoder& enc, const RRCResumeComplete_v1720_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_uplinkTxDirectCurrentMoreCarrierList_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_uplinkTxDirectCurrentMoreCarrierList_r17) {
        Encode_UplinkTxDirectCurrentMoreCarrierList_r17(enc, value.uplinkTxDirectCurrentMoreCarrierList_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResumeComplete_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete_v1720_IEs(Decoder& dec, RRCResumeComplete_v1720_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_UplinkTxDirectCurrentMoreCarrierList_r17(dec, value.uplinkTxDirectCurrentMoreCarrierList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RRCResumeComplete_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeComplete_v1720_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete_v1720_IEs(RRCResumeComplete_v1720_IEs& value)
{
    if (value.has_uplinkTxDirectCurrentMoreCarrierList_r17) {
        Free_UplinkTxDirectCurrentMoreCarrierList_r17(value.uplinkTxDirectCurrentMoreCarrierList_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResumeComplete_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete_v1700_IEs：ASN.1 RRCResumeComplete-v1700-IEs；源文件第 1508 行；SEQUENCE。
// Encode_RRCResumeComplete_v1700_IEs 只读不分配；Decode_RRCResumeComplete_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete_v1700_IEs(Encoder& enc, const RRCResumeComplete_v1700_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_needForGapNCSG_InfoNR_r17);
    enc.WriteBit(value.has_needForGapNCSG_InfoEUTRA_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_needForGapNCSG_InfoNR_r17) {
        Encode_NeedForGapNCSG_InfoNR_r17(enc, value.needForGapNCSG_InfoNR_r17);
    }
    if (value.has_needForGapNCSG_InfoEUTRA_r17) {
        Encode_NeedForGapNCSG_InfoEUTRA_r17(enc, value.needForGapNCSG_InfoEUTRA_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResumeComplete_v1720_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete_v1700_IEs(Decoder& dec, RRCResumeComplete_v1700_IEs& value)
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
        if (Decode_NeedForGapNCSG_InfoNR_r17(dec, value.needForGapNCSG_InfoNR_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_NeedForGapNCSG_InfoEUTRA_r17(dec, value.needForGapNCSG_InfoEUTRA_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_RRCResumeComplete_v1720_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeComplete_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete_v1700_IEs(RRCResumeComplete_v1700_IEs& value)
{
    if (value.has_needForGapNCSG_InfoNR_r17) {
        Free_NeedForGapNCSG_InfoNR_r17(value.needForGapNCSG_InfoNR_r17);
    }
    if (value.has_needForGapNCSG_InfoEUTRA_r17) {
        Free_NeedForGapNCSG_InfoEUTRA_r17(value.needForGapNCSG_InfoEUTRA_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResumeComplete_v1720_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete_v1640_IEs：ASN.1 RRCResumeComplete-v1640-IEs；源文件第 1503 行；SEQUENCE。
// Encode_RRCResumeComplete_v1640_IEs 只读不分配；Decode_RRCResumeComplete_v1640_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete_v1640_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete_v1640_IEs(Encoder& enc, const RRCResumeComplete_v1640_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_uplinkTxDirectCurrentTwoCarrierList_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_uplinkTxDirectCurrentTwoCarrierList_r16) {
        Encode_UplinkTxDirectCurrentTwoCarrierList_r16(enc, value.uplinkTxDirectCurrentTwoCarrierList_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResumeComplete_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete_v1640_IEs(Decoder& dec, RRCResumeComplete_v1640_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_UplinkTxDirectCurrentTwoCarrierList_r16(dec, value.uplinkTxDirectCurrentTwoCarrierList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RRCResumeComplete_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeComplete_v1640_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete_v1640_IEs(RRCResumeComplete_v1640_IEs& value)
{
    if (value.has_uplinkTxDirectCurrentTwoCarrierList_r16) {
        Free_UplinkTxDirectCurrentTwoCarrierList_r16(value.uplinkTxDirectCurrentTwoCarrierList_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResumeComplete_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultIdleEUTRA_r16：ASN.1 MeasResultIdleEUTRA-r16；源文件第 8164 行；SEQUENCE。
// Encode_MeasResultIdleEUTRA_r16 只读不分配；Decode_MeasResultIdleEUTRA_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultIdleEUTRA_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultIdleEUTRA_r16(Encoder& enc, const MeasResultIdleEUTRA_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
enc.WriteConstrainedLength(value.measResultsPerCarrierListIdleEUTRA_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measResultsPerCarrierListIdleEUTRA_r16_count; ++i) {
    Encode_MeasResultsPerCarrierIdleEUTRA_r16(enc, value.measResultsPerCarrierListIdleEUTRA_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_MeasResultIdleEUTRA_r16(Decoder& dec, MeasResultIdleEUTRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.measResultsPerCarrierListIdleEUTRA_r16_count)) { goto fail; }
if (value.measResultsPerCarrierListIdleEUTRA_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measResultsPerCarrierListIdleEUTRA_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measResultsPerCarrierListIdleEUTRA_r16_count > 0u) {
    value.measResultsPerCarrierListIdleEUTRA_r16_items = (MeasResultsPerCarrierIdleEUTRA_r16*)std::malloc((std::size_t)value.measResultsPerCarrierListIdleEUTRA_r16_count * sizeof(MeasResultsPerCarrierIdleEUTRA_r16));
    if (value.measResultsPerCarrierListIdleEUTRA_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measResultsPerCarrierListIdleEUTRA_r16_items, 0, (std::size_t)value.measResultsPerCarrierListIdleEUTRA_r16_count * sizeof(MeasResultsPerCarrierIdleEUTRA_r16));
}
for (std::uint32_t i = 0; i < value.measResultsPerCarrierListIdleEUTRA_r16_count; ++i) {
    if (Decode_MeasResultsPerCarrierIdleEUTRA_r16(dec, value.measResultsPerCarrierListIdleEUTRA_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultIdleEUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultIdleEUTRA_r16(MeasResultIdleEUTRA_r16& value)
{
    if (value.measResultsPerCarrierListIdleEUTRA_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.measResultsPerCarrierListIdleEUTRA_r16_count; ++i) {
            Free_MeasResultsPerCarrierIdleEUTRA_r16(value.measResultsPerCarrierListIdleEUTRA_r16_items[i]);
        }
        std::free(value.measResultsPerCarrierListIdleEUTRA_r16_items);
        value.measResultsPerCarrierListIdleEUTRA_r16_items = nullptr;
    }
    value.measResultsPerCarrierListIdleEUTRA_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete_v1610_IEs_Scg_Response_r16：ASN.1 scg-Response-r16；源文件第 1492 行；CHOICE。
// Encode_RRCResumeComplete_v1610_IEs_Scg_Response_r16 只读不分配；Decode_RRCResumeComplete_v1610_IEs_Scg_Response_r16 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete_v1610_IEs_Scg_Response_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete_v1610_IEs_Scg_Response_r16(Encoder& enc, const RRCResumeComplete_v1610_IEs_Scg_Response_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag_nr_SCG_Response:
        if (value.u.nr_SCG_Response == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_RRCReconfigurationComplete(enc, *value.u.nr_SCG_Response);
        }
        break;
    case RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag_eutra_SCG_Response:
        enc.WriteSemiConstrainedOctetString(value.u.eutra_SCG_Response.bytes, value.u.eutra_SCG_Response.length, 0, 0xFFFFFFFFu);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete_v1610_IEs_Scg_Response_r16(Decoder& dec, RRCResumeComplete_v1610_IEs_Scg_Response_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag)root_index;
    switch (value.tag) {
    case RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag_nr_SCG_Response: {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
            dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        RRCReconfigurationComplete* containing_value = (RRCReconfigurationComplete*)std::malloc(sizeof(RRCReconfigurationComplete));
        if (containing_value == nullptr) {
            dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_RRCReconfigurationComplete(containing_sub, *containing_value) != ErrorCode_Ok) {
            Free_RRCReconfigurationComplete(*containing_value);
            std::free(containing_value);
            dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
            Free_RRCReconfigurationComplete(*containing_value);
            std::free(containing_value);
            dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.u.nr_SCG_Response = containing_value;
        break;
    }
    case RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag_eutra_SCG_Response: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.u.eutra_SCG_Response.bytes = string_bytes;
        value.u.eutra_SCG_Response.length = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeComplete_v1610_IEs_Scg_Response_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete_v1610_IEs_Scg_Response_r16(RRCResumeComplete_v1610_IEs_Scg_Response_r16& value)
{
    switch (value.tag) {
    case RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag_nr_SCG_Response:
        if (value.u.nr_SCG_Response != nullptr) {
            Free_RRCReconfigurationComplete(*value.u.nr_SCG_Response);
            std::free(value.u.nr_SCG_Response);
        }
        break;
    case RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag_eutra_SCG_Response:
        std::free(value.u.eutra_SCG_Response.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete_v1610_IEs：ASN.1 RRCResumeComplete-v1610-IEs；源文件第 1488 行；SEQUENCE。
// Encode_RRCResumeComplete_v1610_IEs 只读不分配；Decode_RRCResumeComplete_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete_v1610_IEs(Encoder& enc, const RRCResumeComplete_v1610_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_idleMeasAvailable_r16);
    enc.WriteBit(value.has_measResultIdleEUTRA_r16);
    enc.WriteBit(value.has_measResultIdleNR_r16);
    enc.WriteBit(value.has_scg_Response_r16);
    enc.WriteBit(value.has_ue_MeasurementsAvailable_r16);
    enc.WriteBit(value.has_mobilityHistoryAvail_r16);
    enc.WriteBit(value.has_mobilityState_r16);
    enc.WriteBit(value.has_needForGapsInfoNR_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_idleMeasAvailable_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleMeasAvailable_r16), 0, 0);
    }
    if (value.has_measResultIdleEUTRA_r16) {
        Encode_MeasResultIdleEUTRA_r16(enc, value.measResultIdleEUTRA_r16);
    }
    if (value.has_measResultIdleNR_r16) {
        Encode_MeasResultIdleNR_r16(enc, value.measResultIdleNR_r16);
    }
    if (value.has_scg_Response_r16) {
        Encode_RRCResumeComplete_v1610_IEs_Scg_Response_r16(enc, value.scg_Response_r16);
    }
    if (value.has_ue_MeasurementsAvailable_r16) {
        Encode_UE_MeasurementsAvailable_r16(enc, value.ue_MeasurementsAvailable_r16);
    }
    if (value.has_mobilityHistoryAvail_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mobilityHistoryAvail_r16), 0, 0);
    }
    if (value.has_mobilityState_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mobilityState_r16), 0, 3);
    }
    if (value.has_needForGapsInfoNR_r16) {
        Encode_NeedForGapsInfoNR_r16(enc, value.needForGapsInfoNR_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResumeComplete_v1640_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete_v1610_IEs(Decoder& dec, RRCResumeComplete_v1610_IEs& value)
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
        value.idleMeasAvailable_r16 = (RRCResumeComplete_v1610_IEs_IdleMeasAvailable_r16)0;
    }
    if (present_1) {
        if (Decode_MeasResultIdleEUTRA_r16(dec, value.measResultIdleEUTRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MeasResultIdleNR_r16(dec, value.measResultIdleNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_RRCResumeComplete_v1610_IEs_Scg_Response_r16(dec, value.scg_Response_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_UE_MeasurementsAvailable_r16(dec, value.ue_MeasurementsAvailable_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        value.mobilityHistoryAvail_r16 = (RRCResumeComplete_v1610_IEs_MobilityHistoryAvail_r16)0;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mobilityState_r16 = (RRCResumeComplete_v1610_IEs_MobilityState_r16)tmp_value;
    }
    if (present_7) {
        if (Decode_NeedForGapsInfoNR_r16(dec, value.needForGapsInfoNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_RRCResumeComplete_v1640_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeComplete_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete_v1610_IEs(RRCResumeComplete_v1610_IEs& value)
{
    if (value.has_idleMeasAvailable_r16) {
    }
    if (value.has_measResultIdleEUTRA_r16) {
        Free_MeasResultIdleEUTRA_r16(value.measResultIdleEUTRA_r16);
    }
    if (value.has_measResultIdleNR_r16) {
        Free_MeasResultIdleNR_r16(value.measResultIdleNR_r16);
    }
    if (value.has_scg_Response_r16) {
        Free_RRCResumeComplete_v1610_IEs_Scg_Response_r16(value.scg_Response_r16);
    }
    if (value.has_ue_MeasurementsAvailable_r16) {
        Free_UE_MeasurementsAvailable_r16(value.ue_MeasurementsAvailable_r16);
    }
    if (value.has_mobilityHistoryAvail_r16) {
    }
    if (value.has_mobilityState_r16) {
    }
    if (value.has_needForGapsInfoNR_r16) {
        Free_NeedForGapsInfoNR_r16(value.needForGapsInfoNR_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResumeComplete_v1640_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete_IEs：ASN.1 RRCResumeComplete-IEs；源文件第 1480 行；SEQUENCE。
// Encode_RRCResumeComplete_IEs 只读不分配；Decode_RRCResumeComplete_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete_IEs(Encoder& enc, const RRCResumeComplete_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_dedicatedNAS_Message);
    enc.WriteBit(value.has_selectedPLMN_Identity);
    enc.WriteBit(value.has_uplinkTxDirectCurrentList);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_dedicatedNAS_Message) {
        enc.WriteSemiConstrainedOctetString(value.dedicatedNAS_Message.bytes, value.dedicatedNAS_Message.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_selectedPLMN_Identity) {
        enc.WriteConstrainedInteger((std::int64_t)(value.selectedPLMN_Identity), 1, 12);
    }
    if (value.has_uplinkTxDirectCurrentList) {
        Encode_UplinkTxDirectCurrentList(enc, value.uplinkTxDirectCurrentList);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCResumeComplete_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete_IEs(Decoder& dec, RRCResumeComplete_IEs& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.dedicatedNAS_Message.bytes = string_bytes;
        value.dedicatedNAS_Message.length = string_length;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 12, tmp_value)) { goto fail; }
        value.selectedPLMN_Identity = (int64_t)tmp_value;
    }
    if (present_2) {
        if (Decode_UplinkTxDirectCurrentList(dec, value.uplinkTxDirectCurrentList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_4) {
        if (Decode_RRCResumeComplete_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeComplete_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete_IEs(RRCResumeComplete_IEs& value)
{
    if (value.has_dedicatedNAS_Message) {
        std::free(value.dedicatedNAS_Message.bytes);
        value.dedicatedNAS_Message.bytes = nullptr;
        value.dedicatedNAS_Message.length = 0;
    }
    if (value.has_selectedPLMN_Identity) {
    }
    if (value.has_uplinkTxDirectCurrentList) {
        Free_UplinkTxDirectCurrentList(value.uplinkTxDirectCurrentList);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCResumeComplete_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1476 行；空 SEQUENCE{}。
// Encode_RRCResumeComplete_CriticalExtensionsFuture 只读不分配；Decode_RRCResumeComplete_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete_CriticalExtensionsFuture(Encoder& enc, const RRCResumeComplete_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete_CriticalExtensionsFuture(Decoder& dec, RRCResumeComplete_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete_CriticalExtensionsFuture(RRCResumeComplete_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1474 行；CHOICE。
// Encode_RRCResumeComplete_CriticalExtensions 只读不分配；Decode_RRCResumeComplete_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete_CriticalExtensions(Encoder& enc, const RRCResumeComplete_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCResumeComplete_CriticalExtensions_Tag_rrcResumeComplete:
        Encode_RRCResumeComplete_IEs(enc, value.u.rrcResumeComplete);
        break;
    case RRCResumeComplete_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_RRCResumeComplete_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete_CriticalExtensions(Decoder& dec, RRCResumeComplete_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCResumeComplete_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCResumeComplete_CriticalExtensions_Tag_rrcResumeComplete: {
        if (Decode_RRCResumeComplete_IEs(dec, value.u.rrcResumeComplete) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCResumeComplete_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_RRCResumeComplete_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeComplete_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete_CriticalExtensions(RRCResumeComplete_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCResumeComplete_CriticalExtensions_Tag_rrcResumeComplete:
        Free_RRCResumeComplete_IEs(value.u.rrcResumeComplete);
        break;
    case RRCResumeComplete_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_RRCResumeComplete_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeComplete：ASN.1 RRCResumeComplete；源文件第 1472 行；SEQUENCE。
// Encode_RRCResumeComplete 只读不分配；Decode_RRCResumeComplete 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeComplete 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeComplete(Encoder& enc, const RRCResumeComplete& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_RRCResumeComplete_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCResumeComplete(Decoder& dec, RRCResumeComplete& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_RRCResumeComplete_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeComplete(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeComplete(RRCResumeComplete& value)
{
    Free_RRCResumeComplete_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeRequest_IEs：ASN.1 RRCResumeRequest-IEs；源文件第 1536 行；SEQUENCE。
// Encode_RRCResumeRequest_IEs 只读不分配；Decode_RRCResumeRequest_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeRequest_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeRequest_IEs(Encoder& enc, const RRCResumeRequest_IEs& value)
{
    (void)value;
    enc.WriteFixedBitString(value.resumeIdentity.bytes, value.resumeIdentity.bitLength, 24, 24);
    enc.WriteFixedBitString(value.resumeMAC_I.bytes, value.resumeMAC_I.bitLength, 16, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.resumeCause), 0, 15);
    enc.WriteFixedBitString(value.spare.bytes, value.spare.bitLength, 1, 1);
    return enc.Error();
}

ErrorCode Decode_RRCResumeRequest_IEs(Decoder& dec, RRCResumeRequest_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.resumeIdentity.bytes = string_bytes;
        value.resumeIdentity.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.resumeMAC_I.bytes = string_bytes;
        value.resumeMAC_I.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.resumeCause = (ResumeCause)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 1)) { goto fail; }
        string_length = 1;
        value.spare.bytes = string_bytes;
        value.spare.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeRequest_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeRequest_IEs(RRCResumeRequest_IEs& value)
{
    std::free(value.resumeIdentity.bytes);
    value.resumeIdentity.bytes = nullptr;
    value.resumeIdentity.bitLength = 0;
    std::free(value.resumeMAC_I.bytes);
    value.resumeMAC_I.bytes = nullptr;
    value.resumeMAC_I.bitLength = 0;
    std::free(value.spare.bytes);
    value.spare.bytes = nullptr;
    value.spare.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeRequest：ASN.1 RRCResumeRequest；源文件第 1532 行；SEQUENCE。
// Encode_RRCResumeRequest 只读不分配；Decode_RRCResumeRequest 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeRequest 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeRequest(Encoder& enc, const RRCResumeRequest& value)
{
    (void)value;
    Encode_RRCResumeRequest_IEs(enc, value.rrcResumeRequest);
    return enc.Error();
}

ErrorCode Decode_RRCResumeRequest(Decoder& dec, RRCResumeRequest& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RRCResumeRequest_IEs(dec, value.rrcResumeRequest) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeRequest(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeRequest(RRCResumeRequest& value)
{
    Free_RRCResumeRequest_IEs(value.rrcResumeRequest);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeRequest1_IEs：ASN.1 RRCResumeRequest1-IEs；源文件第 1550 行；SEQUENCE。
// Encode_RRCResumeRequest1_IEs 只读不分配；Decode_RRCResumeRequest1_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeRequest1_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeRequest1_IEs(Encoder& enc, const RRCResumeRequest1_IEs& value)
{
    (void)value;
    enc.WriteFixedBitString(value.resumeIdentity.bytes, value.resumeIdentity.bitLength, 40, 40);
    enc.WriteFixedBitString(value.resumeMAC_I.bytes, value.resumeMAC_I.bitLength, 16, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.resumeCause), 0, 15);
    enc.WriteFixedBitString(value.spare.bytes, value.spare.bitLength, 1, 1);
    return enc.Error();
}

ErrorCode Decode_RRCResumeRequest1_IEs(Decoder& dec, RRCResumeRequest1_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 40)) { goto fail; }
        string_length = 40;
        value.resumeIdentity.bytes = string_bytes;
        value.resumeIdentity.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.resumeMAC_I.bytes = string_bytes;
        value.resumeMAC_I.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.resumeCause = (ResumeCause)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 1)) { goto fail; }
        string_length = 1;
        value.spare.bytes = string_bytes;
        value.spare.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeRequest1_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeRequest1_IEs(RRCResumeRequest1_IEs& value)
{
    std::free(value.resumeIdentity.bytes);
    value.resumeIdentity.bytes = nullptr;
    value.resumeIdentity.bitLength = 0;
    std::free(value.resumeMAC_I.bytes);
    value.resumeMAC_I.bytes = nullptr;
    value.resumeMAC_I.bitLength = 0;
    std::free(value.spare.bytes);
    value.spare.bytes = nullptr;
    value.spare.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCResumeRequest1：ASN.1 RRCResumeRequest1；源文件第 1546 行；SEQUENCE。
// Encode_RRCResumeRequest1 只读不分配；Decode_RRCResumeRequest1 可能 malloc（失败时内部已释放并清零）；Free_RRCResumeRequest1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCResumeRequest1(Encoder& enc, const RRCResumeRequest1& value)
{
    (void)value;
    Encode_RRCResumeRequest1_IEs(enc, value.rrcResumeRequest1);
    return enc.Error();
}

ErrorCode Decode_RRCResumeRequest1(Decoder& dec, RRCResumeRequest1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RRCResumeRequest1_IEs(dec, value.rrcResumeRequest1) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCResumeRequest1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCResumeRequest1(RRCResumeRequest1& value)
{
    Free_RRCResumeRequest1_IEs(value.rrcResumeRequest1);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetup_v1700_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1578 行；空 SEQUENCE{}。
// Encode_RRCSetup_v1700_IEs_NonCriticalExtension 只读不分配；Decode_RRCSetup_v1700_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_RRCSetup_v1700_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetup_v1700_IEs_NonCriticalExtension(Encoder& enc, const RRCSetup_v1700_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCSetup_v1700_IEs_NonCriticalExtension(Decoder& dec, RRCSetup_v1700_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetup_v1700_IEs_NonCriticalExtension(RRCSetup_v1700_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetup_v1700_IEs：ASN.1 RRCSetup-v1700-IEs；源文件第 1575 行；SEQUENCE。
// Encode_RRCSetup_v1700_IEs 只读不分配；Decode_RRCSetup_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCSetup_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetup_v1700_IEs(Encoder& enc, const RRCSetup_v1700_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_ConfigDedicatedNR_r17);
    enc.WriteBit(value.has_sl_L2RemoteUE_Config_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_sl_ConfigDedicatedNR_r17) {
        Encode_SL_ConfigDedicatedNR_r16(enc, value.sl_ConfigDedicatedNR_r17);
    }
    if (value.has_sl_L2RemoteUE_Config_r17) {
        Encode_SL_L2RemoteUE_Config_r17(enc, value.sl_L2RemoteUE_Config_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCSetup_v1700_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSetup_v1700_IEs(Decoder& dec, RRCSetup_v1700_IEs& value)
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
        if (Decode_SL_ConfigDedicatedNR_r16(dec, value.sl_ConfigDedicatedNR_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_L2RemoteUE_Config_r17(dec, value.sl_L2RemoteUE_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_RRCSetup_v1700_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetup_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetup_v1700_IEs(RRCSetup_v1700_IEs& value)
{
    if (value.has_sl_ConfigDedicatedNR_r17) {
        Free_SL_ConfigDedicatedNR_r16(value.sl_ConfigDedicatedNR_r17);
    }
    if (value.has_sl_L2RemoteUE_Config_r17) {
        Free_SL_L2RemoteUE_Config_r17(value.sl_L2RemoteUE_Config_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCSetup_v1700_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetup_IEs：ASN.1 RRCSetup-IEs；源文件第 1568 行；SEQUENCE。
// Encode_RRCSetup_IEs 只读不分配；Decode_RRCSetup_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCSetup_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetup_IEs(Encoder& enc, const RRCSetup_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_RadioBearerConfig(enc, value.radioBearerConfig);
    if (value.masterCellGroup == nullptr) {
        enc.Fail(ErrorCode_MissingMandatoryField);
    } else {
        EncodeContained_CellGroupConfig(enc, *value.masterCellGroup);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCSetup_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSetup_IEs(Decoder& dec, RRCSetup_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_RadioBearerConfig(dec, value.radioBearerConfig) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        CellGroupConfig* containing_value = (CellGroupConfig*)std::malloc(sizeof(CellGroupConfig));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_CellGroupConfig(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_CellGroupConfig(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_CellGroupConfig(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.masterCellGroup = containing_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_RRCSetup_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetup_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetup_IEs(RRCSetup_IEs& value)
{
    Free_RadioBearerConfig(value.radioBearerConfig);
    if (value.masterCellGroup != nullptr) {
        Free_CellGroupConfig(*value.masterCellGroup);
        std::free(value.masterCellGroup);
        value.masterCellGroup = nullptr;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCSetup_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetup_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1564 行；空 SEQUENCE{}。
// Encode_RRCSetup_CriticalExtensionsFuture 只读不分配；Decode_RRCSetup_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCSetup_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetup_CriticalExtensionsFuture(Encoder& enc, const RRCSetup_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCSetup_CriticalExtensionsFuture(Decoder& dec, RRCSetup_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetup_CriticalExtensionsFuture(RRCSetup_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetup_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1562 行；CHOICE。
// Encode_RRCSetup_CriticalExtensions 只读不分配；Decode_RRCSetup_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCSetup_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetup_CriticalExtensions(Encoder& enc, const RRCSetup_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCSetup_CriticalExtensions_Tag_rrcSetup:
        Encode_RRCSetup_IEs(enc, value.u.rrcSetup);
        break;
    case RRCSetup_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_RRCSetup_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSetup_CriticalExtensions(Decoder& dec, RRCSetup_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCSetup_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCSetup_CriticalExtensions_Tag_rrcSetup: {
        if (Decode_RRCSetup_IEs(dec, value.u.rrcSetup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCSetup_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_RRCSetup_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetup_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetup_CriticalExtensions(RRCSetup_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCSetup_CriticalExtensions_Tag_rrcSetup:
        Free_RRCSetup_IEs(value.u.rrcSetup);
        break;
    case RRCSetup_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_RRCSetup_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetup：ASN.1 RRCSetup；源文件第 1560 行；SEQUENCE。
// Encode_RRCSetup 只读不分配；Decode_RRCSetup 可能 malloc（失败时内部已释放并清零）；Free_RRCSetup 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetup(Encoder& enc, const RRCSetup& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_RRCSetup_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCSetup(Decoder& dec, RRCSetup& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_RRCSetup_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetup(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetup(RRCSetup& value)
{
    Free_RRCSetup_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupComplete_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1632 行；空 SEQUENCE{}。
// Encode_RRCSetupComplete_v1800_IEs_NonCriticalExtension 只读不分配；Decode_RRCSetupComplete_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupComplete_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupComplete_v1800_IEs_NonCriticalExtension(Encoder& enc, const RRCSetupComplete_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCSetupComplete_v1800_IEs_NonCriticalExtension(Decoder& dec, RRCSetupComplete_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupComplete_v1800_IEs_NonCriticalExtension(RRCSetupComplete_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupComplete_v1800_IEs：ASN.1 RRCSetupComplete-v1800-IEs；源文件第 1625 行；SEQUENCE。
// Encode_RRCSetupComplete_v1800_IEs 只读不分配；Decode_RRCSetupComplete_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupComplete_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupComplete_v1800_IEs(Encoder& enc, const RRCSetupComplete_v1800_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_ncr_NodeIndication_r18);
    enc.WriteBit(value.has_musim_CapRestrictionInd_r18);
    enc.WriteBit(value.has_flightPathInfoAvailable_r18);
    enc.WriteBit(value.has_measConfigReportAppLayerAvailable_r18);
    enc.WriteBit(value.has_mobileIAB_NodeIndication_r18);
    enc.WriteBit(value.has_reselectionMeasAvailable_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ncr_NodeIndication_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncr_NodeIndication_r18), 0, 0);
    }
    if (value.has_musim_CapRestrictionInd_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_CapRestrictionInd_r18), 0, 0);
    }
    if (value.has_flightPathInfoAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.flightPathInfoAvailable_r18), 0, 0);
    }
    if (value.has_measConfigReportAppLayerAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measConfigReportAppLayerAvailable_r18), 0, 0);
    }
    if (value.has_mobileIAB_NodeIndication_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mobileIAB_NodeIndication_r18), 0, 0);
    }
    if (value.has_reselectionMeasAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reselectionMeasAvailable_r18), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCSetupComplete_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSetupComplete_v1800_IEs(Decoder& dec, RRCSetupComplete_v1800_IEs& value)
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
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (present_0) {
        value.ncr_NodeIndication_r18 = (RRCSetupComplete_v1800_IEs_Ncr_NodeIndication_r18)0;
    }
    if (present_1) {
        value.musim_CapRestrictionInd_r18 = (RRCSetupComplete_v1800_IEs_Musim_CapRestrictionInd_r18)0;
    }
    if (present_2) {
        value.flightPathInfoAvailable_r18 = (RRCSetupComplete_v1800_IEs_FlightPathInfoAvailable_r18)0;
    }
    if (present_3) {
        value.measConfigReportAppLayerAvailable_r18 = (RRCSetupComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18)0;
    }
    if (present_4) {
        value.mobileIAB_NodeIndication_r18 = (RRCSetupComplete_v1800_IEs_MobileIAB_NodeIndication_r18)0;
    }
    if (present_5) {
        value.reselectionMeasAvailable_r18 = (RRCSetupComplete_v1800_IEs_ReselectionMeasAvailable_r18)0;
    }
    if (present_6) {
        if (Decode_RRCSetupComplete_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetupComplete_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupComplete_v1800_IEs(RRCSetupComplete_v1800_IEs& value)
{
    if (value.has_ncr_NodeIndication_r18) {
    }
    if (value.has_musim_CapRestrictionInd_r18) {
    }
    if (value.has_flightPathInfoAvailable_r18) {
    }
    if (value.has_measConfigReportAppLayerAvailable_r18) {
    }
    if (value.has_mobileIAB_NodeIndication_r18) {
    }
    if (value.has_reselectionMeasAvailable_r18) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCSetupComplete_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupComplete_v1700_IEs：ASN.1 RRCSetupComplete-v1700-IEs；源文件第 1620 行；SEQUENCE。
// Encode_RRCSetupComplete_v1700_IEs 只读不分配；Decode_RRCSetupComplete_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupComplete_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupComplete_v1700_IEs(Encoder& enc, const RRCSetupComplete_v1700_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_onboardingRequest_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_onboardingRequest_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.onboardingRequest_r17), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCSetupComplete_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSetupComplete_v1700_IEs(Decoder& dec, RRCSetupComplete_v1700_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.onboardingRequest_r17 = (RRCSetupComplete_v1700_IEs_OnboardingRequest_r17)0;
    }
    if (present_1) {
        if (Decode_RRCSetupComplete_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetupComplete_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupComplete_v1700_IEs(RRCSetupComplete_v1700_IEs& value)
{
    if (value.has_onboardingRequest_r17) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCSetupComplete_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupComplete_v1690_IEs：ASN.1 RRCSetupComplete-v1690-IEs；源文件第 1615 行；SEQUENCE。
// Encode_RRCSetupComplete_v1690_IEs 只读不分配；Decode_RRCSetupComplete_v1690_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupComplete_v1690_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupComplete_v1690_IEs(Encoder& enc, const RRCSetupComplete_v1690_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_ul_RRC_Segmentation_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ul_RRC_Segmentation_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_RRC_Segmentation_r16), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCSetupComplete_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSetupComplete_v1690_IEs(Decoder& dec, RRCSetupComplete_v1690_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.ul_RRC_Segmentation_r16 = (RRCSetupComplete_v1690_IEs_Ul_RRC_Segmentation_r16)0;
    }
    if (present_1) {
        if (Decode_RRCSetupComplete_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetupComplete_v1690_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupComplete_v1690_IEs(RRCSetupComplete_v1690_IEs& value)
{
    if (value.has_ul_RRC_Segmentation_r16) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCSetupComplete_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupComplete_v1610_IEs：ASN.1 RRCSetupComplete-v1610-IEs；源文件第 1606 行；SEQUENCE。
// Encode_RRCSetupComplete_v1610_IEs 只读不分配；Decode_RRCSetupComplete_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupComplete_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupComplete_v1610_IEs(Encoder& enc, const RRCSetupComplete_v1610_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_iab_NodeIndication_r16);
    enc.WriteBit(value.has_idleMeasAvailable_r16);
    enc.WriteBit(value.has_ue_MeasurementsAvailable_r16);
    enc.WriteBit(value.has_mobilityHistoryAvail_r16);
    enc.WriteBit(value.has_mobilityState_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_iab_NodeIndication_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.iab_NodeIndication_r16), 0, 0);
    }
    if (value.has_idleMeasAvailable_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleMeasAvailable_r16), 0, 0);
    }
    if (value.has_ue_MeasurementsAvailable_r16) {
        Encode_UE_MeasurementsAvailable_r16(enc, value.ue_MeasurementsAvailable_r16);
    }
    if (value.has_mobilityHistoryAvail_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mobilityHistoryAvail_r16), 0, 0);
    }
    if (value.has_mobilityState_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mobilityState_r16), 0, 3);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCSetupComplete_v1690_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSetupComplete_v1610_IEs(Decoder& dec, RRCSetupComplete_v1610_IEs& value)
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
        value.iab_NodeIndication_r16 = (RRCSetupComplete_v1610_IEs_Iab_NodeIndication_r16)0;
    }
    if (present_1) {
        value.idleMeasAvailable_r16 = (RRCSetupComplete_v1610_IEs_IdleMeasAvailable_r16)0;
    }
    if (present_2) {
        if (Decode_UE_MeasurementsAvailable_r16(dec, value.ue_MeasurementsAvailable_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.mobilityHistoryAvail_r16 = (RRCSetupComplete_v1610_IEs_MobilityHistoryAvail_r16)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mobilityState_r16 = (RRCSetupComplete_v1610_IEs_MobilityState_r16)tmp_value;
    }
    if (present_5) {
        if (Decode_RRCSetupComplete_v1690_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetupComplete_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupComplete_v1610_IEs(RRCSetupComplete_v1610_IEs& value)
{
    if (value.has_iab_NodeIndication_r16) {
    }
    if (value.has_idleMeasAvailable_r16) {
    }
    if (value.has_ue_MeasurementsAvailable_r16) {
        Free_UE_MeasurementsAvailable_r16(value.ue_MeasurementsAvailable_r16);
    }
    if (value.has_mobilityHistoryAvail_r16) {
    }
    if (value.has_mobilityState_r16) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCSetupComplete_v1690_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RegisteredAMF：ASN.1 RegisteredAMF；源文件第 1635 行；SEQUENCE。
// Encode_RegisteredAMF 只读不分配；Decode_RegisteredAMF 可能 malloc（失败时内部已释放并清零）；Free_RegisteredAMF 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RegisteredAMF(Encoder& enc, const RegisteredAMF& value)
{
    (void)value;
    enc.WriteBit(value.has_plmn_Identity);
    if (value.has_plmn_Identity) {
        Encode_PLMN_Identity(enc, value.plmn_Identity);
    }
    enc.WriteFixedBitString(value.amf_Identifier.bytes, value.amf_Identifier.bitLength, 24, 24);
    return enc.Error();
}

ErrorCode Decode_RegisteredAMF(Decoder& dec, RegisteredAMF& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.amf_Identifier.bytes = string_bytes;
        value.amf_Identifier.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RegisteredAMF(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RegisteredAMF(RegisteredAMF& value)
{
    if (value.has_plmn_Identity) {
        Free_PLMN_Identity(value.plmn_Identity);
    }
    std::free(value.amf_Identifier.bytes);
    value.amf_Identifier.bytes = nullptr;
    value.amf_Identifier.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value：ASN.1 ng-5G-S-TMSI-Value；源文件第 1598 行；CHOICE。
// Encode_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value 只读不分配；Decode_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value(Encoder& enc, const RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag_ng_5G_S_TMSI:
        enc.WriteFixedBitString(value.u.ng_5G_S_TMSI.bytes, value.u.ng_5G_S_TMSI.bitLength, 48, 48);
        break;
    case RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag_ng_5G_S_TMSI_Part2:
        enc.WriteFixedBitString(value.u.ng_5G_S_TMSI_Part2.bytes, value.u.ng_5G_S_TMSI_Part2.bitLength, 9, 9);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value(Decoder& dec, RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag)root_index;
    switch (value.tag) {
    case RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag_ng_5G_S_TMSI: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.u.ng_5G_S_TMSI.bytes = string_bytes;
        value.u.ng_5G_S_TMSI.bitLength = string_length;
        break;
    }
    case RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag_ng_5G_S_TMSI_Part2: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 9)) { goto fail; }
        string_length = 9;
        value.u.ng_5G_S_TMSI_Part2.bytes = string_bytes;
        value.u.ng_5G_S_TMSI_Part2.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value(RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value& value)
{
    switch (value.tag) {
    case RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag_ng_5G_S_TMSI:
        std::free(value.u.ng_5G_S_TMSI.bytes);
        break;
    case RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag_ng_5G_S_TMSI_Part2:
        std::free(value.u.ng_5G_S_TMSI_Part2.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupComplete_IEs：ASN.1 RRCSetupComplete-IEs；源文件第 1592 行；SEQUENCE。
// Encode_RRCSetupComplete_IEs 只读不分配；Decode_RRCSetupComplete_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupComplete_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupComplete_IEs(Encoder& enc, const RRCSetupComplete_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_registeredAMF);
    enc.WriteBit(value.has_guami_Type);
    enc.WriteBit(value.has_s_NSSAI_List);
    enc.WriteBit(value.has_ng_5G_S_TMSI_Value);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    enc.WriteConstrainedInteger((std::int64_t)(value.selectedPLMN_Identity), 1, 12);
    if (value.has_registeredAMF) {
        Encode_RegisteredAMF(enc, value.registeredAMF);
    }
    if (value.has_guami_Type) {
        enc.WriteConstrainedInteger((std::int64_t)(value.guami_Type), 0, 1);
    }
    if (value.has_s_NSSAI_List) {
enc.WriteConstrainedLength(value.s_NSSAI_List_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.s_NSSAI_List_count; ++i) {
    Encode_S_NSSAI(enc, value.s_NSSAI_List_items[i]);
}
    }
    enc.WriteSemiConstrainedOctetString(value.dedicatedNAS_Message.bytes, value.dedicatedNAS_Message.length, 0, 0xFFFFFFFFu);
    if (value.has_ng_5G_S_TMSI_Value) {
        Encode_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value(enc, value.ng_5G_S_TMSI_Value);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCSetupComplete_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSetupComplete_IEs(Decoder& dec, RRCSetupComplete_IEs& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 12, tmp_value)) { goto fail; }
        value.selectedPLMN_Identity = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_RegisteredAMF(dec, value.registeredAMF) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.guami_Type = (RRCSetupComplete_IEs_Guami_Type)tmp_value;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.s_NSSAI_List_count)) { goto fail; }
if (value.s_NSSAI_List_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.s_NSSAI_List_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.s_NSSAI_List_count > 0u) {
    value.s_NSSAI_List_items = (S_NSSAI*)std::malloc((std::size_t)value.s_NSSAI_List_count * sizeof(S_NSSAI));
    if (value.s_NSSAI_List_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.s_NSSAI_List_items, 0, (std::size_t)value.s_NSSAI_List_count * sizeof(S_NSSAI));
}
for (std::uint32_t i = 0; i < value.s_NSSAI_List_count; ++i) {
    if (Decode_S_NSSAI(dec, value.s_NSSAI_List_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.dedicatedNAS_Message.bytes = string_bytes;
        value.dedicatedNAS_Message.length = string_length;
    }
    if (present_3) {
        if (Decode_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value(dec, value.ng_5G_S_TMSI_Value) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_5) {
        if (Decode_RRCSetupComplete_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetupComplete_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupComplete_IEs(RRCSetupComplete_IEs& value)
{
    if (value.has_registeredAMF) {
        Free_RegisteredAMF(value.registeredAMF);
    }
    if (value.has_guami_Type) {
    }
    if (value.has_s_NSSAI_List) {
        if (value.s_NSSAI_List_items != nullptr) {
            for (std::uint32_t i = 0; i < value.s_NSSAI_List_count; ++i) {
                Free_S_NSSAI(value.s_NSSAI_List_items[i]);
            }
            std::free(value.s_NSSAI_List_items);
            value.s_NSSAI_List_items = nullptr;
        }
        value.s_NSSAI_List_count = 0;
    }
    std::free(value.dedicatedNAS_Message.bytes);
    value.dedicatedNAS_Message.bytes = nullptr;
    value.dedicatedNAS_Message.length = 0;
    if (value.has_ng_5G_S_TMSI_Value) {
        Free_RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value(value.ng_5G_S_TMSI_Value);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCSetupComplete_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupComplete_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1588 行；空 SEQUENCE{}。
// Encode_RRCSetupComplete_CriticalExtensionsFuture 只读不分配；Decode_RRCSetupComplete_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupComplete_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupComplete_CriticalExtensionsFuture(Encoder& enc, const RRCSetupComplete_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCSetupComplete_CriticalExtensionsFuture(Decoder& dec, RRCSetupComplete_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupComplete_CriticalExtensionsFuture(RRCSetupComplete_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupComplete_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1586 行；CHOICE。
// Encode_RRCSetupComplete_CriticalExtensions 只读不分配；Decode_RRCSetupComplete_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupComplete_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupComplete_CriticalExtensions(Encoder& enc, const RRCSetupComplete_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCSetupComplete_CriticalExtensions_Tag_rrcSetupComplete:
        Encode_RRCSetupComplete_IEs(enc, value.u.rrcSetupComplete);
        break;
    case RRCSetupComplete_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_RRCSetupComplete_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSetupComplete_CriticalExtensions(Decoder& dec, RRCSetupComplete_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCSetupComplete_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCSetupComplete_CriticalExtensions_Tag_rrcSetupComplete: {
        if (Decode_RRCSetupComplete_IEs(dec, value.u.rrcSetupComplete) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCSetupComplete_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_RRCSetupComplete_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetupComplete_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupComplete_CriticalExtensions(RRCSetupComplete_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCSetupComplete_CriticalExtensions_Tag_rrcSetupComplete:
        Free_RRCSetupComplete_IEs(value.u.rrcSetupComplete);
        break;
    case RRCSetupComplete_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_RRCSetupComplete_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupComplete：ASN.1 RRCSetupComplete；源文件第 1584 行；SEQUENCE。
// Encode_RRCSetupComplete 只读不分配；Decode_RRCSetupComplete 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupComplete 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupComplete(Encoder& enc, const RRCSetupComplete& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_RRCSetupComplete_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCSetupComplete(Decoder& dec, RRCSetupComplete& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_RRCSetupComplete_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetupComplete(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupComplete(RRCSetupComplete& value)
{
    Free_RRCSetupComplete_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InitialUE_Identity：ASN.1 InitialUE-Identity；源文件第 1653 行；CHOICE。
// Encode_InitialUE_Identity 只读不分配；Decode_InitialUE_Identity 可能 malloc（失败时内部已释放并清零）；Free_InitialUE_Identity 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InitialUE_Identity(Encoder& enc, const InitialUE_Identity& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case InitialUE_Identity_Tag_ng_5G_S_TMSI_Part1:
        enc.WriteFixedBitString(value.u.ng_5G_S_TMSI_Part1.bytes, value.u.ng_5G_S_TMSI_Part1.bitLength, 39, 39);
        break;
    case InitialUE_Identity_Tag_randomValue:
        enc.WriteFixedBitString(value.u.randomValue.bytes, value.u.randomValue.bitLength, 39, 39);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_InitialUE_Identity(Decoder& dec, InitialUE_Identity& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (InitialUE_Identity_Tag)root_index;
    switch (value.tag) {
    case InitialUE_Identity_Tag_ng_5G_S_TMSI_Part1: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 39)) { goto fail; }
        string_length = 39;
        value.u.ng_5G_S_TMSI_Part1.bytes = string_bytes;
        value.u.ng_5G_S_TMSI_Part1.bitLength = string_length;
        break;
    }
    case InitialUE_Identity_Tag_randomValue: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 39)) { goto fail; }
        string_length = 39;
        value.u.randomValue.bytes = string_bytes;
        value.u.randomValue.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_InitialUE_Identity(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InitialUE_Identity(InitialUE_Identity& value)
{
    switch (value.tag) {
    case InitialUE_Identity_Tag_ng_5G_S_TMSI_Part1:
        std::free(value.u.ng_5G_S_TMSI_Part1.bytes);
        break;
    case InitialUE_Identity_Tag_randomValue:
        std::free(value.u.randomValue.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupRequest_IEs：ASN.1 RRCSetupRequest-IEs；源文件第 1647 行；SEQUENCE。
// Encode_RRCSetupRequest_IEs 只读不分配；Decode_RRCSetupRequest_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupRequest_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupRequest_IEs(Encoder& enc, const RRCSetupRequest_IEs& value)
{
    (void)value;
    Encode_InitialUE_Identity(enc, value.ue_Identity);
    enc.WriteConstrainedInteger((std::int64_t)(value.establishmentCause), 0, 15);
    enc.WriteFixedBitString(value.spare.bytes, value.spare.bitLength, 1, 1);
    return enc.Error();
}

ErrorCode Decode_RRCSetupRequest_IEs(Decoder& dec, RRCSetupRequest_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_InitialUE_Identity(dec, value.ue_Identity) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.establishmentCause = (EstablishmentCause)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 1)) { goto fail; }
        string_length = 1;
        value.spare.bytes = string_bytes;
        value.spare.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetupRequest_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupRequest_IEs(RRCSetupRequest_IEs& value)
{
    Free_InitialUE_Identity(value.ue_Identity);
    std::free(value.spare.bytes);
    value.spare.bytes = nullptr;
    value.spare.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSetupRequest：ASN.1 RRCSetupRequest；源文件第 1643 行；SEQUENCE。
// Encode_RRCSetupRequest 只读不分配；Decode_RRCSetupRequest 可能 malloc（失败时内部已释放并清零）；Free_RRCSetupRequest 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSetupRequest(Encoder& enc, const RRCSetupRequest& value)
{
    (void)value;
    Encode_RRCSetupRequest_IEs(enc, value.rrcSetupRequest);
    return enc.Error();
}

ErrorCode Decode_RRCSetupRequest(Decoder& dec, RRCSetupRequest& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RRCSetupRequest_IEs(dec, value.rrcSetupRequest) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSetupRequest(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSetupRequest(RRCSetupRequest& value)
{
    Free_RRCSetupRequest_IEs(value.rrcSetupRequest);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSystemInfoRequest_IEs：ASN.1 RRCSystemInfoRequest-IEs；源文件第 1676 行；SEQUENCE。
// Encode_RRCSystemInfoRequest_IEs 只读不分配；Decode_RRCSystemInfoRequest_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCSystemInfoRequest_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSystemInfoRequest_IEs(Encoder& enc, const RRCSystemInfoRequest_IEs& value)
{
    (void)value;
    enc.WriteFixedBitString(value.requested_SI_List.bytes, value.requested_SI_List.bitLength, 32, 32);
    enc.WriteFixedBitString(value.spare.bytes, value.spare.bitLength, 12, 12);
    return enc.Error();
}

ErrorCode Decode_RRCSystemInfoRequest_IEs(Decoder& dec, RRCSystemInfoRequest_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.requested_SI_List.bytes = string_bytes;
        value.requested_SI_List.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 12)) { goto fail; }
        string_length = 12;
        value.spare.bytes = string_bytes;
        value.spare.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSystemInfoRequest_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSystemInfoRequest_IEs(RRCSystemInfoRequest_IEs& value)
{
    std::free(value.requested_SI_List.bytes);
    value.requested_SI_List.bytes = nullptr;
    value.requested_SI_List.bitLength = 0;
    std::free(value.spare.bytes);
    value.spare.bytes = nullptr;
    value.spare.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRC_PosSystemInfoRequest_r16_IEs：ASN.1 RRC-PosSystemInfoRequest-r16-IEs；源文件第 1681 行；SEQUENCE。
// Encode_RRC_PosSystemInfoRequest_r16_IEs 只读不分配；Decode_RRC_PosSystemInfoRequest_r16_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRC_PosSystemInfoRequest_r16_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRC_PosSystemInfoRequest_r16_IEs(Encoder& enc, const RRC_PosSystemInfoRequest_r16_IEs& value)
{
    (void)value;
    enc.WriteFixedBitString(value.requestedPosSI_List.bytes, value.requestedPosSI_List.bitLength, 32, 32);
    enc.WriteFixedBitString(value.spare.bytes, value.spare.bitLength, 11, 11);
    return enc.Error();
}

ErrorCode Decode_RRC_PosSystemInfoRequest_r16_IEs(Decoder& dec, RRC_PosSystemInfoRequest_r16_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.requestedPosSI_List.bytes = string_bytes;
        value.requestedPosSI_List.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 11)) { goto fail; }
        string_length = 11;
        value.spare.bytes = string_bytes;
        value.spare.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRC_PosSystemInfoRequest_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRC_PosSystemInfoRequest_r16_IEs(RRC_PosSystemInfoRequest_r16_IEs& value)
{
    std::free(value.requestedPosSI_List.bytes);
    value.requestedPosSI_List.bytes = nullptr;
    value.requestedPosSI_List.bitLength = 0;
    std::free(value.spare.bytes);
    value.spare.bytes = nullptr;
    value.spare.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture-r16/criticalExtensionsFuture；源文件第 1671 行；空 SEQUENCE{}。
// Encode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture 只读不分配；Decode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(Encoder& enc, const RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(Decoder& dec, RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSystemInfoRequest_CriticalExtensionsFuture_r16：ASN.1 criticalExtensions/criticalExtensionsFuture-r16；源文件第 1669 行；CHOICE。
// Encode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16 只读不分配；Decode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16 可能 malloc（失败时内部已释放并清零）；Free_RRCSystemInfoRequest_CriticalExtensionsFuture_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16(Encoder& enc, const RRCSystemInfoRequest_CriticalExtensionsFuture_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag_rrcPosSystemInfoRequest_r16:
        Encode_RRC_PosSystemInfoRequest_r16_IEs(enc, value.u.rrcPosSystemInfoRequest_r16);
        break;
    case RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag_criticalExtensionsFuture:
        Encode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16(Decoder& dec, RRCSystemInfoRequest_CriticalExtensionsFuture_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag)root_index;
    switch (value.tag) {
    case RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag_rrcPosSystemInfoRequest_r16: {
        if (Decode_RRC_PosSystemInfoRequest_r16_IEs(dec, value.u.rrcPosSystemInfoRequest_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag_criticalExtensionsFuture: {
        if (Decode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSystemInfoRequest_CriticalExtensionsFuture_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSystemInfoRequest_CriticalExtensionsFuture_r16(RRCSystemInfoRequest_CriticalExtensionsFuture_r16& value)
{
    switch (value.tag) {
    case RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag_rrcPosSystemInfoRequest_r16:
        Free_RRC_PosSystemInfoRequest_r16_IEs(value.u.rrcPosSystemInfoRequest_r16);
        break;
    case RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag_criticalExtensionsFuture:
        Free_RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSystemInfoRequest_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1667 行；CHOICE。
// Encode_RRCSystemInfoRequest_CriticalExtensions 只读不分配；Decode_RRCSystemInfoRequest_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCSystemInfoRequest_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSystemInfoRequest_CriticalExtensions(Encoder& enc, const RRCSystemInfoRequest_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCSystemInfoRequest_CriticalExtensions_Tag_rrcSystemInfoRequest:
        Encode_RRCSystemInfoRequest_IEs(enc, value.u.rrcSystemInfoRequest);
        break;
    case RRCSystemInfoRequest_CriticalExtensions_Tag_criticalExtensionsFuture_r16:
        Encode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16(enc, value.u.criticalExtensionsFuture_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCSystemInfoRequest_CriticalExtensions(Decoder& dec, RRCSystemInfoRequest_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCSystemInfoRequest_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCSystemInfoRequest_CriticalExtensions_Tag_rrcSystemInfoRequest: {
        if (Decode_RRCSystemInfoRequest_IEs(dec, value.u.rrcSystemInfoRequest) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCSystemInfoRequest_CriticalExtensions_Tag_criticalExtensionsFuture_r16: {
        if (Decode_RRCSystemInfoRequest_CriticalExtensionsFuture_r16(dec, value.u.criticalExtensionsFuture_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSystemInfoRequest_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSystemInfoRequest_CriticalExtensions(RRCSystemInfoRequest_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCSystemInfoRequest_CriticalExtensions_Tag_rrcSystemInfoRequest:
        Free_RRCSystemInfoRequest_IEs(value.u.rrcSystemInfoRequest);
        break;
    case RRCSystemInfoRequest_CriticalExtensions_Tag_criticalExtensionsFuture_r16:
        Free_RRCSystemInfoRequest_CriticalExtensionsFuture_r16(value.u.criticalExtensionsFuture_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCSystemInfoRequest：ASN.1 RRCSystemInfoRequest；源文件第 1666 行；SEQUENCE。
// Encode_RRCSystemInfoRequest 只读不分配；Decode_RRCSystemInfoRequest 可能 malloc（失败时内部已释放并清零）；Free_RRCSystemInfoRequest 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCSystemInfoRequest(Encoder& enc, const RRCSystemInfoRequest& value)
{
    (void)value;
    Encode_RRCSystemInfoRequest_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCSystemInfoRequest(Decoder& dec, RRCSystemInfoRequest& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RRCSystemInfoRequest_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCSystemInfoRequest(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCSystemInfoRequest(RRCSystemInfoRequest& value)
{
    Free_RRCSystemInfoRequest_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformation_v1590_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1703 行；空 SEQUENCE{}。
// Encode_SCGFailureInformation_v1590_IEs_NonCriticalExtension 只读不分配；Decode_SCGFailureInformation_v1590_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformation_v1590_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformation_v1590_IEs_NonCriticalExtension(Encoder& enc, const SCGFailureInformation_v1590_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformation_v1590_IEs_NonCriticalExtension(Decoder& dec, SCGFailureInformation_v1590_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformation_v1590_IEs_NonCriticalExtension(SCGFailureInformation_v1590_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformation_v1590_IEs：ASN.1 SCGFailureInformation-v1590-IEs；源文件第 1701 行；SEQUENCE。
// Encode_SCGFailureInformation_v1590_IEs 只读不分配；Decode_SCGFailureInformation_v1590_IEs 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformation_v1590_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformation_v1590_IEs(Encoder& enc, const SCGFailureInformation_v1590_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SCGFailureInformation_v1590_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformation_v1590_IEs(Decoder& dec, SCGFailureInformation_v1590_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_SCGFailureInformation_v1590_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCGFailureInformation_v1590_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformation_v1590_IEs(SCGFailureInformation_v1590_IEs& value)
{
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_SCGFailureInformation_v1590_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureReportSCG_ExtGroup1：ASN.1 FailureReportSCG_ExtGroup1；源文件第 1715 行；扩展添加组 [[ ]]。
// Encode_FailureReportSCG_ExtGroup1 只读不分配；Decode_FailureReportSCG_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_FailureReportSCG_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureReportSCG_ExtGroup1(Encoder& enc, const FailureReportSCG_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_locationInfo_r16);
    enc.WriteBit(value.has_failureType_v1610);
    if (value.has_locationInfo_r16) {
        Encode_LocationInfo_r16(enc, value.locationInfo_r16);
    }
    if (value.has_failureType_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.failureType_v1610), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_FailureReportSCG_ExtGroup1(Decoder& dec, FailureReportSCG_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_LocationInfo_r16(dec, value.locationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.failureType_v1610 = (FailureReportSCG_ExtGroup1_FailureType_v1610)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureReportSCG_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureReportSCG_ExtGroup1(FailureReportSCG_ExtGroup1& value)
{
    if (value.has_locationInfo_r16) {
        Free_LocationInfo_r16(value.locationInfo_r16);
    }
    if (value.has_failureType_v1610) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRAInfoList_r16：ASN.1 PerRAInfoList-r16；源文件第 2880 行；SEQUENCE OF。
// Encode_PerRAInfoList_r16 只读不分配；Decode_PerRAInfoList_r16 可能 malloc（失败时内部已释放并清零）；Free_PerRAInfoList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRAInfoList_r16(Encoder& enc, const PerRAInfoList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 200u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PerRAInfo_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PerRAInfoList_r16(Decoder& dec, PerRAInfoList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 200u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 200u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PerRAInfo_r16*)std::malloc((std::size_t)value.count * sizeof(PerRAInfo_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PerRAInfo_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PerRAInfo_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PerRAInfoList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRAInfoList_r16(PerRAInfoList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PerRAInfo_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureReportSCG_ExtGroup2_PreviousPSCellId_r17：ASN.1 previousPSCellId-r17；源文件第 1721 行；SEQUENCE。
// Encode_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17 只读不分配；Decode_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17 可能 malloc（失败时内部已释放并清零）；Free_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17(Encoder& enc, const FailureReportSCG_ExtGroup2_PreviousPSCellId_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r17), 0, 1007);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r17), 0, 3279165);
    return enc.Error();
}

ErrorCode Decode_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17(Decoder& dec, FailureReportSCG_ExtGroup2_PreviousPSCellId_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r17 = (PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r17 = (ARFCN_ValueNR)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17(FailureReportSCG_ExtGroup2_PreviousPSCellId_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureReportSCG_ExtGroup2_FailedPSCellId_r17：ASN.1 failedPSCellId-r17；源文件第 1725 行；SEQUENCE。
// Encode_FailureReportSCG_ExtGroup2_FailedPSCellId_r17 只读不分配；Decode_FailureReportSCG_ExtGroup2_FailedPSCellId_r17 可能 malloc（失败时内部已释放并清零）；Free_FailureReportSCG_ExtGroup2_FailedPSCellId_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureReportSCG_ExtGroup2_FailedPSCellId_r17(Encoder& enc, const FailureReportSCG_ExtGroup2_FailedPSCellId_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r17), 0, 1007);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r17), 0, 3279165);
    return enc.Error();
}

ErrorCode Decode_FailureReportSCG_ExtGroup2_FailedPSCellId_r17(Decoder& dec, FailureReportSCG_ExtGroup2_FailedPSCellId_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r17 = (PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r17 = (ARFCN_ValueNR)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureReportSCG_ExtGroup2_FailedPSCellId_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureReportSCG_ExtGroup2_FailedPSCellId_r17(FailureReportSCG_ExtGroup2_FailedPSCellId_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureReportSCG_ExtGroup2：ASN.1 FailureReportSCG_ExtGroup2；源文件第 1720 行；扩展添加组 [[ ]]。
// Encode_FailureReportSCG_ExtGroup2 只读不分配；Decode_FailureReportSCG_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_FailureReportSCG_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureReportSCG_ExtGroup2(Encoder& enc, const FailureReportSCG_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_previousPSCellId_r17);
    enc.WriteBit(value.has_failedPSCellId_r17);
    enc.WriteBit(value.has_timeSCGFailure_r17);
    enc.WriteBit(value.has_perRAInfoList_r17);
    if (value.has_previousPSCellId_r17) {
        Encode_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17(enc, value.previousPSCellId_r17);
    }
    if (value.has_failedPSCellId_r17) {
        Encode_FailureReportSCG_ExtGroup2_FailedPSCellId_r17(enc, value.failedPSCellId_r17);
    }
    if (value.has_timeSCGFailure_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeSCGFailure_r17), 0, 1023);
    }
    if (value.has_perRAInfoList_r17) {
        Encode_PerRAInfoList_r16(enc, value.perRAInfoList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_FailureReportSCG_ExtGroup2(Decoder& dec, FailureReportSCG_ExtGroup2& value)
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
        if (Decode_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17(dec, value.previousPSCellId_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_FailureReportSCG_ExtGroup2_FailedPSCellId_r17(dec, value.failedPSCellId_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.timeSCGFailure_r17 = (int64_t)tmp_value;
    }
    if (present_3) {
        if (Decode_PerRAInfoList_r16(dec, value.perRAInfoList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureReportSCG_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureReportSCG_ExtGroup2(FailureReportSCG_ExtGroup2& value)
{
    if (value.has_previousPSCellId_r17) {
        Free_FailureReportSCG_ExtGroup2_PreviousPSCellId_r17(value.previousPSCellId_r17);
    }
    if (value.has_failedPSCellId_r17) {
        Free_FailureReportSCG_ExtGroup2_FailedPSCellId_r17(value.failedPSCellId_r17);
    }
    if (value.has_timeSCGFailure_r17) {
    }
    if (value.has_perRAInfoList_r17) {
        Free_PerRAInfoList_r16(value.perRAInfoList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultFreqList：ASN.1 MeasResultFreqList；源文件第 1734 行；SEQUENCE OF。
// Encode_MeasResultFreqList 只读不分配；Decode_MeasResultFreqList 可能 malloc（失败时内部已释放并清零）；Free_MeasResultFreqList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultFreqList(Encoder& enc, const MeasResultFreqList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResult2NR(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultFreqList(Decoder& dec, MeasResultFreqList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResult2NR*)std::malloc((std::size_t)value.count * sizeof(MeasResult2NR));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2NR));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResult2NR(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultFreqList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultFreqList(MeasResultFreqList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResult2NR(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureReportSCG：ASN.1 FailureReportSCG；源文件第 1706 行；SEQUENCE。
// Encode_FailureReportSCG 只读不分配；Decode_FailureReportSCG 可能 malloc（失败时内部已释放并清零）；Free_FailureReportSCG 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureReportSCG(Encoder& enc, const FailureReportSCG& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measResultFreqList);
    enc.WriteBit(value.measResultSCG_Failure != nullptr);
    enc.WriteConstrainedInteger((std::int64_t)(value.failureType), 0, 7);
    if (value.has_measResultFreqList) {
        Encode_MeasResultFreqList(enc, value.measResultFreqList);
    }
    if (value.measResultSCG_Failure != nullptr) {
        if (value.measResultSCG_Failure == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_MeasResultSCG_Failure(enc, *value.measResultSCG_Failure);
        }
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_FailureReportSCG_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_FailureReportSCG_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_FailureReportSCG(Decoder& dec, FailureReportSCG& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.failureType = (FailureReportSCG_FailureType)tmp_value;
    }
    if (present_0) {
        if (Decode_MeasResultFreqList(dec, value.measResultFreqList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        MeasResultSCG_Failure* containing_value = (MeasResultSCG_Failure*)std::malloc(sizeof(MeasResultSCG_Failure));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_MeasResultSCG_Failure(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_MeasResultSCG_Failure(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_MeasResultSCG_Failure(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.measResultSCG_Failure = containing_value;
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
    if (Decode_FailureReportSCG_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_FailureReportSCG_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_FailureReportSCG(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureReportSCG(FailureReportSCG& value)
{
    if (value.has_measResultFreqList) {
        Free_MeasResultFreqList(value.measResultFreqList);
    }
    if (value.measResultSCG_Failure != nullptr) {
        if (value.measResultSCG_Failure != nullptr) {
            Free_MeasResultSCG_Failure(*value.measResultSCG_Failure);
            std::free(value.measResultSCG_Failure);
            value.measResultSCG_Failure = nullptr;
        }
    }
    if (value.has_extGroup1) {
        Free_FailureReportSCG_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_FailureReportSCG_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformation_IEs：ASN.1 SCGFailureInformation-IEs；源文件第 1696 行；SEQUENCE。
// Encode_SCGFailureInformation_IEs 只读不分配；Decode_SCGFailureInformation_IEs 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformation_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformation_IEs(Encoder& enc, const SCGFailureInformation_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_failureReportSCG);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_failureReportSCG) {
        Encode_FailureReportSCG(enc, value.failureReportSCG);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SCGFailureInformation_v1590_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformation_IEs(Decoder& dec, SCGFailureInformation_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_FailureReportSCG(dec, value.failureReportSCG) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SCGFailureInformation_v1590_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCGFailureInformation_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformation_IEs(SCGFailureInformation_IEs& value)
{
    if (value.has_failureReportSCG) {
        Free_FailureReportSCG(value.failureReportSCG);
    }
    if (value.has_nonCriticalExtension) {
        Free_SCGFailureInformation_v1590_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformation_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1692 行；空 SEQUENCE{}。
// Encode_SCGFailureInformation_CriticalExtensionsFuture 只读不分配；Decode_SCGFailureInformation_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformation_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformation_CriticalExtensionsFuture(Encoder& enc, const SCGFailureInformation_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformation_CriticalExtensionsFuture(Decoder& dec, SCGFailureInformation_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformation_CriticalExtensionsFuture(SCGFailureInformation_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformation_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1690 行；CHOICE。
// Encode_SCGFailureInformation_CriticalExtensions 只读不分配；Decode_SCGFailureInformation_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformation_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformation_CriticalExtensions(Encoder& enc, const SCGFailureInformation_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SCGFailureInformation_CriticalExtensions_Tag_scgFailureInformation:
        Encode_SCGFailureInformation_IEs(enc, value.u.scgFailureInformation);
        break;
    case SCGFailureInformation_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_SCGFailureInformation_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformation_CriticalExtensions(Decoder& dec, SCGFailureInformation_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SCGFailureInformation_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case SCGFailureInformation_CriticalExtensions_Tag_scgFailureInformation: {
        if (Decode_SCGFailureInformation_IEs(dec, value.u.scgFailureInformation) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SCGFailureInformation_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_SCGFailureInformation_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCGFailureInformation_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformation_CriticalExtensions(SCGFailureInformation_CriticalExtensions& value)
{
    switch (value.tag) {
    case SCGFailureInformation_CriticalExtensions_Tag_scgFailureInformation:
        Free_SCGFailureInformation_IEs(value.u.scgFailureInformation);
        break;
    case SCGFailureInformation_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_SCGFailureInformation_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformation：ASN.1 SCGFailureInformation；源文件第 1689 行；SEQUENCE。
// Encode_SCGFailureInformation 只读不分配；Decode_SCGFailureInformation 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformation 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformation(Encoder& enc, const SCGFailureInformation& value)
{
    (void)value;
    Encode_SCGFailureInformation_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformation(Decoder& dec, SCGFailureInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SCGFailureInformation_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCGFailureInformation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformation(SCGFailureInformation& value)
{
    Free_SCGFailureInformation_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1754 行；空 SEQUENCE{}。
// Encode_SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension 只读不分配；Decode_SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension(Encoder& enc, const SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension(Decoder& dec, SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension(SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformationEUTRA_v1590_IEs：ASN.1 SCGFailureInformationEUTRA-v1590-IEs；源文件第 1752 行；SEQUENCE。
// Encode_SCGFailureInformationEUTRA_v1590_IEs 只读不分配；Decode_SCGFailureInformationEUTRA_v1590_IEs 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformationEUTRA_v1590_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformationEUTRA_v1590_IEs(Encoder& enc, const SCGFailureInformationEUTRA_v1590_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformationEUTRA_v1590_IEs(Decoder& dec, SCGFailureInformationEUTRA_v1590_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCGFailureInformationEUTRA_v1590_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformationEUTRA_v1590_IEs(SCGFailureInformationEUTRA_v1590_IEs& value)
{
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureReportSCG_EUTRA_ExtGroup1：ASN.1 FailureReportSCG_EUTRA_ExtGroup1；源文件第 1765 行；扩展添加组 [[ ]]。
// Encode_FailureReportSCG_EUTRA_ExtGroup1 只读不分配；Decode_FailureReportSCG_EUTRA_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_FailureReportSCG_EUTRA_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureReportSCG_EUTRA_ExtGroup1(Encoder& enc, const FailureReportSCG_EUTRA_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_locationInfo_r16);
    if (value.has_locationInfo_r16) {
        Encode_LocationInfo_r16(enc, value.locationInfo_r16);
    }
    return enc.Error();
}

ErrorCode Decode_FailureReportSCG_EUTRA_ExtGroup1(Decoder& dec, FailureReportSCG_EUTRA_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_LocationInfo_r16(dec, value.locationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureReportSCG_EUTRA_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureReportSCG_EUTRA_ExtGroup1(FailureReportSCG_EUTRA_ExtGroup1& value)
{
    if (value.has_locationInfo_r16) {
        Free_LocationInfo_r16(value.locationInfo_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultFreqListFailMRDC：ASN.1 MeasResultFreqListFailMRDC；源文件第 1770 行；SEQUENCE OF。
// Encode_MeasResultFreqListFailMRDC 只读不分配；Decode_MeasResultFreqListFailMRDC 可能 malloc（失败时内部已释放并清零）；Free_MeasResultFreqListFailMRDC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultFreqListFailMRDC(Encoder& enc, const MeasResultFreqListFailMRDC& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResult2EUTRA(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultFreqListFailMRDC(Decoder& dec, MeasResultFreqListFailMRDC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResult2EUTRA*)std::malloc((std::size_t)value.count * sizeof(MeasResult2EUTRA));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2EUTRA));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResult2EUTRA(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultFreqListFailMRDC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultFreqListFailMRDC(MeasResultFreqListFailMRDC& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResult2EUTRA(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureReportSCG_EUTRA：ASN.1 FailureReportSCG-EUTRA；源文件第 1757 行；SEQUENCE。
// Encode_FailureReportSCG_EUTRA 只读不分配；Decode_FailureReportSCG_EUTRA 可能 malloc（失败时内部已释放并清零）；Free_FailureReportSCG_EUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureReportSCG_EUTRA(Encoder& enc, const FailureReportSCG_EUTRA& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measResultFreqListMRDC);
    enc.WriteBit(value.has_measResultSCG_FailureMRDC);
    enc.WriteConstrainedInteger((std::int64_t)(value.failureType), 0, 7);
    if (value.has_measResultFreqListMRDC) {
        Encode_MeasResultFreqListFailMRDC(enc, value.measResultFreqListMRDC);
    }
    if (value.has_measResultSCG_FailureMRDC) {
        enc.WriteSemiConstrainedOctetString(value.measResultSCG_FailureMRDC.bytes, value.measResultSCG_FailureMRDC.length, 0, 0xFFFFFFFFu);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_FailureReportSCG_EUTRA_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_FailureReportSCG_EUTRA(Decoder& dec, FailureReportSCG_EUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.failureType = (FailureReportSCG_EUTRA_FailureType)tmp_value;
    }
    if (present_0) {
        if (Decode_MeasResultFreqListFailMRDC(dec, value.measResultFreqListMRDC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.measResultSCG_FailureMRDC.bytes = string_bytes;
        value.measResultSCG_FailureMRDC.length = string_length;
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
    if (Decode_FailureReportSCG_EUTRA_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_FailureReportSCG_EUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureReportSCG_EUTRA(FailureReportSCG_EUTRA& value)
{
    if (value.has_measResultFreqListMRDC) {
        Free_MeasResultFreqListFailMRDC(value.measResultFreqListMRDC);
    }
    if (value.has_measResultSCG_FailureMRDC) {
        std::free(value.measResultSCG_FailureMRDC.bytes);
        value.measResultSCG_FailureMRDC.bytes = nullptr;
        value.measResultSCG_FailureMRDC.length = 0;
    }
    if (value.has_extGroup1) {
        Free_FailureReportSCG_EUTRA_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformationEUTRA_IEs：ASN.1 SCGFailureInformationEUTRA-IEs；源文件第 1747 行；SEQUENCE。
// Encode_SCGFailureInformationEUTRA_IEs 只读不分配；Decode_SCGFailureInformationEUTRA_IEs 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformationEUTRA_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformationEUTRA_IEs(Encoder& enc, const SCGFailureInformationEUTRA_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_failureReportSCG_EUTRA);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_failureReportSCG_EUTRA) {
        Encode_FailureReportSCG_EUTRA(enc, value.failureReportSCG_EUTRA);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SCGFailureInformationEUTRA_v1590_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformationEUTRA_IEs(Decoder& dec, SCGFailureInformationEUTRA_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_FailureReportSCG_EUTRA(dec, value.failureReportSCG_EUTRA) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SCGFailureInformationEUTRA_v1590_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCGFailureInformationEUTRA_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformationEUTRA_IEs(SCGFailureInformationEUTRA_IEs& value)
{
    if (value.has_failureReportSCG_EUTRA) {
        Free_FailureReportSCG_EUTRA(value.failureReportSCG_EUTRA);
    }
    if (value.has_nonCriticalExtension) {
        Free_SCGFailureInformationEUTRA_v1590_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformationEUTRA_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1743 行；空 SEQUENCE{}。
// Encode_SCGFailureInformationEUTRA_CriticalExtensionsFuture 只读不分配；Decode_SCGFailureInformationEUTRA_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformationEUTRA_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformationEUTRA_CriticalExtensionsFuture(Encoder& enc, const SCGFailureInformationEUTRA_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformationEUTRA_CriticalExtensionsFuture(Decoder& dec, SCGFailureInformationEUTRA_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformationEUTRA_CriticalExtensionsFuture(SCGFailureInformationEUTRA_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformationEUTRA_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1741 行；CHOICE。
// Encode_SCGFailureInformationEUTRA_CriticalExtensions 只读不分配；Decode_SCGFailureInformationEUTRA_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformationEUTRA_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformationEUTRA_CriticalExtensions(Encoder& enc, const SCGFailureInformationEUTRA_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SCGFailureInformationEUTRA_CriticalExtensions_Tag_scgFailureInformationEUTRA:
        Encode_SCGFailureInformationEUTRA_IEs(enc, value.u.scgFailureInformationEUTRA);
        break;
    case SCGFailureInformationEUTRA_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_SCGFailureInformationEUTRA_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformationEUTRA_CriticalExtensions(Decoder& dec, SCGFailureInformationEUTRA_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SCGFailureInformationEUTRA_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case SCGFailureInformationEUTRA_CriticalExtensions_Tag_scgFailureInformationEUTRA: {
        if (Decode_SCGFailureInformationEUTRA_IEs(dec, value.u.scgFailureInformationEUTRA) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SCGFailureInformationEUTRA_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_SCGFailureInformationEUTRA_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCGFailureInformationEUTRA_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformationEUTRA_CriticalExtensions(SCGFailureInformationEUTRA_CriticalExtensions& value)
{
    switch (value.tag) {
    case SCGFailureInformationEUTRA_CriticalExtensions_Tag_scgFailureInformationEUTRA:
        Free_SCGFailureInformationEUTRA_IEs(value.u.scgFailureInformationEUTRA);
        break;
    case SCGFailureInformationEUTRA_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_SCGFailureInformationEUTRA_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCGFailureInformationEUTRA：ASN.1 SCGFailureInformationEUTRA；源文件第 1740 行；SEQUENCE。
// Encode_SCGFailureInformationEUTRA 只读不分配；Decode_SCGFailureInformationEUTRA 可能 malloc（失败时内部已释放并清零）；Free_SCGFailureInformationEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCGFailureInformationEUTRA(Encoder& enc, const SCGFailureInformationEUTRA& value)
{
    (void)value;
    Encode_SCGFailureInformationEUTRA_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_SCGFailureInformationEUTRA(Decoder& dec, SCGFailureInformationEUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SCGFailureInformationEUTRA_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCGFailureInformationEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCGFailureInformationEUTRA(SCGFailureInformationEUTRA& value)
{
    Free_SCGFailureInformationEUTRA_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityConfigSMC：ASN.1 SecurityConfigSMC；源文件第 1790 行；SEQUENCE。
// Encode_SecurityConfigSMC 只读不分配；Decode_SecurityConfigSMC 可能 malloc（失败时内部已释放并清零）；Free_SecurityConfigSMC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityConfigSMC(Encoder& enc, const SecurityConfigSMC& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SecurityAlgorithmConfig(enc, value.securityAlgorithmConfig);
    return enc.Error();
}

ErrorCode Decode_SecurityConfigSMC(Decoder& dec, SecurityConfigSMC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SecurityAlgorithmConfig(dec, value.securityAlgorithmConfig) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityConfigSMC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityConfigSMC(SecurityConfigSMC& value)
{
    Free_SecurityAlgorithmConfig(value.securityAlgorithmConfig);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeCommand_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1787 行；空 SEQUENCE{}。
// Encode_SecurityModeCommand_IEs_NonCriticalExtension 只读不分配；Decode_SecurityModeCommand_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeCommand_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeCommand_IEs_NonCriticalExtension(Encoder& enc, const SecurityModeCommand_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SecurityModeCommand_IEs_NonCriticalExtension(Decoder& dec, SecurityModeCommand_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeCommand_IEs_NonCriticalExtension(SecurityModeCommand_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeCommand_IEs：ASN.1 SecurityModeCommand-IEs；源文件第 1783 行；SEQUENCE。
// Encode_SecurityModeCommand_IEs 只读不分配；Decode_SecurityModeCommand_IEs 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeCommand_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeCommand_IEs(Encoder& enc, const SecurityModeCommand_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_SecurityConfigSMC(enc, value.securityConfigSMC);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SecurityModeCommand_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SecurityModeCommand_IEs(Decoder& dec, SecurityModeCommand_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_SecurityConfigSMC(dec, value.securityConfigSMC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_SecurityModeCommand_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityModeCommand_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeCommand_IEs(SecurityModeCommand_IEs& value)
{
    Free_SecurityConfigSMC(value.securityConfigSMC);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_SecurityModeCommand_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeCommand_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1779 行；空 SEQUENCE{}。
// Encode_SecurityModeCommand_CriticalExtensionsFuture 只读不分配；Decode_SecurityModeCommand_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeCommand_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeCommand_CriticalExtensionsFuture(Encoder& enc, const SecurityModeCommand_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SecurityModeCommand_CriticalExtensionsFuture(Decoder& dec, SecurityModeCommand_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeCommand_CriticalExtensionsFuture(SecurityModeCommand_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeCommand_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1777 行；CHOICE。
// Encode_SecurityModeCommand_CriticalExtensions 只读不分配；Decode_SecurityModeCommand_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeCommand_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeCommand_CriticalExtensions(Encoder& enc, const SecurityModeCommand_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SecurityModeCommand_CriticalExtensions_Tag_securityModeCommand:
        Encode_SecurityModeCommand_IEs(enc, value.u.securityModeCommand);
        break;
    case SecurityModeCommand_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_SecurityModeCommand_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SecurityModeCommand_CriticalExtensions(Decoder& dec, SecurityModeCommand_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SecurityModeCommand_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case SecurityModeCommand_CriticalExtensions_Tag_securityModeCommand: {
        if (Decode_SecurityModeCommand_IEs(dec, value.u.securityModeCommand) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SecurityModeCommand_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_SecurityModeCommand_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityModeCommand_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeCommand_CriticalExtensions(SecurityModeCommand_CriticalExtensions& value)
{
    switch (value.tag) {
    case SecurityModeCommand_CriticalExtensions_Tag_securityModeCommand:
        Free_SecurityModeCommand_IEs(value.u.securityModeCommand);
        break;
    case SecurityModeCommand_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_SecurityModeCommand_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeCommand：ASN.1 SecurityModeCommand；源文件第 1775 行；SEQUENCE。
// Encode_SecurityModeCommand 只读不分配；Decode_SecurityModeCommand 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeCommand 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeCommand(Encoder& enc, const SecurityModeCommand& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_SecurityModeCommand_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_SecurityModeCommand(Decoder& dec, SecurityModeCommand& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_SecurityModeCommand_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityModeCommand(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeCommand(SecurityModeCommand& value)
{
    Free_SecurityModeCommand_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeComplete_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1808 行；空 SEQUENCE{}。
// Encode_SecurityModeComplete_IEs_NonCriticalExtension 只读不分配；Decode_SecurityModeComplete_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeComplete_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeComplete_IEs_NonCriticalExtension(Encoder& enc, const SecurityModeComplete_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SecurityModeComplete_IEs_NonCriticalExtension(Decoder& dec, SecurityModeComplete_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeComplete_IEs_NonCriticalExtension(SecurityModeComplete_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeComplete_IEs：ASN.1 SecurityModeComplete-IEs；源文件第 1806 行；SEQUENCE。
// Encode_SecurityModeComplete_IEs 只读不分配；Decode_SecurityModeComplete_IEs 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeComplete_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeComplete_IEs(Encoder& enc, const SecurityModeComplete_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SecurityModeComplete_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SecurityModeComplete_IEs(Decoder& dec, SecurityModeComplete_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_SecurityModeComplete_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityModeComplete_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeComplete_IEs(SecurityModeComplete_IEs& value)
{
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_SecurityModeComplete_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeComplete_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1802 行；空 SEQUENCE{}。
// Encode_SecurityModeComplete_CriticalExtensionsFuture 只读不分配；Decode_SecurityModeComplete_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeComplete_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeComplete_CriticalExtensionsFuture(Encoder& enc, const SecurityModeComplete_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SecurityModeComplete_CriticalExtensionsFuture(Decoder& dec, SecurityModeComplete_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeComplete_CriticalExtensionsFuture(SecurityModeComplete_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeComplete_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1800 行；CHOICE。
// Encode_SecurityModeComplete_CriticalExtensions 只读不分配；Decode_SecurityModeComplete_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeComplete_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeComplete_CriticalExtensions(Encoder& enc, const SecurityModeComplete_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SecurityModeComplete_CriticalExtensions_Tag_securityModeComplete:
        Encode_SecurityModeComplete_IEs(enc, value.u.securityModeComplete);
        break;
    case SecurityModeComplete_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_SecurityModeComplete_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SecurityModeComplete_CriticalExtensions(Decoder& dec, SecurityModeComplete_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SecurityModeComplete_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case SecurityModeComplete_CriticalExtensions_Tag_securityModeComplete: {
        if (Decode_SecurityModeComplete_IEs(dec, value.u.securityModeComplete) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SecurityModeComplete_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_SecurityModeComplete_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityModeComplete_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeComplete_CriticalExtensions(SecurityModeComplete_CriticalExtensions& value)
{
    switch (value.tag) {
    case SecurityModeComplete_CriticalExtensions_Tag_securityModeComplete:
        Free_SecurityModeComplete_IEs(value.u.securityModeComplete);
        break;
    case SecurityModeComplete_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_SecurityModeComplete_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeComplete：ASN.1 SecurityModeComplete；源文件第 1798 行；SEQUENCE。
// Encode_SecurityModeComplete 只读不分配；Decode_SecurityModeComplete 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeComplete 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeComplete(Encoder& enc, const SecurityModeComplete& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_SecurityModeComplete_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_SecurityModeComplete(Decoder& dec, SecurityModeComplete& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_SecurityModeComplete_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityModeComplete(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeComplete(SecurityModeComplete& value)
{
    Free_SecurityModeComplete_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeFailure_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1824 行；空 SEQUENCE{}。
// Encode_SecurityModeFailure_IEs_NonCriticalExtension 只读不分配；Decode_SecurityModeFailure_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeFailure_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeFailure_IEs_NonCriticalExtension(Encoder& enc, const SecurityModeFailure_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SecurityModeFailure_IEs_NonCriticalExtension(Decoder& dec, SecurityModeFailure_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeFailure_IEs_NonCriticalExtension(SecurityModeFailure_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeFailure_IEs：ASN.1 SecurityModeFailure-IEs；源文件第 1822 行；SEQUENCE。
// Encode_SecurityModeFailure_IEs 只读不分配；Decode_SecurityModeFailure_IEs 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeFailure_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeFailure_IEs(Encoder& enc, const SecurityModeFailure_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SecurityModeFailure_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SecurityModeFailure_IEs(Decoder& dec, SecurityModeFailure_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_SecurityModeFailure_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityModeFailure_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeFailure_IEs(SecurityModeFailure_IEs& value)
{
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_SecurityModeFailure_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeFailure_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1818 行；空 SEQUENCE{}。
// Encode_SecurityModeFailure_CriticalExtensionsFuture 只读不分配；Decode_SecurityModeFailure_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeFailure_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeFailure_CriticalExtensionsFuture(Encoder& enc, const SecurityModeFailure_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SecurityModeFailure_CriticalExtensionsFuture(Decoder& dec, SecurityModeFailure_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeFailure_CriticalExtensionsFuture(SecurityModeFailure_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeFailure_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1816 行；CHOICE。
// Encode_SecurityModeFailure_CriticalExtensions 只读不分配；Decode_SecurityModeFailure_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeFailure_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeFailure_CriticalExtensions(Encoder& enc, const SecurityModeFailure_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SecurityModeFailure_CriticalExtensions_Tag_securityModeFailure:
        Encode_SecurityModeFailure_IEs(enc, value.u.securityModeFailure);
        break;
    case SecurityModeFailure_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_SecurityModeFailure_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SecurityModeFailure_CriticalExtensions(Decoder& dec, SecurityModeFailure_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SecurityModeFailure_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case SecurityModeFailure_CriticalExtensions_Tag_securityModeFailure: {
        if (Decode_SecurityModeFailure_IEs(dec, value.u.securityModeFailure) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SecurityModeFailure_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_SecurityModeFailure_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityModeFailure_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeFailure_CriticalExtensions(SecurityModeFailure_CriticalExtensions& value)
{
    switch (value.tag) {
    case SecurityModeFailure_CriticalExtensions_Tag_securityModeFailure:
        Free_SecurityModeFailure_IEs(value.u.securityModeFailure);
        break;
    case SecurityModeFailure_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_SecurityModeFailure_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityModeFailure：ASN.1 SecurityModeFailure；源文件第 1814 行；SEQUENCE。
// Encode_SecurityModeFailure 只读不分配；Decode_SecurityModeFailure 可能 malloc（失败时内部已释放并清零）；Free_SecurityModeFailure 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityModeFailure(Encoder& enc, const SecurityModeFailure& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_SecurityModeFailure_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_SecurityModeFailure(Decoder& dec, SecurityModeFailure& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_SecurityModeFailure_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityModeFailure(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityModeFailure(SecurityModeFailure& value)
{
    Free_SecurityModeFailure_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18：ASN.1 cellBarredeRedCap-r18；源文件第 1949 行；SEQUENCE。
// Encode_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18 只读不分配；Decode_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18 可能 malloc（失败时内部已释放并清零）；Free_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18(Encoder& enc, const ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.cellBarredeRedCap1Rx_r18), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellBarredeRedCap2Rx_r18), 0, 1);
    return enc.Error();
}

ErrorCode Decode_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18(Decoder& dec, ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellBarredeRedCap1Rx_r18 = (ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap1Rx_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellBarredeRedCap2Rx_r18 = (ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap2Rx_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18(ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ERedCap_ConfigCommonSIB_r18：ASN.1 ERedCap-ConfigCommonSIB-r18；源文件第 1948 行；SEQUENCE。
// Encode_ERedCap_ConfigCommonSIB_r18 只读不分配；Decode_ERedCap_ConfigCommonSIB_r18 可能 malloc（失败时内部已释放并清零）；Free_ERedCap_ConfigCommonSIB_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ERedCap_ConfigCommonSIB_r18(Encoder& enc, const ERedCap_ConfigCommonSIB_r18& value)
{
    (void)value;
    Encode_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18(enc, value.cellBarredeRedCap_r18);
    return enc.Error();
}

ErrorCode Decode_ERedCap_ConfigCommonSIB_r18(Decoder& dec, ERedCap_ConfigCommonSIB_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18(dec, value.cellBarredeRedCap_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ERedCap_ConfigCommonSIB_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ERedCap_ConfigCommonSIB_r18(ERedCap_ConfigCommonSIB_r18& value)
{
    Free_ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18(value.cellBarredeRedCap_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MT_SDT_ConfigCommonSIB_r18：ASN.1 MT-SDT-ConfigCommonSIB-r18；源文件第 1957 行；SEQUENCE。
// Encode_MT_SDT_ConfigCommonSIB_r18 只读不分配；Decode_MT_SDT_ConfigCommonSIB_r18 可能 malloc（失败时内部已释放并清零）；Free_MT_SDT_ConfigCommonSIB_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MT_SDT_ConfigCommonSIB_r18(Encoder& enc, const MT_SDT_ConfigCommonSIB_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_mt_SDT_RSRP_Threshold_r18);
    enc.WriteBit(value.has_sdt_LogicalChannelSR_DelayTimer_r18);
    enc.WriteBit(value.has_t319a_r18);
    if (value.has_mt_SDT_RSRP_Threshold_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mt_SDT_RSRP_Threshold_r18), 0, 127);
    }
    if (value.has_sdt_LogicalChannelSR_DelayTimer_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_LogicalChannelSR_DelayTimer_r18), 0, 7);
    }
    if (value.has_t319a_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t319a_r18), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_MT_SDT_ConfigCommonSIB_r18(Decoder& dec, MT_SDT_ConfigCommonSIB_r18& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.mt_SDT_RSRP_Threshold_r18 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sdt_LogicalChannelSR_DelayTimer_r18 = (MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.t319a_r18 = (MT_SDT_ConfigCommonSIB_r18_T319a_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MT_SDT_ConfigCommonSIB_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MT_SDT_ConfigCommonSIB_r18(MT_SDT_ConfigCommonSIB_r18& value)
{
    if (value.has_mt_SDT_RSRP_Threshold_r18) {
    }
    if (value.has_sdt_LogicalChannelSR_DelayTimer_r18) {
    }
    if (value.has_t319a_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RACH_ConfigGeneric_ExtGroup1：ASN.1 RACH_ConfigGeneric_ExtGroup1；源文件第 10896 行；扩展添加组 [[ ]]。
// Encode_RACH_ConfigGeneric_ExtGroup1 只读不分配；Decode_RACH_ConfigGeneric_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RACH_ConfigGeneric_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RACH_ConfigGeneric_ExtGroup1(Encoder& enc, const RACH_ConfigGeneric_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_prach_ConfigurationPeriodScaling_IAB_r16);
    enc.WriteBit(value.has_prach_ConfigurationFrameOffset_IAB_r16);
    enc.WriteBit(value.has_prach_ConfigurationSOffset_IAB_r16);
    enc.WriteBit(value.has_ra_ResponseWindow_v1610);
    enc.WriteBit(value.has_prach_ConfigurationIndex_v1610);
    if (value.has_prach_ConfigurationPeriodScaling_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prach_ConfigurationPeriodScaling_IAB_r16), 0, 6);
    }
    if (value.has_prach_ConfigurationFrameOffset_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prach_ConfigurationFrameOffset_IAB_r16), 0, 63);
    }
    if (value.has_prach_ConfigurationSOffset_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prach_ConfigurationSOffset_IAB_r16), 0, 39);
    }
    if (value.has_ra_ResponseWindow_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_ResponseWindow_v1610), 0, 1);
    }
    if (value.has_prach_ConfigurationIndex_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prach_ConfigurationIndex_v1610), 256, 262);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigGeneric_ExtGroup1(Decoder& dec, RACH_ConfigGeneric_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.prach_ConfigurationPeriodScaling_IAB_r16 = (RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.prach_ConfigurationFrameOffset_IAB_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.prach_ConfigurationSOffset_IAB_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ra_ResponseWindow_v1610 = (RACH_ConfigGeneric_ExtGroup1_Ra_ResponseWindow_v1610)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(256, 262, tmp_value)) { goto fail; }
        value.prach_ConfigurationIndex_v1610 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigGeneric_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigGeneric_ExtGroup1(RACH_ConfigGeneric_ExtGroup1& value)
{
    if (value.has_prach_ConfigurationPeriodScaling_IAB_r16) {
    }
    if (value.has_prach_ConfigurationFrameOffset_IAB_r16) {
    }
    if (value.has_prach_ConfigurationSOffset_IAB_r16) {
    }
    if (value.has_ra_ResponseWindow_v1610) {
    }
    if (value.has_prach_ConfigurationIndex_v1610) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RACH_ConfigGeneric_ExtGroup2：ASN.1 RACH_ConfigGeneric_ExtGroup2；源文件第 10903 行；扩展添加组 [[ ]]。
// Encode_RACH_ConfigGeneric_ExtGroup2 只读不分配；Decode_RACH_ConfigGeneric_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_RACH_ConfigGeneric_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RACH_ConfigGeneric_ExtGroup2(Encoder& enc, const RACH_ConfigGeneric_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_ra_ResponseWindow_v1700);
    if (value.has_ra_ResponseWindow_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_ResponseWindow_v1700), 0, 6);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigGeneric_ExtGroup2(Decoder& dec, RACH_ConfigGeneric_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.ra_ResponseWindow_v1700 = (RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigGeneric_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigGeneric_ExtGroup2(RACH_ConfigGeneric_ExtGroup2& value)
{
    if (value.has_ra_ResponseWindow_v1700) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RACH_ConfigGeneric：ASN.1 RACH-ConfigGeneric；源文件第 10886 行；SEQUENCE。
// Encode_RACH_ConfigGeneric 只读不分配；Decode_RACH_ConfigGeneric 可能 malloc（失败时内部已释放并清零）；Free_RACH_ConfigGeneric 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RACH_ConfigGeneric(Encoder& enc, const RACH_ConfigGeneric& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.prach_ConfigurationIndex), 0, 255);
    enc.WriteConstrainedInteger((std::int64_t)(value.msg1_FDM), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.msg1_FrequencyStart), 0, 274);
    enc.WriteConstrainedInteger((std::int64_t)(value.zeroCorrelationZoneConfig), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.preambleReceivedTargetPower), -202, -60);
    enc.WriteConstrainedInteger((std::int64_t)(value.preambleTransMax), 0, 10);
    enc.WriteConstrainedInteger((std::int64_t)(value.powerRampingStep), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_ResponseWindow), 0, 7);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RACH_ConfigGeneric_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_RACH_ConfigGeneric_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigGeneric(Decoder& dec, RACH_ConfigGeneric& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.prach_ConfigurationIndex = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msg1_FDM = (RACH_ConfigGeneric_Msg1_FDM)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.msg1_FrequencyStart = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.zeroCorrelationZoneConfig = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, -60, tmp_value)) { goto fail; }
        value.preambleReceivedTargetPower = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.preambleTransMax = (RACH_ConfigGeneric_PreambleTransMax)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.powerRampingStep = (RACH_ConfigGeneric_PowerRampingStep)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ra_ResponseWindow = (RACH_ConfigGeneric_Ra_ResponseWindow)tmp_value;
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
    if (Decode_RACH_ConfigGeneric_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_RACH_ConfigGeneric_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_RACH_ConfigGeneric(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigGeneric(RACH_ConfigGeneric& value)
{
    if (value.has_extGroup1) {
        Free_RACH_ConfigGeneric_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_RACH_ConfigGeneric_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18：ASN.1 rach-OccasionsSI-r18；源文件第 12789 行；SEQUENCE。
// Encode_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18 只读不分配；Decode_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18 可能 malloc（失败时内部已释放并清零）；Free_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18(Encoder& enc, const SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18& value)
{
    (void)value;
    Encode_RACH_ConfigGeneric(enc, value.rach_ConfigSI_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_perRACH_Occasion_r18), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18(Decoder& dec, SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RACH_ConfigGeneric(dec, value.rach_ConfigSI_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_perRACH_Occasion_r18 = (SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18(SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18& value)
{
    Free_RACH_ConfigGeneric(value.rach_ConfigSI_r18);
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
