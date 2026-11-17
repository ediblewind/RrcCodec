/* ============================================================================
 * src/generated/codec_part022.cpp — 生成的编解码函数
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
// SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16：ASN.1 searchSpaceType-r16/common-r16/dci-Format2-6-r16；源文件第 12271 行；空 SEQUENCE{}。
// Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16 只读不分配；Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16(Encoder& enc, const SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16(Decoder& dec, SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16：ASN.1 searchSpaceType-r16/common-r16；源文件第 12250 行；SEQUENCE。
// Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16 只读不分配；Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16(Encoder& enc, const SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dci_Format2_4_r16);
    enc.WriteBit(value.has_dci_Format2_5_r16);
    enc.WriteBit(value.has_dci_Format2_6_r16);
    if (value.has_dci_Format2_4_r16) {
        Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16(enc, value.dci_Format2_4_r16);
    }
    if (value.has_dci_Format2_5_r16) {
        Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16(enc, value.dci_Format2_5_r16);
    }
    if (value.has_dci_Format2_6_r16) {
        Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16(enc, value.dci_Format2_6_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16(Decoder& dec, SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16& value)
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
        if (Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16(dec, value.dci_Format2_4_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16(dec, value.dci_Format2_5_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16(dec, value.dci_Format2_6_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16& value)
{
    if (value.has_dci_Format2_4_r16) {
        Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16(value.dci_Format2_4_r16);
    }
    if (value.has_dci_Format2_5_r16) {
        Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16(value.dci_Format2_5_r16);
    }
    if (value.has_dci_Format2_6_r16) {
        Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16(value.dci_Format2_6_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_r16_SearchSpaceType_r16：ASN.1 searchSpaceType-r16；源文件第 12249 行；SEQUENCE。
// Encode_SearchSpaceExt_r16_SearchSpaceType_r16 只读不分配；Decode_SearchSpaceExt_r16_SearchSpaceType_r16 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_r16_SearchSpaceType_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_r16_SearchSpaceType_r16(Encoder& enc, const SearchSpaceExt_r16_SearchSpaceType_r16& value)
{
    (void)value;
    Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16(enc, value.common_r16);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_r16_SearchSpaceType_r16(Decoder& dec, SearchSpaceExt_r16_SearchSpaceType_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16(dec, value.common_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_r16_SearchSpaceType_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_r16_SearchSpaceType_r16(SearchSpaceExt_r16_SearchSpaceType_r16& value)
{
    Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16(value.common_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_r16：ASN.1 SearchSpaceExt-r16；源文件第 12247 行；SEQUENCE。
// Encode_SearchSpaceExt_r16 只读不分配；Decode_SearchSpaceExt_r16 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_r16(Encoder& enc, const SearchSpaceExt_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_controlResourceSetId_r16);
    enc.WriteBit(value.has_searchSpaceType_r16);
    enc.WriteBit(value.has_searchSpaceGroupIdList_r16);
    enc.WriteBit(value.has_freqMonitorLocations_r16);
    if (value.has_controlResourceSetId_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.controlResourceSetId_r16), 0, 15);
    }
    if (value.has_searchSpaceType_r16) {
        Encode_SearchSpaceExt_r16_SearchSpaceType_r16(enc, value.searchSpaceType_r16);
    }
    if (value.has_searchSpaceGroupIdList_r16) {
enc.WriteConstrainedLength(value.searchSpaceGroupIdList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.searchSpaceGroupIdList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceGroupIdList_r16_items[i]), 0, 1);
}
    }
    if (value.has_freqMonitorLocations_r16) {
        enc.WriteFixedBitString(value.freqMonitorLocations_r16.bytes, value.freqMonitorLocations_r16.bitLength, 5, 5);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_r16(Decoder& dec, SearchSpaceExt_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.controlResourceSetId_r16 = (ControlResourceSetId_r16)tmp_value;
    }
    if (present_1) {
        if (Decode_SearchSpaceExt_r16_SearchSpaceType_r16(dec, value.searchSpaceType_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.searchSpaceGroupIdList_r16_count)) { goto fail; }
if (value.searchSpaceGroupIdList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.searchSpaceGroupIdList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.searchSpaceGroupIdList_r16_count > 0u) {
    value.searchSpaceGroupIdList_r16_items = (int64_t*)std::malloc((std::size_t)value.searchSpaceGroupIdList_r16_count * sizeof(int64_t));
    if (value.searchSpaceGroupIdList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.searchSpaceGroupIdList_r16_items, 0, (std::size_t)value.searchSpaceGroupIdList_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.searchSpaceGroupIdList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
    value.searchSpaceGroupIdList_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 5)) { goto fail; }
        string_length = 5;
        value.freqMonitorLocations_r16.bytes = string_bytes;
        value.freqMonitorLocations_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_r16(SearchSpaceExt_r16& value)
{
    if (value.has_controlResourceSetId_r16) {
    }
    if (value.has_searchSpaceType_r16) {
        Free_SearchSpaceExt_r16_SearchSpaceType_r16(value.searchSpaceType_r16);
    }
    if (value.has_searchSpaceGroupIdList_r16) {
        if (value.searchSpaceGroupIdList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.searchSpaceGroupIdList_r16_count; ++i) {
            }
            std::free(value.searchSpaceGroupIdList_r16_items);
            value.searchSpaceGroupIdList_r16_items = nullptr;
        }
        value.searchSpaceGroupIdList_r16_count = 0;
    }
    if (value.has_freqMonitorLocations_r16) {
        std::free(value.freqMonitorLocations_r16.bytes);
        value.freqMonitorLocations_r16.bytes = nullptr;
        value.freqMonitorLocations_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710：ASN.1 monitoringSlotPeriodicityAndOffset-v1710；源文件第 12282 行；CHOICE。
// Encode_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710 只读不分配；Decode_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710(Encoder& enc, const SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 5);
    switch (value.tag) {
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl32), 0, 31);
        break;
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl64), 0, 63);
        break;
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl128), 0, 127);
        break;
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl5120), 0, 5119);
        break;
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl10240), 0, 10239);
        break;
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl20480:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl20480), 0, 20479);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710(Decoder& dec, SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 5, root_index)) {
        goto fail;
    }
    value.tag = (SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag)root_index;
    switch (value.tag) {
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.sl32 = (int64_t)tmp_value;
        break;
    }
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.sl64 = (int64_t)tmp_value;
        break;
    }
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.sl128 = (int64_t)tmp_value;
        break;
    }
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.sl5120 = (int64_t)tmp_value;
        break;
    }
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl10240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.sl10240 = (int64_t)tmp_value;
        break;
    }
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl20480: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 20479, tmp_value)) { goto fail; }
        value.u.sl20480 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710(SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710& value)
{
    switch (value.tag) {
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl32:
        break;
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl64:
        break;
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl128:
        break;
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl5120:
        break;
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl10240:
        break;
    case SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl20480:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17：ASN.1 monitoringSlotsWithinSlotGroup-r17；源文件第 12290 行；CHOICE。
// Encode_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17 只读不分配；Decode_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17(Encoder& enc, const SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag_slotGroupLength4_r17:
        enc.WriteFixedBitString(value.u.slotGroupLength4_r17.bytes, value.u.slotGroupLength4_r17.bitLength, 4, 4);
        break;
    case SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag_slotGroupLength8_r17:
        enc.WriteFixedBitString(value.u.slotGroupLength8_r17.bytes, value.u.slotGroupLength8_r17.bitLength, 8, 8);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17(Decoder& dec, SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag)root_index;
    switch (value.tag) {
    case SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag_slotGroupLength4_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.slotGroupLength4_r17.bytes = string_bytes;
        value.u.slotGroupLength4_r17.bitLength = string_length;
        break;
    }
    case SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag_slotGroupLength8_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.slotGroupLength8_r17.bytes = string_bytes;
        value.u.slotGroupLength8_r17.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17(SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17& value)
{
    switch (value.tag) {
    case SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag_slotGroupLength4_r17:
        std::free(value.u.slotGroupLength4_r17.bytes);
        break;
    case SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag_slotGroupLength8_r17:
        std::free(value.u.slotGroupLength8_r17.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17：ASN.1 searchSpaceType-r17/common-r17/dci-Format4-0-r17；源文件第 12298 行；空 SEQUENCE{}。
// Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17 只读不分配；Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17(Encoder& enc, const SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17(Decoder& dec, SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17：ASN.1 searchSpaceType-r17/common-r17/dci-Format4-1-r17；源文件第 12301 行；空 SEQUENCE{}。
// Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17 只读不分配；Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17(Encoder& enc, const SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17(Decoder& dec, SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17：ASN.1 searchSpaceType-r17/common-r17/dci-Format4-2-r17；源文件第 12304 行；空 SEQUENCE{}。
// Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17 只读不分配；Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17(Encoder& enc, const SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17(Decoder& dec, SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17：ASN.1 searchSpaceType-r17/common-r17/dci-Format4-1-AndFormat4-2-r17；源文件第 12307 行；空 SEQUENCE{}。
// Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17 只读不分配；Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17(Encoder& enc, const SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17(Decoder& dec, SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17：ASN.1 searchSpaceType-r17/common-r17/dci-Format2-7-r17/nrofCandidates-PEI-r17；源文件第 12311 行；SEQUENCE。
// Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17 只读不分配；Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17(Encoder& enc, const SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_aggregationLevel4_r17);
    enc.WriteBit(value.has_aggregationLevel8_r17);
    enc.WriteBit(value.has_aggregationLevel16_r17);
    if (value.has_aggregationLevel4_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel4_r17), 0, 4);
    }
    if (value.has_aggregationLevel8_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel8_r17), 0, 2);
    }
    if (value.has_aggregationLevel16_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel16_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17(Decoder& dec, SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.aggregationLevel4_r17 = (SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel4_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.aggregationLevel8_r17 = (SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel8_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel16_r17 = (SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel16_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17& value)
{
    if (value.has_aggregationLevel4_r17) {
    }
    if (value.has_aggregationLevel8_r17) {
    }
    if (value.has_aggregationLevel16_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17：ASN.1 searchSpaceType-r17/common-r17/dci-Format2-7-r17；源文件第 12310 行；SEQUENCE。
// Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17 只读不分配；Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17(Encoder& enc, const SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17(enc, value.nrofCandidates_PEI_r17);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17(Decoder& dec, SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17(dec, value.nrofCandidates_PEI_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17& value)
{
    Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17(value.nrofCandidates_PEI_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17：ASN.1 searchSpaceType-r17/common-r17；源文件第 12297 行；SEQUENCE。
// Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17 只读不分配；Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17(Encoder& enc, const SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_dci_Format4_0_r17);
    enc.WriteBit(value.has_dci_Format4_1_r17);
    enc.WriteBit(value.has_dci_Format4_2_r17);
    enc.WriteBit(value.has_dci_Format4_1_AndFormat4_2_r17);
    enc.WriteBit(value.has_dci_Format2_7_r17);
    if (value.has_dci_Format4_0_r17) {
        Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17(enc, value.dci_Format4_0_r17);
    }
    if (value.has_dci_Format4_1_r17) {
        Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17(enc, value.dci_Format4_1_r17);
    }
    if (value.has_dci_Format4_2_r17) {
        Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17(enc, value.dci_Format4_2_r17);
    }
    if (value.has_dci_Format4_1_AndFormat4_2_r17) {
        Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17(enc, value.dci_Format4_1_AndFormat4_2_r17);
    }
    if (value.has_dci_Format2_7_r17) {
        Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17(enc, value.dci_Format2_7_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17(Decoder& dec, SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17& value)
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
        if (Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17(dec, value.dci_Format4_0_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17(dec, value.dci_Format4_1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17(dec, value.dci_Format4_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17(dec, value.dci_Format4_1_AndFormat4_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17(dec, value.dci_Format2_7_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17(SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17& value)
{
    if (value.has_dci_Format4_0_r17) {
        Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17(value.dci_Format4_0_r17);
    }
    if (value.has_dci_Format4_1_r17) {
        Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17(value.dci_Format4_1_r17);
    }
    if (value.has_dci_Format4_2_r17) {
        Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17(value.dci_Format4_2_r17);
    }
    if (value.has_dci_Format4_1_AndFormat4_2_r17) {
        Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17(value.dci_Format4_1_AndFormat4_2_r17);
    }
    if (value.has_dci_Format2_7_r17) {
        Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17(value.dci_Format2_7_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700_SearchSpaceType_r17：ASN.1 searchSpaceType-r17；源文件第 12296 行；SEQUENCE。
// Encode_SearchSpaceExt_v1700_SearchSpaceType_r17 只读不分配；Decode_SearchSpaceExt_v1700_SearchSpaceType_r17 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700_SearchSpaceType_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700_SearchSpaceType_r17(Encoder& enc, const SearchSpaceExt_v1700_SearchSpaceType_r17& value)
{
    (void)value;
    Encode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17(enc, value.common_r17);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700_SearchSpaceType_r17(Decoder& dec, SearchSpaceExt_v1700_SearchSpaceType_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17(dec, value.common_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_v1700_SearchSpaceType_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_v1700_SearchSpaceType_r17(SearchSpaceExt_v1700_SearchSpaceType_r17& value)
{
    Free_SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17(value.common_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1700：ASN.1 SearchSpaceExt-v1700；源文件第 12281 行；SEQUENCE。
// Encode_SearchSpaceExt_v1700 只读不分配；Decode_SearchSpaceExt_v1700 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1700(Encoder& enc, const SearchSpaceExt_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_monitoringSlotPeriodicityAndOffset_v1710);
    enc.WriteBit(value.has_monitoringSlotsWithinSlotGroup_r17);
    enc.WriteBit(value.has_duration_r17);
    enc.WriteBit(value.has_searchSpaceType_r17);
    enc.WriteBit(value.has_searchSpaceGroupIdList_r17);
    enc.WriteBit(value.has_searchSpaceLinkingId_r17);
    if (value.has_monitoringSlotPeriodicityAndOffset_v1710) {
        Encode_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710(enc, value.monitoringSlotPeriodicityAndOffset_v1710);
    }
    if (value.has_monitoringSlotsWithinSlotGroup_r17) {
        Encode_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17(enc, value.monitoringSlotsWithinSlotGroup_r17);
    }
    if (value.has_duration_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.duration_r17), 4, 20476);
    }
    if (value.has_searchSpaceType_r17) {
        Encode_SearchSpaceExt_v1700_SearchSpaceType_r17(enc, value.searchSpaceType_r17);
    }
    if (value.has_searchSpaceGroupIdList_r17) {
enc.WriteConstrainedLength(value.searchSpaceGroupIdList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.searchSpaceGroupIdList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceGroupIdList_r17_items[i]), 0, 2);
}
    }
    if (value.has_searchSpaceLinkingId_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceLinkingId_r17), 0, 39);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1700(Decoder& dec, SearchSpaceExt_v1700& value)
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
        if (Decode_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710(dec, value.monitoringSlotPeriodicityAndOffset_v1710) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17(dec, value.monitoringSlotsWithinSlotGroup_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 20476, tmp_value)) { goto fail; }
        value.duration_r17 = (int64_t)tmp_value;
    }
    if (present_3) {
        if (Decode_SearchSpaceExt_v1700_SearchSpaceType_r17(dec, value.searchSpaceType_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.searchSpaceGroupIdList_r17_count)) { goto fail; }
if (value.searchSpaceGroupIdList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.searchSpaceGroupIdList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.searchSpaceGroupIdList_r17_count > 0u) {
    value.searchSpaceGroupIdList_r17_items = (int64_t*)std::malloc((std::size_t)value.searchSpaceGroupIdList_r17_count * sizeof(int64_t));
    if (value.searchSpaceGroupIdList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.searchSpaceGroupIdList_r17_items, 0, (std::size_t)value.searchSpaceGroupIdList_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.searchSpaceGroupIdList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
    value.searchSpaceGroupIdList_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.searchSpaceLinkingId_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_v1700(SearchSpaceExt_v1700& value)
{
    if (value.has_monitoringSlotPeriodicityAndOffset_v1710) {
        Free_SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710(value.monitoringSlotPeriodicityAndOffset_v1710);
    }
    if (value.has_monitoringSlotsWithinSlotGroup_r17) {
        Free_SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17(value.monitoringSlotsWithinSlotGroup_r17);
    }
    if (value.has_duration_r17) {
    }
    if (value.has_searchSpaceType_r17) {
        Free_SearchSpaceExt_v1700_SearchSpaceType_r17(value.searchSpaceType_r17);
    }
    if (value.has_searchSpaceGroupIdList_r17) {
        if (value.searchSpaceGroupIdList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.searchSpaceGroupIdList_r17_count; ++i) {
            }
            std::free(value.searchSpaceGroupIdList_r17_items);
            value.searchSpaceGroupIdList_r17_items = nullptr;
        }
        value.searchSpaceGroupIdList_r17_count = 0;
    }
    if (value.has_searchSpaceLinkingId_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18：ASN.1 searchSpaceType-r18/common-r18/dci-Format2-9-r18；源文件第 12327 行；空 SEQUENCE{}。
// Encode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18 只读不分配；Decode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18(Encoder& enc, const SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18(Decoder& dec, SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18(SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18：ASN.1 searchSpaceType-r18/common-r18；源文件第 12326 行；SEQUENCE。
// Encode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18 只读不分配；Decode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18(Encoder& enc, const SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dci_Format2_9_r18);
    if (value.has_dci_Format2_9_r18) {
        Encode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18(enc, value.dci_Format2_9_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18(Decoder& dec, SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18& value)
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
        if (Decode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18(dec, value.dci_Format2_9_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18(SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18& value)
{
    if (value.has_dci_Format2_9_r18) {
        Free_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18(value.dci_Format2_9_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1800_SearchSpaceType_r18：ASN.1 searchSpaceType-r18；源文件第 12325 行；SEQUENCE。
// Encode_SearchSpaceExt_v1800_SearchSpaceType_r18 只读不分配；Decode_SearchSpaceExt_v1800_SearchSpaceType_r18 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1800_SearchSpaceType_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1800_SearchSpaceType_r18(Encoder& enc, const SearchSpaceExt_v1800_SearchSpaceType_r18& value)
{
    (void)value;
    Encode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18(enc, value.common_r18);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1800_SearchSpaceType_r18(Decoder& dec, SearchSpaceExt_v1800_SearchSpaceType_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18(dec, value.common_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_v1800_SearchSpaceType_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_v1800_SearchSpaceType_r18(SearchSpaceExt_v1800_SearchSpaceType_r18& value)
{
    Free_SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18(value.common_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_v1800：ASN.1 SearchSpaceExt-v1800；源文件第 12324 行；SEQUENCE。
// Encode_SearchSpaceExt_v1800 只读不分配；Decode_SearchSpaceExt_v1800 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_v1800(Encoder& enc, const SearchSpaceExt_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_searchSpaceType_r18);
    if (value.has_searchSpaceType_r18) {
        Encode_SearchSpaceExt_v1800_SearchSpaceType_r18(enc, value.searchSpaceType_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_v1800(Decoder& dec, SearchSpaceExt_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SearchSpaceExt_v1800_SearchSpaceType_r18(dec, value.searchSpaceType_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_v1800(SearchSpaceExt_v1800& value)
{
    if (value.has_searchSpaceType_r18) {
        Free_SearchSpaceExt_v1800_SearchSpaceType_r18(value.searchSpaceType_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraCellGuardBandsPerSCS_r16：ASN.1 IntraCellGuardBandsPerSCS-r16；源文件第 12553 行；SEQUENCE。
// Encode_IntraCellGuardBandsPerSCS_r16 只读不分配；Decode_IntraCellGuardBandsPerSCS_r16 可能 malloc（失败时内部已释放并清零）；Free_IntraCellGuardBandsPerSCS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraCellGuardBandsPerSCS_r16(Encoder& enc, const IntraCellGuardBandsPerSCS_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.guardBandSCS_r16), 0, 7);
enc.WriteConstrainedLength(value.intraCellGuardBands_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.intraCellGuardBands_r16_count; ++i) {
    Encode_GuardBand_r16(enc, value.intraCellGuardBands_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_IntraCellGuardBandsPerSCS_r16(Decoder& dec, IntraCellGuardBandsPerSCS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.guardBandSCS_r16 = (SubcarrierSpacing)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.intraCellGuardBands_r16_count)) { goto fail; }
if (value.intraCellGuardBands_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.intraCellGuardBands_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.intraCellGuardBands_r16_count > 0u) {
    value.intraCellGuardBands_r16_items = (GuardBand_r16*)std::malloc((std::size_t)value.intraCellGuardBands_r16_count * sizeof(GuardBand_r16));
    if (value.intraCellGuardBands_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.intraCellGuardBands_r16_items, 0, (std::size_t)value.intraCellGuardBands_r16_count * sizeof(GuardBand_r16));
}
for (std::uint32_t i = 0; i < value.intraCellGuardBands_r16_count; ++i) {
    if (Decode_GuardBand_r16(dec, value.intraCellGuardBands_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_IntraCellGuardBandsPerSCS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraCellGuardBandsPerSCS_r16(IntraCellGuardBandsPerSCS_r16& value)
{
    if (value.intraCellGuardBands_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.intraCellGuardBands_r16_count; ++i) {
            Free_GuardBand_r16(value.intraCellGuardBands_r16_items[i]);
        }
        std::free(value.intraCellGuardBands_r16_items);
        value.intraCellGuardBands_r16_items = nullptr;
    }
    value.intraCellGuardBands_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// GuardBand_r16：ASN.1 GuardBand-r16；源文件第 12558 行；SEQUENCE。
// Encode_GuardBand_r16 只读不分配；Decode_GuardBand_r16 可能 malloc（失败时内部已释放并清零）；Free_GuardBand_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_GuardBand_r16(Encoder& enc, const GuardBand_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.startCRB_r16), 0, 274);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofCRBs_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_GuardBand_r16(Decoder& dec, GuardBand_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.startCRB_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.nrofCRBs_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GuardBand_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GuardBand_r16(GuardBand_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MC_DCI_SetOfCells_r18：ASN.1 MC-DCI-SetOfCells-r18；源文件第 12596 行；SEQUENCE。
// Encode_MC_DCI_SetOfCells_r18 只读不分配；Decode_MC_DCI_SetOfCells_r18 可能 malloc（失败时内部已释放并清零）；Free_MC_DCI_SetOfCells_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MC_DCI_SetOfCells_r18(Encoder& enc, const MC_DCI_SetOfCells_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_scheduledCellListDCI_1_3_r18);
    enc.WriteBit(value.has_scheduledCellListDCI_0_3_r18);
    enc.WriteBit(value.has_scheduledCellComboListDCI_1_3_r18);
    enc.WriteBit(value.has_scheduledCellComboListDCI_0_3_r18);
    enc.WriteBit(value.has_antennaPortsDCI1_3_r18);
    enc.WriteBit(value.has_antennaPortsDCI0_3_r18);
    enc.WriteBit(value.has_tpmi_DCI0_3_r18);
    enc.WriteBit(value.has_sri_DCI0_3_r18);
    enc.WriteBit(value.has_priorityIndicatorDCI_1_3_r18);
    enc.WriteBit(value.has_priorityIndicatorDCI_0_3_r18);
    enc.WriteBit(value.has_dormancyDCI_1_3_r18);
    enc.WriteBit(value.has_dormancyDCI_0_3_r18);
    enc.WriteBit(value.has_pdcchMonAdaptDCI_1_3_r18);
    enc.WriteBit(value.has_pdcchMonAdaptDCI_0_3_r18);
    enc.WriteBit(value.has_minimumSchedulingOffsetK0DCI_1_3_r18);
    enc.WriteBit(value.has_minimumSchedulingOffsetK0DCI_0_3_r18);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_enhType3DCI_1_3_r18);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_retxDCI_1_3_r18);
    enc.WriteBit(value.has_pucch_sSCellDynDCI_1_3_r18);
    enc.WriteBit(value.has_tdra_FieldIndexListDCI_1_3_r18);
    enc.WriteBit(value.has_tdra_FieldIndexListDCI_0_3_r18);
    enc.WriteBit(value.has_rateMatchListDCI_1_3_r18);
    enc.WriteBit(value.has_zp_CSI_RSListDCI_1_3_r18);
    enc.WriteBit(value.has_tci_ListDCI_1_3_r18);
    enc.WriteBit(value.has_srs_RequestListDCI_1_3_r18);
    enc.WriteBit(value.has_srs_OffsetListDCI_1_3_r18);
    enc.WriteBit(value.has_srs_RequestListDCI_0_3_r18);
    enc.WriteBit(value.has_srs_OffsetListDCI_0_3_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.setOfCellsId_r18), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.nCI_Value_r18), 0, 7);
    if (value.has_scheduledCellListDCI_1_3_r18) {
enc.WriteConstrainedLength(value.scheduledCellListDCI_1_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scheduledCellListDCI_1_3_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.scheduledCellListDCI_1_3_r18_items[i]), 0, 31);
}
    }
    if (value.has_scheduledCellListDCI_0_3_r18) {
enc.WriteConstrainedLength(value.scheduledCellListDCI_0_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scheduledCellListDCI_0_3_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.scheduledCellListDCI_0_3_r18_items[i]), 0, 31);
}
    }
    if (value.has_scheduledCellComboListDCI_1_3_r18) {
enc.WriteConstrainedLength(value.scheduledCellComboListDCI_1_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scheduledCellComboListDCI_1_3_r18_count; ++i) {
    Encode_ScheduledCellCombo_r18(enc, value.scheduledCellComboListDCI_1_3_r18_items[i]);
}
    }
    if (value.has_scheduledCellComboListDCI_0_3_r18) {
enc.WriteConstrainedLength(value.scheduledCellComboListDCI_0_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scheduledCellComboListDCI_0_3_r18_count; ++i) {
    Encode_ScheduledCellCombo_r18(enc, value.scheduledCellComboListDCI_0_3_r18_items[i]);
}
    }
    if (value.has_antennaPortsDCI1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.antennaPortsDCI1_3_r18), 0, 1);
    }
    if (value.has_antennaPortsDCI0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.antennaPortsDCI0_3_r18), 0, 1);
    }
    if (value.has_tpmi_DCI0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpmi_DCI0_3_r18), 0, 1);
    }
    if (value.has_sri_DCI0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sri_DCI0_3_r18), 0, 1);
    }
    if (value.has_priorityIndicatorDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityIndicatorDCI_1_3_r18), 0, 0);
    }
    if (value.has_priorityIndicatorDCI_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityIndicatorDCI_0_3_r18), 0, 0);
    }
    if (value.has_dormancyDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dormancyDCI_1_3_r18), 0, 0);
    }
    if (value.has_dormancyDCI_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dormancyDCI_0_3_r18), 0, 0);
    }
    if (value.has_pdcchMonAdaptDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcchMonAdaptDCI_1_3_r18), 0, 0);
    }
    if (value.has_pdcchMonAdaptDCI_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcchMonAdaptDCI_0_3_r18), 0, 0);
    }
    if (value.has_minimumSchedulingOffsetK0DCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.minimumSchedulingOffsetK0DCI_1_3_r18), 0, 0);
    }
    if (value.has_minimumSchedulingOffsetK0DCI_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.minimumSchedulingOffsetK0DCI_0_3_r18), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_enhType3DCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_enhType3DCI_1_3_r18), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_retxDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_retxDCI_1_3_r18), 0, 0);
    }
    if (value.has_pucch_sSCellDynDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_sSCellDynDCI_1_3_r18), 0, 0);
    }
    if (value.has_tdra_FieldIndexListDCI_1_3_r18) {
enc.WriteConstrainedLength(value.tdra_FieldIndexListDCI_1_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tdra_FieldIndexListDCI_1_3_r18_count; ++i) {
    Encode_TDRA_FieldIndexDCI_1_3_r18(enc, value.tdra_FieldIndexListDCI_1_3_r18_items[i]);
}
    }
    if (value.has_tdra_FieldIndexListDCI_0_3_r18) {
enc.WriteConstrainedLength(value.tdra_FieldIndexListDCI_0_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tdra_FieldIndexListDCI_0_3_r18_count; ++i) {
    Encode_TDRA_FieldIndexDCI_0_3_r18(enc, value.tdra_FieldIndexListDCI_0_3_r18_items[i]);
}
    }
    if (value.has_rateMatchListDCI_1_3_r18) {
enc.WriteConstrainedLength(value.rateMatchListDCI_1_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rateMatchListDCI_1_3_r18_count; ++i) {
    Encode_RateMatchDCI_1_3_r18(enc, value.rateMatchListDCI_1_3_r18_items[i]);
}
    }
    if (value.has_zp_CSI_RSListDCI_1_3_r18) {
enc.WriteConstrainedLength(value.zp_CSI_RSListDCI_1_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.zp_CSI_RSListDCI_1_3_r18_count; ++i) {
    Encode_ZP_CSI_DCI_1_3_r18(enc, value.zp_CSI_RSListDCI_1_3_r18_items[i]);
}
    }
    if (value.has_tci_ListDCI_1_3_r18) {
enc.WriteConstrainedLength(value.tci_ListDCI_1_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tci_ListDCI_1_3_r18_count; ++i) {
    Encode_TCI_DCI_1_3_r18(enc, value.tci_ListDCI_1_3_r18_items[i]);
}
    }
    if (value.has_srs_RequestListDCI_1_3_r18) {
enc.WriteConstrainedLength(value.srs_RequestListDCI_1_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_RequestListDCI_1_3_r18_count; ++i) {
    Encode_SRS_RequestCombo_r18(enc, value.srs_RequestListDCI_1_3_r18_items[i]);
}
    }
    if (value.has_srs_OffsetListDCI_1_3_r18) {
enc.WriteConstrainedLength(value.srs_OffsetListDCI_1_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_OffsetListDCI_1_3_r18_count; ++i) {
    Encode_SRS_OffsetCombo_r18(enc, value.srs_OffsetListDCI_1_3_r18_items[i]);
}
    }
    if (value.has_srs_RequestListDCI_0_3_r18) {
enc.WriteConstrainedLength(value.srs_RequestListDCI_0_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_RequestListDCI_0_3_r18_count; ++i) {
    Encode_SRS_RequestCombo_r18(enc, value.srs_RequestListDCI_0_3_r18_items[i]);
}
    }
    if (value.has_srs_OffsetListDCI_0_3_r18) {
enc.WriteConstrainedLength(value.srs_OffsetListDCI_0_3_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_OffsetListDCI_0_3_r18_count; ++i) {
    Encode_SRS_OffsetCombo_r18(enc, value.srs_OffsetListDCI_0_3_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_MC_DCI_SetOfCells_r18(Decoder& dec, MC_DCI_SetOfCells_r18& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.setOfCellsId_r18 = (SetOfCellsId_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.nCI_Value_r18 = (int64_t)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.scheduledCellListDCI_1_3_r18_count)) { goto fail; }
if (value.scheduledCellListDCI_1_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.scheduledCellListDCI_1_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.scheduledCellListDCI_1_3_r18_count > 0u) {
    value.scheduledCellListDCI_1_3_r18_items = (ServCellIndex*)std::malloc((std::size_t)value.scheduledCellListDCI_1_3_r18_count * sizeof(ServCellIndex));
    if (value.scheduledCellListDCI_1_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.scheduledCellListDCI_1_3_r18_items, 0, (std::size_t)value.scheduledCellListDCI_1_3_r18_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.scheduledCellListDCI_1_3_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.scheduledCellListDCI_1_3_r18_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.scheduledCellListDCI_0_3_r18_count)) { goto fail; }
if (value.scheduledCellListDCI_0_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.scheduledCellListDCI_0_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.scheduledCellListDCI_0_3_r18_count > 0u) {
    value.scheduledCellListDCI_0_3_r18_items = (ServCellIndex*)std::malloc((std::size_t)value.scheduledCellListDCI_0_3_r18_count * sizeof(ServCellIndex));
    if (value.scheduledCellListDCI_0_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.scheduledCellListDCI_0_3_r18_items, 0, (std::size_t)value.scheduledCellListDCI_0_3_r18_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.scheduledCellListDCI_0_3_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.scheduledCellListDCI_0_3_r18_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.scheduledCellComboListDCI_1_3_r18_count)) { goto fail; }
if (value.scheduledCellComboListDCI_1_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.scheduledCellComboListDCI_1_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.scheduledCellComboListDCI_1_3_r18_count > 0u) {
    value.scheduledCellComboListDCI_1_3_r18_items = (ScheduledCellCombo_r18*)std::malloc((std::size_t)value.scheduledCellComboListDCI_1_3_r18_count * sizeof(ScheduledCellCombo_r18));
    if (value.scheduledCellComboListDCI_1_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.scheduledCellComboListDCI_1_3_r18_items, 0, (std::size_t)value.scheduledCellComboListDCI_1_3_r18_count * sizeof(ScheduledCellCombo_r18));
}
for (std::uint32_t i = 0; i < value.scheduledCellComboListDCI_1_3_r18_count; ++i) {
    if (Decode_ScheduledCellCombo_r18(dec, value.scheduledCellComboListDCI_1_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.scheduledCellComboListDCI_0_3_r18_count)) { goto fail; }
if (value.scheduledCellComboListDCI_0_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.scheduledCellComboListDCI_0_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.scheduledCellComboListDCI_0_3_r18_count > 0u) {
    value.scheduledCellComboListDCI_0_3_r18_items = (ScheduledCellCombo_r18*)std::malloc((std::size_t)value.scheduledCellComboListDCI_0_3_r18_count * sizeof(ScheduledCellCombo_r18));
    if (value.scheduledCellComboListDCI_0_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.scheduledCellComboListDCI_0_3_r18_items, 0, (std::size_t)value.scheduledCellComboListDCI_0_3_r18_count * sizeof(ScheduledCellCombo_r18));
}
for (std::uint32_t i = 0; i < value.scheduledCellComboListDCI_0_3_r18_count; ++i) {
    if (Decode_ScheduledCellCombo_r18(dec, value.scheduledCellComboListDCI_0_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.antennaPortsDCI1_3_r18 = (MC_DCI_SetOfCells_r18_AntennaPortsDCI1_3_r18)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.antennaPortsDCI0_3_r18 = (MC_DCI_SetOfCells_r18_AntennaPortsDCI0_3_r18)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.tpmi_DCI0_3_r18 = (MC_DCI_SetOfCells_r18_Tpmi_DCI0_3_r18)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sri_DCI0_3_r18 = (MC_DCI_SetOfCells_r18_Sri_DCI0_3_r18)tmp_value;
    }
    if (present_8) {
        value.priorityIndicatorDCI_1_3_r18 = (MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_1_3_r18)0;
    }
    if (present_9) {
        value.priorityIndicatorDCI_0_3_r18 = (MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_0_3_r18)0;
    }
    if (present_10) {
        value.dormancyDCI_1_3_r18 = (MC_DCI_SetOfCells_r18_DormancyDCI_1_3_r18)0;
    }
    if (present_11) {
        value.dormancyDCI_0_3_r18 = (MC_DCI_SetOfCells_r18_DormancyDCI_0_3_r18)0;
    }
    if (present_12) {
        value.pdcchMonAdaptDCI_1_3_r18 = (MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_1_3_r18)0;
    }
    if (present_13) {
        value.pdcchMonAdaptDCI_0_3_r18 = (MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_0_3_r18)0;
    }
    if (present_14) {
        value.minimumSchedulingOffsetK0DCI_1_3_r18 = (MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_1_3_r18)0;
    }
    if (present_15) {
        value.minimumSchedulingOffsetK0DCI_0_3_r18 = (MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_0_3_r18)0;
    }
    if (present_16) {
        value.pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18 = (MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18)0;
    }
    if (present_17) {
        value.pdsch_HARQ_ACK_enhType3DCI_1_3_r18 = (MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCI_1_3_r18)0;
    }
    if (present_18) {
        value.pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18 = (MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18)0;
    }
    if (present_19) {
        value.pdsch_HARQ_ACK_retxDCI_1_3_r18 = (MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_retxDCI_1_3_r18)0;
    }
    if (present_20) {
        value.pucch_sSCellDynDCI_1_3_r18 = (MC_DCI_SetOfCells_r18_Pucch_sSCellDynDCI_1_3_r18)0;
    }
    if (present_21) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tdra_FieldIndexListDCI_1_3_r18_count)) { goto fail; }
if (value.tdra_FieldIndexListDCI_1_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tdra_FieldIndexListDCI_1_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tdra_FieldIndexListDCI_1_3_r18_count > 0u) {
    value.tdra_FieldIndexListDCI_1_3_r18_items = (TDRA_FieldIndexDCI_1_3_r18*)std::malloc((std::size_t)value.tdra_FieldIndexListDCI_1_3_r18_count * sizeof(TDRA_FieldIndexDCI_1_3_r18));
    if (value.tdra_FieldIndexListDCI_1_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tdra_FieldIndexListDCI_1_3_r18_items, 0, (std::size_t)value.tdra_FieldIndexListDCI_1_3_r18_count * sizeof(TDRA_FieldIndexDCI_1_3_r18));
}
for (std::uint32_t i = 0; i < value.tdra_FieldIndexListDCI_1_3_r18_count; ++i) {
    if (Decode_TDRA_FieldIndexDCI_1_3_r18(dec, value.tdra_FieldIndexListDCI_1_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_22) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tdra_FieldIndexListDCI_0_3_r18_count)) { goto fail; }
if (value.tdra_FieldIndexListDCI_0_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tdra_FieldIndexListDCI_0_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tdra_FieldIndexListDCI_0_3_r18_count > 0u) {
    value.tdra_FieldIndexListDCI_0_3_r18_items = (TDRA_FieldIndexDCI_0_3_r18*)std::malloc((std::size_t)value.tdra_FieldIndexListDCI_0_3_r18_count * sizeof(TDRA_FieldIndexDCI_0_3_r18));
    if (value.tdra_FieldIndexListDCI_0_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tdra_FieldIndexListDCI_0_3_r18_items, 0, (std::size_t)value.tdra_FieldIndexListDCI_0_3_r18_count * sizeof(TDRA_FieldIndexDCI_0_3_r18));
}
for (std::uint32_t i = 0; i < value.tdra_FieldIndexListDCI_0_3_r18_count; ++i) {
    if (Decode_TDRA_FieldIndexDCI_0_3_r18(dec, value.tdra_FieldIndexListDCI_0_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_23) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rateMatchListDCI_1_3_r18_count)) { goto fail; }
if (value.rateMatchListDCI_1_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rateMatchListDCI_1_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rateMatchListDCI_1_3_r18_count > 0u) {
    value.rateMatchListDCI_1_3_r18_items = (RateMatchDCI_1_3_r18*)std::malloc((std::size_t)value.rateMatchListDCI_1_3_r18_count * sizeof(RateMatchDCI_1_3_r18));
    if (value.rateMatchListDCI_1_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rateMatchListDCI_1_3_r18_items, 0, (std::size_t)value.rateMatchListDCI_1_3_r18_count * sizeof(RateMatchDCI_1_3_r18));
}
for (std::uint32_t i = 0; i < value.rateMatchListDCI_1_3_r18_count; ++i) {
    if (Decode_RateMatchDCI_1_3_r18(dec, value.rateMatchListDCI_1_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_24) {
if (!dec.ReadConstrainedLength(0u, 0u, value.zp_CSI_RSListDCI_1_3_r18_count)) { goto fail; }
if (value.zp_CSI_RSListDCI_1_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.zp_CSI_RSListDCI_1_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.zp_CSI_RSListDCI_1_3_r18_count > 0u) {
    value.zp_CSI_RSListDCI_1_3_r18_items = (ZP_CSI_DCI_1_3_r18*)std::malloc((std::size_t)value.zp_CSI_RSListDCI_1_3_r18_count * sizeof(ZP_CSI_DCI_1_3_r18));
    if (value.zp_CSI_RSListDCI_1_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.zp_CSI_RSListDCI_1_3_r18_items, 0, (std::size_t)value.zp_CSI_RSListDCI_1_3_r18_count * sizeof(ZP_CSI_DCI_1_3_r18));
}
for (std::uint32_t i = 0; i < value.zp_CSI_RSListDCI_1_3_r18_count; ++i) {
    if (Decode_ZP_CSI_DCI_1_3_r18(dec, value.zp_CSI_RSListDCI_1_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_25) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tci_ListDCI_1_3_r18_count)) { goto fail; }
if (value.tci_ListDCI_1_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tci_ListDCI_1_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tci_ListDCI_1_3_r18_count > 0u) {
    value.tci_ListDCI_1_3_r18_items = (TCI_DCI_1_3_r18*)std::malloc((std::size_t)value.tci_ListDCI_1_3_r18_count * sizeof(TCI_DCI_1_3_r18));
    if (value.tci_ListDCI_1_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tci_ListDCI_1_3_r18_items, 0, (std::size_t)value.tci_ListDCI_1_3_r18_count * sizeof(TCI_DCI_1_3_r18));
}
for (std::uint32_t i = 0; i < value.tci_ListDCI_1_3_r18_count; ++i) {
    if (Decode_TCI_DCI_1_3_r18(dec, value.tci_ListDCI_1_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_26) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_RequestListDCI_1_3_r18_count)) { goto fail; }
if (value.srs_RequestListDCI_1_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_RequestListDCI_1_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_RequestListDCI_1_3_r18_count > 0u) {
    value.srs_RequestListDCI_1_3_r18_items = (SRS_RequestCombo_r18*)std::malloc((std::size_t)value.srs_RequestListDCI_1_3_r18_count * sizeof(SRS_RequestCombo_r18));
    if (value.srs_RequestListDCI_1_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_RequestListDCI_1_3_r18_items, 0, (std::size_t)value.srs_RequestListDCI_1_3_r18_count * sizeof(SRS_RequestCombo_r18));
}
for (std::uint32_t i = 0; i < value.srs_RequestListDCI_1_3_r18_count; ++i) {
    if (Decode_SRS_RequestCombo_r18(dec, value.srs_RequestListDCI_1_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_27) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_OffsetListDCI_1_3_r18_count)) { goto fail; }
if (value.srs_OffsetListDCI_1_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_OffsetListDCI_1_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_OffsetListDCI_1_3_r18_count > 0u) {
    value.srs_OffsetListDCI_1_3_r18_items = (SRS_OffsetCombo_r18*)std::malloc((std::size_t)value.srs_OffsetListDCI_1_3_r18_count * sizeof(SRS_OffsetCombo_r18));
    if (value.srs_OffsetListDCI_1_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_OffsetListDCI_1_3_r18_items, 0, (std::size_t)value.srs_OffsetListDCI_1_3_r18_count * sizeof(SRS_OffsetCombo_r18));
}
for (std::uint32_t i = 0; i < value.srs_OffsetListDCI_1_3_r18_count; ++i) {
    if (Decode_SRS_OffsetCombo_r18(dec, value.srs_OffsetListDCI_1_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_28) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_RequestListDCI_0_3_r18_count)) { goto fail; }
if (value.srs_RequestListDCI_0_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_RequestListDCI_0_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_RequestListDCI_0_3_r18_count > 0u) {
    value.srs_RequestListDCI_0_3_r18_items = (SRS_RequestCombo_r18*)std::malloc((std::size_t)value.srs_RequestListDCI_0_3_r18_count * sizeof(SRS_RequestCombo_r18));
    if (value.srs_RequestListDCI_0_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_RequestListDCI_0_3_r18_items, 0, (std::size_t)value.srs_RequestListDCI_0_3_r18_count * sizeof(SRS_RequestCombo_r18));
}
for (std::uint32_t i = 0; i < value.srs_RequestListDCI_0_3_r18_count; ++i) {
    if (Decode_SRS_RequestCombo_r18(dec, value.srs_RequestListDCI_0_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_29) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_OffsetListDCI_0_3_r18_count)) { goto fail; }
if (value.srs_OffsetListDCI_0_3_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_OffsetListDCI_0_3_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_OffsetListDCI_0_3_r18_count > 0u) {
    value.srs_OffsetListDCI_0_3_r18_items = (SRS_OffsetCombo_r18*)std::malloc((std::size_t)value.srs_OffsetListDCI_0_3_r18_count * sizeof(SRS_OffsetCombo_r18));
    if (value.srs_OffsetListDCI_0_3_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_OffsetListDCI_0_3_r18_items, 0, (std::size_t)value.srs_OffsetListDCI_0_3_r18_count * sizeof(SRS_OffsetCombo_r18));
}
for (std::uint32_t i = 0; i < value.srs_OffsetListDCI_0_3_r18_count; ++i) {
    if (Decode_SRS_OffsetCombo_r18(dec, value.srs_OffsetListDCI_0_3_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_MC_DCI_SetOfCells_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MC_DCI_SetOfCells_r18(MC_DCI_SetOfCells_r18& value)
{
    if (value.has_scheduledCellListDCI_1_3_r18) {
        if (value.scheduledCellListDCI_1_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.scheduledCellListDCI_1_3_r18_count; ++i) {
            }
            std::free(value.scheduledCellListDCI_1_3_r18_items);
            value.scheduledCellListDCI_1_3_r18_items = nullptr;
        }
        value.scheduledCellListDCI_1_3_r18_count = 0;
    }
    if (value.has_scheduledCellListDCI_0_3_r18) {
        if (value.scheduledCellListDCI_0_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.scheduledCellListDCI_0_3_r18_count; ++i) {
            }
            std::free(value.scheduledCellListDCI_0_3_r18_items);
            value.scheduledCellListDCI_0_3_r18_items = nullptr;
        }
        value.scheduledCellListDCI_0_3_r18_count = 0;
    }
    if (value.has_scheduledCellComboListDCI_1_3_r18) {
        if (value.scheduledCellComboListDCI_1_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.scheduledCellComboListDCI_1_3_r18_count; ++i) {
                Free_ScheduledCellCombo_r18(value.scheduledCellComboListDCI_1_3_r18_items[i]);
            }
            std::free(value.scheduledCellComboListDCI_1_3_r18_items);
            value.scheduledCellComboListDCI_1_3_r18_items = nullptr;
        }
        value.scheduledCellComboListDCI_1_3_r18_count = 0;
    }
    if (value.has_scheduledCellComboListDCI_0_3_r18) {
        if (value.scheduledCellComboListDCI_0_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.scheduledCellComboListDCI_0_3_r18_count; ++i) {
                Free_ScheduledCellCombo_r18(value.scheduledCellComboListDCI_0_3_r18_items[i]);
            }
            std::free(value.scheduledCellComboListDCI_0_3_r18_items);
            value.scheduledCellComboListDCI_0_3_r18_items = nullptr;
        }
        value.scheduledCellComboListDCI_0_3_r18_count = 0;
    }
    if (value.has_antennaPortsDCI1_3_r18) {
    }
    if (value.has_antennaPortsDCI0_3_r18) {
    }
    if (value.has_tpmi_DCI0_3_r18) {
    }
    if (value.has_sri_DCI0_3_r18) {
    }
    if (value.has_priorityIndicatorDCI_1_3_r18) {
    }
    if (value.has_priorityIndicatorDCI_0_3_r18) {
    }
    if (value.has_dormancyDCI_1_3_r18) {
    }
    if (value.has_dormancyDCI_0_3_r18) {
    }
    if (value.has_pdcchMonAdaptDCI_1_3_r18) {
    }
    if (value.has_pdcchMonAdaptDCI_0_3_r18) {
    }
    if (value.has_minimumSchedulingOffsetK0DCI_1_3_r18) {
    }
    if (value.has_minimumSchedulingOffsetK0DCI_0_3_r18) {
    }
    if (value.has_pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18) {
    }
    if (value.has_pdsch_HARQ_ACK_enhType3DCI_1_3_r18) {
    }
    if (value.has_pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18) {
    }
    if (value.has_pdsch_HARQ_ACK_retxDCI_1_3_r18) {
    }
    if (value.has_pucch_sSCellDynDCI_1_3_r18) {
    }
    if (value.has_tdra_FieldIndexListDCI_1_3_r18) {
        if (value.tdra_FieldIndexListDCI_1_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tdra_FieldIndexListDCI_1_3_r18_count; ++i) {
                Free_TDRA_FieldIndexDCI_1_3_r18(value.tdra_FieldIndexListDCI_1_3_r18_items[i]);
            }
            std::free(value.tdra_FieldIndexListDCI_1_3_r18_items);
            value.tdra_FieldIndexListDCI_1_3_r18_items = nullptr;
        }
        value.tdra_FieldIndexListDCI_1_3_r18_count = 0;
    }
    if (value.has_tdra_FieldIndexListDCI_0_3_r18) {
        if (value.tdra_FieldIndexListDCI_0_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tdra_FieldIndexListDCI_0_3_r18_count; ++i) {
                Free_TDRA_FieldIndexDCI_0_3_r18(value.tdra_FieldIndexListDCI_0_3_r18_items[i]);
            }
            std::free(value.tdra_FieldIndexListDCI_0_3_r18_items);
            value.tdra_FieldIndexListDCI_0_3_r18_items = nullptr;
        }
        value.tdra_FieldIndexListDCI_0_3_r18_count = 0;
    }
    if (value.has_rateMatchListDCI_1_3_r18) {
        if (value.rateMatchListDCI_1_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rateMatchListDCI_1_3_r18_count; ++i) {
                Free_RateMatchDCI_1_3_r18(value.rateMatchListDCI_1_3_r18_items[i]);
            }
            std::free(value.rateMatchListDCI_1_3_r18_items);
            value.rateMatchListDCI_1_3_r18_items = nullptr;
        }
        value.rateMatchListDCI_1_3_r18_count = 0;
    }
    if (value.has_zp_CSI_RSListDCI_1_3_r18) {
        if (value.zp_CSI_RSListDCI_1_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.zp_CSI_RSListDCI_1_3_r18_count; ++i) {
                Free_ZP_CSI_DCI_1_3_r18(value.zp_CSI_RSListDCI_1_3_r18_items[i]);
            }
            std::free(value.zp_CSI_RSListDCI_1_3_r18_items);
            value.zp_CSI_RSListDCI_1_3_r18_items = nullptr;
        }
        value.zp_CSI_RSListDCI_1_3_r18_count = 0;
    }
    if (value.has_tci_ListDCI_1_3_r18) {
        if (value.tci_ListDCI_1_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tci_ListDCI_1_3_r18_count; ++i) {
                Free_TCI_DCI_1_3_r18(value.tci_ListDCI_1_3_r18_items[i]);
            }
            std::free(value.tci_ListDCI_1_3_r18_items);
            value.tci_ListDCI_1_3_r18_items = nullptr;
        }
        value.tci_ListDCI_1_3_r18_count = 0;
    }
    if (value.has_srs_RequestListDCI_1_3_r18) {
        if (value.srs_RequestListDCI_1_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_RequestListDCI_1_3_r18_count; ++i) {
                Free_SRS_RequestCombo_r18(value.srs_RequestListDCI_1_3_r18_items[i]);
            }
            std::free(value.srs_RequestListDCI_1_3_r18_items);
            value.srs_RequestListDCI_1_3_r18_items = nullptr;
        }
        value.srs_RequestListDCI_1_3_r18_count = 0;
    }
    if (value.has_srs_OffsetListDCI_1_3_r18) {
        if (value.srs_OffsetListDCI_1_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_OffsetListDCI_1_3_r18_count; ++i) {
                Free_SRS_OffsetCombo_r18(value.srs_OffsetListDCI_1_3_r18_items[i]);
            }
            std::free(value.srs_OffsetListDCI_1_3_r18_items);
            value.srs_OffsetListDCI_1_3_r18_items = nullptr;
        }
        value.srs_OffsetListDCI_1_3_r18_count = 0;
    }
    if (value.has_srs_RequestListDCI_0_3_r18) {
        if (value.srs_RequestListDCI_0_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_RequestListDCI_0_3_r18_count; ++i) {
                Free_SRS_RequestCombo_r18(value.srs_RequestListDCI_0_3_r18_items[i]);
            }
            std::free(value.srs_RequestListDCI_0_3_r18_items);
            value.srs_RequestListDCI_0_3_r18_items = nullptr;
        }
        value.srs_RequestListDCI_0_3_r18_count = 0;
    }
    if (value.has_srs_OffsetListDCI_0_3_r18) {
        if (value.srs_OffsetListDCI_0_3_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_OffsetListDCI_0_3_r18_count; ++i) {
                Free_SRS_OffsetCombo_r18(value.srs_OffsetListDCI_0_3_r18_items[i]);
            }
            std::free(value.srs_OffsetListDCI_0_3_r18_items);
            value.srs_OffsetListDCI_0_3_r18_items = nullptr;
        }
        value.srs_OffsetListDCI_0_3_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ScheduledCellCombo_r18：ASN.1 ScheduledCellCombo-r18；源文件第 12633 行；SEQUENCE OF。
// Encode_ScheduledCellCombo_r18 只读不分配；Decode_ScheduledCellCombo_r18 可能 malloc（失败时内部已释放并清零）；Free_ScheduledCellCombo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ScheduledCellCombo_r18(Encoder& enc, const ScheduledCellCombo_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_ScheduledCellCombo_r18(Decoder& dec, ScheduledCellCombo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_ScheduledCellCombo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ScheduledCellCombo_r18(ScheduledCellCombo_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RateMatchDCI_1_3_r18：ASN.1 RateMatchDCI-1-3-r18；源文件第 12635 行；SEQUENCE OF。
// Encode_RateMatchDCI_1_3_r18 只读不分配；Decode_RateMatchDCI_1_3_r18 可能 malloc（失败时内部已释放并清零）；Free_RateMatchDCI_1_3_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RateMatchDCI_1_3_r18(Encoder& enc, const RateMatchDCI_1_3_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedBitString(value.items[i].bytes, value.items[i].bitLength, 1, 2);
    }
    return enc.Error();
}

ErrorCode Decode_RateMatchDCI_1_3_r18(Decoder& dec, RateMatchDCI_1_3_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
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
    if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 2)) { goto fail; }
    value.items[i].bytes = string_bytes;
    value.items[i].bitLength = string_length;
}
    return dec.Error();
    } while (false);
fail:
    Free_RateMatchDCI_1_3_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RateMatchDCI_1_3_r18(RateMatchDCI_1_3_r18& value)
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

// --------------------------------------------------------------------------
// ZP_CSI_DCI_1_3_r18：ASN.1 ZP-CSI-DCI-1-3-r18；源文件第 12637 行；SEQUENCE OF。
// Encode_ZP_CSI_DCI_1_3_r18 只读不分配；Decode_ZP_CSI_DCI_1_3_r18 可能 malloc（失败时内部已释放并清零）；Free_ZP_CSI_DCI_1_3_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ZP_CSI_DCI_1_3_r18(Encoder& enc, const ZP_CSI_DCI_1_3_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedBitString(value.items[i].bytes, value.items[i].bitLength, 1, 2);
    }
    return enc.Error();
}

ErrorCode Decode_ZP_CSI_DCI_1_3_r18(Decoder& dec, ZP_CSI_DCI_1_3_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
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
    if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 2)) { goto fail; }
    value.items[i].bytes = string_bytes;
    value.items[i].bitLength = string_length;
}
    return dec.Error();
    } while (false);
fail:
    Free_ZP_CSI_DCI_1_3_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ZP_CSI_DCI_1_3_r18(ZP_CSI_DCI_1_3_r18& value)
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

// --------------------------------------------------------------------------
// TCI_DCI_1_3_r18：ASN.1 TCI-DCI-1-3-r18；源文件第 12639 行；SEQUENCE OF。
// Encode_TCI_DCI_1_3_r18 只读不分配；Decode_TCI_DCI_1_3_r18 可能 malloc（失败时内部已释放并清零）；Free_TCI_DCI_1_3_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TCI_DCI_1_3_r18(Encoder& enc, const TCI_DCI_1_3_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 2u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteFixedBitString(value.items[i].bytes, value.items[i].bitLength, 3, 3);
    }
    return enc.Error();
}

ErrorCode Decode_TCI_DCI_1_3_r18(Decoder& dec, TCI_DCI_1_3_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(2u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
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
    if (!dec.ReadFixedBitString(string_bytes, 3)) { goto fail; }
    string_length = 3;
    value.items[i].bytes = string_bytes;
    value.items[i].bitLength = string_length;
}
    return dec.Error();
    } while (false);
fail:
    Free_TCI_DCI_1_3_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TCI_DCI_1_3_r18(TCI_DCI_1_3_r18& value)
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

// --------------------------------------------------------------------------
// SRS_RequestCombo_r18：ASN.1 SRS-RequestCombo-r18；源文件第 12641 行；SEQUENCE OF。
// Encode_SRS_RequestCombo_r18 只读不分配；Decode_SRS_RequestCombo_r18 可能 malloc（失败时内部已释放并清零）；Free_SRS_RequestCombo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_RequestCombo_r18(Encoder& enc, const SRS_RequestCombo_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedBitString(value.items[i].bytes, value.items[i].bitLength, 2, 3);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_RequestCombo_r18(Decoder& dec, SRS_RequestCombo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
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
    if (!dec.ReadConstrainedBitString(string_bytes, string_length, 2, 3)) { goto fail; }
    value.items[i].bytes = string_bytes;
    value.items[i].bitLength = string_length;
}
    return dec.Error();
    } while (false);
fail:
    Free_SRS_RequestCombo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_RequestCombo_r18(SRS_RequestCombo_r18& value)
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

// --------------------------------------------------------------------------
// SRS_OffsetCombo_r18：ASN.1 SRS-OffsetCombo-r18；源文件第 12643 行；SEQUENCE OF。
// Encode_SRS_OffsetCombo_r18 只读不分配；Decode_SRS_OffsetCombo_r18 可能 malloc（失败时内部已释放并清零）；Free_SRS_OffsetCombo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_OffsetCombo_r18(Encoder& enc, const SRS_OffsetCombo_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_OffsetCombo_r18(Decoder& dec, SRS_OffsetCombo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SRS_OffsetCombo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_OffsetCombo_r18(SRS_OffsetCombo_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TDRA_FieldIndexDCI_1_3_r18：ASN.1 TDRA-FieldIndexDCI-1-3-r18；源文件第 12645 行；SEQUENCE OF。
// Encode_TDRA_FieldIndexDCI_1_3_r18 只读不分配；Decode_TDRA_FieldIndexDCI_1_3_r18 可能 malloc（失败时内部已释放并清零）；Free_TDRA_FieldIndexDCI_1_3_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TDRA_FieldIndexDCI_1_3_r18(Encoder& enc, const TDRA_FieldIndexDCI_1_3_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 2u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_TDRA_FieldIndexDCI_1_3_r18(Decoder& dec, TDRA_FieldIndexDCI_1_3_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(2u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_TDRA_FieldIndexDCI_1_3_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDRA_FieldIndexDCI_1_3_r18(TDRA_FieldIndexDCI_1_3_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TDRA_FieldIndexDCI_0_3_r18：ASN.1 TDRA-FieldIndexDCI-0-3-r18；源文件第 12647 行；SEQUENCE OF。
// Encode_TDRA_FieldIndexDCI_0_3_r18 只读不分配；Decode_TDRA_FieldIndexDCI_0_3_r18 可能 malloc（失败时内部已释放并清零）；Free_TDRA_FieldIndexDCI_0_3_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TDRA_FieldIndexDCI_0_3_r18(Encoder& enc, const TDRA_FieldIndexDCI_0_3_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 2u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_TDRA_FieldIndexDCI_0_3_r18(Decoder& dec, TDRA_FieldIndexDCI_0_3_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(2u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_TDRA_FieldIndexDCI_0_3_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDRA_FieldIndexDCI_0_3_r18(TDRA_FieldIndexDCI_0_3_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SI_RequestResources：ASN.1 SI-RequestResources；源文件第 12779 行；SEQUENCE。
// Encode_SI_RequestResources 只读不分配；Decode_SI_RequestResources 可能 malloc（失败时内部已释放并清零）；Free_SI_RequestResources 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SI_RequestResources(Encoder& enc, const SI_RequestResources& value)
{
    (void)value;
    enc.WriteBit(value.has_ra_AssociationPeriodIndex);
    enc.WriteBit(value.has_ra_ssb_OccasionMaskIndex);
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_PreambleStartIndex), 0, 63);
    if (value.has_ra_AssociationPeriodIndex) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_AssociationPeriodIndex), 0, 15);
    }
    if (value.has_ra_ssb_OccasionMaskIndex) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_ssb_OccasionMaskIndex), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_SI_RequestResources(Decoder& dec, SI_RequestResources& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ra_PreambleStartIndex = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ra_AssociationPeriodIndex = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ra_ssb_OccasionMaskIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SI_RequestResources(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SI_RequestResources(SI_RequestResources& value)
{
    if (value.has_ra_AssociationPeriodIndex) {
    }
    if (value.has_ra_ssb_OccasionMaskIndex) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SI_RequestResourcesRepetition_r18：ASN.1 SI-RequestResourcesRepetition-r18；源文件第 12799 行；SEQUENCE。
// Encode_SI_RequestResourcesRepetition_r18 只读不分配；Decode_SI_RequestResourcesRepetition_r18 可能 malloc（失败时内部已释放并清零）；Free_SI_RequestResourcesRepetition_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SI_RequestResourcesRepetition_r18(Encoder& enc, const SI_RequestResourcesRepetition_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_ra_ssb_OccasionMaskIndex_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_PreambleStartIndex_r18), 0, 63);
    if (value.has_ra_ssb_OccasionMaskIndex_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_ssb_OccasionMaskIndex_r18), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_SI_RequestResourcesRepetition_r18(Decoder& dec, SI_RequestResourcesRepetition_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ra_PreambleStartIndex_r18 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ra_ssb_OccasionMaskIndex_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SI_RequestResourcesRepetition_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SI_RequestResourcesRepetition_r18(SI_RequestResourcesRepetition_r18& value)
{
    if (value.has_ra_ssb_OccasionMaskIndex_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB_Mapping：ASN.1 SIB-Mapping；源文件第 12844 行；SEQUENCE OF。
// Encode_SIB_Mapping 只读不分配；Decode_SIB_Mapping 可能 malloc（失败时内部已释放并清零）；Free_SIB_Mapping 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB_Mapping(Encoder& enc, const SIB_Mapping& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SIB_TypeInfo(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SIB_Mapping(Decoder& dec, SIB_Mapping& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SIB_TypeInfo*)std::malloc((std::size_t)value.count * sizeof(SIB_TypeInfo));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SIB_TypeInfo));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SIB_TypeInfo(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SIB_Mapping(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB_Mapping(SIB_Mapping& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SIB_TypeInfo(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingInfo：ASN.1 SchedulingInfo；源文件第 12816 行；SEQUENCE。
// Encode_SchedulingInfo 只读不分配；Decode_SchedulingInfo 可能 malloc（失败时内部已释放并清零）；Free_SchedulingInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingInfo(Encoder& enc, const SchedulingInfo& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.si_BroadcastStatus), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.si_Periodicity), 0, 6);
    Encode_SIB_Mapping(enc, value.sib_MappingInfo);
    return enc.Error();
}

ErrorCode Decode_SchedulingInfo(Decoder& dec, SchedulingInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.si_BroadcastStatus = (SchedulingInfo_Si_BroadcastStatus)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.si_Periodicity = (SchedulingInfo_Si_Periodicity)tmp_value;
    }
    {
        if (Decode_SIB_Mapping(dec, value.sib_MappingInfo) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingInfo(SchedulingInfo& value)
{
    Free_SIB_Mapping(value.sib_MappingInfo);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB_Mapping_v1700：ASN.1 SIB-Mapping-v1700；源文件第 12846 行；SEQUENCE OF。
// Encode_SIB_Mapping_v1700 只读不分配；Decode_SIB_Mapping_v1700 可能 malloc（失败时内部已释放并清零）；Free_SIB_Mapping_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB_Mapping_v1700(Encoder& enc, const SIB_Mapping_v1700& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SIB_TypeInfo_v1700(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SIB_Mapping_v1700(Decoder& dec, SIB_Mapping_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SIB_TypeInfo_v1700*)std::malloc((std::size_t)value.count * sizeof(SIB_TypeInfo_v1700));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SIB_TypeInfo_v1700));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SIB_TypeInfo_v1700(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SIB_Mapping_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB_Mapping_v1700(SIB_Mapping_v1700& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SIB_TypeInfo_v1700(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingInfo2_r17：ASN.1 SchedulingInfo2-r17；源文件第 12837 行；SEQUENCE。
// Encode_SchedulingInfo2_r17 只读不分配；Decode_SchedulingInfo2_r17 可能 malloc（失败时内部已释放并清零）；Free_SchedulingInfo2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingInfo2_r17(Encoder& enc, const SchedulingInfo2_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.si_BroadcastStatus_r17), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.si_WindowPosition_r17), 1, 256);
    enc.WriteConstrainedInteger((std::int64_t)(value.si_Periodicity_r17), 0, 6);
    Encode_SIB_Mapping_v1700(enc, value.sib_MappingInfo_r17);
    return enc.Error();
}

ErrorCode Decode_SchedulingInfo2_r17(Decoder& dec, SchedulingInfo2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.si_BroadcastStatus_r17 = (SchedulingInfo2_r17_Si_BroadcastStatus_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
        value.si_WindowPosition_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.si_Periodicity_r17 = (SchedulingInfo2_r17_Si_Periodicity_r17)tmp_value;
    }
    {
        if (Decode_SIB_Mapping_v1700(dec, value.sib_MappingInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingInfo2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingInfo2_r17(SchedulingInfo2_r17& value)
{
    Free_SIB_Mapping_v1700(value.sib_MappingInfo_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB_TypeInfo：ASN.1 SIB-TypeInfo；源文件第 12848 行；SEQUENCE。
// Encode_SIB_TypeInfo 只读不分配；Decode_SIB_TypeInfo 可能 malloc（失败时内部已释放并清零）；Free_SIB_TypeInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB_TypeInfo(Encoder& enc, const SIB_TypeInfo& value)
{
    (void)value;
    enc.WriteBit(value.has_valueTag);
    enc.WriteBit(value.has_areaScope);
    {
        const std::int64_t enum_value = (std::int64_t)(value.type);
        if (enum_value < 0) {
            return enc.Fail(ErrorCode_InvalidEnumValue);
        }
        if (enum_value < 16) {
            enc.WriteBit(false);
            enc.WriteConstrainedInteger(enum_value, 0, 15);
        } else {
            enc.WriteBit(true);
            enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 16));
        }
    }
    if (value.has_valueTag) {
        enc.WriteConstrainedInteger((std::int64_t)(value.valueTag), 0, 31);
    }
    if (value.has_areaScope) {
        enc.WriteConstrainedInteger((std::int64_t)(value.areaScope), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SIB_TypeInfo(Decoder& dec, SIB_TypeInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 15, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)16 + (std::int64_t)extension_index;
        }
        value.type = (SIB_TypeInfo_Type)enum_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.valueTag = (int64_t)tmp_value;
    }
    if (present_1) {
        value.areaScope = (SIB_TypeInfo_AreaScope)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB_TypeInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB_TypeInfo(SIB_TypeInfo& value)
{
    if (value.has_valueTag) {
    }
    if (value.has_areaScope) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB_TypeInfo_v1700_SibType_r17_Type2_r17：ASN.1 sibType-r17/type2-r17；源文件第 12861 行；SEQUENCE。
// Encode_SIB_TypeInfo_v1700_SibType_r17_Type2_r17 只读不分配；Decode_SIB_TypeInfo_v1700_SibType_r17_Type2_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB_TypeInfo_v1700_SibType_r17_Type2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB_TypeInfo_v1700_SibType_r17_Type2_r17(Encoder& enc, const SIB_TypeInfo_v1700_SibType_r17_Type2_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_encrypted_r17);
    enc.WriteBit(value.has_gnss_id_r17);
    enc.WriteBit(value.has_sbas_id_r17);
    {
        const std::int64_t enum_value = (std::int64_t)(value.posSibType_r17);
        if (enum_value < 0) {
            return enc.Fail(ErrorCode_InvalidEnumValue);
        }
        if (enum_value < 16) {
            enc.WriteBit(false);
            enc.WriteConstrainedInteger(enum_value, 0, 15);
        } else {
            enc.WriteBit(true);
            enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 16));
        }
    }
    if (value.has_encrypted_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.encrypted_r17), 0, 0);
    }
    if (value.has_gnss_id_r17) {
        Encode_GNSS_ID_r16(enc, value.gnss_id_r17);
    }
    if (value.has_sbas_id_r17) {
        Encode_SBAS_ID_r16(enc, value.sbas_id_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SIB_TypeInfo_v1700_SibType_r17_Type2_r17(Decoder& dec, SIB_TypeInfo_v1700_SibType_r17_Type2_r17& value)
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
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 15, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)16 + (std::int64_t)extension_index;
        }
        value.posSibType_r17 = (SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17)enum_value;
    }
    if (present_0) {
        value.encrypted_r17 = (SIB_TypeInfo_v1700_SibType_r17_Type2_r17_Encrypted_r17)0;
    }
    if (present_1) {
        if (Decode_GNSS_ID_r16(dec, value.gnss_id_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SBAS_ID_r16(dec, value.sbas_id_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB_TypeInfo_v1700_SibType_r17_Type2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB_TypeInfo_v1700_SibType_r17_Type2_r17(SIB_TypeInfo_v1700_SibType_r17_Type2_r17& value)
{
    if (value.has_encrypted_r17) {
    }
    if (value.has_gnss_id_r17) {
        Free_GNSS_ID_r16(value.gnss_id_r17);
    }
    if (value.has_sbas_id_r17) {
        Free_SBAS_ID_r16(value.sbas_id_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB_TypeInfo_v1700_SibType_r17：ASN.1 sibType-r17；源文件第 12857 行；CHOICE。
// Encode_SIB_TypeInfo_v1700_SibType_r17 只读不分配；Decode_SIB_TypeInfo_v1700_SibType_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB_TypeInfo_v1700_SibType_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB_TypeInfo_v1700_SibType_r17(Encoder& enc, const SIB_TypeInfo_v1700_SibType_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SIB_TypeInfo_v1700_SibType_r17_Tag_type1_r17:
        {
            const std::int64_t enum_value = (std::int64_t)(value.u.type1_r17);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 16) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 15);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 16));
            }
        }
        break;
    case SIB_TypeInfo_v1700_SibType_r17_Tag_type2_r17:
        Encode_SIB_TypeInfo_v1700_SibType_r17_Type2_r17(enc, value.u.type2_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SIB_TypeInfo_v1700_SibType_r17(Decoder& dec, SIB_TypeInfo_v1700_SibType_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SIB_TypeInfo_v1700_SibType_r17_Tag)root_index;
    switch (value.tag) {
    case SIB_TypeInfo_v1700_SibType_r17_Tag_type1_r17: {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
            std::int64_t root_index = 0;
            if (!dec.ReadConstrainedInteger(0, 15, root_index)) { goto fail; }
            enum_value = root_index;
        } else {
            std::uint32_t extension_index = 0;
            if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
            enum_value = (std::int64_t)16 + (std::int64_t)extension_index;
        }
        value.u.type1_r17 = (SIB_TypeInfo_v1700_SibType_r17_Type1_r17)enum_value;
        break;
    }
    case SIB_TypeInfo_v1700_SibType_r17_Tag_type2_r17: {
        if (Decode_SIB_TypeInfo_v1700_SibType_r17_Type2_r17(dec, value.u.type2_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB_TypeInfo_v1700_SibType_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB_TypeInfo_v1700_SibType_r17(SIB_TypeInfo_v1700_SibType_r17& value)
{
    switch (value.tag) {
    case SIB_TypeInfo_v1700_SibType_r17_Tag_type1_r17:
        break;
    case SIB_TypeInfo_v1700_SibType_r17_Tag_type2_r17:
        Free_SIB_TypeInfo_v1700_SibType_r17_Type2_r17(value.u.type2_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB_TypeInfo_v1700：ASN.1 SIB-TypeInfo-v1700；源文件第 12856 行；SEQUENCE。
// Encode_SIB_TypeInfo_v1700 只读不分配；Decode_SIB_TypeInfo_v1700 可能 malloc（失败时内部已释放并清零）；Free_SIB_TypeInfo_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB_TypeInfo_v1700(Encoder& enc, const SIB_TypeInfo_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_valueTag_r17);
    enc.WriteBit(value.has_areaScope_r17);
    Encode_SIB_TypeInfo_v1700_SibType_r17(enc, value.sibType_r17);
    if (value.has_valueTag_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.valueTag_r17), 0, 31);
    }
    if (value.has_areaScope_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.areaScope_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SIB_TypeInfo_v1700(Decoder& dec, SIB_TypeInfo_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_SIB_TypeInfo_v1700_SibType_r17(dec, value.sibType_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.valueTag_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        value.areaScope_r17 = (SIB_TypeInfo_v1700_AreaScope_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB_TypeInfo_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB_TypeInfo_v1700(SIB_TypeInfo_v1700& value)
{
    Free_SIB_TypeInfo_v1700_SibType_r17(value.sibType_r17);
    if (value.has_valueTag_r17) {
    }
    if (value.has_areaScope_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SlotFormatCombinationsPerCell_ExtGroup1：ASN.1 SlotFormatCombinationsPerCell_ExtGroup1；源文件第 12893 行；扩展添加组 [[ ]]。
// Encode_SlotFormatCombinationsPerCell_ExtGroup1 只读不分配；Decode_SlotFormatCombinationsPerCell_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SlotFormatCombinationsPerCell_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotFormatCombinationsPerCell_ExtGroup1(Encoder& enc, const SlotFormatCombinationsPerCell_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_enableConfiguredUL_r16);
    if (value.has_enableConfiguredUL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableConfiguredUL_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SlotFormatCombinationsPerCell_ExtGroup1(Decoder& dec, SlotFormatCombinationsPerCell_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.enableConfiguredUL_r16 = (SlotFormatCombinationsPerCell_ExtGroup1_EnableConfiguredUL_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotFormatCombinationsPerCell_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotFormatCombinationsPerCell_ExtGroup1(SlotFormatCombinationsPerCell_ExtGroup1& value)
{
    if (value.has_enableConfiguredUL_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SlotFormatCombinationsPerCell：ASN.1 SlotFormatCombinationsPerCell；源文件第 12885 行；SEQUENCE。
// Encode_SlotFormatCombinationsPerCell 只读不分配；Decode_SlotFormatCombinationsPerCell 可能 malloc（失败时内部已释放并清零）；Free_SlotFormatCombinationsPerCell 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotFormatCombinationsPerCell(Encoder& enc, const SlotFormatCombinationsPerCell& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_subcarrierSpacing2);
    enc.WriteBit(value.has_slotFormatCombinations);
    enc.WriteBit(value.has_positionInDCI);
    enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing), 0, 7);
    if (value.has_subcarrierSpacing2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing2), 0, 7);
    }
    if (value.has_slotFormatCombinations) {
enc.WriteConstrainedLength(value.slotFormatCombinations_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.slotFormatCombinations_count; ++i) {
    Encode_SlotFormatCombination(enc, value.slotFormatCombinations_items[i]);
}
    }
    if (value.has_positionInDCI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI), 0, 127);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SlotFormatCombinationsPerCell_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SlotFormatCombinationsPerCell(Decoder& dec, SlotFormatCombinationsPerCell& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing2 = (SubcarrierSpacing)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.slotFormatCombinations_count)) { goto fail; }
if (value.slotFormatCombinations_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.slotFormatCombinations_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.slotFormatCombinations_count > 0u) {
    value.slotFormatCombinations_items = (SlotFormatCombination*)std::malloc((std::size_t)value.slotFormatCombinations_count * sizeof(SlotFormatCombination));
    if (value.slotFormatCombinations_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.slotFormatCombinations_items, 0, (std::size_t)value.slotFormatCombinations_count * sizeof(SlotFormatCombination));
}
for (std::uint32_t i = 0; i < value.slotFormatCombinations_count; ++i) {
    if (Decode_SlotFormatCombination(dec, value.slotFormatCombinations_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.positionInDCI = (int64_t)tmp_value;
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
    if (Decode_SlotFormatCombinationsPerCell_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SlotFormatCombinationsPerCell(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotFormatCombinationsPerCell(SlotFormatCombinationsPerCell& value)
{
    if (value.has_subcarrierSpacing2) {
    }
    if (value.has_slotFormatCombinations) {
        if (value.slotFormatCombinations_items != nullptr) {
            for (std::uint32_t i = 0; i < value.slotFormatCombinations_count; ++i) {
                Free_SlotFormatCombination(value.slotFormatCombinations_items[i]);
            }
            std::free(value.slotFormatCombinations_items);
            value.slotFormatCombinations_items = nullptr;
        }
        value.slotFormatCombinations_count = 0;
    }
    if (value.has_positionInDCI) {
    }
    if (value.has_extGroup1) {
        Free_SlotFormatCombinationsPerCell_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SlotFormatCombination：ASN.1 SlotFormatCombination；源文件第 12899 行；SEQUENCE。
// Encode_SlotFormatCombination 只读不分配；Decode_SlotFormatCombination 可能 malloc（失败时内部已释放并清零）；Free_SlotFormatCombination 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotFormatCombination(Encoder& enc, const SlotFormatCombination& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.slotFormatCombinationId), 0, 511);
enc.WriteConstrainedLength(value.slotFormats_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.slotFormats_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.slotFormats_items[i]), 0, 255);
}
    return enc.Error();
}

ErrorCode Decode_SlotFormatCombination(Decoder& dec, SlotFormatCombination& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.slotFormatCombinationId = (SlotFormatCombinationId)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.slotFormats_count)) { goto fail; }
if (value.slotFormats_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.slotFormats_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.slotFormats_count > 0u) {
    value.slotFormats_items = (int64_t*)std::malloc((std::size_t)value.slotFormats_count * sizeof(int64_t));
    if (value.slotFormats_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.slotFormats_items, 0, (std::size_t)value.slotFormats_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.slotFormats_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
    value.slotFormats_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotFormatCombination(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotFormatCombination(SlotFormatCombination& value)
{
    if (value.slotFormats_items != nullptr) {
        for (std::uint32_t i = 0; i < value.slotFormats_count; ++i) {
        }
        std::free(value.slotFormats_items);
        value.slotFormats_items = nullptr;
    }
    value.slotFormats_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CO_DurationsPerCell_r16：ASN.1 CO-DurationsPerCell-r16；源文件第 12935 行；SEQUENCE。
// Encode_CO_DurationsPerCell_r16 只读不分配；Decode_CO_DurationsPerCell_r16 可能 malloc（失败时内部已释放并清零）；Free_CO_DurationsPerCell_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CO_DurationsPerCell_r16(Encoder& enc, const CO_DurationsPerCell_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId_r16), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI_r16), 0, 127);
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing_r16), 0, 7);
enc.WriteConstrainedLength(value.co_DurationList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.co_DurationList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.co_DurationList_r16_items[i]), 0, 1120);
}
    return enc.Error();
}

ErrorCode Decode_CO_DurationsPerCell_r16(Decoder& dec, CO_DurationsPerCell_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId_r16 = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.positionInDCI_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing_r16 = (SubcarrierSpacing)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.co_DurationList_r16_count)) { goto fail; }
if (value.co_DurationList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.co_DurationList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.co_DurationList_r16_count > 0u) {
    value.co_DurationList_r16_items = (CO_Duration_r16*)std::malloc((std::size_t)value.co_DurationList_r16_count * sizeof(CO_Duration_r16));
    if (value.co_DurationList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.co_DurationList_r16_items, 0, (std::size_t)value.co_DurationList_r16_count * sizeof(CO_Duration_r16));
}
for (std::uint32_t i = 0; i < value.co_DurationList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1120, tmp_value)) { goto fail; }
    value.co_DurationList_r16_items[i] = (CO_Duration_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CO_DurationsPerCell_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CO_DurationsPerCell_r16(CO_DurationsPerCell_r16& value)
{
    if (value.co_DurationList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.co_DurationList_r16_count; ++i) {
        }
        std::free(value.co_DurationList_r16_items);
        value.co_DurationList_r16_items = nullptr;
    }
    value.co_DurationList_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CO_DurationsPerCell_r17：ASN.1 CO-DurationsPerCell-r17；源文件第 12942 行；SEQUENCE。
// Encode_CO_DurationsPerCell_r17 只读不分配；Decode_CO_DurationsPerCell_r17 可能 malloc（失败时内部已释放并清零）；Free_CO_DurationsPerCell_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CO_DurationsPerCell_r17(Encoder& enc, const CO_DurationsPerCell_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId_r17), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI_r17), 0, 127);
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing_r17), 0, 7);
enc.WriteConstrainedLength(value.co_DurationList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.co_DurationList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.co_DurationList_r17_items[i]), 0, 4480);
}
    return enc.Error();
}

ErrorCode Decode_CO_DurationsPerCell_r17(Decoder& dec, CO_DurationsPerCell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId_r17 = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.positionInDCI_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing_r17 = (SubcarrierSpacing)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.co_DurationList_r17_count)) { goto fail; }
if (value.co_DurationList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.co_DurationList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.co_DurationList_r17_count > 0u) {
    value.co_DurationList_r17_items = (CO_Duration_r17*)std::malloc((std::size_t)value.co_DurationList_r17_count * sizeof(CO_Duration_r17));
    if (value.co_DurationList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.co_DurationList_r17_items, 0, (std::size_t)value.co_DurationList_r17_count * sizeof(CO_Duration_r17));
}
for (std::uint32_t i = 0; i < value.co_DurationList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 4480, tmp_value)) { goto fail; }
    value.co_DurationList_r17_items[i] = (CO_Duration_r17)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CO_DurationsPerCell_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CO_DurationsPerCell_r17(CO_DurationsPerCell_r17& value)
{
    if (value.co_DurationList_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.co_DurationList_r17_count; ++i) {
        }
        std::free(value.co_DurationList_r17_items);
        value.co_DurationList_r17_items = nullptr;
    }
    value.co_DurationList_r17_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AvailableRB_SetsPerCell_r16：ASN.1 AvailableRB-SetsPerCell-r16；源文件第 12952 行；SEQUENCE。
// Encode_AvailableRB_SetsPerCell_r16 只读不分配；Decode_AvailableRB_SetsPerCell_r16 可能 malloc（失败时内部已释放并清零）；Free_AvailableRB_SetsPerCell_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AvailableRB_SetsPerCell_r16(Encoder& enc, const AvailableRB_SetsPerCell_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId_r16), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI_r16), 0, 127);
    return enc.Error();
}

ErrorCode Decode_AvailableRB_SetsPerCell_r16(Decoder& dec, AvailableRB_SetsPerCell_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId_r16 = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.positionInDCI_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AvailableRB_SetsPerCell_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AvailableRB_SetsPerCell_r16(AvailableRB_SetsPerCell_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceSwitchTrigger_r16：ASN.1 SearchSpaceSwitchTrigger-r16；源文件第 12957 行；SEQUENCE。
// Encode_SearchSpaceSwitchTrigger_r16 只读不分配；Decode_SearchSpaceSwitchTrigger_r16 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceSwitchTrigger_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceSwitchTrigger_r16(Encoder& enc, const SearchSpaceSwitchTrigger_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId_r16), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI_r16), 0, 127);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceSwitchTrigger_r16(Decoder& dec, SearchSpaceSwitchTrigger_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId_r16 = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.positionInDCI_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceSwitchTrigger_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceSwitchTrigger_r16(SearchSpaceSwitchTrigger_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// S_NSSAI：ASN.1 S-NSSAI；源文件第 12965 行；CHOICE。
// Encode_S_NSSAI 只读不分配；Decode_S_NSSAI 可能 malloc（失败时内部已释放并清零）；Free_S_NSSAI 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_S_NSSAI(Encoder& enc, const S_NSSAI& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case S_NSSAI_Tag_sst:
        enc.WriteFixedBitString(value.u.sst.bytes, value.u.sst.bitLength, 8, 8);
        break;
    case S_NSSAI_Tag_sst_SD:
        enc.WriteFixedBitString(value.u.sst_SD.bytes, value.u.sst_SD.bitLength, 32, 32);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_S_NSSAI(Decoder& dec, S_NSSAI& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (S_NSSAI_Tag)root_index;
    switch (value.tag) {
    case S_NSSAI_Tag_sst: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.sst.bytes = string_bytes;
        value.u.sst.bitLength = string_length;
        break;
    }
    case S_NSSAI_Tag_sst_SD: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.sst_SD.bytes = string_bytes;
        value.u.sst_SD.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_S_NSSAI(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_S_NSSAI(S_NSSAI& value)
{
    switch (value.tag) {
    case S_NSSAI_Tag_sst:
        std::free(value.u.sst.bytes);
        break;
    case S_NSSAI_Tag_sst_SD:
        std::free(value.u.sst_SD.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPS_PUCCH_AN_r16：ASN.1 SPS-PUCCH-AN-r16；源文件第 13011 行；SEQUENCE。
// Encode_SPS_PUCCH_AN_r16 只读不分配；Decode_SPS_PUCCH_AN_r16 可能 malloc（失败时内部已释放并清零）；Free_SPS_PUCCH_AN_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_PUCCH_AN_r16(Encoder& enc, const SPS_PUCCH_AN_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_maxPayloadSize_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sps_PUCCH_AN_ResourceID_r16), 0, 127);
    if (value.has_maxPayloadSize_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxPayloadSize_r16), 4, 256);
    }
    return enc.Error();
}

ErrorCode Decode_SPS_PUCCH_AN_r16(Decoder& dec, SPS_PUCCH_AN_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.sps_PUCCH_AN_ResourceID_r16 = (PUCCH_ResourceId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 256, tmp_value)) { goto fail; }
        value.maxPayloadSize_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SPS_PUCCH_AN_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_PUCCH_AN_r16(SPS_PUCCH_AN_r16& value)
{
    if (value.has_maxPayloadSize_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_CC_SetIndex：ASN.1 SRS-CC-SetIndex；源文件第 13049 行；SEQUENCE。
// Encode_SRS_CC_SetIndex 只读不分配；Decode_SRS_CC_SetIndex 可能 malloc（失败时内部已释放并清零）；Free_SRS_CC_SetIndex 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_CC_SetIndex(Encoder& enc, const SRS_CC_SetIndex& value)
{
    (void)value;
    enc.WriteBit(value.has_cc_SetIndex);
    enc.WriteBit(value.has_cc_IndexInOneCC_Set);
    if (value.has_cc_SetIndex) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cc_SetIndex), 0, 3);
    }
    if (value.has_cc_IndexInOneCC_Set) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cc_IndexInOneCC_Set), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_CC_SetIndex(Decoder& dec, SRS_CC_SetIndex& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cc_SetIndex = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.cc_IndexInOneCC_Set = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_CC_SetIndex(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_CC_SetIndex(SRS_CC_SetIndex& value)
{
    if (value.has_cc_SetIndex) {
    }
    if (value.has_cc_IndexInOneCC_Set) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PathlossReferenceRSList_r16：ASN.1 PathlossReferenceRSList-r16；源文件第 13129 行；SEQUENCE OF。
// Encode_PathlossReferenceRSList_r16 只读不分配；Decode_PathlossReferenceRSList_r16 可能 malloc（失败时内部已释放并清零）；Free_PathlossReferenceRSList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PathlossReferenceRSList_r16(Encoder& enc, const PathlossReferenceRSList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PathlossReferenceRS_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PathlossReferenceRSList_r16(Decoder& dec, PathlossReferenceRSList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PathlossReferenceRS_r16*)std::malloc((std::size_t)value.count * sizeof(PathlossReferenceRS_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PathlossReferenceRS_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PathlossReferenceRS_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PathlossReferenceRSList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PathlossReferenceRSList_r16(PathlossReferenceRSList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PathlossReferenceRS_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PathlossReferenceRSList_r16：ASN.1 SetupRelease<PathlossReferenceRSList-r16>；源文件第 13110 行；CHOICE。
// Encode_SetupRelease_PathlossReferenceRSList_r16 只读不分配；Decode_SetupRelease_PathlossReferenceRSList_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PathlossReferenceRSList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PathlossReferenceRSList_r16(Encoder& enc, const SetupRelease_PathlossReferenceRSList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PathlossReferenceRSList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_PathlossReferenceRSList_r16_Tag_setup:
        Encode_PathlossReferenceRSList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PathlossReferenceRSList_r16(Decoder& dec, SetupRelease_PathlossReferenceRSList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PathlossReferenceRSList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PathlossReferenceRSList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PathlossReferenceRSList_r16_Tag_setup: {
        if (Decode_PathlossReferenceRSList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PathlossReferenceRSList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PathlossReferenceRSList_r16(SetupRelease_PathlossReferenceRSList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_PathlossReferenceRSList_r16_Tag_release:
        break;
    case SetupRelease_PathlossReferenceRSList_r16_Tag_setup:
        Free_PathlossReferenceRSList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceSet_ExtGroup1：ASN.1 SRS_ResourceSet_ExtGroup1；源文件第 13109 行；扩展添加组 [[ ]]。
// Encode_SRS_ResourceSet_ExtGroup1 只读不分配；Decode_SRS_ResourceSet_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceSet_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceSet_ExtGroup1(Encoder& enc, const SRS_ResourceSet_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_pathlossReferenceRSList_r16);
    if (value.has_pathlossReferenceRSList_r16) {
        Encode_SetupRelease_PathlossReferenceRSList_r16(enc, value.pathlossReferenceRSList_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceSet_ExtGroup1(Decoder& dec, SRS_ResourceSet_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_PathlossReferenceRSList_r16(dec, value.pathlossReferenceRSList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceSet_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceSet_ExtGroup1(SRS_ResourceSet_ExtGroup1& value)
{
    if (value.has_pathlossReferenceRSList_r16) {
        Free_SetupRelease_PathlossReferenceRSList_r16(value.pathlossReferenceRSList_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceSet_ExtGroup2：ASN.1 SRS_ResourceSet_ExtGroup2；源文件第 13112 行；扩展添加组 [[ ]]。
// Encode_SRS_ResourceSet_ExtGroup2 只读不分配；Decode_SRS_ResourceSet_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceSet_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceSet_ExtGroup2(Encoder& enc, const SRS_ResourceSet_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_usagePDC_r17);
    enc.WriteBit(value.has_availableSlotOffsetList_r17);
    enc.WriteBit(value.has_followUnifiedTCI_StateSRS_r17);
    if (value.has_usagePDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.usagePDC_r17), 0, 0);
    }
    if (value.has_availableSlotOffsetList_r17) {
enc.WriteConstrainedLength(value.availableSlotOffsetList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.availableSlotOffsetList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.availableSlotOffsetList_r17_items[i]), 0, 7);
}
    }
    if (value.has_followUnifiedTCI_StateSRS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.followUnifiedTCI_StateSRS_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceSet_ExtGroup2(Decoder& dec, SRS_ResourceSet_ExtGroup2& value)
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
        value.usagePDC_r17 = (SRS_ResourceSet_ExtGroup2_UsagePDC_r17)0;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.availableSlotOffsetList_r17_count)) { goto fail; }
if (value.availableSlotOffsetList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.availableSlotOffsetList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.availableSlotOffsetList_r17_count > 0u) {
    value.availableSlotOffsetList_r17_items = (AvailableSlotOffset_r17*)std::malloc((std::size_t)value.availableSlotOffsetList_r17_count * sizeof(AvailableSlotOffset_r17));
    if (value.availableSlotOffsetList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.availableSlotOffsetList_r17_items, 0, (std::size_t)value.availableSlotOffsetList_r17_count * sizeof(AvailableSlotOffset_r17));
}
for (std::uint32_t i = 0; i < value.availableSlotOffsetList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.availableSlotOffsetList_r17_items[i] = (AvailableSlotOffset_r17)tmp_value;
}
    }
    if (present_2) {
        value.followUnifiedTCI_StateSRS_r17 = (SRS_ResourceSet_ExtGroup2_FollowUnifiedTCI_StateSRS_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceSet_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceSet_ExtGroup2(SRS_ResourceSet_ExtGroup2& value)
{
    if (value.has_usagePDC_r17) {
    }
    if (value.has_availableSlotOffsetList_r17) {
        if (value.availableSlotOffsetList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.availableSlotOffsetList_r17_count; ++i) {
            }
            std::free(value.availableSlotOffsetList_r17_items);
            value.availableSlotOffsetList_r17_items = nullptr;
        }
        value.availableSlotOffsetList_r17_count = 0;
    }
    if (value.has_followUnifiedTCI_StateSRS_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceSet_ExtGroup3：ASN.1 SRS_ResourceSet_ExtGroup3；源文件第 13117 行；扩展添加组 [[ ]]。
// Encode_SRS_ResourceSet_ExtGroup3 只读不分配；Decode_SRS_ResourceSet_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceSet_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceSet_ExtGroup3(Encoder& enc, const SRS_ResourceSet_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_applyIndicatedTCI_State_r18);
    if (value.has_applyIndicatedTCI_State_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.applyIndicatedTCI_State_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceSet_ExtGroup3(Decoder& dec, SRS_ResourceSet_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.applyIndicatedTCI_State_r18 = (SRS_ResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceSet_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceSet_ExtGroup3(SRS_ResourceSet_ExtGroup3& value)
{
    if (value.has_applyIndicatedTCI_State_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PathlossReferenceRS_Config：ASN.1 PathlossReferenceRS-Config；源文件第 13124 行；CHOICE。
// Encode_PathlossReferenceRS_Config 只读不分配；Decode_PathlossReferenceRS_Config 可能 malloc（失败时内部已释放并清零）；Free_PathlossReferenceRS_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PathlossReferenceRS_Config(Encoder& enc, const PathlossReferenceRS_Config& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PathlossReferenceRS_Config_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case PathlossReferenceRS_Config_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PathlossReferenceRS_Config(Decoder& dec, PathlossReferenceRS_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PathlossReferenceRS_Config_Tag)root_index;
    switch (value.tag) {
    case PathlossReferenceRS_Config_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case PathlossReferenceRS_Config_Tag_csi_RS_Index: {
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
    Free_PathlossReferenceRS_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PathlossReferenceRS_Config(PathlossReferenceRS_Config& value)
{
    switch (value.tag) {
    case PathlossReferenceRS_Config_Tag_ssb_Index:
        break;
    case PathlossReferenceRS_Config_Tag_csi_RS_Index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1：ASN.1 SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1；源文件第 13089 行；扩展添加组 [[ ]]。
// Encode_SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1 只读不分配；Decode_SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1(Encoder& enc, const SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_aperiodicSRS_ResourceTriggerList);
    if (value.has_aperiodicSRS_ResourceTriggerList) {
enc.WriteConstrainedLength(value.aperiodicSRS_ResourceTriggerList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.aperiodicSRS_ResourceTriggerList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicSRS_ResourceTriggerList_items[i]), 1, 3);
}
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1(Decoder& dec, SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.aperiodicSRS_ResourceTriggerList_count)) { goto fail; }
if (value.aperiodicSRS_ResourceTriggerList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.aperiodicSRS_ResourceTriggerList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.aperiodicSRS_ResourceTriggerList_count > 0u) {
    value.aperiodicSRS_ResourceTriggerList_items = (int64_t*)std::malloc((std::size_t)value.aperiodicSRS_ResourceTriggerList_count * sizeof(int64_t));
    if (value.aperiodicSRS_ResourceTriggerList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.aperiodicSRS_ResourceTriggerList_items, 0, (std::size_t)value.aperiodicSRS_ResourceTriggerList_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.aperiodicSRS_ResourceTriggerList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
    value.aperiodicSRS_ResourceTriggerList_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1(SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1& value)
{
    if (value.has_aperiodicSRS_ResourceTriggerList) {
        if (value.aperiodicSRS_ResourceTriggerList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.aperiodicSRS_ResourceTriggerList_count; ++i) {
            }
            std::free(value.aperiodicSRS_ResourceTriggerList_items);
            value.aperiodicSRS_ResourceTriggerList_items = nullptr;
        }
        value.aperiodicSRS_ResourceTriggerList_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceSet_ResourceType_Aperiodic：ASN.1 resourceType/aperiodic；源文件第 13084 行；SEQUENCE。
// Encode_SRS_ResourceSet_ResourceType_Aperiodic 只读不分配；Decode_SRS_ResourceSet_ResourceType_Aperiodic 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceSet_ResourceType_Aperiodic 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceSet_ResourceType_Aperiodic(Encoder& enc, const SRS_ResourceSet_ResourceType_Aperiodic& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_csi_RS);
    enc.WriteBit(value.has_slotOffset);
    enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicSRS_ResourceTrigger), 1, 3);
    if (value.has_csi_RS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS), 0, 191);
    }
    if (value.has_slotOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.slotOffset), 1, 32);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceSet_ResourceType_Aperiodic(Decoder& dec, SRS_ResourceSet_ResourceType_Aperiodic& value)
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
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.aperiodicSRS_ResourceTrigger = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.csi_RS = (NZP_CSI_RS_ResourceId)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.slotOffset = (int64_t)tmp_value;
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
    if (Decode_SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SRS_ResourceSet_ResourceType_Aperiodic(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceSet_ResourceType_Aperiodic(SRS_ResourceSet_ResourceType_Aperiodic& value)
{
    if (value.has_csi_RS) {
    }
    if (value.has_slotOffset) {
    }
    if (value.has_extGroup1) {
        Free_SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceSet_ResourceType_Semi_persistent：ASN.1 resourceType/semi-persistent；源文件第 13094 行；SEQUENCE。
// Encode_SRS_ResourceSet_ResourceType_Semi_persistent 只读不分配；Decode_SRS_ResourceSet_ResourceType_Semi_persistent 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceSet_ResourceType_Semi_persistent 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceSet_ResourceType_Semi_persistent(Encoder& enc, const SRS_ResourceSet_ResourceType_Semi_persistent& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_associatedCSI_RS);
    if (value.has_associatedCSI_RS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.associatedCSI_RS), 0, 191);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceSet_ResourceType_Semi_persistent(Decoder& dec, SRS_ResourceSet_ResourceType_Semi_persistent& value)
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
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.associatedCSI_RS = (NZP_CSI_RS_ResourceId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceSet_ResourceType_Semi_persistent(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceSet_ResourceType_Semi_persistent(SRS_ResourceSet_ResourceType_Semi_persistent& value)
{
    if (value.has_associatedCSI_RS) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceSet_ResourceType_Periodic：ASN.1 resourceType/periodic；源文件第 13098 行；SEQUENCE。
// Encode_SRS_ResourceSet_ResourceType_Periodic 只读不分配；Decode_SRS_ResourceSet_ResourceType_Periodic 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceSet_ResourceType_Periodic 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceSet_ResourceType_Periodic(Encoder& enc, const SRS_ResourceSet_ResourceType_Periodic& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_associatedCSI_RS);
    if (value.has_associatedCSI_RS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.associatedCSI_RS), 0, 191);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceSet_ResourceType_Periodic(Decoder& dec, SRS_ResourceSet_ResourceType_Periodic& value)
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
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.associatedCSI_RS = (NZP_CSI_RS_ResourceId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceSet_ResourceType_Periodic(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceSet_ResourceType_Periodic(SRS_ResourceSet_ResourceType_Periodic& value)
{
    if (value.has_associatedCSI_RS) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceSet_ResourceType：ASN.1 resourceType；源文件第 13083 行；CHOICE。
// Encode_SRS_ResourceSet_ResourceType 只读不分配；Decode_SRS_ResourceSet_ResourceType 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceSet_ResourceType 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceSet_ResourceType(Encoder& enc, const SRS_ResourceSet_ResourceType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SRS_ResourceSet_ResourceType_Tag_aperiodic:
        Encode_SRS_ResourceSet_ResourceType_Aperiodic(enc, value.u.aperiodic);
        break;
    case SRS_ResourceSet_ResourceType_Tag_semi_persistent:
        Encode_SRS_ResourceSet_ResourceType_Semi_persistent(enc, value.u.semi_persistent);
        break;
    case SRS_ResourceSet_ResourceType_Tag_periodic:
        Encode_SRS_ResourceSet_ResourceType_Periodic(enc, value.u.periodic);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceSet_ResourceType(Decoder& dec, SRS_ResourceSet_ResourceType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SRS_ResourceSet_ResourceType_Tag)root_index;
    switch (value.tag) {
    case SRS_ResourceSet_ResourceType_Tag_aperiodic: {
        if (Decode_SRS_ResourceSet_ResourceType_Aperiodic(dec, value.u.aperiodic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_ResourceSet_ResourceType_Tag_semi_persistent: {
        if (Decode_SRS_ResourceSet_ResourceType_Semi_persistent(dec, value.u.semi_persistent) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_ResourceSet_ResourceType_Tag_periodic: {
        if (Decode_SRS_ResourceSet_ResourceType_Periodic(dec, value.u.periodic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceSet_ResourceType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceSet_ResourceType(SRS_ResourceSet_ResourceType& value)
{
    switch (value.tag) {
    case SRS_ResourceSet_ResourceType_Tag_aperiodic:
        Free_SRS_ResourceSet_ResourceType_Aperiodic(value.u.aperiodic);
        break;
    case SRS_ResourceSet_ResourceType_Tag_semi_persistent:
        Free_SRS_ResourceSet_ResourceType_Semi_persistent(value.u.semi_persistent);
        break;
    case SRS_ResourceSet_ResourceType_Tag_periodic:
        Free_SRS_ResourceSet_ResourceType_Periodic(value.u.periodic);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceSet：ASN.1 SRS-ResourceSet；源文件第 13080 行；SEQUENCE。
// Encode_SRS_ResourceSet 只读不分配；Decode_SRS_ResourceSet 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceSet 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceSet(Encoder& enc, const SRS_ResourceSet& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_srs_ResourceIdList);
    enc.WriteBit(value.has_alpha);
    enc.WriteBit(value.has_p0);
    enc.WriteBit(value.has_pathlossReferenceRS);
    enc.WriteBit(value.has_srs_PowerControlAdjustmentStates);
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceSetId), 0, 15);
    if (value.has_srs_ResourceIdList) {
enc.WriteConstrainedLength(value.srs_ResourceIdList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_ResourceIdList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceIdList_items[i]), 0, 63);
}
    }
    Encode_SRS_ResourceSet_ResourceType(enc, value.resourceType);
    enc.WriteConstrainedInteger((std::int64_t)(value.usage), 0, 3);
    if (value.has_alpha) {
        enc.WriteConstrainedInteger((std::int64_t)(value.alpha), 0, 7);
    }
    if (value.has_p0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p0), -202, 24);
    }
    if (value.has_pathlossReferenceRS) {
        Encode_PathlossReferenceRS_Config(enc, value.pathlossReferenceRS);
    }
    if (value.has_srs_PowerControlAdjustmentStates) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_PowerControlAdjustmentStates), 0, 1);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SRS_ResourceSet_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SRS_ResourceSet_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SRS_ResourceSet_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceSet(Decoder& dec, SRS_ResourceSet& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.srs_ResourceSetId = (SRS_ResourceSetId)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_ResourceIdList_count)) { goto fail; }
if (value.srs_ResourceIdList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_ResourceIdList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_ResourceIdList_count > 0u) {
    value.srs_ResourceIdList_items = (SRS_ResourceId*)std::malloc((std::size_t)value.srs_ResourceIdList_count * sizeof(SRS_ResourceId));
    if (value.srs_ResourceIdList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_ResourceIdList_items, 0, (std::size_t)value.srs_ResourceIdList_count * sizeof(SRS_ResourceId));
}
for (std::uint32_t i = 0; i < value.srs_ResourceIdList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.srs_ResourceIdList_items[i] = (SRS_ResourceId)tmp_value;
}
    }
    {
        if (Decode_SRS_ResourceSet_ResourceType(dec, value.resourceType) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.usage = (SRS_ResourceSet_Usage)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.alpha = (Alpha)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.p0 = (int64_t)tmp_value;
    }
    if (present_3) {
        if (Decode_PathlossReferenceRS_Config(dec, value.pathlossReferenceRS) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.srs_PowerControlAdjustmentStates = (SRS_ResourceSet_Srs_PowerControlAdjustmentStates)tmp_value;
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
    if (Decode_SRS_ResourceSet_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SRS_ResourceSet_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SRS_ResourceSet_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_SRS_ResourceSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceSet(SRS_ResourceSet& value)
{
    if (value.has_srs_ResourceIdList) {
        if (value.srs_ResourceIdList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_ResourceIdList_count; ++i) {
            }
            std::free(value.srs_ResourceIdList_items);
            value.srs_ResourceIdList_items = nullptr;
        }
        value.srs_ResourceIdList_count = 0;
    }
    Free_SRS_ResourceSet_ResourceType(value.resourceType);
    if (value.has_alpha) {
    }
    if (value.has_p0) {
    }
    if (value.has_pathlossReferenceRS) {
        Free_PathlossReferenceRS_Config(value.pathlossReferenceRS);
    }
    if (value.has_srs_PowerControlAdjustmentStates) {
    }
    if (value.has_extGroup1) {
        Free_SRS_ResourceSet_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SRS_ResourceSet_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SRS_ResourceSet_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PathlossReferenceRS_r16：ASN.1 PathlossReferenceRS-r16；源文件第 13131 行；SEQUENCE。
// Encode_PathlossReferenceRS_r16 只读不分配；Decode_PathlossReferenceRS_r16 可能 malloc（失败时内部已释放并清零）；Free_PathlossReferenceRS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PathlossReferenceRS_r16(Encoder& enc, const PathlossReferenceRS_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_PathlossReferenceRS_Id_r16), 0, 63);
    Encode_PathlossReferenceRS_Config(enc, value.pathlossReferenceRS_r16);
    return enc.Error();
}

ErrorCode Decode_PathlossReferenceRS_r16(Decoder& dec, PathlossReferenceRS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.srs_PathlossReferenceRS_Id_r16 = (SRS_PathlossReferenceRS_Id_r16)tmp_value;
    }
    {
        if (Decode_PathlossReferenceRS_Config(dec, value.pathlossReferenceRS_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PathlossReferenceRS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PathlossReferenceRS_r16(PathlossReferenceRS_r16& value)
{
    Free_PathlossReferenceRS_Config(value.pathlossReferenceRS_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16：ASN.1 resourceType-r16/aperiodic-r16；源文件第 13143 行；SEQUENCE。
// Encode_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16 只读不分配；Decode_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16(Encoder& enc, const SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_aperiodicSRS_ResourceTriggerList_r16);
    if (value.has_aperiodicSRS_ResourceTriggerList_r16) {
enc.WriteConstrainedLength(value.aperiodicSRS_ResourceTriggerList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.aperiodicSRS_ResourceTriggerList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicSRS_ResourceTriggerList_r16_items[i]), 1, 3);
}
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16(Decoder& dec, SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.aperiodicSRS_ResourceTriggerList_r16_count)) { goto fail; }
if (value.aperiodicSRS_ResourceTriggerList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.aperiodicSRS_ResourceTriggerList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.aperiodicSRS_ResourceTriggerList_r16_count > 0u) {
    value.aperiodicSRS_ResourceTriggerList_r16_items = (int64_t*)std::malloc((std::size_t)value.aperiodicSRS_ResourceTriggerList_r16_count * sizeof(int64_t));
    if (value.aperiodicSRS_ResourceTriggerList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.aperiodicSRS_ResourceTriggerList_r16_items, 0, (std::size_t)value.aperiodicSRS_ResourceTriggerList_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.aperiodicSRS_ResourceTriggerList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
    value.aperiodicSRS_ResourceTriggerList_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16(SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16& value)
{
    if (value.has_aperiodicSRS_ResourceTriggerList_r16) {
        if (value.aperiodicSRS_ResourceTriggerList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.aperiodicSRS_ResourceTriggerList_r16_count; ++i) {
            }
            std::free(value.aperiodicSRS_ResourceTriggerList_r16_items);
            value.aperiodicSRS_ResourceTriggerList_r16_items = nullptr;
        }
        value.aperiodicSRS_ResourceTriggerList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16：ASN.1 resourceType-r16/semi-persistent-r16；源文件第 13148 行；空 SEQUENCE{}。
// Encode_SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16 只读不分配；Decode_SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16(Encoder& enc, const SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16(Decoder& dec, SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16(SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16：ASN.1 resourceType-r16/periodic-r16；源文件第 13151 行；空 SEQUENCE{}。
// Encode_SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16 只读不分配；Decode_SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16(Encoder& enc, const SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16(Decoder& dec, SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16(SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResourceSet_r16_ResourceType_r16：ASN.1 resourceType-r16；源文件第 13142 行；CHOICE。
// Encode_SRS_PosResourceSet_r16_ResourceType_r16 只读不分配；Decode_SRS_PosResourceSet_r16_ResourceType_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResourceSet_r16_ResourceType_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResourceSet_r16_ResourceType_r16(Encoder& enc, const SRS_PosResourceSet_r16_ResourceType_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SRS_PosResourceSet_r16_ResourceType_r16_Tag_aperiodic_r16:
        Encode_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16(enc, value.u.aperiodic_r16);
        break;
    case SRS_PosResourceSet_r16_ResourceType_r16_Tag_semi_persistent_r16:
        Encode_SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16(enc, value.u.semi_persistent_r16);
        break;
    case SRS_PosResourceSet_r16_ResourceType_r16_Tag_periodic_r16:
        Encode_SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16(enc, value.u.periodic_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResourceSet_r16_ResourceType_r16(Decoder& dec, SRS_PosResourceSet_r16_ResourceType_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SRS_PosResourceSet_r16_ResourceType_r16_Tag)root_index;
    switch (value.tag) {
    case SRS_PosResourceSet_r16_ResourceType_r16_Tag_aperiodic_r16: {
        if (Decode_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16(dec, value.u.aperiodic_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_PosResourceSet_r16_ResourceType_r16_Tag_semi_persistent_r16: {
        if (Decode_SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16(dec, value.u.semi_persistent_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_PosResourceSet_r16_ResourceType_r16_Tag_periodic_r16: {
        if (Decode_SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16(dec, value.u.periodic_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResourceSet_r16_ResourceType_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResourceSet_r16_ResourceType_r16(SRS_PosResourceSet_r16_ResourceType_r16& value)
{
    switch (value.tag) {
    case SRS_PosResourceSet_r16_ResourceType_r16_Tag_aperiodic_r16:
        Free_SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16(value.u.aperiodic_r16);
        break;
    case SRS_PosResourceSet_r16_ResourceType_r16_Tag_semi_persistent_r16:
        Free_SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16(value.u.semi_persistent_r16);
        break;
    case SRS_PosResourceSet_r16_ResourceType_r16_Tag_periodic_r16:
        Free_SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16(value.u.periodic_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_Configuration_r16_Sfn0_Offset_r16：ASN.1 sfn0-Offset-r16；源文件第 13363 行；SEQUENCE。
// Encode_SSB_Configuration_r16_Sfn0_Offset_r16 只读不分配；Decode_SSB_Configuration_r16_Sfn0_Offset_r16 可能 malloc（失败时内部已释放并清零）；Free_SSB_Configuration_r16_Sfn0_Offset_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_Configuration_r16_Sfn0_Offset_r16(Encoder& enc, const SSB_Configuration_r16_Sfn0_Offset_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_integerSubframeOffset_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sfn_Offset_r16), 0, 1023);
    if (value.has_integerSubframeOffset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.integerSubframeOffset_r16), 0, 9);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_Configuration_r16_Sfn0_Offset_r16(Decoder& dec, SSB_Configuration_r16_Sfn0_Offset_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sfn_Offset_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.integerSubframeOffset_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_Configuration_r16_Sfn0_Offset_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_Configuration_r16_Sfn0_Offset_r16(SSB_Configuration_r16_Sfn0_Offset_r16& value)
{
    if (value.has_integerSubframeOffset_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_Configuration_r16：ASN.1 SSB-Configuration-r16；源文件第 13358 行；SEQUENCE。
// Encode_SSB_Configuration_r16 只读不分配；Decode_SSB_Configuration_r16 可能 malloc（失败时内部已释放并清零）；Free_SSB_Configuration_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_Configuration_r16(Encoder& enc, const SSB_Configuration_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_ssb_Periodicity_r16);
    enc.WriteBit(value.has_sfn0_Offset_r16);
    enc.WriteBit(value.has_ss_PBCH_BlockPower_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Freq_r16), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.halfFrameIndex_r16), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssbSubcarrierSpacing_r16), 0, 7);
    if (value.has_ssb_Periodicity_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Periodicity_r16), 0, 7);
    }
    if (value.has_sfn0_Offset_r16) {
        Encode_SSB_Configuration_r16_Sfn0_Offset_r16(enc, value.sfn0_Offset_r16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.sfn_SSB_Offset_r16), 0, 15);
    if (value.has_ss_PBCH_BlockPower_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ss_PBCH_BlockPower_r16), -60, 50);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_Configuration_r16(Decoder& dec, SSB_Configuration_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.ssb_Freq_r16 = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.halfFrameIndex_r16 = (SSB_Configuration_r16_HalfFrameIndex_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssbSubcarrierSpacing_r16 = (SubcarrierSpacing)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_Periodicity_r16 = (SSB_Configuration_r16_Ssb_Periodicity_r16)tmp_value;
    }
    if (present_1) {
        if (Decode_SSB_Configuration_r16_Sfn0_Offset_r16(dec, value.sfn0_Offset_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sfn_SSB_Offset_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-60, 50, tmp_value)) { goto fail; }
        value.ss_PBCH_BlockPower_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_Configuration_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_Configuration_r16(SSB_Configuration_r16& value)
{
    if (value.has_ssb_Periodicity_r16) {
    }
    if (value.has_sfn0_Offset_r16) {
        Free_SSB_Configuration_r16_Sfn0_Offset_r16(value.sfn0_Offset_r16);
    }
    if (value.has_ss_PBCH_BlockPower_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_InfoNcell_r16：ASN.1 SSB-InfoNcell-r16；源文件第 13371 行；SEQUENCE。
// Encode_SSB_InfoNcell_r16 只读不分配；Decode_SSB_InfoNcell_r16 可能 malloc（失败时内部已释放并清零）；Free_SSB_InfoNcell_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_InfoNcell_r16(Encoder& enc, const SSB_InfoNcell_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_ssb_IndexNcell_r16);
    enc.WriteBit(value.has_ssb_Configuration_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.physicalCellId_r16), 0, 1007);
    if (value.has_ssb_IndexNcell_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_IndexNcell_r16), 0, 63);
    }
    if (value.has_ssb_Configuration_r16) {
        Encode_SSB_Configuration_r16(enc, value.ssb_Configuration_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_InfoNcell_r16(Decoder& dec, SSB_InfoNcell_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physicalCellId_r16 = (PhysCellId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ssb_IndexNcell_r16 = (SSB_Index)tmp_value;
    }
    if (present_1) {
        if (Decode_SSB_Configuration_r16(dec, value.ssb_Configuration_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_InfoNcell_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_InfoNcell_r16(SSB_InfoNcell_r16& value)
{
    if (value.has_ssb_IndexNcell_r16) {
    }
    if (value.has_ssb_Configuration_r16) {
        Free_SSB_Configuration_r16(value.ssb_Configuration_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_PRS_Info_r16：ASN.1 DL-PRS-Info-r16；源文件第 13377 行；SEQUENCE。
// Encode_DL_PRS_Info_r16 只读不分配；Decode_DL_PRS_Info_r16 可能 malloc（失败时内部已释放并清零）；Free_DL_PRS_Info_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_PRS_Info_r16(Encoder& enc, const DL_PRS_Info_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_dl_PRS_ResourceId_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_ID_r16), 0, 255);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_ResourceSetId_r16), 0, 7);
    if (value.has_dl_PRS_ResourceId_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_ResourceId_r16), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PRS_Info_r16(Decoder& dec, DL_PRS_Info_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.dl_PRS_ID_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.dl_PRS_ResourceSetId_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.dl_PRS_ResourceId_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PRS_Info_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PRS_Info_r16(DL_PRS_Info_r16& value)
{
    if (value.has_dl_PRS_ResourceId_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16：ASN.1 pathlossReferenceRS-Pos-r16；源文件第 13157 行；CHOICE。
// Encode_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16 只读不分配；Decode_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16(Encoder& enc, const SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_ssb_IndexServing_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_IndexServing_r16), 0, 63);
        break;
    case SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_ssb_Ncell_r16:
        Encode_SSB_InfoNcell_r16(enc, value.u.ssb_Ncell_r16);
        break;
    case SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_dl_PRS_r16:
        Encode_DL_PRS_Info_r16(enc, value.u.dl_PRS_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16(Decoder& dec, SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag)root_index;
    switch (value.tag) {
    case SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_ssb_IndexServing_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_IndexServing_r16 = (SSB_Index)tmp_value;
        break;
    }
    case SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_ssb_Ncell_r16: {
        if (Decode_SSB_InfoNcell_r16(dec, value.u.ssb_Ncell_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_dl_PRS_r16: {
        if (Decode_DL_PRS_Info_r16(dec, value.u.dl_PRS_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16(SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16& value)
{
    switch (value.tag) {
    case SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_ssb_IndexServing_r16:
        break;
    case SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_ssb_Ncell_r16:
        Free_SSB_InfoNcell_r16(value.u.ssb_Ncell_r16);
        break;
    case SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_dl_PRS_r16:
        Free_DL_PRS_Info_r16(value.u.dl_PRS_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResourceSet_r16：ASN.1 SRS-PosResourceSet-r16；源文件第 13138 行；SEQUENCE。
// Encode_SRS_PosResourceSet_r16 只读不分配；Decode_SRS_PosResourceSet_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResourceSet_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResourceSet_r16(Encoder& enc, const SRS_PosResourceSet_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_srs_PosResourceIdList_r16);
    enc.WriteBit(value.has_alpha_r16);
    enc.WriteBit(value.has_p0_r16);
    enc.WriteBit(value.has_pathlossReferenceRS_Pos_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_PosResourceSetId_r16), 0, 15);
    if (value.has_srs_PosResourceIdList_r16) {
enc.WriteConstrainedLength(value.srs_PosResourceIdList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_PosResourceIdList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_PosResourceIdList_r16_items[i]), 0, 63);
}
    }
    Encode_SRS_PosResourceSet_r16_ResourceType_r16(enc, value.resourceType_r16);
    if (value.has_alpha_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.alpha_r16), 0, 7);
    }
    if (value.has_p0_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p0_r16), -202, 24);
    }
    if (value.has_pathlossReferenceRS_Pos_r16) {
        Encode_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16(enc, value.pathlossReferenceRS_Pos_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResourceSet_r16(Decoder& dec, SRS_PosResourceSet_r16& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.srs_PosResourceSetId_r16 = (SRS_PosResourceSetId_r16)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_PosResourceIdList_r16_count)) { goto fail; }
if (value.srs_PosResourceIdList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_PosResourceIdList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_PosResourceIdList_r16_count > 0u) {
    value.srs_PosResourceIdList_r16_items = (SRS_PosResourceId_r16*)std::malloc((std::size_t)value.srs_PosResourceIdList_r16_count * sizeof(SRS_PosResourceId_r16));
    if (value.srs_PosResourceIdList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_PosResourceIdList_r16_items, 0, (std::size_t)value.srs_PosResourceIdList_r16_count * sizeof(SRS_PosResourceId_r16));
}
for (std::uint32_t i = 0; i < value.srs_PosResourceIdList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.srs_PosResourceIdList_r16_items[i] = (SRS_PosResourceId_r16)tmp_value;
}
    }
    {
        if (Decode_SRS_PosResourceSet_r16_ResourceType_r16(dec, value.resourceType_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.alpha_r16 = (Alpha)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.p0_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        if (Decode_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16(dec, value.pathlossReferenceRS_Pos_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResourceSet_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResourceSet_r16(SRS_PosResourceSet_r16& value)
{
    if (value.has_srs_PosResourceIdList_r16) {
        if (value.srs_PosResourceIdList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_PosResourceIdList_r16_count; ++i) {
            }
            std::free(value.srs_PosResourceIdList_r16_items);
            value.srs_PosResourceIdList_r16_items = nullptr;
        }
        value.srs_PosResourceIdList_r16_count = 0;
    }
    Free_SRS_PosResourceSet_r16_ResourceType_r16(value.resourceType_r16);
    if (value.has_alpha_r16) {
    }
    if (value.has_p0_r16) {
    }
    if (value.has_pathlossReferenceRS_Pos_r16) {
        Free_SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16(value.pathlossReferenceRS_Pos_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TxHoppingConfig_r18：ASN.1 TxHoppingConfig-r18；源文件第 13452 行；SEQUENCE。
// Encode_TxHoppingConfig_r18 只读不分配；Decode_TxHoppingConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_TxHoppingConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TxHoppingConfig_r18(Encoder& enc, const TxHoppingConfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.overlapValue_r18), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfHops_r18), 2, 6);
enc.WriteConstrainedLength(value.slotOffsetForRemainingHopsList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.slotOffsetForRemainingHopsList_r18_count; ++i) {
    Encode_SlotOffsetForRemainingHops_r18(enc, value.slotOffsetForRemainingHopsList_r18_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_TxHoppingConfig_r18(Decoder& dec, TxHoppingConfig_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.overlapValue_r18 = (TxHoppingConfig_r18_OverlapValue_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 6, tmp_value)) { goto fail; }
        value.numberOfHops_r18 = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.slotOffsetForRemainingHopsList_r18_count)) { goto fail; }
if (value.slotOffsetForRemainingHopsList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.slotOffsetForRemainingHopsList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.slotOffsetForRemainingHopsList_r18_count > 0u) {
    value.slotOffsetForRemainingHopsList_r18_items = (SlotOffsetForRemainingHops_r18*)std::malloc((std::size_t)value.slotOffsetForRemainingHopsList_r18_count * sizeof(SlotOffsetForRemainingHops_r18));
    if (value.slotOffsetForRemainingHopsList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.slotOffsetForRemainingHopsList_r18_items, 0, (std::size_t)value.slotOffsetForRemainingHopsList_r18_count * sizeof(SlotOffsetForRemainingHops_r18));
}
for (std::uint32_t i = 0; i < value.slotOffsetForRemainingHopsList_r18_count; ++i) {
    if (Decode_SlotOffsetForRemainingHops_r18(dec, value.slotOffsetForRemainingHopsList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_TxHoppingConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TxHoppingConfig_r18(TxHoppingConfig_r18& value)
{
    if (value.slotOffsetForRemainingHopsList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.slotOffsetForRemainingHopsList_r18_count; ++i) {
            Free_SlotOffsetForRemainingHops_r18(value.slotOffsetForRemainingHopsList_r18_items[i]);
        }
        std::free(value.slotOffsetForRemainingHopsList_r18_items);
        value.slotOffsetForRemainingHopsList_r18_items = nullptr;
    }
    value.slotOffsetForRemainingHopsList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_ExtGroup1：ASN.1 SRS_PosResource_r16_ExtGroup1；源文件第 13321 行；扩展添加组 [[ ]]。
// Encode_SRS_PosResource_r16_ExtGroup1 只读不分配；Decode_SRS_PosResource_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_ExtGroup1(Encoder& enc, const SRS_PosResource_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_PosPeriodicConfigHyperSFN_Index_r18);
    enc.WriteBit(value.has_txHoppingConfig_r18);
    if (value.has_srs_PosPeriodicConfigHyperSFN_Index_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_PosPeriodicConfigHyperSFN_Index_r18), 0, 1);
    }
    if (value.has_txHoppingConfig_r18) {
        Encode_TxHoppingConfig_r18(enc, value.txHoppingConfig_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_ExtGroup1(Decoder& dec, SRS_PosResource_r16_ExtGroup1& value)
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
        value.srs_PosPeriodicConfigHyperSFN_Index_r18 = (SRS_PosResource_r16_ExtGroup1_Srs_PosPeriodicConfigHyperSFN_Index_r18)tmp_value;
    }
    if (present_1) {
        if (Decode_TxHoppingConfig_r18(dec, value.txHoppingConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_ExtGroup1(SRS_PosResource_r16_ExtGroup1& value)
{
    if (value.has_srs_PosPeriodicConfigHyperSFN_Index_r18) {
    }
    if (value.has_txHoppingConfig_r18) {
        Free_TxHoppingConfig_r18(value.txHoppingConfig_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16：ASN.1 servingRS-r16/referenceSignal-r16/srs-SpatialRelation-r16/resourceSelection-r16；源文件第 13346 行；CHOICE。
// Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16 只读不分配；Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16(Encoder& enc, const SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag_srs_ResourceId_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.srs_ResourceId_r16), 0, 63);
        break;
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag_srs_PosResourceId_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.srs_PosResourceId_r16), 0, 63);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16(Decoder& dec, SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag)root_index;
    switch (value.tag) {
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag_srs_ResourceId_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.srs_ResourceId_r16 = (SRS_ResourceId)tmp_value;
        break;
    }
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag_srs_PosResourceId_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.srs_PosResourceId_r16 = (SRS_PosResourceId_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16(SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16& value)
{
    switch (value.tag) {
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag_srs_ResourceId_r16:
        break;
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag_srs_PosResourceId_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16：ASN.1 servingRS-r16/referenceSignal-r16/srs-SpatialRelation-r16；源文件第 13345 行；SEQUENCE。
// Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16 只读不分配；Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16(Encoder& enc, const SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16& value)
{
    (void)value;
    Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16(enc, value.resourceSelection_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkBWP_r16), 0, 4);
    return enc.Error();
}

ErrorCode Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16(Decoder& dec, SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16(dec, value.resourceSelection_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.uplinkBWP_r16 = (BWP_Id)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16(SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16& value)
{
    Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16(value.resourceSelection_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16：ASN.1 servingRS-r16/referenceSignal-r16；源文件第 13342 行；CHOICE。
// Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16 只读不分配；Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16(Encoder& enc, const SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_ssb_IndexServing_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_IndexServing_r16), 0, 63);
        break;
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_csi_RS_IndexServing_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_IndexServing_r16), 0, 191);
        break;
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_srs_SpatialRelation_r16:
        Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16(enc, value.u.srs_SpatialRelation_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16(Decoder& dec, SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag)root_index;
    switch (value.tag) {
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_ssb_IndexServing_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_IndexServing_r16 = (SSB_Index)tmp_value;
        break;
    }
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_csi_RS_IndexServing_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_IndexServing_r16 = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_srs_SpatialRelation_r16: {
        if (Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16(dec, value.u.srs_SpatialRelation_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16(SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16& value)
{
    switch (value.tag) {
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_ssb_IndexServing_r16:
        break;
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_csi_RS_IndexServing_r16:
        break;
    case SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_srs_SpatialRelation_r16:
        Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16(value.u.srs_SpatialRelation_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_SpatialRelationInfoPos_r16_ServingRS_r16：ASN.1 servingRS-r16；源文件第 13340 行；SEQUENCE。
// Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16 只读不分配；Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16(Encoder& enc, const SRS_SpatialRelationInfoPos_r16_ServingRS_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_servingCellId);
    if (value.has_servingCellId) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId), 0, 31);
    }
    Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16(enc, value.referenceSignal_r16);
    return enc.Error();
}

ErrorCode Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16(Decoder& dec, SRS_SpatialRelationInfoPos_r16_ServingRS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId = (ServCellIndex)tmp_value;
    }
    {
        if (Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16(dec, value.referenceSignal_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16(SRS_SpatialRelationInfoPos_r16_ServingRS_r16& value)
{
    if (value.has_servingCellId) {
    }
    Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16(value.referenceSignal_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_SpatialRelationInfoPos_r16：ASN.1 SRS-SpatialRelationInfoPos-r16；源文件第 13339 行；CHOICE。
// Encode_SRS_SpatialRelationInfoPos_r16 只读不分配；Decode_SRS_SpatialRelationInfoPos_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_SpatialRelationInfoPos_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_SpatialRelationInfoPos_r16(Encoder& enc, const SRS_SpatialRelationInfoPos_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SRS_SpatialRelationInfoPos_r16_Tag_servingRS_r16:
        Encode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16(enc, value.u.servingRS_r16);
        break;
    case SRS_SpatialRelationInfoPos_r16_Tag_ssb_Ncell_r16:
        Encode_SSB_InfoNcell_r16(enc, value.u.ssb_Ncell_r16);
        break;
    case SRS_SpatialRelationInfoPos_r16_Tag_dl_PRS_r16:
        Encode_DL_PRS_Info_r16(enc, value.u.dl_PRS_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_SpatialRelationInfoPos_r16(Decoder& dec, SRS_SpatialRelationInfoPos_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SRS_SpatialRelationInfoPos_r16_Tag)root_index;
    switch (value.tag) {
    case SRS_SpatialRelationInfoPos_r16_Tag_servingRS_r16: {
        if (Decode_SRS_SpatialRelationInfoPos_r16_ServingRS_r16(dec, value.u.servingRS_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_SpatialRelationInfoPos_r16_Tag_ssb_Ncell_r16: {
        if (Decode_SSB_InfoNcell_r16(dec, value.u.ssb_Ncell_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_SpatialRelationInfoPos_r16_Tag_dl_PRS_r16: {
        if (Decode_DL_PRS_Info_r16(dec, value.u.dl_PRS_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_SpatialRelationInfoPos_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_SpatialRelationInfoPos_r16(SRS_SpatialRelationInfoPos_r16& value)
{
    switch (value.tag) {
    case SRS_SpatialRelationInfoPos_r16_Tag_servingRS_r16:
        Free_SRS_SpatialRelationInfoPos_r16_ServingRS_r16(value.u.servingRS_r16);
        break;
    case SRS_SpatialRelationInfoPos_r16_Tag_ssb_Ncell_r16:
        Free_SSB_InfoNcell_r16(value.u.ssb_Ncell_r16);
        break;
    case SRS_SpatialRelationInfoPos_r16_Tag_dl_PRS_r16:
        Free_DL_PRS_Info_r16(value.u.dl_PRS_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_TransmissionComb_r16_N2_r16：ASN.1 transmissionComb-r16/n2-r16；源文件第 13274 行；SEQUENCE。
// Encode_SRS_PosResource_r16_TransmissionComb_r16_N2_r16 只读不分配；Decode_SRS_PosResource_r16_TransmissionComb_r16_N2_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_TransmissionComb_r16_N2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_TransmissionComb_r16_N2_r16(Encoder& enc, const SRS_PosResource_r16_TransmissionComb_r16_N2_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.combOffset_n2_r16), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.cyclicShift_n2_r16), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_TransmissionComb_r16_N2_r16(Decoder& dec, SRS_PosResource_r16_TransmissionComb_r16_N2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.combOffset_n2_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.cyclicShift_n2_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_TransmissionComb_r16_N2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_TransmissionComb_r16_N2_r16(SRS_PosResource_r16_TransmissionComb_r16_N2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_TransmissionComb_r16_N4_r16：ASN.1 transmissionComb-r16/n4-r16；源文件第 13278 行；SEQUENCE。
// Encode_SRS_PosResource_r16_TransmissionComb_r16_N4_r16 只读不分配；Decode_SRS_PosResource_r16_TransmissionComb_r16_N4_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_TransmissionComb_r16_N4_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_TransmissionComb_r16_N4_r16(Encoder& enc, const SRS_PosResource_r16_TransmissionComb_r16_N4_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.combOffset_n4_r16), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.cyclicShift_n4_r16), 0, 11);
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_TransmissionComb_r16_N4_r16(Decoder& dec, SRS_PosResource_r16_TransmissionComb_r16_N4_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.combOffset_n4_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.cyclicShift_n4_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_TransmissionComb_r16_N4_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_TransmissionComb_r16_N4_r16(SRS_PosResource_r16_TransmissionComb_r16_N4_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_TransmissionComb_r16_N8_r16：ASN.1 transmissionComb-r16/n8-r16；源文件第 13282 行；SEQUENCE。
// Encode_SRS_PosResource_r16_TransmissionComb_r16_N8_r16 只读不分配；Decode_SRS_PosResource_r16_TransmissionComb_r16_N8_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_TransmissionComb_r16_N8_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_TransmissionComb_r16_N8_r16(Encoder& enc, const SRS_PosResource_r16_TransmissionComb_r16_N8_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.combOffset_n8_r16), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.cyclicShift_n8_r16), 0, 5);
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_TransmissionComb_r16_N8_r16(Decoder& dec, SRS_PosResource_r16_TransmissionComb_r16_N8_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.combOffset_n8_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.cyclicShift_n8_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_TransmissionComb_r16_N8_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_TransmissionComb_r16_N8_r16(SRS_PosResource_r16_TransmissionComb_r16_N8_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_TransmissionComb_r16：ASN.1 transmissionComb-r16；源文件第 13273 行；CHOICE。
// Encode_SRS_PosResource_r16_TransmissionComb_r16 只读不分配；Decode_SRS_PosResource_r16_TransmissionComb_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_TransmissionComb_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_TransmissionComb_r16(Encoder& enc, const SRS_PosResource_r16_TransmissionComb_r16& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 3) {
        if (choice_index >= 3) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 3));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SRS_PosResource_r16_TransmissionComb_r16_Tag_n2_r16:
        Encode_SRS_PosResource_r16_TransmissionComb_r16_N2_r16(enc, value.u.n2_r16);
        break;
    case SRS_PosResource_r16_TransmissionComb_r16_Tag_n4_r16:
        Encode_SRS_PosResource_r16_TransmissionComb_r16_N4_r16(enc, value.u.n4_r16);
        break;
    case SRS_PosResource_r16_TransmissionComb_r16_Tag_n8_r16:
        Encode_SRS_PosResource_r16_TransmissionComb_r16_N8_r16(enc, value.u.n8_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_TransmissionComb_r16(Decoder& dec, SRS_PosResource_r16_TransmissionComb_r16& value)
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
        value.tag = (SRS_PosResource_r16_TransmissionComb_r16_Tag)(3 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SRS_PosResource_r16_TransmissionComb_r16_Tag)root_index;
    switch (value.tag) {
    case SRS_PosResource_r16_TransmissionComb_r16_Tag_n2_r16: {
        if (Decode_SRS_PosResource_r16_TransmissionComb_r16_N2_r16(dec, value.u.n2_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_PosResource_r16_TransmissionComb_r16_Tag_n4_r16: {
        if (Decode_SRS_PosResource_r16_TransmissionComb_r16_N4_r16(dec, value.u.n4_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_PosResource_r16_TransmissionComb_r16_Tag_n8_r16: {
        if (Decode_SRS_PosResource_r16_TransmissionComb_r16_N8_r16(dec, value.u.n8_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_TransmissionComb_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_TransmissionComb_r16(SRS_PosResource_r16_TransmissionComb_r16& value)
{
    switch (value.tag) {
    case SRS_PosResource_r16_TransmissionComb_r16_Tag_n2_r16:
        Free_SRS_PosResource_r16_TransmissionComb_r16_N2_r16(value.u.n2_r16);
        break;
    case SRS_PosResource_r16_TransmissionComb_r16_Tag_n4_r16:
        Free_SRS_PosResource_r16_TransmissionComb_r16_N4_r16(value.u.n4_r16);
        break;
    case SRS_PosResource_r16_TransmissionComb_r16_Tag_n8_r16:
        Free_SRS_PosResource_r16_TransmissionComb_r16_N8_r16(value.u.n8_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_ResourceMapping_r16：ASN.1 resourceMapping-r16；源文件第 13288 行；SEQUENCE。
// Encode_SRS_PosResource_r16_ResourceMapping_r16 只读不分配；Decode_SRS_PosResource_r16_ResourceMapping_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_ResourceMapping_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_ResourceMapping_r16(Encoder& enc, const SRS_PosResource_r16_ResourceMapping_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.startPosition_r16), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSymbols_r16), 0, 4);
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_ResourceMapping_r16(Decoder& dec, SRS_PosResource_r16_ResourceMapping_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.startPosition_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.nrofSymbols_r16 = (SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_ResourceMapping_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_ResourceMapping_r16(SRS_PosResource_r16_ResourceMapping_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_FreqHopping_r16：ASN.1 freqHopping-r16；源文件第 13293 行；SEQUENCE。
// Encode_SRS_PosResource_r16_FreqHopping_r16 只读不分配；Decode_SRS_PosResource_r16_FreqHopping_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_FreqHopping_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_FreqHopping_r16(Encoder& enc, const SRS_PosResource_r16_FreqHopping_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.c_SRS_r16), 0, 63);
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_FreqHopping_r16(Decoder& dec, SRS_PosResource_r16_FreqHopping_r16& value)
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
        value.c_SRS_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_FreqHopping_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_FreqHopping_r16(SRS_PosResource_r16_FreqHopping_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16：ASN.1 resourceType-r16/aperiodic-r16；源文件第 13299 行；SEQUENCE。
// Encode_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16 只读不分配；Decode_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16(Encoder& enc, const SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_slotOffset_r16);
    if (value.has_slotOffset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.slotOffset_r16), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16(Decoder& dec, SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.slotOffset_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16(SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16& value)
{
    if (value.has_slotOffset_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1：ASN.1 SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1；源文件第 13306 行；扩展添加组 [[ ]]。
// Encode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1 只读不分配；Decode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1(Encoder& enc, const SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_periodicityAndOffset_sp_Ext_r16);
    if (value.has_periodicityAndOffset_sp_Ext_r16) {
        Encode_SRS_PeriodicityAndOffsetExt_r16(enc, value.periodicityAndOffset_sp_Ext_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1(Decoder& dec, SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SRS_PeriodicityAndOffsetExt_r16(dec, value.periodicityAndOffset_sp_Ext_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1(SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1& value)
{
    if (value.has_periodicityAndOffset_sp_Ext_r16) {
        Free_SRS_PeriodicityAndOffsetExt_r16(value.periodicityAndOffset_sp_Ext_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16：ASN.1 resourceType-r16/semi-persistent-r16；源文件第 13303 行；SEQUENCE。
// Encode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16 只读不分配；Decode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16(Encoder& enc, const SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    Encode_SRS_PeriodicityAndOffset_r16(enc, value.periodicityAndOffset_sp_r16);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16(Decoder& dec, SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        if (Decode_SRS_PeriodicityAndOffset_r16(dec, value.periodicityAndOffset_sp_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16(SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16& value)
{
    Free_SRS_PeriodicityAndOffset_r16(value.periodicityAndOffset_sp_r16);
    if (value.has_extGroup1) {
        Free_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1：ASN.1 SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1；源文件第 13313 行；扩展添加组 [[ ]]。
// Encode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1 只读不分配；Decode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1(Encoder& enc, const SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_periodicityAndOffset_p_Ext_r16);
    if (value.has_periodicityAndOffset_p_Ext_r16) {
        Encode_SRS_PeriodicityAndOffsetExt_r16(enc, value.periodicityAndOffset_p_Ext_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1(Decoder& dec, SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SRS_PeriodicityAndOffsetExt_r16(dec, value.periodicityAndOffset_p_Ext_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1(SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1& value)
{
    if (value.has_periodicityAndOffset_p_Ext_r16) {
        Free_SRS_PeriodicityAndOffsetExt_r16(value.periodicityAndOffset_p_Ext_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_ResourceType_r16_Periodic_r16：ASN.1 resourceType-r16/periodic-r16；源文件第 13310 行；SEQUENCE。
// Encode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16 只读不分配；Decode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_ResourceType_r16_Periodic_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16(Encoder& enc, const SRS_PosResource_r16_ResourceType_r16_Periodic_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    Encode_SRS_PeriodicityAndOffset_r16(enc, value.periodicityAndOffset_p_r16);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16(Decoder& dec, SRS_PosResource_r16_ResourceType_r16_Periodic_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        if (Decode_SRS_PeriodicityAndOffset_r16(dec, value.periodicityAndOffset_p_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SRS_PosResource_r16_ResourceType_r16_Periodic_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_ResourceType_r16_Periodic_r16(SRS_PosResource_r16_ResourceType_r16_Periodic_r16& value)
{
    Free_SRS_PeriodicityAndOffset_r16(value.periodicityAndOffset_p_r16);
    if (value.has_extGroup1) {
        Free_SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16_ResourceType_r16：ASN.1 resourceType-r16；源文件第 13298 行；CHOICE。
// Encode_SRS_PosResource_r16_ResourceType_r16 只读不分配；Decode_SRS_PosResource_r16_ResourceType_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16_ResourceType_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16_ResourceType_r16(Encoder& enc, const SRS_PosResource_r16_ResourceType_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SRS_PosResource_r16_ResourceType_r16_Tag_aperiodic_r16:
        Encode_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16(enc, value.u.aperiodic_r16);
        break;
    case SRS_PosResource_r16_ResourceType_r16_Tag_semi_persistent_r16:
        Encode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16(enc, value.u.semi_persistent_r16);
        break;
    case SRS_PosResource_r16_ResourceType_r16_Tag_periodic_r16:
        Encode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16(enc, value.u.periodic_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16_ResourceType_r16(Decoder& dec, SRS_PosResource_r16_ResourceType_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SRS_PosResource_r16_ResourceType_r16_Tag)root_index;
    switch (value.tag) {
    case SRS_PosResource_r16_ResourceType_r16_Tag_aperiodic_r16: {
        if (Decode_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16(dec, value.u.aperiodic_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_PosResource_r16_ResourceType_r16_Tag_semi_persistent_r16: {
        if (Decode_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16(dec, value.u.semi_persistent_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_PosResource_r16_ResourceType_r16_Tag_periodic_r16: {
        if (Decode_SRS_PosResource_r16_ResourceType_r16_Periodic_r16(dec, value.u.periodic_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResource_r16_ResourceType_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16_ResourceType_r16(SRS_PosResource_r16_ResourceType_r16& value)
{
    switch (value.tag) {
    case SRS_PosResource_r16_ResourceType_r16_Tag_aperiodic_r16:
        Free_SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16(value.u.aperiodic_r16);
        break;
    case SRS_PosResource_r16_ResourceType_r16_Tag_semi_persistent_r16:
        Free_SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16(value.u.semi_persistent_r16);
        break;
    case SRS_PosResource_r16_ResourceType_r16_Tag_periodic_r16:
        Free_SRS_PosResource_r16_ResourceType_r16_Periodic_r16(value.u.periodic_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResource_r16：ASN.1 SRS-PosResource-r16；源文件第 13271 行；SEQUENCE。
// Encode_SRS_PosResource_r16 只读不分配；Decode_SRS_PosResource_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResource_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResource_r16(Encoder& enc, const SRS_PosResource_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_spatialRelationInfoPos_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_PosResourceId_r16), 0, 63);
    Encode_SRS_PosResource_r16_TransmissionComb_r16(enc, value.transmissionComb_r16);
    Encode_SRS_PosResource_r16_ResourceMapping_r16(enc, value.resourceMapping_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.freqDomainShift_r16), 0, 268);
    Encode_SRS_PosResource_r16_FreqHopping_r16(enc, value.freqHopping_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.groupOrSequenceHopping_r16), 0, 2);
    Encode_SRS_PosResource_r16_ResourceType_r16(enc, value.resourceType_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sequenceId_r16), 0, 65535);
    if (value.has_spatialRelationInfoPos_r16) {
        Encode_SRS_SpatialRelationInfoPos_r16(enc, value.spatialRelationInfoPos_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SRS_PosResource_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResource_r16(Decoder& dec, SRS_PosResource_r16& value)
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
        value.srs_PosResourceId_r16 = (SRS_PosResourceId_r16)tmp_value;
    }
    {
        if (Decode_SRS_PosResource_r16_TransmissionComb_r16(dec, value.transmissionComb_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SRS_PosResource_r16_ResourceMapping_r16(dec, value.resourceMapping_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 268, tmp_value)) { goto fail; }
        value.freqDomainShift_r16 = (int64_t)tmp_value;
    }
    {
        if (Decode_SRS_PosResource_r16_FreqHopping_r16(dec, value.freqHopping_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.groupOrSequenceHopping_r16 = (SRS_PosResource_r16_GroupOrSequenceHopping_r16)tmp_value;
    }
    {
        if (Decode_SRS_PosResource_r16_ResourceType_r16(dec, value.resourceType_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.sequenceId_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_SRS_SpatialRelationInfoPos_r16(dec, value.spatialRelationInfoPos_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SRS_PosResource_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SRS_PosResource_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResource_r16(SRS_PosResource_r16& value)
{
    Free_SRS_PosResource_r16_TransmissionComb_r16(value.transmissionComb_r16);
    Free_SRS_PosResource_r16_ResourceMapping_r16(value.resourceMapping_r16);
    Free_SRS_PosResource_r16_FreqHopping_r16(value.freqHopping_r16);
    Free_SRS_PosResource_r16_ResourceType_r16(value.resourceType_r16);
    if (value.has_spatialRelationInfoPos_r16) {
        Free_SRS_SpatialRelationInfoPos_r16(value.spatialRelationInfoPos_r16);
    }
    if (value.has_extGroup1) {
        Free_SRS_PosResource_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18：ASN.1 slotOffsetRemainingHops-r18/aperiodic-r18；源文件第 13461 行；SEQUENCE。
// Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18 只读不分配；Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18 可能 malloc（失败时内部已释放并清零）；Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18(Encoder& enc, const SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_slotOffset_r18);
    enc.WriteBit(value.has_startPosition_r18);
    if (value.has_slotOffset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.slotOffset_r18), 1, 32);
    }
    if (value.has_startPosition_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startPosition_r18), 0, 13);
    }
    return enc.Error();
}

ErrorCode Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18(Decoder& dec, SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18& value)
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
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.slotOffset_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.startPosition_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18(SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18& value)
{
    if (value.has_slotOffset_r18) {
    }
    if (value.has_startPosition_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18：ASN.1 slotOffsetRemainingHops-r18/semi-persistent-r18；源文件第 13466 行；SEQUENCE。
// Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18 只读不分配；Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18 可能 malloc（失败时内部已释放并清零）；Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18(Encoder& enc, const SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_periodicityAndOffset_sp_r18);
    enc.WriteBit(value.has_periodicityAndOffset_sp_Ext_r18);
    enc.WriteBit(value.has_startPosition_r18);
    if (value.has_periodicityAndOffset_sp_r18) {
        Encode_SRS_PeriodicityAndOffset_r16(enc, value.periodicityAndOffset_sp_r18);
    }
    if (value.has_periodicityAndOffset_sp_Ext_r18) {
        Encode_SRS_PeriodicityAndOffsetExt_r16(enc, value.periodicityAndOffset_sp_Ext_r18);
    }
    if (value.has_startPosition_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startPosition_r18), 0, 13);
    }
    return enc.Error();
}

ErrorCode Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18(Decoder& dec, SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18& value)
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
        if (Decode_SRS_PeriodicityAndOffset_r16(dec, value.periodicityAndOffset_sp_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SRS_PeriodicityAndOffsetExt_r16(dec, value.periodicityAndOffset_sp_Ext_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.startPosition_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18(SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18& value)
{
    if (value.has_periodicityAndOffset_sp_r18) {
        Free_SRS_PeriodicityAndOffset_r16(value.periodicityAndOffset_sp_r18);
    }
    if (value.has_periodicityAndOffset_sp_Ext_r18) {
        Free_SRS_PeriodicityAndOffsetExt_r16(value.periodicityAndOffset_sp_Ext_r18);
    }
    if (value.has_startPosition_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18：ASN.1 slotOffsetRemainingHops-r18/periodic-r18；源文件第 13472 行；SEQUENCE。
// Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18 只读不分配；Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18 可能 malloc（失败时内部已释放并清零）；Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18(Encoder& enc, const SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_periodicityAndOffset_p_r18);
    enc.WriteBit(value.has_periodicityAndOffset_p_Ext_r18);
    enc.WriteBit(value.has_startPosition_r18);
    if (value.has_periodicityAndOffset_p_r18) {
        Encode_SRS_PeriodicityAndOffset_r16(enc, value.periodicityAndOffset_p_r18);
    }
    if (value.has_periodicityAndOffset_p_Ext_r18) {
        Encode_SRS_PeriodicityAndOffsetExt_r16(enc, value.periodicityAndOffset_p_Ext_r18);
    }
    if (value.has_startPosition_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startPosition_r18), 0, 13);
    }
    return enc.Error();
}

ErrorCode Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18(Decoder& dec, SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18& value)
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
        if (Decode_SRS_PeriodicityAndOffset_r16(dec, value.periodicityAndOffset_p_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SRS_PeriodicityAndOffsetExt_r16(dec, value.periodicityAndOffset_p_Ext_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.startPosition_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18(SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18& value)
{
    if (value.has_periodicityAndOffset_p_r18) {
        Free_SRS_PeriodicityAndOffset_r16(value.periodicityAndOffset_p_r18);
    }
    if (value.has_periodicityAndOffset_p_Ext_r18) {
        Free_SRS_PeriodicityAndOffsetExt_r16(value.periodicityAndOffset_p_Ext_r18);
    }
    if (value.has_startPosition_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18：ASN.1 slotOffsetRemainingHops-r18；源文件第 13460 行；CHOICE。
// Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18 只读不分配；Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18 可能 malloc（失败时内部已释放并清零）；Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18(Encoder& enc, const SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 3) {
        if (choice_index >= 3) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 3));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_aperiodic_r18:
        Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18(enc, value.u.aperiodic_r18);
        break;
    case SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_semi_persistent_r18:
        Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18(enc, value.u.semi_persistent_r18);
        break;
    case SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_periodic_r18:
        Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18(enc, value.u.periodic_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18(Decoder& dec, SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18& value)
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
        value.tag = (SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag)(3 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag)root_index;
    switch (value.tag) {
    case SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_aperiodic_r18: {
        if (Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18(dec, value.u.aperiodic_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_semi_persistent_r18: {
        if (Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18(dec, value.u.semi_persistent_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_periodic_r18: {
        if (Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18(dec, value.u.periodic_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18(SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18& value)
{
    switch (value.tag) {
    case SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_aperiodic_r18:
        Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18(value.u.aperiodic_r18);
        break;
    case SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_semi_persistent_r18:
        Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18(value.u.semi_persistent_r18);
        break;
    case SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_periodic_r18:
        Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18(value.u.periodic_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SlotOffsetForRemainingHops_r18：ASN.1 SlotOffsetForRemainingHops-r18；源文件第 13459 行；SEQUENCE。
// Encode_SlotOffsetForRemainingHops_r18 只读不分配；Decode_SlotOffsetForRemainingHops_r18 可能 malloc（失败时内部已释放并清零）；Free_SlotOffsetForRemainingHops_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotOffsetForRemainingHops_r18(Encoder& enc, const SlotOffsetForRemainingHops_r18& value)
{
    (void)value;
    Encode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18(enc, value.slotOffsetRemainingHops_r18);
    return enc.Error();
}

ErrorCode Decode_SlotOffsetForRemainingHops_r18(Decoder& dec, SlotOffsetForRemainingHops_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18(dec, value.slotOffsetRemainingHops_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotOffsetForRemainingHops_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotOffsetForRemainingHops_r18(SlotOffsetForRemainingHops_r18& value)
{
    Free_SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18(value.slotOffsetRemainingHops_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResourceSetLinkedForAggBW_r18：ASN.1 SRS-PosResourceSetLinkedForAggBW-r18；源文件第 13504 行；SEQUENCE。
// Encode_SRS_PosResourceSetLinkedForAggBW_r18 只读不分配；Decode_SRS_PosResourceSetLinkedForAggBW_r18 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResourceSetLinkedForAggBW_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResourceSetLinkedForAggBW_r18(Encoder& enc, const SRS_PosResourceSetLinkedForAggBW_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_freqInfo_r18);
    enc.WriteBit(value.has_ul_bwp_ID_r18);
    enc.WriteBit(value.has_scs_SpecificCarrier_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_PosResourceSetLinked_r18), 0, 15);
    if (value.has_freqInfo_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.freqInfo_r18), 0, 3279165);
    }
    if (value.has_ul_bwp_ID_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_bwp_ID_r18), 0, 4);
    }
    if (value.has_scs_SpecificCarrier_r18) {
        Encode_SCS_SpecificCarrier(enc, value.scs_SpecificCarrier_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResourceSetLinkedForAggBW_r18(Decoder& dec, SRS_PosResourceSetLinkedForAggBW_r18& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.srs_PosResourceSetLinked_r18 = (SRS_PosResourceSetId_r16)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.freqInfo_r18 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.ul_bwp_ID_r18 = (BWP_Id)tmp_value;
    }
    if (present_2) {
        if (Decode_SCS_SpecificCarrier(dec, value.scs_SpecificCarrier_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResourceSetLinkedForAggBW_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResourceSetLinkedForAggBW_r18(SRS_PosResourceSetLinkedForAggBW_r18& value)
{
    if (value.has_freqInfo_r18) {
    }
    if (value.has_ul_bwp_ID_r18) {
    }
    if (value.has_scs_SpecificCarrier_r18) {
        Free_SCS_SpecificCarrier(value.scs_SpecificCarrier_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC3_r16_PeriodicityAndOffset_r16：ASN.1 periodicityAndOffset-r16；源文件第 13560 行；CHOICE。
// Encode_SSB_MTC3_r16_PeriodicityAndOffset_r16 只读不分配；Decode_SSB_MTC3_r16_PeriodicityAndOffset_r16 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC3_r16_PeriodicityAndOffset_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC3_r16_PeriodicityAndOffset_r16(Encoder& enc, const SSB_MTC3_r16_PeriodicityAndOffset_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 8);
    switch (value.tag) {
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf5_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf5_r16), 0, 4);
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf10_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf10_r16), 0, 9);
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf20_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf20_r16), 0, 19);
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf40_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf40_r16), 0, 39);
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf80_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf80_r16), 0, 79);
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf160_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf160_r16), 0, 159);
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf320_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf320_r16), 0, 319);
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf640_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf640_r16), 0, 639);
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf1280_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf1280_r16), 0, 1279);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_MTC3_r16_PeriodicityAndOffset_r16(Decoder& dec, SSB_MTC3_r16_PeriodicityAndOffset_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 8, root_index)) {
        goto fail;
    }
    value.tag = (SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag)root_index;
    switch (value.tag) {
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf5_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.sf5_r16 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf10_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.sf10_r16 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf20_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.sf20_r16 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf40_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.sf40_r16 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf80_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.sf80_r16 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf160_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.sf160_r16 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf320_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.sf320_r16 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf640_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.sf640_r16 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf1280_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.sf1280_r16 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC3_r16_PeriodicityAndOffset_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC3_r16_PeriodicityAndOffset_r16(SSB_MTC3_r16_PeriodicityAndOffset_r16& value)
{
    switch (value.tag) {
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf5_r16:
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf10_r16:
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf20_r16:
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf40_r16:
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf80_r16:
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf160_r16:
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf320_r16:
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf640_r16:
        break;
    case SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf1280_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC3_r16：ASN.1 SSB-MTC3-r16；源文件第 13559 行；SEQUENCE。
// Encode_SSB_MTC3_r16 只读不分配；Decode_SSB_MTC3_r16 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC3_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC3_r16(Encoder& enc, const SSB_MTC3_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_pci_List_r16);
    enc.WriteBit(value.has_ssb_ToMeasure_r16);
    Encode_SSB_MTC3_r16_PeriodicityAndOffset_r16(enc, value.periodicityAndOffset_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.duration_r16), 0, 4);
    if (value.has_pci_List_r16) {
enc.WriteConstrainedLength(value.pci_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pci_List_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pci_List_r16_items[i]), 0, 1007);
}
    }
    if (value.has_ssb_ToMeasure_r16) {
        Encode_SetupRelease_SSB_ToMeasure(enc, value.ssb_ToMeasure_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_MTC3_r16(Decoder& dec, SSB_MTC3_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_SSB_MTC3_r16_PeriodicityAndOffset_r16(dec, value.periodicityAndOffset_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.duration_r16 = (SSB_MTC3_r16_Duration_r16)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pci_List_r16_count)) { goto fail; }
if (value.pci_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pci_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pci_List_r16_count > 0u) {
    value.pci_List_r16_items = (PhysCellId*)std::malloc((std::size_t)value.pci_List_r16_count * sizeof(PhysCellId));
    if (value.pci_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pci_List_r16_items, 0, (std::size_t)value.pci_List_r16_count * sizeof(PhysCellId));
}
for (std::uint32_t i = 0; i < value.pci_List_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
    value.pci_List_r16_items[i] = (PhysCellId)tmp_value;
}
    }
    if (present_1) {
        if (Decode_SetupRelease_SSB_ToMeasure(dec, value.ssb_ToMeasure_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC3_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC3_r16(SSB_MTC3_r16& value)
{
    Free_SSB_MTC3_r16_PeriodicityAndOffset_r16(value.periodicityAndOffset_r16);
    if (value.has_pci_List_r16) {
        if (value.pci_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pci_List_r16_count; ++i) {
            }
            std::free(value.pci_List_r16_items);
            value.pci_List_r16_items = nullptr;
        }
        value.pci_List_r16_count = 0;
    }
    if (value.has_ssb_ToMeasure_r16) {
        Free_SetupRelease_SSB_ToMeasure(value.ssb_ToMeasure_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC4_r17：ASN.1 SSB-MTC4-r17；源文件第 13576 行；SEQUENCE。
// Encode_SSB_MTC4_r17 只读不分配；Decode_SSB_MTC4_r17 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC4_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC4_r17(Encoder& enc, const SSB_MTC4_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_pci_List_r17);
    if (value.has_pci_List_r17) {
enc.WriteConstrainedLength(value.pci_List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pci_List_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pci_List_r17_items[i]), 0, 1007);
}
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.offset_r17), 0, 159);
    return enc.Error();
}

ErrorCode Decode_SSB_MTC4_r17(Decoder& dec, SSB_MTC4_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pci_List_r17_count)) { goto fail; }
if (value.pci_List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pci_List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pci_List_r17_count > 0u) {
    value.pci_List_r17_items = (PhysCellId*)std::malloc((std::size_t)value.pci_List_r17_count * sizeof(PhysCellId));
    if (value.pci_List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pci_List_r17_items, 0, (std::size_t)value.pci_List_r17_count * sizeof(PhysCellId));
}
for (std::uint32_t i = 0; i < value.pci_List_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
    value.pci_List_r17_items[i] = (PhysCellId)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.offset_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC4_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC4_r17(SSB_MTC4_r17& value)
{
    if (value.has_pci_List_r17) {
        if (value.pci_List_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pci_List_r17_count; ++i) {
            }
            std::free(value.pci_List_r17_items);
            value.pci_List_r17_items = nullptr;
        }
        value.pci_List_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17：ASN.1 ssb-PositionsInBurst-r17；源文件第 13585 行；CHOICE。
// Encode_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17 只读不分配；Decode_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17(Encoder& enc, const SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_shortBitmap:
        enc.WriteFixedBitString(value.u.shortBitmap.bytes, value.u.shortBitmap.bitLength, 4, 4);
        break;
    case SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_mediumBitmap:
        enc.WriteFixedBitString(value.u.mediumBitmap.bytes, value.u.mediumBitmap.bitLength, 8, 8);
        break;
    case SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_longBitmap:
        enc.WriteFixedBitString(value.u.longBitmap.bytes, value.u.longBitmap.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17(Decoder& dec, SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag)root_index;
    switch (value.tag) {
    case SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_shortBitmap: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.shortBitmap.bytes = string_bytes;
        value.u.shortBitmap.bitLength = string_length;
        break;
    }
    case SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_mediumBitmap: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.mediumBitmap.bytes = string_bytes;
        value.u.mediumBitmap.bitLength = string_length;
        break;
    }
    case SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_longBitmap: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.longBitmap.bytes = string_bytes;
        value.u.longBitmap.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17(SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17& value)
{
    switch (value.tag) {
    case SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_shortBitmap:
        std::free(value.u.shortBitmap.bytes);
        break;
    case SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_mediumBitmap:
        std::free(value.u.mediumBitmap.bytes);
        break;
    case SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_longBitmap:
        std::free(value.u.longBitmap.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC_AdditionalPCI_r17：ASN.1 SSB-MTC-AdditionalPCI-r17；源文件第 13581 行；SEQUENCE。
// Encode_SSB_MTC_AdditionalPCI_r17 只读不分配；Decode_SSB_MTC_AdditionalPCI_r17 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC_AdditionalPCI_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC_AdditionalPCI_r17(Encoder& enc, const SSB_MTC_AdditionalPCI_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.additionalPCIIndex_r17), 1, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.additionalPCI_r17), 0, 1007);
    enc.WriteConstrainedInteger((std::int64_t)(value.periodicity_r17), 0, 7);
    Encode_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17(enc, value.ssb_PositionsInBurst_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.ss_PBCH_BlockPower_r17), -60, 50);
    return enc.Error();
}

ErrorCode Decode_SSB_MTC_AdditionalPCI_r17(Decoder& dec, SSB_MTC_AdditionalPCI_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.additionalPCIIndex_r17 = (AdditionalPCIIndex_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.additionalPCI_r17 = (PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.periodicity_r17 = (SSB_MTC_AdditionalPCI_r17_Periodicity_r17)tmp_value;
    }
    {
        if (Decode_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17(dec, value.ssb_PositionsInBurst_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-60, 50, tmp_value)) { goto fail; }
        value.ss_PBCH_BlockPower_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC_AdditionalPCI_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC_AdditionalPCI_r17(SSB_MTC_AdditionalPCI_r17& value)
{
    Free_SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17(value.ssb_PositionsInBurst_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TAG：ASN.1 TAG；源文件第 13632 行；SEQUENCE。
// Encode_TAG 只读不分配；Decode_TAG 可能 malloc（失败时内部已释放并清零）；Free_TAG 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TAG(Encoder& enc, const TAG& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.tag_Id), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeAlignmentTimer), 0, 7);
    return enc.Error();
}

ErrorCode Decode_TAG(Decoder& dec, TAG& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.tag_Id = (TAG_Id)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.timeAlignmentTimer = (TimeAlignmentTimer)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TAG(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TAG(TAG& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TCI_State_ExtGroup1：ASN.1 TCI_State_ExtGroup1；源文件第 13672 行；扩展添加组 [[ ]]。
// Encode_TCI_State_ExtGroup1 只读不分配；Decode_TCI_State_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_TCI_State_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TCI_State_ExtGroup1(Encoder& enc, const TCI_State_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalPCI_r17);
    enc.WriteBit(value.has_pathlossReferenceRS_Id_r17);
    enc.WriteBit(value.has_ul_powerControl_r17);
    if (value.has_additionalPCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalPCI_r17), 1, 7);
    }
    if (value.has_pathlossReferenceRS_Id_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceRS_Id_r17), 0, 63);
    }
    if (value.has_ul_powerControl_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_powerControl_r17), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_TCI_State_ExtGroup1(Decoder& dec, TCI_State_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.additionalPCI_r17 = (AdditionalPCIIndex_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.pathlossReferenceRS_Id_r17 = (PathlossReferenceRS_Id_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.ul_powerControl_r17 = (Uplink_powerControlId_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TCI_State_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TCI_State_ExtGroup1(TCI_State_ExtGroup1& value)
{
    if (value.has_additionalPCI_r17) {
    }
    if (value.has_pathlossReferenceRS_Id_r17) {
    }
    if (value.has_ul_powerControl_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TCI_State_ExtGroup2：ASN.1 TCI_State_ExtGroup2；源文件第 13677 行；扩展添加组 [[ ]]。
// Encode_TCI_State_ExtGroup2 只读不分配；Decode_TCI_State_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_TCI_State_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TCI_State_ExtGroup2(Encoder& enc, const TCI_State_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_tag_Id_ptr_r18);
    if (value.has_tag_Id_ptr_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tag_Id_ptr_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_TCI_State_ExtGroup2(Decoder& dec, TCI_State_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.tag_Id_ptr_r18 = (TCI_State_ExtGroup2_Tag_Id_ptr_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TCI_State_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TCI_State_ExtGroup2(TCI_State_ExtGroup2& value)
{
    if (value.has_tag_Id_ptr_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// QCL_Info_ReferenceSignal：ASN.1 referenceSignal；源文件第 13685 行；CHOICE。
// Encode_QCL_Info_ReferenceSignal 只读不分配；Decode_QCL_Info_ReferenceSignal 可能 malloc（失败时内部已释放并清零）；Free_QCL_Info_ReferenceSignal 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_QCL_Info_ReferenceSignal(Encoder& enc, const QCL_Info_ReferenceSignal& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case QCL_Info_ReferenceSignal_Tag_csi_rs:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_rs), 0, 191);
        break;
    case QCL_Info_ReferenceSignal_Tag_ssb:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb), 0, 63);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_QCL_Info_ReferenceSignal(Decoder& dec, QCL_Info_ReferenceSignal& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (QCL_Info_ReferenceSignal_Tag)root_index;
    switch (value.tag) {
    case QCL_Info_ReferenceSignal_Tag_csi_rs: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_rs = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    case QCL_Info_ReferenceSignal_Tag_ssb: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb = (SSB_Index)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_QCL_Info_ReferenceSignal(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QCL_Info_ReferenceSignal(QCL_Info_ReferenceSignal& value)
{
    switch (value.tag) {
    case QCL_Info_ReferenceSignal_Tag_csi_rs:
        break;
    case QCL_Info_ReferenceSignal_Tag_ssb:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// QCL_Info：ASN.1 QCL-Info；源文件第 13682 行；SEQUENCE。
// Encode_QCL_Info 只读不分配；Decode_QCL_Info 可能 malloc（失败时内部已释放并清零）；Free_QCL_Info 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_QCL_Info(Encoder& enc, const QCL_Info& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_cell);
    enc.WriteBit(value.has_bwp_Id);
    if (value.has_cell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cell), 0, 31);
    }
    if (value.has_bwp_Id) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bwp_Id), 0, 4);
    }
    Encode_QCL_Info_ReferenceSignal(enc, value.referenceSignal);
    enc.WriteConstrainedInteger((std::int64_t)(value.qcl_Type), 0, 3);
    return enc.Error();
}

ErrorCode Decode_QCL_Info(Decoder& dec, QCL_Info& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.cell = (ServCellIndex)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.bwp_Id = (BWP_Id)tmp_value;
    }
    {
        if (Decode_QCL_Info_ReferenceSignal(dec, value.referenceSignal) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.qcl_Type = (QCL_Info_Qcl_Type)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_QCL_Info(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QCL_Info(QCL_Info& value)
{
    if (value.has_cell) {
    }
    if (value.has_bwp_Id) {
    }
    Free_QCL_Info_ReferenceSignal(value.referenceSignal);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TCI_State：ASN.1 TCI-State；源文件第 13667 行；SEQUENCE。
// Encode_TCI_State 只读不分配；Decode_TCI_State 可能 malloc（失败时内部已释放并清零）；Free_TCI_State 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TCI_State(Encoder& enc, const TCI_State& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_qcl_Type2);
    enc.WriteConstrainedInteger((std::int64_t)(value.tci_StateId), 0, 127);
    Encode_QCL_Info(enc, value.qcl_Type1);
    if (value.has_qcl_Type2) {
        Encode_QCL_Info(enc, value.qcl_Type2);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_TCI_State_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_TCI_State_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_TCI_State(Decoder& dec, TCI_State& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.tci_StateId = (TCI_StateId)tmp_value;
    }
    {
        if (Decode_QCL_Info(dec, value.qcl_Type1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_QCL_Info(dec, value.qcl_Type2) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_TCI_State_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_TCI_State_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_TCI_State(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TCI_State(TCI_State& value)
{
    Free_QCL_Info(value.qcl_Type1);
    if (value.has_qcl_Type2) {
        Free_QCL_Info(value.qcl_Type2);
    }
    if (value.has_extGroup1) {
        Free_TCI_State_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_TCI_State_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TCI_UL_State_r17_ExtGroup1：ASN.1 TCI_UL_State_r17_ExtGroup1；源文件第 13714 行；扩展添加组 [[ ]]。
// Encode_TCI_UL_State_r17_ExtGroup1 只读不分配；Decode_TCI_UL_State_r17_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_TCI_UL_State_r17_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TCI_UL_State_r17_ExtGroup1(Encoder& enc, const TCI_UL_State_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_tag_Id_ptr_r18);
    if (value.has_tag_Id_ptr_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tag_Id_ptr_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_TCI_UL_State_r17_ExtGroup1(Decoder& dec, TCI_UL_State_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.tag_Id_ptr_r18 = (TCI_UL_State_r17_ExtGroup1_Tag_Id_ptr_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TCI_UL_State_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TCI_UL_State_r17_ExtGroup1(TCI_UL_State_r17_ExtGroup1& value)
{
    if (value.has_tag_Id_ptr_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TCI_UL_State_r17_ReferenceSignal_r17：ASN.1 referenceSignal-r17；源文件第 13705 行；CHOICE。
// Encode_TCI_UL_State_r17_ReferenceSignal_r17 只读不分配；Decode_TCI_UL_State_r17_ReferenceSignal_r17 可能 malloc（失败时内部已释放并清零）；Free_TCI_UL_State_r17_ReferenceSignal_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TCI_UL_State_r17_ReferenceSignal_r17(Encoder& enc, const TCI_UL_State_r17_ReferenceSignal_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case TCI_UL_State_r17_ReferenceSignal_r17_Tag_ssb_Index_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index_r17), 0, 63);
        break;
    case TCI_UL_State_r17_ReferenceSignal_r17_Tag_csi_RS_Index_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index_r17), 0, 191);
        break;
    case TCI_UL_State_r17_ReferenceSignal_r17_Tag_srs_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.srs_r17), 0, 63);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_TCI_UL_State_r17_ReferenceSignal_r17(Decoder& dec, TCI_UL_State_r17_ReferenceSignal_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (TCI_UL_State_r17_ReferenceSignal_r17_Tag)root_index;
    switch (value.tag) {
    case TCI_UL_State_r17_ReferenceSignal_r17_Tag_ssb_Index_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index_r17 = (SSB_Index)tmp_value;
        break;
    }
    case TCI_UL_State_r17_ReferenceSignal_r17_Tag_csi_RS_Index_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index_r17 = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    case TCI_UL_State_r17_ReferenceSignal_r17_Tag_srs_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.srs_r17 = (SRS_ResourceId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TCI_UL_State_r17_ReferenceSignal_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TCI_UL_State_r17_ReferenceSignal_r17(TCI_UL_State_r17_ReferenceSignal_r17& value)
{
    switch (value.tag) {
    case TCI_UL_State_r17_ReferenceSignal_r17_Tag_ssb_Index_r17:
        break;
    case TCI_UL_State_r17_ReferenceSignal_r17_Tag_csi_RS_Index_r17:
        break;
    case TCI_UL_State_r17_ReferenceSignal_r17_Tag_srs_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TCI_UL_State_r17：ASN.1 TCI-UL-State-r17；源文件第 13701 行；SEQUENCE。
// Encode_TCI_UL_State_r17 只读不分配；Decode_TCI_UL_State_r17 可能 malloc（失败时内部已释放并清零）；Free_TCI_UL_State_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TCI_UL_State_r17(Encoder& enc, const TCI_UL_State_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_servingCellId_r17);
    enc.WriteBit(value.has_bwp_Id_r17);
    enc.WriteBit(value.has_additionalPCI_r17);
    enc.WriteBit(value.has_ul_powerControl_r17);
    enc.WriteBit(value.has_pathlossReferenceRS_Id_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.tci_UL_StateId_r17), 0, 63);
    if (value.has_servingCellId_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId_r17), 0, 31);
    }
    if (value.has_bwp_Id_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bwp_Id_r17), 0, 4);
    }
    Encode_TCI_UL_State_r17_ReferenceSignal_r17(enc, value.referenceSignal_r17);
    if (value.has_additionalPCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalPCI_r17), 1, 7);
    }
    if (value.has_ul_powerControl_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_powerControl_r17), 1, 64);
    }
    if (value.has_pathlossReferenceRS_Id_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceRS_Id_r17), 0, 63);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_TCI_UL_State_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_TCI_UL_State_r17(Decoder& dec, TCI_UL_State_r17& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.tci_UL_StateId_r17 = (TCI_UL_StateId_r17)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId_r17 = (ServCellIndex)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.bwp_Id_r17 = (BWP_Id)tmp_value;
    }
    {
        if (Decode_TCI_UL_State_r17_ReferenceSignal_r17(dec, value.referenceSignal_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.additionalPCI_r17 = (AdditionalPCIIndex_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.ul_powerControl_r17 = (Uplink_powerControlId_r17)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.pathlossReferenceRS_Id_r17 = (PathlossReferenceRS_Id_r17)tmp_value;
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
    if (Decode_TCI_UL_State_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_TCI_UL_State_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TCI_UL_State_r17(TCI_UL_State_r17& value)
{
    if (value.has_servingCellId_r17) {
    }
    if (value.has_bwp_Id_r17) {
    }
    Free_TCI_UL_State_r17_ReferenceSignal_r17(value.referenceSignal_r17);
    if (value.has_additionalPCI_r17) {
    }
    if (value.has_ul_powerControl_r17) {
    }
    if (value.has_pathlossReferenceRS_Id_r17) {
    }
    if (value.has_extGroup1) {
        Free_TCI_UL_State_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TDD_UL_DL_SlotConfig_Symbols_Explicit：ASN.1 symbols/explicit；源文件第 13766 行；SEQUENCE。
// Encode_TDD_UL_DL_SlotConfig_Symbols_Explicit 只读不分配；Decode_TDD_UL_DL_SlotConfig_Symbols_Explicit 可能 malloc（失败时内部已释放并清零）；Free_TDD_UL_DL_SlotConfig_Symbols_Explicit 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TDD_UL_DL_SlotConfig_Symbols_Explicit(Encoder& enc, const TDD_UL_DL_SlotConfig_Symbols_Explicit& value)
{
    (void)value;
    enc.WriteBit(value.has_nrofDownlinkSymbols);
    enc.WriteBit(value.has_nrofUplinkSymbols);
    if (value.has_nrofDownlinkSymbols) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofDownlinkSymbols), 1, 13);
    }
    if (value.has_nrofUplinkSymbols) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofUplinkSymbols), 1, 13);
    }
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_SlotConfig_Symbols_Explicit(Decoder& dec, TDD_UL_DL_SlotConfig_Symbols_Explicit& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 13, tmp_value)) { goto fail; }
        value.nrofDownlinkSymbols = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 13, tmp_value)) { goto fail; }
        value.nrofUplinkSymbols = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_SlotConfig_Symbols_Explicit(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_SlotConfig_Symbols_Explicit(TDD_UL_DL_SlotConfig_Symbols_Explicit& value)
{
    if (value.has_nrofDownlinkSymbols) {
    }
    if (value.has_nrofUplinkSymbols) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TDD_UL_DL_SlotConfig_Symbols：ASN.1 symbols；源文件第 13763 行；CHOICE。
// Encode_TDD_UL_DL_SlotConfig_Symbols 只读不分配；Decode_TDD_UL_DL_SlotConfig_Symbols 可能 malloc（失败时内部已释放并清零）；Free_TDD_UL_DL_SlotConfig_Symbols 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TDD_UL_DL_SlotConfig_Symbols(Encoder& enc, const TDD_UL_DL_SlotConfig_Symbols& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case TDD_UL_DL_SlotConfig_Symbols_Tag_allDownlink:
        (void)0;
        break;
    case TDD_UL_DL_SlotConfig_Symbols_Tag_allUplink:
        (void)0;
        break;
    case TDD_UL_DL_SlotConfig_Symbols_Tag_explicit_:
        Encode_TDD_UL_DL_SlotConfig_Symbols_Explicit(enc, value.u.explicit_);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_SlotConfig_Symbols(Decoder& dec, TDD_UL_DL_SlotConfig_Symbols& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (TDD_UL_DL_SlotConfig_Symbols_Tag)root_index;
    switch (value.tag) {
    case TDD_UL_DL_SlotConfig_Symbols_Tag_allDownlink: {
        (void)0;
        break;
    }
    case TDD_UL_DL_SlotConfig_Symbols_Tag_allUplink: {
        (void)0;
        break;
    }
    case TDD_UL_DL_SlotConfig_Symbols_Tag_explicit_: {
        if (Decode_TDD_UL_DL_SlotConfig_Symbols_Explicit(dec, value.u.explicit_) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_SlotConfig_Symbols(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_SlotConfig_Symbols(TDD_UL_DL_SlotConfig_Symbols& value)
{
    switch (value.tag) {
    case TDD_UL_DL_SlotConfig_Symbols_Tag_allDownlink:
        break;
    case TDD_UL_DL_SlotConfig_Symbols_Tag_allUplink:
        break;
    case TDD_UL_DL_SlotConfig_Symbols_Tag_explicit_:
        Free_TDD_UL_DL_SlotConfig_Symbols_Explicit(value.u.explicit_);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TDD_UL_DL_SlotConfig：ASN.1 TDD-UL-DL-SlotConfig；源文件第 13761 行；SEQUENCE。
// Encode_TDD_UL_DL_SlotConfig 只读不分配；Decode_TDD_UL_DL_SlotConfig 可能 malloc（失败时内部已释放并清零）；Free_TDD_UL_DL_SlotConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TDD_UL_DL_SlotConfig(Encoder& enc, const TDD_UL_DL_SlotConfig& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.slotIndex), 0, 319);
    Encode_TDD_UL_DL_SlotConfig_Symbols(enc, value.symbols);
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_SlotConfig(Decoder& dec, TDD_UL_DL_SlotConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.slotIndex = (TDD_UL_DL_SlotIndex)tmp_value;
    }
    {
        if (Decode_TDD_UL_DL_SlotConfig_Symbols(dec, value.symbols) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_SlotConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_SlotConfig(TDD_UL_DL_SlotConfig& value)
{
    Free_TDD_UL_DL_SlotConfig_Symbols(value.symbols);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16：ASN.1 symbols-IAB-MT-r16/explicit-r16；源文件第 13778 行；SEQUENCE。
// Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16 只读不分配；Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16 可能 malloc（失败时内部已释放并清零）；Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16(Encoder& enc, const TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_nrofDownlinkSymbols_r16);
    enc.WriteBit(value.has_nrofUplinkSymbols_r16);
    if (value.has_nrofDownlinkSymbols_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofDownlinkSymbols_r16), 1, 13);
    }
    if (value.has_nrofUplinkSymbols_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofUplinkSymbols_r16), 1, 13);
    }
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16(Decoder& dec, TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 13, tmp_value)) { goto fail; }
        value.nrofDownlinkSymbols_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 13, tmp_value)) { goto fail; }
        value.nrofUplinkSymbols_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16(TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16& value)
{
    if (value.has_nrofDownlinkSymbols_r16) {
    }
    if (value.has_nrofUplinkSymbols_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16：ASN.1 symbols-IAB-MT-r16/explicit-IAB-MT-r16；源文件第 13782 行；SEQUENCE。
// Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16 只读不分配；Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16 可能 malloc（失败时内部已释放并清零）；Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16(Encoder& enc, const TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_nrofDownlinkSymbols_r16);
    enc.WriteBit(value.has_nrofUplinkSymbols_r16);
    if (value.has_nrofDownlinkSymbols_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofDownlinkSymbols_r16), 1, 13);
    }
    if (value.has_nrofUplinkSymbols_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofUplinkSymbols_r16), 1, 13);
    }
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16(Decoder& dec, TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 13, tmp_value)) { goto fail; }
        value.nrofDownlinkSymbols_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 13, tmp_value)) { goto fail; }
        value.nrofUplinkSymbols_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16(TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16& value)
{
    if (value.has_nrofDownlinkSymbols_r16) {
    }
    if (value.has_nrofUplinkSymbols_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16：ASN.1 symbols-IAB-MT-r16；源文件第 13775 行；CHOICE。
// Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16 只读不分配；Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16 可能 malloc（失败时内部已释放并清零）；Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16(Encoder& enc, const TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_allDownlink_r16:
        (void)0;
        break;
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_allUplink_r16:
        (void)0;
        break;
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_explicit_r16:
        Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16(enc, value.u.explicit_r16);
        break;
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_explicit_IAB_MT_r16:
        Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16(enc, value.u.explicit_IAB_MT_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16(Decoder& dec, TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag)root_index;
    switch (value.tag) {
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_allDownlink_r16: {
        (void)0;
        break;
    }
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_allUplink_r16: {
        (void)0;
        break;
    }
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_explicit_r16: {
        if (Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16(dec, value.u.explicit_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_explicit_IAB_MT_r16: {
        if (Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16(dec, value.u.explicit_IAB_MT_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16(TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16& value)
{
    switch (value.tag) {
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_allDownlink_r16:
        break;
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_allUplink_r16:
        break;
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_explicit_r16:
        Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16(value.u.explicit_r16);
        break;
    case TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_explicit_IAB_MT_r16:
        Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16(value.u.explicit_IAB_MT_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TDD_UL_DL_SlotConfig_IAB_MT_r16：ASN.1 TDD-UL-DL-SlotConfig-IAB-MT-r16；源文件第 13773 行；SEQUENCE。
// Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16 只读不分配；Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16 可能 malloc（失败时内部已释放并清零）；Free_TDD_UL_DL_SlotConfig_IAB_MT_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16(Encoder& enc, const TDD_UL_DL_SlotConfig_IAB_MT_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.slotIndex_r16), 0, 319);
    Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16(enc, value.symbols_IAB_MT_r16);
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16(Decoder& dec, TDD_UL_DL_SlotConfig_IAB_MT_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.slotIndex_r16 = (TDD_UL_DL_SlotIndex)tmp_value;
    }
    {
        if (Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16(dec, value.symbols_IAB_MT_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_SlotConfig_IAB_MT_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_SlotConfig_IAB_MT_r16(TDD_UL_DL_SlotConfig_IAB_MT_r16& value)
{
    Free_TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16(value.symbols_IAB_MT_r16);
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
