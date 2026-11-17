/* ============================================================================
 * src/generated/codec_part020.cpp — 生成的编解码函数
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

ErrorCode Encode_NCR_SemiPersistentFwdResource_r18(Encoder& enc, const NCR_SemiPersistentFwdResource_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.semiPersistentFwdRsrcId_r18), 0, 127);
    enc.WriteConstrainedInteger((std::int64_t)(value.beamIndex_r18), 0, 63);
    Encode_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18(enc, value.semiPersistentTimeRsrc_r18);
    return enc.Error();
}

ErrorCode Decode_NCR_SemiPersistentFwdResource_r18(Decoder& dec, NCR_SemiPersistentFwdResource_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.semiPersistentFwdRsrcId_r18 = (NCR_SemiPersistentFwdResourceId_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.beamIndex_r18 = (int64_t)tmp_value;
    }
    {
        if (Decode_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18(dec, value.semiPersistentTimeRsrc_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_SemiPersistentFwdResource_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_SemiPersistentFwdResource_r18(NCR_SemiPersistentFwdResource_r18& value)
{
    Free_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18(value.semiPersistentTimeRsrc_r18);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NeedForGapsIntraFreq_r16(Encoder& enc, const NeedForGapsIntraFreq_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.servCellId_r16), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapIndicationIntra_r16), 0, 1);
    return enc.Error();
}

ErrorCode Decode_NeedForGapsIntraFreq_r16(Decoder& dec, NeedForGapsIntraFreq_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servCellId_r16 = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.gapIndicationIntra_r16 = (NeedForGapsIntraFreq_r16_GapIndicationIntra_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForGapsIntraFreq_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForGapsIntraFreq_r16(NeedForGapsIntraFreq_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NeedForGapsNR_r16(Encoder& enc, const NeedForGapsNR_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.bandNR_r16), 1, 1024);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapIndication_r16), 0, 1);
    return enc.Error();
}

ErrorCode Decode_NeedForGapsNR_r16(Decoder& dec, NeedForGapsNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.bandNR_r16 = (FreqBandIndicatorNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.gapIndication_r16 = (NeedForGapsNR_r16_GapIndication_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForGapsNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForGapsNR_r16(NeedForGapsNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NeedForNCSG_EUTRA_r17(Encoder& enc, const NeedForNCSG_EUTRA_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.bandEUTRA_r17), 1, 256);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapIndication_r17), 0, 2);
    return enc.Error();
}

ErrorCode Decode_NeedForNCSG_EUTRA_r17(Decoder& dec, NeedForNCSG_EUTRA_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
        value.bandEUTRA_r17 = (FreqBandIndicatorEUTRA)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.gapIndication_r17 = (NeedForNCSG_EUTRA_r17_GapIndication_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForNCSG_EUTRA_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForNCSG_EUTRA_r17(NeedForNCSG_EUTRA_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NeedForNCSG_IntraFreq_r17(Encoder& enc, const NeedForNCSG_IntraFreq_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.servCellId_r17), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapIndicationIntra_r17), 0, 2);
    return enc.Error();
}

ErrorCode Decode_NeedForNCSG_IntraFreq_r17(Decoder& dec, NeedForNCSG_IntraFreq_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servCellId_r17 = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.gapIndicationIntra_r17 = (NeedForNCSG_IntraFreq_r17_GapIndicationIntra_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForNCSG_IntraFreq_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForNCSG_IntraFreq_r17(NeedForNCSG_IntraFreq_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NeedForNCSG_NR_r17(Encoder& enc, const NeedForNCSG_NR_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.bandNR_r17), 1, 1024);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapIndication_r17), 0, 2);
    return enc.Error();
}

ErrorCode Decode_NeedForNCSG_NR_r17(Decoder& dec, NeedForNCSG_NR_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.bandNR_r17 = (FreqBandIndicatorNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.gapIndication_r17 = (NeedForNCSG_NR_r17_GapIndication_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForNCSG_NR_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForNCSG_NR_r17(NeedForNCSG_NR_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NeedForInterruptionNR_r18(Encoder& enc, const NeedForInterruptionNR_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_interruptionIndication_r18);
    if (value.has_interruptionIndication_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interruptionIndication_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_NeedForInterruptionNR_r18(Decoder& dec, NeedForInterruptionNR_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.interruptionIndication_r18 = (NeedForInterruptionNR_r18_InterruptionIndication_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForInterruptionNR_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForInterruptionNR_r18(NeedForInterruptionNR_r18& value)
{
    if (value.has_interruptionIndication_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NPN_Identity_r16_Pni_npn_r16(Encoder& enc, const NPN_Identity_r16_Pni_npn_r16& value)
{
    (void)value;
    Encode_PLMN_Identity(enc, value.plmn_Identity_r16);
enc.WriteConstrainedLength(value.cag_IdentityList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cag_IdentityList_r16_count; ++i) {
    Encode_CAG_IdentityInfo_r16(enc, value.cag_IdentityList_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_NPN_Identity_r16_Pni_npn_r16(Decoder& dec, NPN_Identity_r16_Pni_npn_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.cag_IdentityList_r16_count)) { goto fail; }
if (value.cag_IdentityList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cag_IdentityList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cag_IdentityList_r16_count > 0u) {
    value.cag_IdentityList_r16_items = (CAG_IdentityInfo_r16*)std::malloc((std::size_t)value.cag_IdentityList_r16_count * sizeof(CAG_IdentityInfo_r16));
    if (value.cag_IdentityList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cag_IdentityList_r16_items, 0, (std::size_t)value.cag_IdentityList_r16_count * sizeof(CAG_IdentityInfo_r16));
}
for (std::uint32_t i = 0; i < value.cag_IdentityList_r16_count; ++i) {
    if (Decode_CAG_IdentityInfo_r16(dec, value.cag_IdentityList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_NPN_Identity_r16_Pni_npn_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NPN_Identity_r16_Pni_npn_r16(NPN_Identity_r16_Pni_npn_r16& value)
{
    Free_PLMN_Identity(value.plmn_Identity_r16);
    if (value.cag_IdentityList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.cag_IdentityList_r16_count; ++i) {
            Free_CAG_IdentityInfo_r16(value.cag_IdentityList_r16_items[i]);
        }
        std::free(value.cag_IdentityList_r16_items);
        value.cag_IdentityList_r16_items = nullptr;
    }
    value.cag_IdentityList_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NPN_Identity_r16_Snpn_r16(Encoder& enc, const NPN_Identity_r16_Snpn_r16& value)
{
    (void)value;
    Encode_PLMN_Identity(enc, value.plmn_Identity_r16);
enc.WriteConstrainedLength(value.nid_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nid_List_r16_count; ++i) {
    enc.WriteFixedBitString(value.nid_List_r16_items[i].bytes, value.nid_List_r16_items[i].bitLength, 44, 44);
}
    return enc.Error();
}

ErrorCode Decode_NPN_Identity_r16_Snpn_r16(Decoder& dec, NPN_Identity_r16_Snpn_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.nid_List_r16_count)) { goto fail; }
if (value.nid_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nid_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nid_List_r16_count > 0u) {
    value.nid_List_r16_items = (NID_r16*)std::malloc((std::size_t)value.nid_List_r16_count * sizeof(NID_r16));
    if (value.nid_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nid_List_r16_items, 0, (std::size_t)value.nid_List_r16_count * sizeof(NID_r16));
}
for (std::uint32_t i = 0; i < value.nid_List_r16_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 44)) { goto fail; }
    string_length = 44;
    value.nid_List_r16_items[i].bytes = string_bytes;
    value.nid_List_r16_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_NPN_Identity_r16_Snpn_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NPN_Identity_r16_Snpn_r16(NPN_Identity_r16_Snpn_r16& value)
{
    Free_PLMN_Identity(value.plmn_Identity_r16);
    if (value.nid_List_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.nid_List_r16_count; ++i) {
            std::free(value.nid_List_r16_items[i].bytes);
            value.nid_List_r16_items[i].bytes = nullptr;
            value.nid_List_r16_items[i].bitLength = 0;
        }
        std::free(value.nid_List_r16_items);
        value.nid_List_r16_items = nullptr;
    }
    value.nid_List_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NPN_Identity_r16(Encoder& enc, const NPN_Identity_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case NPN_Identity_r16_Tag_pni_npn_r16:
        Encode_NPN_Identity_r16_Pni_npn_r16(enc, value.u.pni_npn_r16);
        break;
    case NPN_Identity_r16_Tag_snpn_r16:
        Encode_NPN_Identity_r16_Snpn_r16(enc, value.u.snpn_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NPN_Identity_r16(Decoder& dec, NPN_Identity_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (NPN_Identity_r16_Tag)root_index;
    switch (value.tag) {
    case NPN_Identity_r16_Tag_pni_npn_r16: {
        if (Decode_NPN_Identity_r16_Pni_npn_r16(dec, value.u.pni_npn_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case NPN_Identity_r16_Tag_snpn_r16: {
        if (Decode_NPN_Identity_r16_Snpn_r16(dec, value.u.snpn_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NPN_Identity_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NPN_Identity_r16(NPN_Identity_r16& value)
{
    switch (value.tag) {
    case NPN_Identity_r16_Tag_pni_npn_r16:
        Free_NPN_Identity_r16_Pni_npn_r16(value.u.pni_npn_r16);
        break;
    case NPN_Identity_r16_Tag_snpn_r16:
        Free_NPN_Identity_r16_Snpn_r16(value.u.snpn_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CAG_IdentityInfo_r16(Encoder& enc, const CAG_IdentityInfo_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_manualCAGselectionAllowed_r16);
    enc.WriteFixedBitString(value.cag_Identity_r16.bytes, value.cag_Identity_r16.bitLength, 32, 32);
    if (value.has_manualCAGselectionAllowed_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.manualCAGselectionAllowed_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CAG_IdentityInfo_r16(Decoder& dec, CAG_IdentityInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.cag_Identity_r16.bytes = string_bytes;
        value.cag_Identity_r16.bitLength = string_length;
    }
    if (present_0) {
        value.manualCAGselectionAllowed_r16 = (CAG_IdentityInfo_r16_ManualCAGselectionAllowed_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CAG_IdentityInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CAG_IdentityInfo_r16(CAG_IdentityInfo_r16& value)
{
    std::free(value.cag_Identity_r16.bytes);
    value.cag_Identity_r16.bytes = nullptr;
    value.cag_Identity_r16.bitLength = 0;
    if (value.has_manualCAGselectionAllowed_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NPN_IdentityInfo_r16_ExtGroup1(Encoder& enc, const NPN_IdentityInfo_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_gNB_ID_Length_r17);
    if (value.has_gNB_ID_Length_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_ID_Length_r17), 22, 32);
    }
    return enc.Error();
}

ErrorCode Decode_NPN_IdentityInfo_r16_ExtGroup1(Decoder& dec, NPN_IdentityInfo_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(22, 32, tmp_value)) { goto fail; }
        value.gNB_ID_Length_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NPN_IdentityInfo_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NPN_IdentityInfo_r16_ExtGroup1(NPN_IdentityInfo_r16_ExtGroup1& value)
{
    if (value.has_gNB_ID_Length_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NPN_IdentityInfo_r16_ExtGroup2(Encoder& enc, const NPN_IdentityInfo_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_mobileIAB_Support_r18);
    if (value.has_mobileIAB_Support_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mobileIAB_Support_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_NPN_IdentityInfo_r16_ExtGroup2(Decoder& dec, NPN_IdentityInfo_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.mobileIAB_Support_r18 = (NPN_IdentityInfo_r16_ExtGroup2_MobileIAB_Support_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NPN_IdentityInfo_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NPN_IdentityInfo_r16_ExtGroup2(NPN_IdentityInfo_r16_ExtGroup2& value)
{
    if (value.has_mobileIAB_Support_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NPN_IdentityInfo_r16(Encoder& enc, const NPN_IdentityInfo_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ranac_r16);
    enc.WriteBit(value.has_iab_Support_r16);
enc.WriteConstrainedLength(value.npn_IdentityList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.npn_IdentityList_r16_count; ++i) {
    Encode_NPN_Identity_r16(enc, value.npn_IdentityList_r16_items[i]);
}
    enc.WriteFixedBitString(value.trackingAreaCode_r16.bytes, value.trackingAreaCode_r16.bitLength, 24, 24);
    if (value.has_ranac_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ranac_r16), 0, 255);
    }
    enc.WriteFixedBitString(value.cellIdentity_r16.bytes, value.cellIdentity_r16.bitLength, 36, 36);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellReservedForOperatorUse_r16), 0, 1);
    if (value.has_iab_Support_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.iab_Support_r16), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_NPN_IdentityInfo_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_NPN_IdentityInfo_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_NPN_IdentityInfo_r16(Decoder& dec, NPN_IdentityInfo_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.npn_IdentityList_r16_count)) { goto fail; }
if (value.npn_IdentityList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.npn_IdentityList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.npn_IdentityList_r16_count > 0u) {
    value.npn_IdentityList_r16_items = (NPN_Identity_r16*)std::malloc((std::size_t)value.npn_IdentityList_r16_count * sizeof(NPN_Identity_r16));
    if (value.npn_IdentityList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.npn_IdentityList_r16_items, 0, (std::size_t)value.npn_IdentityList_r16_count * sizeof(NPN_Identity_r16));
}
for (std::uint32_t i = 0; i < value.npn_IdentityList_r16_count; ++i) {
    if (Decode_NPN_Identity_r16(dec, value.npn_IdentityList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.trackingAreaCode_r16.bytes = string_bytes;
        value.trackingAreaCode_r16.bitLength = string_length;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.ranac_r16 = (RAN_AreaCode)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 36)) { goto fail; }
        string_length = 36;
        value.cellIdentity_r16.bytes = string_bytes;
        value.cellIdentity_r16.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellReservedForOperatorUse_r16 = (NPN_IdentityInfo_r16_CellReservedForOperatorUse_r16)tmp_value;
    }
    if (present_1) {
        value.iab_Support_r16 = (NPN_IdentityInfo_r16_Iab_Support_r16)0;
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
    if (Decode_NPN_IdentityInfo_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_NPN_IdentityInfo_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_NPN_IdentityInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NPN_IdentityInfo_r16(NPN_IdentityInfo_r16& value)
{
    if (value.npn_IdentityList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.npn_IdentityList_r16_count; ++i) {
            Free_NPN_Identity_r16(value.npn_IdentityList_r16_items[i]);
        }
        std::free(value.npn_IdentityList_r16_items);
        value.npn_IdentityList_r16_items = nullptr;
    }
    value.npn_IdentityList_r16_count = 0;
    std::free(value.trackingAreaCode_r16.bytes);
    value.trackingAreaCode_r16.bytes = nullptr;
    value.trackingAreaCode_r16.bitLength = 0;
    if (value.has_ranac_r16) {
    }
    std::free(value.cellIdentity_r16.bytes);
    value.cellIdentity_r16.bytes = nullptr;
    value.cellIdentity_r16.bitLength = 0;
    if (value.has_iab_Support_r16) {
    }
    if (value.has_extGroup1) {
        Free_NPN_IdentityInfo_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_NPN_IdentityInfo_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_DL_PRS_Resource_r17_ExtGroup1(Encoder& enc, const NR_DL_PRS_Resource_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_dl_PRS_ResourceSymbolOffset_v1800);
    if (value.has_dl_PRS_ResourceSymbolOffset_v1800) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_ResourceSymbolOffset_v1800), 13, 13);
    }
    return enc.Error();
}

ErrorCode Decode_NR_DL_PRS_Resource_r17_ExtGroup1(Decoder& dec, NR_DL_PRS_Resource_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(13, 13, tmp_value)) { goto fail; }
        value.dl_PRS_ResourceSymbolOffset_v1800 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_DL_PRS_Resource_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_DL_PRS_Resource_r17_ExtGroup1(NR_DL_PRS_Resource_r17_ExtGroup1& value)
{
    if (value.has_dl_PRS_ResourceSymbolOffset_v1800) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DL_PRS_QCL_Info_r17_Ssb_r17(Encoder& enc, const DL_PRS_QCL_Info_r17_Ssb_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Index_r17), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.rs_Type_r17), 0, 2);
    return enc.Error();
}

ErrorCode Decode_DL_PRS_QCL_Info_r17_Ssb_r17(Decoder& dec, DL_PRS_QCL_Info_r17_Ssb_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ssb_Index_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.rs_Type_r17 = (DL_PRS_QCL_Info_r17_Ssb_r17_Rs_Type_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PRS_QCL_Info_r17_Ssb_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PRS_QCL_Info_r17_Ssb_r17(DL_PRS_QCL_Info_r17_Ssb_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DL_PRS_QCL_Info_r17_Dl_PRS_r17(Encoder& enc, const DL_PRS_QCL_Info_r17_Dl_PRS_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.qcl_DL_PRS_ResourceID_r17), 0, 63);
    return enc.Error();
}

ErrorCode Decode_DL_PRS_QCL_Info_r17_Dl_PRS_r17(Decoder& dec, DL_PRS_QCL_Info_r17_Dl_PRS_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.qcl_DL_PRS_ResourceID_r17 = (NR_DL_PRS_ResourceID_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PRS_QCL_Info_r17_Dl_PRS_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PRS_QCL_Info_r17_Dl_PRS_r17(DL_PRS_QCL_Info_r17_Dl_PRS_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DL_PRS_QCL_Info_r17(Encoder& enc, const DL_PRS_QCL_Info_r17& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 2) {
        if (choice_index >= 2) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 2));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case DL_PRS_QCL_Info_r17_Tag_ssb_r17:
        Encode_DL_PRS_QCL_Info_r17_Ssb_r17(enc, value.u.ssb_r17);
        break;
    case DL_PRS_QCL_Info_r17_Tag_dl_PRS_r17:
        Encode_DL_PRS_QCL_Info_r17_Dl_PRS_r17(enc, value.u.dl_PRS_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PRS_QCL_Info_r17(Decoder& dec, DL_PRS_QCL_Info_r17& value)
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
        value.tag = (DL_PRS_QCL_Info_r17_Tag)(2 + extension_index);
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
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (DL_PRS_QCL_Info_r17_Tag)root_index;
    switch (value.tag) {
    case DL_PRS_QCL_Info_r17_Tag_ssb_r17: {
        if (Decode_DL_PRS_QCL_Info_r17_Ssb_r17(dec, value.u.ssb_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case DL_PRS_QCL_Info_r17_Tag_dl_PRS_r17: {
        if (Decode_DL_PRS_QCL_Info_r17_Dl_PRS_r17(dec, value.u.dl_PRS_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PRS_QCL_Info_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PRS_QCL_Info_r17(DL_PRS_QCL_Info_r17& value)
{
    switch (value.tag) {
    case DL_PRS_QCL_Info_r17_Tag_ssb_r17:
        Free_DL_PRS_QCL_Info_r17_Ssb_r17(value.u.ssb_r17);
        break;
    case DL_PRS_QCL_Info_r17_Tag_dl_PRS_r17:
        Free_DL_PRS_QCL_Info_r17_Dl_PRS_r17(value.u.dl_PRS_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17(Encoder& enc, const NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 4) {
        if (choice_index >= 4) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 4));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n2_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n2_r17), 0, 1);
        break;
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n4_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n4_r17), 0, 3);
        break;
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n6_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n6_r17), 0, 5);
        break;
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n12_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n12_r17), 0, 11);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17(Decoder& dec, NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17& value)
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
        value.tag = (NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag)(4 + extension_index);
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
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag)root_index;
    switch (value.tag) {
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n2_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.n2_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n4_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.n4_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n6_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.u.n6_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n12_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.u.n12_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17(NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17& value)
{
    switch (value.tag) {
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n2_r17:
        break;
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n4_r17:
        break;
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n6_r17:
        break;
    case NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n12_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_DL_PRS_Resource_r17(Encoder& enc, const NR_DL_PRS_Resource_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dl_PRS_QCL_Info_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.nr_DL_PRS_ResourceID_r17), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_SequenceID_r17), 0, 4095);
    Encode_NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17(enc, value.dl_PRS_CombSizeN_AndReOffset_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_ResourceSlotOffset_r17), 0, 511);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_ResourceSymbolOffset_r17), 0, 12);
    if (value.has_dl_PRS_QCL_Info_r17) {
        Encode_DL_PRS_QCL_Info_r17(enc, value.dl_PRS_QCL_Info_r17);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_NR_DL_PRS_Resource_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_NR_DL_PRS_Resource_r17(Decoder& dec, NR_DL_PRS_Resource_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.nr_DL_PRS_ResourceID_r17 = (NR_DL_PRS_ResourceID_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4095, tmp_value)) { goto fail; }
        value.dl_PRS_SequenceID_r17 = (int64_t)tmp_value;
    }
    {
        if (Decode_NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17(dec, value.dl_PRS_CombSizeN_AndReOffset_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.dl_PRS_ResourceSlotOffset_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 12, tmp_value)) { goto fail; }
        value.dl_PRS_ResourceSymbolOffset_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_DL_PRS_QCL_Info_r17(dec, value.dl_PRS_QCL_Info_r17) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_NR_DL_PRS_Resource_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_NR_DL_PRS_Resource_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_DL_PRS_Resource_r17(NR_DL_PRS_Resource_r17& value)
{
    Free_NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17(value.dl_PRS_CombSizeN_AndReOffset_r17);
    if (value.has_dl_PRS_QCL_Info_r17) {
        Free_DL_PRS_QCL_Info_r17(value.dl_PRS_QCL_Info_r17);
    }
    if (value.has_extGroup1) {
        Free_NR_DL_PRS_Resource_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_NS_PmaxValue(Encoder& enc, const NR_NS_PmaxValue& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalPmax);
    if (value.has_additionalPmax) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalPmax), -30, 33);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.additionalSpectrumEmission), 0, 7);
    return enc.Error();
}

ErrorCode Decode_NR_NS_PmaxValue(Decoder& dec, NR_NS_PmaxValue& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.additionalPmax = (P_Max)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.additionalSpectrumEmission = (AdditionalSpectrumEmission)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_NS_PmaxValue(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_NS_PmaxValue(NR_NS_PmaxValue& value)
{
    if (value.has_additionalPmax) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_NS_PmaxValue_v1760(Encoder& enc, const NR_NS_PmaxValue_v1760& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalSpectrumEmission_v1760);
    if (value.has_additionalSpectrumEmission_v1760) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalSpectrumEmission_v1760), 8, 39);
    }
    return enc.Error();
}

ErrorCode Decode_NR_NS_PmaxValue_v1760(Decoder& dec, NR_NS_PmaxValue_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(8, 39, tmp_value)) { goto fail; }
        value.additionalSpectrumEmission_v1760 = (AdditionalSpectrumEmission_v1760)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_NS_PmaxValue_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_NS_PmaxValue_v1760(NR_NS_PmaxValue_v1760& value)
{
    if (value.has_additionalSpectrumEmission_v1760) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_NS_PmaxValueAerial_r18(Encoder& enc, const NR_NS_PmaxValueAerial_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalPmax_r18);
    if (value.has_additionalPmax_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalPmax_r18), -30, 33);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.additionalSpectrumEmission_r18), 0, 39);
    return enc.Error();
}

ErrorCode Decode_NR_NS_PmaxValueAerial_r18(Decoder& dec, NR_NS_PmaxValueAerial_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.additionalPmax_r18 = (P_Max)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.additionalSpectrumEmission_r18 = (AdditionalSpectrumEmission_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_NS_PmaxValueAerial_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_NS_PmaxValueAerial_r18(NR_NS_PmaxValueAerial_r18& value)
{
    if (value.has_additionalPmax_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NZP_CSI_RS_Resource_ExtGroup1(Encoder& enc, const NZP_CSI_RS_Resource_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_subcarrierSpacing_r18);
    enc.WriteBit(value.has_absoluteFrequencyPointA_r18);
    enc.WriteBit(value.has_cyclicPrefix_r18);
    if (value.has_subcarrierSpacing_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing_r18), 0, 7);
    }
    if (value.has_absoluteFrequencyPointA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.absoluteFrequencyPointA_r18), 0, 3279165);
    }
    if (value.has_cyclicPrefix_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cyclicPrefix_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_NZP_CSI_RS_Resource_ExtGroup1(Decoder& dec, NZP_CSI_RS_Resource_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing_r18 = (SubcarrierSpacing)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.absoluteFrequencyPointA_r18 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_2) {
        value.cyclicPrefix_r18 = (NZP_CSI_RS_Resource_ExtGroup1_CyclicPrefix_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NZP_CSI_RS_Resource_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NZP_CSI_RS_Resource_ExtGroup1(NZP_CSI_RS_Resource_ExtGroup1& value)
{
    if (value.has_subcarrierSpacing_r18) {
    }
    if (value.has_absoluteFrequencyPointA_r18) {
    }
    if (value.has_cyclicPrefix_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NZP_CSI_RS_Resource(Encoder& enc, const NZP_CSI_RS_Resource& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_powerControlOffsetSS);
    enc.WriteBit(value.has_periodicityAndOffset);
    enc.WriteBit(value.has_qcl_InfoPeriodicCSI_RS);
    enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_ResourceId), 0, 191);
    Encode_CSI_RS_ResourceMapping(enc, value.resourceMapping);
    enc.WriteConstrainedInteger((std::int64_t)(value.powerControlOffset), -8, 15);
    if (value.has_powerControlOffsetSS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.powerControlOffsetSS), 0, 3);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.scramblingID), 0, 1023);
    if (value.has_periodicityAndOffset) {
        Encode_CSI_ResourcePeriodicityAndOffset(enc, value.periodicityAndOffset);
    }
    if (value.has_qcl_InfoPeriodicCSI_RS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.qcl_InfoPeriodicCSI_RS), 0, 127);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_NZP_CSI_RS_Resource_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_NZP_CSI_RS_Resource(Decoder& dec, NZP_CSI_RS_Resource& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.nzp_CSI_RS_ResourceId = (NZP_CSI_RS_ResourceId)tmp_value;
    }
    {
        if (Decode_CSI_RS_ResourceMapping(dec, value.resourceMapping) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-8, 15, tmp_value)) { goto fail; }
        value.powerControlOffset = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.powerControlOffsetSS = (NZP_CSI_RS_Resource_PowerControlOffsetSS)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.scramblingID = (ScramblingId)tmp_value;
    }
    if (present_1) {
        if (Decode_CSI_ResourcePeriodicityAndOffset(dec, value.periodicityAndOffset) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.qcl_InfoPeriodicCSI_RS = (TCI_StateId)tmp_value;
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
    if (Decode_NZP_CSI_RS_Resource_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_NZP_CSI_RS_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NZP_CSI_RS_Resource(NZP_CSI_RS_Resource& value)
{
    Free_CSI_RS_ResourceMapping(value.resourceMapping);
    if (value.has_powerControlOffsetSS) {
    }
    if (value.has_periodicityAndOffset) {
        Free_CSI_ResourcePeriodicityAndOffset(value.periodicityAndOffset);
    }
    if (value.has_qcl_InfoPeriodicCSI_RS) {
    }
    if (value.has_extGroup1) {
        Free_NZP_CSI_RS_Resource_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NZP_CSI_RS_ResourceSet_ExtGroup1(Encoder& enc, const NZP_CSI_RS_ResourceSet_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_aperiodicTriggeringOffset_r16);
    if (value.has_aperiodicTriggeringOffset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicTriggeringOffset_r16), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_NZP_CSI_RS_ResourceSet_ExtGroup1(Decoder& dec, NZP_CSI_RS_ResourceSet_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.aperiodicTriggeringOffset_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NZP_CSI_RS_ResourceSet_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NZP_CSI_RS_ResourceSet_ExtGroup1(NZP_CSI_RS_ResourceSet_ExtGroup1& value)
{
    if (value.has_aperiodicTriggeringOffset_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NZP_CSI_RS_Pairing_r17(Encoder& enc, const NZP_CSI_RS_Pairing_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_ResourceId1_r17), 1, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_ResourceId2_r17), 1, 7);
    return enc.Error();
}

ErrorCode Decode_NZP_CSI_RS_Pairing_r17(Decoder& dec, NZP_CSI_RS_Pairing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.nzp_CSI_RS_ResourceId1_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.nzp_CSI_RS_ResourceId2_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NZP_CSI_RS_Pairing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NZP_CSI_RS_Pairing_r17(NZP_CSI_RS_Pairing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CMRGroupingAndPairing_r17(Encoder& enc, const CMRGroupingAndPairing_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_pair1OfNZP_CSI_RS_r17);
    enc.WriteBit(value.has_pair2OfNZP_CSI_RS_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofResourcesGroup1_r17), 1, 7);
    if (value.has_pair1OfNZP_CSI_RS_r17) {
        Encode_NZP_CSI_RS_Pairing_r17(enc, value.pair1OfNZP_CSI_RS_r17);
    }
    if (value.has_pair2OfNZP_CSI_RS_r17) {
        Encode_NZP_CSI_RS_Pairing_r17(enc, value.pair2OfNZP_CSI_RS_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CMRGroupingAndPairing_r17(Decoder& dec, CMRGroupingAndPairing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.nrofResourcesGroup1_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_NZP_CSI_RS_Pairing_r17(dec, value.pair1OfNZP_CSI_RS_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_NZP_CSI_RS_Pairing_r17(dec, value.pair2OfNZP_CSI_RS_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CMRGroupingAndPairing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CMRGroupingAndPairing_r17(CMRGroupingAndPairing_r17& value)
{
    if (value.has_pair1OfNZP_CSI_RS_r17) {
        Free_NZP_CSI_RS_Pairing_r17(value.pair1OfNZP_CSI_RS_r17);
    }
    if (value.has_pair2OfNZP_CSI_RS_r17) {
        Free_NZP_CSI_RS_Pairing_r17(value.pair2OfNZP_CSI_RS_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NZP_CSI_RS_ResourceSet_ExtGroup2(Encoder& enc, const NZP_CSI_RS_ResourceSet_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_pdc_Info_r17);
    enc.WriteBit(value.has_cmrGroupingAndPairing_r17);
    enc.WriteBit(value.has_aperiodicTriggeringOffset_r17);
    enc.WriteBit(value.has_aperiodicTriggeringOffsetL2_r17);
    if (value.has_pdc_Info_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdc_Info_r17), 0, 0);
    }
    if (value.has_cmrGroupingAndPairing_r17) {
        Encode_CMRGroupingAndPairing_r17(enc, value.cmrGroupingAndPairing_r17);
    }
    if (value.has_aperiodicTriggeringOffset_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicTriggeringOffset_r17), 0, 124);
    }
    if (value.has_aperiodicTriggeringOffsetL2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicTriggeringOffsetL2_r17), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_NZP_CSI_RS_ResourceSet_ExtGroup2(Decoder& dec, NZP_CSI_RS_ResourceSet_ExtGroup2& value)
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
        value.pdc_Info_r17 = (NZP_CSI_RS_ResourceSet_ExtGroup2_Pdc_Info_r17)0;
    }
    if (present_1) {
        if (Decode_CMRGroupingAndPairing_r17(dec, value.cmrGroupingAndPairing_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 124, tmp_value)) { goto fail; }
        value.aperiodicTriggeringOffset_r17 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.aperiodicTriggeringOffsetL2_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NZP_CSI_RS_ResourceSet_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NZP_CSI_RS_ResourceSet_ExtGroup2(NZP_CSI_RS_ResourceSet_ExtGroup2& value)
{
    if (value.has_pdc_Info_r17) {
    }
    if (value.has_cmrGroupingAndPairing_r17) {
        Free_CMRGroupingAndPairing_r17(value.cmrGroupingAndPairing_r17);
    }
    if (value.has_aperiodicTriggeringOffset_r17) {
    }
    if (value.has_aperiodicTriggeringOffsetL2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NZP_CSI_RS_ResourceSet_ExtGroup3(Encoder& enc, const NZP_CSI_RS_ResourceSet_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_resourceType_r18);
    if (value.has_resourceType_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceType_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_NZP_CSI_RS_ResourceSet_ExtGroup3(Decoder& dec, NZP_CSI_RS_ResourceSet_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.resourceType_r18 = (NZP_CSI_RS_ResourceSet_ExtGroup3_ResourceType_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NZP_CSI_RS_ResourceSet_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NZP_CSI_RS_ResourceSet_ExtGroup3(NZP_CSI_RS_ResourceSet_ExtGroup3& value)
{
    if (value.has_resourceType_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NZP_CSI_RS_ResourceSet(Encoder& enc, const NZP_CSI_RS_ResourceSet& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_repetition);
    enc.WriteBit(value.has_aperiodicTriggeringOffset);
    enc.WriteBit(value.has_trs_Info);
    enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_ResourceSetId), 0, 63);
enc.WriteConstrainedLength(value.nzp_CSI_RS_Resources_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_Resources_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_Resources_items[i]), 0, 191);
}
    if (value.has_repetition) {
        enc.WriteConstrainedInteger((std::int64_t)(value.repetition), 0, 1);
    }
    if (value.has_aperiodicTriggeringOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicTriggeringOffset), 0, 6);
    }
    if (value.has_trs_Info) {
        enc.WriteConstrainedInteger((std::int64_t)(value.trs_Info), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_NZP_CSI_RS_ResourceSet_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_NZP_CSI_RS_ResourceSet_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_NZP_CSI_RS_ResourceSet_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_NZP_CSI_RS_ResourceSet(Decoder& dec, NZP_CSI_RS_ResourceSet& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.nzp_CSI_ResourceSetId = (NZP_CSI_RS_ResourceSetId)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.nzp_CSI_RS_Resources_count)) { goto fail; }
if (value.nzp_CSI_RS_Resources_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nzp_CSI_RS_Resources_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nzp_CSI_RS_Resources_count > 0u) {
    value.nzp_CSI_RS_Resources_items = (NZP_CSI_RS_ResourceId*)std::malloc((std::size_t)value.nzp_CSI_RS_Resources_count * sizeof(NZP_CSI_RS_ResourceId));
    if (value.nzp_CSI_RS_Resources_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nzp_CSI_RS_Resources_items, 0, (std::size_t)value.nzp_CSI_RS_Resources_count * sizeof(NZP_CSI_RS_ResourceId));
}
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_Resources_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
    value.nzp_CSI_RS_Resources_items[i] = (NZP_CSI_RS_ResourceId)tmp_value;
}
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.repetition = (NZP_CSI_RS_ResourceSet_Repetition)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.aperiodicTriggeringOffset = (int64_t)tmp_value;
    }
    if (present_2) {
        value.trs_Info = (NZP_CSI_RS_ResourceSet_Trs_Info)0;
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
    if (Decode_NZP_CSI_RS_ResourceSet_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_NZP_CSI_RS_ResourceSet_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_NZP_CSI_RS_ResourceSet_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_NZP_CSI_RS_ResourceSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NZP_CSI_RS_ResourceSet(NZP_CSI_RS_ResourceSet& value)
{
    if (value.nzp_CSI_RS_Resources_items != nullptr) {
        for (std::uint32_t i = 0; i < value.nzp_CSI_RS_Resources_count; ++i) {
        }
        std::free(value.nzp_CSI_RS_Resources_items);
        value.nzp_CSI_RS_Resources_items = nullptr;
    }
    value.nzp_CSI_RS_Resources_count = 0;
    if (value.has_repetition) {
    }
    if (value.has_aperiodicTriggeringOffset) {
    }
    if (value.has_trs_Info) {
    }
    if (value.has_extGroup1) {
        Free_NZP_CSI_RS_ResourceSet_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_NZP_CSI_RS_ResourceSet_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_NZP_CSI_RS_ResourceSet_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PathlossReferenceRS_r17_ReferenceSignal_r17(Encoder& enc, const PathlossReferenceRS_r17_ReferenceSignal_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PathlossReferenceRS_r17_ReferenceSignal_r17_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case PathlossReferenceRS_r17_ReferenceSignal_r17_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PathlossReferenceRS_r17_ReferenceSignal_r17(Decoder& dec, PathlossReferenceRS_r17_ReferenceSignal_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PathlossReferenceRS_r17_ReferenceSignal_r17_Tag)root_index;
    switch (value.tag) {
    case PathlossReferenceRS_r17_ReferenceSignal_r17_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case PathlossReferenceRS_r17_ReferenceSignal_r17_Tag_csi_RS_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PathlossReferenceRS_r17_ReferenceSignal_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PathlossReferenceRS_r17_ReferenceSignal_r17(PathlossReferenceRS_r17_ReferenceSignal_r17& value)
{
    switch (value.tag) {
    case PathlossReferenceRS_r17_ReferenceSignal_r17_Tag_ssb_Index:
        break;
    case PathlossReferenceRS_r17_ReferenceSignal_r17_Tag_csi_RS_Index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PathlossReferenceRS_r17(Encoder& enc, const PathlossReferenceRS_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalPCI_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceRS_Id_r17), 0, 63);
    Encode_PathlossReferenceRS_r17_ReferenceSignal_r17(enc, value.referenceSignal_r17);
    if (value.has_additionalPCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalPCI_r17), 1, 7);
    }
    return enc.Error();
}

ErrorCode Decode_PathlossReferenceRS_r17(Decoder& dec, PathlossReferenceRS_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.pathlossReferenceRS_Id_r17 = (PathlossReferenceRS_Id_r17)tmp_value;
    }
    {
        if (Decode_PathlossReferenceRS_r17_ReferenceSignal_r17(dec, value.referenceSignal_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.additionalPCI_r17 = (AdditionalPCIIndex_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PathlossReferenceRS_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PathlossReferenceRS_r17(PathlossReferenceRS_r17& value)
{
    Free_PathlossReferenceRS_r17_ReferenceSignal_r17(value.referenceSignal_r17);
    if (value.has_additionalPCI_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PCI_RangeElement(Encoder& enc, const PCI_RangeElement& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pci_RangeIndex), 1, 8);
    Encode_PCI_Range(enc, value.pci_Range);
    return enc.Error();
}

ErrorCode Decode_PCI_RangeElement(Decoder& dec, PCI_RangeElement& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.pci_RangeIndex = (PCI_RangeIndex)tmp_value;
    }
    {
        if (Decode_PCI_Range(dec, value.pci_Range) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PCI_RangeElement(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCI_RangeElement(PCI_RangeElement& value)
{
    Free_PCI_Range(value.pci_Range);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CellGroupForSwitch_r16(Encoder& enc, const CellGroupForSwitch_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_CellGroupForSwitch_r16(Decoder& dec, CellGroupForSwitch_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ServCellIndex*)std::malloc((std::size_t)value.count * sizeof(ServCellIndex));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.items[i] = (ServCellIndex)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_CellGroupForSwitch_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGroupForSwitch_r16(CellGroupForSwitch_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_TimeDomainResourceAllocation(Encoder& enc, const PDSCH_TimeDomainResourceAllocation& value)
{
    (void)value;
    enc.WriteBit(value.has_k0);
    if (value.has_k0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.k0), 0, 32);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.mappingType), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.startSymbolAndLength), 0, 127);
    return enc.Error();
}

ErrorCode Decode_PDSCH_TimeDomainResourceAllocation(Decoder& dec, PDSCH_TimeDomainResourceAllocation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.k0 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mappingType = (PDSCH_TimeDomainResourceAllocation_MappingType)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.startSymbolAndLength = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_TimeDomainResourceAllocation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_TimeDomainResourceAllocation(PDSCH_TimeDomainResourceAllocation& value)
{
    if (value.has_k0) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1(Encoder& enc, const PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_k0_v1710);
    if (value.has_k0_v1710) {
        enc.WriteConstrainedInteger((std::int64_t)(value.k0_v1710), 33, 128);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1(Decoder& dec, PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(33, 128, tmp_value)) { goto fail; }
        value.k0_v1710 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1(PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1& value)
{
    if (value.has_k0_v1710) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2(Encoder& enc, const PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_repetitionNumber_v1730);
    if (value.has_repetitionNumber_v1730) {
        enc.WriteConstrainedInteger((std::int64_t)(value.repetitionNumber_v1730), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2(Decoder& dec, PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.repetitionNumber_v1730 = (PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2(PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2& value)
{
    if (value.has_repetitionNumber_v1730) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_TimeDomainResourceAllocation_r16(Encoder& enc, const PDSCH_TimeDomainResourceAllocation_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_k0_r16);
    enc.WriteBit(value.has_repetitionNumber_r16);
    if (value.has_k0_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.k0_r16), 0, 32);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.mappingType_r16), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.startSymbolAndLength_r16), 0, 127);
    if (value.has_repetitionNumber_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.repetitionNumber_r16), 0, 7);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_TimeDomainResourceAllocation_r16(Decoder& dec, PDSCH_TimeDomainResourceAllocation_r16& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.k0_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mappingType_r16 = (PDSCH_TimeDomainResourceAllocation_r16_MappingType_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.startSymbolAndLength_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.repetitionNumber_r16 = (PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16)tmp_value;
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
    if (Decode_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_PDSCH_TimeDomainResourceAllocation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_TimeDomainResourceAllocation_r16(PDSCH_TimeDomainResourceAllocation_r16& value)
{
    if (value.has_k0_r16) {
    }
    if (value.has_repetitionNumber_r16) {
    }
    if (value.has_extGroup1) {
        Free_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MultiPDSCH_TDRA_r17(Encoder& enc, const MultiPDSCH_TDRA_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
enc.WriteConstrainedLength(value.pdsch_TDRA_List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdsch_TDRA_List_r17_count; ++i) {
    Encode_PDSCH_TimeDomainResourceAllocation_r16(enc, value.pdsch_TDRA_List_r17_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_MultiPDSCH_TDRA_r17(Decoder& dec, MultiPDSCH_TDRA_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdsch_TDRA_List_r17_count)) { goto fail; }
if (value.pdsch_TDRA_List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdsch_TDRA_List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdsch_TDRA_List_r17_count > 0u) {
    value.pdsch_TDRA_List_r17_items = (PDSCH_TimeDomainResourceAllocation_r16*)std::malloc((std::size_t)value.pdsch_TDRA_List_r17_count * sizeof(PDSCH_TimeDomainResourceAllocation_r16));
    if (value.pdsch_TDRA_List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdsch_TDRA_List_r17_items, 0, (std::size_t)value.pdsch_TDRA_List_r17_count * sizeof(PDSCH_TimeDomainResourceAllocation_r16));
}
for (std::uint32_t i = 0; i < value.pdsch_TDRA_List_r17_count; ++i) {
    if (Decode_PDSCH_TimeDomainResourceAllocation_r16(dec, value.pdsch_TDRA_List_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_MultiPDSCH_TDRA_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MultiPDSCH_TDRA_r17(MultiPDSCH_TDRA_r17& value)
{
    if (value.pdsch_TDRA_List_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.pdsch_TDRA_List_r17_count; ++i) {
            Free_PDSCH_TimeDomainResourceAllocation_r16(value.pdsch_TDRA_List_r17_items[i]);
        }
        std::free(value.pdsch_TDRA_List_r17_items);
        value.pdsch_TDRA_List_r17_items = nullptr;
    }
    value.pdsch_TDRA_List_r17_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1(Encoder& enc, const PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_perHARQ_Ext_r17);
    if (value.has_perHARQ_Ext_r17) {
enc.WriteConstrainedLength(value.perHARQ_Ext_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.perHARQ_Ext_r17_count; ++i) {
    enc.WriteFixedBitString(value.perHARQ_Ext_r17_items[i].bytes, value.perHARQ_Ext_r17_items[i].bitLength, 32, 32);
}
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1(Decoder& dec, PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.perHARQ_Ext_r17_count)) { goto fail; }
if (value.perHARQ_Ext_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.perHARQ_Ext_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.perHARQ_Ext_r17_count > 0u) {
    value.perHARQ_Ext_r17_items = (BitString*)std::malloc((std::size_t)value.perHARQ_Ext_r17_count * sizeof(BitString));
    if (value.perHARQ_Ext_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.perHARQ_Ext_r17_items, 0, (std::size_t)value.perHARQ_Ext_r17_count * sizeof(BitString));
}
for (std::uint32_t i = 0; i < value.perHARQ_Ext_r17_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
    string_length = 32;
    value.perHARQ_Ext_r17_items[i].bytes = string_bytes;
    value.perHARQ_Ext_r17_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1(PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1& value)
{
    if (value.has_perHARQ_Ext_r17) {
        if (value.perHARQ_Ext_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.perHARQ_Ext_r17_count; ++i) {
                std::free(value.perHARQ_Ext_r17_items[i].bytes);
                value.perHARQ_Ext_r17_items[i].bytes = nullptr;
                value.perHARQ_Ext_r17_items[i].bitLength = 0;
            }
            std::free(value.perHARQ_Ext_r17_items);
            value.perHARQ_Ext_r17_items = nullptr;
        }
        value.perHARQ_Ext_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC(Encoder& enc, const PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC(Decoder& dec, PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC(PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ(Encoder& enc, const PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteFixedBitString(value.items[i].bytes, value.items[i].bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ(Decoder& dec, PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (BitString*)std::malloc((std::size_t)value.count * sizeof(BitString));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(BitString));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
    string_length = 16;
    value.items[i].bytes = string_bytes;
    value.items[i].bitLength = string_length;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ(PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            std::free(value.items[i].bytes);
            value.items[i].bytes = nullptr;
            value.items[i].bitLength = 0;
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17(Encoder& enc, const PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag_perCC:
        Encode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC(enc, value.u.perCC);
        break;
    case PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag_perHARQ:
        Encode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ(enc, value.u.perHARQ);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17(Decoder& dec, PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag)root_index;
    switch (value.tag) {
    case PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag_perCC: {
        if (Decode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC(dec, value.u.perCC) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag_perHARQ: {
        if (Decode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ(dec, value.u.perHARQ) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17(PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17& value)
{
    switch (value.tag) {
    case PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag_perCC:
        Free_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC(value.u.perCC);
        break;
    case PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag_perHARQ:
        Free_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ(value.u.perHARQ);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_HARQ_ACK_EnhType3_r17(Encoder& enc, const PDSCH_HARQ_ACK_EnhType3_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_EnhType3NDI_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_EnhType3CBG_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_EnhType3Index_r17), 0, 7);
    Encode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17(enc, value.applicable_r17);
    if (value.has_pdsch_HARQ_ACK_EnhType3NDI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_EnhType3NDI_r17), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3CBG_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_EnhType3CBG_r17), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_HARQ_ACK_EnhType3_r17(Decoder& dec, PDSCH_HARQ_ACK_EnhType3_r17& value)
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
        value.pdsch_HARQ_ACK_EnhType3Index_r17 = (PDSCH_HARQ_ACK_EnhType3Index_r17)tmp_value;
    }
    {
        if (Decode_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17(dec, value.applicable_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        value.pdsch_HARQ_ACK_EnhType3NDI_r17 = (PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3NDI_r17)0;
    }
    if (present_1) {
        value.pdsch_HARQ_ACK_EnhType3CBG_r17 = (PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3CBG_r17)0;
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
    if (Decode_PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_PDSCH_HARQ_ACK_EnhType3_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_HARQ_ACK_EnhType3_r17(PDSCH_HARQ_ACK_EnhType3_r17& value)
{
    Free_PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17(value.applicable_r17);
    if (value.has_pdsch_HARQ_ACK_EnhType3NDI_r17) {
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3CBG_r17) {
    }
    if (value.has_extGroup1) {
        Free_PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PLMN_IdentityInfo_ExtGroup1(Encoder& enc, const PLMN_IdentityInfo_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_iab_Support_r16);
    if (value.has_iab_Support_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.iab_Support_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_IdentityInfo_ExtGroup1(Decoder& dec, PLMN_IdentityInfo_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.iab_Support_r16 = (PLMN_IdentityInfo_ExtGroup1_Iab_Support_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_IdentityInfo_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_IdentityInfo_ExtGroup1(PLMN_IdentityInfo_ExtGroup1& value)
{
    if (value.has_iab_Support_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PLMN_IdentityInfo_ExtGroup2(Encoder& enc, const PLMN_IdentityInfo_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_trackingAreaList_r17);
    enc.WriteBit(value.has_gNB_ID_Length_r17);
    if (value.has_trackingAreaList_r17) {
enc.WriteConstrainedLength(value.trackingAreaList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.trackingAreaList_r17_count; ++i) {
    enc.WriteFixedBitString(value.trackingAreaList_r17_items[i].bytes, value.trackingAreaList_r17_items[i].bitLength, 24, 24);
}
    }
    if (value.has_gNB_ID_Length_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_ID_Length_r17), 22, 32);
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_IdentityInfo_ExtGroup2(Decoder& dec, PLMN_IdentityInfo_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.trackingAreaList_r17_count)) { goto fail; }
if (value.trackingAreaList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.trackingAreaList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.trackingAreaList_r17_count > 0u) {
    value.trackingAreaList_r17_items = (TrackingAreaCode*)std::malloc((std::size_t)value.trackingAreaList_r17_count * sizeof(TrackingAreaCode));
    if (value.trackingAreaList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.trackingAreaList_r17_items, 0, (std::size_t)value.trackingAreaList_r17_count * sizeof(TrackingAreaCode));
}
for (std::uint32_t i = 0; i < value.trackingAreaList_r17_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
    string_length = 24;
    value.trackingAreaList_r17_items[i].bytes = string_bytes;
    value.trackingAreaList_r17_items[i].bitLength = string_length;
}
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(22, 32, tmp_value)) { goto fail; }
        value.gNB_ID_Length_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_IdentityInfo_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_IdentityInfo_ExtGroup2(PLMN_IdentityInfo_ExtGroup2& value)
{
    if (value.has_trackingAreaList_r17) {
        if (value.trackingAreaList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.trackingAreaList_r17_count; ++i) {
                std::free(value.trackingAreaList_r17_items[i].bytes);
                value.trackingAreaList_r17_items[i].bytes = nullptr;
                value.trackingAreaList_r17_items[i].bitLength = 0;
            }
            std::free(value.trackingAreaList_r17_items);
            value.trackingAreaList_r17_items = nullptr;
        }
        value.trackingAreaList_r17_count = 0;
    }
    if (value.has_gNB_ID_Length_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PLMN_IdentityInfo_ExtGroup3(Encoder& enc, const PLMN_IdentityInfo_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_mobileIAB_Support_r18);
    if (value.has_mobileIAB_Support_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mobileIAB_Support_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_IdentityInfo_ExtGroup3(Decoder& dec, PLMN_IdentityInfo_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.mobileIAB_Support_r18 = (PLMN_IdentityInfo_ExtGroup3_MobileIAB_Support_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_IdentityInfo_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_IdentityInfo_ExtGroup3(PLMN_IdentityInfo_ExtGroup3& value)
{
    if (value.has_mobileIAB_Support_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PLMN_IdentityInfo(Encoder& enc, const PLMN_IdentityInfo& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_trackingAreaCode);
    enc.WriteBit(value.has_ranac);
enc.WriteConstrainedLength(value.plmn_IdentityList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.plmn_IdentityList_count; ++i) {
    Encode_PLMN_Identity(enc, value.plmn_IdentityList_items[i]);
}
    if (value.has_trackingAreaCode) {
        enc.WriteFixedBitString(value.trackingAreaCode.bytes, value.trackingAreaCode.bitLength, 24, 24);
    }
    if (value.has_ranac) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ranac), 0, 255);
    }
    enc.WriteFixedBitString(value.cellIdentity.bytes, value.cellIdentity.bitLength, 36, 36);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellReservedForOperatorUse), 0, 1);
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PLMN_IdentityInfo_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PLMN_IdentityInfo_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PLMN_IdentityInfo_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_IdentityInfo(Decoder& dec, PLMN_IdentityInfo& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.plmn_IdentityList_count)) { goto fail; }
if (value.plmn_IdentityList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.plmn_IdentityList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.plmn_IdentityList_count > 0u) {
    value.plmn_IdentityList_items = (PLMN_Identity*)std::malloc((std::size_t)value.plmn_IdentityList_count * sizeof(PLMN_Identity));
    if (value.plmn_IdentityList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.plmn_IdentityList_items, 0, (std::size_t)value.plmn_IdentityList_count * sizeof(PLMN_Identity));
}
for (std::uint32_t i = 0; i < value.plmn_IdentityList_count; ++i) {
    if (Decode_PLMN_Identity(dec, value.plmn_IdentityList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.trackingAreaCode.bytes = string_bytes;
        value.trackingAreaCode.bitLength = string_length;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.ranac = (RAN_AreaCode)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 36)) { goto fail; }
        string_length = 36;
        value.cellIdentity.bytes = string_bytes;
        value.cellIdentity.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellReservedForOperatorUse = (PLMN_IdentityInfo_CellReservedForOperatorUse)tmp_value;
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
    if (Decode_PLMN_IdentityInfo_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PLMN_IdentityInfo_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PLMN_IdentityInfo_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_PLMN_IdentityInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_IdentityInfo(PLMN_IdentityInfo& value)
{
    if (value.plmn_IdentityList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.plmn_IdentityList_count; ++i) {
            Free_PLMN_Identity(value.plmn_IdentityList_items[i]);
        }
        std::free(value.plmn_IdentityList_items);
        value.plmn_IdentityList_items = nullptr;
    }
    value.plmn_IdentityList_count = 0;
    if (value.has_trackingAreaCode) {
        std::free(value.trackingAreaCode.bytes);
        value.trackingAreaCode.bytes = nullptr;
        value.trackingAreaCode.bitLength = 0;
    }
    if (value.has_ranac) {
    }
    std::free(value.cellIdentity.bytes);
    value.cellIdentity.bytes = nullptr;
    value.cellIdentity.bitLength = 0;
    if (value.has_extGroup1) {
        Free_PLMN_IdentityInfo_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PLMN_IdentityInfo_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PLMN_IdentityInfo_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ResourceSet(Encoder& enc, const PUCCH_ResourceSet& value)
{
    (void)value;
    enc.WriteBit(value.has_maxPayloadSize);
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_ResourceSetId), 0, 3);
enc.WriteConstrainedLength(value.resourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceList_items[i]), 0, 127);
}
    if (value.has_maxPayloadSize) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxPayloadSize), 4, 256);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_ResourceSet(Decoder& dec, PUCCH_ResourceSet& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.pucch_ResourceSetId = (PUCCH_ResourceSetId)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceList_count)) { goto fail; }
if (value.resourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceList_count > 0u) {
    value.resourceList_items = (PUCCH_ResourceId*)std::malloc((std::size_t)value.resourceList_count * sizeof(PUCCH_ResourceId));
    if (value.resourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceList_items, 0, (std::size_t)value.resourceList_count * sizeof(PUCCH_ResourceId));
}
for (std::uint32_t i = 0; i < value.resourceList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.resourceList_items[i] = (PUCCH_ResourceId)tmp_value;
}
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 256, tmp_value)) { goto fail; }
        value.maxPayloadSize = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ResourceSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ResourceSet(PUCCH_ResourceSet& value)
{
    if (value.resourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.resourceList_count; ++i) {
        }
        std::free(value.resourceList_items);
        value.resourceList_items = nullptr;
    }
    value.resourceList_count = 0;
    if (value.has_maxPayloadSize) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_format0(Encoder& enc, const PUCCH_format0& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.initialCyclicShift), 0, 11);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSymbols), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.startingSymbolIndex), 0, 13);
    return enc.Error();
}

ErrorCode Decode_PUCCH_format0(Decoder& dec, PUCCH_format0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.initialCyclicShift = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.nrofSymbols = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.startingSymbolIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_format0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_format0(PUCCH_format0& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_format1(Encoder& enc, const PUCCH_format1& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.initialCyclicShift), 0, 11);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSymbols), 4, 14);
    enc.WriteConstrainedInteger((std::int64_t)(value.startingSymbolIndex), 0, 10);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDomainOCC), 0, 6);
    return enc.Error();
}

ErrorCode Decode_PUCCH_format1(Decoder& dec, PUCCH_format1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.initialCyclicShift = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 14, tmp_value)) { goto fail; }
        value.nrofSymbols = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.startingSymbolIndex = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.timeDomainOCC = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_format1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_format1(PUCCH_format1& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_format2(Encoder& enc, const PUCCH_format2& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofPRBs), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSymbols), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.startingSymbolIndex), 0, 13);
    return enc.Error();
}

ErrorCode Decode_PUCCH_format2(Decoder& dec, PUCCH_format2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.nrofPRBs = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.nrofSymbols = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.startingSymbolIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_format2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_format2(PUCCH_format2& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_format3(Encoder& enc, const PUCCH_format3& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofPRBs), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSymbols), 4, 14);
    enc.WriteConstrainedInteger((std::int64_t)(value.startingSymbolIndex), 0, 10);
    return enc.Error();
}

ErrorCode Decode_PUCCH_format3(Decoder& dec, PUCCH_format3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.nrofPRBs = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 14, tmp_value)) { goto fail; }
        value.nrofSymbols = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.startingSymbolIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_format3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_format3(PUCCH_format3& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_format4(Encoder& enc, const PUCCH_format4& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSymbols), 4, 14);
    enc.WriteConstrainedInteger((std::int64_t)(value.occ_Length), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.occ_Index), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.startingSymbolIndex), 0, 10);
    return enc.Error();
}

ErrorCode Decode_PUCCH_format4(Decoder& dec, PUCCH_format4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 14, tmp_value)) { goto fail; }
        value.nrofSymbols = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.occ_Length = (PUCCH_format4_Occ_Length)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.occ_Index = (PUCCH_format4_Occ_Index)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.startingSymbolIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_format4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_format4(PUCCH_format4& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_Resource_Format(Encoder& enc, const PUCCH_Resource_Format& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 4);
    switch (value.tag) {
    case PUCCH_Resource_Format_Tag_format0:
        Encode_PUCCH_format0(enc, value.u.format0);
        break;
    case PUCCH_Resource_Format_Tag_format1:
        Encode_PUCCH_format1(enc, value.u.format1);
        break;
    case PUCCH_Resource_Format_Tag_format2:
        Encode_PUCCH_format2(enc, value.u.format2);
        break;
    case PUCCH_Resource_Format_Tag_format3:
        Encode_PUCCH_format3(enc, value.u.format3);
        break;
    case PUCCH_Resource_Format_Tag_format4:
        Encode_PUCCH_format4(enc, value.u.format4);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_Resource_Format(Decoder& dec, PUCCH_Resource_Format& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 4, root_index)) {
        goto fail;
    }
    value.tag = (PUCCH_Resource_Format_Tag)root_index;
    switch (value.tag) {
    case PUCCH_Resource_Format_Tag_format0: {
        if (Decode_PUCCH_format0(dec, value.u.format0) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PUCCH_Resource_Format_Tag_format1: {
        if (Decode_PUCCH_format1(dec, value.u.format1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PUCCH_Resource_Format_Tag_format2: {
        if (Decode_PUCCH_format2(dec, value.u.format2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PUCCH_Resource_Format_Tag_format3: {
        if (Decode_PUCCH_format3(dec, value.u.format3) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PUCCH_Resource_Format_Tag_format4: {
        if (Decode_PUCCH_format4(dec, value.u.format4) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_Resource_Format(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_Resource_Format(PUCCH_Resource_Format& value)
{
    switch (value.tag) {
    case PUCCH_Resource_Format_Tag_format0:
        Free_PUCCH_format0(value.u.format0);
        break;
    case PUCCH_Resource_Format_Tag_format1:
        Free_PUCCH_format1(value.u.format1);
        break;
    case PUCCH_Resource_Format_Tag_format2:
        Free_PUCCH_format2(value.u.format2);
        break;
    case PUCCH_Resource_Format_Tag_format3:
        Free_PUCCH_format3(value.u.format3);
        break;
    case PUCCH_Resource_Format_Tag_format4:
        Free_PUCCH_format4(value.u.format4);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_Resource(Encoder& enc, const PUCCH_Resource& value)
{
    (void)value;
    enc.WriteBit(value.has_intraSlotFrequencyHopping);
    enc.WriteBit(value.has_secondHopPRB);
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_ResourceId), 0, 127);
    enc.WriteConstrainedInteger((std::int64_t)(value.startingPRB), 0, 274);
    if (value.has_intraSlotFrequencyHopping) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraSlotFrequencyHopping), 0, 0);
    }
    if (value.has_secondHopPRB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.secondHopPRB), 0, 274);
    }
    Encode_PUCCH_Resource_Format(enc, value.format);
    return enc.Error();
}

ErrorCode Decode_PUCCH_Resource(Decoder& dec, PUCCH_Resource& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.pucch_ResourceId = (PUCCH_ResourceId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.startingPRB = (PRB_Id)tmp_value;
    }
    if (present_0) {
        value.intraSlotFrequencyHopping = (PUCCH_Resource_IntraSlotFrequencyHopping)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.secondHopPRB = (PRB_Id)tmp_value;
    }
    {
        if (Decode_PUCCH_Resource_Format(dec, value.format) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_Resource(PUCCH_Resource& value)
{
    if (value.has_intraSlotFrequencyHopping) {
    }
    if (value.has_secondHopPRB) {
    }
    Free_PUCCH_Resource_Format(value.format);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700(Encoder& enc, const PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofPRBs_r17), 1, 16);
    return enc.Error();
}

ErrorCode Decode_PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700(Decoder& dec, PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.nrofPRBs_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700(PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ResourceExt_v1610_ExtGroup1(Encoder& enc, const PUCCH_ResourceExt_v1610_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_format_v1700);
    enc.WriteBit(value.has_pucch_RepetitionNrofSlots_r17);
    if (value.has_format_v1700) {
        Encode_PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700(enc, value.format_v1700);
    }
    if (value.has_pucch_RepetitionNrofSlots_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_RepetitionNrofSlots_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_ResourceExt_v1610_ExtGroup1(Decoder& dec, PUCCH_ResourceExt_v1610_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700(dec, value.format_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.pucch_RepetitionNrofSlots_r17 = (PUCCH_ResourceExt_v1610_ExtGroup1_Pucch_RepetitionNrofSlots_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ResourceExt_v1610_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ResourceExt_v1610_ExtGroup1(PUCCH_ResourceExt_v1610_ExtGroup1& value)
{
    if (value.has_format_v1700) {
        Free_PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700(value.format_v1700);
    }
    if (value.has_pucch_RepetitionNrofSlots_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ResourceExt_v1610_ExtGroup2(Encoder& enc, const PUCCH_ResourceExt_v1610_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_applyIndicatedTCI_State_r18);
    enc.WriteBit(value.has_multipanelSFN_Scheme_r18);
    if (value.has_applyIndicatedTCI_State_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.applyIndicatedTCI_State_r18), 0, 2);
    }
    if (value.has_multipanelSFN_Scheme_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipanelSFN_Scheme_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_ResourceExt_v1610_ExtGroup2(Decoder& dec, PUCCH_ResourceExt_v1610_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.applyIndicatedTCI_State_r18 = (PUCCH_ResourceExt_v1610_ExtGroup2_ApplyIndicatedTCI_State_r18)tmp_value;
    }
    if (present_1) {
        value.multipanelSFN_Scheme_r18 = (PUCCH_ResourceExt_v1610_ExtGroup2_MultipanelSFN_Scheme_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ResourceExt_v1610_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ResourceExt_v1610_ExtGroup2(PUCCH_ResourceExt_v1610_ExtGroup2& value)
{
    if (value.has_applyIndicatedTCI_State_r18) {
    }
    if (value.has_multipanelSFN_Scheme_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16(Encoder& enc, const PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag_scs15:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.scs15), 0, 9);
        break;
    case PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag_scs30:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.scs30), 0, 4);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16(Decoder& dec, PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag)root_index;
    switch (value.tag) {
    case PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag_scs15: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.scs15 = (int64_t)tmp_value;
        break;
    }
    case PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag_scs30: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.scs30 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16(PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16& value)
{
    switch (value.tag) {
    case PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag_scs15:
        break;
    case PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag_scs30:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16(Encoder& enc, const PUCCH_ResourceExt_v1610_InterlaceAllocation_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rb_SetIndex_r16), 0, 4);
    Encode_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16(enc, value.interlace0_r16);
    return enc.Error();
}

ErrorCode Decode_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16(Decoder& dec, PUCCH_ResourceExt_v1610_InterlaceAllocation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.rb_SetIndex_r16 = (int64_t)tmp_value;
    }
    {
        if (Decode_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16(dec, value.interlace0_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16(PUCCH_ResourceExt_v1610_InterlaceAllocation_r16& value)
{
    Free_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16(value.interlace0_r16);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610(Encoder& enc, const PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_occ_Length_v1610);
    enc.WriteBit(value.has_occ_Index_v1610);
    if (value.has_occ_Length_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.occ_Length_v1610), 0, 1);
    }
    if (value.has_occ_Index_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.occ_Index_v1610), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610(Decoder& dec, PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.occ_Length_v1610 = (PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Length_v1610)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.occ_Index_v1610 = (PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Index_v1610)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610(PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610& value)
{
    if (value.has_occ_Length_v1610) {
    }
    if (value.has_occ_Index_v1610) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ResourceExt_v1610_Format_v1610(Encoder& enc, const PUCCH_ResourceExt_v1610_Format_v1610& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PUCCH_ResourceExt_v1610_Format_v1610_Tag_interlace1_v1610:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.interlace1_v1610), 0, 9);
        break;
    case PUCCH_ResourceExt_v1610_Format_v1610_Tag_occ_v1610:
        Encode_PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610(enc, value.u.occ_v1610);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_ResourceExt_v1610_Format_v1610(Decoder& dec, PUCCH_ResourceExt_v1610_Format_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PUCCH_ResourceExt_v1610_Format_v1610_Tag)root_index;
    switch (value.tag) {
    case PUCCH_ResourceExt_v1610_Format_v1610_Tag_interlace1_v1610: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.interlace1_v1610 = (int64_t)tmp_value;
        break;
    }
    case PUCCH_ResourceExt_v1610_Format_v1610_Tag_occ_v1610: {
        if (Decode_PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610(dec, value.u.occ_v1610) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ResourceExt_v1610_Format_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ResourceExt_v1610_Format_v1610(PUCCH_ResourceExt_v1610_Format_v1610& value)
{
    switch (value.tag) {
    case PUCCH_ResourceExt_v1610_Format_v1610_Tag_interlace1_v1610:
        break;
    case PUCCH_ResourceExt_v1610_Format_v1610_Tag_occ_v1610:
        Free_PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610(value.u.occ_v1610);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ResourceExt_v1610(Encoder& enc, const PUCCH_ResourceExt_v1610& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_interlaceAllocation_r16);
    enc.WriteBit(value.has_format_v1610);
    if (value.has_interlaceAllocation_r16) {
        Encode_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16(enc, value.interlaceAllocation_r16);
    }
    if (value.has_format_v1610) {
        Encode_PUCCH_ResourceExt_v1610_Format_v1610(enc, value.format_v1610);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PUCCH_ResourceExt_v1610_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PUCCH_ResourceExt_v1610_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_ResourceExt_v1610(Decoder& dec, PUCCH_ResourceExt_v1610& value)
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
        if (Decode_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16(dec, value.interlaceAllocation_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PUCCH_ResourceExt_v1610_Format_v1610(dec, value.format_v1610) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_PUCCH_ResourceExt_v1610_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PUCCH_ResourceExt_v1610_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_PUCCH_ResourceExt_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ResourceExt_v1610(PUCCH_ResourceExt_v1610& value)
{
    if (value.has_interlaceAllocation_r16) {
        Free_PUCCH_ResourceExt_v1610_InterlaceAllocation_r16(value.interlaceAllocation_r16);
    }
    if (value.has_format_v1610) {
        Free_PUCCH_ResourceExt_v1610_Format_v1610(value.format_v1610);
    }
    if (value.has_extGroup1) {
        Free_PUCCH_ResourceExt_v1610_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PUCCH_ResourceExt_v1610_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_ResourceGroup_r16(Encoder& enc, const PUCCH_ResourceGroup_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_ResourceGroupId_r16), 0, 3);
enc.WriteConstrainedLength(value.resourcePerGroupList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourcePerGroupList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.resourcePerGroupList_r16_items[i]), 0, 127);
}
    return enc.Error();
}

ErrorCode Decode_PUCCH_ResourceGroup_r16(Decoder& dec, PUCCH_ResourceGroup_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.pucch_ResourceGroupId_r16 = (PUCCH_ResourceGroupId_r16)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourcePerGroupList_r16_count)) { goto fail; }
if (value.resourcePerGroupList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourcePerGroupList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourcePerGroupList_r16_count > 0u) {
    value.resourcePerGroupList_r16_items = (PUCCH_ResourceId*)std::malloc((std::size_t)value.resourcePerGroupList_r16_count * sizeof(PUCCH_ResourceId));
    if (value.resourcePerGroupList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourcePerGroupList_r16_items, 0, (std::size_t)value.resourcePerGroupList_r16_count * sizeof(PUCCH_ResourceId));
}
for (std::uint32_t i = 0; i < value.resourcePerGroupList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.resourcePerGroupList_r16_items[i] = (PUCCH_ResourceId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ResourceGroup_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ResourceGroup_r16(PUCCH_ResourceGroup_r16& value)
{
    if (value.resourcePerGroupList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.resourcePerGroupList_r16_count; ++i) {
        }
        std::free(value.resourcePerGroupList_r16_items);
        value.resourcePerGroupList_r16_items = nullptr;
    }
    value.resourcePerGroupList_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_CSI_Resource(Encoder& enc, const PUCCH_CSI_Resource& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkBandwidthPartId), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_Resource), 0, 127);
    return enc.Error();
}

ErrorCode Decode_PUCCH_CSI_Resource(Decoder& dec, PUCCH_CSI_Resource& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.uplinkBandwidthPartId = (BWP_Id)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.pucch_Resource = (PUCCH_ResourceId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_CSI_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_CSI_Resource(PUCCH_CSI_Resource& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_P0_PUCCH(Encoder& enc, const P0_PUCCH& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.p0_PUCCH_Id), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.p0_PUCCH_Value), -16, 15);
    return enc.Error();
}

ErrorCode Decode_P0_PUCCH(Decoder& dec, P0_PUCCH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.p0_PUCCH_Id = (P0_PUCCH_Id)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.p0_PUCCH_Value = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_P0_PUCCH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_P0_PUCCH(P0_PUCCH& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_PathlossReferenceRS_ReferenceSignal(Encoder& enc, const PUCCH_PathlossReferenceRS_ReferenceSignal& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PUCCH_PathlossReferenceRS_ReferenceSignal_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case PUCCH_PathlossReferenceRS_ReferenceSignal_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_PathlossReferenceRS_ReferenceSignal(Decoder& dec, PUCCH_PathlossReferenceRS_ReferenceSignal& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PUCCH_PathlossReferenceRS_ReferenceSignal_Tag)root_index;
    switch (value.tag) {
    case PUCCH_PathlossReferenceRS_ReferenceSignal_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case PUCCH_PathlossReferenceRS_ReferenceSignal_Tag_csi_RS_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_PathlossReferenceRS_ReferenceSignal(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_PathlossReferenceRS_ReferenceSignal(PUCCH_PathlossReferenceRS_ReferenceSignal& value)
{
    switch (value.tag) {
    case PUCCH_PathlossReferenceRS_ReferenceSignal_Tag_ssb_Index:
        break;
    case PUCCH_PathlossReferenceRS_ReferenceSignal_Tag_csi_RS_Index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_PathlossReferenceRS(Encoder& enc, const PUCCH_PathlossReferenceRS& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_PathlossReferenceRS_Id), 0, 3);
    Encode_PUCCH_PathlossReferenceRS_ReferenceSignal(enc, value.referenceSignal);
    return enc.Error();
}

ErrorCode Decode_PUCCH_PathlossReferenceRS(Decoder& dec, PUCCH_PathlossReferenceRS& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.pucch_PathlossReferenceRS_Id = (PUCCH_PathlossReferenceRS_Id)tmp_value;
    }
    {
        if (Decode_PUCCH_PathlossReferenceRS_ReferenceSignal(dec, value.referenceSignal) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_PathlossReferenceRS(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_PathlossReferenceRS(PUCCH_PathlossReferenceRS& value)
{
    Free_PUCCH_PathlossReferenceRS_ReferenceSignal(value.referenceSignal);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16(Encoder& enc, const PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_ssb_Index_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index_r16), 0, 63);
        break;
    case PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_csi_RS_Index_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index_r16), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16(Decoder& dec, PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag)root_index;
    switch (value.tag) {
    case PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_ssb_Index_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index_r16 = (SSB_Index)tmp_value;
        break;
    }
    case PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_csi_RS_Index_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index_r16 = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16(PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16& value)
{
    switch (value.tag) {
    case PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_ssb_Index_r16:
        break;
    case PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_csi_RS_Index_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_PathlossReferenceRS_r16(Encoder& enc, const PUCCH_PathlossReferenceRS_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_PathlossReferenceRS_Id_r16), 4, 63);
    Encode_PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16(enc, value.referenceSignal_r16);
    return enc.Error();
}

ErrorCode Decode_PUCCH_PathlossReferenceRS_r16(Decoder& dec, PUCCH_PathlossReferenceRS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 63, tmp_value)) { goto fail; }
        value.pucch_PathlossReferenceRS_Id_r16 = (PUCCH_PathlossReferenceRS_Id_v1610)tmp_value;
    }
    {
        if (Decode_PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16(dec, value.referenceSignal_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_PathlossReferenceRS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_PathlossReferenceRS_r16(PUCCH_PathlossReferenceRS_r16& value)
{
    Free_PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16(value.referenceSignal_r16);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_PowerControlSetInfo_r17(Encoder& enc, const PUCCH_PowerControlSetInfo_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_PowerControlSetInfoId_r17), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.p0_PUCCH_Id_r17), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_ClosedLoopIndex_r17), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_PathlossReferenceRS_Id_r17), 0, 7);
    return enc.Error();
}

ErrorCode Decode_PUCCH_PowerControlSetInfo_r17(Decoder& dec, PUCCH_PowerControlSetInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.pucch_PowerControlSetInfoId_r17 = (PUCCH_PowerControlSetInfoId_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.p0_PUCCH_Id_r17 = (P0_PUCCH_Id)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pucch_ClosedLoopIndex_r17 = (PUCCH_PowerControlSetInfo_r17_Pucch_ClosedLoopIndex_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.pucch_PathlossReferenceRS_Id_r17 = (PUCCH_PathlossReferenceRS_Id_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_PowerControlSetInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_PowerControlSetInfo_r17(PUCCH_PowerControlSetInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_SRS(Encoder& enc, const PUCCH_SRS& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.resource), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkBWP), 0, 4);
    return enc.Error();
}

ErrorCode Decode_PUCCH_SRS(Decoder& dec, PUCCH_SRS& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.resource = (SRS_ResourceId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.uplinkBWP = (BWP_Id)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_SRS(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_SRS(PUCCH_SRS& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_SpatialRelationInfo_ReferenceSignal(Encoder& enc, const PUCCH_SpatialRelationInfo_ReferenceSignal& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    case PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_srs:
        Encode_PUCCH_SRS(enc, value.u.srs);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_SpatialRelationInfo_ReferenceSignal(Decoder& dec, PUCCH_SpatialRelationInfo_ReferenceSignal& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (PUCCH_SpatialRelationInfo_ReferenceSignal_Tag)root_index;
    switch (value.tag) {
    case PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_csi_RS_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    case PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_srs: {
        if (Decode_PUCCH_SRS(dec, value.u.srs) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_SpatialRelationInfo_ReferenceSignal(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_SpatialRelationInfo_ReferenceSignal(PUCCH_SpatialRelationInfo_ReferenceSignal& value)
{
    switch (value.tag) {
    case PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_ssb_Index:
        break;
    case PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_csi_RS_Index:
        break;
    case PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_srs:
        Free_PUCCH_SRS(value.u.srs);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_SpatialRelationInfo(Encoder& enc, const PUCCH_SpatialRelationInfo& value)
{
    (void)value;
    enc.WriteBit(value.has_servingCellId);
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_SpatialRelationInfoId), 1, 8);
    if (value.has_servingCellId) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId), 0, 31);
    }
    Encode_PUCCH_SpatialRelationInfo_ReferenceSignal(enc, value.referenceSignal);
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_PathlossReferenceRS_Id), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.p0_PUCCH_Id), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.closedLoopIndex), 0, 1);
    return enc.Error();
}

ErrorCode Decode_PUCCH_SpatialRelationInfo(Decoder& dec, PUCCH_SpatialRelationInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.pucch_SpatialRelationInfoId = (PUCCH_SpatialRelationInfoId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId = (ServCellIndex)tmp_value;
    }
    {
        if (Decode_PUCCH_SpatialRelationInfo_ReferenceSignal(dec, value.referenceSignal) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.pucch_PathlossReferenceRS_Id = (PUCCH_PathlossReferenceRS_Id)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.p0_PUCCH_Id = (P0_PUCCH_Id)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.closedLoopIndex = (PUCCH_SpatialRelationInfo_ClosedLoopIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_SpatialRelationInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_SpatialRelationInfo(PUCCH_SpatialRelationInfo& value)
{
    if (value.has_servingCellId) {
    }
    Free_PUCCH_SpatialRelationInfo_ReferenceSignal(value.referenceSignal);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUCCH_SpatialRelationInfoExt_r16(Encoder& enc, const PUCCH_SpatialRelationInfoExt_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pucch_SpatialRelationInfoId_v1610);
    enc.WriteBit(value.has_pucch_PathlossReferenceRS_Id_v1610);
    if (value.has_pucch_SpatialRelationInfoId_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_SpatialRelationInfoId_v1610), 9, 64);
    }
    if (value.has_pucch_PathlossReferenceRS_Id_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_PathlossReferenceRS_Id_v1610), 4, 63);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_SpatialRelationInfoExt_r16(Decoder& dec, PUCCH_SpatialRelationInfoExt_r16& value)
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
        if (!dec.ReadConstrainedInteger(9, 64, tmp_value)) { goto fail; }
        value.pucch_SpatialRelationInfoId_v1610 = (PUCCH_SpatialRelationInfoId_v1610)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 63, tmp_value)) { goto fail; }
        value.pucch_PathlossReferenceRS_Id_v1610 = (PUCCH_PathlossReferenceRS_Id_v1610)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_SpatialRelationInfoExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_SpatialRelationInfoExt_r16(PUCCH_SpatialRelationInfoExt_r16& value)
{
    if (value.has_pucch_SpatialRelationInfoId_v1610) {
    }
    if (value.has_pucch_PathlossReferenceRS_Id_v1610) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16(Encoder& enc, const UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16& value)
{
    (void)value;
    if (value.count != 2u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Encode_BetaOffsets(enc, value.items[i]);
        }
    }
    return enc.Error();
}

ErrorCode Decode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16(Decoder& dec, UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 2u;
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
    Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16(UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BetaOffsets(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16(Encoder& enc, const UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16& value)
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

ErrorCode Decode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16(Decoder& dec, UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16& value)
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
    Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16(UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BetaOffsets(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16(Encoder& enc, const UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag_oneBit_r16:
        Encode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16(enc, value.u.oneBit_r16);
        break;
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag_twoBits_r16:
        Encode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16(enc, value.u.twoBits_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16(Decoder& dec, UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag)root_index;
    switch (value.tag) {
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag_oneBit_r16: {
        if (Decode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16(dec, value.u.oneBit_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag_twoBits_r16: {
        if (Decode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16(dec, value.u.twoBits_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16(UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16& value)
{
    switch (value.tag) {
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag_oneBit_r16:
        Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16(value.u.oneBit_r16);
        break;
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag_twoBits_r16:
        Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16(value.u.twoBits_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16(Encoder& enc, const UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag_dynamicDCI_0_2_r16:
        Encode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16(enc, value.u.dynamicDCI_0_2_r16);
        break;
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag_semiStaticDCI_0_2_r16:
        Encode_BetaOffsets(enc, value.u.semiStaticDCI_0_2_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16(Decoder& dec, UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag)root_index;
    switch (value.tag) {
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag_dynamicDCI_0_2_r16: {
        if (Decode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16(dec, value.u.dynamicDCI_0_2_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag_semiStaticDCI_0_2_r16: {
        if (Decode_BetaOffsets(dec, value.u.semiStaticDCI_0_2_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16(UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16& value)
{
    switch (value.tag) {
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag_dynamicDCI_0_2_r16:
        Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16(value.u.dynamicDCI_0_2_r16);
        break;
    case UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag_semiStaticDCI_0_2_r16:
        Free_BetaOffsets(value.u.semiStaticDCI_0_2_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UCI_OnPUSCH_DCI_0_2_r16(Encoder& enc, const UCI_OnPUSCH_DCI_0_2_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_betaOffsetsDCI_0_2_r16);
    if (value.has_betaOffsetsDCI_0_2_r16) {
        Encode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16(enc, value.betaOffsetsDCI_0_2_r16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.scalingDCI_0_2_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_UCI_OnPUSCH_DCI_0_2_r16(Decoder& dec, UCI_OnPUSCH_DCI_0_2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16(dec, value.betaOffsetsDCI_0_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scalingDCI_0_2_r16 = (UCI_OnPUSCH_DCI_0_2_r16_ScalingDCI_0_2_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UCI_OnPUSCH_DCI_0_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UCI_OnPUSCH_DCI_0_2_r16(UCI_OnPUSCH_DCI_0_2_r16& value)
{
    if (value.has_betaOffsetsDCI_0_2_r16) {
        Free_UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16(value.betaOffsetsDCI_0_2_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MPE_Resource_r17_Mpe_ReferenceSignal_r17(Encoder& enc, const MPE_Resource_r17_Mpe_ReferenceSignal_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag_csi_RS_Resource_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Resource_r17), 0, 191);
        break;
    case MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag_ssb_Resource_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Resource_r17), 0, 63);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MPE_Resource_r17_Mpe_ReferenceSignal_r17(Decoder& dec, MPE_Resource_r17_Mpe_ReferenceSignal_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag)root_index;
    switch (value.tag) {
    case MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag_csi_RS_Resource_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Resource_r17 = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    case MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag_ssb_Resource_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Resource_r17 = (SSB_Index)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MPE_Resource_r17_Mpe_ReferenceSignal_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MPE_Resource_r17_Mpe_ReferenceSignal_r17(MPE_Resource_r17_Mpe_ReferenceSignal_r17& value)
{
    switch (value.tag) {
    case MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag_csi_RS_Resource_r17:
        break;
    case MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag_ssb_Resource_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MPE_Resource_r17(Encoder& enc, const MPE_Resource_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_cell_r17);
    enc.WriteBit(value.has_additionalPCI_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.mpe_ResourceId_r17), 1, 64);
    if (value.has_cell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cell_r17), 0, 31);
    }
    if (value.has_additionalPCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalPCI_r17), 1, 7);
    }
    Encode_MPE_Resource_r17_Mpe_ReferenceSignal_r17(enc, value.mpe_ReferenceSignal_r17);
    return enc.Error();
}

ErrorCode Decode_MPE_Resource_r17(Decoder& dec, MPE_Resource_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.mpe_ResourceId_r17 = (MPE_ResourceId_r17)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.cell_r17 = (ServCellIndex)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.additionalPCI_r17 = (AdditionalPCIIndex_r17)tmp_value;
    }
    {
        if (Decode_MPE_Resource_r17_Mpe_ReferenceSignal_r17(dec, value.mpe_ReferenceSignal_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MPE_Resource_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MPE_Resource_r17(MPE_Resource_r17& value)
{
    if (value.has_cell_r17) {
    }
    if (value.has_additionalPCI_r17) {
    }
    Free_MPE_Resource_r17_Mpe_ReferenceSignal_r17(value.mpe_ReferenceSignal_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_P0_PUSCH_AlphaSet(Encoder& enc, const P0_PUSCH_AlphaSet& value)
{
    (void)value;
    enc.WriteBit(value.has_p0);
    enc.WriteBit(value.has_alpha);
    enc.WriteConstrainedInteger((std::int64_t)(value.p0_PUSCH_AlphaSetId), 0, 29);
    if (value.has_p0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p0), -16, 15);
    }
    if (value.has_alpha) {
        enc.WriteConstrainedInteger((std::int64_t)(value.alpha), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_P0_PUSCH_AlphaSet(Decoder& dec, P0_PUSCH_AlphaSet& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.p0_PUSCH_AlphaSetId = (P0_PUSCH_AlphaSetId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.p0 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.alpha = (Alpha)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_P0_PUSCH_AlphaSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_P0_PUSCH_AlphaSet(P0_PUSCH_AlphaSet& value)
{
    if (value.has_p0) {
    }
    if (value.has_alpha) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_PathlossReferenceRS_ReferenceSignal(Encoder& enc, const PUSCH_PathlossReferenceRS_ReferenceSignal& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PUSCH_PathlossReferenceRS_ReferenceSignal_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case PUSCH_PathlossReferenceRS_ReferenceSignal_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_PathlossReferenceRS_ReferenceSignal(Decoder& dec, PUSCH_PathlossReferenceRS_ReferenceSignal& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PUSCH_PathlossReferenceRS_ReferenceSignal_Tag)root_index;
    switch (value.tag) {
    case PUSCH_PathlossReferenceRS_ReferenceSignal_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case PUSCH_PathlossReferenceRS_ReferenceSignal_Tag_csi_RS_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_PathlossReferenceRS_ReferenceSignal(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_PathlossReferenceRS_ReferenceSignal(PUSCH_PathlossReferenceRS_ReferenceSignal& value)
{
    switch (value.tag) {
    case PUSCH_PathlossReferenceRS_ReferenceSignal_Tag_ssb_Index:
        break;
    case PUSCH_PathlossReferenceRS_ReferenceSignal_Tag_csi_RS_Index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_PathlossReferenceRS(Encoder& enc, const PUSCH_PathlossReferenceRS& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pusch_PathlossReferenceRS_Id), 0, 3);
    Encode_PUSCH_PathlossReferenceRS_ReferenceSignal(enc, value.referenceSignal);
    return enc.Error();
}

ErrorCode Decode_PUSCH_PathlossReferenceRS(Decoder& dec, PUSCH_PathlossReferenceRS& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.pusch_PathlossReferenceRS_Id = (PUSCH_PathlossReferenceRS_Id)tmp_value;
    }
    {
        if (Decode_PUSCH_PathlossReferenceRS_ReferenceSignal(dec, value.referenceSignal) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_PathlossReferenceRS(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_PathlossReferenceRS(PUSCH_PathlossReferenceRS& value)
{
    Free_PUSCH_PathlossReferenceRS_ReferenceSignal(value.referenceSignal);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16(Encoder& enc, const PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_ssb_Index_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index_r16), 0, 63);
        break;
    case PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_csi_RS_Index_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index_r16), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16(Decoder& dec, PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag)root_index;
    switch (value.tag) {
    case PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_ssb_Index_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index_r16 = (SSB_Index)tmp_value;
        break;
    }
    case PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_csi_RS_Index_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index_r16 = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16(PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16& value)
{
    switch (value.tag) {
    case PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_ssb_Index_r16:
        break;
    case PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_csi_RS_Index_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_PathlossReferenceRS_r16(Encoder& enc, const PUSCH_PathlossReferenceRS_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pusch_PathlossReferenceRS_Id_r16), 4, 63);
    Encode_PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16(enc, value.referenceSignal_r16);
    return enc.Error();
}

ErrorCode Decode_PUSCH_PathlossReferenceRS_r16(Decoder& dec, PUSCH_PathlossReferenceRS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 63, tmp_value)) { goto fail; }
        value.pusch_PathlossReferenceRS_Id_r16 = (PUSCH_PathlossReferenceRS_Id_v1610)tmp_value;
    }
    {
        if (Decode_PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16(dec, value.referenceSignal_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_PathlossReferenceRS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_PathlossReferenceRS_r16(PUSCH_PathlossReferenceRS_r16& value)
{
    Free_PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16(value.referenceSignal_r16);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DummyPathlossReferenceRS_v1710(Encoder& enc, const DummyPathlossReferenceRS_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalPCI_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.pusch_PathlossReferenceRS_Id_r17), 0, 63);
    if (value.has_additionalPCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalPCI_r17), 1, 7);
    }
    return enc.Error();
}

ErrorCode Decode_DummyPathlossReferenceRS_v1710(Decoder& dec, DummyPathlossReferenceRS_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.pusch_PathlossReferenceRS_Id_r17 = (PUSCH_PathlossReferenceRS_Id_r17)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.additionalPCI_r17 = (AdditionalPCIIndex_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyPathlossReferenceRS_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyPathlossReferenceRS_v1710(DummyPathlossReferenceRS_v1710& value)
{
    if (value.has_additionalPCI_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRI_PUSCH_PowerControl(Encoder& enc, const SRI_PUSCH_PowerControl& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.sri_PUSCH_PowerControlId), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.sri_PUSCH_PathlossReferenceRS_Id), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.sri_P0_PUSCH_AlphaSetId), 0, 29);
    enc.WriteConstrainedInteger((std::int64_t)(value.sri_PUSCH_ClosedLoopIndex), 0, 1);
    return enc.Error();
}

ErrorCode Decode_SRI_PUSCH_PowerControl(Decoder& dec, SRI_PUSCH_PowerControl& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sri_PUSCH_PowerControlId = (SRI_PUSCH_PowerControlId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sri_PUSCH_PathlossReferenceRS_Id = (PUSCH_PathlossReferenceRS_Id)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.sri_P0_PUSCH_AlphaSetId = (P0_PUSCH_AlphaSetId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sri_PUSCH_ClosedLoopIndex = (SRI_PUSCH_PowerControl_Sri_PUSCH_ClosedLoopIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRI_PUSCH_PowerControl(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRI_PUSCH_PowerControl(SRI_PUSCH_PowerControl& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_P0_PUSCH_Set_r16(Encoder& enc, const P0_PUSCH_Set_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_p0_List_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.p0_PUSCH_SetId_r16), 0, 15);
    if (value.has_p0_List_r16) {
enc.WriteConstrainedLength(value.p0_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.p0_List_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.p0_List_r16_items[i]), -16, 15);
}
    }
    return enc.Error();
}

ErrorCode Decode_P0_PUSCH_Set_r16(Decoder& dec, P0_PUSCH_Set_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.p0_PUSCH_SetId_r16 = (P0_PUSCH_SetId_r16)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.p0_List_r16_count)) { goto fail; }
if (value.p0_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.p0_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.p0_List_r16_count > 0u) {
    value.p0_List_r16_items = (P0_PUSCH_r16*)std::malloc((std::size_t)value.p0_List_r16_count * sizeof(P0_PUSCH_r16));
    if (value.p0_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.p0_List_r16_items, 0, (std::size_t)value.p0_List_r16_count * sizeof(P0_PUSCH_r16));
}
for (std::uint32_t i = 0; i < value.p0_List_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
    value.p0_List_r16_items[i] = (P0_PUSCH_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_P0_PUSCH_Set_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_P0_PUSCH_Set_r16(P0_PUSCH_Set_r16& value)
{
    if (value.has_p0_List_r16) {
        if (value.p0_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.p0_List_r16_count; ++i) {
            }
            std::free(value.p0_List_r16_items);
            value.p0_List_r16_items = nullptr;
        }
        value.p0_List_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_TimeDomainResourceAllocation(Encoder& enc, const PUSCH_TimeDomainResourceAllocation& value)
{
    (void)value;
    enc.WriteBit(value.has_k2);
    if (value.has_k2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.k2), 0, 32);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.mappingType), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.startSymbolAndLength), 0, 127);
    return enc.Error();
}

ErrorCode Decode_PUSCH_TimeDomainResourceAllocation(Decoder& dec, PUSCH_TimeDomainResourceAllocation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.k2 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mappingType = (PUSCH_TimeDomainResourceAllocation_MappingType)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.startSymbolAndLength = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_TimeDomainResourceAllocation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_TimeDomainResourceAllocation(PUSCH_TimeDomainResourceAllocation& value)
{
    if (value.has_k2) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_TimeDomainResourceAllocation_r16(Encoder& enc, const PUSCH_TimeDomainResourceAllocation_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_k2_r16);
    if (value.has_k2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.k2_r16), 0, 32);
    }
enc.WriteConstrainedLength(value.puschAllocationList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.puschAllocationList_r16_count; ++i) {
    Encode_PUSCH_Allocation_r16(enc, value.puschAllocationList_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_PUSCH_TimeDomainResourceAllocation_r16(Decoder& dec, PUSCH_TimeDomainResourceAllocation_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.k2_r16 = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.puschAllocationList_r16_count)) { goto fail; }
if (value.puschAllocationList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.puschAllocationList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.puschAllocationList_r16_count > 0u) {
    value.puschAllocationList_r16_items = (PUSCH_Allocation_r16*)std::malloc((std::size_t)value.puschAllocationList_r16_count * sizeof(PUSCH_Allocation_r16));
    if (value.puschAllocationList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.puschAllocationList_r16_items, 0, (std::size_t)value.puschAllocationList_r16_count * sizeof(PUSCH_Allocation_r16));
}
for (std::uint32_t i = 0; i < value.puschAllocationList_r16_count; ++i) {
    if (Decode_PUSCH_Allocation_r16(dec, value.puschAllocationList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_TimeDomainResourceAllocation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_TimeDomainResourceAllocation_r16(PUSCH_TimeDomainResourceAllocation_r16& value)
{
    if (value.has_k2_r16) {
    }
    if (value.puschAllocationList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.puschAllocationList_r16_count; ++i) {
            Free_PUSCH_Allocation_r16(value.puschAllocationList_r16_items[i]);
        }
        std::free(value.puschAllocationList_r16_items);
        value.puschAllocationList_r16_items = nullptr;
    }
    value.puschAllocationList_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_Allocation_r16_ExtGroup1(Encoder& enc, const PUSCH_Allocation_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_numberOfRepetitionsExt_r17);
    enc.WriteBit(value.has_numberOfSlotsTBoMS_r17);
    enc.WriteBit(value.has_extendedK2_r17);
    if (value.has_numberOfRepetitionsExt_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfRepetitionsExt_r17), 0, 15);
    }
    if (value.has_numberOfSlotsTBoMS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfSlotsTBoMS_r17), 0, 7);
    }
    if (value.has_extendedK2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedK2_r17), 0, 128);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_Allocation_r16_ExtGroup1(Decoder& dec, PUSCH_Allocation_r16_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.numberOfRepetitionsExt_r17 = (PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.numberOfSlotsTBoMS_r17 = (PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
        value.extendedK2_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_Allocation_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_Allocation_r16_ExtGroup1(PUSCH_Allocation_r16_ExtGroup1& value)
{
    if (value.has_numberOfRepetitionsExt_r17) {
    }
    if (value.has_numberOfSlotsTBoMS_r17) {
    }
    if (value.has_extendedK2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_Allocation_r16(Encoder& enc, const PUSCH_Allocation_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_mappingType_r16);
    enc.WriteBit(value.has_startSymbolAndLength_r16);
    enc.WriteBit(value.has_startSymbol_r16);
    enc.WriteBit(value.has_length_r16);
    enc.WriteBit(value.has_numberOfRepetitions_r16);
    if (value.has_mappingType_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mappingType_r16), 0, 1);
    }
    if (value.has_startSymbolAndLength_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startSymbolAndLength_r16), 0, 127);
    }
    if (value.has_startSymbol_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startSymbol_r16), 0, 13);
    }
    if (value.has_length_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.length_r16), 1, 14);
    }
    if (value.has_numberOfRepetitions_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfRepetitions_r16), 0, 7);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PUSCH_Allocation_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_Allocation_r16(Decoder& dec, PUSCH_Allocation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mappingType_r16 = (PUSCH_Allocation_r16_MappingType_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.startSymbolAndLength_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.startSymbol_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 14, tmp_value)) { goto fail; }
        value.length_r16 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.numberOfRepetitions_r16 = (PUSCH_Allocation_r16_NumberOfRepetitions_r16)tmp_value;
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
    if (Decode_PUSCH_Allocation_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_PUSCH_Allocation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_Allocation_r16(PUSCH_Allocation_r16& value)
{
    if (value.has_mappingType_r16) {
    }
    if (value.has_startSymbolAndLength_r16) {
    }
    if (value.has_startSymbol_r16) {
    }
    if (value.has_length_r16) {
    }
    if (value.has_numberOfRepetitions_r16) {
    }
    if (value.has_extGroup1) {
        Free_PUSCH_Allocation_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_QuantityConfigRS(Encoder& enc, const QuantityConfigRS& value)
{
    (void)value;
    Encode_FilterConfig(enc, value.ssb_FilterConfig);
    Encode_FilterConfig(enc, value.csi_RS_FilterConfig);
    return enc.Error();
}

ErrorCode Decode_QuantityConfigRS(Decoder& dec, QuantityConfigRS& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_FilterConfig(dec, value.ssb_FilterConfig) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_FilterConfig(dec, value.csi_RS_FilterConfig) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_QuantityConfigRS(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QuantityConfigRS(QuantityConfigRS& value)
{
    Free_FilterConfig(value.ssb_FilterConfig);
    Free_FilterConfig(value.csi_RS_FilterConfig);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_QuantityConfigNR(Encoder& enc, const QuantityConfigNR& value)
{
    (void)value;
    enc.WriteBit(value.has_quantityConfigRS_Index);
    Encode_QuantityConfigRS(enc, value.quantityConfigCell);
    if (value.has_quantityConfigRS_Index) {
        Encode_QuantityConfigRS(enc, value.quantityConfigRS_Index);
    }
    return enc.Error();
}

ErrorCode Decode_QuantityConfigNR(Decoder& dec, QuantityConfigNR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_QuantityConfigRS(dec, value.quantityConfigCell) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_QuantityConfigRS(dec, value.quantityConfigRS_Index) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_QuantityConfigNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QuantityConfigNR(QuantityConfigNR& value)
{
    Free_QuantityConfigRS(value.quantityConfigCell);
    if (value.has_quantityConfigRS_Index) {
        Free_QuantityConfigRS(value.quantityConfigRS_Index);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_SSB_Resource_ExtGroup1(Encoder& enc, const CFRA_SSB_Resource_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_msgA_PUSCH_Resource_Index_r16);
    if (value.has_msgA_PUSCH_Resource_Index_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_PUSCH_Resource_Index_r16), 0, 3071);
    }
    return enc.Error();
}

ErrorCode Decode_CFRA_SSB_Resource_ExtGroup1(Decoder& dec, CFRA_SSB_Resource_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3071, tmp_value)) { goto fail; }
        value.msgA_PUSCH_Resource_Index_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_SSB_Resource_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_SSB_Resource_ExtGroup1(CFRA_SSB_Resource_ExtGroup1& value)
{
    if (value.has_msgA_PUSCH_Resource_Index_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_SSB_Resource(Encoder& enc, const CFRA_SSB_Resource& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_PreambleIndex), 0, 63);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CFRA_SSB_Resource_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CFRA_SSB_Resource(Decoder& dec, CFRA_SSB_Resource& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ssb = (SSB_Index)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ra_PreambleIndex = (int64_t)tmp_value;
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
    if (Decode_CFRA_SSB_Resource_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_CFRA_SSB_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_SSB_Resource(CFRA_SSB_Resource& value)
{
    if (value.has_extGroup1) {
        Free_CFRA_SSB_Resource_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_CSIRS_Resource(Encoder& enc, const CFRA_CSIRS_Resource& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS), 0, 95);
enc.WriteConstrainedLength(value.ra_OccasionList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ra_OccasionList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_OccasionList_items[i]), 0, 511);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_PreambleIndex), 0, 63);
    return enc.Error();
}

ErrorCode Decode_CFRA_CSIRS_Resource(Decoder& dec, CFRA_CSIRS_Resource& value)
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
        if (!dec.ReadConstrainedInteger(0, 95, tmp_value)) { goto fail; }
        value.csi_RS = (CSI_RS_Index)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.ra_OccasionList_count)) { goto fail; }
if (value.ra_OccasionList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ra_OccasionList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ra_OccasionList_count > 0u) {
    value.ra_OccasionList_items = (int64_t*)std::malloc((std::size_t)value.ra_OccasionList_count * sizeof(int64_t));
    if (value.ra_OccasionList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ra_OccasionList_items, 0, (std::size_t)value.ra_OccasionList_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.ra_OccasionList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.ra_OccasionList_items[i] = (int64_t)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ra_PreambleIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_CSIRS_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_CSIRS_Resource(CFRA_CSIRS_Resource& value)
{
    if (value.ra_OccasionList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.ra_OccasionList_count; ++i) {
        }
        std::free(value.ra_OccasionList_items);
        value.ra_OccasionList_items = nullptr;
    }
    value.ra_OccasionList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18(Encoder& enc, const RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag_l839:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l839), 0, 837);
        break;
    case RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag_l139:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l139), 0, 139);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18(Decoder& dec, RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag)root_index;
    switch (value.tag) {
    case RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag_l839: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 837, tmp_value)) { goto fail; }
        value.u.l839 = (int64_t)tmp_value;
        break;
    }
    case RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag_l139: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 139, tmp_value)) { goto fail; }
        value.u.l139 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18(RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18& value)
{
    switch (value.tag) {
    case RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag_l839:
        break;
    case RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag_l139:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigTwoTA_r18(Encoder& enc, const RACH_ConfigTwoTA_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ssb_perRACH_Occasion_r18);
    enc.WriteBit(value.has_msg1_SubcarrierSpacing_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.rach_ConfigTwoTAIndex_r18), 1, 7);
    Encode_RACH_ConfigGeneric(enc, value.rach_ConfigGeneric_r18);
    if (value.has_ssb_perRACH_Occasion_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_perRACH_Occasion_r18), 0, 7);
    }
    Encode_RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18(enc, value.prach_RootSequenceIndex_r18);
    if (value.has_msg1_SubcarrierSpacing_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_SubcarrierSpacing_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigTwoTA_r18(Decoder& dec, RACH_ConfigTwoTA_r18& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.rach_ConfigTwoTAIndex_r18 = (RACH_ConfigTwoTAIndex_r18)tmp_value;
    }
    {
        if (Decode_RACH_ConfigGeneric(dec, value.rach_ConfigGeneric_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_perRACH_Occasion_r18 = (RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18)tmp_value;
    }
    {
        if (Decode_RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18(dec, value.prach_RootSequenceIndex_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msg1_SubcarrierSpacing_r18 = (SubcarrierSpacing)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigTwoTA_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigTwoTA_r18(RACH_ConfigTwoTA_r18& value)
{
    Free_RACH_ConfigGeneric(value.rach_ConfigGeneric_r18);
    if (value.has_ssb_perRACH_Occasion_r18) {
    }
    Free_RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18(value.prach_RootSequenceIndex_r18);
    if (value.has_msg1_SubcarrierSpacing_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RA_PrioritizationSliceInfo_r17(Encoder& enc, const RA_PrioritizationSliceInfo_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
enc.WriteConstrainedLength(value.nsag_ID_List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nsag_ID_List_r17_count; ++i) {
    enc.WriteFixedBitString(value.nsag_ID_List_r17_items[i].bytes, value.nsag_ID_List_r17_items[i].bitLength, 8, 8);
}
    Encode_RA_Prioritization(enc, value.ra_Prioritization_r17);
    return enc.Error();
}

ErrorCode Decode_RA_PrioritizationSliceInfo_r17(Decoder& dec, RA_PrioritizationSliceInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.nsag_ID_List_r17_count)) { goto fail; }
if (value.nsag_ID_List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nsag_ID_List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nsag_ID_List_r17_count > 0u) {
    value.nsag_ID_List_r17_items = (NSAG_ID_r17*)std::malloc((std::size_t)value.nsag_ID_List_r17_count * sizeof(NSAG_ID_r17));
    if (value.nsag_ID_List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nsag_ID_List_r17_items, 0, (std::size_t)value.nsag_ID_List_r17_count * sizeof(NSAG_ID_r17));
}
for (std::uint32_t i = 0; i < value.nsag_ID_List_r17_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
    string_length = 8;
    value.nsag_ID_List_r17_items[i].bytes = string_bytes;
    value.nsag_ID_List_r17_items[i].bitLength = string_length;
}
    }
    {
        if (Decode_RA_Prioritization(dec, value.ra_Prioritization_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RA_PrioritizationSliceInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_PrioritizationSliceInfo_r17(RA_PrioritizationSliceInfo_r17& value)
{
    if (value.nsag_ID_List_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.nsag_ID_List_r17_count; ++i) {
            std::free(value.nsag_ID_List_r17_items[i].bytes);
            value.nsag_ID_List_r17_items[i].bytes = nullptr;
            value.nsag_ID_List_r17_items[i].bitLength = 0;
        }
        std::free(value.nsag_ID_List_r17_items);
        value.nsag_ID_List_r17_items = nullptr;
    }
    value.nsag_ID_List_r17_count = 0;
    Free_RA_Prioritization(value.ra_Prioritization_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DRB_ToAddMod_ExtGroup1(Encoder& enc, const DRB_ToAddMod_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_daps_Config_r16);
    if (value.has_daps_Config_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.daps_Config_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_DRB_ToAddMod_ExtGroup1(Decoder& dec, DRB_ToAddMod_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.daps_Config_r16 = (DRB_ToAddMod_ExtGroup1_Daps_Config_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRB_ToAddMod_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRB_ToAddMod_ExtGroup1(DRB_ToAddMod_ExtGroup1& value)
{
    if (value.has_daps_Config_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DRB_ToAddMod_ExtGroup2(Encoder& enc, const DRB_ToAddMod_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_n3c_BearerAssociated_r18);
    if (value.has_n3c_BearerAssociated_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.n3c_BearerAssociated_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_DRB_ToAddMod_ExtGroup2(Decoder& dec, DRB_ToAddMod_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.n3c_BearerAssociated_r18 = (DRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRB_ToAddMod_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRB_ToAddMod_ExtGroup2(DRB_ToAddMod_ExtGroup2& value)
{
    if (value.has_n3c_BearerAssociated_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SDAP_Config(Encoder& enc, const SDAP_Config& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_mappedQoS_FlowsToAdd);
    enc.WriteBit(value.has_mappedQoS_FlowsToRelease);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdu_Session), 0, 255);
    enc.WriteConstrainedInteger((std::int64_t)(value.sdap_HeaderDL), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.sdap_HeaderUL), 0, 1);
    enc.WriteBool(value.defaultDRB);
    if (value.has_mappedQoS_FlowsToAdd) {
enc.WriteConstrainedLength(value.mappedQoS_FlowsToAdd_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.mappedQoS_FlowsToAdd_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.mappedQoS_FlowsToAdd_items[i]), 0, 63);
}
    }
    if (value.has_mappedQoS_FlowsToRelease) {
enc.WriteConstrainedLength(value.mappedQoS_FlowsToRelease_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.mappedQoS_FlowsToRelease_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.mappedQoS_FlowsToRelease_items[i]), 0, 63);
}
    }
    return enc.Error();
}

ErrorCode Decode_SDAP_Config(Decoder& dec, SDAP_Config& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.pdu_Session = (PDU_SessionID)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sdap_HeaderDL = (SDAP_Config_Sdap_HeaderDL)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sdap_HeaderUL = (SDAP_Config_Sdap_HeaderUL)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.defaultDRB = tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.mappedQoS_FlowsToAdd_count)) { goto fail; }
if (value.mappedQoS_FlowsToAdd_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.mappedQoS_FlowsToAdd_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.mappedQoS_FlowsToAdd_count > 0u) {
    value.mappedQoS_FlowsToAdd_items = (QFI*)std::malloc((std::size_t)value.mappedQoS_FlowsToAdd_count * sizeof(QFI));
    if (value.mappedQoS_FlowsToAdd_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.mappedQoS_FlowsToAdd_items, 0, (std::size_t)value.mappedQoS_FlowsToAdd_count * sizeof(QFI));
}
for (std::uint32_t i = 0; i < value.mappedQoS_FlowsToAdd_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.mappedQoS_FlowsToAdd_items[i] = (QFI)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.mappedQoS_FlowsToRelease_count)) { goto fail; }
if (value.mappedQoS_FlowsToRelease_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.mappedQoS_FlowsToRelease_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.mappedQoS_FlowsToRelease_count > 0u) {
    value.mappedQoS_FlowsToRelease_items = (QFI*)std::malloc((std::size_t)value.mappedQoS_FlowsToRelease_count * sizeof(QFI));
    if (value.mappedQoS_FlowsToRelease_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.mappedQoS_FlowsToRelease_items, 0, (std::size_t)value.mappedQoS_FlowsToRelease_count * sizeof(QFI));
}
for (std::uint32_t i = 0; i < value.mappedQoS_FlowsToRelease_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.mappedQoS_FlowsToRelease_items[i] = (QFI)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SDAP_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SDAP_Config(SDAP_Config& value)
{
    if (value.has_mappedQoS_FlowsToAdd) {
        if (value.mappedQoS_FlowsToAdd_items != nullptr) {
            for (std::uint32_t i = 0; i < value.mappedQoS_FlowsToAdd_count; ++i) {
            }
            std::free(value.mappedQoS_FlowsToAdd_items);
            value.mappedQoS_FlowsToAdd_items = nullptr;
        }
        value.mappedQoS_FlowsToAdd_count = 0;
    }
    if (value.has_mappedQoS_FlowsToRelease) {
        if (value.mappedQoS_FlowsToRelease_items != nullptr) {
            for (std::uint32_t i = 0; i < value.mappedQoS_FlowsToRelease_count; ++i) {
            }
            std::free(value.mappedQoS_FlowsToRelease_items);
            value.mappedQoS_FlowsToRelease_items = nullptr;
        }
        value.mappedQoS_FlowsToRelease_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DRB_ToAddMod_CnAssociation(Encoder& enc, const DRB_ToAddMod_CnAssociation& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case DRB_ToAddMod_CnAssociation_Tag_eps_BearerIdentity:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.eps_BearerIdentity), 0, 15);
        break;
    case DRB_ToAddMod_CnAssociation_Tag_sdap_Config:
        Encode_SDAP_Config(enc, value.u.sdap_Config);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DRB_ToAddMod_CnAssociation(Decoder& dec, DRB_ToAddMod_CnAssociation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (DRB_ToAddMod_CnAssociation_Tag)root_index;
    switch (value.tag) {
    case DRB_ToAddMod_CnAssociation_Tag_eps_BearerIdentity: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.eps_BearerIdentity = (int64_t)tmp_value;
        break;
    }
    case DRB_ToAddMod_CnAssociation_Tag_sdap_Config: {
        if (Decode_SDAP_Config(dec, value.u.sdap_Config) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRB_ToAddMod_CnAssociation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRB_ToAddMod_CnAssociation(DRB_ToAddMod_CnAssociation& value)
{
    switch (value.tag) {
    case DRB_ToAddMod_CnAssociation_Tag_eps_BearerIdentity:
        break;
    case DRB_ToAddMod_CnAssociation_Tag_sdap_Config:
        Free_SDAP_Config(value.u.sdap_Config);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DRB_ToAddMod(Encoder& enc, const DRB_ToAddMod& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_cnAssociation);
    enc.WriteBit(value.has_reestablishPDCP);
    enc.WriteBit(value.has_recoverPDCP);
    enc.WriteBit(value.has_pdcp_Config);
    if (value.has_cnAssociation) {
        Encode_DRB_ToAddMod_CnAssociation(enc, value.cnAssociation);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.drb_Identity), 1, 32);
    if (value.has_reestablishPDCP) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reestablishPDCP), 0, 0);
    }
    if (value.has_recoverPDCP) {
        enc.WriteConstrainedInteger((std::int64_t)(value.recoverPDCP), 0, 0);
    }
    if (value.has_pdcp_Config) {
        Encode_PDCP_Config(enc, value.pdcp_Config);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_DRB_ToAddMod_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_DRB_ToAddMod_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_DRB_ToAddMod(Decoder& dec, DRB_ToAddMod& value)
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
        if (Decode_DRB_ToAddMod_CnAssociation(dec, value.cnAssociation) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.drb_Identity = (DRB_Identity)tmp_value;
    }
    if (present_1) {
        value.reestablishPDCP = (DRB_ToAddMod_ReestablishPDCP)0;
    }
    if (present_2) {
        value.recoverPDCP = (DRB_ToAddMod_RecoverPDCP)0;
    }
    if (present_3) {
        if (Decode_PDCP_Config(dec, value.pdcp_Config) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_DRB_ToAddMod_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_DRB_ToAddMod_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_DRB_ToAddMod(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRB_ToAddMod(DRB_ToAddMod& value)
{
    if (value.has_cnAssociation) {
        Free_DRB_ToAddMod_CnAssociation(value.cnAssociation);
    }
    if (value.has_reestablishPDCP) {
    }
    if (value.has_recoverPDCP) {
    }
    if (value.has_pdcp_Config) {
        Free_PDCP_Config(value.pdcp_Config);
    }
    if (value.has_extGroup1) {
        Free_DRB_ToAddMod_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_DRB_ToAddMod_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TMGI_r17_Plmn_Id_r17(Encoder& enc, const TMGI_r17_Plmn_Id_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case TMGI_r17_Plmn_Id_r17_Tag_plmn_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.plmn_Index), 1, 12);
        break;
    case TMGI_r17_Plmn_Id_r17_Tag_explicitValue:
        Encode_PLMN_Identity(enc, value.u.explicitValue);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_TMGI_r17_Plmn_Id_r17(Decoder& dec, TMGI_r17_Plmn_Id_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (TMGI_r17_Plmn_Id_r17_Tag)root_index;
    switch (value.tag) {
    case TMGI_r17_Plmn_Id_r17_Tag_plmn_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 12, tmp_value)) { goto fail; }
        value.u.plmn_Index = (int64_t)tmp_value;
        break;
    }
    case TMGI_r17_Plmn_Id_r17_Tag_explicitValue: {
        if (Decode_PLMN_Identity(dec, value.u.explicitValue) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TMGI_r17_Plmn_Id_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TMGI_r17_Plmn_Id_r17(TMGI_r17_Plmn_Id_r17& value)
{
    switch (value.tag) {
    case TMGI_r17_Plmn_Id_r17_Tag_plmn_Index:
        break;
    case TMGI_r17_Plmn_Id_r17_Tag_explicitValue:
        Free_PLMN_Identity(value.u.explicitValue);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TMGI_r17(Encoder& enc, const TMGI_r17& value)
{
    (void)value;
    Encode_TMGI_r17_Plmn_Id_r17(enc, value.plmn_Id_r17);
    enc.WriteFixedOctetString(value.serviceId_r17.bytes, value.serviceId_r17.length, 3, 3);
    return enc.Error();
}

ErrorCode Decode_TMGI_r17(Decoder& dec, TMGI_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_TMGI_r17_Plmn_Id_r17(dec, value.plmn_Id_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 3)) { goto fail; }
        string_length = 3;
        value.serviceId_r17.bytes = string_bytes;
        value.serviceId_r17.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TMGI_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TMGI_r17(TMGI_r17& value)
{
    Free_TMGI_r17_Plmn_Id_r17(value.plmn_Id_r17);
    std::free(value.serviceId_r17.bytes);
    value.serviceId_r17.bytes = nullptr;
    value.serviceId_r17.length = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MRB_ToAddMod_r17(Encoder& enc, const MRB_ToAddMod_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_mbs_SessionId_r17);
    enc.WriteBit(value.has_mrb_IdentityNew_r17);
    enc.WriteBit(value.has_reestablishPDCP_r17);
    enc.WriteBit(value.has_recoverPDCP_r17);
    enc.WriteBit(value.has_pdcp_Config_r17);
    if (value.has_mbs_SessionId_r17) {
        Encode_TMGI_r17(enc, value.mbs_SessionId_r17);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.mrb_Identity_r17), 1, 512);
    if (value.has_mrb_IdentityNew_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mrb_IdentityNew_r17), 1, 512);
    }
    if (value.has_reestablishPDCP_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reestablishPDCP_r17), 0, 0);
    }
    if (value.has_recoverPDCP_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.recoverPDCP_r17), 0, 0);
    }
    if (value.has_pdcp_Config_r17) {
        Encode_PDCP_Config(enc, value.pdcp_Config_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_ToAddMod_r17(Decoder& dec, MRB_ToAddMod_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    bool present_1 = false;
    bool present_2 = false;
    bool present_3 = false;
    bool present_4 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (present_0) {
        if (Decode_TMGI_r17(dec, value.mbs_SessionId_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.mrb_Identity_r17 = (MRB_Identity_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.mrb_IdentityNew_r17 = (MRB_Identity_r17)tmp_value;
    }
    if (present_2) {
        value.reestablishPDCP_r17 = (MRB_ToAddMod_r17_ReestablishPDCP_r17)0;
    }
    if (present_3) {
        value.recoverPDCP_r17 = (MRB_ToAddMod_r17_RecoverPDCP_r17)0;
    }
    if (present_4) {
        if (Decode_PDCP_Config(dec, value.pdcp_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_ToAddMod_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_ToAddMod_r17(MRB_ToAddMod_r17& value)
{
    if (value.has_mbs_SessionId_r17) {
        Free_TMGI_r17(value.mbs_SessionId_r17);
    }
    if (value.has_mrb_IdentityNew_r17) {
    }
    if (value.has_reestablishPDCP_r17) {
    }
    if (value.has_recoverPDCP_r17) {
    }
    if (value.has_pdcp_Config_r17) {
        Free_PDCP_Config(value.pdcp_Config_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RadioLinkMonitoringRS_DetectionResource(Encoder& enc, const RadioLinkMonitoringRS_DetectionResource& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RadioLinkMonitoringRS_DetectionResource_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case RadioLinkMonitoringRS_DetectionResource_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RadioLinkMonitoringRS_DetectionResource(Decoder& dec, RadioLinkMonitoringRS_DetectionResource& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RadioLinkMonitoringRS_DetectionResource_Tag)root_index;
    switch (value.tag) {
    case RadioLinkMonitoringRS_DetectionResource_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case RadioLinkMonitoringRS_DetectionResource_Tag_csi_RS_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RadioLinkMonitoringRS_DetectionResource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RadioLinkMonitoringRS_DetectionResource(RadioLinkMonitoringRS_DetectionResource& value)
{
    switch (value.tag) {
    case RadioLinkMonitoringRS_DetectionResource_Tag_ssb_Index:
        break;
    case RadioLinkMonitoringRS_DetectionResource_Tag_csi_RS_Index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RadioLinkMonitoringRS(Encoder& enc, const RadioLinkMonitoringRS& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.radioLinkMonitoringRS_Id), 0, 9);
    enc.WriteConstrainedInteger((std::int64_t)(value.purpose), 0, 2);
    Encode_RadioLinkMonitoringRS_DetectionResource(enc, value.detectionResource);
    return enc.Error();
}

ErrorCode Decode_RadioLinkMonitoringRS(Decoder& dec, RadioLinkMonitoringRS& value)
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
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.radioLinkMonitoringRS_Id = (RadioLinkMonitoringRS_Id)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.purpose = (RadioLinkMonitoringRS_Purpose)tmp_value;
    }
    {
        if (Decode_RadioLinkMonitoringRS_DetectionResource(dec, value.detectionResource) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RadioLinkMonitoringRS(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RadioLinkMonitoringRS(RadioLinkMonitoringRS& value)
{
    Free_RadioLinkMonitoringRS_DetectionResource(value.detectionResource);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BeamLinkMonitoringRS_r17_DetectionResource_r17(Encoder& enc, const BeamLinkMonitoringRS_r17_DetectionResource_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BeamLinkMonitoringRS_r17_DetectionResource_r17(Decoder& dec, BeamLinkMonitoringRS_r17_DetectionResource_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag)root_index;
    switch (value.tag) {
    case BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag_csi_RS_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BeamLinkMonitoringRS_r17_DetectionResource_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamLinkMonitoringRS_r17_DetectionResource_r17(BeamLinkMonitoringRS_r17_DetectionResource_r17& value)
{
    switch (value.tag) {
    case BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag_ssb_Index:
        break;
    case BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag_csi_RS_Index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BeamLinkMonitoringRS_r17(Encoder& enc, const BeamLinkMonitoringRS_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.beamLinkMonitoringRS_Id_r17), 0, 63);
    Encode_BeamLinkMonitoringRS_r17_DetectionResource_r17(enc, value.detectionResource_r17);
    return enc.Error();
}

ErrorCode Decode_BeamLinkMonitoringRS_r17(Decoder& dec, BeamLinkMonitoringRS_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.beamLinkMonitoringRS_Id_r17 = (BeamLinkMonitoringRS_Id_r17)tmp_value;
    }
    {
        if (Decode_BeamLinkMonitoringRS_r17_DetectionResource_r17(dec, value.detectionResource_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BeamLinkMonitoringRS_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamLinkMonitoringRS_r17(BeamLinkMonitoringRS_r17& value)
{
    Free_BeamLinkMonitoringRS_r17_DetectionResource_r17(value.detectionResource_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RateMatchPattern_ExtGroup1(Encoder& enc, const RateMatchPattern_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_controlResourceSet_r16);
    if (value.has_controlResourceSet_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.controlResourceSet_r16), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_RateMatchPattern_ExtGroup1(Decoder& dec, RateMatchPattern_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.controlResourceSet_r16 = (ControlResourceSetId_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RateMatchPattern_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RateMatchPattern_ExtGroup1(RateMatchPattern_ExtGroup1& value)
{
    if (value.has_controlResourceSet_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock(Encoder& enc, const RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag_oneSlot:
        enc.WriteFixedBitString(value.u.oneSlot.bytes, value.u.oneSlot.bitLength, 14, 14);
        break;
    case RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag_twoSlots:
        enc.WriteFixedBitString(value.u.twoSlots.bytes, value.u.twoSlots.bitLength, 28, 28);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock(Decoder& dec, RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag)root_index;
    switch (value.tag) {
    case RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag_oneSlot: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 14)) { goto fail; }
        string_length = 14;
        value.u.oneSlot.bytes = string_bytes;
        value.u.oneSlot.bitLength = string_length;
        break;
    }
    case RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag_twoSlots: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 28)) { goto fail; }
        string_length = 28;
        value.u.twoSlots.bytes = string_bytes;
        value.u.twoSlots.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock(RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock& value)
{
    switch (value.tag) {
    case RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag_oneSlot:
        std::free(value.u.oneSlot.bytes);
        break;
    case RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag_twoSlots:
        std::free(value.u.twoSlots.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern(Encoder& enc, const RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 6);
    switch (value.tag) {
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n2:
        enc.WriteFixedBitString(value.u.n2.bytes, value.u.n2.bitLength, 2, 2);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n4:
        enc.WriteFixedBitString(value.u.n4.bytes, value.u.n4.bitLength, 4, 4);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n5:
        enc.WriteFixedBitString(value.u.n5.bytes, value.u.n5.bitLength, 5, 5);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n8:
        enc.WriteFixedBitString(value.u.n8.bytes, value.u.n8.bitLength, 8, 8);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n10:
        enc.WriteFixedBitString(value.u.n10.bytes, value.u.n10.bitLength, 10, 10);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n20:
        enc.WriteFixedBitString(value.u.n20.bytes, value.u.n20.bitLength, 20, 20);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n40:
        enc.WriteFixedBitString(value.u.n40.bytes, value.u.n40.bitLength, 40, 40);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern(Decoder& dec, RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 6, root_index)) {
        goto fail;
    }
    value.tag = (RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag)root_index;
    switch (value.tag) {
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n2: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.u.n2.bytes = string_bytes;
        value.u.n2.bitLength = string_length;
        break;
    }
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n4: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.n4.bytes = string_bytes;
        value.u.n4.bitLength = string_length;
        break;
    }
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n5: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 5)) { goto fail; }
        string_length = 5;
        value.u.n5.bytes = string_bytes;
        value.u.n5.bitLength = string_length;
        break;
    }
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n8: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.n8.bytes = string_bytes;
        value.u.n8.bitLength = string_length;
        break;
    }
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n10: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.u.n10.bytes = string_bytes;
        value.u.n10.bitLength = string_length;
        break;
    }
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n20: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 20)) { goto fail; }
        string_length = 20;
        value.u.n20.bytes = string_bytes;
        value.u.n20.bitLength = string_length;
        break;
    }
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n40: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 40)) { goto fail; }
        string_length = 40;
        value.u.n40.bytes = string_bytes;
        value.u.n40.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern(RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern& value)
{
    switch (value.tag) {
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n2:
        std::free(value.u.n2.bytes);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n4:
        std::free(value.u.n4.bytes);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n5:
        std::free(value.u.n5.bytes);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n8:
        std::free(value.u.n8.bytes);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n10:
        std::free(value.u.n10.bytes);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n20:
        std::free(value.u.n20.bytes);
        break;
    case RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n40:
        std::free(value.u.n40.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RateMatchPattern_PatternType_Bitmaps(Encoder& enc, const RateMatchPattern_PatternType_Bitmaps& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_periodicityAndPattern);
    enc.WriteFixedBitString(value.resourceBlocks.bytes, value.resourceBlocks.bitLength, 275, 275);
    Encode_RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock(enc, value.symbolsInResourceBlock);
    if (value.has_periodicityAndPattern) {
        Encode_RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern(enc, value.periodicityAndPattern);
    }
    return enc.Error();
}

ErrorCode Decode_RateMatchPattern_PatternType_Bitmaps(Decoder& dec, RateMatchPattern_PatternType_Bitmaps& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 275)) { goto fail; }
        string_length = 275;
        value.resourceBlocks.bytes = string_bytes;
        value.resourceBlocks.bitLength = string_length;
    }
    {
        if (Decode_RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock(dec, value.symbolsInResourceBlock) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern(dec, value.periodicityAndPattern) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RateMatchPattern_PatternType_Bitmaps(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RateMatchPattern_PatternType_Bitmaps(RateMatchPattern_PatternType_Bitmaps& value)
{
    std::free(value.resourceBlocks.bytes);
    value.resourceBlocks.bytes = nullptr;
    value.resourceBlocks.bitLength = 0;
    Free_RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock(value.symbolsInResourceBlock);
    if (value.has_periodicityAndPattern) {
        Free_RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern(value.periodicityAndPattern);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
