/* ============================================================================
 * src/generated/codec_part009.cpp — 生成的编解码函数
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

ErrorCode Encode_RA_PrioritizationForSlicing_r17(Encoder& enc, const RA_PrioritizationForSlicing_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_RA_PrioritizationSliceInfoList_r17(enc, value.ra_PrioritizationSliceInfoList_r17);
    return enc.Error();
}

ErrorCode Decode_RA_PrioritizationForSlicing_r17(Decoder& dec, RA_PrioritizationForSlicing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_RA_PrioritizationSliceInfoList_r17(dec, value.ra_PrioritizationSliceInfoList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RA_PrioritizationForSlicing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_PrioritizationForSlicing_r17(RA_PrioritizationForSlicing_r17& value)
{
    Free_RA_PrioritizationSliceInfoList_r17(value.ra_PrioritizationSliceInfoList_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigCommon_ExtGroup2(Encoder& enc, const RACH_ConfigCommon_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_ra_PrioritizationForSlicing_r17);
    enc.WriteBit(value.has_featureCombinationPreamblesList_r17);
    if (value.has_ra_PrioritizationForSlicing_r17) {
        Encode_RA_PrioritizationForSlicing_r17(enc, value.ra_PrioritizationForSlicing_r17);
    }
    if (value.has_featureCombinationPreamblesList_r17) {
enc.WriteConstrainedLength(value.featureCombinationPreamblesList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureCombinationPreamblesList_r17_count; ++i) {
    Encode_FeatureCombinationPreambles_r17(enc, value.featureCombinationPreamblesList_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommon_ExtGroup2(Decoder& dec, RACH_ConfigCommon_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_RA_PrioritizationForSlicing_r17(dec, value.ra_PrioritizationForSlicing_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureCombinationPreamblesList_r17_count)) { goto fail; }
if (value.featureCombinationPreamblesList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureCombinationPreamblesList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureCombinationPreamblesList_r17_count > 0u) {
    value.featureCombinationPreamblesList_r17_items = (FeatureCombinationPreambles_r17*)std::malloc((std::size_t)value.featureCombinationPreamblesList_r17_count * sizeof(FeatureCombinationPreambles_r17));
    if (value.featureCombinationPreamblesList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureCombinationPreamblesList_r17_items, 0, (std::size_t)value.featureCombinationPreamblesList_r17_count * sizeof(FeatureCombinationPreambles_r17));
}
for (std::uint32_t i = 0; i < value.featureCombinationPreamblesList_r17_count; ++i) {
    if (Decode_FeatureCombinationPreambles_r17(dec, value.featureCombinationPreamblesList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommon_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommon_ExtGroup2(RACH_ConfigCommon_ExtGroup2& value)
{
    if (value.has_ra_PrioritizationForSlicing_r17) {
        Free_RA_PrioritizationForSlicing_r17(value.ra_PrioritizationForSlicing_r17);
    }
    if (value.has_featureCombinationPreamblesList_r17) {
        if (value.featureCombinationPreamblesList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureCombinationPreamblesList_r17_count; ++i) {
                Free_FeatureCombinationPreambles_r17(value.featureCombinationPreamblesList_r17_items[i]);
            }
            std::free(value.featureCombinationPreamblesList_r17_items);
            value.featureCombinationPreamblesList_r17_items = nullptr;
        }
        value.featureCombinationPreamblesList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB(Encoder& enc, const RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 7);
    switch (value.tag) {
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneEighth:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.oneEighth), 0, 15);
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneFourth:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.oneFourth), 0, 15);
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneHalf:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.oneHalf), 0, 15);
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_one:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.one), 0, 15);
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_two:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.two), 0, 7);
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_four:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.four), 1, 16);
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_eight:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.eight), 1, 8);
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_sixteen:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sixteen), 1, 4);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB(Decoder& dec, RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 7, root_index)) {
        goto fail;
    }
    value.tag = (RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag)root_index;
    switch (value.tag) {
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneEighth: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.oneEighth = (RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth)tmp_value;
        break;
    }
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneFourth: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.oneFourth = (RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth)tmp_value;
        break;
    }
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneHalf: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.oneHalf = (RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf)tmp_value;
        break;
    }
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_one: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.one = (RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One)tmp_value;
        break;
    }
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_two: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.two = (RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two)tmp_value;
        break;
    }
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_four: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.u.four = (int64_t)tmp_value;
        break;
    }
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_eight: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.u.eight = (int64_t)tmp_value;
        break;
    }
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_sixteen: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.u.sixteen = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB(RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB& value)
{
    switch (value.tag) {
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneEighth:
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneFourth:
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneHalf:
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_one:
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_two:
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_four:
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_eight:
        break;
    case RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_sixteen:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigCommon_GroupBconfigured(Encoder& enc, const RACH_ConfigCommon_GroupBconfigured& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_Msg3SizeGroupA), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.messagePowerOffsetGroupB), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfRA_PreamblesGroupA), 1, 64);
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommon_GroupBconfigured(Decoder& dec, RACH_ConfigCommon_GroupBconfigured& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ra_Msg3SizeGroupA = (RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.messagePowerOffsetGroupB = (RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.numberOfRA_PreamblesGroupA = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommon_GroupBconfigured(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommon_GroupBconfigured(RACH_ConfigCommon_GroupBconfigured& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigCommon_Prach_RootSequenceIndex(Encoder& enc, const RACH_ConfigCommon_Prach_RootSequenceIndex& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RACH_ConfigCommon_Prach_RootSequenceIndex_Tag_l839:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l839), 0, 837);
        break;
    case RACH_ConfigCommon_Prach_RootSequenceIndex_Tag_l139:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l139), 0, 137);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommon_Prach_RootSequenceIndex(Decoder& dec, RACH_ConfigCommon_Prach_RootSequenceIndex& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RACH_ConfigCommon_Prach_RootSequenceIndex_Tag)root_index;
    switch (value.tag) {
    case RACH_ConfigCommon_Prach_RootSequenceIndex_Tag_l839: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 837, tmp_value)) { goto fail; }
        value.u.l839 = (int64_t)tmp_value;
        break;
    }
    case RACH_ConfigCommon_Prach_RootSequenceIndex_Tag_l139: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 137, tmp_value)) { goto fail; }
        value.u.l139 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommon_Prach_RootSequenceIndex(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommon_Prach_RootSequenceIndex(RACH_ConfigCommon_Prach_RootSequenceIndex& value)
{
    switch (value.tag) {
    case RACH_ConfigCommon_Prach_RootSequenceIndex_Tag_l839:
        break;
    case RACH_ConfigCommon_Prach_RootSequenceIndex_Tag_l139:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigCommon(Encoder& enc, const RACH_ConfigCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_totalNumberOfRA_Preambles);
    enc.WriteBit(value.has_ssb_perRACH_OccasionAndCB_PreamblesPerSSB);
    enc.WriteBit(value.has_groupBconfigured);
    enc.WriteBit(value.has_rsrp_ThresholdSSB);
    enc.WriteBit(value.has_rsrp_ThresholdSSB_SUL);
    enc.WriteBit(value.has_msg1_SubcarrierSpacing);
    enc.WriteBit(value.has_msg3_transformPrecoder);
    Encode_RACH_ConfigGeneric(enc, value.rach_ConfigGeneric);
    if (value.has_totalNumberOfRA_Preambles) {
        enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberOfRA_Preambles), 1, 63);
    }
    if (value.has_ssb_perRACH_OccasionAndCB_PreamblesPerSSB) {
        Encode_RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB(enc, value.ssb_perRACH_OccasionAndCB_PreamblesPerSSB);
    }
    if (value.has_groupBconfigured) {
        Encode_RACH_ConfigCommon_GroupBconfigured(enc, value.groupBconfigured);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_ContentionResolutionTimer), 0, 7);
    if (value.has_rsrp_ThresholdSSB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdSSB), 0, 127);
    }
    if (value.has_rsrp_ThresholdSSB_SUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdSSB_SUL), 0, 127);
    }
    Encode_RACH_ConfigCommon_Prach_RootSequenceIndex(enc, value.prach_RootSequenceIndex);
    if (value.has_msg1_SubcarrierSpacing) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_SubcarrierSpacing), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.restrictedSetConfig), 0, 2);
    if (value.has_msg3_transformPrecoder) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg3_transformPrecoder), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RACH_ConfigCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_RACH_ConfigCommon_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommon(Decoder& dec, RACH_ConfigCommon& value)
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
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    {
        if (Decode_RACH_ConfigGeneric(dec, value.rach_ConfigGeneric) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 63, tmp_value)) { goto fail; }
        value.totalNumberOfRA_Preambles = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB(dec, value.ssb_perRACH_OccasionAndCB_PreamblesPerSSB) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_RACH_ConfigCommon_GroupBconfigured(dec, value.groupBconfigured) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ra_ContentionResolutionTimer = (RACH_ConfigCommon_Ra_ContentionResolutionTimer)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdSSB = (RSRP_Range)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdSSB_SUL = (RSRP_Range)tmp_value;
    }
    {
        if (Decode_RACH_ConfigCommon_Prach_RootSequenceIndex(dec, value.prach_RootSequenceIndex) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msg1_SubcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.restrictedSetConfig = (RACH_ConfigCommon_RestrictedSetConfig)tmp_value;
    }
    if (present_6) {
        value.msg3_transformPrecoder = (RACH_ConfigCommon_Msg3_transformPrecoder)0;
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
    if (Decode_RACH_ConfigCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_RACH_ConfigCommon_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_RACH_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommon(RACH_ConfigCommon& value)
{
    Free_RACH_ConfigGeneric(value.rach_ConfigGeneric);
    if (value.has_totalNumberOfRA_Preambles) {
    }
    if (value.has_ssb_perRACH_OccasionAndCB_PreamblesPerSSB) {
        Free_RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB(value.ssb_perRACH_OccasionAndCB_PreamblesPerSSB);
    }
    if (value.has_groupBconfigured) {
        Free_RACH_ConfigCommon_GroupBconfigured(value.groupBconfigured);
    }
    if (value.has_rsrp_ThresholdSSB) {
    }
    if (value.has_rsrp_ThresholdSSB_SUL) {
    }
    Free_RACH_ConfigCommon_Prach_RootSequenceIndex(value.prach_RootSequenceIndex);
    if (value.has_msg1_SubcarrierSpacing) {
    }
    if (value.has_msg3_transformPrecoder) {
    }
    if (value.has_extGroup1) {
        Free_RACH_ConfigCommon_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_RACH_ConfigCommon_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_RACH_ConfigCommon(Encoder& enc, const SetupRelease_RACH_ConfigCommon& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RACH_ConfigCommon_Tag_release:
        (void)0;
        break;
    case SetupRelease_RACH_ConfigCommon_Tag_setup:
        Encode_RACH_ConfigCommon(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RACH_ConfigCommon(Decoder& dec, SetupRelease_RACH_ConfigCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RACH_ConfigCommon_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RACH_ConfigCommon_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RACH_ConfigCommon_Tag_setup: {
        if (Decode_RACH_ConfigCommon(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RACH_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RACH_ConfigCommon(SetupRelease_RACH_ConfigCommon& value)
{
    switch (value.tag) {
    case SetupRelease_RACH_ConfigCommon_Tag_release:
        break;
    case SetupRelease_RACH_ConfigCommon_Tag_setup:
        Free_RACH_ConfigCommon(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MsgA_DMRS_Config_r16(Encoder& enc, const MsgA_DMRS_Config_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_msgA_DMRS_AdditionalPosition_r16);
    enc.WriteBit(value.has_msgA_MaxLength_r16);
    enc.WriteBit(value.has_msgA_PUSCH_DMRS_CDM_Group_r16);
    enc.WriteBit(value.has_msgA_PUSCH_NrofPorts_r16);
    enc.WriteBit(value.has_msgA_ScramblingID0_r16);
    enc.WriteBit(value.has_msgA_ScramblingID1_r16);
    if (value.has_msgA_DMRS_AdditionalPosition_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_DMRS_AdditionalPosition_r16), 0, 2);
    }
    if (value.has_msgA_MaxLength_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_MaxLength_r16), 0, 0);
    }
    if (value.has_msgA_PUSCH_DMRS_CDM_Group_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_PUSCH_DMRS_CDM_Group_r16), 0, 1);
    }
    if (value.has_msgA_PUSCH_NrofPorts_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_PUSCH_NrofPorts_r16), 0, 1);
    }
    if (value.has_msgA_ScramblingID0_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_ScramblingID0_r16), 0, 65535);
    }
    if (value.has_msgA_ScramblingID1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_ScramblingID1_r16), 0, 65535);
    }
    return enc.Error();
}

ErrorCode Decode_MsgA_DMRS_Config_r16(Decoder& dec, MsgA_DMRS_Config_r16& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.msgA_DMRS_AdditionalPosition_r16 = (MsgA_DMRS_Config_r16_MsgA_DMRS_AdditionalPosition_r16)tmp_value;
    }
    if (present_1) {
        value.msgA_MaxLength_r16 = (MsgA_DMRS_Config_r16_MsgA_MaxLength_r16)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.msgA_PUSCH_DMRS_CDM_Group_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.msgA_PUSCH_NrofPorts_r16 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.msgA_ScramblingID0_r16 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.msgA_ScramblingID1_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MsgA_DMRS_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MsgA_DMRS_Config_r16(MsgA_DMRS_Config_r16& value)
{
    if (value.has_msgA_DMRS_AdditionalPosition_r16) {
    }
    if (value.has_msgA_MaxLength_r16) {
    }
    if (value.has_msgA_PUSCH_DMRS_CDM_Group_r16) {
    }
    if (value.has_msgA_PUSCH_NrofPorts_r16) {
    }
    if (value.has_msgA_ScramblingID0_r16) {
    }
    if (value.has_msgA_ScramblingID1_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MsgA_PUSCH_Resource_r16(Encoder& enc, const MsgA_PUSCH_Resource_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_msgA_PUSCH_TimeDomainAllocation_r16);
    enc.WriteBit(value.has_startSymbolAndLengthMsgA_PO_r16);
    enc.WriteBit(value.has_mappingTypeMsgA_PUSCH_r16);
    enc.WriteBit(value.has_guardPeriodMsgA_PUSCH_r16);
    enc.WriteBit(value.has_msgA_IntraSlotFrequencyHopping_r16);
    enc.WriteBit(value.has_msgA_HoppingBits_r16);
    enc.WriteBit(value.has_msgA_Alpha_r16);
    enc.WriteBit(value.has_interlaceIndexFirstPO_MsgA_PUSCH_r16);
    enc.WriteBit(value.has_nrofInterlacesPerMsgA_PO_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.msgA_MCS_r16), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSlotsMsgA_PUSCH_r16), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofMsgA_PO_PerSlot_r16), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.msgA_PUSCH_TimeDomainOffset_r16), 1, 32);
    if (value.has_msgA_PUSCH_TimeDomainAllocation_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_PUSCH_TimeDomainAllocation_r16), 1, 16);
    }
    if (value.has_startSymbolAndLengthMsgA_PO_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startSymbolAndLengthMsgA_PO_r16), 0, 127);
    }
    if (value.has_mappingTypeMsgA_PUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mappingTypeMsgA_PUSCH_r16), 0, 1);
    }
    if (value.has_guardPeriodMsgA_PUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.guardPeriodMsgA_PUSCH_r16), 0, 3);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.guardBandMsgA_PUSCH_r16), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.frequencyStartMsgA_PUSCH_r16), 0, 274);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofPRBs_PerMsgA_PO_r16), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofMsgA_PO_FDM_r16), 0, 3);
    if (value.has_msgA_IntraSlotFrequencyHopping_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_IntraSlotFrequencyHopping_r16), 0, 0);
    }
    if (value.has_msgA_HoppingBits_r16) {
        enc.WriteFixedBitString(value.msgA_HoppingBits_r16.bytes, value.msgA_HoppingBits_r16.bitLength, 2, 2);
    }
    Encode_MsgA_DMRS_Config_r16(enc, value.msgA_DMRS_Config_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofDMRS_Sequences_r16), 1, 2);
    if (value.has_msgA_Alpha_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_Alpha_r16), 0, 7);
    }
    if (value.has_interlaceIndexFirstPO_MsgA_PUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interlaceIndexFirstPO_MsgA_PUSCH_r16), 1, 10);
    }
    if (value.has_nrofInterlacesPerMsgA_PO_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofInterlacesPerMsgA_PO_r16), 1, 10);
    }
    return enc.Error();
}

ErrorCode Decode_MsgA_PUSCH_Resource_r16(Decoder& dec, MsgA_PUSCH_Resource_r16& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.msgA_MCS_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.nrofSlotsMsgA_PUSCH_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.nrofMsgA_PO_PerSlot_r16 = (MsgA_PUSCH_Resource_r16_NrofMsgA_PO_PerSlot_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.msgA_PUSCH_TimeDomainOffset_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.msgA_PUSCH_TimeDomainAllocation_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.startSymbolAndLengthMsgA_PO_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mappingTypeMsgA_PUSCH_r16 = (MsgA_PUSCH_Resource_r16_MappingTypeMsgA_PUSCH_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.guardPeriodMsgA_PUSCH_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.guardBandMsgA_PUSCH_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.frequencyStartMsgA_PUSCH_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.nrofPRBs_PerMsgA_PO_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.nrofMsgA_PO_FDM_r16 = (MsgA_PUSCH_Resource_r16_NrofMsgA_PO_FDM_r16)tmp_value;
    }
    if (present_4) {
        value.msgA_IntraSlotFrequencyHopping_r16 = (MsgA_PUSCH_Resource_r16_MsgA_IntraSlotFrequencyHopping_r16)0;
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.msgA_HoppingBits_r16.bytes = string_bytes;
        value.msgA_HoppingBits_r16.bitLength = string_length;
    }
    {
        if (Decode_MsgA_DMRS_Config_r16(dec, value.msgA_DMRS_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.nrofDMRS_Sequences_r16 = (int64_t)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msgA_Alpha_r16 = (MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 10, tmp_value)) { goto fail; }
        value.interlaceIndexFirstPO_MsgA_PUSCH_r16 = (int64_t)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 10, tmp_value)) { goto fail; }
        value.nrofInterlacesPerMsgA_PO_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MsgA_PUSCH_Resource_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MsgA_PUSCH_Resource_r16(MsgA_PUSCH_Resource_r16& value)
{
    if (value.has_msgA_PUSCH_TimeDomainAllocation_r16) {
    }
    if (value.has_startSymbolAndLengthMsgA_PO_r16) {
    }
    if (value.has_mappingTypeMsgA_PUSCH_r16) {
    }
    if (value.has_guardPeriodMsgA_PUSCH_r16) {
    }
    if (value.has_msgA_IntraSlotFrequencyHopping_r16) {
    }
    if (value.has_msgA_HoppingBits_r16) {
        std::free(value.msgA_HoppingBits_r16.bytes);
        value.msgA_HoppingBits_r16.bytes = nullptr;
        value.msgA_HoppingBits_r16.bitLength = 0;
    }
    Free_MsgA_DMRS_Config_r16(value.msgA_DMRS_Config_r16);
    if (value.has_msgA_Alpha_r16) {
    }
    if (value.has_interlaceIndexFirstPO_MsgA_PUSCH_r16) {
    }
    if (value.has_nrofInterlacesPerMsgA_PO_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MsgA_PUSCH_Config_r16(Encoder& enc, const MsgA_PUSCH_Config_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_msgA_PUSCH_ResourceGroupA_r16);
    enc.WriteBit(value.has_msgA_PUSCH_ResourceGroupB_r16);
    enc.WriteBit(value.has_msgA_TransformPrecoder_r16);
    enc.WriteBit(value.has_msgA_DataScramblingIndex_r16);
    enc.WriteBit(value.has_msgA_DeltaPreamble_r16);
    if (value.has_msgA_PUSCH_ResourceGroupA_r16) {
        Encode_MsgA_PUSCH_Resource_r16(enc, value.msgA_PUSCH_ResourceGroupA_r16);
    }
    if (value.has_msgA_PUSCH_ResourceGroupB_r16) {
        Encode_MsgA_PUSCH_Resource_r16(enc, value.msgA_PUSCH_ResourceGroupB_r16);
    }
    if (value.has_msgA_TransformPrecoder_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_TransformPrecoder_r16), 0, 1);
    }
    if (value.has_msgA_DataScramblingIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_DataScramblingIndex_r16), 0, 1023);
    }
    if (value.has_msgA_DeltaPreamble_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_DeltaPreamble_r16), -1, 6);
    }
    return enc.Error();
}

ErrorCode Decode_MsgA_PUSCH_Config_r16(Decoder& dec, MsgA_PUSCH_Config_r16& value)
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
        if (Decode_MsgA_PUSCH_Resource_r16(dec, value.msgA_PUSCH_ResourceGroupA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MsgA_PUSCH_Resource_r16(dec, value.msgA_PUSCH_ResourceGroupB_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.msgA_TransformPrecoder_r16 = (MsgA_PUSCH_Config_r16_MsgA_TransformPrecoder_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.msgA_DataScramblingIndex_r16 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-1, 6, tmp_value)) { goto fail; }
        value.msgA_DeltaPreamble_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MsgA_PUSCH_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MsgA_PUSCH_Config_r16(MsgA_PUSCH_Config_r16& value)
{
    if (value.has_msgA_PUSCH_ResourceGroupA_r16) {
        Free_MsgA_PUSCH_Resource_r16(value.msgA_PUSCH_ResourceGroupA_r16);
    }
    if (value.has_msgA_PUSCH_ResourceGroupB_r16) {
        Free_MsgA_PUSCH_Resource_r16(value.msgA_PUSCH_ResourceGroupB_r16);
    }
    if (value.has_msgA_TransformPrecoder_r16) {
    }
    if (value.has_msgA_DataScramblingIndex_r16) {
    }
    if (value.has_msgA_DeltaPreamble_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigCommonTwoStepRA_r16_ExtGroup1(Encoder& enc, const RACH_ConfigCommonTwoStepRA_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_ra_PrioritizationForSlicingTwoStep_r17);
    enc.WriteBit(value.has_featureCombinationPreamblesList_r17);
    if (value.has_ra_PrioritizationForSlicingTwoStep_r17) {
        Encode_RA_PrioritizationForSlicing_r17(enc, value.ra_PrioritizationForSlicingTwoStep_r17);
    }
    if (value.has_featureCombinationPreamblesList_r17) {
enc.WriteConstrainedLength(value.featureCombinationPreamblesList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureCombinationPreamblesList_r17_count; ++i) {
    Encode_FeatureCombinationPreambles_r17(enc, value.featureCombinationPreamblesList_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommonTwoStepRA_r16_ExtGroup1(Decoder& dec, RACH_ConfigCommonTwoStepRA_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_RA_PrioritizationForSlicing_r17(dec, value.ra_PrioritizationForSlicingTwoStep_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureCombinationPreamblesList_r17_count)) { goto fail; }
if (value.featureCombinationPreamblesList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureCombinationPreamblesList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureCombinationPreamblesList_r17_count > 0u) {
    value.featureCombinationPreamblesList_r17_items = (FeatureCombinationPreambles_r17*)std::malloc((std::size_t)value.featureCombinationPreamblesList_r17_count * sizeof(FeatureCombinationPreambles_r17));
    if (value.featureCombinationPreamblesList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureCombinationPreamblesList_r17_items, 0, (std::size_t)value.featureCombinationPreamblesList_r17_count * sizeof(FeatureCombinationPreambles_r17));
}
for (std::uint32_t i = 0; i < value.featureCombinationPreamblesList_r17_count; ++i) {
    if (Decode_FeatureCombinationPreambles_r17(dec, value.featureCombinationPreamblesList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommonTwoStepRA_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommonTwoStepRA_r16_ExtGroup1(RACH_ConfigCommonTwoStepRA_r16_ExtGroup1& value)
{
    if (value.has_ra_PrioritizationForSlicingTwoStep_r17) {
        Free_RA_PrioritizationForSlicing_r17(value.ra_PrioritizationForSlicingTwoStep_r17);
    }
    if (value.has_featureCombinationPreamblesList_r17) {
        if (value.featureCombinationPreamblesList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureCombinationPreamblesList_r17_count; ++i) {
                Free_FeatureCombinationPreambles_r17(value.featureCombinationPreamblesList_r17_items[i]);
            }
            std::free(value.featureCombinationPreamblesList_r17_items);
            value.featureCombinationPreamblesList_r17_items = nullptr;
        }
        value.featureCombinationPreamblesList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_GroupB_ConfiguredTwoStepRA_r16(Encoder& enc, const GroupB_ConfiguredTwoStepRA_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_MsgA_SizeGroupA_r16), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.messagePowerOffsetGroupB_r16), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfRA_PreamblesGroupA_r16), 1, 64);
    return enc.Error();
}

ErrorCode Decode_GroupB_ConfiguredTwoStepRA_r16(Decoder& dec, GroupB_ConfiguredTwoStepRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ra_MsgA_SizeGroupA_r16 = (GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.messagePowerOffsetGroupB_r16 = (GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.numberOfRA_PreamblesGroupA_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GroupB_ConfiguredTwoStepRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GroupB_ConfiguredTwoStepRA_r16(GroupB_ConfiguredTwoStepRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigGenericTwoStepRA_r16_ExtGroup1(Encoder& enc, const RACH_ConfigGenericTwoStepRA_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_msgB_ResponseWindow_v1700);
    if (value.has_msgB_ResponseWindow_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgB_ResponseWindow_v1700), 0, 5);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigGenericTwoStepRA_r16_ExtGroup1(Decoder& dec, RACH_ConfigGenericTwoStepRA_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.msgB_ResponseWindow_v1700 = (RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigGenericTwoStepRA_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigGenericTwoStepRA_r16_ExtGroup1(RACH_ConfigGenericTwoStepRA_r16_ExtGroup1& value)
{
    if (value.has_msgB_ResponseWindow_v1700) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigGenericTwoStepRA_r16(Encoder& enc, const RACH_ConfigGenericTwoStepRA_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_msgA_PRACH_ConfigurationIndex_r16);
    enc.WriteBit(value.has_msgA_RO_FDM_r16);
    enc.WriteBit(value.has_msgA_RO_FrequencyStart_r16);
    enc.WriteBit(value.has_msgA_ZeroCorrelationZoneConfig_r16);
    enc.WriteBit(value.has_msgA_PreamblePowerRampingStep_r16);
    enc.WriteBit(value.has_msgA_PreambleReceivedTargetPower_r16);
    enc.WriteBit(value.has_msgB_ResponseWindow_r16);
    enc.WriteBit(value.has_preambleTransMax_r16);
    if (value.has_msgA_PRACH_ConfigurationIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_PRACH_ConfigurationIndex_r16), 0, 262);
    }
    if (value.has_msgA_RO_FDM_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_RO_FDM_r16), 0, 3);
    }
    if (value.has_msgA_RO_FrequencyStart_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_RO_FrequencyStart_r16), 0, 274);
    }
    if (value.has_msgA_ZeroCorrelationZoneConfig_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_ZeroCorrelationZoneConfig_r16), 0, 15);
    }
    if (value.has_msgA_PreamblePowerRampingStep_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_PreamblePowerRampingStep_r16), 0, 3);
    }
    if (value.has_msgA_PreambleReceivedTargetPower_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_PreambleReceivedTargetPower_r16), -202, -60);
    }
    if (value.has_msgB_ResponseWindow_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgB_ResponseWindow_r16), 0, 9);
    }
    if (value.has_preambleTransMax_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preambleTransMax_r16), 0, 10);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RACH_ConfigGenericTwoStepRA_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigGenericTwoStepRA_r16(Decoder& dec, RACH_ConfigGenericTwoStepRA_r16& value)
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
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (!dec.ReadBit(present_7)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 262, tmp_value)) { goto fail; }
        value.msgA_PRACH_ConfigurationIndex_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msgA_RO_FDM_r16 = (RACH_ConfigGenericTwoStepRA_r16_MsgA_RO_FDM_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.msgA_RO_FrequencyStart_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.msgA_ZeroCorrelationZoneConfig_r16 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msgA_PreamblePowerRampingStep_r16 = (RACH_ConfigGenericTwoStepRA_r16_MsgA_PreamblePowerRampingStep_r16)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, -60, tmp_value)) { goto fail; }
        value.msgA_PreambleReceivedTargetPower_r16 = (int64_t)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.msgB_ResponseWindow_r16 = (RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.preambleTransMax_r16 = (RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16)tmp_value;
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
    if (Decode_RACH_ConfigGenericTwoStepRA_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RACH_ConfigGenericTwoStepRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigGenericTwoStepRA_r16(RACH_ConfigGenericTwoStepRA_r16& value)
{
    if (value.has_msgA_PRACH_ConfigurationIndex_r16) {
    }
    if (value.has_msgA_RO_FDM_r16) {
    }
    if (value.has_msgA_RO_FrequencyStart_r16) {
    }
    if (value.has_msgA_ZeroCorrelationZoneConfig_r16) {
    }
    if (value.has_msgA_PreamblePowerRampingStep_r16) {
    }
    if (value.has_msgA_PreambleReceivedTargetPower_r16) {
    }
    if (value.has_msgB_ResponseWindow_r16) {
    }
    if (value.has_preambleTransMax_r16) {
    }
    if (value.has_extGroup1) {
        Free_RACH_ConfigGenericTwoStepRA_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16(Encoder& enc, const RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 7);
    switch (value.tag) {
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneEighth:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.oneEighth), 0, 15);
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneFourth:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.oneFourth), 0, 15);
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneHalf:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.oneHalf), 0, 15);
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_one:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.one), 0, 15);
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_two:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.two), 0, 7);
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_four:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.four), 1, 16);
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_eight:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.eight), 1, 8);
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_sixteen:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sixteen), 1, 4);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16(Decoder& dec, RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 7, root_index)) {
        goto fail;
    }
    value.tag = (RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag)root_index;
    switch (value.tag) {
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneEighth: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.oneEighth = (RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth)tmp_value;
        break;
    }
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneFourth: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.oneFourth = (RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth)tmp_value;
        break;
    }
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneHalf: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.oneHalf = (RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf)tmp_value;
        break;
    }
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_one: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.one = (RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One)tmp_value;
        break;
    }
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_two: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.two = (RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two)tmp_value;
        break;
    }
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_four: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.u.four = (int64_t)tmp_value;
        break;
    }
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_eight: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.u.eight = (int64_t)tmp_value;
        break;
    }
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_sixteen: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.u.sixteen = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16(RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16& value)
{
    switch (value.tag) {
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneEighth:
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneFourth:
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneHalf:
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_one:
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_two:
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_four:
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_eight:
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_sixteen:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16(Encoder& enc, const RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l839:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l839), 0, 837);
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l139:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l139), 0, 137);
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l571:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l571), 0, 569);
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l1151:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l1151), 0, 1149);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16(Decoder& dec, RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag)root_index;
    switch (value.tag) {
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l839: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 837, tmp_value)) { goto fail; }
        value.u.l839 = (int64_t)tmp_value;
        break;
    }
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l139: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 137, tmp_value)) { goto fail; }
        value.u.l139 = (int64_t)tmp_value;
        break;
    }
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l571: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 569, tmp_value)) { goto fail; }
        value.u.l571 = (int64_t)tmp_value;
        break;
    }
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l1151: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1149, tmp_value)) { goto fail; }
        value.u.l1151 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16(RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16& value)
{
    switch (value.tag) {
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l839:
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l139:
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l571:
        break;
    case RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l1151:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16(Encoder& enc, const RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16& value)
{
    (void)value;
    Encode_RA_Prioritization(enc, value.ra_Prioritization_r16);
    enc.WriteFixedBitString(value.ra_PrioritizationForAI_r16.bytes, value.ra_PrioritizationForAI_r16.bitLength, 2, 2);
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16(Decoder& dec, RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RA_Prioritization(dec, value.ra_Prioritization_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.ra_PrioritizationForAI_r16.bytes = string_bytes;
        value.ra_PrioritizationForAI_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16(RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16& value)
{
    Free_RA_Prioritization(value.ra_Prioritization_r16);
    std::free(value.ra_PrioritizationForAI_r16.bytes);
    value.ra_PrioritizationForAI_r16.bytes = nullptr;
    value.ra_PrioritizationForAI_r16.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigCommonTwoStepRA_r16(Encoder& enc, const RACH_ConfigCommonTwoStepRA_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_msgA_TotalNumberOfRA_Preambles_r16);
    enc.WriteBit(value.has_msgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16);
    enc.WriteBit(value.has_msgA_CB_PreamblesPerSSB_PerSharedRO_r16);
    enc.WriteBit(value.has_msgA_SSB_SharedRO_MaskIndex_r16);
    enc.WriteBit(value.has_groupB_ConfiguredTwoStepRA_r16);
    enc.WriteBit(value.has_msgA_PRACH_RootSequenceIndex_r16);
    enc.WriteBit(value.has_msgA_TransMax_r16);
    enc.WriteBit(value.has_msgA_RSRP_Threshold_r16);
    enc.WriteBit(value.has_msgA_RSRP_ThresholdSSB_r16);
    enc.WriteBit(value.has_msgA_SubcarrierSpacing_r16);
    enc.WriteBit(value.has_msgA_RestrictedSetConfig_r16);
    enc.WriteBit(value.has_ra_PrioritizationForAccessIdentityTwoStep_r16);
    enc.WriteBit(value.has_ra_ContentionResolutionTimer_r16);
    Encode_RACH_ConfigGenericTwoStepRA_r16(enc, value.rach_ConfigGenericTwoStepRA_r16);
    if (value.has_msgA_TotalNumberOfRA_Preambles_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_TotalNumberOfRA_Preambles_r16), 1, 63);
    }
    if (value.has_msgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16) {
        Encode_RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16(enc, value.msgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16);
    }
    if (value.has_msgA_CB_PreamblesPerSSB_PerSharedRO_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_CB_PreamblesPerSSB_PerSharedRO_r16), 1, 60);
    }
    if (value.has_msgA_SSB_SharedRO_MaskIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_SSB_SharedRO_MaskIndex_r16), 1, 15);
    }
    if (value.has_groupB_ConfiguredTwoStepRA_r16) {
        Encode_GroupB_ConfiguredTwoStepRA_r16(enc, value.groupB_ConfiguredTwoStepRA_r16);
    }
    if (value.has_msgA_PRACH_RootSequenceIndex_r16) {
        Encode_RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16(enc, value.msgA_PRACH_RootSequenceIndex_r16);
    }
    if (value.has_msgA_TransMax_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_TransMax_r16), 0, 9);
    }
    if (value.has_msgA_RSRP_Threshold_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_RSRP_Threshold_r16), 0, 127);
    }
    if (value.has_msgA_RSRP_ThresholdSSB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_RSRP_ThresholdSSB_r16), 0, 127);
    }
    if (value.has_msgA_SubcarrierSpacing_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_SubcarrierSpacing_r16), 0, 7);
    }
    if (value.has_msgA_RestrictedSetConfig_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_RestrictedSetConfig_r16), 0, 2);
    }
    if (value.has_ra_PrioritizationForAccessIdentityTwoStep_r16) {
        Encode_RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16(enc, value.ra_PrioritizationForAccessIdentityTwoStep_r16);
    }
    if (value.has_ra_ContentionResolutionTimer_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_ContentionResolutionTimer_r16), 0, 7);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RACH_ConfigCommonTwoStepRA_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommonTwoStepRA_r16(Decoder& dec, RACH_ConfigCommonTwoStepRA_r16& value)
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
    {
        if (Decode_RACH_ConfigGenericTwoStepRA_r16(dec, value.rach_ConfigGenericTwoStepRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 63, tmp_value)) { goto fail; }
        value.msgA_TotalNumberOfRA_Preambles_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16(dec, value.msgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 60, tmp_value)) { goto fail; }
        value.msgA_CB_PreamblesPerSSB_PerSharedRO_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.msgA_SSB_SharedRO_MaskIndex_r16 = (int64_t)tmp_value;
    }
    if (present_4) {
        if (Decode_GroupB_ConfiguredTwoStepRA_r16(dec, value.groupB_ConfiguredTwoStepRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16(dec, value.msgA_PRACH_RootSequenceIndex_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.msgA_TransMax_r16 = (RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.msgA_RSRP_Threshold_r16 = (RSRP_Range)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.msgA_RSRP_ThresholdSSB_r16 = (RSRP_Range)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msgA_SubcarrierSpacing_r16 = (SubcarrierSpacing)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.msgA_RestrictedSetConfig_r16 = (RACH_ConfigCommonTwoStepRA_r16_MsgA_RestrictedSetConfig_r16)tmp_value;
    }
    if (present_11) {
        if (Decode_RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16(dec, value.ra_PrioritizationForAccessIdentityTwoStep_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ra_ContentionResolutionTimer_r16 = (RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16)tmp_value;
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
    if (Decode_RACH_ConfigCommonTwoStepRA_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RACH_ConfigCommonTwoStepRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommonTwoStepRA_r16(RACH_ConfigCommonTwoStepRA_r16& value)
{
    Free_RACH_ConfigGenericTwoStepRA_r16(value.rach_ConfigGenericTwoStepRA_r16);
    if (value.has_msgA_TotalNumberOfRA_Preambles_r16) {
    }
    if (value.has_msgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16) {
        Free_RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16(value.msgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16);
    }
    if (value.has_msgA_CB_PreamblesPerSSB_PerSharedRO_r16) {
    }
    if (value.has_msgA_SSB_SharedRO_MaskIndex_r16) {
    }
    if (value.has_groupB_ConfiguredTwoStepRA_r16) {
        Free_GroupB_ConfiguredTwoStepRA_r16(value.groupB_ConfiguredTwoStepRA_r16);
    }
    if (value.has_msgA_PRACH_RootSequenceIndex_r16) {
        Free_RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16(value.msgA_PRACH_RootSequenceIndex_r16);
    }
    if (value.has_msgA_TransMax_r16) {
    }
    if (value.has_msgA_RSRP_Threshold_r16) {
    }
    if (value.has_msgA_RSRP_ThresholdSSB_r16) {
    }
    if (value.has_msgA_SubcarrierSpacing_r16) {
    }
    if (value.has_msgA_RestrictedSetConfig_r16) {
    }
    if (value.has_ra_PrioritizationForAccessIdentityTwoStep_r16) {
        Free_RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16(value.ra_PrioritizationForAccessIdentityTwoStep_r16);
    }
    if (value.has_ra_ContentionResolutionTimer_r16) {
    }
    if (value.has_extGroup1) {
        Free_RACH_ConfigCommonTwoStepRA_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MsgA_ConfigCommon_r16(Encoder& enc, const MsgA_ConfigCommon_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_msgA_PUSCH_Config_r16);
    Encode_RACH_ConfigCommonTwoStepRA_r16(enc, value.rach_ConfigCommonTwoStepRA_r16);
    if (value.has_msgA_PUSCH_Config_r16) {
        Encode_MsgA_PUSCH_Config_r16(enc, value.msgA_PUSCH_Config_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MsgA_ConfigCommon_r16(Decoder& dec, MsgA_ConfigCommon_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_RACH_ConfigCommonTwoStepRA_r16(dec, value.rach_ConfigCommonTwoStepRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MsgA_PUSCH_Config_r16(dec, value.msgA_PUSCH_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MsgA_ConfigCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MsgA_ConfigCommon_r16(MsgA_ConfigCommon_r16& value)
{
    Free_RACH_ConfigCommonTwoStepRA_r16(value.rach_ConfigCommonTwoStepRA_r16);
    if (value.has_msgA_PUSCH_Config_r16) {
        Free_MsgA_PUSCH_Config_r16(value.msgA_PUSCH_Config_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_MsgA_ConfigCommon_r16(Encoder& enc, const SetupRelease_MsgA_ConfigCommon_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MsgA_ConfigCommon_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MsgA_ConfigCommon_r16_Tag_setup:
        Encode_MsgA_ConfigCommon_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MsgA_ConfigCommon_r16(Decoder& dec, SetupRelease_MsgA_ConfigCommon_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MsgA_ConfigCommon_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MsgA_ConfigCommon_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MsgA_ConfigCommon_r16_Tag_setup: {
        if (Decode_MsgA_ConfigCommon_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MsgA_ConfigCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MsgA_ConfigCommon_r16(SetupRelease_MsgA_ConfigCommon_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MsgA_ConfigCommon_r16_Tag_release:
        break;
    case SetupRelease_MsgA_ConfigCommon_r16_Tag_setup:
        Free_MsgA_ConfigCommon_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BWP_UplinkCommon_ExtGroup1(Encoder& enc, const BWP_UplinkCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_rach_ConfigCommonIAB_r16);
    enc.WriteBit(value.has_useInterlacePUCCH_PUSCH_r16);
    enc.WriteBit(value.has_msgA_ConfigCommon_r16);
    if (value.has_rach_ConfigCommonIAB_r16) {
        Encode_SetupRelease_RACH_ConfigCommon(enc, value.rach_ConfigCommonIAB_r16);
    }
    if (value.has_useInterlacePUCCH_PUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.useInterlacePUCCH_PUSCH_r16), 0, 0);
    }
    if (value.has_msgA_ConfigCommon_r16) {
        Encode_SetupRelease_MsgA_ConfigCommon_r16(enc, value.msgA_ConfigCommon_r16);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkCommon_ExtGroup1(Decoder& dec, BWP_UplinkCommon_ExtGroup1& value)
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
        if (Decode_SetupRelease_RACH_ConfigCommon(dec, value.rach_ConfigCommonIAB_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.useInterlacePUCCH_PUSCH_r16 = (BWP_UplinkCommon_ExtGroup1_UseInterlacePUCCH_PUSCH_r16)0;
    }
    if (present_2) {
        if (Decode_SetupRelease_MsgA_ConfigCommon_r16(dec, value.msgA_ConfigCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_UplinkCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkCommon_ExtGroup1(BWP_UplinkCommon_ExtGroup1& value)
{
    if (value.has_rach_ConfigCommonIAB_r16) {
        Free_SetupRelease_RACH_ConfigCommon(value.rach_ConfigCommonIAB_r16);
    }
    if (value.has_useInterlacePUCCH_PUSCH_r16) {
    }
    if (value.has_msgA_ConfigCommon_r16) {
        Free_SetupRelease_MsgA_ConfigCommon_r16(value.msgA_ConfigCommon_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_AdditionalRACH_ConfigList_r17(Encoder& enc, const AdditionalRACH_ConfigList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 256u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_AdditionalRACH_Config_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_AdditionalRACH_ConfigList_r17(Decoder& dec, AdditionalRACH_ConfigList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 256u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 256u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (AdditionalRACH_Config_r17*)std::malloc((std::size_t)value.count * sizeof(AdditionalRACH_Config_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(AdditionalRACH_Config_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_AdditionalRACH_Config_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_AdditionalRACH_ConfigList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AdditionalRACH_ConfigList_r17(AdditionalRACH_ConfigList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_AdditionalRACH_Config_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_AdditionalRACH_ConfigList_r17(Encoder& enc, const SetupRelease_AdditionalRACH_ConfigList_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_AdditionalRACH_ConfigList_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_AdditionalRACH_ConfigList_r17_Tag_setup:
        Encode_AdditionalRACH_ConfigList_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_AdditionalRACH_ConfigList_r17(Decoder& dec, SetupRelease_AdditionalRACH_ConfigList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_AdditionalRACH_ConfigList_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_AdditionalRACH_ConfigList_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_AdditionalRACH_ConfigList_r17_Tag_setup: {
        if (Decode_AdditionalRACH_ConfigList_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_AdditionalRACH_ConfigList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_AdditionalRACH_ConfigList_r17(SetupRelease_AdditionalRACH_ConfigList_r17& value)
{
    switch (value.tag) {
    case SetupRelease_AdditionalRACH_ConfigList_r17_Tag_release:
        break;
    case SetupRelease_AdditionalRACH_ConfigList_r17_Tag_setup:
        Free_AdditionalRACH_ConfigList_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BWP_UplinkCommon_ExtGroup2(Encoder& enc, const BWP_UplinkCommon_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_enableRA_PrioritizationForSlicing_r17);
    enc.WriteBit(value.has_additionalRACH_ConfigList_r17);
    enc.WriteBit(value.has_rsrp_ThresholdMsg3_r17);
    enc.WriteBit(value.has_numberOfMsg3_RepetitionsList_r17);
    enc.WriteBit(value.has_mcs_Msg3_Repetitions_r17);
    if (value.has_enableRA_PrioritizationForSlicing_r17) {
        enc.WriteBool(value.enableRA_PrioritizationForSlicing_r17);
    }
    if (value.has_additionalRACH_ConfigList_r17) {
        Encode_SetupRelease_AdditionalRACH_ConfigList_r17(enc, value.additionalRACH_ConfigList_r17);
    }
    if (value.has_rsrp_ThresholdMsg3_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdMsg3_r17), 0, 127);
    }
    if (value.has_numberOfMsg3_RepetitionsList_r17) {
enc.WriteConstrainedLength(value.numberOfMsg3_RepetitionsList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.numberOfMsg3_RepetitionsList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfMsg3_RepetitionsList_r17_items[i]), 0, 7);
}
    }
    if (value.has_mcs_Msg3_Repetitions_r17) {
enc.WriteConstrainedLength(value.mcs_Msg3_Repetitions_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.mcs_Msg3_Repetitions_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.mcs_Msg3_Repetitions_r17_items[i]), 0, 31);
}
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkCommon_ExtGroup2(Decoder& dec, BWP_UplinkCommon_ExtGroup2& value)
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
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.enableRA_PrioritizationForSlicing_r17 = tmp_value;
    }
    if (present_1) {
        if (Decode_SetupRelease_AdditionalRACH_ConfigList_r17(dec, value.additionalRACH_ConfigList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdMsg3_r17 = (RSRP_Range)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.numberOfMsg3_RepetitionsList_r17_count)) { goto fail; }
if (value.numberOfMsg3_RepetitionsList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.numberOfMsg3_RepetitionsList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.numberOfMsg3_RepetitionsList_r17_count > 0u) {
    value.numberOfMsg3_RepetitionsList_r17_items = (NumberOfMsg3_Repetitions_r17*)std::malloc((std::size_t)value.numberOfMsg3_RepetitionsList_r17_count * sizeof(NumberOfMsg3_Repetitions_r17));
    if (value.numberOfMsg3_RepetitionsList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.numberOfMsg3_RepetitionsList_r17_items, 0, (std::size_t)value.numberOfMsg3_RepetitionsList_r17_count * sizeof(NumberOfMsg3_Repetitions_r17));
}
for (std::uint32_t i = 0; i < value.numberOfMsg3_RepetitionsList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.numberOfMsg3_RepetitionsList_r17_items[i] = (NumberOfMsg3_Repetitions_r17)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.mcs_Msg3_Repetitions_r17_count)) { goto fail; }
if (value.mcs_Msg3_Repetitions_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.mcs_Msg3_Repetitions_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.mcs_Msg3_Repetitions_r17_count > 0u) {
    value.mcs_Msg3_Repetitions_r17_items = (int64_t*)std::malloc((std::size_t)value.mcs_Msg3_Repetitions_r17_count * sizeof(int64_t));
    if (value.mcs_Msg3_Repetitions_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.mcs_Msg3_Repetitions_r17_items, 0, (std::size_t)value.mcs_Msg3_Repetitions_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.mcs_Msg3_Repetitions_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.mcs_Msg3_Repetitions_r17_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_UplinkCommon_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkCommon_ExtGroup2(BWP_UplinkCommon_ExtGroup2& value)
{
    if (value.has_enableRA_PrioritizationForSlicing_r17) {
    }
    if (value.has_additionalRACH_ConfigList_r17) {
        Free_SetupRelease_AdditionalRACH_ConfigList_r17(value.additionalRACH_ConfigList_r17);
    }
    if (value.has_rsrp_ThresholdMsg3_r17) {
    }
    if (value.has_numberOfMsg3_RepetitionsList_r17) {
        if (value.numberOfMsg3_RepetitionsList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.numberOfMsg3_RepetitionsList_r17_count; ++i) {
            }
            std::free(value.numberOfMsg3_RepetitionsList_r17_items);
            value.numberOfMsg3_RepetitionsList_r17_items = nullptr;
        }
        value.numberOfMsg3_RepetitionsList_r17_count = 0;
    }
    if (value.has_mcs_Msg3_Repetitions_r17) {
        if (value.mcs_Msg3_Repetitions_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.mcs_Msg3_Repetitions_r17_count; ++i) {
            }
            std::free(value.mcs_Msg3_Repetitions_r17_items);
            value.mcs_Msg3_Repetitions_r17_items = nullptr;
        }
        value.mcs_Msg3_Repetitions_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BWP_UplinkCommon_ExtGroup3(Encoder& enc, const BWP_UplinkCommon_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalRACH_perPCI_ToAddModList_r18);
    enc.WriteBit(value.has_additionalRACH_perPCI_ToReleaseList_r18);
    enc.WriteBit(value.has_rsrp_ThresholdMsg1_RepetitionNum2_r18);
    enc.WriteBit(value.has_rsrp_ThresholdMsg1_RepetitionNum4_r18);
    enc.WriteBit(value.has_rsrp_ThresholdMsg1_RepetitionNum8_r18);
    enc.WriteBit(value.has_preambleTransMax_Msg1_Repetition_r18);
    if (value.has_additionalRACH_perPCI_ToAddModList_r18) {
enc.WriteConstrainedLength(value.additionalRACH_perPCI_ToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.additionalRACH_perPCI_ToAddModList_r18_count; ++i) {
    Encode_RACH_ConfigTwoTA_r18(enc, value.additionalRACH_perPCI_ToAddModList_r18_items[i]);
}
    }
    if (value.has_additionalRACH_perPCI_ToReleaseList_r18) {
enc.WriteConstrainedLength(value.additionalRACH_perPCI_ToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.additionalRACH_perPCI_ToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.additionalRACH_perPCI_ToReleaseList_r18_items[i]), 1, 7);
}
    }
    if (value.has_rsrp_ThresholdMsg1_RepetitionNum2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdMsg1_RepetitionNum2_r18), 0, 127);
    }
    if (value.has_rsrp_ThresholdMsg1_RepetitionNum4_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdMsg1_RepetitionNum4_r18), 0, 127);
    }
    if (value.has_rsrp_ThresholdMsg1_RepetitionNum8_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdMsg1_RepetitionNum8_r18), 0, 127);
    }
    if (value.has_preambleTransMax_Msg1_Repetition_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preambleTransMax_Msg1_Repetition_r18), 0, 9);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkCommon_ExtGroup3(Decoder& dec, BWP_UplinkCommon_ExtGroup3& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.additionalRACH_perPCI_ToAddModList_r18_count)) { goto fail; }
if (value.additionalRACH_perPCI_ToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.additionalRACH_perPCI_ToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.additionalRACH_perPCI_ToAddModList_r18_count > 0u) {
    value.additionalRACH_perPCI_ToAddModList_r18_items = (RACH_ConfigTwoTA_r18*)std::malloc((std::size_t)value.additionalRACH_perPCI_ToAddModList_r18_count * sizeof(RACH_ConfigTwoTA_r18));
    if (value.additionalRACH_perPCI_ToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.additionalRACH_perPCI_ToAddModList_r18_items, 0, (std::size_t)value.additionalRACH_perPCI_ToAddModList_r18_count * sizeof(RACH_ConfigTwoTA_r18));
}
for (std::uint32_t i = 0; i < value.additionalRACH_perPCI_ToAddModList_r18_count; ++i) {
    if (Decode_RACH_ConfigTwoTA_r18(dec, value.additionalRACH_perPCI_ToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.additionalRACH_perPCI_ToReleaseList_r18_count)) { goto fail; }
if (value.additionalRACH_perPCI_ToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.additionalRACH_perPCI_ToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.additionalRACH_perPCI_ToReleaseList_r18_count > 0u) {
    value.additionalRACH_perPCI_ToReleaseList_r18_items = (RACH_ConfigTwoTAIndex_r18*)std::malloc((std::size_t)value.additionalRACH_perPCI_ToReleaseList_r18_count * sizeof(RACH_ConfigTwoTAIndex_r18));
    if (value.additionalRACH_perPCI_ToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.additionalRACH_perPCI_ToReleaseList_r18_items, 0, (std::size_t)value.additionalRACH_perPCI_ToReleaseList_r18_count * sizeof(RACH_ConfigTwoTAIndex_r18));
}
for (std::uint32_t i = 0; i < value.additionalRACH_perPCI_ToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
    value.additionalRACH_perPCI_ToReleaseList_r18_items[i] = (RACH_ConfigTwoTAIndex_r18)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdMsg1_RepetitionNum2_r18 = (RSRP_Range)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdMsg1_RepetitionNum4_r18 = (RSRP_Range)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdMsg1_RepetitionNum8_r18 = (RSRP_Range)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.preambleTransMax_Msg1_Repetition_r18 = (BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_UplinkCommon_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkCommon_ExtGroup3(BWP_UplinkCommon_ExtGroup3& value)
{
    if (value.has_additionalRACH_perPCI_ToAddModList_r18) {
        if (value.additionalRACH_perPCI_ToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.additionalRACH_perPCI_ToAddModList_r18_count; ++i) {
                Free_RACH_ConfigTwoTA_r18(value.additionalRACH_perPCI_ToAddModList_r18_items[i]);
            }
            std::free(value.additionalRACH_perPCI_ToAddModList_r18_items);
            value.additionalRACH_perPCI_ToAddModList_r18_items = nullptr;
        }
        value.additionalRACH_perPCI_ToAddModList_r18_count = 0;
    }
    if (value.has_additionalRACH_perPCI_ToReleaseList_r18) {
        if (value.additionalRACH_perPCI_ToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.additionalRACH_perPCI_ToReleaseList_r18_count; ++i) {
            }
            std::free(value.additionalRACH_perPCI_ToReleaseList_r18_items);
            value.additionalRACH_perPCI_ToReleaseList_r18_items = nullptr;
        }
        value.additionalRACH_perPCI_ToReleaseList_r18_count = 0;
    }
    if (value.has_rsrp_ThresholdMsg1_RepetitionNum2_r18) {
    }
    if (value.has_rsrp_ThresholdMsg1_RepetitionNum4_r18) {
    }
    if (value.has_rsrp_ThresholdMsg1_RepetitionNum8_r18) {
    }
    if (value.has_preambleTransMax_Msg1_Repetition_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_ConfigCommon(Encoder& enc, const PUSCH_ConfigCommon& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_groupHoppingEnabledTransformPrecoding);
    enc.WriteBit(value.has_pusch_TimeDomainAllocationList);
    enc.WriteBit(value.has_msg3_DeltaPreamble);
    enc.WriteBit(value.has_p0_NominalWithGrant);
    if (value.has_groupHoppingEnabledTransformPrecoding) {
        enc.WriteConstrainedInteger((std::int64_t)(value.groupHoppingEnabledTransformPrecoding), 0, 0);
    }
    if (value.has_pusch_TimeDomainAllocationList) {
        Encode_PUSCH_TimeDomainResourceAllocationList(enc, value.pusch_TimeDomainAllocationList);
    }
    if (value.has_msg3_DeltaPreamble) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg3_DeltaPreamble), -1, 6);
    }
    if (value.has_p0_NominalWithGrant) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p0_NominalWithGrant), -202, 24);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_ConfigCommon(Decoder& dec, PUSCH_ConfigCommon& value)
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
        value.groupHoppingEnabledTransformPrecoding = (PUSCH_ConfigCommon_GroupHoppingEnabledTransformPrecoding)0;
    }
    if (present_1) {
        if (Decode_PUSCH_TimeDomainResourceAllocationList(dec, value.pusch_TimeDomainAllocationList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-1, 6, tmp_value)) { goto fail; }
        value.msg3_DeltaPreamble = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.p0_NominalWithGrant = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_ConfigCommon(PUSCH_ConfigCommon& value)
{
    if (value.has_groupHoppingEnabledTransformPrecoding) {
    }
    if (value.has_pusch_TimeDomainAllocationList) {
        Free_PUSCH_TimeDomainResourceAllocationList(value.pusch_TimeDomainAllocationList);
    }
    if (value.has_msg3_DeltaPreamble) {
    }
    if (value.has_p0_NominalWithGrant) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_PUSCH_ConfigCommon(Encoder& enc, const SetupRelease_PUSCH_ConfigCommon& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUSCH_ConfigCommon_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUSCH_ConfigCommon_Tag_setup:
        Encode_PUSCH_ConfigCommon(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUSCH_ConfigCommon(Decoder& dec, SetupRelease_PUSCH_ConfigCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUSCH_ConfigCommon_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUSCH_ConfigCommon_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUSCH_ConfigCommon_Tag_setup: {
        if (Decode_PUSCH_ConfigCommon(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUSCH_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUSCH_ConfigCommon(SetupRelease_PUSCH_ConfigCommon& value)
{
    switch (value.tag) {
    case SetupRelease_PUSCH_ConfigCommon_Tag_release:
        break;
    case SetupRelease_PUSCH_ConfigCommon_Tag_setup:
        Free_PUSCH_ConfigCommon(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ConfigCommon_ExtGroup1(Encoder& enc, const PUCCH_ConfigCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_nrofPRBs);
    enc.WriteBit(value.has_intra_SlotFH_r17);
    enc.WriteBit(value.has_pucch_ResourceCommonRedCap_r17);
    enc.WriteBit(value.has_additionalPRBOffset_r17);
    if (value.has_nrofPRBs) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofPRBs), 1, 16);
    }
    if (value.has_intra_SlotFH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intra_SlotFH_r17), 0, 1);
    }
    if (value.has_pucch_ResourceCommonRedCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_ResourceCommonRedCap_r17), 0, 15);
    }
    if (value.has_additionalPRBOffset_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalPRBOffset_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_ConfigCommon_ExtGroup1(Decoder& dec, PUCCH_ConfigCommon_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.nrofPRBs = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.intra_SlotFH_r17 = (PUCCH_ConfigCommon_ExtGroup1_Intra_SlotFH_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pucch_ResourceCommonRedCap_r17 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.additionalPRBOffset_r17 = (PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ConfigCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ConfigCommon_ExtGroup1(PUCCH_ConfigCommon_ExtGroup1& value)
{
    if (value.has_nrofPRBs) {
    }
    if (value.has_intra_SlotFH_r17) {
    }
    if (value.has_pucch_ResourceCommonRedCap_r17) {
    }
    if (value.has_additionalPRBOffset_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ConfigCommon(Encoder& enc, const PUCCH_ConfigCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pucch_ResourceCommon);
    enc.WriteBit(value.has_hoppingId);
    enc.WriteBit(value.has_p0_nominal);
    if (value.has_pucch_ResourceCommon) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_ResourceCommon), 0, 15);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_GroupHopping), 0, 2);
    if (value.has_hoppingId) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hoppingId), 0, 1023);
    }
    if (value.has_p0_nominal) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p0_nominal), -202, 24);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PUCCH_ConfigCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_ConfigCommon(Decoder& dec, PUCCH_ConfigCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pucch_ResourceCommon = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pucch_GroupHopping = (PUCCH_ConfigCommon_Pucch_GroupHopping)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.hoppingId = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.p0_nominal = (int64_t)tmp_value;
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
    if (Decode_PUCCH_ConfigCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_PUCCH_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ConfigCommon(PUCCH_ConfigCommon& value)
{
    if (value.has_pucch_ResourceCommon) {
    }
    if (value.has_hoppingId) {
    }
    if (value.has_p0_nominal) {
    }
    if (value.has_extGroup1) {
        Free_PUCCH_ConfigCommon_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_PUCCH_ConfigCommon(Encoder& enc, const SetupRelease_PUCCH_ConfigCommon& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUCCH_ConfigCommon_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUCCH_ConfigCommon_Tag_setup:
        Encode_PUCCH_ConfigCommon(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUCCH_ConfigCommon(Decoder& dec, SetupRelease_PUCCH_ConfigCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUCCH_ConfigCommon_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUCCH_ConfigCommon_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUCCH_ConfigCommon_Tag_setup: {
        if (Decode_PUCCH_ConfigCommon(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUCCH_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUCCH_ConfigCommon(SetupRelease_PUCCH_ConfigCommon& value)
{
    switch (value.tag) {
    case SetupRelease_PUCCH_ConfigCommon_Tag_release:
        break;
    case SetupRelease_PUCCH_ConfigCommon_Tag_setup:
        Free_PUCCH_ConfigCommon(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BWP_UplinkCommon(Encoder& enc, const BWP_UplinkCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rach_ConfigCommon);
    enc.WriteBit(value.has_pusch_ConfigCommon);
    enc.WriteBit(value.has_pucch_ConfigCommon);
    Encode_BWP(enc, value.genericParameters);
    if (value.has_rach_ConfigCommon) {
        Encode_SetupRelease_RACH_ConfigCommon(enc, value.rach_ConfigCommon);
    }
    if (value.has_pusch_ConfigCommon) {
        Encode_SetupRelease_PUSCH_ConfigCommon(enc, value.pusch_ConfigCommon);
    }
    if (value.has_pucch_ConfigCommon) {
        Encode_SetupRelease_PUCCH_ConfigCommon(enc, value.pucch_ConfigCommon);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_BWP_UplinkCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_BWP_UplinkCommon_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_BWP_UplinkCommon_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkCommon(Decoder& dec, BWP_UplinkCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    {
        if (Decode_BWP(dec, value.genericParameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_SetupRelease_RACH_ConfigCommon(dec, value.rach_ConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_PUSCH_ConfigCommon(dec, value.pusch_ConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_PUCCH_ConfigCommon(dec, value.pucch_ConfigCommon) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_BWP_UplinkCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_BWP_UplinkCommon_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_BWP_UplinkCommon_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_BWP_UplinkCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkCommon(BWP_UplinkCommon& value)
{
    Free_BWP(value.genericParameters);
    if (value.has_rach_ConfigCommon) {
        Free_SetupRelease_RACH_ConfigCommon(value.rach_ConfigCommon);
    }
    if (value.has_pusch_ConfigCommon) {
        Free_SetupRelease_PUSCH_ConfigCommon(value.pusch_ConfigCommon);
    }
    if (value.has_pucch_ConfigCommon) {
        Free_SetupRelease_PUCCH_ConfigCommon(value.pucch_ConfigCommon);
    }
    if (value.has_extGroup1) {
        Free_BWP_UplinkCommon_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_BWP_UplinkCommon_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_BWP_UplinkCommon_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkConfigCommonSIB_v1700(Encoder& enc, const UplinkConfigCommonSIB_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_initialUplinkBWP_RedCap_r17);
    if (value.has_initialUplinkBWP_RedCap_r17) {
        Encode_BWP_UplinkCommon(enc, value.initialUplinkBWP_RedCap_r17);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkConfigCommonSIB_v1700(Decoder& dec, UplinkConfigCommonSIB_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BWP_UplinkCommon(dec, value.initialUplinkBWP_RedCap_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkConfigCommonSIB_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkConfigCommonSIB_v1700(UplinkConfigCommonSIB_v1700& value)
{
    if (value.has_initialUplinkBWP_RedCap_r17) {
        Free_BWP_UplinkCommon(value.initialUplinkBWP_RedCap_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommonSIB_ExtGroup2(Encoder& enc, const ServingCellConfigCommonSIB_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_channelAccessMode2_r17);
    enc.WriteBit(value.has_discoveryBurstWindowLength_v1700);
    enc.WriteBit(value.has_highSpeedConfigFR2_r17);
    enc.WriteBit(value.has_uplinkConfigCommon_v1700);
    if (value.has_channelAccessMode2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.channelAccessMode2_r17), 0, 0);
    }
    if (value.has_discoveryBurstWindowLength_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.discoveryBurstWindowLength_v1700), 0, 5);
    }
    if (value.has_highSpeedConfigFR2_r17) {
        Encode_HighSpeedConfigFR2_r17(enc, value.highSpeedConfigFR2_r17);
    }
    if (value.has_uplinkConfigCommon_v1700) {
        Encode_UplinkConfigCommonSIB_v1700(enc, value.uplinkConfigCommon_v1700);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommonSIB_ExtGroup2(Decoder& dec, ServingCellConfigCommonSIB_ExtGroup2& value)
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
        value.channelAccessMode2_r17 = (ServingCellConfigCommonSIB_ExtGroup2_ChannelAccessMode2_r17)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.discoveryBurstWindowLength_v1700 = (ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700)tmp_value;
    }
    if (present_2) {
        if (Decode_HighSpeedConfigFR2_r17(dec, value.highSpeedConfigFR2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_UplinkConfigCommonSIB_v1700(dec, value.uplinkConfigCommon_v1700) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommonSIB_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommonSIB_ExtGroup2(ServingCellConfigCommonSIB_ExtGroup2& value)
{
    if (value.has_channelAccessMode2_r17) {
    }
    if (value.has_discoveryBurstWindowLength_v1700) {
    }
    if (value.has_highSpeedConfigFR2_r17) {
        Free_HighSpeedConfigFR2_r17(value.highSpeedConfigFR2_r17);
    }
    if (value.has_uplinkConfigCommon_v1700) {
        Free_UplinkConfigCommonSIB_v1700(value.uplinkConfigCommon_v1700);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommonSIB_ExtGroup3(Encoder& enc, const ServingCellConfigCommonSIB_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_enhancedMeasurementLEO_r17);
    if (value.has_enhancedMeasurementLEO_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedMeasurementLEO_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommonSIB_ExtGroup3(Decoder& dec, ServingCellConfigCommonSIB_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.enhancedMeasurementLEO_r17 = (ServingCellConfigCommonSIB_ExtGroup3_EnhancedMeasurementLEO_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommonSIB_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommonSIB_ExtGroup3(ServingCellConfigCommonSIB_ExtGroup3& value)
{
    if (value.has_enhancedMeasurementLEO_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommonSIB_ExtGroup4(Encoder& enc, const ServingCellConfigCommonSIB_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_ra_ChannelAccess_r17);
    if (value.has_ra_ChannelAccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_ChannelAccess_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommonSIB_ExtGroup4(Decoder& dec, ServingCellConfigCommonSIB_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.ra_ChannelAccess_r17 = (ServingCellConfigCommonSIB_ExtGroup4_Ra_ChannelAccess_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommonSIB_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommonSIB_ExtGroup4(ServingCellConfigCommonSIB_ExtGroup4& value)
{
    if (value.has_ra_ChannelAccess_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MultiFrequencyBandListNR_SIB_v1760(Encoder& enc, const MultiFrequencyBandListNR_SIB_v1760& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NR_MultiBandInfo_v1760(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MultiFrequencyBandListNR_SIB_v1760(Decoder& dec, MultiFrequencyBandListNR_SIB_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NR_MultiBandInfo_v1760*)std::malloc((std::size_t)value.count * sizeof(NR_MultiBandInfo_v1760));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_MultiBandInfo_v1760));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NR_MultiBandInfo_v1760(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MultiFrequencyBandListNR_SIB_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MultiFrequencyBandListNR_SIB_v1760(MultiFrequencyBandListNR_SIB_v1760& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NR_MultiBandInfo_v1760(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FrequencyInfoDL_SIB_v1760(Encoder& enc, const FrequencyInfoDL_SIB_v1760& value)
{
    (void)value;
    Encode_MultiFrequencyBandListNR_SIB_v1760(enc, value.frequencyBandList_v1760);
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoDL_SIB_v1760(Decoder& dec, FrequencyInfoDL_SIB_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MultiFrequencyBandListNR_SIB_v1760(dec, value.frequencyBandList_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FrequencyInfoDL_SIB_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoDL_SIB_v1760(FrequencyInfoDL_SIB_v1760& value)
{
    Free_MultiFrequencyBandListNR_SIB_v1760(value.frequencyBandList_v1760);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DownlinkConfigCommonSIB_v1760(Encoder& enc, const DownlinkConfigCommonSIB_v1760& value)
{
    (void)value;
    Encode_FrequencyInfoDL_SIB_v1760(enc, value.frequencyInfoDL_v1760);
    return enc.Error();
}

ErrorCode Decode_DownlinkConfigCommonSIB_v1760(Decoder& dec, DownlinkConfigCommonSIB_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_FrequencyInfoDL_SIB_v1760(dec, value.frequencyInfoDL_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DownlinkConfigCommonSIB_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DownlinkConfigCommonSIB_v1760(DownlinkConfigCommonSIB_v1760& value)
{
    Free_FrequencyInfoDL_SIB_v1760(value.frequencyInfoDL_v1760);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FrequencyInfoUL_SIB_v1760(Encoder& enc, const FrequencyInfoUL_SIB_v1760& value)
{
    (void)value;
    Encode_MultiFrequencyBandListNR_SIB_v1760(enc, value.frequencyBandList_v1760);
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoUL_SIB_v1760(Decoder& dec, FrequencyInfoUL_SIB_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MultiFrequencyBandListNR_SIB_v1760(dec, value.frequencyBandList_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FrequencyInfoUL_SIB_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoUL_SIB_v1760(FrequencyInfoUL_SIB_v1760& value)
{
    Free_MultiFrequencyBandListNR_SIB_v1760(value.frequencyBandList_v1760);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkConfigCommonSIB_v1760(Encoder& enc, const UplinkConfigCommonSIB_v1760& value)
{
    (void)value;
    Encode_FrequencyInfoUL_SIB_v1760(enc, value.frequencyInfoUL_v1760);
    return enc.Error();
}

ErrorCode Decode_UplinkConfigCommonSIB_v1760(Decoder& dec, UplinkConfigCommonSIB_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_FrequencyInfoUL_SIB_v1760(dec, value.frequencyInfoUL_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkConfigCommonSIB_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkConfigCommonSIB_v1760(UplinkConfigCommonSIB_v1760& value)
{
    Free_FrequencyInfoUL_SIB_v1760(value.frequencyInfoUL_v1760);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommonSIB_ExtGroup5(Encoder& enc, const ServingCellConfigCommonSIB_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_downlinkConfigCommon_v1760);
    enc.WriteBit(value.has_uplinkConfigCommon_v1760);
    if (value.has_downlinkConfigCommon_v1760) {
        Encode_DownlinkConfigCommonSIB_v1760(enc, value.downlinkConfigCommon_v1760);
    }
    if (value.has_uplinkConfigCommon_v1760) {
        Encode_UplinkConfigCommonSIB_v1760(enc, value.uplinkConfigCommon_v1760);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommonSIB_ExtGroup5(Decoder& dec, ServingCellConfigCommonSIB_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_DownlinkConfigCommonSIB_v1760(dec, value.downlinkConfigCommon_v1760) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UplinkConfigCommonSIB_v1760(dec, value.uplinkConfigCommon_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommonSIB_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommonSIB_ExtGroup5(ServingCellConfigCommonSIB_ExtGroup5& value)
{
    if (value.has_downlinkConfigCommon_v1760) {
        Free_DownlinkConfigCommonSIB_v1760(value.downlinkConfigCommon_v1760);
    }
    if (value.has_uplinkConfigCommon_v1760) {
        Free_UplinkConfigCommonSIB_v1760(value.uplinkConfigCommon_v1760);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TDD_UL_DL_Pattern_ExtGroup1(Encoder& enc, const TDD_UL_DL_Pattern_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_dl_UL_TransmissionPeriodicity_v1530);
    if (value.has_dl_UL_TransmissionPeriodicity_v1530) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_UL_TransmissionPeriodicity_v1530), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_Pattern_ExtGroup1(Decoder& dec, TDD_UL_DL_Pattern_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dl_UL_TransmissionPeriodicity_v1530 = (TDD_UL_DL_Pattern_ExtGroup1_Dl_UL_TransmissionPeriodicity_v1530)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_Pattern_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_Pattern_ExtGroup1(TDD_UL_DL_Pattern_ExtGroup1& value)
{
    if (value.has_dl_UL_TransmissionPeriodicity_v1530) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TDD_UL_DL_Pattern(Encoder& enc, const TDD_UL_DL_Pattern& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_UL_TransmissionPeriodicity), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofDownlinkSlots), 0, 320);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofDownlinkSymbols), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofUplinkSlots), 0, 320);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofUplinkSymbols), 0, 13);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_TDD_UL_DL_Pattern_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_Pattern(Decoder& dec, TDD_UL_DL_Pattern& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.dl_UL_TransmissionPeriodicity = (TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 320, tmp_value)) { goto fail; }
        value.nrofDownlinkSlots = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.nrofDownlinkSymbols = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 320, tmp_value)) { goto fail; }
        value.nrofUplinkSlots = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.nrofUplinkSymbols = (int64_t)tmp_value;
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
    if (Decode_TDD_UL_DL_Pattern_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_TDD_UL_DL_Pattern(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_Pattern(TDD_UL_DL_Pattern& value)
{
    if (value.has_extGroup1) {
        Free_TDD_UL_DL_Pattern_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TDD_UL_DL_ConfigCommon(Encoder& enc, const TDD_UL_DL_ConfigCommon& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pattern2);
    enc.WriteConstrainedInteger((std::int64_t)(value.referenceSubcarrierSpacing), 0, 7);
    Encode_TDD_UL_DL_Pattern(enc, value.pattern1);
    if (value.has_pattern2) {
        Encode_TDD_UL_DL_Pattern(enc, value.pattern2);
    }
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_ConfigCommon(Decoder& dec, TDD_UL_DL_ConfigCommon& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.referenceSubcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    {
        if (Decode_TDD_UL_DL_Pattern(dec, value.pattern1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_TDD_UL_DL_Pattern(dec, value.pattern2) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_ConfigCommon(TDD_UL_DL_ConfigCommon& value)
{
    Free_TDD_UL_DL_Pattern(value.pattern1);
    if (value.has_pattern2) {
        Free_TDD_UL_DL_Pattern(value.pattern2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FrequencyInfoUL_SIB_ExtGroup1(Encoder& enc, const FrequencyInfoUL_SIB_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_frequencyBandListAerial_r18);
    if (value.has_frequencyBandListAerial_r18) {
        Encode_MultiFrequencyBandListNR_Aerial_SIB_r18(enc, value.frequencyBandListAerial_r18);
    }
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoUL_SIB_ExtGroup1(Decoder& dec, FrequencyInfoUL_SIB_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MultiFrequencyBandListNR_Aerial_SIB_r18(dec, value.frequencyBandListAerial_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FrequencyInfoUL_SIB_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoUL_SIB_ExtGroup1(FrequencyInfoUL_SIB_ExtGroup1& value)
{
    if (value.has_frequencyBandListAerial_r18) {
        Free_MultiFrequencyBandListNR_Aerial_SIB_r18(value.frequencyBandListAerial_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FrequencyInfoUL_SIB(Encoder& enc, const FrequencyInfoUL_SIB& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_frequencyBandList);
    enc.WriteBit(value.has_absoluteFrequencyPointA);
    enc.WriteBit(value.has_p_Max);
    enc.WriteBit(value.has_frequencyShift7p5khz);
    if (value.has_frequencyBandList) {
        Encode_MultiFrequencyBandListNR_SIB(enc, value.frequencyBandList);
    }
    if (value.has_absoluteFrequencyPointA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.absoluteFrequencyPointA), 0, 3279165);
    }
enc.WriteConstrainedLength(value.scs_SpecificCarrierList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
    Encode_SCS_SpecificCarrier(enc, value.scs_SpecificCarrierList_items[i]);
}
    if (value.has_p_Max) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p_Max), -30, 33);
    }
    if (value.has_frequencyShift7p5khz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.frequencyShift7p5khz), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_FrequencyInfoUL_SIB_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoUL_SIB(Decoder& dec, FrequencyInfoUL_SIB& value)
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
        if (Decode_MultiFrequencyBandListNR_SIB(dec, value.frequencyBandList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.absoluteFrequencyPointA = (ARFCN_ValueNR)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.scs_SpecificCarrierList_count)) { goto fail; }
if (value.scs_SpecificCarrierList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.scs_SpecificCarrierList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.scs_SpecificCarrierList_count > 0u) {
    value.scs_SpecificCarrierList_items = (SCS_SpecificCarrier*)std::malloc((std::size_t)value.scs_SpecificCarrierList_count * sizeof(SCS_SpecificCarrier));
    if (value.scs_SpecificCarrierList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.scs_SpecificCarrierList_items, 0, (std::size_t)value.scs_SpecificCarrierList_count * sizeof(SCS_SpecificCarrier));
}
for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
    if (Decode_SCS_SpecificCarrier(dec, value.scs_SpecificCarrierList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_Max = (P_Max)tmp_value;
    }
    if (present_3) {
        value.frequencyShift7p5khz = (FrequencyInfoUL_SIB_FrequencyShift7p5khz)0;
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
    if (Decode_FrequencyInfoUL_SIB_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_FrequencyInfoUL_SIB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoUL_SIB(FrequencyInfoUL_SIB& value)
{
    if (value.has_frequencyBandList) {
        Free_MultiFrequencyBandListNR_SIB(value.frequencyBandList);
    }
    if (value.has_absoluteFrequencyPointA) {
    }
    if (value.scs_SpecificCarrierList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
            Free_SCS_SpecificCarrier(value.scs_SpecificCarrierList_items[i]);
        }
        std::free(value.scs_SpecificCarrierList_items);
        value.scs_SpecificCarrierList_items = nullptr;
    }
    value.scs_SpecificCarrierList_count = 0;
    if (value.has_p_Max) {
    }
    if (value.has_frequencyShift7p5khz) {
    }
    if (value.has_extGroup1) {
        Free_FrequencyInfoUL_SIB_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkConfigCommonSIB(Encoder& enc, const UplinkConfigCommonSIB& value)
{
    (void)value;
    Encode_FrequencyInfoUL_SIB(enc, value.frequencyInfoUL);
    Encode_BWP_UplinkCommon(enc, value.initialUplinkBWP);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeAlignmentTimerCommon), 0, 7);
    return enc.Error();
}

ErrorCode Decode_UplinkConfigCommonSIB(Decoder& dec, UplinkConfigCommonSIB& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_FrequencyInfoUL_SIB(dec, value.frequencyInfoUL) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_BWP_UplinkCommon(dec, value.initialUplinkBWP) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.timeAlignmentTimerCommon = (TimeAlignmentTimer)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkConfigCommonSIB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkConfigCommonSIB(UplinkConfigCommonSIB& value)
{
    Free_FrequencyInfoUL_SIB(value.frequencyInfoUL);
    Free_BWP_UplinkCommon(value.initialUplinkBWP);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommonSIB_Ssb_PositionsInBurst(Encoder& enc, const ServingCellConfigCommonSIB_Ssb_PositionsInBurst& value)
{
    (void)value;
    enc.WriteBit(value.has_groupPresence);
    enc.WriteFixedBitString(value.inOneGroup.bytes, value.inOneGroup.bitLength, 8, 8);
    if (value.has_groupPresence) {
        enc.WriteFixedBitString(value.groupPresence.bytes, value.groupPresence.bitLength, 8, 8);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommonSIB_Ssb_PositionsInBurst(Decoder& dec, ServingCellConfigCommonSIB_Ssb_PositionsInBurst& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.inOneGroup.bytes = string_bytes;
        value.inOneGroup.bitLength = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.groupPresence.bytes = string_bytes;
        value.groupPresence.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommonSIB_Ssb_PositionsInBurst(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommonSIB_Ssb_PositionsInBurst(ServingCellConfigCommonSIB_Ssb_PositionsInBurst& value)
{
    std::free(value.inOneGroup.bytes);
    value.inOneGroup.bytes = nullptr;
    value.inOneGroup.bitLength = 0;
    if (value.has_groupPresence) {
        std::free(value.groupPresence.bytes);
        value.groupPresence.bytes = nullptr;
        value.groupPresence.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommonSIB(Encoder& enc, const ServingCellConfigCommonSIB& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_uplinkConfigCommon);
    enc.WriteBit(value.has_supplementaryUplink);
    enc.WriteBit(value.has_n_TimingAdvanceOffset);
    enc.WriteBit(value.has_tdd_UL_DL_ConfigurationCommon);
    Encode_DownlinkConfigCommonSIB(enc, value.downlinkConfigCommon);
    if (value.has_uplinkConfigCommon) {
        Encode_UplinkConfigCommonSIB(enc, value.uplinkConfigCommon);
    }
    if (value.has_supplementaryUplink) {
        Encode_UplinkConfigCommonSIB(enc, value.supplementaryUplink);
    }
    if (value.has_n_TimingAdvanceOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.n_TimingAdvanceOffset), 0, 2);
    }
    Encode_ServingCellConfigCommonSIB_Ssb_PositionsInBurst(enc, value.ssb_PositionsInBurst);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PeriodicityServingCell), 0, 5);
    if (value.has_tdd_UL_DL_ConfigurationCommon) {
        Encode_TDD_UL_DL_ConfigCommon(enc, value.tdd_UL_DL_ConfigurationCommon);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.ss_PBCH_BlockPower), -60, 50);
    if (any_extension) {
        enc.WriteNormallySmallLength(5u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ServingCellConfigCommonSIB_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_ServingCellConfigCommonSIB_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_ServingCellConfigCommonSIB_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_ServingCellConfigCommonSIB_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_ServingCellConfigCommonSIB_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommonSIB(Decoder& dec, ServingCellConfigCommonSIB& value)
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
    {
        if (Decode_DownlinkConfigCommonSIB(dec, value.downlinkConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_UplinkConfigCommonSIB(dec, value.uplinkConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UplinkConfigCommonSIB(dec, value.supplementaryUplink) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.n_TimingAdvanceOffset = (ServingCellConfigCommonSIB_N_TimingAdvanceOffset)tmp_value;
    }
    {
        if (Decode_ServingCellConfigCommonSIB_Ssb_PositionsInBurst(dec, value.ssb_PositionsInBurst) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.ssb_PeriodicityServingCell = (ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell)tmp_value;
    }
    if (present_3) {
        if (Decode_TDD_UL_DL_ConfigCommon(dec, value.tdd_UL_DL_ConfigurationCommon) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-60, 50, tmp_value)) { goto fail; }
        value.ss_PBCH_BlockPower = (int64_t)tmp_value;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 5u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[5] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_ServingCellConfigCommonSIB_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfigCommonSIB_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfigCommonSIB_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfigCommonSIB_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfigCommonSIB_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup5 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommonSIB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommonSIB(ServingCellConfigCommonSIB& value)
{
    Free_DownlinkConfigCommonSIB(value.downlinkConfigCommon);
    if (value.has_uplinkConfigCommon) {
        Free_UplinkConfigCommonSIB(value.uplinkConfigCommon);
    }
    if (value.has_supplementaryUplink) {
        Free_UplinkConfigCommonSIB(value.supplementaryUplink);
    }
    if (value.has_n_TimingAdvanceOffset) {
    }
    Free_ServingCellConfigCommonSIB_Ssb_PositionsInBurst(value.ssb_PositionsInBurst);
    if (value.has_tdd_UL_DL_ConfigurationCommon) {
        Free_TDD_UL_DL_ConfigCommon(value.tdd_UL_DL_ConfigurationCommon);
    }
    if (value.has_extGroup1) {
        Free_ServingCellConfigCommonSIB_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_ServingCellConfigCommonSIB_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_ServingCellConfigCommonSIB_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_ServingCellConfigCommonSIB_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_ServingCellConfigCommonSIB_ExtGroup5(value.extGroup5);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SI_SchedulingInfo(Encoder& enc, const SI_SchedulingInfo& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_si_RequestConfig);
    enc.WriteBit(value.has_si_RequestConfigSUL);
    enc.WriteBit(value.has_systemInformationAreaID);
enc.WriteConstrainedLength(value.schedulingInfoList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.schedulingInfoList_count; ++i) {
    Encode_SchedulingInfo(enc, value.schedulingInfoList_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.si_WindowLength), 0, 10);
    if (value.has_si_RequestConfig) {
        Encode_SI_RequestConfig(enc, value.si_RequestConfig);
    }
    if (value.has_si_RequestConfigSUL) {
        Encode_SI_RequestConfig(enc, value.si_RequestConfigSUL);
    }
    if (value.has_systemInformationAreaID) {
        enc.WriteFixedBitString(value.systemInformationAreaID.bytes, value.systemInformationAreaID.bitLength, 24, 24);
    }
    return enc.Error();
}

ErrorCode Decode_SI_SchedulingInfo(Decoder& dec, SI_SchedulingInfo& value)
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
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.schedulingInfoList_count)) { goto fail; }
if (value.schedulingInfoList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.schedulingInfoList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.schedulingInfoList_count > 0u) {
    value.schedulingInfoList_items = (SchedulingInfo*)std::malloc((std::size_t)value.schedulingInfoList_count * sizeof(SchedulingInfo));
    if (value.schedulingInfoList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.schedulingInfoList_items, 0, (std::size_t)value.schedulingInfoList_count * sizeof(SchedulingInfo));
}
for (std::uint32_t i = 0; i < value.schedulingInfoList_count; ++i) {
    if (Decode_SchedulingInfo(dec, value.schedulingInfoList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.si_WindowLength = (SI_SchedulingInfo_Si_WindowLength)tmp_value;
    }
    if (present_0) {
        if (Decode_SI_RequestConfig(dec, value.si_RequestConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SI_RequestConfig(dec, value.si_RequestConfigSUL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.systemInformationAreaID.bytes = string_bytes;
        value.systemInformationAreaID.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SI_SchedulingInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SI_SchedulingInfo(SI_SchedulingInfo& value)
{
    if (value.schedulingInfoList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.schedulingInfoList_count; ++i) {
            Free_SchedulingInfo(value.schedulingInfoList_items[i]);
        }
        std::free(value.schedulingInfoList_items);
        value.schedulingInfoList_items = nullptr;
    }
    value.schedulingInfoList_count = 0;
    if (value.has_si_RequestConfig) {
        Free_SI_RequestConfig(value.si_RequestConfig);
    }
    if (value.has_si_RequestConfigSUL) {
        Free_SI_RequestConfig(value.si_RequestConfigSUL);
    }
    if (value.has_systemInformationAreaID) {
        std::free(value.systemInformationAreaID.bytes);
        value.systemInformationAreaID.bytes = nullptr;
        value.systemInformationAreaID.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_TimersAndConstants(Encoder& enc, const UE_TimersAndConstants& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.t300), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.t301), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.t310), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.n310), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.t311), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.n311), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.t319), 0, 7);
    return enc.Error();
}

ErrorCode Decode_UE_TimersAndConstants(Decoder& dec, UE_TimersAndConstants& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t300 = (UE_TimersAndConstants_T300)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t301 = (UE_TimersAndConstants_T301)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.t310 = (UE_TimersAndConstants_T310)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.n310 = (UE_TimersAndConstants_N310)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.t311 = (UE_TimersAndConstants_T311)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.n311 = (UE_TimersAndConstants_N311)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t319 = (UE_TimersAndConstants_T319)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_TimersAndConstants(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_TimersAndConstants(UE_TimersAndConstants& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SIB1_CellSelectionInfo(Encoder& enc, const SIB1_CellSelectionInfo& value)
{
    (void)value;
    enc.WriteBit(value.has_q_RxLevMinOffset);
    enc.WriteBit(value.has_q_RxLevMinSUL);
    enc.WriteBit(value.has_q_QualMin);
    enc.WriteBit(value.has_q_QualMinOffset);
    enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMin), -70, -22);
    if (value.has_q_RxLevMinOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMinOffset), 1, 8);
    }
    if (value.has_q_RxLevMinSUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMinSUL), -70, -22);
    }
    if (value.has_q_QualMin) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_QualMin), -43, -12);
    }
    if (value.has_q_QualMinOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_QualMinOffset), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_SIB1_CellSelectionInfo(Decoder& dec, SIB1_CellSelectionInfo& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-70, -22, tmp_value)) { goto fail; }
        value.q_RxLevMin = (Q_RxLevMin)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.q_RxLevMinOffset = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-70, -22, tmp_value)) { goto fail; }
        value.q_RxLevMinSUL = (Q_RxLevMin)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-43, -12, tmp_value)) { goto fail; }
        value.q_QualMin = (Q_QualMin)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.q_QualMinOffset = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_CellSelectionInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_CellSelectionInfo(SIB1_CellSelectionInfo& value)
{
    if (value.has_q_RxLevMinOffset) {
    }
    if (value.has_q_RxLevMinSUL) {
    }
    if (value.has_q_QualMin) {
    }
    if (value.has_q_QualMinOffset) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UAC_BarringInfoSetList(Encoder& enc, const UAC_BarringInfoSetList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UAC_BarringInfoSet(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UAC_BarringInfoSetList(Decoder& dec, UAC_BarringInfoSetList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UAC_BarringInfoSet*)std::malloc((std::size_t)value.count * sizeof(UAC_BarringInfoSet));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_BarringInfoSet));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UAC_BarringInfoSet(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UAC_BarringInfoSetList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UAC_BarringInfoSetList(UAC_BarringInfoSetList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UAC_BarringInfoSet(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UAC_BarringPerCatList(Encoder& enc, const UAC_BarringPerCatList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 63u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UAC_BarringPerCat(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UAC_BarringPerCatList(Decoder& dec, UAC_BarringPerCatList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 63u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 63u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UAC_BarringPerCat*)std::malloc((std::size_t)value.count * sizeof(UAC_BarringPerCat));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_BarringPerCat));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UAC_BarringPerCat(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UAC_BarringPerCatList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UAC_BarringPerCatList(UAC_BarringPerCatList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UAC_BarringPerCat(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UAC_BarringPerPLMN_List(Encoder& enc, const UAC_BarringPerPLMN_List& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UAC_BarringPerPLMN(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UAC_BarringPerPLMN_List(Decoder& dec, UAC_BarringPerPLMN_List& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 12u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 12u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UAC_BarringPerPLMN*)std::malloc((std::size_t)value.count * sizeof(UAC_BarringPerPLMN));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_BarringPerPLMN));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UAC_BarringPerPLMN(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UAC_BarringPerPLMN_List(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UAC_BarringPerPLMN_List(UAC_BarringPerPLMN_List& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UAC_BarringPerPLMN(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList(Encoder& enc, const SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 2u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList(Decoder& dec, SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(2u, 12u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 12u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UAC_AccessCategory1_SelectionAssistanceInfo*)std::malloc((std::size_t)value.count * sizeof(UAC_AccessCategory1_SelectionAssistanceInfo));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_AccessCategory1_SelectionAssistanceInfo));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
    value.items[i] = (UAC_AccessCategory1_SelectionAssistanceInfo)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList(SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo(Encoder& enc, const SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag_plmnCommon:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.plmnCommon), 0, 2);
        break;
    case SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag_individualPLMNList:
        Encode_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList(enc, value.u.individualPLMNList);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo(Decoder& dec, SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag)root_index;
    switch (value.tag) {
    case SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag_plmnCommon: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.u.plmnCommon = (UAC_AccessCategory1_SelectionAssistanceInfo)tmp_value;
        break;
    }
    case SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag_individualPLMNList: {
        if (Decode_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList(dec, value.u.individualPLMNList) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo(SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo& value)
{
    switch (value.tag) {
    case SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag_plmnCommon:
        break;
    case SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag_individualPLMNList:
        Free_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList(value.u.individualPLMNList);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SIB1_Uac_BarringInfo(Encoder& enc, const SIB1_Uac_BarringInfo& value)
{
    (void)value;
    enc.WriteBit(value.has_uac_BarringForCommon);
    enc.WriteBit(value.has_uac_BarringPerPLMN_List);
    enc.WriteBit(value.has_uac_AccessCategory1_SelectionAssistanceInfo);
    if (value.has_uac_BarringForCommon) {
        Encode_UAC_BarringPerCatList(enc, value.uac_BarringForCommon);
    }
    if (value.has_uac_BarringPerPLMN_List) {
        Encode_UAC_BarringPerPLMN_List(enc, value.uac_BarringPerPLMN_List);
    }
    Encode_UAC_BarringInfoSetList(enc, value.uac_BarringInfoSetList);
    if (value.has_uac_AccessCategory1_SelectionAssistanceInfo) {
        Encode_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo(enc, value.uac_AccessCategory1_SelectionAssistanceInfo);
    }
    return enc.Error();
}

ErrorCode Decode_SIB1_Uac_BarringInfo(Decoder& dec, SIB1_Uac_BarringInfo& value)
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
        if (Decode_UAC_BarringPerCatList(dec, value.uac_BarringForCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UAC_BarringPerPLMN_List(dec, value.uac_BarringPerPLMN_List) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_UAC_BarringInfoSetList(dec, value.uac_BarringInfoSetList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo(dec, value.uac_AccessCategory1_SelectionAssistanceInfo) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_Uac_BarringInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_Uac_BarringInfo(SIB1_Uac_BarringInfo& value)
{
    if (value.has_uac_BarringForCommon) {
        Free_UAC_BarringPerCatList(value.uac_BarringForCommon);
    }
    if (value.has_uac_BarringPerPLMN_List) {
        Free_UAC_BarringPerPLMN_List(value.uac_BarringPerPLMN_List);
    }
    Free_UAC_BarringInfoSetList(value.uac_BarringInfoSetList);
    if (value.has_uac_AccessCategory1_SelectionAssistanceInfo) {
        Free_SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo(value.uac_AccessCategory1_SelectionAssistanceInfo);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SIB1(Encoder& enc, const SIB1& value)
{
    (void)value;
    enc.WriteBit(value.has_cellSelectionInfo);
    enc.WriteBit(value.has_connEstFailureControl);
    enc.WriteBit(value.has_si_SchedulingInfo);
    enc.WriteBit(value.has_servingCellConfigCommon);
    enc.WriteBit(value.has_ims_EmergencySupport);
    enc.WriteBit(value.has_eCallOverIMS_Support);
    enc.WriteBit(value.has_ue_TimersAndConstants);
    enc.WriteBit(value.has_uac_BarringInfo);
    enc.WriteBit(value.has_useFullResumeID);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_cellSelectionInfo) {
        Encode_SIB1_CellSelectionInfo(enc, value.cellSelectionInfo);
    }
    Encode_CellAccessRelatedInfo(enc, value.cellAccessRelatedInfo);
    if (value.has_connEstFailureControl) {
        Encode_ConnEstFailureControl(enc, value.connEstFailureControl);
    }
    if (value.has_si_SchedulingInfo) {
        Encode_SI_SchedulingInfo(enc, value.si_SchedulingInfo);
    }
    if (value.has_servingCellConfigCommon) {
        Encode_ServingCellConfigCommonSIB(enc, value.servingCellConfigCommon);
    }
    if (value.has_ims_EmergencySupport) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ims_EmergencySupport), 0, 0);
    }
    if (value.has_eCallOverIMS_Support) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eCallOverIMS_Support), 0, 0);
    }
    if (value.has_ue_TimersAndConstants) {
        Encode_UE_TimersAndConstants(enc, value.ue_TimersAndConstants);
    }
    if (value.has_uac_BarringInfo) {
        Encode_SIB1_Uac_BarringInfo(enc, value.uac_BarringInfo);
    }
    if (value.has_useFullResumeID) {
        enc.WriteConstrainedInteger((std::int64_t)(value.useFullResumeID), 0, 0);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SIB1_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SIB1(Decoder& dec, SIB1& value)
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
    if (present_0) {
        if (Decode_SIB1_CellSelectionInfo(dec, value.cellSelectionInfo) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_CellAccessRelatedInfo(dec, value.cellAccessRelatedInfo) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ConnEstFailureControl(dec, value.connEstFailureControl) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SI_SchedulingInfo(dec, value.si_SchedulingInfo) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_ServingCellConfigCommonSIB(dec, value.servingCellConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        value.ims_EmergencySupport = (SIB1_Ims_EmergencySupport)0;
    }
    if (present_5) {
        value.eCallOverIMS_Support = (SIB1_ECallOverIMS_Support)0;
    }
    if (present_6) {
        if (Decode_UE_TimersAndConstants(dec, value.ue_TimersAndConstants) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_SIB1_Uac_BarringInfo(dec, value.uac_BarringInfo) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        value.useFullResumeID = (SIB1_UseFullResumeID)0;
    }
    if (present_9) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_10) {
        if (Decode_SIB1_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1(SIB1& value)
{
    if (value.has_cellSelectionInfo) {
        Free_SIB1_CellSelectionInfo(value.cellSelectionInfo);
    }
    Free_CellAccessRelatedInfo(value.cellAccessRelatedInfo);
    if (value.has_connEstFailureControl) {
        Free_ConnEstFailureControl(value.connEstFailureControl);
    }
    if (value.has_si_SchedulingInfo) {
        Free_SI_SchedulingInfo(value.si_SchedulingInfo);
    }
    if (value.has_servingCellConfigCommon) {
        Free_ServingCellConfigCommonSIB(value.servingCellConfigCommon);
    }
    if (value.has_ims_EmergencySupport) {
    }
    if (value.has_eCallOverIMS_Support) {
    }
    if (value.has_ue_TimersAndConstants) {
        Free_UE_TimersAndConstants(value.ue_TimersAndConstants);
    }
    if (value.has_uac_BarringInfo) {
        Free_SIB1_Uac_BarringInfo(value.uac_BarringInfo);
    }
    if (value.has_useFullResumeID) {
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_SIB1_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_InterestedFreqList_r16(Encoder& enc, const SL_InterestedFreqList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_SL_InterestedFreqList_r16(Decoder& dec, SL_InterestedFreqList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_InterestedFreqList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_InterestedFreqList_r16(SL_InterestedFreqList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_PosTxResourceReqList_r18(Encoder& enc, const SL_PosTxResourceReqList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_PosTxResourceReq_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PosTxResourceReqList_r18(Decoder& dec, SL_PosTxResourceReqList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_PosTxResourceReq_r18*)std::malloc((std::size_t)value.count * sizeof(SL_PosTxResourceReq_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_PosTxResourceReq_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_PosTxResourceReq_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_PosTxResourceReqList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PosTxResourceReqList_r18(SL_PosTxResourceReqList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_PosTxResourceReq_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_CarrierFailureList_r18(Encoder& enc, const SL_CarrierFailureList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_CarrierFailure_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_CarrierFailureList_r18(Decoder& dec, SL_CarrierFailureList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_CarrierFailure_r18*)std::malloc((std::size_t)value.count * sizeof(SL_CarrierFailure_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_CarrierFailure_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_CarrierFailure_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_CarrierFailureList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CarrierFailureList_r18(SL_CarrierFailureList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_CarrierFailure_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension(Encoder& enc, const SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension(Decoder& dec, SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension(SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkUEInformationNR_v1800_IEs(Encoder& enc, const SidelinkUEInformationNR_v1800_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_CarrierFailureList_r18);
    enc.WriteBit(value.has_sl_TxResourceReqListL2_U2U_r18);
    enc.WriteBit(value.has_sl_PosRxInterestedFreqList_r18);
    enc.WriteBit(value.has_sl_PosTxResourceReqList_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_sl_CarrierFailureList_r18) {
        Encode_SL_CarrierFailureList_r18(enc, value.sl_CarrierFailureList_r18);
    }
    if (value.has_sl_TxResourceReqListL2_U2U_r18) {
enc.WriteConstrainedLength(value.sl_TxResourceReqListL2_U2U_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_TxResourceReqListL2_U2U_r18_count; ++i) {
    Encode_SL_TxResourceReqL2_U2U_r18(enc, value.sl_TxResourceReqListL2_U2U_r18_items[i]);
}
    }
    if (value.has_sl_PosRxInterestedFreqList_r18) {
        Encode_SL_InterestedFreqList_r16(enc, value.sl_PosRxInterestedFreqList_r18);
    }
    if (value.has_sl_PosTxResourceReqList_r18) {
        Encode_SL_PosTxResourceReqList_r18(enc, value.sl_PosTxResourceReqList_r18);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SidelinkUEInformationNR_v1800_IEs(Decoder& dec, SidelinkUEInformationNR_v1800_IEs& value)
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
        if (Decode_SL_CarrierFailureList_r18(dec, value.sl_CarrierFailureList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_TxResourceReqListL2_U2U_r18_count)) { goto fail; }
if (value.sl_TxResourceReqListL2_U2U_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_TxResourceReqListL2_U2U_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_TxResourceReqListL2_U2U_r18_count > 0u) {
    value.sl_TxResourceReqListL2_U2U_r18_items = (SL_TxResourceReqL2_U2U_r18*)std::malloc((std::size_t)value.sl_TxResourceReqListL2_U2U_r18_count * sizeof(SL_TxResourceReqL2_U2U_r18));
    if (value.sl_TxResourceReqListL2_U2U_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_TxResourceReqListL2_U2U_r18_items, 0, (std::size_t)value.sl_TxResourceReqListL2_U2U_r18_count * sizeof(SL_TxResourceReqL2_U2U_r18));
}
for (std::uint32_t i = 0; i < value.sl_TxResourceReqListL2_U2U_r18_count; ++i) {
    if (Decode_SL_TxResourceReqL2_U2U_r18(dec, value.sl_TxResourceReqListL2_U2U_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        if (Decode_SL_InterestedFreqList_r16(dec, value.sl_PosRxInterestedFreqList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SL_PosTxResourceReqList_r18(dec, value.sl_PosTxResourceReqList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SidelinkUEInformationNR_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkUEInformationNR_v1800_IEs(SidelinkUEInformationNR_v1800_IEs& value)
{
    if (value.has_sl_CarrierFailureList_r18) {
        Free_SL_CarrierFailureList_r18(value.sl_CarrierFailureList_r18);
    }
    if (value.has_sl_TxResourceReqListL2_U2U_r18) {
        if (value.sl_TxResourceReqListL2_U2U_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_TxResourceReqListL2_U2U_r18_count; ++i) {
                Free_SL_TxResourceReqL2_U2U_r18(value.sl_TxResourceReqListL2_U2U_r18_items[i]);
            }
            std::free(value.sl_TxResourceReqListL2_U2U_r18_items);
            value.sl_TxResourceReqListL2_U2U_r18_items = nullptr;
        }
        value.sl_TxResourceReqListL2_U2U_r18_count = 0;
    }
    if (value.has_sl_PosRxInterestedFreqList_r18) {
        Free_SL_InterestedFreqList_r16(value.sl_PosRxInterestedFreqList_r18);
    }
    if (value.has_sl_PosTxResourceReqList_r18) {
        Free_SL_PosTxResourceReqList_r18(value.sl_PosTxResourceReqList_r18);
    }
    if (value.has_nonCriticalExtension) {
        Free_SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReqList_v1700(Encoder& enc, const SL_TxResourceReqList_v1700& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_TxResourceReq_v1700(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReqList_v1700(Decoder& dec, SL_TxResourceReqList_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_TxResourceReq_v1700*)std::malloc((std::size_t)value.count * sizeof(SL_TxResourceReq_v1700));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TxResourceReq_v1700));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_TxResourceReq_v1700(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReqList_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReqList_v1700(SL_TxResourceReqList_v1700& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_TxResourceReq_v1700(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_RxDRX_ReportList_v1700(Encoder& enc, const SL_RxDRX_ReportList_v1700& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_RxDRX_Report_v1700(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RxDRX_ReportList_v1700(Decoder& dec, SL_RxDRX_ReportList_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_RxDRX_Report_v1700*)std::malloc((std::size_t)value.count * sizeof(SL_RxDRX_Report_v1700));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_RxDRX_Report_v1700));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_RxDRX_Report_v1700(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_RxDRX_ReportList_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RxDRX_ReportList_v1700(SL_RxDRX_ReportList_v1700& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_RxDRX_Report_v1700(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_RxInterestedGC_BC_DestList_r17(Encoder& enc, const SL_RxInterestedGC_BC_DestList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_RxInterestedGC_BC_Dest_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RxInterestedGC_BC_DestList_r17(Decoder& dec, SL_RxInterestedGC_BC_DestList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_RxInterestedGC_BC_Dest_r17*)std::malloc((std::size_t)value.count * sizeof(SL_RxInterestedGC_BC_Dest_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_RxInterestedGC_BC_Dest_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_RxInterestedGC_BC_Dest_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_RxInterestedGC_BC_DestList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RxInterestedGC_BC_DestList_r17(SL_RxInterestedGC_BC_DestList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_RxInterestedGC_BC_Dest_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReqListDisc_r17(Encoder& enc, const SL_TxResourceReqListDisc_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_TxResourceReqDisc_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReqListDisc_r17(Decoder& dec, SL_TxResourceReqListDisc_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_TxResourceReqDisc_r17*)std::malloc((std::size_t)value.count * sizeof(SL_TxResourceReqDisc_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TxResourceReqDisc_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_TxResourceReqDisc_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReqListDisc_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReqListDisc_r17(SL_TxResourceReqListDisc_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_TxResourceReqDisc_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReqListCommRelay_r17(Encoder& enc, const SL_TxResourceReqListCommRelay_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_TxResourceReqCommRelayInfo_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReqListCommRelay_r17(Decoder& dec, SL_TxResourceReqListCommRelay_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_TxResourceReqCommRelayInfo_r17*)std::malloc((std::size_t)value.count * sizeof(SL_TxResourceReqCommRelayInfo_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TxResourceReqCommRelayInfo_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_TxResourceReqCommRelayInfo_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReqListCommRelay_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReqListCommRelay_r17(SL_TxResourceReqListCommRelay_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_TxResourceReqCommRelayInfo_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkUEInformationNR_v1700_IEs(Encoder& enc, const SidelinkUEInformationNR_v1700_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_TxResourceReqList_v1700);
    enc.WriteBit(value.has_sl_RxDRX_ReportList_v1700);
    enc.WriteBit(value.has_sl_RxInterestedGC_BC_DestList_r17);
    enc.WriteBit(value.has_sl_RxInterestedFreqListDisc_r17);
    enc.WriteBit(value.has_sl_TxResourceReqListDisc_r17);
    enc.WriteBit(value.has_sl_TxResourceReqListCommRelay_r17);
    enc.WriteBit(value.has_ue_Type_r17);
    enc.WriteBit(value.has_sl_SourceIdentityRemoteUE_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_sl_TxResourceReqList_v1700) {
        Encode_SL_TxResourceReqList_v1700(enc, value.sl_TxResourceReqList_v1700);
    }
    if (value.has_sl_RxDRX_ReportList_v1700) {
        Encode_SL_RxDRX_ReportList_v1700(enc, value.sl_RxDRX_ReportList_v1700);
    }
    if (value.has_sl_RxInterestedGC_BC_DestList_r17) {
        Encode_SL_RxInterestedGC_BC_DestList_r17(enc, value.sl_RxInterestedGC_BC_DestList_r17);
    }
    if (value.has_sl_RxInterestedFreqListDisc_r17) {
        Encode_SL_InterestedFreqList_r16(enc, value.sl_RxInterestedFreqListDisc_r17);
    }
    if (value.has_sl_TxResourceReqListDisc_r17) {
        Encode_SL_TxResourceReqListDisc_r17(enc, value.sl_TxResourceReqListDisc_r17);
    }
    if (value.has_sl_TxResourceReqListCommRelay_r17) {
        Encode_SL_TxResourceReqListCommRelay_r17(enc, value.sl_TxResourceReqListCommRelay_r17);
    }
    if (value.has_ue_Type_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_Type_r17), 0, 1);
    }
    if (value.has_sl_SourceIdentityRemoteUE_r17) {
        enc.WriteFixedBitString(value.sl_SourceIdentityRemoteUE_r17.bytes, value.sl_SourceIdentityRemoteUE_r17.bitLength, 24, 24);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SidelinkUEInformationNR_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SidelinkUEInformationNR_v1700_IEs(Decoder& dec, SidelinkUEInformationNR_v1700_IEs& value)
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
        if (Decode_SL_TxResourceReqList_v1700(dec, value.sl_TxResourceReqList_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_RxDRX_ReportList_v1700(dec, value.sl_RxDRX_ReportList_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_RxInterestedGC_BC_DestList_r17(dec, value.sl_RxInterestedGC_BC_DestList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SL_InterestedFreqList_r16(dec, value.sl_RxInterestedFreqListDisc_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SL_TxResourceReqListDisc_r17(dec, value.sl_TxResourceReqListDisc_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SL_TxResourceReqListCommRelay_r17(dec, value.sl_TxResourceReqListCommRelay_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ue_Type_r17 = (SidelinkUEInformationNR_v1700_IEs_Ue_Type_r17)tmp_value;
    }
    if (present_7) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_SourceIdentityRemoteUE_r17.bytes = string_bytes;
        value.sl_SourceIdentityRemoteUE_r17.bitLength = string_length;
    }
    if (present_8) {
        if (Decode_SidelinkUEInformationNR_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SidelinkUEInformationNR_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkUEInformationNR_v1700_IEs(SidelinkUEInformationNR_v1700_IEs& value)
{
    if (value.has_sl_TxResourceReqList_v1700) {
        Free_SL_TxResourceReqList_v1700(value.sl_TxResourceReqList_v1700);
    }
    if (value.has_sl_RxDRX_ReportList_v1700) {
        Free_SL_RxDRX_ReportList_v1700(value.sl_RxDRX_ReportList_v1700);
    }
    if (value.has_sl_RxInterestedGC_BC_DestList_r17) {
        Free_SL_RxInterestedGC_BC_DestList_r17(value.sl_RxInterestedGC_BC_DestList_r17);
    }
    if (value.has_sl_RxInterestedFreqListDisc_r17) {
        Free_SL_InterestedFreqList_r16(value.sl_RxInterestedFreqListDisc_r17);
    }
    if (value.has_sl_TxResourceReqListDisc_r17) {
        Free_SL_TxResourceReqListDisc_r17(value.sl_TxResourceReqListDisc_r17);
    }
    if (value.has_sl_TxResourceReqListCommRelay_r17) {
        Free_SL_TxResourceReqListCommRelay_r17(value.sl_TxResourceReqListCommRelay_r17);
    }
    if (value.has_ue_Type_r17) {
    }
    if (value.has_sl_SourceIdentityRemoteUE_r17) {
        std::free(value.sl_SourceIdentityRemoteUE_r17.bytes);
        value.sl_SourceIdentityRemoteUE_r17.bytes = nullptr;
        value.sl_SourceIdentityRemoteUE_r17.bitLength = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_SidelinkUEInformationNR_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReqList_r16(Encoder& enc, const SL_TxResourceReqList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_TxResourceReq_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReqList_r16(Decoder& dec, SL_TxResourceReqList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_TxResourceReq_r16*)std::malloc((std::size_t)value.count * sizeof(SL_TxResourceReq_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TxResourceReq_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_TxResourceReq_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReqList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReqList_r16(SL_TxResourceReqList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_TxResourceReq_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_FailureList_r16(Encoder& enc, const SL_FailureList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_Failure_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_FailureList_r16(Decoder& dec, SL_FailureList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_Failure_r16*)std::malloc((std::size_t)value.count * sizeof(SL_Failure_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_Failure_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_Failure_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_FailureList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_FailureList_r16(SL_FailureList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_Failure_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkUEInformationNR_r16_IEs(Encoder& enc, const SidelinkUEInformationNR_r16_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_RxInterestedFreqList_r16);
    enc.WriteBit(value.has_sl_TxResourceReqList_r16);
    enc.WriteBit(value.has_sl_FailureList_r16);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_sl_RxInterestedFreqList_r16) {
        Encode_SL_InterestedFreqList_r16(enc, value.sl_RxInterestedFreqList_r16);
    }
    if (value.has_sl_TxResourceReqList_r16) {
        Encode_SL_TxResourceReqList_r16(enc, value.sl_TxResourceReqList_r16);
    }
    if (value.has_sl_FailureList_r16) {
        Encode_SL_FailureList_r16(enc, value.sl_FailureList_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SidelinkUEInformationNR_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SidelinkUEInformationNR_r16_IEs(Decoder& dec, SidelinkUEInformationNR_r16_IEs& value)
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
        if (Decode_SL_InterestedFreqList_r16(dec, value.sl_RxInterestedFreqList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_TxResourceReqList_r16(dec, value.sl_TxResourceReqList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_FailureList_r16(dec, value.sl_FailureList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_4) {
        if (Decode_SidelinkUEInformationNR_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SidelinkUEInformationNR_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkUEInformationNR_r16_IEs(SidelinkUEInformationNR_r16_IEs& value)
{
    if (value.has_sl_RxInterestedFreqList_r16) {
        Free_SL_InterestedFreqList_r16(value.sl_RxInterestedFreqList_r16);
    }
    if (value.has_sl_TxResourceReqList_r16) {
        Free_SL_TxResourceReqList_r16(value.sl_TxResourceReqList_r16);
    }
    if (value.has_sl_FailureList_r16) {
        Free_SL_FailureList_r16(value.sl_FailureList_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_SidelinkUEInformationNR_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkUEInformationNR_r16_CriticalExtensionsFuture(Encoder& enc, const SidelinkUEInformationNR_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SidelinkUEInformationNR_r16_CriticalExtensionsFuture(Decoder& dec, SidelinkUEInformationNR_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkUEInformationNR_r16_CriticalExtensionsFuture(SidelinkUEInformationNR_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkUEInformationNR_r16_CriticalExtensions(Encoder& enc, const SidelinkUEInformationNR_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SidelinkUEInformationNR_r16_CriticalExtensions_Tag_sidelinkUEInformationNR_r16:
        Encode_SidelinkUEInformationNR_r16_IEs(enc, value.u.sidelinkUEInformationNR_r16);
        break;
    case SidelinkUEInformationNR_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_SidelinkUEInformationNR_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SidelinkUEInformationNR_r16_CriticalExtensions(Decoder& dec, SidelinkUEInformationNR_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SidelinkUEInformationNR_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case SidelinkUEInformationNR_r16_CriticalExtensions_Tag_sidelinkUEInformationNR_r16: {
        if (Decode_SidelinkUEInformationNR_r16_IEs(dec, value.u.sidelinkUEInformationNR_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SidelinkUEInformationNR_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_SidelinkUEInformationNR_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SidelinkUEInformationNR_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkUEInformationNR_r16_CriticalExtensions(SidelinkUEInformationNR_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case SidelinkUEInformationNR_r16_CriticalExtensions_Tag_sidelinkUEInformationNR_r16:
        Free_SidelinkUEInformationNR_r16_IEs(value.u.sidelinkUEInformationNR_r16);
        break;
    case SidelinkUEInformationNR_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_SidelinkUEInformationNR_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkUEInformationNR_r16(Encoder& enc, const SidelinkUEInformationNR_r16& value)
{
    (void)value;
    Encode_SidelinkUEInformationNR_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_SidelinkUEInformationNR_r16(Decoder& dec, SidelinkUEInformationNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SidelinkUEInformationNR_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SidelinkUEInformationNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkUEInformationNR_r16(SidelinkUEInformationNR_r16& value)
{
    Free_SidelinkUEInformationNR_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxInterestedFreqList_r16(Encoder& enc, const SL_TxInterestedFreqList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxInterestedFreqList_r16(Decoder& dec, SL_TxInterestedFreqList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxInterestedFreqList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxInterestedFreqList_r16(SL_TxInterestedFreqList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReq_r16(Encoder& enc, const SL_TxResourceReq_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_RLC_ModeIndicationList_r16);
    enc.WriteBit(value.has_sl_QoS_InfoList_r16);
    enc.WriteBit(value.has_sl_TypeTxSyncList_r16);
    enc.WriteBit(value.has_sl_TxInterestedFreqList_r16);
    enc.WriteBit(value.has_sl_CapabilityInformationSidelink_r16);
    enc.WriteFixedBitString(value.sl_DestinationIdentity_r16.bytes, value.sl_DestinationIdentity_r16.bitLength, 24, 24);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_CastType_r16), 0, 3);
    if (value.has_sl_RLC_ModeIndicationList_r16) {
enc.WriteConstrainedLength(value.sl_RLC_ModeIndicationList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RLC_ModeIndicationList_r16_count; ++i) {
    Encode_SL_RLC_ModeIndication_r16(enc, value.sl_RLC_ModeIndicationList_r16_items[i]);
}
    }
    if (value.has_sl_QoS_InfoList_r16) {
enc.WriteConstrainedLength(value.sl_QoS_InfoList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_QoS_InfoList_r16_count; ++i) {
    Encode_SL_QoS_Info_r16(enc, value.sl_QoS_InfoList_r16_items[i]);
}
    }
    if (value.has_sl_TypeTxSyncList_r16) {
enc.WriteConstrainedLength(value.sl_TypeTxSyncList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_TypeTxSyncList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_TypeTxSyncList_r16_items[i]), 0, 2);
}
    }
    if (value.has_sl_TxInterestedFreqList_r16) {
        Encode_SL_TxInterestedFreqList_r16(enc, value.sl_TxInterestedFreqList_r16);
    }
    if (value.has_sl_CapabilityInformationSidelink_r16) {
        enc.WriteSemiConstrainedOctetString(value.sl_CapabilityInformationSidelink_r16.bytes, value.sl_CapabilityInformationSidelink_r16.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReq_r16(Decoder& dec, SL_TxResourceReq_r16& value)
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
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_DestinationIdentity_r16.bytes = string_bytes;
        value.sl_DestinationIdentity_r16.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_CastType_r16 = (SL_TxResourceReq_r16_Sl_CastType_r16)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RLC_ModeIndicationList_r16_count)) { goto fail; }
if (value.sl_RLC_ModeIndicationList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RLC_ModeIndicationList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RLC_ModeIndicationList_r16_count > 0u) {
    value.sl_RLC_ModeIndicationList_r16_items = (SL_RLC_ModeIndication_r16*)std::malloc((std::size_t)value.sl_RLC_ModeIndicationList_r16_count * sizeof(SL_RLC_ModeIndication_r16));
    if (value.sl_RLC_ModeIndicationList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RLC_ModeIndicationList_r16_items, 0, (std::size_t)value.sl_RLC_ModeIndicationList_r16_count * sizeof(SL_RLC_ModeIndication_r16));
}
for (std::uint32_t i = 0; i < value.sl_RLC_ModeIndicationList_r16_count; ++i) {
    if (Decode_SL_RLC_ModeIndication_r16(dec, value.sl_RLC_ModeIndicationList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_QoS_InfoList_r16_count)) { goto fail; }
if (value.sl_QoS_InfoList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_QoS_InfoList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_QoS_InfoList_r16_count > 0u) {
    value.sl_QoS_InfoList_r16_items = (SL_QoS_Info_r16*)std::malloc((std::size_t)value.sl_QoS_InfoList_r16_count * sizeof(SL_QoS_Info_r16));
    if (value.sl_QoS_InfoList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_QoS_InfoList_r16_items, 0, (std::size_t)value.sl_QoS_InfoList_r16_count * sizeof(SL_QoS_Info_r16));
}
for (std::uint32_t i = 0; i < value.sl_QoS_InfoList_r16_count; ++i) {
    if (Decode_SL_QoS_Info_r16(dec, value.sl_QoS_InfoList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_TypeTxSyncList_r16_count)) { goto fail; }
if (value.sl_TypeTxSyncList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_TypeTxSyncList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_TypeTxSyncList_r16_count > 0u) {
    value.sl_TypeTxSyncList_r16_items = (SL_TypeTxSync_r16*)std::malloc((std::size_t)value.sl_TypeTxSyncList_r16_count * sizeof(SL_TypeTxSync_r16));
    if (value.sl_TypeTxSyncList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_TypeTxSyncList_r16_items, 0, (std::size_t)value.sl_TypeTxSyncList_r16_count * sizeof(SL_TypeTxSync_r16));
}
for (std::uint32_t i = 0; i < value.sl_TypeTxSyncList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
    value.sl_TypeTxSyncList_r16_items[i] = (SL_TypeTxSync_r16)tmp_value;
}
    }
    if (present_3) {
        if (Decode_SL_TxInterestedFreqList_r16(dec, value.sl_TxInterestedFreqList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_CapabilityInformationSidelink_r16.bytes = string_bytes;
        value.sl_CapabilityInformationSidelink_r16.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReq_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReq_r16(SL_TxResourceReq_r16& value)
{
    std::free(value.sl_DestinationIdentity_r16.bytes);
    value.sl_DestinationIdentity_r16.bytes = nullptr;
    value.sl_DestinationIdentity_r16.bitLength = 0;
    if (value.has_sl_RLC_ModeIndicationList_r16) {
        if (value.sl_RLC_ModeIndicationList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RLC_ModeIndicationList_r16_count; ++i) {
                Free_SL_RLC_ModeIndication_r16(value.sl_RLC_ModeIndicationList_r16_items[i]);
            }
            std::free(value.sl_RLC_ModeIndicationList_r16_items);
            value.sl_RLC_ModeIndicationList_r16_items = nullptr;
        }
        value.sl_RLC_ModeIndicationList_r16_count = 0;
    }
    if (value.has_sl_QoS_InfoList_r16) {
        if (value.sl_QoS_InfoList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_QoS_InfoList_r16_count; ++i) {
                Free_SL_QoS_Info_r16(value.sl_QoS_InfoList_r16_items[i]);
            }
            std::free(value.sl_QoS_InfoList_r16_items);
            value.sl_QoS_InfoList_r16_items = nullptr;
        }
        value.sl_QoS_InfoList_r16_count = 0;
    }
    if (value.has_sl_TypeTxSyncList_r16) {
        if (value.sl_TypeTxSyncList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_TypeTxSyncList_r16_count; ++i) {
            }
            std::free(value.sl_TypeTxSyncList_r16_items);
            value.sl_TypeTxSyncList_r16_items = nullptr;
        }
        value.sl_TypeTxSyncList_r16_count = 0;
    }
    if (value.has_sl_TxInterestedFreqList_r16) {
        Free_SL_TxInterestedFreqList_r16(value.sl_TxInterestedFreqList_r16);
    }
    if (value.has_sl_CapabilityInformationSidelink_r16) {
        std::free(value.sl_CapabilityInformationSidelink_r16.bytes);
        value.sl_CapabilityInformationSidelink_r16.bytes = nullptr;
        value.sl_CapabilityInformationSidelink_r16.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReq_v1700_ExtGroup1(Encoder& enc, const SL_TxResourceReq_v1700_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_QoS_InfoList_v1800);
    if (value.has_sl_QoS_InfoList_v1800) {
enc.WriteConstrainedLength(value.sl_QoS_InfoList_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_QoS_InfoList_v1800_count; ++i) {
    Encode_SL_QoS_Info_v1800(enc, value.sl_QoS_InfoList_v1800_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReq_v1700_ExtGroup1(Decoder& dec, SL_TxResourceReq_v1700_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_QoS_InfoList_v1800_count)) { goto fail; }
if (value.sl_QoS_InfoList_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_QoS_InfoList_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_QoS_InfoList_v1800_count > 0u) {
    value.sl_QoS_InfoList_v1800_items = (SL_QoS_Info_v1800*)std::malloc((std::size_t)value.sl_QoS_InfoList_v1800_count * sizeof(SL_QoS_Info_v1800));
    if (value.sl_QoS_InfoList_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_QoS_InfoList_v1800_items, 0, (std::size_t)value.sl_QoS_InfoList_v1800_count * sizeof(SL_QoS_Info_v1800));
}
for (std::uint32_t i = 0; i < value.sl_QoS_InfoList_v1800_count; ++i) {
    if (Decode_SL_QoS_Info_v1800(dec, value.sl_QoS_InfoList_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReq_v1700_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReq_v1700_ExtGroup1(SL_TxResourceReq_v1700_ExtGroup1& value)
{
    if (value.has_sl_QoS_InfoList_v1800) {
        if (value.sl_QoS_InfoList_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_QoS_InfoList_v1800_count; ++i) {
                Free_SL_QoS_Info_v1800(value.sl_QoS_InfoList_v1800_items[i]);
            }
            std::free(value.sl_QoS_InfoList_v1800_items);
            value.sl_QoS_InfoList_v1800_items = nullptr;
        }
        value.sl_QoS_InfoList_v1800_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReq_v1700(Encoder& enc, const SL_TxResourceReq_v1700& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_DRX_InfoFromRxList_r17);
    enc.WriteBit(value.has_sl_DRX_Indication_r17);
    if (value.has_sl_DRX_InfoFromRxList_r17) {
enc.WriteConstrainedLength(value.sl_DRX_InfoFromRxList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_DRX_InfoFromRxList_r17_count; ++i) {
    Encode_SL_DRX_ConfigUC_SemiStatic_r17(enc, value.sl_DRX_InfoFromRxList_r17_items[i]);
}
    }
    if (value.has_sl_DRX_Indication_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DRX_Indication_r17), 0, 1);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_TxResourceReq_v1700_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReq_v1700(Decoder& dec, SL_TxResourceReq_v1700& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_DRX_InfoFromRxList_r17_count)) { goto fail; }
if (value.sl_DRX_InfoFromRxList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_DRX_InfoFromRxList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_DRX_InfoFromRxList_r17_count > 0u) {
    value.sl_DRX_InfoFromRxList_r17_items = (SL_DRX_ConfigUC_SemiStatic_r17*)std::malloc((std::size_t)value.sl_DRX_InfoFromRxList_r17_count * sizeof(SL_DRX_ConfigUC_SemiStatic_r17));
    if (value.sl_DRX_InfoFromRxList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_DRX_InfoFromRxList_r17_items, 0, (std::size_t)value.sl_DRX_InfoFromRxList_r17_count * sizeof(SL_DRX_ConfigUC_SemiStatic_r17));
}
for (std::uint32_t i = 0; i < value.sl_DRX_InfoFromRxList_r17_count; ++i) {
    if (Decode_SL_DRX_ConfigUC_SemiStatic_r17(dec, value.sl_DRX_InfoFromRxList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_DRX_Indication_r17 = (SL_TxResourceReq_v1700_Sl_DRX_Indication_r17)tmp_value;
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
    if (Decode_SL_TxResourceReq_v1700_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_TxResourceReq_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReq_v1700(SL_TxResourceReq_v1700& value)
{
    if (value.has_sl_DRX_InfoFromRxList_r17) {
        if (value.sl_DRX_InfoFromRxList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_DRX_InfoFromRxList_r17_count; ++i) {
                Free_SL_DRX_ConfigUC_SemiStatic_r17(value.sl_DRX_InfoFromRxList_r17_items[i]);
            }
            std::free(value.sl_DRX_InfoFromRxList_r17_items);
            value.sl_DRX_InfoFromRxList_r17_items = nullptr;
        }
        value.sl_DRX_InfoFromRxList_r17_count = 0;
    }
    if (value.has_sl_DRX_Indication_r17) {
    }
    if (value.has_extGroup1) {
        Free_SL_TxResourceReq_v1700_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17(Encoder& enc, const SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag_subMilliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.subMilliSeconds), 1, 31);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag_milliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.milliSeconds), 0, 31);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17(Decoder& dec, SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag)root_index;
    switch (value.tag) {
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag_subMilliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.u.subMilliSeconds = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag_milliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.milliSeconds = (SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17(SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17& value)
{
    switch (value.tag) {
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag_subMilliSeconds:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag_milliSeconds:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17(Encoder& enc, const SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 19);
    switch (value.tag) {
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10), 0, 9);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20), 0, 19);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms32), 0, 31);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40), 0, 39);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms60:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms60), 0, 59);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms64), 0, 63);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms70:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms70), 0, 69);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms80), 0, 79);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms128), 0, 127);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms160), 0, 159);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms256), 0, 255);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms320), 0, 319);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms512:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms512), 0, 511);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms640), 0, 639);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1024:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1024), 0, 1023);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1280), 0, 1279);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2048:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2048), 0, 2047);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2560), 0, 2559);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms5120), 0, 5119);
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10240), 0, 10239);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17(Decoder& dec, SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 19, root_index)) {
        goto fail;
    }
    value.tag = (SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag)root_index;
    switch (value.tag) {
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.ms10 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.ms20 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.ms32 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.ms40 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms60: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 59, tmp_value)) { goto fail; }
        value.u.ms60 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ms64 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms70: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 69, tmp_value)) { goto fail; }
        value.u.ms70 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.ms80 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.ms128 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.ms160 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.ms256 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.ms320 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms512: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.u.ms512 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.ms640 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1024: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.u.ms1024 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.ms1280 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2048: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2047, tmp_value)) { goto fail; }
        value.u.ms2048 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.ms2560 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.ms5120 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.ms10240 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17(SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17& value)
{
    switch (value.tag) {
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms20:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms32:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms40:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms60:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms64:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms70:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms80:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms128:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms160:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms256:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms320:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms512:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms640:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1024:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1280:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2048:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2560:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms5120:
        break;
    case SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10240:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_DRX_ConfigUC_SemiStatic_r17(Encoder& enc, const SL_DRX_ConfigUC_SemiStatic_r17& value)
{
    (void)value;
    Encode_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17(enc, value.sl_drx_onDurationTimer_r17);
    Encode_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17(enc, value.sl_drx_CycleStartOffset_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_drx_SlotOffset_r17), 0, 31);
    return enc.Error();
}

ErrorCode Decode_SL_DRX_ConfigUC_SemiStatic_r17(Decoder& dec, SL_DRX_ConfigUC_SemiStatic_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17(dec, value.sl_drx_onDurationTimer_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17(dec, value.sl_drx_CycleStartOffset_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_drx_SlotOffset_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_ConfigUC_SemiStatic_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_ConfigUC_SemiStatic_r17(SL_DRX_ConfigUC_SemiStatic_r17& value)
{
    Free_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17(value.sl_drx_onDurationTimer_r17);
    Free_SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17(value.sl_drx_CycleStartOffset_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_RxDRX_Report_v1700(Encoder& enc, const SL_RxDRX_Report_v1700& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SL_DRX_ConfigUC_SemiStatic_r17(enc, value.sl_DRX_ConfigFromTx_r17);
    return enc.Error();
}

ErrorCode Decode_SL_RxDRX_Report_v1700(Decoder& dec, SL_RxDRX_Report_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SL_DRX_ConfigUC_SemiStatic_r17(dec, value.sl_DRX_ConfigFromTx_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RxDRX_Report_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RxDRX_Report_v1700(SL_RxDRX_Report_v1700& value)
{
    Free_SL_DRX_ConfigUC_SemiStatic_r17(value.sl_DRX_ConfigFromTx_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_RxInterestedGC_BC_Dest_r17(Encoder& enc, const SL_RxInterestedGC_BC_Dest_r17& value)
{
    (void)value;
enc.WriteConstrainedLength(value.sl_RxInterestedQoS_InfoList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RxInterestedQoS_InfoList_r17_count; ++i) {
    Encode_SL_QoS_Info_r16(enc, value.sl_RxInterestedQoS_InfoList_r17_items[i]);
}
    enc.WriteFixedBitString(value.sl_DestinationIdentity_r16.bytes, value.sl_DestinationIdentity_r16.bitLength, 24, 24);
    return enc.Error();
}

ErrorCode Decode_SL_RxInterestedGC_BC_Dest_r17(Decoder& dec, SL_RxInterestedGC_BC_Dest_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RxInterestedQoS_InfoList_r17_count)) { goto fail; }
if (value.sl_RxInterestedQoS_InfoList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RxInterestedQoS_InfoList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RxInterestedQoS_InfoList_r17_count > 0u) {
    value.sl_RxInterestedQoS_InfoList_r17_items = (SL_QoS_Info_r16*)std::malloc((std::size_t)value.sl_RxInterestedQoS_InfoList_r17_count * sizeof(SL_QoS_Info_r16));
    if (value.sl_RxInterestedQoS_InfoList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RxInterestedQoS_InfoList_r17_items, 0, (std::size_t)value.sl_RxInterestedQoS_InfoList_r17_count * sizeof(SL_QoS_Info_r16));
}
for (std::uint32_t i = 0; i < value.sl_RxInterestedQoS_InfoList_r17_count; ++i) {
    if (Decode_SL_QoS_Info_r16(dec, value.sl_RxInterestedQoS_InfoList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_DestinationIdentity_r16.bytes = string_bytes;
        value.sl_DestinationIdentity_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RxInterestedGC_BC_Dest_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RxInterestedGC_BC_Dest_r17(SL_RxInterestedGC_BC_Dest_r17& value)
{
    if (value.sl_RxInterestedQoS_InfoList_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_RxInterestedQoS_InfoList_r17_count; ++i) {
            Free_SL_QoS_Info_r16(value.sl_RxInterestedQoS_InfoList_r17_items[i]);
        }
        std::free(value.sl_RxInterestedQoS_InfoList_r17_items);
        value.sl_RxInterestedQoS_InfoList_r17_items = nullptr;
    }
    value.sl_RxInterestedQoS_InfoList_r17_count = 0;
    std::free(value.sl_DestinationIdentity_r16.bytes);
    value.sl_DestinationIdentity_r16.bytes = nullptr;
    value.sl_DestinationIdentity_r16.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReqDisc_r17(Encoder& enc, const SL_TxResourceReqDisc_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_SourceIdentityRelayUE_r17);
    enc.WriteFixedBitString(value.sl_DestinationIdentityDisc_r17.bytes, value.sl_DestinationIdentityDisc_r17.bitLength, 24, 24);
    if (value.has_sl_SourceIdentityRelayUE_r17) {
        enc.WriteFixedBitString(value.sl_SourceIdentityRelayUE_r17.bytes, value.sl_SourceIdentityRelayUE_r17.bitLength, 24, 24);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_CastTypeDisc_r17), 0, 3);
    Encode_SL_TxInterestedFreqList_r16(enc, value.sl_TxInterestedFreqListDisc_r17);
enc.WriteConstrainedLength(value.sl_TypeTxSyncListDisc_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_TypeTxSyncListDisc_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_TypeTxSyncListDisc_r17_items[i]), 0, 2);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_DiscoveryType_r17), 0, 1);
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReqDisc_r17(Decoder& dec, SL_TxResourceReqDisc_r17& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_DestinationIdentityDisc_r17.bytes = string_bytes;
        value.sl_DestinationIdentityDisc_r17.bitLength = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_SourceIdentityRelayUE_r17.bytes = string_bytes;
        value.sl_SourceIdentityRelayUE_r17.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_CastTypeDisc_r17 = (SL_TxResourceReqDisc_r17_Sl_CastTypeDisc_r17)tmp_value;
    }
    {
        if (Decode_SL_TxInterestedFreqList_r16(dec, value.sl_TxInterestedFreqListDisc_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_TypeTxSyncListDisc_r17_count)) { goto fail; }
if (value.sl_TypeTxSyncListDisc_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_TypeTxSyncListDisc_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_TypeTxSyncListDisc_r17_count > 0u) {
    value.sl_TypeTxSyncListDisc_r17_items = (SL_TypeTxSync_r16*)std::malloc((std::size_t)value.sl_TypeTxSyncListDisc_r17_count * sizeof(SL_TypeTxSync_r16));
    if (value.sl_TypeTxSyncListDisc_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_TypeTxSyncListDisc_r17_items, 0, (std::size_t)value.sl_TypeTxSyncListDisc_r17_count * sizeof(SL_TypeTxSync_r16));
}
for (std::uint32_t i = 0; i < value.sl_TypeTxSyncListDisc_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
    value.sl_TypeTxSyncListDisc_r17_items[i] = (SL_TypeTxSync_r16)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_DiscoveryType_r17 = (SL_TxResourceReqDisc_r17_Sl_DiscoveryType_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReqDisc_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReqDisc_r17(SL_TxResourceReqDisc_r17& value)
{
    std::free(value.sl_DestinationIdentityDisc_r17.bytes);
    value.sl_DestinationIdentityDisc_r17.bytes = nullptr;
    value.sl_DestinationIdentityDisc_r17.bitLength = 0;
    if (value.has_sl_SourceIdentityRelayUE_r17) {
        std::free(value.sl_SourceIdentityRelayUE_r17.bytes);
        value.sl_SourceIdentityRelayUE_r17.bytes = nullptr;
        value.sl_SourceIdentityRelayUE_r17.bitLength = 0;
    }
    Free_SL_TxInterestedFreqList_r16(value.sl_TxInterestedFreqListDisc_r17);
    if (value.sl_TypeTxSyncListDisc_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_TypeTxSyncListDisc_r17_count; ++i) {
        }
        std::free(value.sl_TypeTxSyncListDisc_r17_items);
        value.sl_TypeTxSyncListDisc_r17_items = nullptr;
    }
    value.sl_TypeTxSyncListDisc_r17_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_PagingIdentityRemoteUE_r17(Encoder& enc, const SL_PagingIdentityRemoteUE_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_fullI_RNTI_r17);
    enc.WriteFixedBitString(value.ng_5G_S_TMSI_r17.bytes, value.ng_5G_S_TMSI_r17.bitLength, 48, 48);
    if (value.has_fullI_RNTI_r17) {
        enc.WriteFixedBitString(value.fullI_RNTI_r17.bytes, value.fullI_RNTI_r17.bitLength, 40, 40);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PagingIdentityRemoteUE_r17(Decoder& dec, SL_PagingIdentityRemoteUE_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.ng_5G_S_TMSI_r17.bytes = string_bytes;
        value.ng_5G_S_TMSI_r17.bitLength = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 40)) { goto fail; }
        string_length = 40;
        value.fullI_RNTI_r17.bytes = string_bytes;
        value.fullI_RNTI_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PagingIdentityRemoteUE_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PagingIdentityRemoteUE_r17(SL_PagingIdentityRemoteUE_r17& value)
{
    std::free(value.ng_5G_S_TMSI_r17.bytes);
    value.ng_5G_S_TMSI_r17.bytes = nullptr;
    value.ng_5G_S_TMSI_r17.bitLength = 0;
    if (value.has_fullI_RNTI_r17) {
        std::free(value.fullI_RNTI_r17.bytes);
        value.fullI_RNTI_r17.bytes = nullptr;
        value.fullI_RNTI_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReqL2U2N_Relay_r17(Encoder& enc, const SL_TxResourceReqL2U2N_Relay_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_DestinationIdentityL2U2N_r17);
    enc.WriteBit(value.has_sl_LocalID_Request_r17);
    enc.WriteBit(value.has_sl_PagingIdentityRemoteUE_r17);
    enc.WriteBit(value.has_sl_CapabilityInformationSidelink_r17);
    if (value.has_sl_DestinationIdentityL2U2N_r17) {
        enc.WriteFixedBitString(value.sl_DestinationIdentityL2U2N_r17.bytes, value.sl_DestinationIdentityL2U2N_r17.bitLength, 24, 24);
    }
    Encode_SL_TxInterestedFreqList_r16(enc, value.sl_TxInterestedFreqListL2U2N_r17);
enc.WriteConstrainedLength(value.sl_TypeTxSyncListL2U2N_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_TypeTxSyncListL2U2N_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_TypeTxSyncListL2U2N_r17_items[i]), 0, 2);
}
    if (value.has_sl_LocalID_Request_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_LocalID_Request_r17), 0, 0);
    }
    if (value.has_sl_PagingIdentityRemoteUE_r17) {
        Encode_SL_PagingIdentityRemoteUE_r17(enc, value.sl_PagingIdentityRemoteUE_r17);
    }
    if (value.has_sl_CapabilityInformationSidelink_r17) {
        enc.WriteSemiConstrainedOctetString(value.sl_CapabilityInformationSidelink_r17.bytes, value.sl_CapabilityInformationSidelink_r17.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReqL2U2N_Relay_r17(Decoder& dec, SL_TxResourceReqL2U2N_Relay_r17& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_DestinationIdentityL2U2N_r17.bytes = string_bytes;
        value.sl_DestinationIdentityL2U2N_r17.bitLength = string_length;
    }
    {
        if (Decode_SL_TxInterestedFreqList_r16(dec, value.sl_TxInterestedFreqListL2U2N_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_TypeTxSyncListL2U2N_r17_count)) { goto fail; }
if (value.sl_TypeTxSyncListL2U2N_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_TypeTxSyncListL2U2N_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_TypeTxSyncListL2U2N_r17_count > 0u) {
    value.sl_TypeTxSyncListL2U2N_r17_items = (SL_TypeTxSync_r16*)std::malloc((std::size_t)value.sl_TypeTxSyncListL2U2N_r17_count * sizeof(SL_TypeTxSync_r16));
    if (value.sl_TypeTxSyncListL2U2N_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_TypeTxSyncListL2U2N_r17_items, 0, (std::size_t)value.sl_TypeTxSyncListL2U2N_r17_count * sizeof(SL_TypeTxSync_r16));
}
for (std::uint32_t i = 0; i < value.sl_TypeTxSyncListL2U2N_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
    value.sl_TypeTxSyncListL2U2N_r17_items[i] = (SL_TypeTxSync_r16)tmp_value;
}
    }
    if (present_1) {
        value.sl_LocalID_Request_r17 = (SL_TxResourceReqL2U2N_Relay_r17_Sl_LocalID_Request_r17)0;
    }
    if (present_2) {
        if (Decode_SL_PagingIdentityRemoteUE_r17(dec, value.sl_PagingIdentityRemoteUE_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_CapabilityInformationSidelink_r17.bytes = string_bytes;
        value.sl_CapabilityInformationSidelink_r17.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReqL2U2N_Relay_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReqL2U2N_Relay_r17(SL_TxResourceReqL2U2N_Relay_r17& value)
{
    if (value.has_sl_DestinationIdentityL2U2N_r17) {
        std::free(value.sl_DestinationIdentityL2U2N_r17.bytes);
        value.sl_DestinationIdentityL2U2N_r17.bytes = nullptr;
        value.sl_DestinationIdentityL2U2N_r17.bitLength = 0;
    }
    Free_SL_TxInterestedFreqList_r16(value.sl_TxInterestedFreqListL2U2N_r17);
    if (value.sl_TypeTxSyncListL2U2N_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_TypeTxSyncListL2U2N_r17_count; ++i) {
        }
        std::free(value.sl_TypeTxSyncListL2U2N_r17_items);
        value.sl_TypeTxSyncListL2U2N_r17_items = nullptr;
    }
    value.sl_TypeTxSyncListL2U2N_r17_count = 0;
    if (value.has_sl_LocalID_Request_r17) {
    }
    if (value.has_sl_PagingIdentityRemoteUE_r17) {
        Free_SL_PagingIdentityRemoteUE_r17(value.sl_PagingIdentityRemoteUE_r17);
    }
    if (value.has_sl_CapabilityInformationSidelink_r17) {
        std::free(value.sl_CapabilityInformationSidelink_r17.bytes);
        value.sl_CapabilityInformationSidelink_r17.bytes = nullptr;
        value.sl_CapabilityInformationSidelink_r17.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReqCommRelay_r17(Encoder& enc, const SL_TxResourceReqCommRelay_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_TxResourceReqCommRelay_r17_Tag_sl_TxResourceReqL2U2N_Relay_r17:
        Encode_SL_TxResourceReqL2U2N_Relay_r17(enc, value.u.sl_TxResourceReqL2U2N_Relay_r17);
        break;
    case SL_TxResourceReqCommRelay_r17_Tag_sl_TxResourceReqL3U2N_Relay_r17:
        Encode_SL_TxResourceReq_r16(enc, value.u.sl_TxResourceReqL3U2N_Relay_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReqCommRelay_r17(Decoder& dec, SL_TxResourceReqCommRelay_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_TxResourceReqCommRelay_r17_Tag)root_index;
    switch (value.tag) {
    case SL_TxResourceReqCommRelay_r17_Tag_sl_TxResourceReqL2U2N_Relay_r17: {
        if (Decode_SL_TxResourceReqL2U2N_Relay_r17(dec, value.u.sl_TxResourceReqL2U2N_Relay_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SL_TxResourceReqCommRelay_r17_Tag_sl_TxResourceReqL3U2N_Relay_r17: {
        if (Decode_SL_TxResourceReq_r16(dec, value.u.sl_TxResourceReqL3U2N_Relay_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReqCommRelay_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReqCommRelay_r17(SL_TxResourceReqCommRelay_r17& value)
{
    switch (value.tag) {
    case SL_TxResourceReqCommRelay_r17_Tag_sl_TxResourceReqL2U2N_Relay_r17:
        Free_SL_TxResourceReqL2U2N_Relay_r17(value.u.sl_TxResourceReqL2U2N_Relay_r17);
        break;
    case SL_TxResourceReqCommRelay_r17_Tag_sl_TxResourceReqL3U2N_Relay_r17:
        Free_SL_TxResourceReq_r16(value.u.sl_TxResourceReqL3U2N_Relay_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReqCommRelayInfo_r17(Encoder& enc, const SL_TxResourceReqCommRelayInfo_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_RelayDRXConfig_r17);
    if (value.has_sl_RelayDRXConfig_r17) {
        Encode_SL_TxResourceReq_v1700(enc, value.sl_RelayDRXConfig_r17);
    }
    Encode_SL_TxResourceReqCommRelay_r17(enc, value.sl_TxResourceReqCommRelay_r17);
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReqCommRelayInfo_r17(Decoder& dec, SL_TxResourceReqCommRelayInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SL_TxResourceReq_v1700(dec, value.sl_RelayDRXConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SL_TxResourceReqCommRelay_r17(dec, value.sl_TxResourceReqCommRelay_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReqCommRelayInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReqCommRelayInfo_r17(SL_TxResourceReqCommRelayInfo_r17& value)
{
    if (value.has_sl_RelayDRXConfig_r17) {
        Free_SL_TxResourceReq_v1700(value.sl_RelayDRXConfig_r17);
    }
    Free_SL_TxResourceReqCommRelay_r17(value.sl_TxResourceReqCommRelay_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_TxResourceReqL2_U2U_r18(Encoder& enc, const SL_TxResourceReqL2_U2U_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_DestinationIdentityL2_U2U_r18);
    enc.WriteBit(value.has_sl_CapabilityInformationSidelink_r18);
    enc.WriteBit(value.has_sl_U2U_InfoList_r18);
    if (value.has_sl_DestinationIdentityL2_U2U_r18) {
        enc.WriteFixedBitString(value.sl_DestinationIdentityL2_U2U_r18.bytes, value.sl_DestinationIdentityL2_U2U_r18.bitLength, 24, 24);
    }
    Encode_SL_TxInterestedFreqList_r16(enc, value.sl_TxInterestedFreqListL2_U2U_r18);
enc.WriteConstrainedLength(value.sl_TypeTxSyncListL2_U2U_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_TypeTxSyncListL2_U2U_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_TypeTxSyncListL2_U2U_r18_items[i]), 0, 2);
}
    if (value.has_sl_CapabilityInformationSidelink_r18) {
        enc.WriteSemiConstrainedOctetString(value.sl_CapabilityInformationSidelink_r18.bytes, value.sl_CapabilityInformationSidelink_r18.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_sl_U2U_InfoList_r18) {
enc.WriteConstrainedLength(value.sl_U2U_InfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_U2U_InfoList_r18_count; ++i) {
    Encode_SL_U2U_Info_r18(enc, value.sl_U2U_InfoList_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxResourceReqL2_U2U_r18(Decoder& dec, SL_TxResourceReqL2_U2U_r18& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_DestinationIdentityL2_U2U_r18.bytes = string_bytes;
        value.sl_DestinationIdentityL2_U2U_r18.bitLength = string_length;
    }
    {
        if (Decode_SL_TxInterestedFreqList_r16(dec, value.sl_TxInterestedFreqListL2_U2U_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_TypeTxSyncListL2_U2U_r18_count)) { goto fail; }
if (value.sl_TypeTxSyncListL2_U2U_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_TypeTxSyncListL2_U2U_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_TypeTxSyncListL2_U2U_r18_count > 0u) {
    value.sl_TypeTxSyncListL2_U2U_r18_items = (SL_TypeTxSync_r16*)std::malloc((std::size_t)value.sl_TypeTxSyncListL2_U2U_r18_count * sizeof(SL_TypeTxSync_r16));
    if (value.sl_TypeTxSyncListL2_U2U_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_TypeTxSyncListL2_U2U_r18_items, 0, (std::size_t)value.sl_TypeTxSyncListL2_U2U_r18_count * sizeof(SL_TypeTxSync_r16));
}
for (std::uint32_t i = 0; i < value.sl_TypeTxSyncListL2_U2U_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
    value.sl_TypeTxSyncListL2_U2U_r18_items[i] = (SL_TypeTxSync_r16)tmp_value;
}
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_CapabilityInformationSidelink_r18.bytes = string_bytes;
        value.sl_CapabilityInformationSidelink_r18.length = string_length;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_U2U_InfoList_r18_count)) { goto fail; }
if (value.sl_U2U_InfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_U2U_InfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_U2U_InfoList_r18_count > 0u) {
    value.sl_U2U_InfoList_r18_items = (SL_U2U_Info_r18*)std::malloc((std::size_t)value.sl_U2U_InfoList_r18_count * sizeof(SL_U2U_Info_r18));
    if (value.sl_U2U_InfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_U2U_InfoList_r18_items, 0, (std::size_t)value.sl_U2U_InfoList_r18_count * sizeof(SL_U2U_Info_r18));
}
for (std::uint32_t i = 0; i < value.sl_U2U_InfoList_r18_count; ++i) {
    if (Decode_SL_U2U_Info_r18(dec, value.sl_U2U_InfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxResourceReqL2_U2U_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxResourceReqL2_U2U_r18(SL_TxResourceReqL2_U2U_r18& value)
{
    if (value.has_sl_DestinationIdentityL2_U2U_r18) {
        std::free(value.sl_DestinationIdentityL2_U2U_r18.bytes);
        value.sl_DestinationIdentityL2_U2U_r18.bytes = nullptr;
        value.sl_DestinationIdentityL2_U2U_r18.bitLength = 0;
    }
    Free_SL_TxInterestedFreqList_r16(value.sl_TxInterestedFreqListL2_U2U_r18);
    if (value.sl_TypeTxSyncListL2_U2U_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_TypeTxSyncListL2_U2U_r18_count; ++i) {
        }
        std::free(value.sl_TypeTxSyncListL2_U2U_r18_items);
        value.sl_TypeTxSyncListL2_U2U_r18_items = nullptr;
    }
    value.sl_TypeTxSyncListL2_U2U_r18_count = 0;
    if (value.has_sl_CapabilityInformationSidelink_r18) {
        std::free(value.sl_CapabilityInformationSidelink_r18.bytes);
        value.sl_CapabilityInformationSidelink_r18.bytes = nullptr;
        value.sl_CapabilityInformationSidelink_r18.length = 0;
    }
    if (value.has_sl_U2U_InfoList_r18) {
        if (value.sl_U2U_InfoList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_U2U_InfoList_r18_count; ++i) {
                Free_SL_U2U_Info_r18(value.sl_U2U_InfoList_r18_items[i]);
            }
            std::free(value.sl_U2U_InfoList_r18_items);
            value.sl_U2U_InfoList_r18_items = nullptr;
        }
        value.sl_U2U_InfoList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_U2U_Info_r18_Sl_U2U_Identity_r18(Encoder& enc, const SL_U2U_Info_r18_Sl_U2U_Identity_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag_sl_TargetUE_Identity_r18:
        enc.WriteFixedBitString(value.u.sl_TargetUE_Identity_r18.bytes, value.u.sl_TargetUE_Identity_r18.bitLength, 24, 24);
        break;
    case SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag_sl_SourceUE_Identity_r18:
        enc.WriteFixedBitString(value.u.sl_SourceUE_Identity_r18.bytes, value.u.sl_SourceUE_Identity_r18.bitLength, 24, 24);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_U2U_Info_r18_Sl_U2U_Identity_r18(Decoder& dec, SL_U2U_Info_r18_Sl_U2U_Identity_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag)root_index;
    switch (value.tag) {
    case SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag_sl_TargetUE_Identity_r18: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.u.sl_TargetUE_Identity_r18.bytes = string_bytes;
        value.u.sl_TargetUE_Identity_r18.bitLength = string_length;
        break;
    }
    case SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag_sl_SourceUE_Identity_r18: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.u.sl_SourceUE_Identity_r18.bytes = string_bytes;
        value.u.sl_SourceUE_Identity_r18.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_U2U_Info_r18_Sl_U2U_Identity_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_U2U_Info_r18_Sl_U2U_Identity_r18(SL_U2U_Info_r18_Sl_U2U_Identity_r18& value)
{
    switch (value.tag) {
    case SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag_sl_TargetUE_Identity_r18:
        std::free(value.u.sl_TargetUE_Identity_r18.bytes);
        break;
    case SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag_sl_SourceUE_Identity_r18:
        std::free(value.u.sl_SourceUE_Identity_r18.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_U2U_Info_r18(Encoder& enc, const SL_U2U_Info_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_E2E_QoS_InfoList_r18);
    enc.WriteBit(value.has_sl_PerHop_QoS_InfoList_r18);
    enc.WriteBit(value.has_sl_PerSLRB_QoS_InfoList_r18);
    Encode_SL_U2U_Info_r18_Sl_U2U_Identity_r18(enc, value.sl_U2U_Identity_r18);
    if (value.has_sl_E2E_QoS_InfoList_r18) {
enc.WriteConstrainedLength(value.sl_E2E_QoS_InfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_E2E_QoS_InfoList_r18_count; ++i) {
    Encode_SL_QoS_Info_r16(enc, value.sl_E2E_QoS_InfoList_r18_items[i]);
}
    }
    if (value.has_sl_PerHop_QoS_InfoList_r18) {
enc.WriteConstrainedLength(value.sl_PerHop_QoS_InfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PerHop_QoS_InfoList_r18_count; ++i) {
    Encode_SL_SplitQoS_Info_r18(enc, value.sl_PerHop_QoS_InfoList_r18_items[i]);
}
    }
    if (value.has_sl_PerSLRB_QoS_InfoList_r18) {
enc.WriteConstrainedLength(value.sl_PerSLRB_QoS_InfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PerSLRB_QoS_InfoList_r18_count; ++i) {
    Encode_SL_PerSLRB_QoS_Info_r18(enc, value.sl_PerSLRB_QoS_InfoList_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_U2U_Info_r18(Decoder& dec, SL_U2U_Info_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    {
        if (Decode_SL_U2U_Info_r18_Sl_U2U_Identity_r18(dec, value.sl_U2U_Identity_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_E2E_QoS_InfoList_r18_count)) { goto fail; }
if (value.sl_E2E_QoS_InfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_E2E_QoS_InfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_E2E_QoS_InfoList_r18_count > 0u) {
    value.sl_E2E_QoS_InfoList_r18_items = (SL_QoS_Info_r16*)std::malloc((std::size_t)value.sl_E2E_QoS_InfoList_r18_count * sizeof(SL_QoS_Info_r16));
    if (value.sl_E2E_QoS_InfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_E2E_QoS_InfoList_r18_items, 0, (std::size_t)value.sl_E2E_QoS_InfoList_r18_count * sizeof(SL_QoS_Info_r16));
}
for (std::uint32_t i = 0; i < value.sl_E2E_QoS_InfoList_r18_count; ++i) {
    if (Decode_SL_QoS_Info_r16(dec, value.sl_E2E_QoS_InfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PerHop_QoS_InfoList_r18_count)) { goto fail; }
if (value.sl_PerHop_QoS_InfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PerHop_QoS_InfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PerHop_QoS_InfoList_r18_count > 0u) {
    value.sl_PerHop_QoS_InfoList_r18_items = (SL_SplitQoS_Info_r18*)std::malloc((std::size_t)value.sl_PerHop_QoS_InfoList_r18_count * sizeof(SL_SplitQoS_Info_r18));
    if (value.sl_PerHop_QoS_InfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PerHop_QoS_InfoList_r18_items, 0, (std::size_t)value.sl_PerHop_QoS_InfoList_r18_count * sizeof(SL_SplitQoS_Info_r18));
}
for (std::uint32_t i = 0; i < value.sl_PerHop_QoS_InfoList_r18_count; ++i) {
    if (Decode_SL_SplitQoS_Info_r18(dec, value.sl_PerHop_QoS_InfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PerSLRB_QoS_InfoList_r18_count)) { goto fail; }
if (value.sl_PerSLRB_QoS_InfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PerSLRB_QoS_InfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PerSLRB_QoS_InfoList_r18_count > 0u) {
    value.sl_PerSLRB_QoS_InfoList_r18_items = (SL_PerSLRB_QoS_Info_r18*)std::malloc((std::size_t)value.sl_PerSLRB_QoS_InfoList_r18_count * sizeof(SL_PerSLRB_QoS_Info_r18));
    if (value.sl_PerSLRB_QoS_InfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PerSLRB_QoS_InfoList_r18_items, 0, (std::size_t)value.sl_PerSLRB_QoS_InfoList_r18_count * sizeof(SL_PerSLRB_QoS_Info_r18));
}
for (std::uint32_t i = 0; i < value.sl_PerSLRB_QoS_InfoList_r18_count; ++i) {
    if (Decode_SL_PerSLRB_QoS_Info_r18(dec, value.sl_PerSLRB_QoS_InfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_U2U_Info_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_U2U_Info_r18(SL_U2U_Info_r18& value)
{
    Free_SL_U2U_Info_r18_Sl_U2U_Identity_r18(value.sl_U2U_Identity_r18);
    if (value.has_sl_E2E_QoS_InfoList_r18) {
        if (value.sl_E2E_QoS_InfoList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_E2E_QoS_InfoList_r18_count; ++i) {
                Free_SL_QoS_Info_r16(value.sl_E2E_QoS_InfoList_r18_items[i]);
            }
            std::free(value.sl_E2E_QoS_InfoList_r18_items);
            value.sl_E2E_QoS_InfoList_r18_items = nullptr;
        }
        value.sl_E2E_QoS_InfoList_r18_count = 0;
    }
    if (value.has_sl_PerHop_QoS_InfoList_r18) {
        if (value.sl_PerHop_QoS_InfoList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PerHop_QoS_InfoList_r18_count; ++i) {
                Free_SL_SplitQoS_Info_r18(value.sl_PerHop_QoS_InfoList_r18_items[i]);
            }
            std::free(value.sl_PerHop_QoS_InfoList_r18_items);
            value.sl_PerHop_QoS_InfoList_r18_items = nullptr;
        }
        value.sl_PerHop_QoS_InfoList_r18_count = 0;
    }
    if (value.has_sl_PerSLRB_QoS_InfoList_r18) {
        if (value.sl_PerSLRB_QoS_InfoList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PerSLRB_QoS_InfoList_r18_count; ++i) {
                Free_SL_PerSLRB_QoS_Info_r18(value.sl_PerSLRB_QoS_InfoList_r18_items[i]);
            }
            std::free(value.sl_PerSLRB_QoS_InfoList_r18_items);
            value.sl_PerSLRB_QoS_InfoList_r18_items = nullptr;
        }
        value.sl_PerSLRB_QoS_InfoList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_PosTxResourceReq_r18(Encoder& enc, const SL_PosTxResourceReq_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PosTxInterestedFreqList_r18);
    enc.WriteBit(value.has_sl_PosTypeTxSyncList_r18);
    enc.WriteBit(value.has_sl_PosQoS_InfoList_r18);
    enc.WriteBit(value.has_sl_CapabilityInformationSidelink_r18);
    enc.WriteFixedBitString(value.sl_PosDestinationIdentity_r18.bytes, value.sl_PosDestinationIdentity_r18.bitLength, 24, 24);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PosCastType_r18), 0, 3);
    if (value.has_sl_PosTxInterestedFreqList_r18) {
        Encode_SL_TxInterestedFreqList_r16(enc, value.sl_PosTxInterestedFreqList_r18);
    }
    if (value.has_sl_PosTypeTxSyncList_r18) {
enc.WriteConstrainedLength(value.sl_PosTypeTxSyncList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PosTypeTxSyncList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PosTypeTxSyncList_r18_items[i]), 0, 2);
}
    }
    if (value.has_sl_PosQoS_InfoList_r18) {
enc.WriteConstrainedLength(value.sl_PosQoS_InfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PosQoS_InfoList_r18_count; ++i) {
    Encode_SL_PRS_QoS_Info_r18(enc, value.sl_PosQoS_InfoList_r18_items[i]);
}
    }
    if (value.has_sl_CapabilityInformationSidelink_r18) {
        enc.WriteSemiConstrainedOctetString(value.sl_CapabilityInformationSidelink_r18.bytes, value.sl_CapabilityInformationSidelink_r18.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PosTxResourceReq_r18(Decoder& dec, SL_PosTxResourceReq_r18& value)
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
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_PosDestinationIdentity_r18.bytes = string_bytes;
        value.sl_PosDestinationIdentity_r18.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_PosCastType_r18 = (SL_PosTxResourceReq_r18_Sl_PosCastType_r18)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_TxInterestedFreqList_r16(dec, value.sl_PosTxInterestedFreqList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PosTypeTxSyncList_r18_count)) { goto fail; }
if (value.sl_PosTypeTxSyncList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PosTypeTxSyncList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PosTypeTxSyncList_r18_count > 0u) {
    value.sl_PosTypeTxSyncList_r18_items = (SL_TypeTxSync_r16*)std::malloc((std::size_t)value.sl_PosTypeTxSyncList_r18_count * sizeof(SL_TypeTxSync_r16));
    if (value.sl_PosTypeTxSyncList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PosTypeTxSyncList_r18_items, 0, (std::size_t)value.sl_PosTypeTxSyncList_r18_count * sizeof(SL_TypeTxSync_r16));
}
for (std::uint32_t i = 0; i < value.sl_PosTypeTxSyncList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
    value.sl_PosTypeTxSyncList_r18_items[i] = (SL_TypeTxSync_r16)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PosQoS_InfoList_r18_count)) { goto fail; }
if (value.sl_PosQoS_InfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PosQoS_InfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PosQoS_InfoList_r18_count > 0u) {
    value.sl_PosQoS_InfoList_r18_items = (SL_PRS_QoS_Info_r18*)std::malloc((std::size_t)value.sl_PosQoS_InfoList_r18_count * sizeof(SL_PRS_QoS_Info_r18));
    if (value.sl_PosQoS_InfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PosQoS_InfoList_r18_items, 0, (std::size_t)value.sl_PosQoS_InfoList_r18_count * sizeof(SL_PRS_QoS_Info_r18));
}
for (std::uint32_t i = 0; i < value.sl_PosQoS_InfoList_r18_count; ++i) {
    if (Decode_SL_PRS_QoS_Info_r18(dec, value.sl_PosQoS_InfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_CapabilityInformationSidelink_r18.bytes = string_bytes;
        value.sl_CapabilityInformationSidelink_r18.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PosTxResourceReq_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PosTxResourceReq_r18(SL_PosTxResourceReq_r18& value)
{
    std::free(value.sl_PosDestinationIdentity_r18.bytes);
    value.sl_PosDestinationIdentity_r18.bytes = nullptr;
    value.sl_PosDestinationIdentity_r18.bitLength = 0;
    if (value.has_sl_PosTxInterestedFreqList_r18) {
        Free_SL_TxInterestedFreqList_r16(value.sl_PosTxInterestedFreqList_r18);
    }
    if (value.has_sl_PosTypeTxSyncList_r18) {
        if (value.sl_PosTypeTxSyncList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PosTypeTxSyncList_r18_count; ++i) {
            }
            std::free(value.sl_PosTypeTxSyncList_r18_items);
            value.sl_PosTypeTxSyncList_r18_items = nullptr;
        }
        value.sl_PosTypeTxSyncList_r18_count = 0;
    }
    if (value.has_sl_PosQoS_InfoList_r18) {
        if (value.sl_PosQoS_InfoList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PosQoS_InfoList_r18_count; ++i) {
                Free_SL_PRS_QoS_Info_r18(value.sl_PosQoS_InfoList_r18_items[i]);
            }
            std::free(value.sl_PosQoS_InfoList_r18_items);
            value.sl_PosQoS_InfoList_r18_items = nullptr;
        }
        value.sl_PosQoS_InfoList_r18_count = 0;
    }
    if (value.has_sl_CapabilityInformationSidelink_r18) {
        std::free(value.sl_CapabilityInformationSidelink_r18.bytes);
        value.sl_CapabilityInformationSidelink_r18.bytes = nullptr;
        value.sl_CapabilityInformationSidelink_r18.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_PQI_r16_Sl_Non_StandardizedPQI_r16(Encoder& enc, const SL_PQI_r16_Sl_Non_StandardizedPQI_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_ResourceType_r16);
    enc.WriteBit(value.has_sl_PriorityLevel_r16);
    enc.WriteBit(value.has_sl_PacketDelayBudget_r16);
    enc.WriteBit(value.has_sl_PacketErrorRate_r16);
    enc.WriteBit(value.has_sl_AveragingWindow_r16);
    enc.WriteBit(value.has_sl_MaxDataBurstVolume_r16);
    if (value.has_sl_ResourceType_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ResourceType_r16), 0, 3);
    }
    if (value.has_sl_PriorityLevel_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityLevel_r16), 1, 8);
    }
    if (value.has_sl_PacketDelayBudget_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PacketDelayBudget_r16), 0, 1023);
    }
    if (value.has_sl_PacketErrorRate_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PacketErrorRate_r16), 0, 9);
    }
    if (value.has_sl_AveragingWindow_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_AveragingWindow_r16), 0, 4095);
    }
    if (value.has_sl_MaxDataBurstVolume_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxDataBurstVolume_r16), 0, 4095);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PQI_r16_Sl_Non_StandardizedPQI_r16(Decoder& dec, SL_PQI_r16_Sl_Non_StandardizedPQI_r16& value)
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
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_ResourceType_r16 = (SL_PQI_r16_Sl_Non_StandardizedPQI_r16_Sl_ResourceType_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_PriorityLevel_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sl_PacketDelayBudget_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.sl_PacketErrorRate_r16 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4095, tmp_value)) { goto fail; }
        value.sl_AveragingWindow_r16 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4095, tmp_value)) { goto fail; }
        value.sl_MaxDataBurstVolume_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PQI_r16_Sl_Non_StandardizedPQI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PQI_r16_Sl_Non_StandardizedPQI_r16(SL_PQI_r16_Sl_Non_StandardizedPQI_r16& value)
{
    if (value.has_sl_ResourceType_r16) {
    }
    if (value.has_sl_PriorityLevel_r16) {
    }
    if (value.has_sl_PacketDelayBudget_r16) {
    }
    if (value.has_sl_PacketErrorRate_r16) {
    }
    if (value.has_sl_AveragingWindow_r16) {
    }
    if (value.has_sl_MaxDataBurstVolume_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_PQI_r16(Encoder& enc, const SL_PQI_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_PQI_r16_Tag_sl_StandardizedPQI_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_StandardizedPQI_r16), 0, 255);
        break;
    case SL_PQI_r16_Tag_sl_Non_StandardizedPQI_r16:
        Encode_SL_PQI_r16_Sl_Non_StandardizedPQI_r16(enc, value.u.sl_Non_StandardizedPQI_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PQI_r16(Decoder& dec, SL_PQI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_PQI_r16_Tag)root_index;
    switch (value.tag) {
    case SL_PQI_r16_Tag_sl_StandardizedPQI_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.sl_StandardizedPQI_r16 = (int64_t)tmp_value;
        break;
    }
    case SL_PQI_r16_Tag_sl_Non_StandardizedPQI_r16: {
        if (Decode_SL_PQI_r16_Sl_Non_StandardizedPQI_r16(dec, value.u.sl_Non_StandardizedPQI_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PQI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PQI_r16(SL_PQI_r16& value)
{
    switch (value.tag) {
    case SL_PQI_r16_Tag_sl_StandardizedPQI_r16:
        break;
    case SL_PQI_r16_Tag_sl_Non_StandardizedPQI_r16:
        Free_SL_PQI_r16_Sl_Non_StandardizedPQI_r16(value.u.sl_Non_StandardizedPQI_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_QoS_Profile_r16(Encoder& enc, const SL_QoS_Profile_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PQI_r16);
    enc.WriteBit(value.has_sl_GFBR_r16);
    enc.WriteBit(value.has_sl_MFBR_r16);
    enc.WriteBit(value.has_sl_Range_r16);
    if (value.has_sl_PQI_r16) {
        Encode_SL_PQI_r16(enc, value.sl_PQI_r16);
    }
    if (value.has_sl_GFBR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_GFBR_r16), 0, 4000000000);
    }
    if (value.has_sl_MFBR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MFBR_r16), 0, 4000000000);
    }
    if (value.has_sl_Range_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Range_r16), 1, 1000);
    }
    return enc.Error();
}

ErrorCode Decode_SL_QoS_Profile_r16(Decoder& dec, SL_QoS_Profile_r16& value)
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
        if (Decode_SL_PQI_r16(dec, value.sl_PQI_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4000000000, tmp_value)) { goto fail; }
        value.sl_GFBR_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4000000000, tmp_value)) { goto fail; }
        value.sl_MFBR_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1000, tmp_value)) { goto fail; }
        value.sl_Range_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_QoS_Profile_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_QoS_Profile_r16(SL_QoS_Profile_r16& value)
{
    if (value.has_sl_PQI_r16) {
        Free_SL_PQI_r16(value.sl_PQI_r16);
    }
    if (value.has_sl_GFBR_r16) {
    }
    if (value.has_sl_MFBR_r16) {
    }
    if (value.has_sl_Range_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_QoS_Info_r16(Encoder& enc, const SL_QoS_Info_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_QoS_Profile_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_QoS_FlowIdentity_r16), 1, 2048);
    if (value.has_sl_QoS_Profile_r16) {
        Encode_SL_QoS_Profile_r16(enc, value.sl_QoS_Profile_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SL_QoS_Info_r16(Decoder& dec, SL_QoS_Info_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2048, tmp_value)) { goto fail; }
        value.sl_QoS_FlowIdentity_r16 = (SL_QoS_FlowIdentity_r16)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_QoS_Profile_r16(dec, value.sl_QoS_Profile_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_QoS_Info_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_QoS_Info_r16(SL_QoS_Info_r16& value)
{
    if (value.has_sl_QoS_Profile_r16) {
        Free_SL_QoS_Profile_r16(value.sl_QoS_Profile_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_QoS_Info_v1800(Encoder& enc, const SL_QoS_Info_v1800& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_TxProfile_r18);
    Encode_SL_TxInterestedFreqList_r16(enc, value.sl_TxInterestedFreqList_r18);
    if (value.has_sl_TxProfile_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TxProfile_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SL_QoS_Info_v1800(Decoder& dec, SL_QoS_Info_v1800& value)
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
        if (Decode_SL_TxInterestedFreqList_r16(dec, value.sl_TxInterestedFreqList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TxProfile_r18 = (SL_TxProfile_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_QoS_Info_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_QoS_Info_v1800(SL_QoS_Info_v1800& value)
{
    Free_SL_TxInterestedFreqList_r16(value.sl_TxInterestedFreqList_r18);
    if (value.has_sl_TxProfile_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_RLC_ModeIndication_r16_Sl_Mode_r16(Encoder& enc, const SL_RLC_ModeIndication_r16_Sl_Mode_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag_sl_AM_Mode_r16:
        (void)0;
        break;
    case SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag_sl_UM_Mode_r16:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RLC_ModeIndication_r16_Sl_Mode_r16(Decoder& dec, SL_RLC_ModeIndication_r16_Sl_Mode_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag)root_index;
    switch (value.tag) {
    case SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag_sl_AM_Mode_r16: {
        (void)0;
        break;
    }
    case SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag_sl_UM_Mode_r16: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RLC_ModeIndication_r16_Sl_Mode_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RLC_ModeIndication_r16_Sl_Mode_r16(SL_RLC_ModeIndication_r16_Sl_Mode_r16& value)
{
    switch (value.tag) {
    case SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag_sl_AM_Mode_r16:
        break;
    case SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag_sl_UM_Mode_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_RLC_ModeIndication_r16(Encoder& enc, const SL_RLC_ModeIndication_r16& value)
{
    (void)value;
    Encode_SL_RLC_ModeIndication_r16_Sl_Mode_r16(enc, value.sl_Mode_r16);
enc.WriteConstrainedLength(value.sl_QoS_InfoList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_QoS_InfoList_r16_count; ++i) {
    Encode_SL_QoS_Info_r16(enc, value.sl_QoS_InfoList_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_SL_RLC_ModeIndication_r16(Decoder& dec, SL_RLC_ModeIndication_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SL_RLC_ModeIndication_r16_Sl_Mode_r16(dec, value.sl_Mode_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_QoS_InfoList_r16_count)) { goto fail; }
if (value.sl_QoS_InfoList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_QoS_InfoList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_QoS_InfoList_r16_count > 0u) {
    value.sl_QoS_InfoList_r16_items = (SL_QoS_Info_r16*)std::malloc((std::size_t)value.sl_QoS_InfoList_r16_count * sizeof(SL_QoS_Info_r16));
    if (value.sl_QoS_InfoList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_QoS_InfoList_r16_items, 0, (std::size_t)value.sl_QoS_InfoList_r16_count * sizeof(SL_QoS_Info_r16));
}
for (std::uint32_t i = 0; i < value.sl_QoS_InfoList_r16_count; ++i) {
    if (Decode_SL_QoS_Info_r16(dec, value.sl_QoS_InfoList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RLC_ModeIndication_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RLC_ModeIndication_r16(SL_RLC_ModeIndication_r16& value)
{
    Free_SL_RLC_ModeIndication_r16_Sl_Mode_r16(value.sl_Mode_r16);
    if (value.sl_QoS_InfoList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_QoS_InfoList_r16_count; ++i) {
            Free_SL_QoS_Info_r16(value.sl_QoS_InfoList_r16_items[i]);
        }
        std::free(value.sl_QoS_InfoList_r16_items);
        value.sl_QoS_InfoList_r16_items = nullptr;
    }
    value.sl_QoS_InfoList_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_Failure_r16(Encoder& enc, const SL_Failure_r16& value)
{
    (void)value;
    enc.WriteFixedBitString(value.sl_DestinationIdentity_r16.bytes, value.sl_DestinationIdentity_r16.bitLength, 24, 24);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Failure_r16), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SL_Failure_r16(Decoder& dec, SL_Failure_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_DestinationIdentity_r16.bytes = string_bytes;
        value.sl_DestinationIdentity_r16.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_Failure_r16 = (SL_Failure_r16_Sl_Failure_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_Failure_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_Failure_r16(SL_Failure_r16& value)
{
    std::free(value.sl_DestinationIdentity_r16.bytes);
    value.sl_DestinationIdentity_r16.bytes = nullptr;
    value.sl_DestinationIdentity_r16.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_CarrierFailure_r18(Encoder& enc, const SL_CarrierFailure_r18& value)
{
    (void)value;
    enc.WriteFixedBitString(value.sl_DestinationIdentity_r18.bytes, value.sl_DestinationIdentity_r18.bitLength, 24, 24);
enc.WriteConstrainedLength(value.sl_CarrierFailure_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_CarrierFailure_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_CarrierFailure_r18_items[i]), 1, 8);
}
    return enc.Error();
}

ErrorCode Decode_SL_CarrierFailure_r18(Decoder& dec, SL_CarrierFailure_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_DestinationIdentity_r18.bytes = string_bytes;
        value.sl_DestinationIdentity_r18.bitLength = string_length;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_CarrierFailure_r18_count)) { goto fail; }
if (value.sl_CarrierFailure_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_CarrierFailure_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_CarrierFailure_r18_count > 0u) {
    value.sl_CarrierFailure_r18_items = (int64_t*)std::malloc((std::size_t)value.sl_CarrierFailure_r18_count * sizeof(int64_t));
    if (value.sl_CarrierFailure_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_CarrierFailure_r18_items, 0, (std::size_t)value.sl_CarrierFailure_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_CarrierFailure_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.sl_CarrierFailure_r18_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_CarrierFailure_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CarrierFailure_r18(SL_CarrierFailure_r18& value)
{
    std::free(value.sl_DestinationIdentity_r18.bytes);
    value.sl_DestinationIdentity_r18.bytes = nullptr;
    value.sl_DestinationIdentity_r18.bitLength = 0;
    if (value.sl_CarrierFailure_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_CarrierFailure_r18_count; ++i) {
        }
        std::free(value.sl_CarrierFailure_r18_items);
        value.sl_CarrierFailure_r18_items = nullptr;
    }
    value.sl_CarrierFailure_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_SplitQoS_Info_r18(Encoder& enc, const SL_SplitQoS_Info_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_SplitPacketDelayBudget_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_QoS_FlowIdentity_r18), 1, 2048);
    if (value.has_sl_SplitPacketDelayBudget_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SplitPacketDelayBudget_r18), 0, 1023);
    }
    return enc.Error();
}

ErrorCode Decode_SL_SplitQoS_Info_r18(Decoder& dec, SL_SplitQoS_Info_r18& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2048, tmp_value)) { goto fail; }
        value.sl_QoS_FlowIdentity_r18 = (SL_QoS_FlowIdentity_r16)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sl_SplitPacketDelayBudget_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SplitQoS_Info_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SplitQoS_Info_r18(SL_SplitQoS_Info_r18& value)
{
    if (value.has_sl_SplitPacketDelayBudget_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_PerSLRB_QoS_Info_r18(Encoder& enc, const SL_PerSLRB_QoS_Info_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_QoS_ProfilePerSLRB_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RemoteUE_SLRB_Identity_r18), 1, 512);
    if (value.has_sl_QoS_ProfilePerSLRB_r18) {
        Encode_SL_QoS_Profile_r16(enc, value.sl_QoS_ProfilePerSLRB_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PerSLRB_QoS_Info_r18(Decoder& dec, SL_PerSLRB_QoS_Info_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.sl_RemoteUE_SLRB_Identity_r18 = (SLRB_Uu_ConfigIndex_r16)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_QoS_Profile_r16(dec, value.sl_QoS_ProfilePerSLRB_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PerSLRB_QoS_Info_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PerSLRB_QoS_Info_r18(SL_PerSLRB_QoS_Info_r18& value)
{
    if (value.has_sl_QoS_ProfilePerSLRB_r18) {
        Free_SL_QoS_Profile_r16(value.sl_QoS_ProfilePerSLRB_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_PRS_QoS_Info_r18(Encoder& enc, const SL_PRS_QoS_Info_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PRS_Priority_r18);
    enc.WriteBit(value.has_sl_PRS_DelayBudget_r18);
    if (value.has_sl_PRS_Priority_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_Priority_r18), 1, 8);
    }
    if (value.has_sl_PRS_DelayBudget_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_DelayBudget_r18), 0, 1023);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PRS_QoS_Info_r18(Decoder& dec, SL_PRS_QoS_Info_r18& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_PRS_Priority_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sl_PRS_DelayBudget_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PRS_QoS_Info_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PRS_QoS_Info_r18(SL_PRS_QoS_Info_r18& value)
{
    if (value.has_sl_PRS_Priority_r18) {
    }
    if (value.has_sl_PRS_DelayBudget_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SystemInformation_IEs_NonCriticalExtension(Encoder& enc, const SystemInformation_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SystemInformation_IEs_NonCriticalExtension(Decoder& dec, SystemInformation_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SystemInformation_IEs_NonCriticalExtension(SystemInformation_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SystemInformation_IEs(Encoder& enc, const SystemInformation_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
enc.WriteConstrainedLength(value.sib_TypeAndInfo_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sib_TypeAndInfo_count; ++i) {
    Encode_SystemInformation_IEs_Sib_TypeAndInfo_Item(enc, value.sib_TypeAndInfo_items[i]);
}
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SystemInformation_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SystemInformation_IEs(Decoder& dec, SystemInformation_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sib_TypeAndInfo_count)) { goto fail; }
if (value.sib_TypeAndInfo_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sib_TypeAndInfo_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sib_TypeAndInfo_count > 0u) {
    value.sib_TypeAndInfo_items = (SystemInformation_IEs_Sib_TypeAndInfo_Item*)std::malloc((std::size_t)value.sib_TypeAndInfo_count * sizeof(SystemInformation_IEs_Sib_TypeAndInfo_Item));
    if (value.sib_TypeAndInfo_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sib_TypeAndInfo_items, 0, (std::size_t)value.sib_TypeAndInfo_count * sizeof(SystemInformation_IEs_Sib_TypeAndInfo_Item));
}
for (std::uint32_t i = 0; i < value.sib_TypeAndInfo_count; ++i) {
    if (Decode_SystemInformation_IEs_Sib_TypeAndInfo_Item(dec, value.sib_TypeAndInfo_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_SystemInformation_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SystemInformation_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SystemInformation_IEs(SystemInformation_IEs& value)
{
    if (value.sib_TypeAndInfo_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sib_TypeAndInfo_count; ++i) {
            Free_SystemInformation_IEs_Sib_TypeAndInfo_Item(value.sib_TypeAndInfo_items[i]);
        }
        std::free(value.sib_TypeAndInfo_items);
        value.sib_TypeAndInfo_items = nullptr;
    }
    value.sib_TypeAndInfo_count = 0;
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_SystemInformation_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PosSystemInformation_r16_IEs_NonCriticalExtension(Encoder& enc, const PosSystemInformation_r16_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_PosSystemInformation_r16_IEs_NonCriticalExtension(Decoder& dec, PosSystemInformation_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSystemInformation_r16_IEs_NonCriticalExtension(PosSystemInformation_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PosSystemInformation_r16_IEs(Encoder& enc, const PosSystemInformation_r16_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
enc.WriteConstrainedLength(value.posSIB_TypeAndInfo_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.posSIB_TypeAndInfo_r16_count; ++i) {
    Encode_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item(enc, value.posSIB_TypeAndInfo_r16_items[i]);
}
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_PosSystemInformation_r16_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_PosSystemInformation_r16_IEs(Decoder& dec, PosSystemInformation_r16_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.posSIB_TypeAndInfo_r16_count)) { goto fail; }
if (value.posSIB_TypeAndInfo_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.posSIB_TypeAndInfo_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.posSIB_TypeAndInfo_r16_count > 0u) {
    value.posSIB_TypeAndInfo_r16_items = (PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item*)std::malloc((std::size_t)value.posSIB_TypeAndInfo_r16_count * sizeof(PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item));
    if (value.posSIB_TypeAndInfo_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.posSIB_TypeAndInfo_r16_items, 0, (std::size_t)value.posSIB_TypeAndInfo_r16_count * sizeof(PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item));
}
for (std::uint32_t i = 0; i < value.posSIB_TypeAndInfo_r16_count; ++i) {
    if (Decode_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item(dec, value.posSIB_TypeAndInfo_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_PosSystemInformation_r16_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSystemInformation_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSystemInformation_r16_IEs(PosSystemInformation_r16_IEs& value)
{
    if (value.posSIB_TypeAndInfo_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.posSIB_TypeAndInfo_r16_count; ++i) {
            Free_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item(value.posSIB_TypeAndInfo_r16_items[i]);
        }
        std::free(value.posSIB_TypeAndInfo_r16_items);
        value.posSIB_TypeAndInfo_r16_items = nullptr;
    }
    value.posSIB_TypeAndInfo_r16_count = 0;
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_PosSystemInformation_r16_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(Encoder& enc, const SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(Decoder& dec, SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SystemInformation_CriticalExtensionsFuture_r16(Encoder& enc, const SystemInformation_CriticalExtensionsFuture_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SystemInformation_CriticalExtensionsFuture_r16_Tag_posSystemInformation_r16:
        Encode_PosSystemInformation_r16_IEs(enc, value.u.posSystemInformation_r16);
        break;
    case SystemInformation_CriticalExtensionsFuture_r16_Tag_criticalExtensionsFuture:
        Encode_SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SystemInformation_CriticalExtensionsFuture_r16(Decoder& dec, SystemInformation_CriticalExtensionsFuture_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SystemInformation_CriticalExtensionsFuture_r16_Tag)root_index;
    switch (value.tag) {
    case SystemInformation_CriticalExtensionsFuture_r16_Tag_posSystemInformation_r16: {
        if (Decode_PosSystemInformation_r16_IEs(dec, value.u.posSystemInformation_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SystemInformation_CriticalExtensionsFuture_r16_Tag_criticalExtensionsFuture: {
        if (Decode_SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SystemInformation_CriticalExtensionsFuture_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SystemInformation_CriticalExtensionsFuture_r16(SystemInformation_CriticalExtensionsFuture_r16& value)
{
    switch (value.tag) {
    case SystemInformation_CriticalExtensionsFuture_r16_Tag_posSystemInformation_r16:
        Free_PosSystemInformation_r16_IEs(value.u.posSystemInformation_r16);
        break;
    case SystemInformation_CriticalExtensionsFuture_r16_Tag_criticalExtensionsFuture:
        Free_SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SystemInformation_CriticalExtensions(Encoder& enc, const SystemInformation_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SystemInformation_CriticalExtensions_Tag_systemInformation:
        Encode_SystemInformation_IEs(enc, value.u.systemInformation);
        break;
    case SystemInformation_CriticalExtensions_Tag_criticalExtensionsFuture_r16:
        Encode_SystemInformation_CriticalExtensionsFuture_r16(enc, value.u.criticalExtensionsFuture_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SystemInformation_CriticalExtensions(Decoder& dec, SystemInformation_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SystemInformation_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case SystemInformation_CriticalExtensions_Tag_systemInformation: {
        if (Decode_SystemInformation_IEs(dec, value.u.systemInformation) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SystemInformation_CriticalExtensions_Tag_criticalExtensionsFuture_r16: {
        if (Decode_SystemInformation_CriticalExtensionsFuture_r16(dec, value.u.criticalExtensionsFuture_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SystemInformation_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SystemInformation_CriticalExtensions(SystemInformation_CriticalExtensions& value)
{
    switch (value.tag) {
    case SystemInformation_CriticalExtensions_Tag_systemInformation:
        Free_SystemInformation_IEs(value.u.systemInformation);
        break;
    case SystemInformation_CriticalExtensions_Tag_criticalExtensionsFuture_r16:
        Free_SystemInformation_CriticalExtensionsFuture_r16(value.u.criticalExtensionsFuture_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SystemInformation(Encoder& enc, const SystemInformation& value)
{
    (void)value;
    Encode_SystemInformation_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_SystemInformation(Decoder& dec, SystemInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SystemInformation_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SystemInformation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SystemInformation(SystemInformation& value)
{
    Free_SystemInformation_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DelayBudgetReport(Encoder& enc, const DelayBudgetReport& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 1) {
        if (choice_index >= 1) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 1));
        Encoder sub;
        switch (value.tag) {
        default:
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        if (sub.Error() != ErrorCode_Ok) {
            return enc.Fail(sub.Error());
        }
        enc.WriteOpenType(sub.Finish());
        return enc.Error();
    }
    enc.WriteBit(false);
    switch (value.tag) {
    case DelayBudgetReport_Tag_type1:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.type1), 0, 16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DelayBudgetReport(Decoder& dec, DelayBudgetReport& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool choice_extension = false;
    if (!dec.ReadBit(choice_extension)) { goto fail; }
    if (choice_extension) {
        std::uint32_t extension_index = 0;
        if (!dec.ReadNormallySmallNonNegative(extension_index)) {
            goto fail;
        }
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        value.tag = (DelayBudgetReport_Tag)(1 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        default:
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
        if (!sub.CheckOpenTypeEnd()) {
            dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        return dec.Error();
    }
    value.tag = (DelayBudgetReport_Tag)0;
    switch (value.tag) {
    case DelayBudgetReport_Tag_type1: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 16, tmp_value)) { goto fail; }
        value.u.type1 = (DelayBudgetReport_Type1)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DelayBudgetReport(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DelayBudgetReport(DelayBudgetReport& value)
{
    switch (value.tag) {
    case DelayBudgetReport_Tag_type1:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ReducedMaxBW_FRx_r16(Encoder& enc, const ReducedMaxBW_FRx_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedBW_DL_r16), 0, 11);
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedBW_UL_r16), 0, 11);
    return enc.Error();
}

ErrorCode Decode_ReducedMaxBW_FRx_r16(Decoder& dec, ReducedMaxBW_FRx_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.reducedBW_DL_r16 = (ReducedAggregatedBandwidth)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.reducedBW_UL_r16 = (ReducedAggregatedBandwidth)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReducedMaxBW_FRx_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReducedMaxBW_FRx_r16(ReducedMaxBW_FRx_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ReducedMaxCCs_r16(Encoder& enc, const ReducedMaxCCs_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedCCsDL_r16), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedCCsUL_r16), 0, 31);
    return enc.Error();
}

ErrorCode Decode_ReducedMaxCCs_r16(Decoder& dec, ReducedMaxCCs_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.reducedCCsDL_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.reducedCCsUL_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReducedMaxCCs_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReducedMaxCCs_r16(ReducedMaxCCs_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_OverheatingAssistance_ReducedMaxMIMO_LayersFR1(Encoder& enc, const OverheatingAssistance_ReducedMaxMIMO_LayersFR1& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR1_DL), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR1_UL), 0, 2);
    return enc.Error();
}

ErrorCode Decode_OverheatingAssistance_ReducedMaxMIMO_LayersFR1(Decoder& dec, OverheatingAssistance_ReducedMaxMIMO_LayersFR1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR1_DL = (MIMO_LayersDL)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR1_UL = (MIMO_LayersUL)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OverheatingAssistance_ReducedMaxMIMO_LayersFR1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OverheatingAssistance_ReducedMaxMIMO_LayersFR1(OverheatingAssistance_ReducedMaxMIMO_LayersFR1& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_OverheatingAssistance_ReducedMaxMIMO_LayersFR2(Encoder& enc, const OverheatingAssistance_ReducedMaxMIMO_LayersFR2& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR2_DL), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR2_UL), 0, 2);
    return enc.Error();
}

ErrorCode Decode_OverheatingAssistance_ReducedMaxMIMO_LayersFR2(Decoder& dec, OverheatingAssistance_ReducedMaxMIMO_LayersFR2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR2_DL = (MIMO_LayersDL)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR2_UL = (MIMO_LayersUL)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OverheatingAssistance_ReducedMaxMIMO_LayersFR2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OverheatingAssistance_ReducedMaxMIMO_LayersFR2(OverheatingAssistance_ReducedMaxMIMO_LayersFR2& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_OverheatingAssistance(Encoder& enc, const OverheatingAssistance& value)
{
    (void)value;
    enc.WriteBit(value.has_reducedMaxCCs);
    enc.WriteBit(value.has_reducedMaxBW_FR1);
    enc.WriteBit(value.has_reducedMaxBW_FR2);
    enc.WriteBit(value.has_reducedMaxMIMO_LayersFR1);
    enc.WriteBit(value.has_reducedMaxMIMO_LayersFR2);
    if (value.has_reducedMaxCCs) {
        Encode_ReducedMaxCCs_r16(enc, value.reducedMaxCCs);
    }
    if (value.has_reducedMaxBW_FR1) {
        Encode_ReducedMaxBW_FRx_r16(enc, value.reducedMaxBW_FR1);
    }
    if (value.has_reducedMaxBW_FR2) {
        Encode_ReducedMaxBW_FRx_r16(enc, value.reducedMaxBW_FR2);
    }
    if (value.has_reducedMaxMIMO_LayersFR1) {
        Encode_OverheatingAssistance_ReducedMaxMIMO_LayersFR1(enc, value.reducedMaxMIMO_LayersFR1);
    }
    if (value.has_reducedMaxMIMO_LayersFR2) {
        Encode_OverheatingAssistance_ReducedMaxMIMO_LayersFR2(enc, value.reducedMaxMIMO_LayersFR2);
    }
    return enc.Error();
}

ErrorCode Decode_OverheatingAssistance(Decoder& dec, OverheatingAssistance& value)
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
        if (Decode_ReducedMaxCCs_r16(dec, value.reducedMaxCCs) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ReducedMaxBW_FRx_r16(dec, value.reducedMaxBW_FR1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_ReducedMaxBW_FRx_r16(dec, value.reducedMaxBW_FR2) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_OverheatingAssistance_ReducedMaxMIMO_LayersFR1(dec, value.reducedMaxMIMO_LayersFR1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_OverheatingAssistance_ReducedMaxMIMO_LayersFR2(dec, value.reducedMaxMIMO_LayersFR2) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_OverheatingAssistance(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OverheatingAssistance(OverheatingAssistance& value)
{
    if (value.has_reducedMaxCCs) {
        Free_ReducedMaxCCs_r16(value.reducedMaxCCs);
    }
    if (value.has_reducedMaxBW_FR1) {
        Free_ReducedMaxBW_FRx_r16(value.reducedMaxBW_FR1);
    }
    if (value.has_reducedMaxBW_FR2) {
        Free_ReducedMaxBW_FRx_r16(value.reducedMaxBW_FR2);
    }
    if (value.has_reducedMaxMIMO_LayersFR1) {
        Free_OverheatingAssistance_ReducedMaxMIMO_LayersFR1(value.reducedMaxMIMO_LayersFR1);
    }
    if (value.has_reducedMaxMIMO_LayersFR2) {
        Free_OverheatingAssistance_ReducedMaxMIMO_LayersFR2(value.reducedMaxMIMO_LayersFR2);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
