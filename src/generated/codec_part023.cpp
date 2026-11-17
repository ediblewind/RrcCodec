/* ============================================================================
 * src/generated/codec_part023.cpp — 生成的编解码函数
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

ErrorCode Encode_UAC_BarringInfoSet(Encoder& enc, const UAC_BarringInfoSet& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.uac_BarringFactor), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.uac_BarringTime), 0, 7);
    enc.WriteFixedBitString(value.uac_BarringForAccessIdentity.bytes, value.uac_BarringForAccessIdentity.bitLength, 7, 7);
    return enc.Error();
}

ErrorCode Decode_UAC_BarringInfoSet(Decoder& dec, UAC_BarringInfoSet& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.uac_BarringFactor = (UAC_BarringInfoSet_Uac_BarringFactor)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.uac_BarringTime = (UAC_BarringInfoSet_Uac_BarringTime)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 7)) { goto fail; }
        string_length = 7;
        value.uac_BarringForAccessIdentity.bytes = string_bytes;
        value.uac_BarringForAccessIdentity.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UAC_BarringInfoSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UAC_BarringInfoSet(UAC_BarringInfoSet& value)
{
    std::free(value.uac_BarringForAccessIdentity.bytes);
    value.uac_BarringForAccessIdentity.bytes = nullptr;
    value.uac_BarringForAccessIdentity.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UAC_BarringInfoSet_v1700(Encoder& enc, const UAC_BarringInfoSet_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_uac_BarringFactorForAI3_r17);
    if (value.has_uac_BarringFactorForAI3_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uac_BarringFactorForAI3_r17), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_UAC_BarringInfoSet_v1700(Decoder& dec, UAC_BarringInfoSet_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.uac_BarringFactorForAI3_r17 = (UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UAC_BarringInfoSet_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UAC_BarringInfoSet_v1700(UAC_BarringInfoSet_v1700& value)
{
    if (value.has_uac_BarringFactorForAI3_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UAC_BarringPerCat(Encoder& enc, const UAC_BarringPerCat& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.accessCategory), 1, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.uac_barringInfoSetIndex), 1, 8);
    return enc.Error();
}

ErrorCode Decode_UAC_BarringPerCat(Decoder& dec, UAC_BarringPerCat& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 63, tmp_value)) { goto fail; }
        value.accessCategory = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.uac_barringInfoSetIndex = (UAC_BarringInfoSetIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UAC_BarringPerCat(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UAC_BarringPerCat(UAC_BarringPerCat& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList(Encoder& enc, const UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList& value)
{
    (void)value;
    if (value.count != 63u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 8);
        }
    }
    return enc.Error();
}

ErrorCode Decode_UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList(Decoder& dec, UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 63u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UAC_BarringInfoSetIndex*)std::malloc((std::size_t)value.count * sizeof(UAC_BarringInfoSetIndex));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_BarringInfoSetIndex));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.items[i] = (UAC_BarringInfoSetIndex)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList(UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UAC_BarringPerPLMN_Uac_ACBarringListType(Encoder& enc, const UAC_BarringPerPLMN_Uac_ACBarringListType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UAC_BarringPerPLMN_Uac_ACBarringListType_Tag_uac_ImplicitACBarringList:
        Encode_UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList(enc, value.u.uac_ImplicitACBarringList);
        break;
    case UAC_BarringPerPLMN_Uac_ACBarringListType_Tag_uac_ExplicitACBarringList:
        Encode_UAC_BarringPerCatList(enc, value.u.uac_ExplicitACBarringList);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UAC_BarringPerPLMN_Uac_ACBarringListType(Decoder& dec, UAC_BarringPerPLMN_Uac_ACBarringListType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UAC_BarringPerPLMN_Uac_ACBarringListType_Tag)root_index;
    switch (value.tag) {
    case UAC_BarringPerPLMN_Uac_ACBarringListType_Tag_uac_ImplicitACBarringList: {
        if (Decode_UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList(dec, value.u.uac_ImplicitACBarringList) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UAC_BarringPerPLMN_Uac_ACBarringListType_Tag_uac_ExplicitACBarringList: {
        if (Decode_UAC_BarringPerCatList(dec, value.u.uac_ExplicitACBarringList) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UAC_BarringPerPLMN_Uac_ACBarringListType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UAC_BarringPerPLMN_Uac_ACBarringListType(UAC_BarringPerPLMN_Uac_ACBarringListType& value)
{
    switch (value.tag) {
    case UAC_BarringPerPLMN_Uac_ACBarringListType_Tag_uac_ImplicitACBarringList:
        Free_UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList(value.u.uac_ImplicitACBarringList);
        break;
    case UAC_BarringPerPLMN_Uac_ACBarringListType_Tag_uac_ExplicitACBarringList:
        Free_UAC_BarringPerCatList(value.u.uac_ExplicitACBarringList);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UAC_BarringPerPLMN(Encoder& enc, const UAC_BarringPerPLMN& value)
{
    (void)value;
    enc.WriteBit(value.has_uac_ACBarringListType);
    enc.WriteConstrainedInteger((std::int64_t)(value.plmn_IdentityIndex), 1, 12);
    if (value.has_uac_ACBarringListType) {
        Encode_UAC_BarringPerPLMN_Uac_ACBarringListType(enc, value.uac_ACBarringListType);
    }
    return enc.Error();
}

ErrorCode Decode_UAC_BarringPerPLMN(Decoder& dec, UAC_BarringPerPLMN& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 12, tmp_value)) { goto fail; }
        value.plmn_IdentityIndex = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_UAC_BarringPerPLMN_Uac_ACBarringListType(dec, value.uac_ACBarringListType) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UAC_BarringPerPLMN(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UAC_BarringPerPLMN(UAC_BarringPerPLMN& value)
{
    if (value.has_uac_ACBarringListType) {
        Free_UAC_BarringPerPLMN_Uac_ACBarringListType(value.uac_ACBarringListType);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ExcessDelay_DRB_IdentityInfo_r17(Encoder& enc, const ExcessDelay_DRB_IdentityInfo_r17& value)
{
    (void)value;
enc.WriteConstrainedLength(value.drb_IdentityList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.drb_IdentityList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.drb_IdentityList_items[i]), 1, 32);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.delayThreshold), 0, 18);
    return enc.Error();
}

ErrorCode Decode_ExcessDelay_DRB_IdentityInfo_r17(Decoder& dec, ExcessDelay_DRB_IdentityInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.drb_IdentityList_count)) { goto fail; }
if (value.drb_IdentityList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.drb_IdentityList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.drb_IdentityList_count > 0u) {
    value.drb_IdentityList_items = (DRB_Identity*)std::malloc((std::size_t)value.drb_IdentityList_count * sizeof(DRB_Identity));
    if (value.drb_IdentityList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.drb_IdentityList_items, 0, (std::size_t)value.drb_IdentityList_count * sizeof(DRB_Identity));
}
for (std::uint32_t i = 0; i < value.drb_IdentityList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.drb_IdentityList_items[i] = (DRB_Identity)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 18, tmp_value)) { goto fail; }
        value.delayThreshold = (ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ExcessDelay_DRB_IdentityInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ExcessDelay_DRB_IdentityInfo_r17(ExcessDelay_DRB_IdentityInfo_r17& value)
{
    if (value.drb_IdentityList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.drb_IdentityList_count; ++i) {
        }
        std::free(value.drb_IdentityList_items);
        value.drb_IdentityList_items = nullptr;
    }
    value.drb_IdentityList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16(Encoder& enc, const CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_timeDurationForCI_r16);
    if (value.has_timeDurationForCI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeDurationForCI_r16), 0, 3);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.timeGranularityForCI_r16), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.frequencyRegionForCI_r16), 0, 37949);
    enc.WriteConstrainedInteger((std::int64_t)(value.deltaOffset_r16), 0, 2);
    return enc.Error();
}

ErrorCode Decode_CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16(Decoder& dec, CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.timeDurationForCI_r16 = (CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeDurationForCI_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.timeGranularityForCI_r16 = (CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 37949, tmp_value)) { goto fail; }
        value.frequencyRegionForCI_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.deltaOffset_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16(CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16& value)
{
    if (value.has_timeDurationForCI_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CI_ConfigurationPerServingCell_r16(Encoder& enc, const CI_ConfigurationPerServingCell_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_positionInDCI_ForSUL_r16);
    enc.WriteBit(value.has_uplinkCancellationPriority_v1610);
    enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI_r16), 0, 125);
    if (value.has_positionInDCI_ForSUL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI_ForSUL_r16), 0, 125);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.ci_PayloadSize_r16), 0, 15);
    Encode_CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16(enc, value.timeFrequencyRegion_r16);
    if (value.has_uplinkCancellationPriority_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkCancellationPriority_v1610), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CI_ConfigurationPerServingCell_r16(Decoder& dec, CI_ConfigurationPerServingCell_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 125, tmp_value)) { goto fail; }
        value.positionInDCI_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 125, tmp_value)) { goto fail; }
        value.positionInDCI_ForSUL_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ci_PayloadSize_r16 = (CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16)tmp_value;
    }
    {
        if (Decode_CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16(dec, value.timeFrequencyRegion_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.uplinkCancellationPriority_v1610 = (CI_ConfigurationPerServingCell_r16_UplinkCancellationPriority_v1610)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CI_ConfigurationPerServingCell_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CI_ConfigurationPerServingCell_r16(CI_ConfigurationPerServingCell_r16& value)
{
    if (value.has_positionInDCI_ForSUL_r16) {
    }
    Free_CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16(value.timeFrequencyRegion_r16);
    if (value.has_uplinkCancellationPriority_v1610) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_P0AlphaSet_r17(Encoder& enc, const P0AlphaSet_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_p0_r17);
    enc.WriteBit(value.has_alpha_r17);
    if (value.has_p0_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p0_r17), -16, 15);
    }
    if (value.has_alpha_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.alpha_r17), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.closedLoopIndex_r17), 0, 1);
    return enc.Error();
}

ErrorCode Decode_P0AlphaSet_r17(Decoder& dec, P0AlphaSet_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.p0_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.alpha_r17 = (Alpha)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.closedLoopIndex_r17 = (P0AlphaSet_r17_ClosedLoopIndex_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_P0AlphaSet_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_P0AlphaSet_r17(P0AlphaSet_r17& value)
{
    if (value.has_p0_r17) {
    }
    if (value.has_alpha_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Uplink_powerControl_r17(Encoder& enc, const Uplink_powerControl_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_p0AlphaSetforPUSCH_r17);
    enc.WriteBit(value.has_p0AlphaSetforPUCCH_r17);
    enc.WriteBit(value.has_p0AlphaSetforSRS_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.ul_powercontrolId_r17), 1, 64);
    if (value.has_p0AlphaSetforPUSCH_r17) {
        Encode_P0AlphaSet_r17(enc, value.p0AlphaSetforPUSCH_r17);
    }
    if (value.has_p0AlphaSetforPUCCH_r17) {
        Encode_P0AlphaSet_r17(enc, value.p0AlphaSetforPUCCH_r17);
    }
    if (value.has_p0AlphaSetforSRS_r17) {
        Encode_P0AlphaSet_r17(enc, value.p0AlphaSetforSRS_r17);
    }
    return enc.Error();
}

ErrorCode Decode_Uplink_powerControl_r17(Decoder& dec, Uplink_powerControl_r17& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.ul_powercontrolId_r17 = (Uplink_powerControlId_r17)tmp_value;
    }
    if (present_0) {
        if (Decode_P0AlphaSet_r17(dec, value.p0AlphaSetforPUSCH_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_P0AlphaSet_r17(dec, value.p0AlphaSetforPUCCH_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_P0AlphaSet_r17(dec, value.p0AlphaSetforSRS_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Uplink_powerControl_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Uplink_powerControl_r17(Uplink_powerControl_r17& value)
{
    if (value.has_p0AlphaSetforPUSCH_r17) {
        Free_P0AlphaSet_r17(value.p0AlphaSetforPUSCH_r17);
    }
    if (value.has_p0AlphaSetforPUCCH_r17) {
        Free_P0AlphaSet_r17(value.p0AlphaSetforPUCCH_r17);
    }
    if (value.has_p0AlphaSetforSRS_r17) {
        Free_P0AlphaSet_r17(value.p0AlphaSetforSRS_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Uu_RelayRLC_ChannelConfig_r17(Encoder& enc, const Uu_RelayRLC_ChannelConfig_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_uu_LogicalChannelIdentity_r17);
    enc.WriteBit(value.has_reestablishRLC_r17);
    enc.WriteBit(value.has_rlc_Config_r17);
    enc.WriteBit(value.has_mac_LogicalChannelConfig_r17);
    if (value.has_uu_LogicalChannelIdentity_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uu_LogicalChannelIdentity_r17), 1, 32);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.uu_RelayRLC_ChannelID_r17), 1, 32);
    if (value.has_reestablishRLC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reestablishRLC_r17), 0, 0);
    }
    if (value.has_rlc_Config_r17) {
        Encode_RLC_Config(enc, value.rlc_Config_r17);
    }
    if (value.has_mac_LogicalChannelConfig_r17) {
        Encode_LogicalChannelConfig(enc, value.mac_LogicalChannelConfig_r17);
    }
    return enc.Error();
}

ErrorCode Decode_Uu_RelayRLC_ChannelConfig_r17(Decoder& dec, Uu_RelayRLC_ChannelConfig_r17& value)
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
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.uu_LogicalChannelIdentity_r17 = (LogicalChannelIdentity)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.uu_RelayRLC_ChannelID_r17 = (Uu_RelayRLC_ChannelID_r17)tmp_value;
    }
    if (present_1) {
        value.reestablishRLC_r17 = (Uu_RelayRLC_ChannelConfig_r17_ReestablishRLC_r17)0;
    }
    if (present_2) {
        if (Decode_RLC_Config(dec, value.rlc_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_LogicalChannelConfig(dec, value.mac_LogicalChannelConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Uu_RelayRLC_ChannelConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Uu_RelayRLC_ChannelConfig_r17(Uu_RelayRLC_ChannelConfig_r17& value)
{
    if (value.has_uu_LogicalChannelIdentity_r17) {
    }
    if (value.has_reestablishRLC_r17) {
    }
    if (value.has_rlc_Config_r17) {
        Free_RLC_Config(value.rlc_Config_r17);
    }
    if (value.has_mac_LogicalChannelConfig_r17) {
        Free_LogicalChannelConfig(value.mac_LogicalChannelConfig_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkTxDirectCurrentCell_ExtGroup1(Encoder& enc, const UplinkTxDirectCurrentCell_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_uplinkDirectCurrentBWP_SUL);
    if (value.has_uplinkDirectCurrentBWP_SUL) {
enc.WriteConstrainedLength(value.uplinkDirectCurrentBWP_SUL_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplinkDirectCurrentBWP_SUL_count; ++i) {
    Encode_UplinkTxDirectCurrentBWP(enc, value.uplinkDirectCurrentBWP_SUL_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxDirectCurrentCell_ExtGroup1(Decoder& dec, UplinkTxDirectCurrentCell_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uplinkDirectCurrentBWP_SUL_count)) { goto fail; }
if (value.uplinkDirectCurrentBWP_SUL_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplinkDirectCurrentBWP_SUL_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplinkDirectCurrentBWP_SUL_count > 0u) {
    value.uplinkDirectCurrentBWP_SUL_items = (UplinkTxDirectCurrentBWP*)std::malloc((std::size_t)value.uplinkDirectCurrentBWP_SUL_count * sizeof(UplinkTxDirectCurrentBWP));
    if (value.uplinkDirectCurrentBWP_SUL_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplinkDirectCurrentBWP_SUL_items, 0, (std::size_t)value.uplinkDirectCurrentBWP_SUL_count * sizeof(UplinkTxDirectCurrentBWP));
}
for (std::uint32_t i = 0; i < value.uplinkDirectCurrentBWP_SUL_count; ++i) {
    if (Decode_UplinkTxDirectCurrentBWP(dec, value.uplinkDirectCurrentBWP_SUL_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxDirectCurrentCell_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxDirectCurrentCell_ExtGroup1(UplinkTxDirectCurrentCell_ExtGroup1& value)
{
    if (value.has_uplinkDirectCurrentBWP_SUL) {
        if (value.uplinkDirectCurrentBWP_SUL_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uplinkDirectCurrentBWP_SUL_count; ++i) {
                Free_UplinkTxDirectCurrentBWP(value.uplinkDirectCurrentBWP_SUL_items[i]);
            }
            std::free(value.uplinkDirectCurrentBWP_SUL_items);
            value.uplinkDirectCurrentBWP_SUL_items = nullptr;
        }
        value.uplinkDirectCurrentBWP_SUL_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkTxDirectCurrentCell(Encoder& enc, const UplinkTxDirectCurrentCell& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.servCellIndex), 0, 31);
enc.WriteConstrainedLength(value.uplinkDirectCurrentBWP_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplinkDirectCurrentBWP_count; ++i) {
    Encode_UplinkTxDirectCurrentBWP(enc, value.uplinkDirectCurrentBWP_items[i]);
}
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_UplinkTxDirectCurrentCell_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxDirectCurrentCell(Decoder& dec, UplinkTxDirectCurrentCell& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servCellIndex = (ServCellIndex)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.uplinkDirectCurrentBWP_count)) { goto fail; }
if (value.uplinkDirectCurrentBWP_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplinkDirectCurrentBWP_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplinkDirectCurrentBWP_count > 0u) {
    value.uplinkDirectCurrentBWP_items = (UplinkTxDirectCurrentBWP*)std::malloc((std::size_t)value.uplinkDirectCurrentBWP_count * sizeof(UplinkTxDirectCurrentBWP));
    if (value.uplinkDirectCurrentBWP_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplinkDirectCurrentBWP_items, 0, (std::size_t)value.uplinkDirectCurrentBWP_count * sizeof(UplinkTxDirectCurrentBWP));
}
for (std::uint32_t i = 0; i < value.uplinkDirectCurrentBWP_count; ++i) {
    if (Decode_UplinkTxDirectCurrentBWP(dec, value.uplinkDirectCurrentBWP_items[i]) != ErrorCode_Ok) { goto fail; }
}
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
    if (Decode_UplinkTxDirectCurrentCell_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_UplinkTxDirectCurrentCell(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxDirectCurrentCell(UplinkTxDirectCurrentCell& value)
{
    if (value.uplinkDirectCurrentBWP_items != nullptr) {
        for (std::uint32_t i = 0; i < value.uplinkDirectCurrentBWP_count; ++i) {
            Free_UplinkTxDirectCurrentBWP(value.uplinkDirectCurrentBWP_items[i]);
        }
        std::free(value.uplinkDirectCurrentBWP_items);
        value.uplinkDirectCurrentBWP_items = nullptr;
    }
    value.uplinkDirectCurrentBWP_count = 0;
    if (value.has_extGroup1) {
        Free_UplinkTxDirectCurrentCell_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkTxDirectCurrentBWP(Encoder& enc, const UplinkTxDirectCurrentBWP& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.bwp_Id), 0, 4);
    enc.WriteBool(value.shift7dot5kHz);
    enc.WriteConstrainedInteger((std::int64_t)(value.txDirectCurrentLocation), 0, 3301);
    return enc.Error();
}

ErrorCode Decode_UplinkTxDirectCurrentBWP(Decoder& dec, UplinkTxDirectCurrentBWP& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.bwp_Id = (BWP_Id)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.shift7dot5kHz = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3301, tmp_value)) { goto fail; }
        value.txDirectCurrentLocation = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxDirectCurrentBWP(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxDirectCurrentBWP(UplinkTxDirectCurrentBWP& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DefaultDC_Location_r17(Encoder& enc, const DefaultDC_Location_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case DefaultDC_Location_r17_Tag_ul:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ul), 0, 3);
        break;
    case DefaultDC_Location_r17_Tag_dl:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.dl), 0, 3);
        break;
    case DefaultDC_Location_r17_Tag_ulAndDL:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ulAndDL), 0, 3);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DefaultDC_Location_r17(Decoder& dec, DefaultDC_Location_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (DefaultDC_Location_r17_Tag)root_index;
    switch (value.tag) {
    case DefaultDC_Location_r17_Tag_ul: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.ul = (FrequencyComponent_r17)tmp_value;
        break;
    }
    case DefaultDC_Location_r17_Tag_dl: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.dl = (FrequencyComponent_r17)tmp_value;
        break;
    }
    case DefaultDC_Location_r17_Tag_ulAndDL: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.ulAndDL = (FrequencyComponent_r17)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DefaultDC_Location_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DefaultDC_Location_r17(DefaultDC_Location_r17& value)
{
    switch (value.tag) {
    case DefaultDC_Location_r17_Tag_ul:
        break;
    case DefaultDC_Location_r17_Tag_dl:
        break;
    case DefaultDC_Location_r17_Tag_ulAndDL:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_OffsetValue_r17(Encoder& enc, const OffsetValue_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.offsetValue_r17), -20000, 20000);
    enc.WriteBool(value.shift7dot5kHz_r17);
    return enc.Error();
}

ErrorCode Decode_OffsetValue_r17(Decoder& dec, OffsetValue_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-20000, 20000, tmp_value)) { goto fail; }
        value.offsetValue_r17 = (int64_t)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.shift7dot5kHz_r17 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OffsetValue_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OffsetValue_r17(OffsetValue_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CC_Group_r17_OffsetToDefault_r17_Offsetlist(Encoder& enc, const CC_Group_r17_OffsetToDefault_r17_Offsetlist& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 128u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_OffsetValue_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CC_Group_r17_OffsetToDefault_r17_Offsetlist(Decoder& dec, CC_Group_r17_OffsetToDefault_r17_Offsetlist& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 128u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 128u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (OffsetValue_r17*)std::malloc((std::size_t)value.count * sizeof(OffsetValue_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(OffsetValue_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_OffsetValue_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CC_Group_r17_OffsetToDefault_r17_Offsetlist(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CC_Group_r17_OffsetToDefault_r17_Offsetlist(CC_Group_r17_OffsetToDefault_r17_Offsetlist& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_OffsetValue_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CC_Group_r17_OffsetToDefault_r17(Encoder& enc, const CC_Group_r17_OffsetToDefault_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CC_Group_r17_OffsetToDefault_r17_Tag_offsetValue:
        Encode_OffsetValue_r17(enc, value.u.offsetValue);
        break;
    case CC_Group_r17_OffsetToDefault_r17_Tag_offsetlist:
        Encode_CC_Group_r17_OffsetToDefault_r17_Offsetlist(enc, value.u.offsetlist);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CC_Group_r17_OffsetToDefault_r17(Decoder& dec, CC_Group_r17_OffsetToDefault_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CC_Group_r17_OffsetToDefault_r17_Tag)root_index;
    switch (value.tag) {
    case CC_Group_r17_OffsetToDefault_r17_Tag_offsetValue: {
        if (Decode_OffsetValue_r17(dec, value.u.offsetValue) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CC_Group_r17_OffsetToDefault_r17_Tag_offsetlist: {
        if (Decode_CC_Group_r17_OffsetToDefault_r17_Offsetlist(dec, value.u.offsetlist) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CC_Group_r17_OffsetToDefault_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CC_Group_r17_OffsetToDefault_r17(CC_Group_r17_OffsetToDefault_r17& value)
{
    switch (value.tag) {
    case CC_Group_r17_OffsetToDefault_r17_Tag_offsetValue:
        Free_OffsetValue_r17(value.u.offsetValue);
        break;
    case CC_Group_r17_OffsetToDefault_r17_Tag_offsetlist:
        Free_CC_Group_r17_OffsetToDefault_r17_Offsetlist(value.u.offsetlist);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CC_Group_r17(Encoder& enc, const CC_Group_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_servCellIndexHigher_r17);
    enc.WriteBit(value.has_offsetToDefault_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.servCellIndexLower_r17), 0, 31);
    if (value.has_servCellIndexHigher_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servCellIndexHigher_r17), 0, 31);
    }
    Encode_DefaultDC_Location_r17(enc, value.defaultDC_Location_r17);
    if (value.has_offsetToDefault_r17) {
        Encode_CC_Group_r17_OffsetToDefault_r17(enc, value.offsetToDefault_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CC_Group_r17(Decoder& dec, CC_Group_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servCellIndexLower_r17 = (ServCellIndex)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servCellIndexHigher_r17 = (ServCellIndex)tmp_value;
    }
    {
        if (Decode_DefaultDC_Location_r17(dec, value.defaultDC_Location_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CC_Group_r17_OffsetToDefault_r17(dec, value.offsetToDefault_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CC_Group_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CC_Group_r17(CC_Group_r17& value)
{
    if (value.has_servCellIndexHigher_r17) {
    }
    Free_DefaultDC_Location_r17(value.defaultDC_Location_r17);
    if (value.has_offsetToDefault_r17) {
        Free_CC_Group_r17_OffsetToDefault_r17(value.offsetToDefault_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16(Encoder& enc, const UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag_bwp_Id_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.bwp_Id_r16), 0, 4);
        break;
    case UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag_deactivatedCarrier_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.deactivatedCarrier_r16), 0, 0);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16(Decoder& dec, UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag)root_index;
    switch (value.tag) {
    case UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag_bwp_Id_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.bwp_Id_r16 = (BWP_Id)tmp_value;
        break;
    }
    case UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag_deactivatedCarrier_r16: {
        value.u.deactivatedCarrier_r16 = (UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_DeactivatedCarrier_r16)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16(UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16& value)
{
    switch (value.tag) {
    case UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag_bwp_Id_r16:
        break;
    case UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag_deactivatedCarrier_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkTxDirectCurrentCarrierInfo_r16(Encoder& enc, const UplinkTxDirectCurrentCarrierInfo_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.servCellIndex_r16), 0, 31);
    Encode_UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16(enc, value.servCellInfo_r16);
    return enc.Error();
}

ErrorCode Decode_UplinkTxDirectCurrentCarrierInfo_r16(Decoder& dec, UplinkTxDirectCurrentCarrierInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servCellIndex_r16 = (ServCellIndex)tmp_value;
    }
    {
        if (Decode_UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16(dec, value.servCellInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxDirectCurrentCarrierInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxDirectCurrentCarrierInfo_r16(UplinkTxDirectCurrentCarrierInfo_r16& value)
{
    Free_UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16(value.servCellInfo_r16);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkTxDirectCurrentTwoCarrierInfo_r16(Encoder& enc, const UplinkTxDirectCurrentTwoCarrierInfo_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.referenceCarrierIndex_r16), 0, 31);
    enc.WriteBool(value.shift7dot5kHz_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.txDirectCurrentLocation_r16), 0, 3301);
    return enc.Error();
}

ErrorCode Decode_UplinkTxDirectCurrentTwoCarrierInfo_r16(Decoder& dec, UplinkTxDirectCurrentTwoCarrierInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.referenceCarrierIndex_r16 = (ServCellIndex)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.shift7dot5kHz_r16 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3301, tmp_value)) { goto fail; }
        value.txDirectCurrentLocation_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxDirectCurrentTwoCarrierInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxDirectCurrentTwoCarrierInfo_r16(UplinkTxDirectCurrentTwoCarrierInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkTxDirectCurrentTwoCarrier_r16(Encoder& enc, const UplinkTxDirectCurrentTwoCarrier_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_secondPA_TxDirectCurrent_r16);
    Encode_UplinkTxDirectCurrentCarrierInfo_r16(enc, value.carrierOneInfo_r16);
    Encode_UplinkTxDirectCurrentCarrierInfo_r16(enc, value.carrierTwoInfo_r16);
    Encode_UplinkTxDirectCurrentTwoCarrierInfo_r16(enc, value.singlePA_TxDirectCurrent_r16);
    if (value.has_secondPA_TxDirectCurrent_r16) {
        Encode_UplinkTxDirectCurrentTwoCarrierInfo_r16(enc, value.secondPA_TxDirectCurrent_r16);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxDirectCurrentTwoCarrier_r16(Decoder& dec, UplinkTxDirectCurrentTwoCarrier_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_UplinkTxDirectCurrentCarrierInfo_r16(dec, value.carrierOneInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_UplinkTxDirectCurrentCarrierInfo_r16(dec, value.carrierTwoInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_UplinkTxDirectCurrentTwoCarrierInfo_r16(dec, value.singlePA_TxDirectCurrent_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_UplinkTxDirectCurrentTwoCarrierInfo_r16(dec, value.secondPA_TxDirectCurrent_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxDirectCurrentTwoCarrier_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxDirectCurrentTwoCarrier_r16(UplinkTxDirectCurrentTwoCarrier_r16& value)
{
    Free_UplinkTxDirectCurrentCarrierInfo_r16(value.carrierOneInfo_r16);
    Free_UplinkTxDirectCurrentCarrierInfo_r16(value.carrierTwoInfo_r16);
    Free_UplinkTxDirectCurrentTwoCarrierInfo_r16(value.singlePA_TxDirectCurrent_r16);
    if (value.has_secondPA_TxDirectCurrent_r16) {
        Free_UplinkTxDirectCurrentTwoCarrierInfo_r16(value.secondPA_TxDirectCurrent_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ZP_CSI_RS_Resource(Encoder& enc, const ZP_CSI_RS_Resource& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_periodicityAndOffset);
    enc.WriteConstrainedInteger((std::int64_t)(value.zp_CSI_RS_ResourceId), 0, 31);
    Encode_CSI_RS_ResourceMapping(enc, value.resourceMapping);
    if (value.has_periodicityAndOffset) {
        Encode_CSI_ResourcePeriodicityAndOffset(enc, value.periodicityAndOffset);
    }
    return enc.Error();
}

ErrorCode Decode_ZP_CSI_RS_Resource(Decoder& dec, ZP_CSI_RS_Resource& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.zp_CSI_RS_ResourceId = (ZP_CSI_RS_ResourceId)tmp_value;
    }
    {
        if (Decode_CSI_RS_ResourceMapping(dec, value.resourceMapping) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_CSI_ResourcePeriodicityAndOffset(dec, value.periodicityAndOffset) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ZP_CSI_RS_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ZP_CSI_RS_Resource(ZP_CSI_RS_Resource& value)
{
    Free_CSI_RS_ResourceMapping(value.resourceMapping);
    if (value.has_periodicityAndOffset) {
        Free_CSI_ResourcePeriodicityAndOffset(value.periodicityAndOffset);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_AerialParameters_r18(Encoder& enc, const AerialParameters_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_aerialUE_Capability_r18);
    enc.WriteBit(value.has_altitudeMeas_r18);
    enc.WriteBit(value.has_altitudeBasedSSB_ToMeasure_r18);
    enc.WriteBit(value.has_eventAxHy_r18);
    enc.WriteBit(value.has_flightPathReporting_r18);
    enc.WriteBit(value.has_flightPathAvailabilityIndicationUAI_r18);
    enc.WriteBit(value.has_multipleCellsMeasExtension_r18);
    enc.WriteBit(value.has_nr_NS_PmaxListAerial_r18);
    enc.WriteBit(value.has_simulMultiTriggerSingleMeasReport_r18);
    enc.WriteBit(value.has_sl_A2X_Service_r18);
    if (value.has_aerialUE_Capability_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aerialUE_Capability_r18), 0, 0);
    }
    if (value.has_altitudeMeas_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.altitudeMeas_r18), 0, 0);
    }
    if (value.has_altitudeBasedSSB_ToMeasure_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.altitudeBasedSSB_ToMeasure_r18), 0, 0);
    }
    if (value.has_eventAxHy_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eventAxHy_r18), 0, 0);
    }
    if (value.has_flightPathReporting_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.flightPathReporting_r18), 0, 0);
    }
    if (value.has_flightPathAvailabilityIndicationUAI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.flightPathAvailabilityIndicationUAI_r18), 0, 0);
    }
    if (value.has_multipleCellsMeasExtension_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipleCellsMeasExtension_r18), 0, 0);
    }
    if (value.has_nr_NS_PmaxListAerial_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_NS_PmaxListAerial_r18), 0, 0);
    }
    if (value.has_simulMultiTriggerSingleMeasReport_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simulMultiTriggerSingleMeasReport_r18), 0, 0);
    }
    if (value.has_sl_A2X_Service_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_A2X_Service_r18), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_AerialParameters_r18(Decoder& dec, AerialParameters_r18& value)
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
        value.aerialUE_Capability_r18 = (AerialParameters_r18_AerialUE_Capability_r18)0;
    }
    if (present_1) {
        value.altitudeMeas_r18 = (AerialParameters_r18_AltitudeMeas_r18)0;
    }
    if (present_2) {
        value.altitudeBasedSSB_ToMeasure_r18 = (AerialParameters_r18_AltitudeBasedSSB_ToMeasure_r18)0;
    }
    if (present_3) {
        value.eventAxHy_r18 = (AerialParameters_r18_EventAxHy_r18)0;
    }
    if (present_4) {
        value.flightPathReporting_r18 = (AerialParameters_r18_FlightPathReporting_r18)0;
    }
    if (present_5) {
        value.flightPathAvailabilityIndicationUAI_r18 = (AerialParameters_r18_FlightPathAvailabilityIndicationUAI_r18)0;
    }
    if (present_6) {
        value.multipleCellsMeasExtension_r18 = (AerialParameters_r18_MultipleCellsMeasExtension_r18)0;
    }
    if (present_7) {
        value.nr_NS_PmaxListAerial_r18 = (AerialParameters_r18_Nr_NS_PmaxListAerial_r18)0;
    }
    if (present_8) {
        value.simulMultiTriggerSingleMeasReport_r18 = (AerialParameters_r18_SimulMultiTriggerSingleMeasReport_r18)0;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sl_A2X_Service_r18 = (AerialParameters_r18_Sl_A2X_Service_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AerialParameters_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AerialParameters_r18(AerialParameters_r18& value)
{
    if (value.has_aerialUE_Capability_r18) {
    }
    if (value.has_altitudeMeas_r18) {
    }
    if (value.has_altitudeBasedSSB_ToMeasure_r18) {
    }
    if (value.has_eventAxHy_r18) {
    }
    if (value.has_flightPathReporting_r18) {
    }
    if (value.has_flightPathAvailabilityIndicationUAI_r18) {
    }
    if (value.has_multipleCellsMeasExtension_r18) {
    }
    if (value.has_nr_NS_PmaxListAerial_r18) {
    }
    if (value.has_simulMultiTriggerSingleMeasReport_r18) {
    }
    if (value.has_sl_A2X_Service_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_AppLayerMeasParameters_r17_ExtGroup1(Encoder& enc, const AppLayerMeasParameters_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_qoe_IdleInactiveMeasReport_r18);
    enc.WriteBit(value.has_qoe_NRDC_MeasReport_r18);
    enc.WriteBit(value.has_qoe_AdditionalMemoryMeasReport_r18);
    enc.WriteBit(value.has_qoe_PriorityBasedDiscarding_r18);
    enc.WriteBit(value.has_srb5_r18);
    if (value.has_qoe_IdleInactiveMeasReport_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.qoe_IdleInactiveMeasReport_r18), 0, 0);
    }
    if (value.has_qoe_NRDC_MeasReport_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.qoe_NRDC_MeasReport_r18), 0, 0);
    }
    if (value.has_qoe_AdditionalMemoryMeasReport_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.qoe_AdditionalMemoryMeasReport_r18), 0, 3);
    }
    if (value.has_qoe_PriorityBasedDiscarding_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.qoe_PriorityBasedDiscarding_r18), 0, 0);
    }
    if (value.has_srb5_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srb5_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_AppLayerMeasParameters_r17_ExtGroup1(Decoder& dec, AppLayerMeasParameters_r17_ExtGroup1& value)
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
        value.qoe_IdleInactiveMeasReport_r18 = (AppLayerMeasParameters_r17_ExtGroup1_Qoe_IdleInactiveMeasReport_r18)0;
    }
    if (present_1) {
        value.qoe_NRDC_MeasReport_r18 = (AppLayerMeasParameters_r17_ExtGroup1_Qoe_NRDC_MeasReport_r18)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.qoe_AdditionalMemoryMeasReport_r18 = (AppLayerMeasParameters_r17_ExtGroup1_Qoe_AdditionalMemoryMeasReport_r18)tmp_value;
    }
    if (present_3) {
        value.qoe_PriorityBasedDiscarding_r18 = (AppLayerMeasParameters_r17_ExtGroup1_Qoe_PriorityBasedDiscarding_r18)0;
    }
    if (present_4) {
        value.srb5_r18 = (AppLayerMeasParameters_r17_ExtGroup1_Srb5_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AppLayerMeasParameters_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AppLayerMeasParameters_r17_ExtGroup1(AppLayerMeasParameters_r17_ExtGroup1& value)
{
    if (value.has_qoe_IdleInactiveMeasReport_r18) {
    }
    if (value.has_qoe_NRDC_MeasReport_r18) {
    }
    if (value.has_qoe_AdditionalMemoryMeasReport_r18) {
    }
    if (value.has_qoe_PriorityBasedDiscarding_r18) {
    }
    if (value.has_srb5_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_AppLayerMeasParameters_r17(Encoder& enc, const AppLayerMeasParameters_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_qoe_Streaming_MeasReport_r17);
    enc.WriteBit(value.has_qoe_MTSI_MeasReport_r17);
    enc.WriteBit(value.has_qoe_VR_MeasReport_r17);
    enc.WriteBit(value.has_ran_VisibleQoE_Streaming_MeasReport_r17);
    enc.WriteBit(value.has_ran_VisibleQoE_VR_MeasReport_r17);
    enc.WriteBit(value.has_ul_MeasurementReportAppLayer_Seg_r17);
    if (value.has_qoe_Streaming_MeasReport_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.qoe_Streaming_MeasReport_r17), 0, 0);
    }
    if (value.has_qoe_MTSI_MeasReport_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.qoe_MTSI_MeasReport_r17), 0, 0);
    }
    if (value.has_qoe_VR_MeasReport_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.qoe_VR_MeasReport_r17), 0, 0);
    }
    if (value.has_ran_VisibleQoE_Streaming_MeasReport_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ran_VisibleQoE_Streaming_MeasReport_r17), 0, 0);
    }
    if (value.has_ran_VisibleQoE_VR_MeasReport_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ran_VisibleQoE_VR_MeasReport_r17), 0, 0);
    }
    if (value.has_ul_MeasurementReportAppLayer_Seg_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_MeasurementReportAppLayer_Seg_r17), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_AppLayerMeasParameters_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_AppLayerMeasParameters_r17(Decoder& dec, AppLayerMeasParameters_r17& value)
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
    if (present_0) {
        value.qoe_Streaming_MeasReport_r17 = (AppLayerMeasParameters_r17_Qoe_Streaming_MeasReport_r17)0;
    }
    if (present_1) {
        value.qoe_MTSI_MeasReport_r17 = (AppLayerMeasParameters_r17_Qoe_MTSI_MeasReport_r17)0;
    }
    if (present_2) {
        value.qoe_VR_MeasReport_r17 = (AppLayerMeasParameters_r17_Qoe_VR_MeasReport_r17)0;
    }
    if (present_3) {
        value.ran_VisibleQoE_Streaming_MeasReport_r17 = (AppLayerMeasParameters_r17_Ran_VisibleQoE_Streaming_MeasReport_r17)0;
    }
    if (present_4) {
        value.ran_VisibleQoE_VR_MeasReport_r17 = (AppLayerMeasParameters_r17_Ran_VisibleQoE_VR_MeasReport_r17)0;
    }
    if (present_5) {
        value.ul_MeasurementReportAppLayer_Seg_r17 = (AppLayerMeasParameters_r17_Ul_MeasurementReportAppLayer_Seg_r17)0;
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
    if (Decode_AppLayerMeasParameters_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_AppLayerMeasParameters_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AppLayerMeasParameters_r17(AppLayerMeasParameters_r17& value)
{
    if (value.has_qoe_Streaming_MeasReport_r17) {
    }
    if (value.has_qoe_MTSI_MeasReport_r17) {
    }
    if (value.has_qoe_VR_MeasReport_r17) {
    }
    if (value.has_ran_VisibleQoE_Streaming_MeasReport_r17) {
    }
    if (value.has_ran_VisibleQoE_VR_MeasReport_r17) {
    }
    if (value.has_ul_MeasurementReportAppLayer_Seg_r17) {
    }
    if (value.has_extGroup1) {
        Free_AppLayerMeasParameters_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList(Encoder& enc, const BandCombinationList& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList(Decoder& dec, BandCombinationList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination* grown = (BandCombination*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList(BandCombinationList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1540(Encoder& enc, const BandCombinationList_v1540& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1540(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1540(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1540(Decoder& dec, BandCombinationList_v1540& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1540* grown = (BandCombination_v1540*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1540));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1540));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1540(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1540(BandCombinationList_v1540& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1540(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1550(Encoder& enc, const BandCombinationList_v1550& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1550(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1550(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1550(Decoder& dec, BandCombinationList_v1550& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1550* grown = (BandCombination_v1550*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1550));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1550));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1550(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1550(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1550(BandCombinationList_v1550& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1550(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1560(Encoder& enc, const BandCombinationList_v1560& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1560(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1560(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1560(Decoder& dec, BandCombinationList_v1560& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1560* grown = (BandCombination_v1560*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1560));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1560));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1560(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1560(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1560(BandCombinationList_v1560& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1560(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1570(Encoder& enc, const BandCombinationList_v1570& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1570(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1570(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1570(Decoder& dec, BandCombinationList_v1570& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1570* grown = (BandCombination_v1570*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1570));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1570));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1570(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1570(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1570(BandCombinationList_v1570& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1570(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1580(Encoder& enc, const BandCombinationList_v1580& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1580(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1580(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1580(Decoder& dec, BandCombinationList_v1580& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1580* grown = (BandCombination_v1580*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1580));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1580));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1580(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1580(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1580(BandCombinationList_v1580& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1580(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1590(Encoder& enc, const BandCombinationList_v1590& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1590(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1590(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1590(Decoder& dec, BandCombinationList_v1590& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1590* grown = (BandCombination_v1590*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1590));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1590));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1590(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1590(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1590(BandCombinationList_v1590& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1590(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v15g0(Encoder& enc, const BandCombinationList_v15g0& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v15g0(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v15g0(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v15g0(Decoder& dec, BandCombinationList_v15g0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v15g0* grown = (BandCombination_v15g0*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v15g0));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v15g0));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v15g0(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v15g0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v15g0(BandCombinationList_v15g0& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v15g0(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v15n0(Encoder& enc, const BandCombinationList_v15n0& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v15n0(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v15n0(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v15n0(Decoder& dec, BandCombinationList_v15n0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v15n0* grown = (BandCombination_v15n0*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v15n0));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v15n0));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v15n0(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v15n0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v15n0(BandCombinationList_v15n0& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v15n0(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1610(Encoder& enc, const BandCombinationList_v1610& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1610(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1610(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1610(Decoder& dec, BandCombinationList_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1610* grown = (BandCombination_v1610*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1610));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1610));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1610(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1610(BandCombinationList_v1610& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1610(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1630(Encoder& enc, const BandCombinationList_v1630& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1630(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1630(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1630(Decoder& dec, BandCombinationList_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1630* grown = (BandCombination_v1630*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1630));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1630));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1630(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1630(BandCombinationList_v1630& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1630(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1640(Encoder& enc, const BandCombinationList_v1640& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1640(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1640(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1640(Decoder& dec, BandCombinationList_v1640& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1640* grown = (BandCombination_v1640*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1640));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1640));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1640(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1640(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1640(BandCombinationList_v1640& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1640(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1650(Encoder& enc, const BandCombinationList_v1650& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1650(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1650(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1650(Decoder& dec, BandCombinationList_v1650& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1650* grown = (BandCombination_v1650*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1650));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1650));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1650(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1650(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1650(BandCombinationList_v1650& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1650(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1680(Encoder& enc, const BandCombinationList_v1680& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1680(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1680(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1680(Decoder& dec, BandCombinationList_v1680& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1680* grown = (BandCombination_v1680*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1680));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1680));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1680(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1680(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1680(BandCombinationList_v1680& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1680(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1690(Encoder& enc, const BandCombinationList_v1690& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1690(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1690(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1690(Decoder& dec, BandCombinationList_v1690& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1690* grown = (BandCombination_v1690*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1690));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1690));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1690(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1690(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1690(BandCombinationList_v1690& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1690(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v16a0(Encoder& enc, const BandCombinationList_v16a0& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v16a0(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v16a0(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v16a0(Decoder& dec, BandCombinationList_v16a0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v16a0* grown = (BandCombination_v16a0*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v16a0));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v16a0));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v16a0(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v16a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v16a0(BandCombinationList_v16a0& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v16a0(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1700(Encoder& enc, const BandCombinationList_v1700& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1700(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1700(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1700(Decoder& dec, BandCombinationList_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1700* grown = (BandCombination_v1700*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1700));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1700));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1700(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1700(BandCombinationList_v1700& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1700(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1720(Encoder& enc, const BandCombinationList_v1720& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1720(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1720(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1720(Decoder& dec, BandCombinationList_v1720& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1720* grown = (BandCombination_v1720*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1720));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1720));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1720(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1720(BandCombinationList_v1720& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1720(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1730(Encoder& enc, const BandCombinationList_v1730& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1730(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1730(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1730(Decoder& dec, BandCombinationList_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1730* grown = (BandCombination_v1730*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1730));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1730));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1730(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1730(BandCombinationList_v1730& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1730(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1740(Encoder& enc, const BandCombinationList_v1740& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1740(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1740(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1740(Decoder& dec, BandCombinationList_v1740& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1740* grown = (BandCombination_v1740*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1740));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1740));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1740(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1740(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1740(BandCombinationList_v1740& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1740(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1760(Encoder& enc, const BandCombinationList_v1760& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1760(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1760(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1760(Decoder& dec, BandCombinationList_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1760* grown = (BandCombination_v1760*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1760));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1760));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1760(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1760(BandCombinationList_v1760& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1760(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1770(Encoder& enc, const BandCombinationList_v1770& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1770(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1770(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1770(Decoder& dec, BandCombinationList_v1770& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1770* grown = (BandCombination_v1770*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1770));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1770));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1770(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1770(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1770(BandCombinationList_v1770& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1770(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1780(Encoder& enc, const BandCombinationList_v1780& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1780(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1780(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1780(Decoder& dec, BandCombinationList_v1780& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1780* grown = (BandCombination_v1780*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1780));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1780));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1780(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1780(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1780(BandCombinationList_v1780& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1780(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_v1800(Encoder& enc, const BandCombinationList_v1800& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_v1800(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_v1800(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_v1800(Decoder& dec, BandCombinationList_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_v1800* grown = (BandCombination_v1800*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_v1800));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_v1800));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_v1800(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_v1800(BandCombinationList_v1800& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_v1800(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_r16(Encoder& enc, const BandCombinationList_UplinkTxSwitch_r16& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_r16(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_r16(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_r16(Decoder& dec, BandCombinationList_UplinkTxSwitch_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_r16* grown = (BandCombination_UplinkTxSwitch_r16*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_r16));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_r16));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_r16(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_r16(BandCombinationList_UplinkTxSwitch_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1630(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1630& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1630(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1630(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1630(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1630* grown = (BandCombination_UplinkTxSwitch_v1630*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1630));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1630));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1630(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1630(BandCombinationList_UplinkTxSwitch_v1630& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1630(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1640(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1640& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1640(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1640(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1640(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1640& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1640* grown = (BandCombination_UplinkTxSwitch_v1640*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1640));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1640));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1640(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1640(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1640(BandCombinationList_UplinkTxSwitch_v1640& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1640(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1650(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1650& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1650(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1650(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1650(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1650& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1650* grown = (BandCombination_UplinkTxSwitch_v1650*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1650));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1650));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1650(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1650(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1650(BandCombinationList_UplinkTxSwitch_v1650& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1650(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1670(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1670& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1670(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1670(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1670(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1670& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1670* grown = (BandCombination_UplinkTxSwitch_v1670*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1670));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1670));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1670(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1670(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1670(BandCombinationList_UplinkTxSwitch_v1670& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1670(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1690(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1690& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1690(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1690(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1690(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1690& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1690* grown = (BandCombination_UplinkTxSwitch_v1690*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1690));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1690));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1690(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1690(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1690(BandCombinationList_UplinkTxSwitch_v1690& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1690(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v16a0(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v16a0& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v16a0(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v16a0(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v16a0(Decoder& dec, BandCombinationList_UplinkTxSwitch_v16a0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v16a0* grown = (BandCombination_UplinkTxSwitch_v16a0*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v16a0));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v16a0));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v16a0(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v16a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v16a0(BandCombinationList_UplinkTxSwitch_v16a0& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v16a0(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v16e0(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v16e0& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v16e0(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v16e0(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v16e0(Decoder& dec, BandCombinationList_UplinkTxSwitch_v16e0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v16e0* grown = (BandCombination_UplinkTxSwitch_v16e0*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v16e0));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v16e0));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v16e0(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v16e0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v16e0(BandCombinationList_UplinkTxSwitch_v16e0& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v16e0(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1700(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1700& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1700(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1700(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1700(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1700* grown = (BandCombination_UplinkTxSwitch_v1700*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1700));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1700));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1700(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1700(BandCombinationList_UplinkTxSwitch_v1700& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1700(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1720(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1720& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1720(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1720(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1720(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1720& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1720* grown = (BandCombination_UplinkTxSwitch_v1720*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1720));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1720));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1720(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1720(BandCombinationList_UplinkTxSwitch_v1720& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1720(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1730(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1730& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1730(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1730(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1730(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1730* grown = (BandCombination_UplinkTxSwitch_v1730*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1730));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1730));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1730(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1730(BandCombinationList_UplinkTxSwitch_v1730& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1730(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1740(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1740& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1740(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1740(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1740(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1740& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1740* grown = (BandCombination_UplinkTxSwitch_v1740*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1740));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1740));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1740(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1740(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1740(BandCombinationList_UplinkTxSwitch_v1740& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1740(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1760(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1760& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1760(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1760(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1760(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1760* grown = (BandCombination_UplinkTxSwitch_v1760*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1760));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1760));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1760(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1760(BandCombinationList_UplinkTxSwitch_v1760& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1760(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1770(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1770& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1770(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1770(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1770(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1770& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1770* grown = (BandCombination_UplinkTxSwitch_v1770*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1770));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1770));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1770(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1770(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1770(BandCombinationList_UplinkTxSwitch_v1770& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1770(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1780(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1780& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1780(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1780(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1780(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1780& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1780* grown = (BandCombination_UplinkTxSwitch_v1780*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1780));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1780));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1780(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1780(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1780(BandCombinationList_UplinkTxSwitch_v1780& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1780(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombinationList_UplinkTxSwitch_v1800(Encoder& enc, const BandCombinationList_UplinkTxSwitch_v1800& value)
{
    (void)value;
if (value.count > 4294967295u) { enc.Fail(ErrorCode_ValueOutOfRange); }
std::uint32_t remaining = value.count;
std::uint32_t element_index = 0;
while (remaining >= kPerFragmentUnit) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }
    enc.WriteFragmentHeader(blocks);
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    for (std::uint32_t i = 0; i < chunk; ++i) {
        Encode_BandCombination_UplinkTxSwitch_v1800(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombination_UplinkTxSwitch_v1800(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationList_UplinkTxSwitch_v1800(Decoder& dec, BandCombinationList_UplinkTxSwitch_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (1 > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
std::uint32_t total_count = 0;
for (;;) {
    std::uint32_t fragment_count = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {
        goto fail;
    }
    if (fragment_count > 65536u || fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {
        dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
    }
    const std::uint32_t new_total = total_count + fragment_count;
    BandCombination_UplinkTxSwitch_v1800* grown = (BandCombination_UplinkTxSwitch_v1800*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombination_UplinkTxSwitch_v1800));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombination_UplinkTxSwitch_v1800));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombination_UplinkTxSwitch_v1800(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
    }
    total_count = new_total;
    if (!fragmented) { break; }
}
if (total_count < 1u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationList_UplinkTxSwitch_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationList_UplinkTxSwitch_v1800(BandCombinationList_UplinkTxSwitch_v1800& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombination_UplinkTxSwitch_v1800(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersEUTRA(Encoder& enc, const CA_ParametersEUTRA& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_multipleTimingAdvance);
    enc.WriteBit(value.has_simultaneousRx_Tx);
    enc.WriteBit(value.has_supportedNAICS_2CRS_AP);
    enc.WriteBit(value.has_additionalRx_Tx_PerformanceReq);
    enc.WriteBit(value.has_ue_CA_PowerClass_N);
    enc.WriteBit(value.has_supportedBandwidthCombinationSetEUTRA_v1530);
    if (value.has_multipleTimingAdvance) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipleTimingAdvance), 0, 0);
    }
    if (value.has_simultaneousRx_Tx) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousRx_Tx), 0, 0);
    }
    if (value.has_supportedNAICS_2CRS_AP) {
        enc.WriteConstrainedBitString(value.supportedNAICS_2CRS_AP.bytes, value.supportedNAICS_2CRS_AP.bitLength, 1, 8);
    }
    if (value.has_additionalRx_Tx_PerformanceReq) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalRx_Tx_PerformanceReq), 0, 0);
    }
    if (value.has_ue_CA_PowerClass_N) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_CA_PowerClass_N), 0, 0);
    }
    if (value.has_supportedBandwidthCombinationSetEUTRA_v1530) {
        enc.WriteConstrainedBitString(value.supportedBandwidthCombinationSetEUTRA_v1530.bytes, value.supportedBandwidthCombinationSetEUTRA_v1530.bitLength, 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersEUTRA(Decoder& dec, CA_ParametersEUTRA& value)
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
        value.multipleTimingAdvance = (CA_ParametersEUTRA_MultipleTimingAdvance)0;
    }
    if (present_1) {
        value.simultaneousRx_Tx = (CA_ParametersEUTRA_SimultaneousRx_Tx)0;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 8)) { goto fail; }
        value.supportedNAICS_2CRS_AP.bytes = string_bytes;
        value.supportedNAICS_2CRS_AP.bitLength = string_length;
    }
    if (present_3) {
        value.additionalRx_Tx_PerformanceReq = (CA_ParametersEUTRA_AdditionalRx_Tx_PerformanceReq)0;
    }
    if (present_4) {
        value.ue_CA_PowerClass_N = (CA_ParametersEUTRA_Ue_CA_PowerClass_N)0;
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 32)) { goto fail; }
        value.supportedBandwidthCombinationSetEUTRA_v1530.bytes = string_bytes;
        value.supportedBandwidthCombinationSetEUTRA_v1530.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersEUTRA(CA_ParametersEUTRA& value)
{
    if (value.has_multipleTimingAdvance) {
    }
    if (value.has_simultaneousRx_Tx) {
    }
    if (value.has_supportedNAICS_2CRS_AP) {
        std::free(value.supportedNAICS_2CRS_AP.bytes);
        value.supportedNAICS_2CRS_AP.bytes = nullptr;
        value.supportedNAICS_2CRS_AP.bitLength = 0;
    }
    if (value.has_additionalRx_Tx_PerformanceReq) {
    }
    if (value.has_ue_CA_PowerClass_N) {
    }
    if (value.has_supportedBandwidthCombinationSetEUTRA_v1530) {
        std::free(value.supportedBandwidthCombinationSetEUTRA_v1530.bytes);
        value.supportedBandwidthCombinationSetEUTRA_v1530.bytes = nullptr;
        value.supportedBandwidthCombinationSetEUTRA_v1530.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR(Encoder& enc, const CA_ParametersNR& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_parallelTxSRS_PUCCH_PUSCH);
    enc.WriteBit(value.has_parallelTxPRACH_SRS_PUCCH_PUSCH);
    enc.WriteBit(value.has_simultaneousRxTxInterBandCA);
    enc.WriteBit(value.has_simultaneousRxTxSUL);
    enc.WriteBit(value.has_diffNumerologyAcrossPUCCH_Group);
    enc.WriteBit(value.has_diffNumerologyWithinPUCCH_GroupSmallerSCS);
    enc.WriteBit(value.has_supportedNumberTAG);
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    if (value.has_parallelTxSRS_PUCCH_PUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelTxSRS_PUCCH_PUSCH), 0, 0);
    }
    if (value.has_parallelTxPRACH_SRS_PUCCH_PUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelTxPRACH_SRS_PUCCH_PUSCH), 0, 0);
    }
    if (value.has_simultaneousRxTxInterBandCA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousRxTxInterBandCA), 0, 0);
    }
    if (value.has_simultaneousRxTxSUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousRxTxSUL), 0, 0);
    }
    if (value.has_diffNumerologyAcrossPUCCH_Group) {
        enc.WriteConstrainedInteger((std::int64_t)(value.diffNumerologyAcrossPUCCH_Group), 0, 0);
    }
    if (value.has_diffNumerologyWithinPUCCH_GroupSmallerSCS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.diffNumerologyWithinPUCCH_GroupSmallerSCS), 0, 0);
    }
    if (value.has_supportedNumberTAG) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportedNumberTAG), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR(Decoder& dec, CA_ParametersNR& value)
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
    if (present_0) {
        value.dummy = (CA_ParametersNR_Dummy)0;
    }
    if (present_1) {
        value.parallelTxSRS_PUCCH_PUSCH = (CA_ParametersNR_ParallelTxSRS_PUCCH_PUSCH)0;
    }
    if (present_2) {
        value.parallelTxPRACH_SRS_PUCCH_PUSCH = (CA_ParametersNR_ParallelTxPRACH_SRS_PUCCH_PUSCH)0;
    }
    if (present_3) {
        value.simultaneousRxTxInterBandCA = (CA_ParametersNR_SimultaneousRxTxInterBandCA)0;
    }
    if (present_4) {
        value.simultaneousRxTxSUL = (CA_ParametersNR_SimultaneousRxTxSUL)0;
    }
    if (present_5) {
        value.diffNumerologyAcrossPUCCH_Group = (CA_ParametersNR_DiffNumerologyAcrossPUCCH_Group)0;
    }
    if (present_6) {
        value.diffNumerologyWithinPUCCH_GroupSmallerSCS = (CA_ParametersNR_DiffNumerologyWithinPUCCH_GroupSmallerSCS)0;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.supportedNumberTAG = (CA_ParametersNR_SupportedNumberTAG)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR(CA_ParametersNR& value)
{
    if (value.has_dummy) {
    }
    if (value.has_parallelTxSRS_PUCCH_PUSCH) {
    }
    if (value.has_parallelTxPRACH_SRS_PUCCH_PUSCH) {
    }
    if (value.has_simultaneousRxTxInterBandCA) {
    }
    if (value.has_simultaneousRxTxSUL) {
    }
    if (value.has_diffNumerologyAcrossPUCCH_Group) {
    }
    if (value.has_diffNumerologyWithinPUCCH_GroupSmallerSCS) {
    }
    if (value.has_supportedNumberTAG) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRDC_Parameters_ExtGroup1(Encoder& enc, const MRDC_Parameters_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_dualPA_Architecture);
    enc.WriteBit(value.has_intraBandENDC_Support);
    enc.WriteBit(value.has_ul_TimingAlignmentEUTRA_NR);
    if (value.has_dualPA_Architecture) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dualPA_Architecture), 0, 0);
    }
    if (value.has_intraBandENDC_Support) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraBandENDC_Support), 0, 1);
    }
    if (value.has_ul_TimingAlignmentEUTRA_NR) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_TimingAlignmentEUTRA_NR), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_ExtGroup1(Decoder& dec, MRDC_Parameters_ExtGroup1& value)
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
        value.dualPA_Architecture = (MRDC_Parameters_ExtGroup1_DualPA_Architecture)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.intraBandENDC_Support = (MRDC_Parameters_ExtGroup1_IntraBandENDC_Support)tmp_value;
    }
    if (present_2) {
        value.ul_TimingAlignmentEUTRA_NR = (MRDC_Parameters_ExtGroup1_Ul_TimingAlignmentEUTRA_NR)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_ExtGroup1(MRDC_Parameters_ExtGroup1& value)
{
    if (value.has_dualPA_Architecture) {
    }
    if (value.has_intraBandENDC_Support) {
    }
    if (value.has_ul_TimingAlignmentEUTRA_NR) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRDC_Parameters(Encoder& enc, const MRDC_Parameters& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_singleUL_Transmission);
    enc.WriteBit(value.has_dynamicPowerSharingENDC);
    enc.WriteBit(value.has_tdm_Pattern);
    enc.WriteBit(value.has_ul_SharingEUTRA_NR);
    enc.WriteBit(value.has_ul_SwitchingTimeEUTRA_NR);
    enc.WriteBit(value.has_simultaneousRxTxInterBandENDC);
    enc.WriteBit(value.has_asyncIntraBandENDC);
    if (value.has_singleUL_Transmission) {
        enc.WriteConstrainedInteger((std::int64_t)(value.singleUL_Transmission), 0, 0);
    }
    if (value.has_dynamicPowerSharingENDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicPowerSharingENDC), 0, 0);
    }
    if (value.has_tdm_Pattern) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tdm_Pattern), 0, 0);
    }
    if (value.has_ul_SharingEUTRA_NR) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_SharingEUTRA_NR), 0, 2);
    }
    if (value.has_ul_SwitchingTimeEUTRA_NR) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_SwitchingTimeEUTRA_NR), 0, 1);
    }
    if (value.has_simultaneousRxTxInterBandENDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousRxTxInterBandENDC), 0, 0);
    }
    if (value.has_asyncIntraBandENDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.asyncIntraBandENDC), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MRDC_Parameters_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters(Decoder& dec, MRDC_Parameters& value)
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
    if (present_0) {
        value.singleUL_Transmission = (MRDC_Parameters_SingleUL_Transmission)0;
    }
    if (present_1) {
        value.dynamicPowerSharingENDC = (MRDC_Parameters_DynamicPowerSharingENDC)0;
    }
    if (present_2) {
        value.tdm_Pattern = (MRDC_Parameters_Tdm_Pattern)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ul_SharingEUTRA_NR = (MRDC_Parameters_Ul_SharingEUTRA_NR)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ul_SwitchingTimeEUTRA_NR = (MRDC_Parameters_Ul_SwitchingTimeEUTRA_NR)tmp_value;
    }
    if (present_5) {
        value.simultaneousRxTxInterBandENDC = (MRDC_Parameters_SimultaneousRxTxInterBandENDC)0;
    }
    if (present_6) {
        value.asyncIntraBandENDC = (MRDC_Parameters_AsyncIntraBandENDC)0;
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
    if (Decode_MRDC_Parameters_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_MRDC_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters(MRDC_Parameters& value)
{
    if (value.has_singleUL_Transmission) {
    }
    if (value.has_dynamicPowerSharingENDC) {
    }
    if (value.has_tdm_Pattern) {
    }
    if (value.has_ul_SharingEUTRA_NR) {
    }
    if (value.has_ul_SwitchingTimeEUTRA_NR) {
    }
    if (value.has_simultaneousRxTxInterBandENDC) {
    }
    if (value.has_asyncIntraBandENDC) {
    }
    if (value.has_extGroup1) {
        Free_MRDC_Parameters_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination(Encoder& enc, const BandCombination& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_ParametersEUTRA);
    enc.WriteBit(value.has_ca_ParametersNR);
    enc.WriteBit(value.has_mrdc_Parameters);
    enc.WriteBit(value.has_supportedBandwidthCombinationSet);
    enc.WriteBit(value.has_powerClass_v1530);
enc.WriteConstrainedLength(value.bandList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bandList_count; ++i) {
    Encode_BandParameters(enc, value.bandList_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.featureSetCombination), 0, 1024);
    if (value.has_ca_ParametersEUTRA) {
        Encode_CA_ParametersEUTRA(enc, value.ca_ParametersEUTRA);
    }
    if (value.has_ca_ParametersNR) {
        Encode_CA_ParametersNR(enc, value.ca_ParametersNR);
    }
    if (value.has_mrdc_Parameters) {
        Encode_MRDC_Parameters(enc, value.mrdc_Parameters);
    }
    if (value.has_supportedBandwidthCombinationSet) {
        enc.WriteConstrainedBitString(value.supportedBandwidthCombinationSet.bytes, value.supportedBandwidthCombinationSet.bitLength, 1, 32);
    }
    if (value.has_powerClass_v1530) {
        enc.WriteConstrainedInteger((std::int64_t)(value.powerClass_v1530), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination(Decoder& dec, BandCombination& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.bandList_count)) { goto fail; }
if (value.bandList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bandList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bandList_count > 0u) {
    value.bandList_items = (BandParameters*)std::malloc((std::size_t)value.bandList_count * sizeof(BandParameters));
    if (value.bandList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bandList_items, 0, (std::size_t)value.bandList_count * sizeof(BandParameters));
}
for (std::uint32_t i = 0; i < value.bandList_count; ++i) {
    if (Decode_BandParameters(dec, value.bandList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1024, tmp_value)) { goto fail; }
        value.featureSetCombination = (FeatureSetCombinationId)tmp_value;
    }
    if (present_0) {
        if (Decode_CA_ParametersEUTRA(dec, value.ca_ParametersEUTRA) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNR(dec, value.ca_ParametersNR) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MRDC_Parameters(dec, value.mrdc_Parameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 32)) { goto fail; }
        value.supportedBandwidthCombinationSet.bytes = string_bytes;
        value.supportedBandwidthCombinationSet.bitLength = string_length;
    }
    if (present_4) {
        value.powerClass_v1530 = (BandCombination_PowerClass_v1530)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination(BandCombination& value)
{
    if (value.bandList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.bandList_count; ++i) {
            Free_BandParameters(value.bandList_items[i]);
        }
        std::free(value.bandList_items);
        value.bandList_items = nullptr;
    }
    value.bandList_count = 0;
    if (value.has_ca_ParametersEUTRA) {
        Free_CA_ParametersEUTRA(value.ca_ParametersEUTRA);
    }
    if (value.has_ca_ParametersNR) {
        Free_CA_ParametersNR(value.ca_ParametersNR);
    }
    if (value.has_mrdc_Parameters) {
        Free_MRDC_Parameters(value.mrdc_Parameters);
    }
    if (value.has_supportedBandwidthCombinationSet) {
        std::free(value.supportedBandwidthCombinationSet.bytes);
        value.supportedBandwidthCombinationSet.bytes = nullptr;
        value.supportedBandwidthCombinationSet.bitLength = 0;
    }
    if (value.has_powerClass_v1530) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb(Encoder& enc, const CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC);
    enc.WriteBit(value.has_totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC);
    if (value.has_maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC), 1, 64);
    }
    if (value.has_totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC), 2, 256);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb(Decoder& dec, CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 256, tmp_value)) { goto fail; }
        value.totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb(CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb& value)
{
    if (value.has_maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC) {
    }
    if (value.has_totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1540(Encoder& enc, const CA_ParametersNR_v1540& value)
{
    (void)value;
    enc.WriteBit(value.has_simultaneousSRS_AssocCSI_RS_AllCC);
    enc.WriteBit(value.has_csi_RS_IM_ReceptionForFeedbackPerBandComb);
    enc.WriteBit(value.has_simultaneousCSI_ReportsAllCC);
    enc.WriteBit(value.has_dualPA_Architecture);
    if (value.has_simultaneousSRS_AssocCSI_RS_AllCC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousSRS_AssocCSI_RS_AllCC), 5, 32);
    }
    if (value.has_csi_RS_IM_ReceptionForFeedbackPerBandComb) {
        Encode_CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb(enc, value.csi_RS_IM_ReceptionForFeedbackPerBandComb);
    }
    if (value.has_simultaneousCSI_ReportsAllCC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousCSI_ReportsAllCC), 5, 32);
    }
    if (value.has_dualPA_Architecture) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dualPA_Architecture), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1540(Decoder& dec, CA_ParametersNR_v1540& value)
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
        if (!dec.ReadConstrainedInteger(5, 32, tmp_value)) { goto fail; }
        value.simultaneousSRS_AssocCSI_RS_AllCC = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb(dec, value.csi_RS_IM_ReceptionForFeedbackPerBandComb) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(5, 32, tmp_value)) { goto fail; }
        value.simultaneousCSI_ReportsAllCC = (int64_t)tmp_value;
    }
    if (present_3) {
        value.dualPA_Architecture = (CA_ParametersNR_v1540_DualPA_Architecture)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1540(CA_ParametersNR_v1540& value)
{
    if (value.has_simultaneousSRS_AssocCSI_RS_AllCC) {
    }
    if (value.has_csi_RS_IM_ReceptionForFeedbackPerBandComb) {
        Free_CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb(value.csi_RS_IM_ReceptionForFeedbackPerBandComb);
    }
    if (value.has_simultaneousCSI_ReportsAllCC) {
    }
    if (value.has_dualPA_Architecture) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v1540(Encoder& enc, const BandCombination_v1540& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_ParametersNR_v1540);
enc.WriteConstrainedLength(value.bandList_v1540_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bandList_v1540_count; ++i) {
    Encode_BandParameters_v1540(enc, value.bandList_v1540_items[i]);
}
    if (value.has_ca_ParametersNR_v1540) {
        Encode_CA_ParametersNR_v1540(enc, value.ca_ParametersNR_v1540);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1540(Decoder& dec, BandCombination_v1540& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.bandList_v1540_count)) { goto fail; }
if (value.bandList_v1540_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bandList_v1540_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bandList_v1540_count > 0u) {
    value.bandList_v1540_items = (BandParameters_v1540*)std::malloc((std::size_t)value.bandList_v1540_count * sizeof(BandParameters_v1540));
    if (value.bandList_v1540_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bandList_v1540_items, 0, (std::size_t)value.bandList_v1540_count * sizeof(BandParameters_v1540));
}
for (std::uint32_t i = 0; i < value.bandList_v1540_count; ++i) {
    if (Decode_BandParameters_v1540(dec, value.bandList_v1540_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1540(dec, value.ca_ParametersNR_v1540) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1540(BandCombination_v1540& value)
{
    if (value.bandList_v1540_items != nullptr) {
        for (std::uint32_t i = 0; i < value.bandList_v1540_count; ++i) {
            Free_BandParameters_v1540(value.bandList_v1540_items[i]);
        }
        std::free(value.bandList_v1540_items);
        value.bandList_v1540_items = nullptr;
    }
    value.bandList_v1540_count = 0;
    if (value.has_ca_ParametersNR_v1540) {
        Free_CA_ParametersNR_v1540(value.ca_ParametersNR_v1540);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1550(Encoder& enc, const CA_ParametersNR_v1550& value)
{
    (void)value;
    enc.WriteBit(value.has_dummy);
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1550(Decoder& dec, CA_ParametersNR_v1550& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.dummy = (CA_ParametersNR_v1550_Dummy)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1550(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1550(CA_ParametersNR_v1550& value)
{
    if (value.has_dummy) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v1550(Encoder& enc, const BandCombination_v1550& value)
{
    (void)value;
    Encode_CA_ParametersNR_v1550(enc, value.ca_ParametersNR_v1550);
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1550(Decoder& dec, BandCombination_v1550& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CA_ParametersNR_v1550(dec, value.ca_ParametersNR_v1550) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1550(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1550(BandCombination_v1550& value)
{
    Free_CA_ParametersNR_v1550(value.ca_ParametersNR_v1550);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersEUTRA_v1560(Encoder& enc, const CA_ParametersEUTRA_v1560& value)
{
    (void)value;
    enc.WriteBit(value.has_fd_MIMO_TotalWeightedLayers);
    if (value.has_fd_MIMO_TotalWeightedLayers) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fd_MIMO_TotalWeightedLayers), 2, 128);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersEUTRA_v1560(Decoder& dec, CA_ParametersEUTRA_v1560& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 128, tmp_value)) { goto fail; }
        value.fd_MIMO_TotalWeightedLayers = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersEUTRA_v1560(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersEUTRA_v1560(CA_ParametersEUTRA_v1560& value)
{
    if (value.has_fd_MIMO_TotalWeightedLayers) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1560(Encoder& enc, const CA_ParametersNR_v1560& value)
{
    (void)value;
    enc.WriteBit(value.has_diffNumerologyWithinPUCCH_GroupLargerSCS);
    if (value.has_diffNumerologyWithinPUCCH_GroupLargerSCS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.diffNumerologyWithinPUCCH_GroupLargerSCS), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1560(Decoder& dec, CA_ParametersNR_v1560& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.diffNumerologyWithinPUCCH_GroupLargerSCS = (CA_ParametersNR_v1560_DiffNumerologyWithinPUCCH_GroupLargerSCS)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1560(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1560(CA_ParametersNR_v1560& value)
{
    if (value.has_diffNumerologyWithinPUCCH_GroupLargerSCS) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNRDC(Encoder& enc, const CA_ParametersNRDC& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_ParametersNR_ForDC);
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1540);
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1550);
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1560);
    enc.WriteBit(value.has_featureSetCombinationDC);
    if (value.has_ca_ParametersNR_ForDC) {
        Encode_CA_ParametersNR(enc, value.ca_ParametersNR_ForDC);
    }
    if (value.has_ca_ParametersNR_ForDC_v1540) {
        Encode_CA_ParametersNR_v1540(enc, value.ca_ParametersNR_ForDC_v1540);
    }
    if (value.has_ca_ParametersNR_ForDC_v1550) {
        Encode_CA_ParametersNR_v1550(enc, value.ca_ParametersNR_ForDC_v1550);
    }
    if (value.has_ca_ParametersNR_ForDC_v1560) {
        Encode_CA_ParametersNR_v1560(enc, value.ca_ParametersNR_ForDC_v1560);
    }
    if (value.has_featureSetCombinationDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.featureSetCombinationDC), 0, 1024);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC(Decoder& dec, CA_ParametersNRDC& value)
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
        if (Decode_CA_ParametersNR(dec, value.ca_ParametersNR_ForDC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNR_v1540(dec, value.ca_ParametersNR_ForDC_v1540) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CA_ParametersNR_v1550(dec, value.ca_ParametersNR_ForDC_v1550) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_CA_ParametersNR_v1560(dec, value.ca_ParametersNR_ForDC_v1560) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1024, tmp_value)) { goto fail; }
        value.featureSetCombinationDC = (FeatureSetCombinationId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC(CA_ParametersNRDC& value)
{
    if (value.has_ca_ParametersNR_ForDC) {
        Free_CA_ParametersNR(value.ca_ParametersNR_ForDC);
    }
    if (value.has_ca_ParametersNR_ForDC_v1540) {
        Free_CA_ParametersNR_v1540(value.ca_ParametersNR_ForDC_v1540);
    }
    if (value.has_ca_ParametersNR_ForDC_v1550) {
        Free_CA_ParametersNR_v1550(value.ca_ParametersNR_ForDC_v1550);
    }
    if (value.has_ca_ParametersNR_ForDC_v1560) {
        Free_CA_ParametersNR_v1560(value.ca_ParametersNR_ForDC_v1560);
    }
    if (value.has_featureSetCombinationDC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v1560(Encoder& enc, const BandCombination_v1560& value)
{
    (void)value;
    enc.WriteBit(value.has_ne_DC_BC);
    enc.WriteBit(value.has_ca_ParametersNRDC);
    enc.WriteBit(value.has_ca_ParametersEUTRA_v1560);
    enc.WriteBit(value.has_ca_ParametersNR_v1560);
    if (value.has_ne_DC_BC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ne_DC_BC), 0, 0);
    }
    if (value.has_ca_ParametersNRDC) {
        Encode_CA_ParametersNRDC(enc, value.ca_ParametersNRDC);
    }
    if (value.has_ca_ParametersEUTRA_v1560) {
        Encode_CA_ParametersEUTRA_v1560(enc, value.ca_ParametersEUTRA_v1560);
    }
    if (value.has_ca_ParametersNR_v1560) {
        Encode_CA_ParametersNR_v1560(enc, value.ca_ParametersNR_v1560);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1560(Decoder& dec, BandCombination_v1560& value)
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
        value.ne_DC_BC = (BandCombination_v1560_Ne_DC_BC)0;
    }
    if (present_1) {
        if (Decode_CA_ParametersNRDC(dec, value.ca_ParametersNRDC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CA_ParametersEUTRA_v1560(dec, value.ca_ParametersEUTRA_v1560) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_CA_ParametersNR_v1560(dec, value.ca_ParametersNR_v1560) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1560(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1560(BandCombination_v1560& value)
{
    if (value.has_ne_DC_BC) {
    }
    if (value.has_ca_ParametersNRDC) {
        Free_CA_ParametersNRDC(value.ca_ParametersNRDC);
    }
    if (value.has_ca_ParametersEUTRA_v1560) {
        Free_CA_ParametersEUTRA_v1560(value.ca_ParametersEUTRA_v1560);
    }
    if (value.has_ca_ParametersNR_v1560) {
        Free_CA_ParametersNR_v1560(value.ca_ParametersNR_v1560);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersEUTRA_v1570(Encoder& enc, const CA_ParametersEUTRA_v1570& value)
{
    (void)value;
    enc.WriteBit(value.has_dl_1024QAM_TotalWeightedLayers);
    if (value.has_dl_1024QAM_TotalWeightedLayers) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_1024QAM_TotalWeightedLayers), 0, 10);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersEUTRA_v1570(Decoder& dec, CA_ParametersEUTRA_v1570& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.dl_1024QAM_TotalWeightedLayers = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersEUTRA_v1570(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersEUTRA_v1570(CA_ParametersEUTRA_v1570& value)
{
    if (value.has_dl_1024QAM_TotalWeightedLayers) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v1570(Encoder& enc, const BandCombination_v1570& value)
{
    (void)value;
    Encode_CA_ParametersEUTRA_v1570(enc, value.ca_ParametersEUTRA_v1570);
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1570(Decoder& dec, BandCombination_v1570& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CA_ParametersEUTRA_v1570(dec, value.ca_ParametersEUTRA_v1570) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1570(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1570(BandCombination_v1570& value)
{
    Free_CA_ParametersEUTRA_v1570(value.ca_ParametersEUTRA_v1570);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRDC_Parameters_v1580(Encoder& enc, const MRDC_Parameters_v1580& value)
{
    (void)value;
    enc.WriteBit(value.has_dynamicPowerSharingNEDC);
    if (value.has_dynamicPowerSharingNEDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicPowerSharingNEDC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_v1580(Decoder& dec, MRDC_Parameters_v1580& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.dynamicPowerSharingNEDC = (MRDC_Parameters_v1580_DynamicPowerSharingNEDC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_v1580(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_v1580(MRDC_Parameters_v1580& value)
{
    if (value.has_dynamicPowerSharingNEDC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v1580(Encoder& enc, const BandCombination_v1580& value)
{
    (void)value;
    Encode_MRDC_Parameters_v1580(enc, value.mrdc_Parameters_v1580);
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1580(Decoder& dec, BandCombination_v1580& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MRDC_Parameters_v1580(dec, value.mrdc_Parameters_v1580) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1580(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1580(BandCombination_v1580& value)
{
    Free_MRDC_Parameters_v1580(value.mrdc_Parameters_v1580);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRDC_Parameters_v1590(Encoder& enc, const MRDC_Parameters_v1590& value)
{
    (void)value;
    enc.WriteBit(value.has_interBandContiguousMRDC);
    if (value.has_interBandContiguousMRDC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interBandContiguousMRDC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_v1590(Decoder& dec, MRDC_Parameters_v1590& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.interBandContiguousMRDC = (MRDC_Parameters_v1590_InterBandContiguousMRDC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_v1590(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_v1590(MRDC_Parameters_v1590& value)
{
    if (value.has_interBandContiguousMRDC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v1590(Encoder& enc, const BandCombination_v1590& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandwidthCombinationSetIntraENDC);
    if (value.has_supportedBandwidthCombinationSetIntraENDC) {
        enc.WriteConstrainedBitString(value.supportedBandwidthCombinationSetIntraENDC.bytes, value.supportedBandwidthCombinationSetIntraENDC.bitLength, 1, 32);
    }
    Encode_MRDC_Parameters_v1590(enc, value.mrdc_Parameters_v1590);
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1590(Decoder& dec, BandCombination_v1590& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 32)) { goto fail; }
        value.supportedBandwidthCombinationSetIntraENDC.bytes = string_bytes;
        value.supportedBandwidthCombinationSetIntraENDC.bitLength = string_length;
    }
    {
        if (Decode_MRDC_Parameters_v1590(dec, value.mrdc_Parameters_v1590) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1590(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1590(BandCombination_v1590& value)
{
    if (value.has_supportedBandwidthCombinationSetIntraENDC) {
        std::free(value.supportedBandwidthCombinationSetIntraENDC.bytes);
        value.supportedBandwidthCombinationSetIntraENDC.bytes = nullptr;
        value.supportedBandwidthCombinationSetIntraENDC.bitLength = 0;
    }
    Free_MRDC_Parameters_v1590(value.mrdc_Parameters_v1590);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v15g0(Encoder& enc, const CA_ParametersNR_v15g0& value)
{
    (void)value;
    enc.WriteBit(value.has_simultaneousRxTxInterBandCAPerBandPair);
    enc.WriteBit(value.has_simultaneousRxTxSULPerBandPair);
    if (value.has_simultaneousRxTxInterBandCAPerBandPair) {
        enc.WriteConstrainedBitString(value.simultaneousRxTxInterBandCAPerBandPair.bytes, value.simultaneousRxTxInterBandCAPerBandPair.bitLength, 3, 496);
    }
    if (value.has_simultaneousRxTxSULPerBandPair) {
        enc.WriteConstrainedBitString(value.simultaneousRxTxSULPerBandPair.bytes, value.simultaneousRxTxSULPerBandPair.bitLength, 3, 496);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v15g0(Decoder& dec, CA_ParametersNR_v15g0& value)
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
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 3, 496)) { goto fail; }
        value.simultaneousRxTxInterBandCAPerBandPair.bytes = string_bytes;
        value.simultaneousRxTxInterBandCAPerBandPair.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 3, 496)) { goto fail; }
        value.simultaneousRxTxSULPerBandPair.bytes = string_bytes;
        value.simultaneousRxTxSULPerBandPair.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v15g0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v15g0(CA_ParametersNR_v15g0& value)
{
    if (value.has_simultaneousRxTxInterBandCAPerBandPair) {
        std::free(value.simultaneousRxTxInterBandCAPerBandPair.bytes);
        value.simultaneousRxTxInterBandCAPerBandPair.bytes = nullptr;
        value.simultaneousRxTxInterBandCAPerBandPair.bitLength = 0;
    }
    if (value.has_simultaneousRxTxSULPerBandPair) {
        std::free(value.simultaneousRxTxSULPerBandPair.bytes);
        value.simultaneousRxTxSULPerBandPair.bytes = nullptr;
        value.simultaneousRxTxSULPerBandPair.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNRDC_v15g0(Encoder& enc, const CA_ParametersNRDC_v15g0& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v15g0);
    if (value.has_ca_ParametersNR_ForDC_v15g0) {
        Encode_CA_ParametersNR_v15g0(enc, value.ca_ParametersNR_ForDC_v15g0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v15g0(Decoder& dec, CA_ParametersNRDC_v15g0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v15g0(dec, value.ca_ParametersNR_ForDC_v15g0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v15g0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v15g0(CA_ParametersNRDC_v15g0& value)
{
    if (value.has_ca_ParametersNR_ForDC_v15g0) {
        Free_CA_ParametersNR_v15g0(value.ca_ParametersNR_ForDC_v15g0);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRDC_Parameters_v15g0(Encoder& enc, const MRDC_Parameters_v15g0& value)
{
    (void)value;
    enc.WriteBit(value.has_simultaneousRxTxInterBandENDCPerBandPair);
    if (value.has_simultaneousRxTxInterBandENDCPerBandPair) {
        enc.WriteConstrainedBitString(value.simultaneousRxTxInterBandENDCPerBandPair.bytes, value.simultaneousRxTxInterBandENDCPerBandPair.bitLength, 3, 496);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_v15g0(Decoder& dec, MRDC_Parameters_v15g0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 3, 496)) { goto fail; }
        value.simultaneousRxTxInterBandENDCPerBandPair.bytes = string_bytes;
        value.simultaneousRxTxInterBandENDCPerBandPair.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_v15g0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_v15g0(MRDC_Parameters_v15g0& value)
{
    if (value.has_simultaneousRxTxInterBandENDCPerBandPair) {
        std::free(value.simultaneousRxTxInterBandENDCPerBandPair.bytes);
        value.simultaneousRxTxInterBandENDCPerBandPair.bytes = nullptr;
        value.simultaneousRxTxInterBandENDCPerBandPair.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v15g0(Encoder& enc, const BandCombination_v15g0& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_ParametersNR_v15g0);
    enc.WriteBit(value.has_ca_ParametersNRDC_v15g0);
    enc.WriteBit(value.has_mrdc_Parameters_v15g0);
    if (value.has_ca_ParametersNR_v15g0) {
        Encode_CA_ParametersNR_v15g0(enc, value.ca_ParametersNR_v15g0);
    }
    if (value.has_ca_ParametersNRDC_v15g0) {
        Encode_CA_ParametersNRDC_v15g0(enc, value.ca_ParametersNRDC_v15g0);
    }
    if (value.has_mrdc_Parameters_v15g0) {
        Encode_MRDC_Parameters_v15g0(enc, value.mrdc_Parameters_v15g0);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v15g0(Decoder& dec, BandCombination_v15g0& value)
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
        if (Decode_CA_ParametersNR_v15g0(dec, value.ca_ParametersNR_v15g0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNRDC_v15g0(dec, value.ca_ParametersNRDC_v15g0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MRDC_Parameters_v15g0(dec, value.mrdc_Parameters_v15g0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v15g0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v15g0(BandCombination_v15g0& value)
{
    if (value.has_ca_ParametersNR_v15g0) {
        Free_CA_ParametersNR_v15g0(value.ca_ParametersNR_v15g0);
    }
    if (value.has_ca_ParametersNRDC_v15g0) {
        Free_CA_ParametersNRDC_v15g0(value.ca_ParametersNRDC_v15g0);
    }
    if (value.has_mrdc_Parameters_v15g0) {
        Free_MRDC_Parameters_v15g0(value.mrdc_Parameters_v15g0);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRDC_Parameters_v15n0(Encoder& enc, const MRDC_Parameters_v15n0& value)
{
    (void)value;
    enc.WriteBit(value.has_intraBandENDC_Support_UL);
    if (value.has_intraBandENDC_Support_UL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraBandENDC_Support_UL), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_v15n0(Decoder& dec, MRDC_Parameters_v15n0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.intraBandENDC_Support_UL = (MRDC_Parameters_v15n0_IntraBandENDC_Support_UL)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_v15n0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_v15n0(MRDC_Parameters_v15n0& value)
{
    if (value.has_intraBandENDC_Support_UL) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v15n0(Encoder& enc, const BandCombination_v15n0& value)
{
    (void)value;
    Encode_MRDC_Parameters_v15n0(enc, value.mrdc_Parameters_v15n0);
    return enc.Error();
}

ErrorCode Decode_BandCombination_v15n0(Decoder& dec, BandCombination_v15n0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MRDC_Parameters_v15n0(dec, value.mrdc_Parameters_v15n0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v15n0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v15n0(BandCombination_v15n0& value)
{
    Free_MRDC_Parameters_v15n0(value.mrdc_Parameters_v15n0);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16(Encoder& enc, const CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_type1_SinglePanel_r16);
    enc.WriteBit(value.has_type1_MultiPanel_r16);
    enc.WriteBit(value.has_type2_r16);
    enc.WriteBit(value.has_type2_PortSelection_r16);
    if (value.has_type1_SinglePanel_r16) {
enc.WriteConstrainedLength(value.type1_SinglePanel_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1_SinglePanel_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1_SinglePanel_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1_MultiPanel_r16) {
enc.WriteConstrainedLength(value.type1_MultiPanel_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1_MultiPanel_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1_MultiPanel_r16_items[i]), 0, 511);
}
    }
    if (value.has_type2_r16) {
enc.WriteConstrainedLength(value.type2_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type2_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type2_r16_items[i]), 0, 511);
}
    }
    if (value.has_type2_PortSelection_r16) {
enc.WriteConstrainedLength(value.type2_PortSelection_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type2_PortSelection_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type2_PortSelection_r16_items[i]), 0, 511);
}
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16(Decoder& dec, CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.type1_SinglePanel_r16_count)) { goto fail; }
if (value.type1_SinglePanel_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1_SinglePanel_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1_SinglePanel_r16_count > 0u) {
    value.type1_SinglePanel_r16_items = (int64_t*)std::malloc((std::size_t)value.type1_SinglePanel_r16_count * sizeof(int64_t));
    if (value.type1_SinglePanel_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1_SinglePanel_r16_items, 0, (std::size_t)value.type1_SinglePanel_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1_SinglePanel_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1_SinglePanel_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1_MultiPanel_r16_count)) { goto fail; }
if (value.type1_MultiPanel_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1_MultiPanel_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1_MultiPanel_r16_count > 0u) {
    value.type1_MultiPanel_r16_items = (int64_t*)std::malloc((std::size_t)value.type1_MultiPanel_r16_count * sizeof(int64_t));
    if (value.type1_MultiPanel_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1_MultiPanel_r16_items, 0, (std::size_t)value.type1_MultiPanel_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1_MultiPanel_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1_MultiPanel_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type2_r16_count)) { goto fail; }
if (value.type2_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type2_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type2_r16_count > 0u) {
    value.type2_r16_items = (int64_t*)std::malloc((std::size_t)value.type2_r16_count * sizeof(int64_t));
    if (value.type2_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type2_r16_items, 0, (std::size_t)value.type2_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type2_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type2_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type2_PortSelection_r16_count)) { goto fail; }
if (value.type2_PortSelection_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type2_PortSelection_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type2_PortSelection_r16_count > 0u) {
    value.type2_PortSelection_r16_items = (int64_t*)std::malloc((std::size_t)value.type2_PortSelection_r16_count * sizeof(int64_t));
    if (value.type2_PortSelection_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type2_PortSelection_r16_items, 0, (std::size_t)value.type2_PortSelection_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type2_PortSelection_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type2_PortSelection_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16(CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16& value)
{
    if (value.has_type1_SinglePanel_r16) {
        if (value.type1_SinglePanel_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1_SinglePanel_r16_count; ++i) {
            }
            std::free(value.type1_SinglePanel_r16_items);
            value.type1_SinglePanel_r16_items = nullptr;
        }
        value.type1_SinglePanel_r16_count = 0;
    }
    if (value.has_type1_MultiPanel_r16) {
        if (value.type1_MultiPanel_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1_MultiPanel_r16_count; ++i) {
            }
            std::free(value.type1_MultiPanel_r16_items);
            value.type1_MultiPanel_r16_items = nullptr;
        }
        value.type1_MultiPanel_r16_count = 0;
    }
    if (value.has_type2_r16) {
        if (value.type2_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type2_r16_count; ++i) {
            }
            std::free(value.type2_r16_items);
            value.type2_r16_items = nullptr;
        }
        value.type2_r16_count = 0;
    }
    if (value.has_type2_PortSelection_r16) {
        if (value.type2_PortSelection_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type2_PortSelection_r16_count; ++i) {
            }
            std::free(value.type2_PortSelection_r16_items);
            value.type2_PortSelection_r16_items = nullptr;
        }
        value.type2_PortSelection_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookParameters_v1610(Encoder& enc, const CodebookParameters_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedCSI_RS_ResourceListAlt_r16);
    if (value.has_supportedCSI_RS_ResourceListAlt_r16) {
        Encode_CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16(enc, value.supportedCSI_RS_ResourceListAlt_r16);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParameters_v1610(Decoder& dec, CodebookParameters_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16(dec, value.supportedCSI_RS_ResourceListAlt_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParameters_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParameters_v1610(CodebookParameters_v1610& value)
{
    if (value.has_supportedCSI_RS_ResourceListAlt_r16) {
        Free_CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16(value.supportedCSI_RS_ResourceListAlt_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookParametersAdditionPerBC_r16(Encoder& enc, const CodebookParametersAdditionPerBC_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_etype2R1_r16);
    enc.WriteBit(value.has_etype2R2_r16);
    enc.WriteBit(value.has_etype2R1_PortSelection_r16);
    enc.WriteBit(value.has_etype2R2_PortSelection_r16);
    if (value.has_etype2R1_r16) {
enc.WriteConstrainedLength(value.etype2R1_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.etype2R1_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.etype2R1_r16_items[i]), 0, 511);
}
    }
    if (value.has_etype2R2_r16) {
enc.WriteConstrainedLength(value.etype2R2_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.etype2R2_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.etype2R2_r16_items[i]), 0, 511);
}
    }
    if (value.has_etype2R1_PortSelection_r16) {
enc.WriteConstrainedLength(value.etype2R1_PortSelection_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.etype2R1_PortSelection_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.etype2R1_PortSelection_r16_items[i]), 0, 511);
}
    }
    if (value.has_etype2R2_PortSelection_r16) {
enc.WriteConstrainedLength(value.etype2R2_PortSelection_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.etype2R2_PortSelection_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.etype2R2_PortSelection_r16_items[i]), 0, 511);
}
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParametersAdditionPerBC_r16(Decoder& dec, CodebookParametersAdditionPerBC_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.etype2R1_r16_count)) { goto fail; }
if (value.etype2R1_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.etype2R1_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.etype2R1_r16_count > 0u) {
    value.etype2R1_r16_items = (int64_t*)std::malloc((std::size_t)value.etype2R1_r16_count * sizeof(int64_t));
    if (value.etype2R1_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.etype2R1_r16_items, 0, (std::size_t)value.etype2R1_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.etype2R1_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.etype2R1_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.etype2R2_r16_count)) { goto fail; }
if (value.etype2R2_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.etype2R2_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.etype2R2_r16_count > 0u) {
    value.etype2R2_r16_items = (int64_t*)std::malloc((std::size_t)value.etype2R2_r16_count * sizeof(int64_t));
    if (value.etype2R2_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.etype2R2_r16_items, 0, (std::size_t)value.etype2R2_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.etype2R2_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.etype2R2_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.etype2R1_PortSelection_r16_count)) { goto fail; }
if (value.etype2R1_PortSelection_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.etype2R1_PortSelection_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.etype2R1_PortSelection_r16_count > 0u) {
    value.etype2R1_PortSelection_r16_items = (int64_t*)std::malloc((std::size_t)value.etype2R1_PortSelection_r16_count * sizeof(int64_t));
    if (value.etype2R1_PortSelection_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.etype2R1_PortSelection_r16_items, 0, (std::size_t)value.etype2R1_PortSelection_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.etype2R1_PortSelection_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.etype2R1_PortSelection_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.etype2R2_PortSelection_r16_count)) { goto fail; }
if (value.etype2R2_PortSelection_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.etype2R2_PortSelection_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.etype2R2_PortSelection_r16_count > 0u) {
    value.etype2R2_PortSelection_r16_items = (int64_t*)std::malloc((std::size_t)value.etype2R2_PortSelection_r16_count * sizeof(int64_t));
    if (value.etype2R2_PortSelection_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.etype2R2_PortSelection_r16_items, 0, (std::size_t)value.etype2R2_PortSelection_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.etype2R2_PortSelection_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.etype2R2_PortSelection_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersAdditionPerBC_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersAdditionPerBC_r16(CodebookParametersAdditionPerBC_r16& value)
{
    if (value.has_etype2R1_r16) {
        if (value.etype2R1_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.etype2R1_r16_count; ++i) {
            }
            std::free(value.etype2R1_r16_items);
            value.etype2R1_r16_items = nullptr;
        }
        value.etype2R1_r16_count = 0;
    }
    if (value.has_etype2R2_r16) {
        if (value.etype2R2_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.etype2R2_r16_count; ++i) {
            }
            std::free(value.etype2R2_r16_items);
            value.etype2R2_r16_items = nullptr;
        }
        value.etype2R2_r16_count = 0;
    }
    if (value.has_etype2R1_PortSelection_r16) {
        if (value.etype2R1_PortSelection_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.etype2R1_PortSelection_r16_count; ++i) {
            }
            std::free(value.etype2R1_PortSelection_r16_items);
            value.etype2R1_PortSelection_r16_items = nullptr;
        }
        value.etype2R1_PortSelection_r16_count = 0;
    }
    if (value.has_etype2R2_PortSelection_r16) {
        if (value.etype2R2_PortSelection_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.etype2R2_PortSelection_r16_count; ++i) {
            }
            std::free(value.etype2R2_PortSelection_r16_items);
            value.etype2R2_PortSelection_r16_items = nullptr;
        }
        value.etype2R2_PortSelection_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookComboParametersAdditionPerBC_r16(Encoder& enc, const CodebookComboParametersAdditionPerBC_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_type1SP_Type2_null_r16);
    enc.WriteBit(value.has_type1SP_Type2PS_null_r16);
    enc.WriteBit(value.has_type1SP_eType2R1_null_r16);
    enc.WriteBit(value.has_type1SP_eType2R2_null_r16);
    enc.WriteBit(value.has_type1SP_eType2R1PS_null_r16);
    enc.WriteBit(value.has_type1SP_eType2R2PS_null_r16);
    enc.WriteBit(value.has_type1SP_Type2_Type2PS_r16);
    enc.WriteBit(value.has_type1MP_Type2_null_r16);
    enc.WriteBit(value.has_type1MP_Type2PS_null_r16);
    enc.WriteBit(value.has_type1MP_eType2R1_null_r16);
    enc.WriteBit(value.has_type1MP_eType2R2_null_r16);
    enc.WriteBit(value.has_type1MP_eType2R1PS_null_r16);
    enc.WriteBit(value.has_type1MP_eType2R2PS_null_r16);
    enc.WriteBit(value.has_type1MP_Type2_Type2PS_r16);
    if (value.has_type1SP_Type2_null_r16) {
enc.WriteConstrainedLength(value.type1SP_Type2_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_Type2_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_Type2_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_Type2PS_null_r16) {
enc.WriteConstrainedLength(value.type1SP_Type2PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_Type2PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_Type2PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_eType2R1_null_r16) {
enc.WriteConstrainedLength(value.type1SP_eType2R1_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_eType2R1_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_eType2R1_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_eType2R2_null_r16) {
enc.WriteConstrainedLength(value.type1SP_eType2R2_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_eType2R2_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_eType2R2_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_eType2R1PS_null_r16) {
enc.WriteConstrainedLength(value.type1SP_eType2R1PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_eType2R1PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_eType2R1PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_eType2R2PS_null_r16) {
enc.WriteConstrainedLength(value.type1SP_eType2R2PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_eType2R2PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_eType2R2PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_Type2_Type2PS_r16) {
enc.WriteConstrainedLength(value.type1SP_Type2_Type2PS_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_Type2_Type2PS_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_Type2_Type2PS_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_Type2_null_r16) {
enc.WriteConstrainedLength(value.type1MP_Type2_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_Type2_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_Type2_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_Type2PS_null_r16) {
enc.WriteConstrainedLength(value.type1MP_Type2PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_Type2PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_Type2PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_eType2R1_null_r16) {
enc.WriteConstrainedLength(value.type1MP_eType2R1_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_eType2R1_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_eType2R1_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_eType2R2_null_r16) {
enc.WriteConstrainedLength(value.type1MP_eType2R2_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_eType2R2_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_eType2R2_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_eType2R1PS_null_r16) {
enc.WriteConstrainedLength(value.type1MP_eType2R1PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_eType2R1PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_eType2R1PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_eType2R2PS_null_r16) {
enc.WriteConstrainedLength(value.type1MP_eType2R2PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_eType2R2PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_eType2R2PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_Type2_Type2PS_r16) {
enc.WriteConstrainedLength(value.type1MP_Type2_Type2PS_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_Type2_Type2PS_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_Type2_Type2PS_r16_items[i]), 0, 511);
}
    }
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAdditionPerBC_r16(Decoder& dec, CodebookComboParametersAdditionPerBC_r16& value)
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
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_Type2_null_r16_count)) { goto fail; }
if (value.type1SP_Type2_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_Type2_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_Type2_null_r16_count > 0u) {
    value.type1SP_Type2_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1SP_Type2_null_r16_count * sizeof(int64_t));
    if (value.type1SP_Type2_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_Type2_null_r16_items, 0, (std::size_t)value.type1SP_Type2_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_Type2_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_Type2_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_Type2PS_null_r16_count)) { goto fail; }
if (value.type1SP_Type2PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_Type2PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_Type2PS_null_r16_count > 0u) {
    value.type1SP_Type2PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1SP_Type2PS_null_r16_count * sizeof(int64_t));
    if (value.type1SP_Type2PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_Type2PS_null_r16_items, 0, (std::size_t)value.type1SP_Type2PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_Type2PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_Type2PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_eType2R1_null_r16_count)) { goto fail; }
if (value.type1SP_eType2R1_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_eType2R1_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_eType2R1_null_r16_count > 0u) {
    value.type1SP_eType2R1_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1SP_eType2R1_null_r16_count * sizeof(int64_t));
    if (value.type1SP_eType2R1_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_eType2R1_null_r16_items, 0, (std::size_t)value.type1SP_eType2R1_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_eType2R1_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_eType2R1_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_eType2R2_null_r16_count)) { goto fail; }
if (value.type1SP_eType2R2_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_eType2R2_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_eType2R2_null_r16_count > 0u) {
    value.type1SP_eType2R2_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1SP_eType2R2_null_r16_count * sizeof(int64_t));
    if (value.type1SP_eType2R2_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_eType2R2_null_r16_items, 0, (std::size_t)value.type1SP_eType2R2_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_eType2R2_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_eType2R2_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_eType2R1PS_null_r16_count)) { goto fail; }
if (value.type1SP_eType2R1PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_eType2R1PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_eType2R1PS_null_r16_count > 0u) {
    value.type1SP_eType2R1PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1SP_eType2R1PS_null_r16_count * sizeof(int64_t));
    if (value.type1SP_eType2R1PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_eType2R1PS_null_r16_items, 0, (std::size_t)value.type1SP_eType2R1PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_eType2R1PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_eType2R1PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_eType2R2PS_null_r16_count)) { goto fail; }
if (value.type1SP_eType2R2PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_eType2R2PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_eType2R2PS_null_r16_count > 0u) {
    value.type1SP_eType2R2PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1SP_eType2R2PS_null_r16_count * sizeof(int64_t));
    if (value.type1SP_eType2R2PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_eType2R2PS_null_r16_items, 0, (std::size_t)value.type1SP_eType2R2PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_eType2R2PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_eType2R2PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_Type2_Type2PS_r16_count)) { goto fail; }
if (value.type1SP_Type2_Type2PS_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_Type2_Type2PS_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_Type2_Type2PS_r16_count > 0u) {
    value.type1SP_Type2_Type2PS_r16_items = (int64_t*)std::malloc((std::size_t)value.type1SP_Type2_Type2PS_r16_count * sizeof(int64_t));
    if (value.type1SP_Type2_Type2PS_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_Type2_Type2PS_r16_items, 0, (std::size_t)value.type1SP_Type2_Type2PS_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_Type2_Type2PS_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_Type2_Type2PS_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_Type2_null_r16_count)) { goto fail; }
if (value.type1MP_Type2_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_Type2_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_Type2_null_r16_count > 0u) {
    value.type1MP_Type2_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1MP_Type2_null_r16_count * sizeof(int64_t));
    if (value.type1MP_Type2_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_Type2_null_r16_items, 0, (std::size_t)value.type1MP_Type2_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_Type2_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_Type2_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_Type2PS_null_r16_count)) { goto fail; }
if (value.type1MP_Type2PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_Type2PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_Type2PS_null_r16_count > 0u) {
    value.type1MP_Type2PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1MP_Type2PS_null_r16_count * sizeof(int64_t));
    if (value.type1MP_Type2PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_Type2PS_null_r16_items, 0, (std::size_t)value.type1MP_Type2PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_Type2PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_Type2PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_eType2R1_null_r16_count)) { goto fail; }
if (value.type1MP_eType2R1_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_eType2R1_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_eType2R1_null_r16_count > 0u) {
    value.type1MP_eType2R1_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1MP_eType2R1_null_r16_count * sizeof(int64_t));
    if (value.type1MP_eType2R1_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_eType2R1_null_r16_items, 0, (std::size_t)value.type1MP_eType2R1_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_eType2R1_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_eType2R1_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_10) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_eType2R2_null_r16_count)) { goto fail; }
if (value.type1MP_eType2R2_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_eType2R2_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_eType2R2_null_r16_count > 0u) {
    value.type1MP_eType2R2_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1MP_eType2R2_null_r16_count * sizeof(int64_t));
    if (value.type1MP_eType2R2_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_eType2R2_null_r16_items, 0, (std::size_t)value.type1MP_eType2R2_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_eType2R2_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_eType2R2_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_11) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_eType2R1PS_null_r16_count)) { goto fail; }
if (value.type1MP_eType2R1PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_eType2R1PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_eType2R1PS_null_r16_count > 0u) {
    value.type1MP_eType2R1PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1MP_eType2R1PS_null_r16_count * sizeof(int64_t));
    if (value.type1MP_eType2R1PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_eType2R1PS_null_r16_items, 0, (std::size_t)value.type1MP_eType2R1PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_eType2R1PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_eType2R1PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_12) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_eType2R2PS_null_r16_count)) { goto fail; }
if (value.type1MP_eType2R2PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_eType2R2PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_eType2R2PS_null_r16_count > 0u) {
    value.type1MP_eType2R2PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.type1MP_eType2R2PS_null_r16_count * sizeof(int64_t));
    if (value.type1MP_eType2R2PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_eType2R2PS_null_r16_items, 0, (std::size_t)value.type1MP_eType2R2PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_eType2R2PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_eType2R2PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_13) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_Type2_Type2PS_r16_count)) { goto fail; }
if (value.type1MP_Type2_Type2PS_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_Type2_Type2PS_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_Type2_Type2PS_r16_count > 0u) {
    value.type1MP_Type2_Type2PS_r16_items = (int64_t*)std::malloc((std::size_t)value.type1MP_Type2_Type2PS_r16_count * sizeof(int64_t));
    if (value.type1MP_Type2_Type2PS_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_Type2_Type2PS_r16_items, 0, (std::size_t)value.type1MP_Type2_Type2PS_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_Type2_Type2PS_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_Type2_Type2PS_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAdditionPerBC_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAdditionPerBC_r16(CodebookComboParametersAdditionPerBC_r16& value)
{
    if (value.has_type1SP_Type2_null_r16) {
        if (value.type1SP_Type2_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_Type2_null_r16_count; ++i) {
            }
            std::free(value.type1SP_Type2_null_r16_items);
            value.type1SP_Type2_null_r16_items = nullptr;
        }
        value.type1SP_Type2_null_r16_count = 0;
    }
    if (value.has_type1SP_Type2PS_null_r16) {
        if (value.type1SP_Type2PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_Type2PS_null_r16_count; ++i) {
            }
            std::free(value.type1SP_Type2PS_null_r16_items);
            value.type1SP_Type2PS_null_r16_items = nullptr;
        }
        value.type1SP_Type2PS_null_r16_count = 0;
    }
    if (value.has_type1SP_eType2R1_null_r16) {
        if (value.type1SP_eType2R1_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_eType2R1_null_r16_count; ++i) {
            }
            std::free(value.type1SP_eType2R1_null_r16_items);
            value.type1SP_eType2R1_null_r16_items = nullptr;
        }
        value.type1SP_eType2R1_null_r16_count = 0;
    }
    if (value.has_type1SP_eType2R2_null_r16) {
        if (value.type1SP_eType2R2_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_eType2R2_null_r16_count; ++i) {
            }
            std::free(value.type1SP_eType2R2_null_r16_items);
            value.type1SP_eType2R2_null_r16_items = nullptr;
        }
        value.type1SP_eType2R2_null_r16_count = 0;
    }
    if (value.has_type1SP_eType2R1PS_null_r16) {
        if (value.type1SP_eType2R1PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_eType2R1PS_null_r16_count; ++i) {
            }
            std::free(value.type1SP_eType2R1PS_null_r16_items);
            value.type1SP_eType2R1PS_null_r16_items = nullptr;
        }
        value.type1SP_eType2R1PS_null_r16_count = 0;
    }
    if (value.has_type1SP_eType2R2PS_null_r16) {
        if (value.type1SP_eType2R2PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_eType2R2PS_null_r16_count; ++i) {
            }
            std::free(value.type1SP_eType2R2PS_null_r16_items);
            value.type1SP_eType2R2PS_null_r16_items = nullptr;
        }
        value.type1SP_eType2R2PS_null_r16_count = 0;
    }
    if (value.has_type1SP_Type2_Type2PS_r16) {
        if (value.type1SP_Type2_Type2PS_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_Type2_Type2PS_r16_count; ++i) {
            }
            std::free(value.type1SP_Type2_Type2PS_r16_items);
            value.type1SP_Type2_Type2PS_r16_items = nullptr;
        }
        value.type1SP_Type2_Type2PS_r16_count = 0;
    }
    if (value.has_type1MP_Type2_null_r16) {
        if (value.type1MP_Type2_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_Type2_null_r16_count; ++i) {
            }
            std::free(value.type1MP_Type2_null_r16_items);
            value.type1MP_Type2_null_r16_items = nullptr;
        }
        value.type1MP_Type2_null_r16_count = 0;
    }
    if (value.has_type1MP_Type2PS_null_r16) {
        if (value.type1MP_Type2PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_Type2PS_null_r16_count; ++i) {
            }
            std::free(value.type1MP_Type2PS_null_r16_items);
            value.type1MP_Type2PS_null_r16_items = nullptr;
        }
        value.type1MP_Type2PS_null_r16_count = 0;
    }
    if (value.has_type1MP_eType2R1_null_r16) {
        if (value.type1MP_eType2R1_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_eType2R1_null_r16_count; ++i) {
            }
            std::free(value.type1MP_eType2R1_null_r16_items);
            value.type1MP_eType2R1_null_r16_items = nullptr;
        }
        value.type1MP_eType2R1_null_r16_count = 0;
    }
    if (value.has_type1MP_eType2R2_null_r16) {
        if (value.type1MP_eType2R2_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_eType2R2_null_r16_count; ++i) {
            }
            std::free(value.type1MP_eType2R2_null_r16_items);
            value.type1MP_eType2R2_null_r16_items = nullptr;
        }
        value.type1MP_eType2R2_null_r16_count = 0;
    }
    if (value.has_type1MP_eType2R1PS_null_r16) {
        if (value.type1MP_eType2R1PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_eType2R1PS_null_r16_count; ++i) {
            }
            std::free(value.type1MP_eType2R1PS_null_r16_items);
            value.type1MP_eType2R1PS_null_r16_items = nullptr;
        }
        value.type1MP_eType2R1PS_null_r16_count = 0;
    }
    if (value.has_type1MP_eType2R2PS_null_r16) {
        if (value.type1MP_eType2R2PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_eType2R2PS_null_r16_count; ++i) {
            }
            std::free(value.type1MP_eType2R2PS_null_r16_items);
            value.type1MP_eType2R2PS_null_r16_items = nullptr;
        }
        value.type1MP_eType2R2PS_null_r16_count = 0;
    }
    if (value.has_type1MP_Type2_Type2PS_r16) {
        if (value.type1MP_Type2_Type2PS_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_Type2_Type2PS_r16_count; ++i) {
            }
            std::free(value.type1MP_Type2_Type2PS_r16_items);
            value.type1MP_Type2_Type2PS_r16_items = nullptr;
        }
        value.type1MP_Type2_Type2PS_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1610_InterFreqDAPS_r16(Encoder& enc, const CA_ParametersNR_v1610_InterFreqDAPS_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_interFreqAsyncDAPS_r16);
    enc.WriteBit(value.has_interFreqDiffSCS_DAPS_r16);
    enc.WriteBit(value.has_interFreqMultiUL_TransmissionDAPS_r16);
    enc.WriteBit(value.has_interFreqSemiStaticPowerSharingDAPS_Mode1_r16);
    enc.WriteBit(value.has_interFreqSemiStaticPowerSharingDAPS_Mode2_r16);
    enc.WriteBit(value.has_interFreqDynamicPowerSharingDAPS_r16);
    enc.WriteBit(value.has_interFreqUL_TransCancellationDAPS_r16);
    if (value.has_interFreqAsyncDAPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interFreqAsyncDAPS_r16), 0, 0);
    }
    if (value.has_interFreqDiffSCS_DAPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interFreqDiffSCS_DAPS_r16), 0, 0);
    }
    if (value.has_interFreqMultiUL_TransmissionDAPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interFreqMultiUL_TransmissionDAPS_r16), 0, 0);
    }
    if (value.has_interFreqSemiStaticPowerSharingDAPS_Mode1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interFreqSemiStaticPowerSharingDAPS_Mode1_r16), 0, 0);
    }
    if (value.has_interFreqSemiStaticPowerSharingDAPS_Mode2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interFreqSemiStaticPowerSharingDAPS_Mode2_r16), 0, 0);
    }
    if (value.has_interFreqDynamicPowerSharingDAPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interFreqDynamicPowerSharingDAPS_r16), 0, 1);
    }
    if (value.has_interFreqUL_TransCancellationDAPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interFreqUL_TransCancellationDAPS_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1610_InterFreqDAPS_r16(Decoder& dec, CA_ParametersNR_v1610_InterFreqDAPS_r16& value)
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
        value.interFreqAsyncDAPS_r16 = (CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqAsyncDAPS_r16)0;
    }
    if (present_1) {
        value.interFreqDiffSCS_DAPS_r16 = (CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDiffSCS_DAPS_r16)0;
    }
    if (present_2) {
        value.interFreqMultiUL_TransmissionDAPS_r16 = (CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqMultiUL_TransmissionDAPS_r16)0;
    }
    if (present_3) {
        value.interFreqSemiStaticPowerSharingDAPS_Mode1_r16 = (CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode1_r16)0;
    }
    if (present_4) {
        value.interFreqSemiStaticPowerSharingDAPS_Mode2_r16 = (CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode2_r16)0;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.interFreqDynamicPowerSharingDAPS_r16 = (CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDynamicPowerSharingDAPS_r16)tmp_value;
    }
    if (present_6) {
        value.interFreqUL_TransCancellationDAPS_r16 = (CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqUL_TransCancellationDAPS_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1610_InterFreqDAPS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1610_InterFreqDAPS_r16(CA_ParametersNR_v1610_InterFreqDAPS_r16& value)
{
    if (value.has_interFreqAsyncDAPS_r16) {
    }
    if (value.has_interFreqDiffSCS_DAPS_r16) {
    }
    if (value.has_interFreqMultiUL_TransmissionDAPS_r16) {
    }
    if (value.has_interFreqSemiStaticPowerSharingDAPS_Mode1_r16) {
    }
    if (value.has_interFreqSemiStaticPowerSharingDAPS_Mode2_r16) {
    }
    if (value.has_interFreqDynamicPowerSharingDAPS_r16) {
    }
    if (value.has_interFreqUL_TransCancellationDAPS_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16(Encoder& enc, const CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberOfMonitoringCC_r16), 2, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedSpanArrangement_r16), 0, 1);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16(Decoder& dec, CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 16, tmp_value)) { goto fail; }
        value.maxNumberOfMonitoringCC_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.supportedSpanArrangement_r16 = (CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16_SupportedSpanArrangement_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16(CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16(Encoder& enc, const CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA1_r16), 1, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA2_r16), 1, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedSpanArrangement_r16), 0, 1);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16(Decoder& dec, CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA1_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA2_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.supportedSpanArrangement_r16 = (CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16_SupportedSpanArrangement_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16(CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16(Encoder& enc, const CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionMCG_UE1_r16), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionMCG_UE2_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16(Decoder& dec, CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionMCG_UE1_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionMCG_UE2_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16(CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16(Encoder& enc, const CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionSCG_UE1_r16), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionSCG_UE2_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16(Decoder& dec, CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionSCG_UE1_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionSCG_UE2_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16(CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1610(Encoder& enc, const CA_ParametersNR_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_parallelTxMsgA_SRS_PUCCH_PUSCH_r16);
    enc.WriteBit(value.has_msgA_SUL_r16);
    enc.WriteBit(value.has_jointSearchSpaceSwitchAcrossCells_r16);
    enc.WriteBit(value.has_half_DuplexTDD_CA_SameSCS_r16);
    enc.WriteBit(value.has_scellDormancyWithinActiveTime_r16);
    enc.WriteBit(value.has_scellDormancyOutsideActiveTime_r16);
    enc.WriteBit(value.has_crossCarrierA_CSI_trigDiffSCS_r16);
    enc.WriteBit(value.has_defaultQCL_CrossCarrierA_CSI_Trig_r16);
    enc.WriteBit(value.has_interCA_NonAlignedFrame_r16);
    enc.WriteBit(value.has_simul_SRS_Trans_BC_r16);
    enc.WriteBit(value.has_interFreqDAPS_r16);
    enc.WriteBit(value.has_codebookParametersPerBC_r16);
    enc.WriteBit(value.has_blindDetectFactor_r16);
    enc.WriteBit(value.has_pdcch_MonitoringCA_r16);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA_Mixed_r16);
    enc.WriteBit(value.has_pdcch_BlindDetectionMCG_UE_r16);
    enc.WriteBit(value.has_pdcch_BlindDetectionSCG_UE_r16);
    enc.WriteBit(value.has_pdcch_BlindDetectionMCG_UE_Mixed_r16);
    enc.WriteBit(value.has_pdcch_BlindDetectionSCG_UE_Mixed_r16);
    enc.WriteBit(value.has_crossCarrierSchedulingDL_DiffSCS_r16);
    enc.WriteBit(value.has_crossCarrierSchedulingDefaultQCL_r16);
    enc.WriteBit(value.has_crossCarrierSchedulingUL_DiffSCS_r16);
    enc.WriteBit(value.has_simul_SRS_MIMO_Trans_BC_r16);
    enc.WriteBit(value.has_codebookParametersAdditionPerBC_r16);
    enc.WriteBit(value.has_codebookComboParametersAdditionPerBC_r16);
    if (value.has_parallelTxMsgA_SRS_PUCCH_PUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelTxMsgA_SRS_PUCCH_PUSCH_r16), 0, 0);
    }
    if (value.has_msgA_SUL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_SUL_r16), 0, 0);
    }
    if (value.has_jointSearchSpaceSwitchAcrossCells_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.jointSearchSpaceSwitchAcrossCells_r16), 0, 0);
    }
    if (value.has_half_DuplexTDD_CA_SameSCS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.half_DuplexTDD_CA_SameSCS_r16), 0, 0);
    }
    if (value.has_scellDormancyWithinActiveTime_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scellDormancyWithinActiveTime_r16), 0, 0);
    }
    if (value.has_scellDormancyOutsideActiveTime_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scellDormancyOutsideActiveTime_r16), 0, 0);
    }
    if (value.has_crossCarrierA_CSI_trigDiffSCS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crossCarrierA_CSI_trigDiffSCS_r16), 0, 2);
    }
    if (value.has_defaultQCL_CrossCarrierA_CSI_Trig_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.defaultQCL_CrossCarrierA_CSI_Trig_r16), 0, 1);
    }
    if (value.has_interCA_NonAlignedFrame_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interCA_NonAlignedFrame_r16), 0, 0);
    }
    if (value.has_simul_SRS_Trans_BC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simul_SRS_Trans_BC_r16), 0, 0);
    }
    if (value.has_interFreqDAPS_r16) {
        Encode_CA_ParametersNR_v1610_InterFreqDAPS_r16(enc, value.interFreqDAPS_r16);
    }
    if (value.has_codebookParametersPerBC_r16) {
        Encode_CodebookParameters_v1610(enc, value.codebookParametersPerBC_r16);
    }
    if (value.has_blindDetectFactor_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.blindDetectFactor_r16), 1, 2);
    }
    if (value.has_pdcch_MonitoringCA_r16) {
        Encode_CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16(enc, value.pdcch_MonitoringCA_r16);
    }
    if (value.has_pdcch_BlindDetectionCA_Mixed_r16) {
        Encode_CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16(enc, value.pdcch_BlindDetectionCA_Mixed_r16);
    }
    if (value.has_pdcch_BlindDetectionMCG_UE_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionMCG_UE_r16), 1, 14);
    }
    if (value.has_pdcch_BlindDetectionSCG_UE_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionSCG_UE_r16), 1, 14);
    }
    if (value.has_pdcch_BlindDetectionMCG_UE_Mixed_r16) {
        Encode_CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16(enc, value.pdcch_BlindDetectionMCG_UE_Mixed_r16);
    }
    if (value.has_pdcch_BlindDetectionSCG_UE_Mixed_r16) {
        Encode_CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16(enc, value.pdcch_BlindDetectionSCG_UE_Mixed_r16);
    }
    if (value.has_crossCarrierSchedulingDL_DiffSCS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crossCarrierSchedulingDL_DiffSCS_r16), 0, 2);
    }
    if (value.has_crossCarrierSchedulingDefaultQCL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crossCarrierSchedulingDefaultQCL_r16), 0, 1);
    }
    if (value.has_crossCarrierSchedulingUL_DiffSCS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crossCarrierSchedulingUL_DiffSCS_r16), 0, 2);
    }
    if (value.has_simul_SRS_MIMO_Trans_BC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simul_SRS_MIMO_Trans_BC_r16), 0, 0);
    }
    if (value.has_codebookParametersAdditionPerBC_r16) {
        Encode_CodebookParametersAdditionPerBC_r16(enc, value.codebookParametersAdditionPerBC_r16);
    }
    if (value.has_codebookComboParametersAdditionPerBC_r16) {
        Encode_CodebookComboParametersAdditionPerBC_r16(enc, value.codebookComboParametersAdditionPerBC_r16);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1610(Decoder& dec, CA_ParametersNR_v1610& value)
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
    if (present_0) {
        value.parallelTxMsgA_SRS_PUCCH_PUSCH_r16 = (CA_ParametersNR_v1610_ParallelTxMsgA_SRS_PUCCH_PUSCH_r16)0;
    }
    if (present_1) {
        value.msgA_SUL_r16 = (CA_ParametersNR_v1610_MsgA_SUL_r16)0;
    }
    if (present_2) {
        value.jointSearchSpaceSwitchAcrossCells_r16 = (CA_ParametersNR_v1610_JointSearchSpaceSwitchAcrossCells_r16)0;
    }
    if (present_3) {
        value.half_DuplexTDD_CA_SameSCS_r16 = (CA_ParametersNR_v1610_Half_DuplexTDD_CA_SameSCS_r16)0;
    }
    if (present_4) {
        value.scellDormancyWithinActiveTime_r16 = (CA_ParametersNR_v1610_ScellDormancyWithinActiveTime_r16)0;
    }
    if (present_5) {
        value.scellDormancyOutsideActiveTime_r16 = (CA_ParametersNR_v1610_ScellDormancyOutsideActiveTime_r16)0;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.crossCarrierA_CSI_trigDiffSCS_r16 = (CA_ParametersNR_v1610_CrossCarrierA_CSI_trigDiffSCS_r16)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.defaultQCL_CrossCarrierA_CSI_Trig_r16 = (CA_ParametersNR_v1610_DefaultQCL_CrossCarrierA_CSI_Trig_r16)tmp_value;
    }
    if (present_8) {
        value.interCA_NonAlignedFrame_r16 = (CA_ParametersNR_v1610_InterCA_NonAlignedFrame_r16)0;
    }
    if (present_9) {
        value.simul_SRS_Trans_BC_r16 = (CA_ParametersNR_v1610_Simul_SRS_Trans_BC_r16)0;
    }
    if (present_10) {
        if (Decode_CA_ParametersNR_v1610_InterFreqDAPS_r16(dec, value.interFreqDAPS_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_CodebookParameters_v1610(dec, value.codebookParametersPerBC_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.blindDetectFactor_r16 = (int64_t)tmp_value;
    }
    if (present_13) {
        if (Decode_CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16(dec, value.pdcch_MonitoringCA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
        if (Decode_CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16(dec, value.pdcch_BlindDetectionCA_Mixed_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_15) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 14, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionMCG_UE_r16 = (int64_t)tmp_value;
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 14, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionSCG_UE_r16 = (int64_t)tmp_value;
    }
    if (present_17) {
        if (Decode_CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16(dec, value.pdcch_BlindDetectionMCG_UE_Mixed_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_18) {
        if (Decode_CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16(dec, value.pdcch_BlindDetectionSCG_UE_Mixed_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_19) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.crossCarrierSchedulingDL_DiffSCS_r16 = (CA_ParametersNR_v1610_CrossCarrierSchedulingDL_DiffSCS_r16)tmp_value;
    }
    if (present_20) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.crossCarrierSchedulingDefaultQCL_r16 = (CA_ParametersNR_v1610_CrossCarrierSchedulingDefaultQCL_r16)tmp_value;
    }
    if (present_21) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.crossCarrierSchedulingUL_DiffSCS_r16 = (CA_ParametersNR_v1610_CrossCarrierSchedulingUL_DiffSCS_r16)tmp_value;
    }
    if (present_22) {
        value.simul_SRS_MIMO_Trans_BC_r16 = (CA_ParametersNR_v1610_Simul_SRS_MIMO_Trans_BC_r16)0;
    }
    if (present_23) {
        if (Decode_CodebookParametersAdditionPerBC_r16(dec, value.codebookParametersAdditionPerBC_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_24) {
        if (Decode_CodebookComboParametersAdditionPerBC_r16(dec, value.codebookComboParametersAdditionPerBC_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1610(CA_ParametersNR_v1610& value)
{
    if (value.has_parallelTxMsgA_SRS_PUCCH_PUSCH_r16) {
    }
    if (value.has_msgA_SUL_r16) {
    }
    if (value.has_jointSearchSpaceSwitchAcrossCells_r16) {
    }
    if (value.has_half_DuplexTDD_CA_SameSCS_r16) {
    }
    if (value.has_scellDormancyWithinActiveTime_r16) {
    }
    if (value.has_scellDormancyOutsideActiveTime_r16) {
    }
    if (value.has_crossCarrierA_CSI_trigDiffSCS_r16) {
    }
    if (value.has_defaultQCL_CrossCarrierA_CSI_Trig_r16) {
    }
    if (value.has_interCA_NonAlignedFrame_r16) {
    }
    if (value.has_simul_SRS_Trans_BC_r16) {
    }
    if (value.has_interFreqDAPS_r16) {
        Free_CA_ParametersNR_v1610_InterFreqDAPS_r16(value.interFreqDAPS_r16);
    }
    if (value.has_codebookParametersPerBC_r16) {
        Free_CodebookParameters_v1610(value.codebookParametersPerBC_r16);
    }
    if (value.has_blindDetectFactor_r16) {
    }
    if (value.has_pdcch_MonitoringCA_r16) {
        Free_CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16(value.pdcch_MonitoringCA_r16);
    }
    if (value.has_pdcch_BlindDetectionCA_Mixed_r16) {
        Free_CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16(value.pdcch_BlindDetectionCA_Mixed_r16);
    }
    if (value.has_pdcch_BlindDetectionMCG_UE_r16) {
    }
    if (value.has_pdcch_BlindDetectionSCG_UE_r16) {
    }
    if (value.has_pdcch_BlindDetectionMCG_UE_Mixed_r16) {
        Free_CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16(value.pdcch_BlindDetectionMCG_UE_Mixed_r16);
    }
    if (value.has_pdcch_BlindDetectionSCG_UE_Mixed_r16) {
        Free_CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16(value.pdcch_BlindDetectionSCG_UE_Mixed_r16);
    }
    if (value.has_crossCarrierSchedulingDL_DiffSCS_r16) {
    }
    if (value.has_crossCarrierSchedulingDefaultQCL_r16) {
    }
    if (value.has_crossCarrierSchedulingUL_DiffSCS_r16) {
    }
    if (value.has_simul_SRS_MIMO_Trans_BC_r16) {
    }
    if (value.has_codebookParametersAdditionPerBC_r16) {
        Free_CodebookParametersAdditionPerBC_r16(value.codebookParametersAdditionPerBC_r16);
    }
    if (value.has_codebookComboParametersAdditionPerBC_r16) {
        Free_CodebookComboParametersAdditionPerBC_r16(value.codebookComboParametersAdditionPerBC_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNRDC_v1610(Encoder& enc, const CA_ParametersNRDC_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_intraFR_NR_DC_PwrSharingMode1_r16);
    enc.WriteBit(value.has_intraFR_NR_DC_PwrSharingMode2_r16);
    enc.WriteBit(value.has_intraFR_NR_DC_DynamicPwrSharing_r16);
    enc.WriteBit(value.has_asyncNRDC_r16);
    if (value.has_intraFR_NR_DC_PwrSharingMode1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraFR_NR_DC_PwrSharingMode1_r16), 0, 0);
    }
    if (value.has_intraFR_NR_DC_PwrSharingMode2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraFR_NR_DC_PwrSharingMode2_r16), 0, 0);
    }
    if (value.has_intraFR_NR_DC_DynamicPwrSharing_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraFR_NR_DC_DynamicPwrSharing_r16), 0, 1);
    }
    if (value.has_asyncNRDC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.asyncNRDC_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v1610(Decoder& dec, CA_ParametersNRDC_v1610& value)
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
        value.intraFR_NR_DC_PwrSharingMode1_r16 = (CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode1_r16)0;
    }
    if (present_1) {
        value.intraFR_NR_DC_PwrSharingMode2_r16 = (CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode2_r16)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.intraFR_NR_DC_DynamicPwrSharing_r16 = (CA_ParametersNRDC_v1610_IntraFR_NR_DC_DynamicPwrSharing_r16)tmp_value;
    }
    if (present_3) {
        value.asyncNRDC_r16 = (CA_ParametersNRDC_v1610_AsyncNRDC_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v1610(CA_ParametersNRDC_v1610& value)
{
    if (value.has_intraFR_NR_DC_PwrSharingMode1_r16) {
    }
    if (value.has_intraFR_NR_DC_PwrSharingMode2_r16) {
    }
    if (value.has_intraFR_NR_DC_DynamicPwrSharing_r16) {
    }
    if (value.has_asyncNRDC_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16(Encoder& enc, const MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_eutra_TDD_Config0_r16);
    enc.WriteBit(value.has_eutra_TDD_Config1_r16);
    enc.WriteBit(value.has_eutra_TDD_Config2_r16);
    enc.WriteBit(value.has_eutra_TDD_Config3_r16);
    enc.WriteBit(value.has_eutra_TDD_Config4_r16);
    enc.WriteBit(value.has_eutra_TDD_Config5_r16);
    enc.WriteBit(value.has_eutra_TDD_Config6_r16);
    if (value.has_eutra_TDD_Config0_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_TDD_Config0_r16), 0, 7);
    }
    if (value.has_eutra_TDD_Config1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_TDD_Config1_r16), 0, 7);
    }
    if (value.has_eutra_TDD_Config2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_TDD_Config2_r16), 0, 7);
    }
    if (value.has_eutra_TDD_Config3_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_TDD_Config3_r16), 0, 7);
    }
    if (value.has_eutra_TDD_Config4_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_TDD_Config4_r16), 0, 7);
    }
    if (value.has_eutra_TDD_Config5_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_TDD_Config5_r16), 0, 7);
    }
    if (value.has_eutra_TDD_Config6_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_TDD_Config6_r16), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16(Decoder& dec, MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.eutra_TDD_Config0_r16 = (MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.eutra_TDD_Config1_r16 = (MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.eutra_TDD_Config2_r16 = (MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.eutra_TDD_Config3_r16 = (MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.eutra_TDD_Config4_r16 = (MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.eutra_TDD_Config5_r16 = (MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.eutra_TDD_Config6_r16 = (MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16(MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16& value)
{
    if (value.has_eutra_TDD_Config0_r16) {
    }
    if (value.has_eutra_TDD_Config1_r16) {
    }
    if (value.has_eutra_TDD_Config2_r16) {
    }
    if (value.has_eutra_TDD_Config3_r16) {
    }
    if (value.has_eutra_TDD_Config4_r16) {
    }
    if (value.has_eutra_TDD_Config5_r16) {
    }
    if (value.has_eutra_TDD_Config6_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRDC_Parameters_v1620(Encoder& enc, const MRDC_Parameters_v1620& value)
{
    (void)value;
    enc.WriteBit(value.has_maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16);
    enc.WriteBit(value.has_tdm_restrictionTDD_endc_r16);
    enc.WriteBit(value.has_tdm_restrictionFDD_endc_r16);
    enc.WriteBit(value.has_singleUL_HARQ_offsetTDD_PCell_r16);
    enc.WriteBit(value.has_tdm_restrictionDualTX_FDD_endc_r16);
    if (value.has_maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16) {
        Encode_MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16(enc, value.maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16);
    }
    if (value.has_tdm_restrictionTDD_endc_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tdm_restrictionTDD_endc_r16), 0, 0);
    }
    if (value.has_tdm_restrictionFDD_endc_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tdm_restrictionFDD_endc_r16), 0, 0);
    }
    if (value.has_singleUL_HARQ_offsetTDD_PCell_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.singleUL_HARQ_offsetTDD_PCell_r16), 0, 0);
    }
    if (value.has_tdm_restrictionDualTX_FDD_endc_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tdm_restrictionDualTX_FDD_endc_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_v1620(Decoder& dec, MRDC_Parameters_v1620& value)
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
        if (Decode_MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16(dec, value.maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.tdm_restrictionTDD_endc_r16 = (MRDC_Parameters_v1620_Tdm_restrictionTDD_endc_r16)0;
    }
    if (present_2) {
        value.tdm_restrictionFDD_endc_r16 = (MRDC_Parameters_v1620_Tdm_restrictionFDD_endc_r16)0;
    }
    if (present_3) {
        value.singleUL_HARQ_offsetTDD_PCell_r16 = (MRDC_Parameters_v1620_SingleUL_HARQ_offsetTDD_PCell_r16)0;
    }
    if (present_4) {
        value.tdm_restrictionDualTX_FDD_endc_r16 = (MRDC_Parameters_v1620_Tdm_restrictionDualTX_FDD_endc_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_v1620(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_v1620(MRDC_Parameters_v1620& value)
{
    if (value.has_maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16) {
        Free_MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16(value.maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16);
    }
    if (value.has_tdm_restrictionTDD_endc_r16) {
    }
    if (value.has_tdm_restrictionFDD_endc_r16) {
    }
    if (value.has_singleUL_HARQ_offsetTDD_PCell_r16) {
    }
    if (value.has_tdm_restrictionDualTX_FDD_endc_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v1610(Encoder& enc, const BandCombination_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_bandList_v1610);
    enc.WriteBit(value.has_ca_ParametersNR_v1610);
    enc.WriteBit(value.has_ca_ParametersNRDC_v1610);
    enc.WriteBit(value.has_powerClass_v1610);
    enc.WriteBit(value.has_powerClassNRPart_r16);
    enc.WriteBit(value.has_featureSetCombinationDAPS_r16);
    enc.WriteBit(value.has_mrdc_Parameters_v1620);
    if (value.has_bandList_v1610) {
enc.WriteConstrainedLength(value.bandList_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bandList_v1610_count; ++i) {
    Encode_BandParameters_v1610(enc, value.bandList_v1610_items[i]);
}
    }
    if (value.has_ca_ParametersNR_v1610) {
        Encode_CA_ParametersNR_v1610(enc, value.ca_ParametersNR_v1610);
    }
    if (value.has_ca_ParametersNRDC_v1610) {
        Encode_CA_ParametersNRDC_v1610(enc, value.ca_ParametersNRDC_v1610);
    }
    if (value.has_powerClass_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.powerClass_v1610), 0, 0);
    }
    if (value.has_powerClassNRPart_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.powerClassNRPart_r16), 0, 3);
    }
    if (value.has_featureSetCombinationDAPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.featureSetCombinationDAPS_r16), 0, 1024);
    }
    if (value.has_mrdc_Parameters_v1620) {
        Encode_MRDC_Parameters_v1620(enc, value.mrdc_Parameters_v1620);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1610(Decoder& dec, BandCombination_v1610& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.bandList_v1610_count)) { goto fail; }
if (value.bandList_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bandList_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bandList_v1610_count > 0u) {
    value.bandList_v1610_items = (BandParameters_v1610*)std::malloc((std::size_t)value.bandList_v1610_count * sizeof(BandParameters_v1610));
    if (value.bandList_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bandList_v1610_items, 0, (std::size_t)value.bandList_v1610_count * sizeof(BandParameters_v1610));
}
for (std::uint32_t i = 0; i < value.bandList_v1610_count; ++i) {
    if (Decode_BandParameters_v1610(dec, value.bandList_v1610_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        if (Decode_CA_ParametersNR_v1610(dec, value.ca_ParametersNR_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CA_ParametersNRDC_v1610(dec, value.ca_ParametersNRDC_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.powerClass_v1610 = (BandCombination_v1610_PowerClass_v1610)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.powerClassNRPart_r16 = (BandCombination_v1610_PowerClassNRPart_r16)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1024, tmp_value)) { goto fail; }
        value.featureSetCombinationDAPS_r16 = (FeatureSetCombinationId)tmp_value;
    }
    if (present_6) {
        if (Decode_MRDC_Parameters_v1620(dec, value.mrdc_Parameters_v1620) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1610(BandCombination_v1610& value)
{
    if (value.has_bandList_v1610) {
        if (value.bandList_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.bandList_v1610_count; ++i) {
                Free_BandParameters_v1610(value.bandList_v1610_items[i]);
            }
            std::free(value.bandList_v1610_items);
            value.bandList_v1610_items = nullptr;
        }
        value.bandList_v1610_count = 0;
    }
    if (value.has_ca_ParametersNR_v1610) {
        Free_CA_ParametersNR_v1610(value.ca_ParametersNR_v1610);
    }
    if (value.has_ca_ParametersNRDC_v1610) {
        Free_CA_ParametersNRDC_v1610(value.ca_ParametersNRDC_v1610);
    }
    if (value.has_powerClass_v1610) {
    }
    if (value.has_powerClassNRPart_r16) {
    }
    if (value.has_featureSetCombinationDAPS_r16) {
    }
    if (value.has_mrdc_Parameters_v1620) {
        Free_MRDC_Parameters_v1620(value.mrdc_Parameters_v1620);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SimulSRS_ForAntennaSwitching_r16(Encoder& enc, const SimulSRS_ForAntennaSwitching_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_supportSRS_xTyR_xLessThanY_r16);
    enc.WriteBit(value.has_supportSRS_xTyR_xEqualToY_r16);
    enc.WriteBit(value.has_supportSRS_AntennaSwitching_r16);
    if (value.has_supportSRS_xTyR_xLessThanY_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportSRS_xTyR_xLessThanY_r16), 0, 0);
    }
    if (value.has_supportSRS_xTyR_xEqualToY_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportSRS_xTyR_xEqualToY_r16), 0, 0);
    }
    if (value.has_supportSRS_AntennaSwitching_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportSRS_AntennaSwitching_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SimulSRS_ForAntennaSwitching_r16(Decoder& dec, SimulSRS_ForAntennaSwitching_r16& value)
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
        value.supportSRS_xTyR_xLessThanY_r16 = (SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xLessThanY_r16)0;
    }
    if (present_1) {
        value.supportSRS_xTyR_xEqualToY_r16 = (SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xEqualToY_r16)0;
    }
    if (present_2) {
        value.supportSRS_AntennaSwitching_r16 = (SimulSRS_ForAntennaSwitching_r16_SupportSRS_AntennaSwitching_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SimulSRS_ForAntennaSwitching_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SimulSRS_ForAntennaSwitching_r16(SimulSRS_ForAntennaSwitching_r16& value)
{
    if (value.has_supportSRS_xTyR_xLessThanY_r16) {
    }
    if (value.has_supportSRS_xTyR_xEqualToY_r16) {
    }
    if (value.has_supportSRS_AntennaSwitching_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1630(Encoder& enc, const CA_ParametersNR_v1630& value)
{
    (void)value;
    enc.WriteBit(value.has_simulTX_SRS_AntSwitchingInterBandUL_CA_r16);
    enc.WriteBit(value.has_beamManagementType_r16);
    enc.WriteBit(value.has_intraBandFreqSeparationUL_AggBW_GapBW_r16);
    enc.WriteBit(value.has_interCA_NonAlignedFrame_B_r16);
    if (value.has_simulTX_SRS_AntSwitchingInterBandUL_CA_r16) {
        Encode_SimulSRS_ForAntennaSwitching_r16(enc, value.simulTX_SRS_AntSwitchingInterBandUL_CA_r16);
    }
    if (value.has_beamManagementType_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamManagementType_r16), 0, 1);
    }
    if (value.has_intraBandFreqSeparationUL_AggBW_GapBW_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraBandFreqSeparationUL_AggBW_GapBW_r16), 0, 2);
    }
    if (value.has_interCA_NonAlignedFrame_B_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interCA_NonAlignedFrame_B_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1630(Decoder& dec, CA_ParametersNR_v1630& value)
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
        if (Decode_SimulSRS_ForAntennaSwitching_r16(dec, value.simulTX_SRS_AntSwitchingInterBandUL_CA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.beamManagementType_r16 = (CA_ParametersNR_v1630_BeamManagementType_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.intraBandFreqSeparationUL_AggBW_GapBW_r16 = (CA_ParametersNR_v1630_IntraBandFreqSeparationUL_AggBW_GapBW_r16)tmp_value;
    }
    if (present_3) {
        value.interCA_NonAlignedFrame_B_r16 = (CA_ParametersNR_v1630_InterCA_NonAlignedFrame_B_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1630(CA_ParametersNR_v1630& value)
{
    if (value.has_simulTX_SRS_AntSwitchingInterBandUL_CA_r16) {
        Free_SimulSRS_ForAntennaSwitching_r16(value.simulTX_SRS_AntSwitchingInterBandUL_CA_r16);
    }
    if (value.has_beamManagementType_r16) {
    }
    if (value.has_intraBandFreqSeparationUL_AggBW_GapBW_r16) {
    }
    if (value.has_interCA_NonAlignedFrame_B_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNRDC_v1630(Encoder& enc, const CA_ParametersNRDC_v1630& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1610);
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1630);
    if (value.has_ca_ParametersNR_ForDC_v1610) {
        Encode_CA_ParametersNR_v1610(enc, value.ca_ParametersNR_ForDC_v1610);
    }
    if (value.has_ca_ParametersNR_ForDC_v1630) {
        Encode_CA_ParametersNR_v1630(enc, value.ca_ParametersNR_ForDC_v1630);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v1630(Decoder& dec, CA_ParametersNRDC_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1610(dec, value.ca_ParametersNR_ForDC_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNR_v1630(dec, value.ca_ParametersNR_ForDC_v1630) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v1630(CA_ParametersNRDC_v1630& value)
{
    if (value.has_ca_ParametersNR_ForDC_v1610) {
        Free_CA_ParametersNR_v1610(value.ca_ParametersNR_ForDC_v1610);
    }
    if (value.has_ca_ParametersNR_ForDC_v1630) {
        Free_CA_ParametersNR_v1630(value.ca_ParametersNR_ForDC_v1630);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16(Encoder& enc, const MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16);
    enc.WriteBit(value.has_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16);
    if (value.has_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16), 0, 7);
    }
    if (value.has_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16(Decoder& dec, MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16& value)
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
        value.maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16 = (MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16 = (MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16(MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16& value)
{
    if (value.has_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16) {
    }
    if (value.has_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRDC_Parameters_v1630(Encoder& enc, const MRDC_Parameters_v1630& value)
{
    (void)value;
    enc.WriteBit(value.has_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16);
    enc.WriteBit(value.has_interBandMRDC_WithOverlapDL_Bands_r16);
    if (value.has_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16) {
        Encode_MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16(enc, value.maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16);
    }
    if (value.has_interBandMRDC_WithOverlapDL_Bands_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interBandMRDC_WithOverlapDL_Bands_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_v1630(Decoder& dec, MRDC_Parameters_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16(dec, value.maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.interBandMRDC_WithOverlapDL_Bands_r16 = (MRDC_Parameters_v1630_InterBandMRDC_WithOverlapDL_Bands_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_v1630(MRDC_Parameters_v1630& value)
{
    if (value.has_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16) {
        Free_MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16(value.maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16);
    }
    if (value.has_interBandMRDC_WithOverlapDL_Bands_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v1630(Encoder& enc, const BandCombination_v1630& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_ParametersNR_v1630);
    enc.WriteBit(value.has_ca_ParametersNRDC_v1630);
    enc.WriteBit(value.has_mrdc_Parameters_v1630);
    enc.WriteBit(value.has_supportedTxBandCombListPerBC_Sidelink_r16);
    enc.WriteBit(value.has_supportedRxBandCombListPerBC_Sidelink_r16);
    enc.WriteBit(value.has_scalingFactorTxSidelink_r16);
    enc.WriteBit(value.has_scalingFactorRxSidelink_r16);
    if (value.has_ca_ParametersNR_v1630) {
        Encode_CA_ParametersNR_v1630(enc, value.ca_ParametersNR_v1630);
    }
    if (value.has_ca_ParametersNRDC_v1630) {
        Encode_CA_ParametersNRDC_v1630(enc, value.ca_ParametersNRDC_v1630);
    }
    if (value.has_mrdc_Parameters_v1630) {
        Encode_MRDC_Parameters_v1630(enc, value.mrdc_Parameters_v1630);
    }
    if (value.has_supportedTxBandCombListPerBC_Sidelink_r16) {
        enc.WriteSemiConstrainedBitString(value.supportedTxBandCombListPerBC_Sidelink_r16.bytes, value.supportedTxBandCombListPerBC_Sidelink_r16.bitLength, 1, 4294967295u);
    }
    if (value.has_supportedRxBandCombListPerBC_Sidelink_r16) {
        enc.WriteSemiConstrainedBitString(value.supportedRxBandCombListPerBC_Sidelink_r16.bytes, value.supportedRxBandCombListPerBC_Sidelink_r16.bitLength, 1, 4294967295u);
    }
    if (value.has_scalingFactorTxSidelink_r16) {
enc.WriteConstrainedLength(value.scalingFactorTxSidelink_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scalingFactorTxSidelink_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.scalingFactorTxSidelink_r16_items[i]), 0, 3);
}
    }
    if (value.has_scalingFactorRxSidelink_r16) {
enc.WriteConstrainedLength(value.scalingFactorRxSidelink_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scalingFactorRxSidelink_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.scalingFactorRxSidelink_r16_items[i]), 0, 3);
}
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1630(Decoder& dec, BandCombination_v1630& value)
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
        if (Decode_CA_ParametersNR_v1630(dec, value.ca_ParametersNR_v1630) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNRDC_v1630(dec, value.ca_ParametersNRDC_v1630) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MRDC_Parameters_v1630(dec, value.mrdc_Parameters_v1630) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedBitString(string_bytes, string_length, 1, 0xFFFFFFFFu)) { goto fail; }
        value.supportedTxBandCombListPerBC_Sidelink_r16.bytes = string_bytes;
        value.supportedTxBandCombListPerBC_Sidelink_r16.bitLength = string_length;
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedBitString(string_bytes, string_length, 1, 0xFFFFFFFFu)) { goto fail; }
        value.supportedRxBandCombListPerBC_Sidelink_r16.bytes = string_bytes;
        value.supportedRxBandCombListPerBC_Sidelink_r16.bitLength = string_length;
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.scalingFactorTxSidelink_r16_count)) { goto fail; }
if (value.scalingFactorTxSidelink_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.scalingFactorTxSidelink_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.scalingFactorTxSidelink_r16_count > 0u) {
    value.scalingFactorTxSidelink_r16_items = (ScalingFactorSidelink_r16*)std::malloc((std::size_t)value.scalingFactorTxSidelink_r16_count * sizeof(ScalingFactorSidelink_r16));
    if (value.scalingFactorTxSidelink_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.scalingFactorTxSidelink_r16_items, 0, (std::size_t)value.scalingFactorTxSidelink_r16_count * sizeof(ScalingFactorSidelink_r16));
}
for (std::uint32_t i = 0; i < value.scalingFactorTxSidelink_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.scalingFactorTxSidelink_r16_items[i] = (ScalingFactorSidelink_r16)tmp_value;
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.scalingFactorRxSidelink_r16_count)) { goto fail; }
if (value.scalingFactorRxSidelink_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.scalingFactorRxSidelink_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.scalingFactorRxSidelink_r16_count > 0u) {
    value.scalingFactorRxSidelink_r16_items = (ScalingFactorSidelink_r16*)std::malloc((std::size_t)value.scalingFactorRxSidelink_r16_count * sizeof(ScalingFactorSidelink_r16));
    if (value.scalingFactorRxSidelink_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.scalingFactorRxSidelink_r16_items, 0, (std::size_t)value.scalingFactorRxSidelink_r16_count * sizeof(ScalingFactorSidelink_r16));
}
for (std::uint32_t i = 0; i < value.scalingFactorRxSidelink_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.scalingFactorRxSidelink_r16_items[i] = (ScalingFactorSidelink_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1630(BandCombination_v1630& value)
{
    if (value.has_ca_ParametersNR_v1630) {
        Free_CA_ParametersNR_v1630(value.ca_ParametersNR_v1630);
    }
    if (value.has_ca_ParametersNRDC_v1630) {
        Free_CA_ParametersNRDC_v1630(value.ca_ParametersNRDC_v1630);
    }
    if (value.has_mrdc_Parameters_v1630) {
        Free_MRDC_Parameters_v1630(value.mrdc_Parameters_v1630);
    }
    if (value.has_supportedTxBandCombListPerBC_Sidelink_r16) {
        std::free(value.supportedTxBandCombListPerBC_Sidelink_r16.bytes);
        value.supportedTxBandCombListPerBC_Sidelink_r16.bytes = nullptr;
        value.supportedTxBandCombListPerBC_Sidelink_r16.bitLength = 0;
    }
    if (value.has_supportedRxBandCombListPerBC_Sidelink_r16) {
        std::free(value.supportedRxBandCombListPerBC_Sidelink_r16.bytes);
        value.supportedRxBandCombListPerBC_Sidelink_r16.bytes = nullptr;
        value.supportedRxBandCombListPerBC_Sidelink_r16.bitLength = 0;
    }
    if (value.has_scalingFactorTxSidelink_r16) {
        if (value.scalingFactorTxSidelink_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.scalingFactorTxSidelink_r16_count; ++i) {
            }
            std::free(value.scalingFactorTxSidelink_r16_items);
            value.scalingFactorTxSidelink_r16_items = nullptr;
        }
        value.scalingFactorTxSidelink_r16_count = 0;
    }
    if (value.has_scalingFactorRxSidelink_r16) {
        if (value.scalingFactorRxSidelink_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.scalingFactorRxSidelink_r16_count; ++i) {
            }
            std::free(value.scalingFactorRxSidelink_r16_items);
            value.scalingFactorRxSidelink_r16_items = nullptr;
        }
        value.scalingFactorRxSidelink_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_Grp_CarrierTypes_r16(Encoder& enc, const PUCCH_Grp_CarrierTypes_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_fr1_NonSharedTDD_r16);
    enc.WriteBit(value.has_fr1_SharedTDD_r16);
    enc.WriteBit(value.has_fr1_NonSharedFDD_r16);
    enc.WriteBit(value.has_fr2_r16);
    if (value.has_fr1_NonSharedTDD_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1_NonSharedTDD_r16), 0, 0);
    }
    if (value.has_fr1_SharedTDD_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1_SharedTDD_r16), 0, 0);
    }
    if (value.has_fr1_NonSharedFDD_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1_NonSharedFDD_r16), 0, 0);
    }
    if (value.has_fr2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr2_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_Grp_CarrierTypes_r16(Decoder& dec, PUCCH_Grp_CarrierTypes_r16& value)
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
        value.fr1_NonSharedTDD_r16 = (PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedTDD_r16)0;
    }
    if (present_1) {
        value.fr1_SharedTDD_r16 = (PUCCH_Grp_CarrierTypes_r16_Fr1_SharedTDD_r16)0;
    }
    if (present_2) {
        value.fr1_NonSharedFDD_r16 = (PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedFDD_r16)0;
    }
    if (present_3) {
        value.fr2_r16 = (PUCCH_Grp_CarrierTypes_r16_Fr2_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_Grp_CarrierTypes_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_Grp_CarrierTypes_r16(PUCCH_Grp_CarrierTypes_r16& value)
{
    if (value.has_fr1_NonSharedTDD_r16) {
    }
    if (value.has_fr1_SharedTDD_r16) {
    }
    if (value.has_fr1_NonSharedFDD_r16) {
    }
    if (value.has_fr2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16(Encoder& enc, const CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA1_r16), 1, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA2_r16), 1, 15);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16(Decoder& dec, CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA1_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA2_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16(CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNR_v1640(Encoder& enc, const CA_ParametersNR_v1640& value)
{
    (void)value;
    enc.WriteBit(value.has_uplinkTxDC_TwoCarrierReport_r16);
    enc.WriteBit(value.has_maxUpTo3Diff_NumerologiesConfigSinglePUCCH_grp_r16);
    enc.WriteBit(value.has_maxUpTo4Diff_NumerologiesConfigSinglePUCCH_grp_r16);
    enc.WriteBit(value.has_twoPUCCH_Grp_ConfigurationsList_r16);
    enc.WriteBit(value.has_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16);
    enc.WriteBit(value.has_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16);
    enc.WriteBit(value.has_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16);
    enc.WriteBit(value.has_pdcch_MonitoringCA_NonAlignedSpan_r16);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16);
    if (value.has_uplinkTxDC_TwoCarrierReport_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxDC_TwoCarrierReport_r16), 0, 0);
    }
    if (value.has_maxUpTo3Diff_NumerologiesConfigSinglePUCCH_grp_r16) {
        Encode_PUCCH_Grp_CarrierTypes_r16(enc, value.maxUpTo3Diff_NumerologiesConfigSinglePUCCH_grp_r16);
    }
    if (value.has_maxUpTo4Diff_NumerologiesConfigSinglePUCCH_grp_r16) {
        Encode_PUCCH_Grp_CarrierTypes_r16(enc, value.maxUpTo4Diff_NumerologiesConfigSinglePUCCH_grp_r16);
    }
    if (value.has_twoPUCCH_Grp_ConfigurationsList_r16) {
enc.WriteConstrainedLength(value.twoPUCCH_Grp_ConfigurationsList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.twoPUCCH_Grp_ConfigurationsList_r16_count; ++i) {
    Encode_TwoPUCCH_Grp_Configurations_r16(enc, value.twoPUCCH_Grp_ConfigurationsList_r16_items[i]);
}
    }
    if (value.has_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16), 0, 0);
    }
    if (value.has_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16), 0, 0);
    }
    if (value.has_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16), 0, 0);
    }
    if (value.has_pdcch_MonitoringCA_NonAlignedSpan_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringCA_NonAlignedSpan_r16), 2, 16);
    }
    if (value.has_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16) {
        Encode_CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16(enc, value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1640(Decoder& dec, CA_ParametersNR_v1640& value)
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
        value.uplinkTxDC_TwoCarrierReport_r16 = (CA_ParametersNR_v1640_UplinkTxDC_TwoCarrierReport_r16)0;
    }
    if (present_1) {
        if (Decode_PUCCH_Grp_CarrierTypes_r16(dec, value.maxUpTo3Diff_NumerologiesConfigSinglePUCCH_grp_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_PUCCH_Grp_CarrierTypes_r16(dec, value.maxUpTo4Diff_NumerologiesConfigSinglePUCCH_grp_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.twoPUCCH_Grp_ConfigurationsList_r16_count)) { goto fail; }
if (value.twoPUCCH_Grp_ConfigurationsList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.twoPUCCH_Grp_ConfigurationsList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.twoPUCCH_Grp_ConfigurationsList_r16_count > 0u) {
    value.twoPUCCH_Grp_ConfigurationsList_r16_items = (TwoPUCCH_Grp_Configurations_r16*)std::malloc((std::size_t)value.twoPUCCH_Grp_ConfigurationsList_r16_count * sizeof(TwoPUCCH_Grp_Configurations_r16));
    if (value.twoPUCCH_Grp_ConfigurationsList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.twoPUCCH_Grp_ConfigurationsList_r16_items, 0, (std::size_t)value.twoPUCCH_Grp_ConfigurationsList_r16_count * sizeof(TwoPUCCH_Grp_Configurations_r16));
}
for (std::uint32_t i = 0; i < value.twoPUCCH_Grp_ConfigurationsList_r16_count; ++i) {
    if (Decode_TwoPUCCH_Grp_Configurations_r16(dec, value.twoPUCCH_Grp_ConfigurationsList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
        value.diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16 = (CA_ParametersNR_v1640_DiffNumerologyAcrossPUCCH_Group_CarrierTypes_r16)0;
    }
    if (present_5) {
        value.diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16 = (CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16)0;
    }
    if (present_6) {
        value.diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16 = (CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16)0;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 16, tmp_value)) { goto fail; }
        value.pdcch_MonitoringCA_NonAlignedSpan_r16 = (int64_t)tmp_value;
    }
    if (present_8) {
        if (Decode_CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16(dec, value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1640(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1640(CA_ParametersNR_v1640& value)
{
    if (value.has_uplinkTxDC_TwoCarrierReport_r16) {
    }
    if (value.has_maxUpTo3Diff_NumerologiesConfigSinglePUCCH_grp_r16) {
        Free_PUCCH_Grp_CarrierTypes_r16(value.maxUpTo3Diff_NumerologiesConfigSinglePUCCH_grp_r16);
    }
    if (value.has_maxUpTo4Diff_NumerologiesConfigSinglePUCCH_grp_r16) {
        Free_PUCCH_Grp_CarrierTypes_r16(value.maxUpTo4Diff_NumerologiesConfigSinglePUCCH_grp_r16);
    }
    if (value.has_twoPUCCH_Grp_ConfigurationsList_r16) {
        if (value.twoPUCCH_Grp_ConfigurationsList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.twoPUCCH_Grp_ConfigurationsList_r16_count; ++i) {
                Free_TwoPUCCH_Grp_Configurations_r16(value.twoPUCCH_Grp_ConfigurationsList_r16_items[i]);
            }
            std::free(value.twoPUCCH_Grp_ConfigurationsList_r16_items);
            value.twoPUCCH_Grp_ConfigurationsList_r16_items = nullptr;
        }
        value.twoPUCCH_Grp_ConfigurationsList_r16_count = 0;
    }
    if (value.has_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16) {
    }
    if (value.has_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16) {
    }
    if (value.has_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16) {
    }
    if (value.has_pdcch_MonitoringCA_NonAlignedSpan_r16) {
    }
    if (value.has_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16) {
        Free_CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16(value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNRDC_v1640(Encoder& enc, const CA_ParametersNRDC_v1640& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1640);
    if (value.has_ca_ParametersNR_ForDC_v1640) {
        Encode_CA_ParametersNR_v1640(enc, value.ca_ParametersNR_ForDC_v1640);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v1640(Decoder& dec, CA_ParametersNRDC_v1640& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1640(dec, value.ca_ParametersNR_ForDC_v1640) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v1640(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v1640(CA_ParametersNRDC_v1640& value)
{
    if (value.has_ca_ParametersNR_ForDC_v1640) {
        Free_CA_ParametersNR_v1640(value.ca_ParametersNR_ForDC_v1640);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandCombination_v1640(Encoder& enc, const BandCombination_v1640& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_ParametersNR_v1640);
    enc.WriteBit(value.has_ca_ParametersNRDC_v1640);
    if (value.has_ca_ParametersNR_v1640) {
        Encode_CA_ParametersNR_v1640(enc, value.ca_ParametersNR_v1640);
    }
    if (value.has_ca_ParametersNRDC_v1640) {
        Encode_CA_ParametersNRDC_v1640(enc, value.ca_ParametersNRDC_v1640);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1640(Decoder& dec, BandCombination_v1640& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1640(dec, value.ca_ParametersNR_v1640) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNRDC_v1640(dec, value.ca_ParametersNRDC_v1640) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1640(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1640(BandCombination_v1640& value)
{
    if (value.has_ca_ParametersNR_v1640) {
        Free_CA_ParametersNR_v1640(value.ca_ParametersNR_v1640);
    }
    if (value.has_ca_ParametersNRDC_v1640) {
        Free_CA_ParametersNRDC_v1640(value.ca_ParametersNRDC_v1640);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CA_ParametersNRDC_v1650(Encoder& enc, const CA_ParametersNRDC_v1650& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedCellGrouping_r16);
    if (value.has_supportedCellGrouping_r16) {
        enc.WriteConstrainedBitString(value.supportedCellGrouping_r16.bytes, value.supportedCellGrouping_r16.bitLength, 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v1650(Decoder& dec, CA_ParametersNRDC_v1650& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 32)) { goto fail; }
        value.supportedCellGrouping_r16.bytes = string_bytes;
        value.supportedCellGrouping_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v1650(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v1650(CA_ParametersNRDC_v1650& value)
{
    if (value.has_supportedCellGrouping_r16) {
        std::free(value.supportedCellGrouping_r16.bytes);
        value.supportedCellGrouping_r16.bytes = nullptr;
        value.supportedCellGrouping_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
